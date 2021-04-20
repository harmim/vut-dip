// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$1;

// tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous$5;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$2;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$4;

// tag-#anon#UN[ARR8{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 224
union anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$6;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__nr_readers'||U32'__readers_wakeup'||U32'__writer_wakeup'||U32'__nr_readers_queued'||U32'__nr_writers_queued'||S32'__writer'||S32'__shared'||S8'__rwelision'||ARR7{U8}$U8$'__pad1'||U64'__pad2'||U32'__flags'||U32'$pad0'|]#'__data'||ARR56{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous$3;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$0;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#ifndef NULL
#define NULL ((void*)0)
#endif

// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// compute
// file ../../../test/pthread/test_pthread.c line 70
void compute(signed int usec);
// debug
// file ../../../test/pthread/test_pthread.c line 19
void debug(char *fmt, ...);
// f_thread
// file ../../../test/pthread/test_pthread.c line 78
void * f_thread(void *arg);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// pthread_barrier_destroy
// file /usr/include/pthread.h line 1076
extern signed int pthread_barrier_destroy(union anonymous$2 *);
// pthread_barrier_init
// file /usr/include/pthread.h line 1070
extern signed int pthread_barrier_init(union anonymous$2 *, const union anonymous$4 *, unsigned int);
// pthread_barrier_wait
// file /usr/include/pthread.h line 1080
extern signed int pthread_barrier_wait(union anonymous$2 *);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$6 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$6 *, const union anonymous$4 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$0 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$0 *, const union anonymous$4 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$0 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$0 *);
// pthread_rwlock_destroy
// file /usr/include/pthread.h line 895
extern signed int pthread_rwlock_destroy(union anonymous$3 *);
// pthread_rwlock_init
// file /usr/include/pthread.h line 890
extern signed int pthread_rwlock_init(union anonymous$3 *, const union anonymous *);
// pthread_rwlock_rdlock
// file /usr/include/pthread.h line 899
extern signed int pthread_rwlock_rdlock(union anonymous$3 *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 929
extern signed int pthread_rwlock_unlock(union anonymous$3 *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 914
extern signed int pthread_rwlock_wrlock(union anonymous$3 *);
// pthread_spin_destroy
// file /usr/include/pthread.h line 1050
extern signed int pthread_spin_destroy(volatile signed int *);
// pthread_spin_init
// file /usr/include/pthread.h line 1046
extern signed int pthread_spin_init(volatile signed int *, signed int);
// pthread_spin_lock
// file /usr/include/pthread.h line 1054
extern signed int pthread_spin_lock(volatile signed int *);
// pthread_spin_unlock
// file /usr/include/pthread.h line 1062
extern signed int pthread_spin_unlock(volatile signed int *);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous$2 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$2 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$2 *);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);

struct anonymous$1
{
  // __lock
  signed int __lock;
  // __futex
  unsigned int __futex;
  // __total_seq
  unsigned long long int __total_seq;
  // __wakeup_seq
  unsigned long long int __wakeup_seq;
  // __woken_seq
  unsigned long long int __woken_seq;
  // __mutex
  void *__mutex;
  // __nwaiters
  unsigned int __nwaiters;
  // __broadcast_seq
  unsigned int __broadcast_seq;
};

struct anonymous$5
{
  // __lock
  signed int __lock;
  // __nr_readers
  unsigned int __nr_readers;
  // __readers_wakeup
  unsigned int __readers_wakeup;
  // __writer_wakeup
  unsigned int __writer_wakeup;
  // __nr_readers_queued
  unsigned int __nr_readers_queued;
  // __nr_writers_queued
  unsigned int __nr_writers_queued;
  // __writer
  signed int __writer;
  // __shared
  signed int __shared;
  // __rwelision
  signed char __rwelision;
  // __pad1
  unsigned char __pad1[7l];
  // __pad2
  unsigned long int __pad2;
  // __flags
  unsigned int __flags;
};

union anonymous$2
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

union anonymous$4
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous
{
  // __size
  char __size[8l];
  // __align
  signed long int __align;
};

union anonymous$6
{
  // __data
  struct anonymous$1 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
};

union anonymous$3
{
  // __data
  struct anonymous$5 __data;
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct __pthread_internal_list
{
  // __prev
  struct __pthread_internal_list *__prev;
  // __next
  struct __pthread_internal_list *__next;
};

struct __pthread_mutex_s
{
  // __lock
  signed int __lock;
  // __count
  unsigned int __count;
  // __owner
  signed int __owner;
  // __nusers
  unsigned int __nusers;
  // __kind
  signed int __kind;
  // __spins
  signed short int __spins;
  // __elision
  signed short int __elision;
  // __list
  struct __pthread_internal_list __list;
};

union anonymous$0
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct _IO_FILE
{
  // _flags
  signed int _flags;
  // _IO_read_ptr
  char *_IO_read_ptr;
  // _IO_read_end
  char *_IO_read_end;
  // _IO_read_base
  char *_IO_read_base;
  // _IO_write_base
  char *_IO_write_base;
  // _IO_write_ptr
  char *_IO_write_ptr;
  // _IO_write_end
  char *_IO_write_end;
  // _IO_buf_base
  char *_IO_buf_base;
  // _IO_buf_end
  char *_IO_buf_end;
  // _IO_save_base
  char *_IO_save_base;
  // _IO_backup_base
  char *_IO_backup_base;
  // _IO_save_end
  char *_IO_save_end;
  // _markers
  struct _IO_marker *_markers;
  // _chain
  struct _IO_FILE *_chain;
  // _fileno
  signed int _fileno;
  // _flags2
  signed int _flags2;
  // _old_offset
  signed long int _old_offset;
  // _cur_column
  unsigned short int _cur_column;
  // _vtable_offset
  signed char _vtable_offset;
  // _shortbuf
  char _shortbuf[1l];
  // _lock
  void *_lock;
  // _offset
  signed long int _offset;
  // __pad1
  void *__pad1;
  // __pad2
  void *__pad2;
  // __pad3
  void *__pad3;
  // __pad4
  void *__pad4;
  // __pad5
  unsigned long int __pad5;
  // _mode
  signed int _mode;
  // _unused2
  char _unused2[(signed long int)(sizeof(signed int) * 5) /*20l*/ ];
};

struct _IO_marker
{
  // _next
  struct _IO_marker *_next;
  // _sbuf
  struct _IO_FILE *_sbuf;
  // _pos
  signed int _pos;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct timezone
{
  // tz_minuteswest
  signed int tz_minuteswest;
  // tz_dsttime
  signed int tz_dsttime;
};


// _debug
// file ../../../test/pthread/test_pthread.c line 17
signed int _debug = -77;
// barrier
// file ../../../test/pthread/test_pthread.c line 65
union anonymous$2 barrier;
// cond
// file ../../../test/pthread/test_pthread.c line 66
union anonymous$6 cond;
// mutex
// file ../../../test/pthread/test_pthread.c line 63
union anonymous$0 mutex;
union anonymous$0 mutex2;
// rwlock
// file ../../../test/pthread/test_pthread.c line 67
union anonymous$3 rwlock;
// sem
// file ../../../test/pthread/test_pthread.c line 61
union anonymous$2 sem[2l];
// spinlock
// file ../../../test/pthread/test_pthread.c line 64
volatile signed int spinlock;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// thread_ready
// file ../../../test/pthread/test_pthread.c line 58
union anonymous$2 thread_ready;

// compute
// file ../../../test/pthread/test_pthread.c line 70
void compute(signed int usec)
{
  struct timeval tv1;
  struct timeval tv2;
  gettimeofday(&tv1, (struct timezone *)(void *)0);
  do
    gettimeofday(&tv2, (struct timezone *)(void *)0);
  while(!((tv2.tv_sec + -tv1.tv_sec) * 1000000l + tv2.tv_usec + -tv1.tv_usec >= (signed long int)usec));
}

// debug
// file ../../../test/pthread/test_pthread.c line 19
void debug(char *fmt, ...)
{
  if(_debug == -77)
  {
    char *buf;
    buf=getenv("EZTRACE_DEBUG");
    if(buf == ((char *)NULL))
      _debug = 0;

    else
      _debug=atoi(buf);
  }

  if(_debug >= 0)
  {
    void **va = (void **)&fmt;
    vfprintf(stdout, fmt, va);
    va = ((void **)NULL);
  }

}

// f_thread
// file ../../../test/pthread/test_pthread.c line 78
void * f_thread(void *arg)
{
  unsigned char my_id = *((unsigned char *)arg);
  sem_post(&thread_ready);
  debug("Running thread #%d\n", my_id);
  pthread_barrier_wait(&barrier);
  signed int i = 0;
  for( ; !(i >= 10); i = i + 1)
  {
    sem_wait(&sem[(signed long int)my_id]);
    debug("[thread #%d] loop %d\n", my_id, i);
    pthread_mutex_lock(&mutex);
    pthread_mutex_lock(&mutex2);
    compute(5000);
    pthread_mutex_unlock(&mutex2);
    pthread_mutex_unlock(&mutex);
    compute(5000);
    pthread_spin_lock(&spinlock);
    compute(5000);
    pthread_spin_unlock(&spinlock);
    compute(5000);
    pthread_spin_lock(&spinlock);
    compute(5000);
    pthread_spin_unlock(&spinlock);
    compute(5000);
    pthread_rwlock_rdlock(&rwlock);
    compute(5000);
    pthread_rwlock_unlock(&rwlock);
    compute(5000);
    pthread_rwlock_wrlock(&rwlock);
    compute(5000);
    pthread_rwlock_unlock(&rwlock);
    compute(5000);
    sem_post(&sem[(signed long int)(((signed int)my_id + 1) % 2)]);
    pthread_mutex_lock(&mutex2);
    pthread_mutex_lock(&mutex);
    compute(5000);
    pthread_mutex_unlock(&mutex);
    pthread_mutex_unlock(&mutex2);
  }
  pthread_barrier_wait(&barrier);
  debug("End of thread #%d\n", my_id);
  return (void *)0;
}

// main
// file ../../../test/pthread/test_pthread.c line 138
signed int main(signed int argc, char **argv)
{
  unsigned long int tid[2l];
  signed int i;
  pthread_mutex_init(&mutex, (const union anonymous$4 *)(void *)0);
  pthread_spin_init(&spinlock, 0);
  pthread_barrier_init(&barrier, (const union anonymous$4 *)(void *)0, (unsigned int)2);
  pthread_cond_init(&cond, (const union anonymous$4 *)(void *)0);
  pthread_rwlock_init(&rwlock, (const union anonymous *)(void *)0);
  sem_init(&thread_ready, 0, (unsigned int)0);
  i = 0;
  for( ; !(i >= 2); i = i + 1)
    sem_init(&sem[(signed long int)i], 0, (unsigned int)0);
  i = 0;
  for( ; !(i >= 2); i = i + 1)
  {
    pthread_create(&tid[(signed long int)i], (const union pthread_attr_t *)(void *)0, f_thread, (void *)&i);
    sem_wait(&thread_ready);
  }
  sem_post(&sem[(signed long int)0]);
  i = 0;
  for( ; !(i >= 2); i = i + 1)
    pthread_join(tid[(signed long int)i], (void **)(void *)0);
  pthread_mutex_destroy(&mutex);
  pthread_spin_destroy(&spinlock);
  pthread_barrier_destroy(&barrier);
  pthread_cond_destroy(&cond);
  pthread_rwlock_destroy(&rwlock);
  return 0;
}

