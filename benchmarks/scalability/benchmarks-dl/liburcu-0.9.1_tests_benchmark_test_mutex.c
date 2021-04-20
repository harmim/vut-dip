// tag-#anon#ST[ARR16{U64}$U64$'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-test_array
// file test_mutex.c line 49
struct test_array;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// gettid
// file ../../tests/common/thread-id.h line 34
static inline signed int gettid(void);
// loop_sleep
// file test_mutex.c line 69
static inline void loop_sleep(unsigned long int loops);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// rcu_copy_mutex_lock
// file test_mutex.c line 147
void rcu_copy_mutex_lock(void);
// rcu_copy_mutex_unlock
// file test_mutex.c line 157
void rcu_copy_mutex_unlock(void);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous$0 *);
// set_affinity
// file test_mutex.c line 89
static void set_affinity(void);
// show_usage
// file test_mutex.c line 236
void show_usage(signed int argc, char **argv);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// test_duration_read
// file test_mutex.c line 129
static signed int test_duration_read(void);
// test_duration_write
// file test_mutex.c line 124
static signed int test_duration_write(void);
// thr_reader
// file test_mutex.c line 168
void * thr_reader(void *data);
// thr_writer
// file test_mutex.c line 202
void * thr_writer(void *data);
// urcu_get_thread_id
// file ../../tests/common/thread-id.h line 41
static inline unsigned long int urcu_get_thread_id(void);

struct anonymous$0
{
  // __bits
  unsigned long int __bits[16l];
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

union anonymous
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct test_array
{
  // a
  signed int a;
};


// affinity_mutex
// file test_mutex.c line 87
union anonymous affinity_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// cpu_affinities
// file test_mutex.c line 83
static unsigned int cpu_affinities[16384l];
// duration
// file test_mutex.c line 61
static unsigned long int duration;
// lock
// file test_mutex.c line 53
static union anonymous lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// next_aff
// file test_mutex.c line 84
static unsigned int next_aff = (unsigned int)0;
// nr_readers
// file test_mutex.c line 142
static unsigned int nr_readers;
// nr_reads
// file test_mutex.c line 135
static unsigned long long int nr_reads;
// nr_writers
// file test_mutex.c line 143
static unsigned int nr_writers;
// nr_writes
// file test_mutex.c line 134
static unsigned long long int nr_writes;
// rcu_copy_mutex
// file test_mutex.c line 145
union anonymous rcu_copy_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rduration
// file test_mutex.c line 64
static unsigned long int rduration;
// test_array
// file test_mutex.c line 59
static struct test_array test_array = { .a=8 };
// test_go
// file test_mutex.c line 55
static volatile signed int test_go;
// test_stop
// file test_mutex.c line 55
static volatile signed int test_stop;
// tot_nr_reads
// file test_mutex.c line 140
static unsigned long long int *tot_nr_reads;
// tot_nr_writes
// file test_mutex.c line 138
static unsigned long long int *tot_nr_writes;
// use_affinity
// file test_mutex.c line 85
static signed int use_affinity = 0;
// verbose_mode
// file test_mutex.c line 75
static signed int verbose_mode;
// wdelay
// file test_mutex.c line 57
static unsigned long int wdelay;
// wduration
// file test_mutex.c line 67
static unsigned long int wduration;

// gettid
// file ../../tests/common/thread-id.h line 34
static inline signed int gettid(void)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)186);
  return (signed int)return_value_syscall$1;
}

// loop_sleep
// file test_mutex.c line 69
static inline void loop_sleep(unsigned long int loops)
{
  unsigned long int tmp_post$1;
  do
  {
    tmp_post$1 = loops;
    loops = loops - 1ul;
    if(tmp_post$1 == 0ul)
      break;

    asm("rep; nop" :  :  : "memory");
  }
  while((_Bool)1);
}

// main
// file test_mutex.c line 249
signed int main(signed int argc, char **argv)
{
  signed int err;
  unsigned long int *tid_reader;
  unsigned long int *tid_writer;
  void *tret;
  unsigned long long int *count_reader;
  unsigned long long int *count_writer;
  unsigned long long int tot_reads = (unsigned long long int)0;
  unsigned long long int tot_writes = (unsigned long long int)0;
  signed int i;
  signed int a;
  unsigned int tmp_post$1;
  signed long int return_value_atol$2;
  signed long int return_value_atol$3;
  signed long int return_value_atol$4;
  unsigned long int return_value_urcu_get_thread_id$5;
  if(!(argc >= 4))
  {
    show_usage(argc, argv);
    return -1;
  }

  else
  {
    asm("mfence" :  :  : "memory");
    err=sscanf(argv[(signed long int)1], "%u", &nr_readers);
    if(!(err == 1))
    {
      show_usage(argc, argv);
      return -1;
    }

    else
    {
      err=sscanf(argv[(signed long int)2], "%u", &nr_writers);
      if(!(err == 1))
      {
        show_usage(argc, argv);
        return -1;
      }

      else
      {
        err=sscanf(argv[(signed long int)3], "%lu", &duration);
        if(!(err == 1))
        {
          show_usage(argc, argv);
          return -1;
        }

        else
        {
          i = 4;
          for( ; !(i >= argc); i = i + 1)
            if((signed int)*argv[(signed long int)i] == 45)
              switch((signed int)argv[(signed long int)i][(signed long int)1])
              {
                case 97:
                {
                  if(!(argc >= 2 + i))
                  {
                    show_usage(argc, argv);
                    return -1;
                  }

                  i = i + 1;
                  a=atoi(argv[(signed long int)i]);
                  tmp_post$1 = next_aff;
                  next_aff = next_aff + 1u;
                  cpu_affinities[(signed long int)tmp_post$1] = (unsigned int)a;
                  use_affinity = 1;
                  do
                    if(!(verbose_mode == 0))
                      printf("Adding CPU %d affinity\n", a);

                  while((_Bool)0);
                  break;
                }
                case 99:
                {
                  if(!(argc >= 2 + i))
                  {
                    show_usage(argc, argv);
                    return -1;
                  }

                  i = i + 1;
                  return_value_atol$2=atol(argv[(signed long int)i]);
                  rduration = (unsigned long int)return_value_atol$2;
                  break;
                }
                case 100:
                {
                  if(!(argc >= 2 + i))
                  {
                    show_usage(argc, argv);
                    return -1;
                  }

                  i = i + 1;
                  return_value_atol$3=atol(argv[(signed long int)i]);
                  wdelay = (unsigned long int)return_value_atol$3;
                  break;
                }
                case 101:
                {
                  if(!(argc >= 2 + i))
                  {
                    show_usage(argc, argv);
                    return -1;
                  }

                  i = i + 1;
                  return_value_atol$4=atol(argv[(signed long int)i]);
                  wduration = (unsigned long int)return_value_atol$4;
                  break;
                }
                case 118:
                  verbose_mode = 1;
              }

          do
            if(!(verbose_mode == 0))
              printf("running test for %lu seconds, %u readers, %u writers.\n", duration, nr_readers, nr_writers);

          while((_Bool)0);
          do
            if(!(verbose_mode == 0))
              printf("Writer delay : %lu loops.\n", wdelay);

          while((_Bool)0);
          do
            if(!(verbose_mode == 0))
              printf("Reader duration : %lu loops.\n", rduration);

          while((_Bool)0);
          do
            if(!(verbose_mode == 0))
            {
              return_value_urcu_get_thread_id$5=urcu_get_thread_id();
              printf("thread %-6s, tid %lu\n", (const void *)"main", return_value_urcu_get_thread_id$5);
            }

          while((_Bool)0);
          void *return_value_calloc$6;
          return_value_calloc$6=calloc((unsigned long int)nr_readers, sizeof(unsigned long int) /*8ul*/ );
          tid_reader = (unsigned long int *)return_value_calloc$6;
          void *return_value_calloc$7;
          return_value_calloc$7=calloc((unsigned long int)nr_writers, sizeof(unsigned long int) /*8ul*/ );
          tid_writer = (unsigned long int *)return_value_calloc$7;
          void *return_value_calloc$8;
          return_value_calloc$8=calloc((unsigned long int)nr_readers, sizeof(unsigned long long int) /*8ul*/ );
          count_reader = (unsigned long long int *)return_value_calloc$8;
          void *return_value_calloc$9;
          return_value_calloc$9=calloc((unsigned long int)nr_writers, sizeof(unsigned long long int) /*8ul*/ );
          count_writer = (unsigned long long int *)return_value_calloc$9;
          void *return_value_calloc$10;
          return_value_calloc$10=calloc((unsigned long int)nr_readers, sizeof(unsigned long long int) /*8ul*/ );
          tot_nr_reads = (unsigned long long int *)return_value_calloc$10;
          void *return_value_calloc$11;
          return_value_calloc$11=calloc((unsigned long int)nr_writers, sizeof(unsigned long long int) /*8ul*/ );
          tot_nr_writes = (unsigned long long int *)return_value_calloc$11;
          next_aff = (unsigned int)0;
          i = 0;
          for( ; !((unsigned int)i >= nr_readers); i = i + 1)
          {
            err=pthread_create(&tid_reader[(signed long int)i], (const union pthread_attr_t *)(void *)0, thr_reader, (void *)(signed long int)i);
            if(!(err == 0))
              exit(1);

          }
          i = 0;
          for( ; !((unsigned int)i >= nr_writers); i = i + 1)
          {
            err=pthread_create(&tid_writer[(signed long int)i], (const union pthread_attr_t *)(void *)0, thr_writer, (void *)(signed long int)i);
            if(!(err == 0))
              exit(1);

          }
          asm("mfence" :  :  : "memory");
          test_go = 1;
          sleep((unsigned int)duration);
          test_stop = 1;
          i = 0;
          for( ; !((unsigned int)i >= nr_readers); i = i + 1)
          {
            err=pthread_join(tid_reader[(signed long int)i], &tret);
            if(!(err == 0))
              exit(1);

            tot_reads = tot_reads + tot_nr_reads[(signed long int)i];
          }
          i = 0;
          for( ; !((unsigned int)i >= nr_writers); i = i + 1)
          {
            err=pthread_join(tid_writer[(signed long int)i], &tret);
            if(!(err == 0))
              exit(1);

            tot_writes = tot_writes + tot_nr_writes[(signed long int)i];
          }
          do
            if(!(verbose_mode == 0))
              printf("total number of reads : %llu, writes %llu\n", tot_reads, tot_writes);

          while((_Bool)0);
          printf("SUMMARY %-25s testdur %4lu nr_readers %3u rdur %6lu wdur %6lu nr_writers %3u wdelay %6lu nr_reads %12llu nr_writes %12llu nr_ops %12llu\n", argv[(signed long int)0], duration, nr_readers, rduration, wduration, nr_writers, wdelay, tot_reads, tot_writes, tot_reads + tot_writes);
          free((void *)tid_reader);
          free((void *)tid_writer);
          free((void *)count_reader);
          free((void *)count_writer);
          free((void *)tot_nr_reads);
          free((void *)tot_nr_writes);
          return 0;
        }
      }
    }
  }
}

// rcu_copy_mutex_lock
// file test_mutex.c line 147
void rcu_copy_mutex_lock(void)
{
  signed int ret;
  ret=pthread_mutex_lock(&rcu_copy_mutex);
  if(!(ret == 0))
  {
    perror("Error in pthread mutex lock");
    exit(-1);
  }

}

// rcu_copy_mutex_unlock
// file test_mutex.c line 157
void rcu_copy_mutex_unlock(void)
{
  signed int ret;
  ret=pthread_mutex_unlock(&rcu_copy_mutex);
  if(!(ret == 0))
  {
    perror("Error in pthread mutex unlock");
    exit(-1);
  }

}

// set_affinity
// file test_mutex.c line 89
static void set_affinity(void)
{
  struct anonymous$0 mask;
  signed int cpu;
  signed int ret;
  unsigned int tmp_post$1;
  if(!(use_affinity == 0))
  {
    ret=pthread_mutex_lock(&affinity_mutex);

    pthread_mutex_lock(&lock); // introduced
    pthread_mutex_unlock(&lock); // introduced

    if(!(ret == 0))
    {
      perror("Error in pthread mutex lock");
      exit(-1);
    }

    tmp_post$1 = next_aff;
    next_aff = next_aff + 1u;
    cpu = (signed int)cpu_affinities[(signed long int)tmp_post$1];
    ret=pthread_mutex_unlock(&affinity_mutex);
    if(!(ret == 0))
    {
      perror("Error in pthread mutex unlock");
      exit(-1);
    }

    do
      __builtin_memset((void *)&mask, 0, sizeof(struct anonymous$0) /*128ul*/ );
    while((_Bool)0);
    unsigned long int __cpu = (unsigned long int)cpu;
    if(!(__cpu / 8ul >= sizeof(struct anonymous$0) /*128ul*/ ))
      ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    sched_setaffinity(0, sizeof(struct anonymous$0) /*128ul*/ , &mask);
  }

}

// show_usage
// file test_mutex.c line 236
void show_usage(signed int argc, char **argv)
{
  printf("Usage : %s nr_readers nr_writers duration (s) <OPTIONS>\n", argv[(signed long int)0]);
  printf("OPTIONS:\n");
  printf("\t[-d delay] (writer period (us))\n");
  printf("\t[-c duration] (reader C.S. duration (in loops))\n");
  printf("\t[-e duration] (writer C.S. duration (in loops))\n");
  printf("\t[-v] (verbose output)\n");
  printf("\t[-a cpu#] [-a cpu#]... (affinity)\n");
  printf("\n");
}

// test_duration_read
// file test_mutex.c line 129
static signed int test_duration_read(void)
{
  return (signed int)!(test_stop != 0);
}

// test_duration_write
// file test_mutex.c line 124
static signed int test_duration_write(void)
{
  return (signed int)!(test_stop != 0);
}

// thr_reader
// file test_mutex.c line 168
void * thr_reader(void *data)
{
  unsigned long int tidx = (unsigned long int)data;
  unsigned long int return_value_urcu_get_thread_id$1;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$1=urcu_get_thread_id();
      printf("thread_begin %s, tid %lu\n", (const void *)"reader", return_value_urcu_get_thread_id$1);
    }

  while((_Bool)0);
  set_affinity();
  while(test_go == 0)
    ;
  do
  {
    signed int v;
    pthread_mutex_lock(&lock);

    pthread_mutex_lock(&affinity_mutex); // introduced
    pthread_mutex_unlock(&affinity_mutex); // introduced

    v = test_array.a;
    /* assertion v == 8 */
    assert(v == 8);
    if(!(rduration == 0ul))
      loop_sleep(rduration);

    pthread_mutex_unlock(&lock);
    nr_reads = nr_reads + 1ull;
    signed int return_value_test_duration_read$2;
    return_value_test_duration_read$2=test_duration_read();
    if(return_value_test_duration_read$2 == 0)
      break;

  }
  while((_Bool)1);
  tot_nr_reads[(signed long int)tidx] = nr_reads;
  unsigned long int return_value_urcu_get_thread_id$3;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$3=urcu_get_thread_id();
      printf("thread_end %s, tid %lu\n", (const void *)"reader", return_value_urcu_get_thread_id$3);
    }

  while((_Bool)0);
  return (void *)1;
}

// thr_writer
// file test_mutex.c line 202
void * thr_writer(void *data)
{
  unsigned long int wtidx = (unsigned long int)data;
  unsigned long int return_value_urcu_get_thread_id$1;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$1=urcu_get_thread_id();
      printf("thread_begin %s, tid %lu\n", (const void *)"writer", return_value_urcu_get_thread_id$1);
    }

  while((_Bool)0);
  set_affinity();
  while(test_go == 0)
    ;
  asm("mfence" :  :  : "memory");
  do
  {
    pthread_mutex_lock(&lock);
    test_array.a = 0;
    test_array.a = 8;
    if(!(wduration == 0ul))
      loop_sleep(wduration);

    pthread_mutex_unlock(&lock);
    nr_writes = nr_writes + 1ull;
    signed int return_value_test_duration_write$2;
    return_value_test_duration_write$2=test_duration_write();
    if(return_value_test_duration_write$2 == 0)
      break;

    if(!(wdelay == 0ul))
      loop_sleep(wdelay);

  }
  while((_Bool)1);
  unsigned long int return_value_urcu_get_thread_id$3;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$3=urcu_get_thread_id();
      printf("thread_end %s, tid %lu\n", (const void *)"writer", return_value_urcu_get_thread_id$3);
    }

  while((_Bool)0);
  tot_nr_writes[(signed long int)wtidx] = nr_writes;
  return (void *)2;
}

// urcu_get_thread_id
// file ../../tests/common/thread-id.h line 41
static inline unsigned long int urcu_get_thread_id(void)
{
  signed int return_value_gettid$1;
  return_value_gettid$1=gettid();
  return (unsigned long int)return_value_gettid$1;
}

