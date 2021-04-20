// tag-#anon#ST[ARR16{U64}$U64$'__bits'|]
// file /usr/include/x86_64-linux-gnu/bits/sched.h line 125
struct anonymous$2;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$4;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$5;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

// tag-#anon#tUN[*{SYM#tag-__cds_wfcq_head#}$SYM#tag-__cds_wfcq_head#$'_h'||*{SYM#tag-cds_wfcq_head#}$SYM#tag-cds_wfcq_head#$'h'|]
// file urcu/wfcqueue.h line 82
union anonymous$3;

// tag-#anon#tUN[*{SYM#tag-__cds_wfs_stack#}$SYM#tag-__cds_wfs_stack#$'_s'||*{SYM#tag-cds_wfs_stack#}$SYM#tag-cds_wfs_stack#$'s'|]
// file ../../urcu/wfstack.h line 100
union anonymous$0;

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
// file ../../urcu/wfstack.h line 86
struct __cds_wfs_stack;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__uatomic_dummy
// file ../../urcu/uatomic.h line 37
struct __uatomic_dummy;

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

// tag-cds_wfq_node
// file urcu/wfqueue.h line 48
struct cds_wfq_node;

// tag-cds_wfq_queue
// file urcu/wfqueue.h line 52
struct cds_wfq_queue;

// tag-cds_wfs_head
// file ../../urcu/wfstack.h line 82
struct cds_wfs_head;

// tag-cds_wfs_node
// file ../../urcu/wfstack.h line 72
struct cds_wfs_node;

// tag-cds_wfs_stack
// file ../../urcu/wfstack.h line 90
struct cds_wfs_stack;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-test_sync
// file test_urcu_wfs.c line 56
enum test_sync { TEST_SYNC_NONE=0, TEST_SYNC_MUTEX=1 };

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// ___cds_wfcq_append
// file urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append(union anonymous$3 u_head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_head, struct cds_wfcq_node *new_tail);
// ___cds_wfcq_busy_wait
// file urcu/static/wfcqueue.h line 219
static inline _Bool ___cds_wfcq_busy_wait(signed int *attempt, signed int blocking);
// ___cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 453
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_dequeue_nonblocking
// file urcu/static/wfcqueue.h line 479
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_dequeue_with_state
// file urcu/static/wfcqueue.h line 367
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state(union anonymous$3 u_head, struct cds_wfcq_tail *tail, signed int *state, signed int blocking);
// ___cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 440
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state);
// ___cds_wfcq_dequeue_with_state_nonblocking
// file urcu/static/wfcqueue.h line 466
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state);
// ___cds_wfcq_first
// file urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first(union anonymous$3 u_head, struct cds_wfcq_tail *tail, signed int blocking);
// ___cds_wfcq_first_blocking
// file urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_first_nonblocking
// file urcu/static/wfcqueue.h line 297
static inline struct cds_wfcq_node * ___cds_wfcq_first_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_init
// file urcu/static/wfcqueue.h line 112
static inline void ___cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// ___cds_wfcq_next
// file urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node, signed int blocking);
// ___cds_wfcq_next_blocking
// file urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// ___cds_wfcq_next_nonblocking
// file urcu/static/wfcqueue.h line 359
static inline struct cds_wfcq_node * ___cds_wfcq_next_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// ___cds_wfcq_node_sync_next
// file urcu/static/wfcqueue.h line 236
static inline struct cds_wfcq_node * ___cds_wfcq_node_sync_next(struct cds_wfcq_node *node, signed int blocking);
// ___cds_wfcq_splice
// file urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice(union anonymous$3 u_dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 u_src_q_head, struct cds_wfcq_tail *src_q_tail, signed int blocking);
// ___cds_wfcq_splice_blocking
// file urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail);
// ___cds_wfcq_splice_nonblocking
// file urcu/static/wfcqueue.h line 576
static inline enum cds_wfcq_ret ___cds_wfcq_splice_nonblocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail);
// ___cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 119
static inline struct cds_wfq_node * ___cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// ___cds_wfq_node_sync_next
// file urcu/static/wfqueue.h line 91
static inline struct cds_wfq_node * ___cds_wfq_node_sync_next(struct cds_wfq_node *node);
// ___cds_wfs_end
// file urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end(void *node);
// ___cds_wfs_init
// file urcu/static/wfstack.h line 82
static inline void ___cds_wfs_init(struct __cds_wfs_stack *s);
// ___cds_wfs_next
// file urcu/static/wfstack.h line 388
static inline struct cds_wfs_node * ___cds_wfs_next(struct cds_wfs_node *node, signed int blocking);
// ___cds_wfs_node_sync_next
// file urcu/static/wfstack.h line 151
static inline struct cds_wfs_node * ___cds_wfs_node_sync_next(struct cds_wfs_node *node, signed int blocking);
// ___cds_wfs_pop
// file urcu/static/wfstack.h line 175
static inline struct cds_wfs_node * ___cds_wfs_pop(union anonymous$0 u_stack, signed int *state, signed int blocking);
// ___cds_wfs_pop_all
// file urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all(union anonymous$0 u_stack);
// ___cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 232
static inline struct cds_wfs_node * ___cds_wfs_pop_blocking(union anonymous$0 u_stack);
// ___cds_wfs_pop_nonblocking
// file urcu/static/wfstack.h line 260
static inline struct cds_wfs_node * ___cds_wfs_pop_nonblocking(union anonymous$0 u_stack);
// ___cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 225
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_blocking(union anonymous$0 u_stack, signed int *state);
// ___cds_wfs_pop_with_state_nonblocking
// file urcu/static/wfstack.h line 247
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_nonblocking(union anonymous$0 u_stack, signed int *state);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __cds_wfcq_dequeue_blocking
// file wfcqueue.c line 100
extern struct cds_wfcq_node * __cds_wfcq_dequeue_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// __cds_wfcq_dequeue_nonblocking
// file wfcqueue.c line 115
extern struct cds_wfcq_node * __cds_wfcq_dequeue_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// __cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 107
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state);
// __cds_wfcq_dequeue_with_state_nonblocking
// file wfcqueue.c line 122
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state);
// __cds_wfcq_first_blocking
// file wfcqueue.c line 150
extern struct cds_wfcq_node * __cds_wfcq_first_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// __cds_wfcq_first_nonblocking
// file wfcqueue.c line 157
extern struct cds_wfcq_node * __cds_wfcq_first_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail);
// __cds_wfcq_init
// file wfcqueue.c line 43
extern void __cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// __cds_wfcq_next_blocking
// file wfcqueue.c line 164
extern struct cds_wfcq_node * __cds_wfcq_next_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// __cds_wfcq_next_nonblocking
// file wfcqueue.c line 172
extern struct cds_wfcq_node * __cds_wfcq_next_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// __cds_wfcq_splice_blocking
// file wfcqueue.c line 130
extern enum cds_wfcq_ret __cds_wfcq_splice_blocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail);
// __cds_wfcq_splice_nonblocking
// file wfcqueue.c line 140
extern enum cds_wfcq_ret __cds_wfcq_splice_nonblocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail);
// __cds_wfq_dequeue_blocking
// file wfqueue.c line 49
extern struct cds_wfq_node * __cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// __cds_wfs_init
// file wfstack.c line 41
extern void __cds_wfs_init(struct __cds_wfs_stack *s);
// __cds_wfs_pop_all
// file ../../urcu/wfstack.h line 309
extern struct cds_wfs_head * __cds_wfs_pop_all(union anonymous$0 u_stack);
// __cds_wfs_pop_blocking
// file wfstack.c line 97
extern struct cds_wfs_node * __cds_wfs_pop_blocking(union anonymous$0 u_stack);
// __cds_wfs_pop_nonblocking
// file wfstack.c line 109
extern struct cds_wfs_node * __cds_wfs_pop_nonblocking(union anonymous$0 u_stack);
// __cds_wfs_pop_with_state_blocking
// file ../../urcu/wfstack.h line 271
extern struct cds_wfs_node * __cds_wfs_pop_with_state_blocking(union anonymous$0 u_stack, signed int *state);
// __cds_wfs_pop_with_state_nonblocking
// file wfstack.c line 115
extern struct cds_wfs_node * __cds_wfs_pop_with_state_nonblocking(union anonymous$0 u_stack, signed int *state);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len);
// __uatomic_cmpxchg$link1
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg$link1(void *addr$link1, unsigned long int old$link1, unsigned long int _new$link1, signed int len$link1);
// __uatomic_exchange
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange(void *addr, unsigned long int val, signed int len);
// __uatomic_exchange$link1
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange$link1(void *addr$link1, unsigned long int val$link1, signed int len$link1);
// __uatomic_exchange$link2
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange$link2(void *addr$link2, unsigned long int val$link2, signed int len$link2);
// __uatomic_inc
// file ../../urcu/uatomic.h line 414
static inline void __uatomic_inc(void *addr, signed int len);
// _cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 613
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_dequeue_lock
// file urcu/static/wfcqueue.h line 147
static inline void _cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_dequeue_unlock
// file urcu/static/wfcqueue.h line 156
static inline void _cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 596
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state);
// _cds_wfcq_empty
// file urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty(union anonymous$3 u_head, struct cds_wfcq_tail *tail);
// _cds_wfcq_enqueue
// file urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_tail);
// _cds_wfcq_init
// file urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// _cds_wfcq_node_init
// file urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init(struct cds_wfcq_node *node);
// _cds_wfcq_splice_blocking
// file urcu/static/wfcqueue.h line 632
static inline enum cds_wfcq_ret _cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail);
// _cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 148
static inline struct cds_wfq_node * _cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// _cds_wfq_enqueue
// file urcu/static/wfqueue.h line 68
static inline void _cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node);
// _cds_wfq_init
// file urcu/static/wfqueue.h line 56
static inline void _cds_wfq_init(struct cds_wfq_queue *q);
// _cds_wfq_node_init
// file urcu/static/wfqueue.h line 51
static inline void _cds_wfq_node_init(struct cds_wfq_node *node);
// _cds_wfs_empty
// file urcu/static/wfstack.h line 110
static inline _Bool _cds_wfs_empty(union anonymous$0 u_stack);
// _cds_wfs_first
// file urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first(struct cds_wfs_head *head);
// _cds_wfs_init
// file urcu/static/wfstack.h line 91
static inline void _cds_wfs_init(struct cds_wfs_stack *s);
// _cds_wfs_next_blocking
// file urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking(struct cds_wfs_node *node);
// _cds_wfs_next_nonblocking
// file urcu/static/wfstack.h line 430
static inline struct cds_wfs_node * _cds_wfs_next_nonblocking(struct cds_wfs_node *node);
// _cds_wfs_node_init
// file urcu/static/wfstack.h line 74
static inline void _cds_wfs_node_init(struct cds_wfs_node *node);
// _cds_wfs_pop_all_blocking
// file urcu/static/wfstack.h line 357
static inline struct cds_wfs_head * _cds_wfs_pop_all_blocking(struct cds_wfs_stack *s);
// _cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 347
static inline struct cds_wfs_node * _cds_wfs_pop_blocking(struct cds_wfs_stack *s);
// _cds_wfs_pop_lock
// file urcu/static/wfstack.h line 308
static inline void _cds_wfs_pop_lock(struct cds_wfs_stack *s);
// _cds_wfs_pop_unlock
// file urcu/static/wfstack.h line 319
static inline void _cds_wfs_pop_unlock(struct cds_wfs_stack *s);
// _cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 332
static inline struct cds_wfs_node * _cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state);
// _cds_wfs_push
// file urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push(union anonymous$0 u_stack, struct cds_wfs_node *node);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cds_wfcq_dequeue_blocking
// file wfcqueue.c line 75
extern struct cds_wfcq_node * cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_dequeue_lock
// file wfcqueue.c line 63
extern void cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_dequeue_unlock
// file wfcqueue.c line 69
extern void cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 82
extern struct cds_wfcq_node * cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state);
// cds_wfcq_empty
// file wfcqueue.c line 49
extern _Bool cds_wfcq_empty(union anonymous$3 head, struct cds_wfcq_tail *tail);
// cds_wfcq_enqueue
// file wfcqueue.c line 56
extern _Bool cds_wfcq_enqueue(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node);
// cds_wfcq_init
// file wfcqueue.c line 37
extern void cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail);
// cds_wfcq_node_init
// file wfcqueue.c line 32
extern void cds_wfcq_node_init(struct cds_wfcq_node *node);
// cds_wfcq_splice_blocking
// file wfcqueue.c line 90
extern enum cds_wfcq_ret cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail);
// cds_wfq_dequeue_blocking
// file wfqueue.c line 54
extern struct cds_wfq_node * cds_wfq_dequeue_blocking(struct cds_wfq_queue *q);
// cds_wfq_enqueue
// file wfqueue.c line 44
extern void cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node);
// cds_wfq_init
// file wfqueue.c line 39
extern void cds_wfq_init(struct cds_wfq_queue *q);
// cds_wfq_node_init
// file wfqueue.c line 34
extern void cds_wfq_node_init(struct cds_wfq_node *node);
// cds_wfs_empty
// file ../../urcu/wfstack.h line 163
extern _Bool cds_wfs_empty(union anonymous$0 u_stack);
// cds_wfs_first
// file ../../urcu/wfstack.h line 211
extern struct cds_wfs_node * cds_wfs_first(struct cds_wfs_head *head);
// cds_wfs_init
// file ../../urcu/wfstack.h line 151
extern void cds_wfs_init(struct cds_wfs_stack *s);
// cds_wfs_next_blocking
// file ../../urcu/wfstack.h line 226
extern struct cds_wfs_node * cds_wfs_next_blocking(struct cds_wfs_node *node);
// cds_wfs_next_nonblocking
// file wfstack.c line 82
extern struct cds_wfs_node * cds_wfs_next_nonblocking(struct cds_wfs_node *node);
// cds_wfs_node_init
// file ../../urcu/wfstack.h line 146
extern void cds_wfs_node_init(struct cds_wfs_node *node);
// cds_wfs_pop_all_blocking
// file wfstack.c line 67
extern struct cds_wfs_head * cds_wfs_pop_all_blocking(struct cds_wfs_stack *s);
// cds_wfs_pop_blocking
// file wfstack.c line 56
extern struct cds_wfs_node * cds_wfs_pop_blocking(struct cds_wfs_stack *s);
// cds_wfs_pop_lock
// file ../../urcu/wfstack.h line 239
extern void cds_wfs_pop_lock(struct cds_wfs_stack *s);
// cds_wfs_pop_unlock
// file ../../urcu/wfstack.h line 244
extern void cds_wfs_pop_unlock(struct cds_wfs_stack *s);
// cds_wfs_pop_with_state_blocking
// file ../../urcu/wfstack.h line 190
extern struct cds_wfs_node * cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state);
// cds_wfs_push
// file ../../urcu/wfstack.h line 174
extern signed int cds_wfs_push(union anonymous$0 u_stack, struct cds_wfs_node *node);
// compat_futex_async
// file compat_futex.c line 116
extern signed int compat_futex_async(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// compat_futex_noasync
// file compat_futex.c line 54
extern signed int compat_futex_noasync(signed int *uaddr, signed int op, signed int val, struct timespec *timeout, signed int *uaddr2, signed int val3);
// do_test_pop
// file test_urcu_wfs.c line 205
static void do_test_pop(enum test_sync sync);
// do_test_pop_all
// file test_urcu_wfs.c line 225
static void do_test_pop_all(enum test_sync sync);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// gettid
// file ../../tests/common/thread-id.h line 34
static inline signed int gettid(void);
// loop_sleep
// file test_urcu_wfs.c line 74
static inline void loop_sleep(unsigned long int loops);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
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
extern signed int pthread_cond_wait(union anonymous$5 *, union anonymous$1 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$1 *, const union anonymous *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// sched_setaffinity
// file /usr/include/sched.h line 118
extern signed int sched_setaffinity(signed int, unsigned long int, const struct anonymous$2 *);
// set_affinity
// file test_urcu_wfs.c line 97
static void set_affinity(void);
// show_usage
// file test_urcu_wfs.c line 318
static void show_usage(signed int argc, char **argv);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// syscall
// file /usr/include/unistd.h line 1058
extern signed long int syscall(signed long int, ...);
// test_duration_dequeue
// file test_urcu_wfs.c line 133
static signed int test_duration_dequeue(void);
// test_duration_enqueue
// file test_urcu_wfs.c line 138
static signed int test_duration_enqueue(void);
// test_end
// file test_urcu_wfs.c line 301
static void test_end(struct cds_wfs_stack *s, unsigned long long int *nr_dequeues, unsigned long long int *nr_pop_last);
// thr_dequeuer
// file test_urcu_wfs.c line 250
static void * thr_dequeuer(void *_count);
// thr_enqueuer
// file test_urcu_wfs.c line 157
static void * thr_enqueuer(void *_count);
// urcu_get_thread_id
// file ../../tests/common/thread-id.h line 41
static inline unsigned long int urcu_get_thread_id(void);

struct anonymous$2
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

union anonymous
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

union anonymous$1
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous$3
{
  // _h
  struct __cds_wfcq_head *_h;
  // h
  struct cds_wfcq_head *h;
} __attribute__ ((__transparent_union__));

union anonymous$0
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

struct cds_wfcq_head
{
  // node
  struct cds_wfcq_node node;
  // lock
  union anonymous$1 lock;
};

struct cds_wfcq_tail
{
  // p
  struct cds_wfcq_node *p;
};

struct cds_wfq_node
{
  // next
  struct cds_wfq_node *next;
};

struct cds_wfq_queue
{
  // head
  struct cds_wfq_node *head;
  // tail
  struct cds_wfq_node **tail;
  // dummy
  struct cds_wfq_node dummy;
  // lock
  union anonymous$1 lock;
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
  union anonymous$1 lock;
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

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};


// __urcu_compat_futex_cond
// file compat_futex.c line 46
union anonymous$5 __urcu_compat_futex_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// __urcu_compat_futex_lock
// file compat_futex.c line 44
union anonymous$1 __urcu_compat_futex_lock = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// affinity_mutex
// file test_urcu_wfs.c line 95
union anonymous$1 affinity_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// cpu_affinities
// file test_urcu_wfs.c line 91
static unsigned int cpu_affinities[16384l];
// duration
// file test_urcu_wfs.c line 69
static unsigned long int duration;
// next_aff
// file test_urcu_wfs.c line 92
static unsigned int next_aff = (unsigned int)0;
// nr_dequeuers
// file test_urcu_wfs.c line 153
static unsigned int nr_dequeuers;
// nr_dequeues
// file test_urcu_wfs.c line 143
static unsigned long long int nr_dequeues;
// nr_empty_dest_enqueues
// file test_urcu_wfs.c line 148
static unsigned long long int nr_empty_dest_enqueues;
// nr_enqueuers
// file test_urcu_wfs.c line 152
static unsigned int nr_enqueuers;
// nr_enqueues
// file test_urcu_wfs.c line 144
static unsigned long long int nr_enqueues;
// nr_pop_all
// file test_urcu_wfs.c line 149
static unsigned long long int nr_pop_all;
// nr_pop_last
// file test_urcu_wfs.c line 150
static unsigned long long int nr_pop_last;
// nr_successful_dequeues
// file test_urcu_wfs.c line 146
static unsigned long long int nr_successful_dequeues;
// nr_successful_enqueues
// file test_urcu_wfs.c line 147
static unsigned long long int nr_successful_enqueues;
// rduration
// file test_urcu_wfs.c line 67
static unsigned long int rduration;
// s
// file test_urcu_wfs.c line 155
static struct cds_wfs_stack s;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// test_enqueue_stopped
// file test_urcu_wfs.c line 83
static signed int test_enqueue_stopped;
// test_force_sync
// file test_urcu_wfs.c line 63
static signed int test_force_sync;
// test_go
// file test_urcu_wfs.c line 65
static volatile signed int test_go;
// test_pop
// file test_urcu_wfs.c line 82
static signed int test_pop;
// test_pop_all
// file test_urcu_wfs.c line 82
static signed int test_pop_all;
// test_stop_dequeue
// file test_urcu_wfs.c line 65
static volatile signed int test_stop_dequeue;
// test_stop_enqueue
// file test_urcu_wfs.c line 65
static volatile signed int test_stop_enqueue;
// test_sync
// file test_urcu_wfs.c line 61
static enum test_sync test_sync;
// test_wait_empty
// file test_urcu_wfs.c line 82
static signed int test_wait_empty;
// use_affinity
// file test_urcu_wfs.c line 93
static signed int use_affinity = 0;
// verbose_mode
// file test_urcu_wfs.c line 80
static signed int verbose_mode;
// wdelay
// file test_urcu_wfs.c line 72
static unsigned long int wdelay;

// ___cds_wfcq_append
// file urcu/static/wfcqueue.h line 165
static inline _Bool ___cds_wfcq_append(union anonymous$3 u_head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_head, struct cds_wfcq_node *new_tail)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node *old_tail;
  unsigned long int return_value___uatomic_exchange$1;
  return_value___uatomic_exchange$1=__uatomic_exchange$link1((void *)&tail->p, (unsigned long int)new_tail, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
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
// file urcu/static/wfcqueue.h line 219
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

// ___cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 453
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_blocking$1;
  return_value____cds_wfcq_dequeue_with_state_blocking$1=___cds_wfcq_dequeue_with_state_blocking(head, tail, (signed int *)(void *)0);
  return return_value____cds_wfcq_dequeue_with_state_blocking$1;
}

// ___cds_wfcq_dequeue_nonblocking
// file urcu/static/wfcqueue.h line 479
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_nonblocking$1;
  return_value____cds_wfcq_dequeue_with_state_nonblocking$1=___cds_wfcq_dequeue_with_state_nonblocking(head, tail, (signed int *)(void *)0);
  return return_value____cds_wfcq_dequeue_with_state_nonblocking$1;
}

// ___cds_wfcq_dequeue_with_state
// file urcu/static/wfcqueue.h line 367
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state(union anonymous$3 u_head, struct cds_wfcq_tail *tail, signed int *state, signed int blocking)
{
  struct __cds_wfcq_head *head = u_head._h;
  struct cds_wfcq_node *node;
  struct cds_wfcq_node *next;
  if(!(state == ((signed int *)NULL)))
    *state = 0;

  _Bool return_value__cds_wfcq_empty$1;
  return_value__cds_wfcq_empty$1=_cds_wfcq_empty(head, tail);
  struct cds_wfcq_node * volatile tmp_statement_expression$3;
  if(!(return_value__cds_wfcq_empty$1 == (_Bool)0))
    return (struct cds_wfcq_node *)(void *)0;

  else
  {
    node=___cds_wfcq_node_sync_next(&head->node, blocking);
    if(node == (struct cds_wfcq_node *)18446744073709551615ul && blocking == 0)
      return (struct cds_wfcq_node *)(void *)-1UL;

    else
    {
      asm("" :  :  : "memory");
      tmp_statement_expression$3 = *((struct cds_wfcq_node * volatile *)&node->next);
      next = tmp_statement_expression$3;
      if(next == ((struct cds_wfcq_node *)NULL))
      {
        _cds_wfcq_node_init(&head->node);
        unsigned long int return_value___uatomic_cmpxchg$2;
        return_value___uatomic_cmpxchg$2=__uatomic_cmpxchg((void *)&tail->p, (unsigned long int)node, (unsigned long int)&head->node, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
        if((struct cds_wfcq_node *)return_value___uatomic_cmpxchg$2 == node)
        {
          if(!(state == ((signed int *)NULL)))
            *state = *state | 1;

          return node;
        }

        next=___cds_wfcq_node_sync_next(node, blocking);
        if(next == (struct cds_wfcq_node *)18446744073709551615ul && blocking == 0)
        {
          head->node.next = node;
          return (struct cds_wfcq_node *)(void *)-1UL;
        }

      }

      head->node.next = next;
      return node;
    }
  }
}

// ___cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 440
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state$1;
  return_value____cds_wfcq_dequeue_with_state$1=___cds_wfcq_dequeue_with_state(head, tail, state, 1);
  return return_value____cds_wfcq_dequeue_with_state$1;
}

// ___cds_wfcq_dequeue_with_state_nonblocking
// file urcu/static/wfcqueue.h line 466
static inline struct cds_wfcq_node * ___cds_wfcq_dequeue_with_state_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state$1;
  return_value____cds_wfcq_dequeue_with_state$1=___cds_wfcq_dequeue_with_state(head, tail, state, 0);
  return return_value____cds_wfcq_dequeue_with_state$1;
}

// ___cds_wfcq_first
// file urcu/static/wfcqueue.h line 253
static inline struct cds_wfcq_node * ___cds_wfcq_first(union anonymous$3 u_head, struct cds_wfcq_tail *tail, signed int blocking)
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
// file urcu/static/wfcqueue.h line 283
static inline struct cds_wfcq_node * ___cds_wfcq_first_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first$1;
  return_value____cds_wfcq_first$1=___cds_wfcq_first(head, tail, 1);
  return return_value____cds_wfcq_first$1;
}

// ___cds_wfcq_first_nonblocking
// file urcu/static/wfcqueue.h line 297
static inline struct cds_wfcq_node * ___cds_wfcq_first_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first$1;
  return_value____cds_wfcq_first$1=___cds_wfcq_first(head, tail, 0);
  return return_value____cds_wfcq_first$1;
}

// ___cds_wfcq_init
// file urcu/static/wfcqueue.h line 112
static inline void ___cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_node_init(&head->node);
  tail->p = &head->node;
}

// ___cds_wfcq_next
// file urcu/static/wfcqueue.h line 304
static inline struct cds_wfcq_node * ___cds_wfcq_next(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node, signed int blocking)
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
// file urcu/static/wfcqueue.h line 345
static inline struct cds_wfcq_node * ___cds_wfcq_next_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next$1;
  return_value____cds_wfcq_next$1=___cds_wfcq_next(head, tail, node, 1);
  return return_value____cds_wfcq_next$1;
}

// ___cds_wfcq_next_nonblocking
// file urcu/static/wfcqueue.h line 359
static inline struct cds_wfcq_node * ___cds_wfcq_next_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next$1;
  return_value____cds_wfcq_next$1=___cds_wfcq_next(head, tail, node, 0);
  return return_value____cds_wfcq_next$1;
}

// ___cds_wfcq_node_sync_next
// file urcu/static/wfcqueue.h line 236
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
// file urcu/static/wfcqueue.h line 496
static inline enum cds_wfcq_ret ___cds_wfcq_splice(union anonymous$3 u_dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 u_src_q_head, struct cds_wfcq_tail *src_q_tail, signed int blocking)
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
      return_value___uatomic_exchange$2=__uatomic_exchange$link1((void *)&src_q_head->node.next, (unsigned long int)(void *)0, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
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
    return_value___uatomic_exchange$5=__uatomic_exchange$link1((void *)&src_q_tail->p, (unsigned long int)&src_q_head->node, (signed int)sizeof(struct cds_wfcq_node *) /*8ul*/ );
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
// file urcu/static/wfcqueue.h line 559
static inline enum cds_wfcq_ret ___cds_wfcq_splice_blocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice$1;
  return_value____cds_wfcq_splice$1=___cds_wfcq_splice(dest_q_head, dest_q_tail, src_q_head, src_q_tail, 1);
  return return_value____cds_wfcq_splice$1;
}

// ___cds_wfcq_splice_nonblocking
// file urcu/static/wfcqueue.h line 576
static inline enum cds_wfcq_ret ___cds_wfcq_splice_nonblocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice$1;
  return_value____cds_wfcq_splice$1=___cds_wfcq_splice(dest_q_head, dest_q_tail, src_q_head, src_q_tail, 0);
  return return_value____cds_wfcq_splice$1;
}

// ___cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 119
static inline struct cds_wfq_node * ___cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *node;
  struct cds_wfq_node *next;
  struct cds_wfq_node ** volatile tmp_statement_expression$1;
  if(q->head == &q->dummy)
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((struct cds_wfq_node ** volatile *)&q->tail);
    if(!(tmp_statement_expression$1 == &q->dummy.next))
      goto __CPROVER_DUMP_L1;

    return (struct cds_wfq_node *)(void *)0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    node = q->head;
    next=___cds_wfq_node_sync_next(node);
    q->head = next;
    if(node == &q->dummy)
    {
      _cds_wfq_node_init(node);
      _cds_wfq_enqueue(q, node);
      struct cds_wfq_node *return_value____cds_wfq_dequeue_blocking$2;
      return_value____cds_wfq_dequeue_blocking$2=___cds_wfq_dequeue_blocking(q);
      return return_value____cds_wfq_dequeue_blocking$2;
    }

    return node;
  }
}

// ___cds_wfq_node_sync_next
// file urcu/static/wfqueue.h line 91
static inline struct cds_wfq_node * ___cds_wfq_node_sync_next(struct cds_wfq_node *node)
{
  struct cds_wfq_node *next;
  signed int attempt = 0;
  struct cds_wfq_node * volatile tmp_statement_expression$1;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((struct cds_wfq_node * volatile *)&node->next);
    next = tmp_statement_expression$1;
    if(!(next == ((struct cds_wfq_node *)NULL)))
      break;

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

// ___cds_wfs_end
// file urcu/static/wfstack.h line 100
static inline _Bool ___cds_wfs_end(void *node)
{
  return node == (void *)0x1UL;
}

// ___cds_wfs_init
// file urcu/static/wfstack.h line 82
static inline void ___cds_wfs_init(struct __cds_wfs_stack *s)
{
  s->head = (struct cds_wfs_head *)(void *)0x1UL;
}

// ___cds_wfs_next
// file urcu/static/wfstack.h line 388
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
// file urcu/static/wfstack.h line 151
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

// ___cds_wfs_pop
// file urcu/static/wfstack.h line 175
static inline struct cds_wfs_node * ___cds_wfs_pop(union anonymous$0 u_stack, signed int *state, signed int blocking)
{
  struct cds_wfs_head *head;
  struct cds_wfs_head *new_head;
  struct cds_wfs_node *next;
  struct __cds_wfs_stack *___cds_wfs_pop$$1$$s = u_stack._s;
  if(!(state == ((signed int *)NULL)))
    *state = 0;

  struct cds_wfs_head * volatile tmp_statement_expression$1;
  struct cds_wfs_head *tmp_statement_expression$3;
  _Bool return_value____cds_wfs_end$4;
  do
  {
    asm("" :  :  : "memory");
    tmp_statement_expression$1 = *((struct cds_wfs_head * volatile *)&___cds_wfs_pop$$1$$s->head);
    head = tmp_statement_expression$1;
    _Bool return_value____cds_wfs_end$2;
    return_value____cds_wfs_end$2=___cds_wfs_end((void *)head);
    if(!(return_value____cds_wfs_end$2 == (_Bool)0))
      return (struct cds_wfs_node *)(void *)0;

    next=___cds_wfs_node_sync_next(&head->node, blocking);
    if(next == (struct cds_wfs_node *)18446744073709551615ul && blocking == 0)
      return (struct cds_wfs_node *)(void *)-1UL;

    const struct cds_wfs_node *__ptr = next;
    tmp_statement_expression$3 = (struct cds_wfs_head *)((char *)__ptr - (signed long int)0ul);
    new_head = tmp_statement_expression$3;
    unsigned long int return_value___uatomic_cmpxchg$5;
    return_value___uatomic_cmpxchg$5=__uatomic_cmpxchg$link1((void *)&___cds_wfs_pop$$1$$s->head, (unsigned long int)head, (unsigned long int)new_head, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
    if((struct cds_wfs_head *)return_value___uatomic_cmpxchg$5 == head)
    {
      if(!(state == ((signed int *)NULL)))
      {
        return_value____cds_wfs_end$4=___cds_wfs_end((void *)new_head);
        if(!(return_value____cds_wfs_end$4 == (_Bool)0))
          *state = *state | 1;

      }

      return &head->node;
    }

    if(blocking == 0)
      return (struct cds_wfs_node *)(void *)-1UL;

  }
  while((_Bool)1);
}

// ___cds_wfs_pop_all
// file urcu/static/wfstack.h line 284
static inline struct cds_wfs_head * ___cds_wfs_pop_all(union anonymous$0 u_stack)
{
  struct __cds_wfs_stack *___cds_wfs_pop_all$$1$$s = u_stack._s;
  struct cds_wfs_head *head;
  unsigned long int return_value___uatomic_exchange$1;
  return_value___uatomic_exchange$1=__uatomic_exchange$link2((void *)&___cds_wfs_pop_all$$1$$s->head, (unsigned long int)(void *)0x1UL, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
  head = (struct cds_wfs_head *)return_value___uatomic_exchange$1;
  _Bool return_value____cds_wfs_end$2;
  return_value____cds_wfs_end$2=___cds_wfs_end((void *)head);
  if(!(return_value____cds_wfs_end$2 == (_Bool)0))
    return (struct cds_wfs_head *)(void *)0;

  else
    return head;
}

// ___cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 232
static inline struct cds_wfs_node * ___cds_wfs_pop_blocking(union anonymous$0 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_blocking$1;
  return_value____cds_wfs_pop_with_state_blocking$1=___cds_wfs_pop_with_state_blocking(u_stack, (signed int *)(void *)0);
  return return_value____cds_wfs_pop_with_state_blocking$1;
}

// ___cds_wfs_pop_nonblocking
// file urcu/static/wfstack.h line 260
static inline struct cds_wfs_node * ___cds_wfs_pop_nonblocking(union anonymous$0 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_nonblocking$1;
  return_value____cds_wfs_pop_with_state_nonblocking$1=___cds_wfs_pop_with_state_nonblocking(u_stack, (signed int *)(void *)0);
  return return_value____cds_wfs_pop_with_state_nonblocking$1;
}

// ___cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 225
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_blocking(union anonymous$0 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop$1;
  return_value____cds_wfs_pop$1=___cds_wfs_pop(u_stack, state, 1);
  return return_value____cds_wfs_pop$1;
}

// ___cds_wfs_pop_with_state_nonblocking
// file urcu/static/wfstack.h line 247
static inline struct cds_wfs_node * ___cds_wfs_pop_with_state_nonblocking(union anonymous$0 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop$1;
  return_value____cds_wfs_pop$1=___cds_wfs_pop(u_stack, state, 0);
  return return_value____cds_wfs_pop$1;
}

// __cds_wfcq_dequeue_blocking
// file wfcqueue.c line 100
extern struct cds_wfcq_node * __cds_wfcq_dequeue_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_blocking$1;
  return_value____cds_wfcq_dequeue_blocking$1=___cds_wfcq_dequeue_blocking(head, tail);
  return return_value____cds_wfcq_dequeue_blocking$1;
}

// __cds_wfcq_dequeue_nonblocking
// file wfcqueue.c line 115
extern struct cds_wfcq_node * __cds_wfcq_dequeue_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_nonblocking$1;
  return_value____cds_wfcq_dequeue_nonblocking$1=___cds_wfcq_dequeue_nonblocking(head, tail);
  return return_value____cds_wfcq_dequeue_nonblocking$1;
}

// __cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 107
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_blocking$1;
  return_value____cds_wfcq_dequeue_with_state_blocking$1=___cds_wfcq_dequeue_with_state_blocking(head, tail, state);
  return return_value____cds_wfcq_dequeue_with_state_blocking$1;
}

// __cds_wfcq_dequeue_with_state_nonblocking
// file wfcqueue.c line 122
extern struct cds_wfcq_node * __cds_wfcq_dequeue_with_state_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value____cds_wfcq_dequeue_with_state_nonblocking$1;
  return_value____cds_wfcq_dequeue_with_state_nonblocking$1=___cds_wfcq_dequeue_with_state_nonblocking(head, tail, state);
  return return_value____cds_wfcq_dequeue_with_state_nonblocking$1;
}

// __cds_wfcq_first_blocking
// file wfcqueue.c line 150
extern struct cds_wfcq_node * __cds_wfcq_first_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first_blocking$1;
  return_value____cds_wfcq_first_blocking$1=___cds_wfcq_first_blocking(head, tail);
  return return_value____cds_wfcq_first_blocking$1;
}

// __cds_wfcq_first_nonblocking
// file wfcqueue.c line 157
extern struct cds_wfcq_node * __cds_wfcq_first_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value____cds_wfcq_first_nonblocking$1;
  return_value____cds_wfcq_first_nonblocking$1=___cds_wfcq_first_nonblocking(head, tail);
  return return_value____cds_wfcq_first_nonblocking$1;
}

// __cds_wfcq_init
// file wfcqueue.c line 43
extern void __cds_wfcq_init(struct __cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  ___cds_wfcq_init(head, tail);
}

// __cds_wfcq_next_blocking
// file wfcqueue.c line 164
extern struct cds_wfcq_node * __cds_wfcq_next_blocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next_blocking$1;
  return_value____cds_wfcq_next_blocking$1=___cds_wfcq_next_blocking(head, tail, node);
  return return_value____cds_wfcq_next_blocking$1;
}

// __cds_wfcq_next_nonblocking
// file wfcqueue.c line 172
extern struct cds_wfcq_node * __cds_wfcq_next_nonblocking(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  struct cds_wfcq_node *return_value____cds_wfcq_next_nonblocking$1;
  return_value____cds_wfcq_next_nonblocking$1=___cds_wfcq_next_nonblocking(head, tail, node);
  return return_value____cds_wfcq_next_nonblocking$1;
}

// __cds_wfcq_splice_blocking
// file wfcqueue.c line 130
extern enum cds_wfcq_ret __cds_wfcq_splice_blocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice_blocking$1;
  return_value____cds_wfcq_splice_blocking$1=___cds_wfcq_splice_blocking(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  return return_value____cds_wfcq_splice_blocking$1;
}

// __cds_wfcq_splice_nonblocking
// file wfcqueue.c line 140
extern enum cds_wfcq_ret __cds_wfcq_splice_nonblocking(union anonymous$3 dest_q_head, struct cds_wfcq_tail *dest_q_tail, union anonymous$3 src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value____cds_wfcq_splice_nonblocking$1;
  return_value____cds_wfcq_splice_nonblocking$1=___cds_wfcq_splice_nonblocking(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  return return_value____cds_wfcq_splice_nonblocking$1;
}

// __cds_wfq_dequeue_blocking
// file wfqueue.c line 49
extern struct cds_wfq_node * __cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *return_value____cds_wfq_dequeue_blocking$1;
  return_value____cds_wfq_dequeue_blocking$1=___cds_wfq_dequeue_blocking(q);
  return return_value____cds_wfq_dequeue_blocking$1;
}

// __cds_wfs_init
// file wfstack.c line 41
extern void __cds_wfs_init(struct __cds_wfs_stack *s)
{
  ___cds_wfs_init(s);
}

// __cds_wfs_pop_all
// file ../../urcu/wfstack.h line 309
extern struct cds_wfs_head * __cds_wfs_pop_all(union anonymous$0 u_stack)
{
  struct cds_wfs_head *return_value____cds_wfs_pop_all$1;
  return_value____cds_wfs_pop_all$1=___cds_wfs_pop_all(u_stack);
  return return_value____cds_wfs_pop_all$1;
}

// __cds_wfs_pop_blocking
// file wfstack.c line 97
extern struct cds_wfs_node * __cds_wfs_pop_blocking(union anonymous$0 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_blocking$1;
  return_value____cds_wfs_pop_blocking$1=___cds_wfs_pop_blocking(u_stack);
  return return_value____cds_wfs_pop_blocking$1;
}

// __cds_wfs_pop_nonblocking
// file wfstack.c line 109
extern struct cds_wfs_node * __cds_wfs_pop_nonblocking(union anonymous$0 u_stack)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_nonblocking$1;
  return_value____cds_wfs_pop_nonblocking$1=___cds_wfs_pop_nonblocking(u_stack);
  return return_value____cds_wfs_pop_nonblocking$1;
}

// __cds_wfs_pop_with_state_blocking
// file ../../urcu/wfstack.h line 271
extern struct cds_wfs_node * __cds_wfs_pop_with_state_blocking(union anonymous$0 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_blocking$1;
  return_value____cds_wfs_pop_with_state_blocking$1=___cds_wfs_pop_with_state_blocking(u_stack, state);
  return return_value____cds_wfs_pop_with_state_blocking$1;
}

// __cds_wfs_pop_with_state_nonblocking
// file wfstack.c line 115
extern struct cds_wfs_node * __cds_wfs_pop_with_state_nonblocking(union anonymous$0 u_stack, signed int *state)
{
  struct cds_wfs_node *return_value____cds_wfs_pop_with_state_nonblocking$1;
  return_value____cds_wfs_pop_with_state_nonblocking$1=___cds_wfs_pop_with_state_nonblocking(u_stack, state);
  return return_value____cds_wfs_pop_with_state_nonblocking$1;
}

// __uatomic_cmpxchg
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg(void *addr, unsigned long int old, unsigned long int _new, signed int len)
{
  unsigned char __uatomic_cmpxchg$$1$$1$$1$$result;
  unsigned short int __uatomic_cmpxchg$$1$$1$$2$$result;
  unsigned int __uatomic_cmpxchg$$1$$1$$3$$result;
  unsigned long int result;
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
      __uatomic_cmpxchg$$1$$1$$2$$result = (unsigned short int)old;
      asm("lock; cmpxchgw %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$2$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned short int)_new) : "memory");
      return (unsigned long int)__uatomic_cmpxchg$$1$$1$$2$$result;
    }
    case 4:
    {
      __uatomic_cmpxchg$$1$$1$$3$$result = (unsigned int)old;
      asm("lock; cmpxchgl %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$3$$result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned int)_new) : "memory");
      return (unsigned long int)__uatomic_cmpxchg$$1$$1$$3$$result;
    }
    case 8:
    {
      result = old;
      asm("lock; cmpxchgq %2, %1" : "+a"(result), "+m"(*((struct __uatomic_dummy *)addr)) : "r"((unsigned long int)_new) : "memory");
      return result;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_cmpxchg$link1
// file ./urcu/uatomic.h line 47
static inline unsigned long int __uatomic_cmpxchg$link1(void *addr$link1, unsigned long int old$link1, unsigned long int _new$link1, signed int len$link1)
{
  unsigned char __uatomic_cmpxchg$$1$$1$$1$$result$link1;
  unsigned short int result$link1;
  unsigned int __uatomic_cmpxchg$$1$$1$$3$$result$link1;
  unsigned long int __uatomic_cmpxchg$$1$$1$$4$$result$link1;
  switch(len$link1)
  {
    case 1:
    {
      __uatomic_cmpxchg$$1$$1$$1$$result$link1 = (unsigned char)old$link1;
      asm("lock; cmpxchgb %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$1$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "q"((unsigned char)_new$link1) : "memory");
      return (unsigned long int)__uatomic_cmpxchg$$1$$1$$1$$result$link1;
    }
    case 2:
    {
      result$link1 = (unsigned short int)old$link1;
      asm("lock; cmpxchgw %2, %1" : "+a"(result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "r"((unsigned short int)_new$link1) : "memory");
      return (unsigned long int)result$link1;
    }
    case 4:
    {
      __uatomic_cmpxchg$$1$$1$$3$$result$link1 = (unsigned int)old$link1;
      asm("lock; cmpxchgl %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$3$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "r"((unsigned int)_new$link1) : "memory");
      return (unsigned long int)__uatomic_cmpxchg$$1$$1$$3$$result$link1;
    }
    case 8:
    {
      __uatomic_cmpxchg$$1$$1$$4$$result$link1 = old$link1;
      asm("lock; cmpxchgq %2, %1" : "+a"(__uatomic_cmpxchg$$1$$1$$4$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "r"((unsigned long int)_new$link1) : "memory");
      return __uatomic_cmpxchg$$1$$1$$4$$result$link1;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
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
  unsigned short int result$link1;
  unsigned int __uatomic_exchange$$1$$1$$3$$result$link1;
  unsigned long int __uatomic_exchange$$1$$1$$4$$result$link1;
  switch(len$link1)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(__uatomic_exchange$$1$$1$$1$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned char)val$link1) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$1$$result$link1;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned short int)val$link1) : "memory");
      return (unsigned long int)result$link1;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange$$1$$1$$3$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned int)val$link1) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$3$$result$link1;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(__uatomic_exchange$$1$$1$$4$$result$link1), "+m"(*((struct __uatomic_dummy *)addr$link1)) : "0"((unsigned long int)val$link1) : "memory");
      return __uatomic_exchange$$1$$1$$4$$result$link1;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_exchange$link2
// file ./urcu/uatomic.h line 115
static inline unsigned long int __uatomic_exchange$link2(void *addr$link2, unsigned long int val$link2, signed int len$link2)
{
  unsigned char result$link2;
  unsigned short int __uatomic_exchange$$1$$1$$2$$result$link2;
  unsigned int __uatomic_exchange$$1$$1$$3$$result$link2;
  unsigned long int __uatomic_exchange$$1$$1$$4$$result$link2;
  switch(len$link2)
  {
    case 1:
    {
      asm("xchgb %0, %1" : "=q"(result$link2), "+m"(*((struct __uatomic_dummy *)addr$link2)) : "0"((unsigned char)val$link2) : "memory");
      return (unsigned long int)result$link2;
    }
    case 2:
    {
      asm("xchgw %0, %1" : "=r"(__uatomic_exchange$$1$$1$$2$$result$link2), "+m"(*((struct __uatomic_dummy *)addr$link2)) : "0"((unsigned short int)val$link2) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$2$$result$link2;
    }
    case 4:
    {
      asm("xchgl %0, %1" : "=r"(__uatomic_exchange$$1$$1$$3$$result$link2), "+m"(*((struct __uatomic_dummy *)addr$link2)) : "0"((unsigned int)val$link2) : "memory");
      return (unsigned long int)__uatomic_exchange$$1$$1$$3$$result$link2;
    }
    case 8:
    {
      asm("xchgq %0, %1" : "=r"(__uatomic_exchange$$1$$1$$4$$result$link2), "+m"(*((struct __uatomic_dummy *)addr$link2)) : "0"((unsigned long int)val$link2) : "memory");
      return __uatomic_exchange$$1$$1$$4$$result$link2;
    }
    default:
    {
      asm("ud2");
      return (unsigned long int)0;
    }
  }
}

// __uatomic_inc
// file ../../urcu/uatomic.h line 414
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

// _cds_wfcq_dequeue_blocking
// file urcu/static/wfcqueue.h line 613
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value__cds_wfcq_dequeue_with_state_blocking$1;
  return_value__cds_wfcq_dequeue_with_state_blocking$1=_cds_wfcq_dequeue_with_state_blocking(head, tail, (signed int *)(void *)0);
  return return_value__cds_wfcq_dequeue_with_state_blocking$1;
}

// _cds_wfcq_dequeue_lock
// file urcu/static/wfcqueue.h line 147
static inline void _cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  signed int ret;
  ret=pthread_mutex_lock(&head->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfcq_dequeue_unlock
// file urcu/static/wfcqueue.h line 156
static inline void _cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  signed int ret;
  ret=pthread_mutex_unlock(&head->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfcq_dequeue_with_state_blocking
// file urcu/static/wfcqueue.h line 596
static inline struct cds_wfcq_node * _cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *retval;
  _cds_wfcq_dequeue_lock(head, tail);
  retval=___cds_wfcq_dequeue_with_state_blocking(head, tail, state);
  _cds_wfcq_dequeue_unlock(head, tail);
  return retval;
}

// _cds_wfcq_empty
// file urcu/static/wfcqueue.h line 132
static inline _Bool _cds_wfcq_empty(union anonymous$3 u_head, struct cds_wfcq_tail *tail)
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
// file urcu/static/wfcqueue.h line 206
static inline _Bool _cds_wfcq_enqueue(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *new_tail)
{
  _Bool return_value____cds_wfcq_append$1;
  return_value____cds_wfcq_append$1=___cds_wfcq_append(head, tail, new_tail, new_tail);
  return return_value____cds_wfcq_append$1;
}

// _cds_wfcq_init
// file urcu/static/wfcqueue.h line 97
static inline void _cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  signed int ret;
  _cds_wfcq_node_init(&head->node);
  tail->p = &head->node;
  ret=pthread_mutex_init(&head->lock, (const union anonymous *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfcq_node_init
// file urcu/static/wfcqueue.h line 89
static inline void _cds_wfcq_node_init(struct cds_wfcq_node *node)
{
  node->next = (struct cds_wfcq_node *)(void *)0;
}

// _cds_wfcq_splice_blocking
// file urcu/static/wfcqueue.h line 632
static inline enum cds_wfcq_ret _cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret ret;
  _cds_wfcq_dequeue_lock(src_q_head, src_q_tail);
  ret=___cds_wfcq_splice_blocking(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  _cds_wfcq_dequeue_unlock(src_q_head, src_q_tail);
  return ret;
}

// _cds_wfq_dequeue_blocking
// file urcu/static/wfqueue.h line 148
static inline struct cds_wfq_node * _cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *retnode;
  signed int ret;
  ret=pthread_mutex_lock(&q->lock);
  /* assertion !ret */
  assert(!(ret != 0));
  retnode=___cds_wfq_dequeue_blocking(q);
  ret=pthread_mutex_unlock(&q->lock);
  /* assertion !ret */
  assert(!(ret != 0));
  return retnode;
}

// _cds_wfq_enqueue
// file urcu/static/wfqueue.h line 68
static inline void _cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node)
{
  struct cds_wfq_node **old_tail;
  unsigned long int return_value___uatomic_exchange$1;
  return_value___uatomic_exchange$1=__uatomic_exchange((void *)&q->tail, (unsigned long int)&node->next, (signed int)sizeof(struct cds_wfq_node **) /*8ul*/ );
  old_tail = (struct cds_wfq_node **)return_value___uatomic_exchange$1;
  struct cds_wfq_node *_v;
  struct cds_wfq_node * volatile tmp_statement_expression$2;
  *((struct cds_wfq_node * volatile *)&(*old_tail)) = node;
  tmp_statement_expression$2 = *((struct cds_wfq_node * volatile *)&(*old_tail));
  _v = tmp_statement_expression$2;
  asm("" :  :  : "memory");
  _v = _v;
}

// _cds_wfq_init
// file urcu/static/wfqueue.h line 56
static inline void _cds_wfq_init(struct cds_wfq_queue *q)
{
  signed int ret;
  _cds_wfq_node_init(&q->dummy);
  q->head = &q->dummy;
  q->tail = &q->dummy.next;
  ret=pthread_mutex_init(&q->lock, (const union anonymous *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfq_node_init
// file urcu/static/wfqueue.h line 51
static inline void _cds_wfq_node_init(struct cds_wfq_node *node)
{
  node->next = (struct cds_wfq_node *)(void *)0;
}

// _cds_wfs_empty
// file urcu/static/wfstack.h line 110
static inline _Bool _cds_wfs_empty(union anonymous$0 u_stack)
{
  struct __cds_wfs_stack *_cds_wfs_empty$$1$$s = u_stack._s;
  struct cds_wfs_head * volatile tmp_statement_expression$1;
  asm("" :  :  : "memory");
  tmp_statement_expression$1 = *((struct cds_wfs_head * volatile *)&_cds_wfs_empty$$1$$s->head);
  _Bool return_value____cds_wfs_end$2;
  return_value____cds_wfs_end$2=___cds_wfs_end((void *)tmp_statement_expression$1);
  return return_value____cds_wfs_end$2;
}

// _cds_wfs_first
// file urcu/static/wfstack.h line 380
static inline struct cds_wfs_node * _cds_wfs_first(struct cds_wfs_head *head)
{
  _Bool return_value____cds_wfs_end$1;
  return_value____cds_wfs_end$1=___cds_wfs_end((void *)head);
  if(!(return_value____cds_wfs_end$1 == (_Bool)0))
    return (struct cds_wfs_node *)(void *)0;

  else
    return &head->node;
}

// _cds_wfs_init
// file urcu/static/wfstack.h line 91
static inline void _cds_wfs_init(struct cds_wfs_stack *s)
{
  signed int ret;
  s->head = (struct cds_wfs_head *)(void *)0x1UL;
  ret=pthread_mutex_init(&s->lock, (const union anonymous *)(void *)0);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfs_next_blocking
// file urcu/static/wfstack.h line 417
static inline struct cds_wfs_node * _cds_wfs_next_blocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value____cds_wfs_next$1;
  return_value____cds_wfs_next$1=___cds_wfs_next(node, 1);
  return return_value____cds_wfs_next$1;
}

// _cds_wfs_next_nonblocking
// file urcu/static/wfstack.h line 430
static inline struct cds_wfs_node * _cds_wfs_next_nonblocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value____cds_wfs_next$1;
  return_value____cds_wfs_next$1=___cds_wfs_next(node, 0);
  return return_value____cds_wfs_next$1;
}

// _cds_wfs_node_init
// file urcu/static/wfstack.h line 74
static inline void _cds_wfs_node_init(struct cds_wfs_node *node)
{
  node->next = (struct cds_wfs_node *)(void *)0;
}

// _cds_wfs_pop_all_blocking
// file urcu/static/wfstack.h line 357
static inline struct cds_wfs_head * _cds_wfs_pop_all_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_head *rethead;
  _cds_wfs_pop_lock(s);
  rethead=___cds_wfs_pop_all(s);
  _cds_wfs_pop_unlock(s);
  return rethead;
}

// _cds_wfs_pop_blocking
// file urcu/static/wfstack.h line 347
static inline struct cds_wfs_node * _cds_wfs_pop_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_node *return_value__cds_wfs_pop_with_state_blocking$1;
  return_value__cds_wfs_pop_with_state_blocking$1=_cds_wfs_pop_with_state_blocking(s, (signed int *)(void *)0);
  return return_value__cds_wfs_pop_with_state_blocking$1;
}

// _cds_wfs_pop_lock
// file urcu/static/wfstack.h line 308
static inline void _cds_wfs_pop_lock(struct cds_wfs_stack *s)
{
  signed int ret;
  ret=pthread_mutex_lock(&s->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfs_pop_unlock
// file urcu/static/wfstack.h line 319
static inline void _cds_wfs_pop_unlock(struct cds_wfs_stack *s)
{
  signed int ret;
  ret=pthread_mutex_unlock(&s->lock);
  /* assertion !ret */
  assert(!(ret != 0));
}

// _cds_wfs_pop_with_state_blocking
// file urcu/static/wfstack.h line 332
static inline struct cds_wfs_node * _cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state)
{
  struct cds_wfs_node *retnode;
  _cds_wfs_pop_lock(s);
  retnode=___cds_wfs_pop_with_state_blocking(s, state);
  _cds_wfs_pop_unlock(s);
  return retnode;
}

// _cds_wfs_push
// file urcu/static/wfstack.h line 127
static inline signed int _cds_wfs_push(union anonymous$0 u_stack, struct cds_wfs_node *node)
{
  struct __cds_wfs_stack *_cds_wfs_push$$1$$s = u_stack._s;
  struct cds_wfs_head *old_head;
  struct cds_wfs_head *new_head;
  /* assertion node->next == ((void *)0) */
  assert(node->next == (struct cds_wfs_node *)(void *)0);
  struct cds_wfs_head *tmp_statement_expression$1;
  const struct cds_wfs_node *__ptr = node;
  tmp_statement_expression$1 = (struct cds_wfs_head *)((char *)__ptr - (signed long int)0ul);
  new_head = tmp_statement_expression$1;
  unsigned long int return_value___uatomic_exchange$2;
  return_value___uatomic_exchange$2=__uatomic_exchange$link2((void *)&_cds_wfs_push$$1$$s->head, (unsigned long int)new_head, (signed int)sizeof(struct cds_wfs_head *) /*8ul*/ );
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

// cds_wfcq_dequeue_blocking
// file wfcqueue.c line 75
extern struct cds_wfcq_node * cds_wfcq_dequeue_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  struct cds_wfcq_node *return_value__cds_wfcq_dequeue_blocking$1;
  return_value__cds_wfcq_dequeue_blocking$1=_cds_wfcq_dequeue_blocking(head, tail);
  return return_value__cds_wfcq_dequeue_blocking$1;
}

// cds_wfcq_dequeue_lock
// file wfcqueue.c line 63
extern void cds_wfcq_dequeue_lock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_dequeue_lock(head, tail);
}

// cds_wfcq_dequeue_unlock
// file wfcqueue.c line 69
extern void cds_wfcq_dequeue_unlock(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_dequeue_unlock(head, tail);
}

// cds_wfcq_dequeue_with_state_blocking
// file wfcqueue.c line 82
extern struct cds_wfcq_node * cds_wfcq_dequeue_with_state_blocking(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail, signed int *state)
{
  struct cds_wfcq_node *return_value__cds_wfcq_dequeue_with_state_blocking$1;
  return_value__cds_wfcq_dequeue_with_state_blocking$1=_cds_wfcq_dequeue_with_state_blocking(head, tail, state);
  return return_value__cds_wfcq_dequeue_with_state_blocking$1;
}

// cds_wfcq_empty
// file wfcqueue.c line 49
extern _Bool cds_wfcq_empty(union anonymous$3 head, struct cds_wfcq_tail *tail)
{
  _Bool return_value__cds_wfcq_empty$1;
  return_value__cds_wfcq_empty$1=_cds_wfcq_empty(head, tail);
  return return_value__cds_wfcq_empty$1;
}

// cds_wfcq_enqueue
// file wfcqueue.c line 56
extern _Bool cds_wfcq_enqueue(union anonymous$3 head, struct cds_wfcq_tail *tail, struct cds_wfcq_node *node)
{
  _Bool return_value__cds_wfcq_enqueue$1;
  return_value__cds_wfcq_enqueue$1=_cds_wfcq_enqueue(head, tail, node);
  return return_value__cds_wfcq_enqueue$1;
}

// cds_wfcq_init
// file wfcqueue.c line 37
extern void cds_wfcq_init(struct cds_wfcq_head *head, struct cds_wfcq_tail *tail)
{
  _cds_wfcq_init(head, tail);
}

// cds_wfcq_node_init
// file wfcqueue.c line 32
extern void cds_wfcq_node_init(struct cds_wfcq_node *node)
{
  _cds_wfcq_node_init(node);
}

// cds_wfcq_splice_blocking
// file wfcqueue.c line 90
extern enum cds_wfcq_ret cds_wfcq_splice_blocking(struct cds_wfcq_head *dest_q_head, struct cds_wfcq_tail *dest_q_tail, struct cds_wfcq_head *src_q_head, struct cds_wfcq_tail *src_q_tail)
{
  enum cds_wfcq_ret return_value__cds_wfcq_splice_blocking$1;
  return_value__cds_wfcq_splice_blocking$1=_cds_wfcq_splice_blocking(dest_q_head, dest_q_tail, src_q_head, src_q_tail);
  return return_value__cds_wfcq_splice_blocking$1;
}

// cds_wfq_dequeue_blocking
// file wfqueue.c line 54
extern struct cds_wfq_node * cds_wfq_dequeue_blocking(struct cds_wfq_queue *q)
{
  struct cds_wfq_node *return_value__cds_wfq_dequeue_blocking$1;
  return_value__cds_wfq_dequeue_blocking$1=_cds_wfq_dequeue_blocking(q);
  return return_value__cds_wfq_dequeue_blocking$1;
}

// cds_wfq_enqueue
// file wfqueue.c line 44
extern void cds_wfq_enqueue(struct cds_wfq_queue *q, struct cds_wfq_node *node)
{
  _cds_wfq_enqueue(q, node);
}

// cds_wfq_init
// file wfqueue.c line 39
extern void cds_wfq_init(struct cds_wfq_queue *q)
{
  _cds_wfq_init(q);
}

// cds_wfq_node_init
// file wfqueue.c line 34
extern void cds_wfq_node_init(struct cds_wfq_node *node)
{
  _cds_wfq_node_init(node);
}

// cds_wfs_empty
// file ../../urcu/wfstack.h line 163
extern _Bool cds_wfs_empty(union anonymous$0 u_stack)
{
  _Bool return_value__cds_wfs_empty$1;
  return_value__cds_wfs_empty$1=_cds_wfs_empty(u_stack);
  return return_value__cds_wfs_empty$1;
}

// cds_wfs_first
// file ../../urcu/wfstack.h line 211
extern struct cds_wfs_node * cds_wfs_first(struct cds_wfs_head *head)
{
  struct cds_wfs_node *return_value__cds_wfs_first$1;
  return_value__cds_wfs_first$1=_cds_wfs_first(head);
  return return_value__cds_wfs_first$1;
}

// cds_wfs_init
// file ../../urcu/wfstack.h line 151
extern void cds_wfs_init(struct cds_wfs_stack *s)
{
  _cds_wfs_init(s);
}

// cds_wfs_next_blocking
// file ../../urcu/wfstack.h line 226
extern struct cds_wfs_node * cds_wfs_next_blocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value__cds_wfs_next_blocking$1;
  return_value__cds_wfs_next_blocking$1=_cds_wfs_next_blocking(node);
  return return_value__cds_wfs_next_blocking$1;
}

// cds_wfs_next_nonblocking
// file wfstack.c line 82
extern struct cds_wfs_node * cds_wfs_next_nonblocking(struct cds_wfs_node *node)
{
  struct cds_wfs_node *return_value__cds_wfs_next_nonblocking$1;
  return_value__cds_wfs_next_nonblocking$1=_cds_wfs_next_nonblocking(node);
  return return_value__cds_wfs_next_nonblocking$1;
}

// cds_wfs_node_init
// file ../../urcu/wfstack.h line 146
extern void cds_wfs_node_init(struct cds_wfs_node *node)
{
  _cds_wfs_node_init(node);
}

// cds_wfs_pop_all_blocking
// file wfstack.c line 67
extern struct cds_wfs_head * cds_wfs_pop_all_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_head *return_value__cds_wfs_pop_all_blocking$1;
  return_value__cds_wfs_pop_all_blocking$1=_cds_wfs_pop_all_blocking(s);
  return return_value__cds_wfs_pop_all_blocking$1;
}

// cds_wfs_pop_blocking
// file wfstack.c line 56
extern struct cds_wfs_node * cds_wfs_pop_blocking(struct cds_wfs_stack *s)
{
  struct cds_wfs_node *return_value__cds_wfs_pop_blocking$1;
  return_value__cds_wfs_pop_blocking$1=_cds_wfs_pop_blocking(s);
  return return_value__cds_wfs_pop_blocking$1;
}

// cds_wfs_pop_lock
// file ../../urcu/wfstack.h line 239
extern void cds_wfs_pop_lock(struct cds_wfs_stack *s)
{
  _cds_wfs_pop_lock(s);
}

// cds_wfs_pop_unlock
// file ../../urcu/wfstack.h line 244
extern void cds_wfs_pop_unlock(struct cds_wfs_stack *s)
{
  _cds_wfs_pop_unlock(s);
}

// cds_wfs_pop_with_state_blocking
// file ../../urcu/wfstack.h line 190
extern struct cds_wfs_node * cds_wfs_pop_with_state_blocking(struct cds_wfs_stack *s, signed int *state)
{
  struct cds_wfs_node *return_value__cds_wfs_pop_with_state_blocking$1;
  return_value__cds_wfs_pop_with_state_blocking$1=_cds_wfs_pop_with_state_blocking(s, state);
  return return_value__cds_wfs_pop_with_state_blocking$1;
}

// cds_wfs_push
// file ../../urcu/wfstack.h line 174
extern signed int cds_wfs_push(union anonymous$0 u_stack, struct cds_wfs_node *node)
{
  signed int return_value__cds_wfs_push$1;
  return_value__cds_wfs_push$1=_cds_wfs_push(u_stack, node);
  return return_value__cds_wfs_push$1;
}

// compat_futex_async
// file compat_futex.c line 116
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
// file compat_futex.c line 54
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

// do_test_pop
// file test_urcu_wfs.c line 205
static void do_test_pop(enum test_sync sync)
{
  struct cds_wfs_node *node;
  signed int state;
  if((signed int)sync == TEST_SYNC_MUTEX)
    cds_wfs_pop_lock(&s);

  node=__cds_wfs_pop_with_state_blocking(&s, &state);
  if((signed int)sync == TEST_SYNC_MUTEX)
    cds_wfs_pop_unlock(&s);

  if(!(node == ((struct cds_wfs_node *)NULL)))
  {
    if(!((1 & state) == 0))
      nr_pop_last = nr_pop_last + 1ull;

    free((void *)node);
    nr_successful_dequeues = nr_successful_dequeues + 1ull;
  }

  nr_dequeues = nr_dequeues + 1ull;
}

// do_test_pop_all
// file test_urcu_wfs.c line 225
static void do_test_pop_all(enum test_sync sync)
{
  struct cds_wfs_head *head;
  struct cds_wfs_node *node;
  struct cds_wfs_node *n;
  if((signed int)sync == TEST_SYNC_MUTEX)
    cds_wfs_pop_lock(&s);

  head=__cds_wfs_pop_all(&s);
  if((signed int)sync == TEST_SYNC_MUTEX)
    cds_wfs_pop_unlock(&s);

  struct cds_wfs_node *return_value_cds_wfs_first$1;
  return_value_cds_wfs_first$1=cds_wfs_first(head);
  struct cds_wfs_node *tmp_if_expr$3;
  struct cds_wfs_node *return_value_cds_wfs_next_blocking$2;
  struct cds_wfs_node *tmp_if_expr$5;
  struct cds_wfs_node *return_value_cds_wfs_next_blocking$4;
  if(!(return_value_cds_wfs_first$1 == ((struct cds_wfs_node *)NULL)))
  {
    nr_pop_all = nr_pop_all + 1ull;
    nr_pop_last = nr_pop_last + 1ull;
    node=cds_wfs_first(head);
    if(!(node == ((struct cds_wfs_node *)NULL)))
    {
      return_value_cds_wfs_next_blocking$2=cds_wfs_next_blocking(node);
      tmp_if_expr$3 = return_value_cds_wfs_next_blocking$2;
    }

    else
      tmp_if_expr$3 = (struct cds_wfs_node *)(void *)0;
    n = tmp_if_expr$3;
    for( ; !(node == ((struct cds_wfs_node *)NULL)); n = tmp_if_expr$5)
    {
      free((void *)node);
      nr_successful_dequeues = nr_successful_dequeues + 1ull;
      nr_dequeues = nr_dequeues + 1ull;
      node = n;
      if(!(node == ((struct cds_wfs_node *)NULL)))
      {
        return_value_cds_wfs_next_blocking$4=cds_wfs_next_blocking(node);
        tmp_if_expr$5 = return_value_cds_wfs_next_blocking$4;
      }

      else
        tmp_if_expr$5 = (struct cds_wfs_node *)(void *)0;
    }
  }

}

// gettid
// file ../../tests/common/thread-id.h line 34
static inline signed int gettid(void)
{
  signed long int return_value_syscall$1;
  return_value_syscall$1=syscall((signed long int)186);
  return (signed int)return_value_syscall$1;
}

// loop_sleep
// file test_urcu_wfs.c line 74
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
// file test_urcu_wfs.c line 336
signed int main(signed int argc, char **argv)
{
  signed int err;
  unsigned long int *tid_enqueuer;
  unsigned long int *tid_dequeuer;
  void *tret;
  unsigned long long int *count_enqueuer;
  unsigned long long int *count_dequeuer;
  unsigned long long int tot_enqueues = (unsigned long long int)0;
  unsigned long long int tot_dequeues = (unsigned long long int)0;
  unsigned long long int tot_successful_enqueues = (unsigned long long int)0;
  unsigned long long int tot_successful_dequeues = (unsigned long long int)0;
  unsigned long long int tot_empty_dest_enqueues = (unsigned long long int)0;
  unsigned long long int tot_pop_all = (unsigned long long int)0;
  unsigned long long int tot_pop_last = (unsigned long long int)0;
  unsigned long long int end_dequeues = (unsigned long long int)0;
  signed int i;
  signed int a;
  signed int retval = 0;
  unsigned int tmp_post$1;
  signed long int return_value_atol$2;
  signed long int return_value_atol$3;
  unsigned long int return_value_urcu_get_thread_id$4;
  volatile signed int tmp_statement_expression$9;
  _Bool return_value_cds_wfs_empty$10;
  if(!(argc >= 4))
  {
    show_usage(argc, argv);
    return -1;
  }

  else
  {
    err=sscanf(argv[(signed long int)1], "%u", &nr_dequeuers);
    if(!(err == 1))
    {
      show_usage(argc, argv);
      return -1;
    }

    else
    {
      err=sscanf(argv[(signed long int)2], "%u", &nr_enqueuers);
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
                case 118:
                {
                  verbose_mode = 1;
                  break;
                }
                case 112:
                {
                  test_pop = 1;
                  break;
                }
                case 80:
                {
                  test_pop_all = 1;
                  break;
                }
                case 77:
                {
                  test_sync = (enum test_sync)TEST_SYNC_MUTEX;
                  break;
                }
                case 119:
                {
                  test_wait_empty = 1;
                  break;
                }
                case 102:
                  test_force_sync = 1;
              }

          if(test_pop == 0 && test_pop_all == 0)
            test_pop_all = 1;

          if((signed int)test_sync == TEST_SYNC_NONE && nr_dequeuers >= 2u && !(test_pop == 0))
          {
            if(!(test_force_sync == 0))
              fprintf(stderr, "[WARNING] Using pop concurrently with other pop or pop_all without external synchronization. Expect run-time failure.\n");

            else
            {
              printf("Enforcing mutex synchronization\n");
              test_sync = (enum test_sync)TEST_SYNC_MUTEX;
            }
          }

          do
            if(!(verbose_mode == 0))
              printf("running test for %lu seconds, %u enqueuers, %u dequeuers.\n", duration, nr_enqueuers, nr_dequeuers);

          while((_Bool)0);
          if(!(test_pop == 0))
            do
              if(!(verbose_mode == 0))
                printf("pop test activated.\n");

            while((_Bool)0);

          if(!(test_pop_all == 0))
            do
              if(!(verbose_mode == 0))
                printf("pop_all test activated.\n");

            while((_Bool)0);

          if((signed int)test_sync == TEST_SYNC_MUTEX)
            do
              if(!(verbose_mode == 0))
                printf("External sync: mutex.\n");

            while((_Bool)0);

          else
            do
              if(!(verbose_mode == 0))
                printf("External sync: none.\n");

            while((_Bool)0);
          if(!(test_wait_empty == 0))
            do
              if(!(verbose_mode == 0))
                printf("Wait for dequeuers to empty stack.\n");

            while((_Bool)0);

          do
            if(!(verbose_mode == 0))
              printf("Writer delay : %lu loops.\n", rduration);

          while((_Bool)0);
          do
            if(!(verbose_mode == 0))
              printf("Reader duration : %lu loops.\n", wdelay);

          while((_Bool)0);
          do
            if(!(verbose_mode == 0))
            {
              return_value_urcu_get_thread_id$4=urcu_get_thread_id();
              printf("thread %-6s, tid %lu\n", (const void *)"main", return_value_urcu_get_thread_id$4);
            }

          while((_Bool)0);
          void *return_value_calloc$5;
          return_value_calloc$5=calloc((unsigned long int)nr_enqueuers, sizeof(unsigned long int) /*8ul*/ );
          tid_enqueuer = (unsigned long int *)return_value_calloc$5;
          void *return_value_calloc$6;
          return_value_calloc$6=calloc((unsigned long int)nr_dequeuers, sizeof(unsigned long int) /*8ul*/ );
          tid_dequeuer = (unsigned long int *)return_value_calloc$6;
          void *return_value_calloc$7;
          return_value_calloc$7=calloc((unsigned long int)nr_enqueuers, (unsigned long int)3 * sizeof(unsigned long long int) /*8ul*/ );
          count_enqueuer = (unsigned long long int *)return_value_calloc$7;
          void *return_value_calloc$8;
          return_value_calloc$8=calloc((unsigned long int)nr_dequeuers, (unsigned long int)4 * sizeof(unsigned long long int) /*8ul*/ );
          count_dequeuer = (unsigned long long int *)return_value_calloc$8;
          cds_wfs_init(&s);
          next_aff = (unsigned int)0;
          i = 0;
          for( ; !((unsigned int)i >= nr_enqueuers); i = i + 1)
          {
            err=pthread_create(&tid_enqueuer[(signed long int)i], (const union pthread_attr_t *)(void *)0, thr_enqueuer, (void *)&count_enqueuer[(signed long int)(3 * i)]);
            if(!(err == 0))
              exit(1);

          }
          i = 0;
          for( ; !((unsigned int)i >= nr_dequeuers); i = i + 1)
          {
            err=pthread_create(&tid_dequeuer[(signed long int)i], (const union pthread_attr_t *)(void *)0, thr_dequeuer, (void *)&count_dequeuer[(signed long int)(4 * i)]);
            if(!(err == 0))
              exit(1);

          }
          asm("mfence" :  :  : "memory");
          test_go = 1;
          i = 0;
          for( ; !((unsigned long int)i >= duration); i = i + 1)
          {
            sleep((unsigned int)1);
            if(!(verbose_mode == 0))
            {
              fwrite((const void *)".", sizeof(char) /*1ul*/ , (unsigned long int)1, stdout);
              fflush(stdout);
            }

          }
          test_stop_enqueue = 1;
          if(!(test_wait_empty == 0))
          {
            do
            {
              asm("" :  :  : "memory");
              tmp_statement_expression$9 = *((volatile signed int *)&(*(&test_enqueue_stopped)));
              if(nr_enqueuers == (unsigned int)tmp_statement_expression$9)
                break;

              sleep((unsigned int)1);
            }
            while((_Bool)1);
            do
            {
              return_value_cds_wfs_empty$10=cds_wfs_empty(&s);
              if(return_value_cds_wfs_empty$10 != (_Bool)0)
                break;

              sleep((unsigned int)1);
            }
            while((_Bool)1);
          }

          test_stop_dequeue = 1;
          i = 0;
          for( ; !((unsigned int)i >= nr_enqueuers); i = i + 1)
          {
            err=pthread_join(tid_enqueuer[(signed long int)i], &tret);
            if(!(err == 0))
              exit(1);

            tot_enqueues = tot_enqueues + count_enqueuer[(signed long int)(3 * i)];
            tot_successful_enqueues = tot_successful_enqueues + count_enqueuer[(signed long int)(3 * i + 1)];
            tot_empty_dest_enqueues = tot_empty_dest_enqueues + count_enqueuer[(signed long int)(3 * i + 2)];
          }
          i = 0;
          for( ; !((unsigned int)i >= nr_dequeuers); i = i + 1)
          {
            err=pthread_join(tid_dequeuer[(signed long int)i], &tret);
            if(!(err == 0))
              exit(1);

            tot_dequeues = tot_dequeues + count_dequeuer[(signed long int)(4 * i)];
            tot_successful_dequeues = tot_successful_dequeues + count_dequeuer[(signed long int)(4 * i + 1)];
            tot_pop_all = tot_pop_all + count_dequeuer[(signed long int)(4 * i + 2)];
            tot_pop_last = tot_pop_last + count_dequeuer[(signed long int)(4 * i + 3)];
          }
          test_end(&s, &end_dequeues, &tot_pop_last);
          do
            if(!(verbose_mode == 0))
              printf("total number of enqueues : %llu, dequeues %llu\n", tot_enqueues, tot_dequeues);

          while((_Bool)0);
          do
            if(!(verbose_mode == 0))
              printf("total number of successful enqueues : %llu, enqueues to empty dest : %llu, successful dequeues %llu, pop_all : %llu, pop_last : %llu\n", tot_successful_enqueues, tot_empty_dest_enqueues, tot_successful_dequeues, tot_pop_all, tot_pop_last);

          while((_Bool)0);
          printf("SUMMARY %-25s testdur %4lu nr_enqueuers %3u wdelay %6lu nr_dequeuers %3u rdur %6lu nr_enqueues %12llu nr_dequeues %12llu successful enqueues %12llu enqueues to empty dest %12llu successful dequeues %12llu pop_all %12llu pop_last %llu end_dequeues %llu nr_ops %12llu\n", argv[(signed long int)0], duration, nr_enqueuers, wdelay, nr_dequeuers, rduration, tot_enqueues, tot_dequeues, tot_successful_enqueues, tot_empty_dest_enqueues, tot_successful_dequeues, tot_pop_all, tot_pop_last, end_dequeues, tot_enqueues + tot_dequeues);
          if(!(tot_successful_enqueues == end_dequeues + tot_successful_dequeues))
          {
            printf("WARNING! Discrepancy between nr succ. enqueues %llu vs succ. dequeues + end dequeues %llu.\n", tot_successful_enqueues, tot_successful_dequeues + end_dequeues);
            retval = 1;
          }

          if(!(tot_empty_dest_enqueues == tot_pop_last))
          {
            printf("WARNING! Discrepancy between empty enqueue (%llu) and number of pop last (%llu)\n", tot_empty_dest_enqueues, tot_pop_last);
            retval = 1;
          }

          free((void *)count_enqueuer);
          free((void *)count_dequeuer);
          free((void *)tid_enqueuer);
          free((void *)tid_dequeuer);
          return retval;
        }
      }
    }
  }
}

// set_affinity
// file test_urcu_wfs.c line 97
static void set_affinity(void)
{
  struct anonymous$2 mask;
  signed int cpu;
  signed int ret;
  unsigned int tmp_post$1;
  if(!(use_affinity == 0))
  {
    ret=pthread_mutex_lock(&affinity_mutex);
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
      __builtin_memset((void *)&mask, 0, sizeof(struct anonymous$2) /*128ul*/ );
    while((_Bool)0);
    unsigned long int __cpu = (unsigned long int)cpu;
    if(!(__cpu / 8ul >= sizeof(struct anonymous$2) /*128ul*/ ))
      ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] = ((unsigned long int *)(&mask)->__bits)[(signed long int)(__cpu / ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ ))] | (unsigned long int)1 << __cpu % ((unsigned long int)8 * sizeof(unsigned long int) /*8ul*/ );

    else
      (unsigned long int)0;
    sched_setaffinity(0, sizeof(struct anonymous$2) /*128ul*/ , &mask);
  }

}

// show_usage
// file test_urcu_wfs.c line 318
static void show_usage(signed int argc, char **argv)
{
  printf("Usage : %s nr_dequeuers nr_enqueuers duration (s) <OPTIONS>\n", argv[(signed long int)0]);
  printf("OPTIONS:\n");
  printf("\t[-d delay] (enqueuer period (in loops))\n");
  printf("\t[-c duration] (dequeuer period (in loops))\n");
  printf("\t[-v] (verbose output)\n");
  printf("\t[-a cpu#] [-a cpu#]... (affinity)\n");
  printf("\t[-p] (test pop)\n");
  printf("\t[-P] (test pop_all, enabled by default)\n");
  printf("\t[-M] (use mutex external synchronization)\n");
  printf("\t\tNote: default: no external synchronization used.\n");
  printf("\t[-f] (force user-provided synchronization)\n");
  printf("\t[-w] Wait for dequeuer to empty stack\n");
  printf("\n");
}

// test_duration_dequeue
// file test_urcu_wfs.c line 133
static signed int test_duration_dequeue(void)
{
  return (signed int)!(test_stop_dequeue != 0);
}

// test_duration_enqueue
// file test_urcu_wfs.c line 138
static signed int test_duration_enqueue(void)
{
  return (signed int)!(test_stop_enqueue != 0);
}

// test_end
// file test_urcu_wfs.c line 301
static void test_end(struct cds_wfs_stack *s, unsigned long long int *nr_dequeues, unsigned long long int *nr_pop_last)
{
  struct cds_wfs_node *node;
  signed int state;
  do
  {
    node=cds_wfs_pop_with_state_blocking(s, &state);
    if(!(node == ((struct cds_wfs_node *)NULL)))
    {
      if(!((1 & state) == 0))
        *nr_pop_last = *nr_pop_last + 1ull;

      free((void *)node);
      *nr_dequeues = *nr_dequeues + 1ull;
    }

  }
  while(!(node == ((struct cds_wfs_node *)NULL)));
}

// thr_dequeuer
// file test_urcu_wfs.c line 250
static void * thr_dequeuer(void *_count)
{
  unsigned long long int *count = (unsigned long long int *)_count;
  unsigned int counter = (unsigned int)0;
  unsigned long int return_value_urcu_get_thread_id$1;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$1=urcu_get_thread_id();
      printf("thread_begin %s, tid %lu\n", (const void *)"dequeuer", return_value_urcu_get_thread_id$1);
    }

  while((_Bool)0);
  set_affinity();
  while(test_go == 0)
    ;
  asm("mfence" :  :  : "memory");
  /* assertion test_pop || test_pop_all */
  assert(test_pop != 0 || test_pop_all != 0);
  while((_Bool)1)
  {
    if(!(test_pop == 0) && !(test_pop_all == 0))
    {
      if(!((1u & counter) == 0u))
        do_test_pop(test_sync);

      else
        do_test_pop_all(test_sync);
      counter = counter + 1u;
    }

    else
      if(!(test_pop == 0))
        do_test_pop(test_sync);

      else
        do_test_pop_all(test_sync);
    signed int return_value_test_duration_dequeue$2;
    return_value_test_duration_dequeue$2=test_duration_dequeue();
    if(return_value_test_duration_dequeue$2 == 0)
      break;

    if(!(rduration == 0ul))
      loop_sleep(rduration);

  }
  unsigned long int return_value_urcu_get_thread_id$3;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$3=urcu_get_thread_id();
      printf("dequeuer thread_end, tid %lu, dequeues %llu, successful_dequeues %llu pop_all %llu pop_last %llu\n", return_value_urcu_get_thread_id$3, nr_dequeues, nr_successful_dequeues, nr_pop_all, nr_pop_last);
    }

  while((_Bool)0);
  count[(signed long int)0] = nr_dequeues;
  count[(signed long int)1] = nr_successful_dequeues;
  count[(signed long int)2] = nr_pop_all;
  count[(signed long int)3] = nr_pop_last;
  return (void *)2;
}

// thr_enqueuer
// file test_urcu_wfs.c line 157
static void * thr_enqueuer(void *_count)
{
  unsigned long long int *count = (unsigned long long int *)_count;
  _Bool was_nonempty;
  unsigned long int return_value_urcu_get_thread_id$1;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$1=urcu_get_thread_id();
      printf("thread_begin %s, tid %lu\n", (const void *)"enqueuer", return_value_urcu_get_thread_id$1);
    }

  while((_Bool)0);
  set_affinity();
  while(test_go == 0)
    ;
  asm("mfence" :  :  : "memory");
  signed int return_value_cds_wfs_push$3;
  do
  {
    struct cds_wfs_node *node;
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct cds_wfs_node) /*8ul*/ );
    node = (struct cds_wfs_node *)return_value_malloc$2;
    if(!(node == ((struct cds_wfs_node *)NULL)))
    {
      cds_wfs_node_init(node);
      return_value_cds_wfs_push$3=cds_wfs_push(&s, node);
      was_nonempty = (_Bool)return_value_cds_wfs_push$3;
      nr_successful_enqueues = nr_successful_enqueues + 1ull;
      if(was_nonempty == (_Bool)0)
        nr_empty_dest_enqueues = nr_empty_dest_enqueues + 1ull;

      if(!(wdelay == 0ul))
        loop_sleep(wdelay);

    }


  fail:
    ;
    nr_enqueues = nr_enqueues + 1ull;
    signed int return_value_test_duration_enqueue$4;
    return_value_test_duration_enqueue$4=test_duration_enqueue();
    if(return_value_test_duration_enqueue$4 == 0)
      break;

  }
  while((_Bool)1);
  __uatomic_inc((void *)&test_enqueue_stopped, (signed int)sizeof(signed int) /*4ul*/ );
  count[(signed long int)0] = nr_enqueues;
  count[(signed long int)1] = nr_successful_enqueues;
  count[(signed long int)2] = nr_empty_dest_enqueues;
  unsigned long int return_value_urcu_get_thread_id$5;
  do
    if(!(verbose_mode == 0))
    {
      return_value_urcu_get_thread_id$5=urcu_get_thread_id();
      printf("enqueuer thread_end, tid %lu, enqueues %llu successful_enqueues %llu, empty_dest_enqueues %llu\n", return_value_urcu_get_thread_id$5, nr_enqueues, nr_successful_enqueues, nr_empty_dest_enqueues);
    }

  while((_Bool)0);
  return (void *)1;
}

// urcu_get_thread_id
// file ../../tests/common/thread-id.h line 41
static inline unsigned long int urcu_get_thread_id(void)
{
  signed int return_value_gettid$1;
  return_value_gettid$1=gettid();
  return (unsigned long int)return_value_gettid$1;
}

