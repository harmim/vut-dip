// tag-#anon#ST[*{cS8}$cS8$'dli_fname'|*{V}$V$'dli_fbase'|*{cS8}$cS8$'dli_sname'|*{V}$V$'dli_saddr']
// file /usr/include/dlfcn.h line 88
struct anonymous$1;

// tag-#anon#ST[S32'__lock'|U32'__nr_readers'|U32'__readers_wakeup'|U32'__writer_wakeup'|U32'__nr_readers_queued'|U32'__nr_writers_queued'|S32'__writer'|S32'__shared'|S8'__rwelision'|ARR7{U8}$U8$'__pad1'|U64'__pad2'|U32'__flags'|U32'$pad0']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 177
struct anonymous$5;

// tag-#anon#ST[U32'st_name'|U8'st_info'|U8'st_other'|U16'st_shndx'|U64'st_value'|U64'st_size']
// file /usr/include/elf.h line 417
struct anonymous$2;

// tag-#anon#UN[ARR4{S8}$S8$'__size'|S32'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$4;

// tag-#anon#UN[ARR8{S8}$S8$'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 224
union anonymous$0;

// tag-#anon#UN[F32'probability'|*{S32(*{cS8}$cS8$|*{S32}$S32$|*{*{V}$V$}$*{V}$V$$|*{U32}$U32$)->S32}$S32(*{cS8}$cS8$|*{S32}$S32$|*{*{V}$V$}$*{V}$V$$|*{U32}$U32$)->S32$'external_cb'|SYM#tag-stack#'stack']
// file fiu.c line 50
union anonymous$6;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'|U32'__nr_readers'|U32'__readers_wakeup'|U32'__writer_wakeup'|U32'__nr_readers_queued'|U32'__nr_writers_queued'|S32'__writer'|S32'__shared'|S8'__rwelision'|ARR7{U8}$U8$'__pad1'|U64'__pad2'|U32'__flags'|U32'$pad0']#'__data'|ARR56{S8}$S8$'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 174
union anonymous;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'|ARR40{S8}$S8$'__size'|S64'__align']
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$3;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 156
struct _IO_marker;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-cache
// file hash.h line 22
struct cache;

// tag-entry
// file hash.c line 73
struct entry;

// tag-hash
// file hash.h line 10
struct hash;

// tag-pf_info
// file fiu.c line 36
struct pf_info;

// tag-pf_method
// file fiu.c line 28
enum pf_method { PF_ALWAYS=1, PF_PROB=2, PF_EXTERNAL=3, PF_STACK=4 };

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-stack
// file fiu.c line 58
struct stack;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-used_as
// file hash.c line 67
enum used_as { NEVER=0, IN_USE=1, REMOVED=2 };

// tag-wentry
// file wtable.c line 31
struct wentry;

// tag-wtable
// file wtable.h line 14
struct wtable;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __strtok_r
// file /usr/include/string.h line 349
extern char * __strtok_r(char *, const char *, char ** restrict );
// __strtok_r_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c(char *__s, char __sep, char **__nextp);
// _cache_invalidate
// file hash.c line 322
static void _cache_invalidate(struct cache *c);
// _fiu_rc_fifo
// file fiu-rc.c line 284
static signed int _fiu_rc_fifo(const char *basename);
// _hash_set
// file hash.c line 166
static _Bool _hash_set(struct hash *h, char *key, void *value);
// atexit
// file /usr/include/stdlib.h line 519
extern signed int atexit(void (*)(void));
// atfork_child
// file fiu.c line 213
static void atfork_child(void);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// backtrace
// file /usr/include/execinfo.h line 27
extern signed int backtrace(void **, signed int);
// backtrace_works
// file internal.h line 27
signed int backtrace_works(void (*caller)());
// backtrace_works::caller$object
// 
void caller$object();
// cache_create
// file hash.h line 24
struct cache * cache_create();
// cache_del
// file hash.c line 430
_Bool cache_del(struct cache *c, const char *key);
// cache_free
// file hash.h line 26
void cache_free(struct cache *c);
// cache_get
// file hash.h line 28
_Bool cache_get(struct cache *c, const char *key, void **value);
// cache_invalidate
// file hash.h line 31
_Bool cache_invalidate(struct cache *c);
// cache_resize
// file hash.h line 25
_Bool cache_resize(struct cache *c, unsigned long int new_size);
// cache_set
// file hash.h line 29
_Bool cache_set(struct cache *c, const char *key, void *value);
// close
// file /usr/include/unistd.h line 356
extern signed int close(signed int);
// dladdr
// file /usr/include/dlfcn.h line 98
extern signed int dladdr(const void *, struct anonymous$1 *);
// dladdr1
// file /usr/include/dlfcn.h line 102
extern signed int dladdr1(const void *, struct anonymous$1 *, void **, signed int);
// dlsym
// file /usr/include/dlfcn.h line 64
extern void * dlsym(void *, const char *);
// dumb_destructor
// file hash.c line 91
static void dumb_destructor(void *value);
// entry_for_key
// file hash.c line 374
struct entry * entry_for_key(struct cache *c, const char *key);
// fifo_atexit
// file fiu-rc.c line 278
static void fifo_atexit(void);
// fifo_atfork_child
// file fiu-rc.c line 318
static void fifo_atfork_child(void);
// fiu_disable
// file ../libfiu/fiu-control.h line 118
signed int fiu_disable(const char *name);
// fiu_enable
// file fiu.c line 379
signed int fiu_enable(const char *name, signed int failnum, void *failinfo, unsigned int flags);
// fiu_enable_external
// file fiu.c line 406
signed int fiu_enable_external(const char *name, signed int failnum, void *failinfo, unsigned int flags, signed int (*external_cb)(const char *, signed int *, void **, unsigned int *));
// fiu_enable_external::external_cb$object
// 
signed int external_cb$object(const char *, signed int *, void **, unsigned int *);
// fiu_enable_random
// file fiu.c line 392
signed int fiu_enable_random(const char *name, signed int failnum, void *failinfo, unsigned int flags, float probability);
// fiu_enable_stack
// file fiu.c line 421
signed int fiu_enable_stack(const char *name, signed int failnum, void *failinfo, unsigned int flags, void *func, signed int func_pos_in_stack);
// fiu_enable_stack_by_name
// file ../libfiu/fiu-control.h line 109
signed int fiu_enable_stack_by_name(const char *name, signed int failnum, void *failinfo, unsigned int flags, const char *func_name, signed int func_pos_in_stack);
// fiu_fail
// file ../libfiu/fiu.h line 38
signed int fiu_fail(const char *name);
// fiu_failinfo
// file fiu.c line 352
void * fiu_failinfo(void);
// fiu_init
// file ../libfiu/fiu.h line 31
signed int fiu_init(unsigned int flags);
// fiu_rc_fifo
// file fiu-rc.c line 323
signed int fiu_rc_fifo(const char *basename);
// fiu_rc_string
// file fiu-rc.c line 82
signed int fiu_rc_string(const char *cmd, char ** const error);
// fp_to_voidp
// file backtrace.c line 89
static void * fp_to_voidp(void (*funcp)());
// fp_to_voidp::funcp$object
// 
void funcp$object();
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// func1
// file test-enable_stack_by_name.c line 9
void func1(signed int should_fail);
// func2
// file test-enable_stack_by_name.c line 24
void func2(signed int should_fail);
// get_backtrace
// file internal.h line 13
signed int get_backtrace(void *buffer, signed int size);
// get_func_addr
// file internal.h line 23
void * get_func_addr(const char *func_name);
// get_func_end
// file internal.h line 17
void * get_func_end(void *func);
// get_func_start
// file internal.h line 20
void * get_func_start(void *pc);
// getpid
// file /usr/include/unistd.h line 631
extern signed int getpid(void);
// getsubopt
// file /usr/include/stdlib.h line 898
extern signed int getsubopt(char ** restrict , char * const * restrict , char ** restrict );
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, void *);
// hash_create
// file hash.h line 12
struct hash * hash_create(void (*destructor)(void *));
// hash_create::destructor$object
// 
void destructor$object(void *);
// hash_del
// file hash.h line 17
_Bool hash_del(struct hash *h, const char *key);
// hash_free
// file hash.h line 13
void hash_free(struct hash *h);
// hash_get
// file hash.h line 15
void * hash_get(struct hash *h, const char *key);
// hash_set
// file hash.h line 16
_Bool hash_set(struct hash *h, const char *key, void *value);
// insert_pf
// file fiu.c line 364
static signed int insert_pf(struct pf_info *pf);
// is_wildcard
// file wtable.c line 134
static _Bool is_wildcard(const char *s, unsigned long int len);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memset
// file /usr/include/string.h line 62
extern void * memset(void *, signed int, unsigned long int);
// mkfifo
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 349
extern signed int mkfifo(const char *, unsigned int);
// murmurhash2
// file hash.c line 26
static unsigned int murmurhash2(const char *key, unsigned long int len);
// open
// file /usr/include/fcntl.h line 156
extern signed int open(const char *, signed int, ...);
// pc_in_func
// file fiu.c line 145
static signed int pc_in_func(struct pf_info *pf, void *pc);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pf_create
// file fiu.c line 69
static struct pf_info * pf_create(const char *name, signed int failnum, void *failinfo, unsigned int flags, enum pf_method method);
// pf_free
// file fiu.c line 102
static void pf_free(struct pf_info *pf);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// prng_seed
// file fiu.c line 195
static void prng_seed(void);
// pthread_atfork
// file /usr/include/pthread.h line 1145
extern signed int pthread_atfork(void (*)(void), void (*)(void), void (*)(void));
// pthread_create
// file /usr/include/pthread.h line 233
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_getspecific
// file /usr/include/pthread.h line 1119
extern void * pthread_getspecific(unsigned int);
// pthread_key_create
// file /usr/include/pthread.h line 1111
extern signed int pthread_key_create(unsigned int *, void (*)(void *));
// pthread_mutex_destroy
// file /usr/include/pthread.h line 754
extern signed int pthread_mutex_destroy(union anonymous$3 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 749
extern signed int pthread_mutex_init(union anonymous$3 *, const union anonymous$4 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 762
extern signed int pthread_mutex_lock(union anonymous$3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 773
extern signed int pthread_mutex_unlock(union anonymous$3 *);
// pthread_rwlock_destroy
// file /usr/include/pthread.h line 893
extern signed int pthread_rwlock_destroy(union anonymous *);
// pthread_rwlock_init
// file /usr/include/pthread.h line 888
extern signed int pthread_rwlock_init(union anonymous *, const union anonymous$0 *);
// pthread_rwlock_rdlock
// file /usr/include/pthread.h line 897
extern signed int pthread_rwlock_rdlock(union anonymous *);
// pthread_rwlock_unlock
// file /usr/include/pthread.h line 927
extern signed int pthread_rwlock_unlock(union anonymous *);
// pthread_rwlock_wrlock
// file /usr/include/pthread.h line 912
extern signed int pthread_rwlock_wrlock(union anonymous *);
// pthread_setspecific
// file /usr/include/pthread.h line 1122
extern signed int pthread_setspecific(unsigned int, const void *);
// randd
// file fiu.c line 204
static double randd(void);
// rc_do_command
// file fiu-rc.c line 196
static signed int rc_do_command(signed int fdr, signed int fdw);
// rc_fifo_thread
// file fiu-rc.c line 231
static void * rc_fifo_thread(void *unused);
// read
// file /usr/include/unistd.h line 363
extern signed long int read(signed int, void *, unsigned long int);
// read_line
// file fiu-rc.c line 35
static signed int read_line(signed int fd, char *buf);
// resize_table
// file wtable.c line 262
static _Bool resize_table(struct wtable *t, unsigned long int new_size);
// resize_table$link1
// file hash.c line 195
static _Bool resize_table$link1(struct hash *h, unsigned long int new_size$link1);
// should_stack_fail
// file fiu.c line 159
static signed int should_stack_fail(struct pf_info *pf);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// strdup
// file /usr/include/string.h line 171
extern char * strdup(const char *);
// strlast
// file wtable.c line 119
static unsigned int strlast(const char *s1, const char *s2);
// strlen
// file /usr/include/string.h line 394
extern unsigned long int strlen(const char *);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// unlink
// file /usr/include/unistd.h line 829
extern signed int unlink(const char *);
// wildcards_find_entry
// file wtable.c line 172
static struct wentry * wildcards_find_entry(struct wtable *t, const char *key, _Bool exact, struct wentry **first_free);
// wildcards_set
// file wtable.c line 233
static _Bool wildcards_set(struct wtable *t, char *key, void *value);
// write
// file /usr/include/unistd.h line 369
extern signed long int write(signed int, const void *, unsigned long int);
// ws_matches_s
// file wtable.c line 145
static _Bool ws_matches_s(const char *ws, unsigned long int ws_len, const char *s, unsigned long int s_len, _Bool exact);
// wtable_create
// file wtable.h line 16
struct wtable * wtable_create(void (*destructor)(void *));
// wtable_create::destructor$object
// 
void destructor$object(void *);
// wtable_del
// file wtable.h line 21
_Bool wtable_del(struct wtable *t, const char *key);
// wtable_free
// file wtable.c line 98
void wtable_free(struct wtable *t);
// wtable_get
// file wtable.h line 19
void * wtable_get(struct wtable *t, const char *key);
// wtable_set
// file wtable.h line 20
_Bool wtable_set(struct wtable *t, const char *key, void *value);

struct anonymous$1
{
  // dli_fname
  const char *dli_fname;
  // dli_fbase
  void *dli_fbase;
  // dli_sname
  const char *dli_sname;
  // dli_saddr
  void *dli_saddr;
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

struct anonymous$2
{
  // st_name
  unsigned int st_name;
  // st_info
  unsigned char st_info;
  // st_other
  unsigned char st_other;
  // st_shndx
  unsigned short int st_shndx;
  // st_value
  unsigned long int st_value;
  // st_size
  unsigned long int st_size;
};

union anonymous$4
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$0
{
  // __size
  char __size[8l];
  // __align
  signed long int __align;
};

struct stack
{
  // func_start
  void *func_start;
  // func_end
  void *func_end;
  // func_pos_in_stack
  signed int func_pos_in_stack;
};

union anonymous$6
{
  // probability
  float probability;
  // external_cb
  signed int (*external_cb)(const char *, signed int *, void **, unsigned int *);
  // stack
  struct stack stack;
};

union anonymous
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

union anonymous$3
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

struct cache
{
  // hash
  struct hash *hash;
  // size
  unsigned long int size;
  // lock
  union anonymous lock;
};

struct entry
{
  // key
  char *key;
  // value
  void *value;
  // in_use
  enum used_as in_use;
};

struct hash
{
  // entries
  struct entry *entries;
  // table_size
  unsigned long int table_size;
  // nentries
  unsigned long int nentries;
  // destructor
  void (*destructor)(void *);
};

struct pf_info
{
  // name
  char *name;
  // namelen
  unsigned int namelen;
  // failnum
  signed int failnum;
  // failinfo
  void *failinfo;
  // flags
  unsigned int flags;
  // lock
  union anonymous$3 lock;
  // failed_once
  _Bool failed_once;
  // method
  enum pf_method method;
  // minfo
  union anonymous$6 minfo;
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

struct wentry
{
  // key
  char *key;
  // key_len
  unsigned long int key_len;
  // value
  void *value;
  // in_use
  _Bool in_use;
};

struct wtable
{
  // finals
  struct hash *finals;
  // wildcards
  struct wentry *wildcards;
  // ws_size
  unsigned long int ws_size;
  // ws_used_count
  unsigned long int ws_used_count;
  // wcache
  struct cache *wcache;
  // destructor
  void (*destructor)(void *);
};


// enabled_fails
// file fiu.c line 111
struct wtable *enabled_fails = (struct wtable *)(void *)0;
// enabled_fails_lock
// file fiu.c line 112
static union anonymous enabled_fails_lock = { .__data={ .__lock=0, .__nr_readers=(unsigned int)0, .__readers_wakeup=(unsigned int)0,
    .__writer_wakeup=(unsigned int)0, .__nr_readers_queued=(unsigned int)0,
    .__nr_writers_queued=(unsigned int)0,
    .__writer=0,
    .__shared=0, .__rwelision=(signed char)0, .__pad1={ (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0, (unsigned char)0 },
    .__pad2=(unsigned long int)0,
    .__flags=(unsigned int)0 } };
// last_failinfo_key
// file fiu.c line 137
static unsigned int last_failinfo_key;
// npipe_basename
// file fiu-rc.c line 227
static char npipe_basename[4096l];
// npipe_path_in
// file fiu-rc.c line 228
static char npipe_path_in[4096l];
// npipe_path_out
// file fiu-rc.c line 229
static char npipe_path_out[4096l];
// randd_xn
// file fiu.c line 193
static unsigned int randd_xn = 0xA673F42D;
// rec_count
// file fiu.c line 133
signed int rec_count = 0;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// __strtok_r_1c
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1149
static inline char * __strtok_r_1c(char *__s, char __sep, char **__nextp)
{
  char *__result;
  if(__s == ((char *)NULL))
    __s = *__nextp;

  for( ; *__s == __sep; __s = __s + 1l)
    ;
  __result = (char *)(void *)0;
  if(!((signed int)*__s == 0))
  {
    char *tmp_post$1 = __s;
    __s = __s + 1l;
    __result = tmp_post$1;
    while(!((signed int)*__s == 0))
    {
      char *tmp_post$2 = __s;
      __s = __s + 1l;
      if(*tmp_post$2 == __sep)
      {
        __s[(signed long int)-1] = (char)0;
        break;
      }

    }
  }

  *__nextp = __s;
  return __result;
}

// _cache_invalidate
// file hash.c line 322
static void _cache_invalidate(struct cache *c)
{
  unsigned long int i;
  struct entry *entry;
  i = (unsigned long int)0;
  for( ; !(i >= c->hash->table_size); i = i + 1ul)
  {
    entry = c->hash->entries + (signed long int)i;
    if((signed int)entry->in_use == IN_USE)
    {
      free((void *)entry->key);
      entry->key = (char *)(void *)0;
      entry->value = (void *)0;
      entry->in_use = (enum used_as)NEVER;
    }

  }
}

// _fiu_rc_fifo
// file fiu-rc.c line 284
static signed int _fiu_rc_fifo(const char *basename)
{
  unsigned long int thread;
  rec_count = rec_count + 1;
  signed int return_value_getpid$1;
  return_value_getpid$1=getpid();
  snprintf(npipe_path_in, (unsigned long int)4096, "%s-%d.in", basename, return_value_getpid$1);
  signed int return_value_getpid$2;
  return_value_getpid$2=getpid();
  snprintf(npipe_path_out, (unsigned long int)4096, "%s-%d.out", basename, return_value_getpid$2);
  signed int return_value_mkfifo$4;
  return_value_mkfifo$4=mkfifo(npipe_path_in, (unsigned int)0600);
  signed int *return_value___errno_location$3;
  if(!(return_value_mkfifo$4 == 0))
  {
    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 17))
    {
      rec_count = rec_count - 1;
      return -1;
    }

  }

  signed int return_value_mkfifo$6;
  return_value_mkfifo$6=mkfifo(npipe_path_out, (unsigned int)0600);
  signed int *return_value___errno_location$5;
  if(!(return_value_mkfifo$6 == 0))
  {
    return_value___errno_location$5=__errno_location();
    if(!(*return_value___errno_location$5 == 17))
    {
      unlink(npipe_path_in);
      rec_count = rec_count - 1;
      return -1;
    }

  }

  signed int return_value_pthread_create$7;
  return_value_pthread_create$7=pthread_create(&thread, (const union pthread_attr_t *)(void *)0, rc_fifo_thread, (void *)0);
  if(!(return_value_pthread_create$7 == 0))
  {
    unlink(npipe_path_in);
    unlink(npipe_path_out);
    rec_count = rec_count - 1;
    return -1;
  }

  else
  {
    atexit(fifo_atexit);
    rec_count = rec_count - 1;
    return 0;
  }
}

// _hash_set
// file hash.c line 166
static _Bool _hash_set(struct hash *h, char *key, void *value)
{
  unsigned long int pos;
  struct entry *entry;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(key);
  unsigned int return_value_murmurhash2$2;
  return_value_murmurhash2$2=murmurhash2(key, return_value_strlen$1);
  pos = (unsigned long int)return_value_murmurhash2$2 % h->table_size;
  do
  {
    entry = h->entries + (signed long int)pos;
    if(!((signed int)entry->in_use == IN_USE))
    {
      entry->in_use = (enum used_as)IN_USE;
      entry->key = key;
      entry->value = value;
      h->nentries = h->nentries + 1ul;
      return (_Bool)1;
    }

    else
    {
      signed int tmp_statement_expression$3;
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp$4;
      return_value___builtin_strcmp$4=__builtin_strcmp(key, entry->key);
      tmp_statement_expression$3 = return_value___builtin_strcmp$4;
      if(tmp_statement_expression$3 == 0)
      {
        h->destructor(entry->value);
        entry->value = value;
        return (_Bool)1;
      }

      else
        pos = (pos + (unsigned long int)1) % h->table_size;
    }
  }
  while((_Bool)1);
  return (_Bool)0;
}

// atfork_child
// file fiu.c line 213
static void atfork_child(void)
{
  prng_seed();
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// backtrace_works
// file internal.h line 27
signed int backtrace_works(void (*caller)())
{
  void *start = (void *)0;
  void *end = (void *)0;
  void *bt_buffer[100l];
  void *pc;
  signed int nptrs;
  signed int i;
  static signed int works = -1;
  if(works >= 0)
    return works;

  else
  {
    nptrs=get_backtrace((void *)bt_buffer, 100);
    if(!(nptrs >= 1))
    {
      works = 0;
      return works;
    }

    else
    {
      void *return_value_fp_to_voidp$1;
      return_value_fp_to_voidp$1=fp_to_voidp(caller);
      start=get_func_start(return_value_fp_to_voidp$1);
      void *return_value_fp_to_voidp$2;
      return_value_fp_to_voidp$2=fp_to_voidp(caller);
      end=get_func_end(return_value_fp_to_voidp$2);
      if(end == NULL && start == NULL)
      {
        works = 0;
        return works;
      }

      else
      {
        i = 0;
        for( ; !(i >= nptrs); i = i + 1)
        {
          pc = bt_buffer[(signed long int)i];
          if(!(end == NULL))
          {
            if(end >= pc && pc >= start)
            {
              works = 1;
              return works;
            }

          }

          else
          {
            void *return_value_get_func_start$3;
            return_value_get_func_start$3=get_func_start(pc);
            if(return_value_get_func_start$3 == start)
            {
              works = 1;
              return works;
            }

          }
        }
        works = 0;
        return works;
      }
    }
  }
}

// cache_create
// file hash.h line 24
struct cache * cache_create()
{
  struct cache *c;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct cache) /*72ul*/ );
  c = (struct cache *)return_value_malloc$1;
  if(c == ((struct cache *)NULL))
    return (struct cache *)(void *)0;

  else
  {
    c->hash=hash_create((void (*)(void *))(void *)0);
    if(c->hash == ((struct hash *)NULL))
    {
      free((void *)c);
      return (struct cache *)(void *)0;
    }

    else
    {
      pthread_rwlock_init(&c->lock, (const union anonymous$0 *)(void *)0);
      return c;
    }
  }
}

// cache_del
// file hash.c line 430
_Bool cache_del(struct cache *c, const char *key)
{
  pthread_rwlock_wrlock(&c->lock);
  struct entry *e;
  e=entry_for_key(c, key);
  if((signed int)e->in_use == IN_USE)
  {
    signed int tmp_statement_expression$1;
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp(e->key, key);
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(tmp_statement_expression$1 == 0)
    {
      free((void *)e->key);
      e->key = (char *)(void *)0;
      e->value = (void *)0;
      e->in_use = (enum used_as)REMOVED;
      pthread_rwlock_unlock(&c->lock);
      return (_Bool)1;
    }

  }

  pthread_rwlock_unlock(&c->lock);
  return (_Bool)0;
}

// cache_free
// file hash.h line 26
void cache_free(struct cache *c)
{
  hash_free(c->hash);
  pthread_rwlock_destroy(&c->lock);
  free((void *)c);
}

// cache_get
// file hash.h line 28
_Bool cache_get(struct cache *c, const char *key, void **value)
{
  pthread_rwlock_rdlock(&c->lock);
  struct entry *e;
  e=entry_for_key(c, key);
  *value = (void *)0;
  if((signed int)e->in_use == IN_USE)
  {
    signed int tmp_statement_expression$1;
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp(key, e->key);
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(tmp_statement_expression$1 == 0)
    {
      *value = e->value;
      goto hit;
    }

    else
      goto miss;

  hit:
    ;
    pthread_rwlock_unlock(&c->lock);
    return (_Bool)1;
  }

  else
  {

  miss:
    ;
    pthread_rwlock_unlock(&c->lock);
    return (_Bool)0;
  }
}

// cache_invalidate
// file hash.h line 31
_Bool cache_invalidate(struct cache *c)
{
  pthread_rwlock_wrlock(&c->lock);
  _cache_invalidate(c);
  pthread_rwlock_unlock(&c->lock);
  return (_Bool)1;
}

// cache_resize
// file hash.h line 25
_Bool cache_resize(struct cache *c, unsigned long int new_size)
{
  pthread_rwlock_wrlock(&c->lock);
  if(!(c->size >= new_size))
  {
    _Bool return_value_resize_table$1;
    return_value_resize_table$1=resize_table$link1(c->hash, new_size);
    if(!(return_value_resize_table$1 == (_Bool)0))
    {
      c->size = new_size;
      goto success;
    }

  }

  else
  {
    _cache_invalidate(c);
    _Bool return_value_resize_table$2;
    return_value_resize_table$2=resize_table$link1(c->hash, new_size);
    if(!(return_value_resize_table$2 == (_Bool)0))
    {
      c->size = new_size;
      goto success;
    }

  }
  pthread_rwlock_unlock(&c->lock);
  return (_Bool)0;

success:
  ;
  pthread_rwlock_unlock(&c->lock);
  return (_Bool)1;
}

// cache_set
// file hash.h line 29
_Bool cache_set(struct cache *c, const char *key, void *value)
{
  pthread_rwlock_wrlock(&c->lock);
  struct entry *e;
  e=entry_for_key(c, key);
  if((signed int)e->in_use == IN_USE)
    free((void *)e->key);

  e->in_use = (enum used_as)IN_USE;
  e->key=strdup(key);
  e->value = value;
  pthread_rwlock_unlock(&c->lock);
  return (_Bool)1;
}

// dumb_destructor
// file hash.c line 91
static void dumb_destructor(void *value)
{
  ;
}

// entry_for_key
// file hash.c line 374
struct entry * entry_for_key(struct cache *c, const char *key)
{
  unsigned long int pos;
  struct entry *entry;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(key);
  unsigned int return_value_murmurhash2$2;
  return_value_murmurhash2$2=murmurhash2(key, return_value_strlen$1);
  pos = (unsigned long int)return_value_murmurhash2$2 % c->hash->table_size;
  entry = c->hash->entries + (signed long int)pos;
  return entry;
}

// fifo_atexit
// file fiu-rc.c line 278
static void fifo_atexit(void)
{
  unlink(npipe_path_in);
  unlink(npipe_path_out);
}

// fifo_atfork_child
// file fiu-rc.c line 318
static void fifo_atfork_child(void)
{
  _fiu_rc_fifo(npipe_basename);
}

// fiu_disable
// file ../libfiu/fiu-control.h line 118
signed int fiu_disable(const char *name)
{
  _Bool success;
  rec_count = rec_count + 1;
  do
    pthread_rwlock_wrlock(&enabled_fails_lock);
  while((_Bool)0);
  success=wtable_del(enabled_fails, name);
  do
    pthread_rwlock_unlock(&enabled_fails_lock);
  while((_Bool)0);
  rec_count = rec_count - 1;
  return success != (_Bool)0 ? 0 : -1;
}

// fiu_enable
// file fiu.c line 379
signed int fiu_enable(const char *name, signed int failnum, void *failinfo, unsigned int flags)
{
  struct pf_info *pf;
  pf=pf_create(name, failnum, failinfo, flags, (enum pf_method)PF_ALWAYS);
  if(pf == ((struct pf_info *)NULL))
    return -1;

  else
  {
    signed int return_value_insert_pf$1;
    return_value_insert_pf$1=insert_pf(pf);
    return return_value_insert_pf$1;
  }
}

// fiu_enable_external
// file fiu.c line 406
signed int fiu_enable_external(const char *name, signed int failnum, void *failinfo, unsigned int flags, signed int (*external_cb)(const char *, signed int *, void **, unsigned int *))
{
  struct pf_info *pf;
  pf=pf_create(name, failnum, failinfo, flags, (enum pf_method)PF_EXTERNAL);
  if(pf == ((struct pf_info *)NULL))
    return -1;

  else
  {
    pf->minfo.external_cb = external_cb;
    signed int return_value_insert_pf$1;
    return_value_insert_pf$1=insert_pf(pf);
    return return_value_insert_pf$1;
  }
}

// fiu_enable_random
// file fiu.c line 392
signed int fiu_enable_random(const char *name, signed int failnum, void *failinfo, unsigned int flags, float probability)
{
  struct pf_info *pf;
  pf=pf_create(name, failnum, failinfo, flags, (enum pf_method)PF_PROB);
  if(pf == ((struct pf_info *)NULL))
    return -1;

  else
  {
    pf->minfo.probability = probability;
    signed int return_value_insert_pf$1;
    return_value_insert_pf$1=insert_pf(pf);
    return return_value_insert_pf$1;
  }
}

// fiu_enable_stack
// file fiu.c line 421
signed int fiu_enable_stack(const char *name, signed int failnum, void *failinfo, unsigned int flags, void *func, signed int func_pos_in_stack)
{
  struct pf_info *pf;
  if(!(func_pos_in_stack == -1))
    return -1;

  else
  {
    signed int return_value_backtrace_works$1;
    return_value_backtrace_works$1=backtrace_works((void (*)())fiu_enable_stack);
    if(return_value_backtrace_works$1 == 0)
      return -1;

    else
    {
      pf=pf_create(name, failnum, failinfo, flags, (enum pf_method)PF_STACK);
      if(pf == ((struct pf_info *)NULL))
        return -1;

      else
      {
        pf->minfo.stack.func_start = func;
        pf->minfo.stack.func_end=get_func_end(func);
        pf->minfo.stack.func_pos_in_stack = func_pos_in_stack;
        signed int return_value_insert_pf$2;
        return_value_insert_pf$2=insert_pf(pf);
        return return_value_insert_pf$2;
      }
    }
  }
}

// fiu_enable_stack_by_name
// file ../libfiu/fiu-control.h line 109
signed int fiu_enable_stack_by_name(const char *name, signed int failnum, void *failinfo, unsigned int flags, const char *func_name, signed int func_pos_in_stack)
{
  void *fp;
  signed int return_value_backtrace_works$1;
  return_value_backtrace_works$1=backtrace_works((void (*)())fiu_enable_stack_by_name);
  if(return_value_backtrace_works$1 == 0)
    return -1;

  else
  {
    fp=get_func_addr(func_name);
    if(fp == NULL)
      return -1;

    else
    {
      signed int return_value_fiu_enable_stack$2;
      return_value_fiu_enable_stack$2=fiu_enable_stack(name, failnum, failinfo, flags, fp, func_pos_in_stack);
      return return_value_fiu_enable_stack$2;
    }
  }
}

// fiu_fail
// file ../libfiu/fiu.h line 38
signed int fiu_fail(const char *name)
{
  struct pf_info *pf;
  signed int failnum;
  rec_count = rec_count + 1;
  void *return_value_wtable_get$1;
  double return_value_randd$2;
  signed int return_value;
  signed int return_value_should_stack_fail$3;
  if(rec_count >= 2)
  {
    rec_count = rec_count - 1;
    return 0;
  }

  else
  {
    do
      pthread_rwlock_rdlock(&enabled_fails_lock);
    while((_Bool)0);
    if(!(enabled_fails == ((struct wtable *)NULL)))
    {
      return_value_wtable_get$1=wtable_get(enabled_fails, name);
      pf = (struct pf_info *)return_value_wtable_get$1;
      if(!(pf == ((struct pf_info *)NULL)))
      {
        if(!((1u & pf->flags) == 0u))
        {
          pthread_mutex_lock(&pf->lock);
          if(pf->failed_once == (_Bool)0)
            goto __CPROVER_DUMP_L2;

          pthread_mutex_unlock(&pf->lock);
        }

        else
        {

        __CPROVER_DUMP_L2:
          ;
          switch((signed int)pf->method)
          {
            case PF_ALWAYS:
              goto exit_fail;
            case PF_PROB:
            {
              return_value_randd$2=randd();
              if((double)pf->minfo.probability > return_value_randd$2)
                goto exit_fail;

              break;
            }
            case PF_EXTERNAL:
              return_value=pf->minfo.external_cb(pf->name, &pf->failnum, &pf->failinfo, &pf->flags);
            case PF_STACK:
            {
              return_value_should_stack_fail$3=should_stack_fail(pf);
              if(!(return_value_should_stack_fail$3 == 0))
                goto exit_fail;

              break;
            }
            default:
              ;
          }
          if(!((1u & pf->flags) == 0u))
            pthread_mutex_unlock(&pf->lock);

        }
      }

    }

    do

      exit:
        ;
    while((_Bool)0);
    do
      pthread_rwlock_unlock(&enabled_fails_lock);
    while((_Bool)0);
    rec_count = rec_count - 1;
    return 0;
    do

      exit_fail:
        ;
    while((_Bool)0);
    pthread_setspecific(last_failinfo_key, pf->failinfo);
    failnum = pf->failnum;
    if(!((1u & pf->flags) == 0u))
    {
      pf->failed_once = (_Bool)1;
      pthread_mutex_unlock(&pf->lock);
    }

    do
      pthread_rwlock_unlock(&enabled_fails_lock);
    while((_Bool)0);
    rec_count = rec_count - 1;
    return failnum;
  }
}

// fiu_failinfo
// file fiu.c line 352
void * fiu_failinfo(void)
{
  void *return_value_pthread_getspecific$1;
  return_value_pthread_getspecific$1=pthread_getspecific(last_failinfo_key);
  return return_value_pthread_getspecific$1;
}

// fiu_init
// file ../libfiu/fiu.h line 31
signed int fiu_init(unsigned int flags)
{
  rec_count = rec_count + 1;
  do
    pthread_rwlock_wrlock(&enabled_fails_lock);
  while((_Bool)0);
  static signed int initialized = 0;
  if(!(initialized == 0))
  {
    do
      pthread_rwlock_unlock(&enabled_fails_lock);
    while((_Bool)0);
    rec_count = rec_count - 1;
    return 0;
  }

  else
  {
    pthread_key_create(&last_failinfo_key, (void (*)(void *))(void *)0);
    enabled_fails=wtable_create((void (*)(void *))pf_free);
    signed int return_value_pthread_atfork$1;
    return_value_pthread_atfork$1=pthread_atfork((void (*)(void))(void *)0, (void (*)(void))(void *)0, atfork_child);
    if(!(return_value_pthread_atfork$1 == 0))
    {
      do
        pthread_rwlock_unlock(&enabled_fails_lock);
      while((_Bool)0);
      rec_count = rec_count - 1;
      return -1;
    }

    else
    {
      prng_seed();
      initialized = 1;
      do
        pthread_rwlock_unlock(&enabled_fails_lock);
      while((_Bool)0);
      rec_count = rec_count - 1;
      return 0;
    }
  }
}

// fiu_rc_fifo
// file fiu-rc.c line 323
signed int fiu_rc_fifo(const char *basename)
{
  signed int r;
  r=_fiu_rc_fifo(basename);
  if(!(r >= 0))
    return r;

  else
  {
    __builtin_strncpy(npipe_basename, basename, (unsigned long int)4096);
    pthread_atfork((void (*)(void))(void *)0, (void (*)(void))(void *)0, fifo_atfork_child);
    return r;
  }
}

// fiu_rc_string
// file fiu-rc.c line 82
signed int fiu_rc_string(const char *cmd, char ** const error)
{
  char m_cmd[512l];
  char command[512l];
  char parameters[512l];
  __builtin_strncpy(m_cmd, cmd, (unsigned long int)512);
  char *tok = (char *)(void *)0;
  char *state = (char *)(void *)0;
  char *return_value___strtok_r$1;
  return_value___strtok_r$1=__strtok_r(m_cmd, " \t", &state);
  tok = return_value___strtok_r$1;
  unsigned long int return_value_strtoul$4;
  if(tok == ((char *)NULL))
  {
    *error = "Cannot get command";
    return -1;
  }

  else
  {
    __builtin_strncpy(command, tok, (unsigned long int)512);
    char *return_value___strtok_r$2;
    return_value___strtok_r$2=__strtok_r((char *)(void *)0, " \t", &state);
    tok = return_value___strtok_r$2;
    if(tok == ((char *)NULL))
    {
      *error = "Cannot get parameters";
      return -1;
    }

    else
    {
      __builtin_strncpy(parameters, tok, (unsigned long int)512);
      char *fp_name = (char *)(void *)0;
      signed int failnum = 1;
      void *failinfo = (void *)0;
      unsigned int flags = (unsigned int)0;
      double probability = (double)-1;
      char *func_name = (char *)(void *)0;
      signed int func_pos_in_stack = -1;
      char * const token[8l] = { "name", "failnum", "failinfo", "probability", "func_name", "pos_in_stack", "onetime", (char *)(void *)0 };
      char *value;
      char *opts = parameters;
      while(!((signed int)*opts == 0))
      {
        signed int return_value_getsubopt$3;
        return_value_getsubopt$3=getsubopt(&opts, token, &value);
        switch(return_value_getsubopt$3)
        {
          case 0:
          {
            fp_name = value;
            break;
          }
          case 1:
          {
            failnum=atoi(value);
            break;
          }
          case 2:
          {
            return_value_strtoul$4=strtoul(value, (char ** restrict )(void *)0, 10);
            failinfo = (void *)return_value_strtoul$4;
            break;
          }
          case 3:
          {
            probability=strtod(value, (char ** restrict )(void *)0);
            break;
          }
          case 4:
          {
            func_name = value;
            break;
          }
          case 5:
          {
            func_pos_in_stack=atoi(value);
            break;
          }
          case 6:
          {
            flags = flags | (unsigned int)1;
            break;
          }
          default:
          {
            *error = "Unknown parameter";
            return -1;
          }
        }
      }
      signed int tmp_statement_expression$15;
      unsigned long int fiu_rc_string$$1$$3$$__s1_len;
      unsigned long int fiu_rc_string$$1$$3$$__s2_len;
      signed int return_value___builtin_strcmp$16;
      return_value___builtin_strcmp$16=__builtin_strcmp(command, "disable");
      tmp_statement_expression$15 = return_value___builtin_strcmp$16;
      if(tmp_statement_expression$15 == 0)
      {
        signed int return_value_fiu_disable$5;
        return_value_fiu_disable$5=fiu_disable(fp_name);
        return return_value_fiu_disable$5;
      }

      else
      {
        signed int tmp_statement_expression$13;
        unsigned long int fiu_rc_string$$1$$5$$__s1_len;
        unsigned long int fiu_rc_string$$1$$5$$__s2_len;
        signed int return_value___builtin_strcmp$14;
        return_value___builtin_strcmp$14=__builtin_strcmp(command, "enable");
        tmp_statement_expression$13 = return_value___builtin_strcmp$14;
        if(tmp_statement_expression$13 == 0)
        {
          signed int return_value_fiu_enable$6;
          return_value_fiu_enable$6=fiu_enable(fp_name, failnum, failinfo, flags);
          return return_value_fiu_enable$6;
        }

        else
        {
          signed int tmp_statement_expression$11;
          unsigned long int fiu_rc_string$$1$$7$$__s1_len;
          unsigned long int fiu_rc_string$$1$$7$$__s2_len;
          signed int return_value___builtin_strcmp$12;
          return_value___builtin_strcmp$12=__builtin_strcmp(command, "enable_random");
          tmp_statement_expression$11 = return_value___builtin_strcmp$12;
          if(tmp_statement_expression$11 == 0)
          {
            signed int return_value_fiu_enable_random$7;
            return_value_fiu_enable_random$7=fiu_enable_random(fp_name, failnum, failinfo, flags, (float)probability);
            return return_value_fiu_enable_random$7;
          }

          else
          {
            signed int tmp_statement_expression$9;
            unsigned long int __s1_len;
            unsigned long int __s2_len;
            signed int return_value___builtin_strcmp$10;
            return_value___builtin_strcmp$10=__builtin_strcmp(command, "enable_stack_by_name");
            tmp_statement_expression$9 = return_value___builtin_strcmp$10;
            if(tmp_statement_expression$9 == 0)
            {
              signed int return_value_fiu_enable_stack_by_name$8;
              return_value_fiu_enable_stack_by_name$8=fiu_enable_stack_by_name(fp_name, failnum, failinfo, flags, func_name, func_pos_in_stack);
              return return_value_fiu_enable_stack_by_name$8;
            }

            else
            {
              *error = "Unknown command";
              return -1;
            }
          }
        }
      }
    }
  }
}

// fp_to_voidp
// file backtrace.c line 89
static void * fp_to_voidp(void (*funcp)())
{
  unsigned char **p = (unsigned char **)&funcp;
  return (void *)*p;
}

// func1
// file test-enable_stack_by_name.c line 9
void func1(signed int should_fail)
{
  signed int failed;
  signed int return_value_fiu_fail$1;
  return_value_fiu_fail$1=fiu_fail("fp-1");
  failed = (signed int)(return_value_fiu_fail$1 != 0);
  /* assertion failed == should_fail */
  assert(failed == should_fail);
}

// func2
// file test-enable_stack_by_name.c line 24
void func2(signed int should_fail)
{
  func1(should_fail);
}

// get_backtrace
// file internal.h line 13
signed int get_backtrace(void *buffer, signed int size)
{
  signed int return_value_backtrace$1;
  return_value_backtrace$1=backtrace((void **)buffer, size);
  return return_value_backtrace$1;
}

// get_func_addr
// file internal.h line 23
void * get_func_addr(const char *func_name)
{
  void *return_value_dlsym$1;
  return_value_dlsym$1=dlsym((void *)0, func_name);
  return return_value_dlsym$1;
}

// get_func_end
// file internal.h line 17
void * get_func_end(void *func)
{
  signed int r;
  struct anonymous$1 dl_info;
  struct anonymous$2 *elf_info;
  r=dladdr1(func, &dl_info, (void **)&elf_info, 1);
  if(r == 0)
    return (void *)0;

  else
    if(elf_info == ((struct anonymous$2 *)NULL))
      return (void *)0;

    else
      if(dl_info.dli_saddr == NULL)
        return (void *)0;

      else
        return (void *)((unsigned char *)func + (signed long int)elf_info->st_size);
}

// get_func_start
// file internal.h line 20
void * get_func_start(void *pc)
{
  signed int r;
  struct anonymous$1 info;
  r=dladdr(pc, &info);
  if(r == 0)
    return (void *)0;

  else
    return info.dli_saddr;
}

// hash_create
// file hash.h line 12
struct hash * hash_create(void (*destructor)(void *))
{
  struct hash *h;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct hash) /*32ul*/ );
  h = (struct hash *)return_value_malloc$1;
  if(h == ((struct hash *)NULL))
    return (struct hash *)(void *)0;

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct entry) /*24ul*/  * (unsigned long int)10);
    h->entries = (struct entry *)return_value_malloc$2;
    if(h->entries == ((struct entry *)NULL))
    {
      free((void *)h);
      return (struct hash *)(void *)0;
    }

    else
    {
      memset((void *)h->entries, 0, sizeof(struct entry) /*24ul*/  * (unsigned long int)10);
      h->table_size = (unsigned long int)10;
      h->nentries = (unsigned long int)0;
      if(destructor == ((void (*)(void *))NULL))
        destructor = dumb_destructor;

      h->destructor = destructor;
      return h;
    }
  }
}

// hash_del
// file hash.h line 17
_Bool hash_del(struct hash *h, const char *key)
{
  unsigned long int pos;
  struct entry *entry;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(key);
  unsigned int return_value_murmurhash2$2;
  return_value_murmurhash2$2=murmurhash2(key, return_value_strlen$1);
  pos = (unsigned long int)return_value_murmurhash2$2 % h->table_size;
  signed int tmp_statement_expression$3;
  do
  {
    entry = h->entries + (signed long int)pos;
    if((signed int)entry->in_use == NEVER)
      return (_Bool)0;

    else
    {
      _Bool tmp_if_expr$5;
      if((signed int)entry->in_use == IN_USE)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$4;
        return_value___builtin_strcmp$4=__builtin_strcmp(key, entry->key);
        tmp_statement_expression$3 = return_value___builtin_strcmp$4;
        tmp_if_expr$5 = tmp_statement_expression$3 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$5 = (_Bool)0;
      if(tmp_if_expr$5)
      {
        free((void *)entry->key);
        h->destructor(entry->value);
        entry->key = (char *)(void *)0;
        entry->value = (void *)0;
        entry->in_use = (enum used_as)REMOVED;
      }

      else
        pos = (pos + (unsigned long int)1) % h->table_size;
    }
  }
  while((_Bool)1);
  if(h->table_size >= 11ul)
  {
    if((float)h->nentries / (float)h->table_size < 5.000000e-1f)
    {
      _Bool return_value_resize_table$6;
      return_value_resize_table$6=resize_table$link1(h, (unsigned long int)((double)h->table_size * 0.8));
      if(return_value_resize_table$6 == (_Bool)0)
        return (_Bool)0;

    }

  }

  return (_Bool)1;
}

// hash_free
// file hash.h line 13
void hash_free(struct hash *h)
{
  unsigned long int i;
  struct entry *entry;
  i = (unsigned long int)0;
  for( ; !(i >= h->table_size); i = i + 1ul)
  {
    entry = h->entries + (signed long int)i;
    if((signed int)entry->in_use == IN_USE)
    {
      h->destructor(entry->value);
      free((void *)entry->key);
    }

  }
  free((void *)h->entries);
  free((void *)h);
}

// hash_get
// file hash.h line 15
void * hash_get(struct hash *h, const char *key)
{
  unsigned long int pos;
  struct entry *entry;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(key);
  unsigned int return_value_murmurhash2$2;
  return_value_murmurhash2$2=murmurhash2(key, return_value_strlen$1);
  pos = (unsigned long int)return_value_murmurhash2$2 % h->table_size;
  signed int tmp_statement_expression$3;
  do
  {
    entry = h->entries + (signed long int)pos;
    if((signed int)entry->in_use == NEVER)
      return (void *)0;

    else
    {
      _Bool tmp_if_expr$5;
      if((signed int)entry->in_use == IN_USE)
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$4;
        return_value___builtin_strcmp$4=__builtin_strcmp(key, entry->key);
        tmp_statement_expression$3 = return_value___builtin_strcmp$4;
        tmp_if_expr$5 = tmp_statement_expression$3 == 0 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$5 = (_Bool)0;
      if(tmp_if_expr$5)
        return entry->value;

      else
        pos = (pos + (unsigned long int)1) % h->table_size;
    }
  }
  while((_Bool)1);
  return (void *)0;
}

// hash_set
// file hash.h line 16
_Bool hash_set(struct hash *h, const char *key, void *value)
{
  if((double)((float)h->nentries / (float)h->table_size) > 0.7)
  {
    _Bool return_value_resize_table$1;
    return_value_resize_table$1=resize_table$link1(h, (unsigned long int)((double)h->table_size * 1.3));
    if(return_value_resize_table$1 == (_Bool)0)
      return (_Bool)0;

  }

  char *return_value_strdup$2;
  return_value_strdup$2=strdup(key);
  _Bool return_value__hash_set$3;
  return_value__hash_set$3=_hash_set(h, return_value_strdup$2, value);
  return return_value__hash_set$3;
}

// insert_pf
// file fiu.c line 364
static signed int insert_pf(struct pf_info *pf)
{
  _Bool success;
  rec_count = rec_count + 1;
  do
    pthread_rwlock_wrlock(&enabled_fails_lock);
  while((_Bool)0);
  success=wtable_set(enabled_fails, pf->name, (void *)pf);
  do
    pthread_rwlock_unlock(&enabled_fails_lock);
  while((_Bool)0);
  rec_count = rec_count - 1;
  return success != (_Bool)0 ? 0 : -1;
}

// is_wildcard
// file wtable.c line 134
static _Bool is_wildcard(const char *s, unsigned long int len)
{
  return (signed int)s[(signed long int)(len - (unsigned long int)1)] == 42;
}

// main
// file test-enable_stack_by_name.c line 30
signed int main(void)
{
  signed int r;
  fiu_init((unsigned int)0);
  r=fiu_enable_stack_by_name("fp-1", 1, (void *)0, (unsigned int)0, "func2", -1);
  if(!(r == 0))
  {
    printf("NOTE: fiu_enable_stack_by_name() failed, skipping test\n");
    return 0;
  }

  else
  {
    func1(0);
    func2(1);
    fiu_disable("fp-1");
    func1(0);
    func2(0);
    return 0;
  }
}

// murmurhash2
// file hash.c line 26
static unsigned int murmurhash2(const char *key, unsigned long int len)
{
  const unsigned int m = (const unsigned int)0x5bd1e995;
  const signed int r = 24;
  const unsigned int seed = (const unsigned int)0x34a4b627;
  unsigned int h = (unsigned int)((unsigned long int)seed ^ len);
  while(len >= 4ul)
  {
    unsigned int k = *((unsigned int *)key);
    k = k * m;
    k = k ^ k >> r;
    k = k * m;
    h = h * m;
    h = h ^ k;
    key = key + (signed long int)4;
    len = len - (unsigned long int)4;
  }
  switch(len)
  {
    case (unsigned long int)3:
      h = h ^ (unsigned int)((signed int)key[(signed long int)2] << 16);
    case (unsigned long int)2:
      h = h ^ (unsigned int)((signed int)key[(signed long int)1] << 8);
    case (unsigned long int)1:
    {
      h = h ^ (unsigned int)key[(signed long int)0];
      h = h * m;
    }
  }
  h = h ^ h >> 13;
  h = h * m;
  h = h ^ h >> 15;
  return h;
}

// pc_in_func
// file fiu.c line 145
static signed int pc_in_func(struct pf_info *pf, void *pc)
{
  if(!(pf->minfo.stack.func_end == NULL))
  {
    _Bool tmp_if_expr$1;
    if(pc >= pf->minfo.stack.func_start)
      tmp_if_expr$1 = pc <= pf->minfo.stack.func_end ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    return (signed int)tmp_if_expr$1;
  }

  else
  {
    void *return_value_get_func_start$2;
    return_value_get_func_start$2=get_func_start(pc);
    return (signed int)(pf->minfo.stack.func_start == return_value_get_func_start$2);
  }
}

// pf_create
// file fiu.c line 69
static struct pf_info * pf_create(const char *name, signed int failnum, void *failinfo, unsigned int flags, enum pf_method method)
{
  struct pf_info *pf;
  rec_count = rec_count + 1;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct pf_info) /*104ul*/ );
  pf = (struct pf_info *)return_value_malloc$1;
  unsigned long int return_value_strlen$2;
  if(!(pf == ((struct pf_info *)NULL)))
  {
    pf->name=strdup(name);
    if(pf->name == ((char *)NULL))
    {
      free((void *)pf);
      pf = (struct pf_info *)(void *)0;
    }

    else
    {
      return_value_strlen$2=strlen(name);
      pf->namelen = (unsigned int)return_value_strlen$2;
      pf->failnum = failnum;
      pf->failinfo = failinfo;
      pf->flags = flags;
      pf->method = method;
      pthread_mutex_init(&pf->lock, (const union anonymous$4 *)(void *)0);
      pf->failed_once = (_Bool)0;
    }
  }


exit:
  ;
  rec_count = rec_count - 1;
  return pf;
}

// pf_free
// file fiu.c line 102
static void pf_free(struct pf_info *pf)
{
  free((void *)pf->name);
  pthread_mutex_destroy(&pf->lock);
  free((void *)pf);
}

// prng_seed
// file fiu.c line 195
static void prng_seed(void)
{
  struct timeval tv;
  gettimeofday(&tv, (void *)0);
  randd_xn = (unsigned int)tv.tv_usec;
}

// randd
// file fiu.c line 204
static double randd(void)
{
  randd_xn = (unsigned int)1103515245 * randd_xn + (unsigned int)12345;
  return (double)randd_xn / (double)((unsigned int)0x7fffffff * 2U + 1U);
}

// rc_do_command
// file fiu-rc.c line 196
static signed int rc_do_command(signed int fdr, signed int fdw)
{
  signed int len;
  signed int r;
  signed int reply_len;
  char buf[512l];
  char reply[512l];
  char *error;
  len=read_line(fdr, buf);
  if(!(len >= 1))
    return len;

  else
  {
    r=fiu_rc_string(buf, &error);
    reply_len=snprintf(reply, (unsigned long int)512, "%d\n", r);
    signed long int return_value_write$1;
    return_value_write$1=write(fdw, (const void *)reply, (unsigned long int)reply_len);
    r = (signed int)return_value_write$1;
    if(!(r >= 1))
      return r;

    else
      return len;
  }
}

// rc_fifo_thread
// file fiu-rc.c line 231
static void * rc_fifo_thread(void *unused)
{
  signed int fdr;
  signed int fdw;
  signed int r;
  signed int errcount;
  rec_count = rec_count + 1;
  errcount = 0;

reopen:
  ;
  _Bool tmp_if_expr$5;
  signed int *return_value___errno_location$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  signed int *return_value___errno_location$1;
  while((_Bool)1)
  {
    if(errcount >= 11)
    {
      fprintf(stderr, "libfiu: Too many errors in remote control thread, shutting down\n");
      return (void *)0;
    }

    fdr=open(npipe_path_in, 00);
    if(!(fdr >= 0))
      return (void *)0;

    fdw=open(npipe_path_out, 01);
    if(!(fdw >= 0))
    {
      close(fdr);
      return (void *)0;
    }


  __CPROVER_DUMP_L4:
    ;
    r=rc_do_command(fdr, fdw);
    if(!(r >= 0))
    {
      return_value___errno_location$4=__errno_location();
      tmp_if_expr$5 = *return_value___errno_location$4 != 32 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
    {
      perror("libfiu: Error reading from remote control");
      errcount = errcount + 1;
      close(fdr);
      close(fdw);
      goto reopen;
    }

    if(r == 0)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      if(!(r >= 0))
      {
        return_value___errno_location$1=__errno_location();
        tmp_if_expr$2 = *return_value___errno_location$1 == 32 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$2 = (_Bool)0;
      tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr$3)
      break;

    close(fdr);
    close(fdw);
  }
  goto __CPROVER_DUMP_L4;
}

// read_line
// file fiu-rc.c line 35
static signed int read_line(signed int fd, char *buf)
{
  signed int r;
  char c;
  unsigned int len;
  c = (char)0;
  len = (unsigned int)0;
  memset((void *)buf, 0, (unsigned long int)512);
  do
  {
    signed long int return_value_read$1;
    return_value_read$1=read(fd, (void *)&c, (unsigned long int)1);
    r = (signed int)return_value_read$1;
    if(!(r >= 0))
      return -1;

    if(r == 0)
      break;

    len = len + (unsigned int)r;
    *buf = c;
    buf = buf + 1l;
  }
  while(!((signed int)c == 0) && !((signed int)c == 10) && !(len >= 512u));
  if((signed int)c == 10 && len >= 1u)
  {
    *(buf - (signed long int)1) = (char)0;
    len = len - 1u;
  }

  return (signed int)len;
}

// resize_table
// file wtable.c line 262
static _Bool resize_table(struct wtable *t, unsigned long int new_size)
{
  unsigned long int i;
  struct wentry *old_wildcards;
  struct wentry *e;
  unsigned long int old_size;
  if(!(new_size >= 10ul))
    return (_Bool)1;

  else
  {
    old_wildcards = t->wildcards;
    old_size = t->ws_size;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct wentry) /*32ul*/  * new_size);
    t->wildcards = (struct wentry *)return_value_malloc$1;
    if(t->wildcards == ((struct wentry *)NULL))
      return (_Bool)0;

    else
    {
      memset((void *)t->wildcards, 0, sizeof(struct wentry) /*32ul*/  * new_size);
      t->ws_size = new_size;
      t->ws_used_count = (unsigned long int)0;
      i = (unsigned long int)0;
      for( ; !(i >= old_size); i = i + 1ul)
      {
        e = old_wildcards + (signed long int)i;
        if(!(e->in_use == (_Bool)0))
          wildcards_set(t, e->key, e->value);

      }
      free((void *)old_wildcards);
      cache_resize(t->wcache, new_size);
      return (_Bool)1;
    }
  }
}

// resize_table$link1
// file hash.c line 195
static _Bool resize_table$link1(struct hash *h, unsigned long int new_size$link1)
{
  unsigned long int i$link1;
  struct entry *old_entries;
  struct entry *e$link1;
  unsigned long int old_size$link1;
  if(!(new_size$link1 >= 10ul))
    return (_Bool)1;

  else
  {
    old_entries = h->entries;
    old_size$link1 = h->table_size;
    void *return_value_malloc$1$link1;
    return_value_malloc$1$link1=malloc(sizeof(struct entry) /*24ul*/  * new_size$link1);
    h->entries = (struct entry *)return_value_malloc$1$link1;
    if(h->entries == ((struct entry *)NULL))
      return (_Bool)0;

    else
    {
      memset((void *)h->entries, 0, sizeof(struct entry) /*24ul*/  * new_size$link1);
      h->table_size = new_size$link1;
      h->nentries = (unsigned long int)0;
      i$link1 = (unsigned long int)0;
      for( ; !(i$link1 >= old_size$link1); i$link1 = i$link1 + 1ul)
      {
        e$link1 = old_entries + (signed long int)i$link1;
        if((signed int)e$link1->in_use == IN_USE)
          _hash_set(h, e$link1->key, e$link1->value);

      }
      free((void *)old_entries);
      return (_Bool)1;
    }
  }
}

// should_stack_fail
// file fiu.c line 159
static signed int should_stack_fail(struct pf_info *pf)
{
  signed int nptrs;
  signed int i;
  void *buffer[100l];
  nptrs=get_backtrace((void *)buffer, 100);
  i = 0;
  for( ; !(i >= nptrs); i = i + 1)
  {
    signed int return_value_pc_in_func$2;
    return_value_pc_in_func$2=pc_in_func(pf, buffer[(signed long int)i]);
    if(!(return_value_pc_in_func$2 == 0))
    {
      _Bool tmp_if_expr$1;
      if(pf->minfo.stack.func_pos_in_stack == -1)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = i == pf->minfo.stack.func_pos_in_stack ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        return 1;

    }

  }
  return 0;
}

// strlast
// file wtable.c line 119
static unsigned int strlast(const char *s1, const char *s2)
{
  unsigned int i = (unsigned int)0;
  for( ; !((signed int)*s1 == 0); s2 = s2 + 1l)
  {
    if((signed int)*s2 == 0)
      break;

    if(!(*s1 == *s2))
      break;

    i = i + 1u;
    s1 = s1 + 1l;
  }
  return i;
}

// wildcards_find_entry
// file wtable.c line 172
static struct wentry * wildcards_find_entry(struct wtable *t, const char *key, _Bool exact, struct wentry **first_free)
{
  unsigned long int key_len;
  unsigned long int pos;
  struct wentry *entry;
  _Bool found_free = (_Bool)0;
  key_len=strlen(key);
  pos = (unsigned long int)0;
  _Bool return_value_ws_matches_s$1;
  for( ; !(pos >= t->ws_size); pos = pos + 1ul)
  {
    entry = t->wildcards + (signed long int)pos;
    if(entry->in_use == (_Bool)0)
    {
      if(found_free == (_Bool)0 && !(first_free == ((struct wentry **)NULL)))
      {
        *first_free = entry;
        found_free = (_Bool)1;
      }

      goto __CPROVER_DUMP_L6;
    }

    else
    {
      return_value_ws_matches_s$1=ws_matches_s(entry->key, entry->key_len, key, key_len, exact);
      if(!(return_value_ws_matches_s$1 == (_Bool)0))
        return entry;

    }

  __CPROVER_DUMP_L6:
    ;
  }
  return (struct wentry *)(void *)0;
}

// wildcards_set
// file wtable.c line 233
static _Bool wildcards_set(struct wtable *t, char *key, void *value)
{
  struct wentry *entry;
  struct wentry *first_free = (struct wentry *)(void *)0;
  entry=wildcards_find_entry(t, key, (_Bool)1, &first_free);
  if(!(entry == ((struct wentry *)NULL)))
  {
    free((void *)entry->key);
    entry->key = key;
    t->destructor(entry->value);
    entry->value = value;
    return (_Bool)1;
  }

  else
    if(!(first_free == ((struct wentry *)NULL)))
    {
      first_free->key = key;
      first_free->key_len=strlen(key);
      first_free->value = value;
      first_free->in_use = (_Bool)1;
      t->ws_used_count = t->ws_used_count + 1ul;
      return (_Bool)1;
    }

  return (_Bool)0;
}

// ws_matches_s
// file wtable.c line 145
static _Bool ws_matches_s(const char *ws, unsigned long int ws_len, const char *s, unsigned long int s_len, _Bool exact)
{
  _Bool return_value_is_wildcard$4;
  if(s == ((const char *)NULL) || ws == ((const char *)NULL))
    return (_Bool)0;

  else
  {
    _Bool tmp_if_expr$5;
    if(!(exact == (_Bool)0))
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      return_value_is_wildcard$4=is_wildcard(ws, ws_len);
      tmp_if_expr$5 = !(return_value_is_wildcard$4 != (_Bool)0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
    {
      if(!(ws_len == s_len))
        return (_Bool)0;

      signed int tmp_statement_expression$1;
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp$2;
      return_value___builtin_strcmp$2=__builtin_strcmp(ws, s);
      tmp_statement_expression$1 = return_value___builtin_strcmp$2;
      return tmp_statement_expression$1 == 0;
    }

    else
    {
      unsigned int return_value_strlast$3;
      return_value_strlast$3=strlast(ws, s);
      return (unsigned long int)return_value_strlast$3 >= ws_len - (unsigned long int)1;
    }
  }
}

// wtable_create
// file wtable.h line 16
struct wtable * wtable_create(void (*destructor)(void *))
{
  struct wtable *t;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct wtable) /*48ul*/ );
  t = (struct wtable *)return_value_malloc$1;
  void *return_value_malloc$2;
  if(t == ((struct wtable *)NULL))
    return (struct wtable *)(void *)0;

  else
  {
    t->wildcards = (struct wentry *)(void *)0;
    t->wcache = (struct cache *)(void *)0;
    t->finals=hash_create(destructor);
    if(!(t->finals == ((struct hash *)NULL)))
    {
      return_value_malloc$2=malloc(sizeof(struct wentry) /*32ul*/  * (unsigned long int)10);
      t->wildcards = (struct wentry *)return_value_malloc$2;
      if(t->wildcards == ((struct wentry *)NULL))
        goto error;

      memset((void *)t->wildcards, 0, sizeof(struct wentry) /*32ul*/  * (unsigned long int)10);
      t->wcache=cache_create();
      if(t->wcache == ((struct cache *)NULL))
        goto error;

      t->ws_size = (unsigned long int)10;
      t->ws_used_count = (unsigned long int)0;
      t->destructor = destructor;
      return t;
    }

    else
    {

    error:
      ;
      if(!(t->finals == ((struct hash *)NULL)))
        hash_free(t->finals);

      if(!(t->wcache == ((struct cache *)NULL)))
        cache_free(t->wcache);

      free((void *)t->wildcards);
      free((void *)t);
      return (struct wtable *)(void *)0;
    }
  }
}

// wtable_del
// file wtable.h line 21
_Bool wtable_del(struct wtable *t, const char *key)
{
  struct wentry *entry;
  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(key);
  _Bool return_value_is_wildcard$4;
  return_value_is_wildcard$4=is_wildcard(key, return_value_strlen$3);
  if(!(return_value_is_wildcard$4 == (_Bool)0))
  {
    entry=wildcards_find_entry(t, key, (_Bool)1, (struct wentry **)(void *)0);
    if(entry == ((struct wentry *)NULL))
      return (_Bool)0;

    free((void *)entry->key);
    entry->key = (char *)(void *)0;
    entry->key_len = (unsigned long int)0;
    t->destructor(entry->value);
    entry->value = (void *)0;
    entry->in_use = (_Bool)0;
    t->ws_used_count = t->ws_used_count - 1ul;
    if(t->ws_size >= 11ul)
    {
      if((double)((float)t->ws_used_count / (float)t->ws_size) < 0.6)
      {
        _Bool return_value_resize_table$1;
        return_value_resize_table$1=resize_table(t, t->ws_used_count + (unsigned long int)3);
        if(return_value_resize_table$1 == (_Bool)0)
          return (_Bool)0;

      }

    }

    cache_invalidate(t->wcache);
    return (_Bool)1;
  }

  else
  {
    _Bool return_value_hash_del$2;
    return_value_hash_del$2=hash_del(t->finals, key);
    return return_value_hash_del$2;
  }
}

// wtable_free
// file wtable.c line 98
void wtable_free(struct wtable *t)
{
  signed int i;
  struct wentry *entry;
  hash_free(t->finals);
  cache_free(t->wcache);
  i = 0;
  for( ; !((unsigned long int)i >= t->ws_size); i = i + 1)
  {
    entry = t->wildcards + (signed long int)i;
    if(!(entry->in_use == (_Bool)0))
    {
      t->destructor(entry->value);
      free((void *)entry->key);
    }

  }
  free((void *)t->wildcards);
  free((void *)t);
}

// wtable_get
// file wtable.h line 19
void * wtable_get(struct wtable *t, const char *key)
{
  void *value;
  struct wentry *entry;
  value=hash_get(t->finals, key);
  if(!(value == NULL))
    return value;

  else
  {
    _Bool return_value_cache_get$1;
    return_value_cache_get$1=cache_get(t->wcache, key, &value);
    if(!(return_value_cache_get$1 == (_Bool)0))
      return value;

    else
    {
      entry=wildcards_find_entry(t, key, (_Bool)0, (struct wentry **)(void *)0);
      if(!(entry == ((struct wentry *)NULL)))
      {
        cache_set(t->wcache, key, entry->value);
        return entry->value;
      }

      else
      {
        cache_set(t->wcache, key, (void *)0);
        return (void *)0;
      }
    }
  }
}

// wtable_set
// file wtable.h line 20
_Bool wtable_set(struct wtable *t, const char *key, void *value)
{
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(key);
  _Bool return_value_is_wildcard$6;
  return_value_is_wildcard$6=is_wildcard(key, return_value_strlen$5);
  if(!(return_value_is_wildcard$6 == (_Bool)0))
  {
    if(!(t->ws_size + -t->ws_used_count >= 2ul))
    {
      _Bool return_value_resize_table$1;
      return_value_resize_table$1=resize_table(t, (unsigned long int)((double)t->ws_size * 1.3 + (double)1));
      if(return_value_resize_table$1 == (_Bool)0)
        return (_Bool)0;

    }

    cache_invalidate(t->wcache);
    char *return_value_strdup$2;
    return_value_strdup$2=strdup(key);
    _Bool return_value_wildcards_set$3;
    return_value_wildcards_set$3=wildcards_set(t, return_value_strdup$2, value);
    return return_value_wildcards_set$3;
  }

  else
  {
    _Bool return_value_hash_set$4;
    return_value_hash_set$4=hash_set(t->finals, key, value);
    return return_value_hash_set$4;
  }
}

