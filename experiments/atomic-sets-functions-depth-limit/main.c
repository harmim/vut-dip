#include <stdlib.h>
#include <pthread.h>


pthread_mutex_t lock;


void f1(void) {}
void f2(void) {}
void f3(void) {}
void f4(void) {}
void f5(void) {}
void f6(void) {}
void z(void) { f5(); f6(); }
void y(void) { f4(); z(); }
void x(void) { f3(); y(); }


void test1(void)
{
	pthread_mutex_lock(&lock); // {f1, f2}
	{
		f1(); f2();
	}
	pthread_mutex_unlock(&lock);
}


void test2(void)
{
	pthread_mutex_lock(&lock); // {f1, f2, f3, f4, x, y, z}
	{
		f1(); x(); f2();
	}
	pthread_mutex_unlock(&lock);
}


int main(void)
{
	if (pthread_mutex_init(&lock, NULL)) return 1;

	test1();
	test2();

	pthread_mutex_destroy(&lock);

	return 0;
}
