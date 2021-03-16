#include <mutex>
#include <shared_mutex>


class Test
{
private:
	std::mutex mutex, mutex2;
	std::shared_mutex shared_mutex;
	std::recursive_mutex recursive_mutex;


	void f1() {}
	void f2() {}
	void f3() {}
	void x() {}
	void y() {}


public:
	void test_std_lock_with_mutexs()
	{
		x();

		std::lock(mutex, mutex2); // {f1, f2, f3}; {f1, f2}
		f1(); f2();
		mutex2.unlock();
		f3();
		mutex.unlock();

		y();
	}


	void test_std_lock_with_guards()
	{
		x();

		{
			std::unique_lock<std::mutex> guard(mutex, std::defer_lock);
			{
				std::unique_lock<std::mutex> guard2(mutex2, std::defer_lock);
				std::lock(guard, guard2); // {f1, f2, f3}; {f1, f2}
				f1(); f2();
			}
			f3();
		}

		y();
	}


	void test_lock_guard()
	{
		x();

		{
			std::lock_guard<std::mutex> guard(mutex); // {f1, f2}
			f1(); f2();
		}

		y();
	}


	void test_lock_guard_adopt_lock()
	{
		x();

		{
			mutex.lock(); // {f1, f2, f3}
			f1();
			std::lock_guard<std::mutex> guard(mutex, std::adopt_lock);
			f2(); f3();
		}

		y();
	}


	void test_lock_guard_reentrant_1()
	{
		x();

		recursive_mutex.lock(); // {f1, f2, f3}
		{
			{
				std::lock_guard<std::recursive_mutex> guard(recursive_mutex);
				f1(); f2();
			}
			f3();
		}
		recursive_mutex.unlock();

		y();
	}


	void test_lock_guard_reentrant_2()
	{
		x();

		{
			std::lock_guard<std::recursive_mutex> guard(recursive_mutex); // {f1, f2, f3}
			recursive_mutex.lock();
			f1(); f2();
			recursive_mutex.unlock();
			f3();
		}

		y();
	}


	void test_lock_guard_reentrant_3()
	{
		x();

		{
			std::lock_guard<std::recursive_mutex> guard(recursive_mutex); // {f1, f2, f3}
			f1();
			{
				std::lock_guard<std::recursive_mutex> guard2(recursive_mutex);
				f2();
			}
			f3();
		}

		y();
	}


	void test_unique_lock()
	{
		x();

		{
			std::unique_lock<std::mutex> guard(mutex); // {f1, f2}
			f1(); f2();
		}

		y();
	}


	void test_unique_lock_lock_unlock()
	{
		x();

		std::unique_lock<std::mutex> guard(mutex, std::defer_lock);
		f1();
		guard.lock(); // {f2, f3}
		{
			f2(); f3();
		}
		guard.unlock();

		y();
	}


	void test_unique_lock_release()
	{
		x();

		{
			std::unique_lock<std::mutex> guard(mutex); // {f1, f2, f3}
			f1(); f2();
			guard.release();
			guard.unlock();
		}
		f3();
		mutex.unlock();

		y();
	}


	void test_unique_lock_try_to_lock()
	{
		x();

		{
			std::unique_lock<std::mutex> guard(mutex, std::try_to_lock);
			f1(); f2();
		}

		y();
	}


	void test_unique_lock_adopt_lock()
	{
		x();

		{
			mutex.lock(); // {f1, f2, f3}
			f1();
			std::unique_lock<std::mutex> guard(mutex, std::adopt_lock);
			f2(); f3();
		}

		y();
	}


	void test_unique_lock_defer_lock()
	{
		x();

		{
			std::unique_lock<std::mutex> guard(mutex, std::defer_lock);
			f1();
			guard.lock(); // {f2, f3}
			f2(); f3();
		}

		y();
	}


	void test_unique_lock_lock_unlock_mutex()
	{
		x();

		std::unique_lock<std::mutex> guard(mutex, std::defer_lock);
		f1();
		mutex.lock(); // {f2, f3}
		{
			f2(); f3();
		}
		mutex.unlock();

		y();
	}


	void test_unique_lock_multiple_guards()
	{
		x();

		{
			std::unique_lock<std::mutex> guard(mutex, std::defer_lock);
			f1();
			{
				std::unique_lock<std::mutex> guard2(mutex); // {f2, f3}
				f2();
				guard2.release();
			}
			f3();
		}

		y();
	}


	void test_shared_lock()
	{
		x();

		{
			std::shared_lock<std::shared_mutex> guard(shared_mutex); // {f1, f2}
			f1(); f2();
		}

		y();
	}


	void test_shared_lock_lock_unlock()
	{
		x();

		std::shared_lock<std::shared_mutex> guard(shared_mutex, std::defer_lock);
		f1();
		guard.lock(); // {f2, f3}
		{
			f2(); f3();
		}
		guard.unlock();

		y();
	}


	void test_shared_lock_release()
	{
		x();

		{
			std::shared_lock<std::shared_mutex> guard(shared_mutex); // {f1, f2, f3}
			f1(); f2();
			guard.release();
			guard.unlock();
		}
		f3();
		shared_mutex.unlock();

		y();
	}


	void test_shared_lock_try_to_lock()
	{
		x();

		{
			std::shared_lock<std::shared_mutex> guard(shared_mutex, std::try_to_lock);
			f1(); f2();
		}

		y();
	}


	void test_shared_lock_adopt_lock()
	{
		x();

		{
			shared_mutex.lock(); // {f1, f2, f3}
			f1();
			std::shared_lock<std::shared_mutex> guard(shared_mutex, std::adopt_lock);
			f2(); f3();
		}

		y();
	}


	void test_shared_lock_defer_lock()
	{
		x();

		{
			std::shared_lock<std::shared_mutex> guard(shared_mutex, std::defer_lock);
			f1();
			guard.lock(); // {f2, f3}
			f2(); f3();
		}

		y();
	}


	void test_scoped_lock()
	{
		x();

		{
			std::scoped_lock guard(mutex); // {f1, f2}
			f1(); f2();
		}

		y();
	}


	void test_scoped_lock_adopt_lock()
	{
		x();

		{
			mutex.lock(); // {f1, f2, f3}
			f1();
			std::scoped_lock guard(std::adopt_lock, mutex);
			f2(); f3();
		}

		y();
	}


	void test_scoped_lock_multiple_locks()
	{
		x();

		{
			std::scoped_lock guard(mutex, mutex2); // {f1, f2, f3}; {f1, f2}
			f1(); f2();
			mutex2.unlock();
			f3();
		}

		y();
	}
};


int main()
{
	Test test;

	test.test_std_lock_with_mutexs();
	test.test_std_lock_with_guards();
	test.test_lock_guard();
	test.test_lock_guard_adopt_lock();
	test.test_lock_guard_reentrant_1();
	test.test_lock_guard_reentrant_2();
	test.test_lock_guard_reentrant_3();
	test.test_unique_lock();
	test.test_unique_lock_lock_unlock();
	test.test_unique_lock_release();
	test.test_unique_lock_try_to_lock();
	test.test_unique_lock_adopt_lock();
	test.test_unique_lock_defer_lock();
	test.test_unique_lock_lock_unlock_mutex();
	test.test_unique_lock_multiple_guards();
	test.test_shared_lock();
	test.test_shared_lock_lock_unlock();
	test.test_shared_lock_release();
	test.test_shared_lock_try_to_lock();
	test.test_shared_lock_adopt_lock();
	test.test_shared_lock_defer_lock();
	test.test_scoped_lock();
	test.test_scoped_lock_adopt_lock();
	test.test_scoped_lock_multiple_locks();

	return 0;
}
