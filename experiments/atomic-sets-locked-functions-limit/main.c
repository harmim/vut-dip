// Author: Dominik Harmim <iharmim@fit.vut.cz>

#include <stdlib.h>
#include <pthread.h>


pthread_mutex_t lock;


void f1(void) {}
void f2(void) {}
void f3(void) {}
void f4(void) {}
void f5(void) {}
void x(void) {}
void y(void) {}


void test1(void)
{
	x();
	pthread_mutex_lock(&lock); // {f1, f2, f3}
	f1(); f2(); f3();
	pthread_mutex_unlock(&lock);
	y();
}


void test2(void)
{
	x();
	pthread_mutex_lock(&lock);
	f1(); f2(); f3(); f4(); f5();
	pthread_mutex_unlock(&lock);
	y();
}


int main(void)
{
	if (pthread_mutex_init(&lock, NULL)) return 1;

	test1();
	test2();

	pthread_mutex_destroy(&lock);

	return 0;
}
