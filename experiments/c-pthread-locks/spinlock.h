// Author: Dominik Harmim <iharmim@fit.vut.cz>

#ifndef __USE_XOPEN2K


typedef int pthread_spinlock_t;


int pthread_spin_init(pthread_spinlock_t*, int);

int pthread_spin_destroy(pthread_spinlock_t*);

int pthread_spin_lock(pthread_spinlock_t*);

int pthread_spin_unlock(pthread_spinlock_t*);


#endif
