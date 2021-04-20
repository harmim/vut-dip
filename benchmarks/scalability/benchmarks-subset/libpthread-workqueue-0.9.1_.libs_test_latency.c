// tag-#anon#ST[*{SYM#tag-work#}$SYM#tag-work#$'stqe_next'|]
// file src/private.h line 138
struct anonymous$0;

// tag-#anon#ST[*{SYM#tag-work#}$SYM#tag-work#$'stqh_first'||*{*{SYM#tag-work#}$SYM#tag-work#$}$*{SYM#tag-work#}$SYM#tag-work#$$'stqh_last'|]
// file src/private.h line 154
struct anonymous$2;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$7;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$8;

// tag-#anon#ST[U32'sig'||S32'queueprio'||S32'overcommit'||ARR13{U32}$U32$'pad'|]
// file ./include/pthread_workqueue.h line 43
struct anonymous$6;

// tag-#anon#ST[vU32'runqueue_length'||vU32'count'||vU32'idle'||U32'$pad0'||SYM#tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]#'sb_sem'||U32'sb_suspend'||U32'$pad1'|]
// file src/posix/manager.c line 78
struct anonymous$3;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$5;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$1;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$4;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__dirstream
// file /usr/include/dirent.h line 127
struct __dirstream;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__rlimit_resource
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 31
enum __rlimit_resource { RLIMIT_CPU=0, RLIMIT_FSIZE=1, RLIMIT_DATA=2, RLIMIT_STACK=3, RLIMIT_CORE=4, __RLIMIT_RSS=5, RLIMIT_NOFILE=7, __RLIMIT_OFILE=7, RLIMIT_AS=9, __RLIMIT_NPROC=6, __RLIMIT_MEMLOCK=8, __RLIMIT_LOCKS=10, __RLIMIT_SIGPENDING=11, __RLIMIT_MSGQUEUE=12, __RLIMIT_NICE=13, __RLIMIT_RTPRIO=14, __RLIMIT_RTTIME=15, __RLIMIT_NLIMITS=16, __RLIM_NLIMITS=16 };

// tag-_pthread_workqueue
// file ./include/pthread_workqueue.h line 39
struct _pthread_workqueue;

// tag-dirent
// file /usr/include/x86_64-linux-gnu/bits/dirent.h line 22
struct dirent;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rlimit
// file /usr/include/x86_64-linux-gnu/bits/resource.h line 139
struct rlimit;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-work
// file src/private.h line 137
struct work;

// tag-wq_event
// file testing/latency/latency.h line 55
struct wq_event;

// tag-wq_event_generator
// file testing/latency/latency.h line 73
struct wq_event_generator;

// tag-wq_statistics
// file testing/latency/latency.h line 61
struct wq_statistics;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef FENCE
#define FENCE(x) ((void)0)
#endif

// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __sync_add_and_fetch
// file gcc_builtin_headers_generic.h line 99
signed int __sync_add_and_fetch();
// __sync_and_and_fetch
// file gcc_builtin_headers_generic.h line 102
signed int __sync_and_and_fetch();
// __sync_or_and_fetch
// file gcc_builtin_headers_generic.h line 101
signed int __sync_or_and_fetch();
// __sync_sub_and_fetch
// file gcc_builtin_headers_generic.h line 100
signed int __sync_sub_and_fetch();
// __sync_synchronize
// file gcc_builtin_headers_generic.h line 107
void __sync_synchronize();
// _event_tick
// file testing/latency/latency.c line 177
static void _event_tick(void *context);
// _gather_statistics
// file testing/latency/latency.c line 250
static void _gather_statistics(unsigned long int queue_index);
// _generate_simulated_events
// file testing/latency/latency.c line 194
static void _generate_simulated_events();
// _print_statistics
// file testing/latency/latency.c line 275
void _print_statistics();
// _process_data
// file testing/latency/latency.c line 143
static void _process_data(void *context);
// _read_file
// file src/linux/thread_info.c line 75
static signed int _read_file(const char *path, char *result);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// clock_gettime
// file /usr/include/time.h line 342
extern signed int clock_gettime(signed int, struct timespec *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closedir
// file /usr/include/dirent.h line 149
extern signed int closedir(struct __dirstream *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// ffs
// file /usr/include/string.h line 522
extern signed int ffs(signed int);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// get_process_limit
// file src/posix/manager.c line 795
static unsigned int get_process_limit(void);
// get_runqueue_length
// file src/posix/manager.c line 854
static unsigned int get_runqueue_length(void);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getloadavg
// file /usr/include/stdlib.h line 950
extern signed int getloadavg(double *, signed int);
// getrlimit
// file /usr/include/x86_64-linux-gnu/sys/resource.h line 50
extern signed int getrlimit(enum __rlimit_resource, struct rlimit *);
// gettime
// file testing/latency/latency.c line 68
static unsigned long int gettime(void);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// linux_get_runqueue_length
// file ./src/linux/platform.h line 35
unsigned int linux_get_runqueue_length(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// manager_init
// file src/private.h line 162
signed int manager_init(void);
// manager_main
// file src/posix/manager.c line 539
static void * manager_main(void *unused);
// manager_peek
// file src/private.h line 163
unsigned long int manager_peek(const char *key);
// manager_reinit
// file src/posix/manager.c line 127
static void manager_reinit(void);
// manager_resume
// file src/private.h line 165
void manager_resume(void);
// manager_start
// file src/posix/manager.c line 694
static void manager_start(void);
// manager_suspend
// file src/private.h line 164
void manager_suspend(void);
// manager_workqueue_additem
// file src/private.h line 167
void manager_workqueue_additem(struct _pthread_workqueue *workq, struct work *witem);
// manager_workqueue_create
// file src/private.h line 166
void manager_workqueue_create(struct _pthread_workqueue *workq);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// my_sleep
// file testing/latency/latency.c line 120
static void my_sleep(unsigned long int nanoseconds);
// nanosleep
// file /usr/include/time.h line 334
extern signed int nanosleep(struct timespec *, struct timespec *);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// opendir
// file /usr/include/dirent.h line 134
extern struct __dirstream * opendir(const char *);
// overcommit_worker_main
// file src/posix/manager.c line 244
static void * overcommit_worker_main(void *unused);
// overcommit_worker_main::1::func$object
// 
void func$object(void *);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_atfork
// file /usr/include/pthread.h line 1147
extern signed int pthread_atfork(void (*)(void), void (*)(void), void (*)(void));
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$1 *, const union anonymous$5 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$1 *);
// pthread_cond_timedwait
// file /usr/include/pthread.h line 1002
extern signed int pthread_cond_timedwait(union anonymous$1 *, union anonymous$4 *, struct timespec *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$1 *, union anonymous$4 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$4 *, const union anonymous$5 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$4 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$4 *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$7 *, struct anonymous$7 *);
// pthread_spin_init
// file /usr/include/pthread.h line 1046
extern signed int pthread_spin_init(volatile signed int *, signed int);
// pthread_spin_lock
// file /usr/include/pthread.h line 1054
extern signed int pthread_spin_lock(volatile signed int *);
// pthread_spin_unlock
// file /usr/include/pthread.h line 1062
extern signed int pthread_spin_unlock(volatile signed int *);
// pthread_workqueue_additem_np
// file ./include/pthread_workqueue.h line 63
signed int pthread_workqueue_additem_np(struct _pthread_workqueue *workq, void (*workitem_func)(void *), void *workitem_arg, void **itemhandlep, unsigned int *gencountp);
// pthread_workqueue_additem_np::workitem_func$object
// 
void workitem_func$object(void *);
// pthread_workqueue_attr_destroy_np
// file src/api.c line 151
signed int pthread_workqueue_attr_destroy_np(struct anonymous$6 *attr);
// pthread_workqueue_attr_getovercommit_np
// file src/api.c line 160
signed int pthread_workqueue_attr_getovercommit_np(const struct anonymous$6 *attr, signed int *ocommp);
// pthread_workqueue_attr_getqueuepriority_np
// file src/api.c line 182
signed int pthread_workqueue_attr_getqueuepriority_np(struct anonymous$6 *attr, signed int *qpriop);
// pthread_workqueue_attr_init_np
// file ./include/pthread_workqueue.h line 67
signed int pthread_workqueue_attr_init_np(struct anonymous$6 *attr);
// pthread_workqueue_attr_setovercommit_np
// file ./include/pthread_workqueue.h line 77
signed int pthread_workqueue_attr_setovercommit_np(struct anonymous$6 *attr, signed int ocomm);
// pthread_workqueue_attr_setqueuepriority_np
// file ./include/pthread_workqueue.h line 71
signed int pthread_workqueue_attr_setqueuepriority_np(struct anonymous$6 *attr, signed int qprio);
// pthread_workqueue_create_np
// file ./include/pthread_workqueue.h line 60
signed int pthread_workqueue_create_np(struct _pthread_workqueue **workqp, const struct anonymous$6 *attr);
// pthread_workqueue_init_np
// file src/api.c line 46
signed int pthread_workqueue_init_np(void);
// pthread_workqueue_peek_np
// file src/api.c line 212
unsigned long int pthread_workqueue_peek_np(const char *key);
// pthread_workqueue_resume_np
// file src/api.c line 226
void pthread_workqueue_resume_np(void);
// pthread_workqueue_suspend_np
// file src/api.c line 218
void pthread_workqueue_suspend_np(void);
// ptwq_set_current_thread_priority
// file ./src/thread_rt.h line 32
void ptwq_set_current_thread_priority(signed int priority);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// readdir
// file /usr/include/dirent.h line 162
extern struct dirent * readdir(struct __dirstream *);
// reset_queue_mask
// file src/posix/manager.c line 313
static inline void reset_queue_mask(unsigned int wqlist_index);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous *);
// sem_timedwait
// file /usr/include/semaphore.h line 61
extern signed int sem_timedwait(union anonymous *, struct timespec *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous *);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous$7 *);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// threads_runnable
// file ./src/thread_info.h line 32
signed int threads_runnable(unsigned int *threads_running, unsigned int *threads_total);
// valid_workq
// file src/api.c line 37
static signed int valid_workq(struct _pthread_workqueue *workq);
// witem_alloc
// file src/private.h line 169
struct work * witem_alloc(void (*func)(void *), void *func_arg);
// witem_alloc::func$object
// 
void func$object(void *);
// witem_cache_cleanup
// file src/witem_cache.c line 68
void witem_cache_cleanup(void *value);
// witem_cache_init
// file src/witem_cache.c line 37
signed int witem_cache_init(void);
// witem_free
// file src/witem_cache.c line 61
void witem_free(struct work *wi);
// worker_idle_threshold_per_cpu
// file src/posix/manager.c line 98
static unsigned int worker_idle_threshold_per_cpu(void);
// worker_main
// file src/posix/manager.c line 430
static void * worker_main(void *unused);
// worker_start
// file src/posix/manager.c line 473
static signed int worker_start(void);
// worker_stop
// file src/posix/manager.c line 494
static signed int worker_stop(void);
// wqlist_scan
// file src/posix/manager.c line 335
static struct work * wqlist_scan(signed int *queue_priority, signed int skip_thread_exit_events);
// wqlist_scan_spin
// file src/posix/manager.c line 377
static struct work * wqlist_scan_spin(signed int *queue_priority);
// wqlist_scan_wait
// file src/posix/manager.c line 401
static struct work * wqlist_scan_wait(signed int *queue_priority);

struct anonymous$0
{
  // stqe_next
  struct work *stqe_next;
};

struct anonymous$2
{
  // stqh_first
  struct work *stqh_first;
  // stqh_last
  struct work **stqh_last;
};

struct anonymous$7
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$8
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

struct anonymous$6
{
  // sig
  unsigned int sig;
  // queueprio
  signed int queueprio;
  // overcommit
  signed int overcommit;
  // pad
  unsigned int pad[13l];
};

union anonymous
{
  // __size
  char __size[32l];
  // __align
  signed long int __align;
};

struct anonymous$3
{
  // runqueue_length
  volatile unsigned int runqueue_length;
  // count
  volatile unsigned int count;
  // idle
  volatile unsigned int idle;
  // sb_sem
  union anonymous sb_sem;
  // sb_suspend
  unsigned int sb_suspend;
};

union anonymous$5
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$1
{
  // __data
  struct anonymous$8 __data;
  // __size
  char __size[48l];
  // __align
  signed long long int __align;
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

union anonymous$4
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

struct _pthread_workqueue
{
  // sig
  unsigned int sig;
  // flags
  unsigned int flags;
  // queueprio
  signed int queueprio;
  // overcommit
  signed int overcommit;
  // wqlist_index
  unsigned int wqlist_index;
  // item_listhead
  struct anonymous$2 item_listhead;
  // mtx
  volatile signed int mtx;
};

struct dirent
{
  // d_ino
  unsigned long int d_ino;
  // d_off
  signed long int d_off;
  // d_reclen
  unsigned short int d_reclen;
  // d_type
  unsigned char d_type;
  // d_name
  char d_name[256l];
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rlimit
{
  // rlim_cur
  unsigned long int rlim_cur;
  // rlim_max
  unsigned long int rlim_max;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
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

struct work
{
  // item_entry
  struct anonymous$0 item_entry;
  // func
  void (*func)(void *);
  // func_arg
  void *func_arg;
  // flags
  unsigned int flags;
  // gencount
  unsigned int gencount;
};

struct wq_event
{
  // queue_index
  unsigned int queue_index;
  // start_time
  unsigned long int start_time;
};

struct wq_event_generator
{
  // wq
  struct _pthread_workqueue *wq;
  // wq_events
  struct wq_event *wq_events;
};

struct wq_statistics
{
  // min
  unsigned long int min;
  // max
  unsigned long int max;
  // avg
  double avg;
  // total
  unsigned long int total;
  // count
  unsigned int count;
  // count_over_threshold
  unsigned int count_over_threshold;
  // distribution
  unsigned int distribution[20l];
};


// DEBUG_WORKQUEUE
// file src/api.c line 33
signed int DEBUG_WORKQUEUE = 0;
// PWQ_ACTIVE_CPU
// file src/api.c line 32
unsigned int PWQ_ACTIVE_CPU = (unsigned int)0;
// PWQ_RT_THREADS
// file src/posix/manager.c line 41
unsigned int PWQ_RT_THREADS = (unsigned int)0;
// PWQ_SPIN_THREADS
// file src/posix/manager.c line 42
unsigned int PWQ_SPIN_THREADS = (unsigned int)0;
// WORKQUEUE_DEBUG_IDENT
// file src/api.c line 34
char *WORKQUEUE_DEBUG_IDENT = "WQ";
// cpu_count
// file src/posix/manager.c line 56
static unsigned int cpu_count;
// current_threads_spinning
// file src/posix/manager.c line 43
volatile unsigned int current_threads_spinning = (volatile unsigned int)0;
// detached_attr
// file src/posix/manager.c line 76
static union pthread_attr_t detached_attr;
// events_processed
// file testing/latency/latency.c line 45
static unsigned int events_processed;
// generator_condition
// file testing/latency/latency.c line 44
union anonymous$1 generator_condition;
// generator_mutex
// file testing/latency/latency.c line 43
union anonymous$4 generator_mutex;
// global_statistics
// file testing/latency/latency.c line 40
struct wq_statistics global_statistics;
// global_stats_used
// file testing/latency/latency.c line 41
unsigned int global_stats_used = (unsigned int)0;
// ocwq
// file src/posix/manager.c line 62
static struct _pthread_workqueue *ocwq[31l];
// ocwq_has_work
// file src/posix/manager.c line 65
static union anonymous$1 ocwq_has_work;
// ocwq_idle_threads
// file src/posix/manager.c line 66
static unsigned int ocwq_idle_threads;
// ocwq_mask
// file src/posix/manager.c line 63
static signed int ocwq_mask;
// ocwq_mtx
// file src/posix/manager.c line 64
static union anonymous$4 ocwq_mtx;
// ocwq_signal_count
// file src/posix/manager.c line 67
static unsigned int ocwq_signal_count;
// pending_thread_create
// file src/posix/manager.c line 59
static unsigned int pending_thread_create;
// percentiles
// file testing/latency/latency.c line 48
double percentiles[8l] = { 50.0, 80.0, 98.0, 99.0, 99.5, 99.8, 99.9, 99.99 };
// real_end
// file testing/latency/latency.c line 49
unsigned long int real_end;
// real_start
// file testing/latency/latency.c line 49
unsigned long int real_start;
// scoreboard
// file src/posix/manager.c line 84
static struct anonymous$3 scoreboard;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// worker_idle_threshold
// file src/posix/manager.c line 58
static unsigned int worker_idle_threshold;
// worker_min
// file src/posix/manager.c line 57
static unsigned int worker_min;
// workqueue_generator
// file testing/latency/latency.c line 38
struct wq_event_generator workqueue_generator[1l];
// workqueue_statistics
// file testing/latency/latency.c line 37
struct wq_statistics workqueue_statistics[3l];
// workqueues
// file testing/latency/latency.c line 36
struct _pthread_workqueue *workqueues[3l];
// wqlist
// file src/posix/manager.c line 70
static struct _pthread_workqueue *wqlist[31l];
// wqlist_has_manager
// file src/posix/manager.c line 75
static signed int wqlist_has_manager;
// wqlist_has_work
// file src/posix/manager.c line 74
static union anonymous$1 wqlist_has_work;
// wqlist_mask
// file src/posix/manager.c line 71
static volatile unsigned int wqlist_mask;
// wqlist_mtx
// file src/posix/manager.c line 72
static union anonymous$4 wqlist_mtx;

// _event_tick
// file testing/latency/latency.c line 177
static void _event_tick(void *context)
{
  struct wq_event *current_event;
  signed long int i;
  signed long int generator_workqueue = (signed long int)context;
  i = (signed long int)0;
  for( ; !(i >= 100l); i = i + 1l)
  {
    current_event = &workqueue_generator[generator_workqueue].wq_events[i];
    current_event->start_time=gettime();
    current_event->queue_index = (unsigned int)(current_event->start_time % (unsigned long int)3);
    pthread_workqueue_additem_np(workqueues[(signed long int)current_event->queue_index], _process_data, (void *)current_event, (void **)(void *)0, (unsigned int *)(void *)0);
  }
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// _gather_statistics
// file testing/latency/latency.c line 250
static void _gather_statistics(unsigned long int queue_index)
{
  unsigned long int i;
  if(workqueue_statistics[(signed long int)queue_index].count >= 1u)
  {
    global_stats_used = global_stats_used + 1u;
    global_statistics.avg = ((double)global_statistics.count * global_statistics.avg + workqueue_statistics[(signed long int)queue_index].avg * (double)workqueue_statistics[(signed long int)queue_index].count) / (double)(global_statistics.count + workqueue_statistics[(signed long int)queue_index].count);
    global_statistics.total = global_statistics.total + workqueue_statistics[(signed long int)queue_index].total;
    global_statistics.count = global_statistics.count + workqueue_statistics[(signed long int)queue_index].count;
    if(global_statistics.min == 0ul || !(workqueue_statistics[(signed long int)queue_index].min >= global_statistics.min))
      global_statistics.min = workqueue_statistics[(signed long int)queue_index].min;

    if(!(global_statistics.max >= workqueue_statistics[(signed long int)queue_index].max))
      global_statistics.max = workqueue_statistics[(signed long int)queue_index].max;

    i = (unsigned long int)0;
    for( ; !(i >= 20ul); i = i + 1ul)
      global_statistics.distribution[(signed long int)i] = global_statistics.distribution[(signed long int)i] + workqueue_statistics[(signed long int)queue_index].distribution[(signed long int)i];
  }

  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// _generate_simulated_events
// file testing/latency/latency.c line 194
static void _generate_simulated_events()
{
  unsigned long int i = (unsigned long int)0;
  unsigned long int tick;
  unsigned long int overhead;
  unsigned long int start;
  unsigned long int current;
  unsigned long int overhead_start = (unsigned long int)0;
  unsigned long int overhead_end = (unsigned long int)0;
  current=gettime();
  start = current;
  tick = (unsigned long int)0;
  for( ; !(tick >= 1000ul); tick = tick + 1ul)
  {
    current = overhead_end;
    start = current;
    overhead = overhead_end - overhead_start;
    if(overhead >= 10000001ul)
      printf("Warning: Event processing overhead > event time slice, readjust test parameters.\n");

    else
      my_sleep((unsigned long int)(1000000000 / 100) - overhead);
    overhead_start=gettime();
    events_processed = (unsigned int)(1 * 100);
    i = (unsigned long int)0;
    for( ; !(i >= 1ul); i = i + 1ul)
      pthread_workqueue_additem_np(workqueue_generator[(signed long int)i].wq, _event_tick, (void *)i, (void **)(void *)0, (unsigned int *)(void *)0);
    pthread_mutex_lock(&generator_mutex);
    while(events_processed >= 1u)
      pthread_cond_wait(&generator_condition, &generator_mutex);
    pthread_mutex_unlock(&generator_mutex);
    overhead_end=gettime();
  }
  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L12:
  ;
}

// _print_statistics
// file testing/latency/latency.c line 275
void _print_statistics()
{
  unsigned long int i;
  unsigned long int j;
  unsigned long int total_events = (unsigned long int)0;
  unsigned long int last_percentile = (unsigned long int)0;
  unsigned long int accumulated_percentile = (unsigned long int)0;
  printf("Collecting statistics...\n");
  i = (unsigned long int)0;
  for( ; !(i >= 3ul); i = i + 1ul)
    _gather_statistics(i);
  printf("Test is done, run time was %.3f seconds, %.1fM events generated and processed.\n", (double)((double)(real_end - real_start) / (double)1000000000), (double)total_events / 1000000.0);
  printf("Global dispatch queue aggregate statistics for %d queues: %dM events, min = %lu ns, avg = %.1f ns, max = %lu ns\n", global_stats_used, global_statistics.count / (unsigned int)1000000, global_statistics.min, global_statistics.avg, global_statistics.max);
  printf("\nDistribution:\n");
  i = (unsigned long int)0;
  for( ; !(i >= 20ul); i = i + 1ul)
  {
    printf("%3ld us: %d ", i, global_statistics.distribution[(signed long int)i]);
    j = (unsigned long int)0;
    for( ; (double)j < ((double)global_statistics.distribution[(signed long int)i] / (double)global_statistics.count) * 400.0; j = j + 1ul)
      printf("*");
    printf("\n");
  }
  printf("\nPercentiles:\n");
  i = (unsigned long int)0;
  for( ; !(i >= 20ul); i = i + 1ul)
  {
    for( ; !(last_percentile >= 8ul); last_percentile = last_percentile + 1ul)
    {
      if(!(100.0 * ((double)accumulated_percentile / (double)global_statistics.count) > percentiles[(signed long int)last_percentile]))
        break;

      printf("%.2f < %ld us\n", percentiles[(signed long int)last_percentile], i - (unsigned long int)1);
    }
    accumulated_percentile = accumulated_percentile + (unsigned long int)global_statistics.distribution[(signed long int)i];
  }
  for( ; !(last_percentile >= 8ul); last_percentile = last_percentile + 1ul)
  {
    if(!(100.0 * ((double)accumulated_percentile / (double)global_statistics.count) > percentiles[(signed long int)last_percentile]))
      break;

    printf("%.2f > %d us\n", percentiles[(signed long int)last_percentile], 20 - 1);
  }
  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L12:
  ;
}

// _process_data
// file testing/latency/latency.c line 143
static void _process_data(void *context)
{
  struct wq_event *event = (struct wq_event *)context;
  unsigned long int elapsed_time;
  unsigned long int return_value_gettime$1;
  return_value_gettime$1=gettime();
  elapsed_time = return_value_gettime$1 - event->start_time;
  workqueue_statistics[(signed long int)event->queue_index].avg = ((double)workqueue_statistics[(signed long int)event->queue_index].count * workqueue_statistics[(signed long int)event->queue_index].avg + (double)elapsed_time) / (double)(workqueue_statistics[(signed long int)event->queue_index].count + (unsigned int)1);
  workqueue_statistics[(signed long int)event->queue_index].total = workqueue_statistics[(signed long int)event->queue_index].total + elapsed_time;
  workqueue_statistics[(signed long int)event->queue_index].count = workqueue_statistics[(signed long int)event->queue_index].count + (unsigned int)1;
  _Bool tmp_if_expr$2;
  if(!(elapsed_time >= workqueue_statistics[(signed long int)event->queue_index].min))
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = workqueue_statistics[(signed long int)event->queue_index].min == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$2)
    workqueue_statistics[(signed long int)event->queue_index].min = elapsed_time;

  if(!(workqueue_statistics[(signed long int)event->queue_index].max >= elapsed_time))
    workqueue_statistics[(signed long int)event->queue_index].max = elapsed_time;

  if(!(elapsed_time / 1000ul >= 20ul))
    workqueue_statistics[(signed long int)event->queue_index].distribution[(signed long int)(signed int)(elapsed_time / (unsigned long int)1000)] = workqueue_statistics[(signed long int)event->queue_index].distribution[(signed long int)(signed int)(elapsed_time / (unsigned long int)1000)] + (unsigned int)1;

  else
    workqueue_statistics[(signed long int)event->queue_index].distribution[(signed long int)(20 - 1)] = workqueue_statistics[(signed long int)event->queue_index].distribution[(signed long int)(20 - 1)] + (unsigned int)1;
  unsigned int return_value___sync_sub_and_fetch$3;
  __CPROVER_atomic_begin();
  *(&events_processed) = *(&events_processed) - (unsigned int)1;
  return_value___sync_sub_and_fetch$3 = *(&events_processed);
  FENCE(WRfence);
  __CPROVER_atomic_end();
  if(return_value___sync_sub_and_fetch$3 == 0u)
  {
    pthread_mutex_lock(&generator_mutex);
    pthread_cond_signal(&generator_condition);
    pthread_mutex_unlock(&generator_mutex);
  }

  goto __CPROVER_DUMP_L8;

__CPROVER_DUMP_L8:
  ;
}

// _read_file
// file src/linux/thread_info.c line 75
static signed int _read_file(const char *path, char *result)
{
  signed int read_fd;
  signed int retval = -1;
  signed long int actual_read;
  read_fd=open(path, 00);
  signed long int return_value_syscall$1;
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  signed int *return_value___errno_location$4;
  signed long int return_value_syscall$5;
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  signed int *return_value___errno_location$8;
  signed long int return_value_syscall$10;
  signed long int return_value_syscall$11;
  signed int *return_value___errno_location$12;
  char *return_value_strerror$13;
  signed int *return_value___errno_location$14;
  if(read_fd == -1)
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$1=syscall((signed long int)186);
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        return_value___errno_location$4=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"_read_file", (const void *)"open()", return_value_strerror$3, *return_value___errno_location$4);
      }

    while((_Bool)0);
    return retval;
  }

  else
  {
    signed int return_value_fcntl$9;
    return_value_fcntl$9=fcntl(read_fd, 4, 04000);
    if(!(return_value_fcntl$9 == 0))
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$5=syscall((signed long int)186);
          return_value___errno_location$6=__errno_location();
          return_value_strerror$7=strerror(*return_value___errno_location$6);
          return_value___errno_location$8=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$5, (const void *)"_read_file", (const void *)"fcntl()", return_value_strerror$7, *return_value___errno_location$8);
        }

      while((_Bool)0);

    else
    {
      actual_read=read(read_fd, (void *)result, (unsigned long int)4096);
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$10=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): read %zu from %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$10, (const void *)"_read_file", (unsigned long int)actual_read, path);
        }

      while((_Bool)0);
      if(!(actual_read == 0l))
        retval = 0;

    }

  errout:
    ;
    signed int return_value_close$15;
    return_value_close$15=close(read_fd);
    if(!(return_value_close$15 == 0))
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$11=syscall((signed long int)186);
          return_value___errno_location$12=__errno_location();
          return_value_strerror$13=strerror(*return_value___errno_location$12);
          return_value___errno_location$14=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$11, (const void *)"_read_file", (const void *)"close()", return_value_strerror$13, *return_value___errno_location$14);
        }

      while((_Bool)0);

    return retval;
  }
}

// get_process_limit
// file src/posix/manager.c line 795
static unsigned int get_process_limit(void)
{
  struct rlimit rlim;
  signed int return_value_getrlimit$5;
  return_value_getrlimit$5=getrlimit((enum __rlimit_resource)__RLIMIT_NPROC, &rlim);
  signed long int return_value_syscall$1;
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  signed int *return_value___errno_location$4;
  if(!(return_value_getrlimit$5 >= 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$1=syscall((signed long int)186);
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        return_value___errno_location$4=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"get_process_limit", (const void *)"getrlimit(2)", return_value_strerror$3, *return_value___errno_location$4);
      }

    while((_Bool)0);
    return (unsigned int)100;
  }

  else
    return (unsigned int)rlim.rlim_max;
}

// get_runqueue_length
// file src/posix/manager.c line 854
static unsigned int get_runqueue_length(void)
{
  double loadavg;
  unsigned int return_value_linux_get_runqueue_length$1;
  return_value_linux_get_runqueue_length$1=linux_get_runqueue_length();
  return return_value_linux_get_runqueue_length$1;
  signed int return_value_getloadavg$6;
  return_value_getloadavg$6=getloadavg(&loadavg, 1);
  signed long int return_value_syscall$2;
  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  signed int *return_value___errno_location$5;
  if(!(return_value_getloadavg$6 == 1))
  {
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$2=syscall((signed long int)186);
      return_value___errno_location$3=__errno_location();
      return_value_strerror$4=strerror(*return_value___errno_location$3);
      return_value___errno_location$5=__errno_location();
      fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"get_runqueue_length", (const void *)"getloadavg(3)", return_value_strerror$4, *return_value___errno_location$5);
    }

    return (unsigned int)1;
  }

  else
  {
    if(loadavg < 0.000000 || loadavg > 2.147484e+9)
      loadavg = (double)1;

    return (unsigned int)(signed int)loadavg;
  }
}

// gettime
// file testing/latency/latency.c line 68
static unsigned long int gettime(void)
{
  struct timespec ts;
  signed int return_value_clock_gettime$2;
  return_value_clock_gettime$2=clock_gettime(1, &ts);
  signed int *return_value___errno_location$1;
  if(!(return_value_clock_gettime$2 == 0))
  {
    return_value___errno_location$1=__errno_location();
    fprintf(stderr, "Failed to get high resolution clock! errno = %d\n", *return_value___errno_location$1);
  }

  return (unsigned long int)(ts.tv_sec * (signed long int)1000000000 + ts.tv_nsec);
}

// linux_get_runqueue_length
// file ./src/linux/platform.h line 35
unsigned int linux_get_runqueue_length(void)
{
  signed int fd;
  char buf[16384l];
  char *p;
  signed long int len = (signed long int)0;
  unsigned int runqsz = (unsigned int)0;
  fd=open("/proc/stat", 00);
  signed long int return_value_syscall$1;
  signed int *return_value___errno_location$2;
  char *return_value_strerror$3;
  signed int *return_value___errno_location$4;
  signed long int return_value_syscall$5;
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  signed int *return_value___errno_location$8;
  if(!(fd >= 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$1=syscall((signed long int)186);
        return_value___errno_location$2=__errno_location();
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        return_value___errno_location$4=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"linux_get_runqueue_length", (const void *)"open() of /proc/stat", return_value_strerror$3, *return_value___errno_location$4);
      }

    while((_Bool)0);
    return (unsigned int)1;
  }

  else
  {
    len=read(fd, (void *)&buf, sizeof(char [16384l]) /*16384ul*/  - (unsigned long int)1);
    if(!(len >= 0l))
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$5=syscall((signed long int)186);
          return_value___errno_location$6=__errno_location();
          return_value_strerror$7=strerror(*return_value___errno_location$6);
          return_value___errno_location$8=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$5, (const void *)"linux_get_runqueue_length", (const void *)"read failed", return_value_strerror$7, *return_value___errno_location$8);
        }

      while((_Bool)0);

    else
    {
      p=strstr(buf, "procs_running");
      if(!(p == ((char *)NULL)))
      {
        signed int return_value_atoi$9;
        return_value_atoi$9=atoi(p + (signed long int)14);
        runqsz = (unsigned int)return_value_atoi$9;
      }

    }

  out:
    ;
    if(runqsz == 0u)
      runqsz = (unsigned int)1;

    close(fd);
    return runqsz;
  }
}

// main
// file testing/latency/latency.c line 319
signed int main(void)
{
  signed int i;
  struct anonymous$6 attr;
  memset((void *)&workqueues, 0, sizeof(struct _pthread_workqueue *[3l]) /*24ul*/ );
  memset((void *)&workqueue_statistics, 0, sizeof(struct wq_statistics [3l]) /*360ul*/ );
  memset((void *)&global_statistics, 0, sizeof(struct wq_statistics) /*120ul*/ );
  memset((void *)&workqueue_generator, 0, sizeof(struct wq_event_generator [1l]) /*16ul*/ );
  pthread_mutex_init(&generator_mutex, (const union anonymous$5 *)(void *)0);
  pthread_cond_init(&generator_condition, (const union anonymous$5 *)(void *)0);
  signed int return_value_pthread_workqueue_attr_init_np$1;
  return_value_pthread_workqueue_attr_init_np$1=pthread_workqueue_attr_init_np(&attr);
  if(!(return_value_pthread_workqueue_attr_init_np$1 == 0))
    fprintf(stderr, "Failed to set workqueue attributes\n");

  i = 0;
  for( ; !(i >= 1); i = i + 1)
  {
    signed int return_value_pthread_workqueue_attr_setqueuepriority_np$2;
    return_value_pthread_workqueue_attr_setqueuepriority_np$2=pthread_workqueue_attr_setqueuepriority_np(&attr, i);
    if(!(return_value_pthread_workqueue_attr_setqueuepriority_np$2 == 0))
      fprintf(stderr, "Failed to set workqueue priority\n");

    signed int return_value_pthread_workqueue_attr_setovercommit_np$3;
    return_value_pthread_workqueue_attr_setovercommit_np$3=pthread_workqueue_attr_setovercommit_np(&attr, 1);
    if(!(return_value_pthread_workqueue_attr_setovercommit_np$3 == 0))
      fprintf(stderr, "Failed to set workqueue overcommit\n");

    void *return_value_malloc$4;
    return_value_malloc$4=malloc(sizeof(struct wq_event) /*16ul*/  * (unsigned long int)100);
    workqueue_generator[(signed long int)i].wq_events = (struct wq_event *)return_value_malloc$4;
    memset((void *)workqueue_generator[(signed long int)i].wq_events, 0, sizeof(struct wq_event) /*16ul*/  * (unsigned long int)100);
    signed int return_value_pthread_workqueue_create_np$5;
    return_value_pthread_workqueue_create_np$5=pthread_workqueue_create_np(&workqueue_generator[(signed long int)i].wq, &attr);
    if(!(return_value_pthread_workqueue_create_np$5 == 0))
      fprintf(stderr, "Failed to create workqueue\n");

  }
  i = 0;
  for( ; !(i >= 3); i = i + 1)
  {
    signed int return_value_pthread_workqueue_attr_init_np$6;
    return_value_pthread_workqueue_attr_init_np$6=pthread_workqueue_attr_init_np(&attr);
    if(!(return_value_pthread_workqueue_attr_init_np$6 == 0))
      fprintf(stderr, "Failed to set workqueue attributes\n");

    signed int return_value_pthread_workqueue_attr_setqueuepriority_np$7;
    return_value_pthread_workqueue_attr_setqueuepriority_np$7=pthread_workqueue_attr_setqueuepriority_np(&attr, i);
    if(!(return_value_pthread_workqueue_attr_setqueuepriority_np$7 == 0))
      fprintf(stderr, "Failed to set workqueue priority\n");

    signed int return_value_pthread_workqueue_create_np$8;
    return_value_pthread_workqueue_create_np$8=pthread_workqueue_create_np(&workqueues[(signed long int)i], &attr);
    if(!(return_value_pthread_workqueue_create_np$8 == 0))
      fprintf(stderr, "Failed to create workqueue\n");

  }
  printf("%d workqueues, running for %d seconds at %d Hz, %d events per tick.\n", 3, 10, 100, 100);
  printf("Running %d generator threads at %dK events/s, the aggregated data rate is %dK events/s. %.2f MB is used for %.2fK events.\n", 1, (100 * 100) / 1000, (100 * 100 * 1) / 1000, (double)1 * ((double)(sizeof(struct wq_event) /*16ul*/  * (unsigned long int)100 + sizeof(struct _pthread_workqueue *[3l]) /*24ul*/ ) / (1024.0 * 1024.0)), (double)(1 * 100) / 1000.0);
  real_start=gettime();
  _generate_simulated_events();
  real_end=gettime();
  _print_statistics();
  return 0;
}

// manager_init
// file src/private.h line 162
signed int manager_init(void)
{
  wqlist_has_manager = 0;
  pthread_cond_init(&wqlist_has_work, (const union anonymous$5 *)(void *)0);
  pthread_mutex_init(&wqlist_mtx, (const union anonymous$5 *)(void *)0);
  wqlist_mask = (volatile unsigned int)0;
  pending_thread_create = (unsigned int)0;
  pthread_cond_init(&ocwq_has_work, (const union anonymous$5 *)(void *)0);
  pthread_mutex_init(&ocwq_mtx, (const union anonymous$5 *)(void *)0);
  ocwq_mask = 0;
  ocwq_idle_threads = (unsigned int)0;
  ocwq_signal_count = (unsigned int)0;
  witem_cache_init();
  unsigned int tmp_if_expr$2;
  signed long int return_value_sysconf$1;
  if(PWQ_ACTIVE_CPU >= 1u)
    tmp_if_expr$2 = PWQ_ACTIVE_CPU;

  else
  {
    return_value_sysconf$1=sysconf(84);
    tmp_if_expr$2 = (unsigned int)return_value_sysconf$1;
  }
  cpu_count = tmp_if_expr$2;
  pthread_attr_init(&detached_attr);
  pthread_attr_setdetachstate(&detached_attr, 1);
  signed int return_value_sem_init$7;
  return_value_sem_init$7=sem_init(&scoreboard.sb_sem, 0, (unsigned int)0);
  signed long int return_value_syscall$3;
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  signed int *return_value___errno_location$6;
  unsigned int tmp_if_expr$9;
  unsigned int return_value_worker_idle_threshold_per_cpu$8;
  signed long int return_value_syscall$10;
  signed int *return_value___errno_location$11;
  char *return_value_strerror$12;
  signed int *return_value___errno_location$13;
  if(!(return_value_sem_init$7 == 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$3=syscall((signed long int)186);
        return_value___errno_location$4=__errno_location();
        return_value_strerror$5=strerror(*return_value___errno_location$4);
        return_value___errno_location$6=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$3, (const void *)"manager_init", (const void *)"sem_init()", return_value_strerror$5, *return_value___errno_location$6);
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    scoreboard.count = (volatile unsigned int)0;
    scoreboard.idle = (volatile unsigned int)0;
    scoreboard.sb_suspend = (unsigned int)0;
    worker_min = (unsigned int)2;
    if(PWQ_ACTIVE_CPU >= 1u)
      tmp_if_expr$9 = PWQ_ACTIVE_CPU;

    else
    {
      return_value_worker_idle_threshold_per_cpu$8=worker_idle_threshold_per_cpu();
      tmp_if_expr$9 = return_value_worker_idle_threshold_per_cpu$8;
    }
    worker_idle_threshold = tmp_if_expr$9;
    signed int return_value_pthread_atfork$14;
    return_value_pthread_atfork$14=pthread_atfork((void (*)(void))(void *)0, (void (*)(void))(void *)0, manager_reinit);
    if(!(return_value_pthread_atfork$14 >= 0))
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$10=syscall((signed long int)186);
          return_value___errno_location$11=__errno_location();
          return_value_strerror$12=strerror(*return_value___errno_location$11);
          return_value___errno_location$13=__errno_location();
          fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$10, (const void *)"manager_init", (const void *)"pthread_atfork()", return_value_strerror$12, *return_value___errno_location$13);
        }

      while((_Bool)0);
      return -1;
    }

    else
      return 0;
  }
}

// manager_main
// file src/posix/manager.c line 539
static void * manager_main(void *unused)
{
  unsigned int runqueue_length_max = cpu_count;
  unsigned int worker_max;
  unsigned int threads_total = (unsigned int)0;
  unsigned int current_thread_count = (unsigned int)0;
  unsigned int worker_idle_seconds_accumulated = (unsigned int)0;
  unsigned int max_threads_to_stop = (unsigned int)0;
  unsigned int i;
  unsigned int idle_surplus_threads = (unsigned int)0;
  signed int sem_timedwait_rv = 0;
  struct anonymous$7 sigmask;
  struct timespec ts;
  struct timeval tp;
  worker_max=get_process_limit();
  scoreboard.runqueue_length=get_runqueue_length();
  sigfillset(&sigmask);
  pthread_sigmask(0, &sigmask, (struct anonymous$7 *)(void *)0);
  i = (unsigned int)0;
  for( ; !(i >= worker_min); i = i + 1u)
    worker_start();
  signed long int return_value_syscall$1;
  signed long int return_value_syscall$2;
  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  signed int *return_value___errno_location$5;
  signed long int return_value_syscall$8;
  signed int *return_value___errno_location$9;
  char *return_value_strerror$10;
  signed int *return_value___errno_location$11;
  signed long int return_value_syscall$13;
  signed long int return_value_syscall$14;
  signed long int return_value_syscall$15;
  signed int *return_value___errno_location$16;
  char *return_value_strerror$17;
  signed int *return_value___errno_location$18;
  signed long int return_value_syscall$20;
  signed long int return_value_syscall$21;
  signed long int return_value_syscall$23;
  signed long int return_value_syscall$24;
  signed long int return_value_syscall$25;
  signed long int return_value_syscall$26;
  signed long int return_value_syscall$27;
  signed long int return_value_syscall$28;
  signed long int return_value_syscall$29;
  while((_Bool)1)
  {
    if(scoreboard.sb_suspend == 0u)
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"manager_main", (const void *)"manager is sleeping");
        }

      while((_Bool)0);
      signed int return_value_gettimeofday$6;
      return_value_gettimeofday$6=gettimeofday(&tp, (struct timezone *)(void *)0);
      if(!(return_value_gettimeofday$6 == 0))
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall$2=syscall((signed long int)186);
            return_value___errno_location$3=__errno_location();
            return_value_strerror$4=strerror(*return_value___errno_location$3);
            return_value___errno_location$5=__errno_location();
            fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"manager_main", (const void *)"gettimeofday()", return_value_strerror$4, *return_value___errno_location$5);
          }

        while((_Bool)0);

      ts.tv_sec = tp.tv_sec;
      ts.tv_nsec = tp.tv_usec * (signed long int)1000;
      ts.tv_sec = ts.tv_sec + (signed long int)1;
      sem_timedwait_rv=sem_timedwait(&scoreboard.sb_sem, &ts);
      if(!(sem_timedwait_rv == 0))
      {
        signed int *return_value___errno_location$7;
        return_value___errno_location$7=__errno_location();
        sem_timedwait_rv = *return_value___errno_location$7;
        signed int *return_value___errno_location$12;
        return_value___errno_location$12=__errno_location();
        if(!(*return_value___errno_location$12 == 110))
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall$8=syscall((signed long int)186);
              return_value___errno_location$9=__errno_location();
              return_value_strerror$10=strerror(*return_value___errno_location$9);
              return_value___errno_location$11=__errno_location();
              fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$8, (const void *)"manager_main", (const void *)"sem_timedwait()", return_value_strerror$10, *return_value___errno_location$11);
            }

          while((_Bool)0);

      }

      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$13=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$13, (const void *)"manager_main", (const void *)"manager is awake");
        }

      while((_Bool)0);
    }

    else
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$14=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$14, (const void *)"manager_main", (const void *)"manager is suspending");
        }

      while((_Bool)0);
      signed int return_value_sem_wait$19;
      return_value_sem_wait$19=sem_wait(&scoreboard.sb_sem);
      if(!(return_value_sem_wait$19 == 0))
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall$15=syscall((signed long int)186);
            return_value___errno_location$16=__errno_location();
            return_value_strerror$17=strerror(*return_value___errno_location$16);
            return_value___errno_location$18=__errno_location();
            fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$15, (const void *)"manager_main", (const void *)"sem_wait()", return_value_strerror$17, *return_value___errno_location$18);
          }

        while((_Bool)0);

      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$20=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$20, (const void *)"manager_main", (const void *)"manager is resuming");
        }

      while((_Bool)0);
    }
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$21=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): idle=%u workers=%u max_workers=%u worker_min = %u\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$21, (const void *)"manager_main", scoreboard.idle, scoreboard.count, worker_max, worker_min);
      }

    while((_Bool)0);
    if(scoreboard.idle == 0u && pending_thread_create == 0u && scoreboard.count >= 1u)
    {
      if(!(scoreboard.count >= worker_idle_threshold))
        worker_start();

      else
        if(!(scoreboard.count >= worker_max))
        {
          signed int return_value_threads_runnable$22;
          return_value_threads_runnable$22=threads_runnable(&current_thread_count, &threads_total);
          if(!(return_value_threads_runnable$22 == 0))
            current_thread_count = (unsigned int)0;

          if(cpu_count >= current_thread_count)
          {
            scoreboard.runqueue_length=get_runqueue_length();
            if(runqueue_length_max >= scoreboard.runqueue_length)
            {
              if(scoreboard.idle == 0u)
                worker_start();

              else
                do
                  if(!(DEBUG_WORKQUEUE == 0))
                  {
                    return_value_syscall$23=syscall((signed long int)186);
                    fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$23, (const void *)"manager_main", (const void *)"skipped thread creation as we got an idle one racing us");
                  }

                while((_Bool)0);
            }

            else
              do
                if(!(DEBUG_WORKQUEUE == 0))
                {
                  return_value_syscall$24=syscall((signed long int)186);
                  fprintf(stderr, "%s [%d]: %s(): Not spawning worker thread, scoreboard.runqueue_length = %d > runqueue_length_max = %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$24, (const void *)"manager_main", scoreboard.runqueue_length, runqueue_length_max);
                }

              while((_Bool)0);
          }

          else
            do
              if(!(DEBUG_WORKQUEUE == 0))
              {
                return_value_syscall$25=syscall((signed long int)186);
                fprintf(stderr, "%s [%d]: %s(): Not spawning worker thread, thread_runnable = %d > cpu_count = %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$25, (const void *)"manager_main", current_thread_count, cpu_count);
              }

            while((_Bool)0);
        }

        else
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall$26=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): Not spawning worker thread, scoreboard.count = %d >= worker_max = %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$26, (const void *)"manager_main", scoreboard.count, worker_max);
            }

          while((_Bool)0);
    }

    else
      if(sem_timedwait_rv == 110)
      {
        if(!(worker_idle_threshold >= scoreboard.idle))
        {
          worker_idle_seconds_accumulated = worker_idle_seconds_accumulated + scoreboard.idle;
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall$27=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): worker_idle_seconds_accumulated = %d, scoreboard.idle = %d, scoreboard.count = %d\n\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$27, (const void *)"manager_main", worker_idle_seconds_accumulated, scoreboard.idle, scoreboard.count);
            }

          while((_Bool)0);
        }

        else
        {
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall$28=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$28, (const void *)"manager_main", (const void *)"Resetting worker_idle_seconds_accumulated");
            }

          while((_Bool)0);
          worker_idle_seconds_accumulated = (unsigned int)0;
        }
        max_threads_to_stop = worker_idle_seconds_accumulated / (unsigned int)15;
        if(max_threads_to_stop >= 1u)
        {
          worker_idle_seconds_accumulated = (unsigned int)0;
          idle_surplus_threads = scoreboard.idle - worker_idle_threshold;
          if(!(idle_surplus_threads >= max_threads_to_stop))
            max_threads_to_stop = idle_surplus_threads;

          i = (unsigned int)0;
          for( ; !(i >= max_threads_to_stop); i = i + 1u)
            if(!(worker_idle_threshold >= scoreboard.idle))
            {
              do
                if(!(DEBUG_WORKQUEUE == 0))
                {
                  return_value_syscall$29=syscall((signed long int)186);
                  fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$29, (const void *)"manager_main", (const void *)"Removing one thread from the thread pool");
                }

              while((_Bool)0);
              worker_stop();
            }

        }

      }

  }
  return (void *)0;
}

// manager_peek
// file src/private.h line 163
unsigned long int manager_peek(const char *key)
{
  unsigned long int rv;
  signed int return_value_strcmp$4;
  return_value_strcmp$4=strcmp(key, "combined_idle");
  signed int return_value_strcmp$3;
  signed int return_value_strcmp$2;
  signed long int return_value_syscall$1;
  if(return_value_strcmp$4 == 0)
  {
    rv = (unsigned long int)scoreboard.idle;
    if(!(worker_min >= scoreboard.idle))
      rv = rv - (unsigned long int)worker_min;

    rv = rv + (unsigned long int)ocwq_idle_threads;
  }

  else
  {
    return_value_strcmp$3=strcmp(key, "idle");
    if(return_value_strcmp$3 == 0)
    {
      rv = (unsigned long int)scoreboard.idle;
      if(!(worker_min >= scoreboard.idle))
        rv = rv - (unsigned long int)worker_min;

    }

    else
    {
      return_value_strcmp$2=strcmp(key, "ocomm_idle");
      if(return_value_strcmp$2 == 0)
        rv = (unsigned long int)ocwq_idle_threads;

      else
      {
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall$1=syscall((signed long int)186);
            fprintf(stderr, "%s [%d]: %s(): invalid key: %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"manager_peek", key);
          }

        while((_Bool)0);
        abort();
      }
    }
  }
  return rv;
}

// manager_reinit
// file src/posix/manager.c line 127
static void manager_reinit(void)
{
  signed int return_value_manager_init$1;
  return_value_manager_init$1=manager_init();
  if(!(return_value_manager_init$1 >= 0))
    abort();

}

// manager_resume
// file src/private.h line 165
void manager_resume(void)
{
  if(!(scoreboard.sb_suspend == 0u))
  {
    scoreboard.sb_suspend = (unsigned int)0;
    __sync_synchronize();
    sem_post(&scoreboard.sb_sem);
  }

}

// manager_start
// file src/posix/manager.c line 694
static void manager_start(void)
{
  unsigned long int tid;
  signed int rv;
  signed long int return_value_syscall$1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"manager_start", (const void *)"starting the manager thread");
    }

  while((_Bool)0);
  signed long int return_value_syscall$2;
  do
  {
    rv=pthread_create(&tid, &detached_attr, manager_main, (void *)0);
    if(rv == 11)
      sleep((unsigned int)1);

    else
      if(!(rv == 0))
      {
        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall$2=syscall((signed long int)186);
            fprintf(stderr, "%s [%d]: %s(): thread creation failed, rv=%d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"manager_start", rv);
          }

        while((_Bool)0);
        abort();
      }

  }
  while(!(rv == 0));
  wqlist_has_manager = 1;
}

// manager_suspend
// file src/private.h line 164
void manager_suspend(void)
{
  while(wqlist_has_manager == 0)
    sleep((unsigned int)1);
  if(scoreboard.sb_suspend == 0u)
    scoreboard.sb_suspend = (unsigned int)1;

}

// manager_workqueue_additem
// file src/private.h line 167
void manager_workqueue_additem(struct _pthread_workqueue *workq, struct work *witem)
{
  unsigned int wqlist_index_bit = (unsigned int)(0x1 << workq->wqlist_index);
  signed long int return_value_syscall$1;
  if(!(workq->overcommit == 0))
  {
    unsigned long int tid;
    pthread_mutex_lock(&ocwq_mtx);
    pthread_spin_lock(&workq->mtx);
    do
    {
      witem->item_entry.stqe_next = (struct work *)(void *)0;
      *(&workq->item_listhead)->stqh_last = witem;
      (&workq->item_listhead)->stqh_last = &witem->item_entry.stqe_next;
    }
    while((_Bool)0);
    pthread_spin_unlock(&workq->mtx);
    ocwq_mask = ocwq_mask | (signed int)wqlist_index_bit;
    if(ocwq_idle_threads >= 1u)
    {
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"manager_workqueue_additem", (const void *)"signaling an idle worker");
        }

      while((_Bool)0);
      pthread_cond_signal(&ocwq_has_work);
      ocwq_idle_threads = ocwq_idle_threads - 1u;
      ocwq_signal_count = ocwq_signal_count + 1u;
    }

    else
      pthread_create(&tid, &detached_attr, overcommit_worker_main, (void *)0);
    pthread_mutex_unlock(&ocwq_mtx);
  }

  else
  {
    pthread_spin_lock(&workq->mtx);
    if(workq->item_listhead.stqh_first == ((struct work *)NULL))
    {
      unsigned int new_mask;
      __CPROVER_atomic_begin();
      *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
      new_mask = *(&wqlist_mask);
      FENCE(WRfence);
      __CPROVER_atomic_end();
      while((new_mask & wqlist_index_bit) == 0u)
      {
        asm("pause");
        __CPROVER_atomic_begin();
        *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
        new_mask = *(&wqlist_mask);
        FENCE(WRfence);
        __CPROVER_atomic_end();
      }
    }

    do
    {
      witem->item_entry.stqe_next = (struct work *)(void *)0;
      *(&workq->item_listhead)->stqh_last = witem;
      (&workq->item_listhead)->stqh_last = &witem->item_entry.stqe_next;
    }
    while((_Bool)0);
    pthread_spin_unlock(&workq->mtx);
    if(scoreboard.idle >= 1u)
      pthread_cond_signal(&wqlist_has_work);

  }
}

// manager_workqueue_create
// file src/private.h line 166
void manager_workqueue_create(struct _pthread_workqueue *workq)
{
  pthread_mutex_lock(&wqlist_mtx);
  if(workq->overcommit == 0)
  {
    if(wqlist_has_manager == 0)
      manager_start();

  }

  signed long int return_value_syscall$1;
  signed long int return_value_syscall$2;
  if(!(workq->overcommit == 0))
  {
    if(ocwq[(signed long int)workq->queueprio] == ((struct _pthread_workqueue *)NULL))
    {
      ocwq[(signed long int)workq->queueprio] = workq;
      workq->wqlist_index = (unsigned int)workq->queueprio;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): created workqueue (ocommit=1, prio=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"manager_workqueue_create", workq->queueprio);
        }

      while((_Bool)0);
    }

    else
    {
      printf("oc queue %d already exists\n", workq->queueprio);
      abort();
    }
  }

  else
    if(wqlist[(signed long int)workq->queueprio] == ((struct _pthread_workqueue *)NULL))
    {
      wqlist[(signed long int)workq->queueprio] = workq;
      workq->wqlist_index = (unsigned int)workq->queueprio;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$2=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): created workqueue (ocommit=0, prio=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"manager_workqueue_create", workq->queueprio);
        }

      while((_Bool)0);
    }

    else
    {
      printf("queue %d already exists\n", workq->queueprio);
      abort();
    }
  pthread_mutex_unlock(&wqlist_mtx);
}

// my_sleep
// file testing/latency/latency.c line 120
static void my_sleep(unsigned long int nanoseconds)
{
  struct timespec timeout0;
  struct timespec timeout1;
  struct timespec *tmp;
  struct timespec *t0 = &timeout0;
  struct timespec *t1 = &timeout1;
  t0->tv_sec = (signed long int)(nanoseconds / (unsigned long int)1000000000);
  t0->tv_nsec = (signed long int)(nanoseconds % (unsigned long int)1000000000);
  signed int return_value_nanosleep$1;
  signed int *return_value___errno_location$2;
  do
  {
    return_value_nanosleep$1=nanosleep(t0, t1);
    if(!(return_value_nanosleep$1 == -1))
      break;

    return_value___errno_location$2=__errno_location();
    if(!(*return_value___errno_location$2 == 4))
      break;

    tmp = t0;
    t0 = t1;
    t1 = tmp;
  }
  while((_Bool)1);
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// overcommit_worker_main
// file src/posix/manager.c line 244
static void * overcommit_worker_main(void *unused)
{
  struct timespec ts;
  struct _pthread_workqueue *workq;
  void (*func)(void *);
  void *func_arg;
  struct work *witem;
  signed int rv;
  signed int idx;
  struct anonymous$7 sigmask;
  sigfillset(&sigmask);
  pthread_sigmask(0, &sigmask, (struct anonymous$7 *)(void *)0);
  pthread_mutex_lock(&ocwq_mtx);
  signed long int return_value_syscall$1;
  signed long int return_value_syscall$2;
  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  signed int *return_value___errno_location$5;
  do
  {
    idx=ffs(ocwq_mask);
    if(idx >= 1)
    {
      workq = ocwq[(signed long int)(idx - 1)];
      witem = (&workq->item_listhead)->stqh_first;
      if(witem == ((struct work *)NULL))
        goto __CPROVER_DUMP_L5;

      do
      {
        (&workq->item_listhead)->stqh_first = (&workq->item_listhead)->stqh_first->item_entry.stqe_next;
        if(workq->item_listhead.stqh_first == ((struct work *)NULL))
          (&workq->item_listhead)->stqh_last = &(&workq->item_listhead)->stqh_first;

      }
      while((_Bool)0);
      if(workq->item_listhead.stqh_first == ((struct work *)NULL))
        ocwq_mask = ocwq_mask & ~(0x1 << workq->wqlist_index);

      pthread_mutex_unlock(&ocwq_mtx);
      func = witem->func;
      func_arg = witem->func_arg;
      witem_free(witem);
      func(func_arg);
      pthread_mutex_lock(&ocwq_mtx);
    }

    else
    {

    __CPROVER_DUMP_L5:
      ;
      clock_gettime(0, &ts);
      ts.tv_sec = ts.tv_sec + (signed long int)15;
      ocwq_idle_threads = ocwq_idle_threads + 1u;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$1=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): waiting for work (idle=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"overcommit_worker_main", ocwq_idle_threads);
        }

      while((_Bool)0);
      rv=pthread_cond_timedwait(&ocwq_has_work, &ocwq_mtx, &ts);
      if(ocwq_signal_count >= 1u)
        ocwq_signal_count = ocwq_signal_count - 1u;

      else
      {
        if(rv == 0 || rv == 110)
        {
          ocwq_idle_threads = ocwq_idle_threads - 1u;
          pthread_mutex_unlock(&ocwq_mtx);
          break;
        }

        do
          if(!(DEBUG_WORKQUEUE == 0))
          {
            return_value_syscall$2=syscall((signed long int)186);
            return_value___errno_location$3=__errno_location();
            return_value_strerror$4=strerror(*return_value___errno_location$3);
            return_value___errno_location$5=__errno_location();
            fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"overcommit_worker_main", (const void *)"pthread_cond_timedwait", return_value_strerror$4, *return_value___errno_location$5);
          }

        while((_Bool)0);
        abort();
        break;
      }
    }
  }
  while((_Bool)1);
  signed long int return_value_syscall$6;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$6=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): worker exiting (idle=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$6, (const void *)"overcommit_worker_main", ocwq_idle_threads);
    }

  while((_Bool)0);
  pthread_exit((void *)0);
  return (void *)0;
}

// pthread_workqueue_additem_np
// file ./include/pthread_workqueue.h line 63
signed int pthread_workqueue_additem_np(struct _pthread_workqueue *workq, void (*workitem_func)(void *), void *workitem_arg, void **itemhandlep, unsigned int *gencountp)
{
  struct work *witem;
  signed int return_value_valid_workq$1;
  return_value_valid_workq$1=valid_workq(workq);
  signed long int return_value_syscall$2;
  if(workitem_func == ((void (*)(void *))NULL) || return_value_valid_workq$1 == 0)
    return 22;

  else
  {
    witem=witem_alloc(workitem_func, workitem_arg);
    if(!(itemhandlep == ((void **)NULL)))
      *itemhandlep = (void *)(void **)witem;

    if(!(gencountp == ((unsigned int *)NULL)))
      *gencountp = witem->gencount;

    manager_workqueue_additem(workq, witem);
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$2=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): added item %p to queue %p\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"pthread_workqueue_additem_np", (void *)witem, (void *)workq);
      }

    while((_Bool)0);
    return 0;
  }
}

// pthread_workqueue_attr_destroy_np
// file src/api.c line 151
signed int pthread_workqueue_attr_destroy_np(struct anonymous$6 *attr)
{
  if(attr->sig == 0xBEBEBEBE)
    return 0;

  else
    return 22;
}

// pthread_workqueue_attr_getovercommit_np
// file src/api.c line 160
signed int pthread_workqueue_attr_getovercommit_np(const struct anonymous$6 *attr, signed int *ocommp)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    *ocommp = attr->overcommit;
    return 0;
  }

  else
    return 22;
}

// pthread_workqueue_attr_getqueuepriority_np
// file src/api.c line 182
signed int pthread_workqueue_attr_getqueuepriority_np(struct anonymous$6 *attr, signed int *qpriop)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    *qpriop = attr->queueprio;
    return 0;
  }

  else
    return 22;
}

// pthread_workqueue_attr_init_np
// file ./include/pthread_workqueue.h line 67
signed int pthread_workqueue_attr_init_np(struct anonymous$6 *attr)
{
  attr->queueprio = 1;
  attr->sig = 0xBEBEBEBE;
  attr->overcommit = 0;
  return 0;
}

// pthread_workqueue_attr_setovercommit_np
// file ./include/pthread_workqueue.h line 77
signed int pthread_workqueue_attr_setovercommit_np(struct anonymous$6 *attr, signed int ocomm)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    attr->overcommit = ocomm;
    return 0;
  }

  else
    return 22;
}

// pthread_workqueue_attr_setqueuepriority_np
// file ./include/pthread_workqueue.h line 71
signed int pthread_workqueue_attr_setqueuepriority_np(struct anonymous$6 *attr, signed int qprio)
{
  if(attr->sig == 0xBEBEBEBE)
  {
    if(qprio == 0 || qprio == 1 || qprio == 2 || qprio == 3)
    {
      attr->queueprio = qprio;
      return 0;
    }

    return 22;
  }

  else
    return 22;
}

// pthread_workqueue_create_np
// file ./include/pthread_workqueue.h line 60
signed int pthread_workqueue_create_np(struct _pthread_workqueue **workqp, const struct anonymous$6 *attr)
{
  struct _pthread_workqueue *workq;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  signed long int return_value_syscall$4;
  if(!(attr == ((const struct anonymous$6 *)NULL)))
  {
    if(!(attr->sig == 0xBEBEBEBE))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = attr->queueprio < 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = attr->queueprio >= 4 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr$2)
      goto __CPROVER_DUMP_L5;

    return 22;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    void *return_value_calloc$3;
    return_value_calloc$3=calloc((unsigned long int)1, sizeof(struct _pthread_workqueue) /*48ul*/ );
    workq = (struct _pthread_workqueue *)return_value_calloc$3;
    if(workq == ((struct _pthread_workqueue *)NULL))
      return 12;

    else
    {
      workq->sig = 0xBEBEBEBE;
      workq->flags = (unsigned int)0;
      do
      {
        (&workq->item_listhead)->stqh_first = (struct work *)(void *)0;
        (&workq->item_listhead)->stqh_last = &(&workq->item_listhead)->stqh_first;
      }
      while((_Bool)0);
      pthread_spin_init(&workq->mtx, 0);
      if(attr == ((const struct anonymous$6 *)NULL))
      {
        workq->queueprio = 1;
        workq->overcommit = 0;
      }

      else
      {
        workq->queueprio = attr->queueprio;
        workq->overcommit = attr->overcommit;
      }
      manager_workqueue_create(workq);
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$4=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): created queue %p\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$4, (const void *)"pthread_workqueue_create_np", (void *)workq);
        }

      while((_Bool)0);
      *workqp = workq;
      return 0;
    }
  }
}

// pthread_workqueue_init_np
// file src/api.c line 46
signed int pthread_workqueue_init_np(void)
{
  signed int tmp_if_expr$6;
  char *return_value_getenv$4;
  signed int return_value_atoi$5;
  char *return_value_getenv$7;
  signed int return_value_atoi$8;
  signed long int return_value_syscall$11;
  static signed int pwq_initialized = 0;
  if(!(pwq_initialized == 0))
    return 0;

  else
  {
    char *return_value_getenv$1;
    return_value_getenv$1=getenv("PWQ_DEBUG");
    DEBUG_WORKQUEUE = return_value_getenv$1 == (char *)(void *)0 ? 0 : 1;
    char *return_value_getenv$2;
    return_value_getenv$2=getenv("PWQ_RT_THREADS");
    PWQ_RT_THREADS = (unsigned int)(return_value_getenv$2 == (char *)(void *)0 ? 0 : 1);
    char *return_value_getenv$3;
    return_value_getenv$3=getenv("PWQ_ACTIVE_CPU");
    if(return_value_getenv$3 == ((char *)NULL))
      tmp_if_expr$6 = 0;

    else
    {
      return_value_getenv$4=getenv("PWQ_ACTIVE_CPU");
      return_value_atoi$5=atoi(return_value_getenv$4);
      tmp_if_expr$6 = return_value_atoi$5;
    }
    PWQ_ACTIVE_CPU = (unsigned int)tmp_if_expr$6;
    char *return_value_getenv$9;
    return_value_getenv$9=getenv("PWQ_SPIN_THREADS");
    if(!(return_value_getenv$9 == ((char *)NULL)))
    {
      return_value_getenv$7=getenv("PWQ_SPIN_THREADS");
      return_value_atoi$8=atoi(return_value_getenv$7);
      PWQ_SPIN_THREADS = (unsigned int)return_value_atoi$8;
    }

    signed int return_value_manager_init$10;
    return_value_manager_init$10=manager_init();
    if(!(return_value_manager_init$10 >= 0))
      return -1;

    else
    {
      pwq_initialized = 1;
      do
        if(!(DEBUG_WORKQUEUE == 0))
        {
          return_value_syscall$11=syscall((signed long int)186);
          fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$11, (const void *)"pthread_workqueue_init_np", (const void *)"pthread_workqueue library initialized");
        }

      while((_Bool)0);
      return 0;
    }
  }
}

// pthread_workqueue_peek_np
// file src/api.c line 212
unsigned long int pthread_workqueue_peek_np(const char *key)
{
  unsigned long int return_value_manager_peek$1;
  return_value_manager_peek$1=manager_peek(key);
  return return_value_manager_peek$1;
}

// pthread_workqueue_resume_np
// file src/api.c line 226
void pthread_workqueue_resume_np(void)
{
  manager_resume();
}

// pthread_workqueue_suspend_np
// file src/api.c line 218
void pthread_workqueue_suspend_np(void)
{
  manager_suspend();
}

// ptwq_set_current_thread_priority
// file ./src/thread_rt.h line 32
void ptwq_set_current_thread_priority(signed int priority)
{
  ;
}

// reset_queue_mask
// file src/posix/manager.c line 313
static inline void reset_queue_mask(unsigned int wqlist_index)
{
  unsigned int wqlist_index_bit = (unsigned int)(0x1 << wqlist_index);
  unsigned int new_mask;
  __CPROVER_atomic_begin();
  *(&wqlist_mask) = *(&wqlist_mask) & ~wqlist_index_bit;
  new_mask = *(&wqlist_mask);
  FENCE(WRfence);
  __CPROVER_atomic_end();
  while(!((unsigned int)(signed long int)(new_mask & wqlist_index_bit) == 0u))
  {
    asm("pause");
    __CPROVER_atomic_begin();
    *(&wqlist_mask) = *(&wqlist_mask) & ~wqlist_index_bit;
    new_mask = *(&wqlist_mask);
    FENCE(WRfence);
    __CPROVER_atomic_end();
  }
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// threads_runnable
// file ./src/thread_info.h line 32
signed int threads_runnable(unsigned int *threads_running, unsigned int *threads_total)
{
  struct __dirstream *dip;
  struct dirent *dit;
  const char *task_path = "/proc/self/task";
  char thread_path[1024l];
  char thread_data[4097l];
  char dummy[4097l];
  char state;
  signed int pid;
  unsigned int running_count = (unsigned int)0;
  unsigned int total_count = (unsigned int)0;
  signed long int return_value_syscall$1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"threads_runnable", (const void *)"Checking threads_runnable()");
    }

  while((_Bool)0);
  dip=opendir(task_path);
  signed long int return_value_syscall$2;
  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  signed int *return_value___errno_location$5;
  signed long int return_value_syscall$6;
  signed long int return_value_syscall$7;
  signed long int return_value_syscall$11;
  if(dip == ((struct __dirstream *)NULL))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$2=syscall((signed long int)186);
        return_value___errno_location$3=__errno_location();
        return_value_strerror$4=strerror(*return_value___errno_location$3);
        return_value___errno_location$5=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"threads_runnable", (const void *)"opendir", return_value_strerror$4, *return_value___errno_location$5);
      }

    while((_Bool)0);
    return -1;
  }

  else
  {
    do
    {
      dit=readdir(dip);
      if(dit == ((struct dirent *)NULL))
        break;

      memset((void *)thread_data, 0, sizeof(char [4097l]) /*4097ul*/ );
      sprintf(thread_path, "%s/%s/stat", task_path, (const void *)dit->d_name);
      signed int return_value__read_file$9;
      return_value__read_file$9=_read_file(thread_path, thread_data);
      if(return_value__read_file$9 == 0)
      {
        signed int return_value_sscanf$8;
        return_value_sscanf$8=sscanf(thread_data, "%d %s %c", &pid, (const void *)dummy, &state);
        if(return_value_sscanf$8 == 3)
        {
          total_count = total_count + 1u;
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall$6=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): The state for thread %s is %c\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$6, (const void *)"threads_runnable", (const void *)dit->d_name, state);
            }

          while((_Bool)0);
          if((signed int)state == 82)
            running_count = running_count + 1u;

        }

        else
          do
            if(!(DEBUG_WORKQUEUE == 0))
            {
              return_value_syscall$7=syscall((signed long int)186);
              fprintf(stderr, "%s [%d]: %s(): Failed to scan state for thread %s (%s)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$7, (const void *)"threads_runnable", (const void *)dit->d_name, (const void *)thread_data);
            }

          while((_Bool)0);
      }

    }
    while((_Bool)1);
    signed int return_value_closedir$10;
    return_value_closedir$10=closedir(dip);
    if(return_value_closedir$10 == -1)
      perror("closedir");

    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$11=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): Running count is %d\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$11, (const void *)"threads_runnable", running_count);
      }

    while((_Bool)0);
    *threads_running = running_count;
    *threads_total = total_count;
    return 0;
  }
}

// valid_workq
// file src/api.c line 37
static signed int valid_workq(struct _pthread_workqueue *workq)
{
  if(workq->sig == 0xBEBEBEBE)
    return 1;

  else
    return 0;
}

// witem_alloc
// file src/private.h line 169
struct work * witem_alloc(void (*func)(void *), void *func_arg)
{
  struct work *witem;
  void *return_value_malloc$1;
  do
  {
    return_value_malloc$1=malloc(sizeof(struct work) /*32ul*/  + (unsigned long int)(64 - 1) & (unsigned long int)~(64 - 1));
    witem = (struct work *)(void *)(signed long int)return_value_malloc$1;
    if(!(witem == ((struct work *)NULL)))
      break;

    sleep((unsigned int)1);
  }
  while((_Bool)1);
  witem->gencount = (unsigned int)0;
  witem->flags = (unsigned int)0;
  witem->item_entry.stqe_next = ((struct work *)NULL);
  witem->func = func;
  witem->func_arg = func_arg;
  return witem;
}

// witem_cache_cleanup
// file src/witem_cache.c line 68
void witem_cache_cleanup(void *value)
{
  (void)value;
}

// witem_cache_init
// file src/witem_cache.c line 37
signed int witem_cache_init(void)
{
  return 0;
}

// witem_free
// file src/witem_cache.c line 61
void witem_free(struct work *wi)
{
  signed long int return_value_syscall$1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): freed work item %p\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"witem_free", wi);
    }

  while((_Bool)0);
  free((void *)wi);
}

// worker_idle_threshold_per_cpu
// file src/posix/manager.c line 98
static unsigned int worker_idle_threshold_per_cpu(void)
{
  switch(cpu_count)
  {
    case (unsigned int)0:

    case (unsigned int)1:

    case (unsigned int)2:

    case (unsigned int)4:
      return (unsigned int)2;
    case (unsigned int)6:
      return (unsigned int)4;
    case (unsigned int)8:

    case (unsigned int)12:
      return (unsigned int)6;
    case (unsigned int)16:

    case (unsigned int)24:
      return (unsigned int)8;
    case (unsigned int)32:

    case (unsigned int)64:
      return (unsigned int)12;
    default:
      return cpu_count / (unsigned int)4;
  }
  return (unsigned int)2;
}

// worker_main
// file src/posix/manager.c line 430
static void * worker_main(void *unused)
{
  struct work *witem;
  signed int current_thread_priority = 1;
  signed int queue_priority = 1;
  signed long int return_value_syscall$1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"worker_main", (const void *)"worker thread started");
    }

  while((_Bool)0);
  __CPROVER_atomic_begin();
  *(&pending_thread_create) = *(&pending_thread_create) - (unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  witem=wqlist_scan(&queue_priority, 1);
  if(witem == ((struct work *)NULL))
  {
    witem=wqlist_scan_spin(&queue_priority);
    if(witem == ((struct work *)NULL))
      witem=wqlist_scan_wait(&queue_priority);

  }

  if(!(current_thread_priority == queue_priority) && !(PWQ_RT_THREADS == 0u))
  {
    current_thread_priority = queue_priority;
    ptwq_set_current_thread_priority(current_thread_priority);
  }

  __CPROVER_atomic_begin();
  *(&scoreboard.idle) = *(&scoreboard.idle) - (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  witem->func(witem->func_arg);
  __CPROVER_atomic_begin();
  *(&scoreboard.idle) = *(&scoreboard.idle) + (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  witem_free(witem);
  return (void *)0;
}

// worker_start
// file src/posix/manager.c line 473
static signed int worker_start(void)
{
  unsigned long int tid;
  signed long int return_value_syscall$1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"worker_start", (const void *)"Spawning another worker");
    }

  while((_Bool)0);
  __CPROVER_atomic_begin();
  *(&pending_thread_create) = *(&pending_thread_create) + (unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  __CPROVER_atomic_begin();
  *(&scoreboard.idle) = *(&scoreboard.idle) + (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  __CPROVER_atomic_begin();
  *(&scoreboard.count) = *(&scoreboard.count) + (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  signed int return_value_pthread_create$6;
  return_value_pthread_create$6=pthread_create(&tid, &detached_attr, worker_main, (void *)0);
  signed long int return_value_syscall$2;
  signed int *return_value___errno_location$3;
  char *return_value_strerror$4;
  signed int *return_value___errno_location$5;
  if(!(return_value_pthread_create$6 == 0))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$2=syscall((signed long int)186);
        return_value___errno_location$3=__errno_location();
        return_value_strerror$4=strerror(*return_value___errno_location$3);
        return_value___errno_location$5=__errno_location();
        fprintf(stderr, "%s [%d]: %s(): %s: %s (errno=%d)\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$2, (const void *)"worker_start", (const void *)"pthread_create(3)", return_value_strerror$4, *return_value___errno_location$5);
      }

    while((_Bool)0);
    __CPROVER_atomic_begin();
    *(&scoreboard.idle) = *(&scoreboard.idle) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    __CPROVER_atomic_begin();
    *(&scoreboard.count) = *(&scoreboard.count) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    return -1;
  }

  else
    return 0;
}

// worker_stop
// file src/posix/manager.c line 494
static signed int worker_stop(void)
{
  struct work *witem;
  struct _pthread_workqueue *workq;
  signed int i;
  unsigned int wqlist_index_bit;
  unsigned int new_mask;
  witem=witem_alloc((void (*)(void *))(void *)0, (void *)0);
  pthread_mutex_lock(&wqlist_mtx);
  i = 0;
  for( ; !(i >= 31); i = i + 1)
  {
    workq = wqlist[(signed long int)i];
    if(!(workq == ((struct _pthread_workqueue *)NULL)))
    {
      wqlist_index_bit = (unsigned int)(0x1 << workq->wqlist_index);
      pthread_spin_lock(&workq->mtx);
      __CPROVER_atomic_begin();
      *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
      new_mask = *(&wqlist_mask);
      FENCE(WRfence);
      __CPROVER_atomic_end();
      while((new_mask & wqlist_index_bit) == 0u)
      {
        asm("pause");
        __CPROVER_atomic_begin();
        *(&wqlist_mask) = *(&wqlist_mask) | wqlist_index_bit;
        new_mask = *(&wqlist_mask);
        FENCE(WRfence);
        __CPROVER_atomic_end();
      }
      do
      {
        witem->item_entry.stqe_next = (struct work *)(void *)0;
        *(&workq->item_listhead)->stqh_last = witem;
        (&workq->item_listhead)->stqh_last = &witem->item_entry.stqe_next;
      }
      while((_Bool)0);
      pthread_spin_unlock(&workq->mtx);
      pthread_cond_signal(&wqlist_has_work);
      pthread_mutex_unlock(&wqlist_mtx);
      return 0;
    }

  }
  signed long int return_value_syscall$1;
  do
    if(!(DEBUG_WORKQUEUE == 0))
    {
      return_value_syscall$1=syscall((signed long int)186);
      fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"worker_stop", (const void *)"Attempting to add a workitem without a workqueue");
    }

  while((_Bool)0);
  abort();
  return -1;
}

// wqlist_scan
// file src/posix/manager.c line 335
static struct work * wqlist_scan(signed int *queue_priority, signed int skip_thread_exit_events)
{
  struct _pthread_workqueue *workq;
  struct work *witem = (struct work *)(void *)0;
  signed int idx;
  idx=ffs((signed int)wqlist_mask);
  _Bool tmp_if_expr$1;
  if(idx == 0)
    return (struct work *)(void *)0;

  else
  {
    workq = wqlist[(signed long int)(idx - 1)];
    pthread_spin_lock(&workq->mtx);
    witem = (&workq->item_listhead)->stqh_first;
    if(!(witem == ((struct work *)NULL)))
    {
      if(!(skip_thread_exit_events == 0))
        tmp_if_expr$1 = witem->func == (void (*)(void *))(void *)0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(!tmp_if_expr$1)
      {
        do
        {
          (&workq->item_listhead)->stqh_first = (&workq->item_listhead)->stqh_first->item_entry.stqe_next;
          if(workq->item_listhead.stqh_first == ((struct work *)NULL))
            (&workq->item_listhead)->stqh_last = &(&workq->item_listhead)->stqh_first;

        }
        while((_Bool)0);
        if(workq->item_listhead.stqh_first == ((struct work *)NULL))
          reset_queue_mask(workq->wqlist_index);

        *queue_priority = workq->queueprio;
      }

      else
        witem = (struct work *)(void *)0;
    }

    pthread_spin_unlock(&workq->mtx);
    return witem;
  }
}

// wqlist_scan_spin
// file src/posix/manager.c line 377
static struct work * wqlist_scan_spin(signed int *queue_priority)
{
  struct work *witem = (struct work *)(void *)0;
  volatile unsigned int return_value___sync_add_and_fetch$1;
  __CPROVER_atomic_begin();
  *(&current_threads_spinning) = *(&current_threads_spinning) + (volatile unsigned int)1;
  return_value___sync_add_and_fetch$1 = *(&current_threads_spinning);
  FENCE(WRfence);
  __CPROVER_atomic_end();
  if(PWQ_SPIN_THREADS >= return_value___sync_add_and_fetch$1)
  {
    do
    {
      witem=wqlist_scan(queue_priority, 1);
      if(!(witem == ((struct work *)NULL)))
        break;

      asm("pause");
    }
    while((_Bool)1);
    if(scoreboard.idle == 1u)
      sem_post(&scoreboard.sb_sem);

  }

  __CPROVER_atomic_begin();
  *(&current_threads_spinning) = *(&current_threads_spinning) - (volatile unsigned int)1;
  FENCE(WRfence);
  __CPROVER_atomic_end();
  return witem;
}

// wqlist_scan_wait
// file src/posix/manager.c line 401
static struct work * wqlist_scan_wait(signed int *queue_priority)
{
  struct work *witem = (struct work *)(void *)0;
  pthread_mutex_lock(&wqlist_mtx);
  do
  {
    witem=wqlist_scan(queue_priority, 0);
    if(!(witem == ((struct work *)NULL)))
      break;

    pthread_cond_wait(&wqlist_has_work, &wqlist_mtx);
  }
  while((_Bool)1);
  pthread_mutex_unlock(&wqlist_mtx);
  if(scoreboard.idle == 1u)
    sem_post(&scoreboard.sb_sem);

  signed long int return_value_syscall$1;
  if(witem->func == ((void (*)(void *))NULL))
  {
    do
      if(!(DEBUG_WORKQUEUE == 0))
      {
        return_value_syscall$1=syscall((signed long int)186);
        fprintf(stderr, "%s [%d]: %s(): %s\n", WORKQUEUE_DEBUG_IDENT, (signed int)return_value_syscall$1, (const void *)"wqlist_scan_wait", (const void *)"worker exiting..");
      }

    while((_Bool)0);
    __CPROVER_atomic_begin();
    *(&scoreboard.idle) = *(&scoreboard.idle) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    __CPROVER_atomic_begin();
    *(&scoreboard.count) = *(&scoreboard.count) - (volatile unsigned int)1;
    FENCE(WRfence);
    __CPROVER_atomic_end();
    witem_free(witem);
    pthread_exit(NULL);
  }

  return witem;
}

