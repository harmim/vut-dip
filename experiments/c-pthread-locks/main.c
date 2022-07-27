// Author: Dominik Harmim <iharmim@fit.vut.cz>

#include <stdlib.h>
#include <pthread.h>

#include "spinlock.h"


pthread_mutex_t mutex;
pthread_spinlock_t spinlock;
pthread_rwlock_t rwlock;


void f1(void) {}
void f2(void) {}
void x(void) {}
void y(void) {}


void test_mutex(void)
{
	x();
	pthread_mutex_lock(&mutex); // {f1, f2}
	f1(); f2();
	pthread_mutex_unlock(&mutex);
	y();
}


void test_spin(void)
{
	x();
	pthread_spin_lock(&spinlock); // {f1, f2}
	f1(); f2();
	pthread_spin_unlock(&spinlock);
	y();
}


void test_rwlock_rd(void)
{
	x();
	pthread_rwlock_rdlock(&rwlock); // {f1, f2}
	f1(); f2();
	pthread_rwlock_unlock(&rwlock);
	y();
}


void test_rwlock_wr(void)
{
	x();
	pthread_rwlock_wrlock(&rwlock); // {f1, f2}
	f1(); f2();
	pthread_rwlock_unlock(&rwlock);
	y();
}


int main(void)
{
	if (pthread_mutex_init(&mutex, NULL)) return 1;
	if (pthread_spin_init(&spinlock, PTHREAD_PROCESS_SHARED)) return 1;
	if (pthread_rwlock_init(&rwlock, NULL)) return 1;

	test_mutex();
	test_spin();
	test_rwlock_rd();
	test_rwlock_wr();

	pthread_mutex_destroy(&mutex);
	pthread_spin_destroy(&spinlock);
	pthread_rwlock_destroy(&rwlock);

	return 0;
}
