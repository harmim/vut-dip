// Author: Dominik Harmim <iharmim@fit.vut.cz>

#include <mutex>
#include <shared_mutex>


class Test
{
private:
	std::mutex mutex;
	std::timed_mutex timed_mutex;
	std::recursive_mutex recursive_mutex;
	std::recursive_timed_mutex recursive_timed_mutex;
	std::shared_mutex shared_mutex;
	std::shared_timed_mutex shared_timed_mutex;


	void f1() {}
	void f2() {}
	void x() {}
	void y() {}


public:
	void test_mutex()
	{
		x();
		mutex.lock(); // {f1, f2}
		f1(); f2();
		mutex.unlock();
		y();
	}


	void test_timed_mutex()
	{
		x();
		timed_mutex.lock(); // {f1, f2}
		f1(); f2();
		timed_mutex.unlock();
		y();
	}


	void test_recursive_mutex()
	{
		x();
		recursive_mutex.lock(); // {f1, f2}
		f1(); f2();
		recursive_mutex.unlock();
		y();
	}


	void test_recursive_timed_mutex()
	{
		x();
		recursive_timed_mutex.lock(); // {f1, f2}
		f1(); f2();
		recursive_timed_mutex.unlock();
		y();
	}


	void test_shared_mutex()
	{
		x();
		shared_mutex.lock(); // {f1, f2}
		f1(); f2();
		shared_mutex.unlock();
		y();
	}


	void test_shared_mutex_shared_lock()
	{
		x();
		shared_mutex.lock_shared(); // {f1, f2}
		f1(); f2();
		shared_mutex.unlock_shared();
		y();
	}


	void test_shared_timed_mutex()
	{
		x();
		shared_timed_mutex.lock(); // {f1, f2}
		f1(); f2();
		shared_timed_mutex.unlock();
		y();
	}


	void test_shared_mutex_timed_shared_lock()
	{
		x();
		shared_timed_mutex.lock_shared(); // {f1, f2}
		f1(); f2();
		shared_timed_mutex.unlock_shared();
		y();
	}
};


int main()
{
	Test test;

	test.test_mutex();
	test.test_timed_mutex();
	test.test_recursive_mutex();
	test.test_recursive_timed_mutex();
	test.test_shared_mutex();
	test.test_shared_mutex_shared_lock();
	test.test_shared_timed_mutex();
	test.test_shared_mutex_timed_shared_lock();

	return 0;
}
