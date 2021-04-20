// tag-#anon#ST[ARR16{U64}$U64$'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$4;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$0;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$5;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$2;

// tag-#anon#tUN[*{SYM#tag-__cds_wfcq_head#}$SYM#tag-__cds_wfcq_head#$'_h'||*{SYM#tag-cds_wfcq_head#}$SYM#tag-cds_wfcq_head#$'h'|]
// file urcu/wfcqueue.h line 82
union anonymous$1;

// tag-#anon#tUN[*{SYM#tag-__cds_wfs_stack#}$SYM#tag-__cds_wfs_stack#$'_s'||*{SYM#tag-cds_wfs_stack#}$SYM#tag-cds_wfs_stack#$'s'|]
// file ./urcu/wfstack.h line 100
union anonymous$3;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__cds_wfcq_head
// file urcu/wfcqueue.h line 68
struct __cds_wfcq_head;

// tag-__cds_wfs_stack
// file ./urcu/wfstack.h line 86
struct __cds_wfs_stack;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__uatomic_dummy
// file ./urcu/uatomic.h line 37
struct __uatomic_dummy;

// tag-call_rcu_completion
// file urcu-call-rcu-impl.h line 73
struct call_rcu_completion;

// tag-call_rcu_completion_work
// file urcu-call-rcu-impl.h line 79
struct call_rcu_completion_work;

// tag-call_rcu_data
// file ./urcu-call-rcu.h line 43
struct call_rcu_data;

// tag-cds_list_head
// file ..//../../urcu/list.h line 35
struct cds_list_head;

// tag-cds_wfcq_head
// file urcu/wfcqueue.h line 72
struct cds_wfcq_head;

// tag-cds_wfcq_node
// file urcu/wfcqueue.h line 59
struct cds_wfcq_node;

// tag-cds_wfcq_ret
// file urcu/wfcqueue.h line 48
enum cds_wfcq_ret { CDS_WFCQ_RET_WOULDBLOCK=-1, CDS_WFCQ_RET_DEST_EMPTY=0, CDS_WFCQ_RET_DEST_NON_EMPTY=1, CDS_WFCQ_RET_SRC_EMPTY=2 };

// tag-cds_wfcq_tail
// file urcu/wfcqueue.h line 87
struct cds_wfcq_tail;

// tag-cds_wfs_head
// file ./urcu/wfstack.h line 82
struct cds_wfs_head;

// tag-cds_wfs_node
// file ./urcu/wfstack.h line 72
struct cds_wfs_node;

// tag-cds_wfs_stack
// file ./urcu/wfstack.h line 90
struct cds_wfs_stack;

// tag-defer_queue
// file urcu-defer-impl.h line 98
struct defer_queue;

// tag-mynode
// file cds_list_add_rcu.c line 26
struct mynode;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-rcu_flavor_struct
// file ./urcu-flavor.h line 30
struct rcu_flavor_struct;

// tag-rcu_gp_memb
// file urcu/static/urcu.h line 127
struct rcu_gp_memb;

// tag-rcu_head
// file ./urcu-call-rcu.h line 59
struct rcu_head;

// tag-rcu_reader_memb
// file urcu/static/urcu.h line 142
struct rcu_reader_memb;

// tag-rcu_state
// file urcu/static/urcu.h line 77
enum rcu_state { RCU_READER_ACTIVE_CURRENT=0, RCU_READER_ACTIVE_OLD=1, RCU_READER_INACTIVE=2 };

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-urcu_ref
// file urcu/ref.h line 21
struct urcu_ref;

// tag-urcu_wait_node
// file urcu-wait.h line 45
struct urcu_wait_node;

// tag-urcu_wait_queue
// file urcu-wait.h line 59
struct urcu_wait_queue;

// tag-urcu_wait_state
// file urcu-wait.h line 36
enum urcu_wait_state { URCU_WAIT_WAITING=0, URCU_WAIT_WAKEUP=1, URCU_WAIT_RUNNING=2, URCU_WAIT_TEARDOWN=4 };

// tag-urcu_waiters
// file urcu-wait.h line 72
struct urcu_waiters;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// ___cds_wfcq_append
// file ./urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append(union anonymous$1 u_head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_head, struct cds_wfcq_node *new_tail);
// ___cds_wfcq_busy_wait
// file ./urcu/static/wfcqueue.h line 219
static inline _Bool ___cds_wfcq_busy_wait(signed int *attempt, signed int blocking);
// ___cds_wfcq_first
// file ./urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first(union anonymous$1 u_head, struct cds_wfcq_tail *tail, signed int blocking);
// ___cds_wfcq_first_blocking
// file ./urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking(union anonymous$1 head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_next
// file ./urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next(union anonymous$1 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node, signed int blocking);
// ___cds_wfcq_next_blocking
// file ./urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking(union anonymous$1 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// ___cds_wfcq_node_sync_next
// file ./urcu/static/wfcqueue.h line 236
static inline struct cds_wfcq_node * ___cds_wfcq_node_sync_next(struct cds_wfcq_node *node, signed int blocking);
// ___cds_wfcq_splice
// file ./urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice(union anonymous$1 u_dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$1 u_src_q_head, struct cds_wfcq_tail *src_q_tail, signed int blocking);
// ___cds_wfcq_splice_blocking
// file ./urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking(union anonymous$1 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$1 src_q_head, struct cds_wfcq_tail *src_q_tail);
// ___cds_wfs_end
// file ./urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end(void *node);
// ___cds_wfs_next
// file ./urcu/static/wfstack.h line 388
static inline struct cds_wfs_node * ___cds_wfs_next(struct cds_wfs_node *node, signed int blocking);
// ___cds_wfs_node_sync_next
// file ./urcu/static/wfstack.h line 151
static inline struct cds_wfs_node * ___cds_wfs_node_sync_next(struct cds_wfs_node *node, signed int blocking);
// ___cds_wfs_pop_all
// file ./urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all(union anonymous$3 u_stack);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __cds_list_del
// file ./urcu/list.h line 71
static inline void __cds_list_del(struct cds_list_head *prev, struct cds_list_head *next);
// __create_call_rcu_data
// file urcu-call-rcu-impl.h line 481
static struct call_rcu_data * __create_call_rcu_data(unsigned long int flags, signed int cpu_affinity);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __uatomic_add
// file ./urcu/uatomic.h line 357
static inline void __uatomic_add(void *addr, unsigned long int val, signed int len);
// __uatomic_add_return
// file ./urcu/uatomic.h line 178
static inline unsigned long int __uatomic_add_return(void *addr, unsigned long int val, signed int len);
// __uatomic_and
// file ./urcu/uatomic.h line 245
static inline void __uatomic_and(void *addr, unsigned long int val, signed int len);
// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len);
// __uatomic_dec
// file ./urcu/uatomic.h line 467
static inline void __uatomic_dec(void *addr, signed int len);
// __uatomic_exchange
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange(void *addr, unsigned long int val, signed int len);
// __uatomic_exchange$link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange$link1(void *addr$link1, unsigned long int val$link1, signed int len$link1);
// __uatomic_inc
// file ./urcu/uatomic.h line 414
static inline void __uatomic_inc(void *addr, signed int len);
// __uatomic_or
// file ./urcu/uatomic.h line 301
static inline void __uatomic_or(void *addr, unsigned long int val, signed int len);
// _call_rcu
// file urcu-call-rcu-impl.h line 680
static void _call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *), struct call_rcu_data *crdp);
// _call_rcu::func$object
// 
void func$object(struct rcu_head *);
// _cds_wfcq_empty
// file ./urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty(union anonymous$1 u_head, struct cds_wfcq_tail *tail);
// _cds_wfcq_enqueue
// file ./urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue(union anonymous$1 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_tail);
// _cds_wfcq_init
// file ./urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_node_init
// file ./urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init(struct cds_wfcq_node *node);
// _cds_wfs_first
// file ./urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first(struct cds_wfs_head *head);
// _cds_wfs_next_blocking
// file ./urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking(struct cds_wfs_node *node);
// _cds_wfs_push
// file ./urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push(union anonymous$3 u_stack, struct cds_wfs_node *node);
// _defer_rcu
// file urcu-defer-impl.h line 311
static void _defer_rcu(void (*fct)(void *), void *p);
// _defer_rcu::fct$object
// 
void fct$object(void *);
// _rcu_barrier_complete
// file urcu-call-rcu-impl.h line 822
static void _rcu_barrier_complete(struct rcu_head *head);
// _rcu_defer_barrier_thread
// file urcu-defer-impl.h line 249
static void _rcu_defer_barrier_thread(void);
// _rcu_read_lock_memb
// file urcu/static/urcu.h line 214
static inline void _rcu_read_lock_memb(void);
// _rcu_read_lock_update
// file urcu/static/urcu.h line 195
static inline void _rcu_read_lock_update(unsigned long int tmp);
// _rcu_read_ongoing_memb
// file urcu/static/urcu.h line 267
static inline signed int _rcu_read_ongoing_memb(void);
// _rcu_read_unlock_memb
// file urcu/static/urcu.h line 249
static inline void _rcu_read_unlock_memb(void);
// _rcu_read_unlock_update_and_wakeup
// file urcu/static/urcu.h line 233
static inline void _rcu_read_unlock_update_and_wakeup(unsigned long int tmp);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// alloc_cpu_call_rcu_data
// file urcu-call-rcu-impl.h line 130
static void alloc_cpu_call_rcu_data(void);
// call_rcu_after_fork_child_memb
// file urcu-call-rcu-impl.h line 949
void call_rcu_after_fork_child_memb(void);
// call_rcu_after_fork_parent_memb
// file urcu-call-rcu-impl.h line 931
void call_rcu_after_fork_parent_memb(void);
// call_rcu_before_fork_memb
// file urcu-call-rcu-impl.h line 909
void call_rcu_before_fork_memb(void);
// call_rcu_completion_wait
// file urcu-call-rcu-impl.h line 274
static void call_rcu_completion_wait(struct call_rcu_completion *completion);
// call_rcu_completion_wake_up
// file urcu-call-rcu-impl.h line 296
static void call_rcu_completion_wake_up(struct call_rcu_completion *completion);
// call_rcu_data_free_memb
// file urcu-call-rcu-impl.h line 743
void call_rcu_data_free_memb(struct call_rcu_data *crdp);
// call_rcu_data_init
// file urcu-call-rcu-impl.h line 415
static void call_rcu_data_init(struct call_rcu_data **crdpp, unsigned long int flags, signed int cpu_affinity);
// call_rcu_lock
// file urcu-call-rcu-impl.h line 175
static void call_rcu_lock(union anonymous$2 *pmp);
// call_rcu_memb
// file urcu-call-rcu-impl.h line 705
void call_rcu_memb(struct rcu_head *head, void (*func)(struct rcu_head *));
// call_rcu_memb::func$object
// 
void func$object(struct rcu_head *);
// call_rcu_thread
// file urcu-call-rcu-impl.h line 310
static void * call_rcu_thread(void *arg);
// call_rcu_unlock
// file urcu-call-rcu-impl.h line 186
static void call_rcu_unlock(union anonymous$2 *pmp);
// call_rcu_wait
// file urcu-call-rcu-impl.h line 240
static void call_rcu_wait(struct call_rcu_data *crdp);
// call_rcu_wake_up
// file urcu-call-rcu-impl.h line 262
static void call_rcu_wake_up(struct call_rcu_data *crdp);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cds_list_add
// file ./urcu/list.h line 51
static inline void cds_list_add(struct cds_list_head *newp, struct cds_list_head *head);
// cds_list_add_rcu
// file ..//../../urcu/rculist.h line 34
static inline void cds_list_add_rcu(struct cds_list_head *newp, struct cds_list_head *head);
// cds_list_del
// file ./urcu/list.h line 79
static inline void cds_list_del(struct cds_list_head *elem);
// cds_list_empty
// file ./urcu/list.h line 184
static inline signed int cds_list_empty(struct cds_list_head *head);
// cds_list_move
// file ./urcu/list.h line 94
static inline void cds_list_move(struct cds_list_head *elem, struct cds_list_head *head);
// cds_list_splice
// file ./urcu/list.h line 112
static inline void cds_list_splice(struct cds_list_head *add, struct cds_list_head *head);
// compat_futex_async
// file ./urcu/futex.h line 52
extern signed int compat_futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// compat_futex_noasync
// file ./urcu/futex.h line 50
extern signed int compat_futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// create_all_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 627
signed int create_all_cpu_call_rcu_data_memb(unsigned long int flags);
// create_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 490
struct call_rcu_data * create_call_rcu_data_memb(unsigned long int flags, signed int cpu_affinity);
// defer_rcu_memb
// file urcu-defer-impl.h line 395
extern void defer_rcu_memb(void (*fct)(void *), void *p);
// defer_rcu_memb::fct$object
// 
void fct$object(void *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_all_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 775
void free_all_cpu_call_rcu_data_memb(void);
// free_completion
// file urcu-call-rcu-impl.h line 813
static void free_completion(struct urcu_ref *ref);
// futex
// file ./urcu/futex.h line 62
static inline signed int futex(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// futex_async
// file ./urcu/futex.h line 83
static inline signed int futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// futex_noasync
// file ./urcu/futex.h line 69
static inline signed int futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// get_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 578
struct call_rcu_data * get_call_rcu_data_memb(void);
// get_call_rcu_thread_memb
// file urcu-call-rcu-impl.h line 472
unsigned long int get_call_rcu_thread_memb(struct call_rcu_data *crdp);
// get_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 450
struct call_rcu_data * get_cpu_call_rcu_data_memb(signed int cpu);
// get_default_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 553
struct call_rcu_data * get_default_call_rcu_data_memb(void);
// get_thread_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 598
struct call_rcu_data * get_thread_call_rcu_data_memb(void);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// maxcpus_reset
// file urcu-call-rcu-impl.h line 123
static void maxcpus_reset(void);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mutex_lock
// file urcu.c line 130
static void mutex_lock(union anonymous$2 *mutex);
// mutex_lock_defer
// file urcu-defer-impl.h line 133
static void mutex_lock_defer(union anonymous$2 *mutex);
// mutex_unlock
// file urcu.c line 152
static void mutex_unlock(union anonymous$2 *mutex);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous$5 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$5 *, union anonymous$2 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$2 *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$2 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$2 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// rcu_barrier_memb
// file urcu-call-rcu-impl.h line 838
void rcu_barrier_memb(void);
// rcu_cmpxchg_pointer_sym
// file urcu-pointer.c line 53
extern void * rcu_cmpxchg_pointer_sym(void **p, void *old, void *_new);
// rcu_defer_barrier_memb
// file urcu-defer-impl.h line 281
extern void rcu_defer_barrier_memb(void);
// rcu_defer_barrier_queue
// file urcu-defer-impl.h line 218
static void rcu_defer_barrier_queue(struct defer_queue *queue, unsigned long int head);
// rcu_defer_barrier_queue::1::fct$object
// 
void fct$object(void *);
// rcu_defer_barrier_thread_memb
// file urcu-defer-impl.h line 261
extern void rcu_defer_barrier_thread_memb(void);
// rcu_defer_exit_memb
// file urcu-defer-impl.h line 466
void rcu_defer_exit_memb(void);
// rcu_defer_num_callbacks
// file urcu-defer-impl.h line 163
static unsigned long int rcu_defer_num_callbacks(void);
// rcu_defer_register_thread_memb
// file urcu-defer-impl.h line 426
extern signed int rcu_defer_register_thread_memb(void);
// rcu_defer_unregister_thread_memb
// file urcu-defer-impl.h line 448
extern void rcu_defer_unregister_thread_memb(void);
// rcu_dereference_sym
// file urcu-pointer.c line 35
extern void * rcu_dereference_sym(void *p);
// rcu_init_memb
// file urcu.c line 536
extern void rcu_init_memb(void);
// rcu_quiescent_state
// file urcu.h line 117
static inline void rcu_quiescent_state(void);
// rcu_read_lock_memb
// file urcu.c line 497
extern void rcu_read_lock_memb(void);
// rcu_read_ongoing_memb
// file urcu.c line 507
extern signed int rcu_read_ongoing_memb(void);
// rcu_read_unlock_memb
// file urcu.c line 502
extern void rcu_read_unlock_memb(void);
// rcu_reader_state
// file urcu/static/urcu.h line 172
static inline enum rcu_state rcu_reader_state(unsigned long int *ctr);
// rcu_register_thread_memb
// file urcu.c line 512
extern void rcu_register_thread_memb(void);
// rcu_set_pointer_sym
// file ..//../../urcu-pointer.h line 106
extern void * rcu_set_pointer_sym(void **p, void *v);
// rcu_thread_offline
// file urcu.h line 121
static inline void rcu_thread_offline(void);
// rcu_thread_online
// file urcu.h line 125
static inline void rcu_thread_online(void);
// rcu_unregister_thread_memb
// file urcu.c line 526
extern void rcu_unregister_thread_memb(void);
// rcu_xchg_pointer_sym
// file urcu-pointer.c line 47
extern void * rcu_xchg_pointer_sym(void **p, void *v);
// sched_getcpu
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 88
extern signed int sched_getcpu(void);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous *);
// set_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 514
signed int set_cpu_call_rcu_data_memb(signed int cpu, struct call_rcu_data *crdp);
// set_thread_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 614
void set_thread_call_rcu_data_memb(struct call_rcu_data *crdp);
// set_thread_cpu_affinity
// file urcu-call-rcu-impl.h line 202
static signed int set_thread_cpu_affinity(struct call_rcu_data *crdp);
// smp_mb_master
// file urcu.c line 162
static void smp_mb_master(void);
// smp_mb_slave
// file urcu/static/urcu.h line 95
static inline void smp_mb_slave(void);
// start_defer_thread
// file urcu-defer-impl.h line 400
static void start_defer_thread(void);
// stop_defer_thread
// file urcu-defer-impl.h line 408
static void stop_defer_thread(void);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// synchronize_rcu_memb
// file urcu.c line 376
extern void synchronize_rcu_memb(void);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// sysconf
// file /usr/include/unistd.h line 619
extern signed long int sysconf(signed int);
// thr_defer
// file urcu-defer-impl.h line 374
static void * thr_defer(void *args);
// urcu_adaptative_busy_wait
// file urcu-wait.h line 140
static inline void urcu_adaptative_busy_wait(struct urcu_wait_node *wait);
// urcu_adaptative_wake_up
// file urcu-wait.h line 121
static inline void urcu_adaptative_wake_up(struct urcu_wait_node *wait);
// urcu_move_waiters
// file urcu-wait.h line 93
static inline void urcu_move_waiters(struct urcu_waiters *waiters, struct urcu_wait_queue *queue);
// urcu_ref_put
// file urcu/ref.h line 40
static inline void urcu_ref_put(struct urcu_ref *ref, void (*release)(struct urcu_ref *));
// urcu_ref_put::release$object
// 
void release$object(struct urcu_ref *);
// urcu_ref_set
// file urcu/ref.h line 25
static inline void urcu_ref_set(struct urcu_ref *ref, signed long int val);
// urcu_sched_getcpu
// file compat-getcpu.h line 30
static inline signed int urcu_sched_getcpu(void);
// urcu_wait_add
// file urcu-wait.h line 82
static inline _Bool urcu_wait_add(struct urcu_wait_queue *queue, struct urcu_wait_node *node);
// urcu_wait_set_state
// file urcu-wait.h line 100
static inline void urcu_wait_set_state(struct urcu_wait_node *node, enum urcu_wait_state state);
// urcu_wake_all_waiters
// file urcu-wait.h line 185
static inline void urcu_wake_all_waiters(struct urcu_waiters *waiters);
// wait_defer
// file urcu-defer-impl.h line 180
static void wait_defer(void);
// wait_for_readers
// file urcu.c line 269
static void wait_for_readers(struct cds_list_head *input_readers, struct cds_list_head *cur_snap_readers, struct cds_list_head *qsreaders);
// wait_gp
// file urcu.c line 232
static void wait_gp(void);
// wake_call_rcu_thread
// file urcu-call-rcu-impl.h line 674
static void wake_call_rcu_thread(struct call_rcu_data *crdp);
// wake_up_defer
// file urcu-defer-impl.h line 153
static void wake_up_defer(void);
// wake_up_gp
// file urcu/static/urcu.h line 158
static inline void wake_up_gp(void);

struct anonymous
{
  // __bits
  unsigned long int __bits[16l];
};

struct anonymous$4
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

union anonymous$0
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$5
{
  // __data
  struct anonymous$4 __data;
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

union anonymous$2
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous$1
{
  // _h
  struct __cds_wfcq_head *_h;
  // h
  struct cds_wfcq_head *h;
} __attribute__ ((__transparent_union__));

union anonymous$3
{
  // _s
  struct __cds_wfs_stack *_s;
  // s
  struct cds_wfs_stack *s;
} __attribute__ ((__transparent_union__));

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

struct cds_wfcq_node
{
  // next
  struct cds_wfcq_node *next;
};

struct __cds_wfcq_head
{
  // node
  struct cds_wfcq_node node;
};

struct __cds_wfs_stack
{
  // head
  struct cds_wfs_head *head;
};

struct __uatomic_dummy
{
  // v
  unsigned long int v[10l];
};

struct urcu_ref
{
  // refcount
  signed long int refcount;
};

struct call_rcu_completion
{
  // barrier_count
  signed int barrier_count;
  // futex
  signed int futex;
  // ref
  struct urcu_ref ref;
};

struct rcu_head
{
  // next
  struct cds_wfcq_node next;
  // func
  void (*func)(struct rcu_head *);
};

struct call_rcu_completion_work
{
  // head
  struct rcu_head head;
  // completion
  struct call_rcu_completion *completion;
};

struct cds_wfcq_tail
{
  // p
  struct cds_wfcq_node *p;
};

struct cds_wfcq_head
{
  // node
  struct cds_wfcq_node node;
  // lock
  union anonymous$2 lock;
};

struct cds_list_head
{
  // next
  struct cds_list_head *next;
  // prev
  struct cds_list_head *prev;
};

struct call_rcu_data
{
  // cbs_tail
  struct cds_wfcq_tail cbs_tail;
  // cbs_head
  struct cds_wfcq_head cbs_head;
  // flags
  unsigned long int flags;
  // futex
  signed int futex;
  // qlen
  unsigned long int qlen;
  // tid
  unsigned long int tid;
  // cpu_affinity
  signed int cpu_affinity;
  // gp_count
  unsigned long int gp_count;
  // list
  struct cds_list_head list;
};

struct cds_wfs_node
{
  // next
  struct cds_wfs_node *next;
};

struct cds_wfs_head
{
  // node
  struct cds_wfs_node node;
};

struct cds_wfs_stack
{
  // head
  struct cds_wfs_head *head;
  // lock
  union anonymous$2 lock;
};

struct defer_queue
{
  // head
  unsigned long int head;
  // last_fct_in
  void *last_fct_in;
  // tail
  unsigned long int tail;
  // last_fct_out
  void *last_fct_out;
  // q
  void **q;
  // last_head
  unsigned long int last_head;
  // list
  struct cds_list_head list;
};

struct mynode
{
  // value
  signed int value;
  // node
  struct cds_list_head node;
};

struct pollfd
{
  // fd
  signed int fd;
  // events
  signed short int events;
  // revents
  signed short int revents;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct rcu_flavor_struct
{
  // read_lock
  void (*read_lock)(void);
  // read_unlock
  void (*read_unlock)(void);
  // read_ongoing
  signed int (*read_ongoing)(void);
  // read_quiescent_state
  void (*read_quiescent_state)(void);
  // update_call_rcu
  void (*update_call_rcu)(struct rcu_head *, void (*)(struct rcu_head *));
  // update_synchronize_rcu
  void (*update_synchronize_rcu)(void);
  // update_defer_rcu
  void (*update_defer_rcu)(void (*)(void *), void *);
  // thread_offline
  void (*thread_offline)(void);
  // thread_online
  void (*thread_online)(void);
  // register_thread
  void (*register_thread)(void);
  // unregister_thread
  void (*unregister_thread)(void);
  // barrier
  void (*barrier)(void);
};

struct rcu_gp_memb
{
  // ctr
  unsigned long int ctr;
  // futex
  signed int futex;
};

struct rcu_reader_memb
{
  // ctr
  unsigned long int ctr;
  // need_mb
  char need_mb;
  // node
  struct cds_list_head node;
  // tid
  unsigned long int tid;
  // registered
  unsigned int registered : 1;
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct urcu_wait_node
{
  // node
  struct cds_wfs_node node;
  // state
  signed int state;
};

struct urcu_wait_queue
{
  // stack
  struct cds_wfs_stack stack;
};

struct urcu_waiters
{
  // head
  struct cds_wfs_head *head;
};


// __urcu_compat_futex_cond
// file compat_futex.c line 46
union anonymous$5 __urcu_compat_futex_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// __urcu_compat_futex_lock
// file compat_futex.c line 44
union anonymous$2 __urcu_compat_futex_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// call_rcu_data_list
// file urcu-call-rcu-impl.h line 89
static struct cds_list_head call_rcu_data_list;
// call_rcu_data_list
// file urcu-call-rcu-impl.h line 89
static struct cds_list_head call_rcu_data_list = { .next=&call_rcu_data_list, .prev=&call_rcu_data_list };
// call_rcu_mutex
// file urcu-call-rcu-impl.h line 98
static union anonymous$2 call_rcu_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// default_call_rcu_data
// file urcu-call-rcu-impl.h line 102
static struct call_rcu_data *default_call_rcu_data;
// defer_queue
// file urcu-defer-impl.h line 129
static struct defer_queue defer_queue;
// defer_thread_futex
// file urcu-defer-impl.h line 122
static signed int defer_thread_futex;
// defer_thread_mutex
// file urcu-defer-impl.h line 120
static union anonymous$2 defer_thread_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// defer_thread_stop
// file urcu-defer-impl.h line 123
static signed int defer_thread_stop;
// gp_waiters
// file urcu.c line 128
static struct urcu_wait_queue gp_waiters = { .stack={ .head=(struct cds_wfs_head *)(void *)0x1UL, .lock={ .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } } } };
// init_done
// file urcu.c line 80
static signed int init_done;
// maxcpus
// file urcu-call-rcu-impl.h line 121
static signed long int maxcpus;
// per_cpu_call_rcu_data
// file urcu-call-rcu-impl.h line 120
static struct call_rcu_data **per_cpu_call_rcu_data;
// rcu_defer_mutex
// file urcu-defer-impl.h line 119
static union anonymous$2 rcu_defer_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rcu_flavor_memb
// file urcu.c line 602
struct rcu_flavor_struct rcu_flavor_memb;
// rcu_flavor_memb
// file urcu.c line 602
struct rcu_flavor_struct rcu_flavor_memb = { .read_lock=rcu_read_lock_memb, .read_unlock=rcu_read_unlock_memb, .read_ongoing=rcu_read_ongoing_memb,
    .read_quiescent_state=rcu_quiescent_state,
    .update_call_rcu=call_rcu_memb,
    .update_synchronize_rcu=synchronize_rcu_memb, .update_defer_rcu=defer_rcu_memb,
    .thread_offline=rcu_thread_offline, .thread_online=rcu_thread_online,
    .register_thread=rcu_register_thread_memb, .unregister_thread=rcu_unregister_thread_memb,
    .barrier=rcu_barrier_memb };
// rcu_gp_lock
// file urcu.c line 103
static union anonymous$2 rcu_gp_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// rcu_gp_memb
// file urcu.c line 114
struct rcu_gp_memb rcu_gp_memb = { .ctr=1UL << 0, .futex=0 };
// rcu_has_sys_membarrier_memb
// file urcu.c line 81
signed int rcu_has_sys_membarrier_memb;
// rcu_reader_memb
// file urcu.c line 120
struct rcu_reader_memb rcu_reader_memb;
// rcu_registry_lock
// file urcu.c line 113
static union anonymous$2 rcu_registry_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// registry
// file urcu.c line 122
static struct cds_list_head registry;
// registry
// file urcu.c line 122
static struct cds_list_head registry = { .next=&registry, .prev=&registry };
// registry_defer
// file urcu-defer-impl.h line 130
static struct cds_list_head registry_defer;
// registry_defer
// file urcu-defer-impl.h line 130
static struct cds_list_head registry_defer = { .next=&registry_defer, .prev=&registry_defer };
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// thread_call_rcu_data
// file urcu-call-rcu-impl.h line 93
static struct call_rcu_data *thread_call_rcu_data;
// tid_defer
// file urcu-defer-impl.h line 131
static unsigned long int tid_defer;

// ___cds_wfcq_append
// file ./urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append(union anonymous$1 u_head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_head, struct cds_wfcq_node *new_tail)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node *old_tail;
  unsigned long int return_value___uatomic_exchange$1;
  return_value___uatomic_exchange$1=__uatomic_exchange((void *)&tail->p, (unsigned long int)new_tail, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
  old_tail = (struct cds_wfcq_node *)return_value___uatomic_exchange$1;
  struct cds_wfcq_node *_v;
  struct cds_wfcq_node * volatile tmp_statement_expression$2;
  *((struct cds_wfcq_node * volatile *)&old_tail->next) = new_head;
  tmp_statement_expression$2 = *((struct cds_wfcq_node * volatile *)&old_tail->next);
  _v = tmp_statement_expression$2;
  asm("" :  :  : "memory");
  _v = _v;
  return old_tail != &head->node;
}

// ___cds_wfcq_busy_wait
// file ./urcu/static/wfcqueue.h line 219
static inline _Bool ___cds_wfcq_busy_wait(signed int *attempt, signed int blocking)
{
  if(blocking == 0)
    return (_Bool)1;

  else
  {
    *attempt = *attempt + 1;
    if(*attempt >= 10)
    {
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
      *attempt = 0;
    }

    else
      asm("rep; nop" :  :  : "memory");
    return (_Bool)0;
  }
}

// ___cds_wfcq_first
// file ./urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first(union anonymous$1 u_head, struct cds_wfcq_tail *tail, signed int blocking)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node *node;
  _Bool return_value__cds_wfcq_empty$1;
  return_value__cds_wfcq_empty$1=_cds_wfcq_empty(head, tail);
  if(!(return_value__cds_wfcq_empty$1 == (_Bool)0))
    return (struct cds_wfcq_node *)(void *)0;

  else
  {
    node=___cds_wfcq_node_sync_next(&head->node, blocking);
    return node;
  }
}

// ___cds_wfcq_first_blocking
// file ./urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking(union anonymous$1 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first$1;
  return_value____cds_wfcq_first$1=___cds_wfcq_first(head, tail, 1);
  return return_value____cds_wfcq_first$1;
}

// ___cds_wfcq_next
// file ./urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next(union anonymous$1 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node, signed int blocking)
{
  struct cds_wfcq_node *next;
  struct cds_wfcq_node * volatile tmp_statement_expression$2;
  asm("" :  :  : "memory");
  tmp_statement_expression$2 = *((struct cds_wfcq_node * volatile *)&node->next);
  next = tmp_statement_expression$2;
  struct cds_wfcq_node * volatile tmp_statement_expression$1;
  if(next == ((struct cds_wfcq_node *)NULL))
  {
    asm("" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((struct cds_wfcq_node * volatile *)&tail->p);
    if(tmp_statement_expression$1 == node)
      return (struct cds_wfcq_node *)(void *)0;

    next=___cds_wfcq_node_sync_next(node, blocking);
  }

  return next;
}

// ___cds_wfcq_next_blocking
// file ./urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking(union anonymous$1 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next$1;
  return_value____cds_wfcq_next$1=___cds_wfcq_next(head, tail, node, 1);
  return return_value____cds_wfcq_next$1;
}

// ___cds_wfcq_node_sync_next
// file ./urcu/static/wfcqueue.h line 236
static inline struct cds_wfcq_node * ___cds_wfcq_node_sync_next(struct cds_wfcq_node *node, signed int blocking)
{
  struct cds_wfcq_node *next;
  signed int attempt = 0;
  struct cds_wfcq_node * volatile tmp_statement_expression$1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((struct cds_wfcq_node * volatile *)&node->next);
    next = tmp_statement_expression$1;
    if(!(next == ((struct cds_wfcq_node *)NULL)))
      break;

    _Bool return_value____cds_wfcq_busy_wait$2;
    return_value____cds_wfcq_busy_wait$2=___cds_wfcq_busy_wait(&attempt, blocking);
    if(!(return_value____cds_wfcq_busy_wait$2 == (_Bool)0))
      return (struct cds_wfcq_node *)(void *)-1UL;

  }
  while((_Bool)1);
  return next;
}

// ___cds_wfcq_splice
// file ./urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice(union anonymous$1 u_dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$1 u_src_q_head, struct cds_wfcq_tail *src_q_tail, signed int blocking)
{
  struct __cds_wfcq_head *dest_q_head = u_dest_q_head._h;
  struct __cds_wfcq_head *src_q_head = u_src_q_head._h;
  struct cds_wfcq_node *head;
  struct cds_wfcq_node *tail;
  signed int attempt = 0;
  _Bool return_value__cds_wfcq_empty$1;
  return_value__cds_wfcq_empty$1=_cds_wfcq_empty(src_q_head, src_q_tail);
  struct cds_wfcq_node * volatile tmp_statement_expression$3;
  if(!(return_value__cds_wfcq_empty$1 == (_Bool)0))
    return (enum cds_wfcq_ret)CDS_WFCQ_RET_SRC_EMPTY;

  else
  {
    do
    {
      unsigned long int return_value___uatomic_exchange$2;
      return_value___uatomic_exchange$2=__uatomic_exchange((void *)&src_q_head->node.next, (unsigned long int)(void *)0, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
      head = (struct cds_wfcq_node *)return_value___uatomic_exchange$2;
      if(!(head == ((struct cds_wfcq_node *)NULL)))
        break;

      asm("" :  :  : "memory");
      tmp_statement_expression$3 = *((struct cds_wfcq_node * volatile *)&src_q_tail->p);
      if(tmp_statement_expression$3 == &src_q_head->node)
        return (enum cds_wfcq_ret)CDS_WFCQ_RET_SRC_EMPTY;

      _Bool return_value____cds_wfcq_busy_wait$4;
      return_value____cds_wfcq_busy_wait$4=___cds_wfcq_busy_wait(&attempt, blocking);
      if(!(return_value____cds_wfcq_busy_wait$4 == (_Bool)0))
        return (enum cds_wfcq_ret)CDS_WFCQ_RET_WOULDBLOCK;

    }
    while((_Bool)1);
    unsigned long int return_value___uatomic_exchange$5;
    return_value___uatomic_exchange$5=__uatomic_exchange((void *)&src_q_tail->p, (unsigned long int)&src_q_head->node, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
    tail = (struct cds_wfcq_node *)return_value___uatomic_exchange$5;
    _Bool return_value____cds_wfcq_append$6;
    return_value____cds_wfcq_append$6=___cds_wfcq_append(dest_q_head, dest_q_tail, head, tail);
    if(!(return_value____cds_wfcq_append$6 == (_Bool)0))
      return (enum cds_wfcq_ret)CDS_WFCQ_RET_DEST_NON_EMPTY;

    else
      return (enum cds_wfcq_ret)CDS_WFCQ_RET_DEST_EMPTY;
  }
}

// ___cds_wfcq_splice_blocking
// file ./urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking(union anonymous$1 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$1 src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice$1;
  return_value____cds_wfcq_splice$1=___cds_wfcq_splice(dest_q_head, dest_q_tail, src_q_head, src_q_tail, 1);
  return return_value____cds_wfcq_splice$1;
}

// ___cds_wfs_end
// file ./urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end(void *node)
{
  return node == (void *)0x1UL;
}

// ___cds_wfs_next
// file ./urcu/static/wfstack.h line 388
static inline struct cds_wfs_node * ___cds_wfs_next(struct cds_wfs_node *node, signed int blocking)
{
  struct cds_wfs_node *next;
  next=___cds_wfs_node_sync_next(node, blocking);
  _Bool return_value____cds_wfs_end$1;
  return_value____cds_wfs_end$1=___cds_wfs_end((void *)next);
  if(!(return_value____cds_wfs_end$1 == (_Bool)0))
    return (struct cds_wfs_node *)(void *)0;

  else
    return next;
}

// ___cds_wfs_node_sync_next
// file ./urcu/static/wfstack.h line 151
static inline struct cds_wfs_node * ___cds_wfs_node_sync_next(struct cds_wfs_node *node, signed int blocking)
{
  struct cds_wfs_node *next;
  signed int attempt = 0;
  struct cds_wfs_node * volatile tmp_statement_expression$1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((struct cds_wfs_node * volatile *)&node->next);
    next = tmp_statement_expression$1;
    if(!(next == ((struct cds_wfs_node *)NULL)))
      break;

    if(blocking == 0)
      return (struct cds_wfs_node *)(void *)-1UL;

    attempt = attempt + 1;
    if(attempt >= 10)
    {
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
      attempt = 0;
    }

    else
      asm("rep; nop" :  :  : "memory");
  }
  while((_Bool)1);
  return next;
}

// ___cds_wfs_pop_all
// file ./urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all(union anonymous$3 u_stack)
{
  struct __cds_wfs_stack *s = u_stack._s;
  struct cds_wfs_head *head;
  unsigned long int return_value___uatomic_exchange$1;
  return_value___uatomic_exchange$1=__uatomic_exchange((void *)&s->head, (unsigned long int)(void *)0x1UL, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
  head = (struct cds_wfs_head *)return_value___uatomic_exchange$1;
  _Bool return_value____cds_wfs_end$2;
  return_value____cds_wfs_end$2=___cds_wfs_end((void *)head);
  if(!(return_value____cds_wfs_end$2 == (_Bool)0))
    return (struct cds_wfs_head *)(void *)0;

  else
    return head;
}

// __cds_list_del
// file ./urcu/list.h line 71
static inline void __cds_list_del(struct cds_list_head *prev, struct cds_list_head *next)
{
  next->prev = prev;
  prev->next = next;
}

// __create_call_rcu_data
// file urcu-call-rcu-impl.h line 481
static struct call_rcu_data * __create_call_rcu_data(unsigned long int flags, signed int cpu_affinity)
{
  struct call_rcu_data *crdp;
  call_rcu_data_init(&crdp, flags, cpu_affinity);
  return crdp;
}

// __uatomic_add
// file ./urcu/uatomic.h line 357
static inline void __uatomic_add(void *addr, unsigned long int val, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; addb %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "iq"((unsigned char)val) : "memory");
      break;
    }
    case 2:
    {
      asm("lock; addw %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned short int)val) : "memory");
      break;
    }
    case 4:
    {
      asm("lock; addl %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned int)val) : "memory");
      break;
    }
    case 8:
    {
      asm("lock; addq %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "er"((unsigned long int)val) : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_add_return
// file ./urcu/uatomic.h line 178
static inline unsigned long int __uatomic_add_return(void *addr, unsigned long int val, signed int len)
{
  unsigned char result;
  unsigned short int __uatomic_add_return$$1$$1$$2$$result;
  unsigned int __uatomic_add_return$$1$$1$$3$$result;
  unsigned long int __uatomic_add_return$$1$$1$$4$$result;
  switch(len)
  {
    case 1:
    {
      result = (unsigned char)val;
      asm("lock; xaddb %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+q"(result) :  : "memory");
      return (unsigned long int)((signed int)result + (signed int)(unsigned char)val);
    }
    case 2:
    {
      __uatomic_add_return$$1$$1$$2$$result = (unsigned short int)val;
      asm("lock; xaddw %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(__uatomic_add_return$$1$$1$$2$$result) :  : "memory");
      return (unsigned long int)((signed int)__uatomic_add_return$$1$$1$$2$$result + (signed int)(unsigned short int)val);
    }
    case 4:
    {
      __uatomic_add_return$$1$$1$$3$$result = (unsigned int)val;
      asm("lock; xaddl %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(__uatomic_add_return$$1$$1$$3$$result) :  : "memory");
      return (unsigned long int)(__uatomic_add_return$$1$$1$$3$$result + (unsigned int)val);
    }
    case 8:
    {
      __uatomic_add_return$$1$$1$$4$$result = val;
      asm("lock; xaddq %1, %0" : "+m"(*((struct __uatomic_dummy *)addr)), "+r"(__uatomic_add_return$$1$$1$$4$$result) :  : "memory");
      return __uatomic_add_return$$1$$1$$4$$result + (unsigned long int)val;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_and
// file ./urcu/uatomic.h line 245
static inline void __uatomic_and(void *addr, unsigned long int val, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; andb %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "iq"((unsigned char)val) : "memory");
      break;
    }
    case 2:
    {
      asm("lock; andw %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned short int)val) : "memory");
      break;
    }
    case 4:
    {
      asm("lock; andl %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned int)val) : "memory");
      break;
    }
    case 8:
    {
      asm("lock; andq %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "er"((unsigned long int)val) : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len)
{
  unsigned char __uatomic_cmpxchg$$1$$1$$1$$result;
  unsigned short int result;
  unsigned int __uatomic_cmpxchg$$1$$1$$3$$result;
  unsigned long int __uatomic_cmpxchg$$1$$1$$4$$result;
  switch(len)
  {
    case 1:
    {
      __uatomic_cmpxchg$$1$$1$$1$$result = (unsigned char)old;
      asm("lock; cmpxchgb %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$1$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "q"((unsigned char)_new) : "memory");
      return (unsigned long int)__uatomic_cmpxchg$$1$$1$$1$$result;
    }
    case 2:
    {
      result = (unsigned short int)old;
      asm("lock; cmpxchgw %2, %1" : "+a"(result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned short int)_new) : "memory");
      return (unsigned long int)result;
    }
    case 4:
    {
      __uatomic_cmpxchg$$1$$1$$3$$result = (unsigned int)old;
      asm("lock; cmpxchgl %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$3$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned int)_new) : "memory");
      return (unsigned long int)__uatomic_cmpxchg$$1$$1$$3$$result;
    }
    case 8:
    {
      __uatomic_cmpxchg$$1$$1$$4$$result = old;
      asm("lock; cmpxchgq %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$4$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned long int)_new) : "memory");
      return __uatomic_cmpxchg$$1$$1$$4$$result;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_dec
// file ./urcu/uatomic.h line 467
static inline void __uatomic_dec(void *addr, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; decb %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 2:
    {
      asm("lock; decw %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 4:
    {
      asm("lock; decl %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 8:
    {
      asm("lock; decq %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_exchange
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange(void *addr, unsigned long int val, signed int len)
{
  unsigned char __uatomic_exchange$$1$$1$$1$$result;
  unsigned short int __uatomic_exchange$$1$$1$$2$$result;
  unsigned int result;
  unsigned long int __uatomic_exchange$$1$$1$$4$$result;
  switch(len)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange$$1$$1$$1$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned char)val) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$1$$result;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange$$1$$1$$2$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned short int)val) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$2$$result;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned int)val) : "memory");
      return (unsigned long int)result;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(__uatomic_exchange$$1$$1$$4$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "0"((unsigned long int)val) : "memory");
      return __uatomic_exchange$$1$$1$$4$$result;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_exchange$link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange$link1(void *addr$link1, unsigned long int val$link1, signed int len$link1)
{
  unsigned char __uatomic_exchange$$1$$1$$1$$result$link1;
  unsigned short int __uatomic_exchange$$1$$1$$2$$result$link1;
  unsigned int __uatomic_exchange$$1$$1$$3$$result$link1;
  unsigned long int result$link1;
  switch(len$link1)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange$$1$$1$$1$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned char)val$link1) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$1$$result$link1;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange$$1$$1$$2$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned short int)val$link1) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$2$$result$link1;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange$$1$$1$$3$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned int)val$link1) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$3$$result$link1;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned long int)val$link1) : "memory");
      return result$link1;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_inc
// file ./urcu/uatomic.h line 414
static inline void __uatomic_inc(void *addr, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; incb %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 2:
    {
      asm("lock; incw %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 4:
    {
      asm("lock; incl %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    case 8:
    {
      asm("lock; incq %0" : "=m"(*((struct __uatomic_dummy *)addr)) :  : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// __uatomic_or
// file ./urcu/uatomic.h line 301
static inline void __uatomic_or(void *addr, unsigned long int val, signed int len)
{
  switch(len)
  {
    case 1:
    {
      asm("lock; orb %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "iq"((unsigned char)val) : "memory");
      break;
    }
    case 2:
    {
      asm("lock; orw %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned short int)val) : "memory");
      break;
    }
    case 4:
    {
      asm("lock; orl %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "ir"((unsigned int)val) : "memory");
      break;
    }
    case 8:
    {
      asm("lock; orq %1, %0" : "=m"(*((struct __uatomic_dummy *)addr)) : "er"((unsigned long int)val) : "memory");
      break;
    }
    default:
      asm("ud2");
  }
}

// _call_rcu
// file urcu-call-rcu-impl.h line 680
static void _call_rcu(struct rcu_head *head, void (*func)(struct rcu_head *), struct call_rcu_data *crdp)
{
  _cds_wfcq_node_init(&head->next);
  head->func = func;
  _cds_wfcq_enqueue(&crdp->cbs_head, &crdp->cbs_tail, &head->next);
  __uatomic_inc((void *)&crdp->qlen, (signed int)sizeof(unsigned long int) /*8ul*/ );
  wake_call_rcu_thread(crdp);
}

// _cds_wfcq_empty
// file ./urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty(union anonymous$1 u_head, struct cds_wfcq_tail *tail)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node * volatile tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((struct cds_wfcq_node * volatile *)&head->node.next);
  _Bool tmp_if_expr$3;
  struct cds_wfcq_node * volatile tmp_statement_expression$2;
  if(tmp_statement_expression$1 == ((struct cds_wfcq_node *)NULL))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$2 = *((struct cds_wfcq_node * volatile *)&tail->p);
    tmp_if_expr$3 = tmp_statement_expression$2 == &head->node ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  return tmp_if_expr$3;
}

// _cds_wfcq_enqueue
// file ./urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue(union anonymous$1 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_tail)
{
  _Bool return_value____cds_wfcq_append$1;
  return_value____cds_wfcq_append$1=___cds_wfcq_append(head, tail, new_tail, new_tail);
  return return_value____cds_wfcq_append$1;
}

// _cds_wfcq_init
// file ./urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  signed int ret;
  _cds_wfcq_node_init(&head->node);
  tail->p = &head->node;
  ret=pthread_mutex_init(&head->lock, (const union anonymous$0 *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfcq_node_init
// file ./urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init(struct cds_wfcq_node *node)
{
  node->next = (struct cds_wfcq_node *)(void *)0;
}

// _cds_wfs_first
// file ./urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first(struct cds_wfs_head *head)
{
  _Bool return_value____cds_wfs_end$1;
  return_value____cds_wfs_end$1=___cds_wfs_end((void *)head);
  if(!(return_value____cds_wfs_end$1 == (_Bool)0))
    return (struct cds_wfs_node *)(void *)0;

  else
    return &head->node;
}

// _cds_wfs_next_blocking
// file ./urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value____cds_wfs_next$1;
  return_value____cds_wfs_next$1=___cds_wfs_next(node, 1);
  return return_value____cds_wfs_next$1;
}

// _cds_wfs_push
// file ./urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push(union anonymous$3 u_stack, struct cds_wfs_node *node)
{
  struct __cds_wfs_stack *s = u_stack._s;
  struct cds_wfs_head *old_head;
  struct cds_wfs_head *new_head;
  /* assertion node->next == ((void *)0) */
  assert(node->next == (struct cds_wfs_node *)(void *)0);
  struct cds_wfs_head *tmp_statement_expression$1;
  const struct cds_wfs_node *__ptr = node;
  tmp_statement_expression$1 = (struct cds_wfs_head *)((char *)__ptr - (signed long int)0ul);
  new_head = tmp_statement_expression$1;
  unsigned long int return_value___uatomic_exchange$2;
  return_value___uatomic_exchange$2=__uatomic_exchange((void *)&s->head, (unsigned long int)new_head, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
  old_head = (struct cds_wfs_head *)return_value___uatomic_exchange$2;
  struct cds_wfs_node *_v;
  struct cds_wfs_node * volatile tmp_statement_expression$3;
  *((struct cds_wfs_node * volatile *)&node->next) = &old_head->node;
  tmp_statement_expression$3 = *((struct cds_wfs_node * volatile *)&node->next);
  _v = tmp_statement_expression$3;
  asm("" :  :  : "memory");
  _v = _v;
  _Bool return_value____cds_wfs_end$4;
  return_value____cds_wfs_end$4=___cds_wfs_end((void *)old_head);
  return (signed int)!(return_value____cds_wfs_end$4 != (_Bool)0);
}

// _defer_rcu
// file urcu-defer-impl.h line 311
static void _defer_rcu(void (*fct)(void *), void *p)
{
  unsigned long int head;
  unsigned long int tail;
  head = defer_queue.head;
  volatile unsigned long int tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((volatile unsigned long int *)&defer_queue.tail);
  tail = tmp_statement_expression$1;
  volatile unsigned long int tmp_statement_expression$2;
  if(head + -tail >= 4094ul)
  {
    /* assertion head - tail <= (1 << 12) */
    assert(head - tail <= (unsigned long int)(1 << 12));
    rcu_defer_barrier_thread_memb();
    asm("" :  :  : "memory");
    tmp_statement_expression$2 = *((volatile unsigned long int *)&defer_queue.tail);
    /* assertion head - __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__((defer_queue).tail) *)&((defer_queue).tail)); }) == 0 */
    assert(head - tmp_statement_expression$2 == (unsigned long int)0);
  }

  unsigned long int tmp_post$3;
  unsigned long int tmp_post$4;
  unsigned long int tmp_post$5;
  if(p == (void *)-2 || !((1ul & (unsigned long int)p) == 0ul) || !((void (*)(void *))defer_queue.last_fct_in == fct))
  {
    defer_queue.last_fct_in = (void *)fct;
    if(fct == (void (*)(void *))-2 || !((1ul & (unsigned long int)fct) == 0ul))
    {
      tmp_post$3 = head;
      head = head + 1ul;
      *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post$3 & (unsigned long int)((1 << 12) - 1))]) = (void *)~(1 << 0);
      tmp_post$4 = head;
      head = head + 1ul;
      *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post$4 & (unsigned long int)((1 << 12) - 1))]) = (void *)fct;
    }

    else
    {
      fct = (void (*)(void *))(void *)((unsigned long int)fct | (unsigned long int)(1 << 0));
      tmp_post$5 = head;
      head = head + 1ul;
      *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post$5 & (unsigned long int)((1 << 12) - 1))]) = (void *)fct;
    }
  }

  unsigned long int tmp_post$6 = head;
  head = head + 1ul;
  *((void * volatile *)&defer_queue.q[(signed long int)(tmp_post$6 & (unsigned long int)((1 << 12) - 1))]) = p;
  asm("" :  :  : "memory");
  unsigned long int _v;
  volatile unsigned long int tmp_statement_expression$7;
  *((volatile unsigned long int *)&defer_queue.head) = head;
  tmp_statement_expression$7 = *((volatile unsigned long int *)&defer_queue.head);
  _v = tmp_statement_expression$7;
  asm("" :  :  : "memory");
  _v = _v;
  asm("mfence" :  :  : "memory");
  wake_up_defer();
}

// _rcu_barrier_complete
// file urcu-call-rcu-impl.h line 822
static void _rcu_barrier_complete(struct rcu_head *head)
{
  struct call_rcu_completion_work *work;
  struct call_rcu_completion *completion;
  struct call_rcu_completion_work *tmp_statement_expression$1;
  const struct rcu_head *__ptr = head;
  tmp_statement_expression$1 = (struct call_rcu_completion_work *)((char *)__ptr - (signed long int)0ul);
  work = tmp_statement_expression$1;
  completion = work->completion;
  unsigned long int return_value___uatomic_add_return$2;
  return_value___uatomic_add_return$2=__uatomic_add_return((void *)&completion->barrier_count, (unsigned long int)-((unsigned long int)1), (signed int)sizeof(signed int) /*4ul*/ );
  if((signed int)return_value___uatomic_add_return$2 == 0)
    call_rcu_completion_wake_up(completion);

  urcu_ref_put(&completion->ref, free_completion);
  free((void *)work);
}

// _rcu_defer_barrier_thread
// file urcu-defer-impl.h line 249
static void _rcu_defer_barrier_thread(void)
{
  unsigned long int head;
  unsigned long int num_items;
  head = defer_queue.head;
  num_items = head - defer_queue.tail;
  if(!(num_items == 0ul))
  {
    synchronize_rcu_memb();
    rcu_defer_barrier_queue(&defer_queue, head);
  }

}

// _rcu_read_lock_memb
// file urcu/static/urcu.h line 214
static inline void _rcu_read_lock_memb(void)
{
  unsigned long int tmp;
  asm("" :  :  : "memory");
  tmp = rcu_reader_memb.ctr;
  _rcu_read_lock_update(tmp);
}

// _rcu_read_lock_update
// file urcu/static/urcu.h line 195
static inline void _rcu_read_lock_update(unsigned long int tmp)
{
  if((4294967295ul & tmp) == 0ul)
  {
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = *((volatile unsigned long int *)&rcu_gp_memb.ctr);
    smp_mb_slave();
  }

  else
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp + (1UL << 0);
}

// _rcu_read_ongoing_memb
// file urcu/static/urcu.h line 267
static inline signed int _rcu_read_ongoing_memb(void)
{
  return (signed int)(rcu_reader_memb.ctr & (1UL << (sizeof(unsigned long int) /*8ul*/  << 2)) - (unsigned long int)1);
}

// _rcu_read_unlock_memb
// file urcu/static/urcu.h line 249
static inline void _rcu_read_unlock_memb(void)
{
  unsigned long int tmp = rcu_reader_memb.ctr;
  _rcu_read_unlock_update_and_wakeup(tmp);
  asm("" :  :  : "memory");
}

// _rcu_read_unlock_update_and_wakeup
// file urcu/static/urcu.h line 233
static inline void _rcu_read_unlock_update_and_wakeup(unsigned long int tmp)
{
  if((4294967295ul & tmp) == 1UL)
  {
    smp_mb_slave();
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp - (1UL << 0);
    smp_mb_slave();
    wake_up_gp();
  }

  else
    *((volatile unsigned long int *)&rcu_reader_memb.ctr) = tmp - (1UL << 0);
}

// alloc_cpu_call_rcu_data
// file urcu-call-rcu-impl.h line 130
static void alloc_cpu_call_rcu_data(void)
{
  struct call_rcu_data **p;
  struct call_rcu_data ** volatile tmp_statement_expression$2;
  if(maxcpus == 0l)
  {
    maxcpus=sysconf(83);
    if(maxcpus >= 1l)
    {
      void *return_value_malloc$1;
      return_value_malloc$1=malloc((unsigned long int)maxcpus * sizeof(struct call_rcu_data *) /*8ul*/ );
      p = (struct call_rcu_data **)return_value_malloc$1;
      if(!(p == ((struct call_rcu_data **)NULL)))
      {
        memset((void *)p, 0, (unsigned long int)maxcpus * sizeof(struct call_rcu_data *) /*8ul*/ );
        do
        {
          struct call_rcu_data **_________pv = p;
          asm("sfence" :  :  : "memory");
          struct call_rcu_data **_v;
          *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data))) = _________pv;
          tmp_statement_expression$2 = *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data)));
          _v = tmp_statement_expression$2;
          asm("" :  :  : "memory");
          _v = _v;
        }
        while((_Bool)0);
      }

      else
      {
        static signed int warned = 0;
        if(warned == 0)
          fprintf(stderr, "[error] liburcu: unable to allocate per-CPU pointer array\n");

        warned = 1;
      }
    }

  }

}

// call_rcu_after_fork_child_memb
// file urcu-call-rcu-impl.h line 949
void call_rcu_after_fork_child_memb(void)
{
  struct call_rcu_data *crdp;
  struct call_rcu_data *next;
  call_rcu_unlock(&call_rcu_mutex);
  signed int return_value_cds_list_empty$1;
  return_value_cds_list_empty$1=cds_list_empty(&call_rcu_data_list);
  struct call_rcu_data ** volatile tmp_statement_expression$2;
  volatile unsigned long int tmp_statement_expression$3;
  if(return_value_cds_list_empty$1 == 0)
  {
    default_call_rcu_data = (struct call_rcu_data *)(void *)0;
    get_default_call_rcu_data_memb();
    maxcpus_reset();
    free((void *)per_cpu_call_rcu_data);
    do
    {
      struct call_rcu_data **_________pv = (struct call_rcu_data **)(void *)0;
      struct call_rcu_data **call_rcu_after_fork_child_memb$$1$$1$$1$$_v;
      *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data))) = _________pv;
      tmp_statement_expression$2 = *((struct call_rcu_data ** volatile *)&(*(&per_cpu_call_rcu_data)));
      call_rcu_after_fork_child_memb$$1$$1$$1$$_v = tmp_statement_expression$2;
      asm("" :  :  : "memory");
      call_rcu_after_fork_child_memb$$1$$1$$1$$_v = call_rcu_after_fork_child_memb$$1$$1$$1$$_v;
    }
    while((_Bool)0);
    thread_call_rcu_data = (struct call_rcu_data *)(void *)0;
    crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    next = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    for( ; !(&crdp->list == &call_rcu_data_list); next = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    {
      if(!(crdp == default_call_rcu_data))
      {
        unsigned long int _v;
        *((volatile unsigned long int *)&(*(&crdp->flags))) = (volatile unsigned long int)(1U << 3);
        tmp_statement_expression$3 = *((volatile unsigned long int *)&(*(&crdp->flags)));
        _v = tmp_statement_expression$3;
        asm("" :  :  : "memory");
        _v = _v;
        call_rcu_data_free_memb(crdp);
      }

      crdp = next;
    }
  }

}

// call_rcu_after_fork_parent_memb
// file urcu-call-rcu-impl.h line 931
void call_rcu_after_fork_parent_memb(void)
{
  struct call_rcu_data *crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    __uatomic_and((void *)&crdp->flags, (unsigned long int)~(1U << 4), (signed int)sizeof(unsigned long int) /*8ul*/ );
  crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  volatile unsigned long int tmp_statement_expression$1;
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    do
    {
      asm("" :  :  : "memory");
      tmp_statement_expression$1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
      if((32ul & tmp_statement_expression$1) == 0ul)
        break;

      poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
    }
    while((_Bool)1);
  call_rcu_unlock(&call_rcu_mutex);
}

// call_rcu_before_fork_memb
// file urcu-call-rcu-impl.h line 909
void call_rcu_before_fork_memb(void)
{
  struct call_rcu_data *crdp;
  call_rcu_lock(&call_rcu_mutex);
  crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
  {
    __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 4), (signed int)sizeof(unsigned long int) /*8ul*/ );
    asm("" :  :  : "memory");
    wake_call_rcu_thread(crdp);
  }
  crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
  volatile unsigned long int tmp_statement_expression$1;
  for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    do
    {
      asm("" :  :  : "memory");
      tmp_statement_expression$1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
      if(!((32ul & tmp_statement_expression$1) == 0ul))
        break;

      poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
    }
    while((_Bool)1);
}

// call_rcu_completion_wait
// file urcu-call-rcu-impl.h line 274
static void call_rcu_completion_wait(struct call_rcu_completion *completion)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((volatile signed int *)&(*(&completion->futex)));
  signed int return_value_futex_async$2;
  if(tmp_statement_expression$1 == -1)
    do
    {
      return_value_futex_async$2=futex_async(&completion->futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_async$2 == 0)
        break;

      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      switch(*return_value___errno_location$3)
      {
        case 11:
          goto __CPROVER_DUMP_L7;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location$4;
            return_value___errno_location$4=__errno_location();
            char *return_value_strerror$5;
            return_value_strerror$5=strerror(*return_value___errno_location$4);
            fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_completion_wait", 291, return_value_strerror$5);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);


__CPROVER_DUMP_L7:
  ;
}

// call_rcu_completion_wake_up
// file urcu-call-rcu-impl.h line 296
static void call_rcu_completion_wake_up(struct call_rcu_completion *completion)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression$5;
  asm("" :  :  : "memory");
  tmp_statement_expression$5 = *((volatile signed int *)&(*(&completion->futex)));
  volatile signed int tmp_statement_expression$1;
  if(tmp_statement_expression$5 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&completion->futex))) = 0;
    tmp_statement_expression$1 = *((volatile signed int *)&(*(&completion->futex)));
    _v = tmp_statement_expression$1;
    asm("" :  :  : "memory");
    _v = _v;
    signed int return_value_futex_async$4;
    return_value_futex_async$4=futex_async(&completion->futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_async$4 >= 0))
      do
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        char *return_value_strerror$3;
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_completion_wake_up", 304, return_value_strerror$3);
        abort();
      }
      while((_Bool)0);

  }

}

// call_rcu_data_free_memb
// file urcu-call-rcu-impl.h line 743
void call_rcu_data_free_memb(struct call_rcu_data *crdp)
{
  volatile unsigned long int tmp_statement_expression$2;
  volatile unsigned long int tmp_statement_expression$1;
  volatile unsigned long int tmp_statement_expression$3;
  if(!(crdp == ((struct call_rcu_data *)NULL)) && !(crdp == default_call_rcu_data))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$2 = *((volatile unsigned long int *)&(*(&crdp->flags)));
    if((8ul & tmp_statement_expression$2) == 0ul)
    {
      __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 2), (signed int)sizeof(unsigned long int) /*8ul*/ );
      wake_call_rcu_thread(crdp);
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression$1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
        if(!((8ul & tmp_statement_expression$1) == 0ul))
          break;

        poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
      }
      while((_Bool)1);
    }

    _Bool return_value__cds_wfcq_empty$4;
    return_value__cds_wfcq_empty$4=_cds_wfcq_empty(&crdp->cbs_head, &crdp->cbs_tail);
    if(return_value__cds_wfcq_empty$4 == (_Bool)0)
    {
      get_default_call_rcu_data_memb();
      ___cds_wfcq_splice_blocking(&default_call_rcu_data->cbs_head, &default_call_rcu_data->cbs_tail, &crdp->cbs_head, &crdp->cbs_tail);
      asm("" :  :  : "memory");
      tmp_statement_expression$3 = *((volatile unsigned long int *)&(*(&crdp->qlen)));
      __uatomic_add((void *)&default_call_rcu_data->qlen, (unsigned long int)tmp_statement_expression$3, (signed int)sizeof(unsigned long int) /*8ul*/ );
      wake_call_rcu_thread(default_call_rcu_data);
    }

    call_rcu_lock(&call_rcu_mutex);
    cds_list_del(&crdp->list);
    call_rcu_unlock(&call_rcu_mutex);
    free((void *)crdp);
  }

}

// call_rcu_data_init
// file urcu-call-rcu-impl.h line 415
static void call_rcu_data_init(struct call_rcu_data **crdpp, unsigned long int flags, signed int cpu_affinity)
{
  struct call_rcu_data *crdp;
  signed int ret;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct call_rcu_data) /*128ul*/ );
  crdp = (struct call_rcu_data *)return_value_malloc$1;
  if(crdp == ((struct call_rcu_data *)NULL))
    do
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(*return_value___errno_location$2);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_data_init", 424, return_value_strerror$3);
      abort();
    }
    while((_Bool)0);

  memset((void *)crdp, 0, sizeof(struct call_rcu_data) /*128ul*/ );
  _cds_wfcq_init(&crdp->cbs_head, &crdp->cbs_tail);
  crdp->qlen = (unsigned long int)0;
  crdp->futex = 0;
  crdp->flags = flags;
  cds_list_add(&crdp->list, &call_rcu_data_list);
  crdp->cpu_affinity = cpu_affinity;
  crdp->gp_count = (unsigned long int)0;
  asm("mfence" :  :  : "memory");
  *crdpp = crdp;
  ret=pthread_create(&crdp->tid, (const union pthread_attr_t *)(void *)0, call_rcu_thread, (void *)crdp);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(ret);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_data_init", 437, return_value_strerror$4);
      abort();
    }
    while((_Bool)0);

}

// call_rcu_lock
// file urcu-call-rcu-impl.h line 175
static void call_rcu_lock(union anonymous$2 *pmp)
{
  signed int ret;
  ret=pthread_mutex_lock(pmp);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(ret);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_lock", 181, return_value_strerror$1);
      abort();
    }
    while((_Bool)0);

}

// call_rcu_memb
// file urcu-call-rcu-impl.h line 705
void call_rcu_memb(struct rcu_head *head, void (*func)(struct rcu_head *))
{
  struct call_rcu_data *crdp;
  _rcu_read_lock_memb();
  crdp=get_call_rcu_data_memb();
  _call_rcu(head, func, crdp);
  _rcu_read_unlock_memb();
}

// call_rcu_thread
// file urcu-call-rcu-impl.h line 310
static void * call_rcu_thread(void *arg)
{
  unsigned long int cbcount;
  struct call_rcu_data *crdp = (struct call_rcu_data *)arg;
  signed int rt;
  volatile unsigned long int tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((volatile unsigned long int *)&(*(&crdp->flags)));
  rt = (signed int)!(!((tmp_statement_expression$1 & (unsigned long int)(1U << 0)) != 0ul));
  signed int return_value_set_thread_cpu_affinity$4;
  return_value_set_thread_cpu_affinity$4=set_thread_cpu_affinity(crdp);
  if(!(return_value_set_thread_cpu_affinity$4 == 0))
    do
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(*return_value___errno_location$2);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_thread", 317, return_value_strerror$3);
      abort();
    }
    while((_Bool)0);

  rcu_register_thread_memb();
  thread_call_rcu_data = crdp;
  if(rt == 0)
  {
    __uatomic_dec((void *)&crdp->futex, (signed int)sizeof(signed int) /*4ul*/ );
    asm("mfence" :  :  : "memory");
  }

  volatile unsigned long int tmp_statement_expression$9;
  volatile unsigned long int tmp_statement_expression$8;
  struct cds_wfcq_node *tmp_if_expr$11;
  struct cds_wfcq_node *return_value____cds_wfcq_next_blocking$10;
  struct rcu_head *tmp_statement_expression$14;
  struct cds_wfcq_node *tmp_if_expr$13;
  struct cds_wfcq_node *return_value____cds_wfcq_next_blocking$12;
  volatile unsigned long int tmp_statement_expression$15;
  do
  {
    struct cds_wfcq_head cbs_tmp_head;
    struct cds_wfcq_tail cbs_tmp_tail;
    struct cds_wfcq_node *cbs;
    struct cds_wfcq_node *cbs_tmp_n;
    enum cds_wfcq_ret splice_ret;
    signed int return_value_set_thread_cpu_affinity$7;
    return_value_set_thread_cpu_affinity$7=set_thread_cpu_affinity(crdp);
    if(!(return_value_set_thread_cpu_affinity$7 == 0))
      do
      {
        signed int *return_value___errno_location$5;
        return_value___errno_location$5=__errno_location();
        char *return_value_strerror$6;
        return_value_strerror$6=strerror(*return_value___errno_location$5);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_thread", 337, return_value_strerror$6);
        abort();
      }
      while((_Bool)0);

    asm("" :  :  : "memory");
    tmp_statement_expression$9 = *((volatile unsigned long int *)&(*(&crdp->flags)));
    if(!((16ul & tmp_statement_expression$9) == 0ul))
    {
      rcu_unregister_thread_memb();
      asm("" :  :  : "memory");
      __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 5), (signed int)sizeof(unsigned long int) /*8ul*/ );
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression$8 = *((volatile unsigned long int *)&(*(&crdp->flags)));
        if((16ul & tmp_statement_expression$8) == 0ul)
          break;

        poll((struct pollfd *)(void *)0, (unsigned long int)0, 1);
      }
      while((_Bool)1);
      __uatomic_and((void *)&crdp->flags, (unsigned long int)~(1U << 5), (signed int)sizeof(unsigned long int) /*8ul*/ );
      asm("" :  :  : "memory");
      rcu_register_thread_memb();
    }

    _cds_wfcq_init(&cbs_tmp_head, &cbs_tmp_tail);
    splice_ret=___cds_wfcq_splice_blocking(&cbs_tmp_head, &cbs_tmp_tail, &crdp->cbs_head, &crdp->cbs_tail);
    /* assertion splice_ret != CDS_WFCQ_RET_WOULDBLOCK */
    assert((signed int)splice_ret != CDS_WFCQ_RET_WOULDBLOCK);
    /* assertion splice_ret != CDS_WFCQ_RET_DEST_NON_EMPTY */
    assert((signed int)splice_ret != CDS_WFCQ_RET_DEST_NON_EMPTY);
    if(!((signed int)splice_ret == CDS_WFCQ_RET_SRC_EMPTY))
    {
      synchronize_rcu_memb();
      cbcount = (unsigned long int)0;
      cbs=___cds_wfcq_first_blocking(&cbs_tmp_head, &cbs_tmp_tail);
      if(!(cbs == ((struct cds_wfcq_node *)NULL)))
      {
        return_value____cds_wfcq_next_blocking$10=___cds_wfcq_next_blocking(&cbs_tmp_head, &cbs_tmp_tail, cbs);
        tmp_if_expr$11 = return_value____cds_wfcq_next_blocking$10;
      }

      else
        tmp_if_expr$11 = (struct cds_wfcq_node *)(void *)0;
      cbs_tmp_n = tmp_if_expr$11;
      if(!(cbs == ((struct cds_wfcq_node *)NULL)))
      {
        struct rcu_head *rhp;
        const struct cds_wfcq_node *__ptr = cbs;
        tmp_statement_expression$14 = (struct rcu_head *)((char *)__ptr - (signed long int)0ul);
        rhp = tmp_statement_expression$14;
        rhp->func(rhp);
        cbcount = cbcount + 1ul;
        cbs = cbs_tmp_n;
        if(!(cbs == ((struct cds_wfcq_node *)NULL)))
        {
          return_value____cds_wfcq_next_blocking$12=___cds_wfcq_next_blocking(&cbs_tmp_head, &cbs_tmp_tail, cbs);
          tmp_if_expr$13 = return_value____cds_wfcq_next_blocking$12;
        }

        else
          tmp_if_expr$13 = (struct cds_wfcq_node *)(void *)0;
        cbs_tmp_n = tmp_if_expr$13;
      }

      __uatomic_add((void *)&crdp->qlen, (unsigned long int)-((unsigned long int)cbcount), (signed int)sizeof(unsigned long int) /*8ul*/ );
    }

    asm("" :  :  : "memory");
    tmp_statement_expression$15 = *((volatile unsigned long int *)&(*(&crdp->flags)));
    if(!((4ul & tmp_statement_expression$15) == 0ul))
      break;

    rcu_thread_offline();
    if(rt == 0)
    {
      _Bool return_value__cds_wfcq_empty$16;
      return_value__cds_wfcq_empty$16=_cds_wfcq_empty(&crdp->cbs_head, &crdp->cbs_tail);
      if(!(return_value__cds_wfcq_empty$16 == (_Bool)0))
      {
        call_rcu_wait(crdp);
        poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
        __uatomic_dec((void *)&crdp->futex, (signed int)sizeof(signed int) /*4ul*/ );
        asm("mfence" :  :  : "memory");
      }

      else
        poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
    }

    else
      poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
    rcu_thread_online();
  }
  while((_Bool)1);
  volatile signed int tmp_statement_expression$17;
  if(rt == 0)
  {
    asm("mfence" :  :  : "memory");
    signed int _v;
    *((volatile signed int *)&(*(&crdp->futex))) = 0;
    tmp_statement_expression$17 = *((volatile signed int *)&(*(&crdp->futex)));
    _v = tmp_statement_expression$17;
    asm("" :  :  : "memory");
    _v = _v;
  }

  __uatomic_or((void *)&crdp->flags, (unsigned long int)(1U << 3), (signed int)sizeof(unsigned long int) /*8ul*/ );
  rcu_unregister_thread_memb();
  return (void *)0;
}

// call_rcu_unlock
// file urcu-call-rcu-impl.h line 186
static void call_rcu_unlock(union anonymous$2 *pmp)
{
  signed int ret;
  ret=pthread_mutex_unlock(pmp);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(ret);
      fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_unlock", 192, return_value_strerror$1);
      abort();
    }
    while((_Bool)0);

}

// call_rcu_wait
// file urcu-call-rcu-impl.h line 240
static void call_rcu_wait(struct call_rcu_data *crdp)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((volatile signed int *)&(*(&crdp->futex)));
  signed int return_value_futex_async$2;
  if(tmp_statement_expression$1 == -1)
    do
    {
      return_value_futex_async$2=futex_async(&crdp->futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_async$2 == 0)
        break;

      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      switch(*return_value___errno_location$3)
      {
        case 11:
          goto __CPROVER_DUMP_L7;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location$4;
            return_value___errno_location$4=__errno_location();
            char *return_value_strerror$5;
            return_value_strerror$5=strerror(*return_value___errno_location$4);
            fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_wait", 257, return_value_strerror$5);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);


__CPROVER_DUMP_L7:
  ;
}

// call_rcu_wake_up
// file urcu-call-rcu-impl.h line 262
static void call_rcu_wake_up(struct call_rcu_data *crdp)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression$5;
  asm("" :  :  : "memory");
  tmp_statement_expression$5 = *((volatile signed int *)&(*(&crdp->futex)));
  volatile signed int tmp_statement_expression$1;
  if(tmp_statement_expression$5 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&crdp->futex))) = 0;
    tmp_statement_expression$1 = *((volatile signed int *)&(*(&crdp->futex)));
    _v = tmp_statement_expression$1;
    asm("" :  :  : "memory");
    _v = _v;
    signed int return_value_futex_async$4;
    return_value_futex_async$4=futex_async(&crdp->futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_async$4 >= 0))
      do
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        char *return_value_strerror$3;
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"call_rcu_wake_up", 270, return_value_strerror$3);
        abort();
      }
      while((_Bool)0);

  }

}

// cds_list_add
// file ./urcu/list.h line 51
static inline void cds_list_add(struct cds_list_head *newp, struct cds_list_head *head)
{
  head->next->prev = newp;
  newp->next = head->next;
  newp->prev = head;
  head->next = newp;
}

// cds_list_add_rcu
// file ..//../../urcu/rculist.h line 34
static inline void cds_list_add_rcu(struct cds_list_head *newp, struct cds_list_head *head)
{
  newp->next = head->next;
  newp->prev = head;
  head->next->prev = newp;
  do
  {
    struct cds_list_head *_________pv = newp;
    rcu_set_pointer_sym((void **)&head->next, (void *)_________pv);
  }
  while((_Bool)0);
}

// cds_list_del
// file ./urcu/list.h line 79
static inline void cds_list_del(struct cds_list_head *elem)
{
  __cds_list_del(elem->prev, elem->next);
}

// cds_list_empty
// file ./urcu/list.h line 184
static inline signed int cds_list_empty(struct cds_list_head *head)
{
  return (signed int)(head == head->next);
}

// cds_list_move
// file ./urcu/list.h line 94
static inline void cds_list_move(struct cds_list_head *elem, struct cds_list_head *head)
{
  __cds_list_del(elem->prev, elem->next);
  cds_list_add(elem, head);
}

// cds_list_splice
// file ./urcu/list.h line 112
static inline void cds_list_splice(struct cds_list_head *add, struct cds_list_head *head)
{
  if(!(add == add->next))
  {
    add->next->prev = head;
    add->prev->next = head->next;
    head->next->prev = add->prev;
    head->next = add->next;
  }

}

// compat_futex_async
// file ./urcu/futex.h line 52
extern signed int compat_futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret = 0;
  /* assertion !timeout */
  assert(!(timeout != ((struct timespec *)NULL)));
  /* assertion !uaddr2 */
  assert(!(uaddr2 != ((signed int *)NULL)));
  /* assertion !val3 */
  assert(!(val3 != 0));
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression$1;
  switch(op)
  {
    case 0:
    {
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression$1 = *((volatile signed int *)&(*uaddr));
        if(!(tmp_statement_expression$1 == val))
          break;

        signed int return_value_poll$2;
        return_value_poll$2=poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
        if(!(return_value_poll$2 >= 0))
        {
          ret = -1;
          goto end;
        }

      }
      while((_Bool)1);
      break;
    }
    case 1:
      break;
    default:
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 22;
      ret = -1;
    }
  }

end:
  ;
  return ret;
}

// compat_futex_noasync
// file ./urcu/futex.h line 50
extern signed int compat_futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret = 0;
  signed int lockret;
  /* assertion !timeout */
  assert(!(timeout != ((struct timespec *)NULL)));
  /* assertion !uaddr2 */
  assert(!(uaddr2 != ((signed int *)NULL)));
  /* assertion !val3 */
  assert(!(val3 != 0));
  asm("mfence" :  :  : "memory");
  lockret=pthread_mutex_lock(&__urcu_compat_futex_lock);
  if(!(lockret == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = lockret;
    ret = -1;
    goto end;
  }

  volatile signed int tmp_statement_expression$2;
  switch(op)
  {
    case 0:
    {
      do
      {
        asm("" :  :  : "memory");
        tmp_statement_expression$2 = *((volatile signed int *)&(*uaddr));
        if(!(tmp_statement_expression$2 == val))
          break;

        pthread_cond_wait(&__urcu_compat_futex_cond, &__urcu_compat_futex_lock);
      }
      while((_Bool)1);
      break;
    }
    case 1:
    {
      pthread_cond_broadcast(&__urcu_compat_futex_cond);
      break;
    }
    default:
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 22;
      ret = -1;
    }
  }
  lockret=pthread_mutex_unlock(&__urcu_compat_futex_lock);
  if(!(lockret == 0))
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    *return_value___errno_location$4 = lockret;
    ret = -1;
  }


end:
  ;
  return ret;
}

// create_all_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 627
signed int create_all_cpu_call_rcu_data_memb(unsigned long int flags)
{
  signed int i;
  struct call_rcu_data *crdp;
  signed int ret;
  call_rcu_lock(&call_rcu_mutex);
  alloc_cpu_call_rcu_data();
  call_rcu_unlock(&call_rcu_mutex);
  if(!(maxcpus >= 1l))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -22;
  }

  if(per_cpu_call_rcu_data == ((struct call_rcu_data **)NULL))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 12;
    return -12;
  }

  i = 0;
  for( ; !((signed long int)i >= maxcpus); i = i + 1)
  {
    call_rcu_lock(&call_rcu_mutex);
    struct call_rcu_data *return_value_get_cpu_call_rcu_data_memb$3;
    return_value_get_cpu_call_rcu_data_memb$3=get_cpu_call_rcu_data_memb(i);
    if(!(return_value_get_cpu_call_rcu_data_memb$3 == ((struct call_rcu_data *)NULL)))
      call_rcu_unlock(&call_rcu_mutex);

    else
    {
      crdp=__create_call_rcu_data(flags, i);
      if(crdp == ((struct call_rcu_data *)NULL))
      {
        call_rcu_unlock(&call_rcu_mutex);
        signed int *return_value___errno_location$4;
        return_value___errno_location$4=__errno_location();
        *return_value___errno_location$4 = 12;
        return -12;
      }

      call_rcu_unlock(&call_rcu_mutex);
      ret=set_cpu_call_rcu_data_memb(i, crdp);
      if(!(ret == 0))
      {
        call_rcu_data_free_memb(crdp);
        if(ret == -17)
          goto __CPROVER_DUMP_L8;

        return ret;
      }

    }

  __CPROVER_DUMP_L8:
    ;
  }
  return 0;
}

// create_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 490
struct call_rcu_data * create_call_rcu_data_memb(unsigned long int flags, signed int cpu_affinity)
{
  struct call_rcu_data *crdp;
  call_rcu_lock(&call_rcu_mutex);
  crdp=__create_call_rcu_data(flags, cpu_affinity);
  call_rcu_unlock(&call_rcu_mutex);
  return crdp;
}

// defer_rcu_memb
// file urcu-defer-impl.h line 395
extern void defer_rcu_memb(void (*fct)(void *), void *p)
{
  _defer_rcu(fct, p);
}

// free_all_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 775
void free_all_cpu_call_rcu_data_memb(void)
{
  signed int cpu;
  struct call_rcu_data **crdp;
  if(maxcpus >= 1l)
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct call_rcu_data *) /*8ul*/  * (unsigned long int)maxcpus);
    crdp = (struct call_rcu_data **)return_value_malloc$1;
    if(crdp == ((struct call_rcu_data **)NULL))
    {
      static signed int warned = 0;
      if(warned == 0)
        fprintf(stderr, "[error] liburcu: unable to allocate per-CPU pointer array\n");

      warned = 1;
    }

    else
    {
      cpu = 0;
      for( ; !((signed long int)cpu >= maxcpus); cpu = cpu + 1)
      {
        crdp[(signed long int)cpu]=get_cpu_call_rcu_data_memb(cpu);
        if(!(crdp[(signed long int)cpu] == ((struct call_rcu_data *)NULL)))
          set_cpu_call_rcu_data_memb(cpu, (struct call_rcu_data *)(void *)0);

      }
      synchronize_rcu_memb();
      cpu = 0;
      for( ; !((signed long int)cpu >= maxcpus); cpu = cpu + 1)
        if(!(crdp[(signed long int)cpu] == ((struct call_rcu_data *)NULL)))
          call_rcu_data_free_memb(crdp[(signed long int)cpu]);

      free((void *)crdp);
    }
  }

}

// free_completion
// file urcu-call-rcu-impl.h line 813
static void free_completion(struct urcu_ref *ref)
{
  struct call_rcu_completion *completion;
  struct call_rcu_completion *tmp_statement_expression$1;
  const struct urcu_ref *__ptr = ref;
  tmp_statement_expression$1 = (struct call_rcu_completion *)((char *)__ptr - (signed long int)8ul);
  completion = tmp_statement_expression$1;
  free((void *)completion);
}

// futex
// file ./urcu/futex.h line 62
static inline signed int futex(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)202, uaddr, op, val, timeout, uaddr2, val3);
  return (signed int)return_value_syscall$1;
}

// futex_async
// file ./urcu/futex.h line 83
static inline signed int futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret;
  ret=futex(uaddr, op, val, timeout, uaddr2, val3);
  _Bool tmp_if_expr$3;
  signed int *return_value___errno_location$2;
  if(!(ret >= 0))
  {
    return_value___errno_location$2=__errno_location();
    tmp_if_expr$3 = *return_value___errno_location$2 == 38 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    signed int return_value_compat_futex_async$1;
    return_value_compat_futex_async$1=compat_futex_async(uaddr, op, val, timeout, uaddr2, val3);
    return return_value_compat_futex_async$1;
  }

  return ret;
}

// futex_noasync
// file ./urcu/futex.h line 69
static inline signed int futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3)
{
  signed int ret;
  ret=futex(uaddr, op, val, timeout, uaddr2, val3);
  _Bool tmp_if_expr$3;
  signed int *return_value___errno_location$2;
  if(!(ret >= 0))
  {
    return_value___errno_location$2=__errno_location();
    tmp_if_expr$3 = *return_value___errno_location$2 == 38 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
  {
    signed int return_value_compat_futex_noasync$1;
    return_value_compat_futex_noasync$1=compat_futex_noasync(uaddr, op, val, timeout, uaddr2, val3);
    return return_value_compat_futex_noasync$1;
  }

  return ret;
}

// get_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 578
struct call_rcu_data * get_call_rcu_data_memb(void)
{
  struct call_rcu_data *crd;
  if(!(thread_call_rcu_data == ((struct call_rcu_data *)NULL)))
    return thread_call_rcu_data;

  else
  {
    if(maxcpus >= 1l)
    {
      signed int return_value_urcu_sched_getcpu$1;
      return_value_urcu_sched_getcpu$1=urcu_sched_getcpu();
      crd=get_cpu_call_rcu_data_memb(return_value_urcu_sched_getcpu$1);
      if(!(crd == ((struct call_rcu_data *)NULL)))
        return crd;

    }

    struct call_rcu_data *return_value_get_default_call_rcu_data_memb$2;
    return_value_get_default_call_rcu_data_memb$2=get_default_call_rcu_data_memb();
    return return_value_get_default_call_rcu_data_memb$2;
  }
}

// get_call_rcu_thread_memb
// file urcu-call-rcu-impl.h line 472
unsigned long int get_call_rcu_thread_memb(struct call_rcu_data *crdp)
{
  return crdp->tid;
}

// get_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 450
struct call_rcu_data * get_cpu_call_rcu_data_memb(signed int cpu)
{
  struct call_rcu_data **pcpu_crdp;
  struct call_rcu_data **tmp_statement_expression$1;
  struct call_rcu_data **_________p1;
  struct call_rcu_data ** volatile tmp_statement_expression$2;
  asm("" :  :  : "memory");
  tmp_statement_expression$2 = *((struct call_rcu_data ** volatile *)&per_cpu_call_rcu_data);
  _________p1 = tmp_statement_expression$2;
  tmp_statement_expression$1 = _________p1;
  pcpu_crdp = tmp_statement_expression$1;
  struct call_rcu_data *tmp_statement_expression$3;
  struct call_rcu_data * volatile tmp_statement_expression$4;
  if(pcpu_crdp == ((struct call_rcu_data **)NULL))
    return (struct call_rcu_data *)(void *)0;

  else
  {
    static signed int warned = 0;
    if(warned == 0 && maxcpus >= 1l && ((signed long int)cpu >= maxcpus || !(cpu >= 0)))
    {
      fprintf(stderr, "[error] liburcu: get CPU # out of range\n");
      warned = 1;
    }

    if((signed long int)cpu >= maxcpus || !(cpu >= 0))
      return (struct call_rcu_data *)(void *)0;

    else
    {
      struct call_rcu_data *get_cpu_call_rcu_data_memb$$1$$3$$_________p1;
      asm("" :  :  : "memory");
      tmp_statement_expression$4 = *((struct call_rcu_data * volatile *)&pcpu_crdp[(signed long int)cpu]);
      get_cpu_call_rcu_data_memb$$1$$3$$_________p1 = tmp_statement_expression$4;
      tmp_statement_expression$3 = get_cpu_call_rcu_data_memb$$1$$3$$_________p1;
      return tmp_statement_expression$3;
    }
  }
}

// get_default_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 553
struct call_rcu_data * get_default_call_rcu_data_memb(void)
{
  struct call_rcu_data *tmp_statement_expression$1;
  struct call_rcu_data * volatile tmp_statement_expression$2;
  if(!(default_call_rcu_data == ((struct call_rcu_data *)NULL)))
  {
    struct call_rcu_data *_________p1;
    asm("" :  :  : "memory");
    tmp_statement_expression$2 = *((struct call_rcu_data * volatile *)&default_call_rcu_data);
    _________p1 = tmp_statement_expression$2;
    tmp_statement_expression$1 = _________p1;
    return tmp_statement_expression$1;
  }

  else
  {
    call_rcu_lock(&call_rcu_mutex);
    if(!(default_call_rcu_data == ((struct call_rcu_data *)NULL)))
    {
      call_rcu_unlock(&call_rcu_mutex);
      return default_call_rcu_data;
    }

    else
    {
      call_rcu_data_init(&default_call_rcu_data, (unsigned long int)0, -1);
      call_rcu_unlock(&call_rcu_mutex);
      return default_call_rcu_data;
    }
  }
}

// get_thread_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 598
struct call_rcu_data * get_thread_call_rcu_data_memb(void)
{
  return thread_call_rcu_data;
}

// main
// file cds_list_add_rcu.c line 31
signed int main(signed int argc, char **argv)
{
  signed int values[4l] = { -5, 42, 36, 24 };
  struct cds_list_head mylist = { .next=&mylist, .prev=&mylist };
  unsigned int i;
  signed int ret = 0;
  struct mynode *node;
  i = (unsigned int)0;
  for( ; !((unsigned long int)i >= 4ul); i = i + 1u)
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct mynode) /*24ul*/ );
    node = (struct mynode *)return_value_malloc$1;
    if(node == ((struct mynode *)NULL))
    {
      ret = -1;
      goto end;
    }

    node->value = values[(signed long int)i];
    cds_list_add_rcu(&node->node, &mylist);
  }
  printf("mylist content:");
  node = (struct mynode *)((char *)(&mylist)->next - (signed long int)(unsigned long int)&((struct mynode *)0)->node);
  for( ; !(&node->node == &mylist); node = (struct mynode *)((char *)node->node.next - (signed long int)(unsigned long int)&((struct mynode *)0)->node))
    printf(" %d", node->value);
  printf("\n");

end:
  ;
  return ret;
}

// maxcpus_reset
// file urcu-call-rcu-impl.h line 123
static void maxcpus_reset(void)
{
  maxcpus = (signed long int)0;
}

// mutex_lock
// file urcu.c line 130
static void mutex_lock(union anonymous$2 *mutex)
{
  signed int ret;
  ret=pthread_mutex_lock(mutex);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(ret);
      fprintf(stderr, "(urcu.c:%s@%u) Unrecoverable error: %s\n", (const void *)"mutex_lock", 137, return_value_strerror$1);
      abort();
    }
    while((_Bool)0);

}

// mutex_lock_defer
// file urcu-defer-impl.h line 133
static void mutex_lock_defer(union anonymous$2 *mutex)
{
  signed int ret;
  ret=pthread_mutex_lock(mutex);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(ret);
      fprintf(stderr, "(urcu-defer-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"mutex_lock_defer", 140, return_value_strerror$1);
      abort();
    }
    while((_Bool)0);

}

// mutex_unlock
// file urcu.c line 152
static void mutex_unlock(union anonymous$2 *mutex)
{
  signed int ret;
  ret=pthread_mutex_unlock(mutex);
  if(!(ret == 0))
    do
    {
      char *return_value_strerror$1;
      return_value_strerror$1=strerror(ret);
      fprintf(stderr, "(urcu.c:%s@%u) Unrecoverable error: %s\n", (const void *)"mutex_unlock", 158, return_value_strerror$1);
      abort();
    }
    while((_Bool)0);

}

// rcu_barrier_memb
// file urcu-call-rcu-impl.h line 838
void rcu_barrier_memb(void)
{
  struct call_rcu_data *crdp;
  struct call_rcu_completion *completion;
  signed int count = 0;
  signed int was_online;
  was_online=_rcu_read_ongoing_memb();
  if(!(was_online == 0))
    rcu_thread_offline();

  signed int return_value__rcu_read_ongoing_memb$1;
  return_value__rcu_read_ongoing_memb$1=_rcu_read_ongoing_memb();
  void *return_value_calloc$2;
  volatile signed int tmp_statement_expression$8;
  if(!(return_value__rcu_read_ongoing_memb$1 == 0))
  {
    static signed int warned = 0;
    if(warned == 0)
      fprintf(stderr, "[error] liburcu: rcu_barrier() called from within RCU read-side critical section.\n");

    warned = 1;
  }

  else
  {
    return_value_calloc$2=calloc(sizeof(struct call_rcu_completion) /*16ul*/ , (unsigned long int)1);
    completion = (struct call_rcu_completion *)return_value_calloc$2;
    if(completion == ((struct call_rcu_completion *)NULL))
      do
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        char *return_value_strerror$4;
        return_value_strerror$4=strerror(*return_value___errno_location$3);
        fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"rcu_barrier_memb", 865, return_value_strerror$4);
        abort();
      }
      while((_Bool)0);

    call_rcu_lock(&call_rcu_mutex);
    crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
      count = count + 1;
    urcu_ref_set(&completion->ref, (signed long int)(count + 1));
    completion->barrier_count = count;
    crdp = (struct call_rcu_data *)((char *)(&call_rcu_data_list)->next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list);
    for( ; !(&crdp->list == &call_rcu_data_list); crdp = (struct call_rcu_data *)((char *)crdp->list.next - (signed long int)(unsigned long int)&((struct call_rcu_data *)0)->list))
    {
      struct call_rcu_completion_work *work;
      void *return_value_calloc$5;
      return_value_calloc$5=calloc(sizeof(struct call_rcu_completion_work) /*24ul*/ , (unsigned long int)1);
      work = (struct call_rcu_completion_work *)return_value_calloc$5;
      if(work == ((struct call_rcu_completion_work *)NULL))
        do
        {
          signed int *return_value___errno_location$6;
          return_value___errno_location$6=__errno_location();
          char *return_value_strerror$7;
          return_value_strerror$7=strerror(*return_value___errno_location$6);
          fprintf(stderr, "(urcu-call-rcu-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"rcu_barrier_memb", 880, return_value_strerror$7);
          abort();
        }
        while((_Bool)0);

      work->completion = completion;
      _call_rcu(&work->head, _rcu_barrier_complete, crdp);
    }
    call_rcu_unlock(&call_rcu_mutex);
    do
    {
      __uatomic_dec((void *)&completion->futex, (signed int)sizeof(signed int) /*4ul*/ );
      asm("mfence" :  :  : "memory");
      asm("" :  :  : "memory");
      tmp_statement_expression$8 = *((volatile signed int *)&(*(&completion->barrier_count)));
      if(tmp_statement_expression$8 == 0)
        break;

      call_rcu_completion_wait(completion);
    }
    while((_Bool)1);
    urcu_ref_put(&completion->ref, free_completion);
  }

online:
  ;
  if(!(was_online == 0))
    rcu_thread_online();

}

// rcu_cmpxchg_pointer_sym
// file urcu-pointer.c line 53
extern void * rcu_cmpxchg_pointer_sym(void **p, void *old, void *_new)
{
  asm("sfence" :  :  : "memory");
  unsigned long int return_value___uatomic_cmpxchg$1;
  return_value___uatomic_cmpxchg$1=__uatomic_cmpxchg((void *)p, (unsigned long int)old, (unsigned long int)_new, (signed int)sizeof(void *) /*8ul*/ );
  return (void *)return_value___uatomic_cmpxchg$1;
}

// rcu_defer_barrier_memb
// file urcu-defer-impl.h line 281
extern void rcu_defer_barrier_memb(void)
{
  struct defer_queue *index;
  unsigned long int num_items = (unsigned long int)0;
  signed int return_value_cds_list_empty$1;
  return_value_cds_list_empty$1=cds_list_empty(&registry_defer);
  volatile unsigned long int tmp_statement_expression$2;
  if(return_value_cds_list_empty$1 == 0)
  {
    mutex_lock_defer(&rcu_defer_mutex);
    index = (struct defer_queue *)((char *)(&registry_defer)->next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list);
    for( ; !(&index->list == &registry_defer); index = (struct defer_queue *)((char *)index->list.next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list))
    {
      asm("" :  :  : "memory");
      tmp_statement_expression$2 = *((volatile unsigned long int *)&index->head);
      index->last_head = tmp_statement_expression$2;
      num_items = num_items + (index->last_head - index->tail);
    }
    if(!(num_items == 0ul))
    {
      synchronize_rcu_memb();
      index = (struct defer_queue *)((char *)(&registry_defer)->next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list);
      for( ; !(&index->list == &registry_defer); index = (struct defer_queue *)((char *)index->list.next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list))
        rcu_defer_barrier_queue(index, index->last_head);
    }


  end:
    ;
    mutex_unlock(&rcu_defer_mutex);
  }

}

// rcu_defer_barrier_queue
// file urcu-defer-impl.h line 218
static void rcu_defer_barrier_queue(struct defer_queue *queue, unsigned long int head)
{
  unsigned long int i;
  void (*fct)(void *);
  void *p;
  i = queue->tail;
  void * volatile tmp_statement_expression$1;
  unsigned long int tmp_post$2;
  void * volatile tmp_statement_expression$3;
  unsigned long int tmp_post$4;
  void * volatile tmp_statement_expression$5;
  unsigned long int tmp_post$6;
  void * volatile tmp_statement_expression$7;
  unsigned long int tmp_post$8;
  if(!(i == head))
  {
    asm("" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_post$2 = i;
    i = i + 1ul;
    tmp_statement_expression$1 = *((void * volatile *)&queue->q[(signed long int)(tmp_post$2 & (unsigned long int)((1 << 12) - 1))]);
    p = tmp_statement_expression$1;
    if(!((1ul & (unsigned long int)p) == 0ul))
    {
      p = (void *)((unsigned long int)p & (unsigned long int)~(1 << 0));
      queue->last_fct_out = p;
      asm("" :  :  : "memory");
      tmp_post$4 = i;
      i = i + 1ul;
      tmp_statement_expression$3 = *((void * volatile *)&queue->q[(signed long int)(tmp_post$4 & (unsigned long int)((1 << 12) - 1))]);
      p = tmp_statement_expression$3;
    }

    else
      if(p == (void *)-2)
      {
        asm("" :  :  : "memory");
        tmp_post$6 = i;
        i = i + 1ul;
        tmp_statement_expression$5 = *((void * volatile *)&queue->q[(signed long int)(tmp_post$6 & (unsigned long int)((1 << 12) - 1))]);
        p = tmp_statement_expression$5;
        queue->last_fct_out = p;
        asm("" :  :  : "memory");
        tmp_post$8 = i;
        i = i + 1ul;
        tmp_statement_expression$7 = *((void * volatile *)&queue->q[(signed long int)(tmp_post$8 & (unsigned long int)((1 << 12) - 1))]);
        p = tmp_statement_expression$7;
      }

    fct = (void (*)(void *))queue->last_fct_out;
    fct(p);
  }

  asm("mfence" :  :  : "memory");
  unsigned long int _v;
  volatile unsigned long int tmp_statement_expression$9;
  *((volatile unsigned long int *)&queue->tail) = i;
  tmp_statement_expression$9 = *((volatile unsigned long int *)&queue->tail);
  _v = tmp_statement_expression$9;
  asm("" :  :  : "memory");
  _v = _v;
}

// rcu_defer_barrier_thread_memb
// file urcu-defer-impl.h line 261
extern void rcu_defer_barrier_thread_memb(void)
{
  mutex_lock_defer(&rcu_defer_mutex);
  _rcu_defer_barrier_thread();
  mutex_unlock(&rcu_defer_mutex);
}

// rcu_defer_exit_memb
// file urcu-defer-impl.h line 466
void rcu_defer_exit_memb(void)
{
  signed int return_value_cds_list_empty$1;
  return_value_cds_list_empty$1=cds_list_empty(&registry_defer);
  /* assertion cds_list_empty(&registry_defer) */
  assert(return_value_cds_list_empty$1 != 0);
}

// rcu_defer_num_callbacks
// file urcu-defer-impl.h line 163
static unsigned long int rcu_defer_num_callbacks(void)
{
  unsigned long int num_items = (unsigned long int)0;
  unsigned long int head;
  struct defer_queue *index;
  mutex_lock_defer(&rcu_defer_mutex);
  index = (struct defer_queue *)((char *)(&registry_defer)->next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list);
  volatile unsigned long int tmp_statement_expression$1;
  for( ; !(&index->list == &registry_defer); index = (struct defer_queue *)((char *)index->list.next - (signed long int)(unsigned long int)&((struct defer_queue *)0)->list))
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((volatile unsigned long int *)&index->head);
    head = tmp_statement_expression$1;
    num_items = num_items + (head - index->tail);
  }
  mutex_unlock(&rcu_defer_mutex);
  return num_items;
}

// rcu_defer_register_thread_memb
// file urcu-defer-impl.h line 426
extern signed int rcu_defer_register_thread_memb(void)
{
  signed int was_empty;
  /* assertion (defer_queue).last_head == 0 */
  assert(defer_queue.last_head == (unsigned long int)0);
  /* assertion (defer_queue).q == ((void *)0) */
  assert(defer_queue.q == (void **)(void *)0);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(void *) /*8ul*/  * (unsigned long int)(1 << 12));
  defer_queue.q = (void **)return_value_malloc$1;
  if(defer_queue.q == ((void **)NULL))
    return -12;

  else
  {
    mutex_lock_defer(&defer_thread_mutex);
    mutex_lock_defer(&rcu_defer_mutex);
    was_empty=cds_list_empty(&registry_defer);
    cds_list_add(&defer_queue.list, &registry_defer);
    mutex_unlock(&rcu_defer_mutex);
    if(!(was_empty == 0))
      start_defer_thread();

    mutex_unlock(&defer_thread_mutex);
    return 0;
  }
}

// rcu_defer_unregister_thread_memb
// file urcu-defer-impl.h line 448
extern void rcu_defer_unregister_thread_memb(void)
{
  signed int is_empty;
  mutex_lock_defer(&defer_thread_mutex);
  mutex_lock_defer(&rcu_defer_mutex);
  cds_list_del(&defer_queue.list);
  _rcu_defer_barrier_thread();
  free((void *)defer_queue.q);
  defer_queue.q = (void **)(void *)0;
  is_empty=cds_list_empty(&registry_defer);
  mutex_unlock(&rcu_defer_mutex);
  if(!(is_empty == 0))
    stop_defer_thread();

  mutex_unlock(&defer_thread_mutex);
}

// rcu_dereference_sym
// file urcu-pointer.c line 35
extern void * rcu_dereference_sym(void *p)
{
  void *tmp_statement_expression$1;
  void *_________p1;
  void * volatile tmp_statement_expression$2;
  asm("" :  :  : "memory");
  tmp_statement_expression$2 = *((void * volatile *)&p);
  _________p1 = tmp_statement_expression$2;
  tmp_statement_expression$1 = _________p1;
  return tmp_statement_expression$1;
}

// rcu_init_memb
// file urcu.c line 536
extern void rcu_init_memb(void)
{
  signed int ret;
  if(init_done == 0)
  {
    init_done = 1;
    signed long int return_value_syscall$1;
    return_value_syscall$1=syscall((signed long int)324, 0, 0);
    ret = (signed int)return_value_syscall$1;
    if(ret >= 0 && !((1 & ret) == 0))
      rcu_has_sys_membarrier_memb = 1;

  }

}

// rcu_quiescent_state
// file urcu.h line 117
static inline void rcu_quiescent_state(void)
{
  ;
}

// rcu_read_lock_memb
// file urcu.c line 497
extern void rcu_read_lock_memb(void)
{
  _rcu_read_lock_memb();
}

// rcu_read_ongoing_memb
// file urcu.c line 507
extern signed int rcu_read_ongoing_memb(void)
{
  signed int return_value__rcu_read_ongoing_memb$1;
  return_value__rcu_read_ongoing_memb$1=_rcu_read_ongoing_memb();
  return return_value__rcu_read_ongoing_memb$1;
}

// rcu_read_unlock_memb
// file urcu.c line 502
extern void rcu_read_unlock_memb(void)
{
  _rcu_read_unlock_memb();
}

// rcu_reader_state
// file urcu/static/urcu.h line 172
static inline enum rcu_state rcu_reader_state(unsigned long int *ctr)
{
  unsigned long int v;
  volatile unsigned long int tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((volatile unsigned long int *)&(*ctr));
  v = tmp_statement_expression$1;
  if((4294967295ul & v) == 0ul)
    return (enum rcu_state)RCU_READER_INACTIVE;

  else
    if(((rcu_gp_memb.ctr ^ v) & 4294967296ul) == 0ul)
      return (enum rcu_state)RCU_READER_ACTIVE_CURRENT;

    else
      return (enum rcu_state)RCU_READER_ACTIVE_OLD;
}

// rcu_register_thread_memb
// file urcu.c line 512
extern void rcu_register_thread_memb(void)
{
  rcu_reader_memb.tid=pthread_self();
  /* assertion (rcu_reader_memb).need_mb == 0 */
  assert((signed int)rcu_reader_memb.need_mb == 0);
  /* assertion !((rcu_reader_memb).ctr & ((1UL << (sizeof(unsigned long) << 2)) - 1)) */
  assert(!((rcu_reader_memb.ctr & (1UL << (sizeof(unsigned long int) /*8ul*/  << 2)) - (unsigned long int)1) != 0ul));
  mutex_lock(&rcu_registry_lock);
  /* assertion !(rcu_reader_memb).registered */
  assert(!(rcu_reader_memb.registered != 0u));
  rcu_reader_memb.registered = (unsigned int)1;
  rcu_init_memb();
  cds_list_add(&rcu_reader_memb.node, &registry);
  mutex_unlock(&rcu_registry_lock);
}

// rcu_set_pointer_sym
// file ..//../../urcu-pointer.h line 106
extern void * rcu_set_pointer_sym(void **p, void *v)
{
  asm("sfence" :  :  : "memory");
  void *_v;
  void * volatile tmp_statement_expression$1;
  *((void * volatile *)&(*p)) = v;
  tmp_statement_expression$1 = *((void * volatile *)&(*p));
  _v = tmp_statement_expression$1;
  asm("" :  :  : "memory");
  _v = _v;
  return v;
}

// rcu_thread_offline
// file urcu.h line 121
static inline void rcu_thread_offline(void)
{
  ;
}

// rcu_thread_online
// file urcu.h line 125
static inline void rcu_thread_online(void)
{
  ;
}

// rcu_unregister_thread_memb
// file urcu.c line 526
extern void rcu_unregister_thread_memb(void)
{
  mutex_lock(&rcu_registry_lock);
  /* assertion (rcu_reader_memb).registered */
  assert(rcu_reader_memb.registered != 0u);
  rcu_reader_memb.registered = (unsigned int)0;
  cds_list_del(&rcu_reader_memb.node);
  mutex_unlock(&rcu_registry_lock);
}

// rcu_xchg_pointer_sym
// file urcu-pointer.c line 47
extern void * rcu_xchg_pointer_sym(void **p, void *v)
{
  asm("sfence" :  :  : "memory");
  unsigned long int return_value___uatomic_exchange$1;
  return_value___uatomic_exchange$1=__uatomic_exchange$link1((void *)p, (unsigned long int)v, (signed int)sizeof(void *) /*8ul*/ );
  return (void *)return_value___uatomic_exchange$1;
}

// set_cpu_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 514
signed int set_cpu_call_rcu_data_memb(signed int cpu, struct call_rcu_data *crdp)
{
  call_rcu_lock(&call_rcu_mutex);
  alloc_cpu_call_rcu_data();
  if((signed long int)cpu >= maxcpus || !(cpu >= 0))
  {
    static signed int warned = 0;
    if(warned == 0)
    {
      fprintf(stderr, "[error] liburcu: set CPU # out of range\n");
      warned = 1;
    }

    call_rcu_unlock(&call_rcu_mutex);
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return -22;
  }

  if(per_cpu_call_rcu_data == ((struct call_rcu_data **)NULL))
  {
    call_rcu_unlock(&call_rcu_mutex);
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 12;
    return -12;
  }

  if(!(per_cpu_call_rcu_data[(signed long int)cpu] == ((struct call_rcu_data *)NULL)))
  {
    if(!(crdp == ((struct call_rcu_data *)NULL)))
    {
      call_rcu_unlock(&call_rcu_mutex);
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 17;
      return -17;
    }

  }

  struct call_rcu_data * volatile tmp_statement_expression$4;
  do
  {
    struct call_rcu_data *_________pv = crdp;
    asm("sfence" :  :  : "memory");
    struct call_rcu_data *_v;
    *((struct call_rcu_data * volatile *)&(*(&per_cpu_call_rcu_data[(signed long int)cpu]))) = _________pv;
    tmp_statement_expression$4 = *((struct call_rcu_data * volatile *)&(*(&per_cpu_call_rcu_data[(signed long int)cpu])));
    _v = tmp_statement_expression$4;
    asm("" :  :  : "memory");
    _v = _v;
  }
  while((_Bool)0);
  call_rcu_unlock(&call_rcu_mutex);
  return 0;
}

// set_thread_call_rcu_data_memb
// file urcu-call-rcu-impl.h line 614
void set_thread_call_rcu_data_memb(struct call_rcu_data *crdp)
{
  thread_call_rcu_data = crdp;
}

// set_thread_cpu_affinity
// file urcu-call-rcu-impl.h line 202
static signed int set_thread_cpu_affinity(struct call_rcu_data *crdp)
{
  struct anonymous mask;
  signed int ret;
  signed int *return_value___errno_location$3;
  if(!(crdp->cpu_affinity >= 0))
    return 0;

  else
  {
    crdp->gp_count = crdp->gp_count + 1ul;
    if(!((255ul & crdp->gp_count) == 0ul))
      return 0;

    else
    {
      signed int return_value_urcu_sched_getcpu$1;
      return_value_urcu_sched_getcpu$1=urcu_sched_getcpu();
      if(return_value_urcu_sched_getcpu$1 == crdp->cpu_affinity)
        return 0;

      else
      {
        do
          __builtin_memset((void *)&mask, 0, sizeof(struct anonymous) /*128ul*/ );
        while((_Bool)0);
        unsigned long int __cpu = (unsigned long int)crdp->cpu_affinity;
        if(!(__cpu / 8ul >= sizeof(struct anonymous) /*128ul*/ ))
          ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

        else
          (unsigned long int)0;
        ret=sched_setaffinity(0, sizeof(struct anonymous) /*128ul*/ , &mask);
        if(!(ret == 0))
        {
          return_value___errno_location$3=__errno_location();
          if(*return_value___errno_location$3 == 22)
          {
            ret = 0;
            signed int *return_value___errno_location$2;
            return_value___errno_location$2=__errno_location();
            *return_value___errno_location$2 = 0;
          }

        }

        return ret;
      }
    }
  }
}

// smp_mb_master
// file urcu.c line 162
static void smp_mb_master(void)
{
  if(!(rcu_has_sys_membarrier_memb == 0))
    syscall((signed long int)324, 1, 0);

  else
    asm("mfence" :  :  : "memory");
}

// smp_mb_slave
// file urcu/static/urcu.h line 95
static inline void smp_mb_slave(void)
{
  if(!(rcu_has_sys_membarrier_memb == 0))
    asm("" :  :  : "memory");

  else
    asm("mfence" :  :  : "memory");
}

// start_defer_thread
// file urcu-defer-impl.h line 400
static void start_defer_thread(void)
{
  signed int ret;
  ret=pthread_create(&tid_defer, (const union pthread_attr_t *)(void *)0, thr_defer, (void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// stop_defer_thread
// file urcu-defer-impl.h line 408
static void stop_defer_thread(void)
{
  signed int ret;
  void *tret;
  *((volatile signed int *)&defer_thread_stop) = 1;
  asm("mfence" :  :  : "memory");
  wake_up_defer();
  ret=pthread_join(tid_defer, &tret);
  /* assertion !ret */
  assert(!(ret != 0));
  signed int _v;
  volatile signed int tmp_statement_expression$1;
  *((volatile signed int *)&defer_thread_stop) = 0;
  tmp_statement_expression$1 = *((volatile signed int *)&defer_thread_stop);
  _v = tmp_statement_expression$1;
  asm("" :  :  : "memory");
  _v = _v;
  volatile signed int tmp_statement_expression$2;
  asm("" :  :  : "memory");
  tmp_statement_expression$2 = *((volatile signed int *)&(*(&defer_thread_futex)));
  /* assertion __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(*(&defer_thread_futex)) *)&(*(&defer_thread_futex))); }) == 0 */
  assert(tmp_statement_expression$2 == 0);
}

// synchronize_rcu_memb
// file urcu.c line 376
extern void synchronize_rcu_memb(void)
{
  struct cds_list_head cur_snap_readers = { .next=&cur_snap_readers, .prev=&cur_snap_readers };
  struct cds_list_head qsreaders = { .next=&qsreaders, .prev=&qsreaders };
  struct urcu_wait_node wait = { .node={ .next=((struct cds_wfs_node *)NULL) }, .state=URCU_WAIT_WAITING };
  struct urcu_waiters waiters;
  _Bool return_value_urcu_wait_add$1;
  return_value_urcu_wait_add$1=urcu_wait_add(&gp_waiters, &wait);
  volatile unsigned long int tmp_statement_expression$3;
  if(!((signed int)return_value_urcu_wait_add$1 == 0))
  {
    urcu_adaptative_busy_wait(&wait);
    asm("mfence" :  :  : "memory");
  }

  else
  {
    urcu_wait_set_state(&wait, (enum urcu_wait_state)URCU_WAIT_RUNNING);
    mutex_lock(&rcu_gp_lock);
    urcu_move_waiters(&waiters, &gp_waiters);
    mutex_lock(&rcu_registry_lock);
    signed int return_value_cds_list_empty$2;
    return_value_cds_list_empty$2=cds_list_empty(&registry);
    if(return_value_cds_list_empty$2 == 0)
    {
      smp_mb_master();
      wait_for_readers(&registry, &cur_snap_readers, &qsreaders);
      asm("" :  :  : "memory");
      asm("mfence" :  :  : "memory");
      unsigned long int _v;
      *((volatile unsigned long int *)&rcu_gp_memb.ctr) = rcu_gp_memb.ctr ^ 1UL << (sizeof(unsigned long int) /*8ul*/  << 2);
      tmp_statement_expression$3 = *((volatile unsigned long int *)&rcu_gp_memb.ctr);
      _v = tmp_statement_expression$3;
      asm("" :  :  : "memory");
      _v = _v;
      asm("" :  :  : "memory");
      asm("mfence" :  :  : "memory");
      wait_for_readers(&cur_snap_readers, (struct cds_list_head *)(void *)0, &qsreaders);
      cds_list_splice(&qsreaders, &registry);
      smp_mb_master();
    }


  out:
    ;
    mutex_unlock(&rcu_registry_lock);
    mutex_unlock(&rcu_gp_lock);
    urcu_wake_all_waiters(&waiters);
  }
}

// thr_defer
// file urcu-defer-impl.h line 374
static void * thr_defer(void *args)
{
  do
  {
    wait_defer();
    poll((struct pollfd *)(void *)0, (unsigned long int)0, 100);
    rcu_defer_barrier_memb();
  }
  while((_Bool)1);
  return (void *)0;
}

// urcu_adaptative_busy_wait
// file urcu-wait.h line 140
static inline void urcu_adaptative_busy_wait(struct urcu_wait_node *wait)
{
  unsigned int i;
  asm("" :  :  : "memory");
  i = (unsigned int)0;
  volatile signed int tmp_statement_expression$1;
  for( ; !(i >= 1000u); i = i + 1u)
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((volatile signed int *)&(*(&wait->state)));
    if(!(tmp_statement_expression$1 == URCU_WAIT_WAITING))
      goto skip_futex_wait;

    asm("rep; nop" :  :  : "memory");
  }
  signed int return_value_futex_noasync$2;
  do
  {
    return_value_futex_noasync$2=futex_noasync(&wait->state, 0, URCU_WAIT_WAITING, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(return_value_futex_noasync$2 == 0)
      break;

    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    switch(*return_value___errno_location$3)
    {
      case 11:
        goto skip_futex_wait;
      case 4:
        break;
      default:
        do
        {
          signed int *return_value___errno_location$4;
          return_value___errno_location$4=__errno_location();
          char *return_value_strerror$5;
          return_value_strerror$5=strerror(*return_value___errno_location$4);
          fprintf(stderr, "(urcu-wait.h:%s@%u) Unrecoverable error: %s\n", (const void *)"urcu_adaptative_busy_wait", 162, return_value_strerror$5);
          abort();
        }
        while((_Bool)0);
    }
  }
  while((_Bool)1);

skip_futex_wait:
  ;
  __uatomic_or((void *)&wait->state, (unsigned long int)URCU_WAIT_RUNNING, (signed int)sizeof(signed int) /*4ul*/ );
  i = (unsigned int)0;
  volatile signed int tmp_statement_expression$6;
  for( ; !(i >= 1000u); i = i + 1u)
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$6 = *((volatile signed int *)&(*(&wait->state)));
    if(!((URCU_WAIT_TEARDOWN & tmp_statement_expression$6) == 0))
      break;

    asm("rep; nop" :  :  : "memory");
  }
  volatile signed int tmp_statement_expression$7;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$7 = *((volatile signed int *)&(*(&wait->state)));
    if(!((URCU_WAIT_TEARDOWN & tmp_statement_expression$7) == 0))
      break;

    poll((struct pollfd *)(void *)0, (unsigned long int)0, 10);
  }
  while((_Bool)1);
  volatile signed int tmp_statement_expression$8;
  asm("" :  :  : "memory");
  tmp_statement_expression$8 = *((volatile signed int *)&(*(&wait->state)));
  /* assertion __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(*(&wait->state)) *)&(*(&wait->state))); }) & URCU_WAIT_TEARDOWN */
  assert((tmp_statement_expression$8 & URCU_WAIT_TEARDOWN) != 0);
}

// urcu_adaptative_wake_up
// file urcu-wait.h line 121
static inline void urcu_adaptative_wake_up(struct urcu_wait_node *wait)
{
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((volatile signed int *)&(*(&wait->state)));
  /* assertion __extension__ ({ __asm__ __volatile__ ("" : : : "memory"); (*(__volatile__ __typeof__(*(&wait->state)) *)&(*(&wait->state))); }) == URCU_WAIT_WAITING */
  assert(tmp_statement_expression$1 == URCU_WAIT_WAITING);
  signed int _v;
  volatile signed int tmp_statement_expression$2;
  *((volatile signed int *)&(*(&wait->state))) = URCU_WAIT_WAKEUP;
  tmp_statement_expression$2 = *((volatile signed int *)&(*(&wait->state)));
  _v = tmp_statement_expression$2;
  asm("" :  :  : "memory");
  _v = _v;
  volatile signed int tmp_statement_expression$6;
  asm("" :  :  : "memory");
  tmp_statement_expression$6 = *((volatile signed int *)&(*(&wait->state)));
  if((URCU_WAIT_RUNNING & tmp_statement_expression$6) == 0)
  {
    signed int return_value_futex_noasync$5;
    return_value_futex_noasync$5=futex_noasync(&wait->state, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_noasync$5 >= 0))
      do
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        char *return_value_strerror$4;
        return_value_strerror$4=strerror(*return_value___errno_location$3);
        fprintf(stderr, "(urcu-wait.h:%s@%u) Unrecoverable error: %s\n", (const void *)"urcu_adaptative_wake_up", 129, return_value_strerror$4);
        abort();
      }
      while((_Bool)0);

  }

  __uatomic_or((void *)&wait->state, (unsigned long int)URCU_WAIT_TEARDOWN, (signed int)sizeof(signed int) /*4ul*/ );
}

// urcu_move_waiters
// file urcu-wait.h line 93
static inline void urcu_move_waiters(struct urcu_waiters *waiters, struct urcu_wait_queue *queue)
{
  waiters->head=___cds_wfs_pop_all(&queue->stack);
}

// urcu_ref_put
// file urcu/ref.h line 40
static inline void urcu_ref_put(struct urcu_ref *ref, void (*release)(struct urcu_ref *))
{
  signed long int res;
  unsigned long int return_value___uatomic_add_return$1;
  return_value___uatomic_add_return$1=__uatomic_add_return((void *)&ref->refcount, (unsigned long int)-((unsigned long int)1), (signed int)sizeof(signed long int) /*8ul*/ );
  res = (signed long int)return_value___uatomic_add_return$1;
  /* assertion res >= 0 */
  assert(res >= (signed long int)0);
  if(res == 0l)
    release(ref);

}

// urcu_ref_set
// file urcu/ref.h line 25
static inline void urcu_ref_set(struct urcu_ref *ref, signed long int val)
{
  signed long int _v;
  volatile signed long int tmp_statement_expression$1;
  *((volatile signed long int *)&(*(&ref->refcount))) = val;
  tmp_statement_expression$1 = *((volatile signed long int *)&(*(&ref->refcount)));
  _v = tmp_statement_expression$1;
  asm("" :  :  : "memory");
  _v = _v;
}

// urcu_sched_getcpu
// file compat-getcpu.h line 30
static inline signed int urcu_sched_getcpu(void)
{
  signed int return_value_sched_getcpu$1;
  return_value_sched_getcpu$1=sched_getcpu();
  return return_value_sched_getcpu$1;
}

// urcu_wait_add
// file urcu-wait.h line 82
static inline _Bool urcu_wait_add(struct urcu_wait_queue *queue, struct urcu_wait_node *node)
{
  signed int return_value__cds_wfs_push$1;
  return_value__cds_wfs_push$1=_cds_wfs_push(&queue->stack, &node->node);
  return (_Bool)return_value__cds_wfs_push$1;
}

// urcu_wait_set_state
// file urcu-wait.h line 100
static inline void urcu_wait_set_state(struct urcu_wait_node *node, enum urcu_wait_state state)
{
  node->state = (signed int)state;
}

// urcu_wake_all_waiters
// file urcu-wait.h line 185
static inline void urcu_wake_all_waiters(struct urcu_waiters *waiters)
{
  struct cds_wfs_node *iter;
  struct cds_wfs_node *iter_n;
  iter=_cds_wfs_first(waiters->head);
  struct cds_wfs_node *tmp_if_expr$2;
  struct cds_wfs_node *return_value__cds_wfs_next_blocking$1;
  if(!(iter == ((struct cds_wfs_node *)NULL)))
  {
    return_value__cds_wfs_next_blocking$1=_cds_wfs_next_blocking(iter);
    tmp_if_expr$2 = return_value__cds_wfs_next_blocking$1;
  }

  else
    tmp_if_expr$2 = (struct cds_wfs_node *)(void *)0;
  iter_n = tmp_if_expr$2;
  struct urcu_wait_node *tmp_statement_expression$5;
  struct cds_wfs_node *tmp_if_expr$4;
  struct cds_wfs_node *return_value__cds_wfs_next_blocking$3;
  for( ; !(iter == ((struct cds_wfs_node *)NULL)); iter_n = tmp_if_expr$4)
  {
    struct urcu_wait_node *wait_node;
    const struct cds_wfs_node *__ptr = iter;
    tmp_statement_expression$5 = (struct urcu_wait_node *)((char *)__ptr - (signed long int)0ul);
    wait_node = tmp_statement_expression$5;
    if((URCU_WAIT_RUNNING & wait_node->state) == 0)
      urcu_adaptative_wake_up(wait_node);

    iter = iter_n;
    if(!(iter == ((struct cds_wfs_node *)NULL)))
    {
      return_value__cds_wfs_next_blocking$3=_cds_wfs_next_blocking(iter);
      tmp_if_expr$4 = return_value__cds_wfs_next_blocking$3;
    }

    else
      tmp_if_expr$4 = (struct cds_wfs_node *)(void *)0;
  }
}

// wait_defer
// file urcu-defer-impl.h line 180
static void wait_defer(void)
{
  __uatomic_dec((void *)&defer_thread_futex, (signed int)sizeof(signed int) /*4ul*/ );
  asm("mfence" :  :  : "memory");
  volatile signed int tmp_statement_expression$1;
  if(!(defer_thread_stop == 0))
  {
    signed int _v;
    *((volatile signed int *)&(*(&defer_thread_futex))) = 0;
    tmp_statement_expression$1 = *((volatile signed int *)&(*(&defer_thread_futex)));
    _v = tmp_statement_expression$1;
    asm("" :  :  : "memory");
    _v = _v;
    pthread_exit(NULL);
  }

  unsigned long int return_value_rcu_defer_num_callbacks$8;
  return_value_rcu_defer_num_callbacks$8=rcu_defer_num_callbacks();
  volatile signed int tmp_statement_expression$2;
  volatile signed int tmp_statement_expression$3;
  signed int return_value_futex_noasync$4;
  if(!(return_value_rcu_defer_num_callbacks$8 == 0ul))
  {
    asm("mfence" :  :  : "memory");
    signed int wait_defer$$1$$2$$1$$_v;
    *((volatile signed int *)&(*(&defer_thread_futex))) = 0;
    tmp_statement_expression$2 = *((volatile signed int *)&(*(&defer_thread_futex)));
    wait_defer$$1$$2$$1$$_v = tmp_statement_expression$2;
    asm("" :  :  : "memory");
    wait_defer$$1$$2$$1$$_v = wait_defer$$1$$2$$1$$_v;
  }

  else
  {
    asm("" :  :  : "memory");
    asm("" :  :  : "memory");
    tmp_statement_expression$3 = *((volatile signed int *)&(*(&defer_thread_futex)));
    if(!(tmp_statement_expression$3 == -1))
      goto __CPROVER_DUMP_L10;

    do
    {
      return_value_futex_noasync$4=futex_noasync(&defer_thread_futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_noasync$4 == 0)
        break;

      signed int *return_value___errno_location$5;
      return_value___errno_location$5=__errno_location();
      switch(*return_value___errno_location$5)
      {
        case 11:
          goto __CPROVER_DUMP_L10;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location$6;
            return_value___errno_location$6=__errno_location();
            char *return_value_strerror$7;
            return_value_strerror$7=strerror(*return_value___errno_location$6);
            fprintf(stderr, "(urcu-defer-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"wait_defer", 209, return_value_strerror$7);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);
  }

__CPROVER_DUMP_L10:
  ;
}

// wait_for_readers
// file urcu.c line 269
static void wait_for_readers(struct cds_list_head *input_readers, struct cds_list_head *cur_snap_readers, struct cds_list_head *qsreaders)
{
  unsigned int wait_loops = (unsigned int)0;
  struct rcu_reader_memb *index;
  struct rcu_reader_memb *tmp;
  volatile signed int tmp_statement_expression$2;
  while((_Bool)1)
  {
    if(!(wait_loops >= 100u))
      wait_loops = wait_loops + 1u;

    if(wait_loops >= 100u)
    {
      __uatomic_dec((void *)&rcu_gp_memb.futex, (signed int)sizeof(signed int) /*4ul*/ );
      smp_mb_master();
    }

    index = (struct rcu_reader_memb *)((char *)input_readers->next - (signed long int)(unsigned long int)&((struct rcu_reader_memb *)0)->node);
    tmp = (struct rcu_reader_memb *)((char *)index->node.next - (signed long int)(unsigned long int)&((struct rcu_reader_memb *)0)->node);
    while(!(&index->node == input_readers))
    {
      enum rcu_state return_value_rcu_reader_state$1;
      return_value_rcu_reader_state$1=rcu_reader_state(&index->ctr);
      switch((signed int)return_value_rcu_reader_state$1)
      {
        case RCU_READER_ACTIVE_CURRENT:
          if(!(cur_snap_readers == ((struct cds_list_head *)NULL)))
          {
            cds_list_move(&index->node, cur_snap_readers);
            goto __CPROVER_DUMP_L7;
          }

        case RCU_READER_INACTIVE:
          cds_list_move(&index->node, qsreaders);
        case RCU_READER_ACTIVE_OLD:

        default:
        {

        __CPROVER_DUMP_L7:
          ;
          index = tmp;
          tmp = (struct rcu_reader_memb *)((char *)index->node.next - (signed long int)(unsigned long int)&((struct rcu_reader_memb *)0)->node);
        }
      }
    }
    signed int return_value_cds_list_empty$3;
    return_value_cds_list_empty$3=cds_list_empty(input_readers);
    if(!(return_value_cds_list_empty$3 == 0))
    {
      if(wait_loops >= 100u)
      {
        smp_mb_master();
        signed int _v;
        *((volatile signed int *)&(*(&rcu_gp_memb.futex))) = 0;
        tmp_statement_expression$2 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
        _v = tmp_statement_expression$2;
        asm("" :  :  : "memory");
        _v = _v;
      }

      break;
    }

    else
      if(wait_loops >= 100u)
        wait_gp();

      else
      {
        mutex_unlock(&rcu_registry_lock);
        asm("rep; nop" :  :  : "memory");
        mutex_lock(&rcu_registry_lock);
      }
  }
}

// wait_gp
// file urcu.c line 232
static void wait_gp(void)
{
  smp_mb_master();
  mutex_unlock(&rcu_registry_lock);
  volatile signed int tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
  signed int return_value_futex_async$2;
  if(tmp_statement_expression$1 == -1)
    do
    {
      return_value_futex_async$2=futex_async(&rcu_gp_memb.futex, 0, -1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
      if(return_value_futex_async$2 == 0)
        break;

      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      switch(*return_value___errno_location$3)
      {
        case 11:
          goto end;
        case 4:
          break;
        default:
          do
          {
            signed int *return_value___errno_location$4;
            return_value___errno_location$4=__errno_location();
            char *return_value_strerror$5;
            return_value_strerror$5=strerror(*return_value___errno_location$4);
            fprintf(stderr, "(urcu.c:%s@%u) Unrecoverable error: %s\n", (const void *)"wait_gp", 255, return_value_strerror$5);
            abort();
          }
          while((_Bool)0);
      }
    }
    while((_Bool)1);


end:
  ;
  mutex_lock(&rcu_registry_lock);
}

// wake_call_rcu_thread
// file urcu-call-rcu-impl.h line 674
static void wake_call_rcu_thread(struct call_rcu_data *crdp)
{
  if((1ul & crdp->flags) == 0ul)
    call_rcu_wake_up(crdp);

}

// wake_up_defer
// file urcu-defer-impl.h line 153
static void wake_up_defer(void)
{
  volatile signed int tmp_statement_expression$5;
  asm("" :  :  : "memory");
  tmp_statement_expression$5 = *((volatile signed int *)&(*(&defer_thread_futex)));
  volatile signed int tmp_statement_expression$1;
  if(tmp_statement_expression$5 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&defer_thread_futex))) = 0;
    tmp_statement_expression$1 = *((volatile signed int *)&(*(&defer_thread_futex)));
    _v = tmp_statement_expression$1;
    asm("" :  :  : "memory");
    _v = _v;
    signed int return_value_futex_noasync$4;
    return_value_futex_noasync$4=futex_noasync(&defer_thread_futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
    if(!(return_value_futex_noasync$4 >= 0))
      do
      {
        signed int *return_value___errno_location$2;
        return_value___errno_location$2=__errno_location();
        char *return_value_strerror$3;
        return_value_strerror$3=strerror(*return_value___errno_location$2);
        fprintf(stderr, "(urcu-defer-impl.h:%s@%u) Unrecoverable error: %s\n", (const void *)"wake_up_defer", 159, return_value_strerror$3);
        abort();
      }
      while((_Bool)0);

  }

}

// wake_up_gp
// file urcu/static/urcu.h line 158
static inline void wake_up_gp(void)
{
  volatile signed int tmp_statement_expression$2;
  asm("" :  :  : "memory");
  tmp_statement_expression$2 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
  volatile signed int tmp_statement_expression$1;
  if(tmp_statement_expression$2 == -1)
  {
    signed int _v;
    *((volatile signed int *)&(*(&rcu_gp_memb.futex))) = 0;
    tmp_statement_expression$1 = *((volatile signed int *)&(*(&rcu_gp_memb.futex)));
    _v = tmp_statement_expression$1;
    asm("" :  :  : "memory");
    _v = _v;
    futex_async(&rcu_gp_memb.futex, 1, 1, (struct timespec *)(void *)0, (signed int *)(void *)0, 0);
  }

}

