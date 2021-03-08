#include <mutex>


class Test
{
private:
	std::recursive_mutex mutex;


	void f1() {}
	void f2() {}
	void f3() {}
	void x() {}
	void y() {}


public:
	int a;


	void test1()
	{
		x();

		mutex.lock(); // {f1, f2}
		mutex.lock();
		f1(); f2();
		mutex.unlock();
		mutex.unlock();

		y();
	}


	void test2()
	{
		x();

		mutex.lock(); // {f2, f3}
		mutex.lock();
		f2();
		mutex.unlock();
		f3();
		mutex.unlock();

		y();
	}


	void test3()
	{
		while (a) mutex.lock(); // {f1, f2}; {f1, f2, f3}
		f1(); f2(); // (f1, f2)
		while (a) mutex.unlock();
		f3(); // (f2, f3)
	}


	void test_violations()
	{
		mutex.lock(); // {f1, f2}
		mutex.lock();
		mutex.unlock();
		f1(); f2();
		mutex.unlock();

		x();

		f1(); f3(); // (f1, f3)

		y();

		while (a) mutex.lock(); // {f2, f3}; {f1, f2, f3}
		f2(); f3(); // (f2, f3)
		while (a) mutex.unlock();

		f1(); f2(); // (f1, f2); (f3, f1)
	}
};


int main()
{
	Test test;

	test.test1();
	test.test2();
	test.test3();
	test.test_violations();

	return 0;
}
