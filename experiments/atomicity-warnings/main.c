// Author: Dominik Harmim <iharmim@fit.vut.cz>

#include <stdlib.h>
#include <pthread.h>


pthread_mutex_t mutex;


void f1(void) {}
void f2(void) {}
void x(void) {}
void y(void) {}


void atomic_sequences(void)
{
	x();
	pthread_mutex_lock(&mutex); // {f1, f2}
	f1(); f2();
	pthread_mutex_unlock(&mutex);
	y();
}


void test_violation(void)
{
	f1(); f2(); // (f1, f2)
}


void test_violation_not_called_from_main(void)
{
	f1(); f2(); // (f1, f2)
}


void test_warning_1(void)
{
	f1(); f2(); // warning (f1, f2)
}


void test_warning_called_from_main(void)
{
	pthread_mutex_lock(&mutex); // {f1, f2, test_warning_1}
	test_warning_1();
	pthread_mutex_unlock(&mutex);
}


void test_warning_2(void)
{
	f1(); f2(); // warning (f1, f2)
}


void test_warning_not_called_from_main(void)
{
	pthread_mutex_lock(&mutex); // {f1, f2, test_warning_2}
	test_warning_2();
	pthread_mutex_unlock(&mutex);
}


void test_warning_3(void)
{
	f1(); f2(); // warning (f1, f2)
}


void test_warning_multiple_calls_1(void)
{
	pthread_mutex_lock(&mutex); // {f1, f2, test_warning_3}
	test_warning_3();
	pthread_mutex_unlock(&mutex);
}


void test_warning_multiple_calls_2(void)
{
	pthread_mutex_lock(&mutex); // {f1, f2, test_warning_3}
	test_warning_3();
	pthread_mutex_unlock(&mutex);
}


void test_warning_4(void)
{
	f1(); f2(); // warning (f1, f2)
}


void test_warning_deeper_1(void)
{
	test_warning_4(); // warning (test_warning_4, f1)
}


void test_warning_deeper_2(void)
{
	f1(); f2(); // warning (f1, f2)

	// warning (f2, test_warning_deeper_1)
	// warning (test_warning_deeper_1, test_warning_4)
	test_warning_deeper_1();
}


void test_warning_deeper_3(void)
{
	pthread_mutex_lock(&mutex); // {f1, f2}
	f1(); f2();
	pthread_mutex_unlock(&mutex);

	x();
	// {f1, f2, test_warning_4, test_warning_deeper_1, test_warning_deeper_2}
	pthread_mutex_lock(&mutex);
	test_warning_deeper_2();
	pthread_mutex_unlock(&mutex);
	y();
}


void test_warning_violation(void)
{
	f1(); f2(); // (f1, f2); warning (f1, f2)
}


void test_warning_violation_1(void)
{
	pthread_mutex_lock(&mutex); // {f1, f2, test_warning_violation}
	test_warning_violation();
	pthread_mutex_unlock(&mutex);
}


void test_warning_violation_2(void)
{
	test_warning_violation(); // (test_warning_violation, f1)
}


int main(void)
{
	if (pthread_mutex_init(&mutex, NULL)) return 1;

	atomic_sequences();
	test_violation();
	test_warning_called_from_main();
	test_warning_multiple_calls_1();
	test_warning_multiple_calls_2();
	test_warning_deeper_3();
	test_warning_violation_1();
	test_warning_violation_2();

	pthread_mutex_destroy(&mutex);

	return 0;
}
