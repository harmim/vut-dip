// tag-#anon#ST[*{SYM#tag-stringlist#}$SYM#tag-stringlist#$'lines'||S64'mtime'||ARR4097{S8}$S8$'file'||U56'$pad0'|]
// file configfile.h line 31
struct anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

// tag-SMBC_internal_data
// file /usr/include/samba-4.0/libsmbclient.h line 3155
struct SMBC_internal_data;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-_SMBCCTX
// file /usr/include/samba-4.0/libsmbclient.h line 263
struct _SMBCCTX;

// tag-_SMBCFILE
// file /usr/include/samba-4.0/libsmbclient.h line 258
struct _SMBCFILE;

// tag-_SMBCSRV
// file /usr/include/samba-4.0/libsmbclient.h line 253
struct _SMBCSRV;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-_smbc_callbacks
// file /usr/include/samba-4.0/libsmbclient.h line 3041
struct _smbc_callbacks;

// tag-_smbc_options
// file /usr/include/samba-4.0/libsmbclient.h line 3146
struct _smbc_options;

// tag-fusesmb_cache_opt
// file cache.c line 49
struct fusesmb_cache_opt;

// tag-hash_t
// file hash.h line 149
struct hash_t;

// tag-hnode_t
// file hash.h line 73
struct hnode_t;

// tag-hscan_t
// file hash.h line 179
struct hscan_t;

// tag-print_job_info
// file /usr/include/samba-4.0/libsmbclient.h line 220
struct print_job_info;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-smbc_dirent
// file /usr/include/samba-4.0/libsmbclient.h line 109
struct smbc_dirent;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-stringlist
// file stringlist.h line 32
struct stringlist;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// __xstat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 412
extern signed int __xstat(signed int, const char *, struct stat *);
// bsearch
// file /usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h line 20
static inline void * bsearch(const void *__key, const void *__base, unsigned long int __nmemb, unsigned long int __size, signed int (*__compar)(const void *, const void *));
// bsearch::__compar$object
// 
signed int __compar$object(const void *, const void *);
// cache_servers
// file cache.c line 385
signed int cache_servers(struct _SMBCCTX *ctx);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// clear_table
// file hash.c line 120
static void clear_table(struct hash_t *hash);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// compute_bits
// file hash.c line 78
static void compute_bits(void);
// compute_mask
// file hash.c line 108
static unsigned long int compute_mask(unsigned long int size);
// config_free
// file configfile.c line 347
void config_free(struct anonymous$0 *cf);
// config_has_section
// file configfile.c line 161
signed int config_has_section(struct anonymous$0 *cf, const char *section);
// config_init
// file configfile.h line 37
signed int config_init(struct anonymous$0 *cf, const char *file);
// config_read_bool
// file configfile.h line 43
signed int config_read_bool(struct anonymous$0 *cf, const char *section, const char *key, signed int *value);
// config_read_file
// file configfile.c line 69
static signed int config_read_file(struct anonymous$0 *cf);
// config_read_int
// file configfile.c line 224
signed int config_read_int(struct anonymous$0 *cf, const char *section, const char *key, signed int *value);
// config_read_section_keys
// file configfile.c line 299
signed int config_read_section_keys(struct anonymous$0 *cf, const char *section, struct stringlist **value);
// config_read_string
// file configfile.h line 41
signed int config_read_string(struct anonymous$0 *cf, const char *section, const char *key, char **value);
// config_read_stringlist
// file configfile.h line 44
signed int config_read_stringlist(struct anonymous$0 *cf, const char *section, const char *key, struct stringlist **value, char sep);
// config_reload_ifneeded
// file configfile.c line 148
signed int config_reload_ifneeded(struct anonymous$0 *cf);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 283
extern struct _IO_FILE * fopen(const char *, const char *);
// fork
// file /usr/include/unistd.h line 756
extern signed int fork(void);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fusesmb_auth_fn
// file smbctx.c line 89
static void fusesmb_auth_fn(const char *server, const char *share, char *workgroup, signed int wgmaxlen, char *username, signed int unmaxlen, char *password, signed int pwmaxlen);
// fusesmb_cache_auth_fn
// file smbctx.c line 170
static void fusesmb_cache_auth_fn(const char *server, const char *share, char *workgroup, signed int wgmaxlen, char *username, signed int unmaxlen, char *password, signed int pwmaxlen);
// fusesmb_cache_new_context
// file smbctx.h line 26
struct _SMBCCTX * fusesmb_cache_new_context(struct anonymous$0 *cf);
// fusesmb_context
// file smbctx.c line 248
static struct _SMBCCTX * fusesmb_context(void (*fn)(const char *, const char *, char *, signed int, char *, signed int, char *, signed int));
// fusesmb_context::fn$object
// 
void fn$object(const char *, const char *, char *, signed int, char *, signed int, char *, signed int);
// fusesmb_new_context
// file smbctx.c line 276
struct _SMBCCTX * fusesmb_new_context(struct anonymous$0 *cf, union anonymous *mutex);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// grow_table
// file hash.c line 156
static void grow_table(struct hash_t *hash);
// hash_alloc_insert
// file hash.h line 199
extern signed int hash_alloc_insert(struct hash_t *hash, const void *hash_key, void *hash_data);
// hash_comp_default
// file hash.c line 842
static signed int hash_comp_default(const void *key1, const void *key2);
// hash_count
// file hash.c line 808
extern unsigned long int hash_count(struct hash_t *hash);
// hash_create
// file hash.h line 189
extern struct hash_t * hash_create(unsigned long int hash_maxcount, signed int (*compfun)(const void *, const void *), unsigned long int (*hashfun)(const void *));
// hash_create::compfun$object
// 
signed int compfun$object(const void *, const void *);
// hash_create::hashfun$object
// 
unsigned long int hashfun$object(const void *);
// hash_delete
// file hash.c line 590
extern struct hnode_t * hash_delete(struct hash_t *hash, struct hnode_t *node);
// hash_delete_free
// file hash.c line 635
extern void hash_delete_free(struct hash_t *hash, struct hnode_t *node);
// hash_destroy
// file hash.h line 191
extern void hash_destroy(struct hash_t *hash);
// hash_free
// file hash.c line 364
extern void hash_free(struct hash_t *hash);
// hash_free_nodes
// file hash.c line 346
extern void hash_free_nodes(struct hash_t *hash);
// hash_fun_default
// file hash.c line 819
static unsigned long int hash_fun_default(const void *hash_key);
// hash_init
// file hash.c line 398
extern struct hash_t * hash_init(struct hash_t *hash, unsigned long int hash_maxcount, signed int (*compfun)(const void *, const void *), unsigned long int (*hashfun)(const void *), struct hnode_t **hash_table, unsigned long int hash_nchains);
// hash_init::compfun$object
// 
signed int compfun$object(const void *, const void *);
// hash_init::hashfun$object
// 
unsigned long int hashfun$object(const void *);
// hash_insert
// file hash.c line 518
extern void hash_insert(struct hash_t *hash, struct hnode_t *node, const void *hash_key);
// hash_isempty
// file hash.c line 737
extern signed int hash_isempty(struct hash_t *hash);
// hash_isfull
// file hash.c line 726
extern signed int hash_isfull(struct hash_t *hash);
// hash_lookup
// file hash.h line 197
extern struct hnode_t * hash_lookup(struct hash_t *hash, const void *hash_key);
// hash_scan_begin
// file hash.h line 211
extern void hash_scan_begin(struct hscan_t *scan, struct hash_t *hash);
// hash_scan_delete
// file hash.c line 646
extern struct hnode_t * hash_scan_delete(struct hash_t *hash, struct hnode_t *node);
// hash_scan_delfree
// file hash.h line 214
extern void hash_scan_delfree(struct hash_t *hash, struct hnode_t *node);
// hash_scan_next
// file hash.h line 212
extern struct hnode_t * hash_scan_next(struct hscan_t *scan);
// hash_set_allocator
// file hash.c line 330
extern void hash_set_allocator(struct hash_t *hash, struct hnode_t * (*al)(void *), void (*fr)(struct hnode_t *, void *), void *hash_context);
// hash_set_allocator::al$object
// 
struct hnode_t * al$object(void *);
// hash_set_allocator::fr$object
// 
void fr$object(struct hnode_t *, void *);
// hash_size
// file hash.c line 814
extern unsigned long int hash_size(struct hash_t *hash);
// hash_verify
// file hash.c line 691
extern signed int hash_verify(struct hash_t *hash);
// hnode_alloc
// file hash.c line 742
static struct hnode_t * hnode_alloc(void *hash_context);
// hnode_create
// file hash.c line 759
extern struct hnode_t * hnode_create(void *hash_data);
// hnode_destroy
// file hash.c line 784
extern void hnode_destroy(struct hnode_t *hnode);
// hnode_free
// file hash.c line 748
static void hnode_free(struct hnode_t *node, void *hash_context);
// hnode_get
// file hash.c line 796
extern void * hnode_get(struct hnode_t *node);
// hnode_getkey
// file hash.c line 802
extern const void * hnode_getkey(struct hnode_t *node);
// hnode_init
// file hash.c line 773
extern struct hnode_t * hnode_init(struct hnode_t *hnode, void *hash_data);
// hnode_put
// file hash.c line 790
extern void hnode_put(struct hnode_t *node, void *hash_data);
// index
// file /usr/include/string.h line 488
extern char * index(const char *, signed int);
// is_power_of_two
// file hash.c line 95
static signed int is_power_of_two(unsigned long int arg);
// kill
// file /usr/include/signal.h line 127
extern signed int kill(signed int, signed int);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// mkstemp
// file /usr/include/stdlib.h line 622
extern signed int mkstemp(char *);
// nmblookup
// file cache.c line 89
static signed int nmblookup(const char *wg, struct stringlist *sl, struct hash_t *ipcache);
// nmblookup$link1
// file smbctx.c line 29
static signed int nmblookup$link1(const char *ip_server, char *output, unsigned long int outputsize);
// options_free
// file cache.c line 72
static void options_free(struct fusesmb_cache_opt *opt);
// options_read
// file cache.c line 58
static void options_read(struct anonymous$0 *cfg, struct fusesmb_cache_opt *opt);
// pclose
// file /usr/include/stdio.h line 878
extern signed int pclose(struct _IO_FILE *);
// popen
// file /usr/include/stdio.h line 872
extern struct _IO_FILE * popen(const char *, const char *);
// pthread_attr_destroy
// file /usr/include/pthread.h line 292
extern signed int pthread_attr_destroy(union pthread_attr_t *);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
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
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// rename
// file /usr/include/stdio.h line 180
extern signed int rename(const char *, const char *);
// rindex
// file /usr/include/string.h line 516
extern char * rindex(const char *, signed int);
// server_listing
// file cache.c line 229
static signed int server_listing(struct _SMBCCTX *ctx, struct stringlist *cache, const char *wg, const char *sv, const char *ip);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// shrink_table
// file hash.c line 230
static void shrink_table(struct hash_t *hash);
// sl_add
// file stringlist.h line 42
inline signed int sl_add(struct stringlist *sl, char *str, signed int do_malloc);
// sl_casefind
// file stringlist.c line 173
char * sl_casefind(struct stringlist *sl, const char *str);
// sl_casesort
// file stringlist.h line 50
void sl_casesort(struct stringlist *sl);
// sl_clear
// file stringlist.c line 124
void sl_clear(struct stringlist *sl);
// sl_count
// file stringlist.h line 43
inline unsigned long int sl_count(struct stringlist *sl);
// sl_find
// file stringlist.h line 45
char * sl_find(struct stringlist *sl, const char *str);
// sl_free
// file stringlist.h line 40
void sl_free(struct stringlist *sl);
// sl_init
// file stringlist.h line 39
struct stringlist * sl_init(void);
// sl_item
// file stringlist.h line 47
inline char * sl_item(struct stringlist *sl, unsigned long int index);
// sl_sort
// file stringlist.c line 198
void sl_sort(struct stringlist *sl);
// sl_strcasecmp
// file stringlist.c line 36
static signed int sl_strcasecmp(const void *p1, const void *p2);
// sl_strcmp
// file stringlist.c line 31
static signed int sl_strcmp(const void *p1, const void *p2);
// smbc_free_context
// file /usr/include/samba-4.0/libsmbclient.h line 1151
signed int smbc_free_context(struct _SMBCCTX *, signed int);
// smbc_init_context
// file /usr/include/samba-4.0/libsmbclient.h line 1192
struct _SMBCCTX * smbc_init_context(struct _SMBCCTX *);
// smbc_new_context
// file /usr/include/samba-4.0/libsmbclient.h line 1128
struct _SMBCCTX * smbc_new_context(void);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf);
// stat$link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat$link1(const char *__path$link1, struct stat *__statbuf$link1);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strip_whitespace
// file configfile.c line 53
static char * strip_whitespace(const char *str);
// strip_whitespace_check_comment
// file configfile.c line 37
static char * strip_whitespace_check_comment(const char *str);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// unlink
// file /usr/include/unistd.h line 826
extern signed int unlink(const char *);
// workgroup_listing_thread
// file cache.c line 283
static void * workgroup_listing_thread(void *args);

struct anonymous$0
{
  // lines
  struct stringlist *lines;
  // mtime
  signed long int mtime;
  // file
  char file[4097l];
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

struct _smbc_callbacks
{
  // auth_fn
  void (*auth_fn)(const char *, const char *, char *, signed int, char *, signed int, char *, signed int);
  // check_server_fn
  signed int (*check_server_fn)(struct _SMBCCTX *, struct _SMBCSRV *);
  // remove_unused_server_fn
  signed int (*remove_unused_server_fn)(struct _SMBCCTX *, struct _SMBCSRV *);
  // add_cached_srv_fn
  signed int (*add_cached_srv_fn)(struct _SMBCCTX *, struct _SMBCSRV *, const char *, const char *, const char *, const char *);
  // get_cached_srv_fn
  struct _SMBCSRV * (*get_cached_srv_fn)(struct _SMBCCTX *, const char *, const char *, const char *, const char *);
  // remove_cached_srv_fn
  signed int (*remove_cached_srv_fn)(struct _SMBCCTX *, struct _SMBCSRV *);
  // purge_cached_fn
  signed int (*purge_cached_fn)(struct _SMBCCTX *);
};

struct _smbc_options
{
  // browse_max_lmb_count
  signed int browse_max_lmb_count;
  // urlencode_readdir_entries
  signed int urlencode_readdir_entries;
  // one_share_per_server
  signed int one_share_per_server;
};

struct _SMBCCTX
{
  // debug
  signed int debug;
  // netbios_name
  char *netbios_name;
  // workgroup
  char *workgroup;
  // user
  char *user;
  // timeout
  signed int timeout;
  // open
  struct _SMBCFILE * (*open)(struct _SMBCCTX *, const char *, signed int, unsigned int);
  // creat
  struct _SMBCFILE * (*creat)(struct _SMBCCTX *, const char *, unsigned int);
  // read
  signed long int (*read)(struct _SMBCCTX *, struct _SMBCFILE *, void *, unsigned long int);
  // write
  signed long int (*write)(struct _SMBCCTX *, struct _SMBCFILE *, const void *, unsigned long int);
  // unlink
  signed int (*unlink)(struct _SMBCCTX *, const char *);
  // rename
  signed int (*rename)(struct _SMBCCTX *, const char *, struct _SMBCCTX *, const char *);
  // lseek
  signed long int (*lseek)(struct _SMBCCTX *, struct _SMBCFILE *, signed long int, signed int);
  // stat
  signed int (*stat)(struct _SMBCCTX *, const char *, struct stat *);
  // fstat
  signed int (*fstat)(struct _SMBCCTX *, struct _SMBCFILE *, struct stat *);
  // close_fn
  signed int (*close_fn)(struct _SMBCCTX *, struct _SMBCFILE *);
  // opendir
  struct _SMBCFILE * (*opendir)(struct _SMBCCTX *, const char *);
  // closedir
  signed int (*closedir)(struct _SMBCCTX *, struct _SMBCFILE *);
  // readdir
  struct smbc_dirent * (*readdir)(struct _SMBCCTX *, struct _SMBCFILE *);
  // getdents
  signed int (*getdents)(struct _SMBCCTX *, struct _SMBCFILE *, struct smbc_dirent *, signed int);
  // mkdir
  signed int (*mkdir)(struct _SMBCCTX *, const char *, unsigned int);
  // rmdir
  signed int (*rmdir)(struct _SMBCCTX *, const char *);
  // telldir
  signed long int (*telldir)(struct _SMBCCTX *, struct _SMBCFILE *);
  // lseekdir
  signed int (*lseekdir)(struct _SMBCCTX *, struct _SMBCFILE *, signed long int);
  // fstatdir
  signed int (*fstatdir)(struct _SMBCCTX *, struct _SMBCFILE *, struct stat *);
  // chmod
  signed int (*chmod)(struct _SMBCCTX *, const char *, unsigned int);
  // utimes
  signed int (*utimes)(struct _SMBCCTX *, const char *, struct timeval *);
  // setxattr
  signed int (*setxattr)(struct _SMBCCTX *, const char *, const char *, const void *, unsigned long int, signed int);
  // getxattr
  signed int (*getxattr)(struct _SMBCCTX *, const char *, const char *, const void *, unsigned long int);
  // removexattr
  signed int (*removexattr)(struct _SMBCCTX *, const char *, const char *);
  // listxattr
  signed int (*listxattr)(struct _SMBCCTX *, const char *, char *, unsigned long int);
  // print_file
  signed int (*print_file)(struct _SMBCCTX *, const char *, struct _SMBCCTX *, const char *);
  // open_print_job
  struct _SMBCFILE * (*open_print_job)(struct _SMBCCTX *, const char *);
  // list_print_jobs
  signed int (*list_print_jobs)(struct _SMBCCTX *, const char *, void (*)(struct print_job_info *));
  // unlink_print_job
  signed int (*unlink_print_job)(struct _SMBCCTX *, const char *, signed int);
  // callbacks
  struct _smbc_callbacks callbacks;
  // reserved
  void *reserved;
  // flags
  signed int flags;
  // options
  struct _smbc_options options;
  // internal
  struct SMBC_internal_data *internal;
};

struct fusesmb_cache_opt
{
  // ignore_servers
  struct stringlist *ignore_servers;
  // ignore_workgroups
  struct stringlist *ignore_workgroups;
};

struct hash_t
{
  // hash_table
  struct hnode_t **hash_table;
  // hash_nchains
  unsigned long int hash_nchains;
  // hash_nodecount
  unsigned long int hash_nodecount;
  // hash_maxcount
  unsigned long int hash_maxcount;
  // hash_highmark
  unsigned long int hash_highmark;
  // hash_lowmark
  unsigned long int hash_lowmark;
  // hash_compare
  signed int (*hash_compare)(const void *, const void *);
  // hash_function
  unsigned long int (*hash_function)(const void *);
  // hash_allocnode
  struct hnode_t * (*hash_allocnode)(void *);
  // hash_freenode
  void (*hash_freenode)(struct hnode_t *, void *);
  // hash_context
  void *hash_context;
  // hash_mask
  unsigned long int hash_mask;
  // hash_dynamic
  signed int hash_dynamic;
};

struct hnode_t
{
  // hash_next
  struct hnode_t *hash_next;
  // hash_key
  const void *hash_key;
  // hash_data
  void *hash_data;
  // hash_hkey
  unsigned long int hash_hkey;
};

struct hscan_t
{
  // hash_table
  struct hash_t *hash_table;
  // hash_chain
  unsigned long int hash_chain;
  // hash_next
  struct hnode_t *hash_next;
};

struct print_job_info
{
  // id
  unsigned short int id;
  // priority
  unsigned short int priority;
  // size
  unsigned long int size;
  // user
  char user[128l];
  // name
  char name[128l];
  // t
  signed long int t;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct smbc_dirent
{
  // smbc_type
  unsigned int smbc_type;
  // dirlen
  unsigned int dirlen;
  // commentlen
  unsigned int commentlen;
  // comment
  char *comment;
  // namelen
  unsigned int namelen;
  // name
  char name[1l];
};

struct timespec
{
  // tv_sec
  signed long int tv_sec;
  // tv_nsec
  signed long int tv_nsec;
};

struct stat
{
  // st_dev
  unsigned long int st_dev;
  // st_ino
  unsigned long int st_ino;
  // st_nlink
  unsigned long int st_nlink;
  // st_mode
  unsigned int st_mode;
  // st_uid
  unsigned int st_uid;
  // st_gid
  unsigned int st_gid;
  // __pad0
  signed int __pad0;
  // st_rdev
  unsigned long int st_rdev;
  // st_size
  signed long int st_size;
  // st_blksize
  signed long int st_blksize;
  // st_blocks
  signed long int st_blocks;
  // st_atim
  struct timespec st_atim;
  // st_mtim
  struct timespec st_mtim;
  // st_ctim
  struct timespec st_ctim;
  // __glibc_reserved
  signed long int __glibc_reserved[3l];
};

struct stringlist
{
  // lines
  char **lines;
  // numlines
  unsigned long int numlines;
  // maxlines
  unsigned long int maxlines;
  // sorted
  char sorted;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};


// cache
// file cache.c line 46
struct stringlist *cache;
// cache_mutex
// file cache.c line 47
union anonymous cache_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// cfg
// file cache.c line 55
struct anonymous$0 cfg;
// fusesmb_auth_fn_cfg
// file smbctx.c line 26
struct anonymous$0 *fusesmb_auth_fn_cfg = (struct anonymous$0 *)(void *)0;
// fusesmb_auth_fn_cfg_mutex
// file smbctx.c line 27
union anonymous *fusesmb_auth_fn_cfg_mutex = (union anonymous *)(void *)0;
// hash_val_t_bit
// file hash.c line 63
signed int hash_val_t_bit;
// opts
// file cache.c line 56
struct fusesmb_cache_opt opts;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;

// bsearch
// file /usr/include/x86_64-linux-gnu/bits/stdlib-bsearch.h line 20
static inline void * bsearch(const void *__key, const void *__base, unsigned long int __nmemb, unsigned long int __size, signed int (*__compar)(const void *, const void *))
{
  unsigned long int __l;
  unsigned long int __u;
  unsigned long int __idx;
  const void *__p;
  signed int __comparison;
  __l = (unsigned long int)0;
  __u = __nmemb;
  if(!(__l >= __u))
  {
    __idx = (__l + __u) / (unsigned long int)2;
    __p = (void *)((const char *)__base + (signed long int)(__idx * __size));
    __comparison=__compar(__key, __p);
    if(!(__comparison >= 0))
      __u = __idx;

    else
      if(__comparison >= 1)
        __l = __idx + (unsigned long int)1;

      else
        return (void *)__p;
  }

  return (void *)0;
}

// cache_servers
// file cache.c line 385
signed int cache_servers(struct _SMBCCTX *ctx)
{
  struct _SMBCFILE *dir;
  struct smbc_dirent *workgroup_dirent;
  cache=sl_init();
  unsigned long int i;
  dir=ctx->opendir(ctx, "smb://");
  _Bool tmp_if_expr$2;
  if(dir == ((struct _SMBCFILE *)NULL))
  {
    ctx->closedir(ctx, dir);
    sl_free(cache);
    return -1;
  }

  else
  {
    unsigned long int *threads;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(unsigned long int) /*8ul*/ );
    threads = (unsigned long int *)return_value_malloc$1;
    if(threads == ((unsigned long int *)NULL))
      return -1;

    else
    {
      union pthread_attr_t thread_attr;
      pthread_attr_init(&thread_attr);
      pthread_attr_setdetachstate(&thread_attr, 0);
      unsigned int num_threads = (unsigned int)0;
      workgroup_dirent=ctx->readdir(ctx, dir);
      if(!(workgroup_dirent == ((struct smbc_dirent *)NULL)))
      {
        if(workgroup_dirent->namelen == 0u)
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = workgroup_dirent->smbc_type != (unsigned int)1 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$2)
        {
          char *thread_arg;
          char *return_value___strdup$3;
          return_value___strdup$3=__strdup(workgroup_dirent->name);
          thread_arg = return_value___strdup$3;
          if(!(opts.ignore_workgroups == ((struct stringlist *)NULL)))
          {
            char *return_value_sl_find$4;
            return_value_sl_find$4=sl_find(opts.ignore_workgroups, workgroup_dirent->name);
          }

          if(!(thread_arg == ((char *)NULL)))
          {
            signed int cache_servers$$1$$2$$rc;
            cache_servers$$1$$2$$rc=pthread_create(&threads[(signed long int)num_threads], &thread_attr, workgroup_listing_thread, (void *)thread_arg);
            if(!(cache_servers$$1$$2$$rc == 0))
            {
              fprintf(stderr, "Failed to create thread for workgroup: %s\n", (const void *)workgroup_dirent->name);
              free((void *)thread_arg);
            }

            else
            {
              num_threads = num_threads + 1u;
              void *return_value_realloc$5;
              return_value_realloc$5=realloc((void *)threads, (unsigned long int)(num_threads + (unsigned int)1) * sizeof(unsigned long int) /*8ul*/ );
              threads = (unsigned long int *)return_value_realloc$5;
            }
          }

        }

      }

      ctx->closedir(ctx, dir);
      pthread_attr_destroy(&thread_attr);
      i = (unsigned long int)0;
      if(!(i >= (unsigned long int)num_threads))
      {
        signed int rc;
        rc=pthread_join(threads[(signed long int)i], (void **)(void *)0);
        if(!(rc == 0))
        {
          fprintf(stderr, "Error while joining thread, errorcode: %d\n", rc);
          exit(-1);
        }

        i = i + 1ul;
      }

      free((void *)threads);
      sl_casesort(cache);
      char cachefile[1024l];
      char tmp_cachefile[1024l];
      char *return_value_getenv$6;
      return_value_getenv$6=getenv("HOME");
      snprintf(tmp_cachefile, (unsigned long int)1024, "%s/.smb/fusesmb.cache.XXXXX", return_value_getenv$6);
      mkstemp(tmp_cachefile);
      char *return_value_getenv$7;
      return_value_getenv$7=getenv("HOME");
      snprintf(cachefile, (unsigned long int)1024, "%s/.smb/fusesmb.cache", return_value_getenv$7);
      unsigned int oldmask;
      oldmask=umask((unsigned int)022);
      struct _IO_FILE *fp;
      fp=fopen(tmp_cachefile, "w");
      umask(oldmask);
      if(fp == ((struct _IO_FILE *)NULL))
      {
        sl_free(cache);
        return -1;
      }

      else
      {
        i = (unsigned long int)0;
        unsigned long int return_value_sl_count$8;
        return_value_sl_count$8=sl_count(cache);
        if(!(i >= return_value_sl_count$8))
        {
          char *return_value_sl_item$9;
          return_value_sl_item$9=sl_item(cache, i);
          fprintf(fp, "%s\n", return_value_sl_item$9);
          i = i + 1ul;
        }

        fclose(fp);
        rename(tmp_cachefile, cachefile);
        sl_free(cache);
        return 0;
      }
    }
  }
}

// clear_table
// file hash.c line 120
static void clear_table(struct hash_t *hash)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= hash->hash_nchains); i = i + 1ul)
    hash->hash_table[(signed long int)i] = (struct hnode_t *)(void *)0;
}

// compute_bits
// file hash.c line 78
static void compute_bits(void)
{
  unsigned long int val = (unsigned long int)0x7fffffffffffffffL * 2UL + 1UL;
  signed int bits = 0;
  for( ; !(val == 0ul); val = val >> 1)
    bits = bits + 1;
  hash_val_t_bit = bits;
}

// compute_mask
// file hash.c line 108
static unsigned long int compute_mask(unsigned long int size)
{
  signed int return_value_is_power_of_two$1;
  return_value_is_power_of_two$1=is_power_of_two(size);
  /* assertion is_power_of_two(size) */
  assert(return_value_is_power_of_two$1 != 0);
  /* assertion size >= 2 */
  assert(size >= (unsigned long int)2);
  return size - (unsigned long int)1;
}

// config_free
// file configfile.c line 347
void config_free(struct anonymous$0 *cf)
{
  sl_free(cf->lines);
}

// config_has_section
// file configfile.c line 161
signed int config_has_section(struct anonymous$0 *cf, const char *section)
{
  signed long int config_has_section$array_size0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(section);
  config_has_section$array_size0 = (signed long int)(return_value_strlen$1 + (unsigned long int)3);
  char buf[config_has_section$array_size0];
  strcpy(buf, "[");
  strcat(buf, section);
  strcat(buf, "]");
  char *return_value_sl_find$2;
  return_value_sl_find$2=sl_find(cf->lines, buf);
  if(!(return_value_sl_find$2 == ((char *)NULL)))
    return 0;

  else
    return -1;
}

// config_init
// file configfile.h line 37
signed int config_init(struct anonymous$0 *cf, const char *file)
{
  struct stat st;
  signed int return_value_stat$1;
  return_value_stat$1=stat$link1(file, &st);
  if(return_value_stat$1 == -1)
    return -1;

  else
  {
    cf->mtime = st.st_mtim.tv_sec;
    cf->lines=sl_init();
    if(cf->lines == ((struct stringlist *)NULL))
      return -1;

    else
    {
      __builtin_strncpy(cf->file, file, (unsigned long int)4096);
      config_read_file(cf);
      return 0;
    }
  }
}

// config_read_bool
// file configfile.h line 43
signed int config_read_bool(struct anonymous$0 *cf, const char *section, const char *key, signed int *value)
{
  char *str;
  signed int return_value_config_read_string$9;
  return_value_config_read_string$9=config_read_string(cf, section, key, &str);
  _Bool tmp_if_expr$4;
  signed int tmp_statement_expression$2;
  _Bool tmp_if_expr$8;
  signed int tmp_statement_expression$6;
  if(return_value_config_read_string$9 == 0)
  {
    signed int return_value_strcasecmp$1;
    return_value_strcasecmp$1=strcasecmp("true", str);
    if(return_value_strcasecmp$1 == 0)
      tmp_if_expr$4 = (_Bool)1;

    else
    {
      unsigned long int __s1_len;
      unsigned long int __s2_len;
      signed int return_value___builtin_strcmp$3;
      return_value___builtin_strcmp$3=__builtin_strcmp("1", str);
      tmp_statement_expression$2 = return_value___builtin_strcmp$3;
      tmp_if_expr$4 = tmp_statement_expression$2 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$4)
    {
      *value = 1;
      free((void *)str);
      return 0;
    }

    signed int return_value_strcasecmp$5;
    return_value_strcasecmp$5=strcasecmp("false", str);
    if(return_value_strcasecmp$5 == 0)
      tmp_if_expr$8 = (_Bool)1;

    else
    {
      unsigned long int config_read_bool$$1$$1$$3$$__s1_len;
      unsigned long int config_read_bool$$1$$1$$3$$__s2_len;
      signed int return_value___builtin_strcmp$7;
      return_value___builtin_strcmp$7=__builtin_strcmp("0", str);
      tmp_statement_expression$6 = return_value___builtin_strcmp$7;
      tmp_if_expr$8 = tmp_statement_expression$6 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$8)
    {
      *value = 0;
      free((void *)str);
      return 0;
    }

    free((void *)str);
  }

  return -1;
}

// config_read_file
// file configfile.c line 69
static signed int config_read_file(struct anonymous$0 *cf)
{
  char buf[4096l];
  struct _IO_FILE *fp;
  fp=fopen(cf->file, "r");
  signed int return_value_feof$1;
  if(fp == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    sl_clear(cf->lines);
    do
    {
      return_value_feof$1=feof(fp);
      if(!(return_value_feof$1 == 0))
        break;

      char *return_value_fgets$2;
      return_value_fgets$2=fgets(buf, (signed int)sizeof(char [4096l]) /*4096ul*/ , fp);
      if(!(return_value_fgets$2 == ((char *)NULL)))
      {
        char *stripped_string;
        stripped_string=strip_whitespace_check_comment(buf);
        if(!(stripped_string == ((char *)NULL)))
        {
          if((signed int)*stripped_string == 91)
          {
            stripped_string = stripped_string + 1l;
            for( ; (_Bool)1; stripped_string = stripped_string + 1l)
              if(!((signed int)*stripped_string == 9))
              {
                if(!((signed int)*stripped_string == 32))
                  goto __CPROVER_DUMP_L6;

              }


          __CPROVER_DUMP_L6:
            ;
            char *end;
            unsigned long int return_value_strlen$3;
            return_value_strlen$3=strlen(stripped_string);
            end = (stripped_string + (signed long int)return_value_strlen$3) - (signed long int)1;
            for( ; (_Bool)1; end = end - 1l)
            {
              if(!((signed int)*end == 9))
              {
                if(!((signed int)*end == 32))
                {
                  if(!((signed int)*end == 93))
                    goto __CPROVER_DUMP_L9;

                }

              }

              *end = (char)0;
            }

          __CPROVER_DUMP_L9:
            ;
            char section_string[4096l];
            snprintf(section_string, sizeof(char [4096l]) /*4096ul*/ , "[%s]", stripped_string);
            signed int return_value_sl_add$4;
            return_value_sl_add$4=sl_add(cf->lines, section_string, 1);
            if(return_value_sl_add$4 == -1)
              continue;

          }

          else
          {
            char value_string[4096l];
            char *isequal;
            isequal=index(stripped_string, 61);
            if(isequal == ((char *)NULL))
              continue;

            *isequal = (char)0;
            isequal = isequal + 1l;
            char *key;
            key=strip_whitespace(stripped_string);
            char *value;
            value=strip_whitespace(isequal);
            if(key == ((char *)NULL) || value == ((char *)NULL))
              continue;

            snprintf(value_string, sizeof(char [4096l]) /*4096ul*/ , "%s=%s", key, value);
            signed int return_value_sl_add$5;
            return_value_sl_add$5=sl_add(cf->lines, value_string, 1);
            if(return_value_sl_add$5 == -1)
              continue;

          }
        }

      }

    }
    while((_Bool)1);
    fclose(fp);
    return 0;
  }
}

// config_read_int
// file configfile.c line 224
signed int config_read_int(struct anonymous$0 *cf, const char *section, const char *key, signed int *value)
{
  char *str;
  signed int return_value_config_read_string$2;
  return_value_config_read_string$2=config_read_string(cf, section, key, &str);
  if(return_value_config_read_string$2 == 0)
  {
    char *p;
    signed int ret;
    signed long int return_value_strtol$1;
    return_value_strtol$1=strtol(str, &p, 10);
    ret = (signed int)return_value_strtol$1;
    if(!((signed int)*p == 0))
      return -1;

    *value = ret;
    free((void *)str);
    return 0;
  }

  return -1;
}

// config_read_section_keys
// file configfile.c line 299
signed int config_read_section_keys(struct anonymous$0 *cf, const char *section, struct stringlist **value)
{
  unsigned long int i;
  signed long int i$array_size0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(section);
  i$array_size0 = (signed long int)(return_value_strlen$1 + (unsigned long int)3);
  char cmp_section[i$array_size0];
  strcpy(cmp_section, "[");
  strcat(cmp_section, section);
  strcat(cmp_section, "]");
  char section_found = (char)0;
  *value=sl_init();
  unsigned long int return_value_sl_count$2;
  if(*value == ((struct stringlist *)NULL))
    return -1;

  else
  {
    i = (unsigned long int)0;
    do
    {
      return_value_sl_count$2=sl_count(cf->lines);
      if(i >= return_value_sl_count$2)
        break;

      char *return_value_sl_item$3;
      return_value_sl_item$3=sl_item(cf->lines, i);
      signed int return_value_strncasecmp$4;
      return_value_strncasecmp$4=strncasecmp(return_value_sl_item$3, cmp_section, (unsigned long int)i$array_size0);
      if(return_value_strncasecmp$4 == 0)
      {
        if((signed int)section_found == 0)
        {
          section_found = (char)1;
          i = i + 1ul;
        }

      }

      if((signed int)section_found == 1)
      {
        char *return_value_sl_item$5;
        return_value_sl_item$5=sl_item(cf->lines, i);
        signed int return_value_strncasecmp$6;
        return_value_strncasecmp$6=strncasecmp(return_value_sl_item$5, "[", (unsigned long int)1);
        if(return_value_strncasecmp$6 == 0)
          break;

        char buf[4096l];
        char *return_value_sl_item$7;
        return_value_sl_item$7=sl_item(cf->lines, i);
        __builtin_strncpy(buf, return_value_sl_item$7, (unsigned long int)4096);
        char *sep;
        sep=index(buf, 61);
        if(sep == ((char *)NULL))
          goto __CPROVER_DUMP_L9;

        *sep = (char)0;
        unsigned long int return_value_strlen$9;
        return_value_strlen$9=strlen(buf);
        if(!(return_value_strlen$9 == 0ul))
        {
          signed int return_value_sl_add$8;
          return_value_sl_add$8=sl_add(*value, buf, 1);
          if(return_value_sl_add$8 == -1)
            goto __CPROVER_DUMP_L9;

        }

      }


    __CPROVER_DUMP_L9:
      ;
      i = i + 1ul;
    }
    while((_Bool)1);
    unsigned long int return_value_sl_count$10;
    return_value_sl_count$10=sl_count(*value);
    if(return_value_sl_count$10 >= 1ul)
      return 0;

    else
    {
      sl_free(*value);
      *value = (struct stringlist *)(void *)0;
      return -1;
    }
  }
}

// config_read_string
// file configfile.h line 41
signed int config_read_string(struct anonymous$0 *cf, const char *section, const char *key, char **value)
{
  unsigned long int i;
  signed long int i$array_size0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(section);
  i$array_size0 = (signed long int)(return_value_strlen$1 + (unsigned long int)3);
  char cmp_section[i$array_size0];
  signed long int cmp_section$array_size0;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(key);
  cmp_section$array_size0 = (signed long int)(return_value_strlen$2 + (unsigned long int)2);
  char cmp_key[cmp_section$array_size0];
  strcpy(cmp_section, "[");
  strcat(cmp_section, section);
  strcat(cmp_section, "]");
  strcpy(cmp_key, key);
  strcat(cmp_key, "=");
  char section_found = (char)0;
  i = (unsigned long int)0;
  unsigned long int return_value_sl_count$3;
  unsigned long int return_value_sl_count$14;
  do
  {
    return_value_sl_count$3=sl_count(cf->lines);
    if(i >= return_value_sl_count$3)
      break;

    char *return_value_sl_item$4;
    return_value_sl_item$4=sl_item(cf->lines, i);
    signed int return_value_strncasecmp$5;
    return_value_strncasecmp$5=strncasecmp(return_value_sl_item$4, cmp_section, (unsigned long int)i$array_size0);
    if(return_value_strncasecmp$5 == 0)
    {
      if((signed int)section_found == 0)
      {
        section_found = (char)1;
        i = i + 1ul;
      }

    }

    if((signed int)section_found == 1)
    {
      return_value_sl_count$14=sl_count(cf->lines);
      if(!(i >= return_value_sl_count$14))
      {
        char *return_value_sl_item$6;
        return_value_sl_item$6=sl_item(cf->lines, i);
        signed int return_value_strncasecmp$7;
        return_value_strncasecmp$7=strncasecmp(return_value_sl_item$6, "[", (unsigned long int)1);
        if(return_value_strncasecmp$7 == 0)
          return -1;

        char *return_value_sl_item$11;
        return_value_sl_item$11=sl_item(cf->lines, i);
        unsigned long int return_value_strlen$12;
        return_value_strlen$12=strlen(cmp_key);
        signed int return_value_strncasecmp$13;
        return_value_strncasecmp$13=strncasecmp(return_value_sl_item$11, cmp_key, return_value_strlen$12);
        if(return_value_strncasecmp$13 == 0)
        {
          char *retval;
          char *return_value_sl_item$8;
          return_value_sl_item$8=sl_item(cf->lines, i);
          retval=index(return_value_sl_item$8, 61);
          if(retval == ((char *)NULL))
            return -1;

          retval = retval + 1l;
          unsigned long int return_value_strlen$10;
          return_value_strlen$10=strlen(retval);
          if(!(return_value_strlen$10 == 0ul))
          {
            char *return_value___strdup$9;
            return_value___strdup$9=__strdup(retval);
            *value = return_value___strdup$9;
            return 0;
          }

          return -1;
        }

      }

    }

    i = i + 1ul;
  }
  while((_Bool)1);
  return -1;
}

// config_read_stringlist
// file configfile.h line 44
signed int config_read_stringlist(struct anonymous$0 *cf, const char *section, const char *key, struct stringlist **value, char sep)
{
  char *str;
  signed int return_value_config_read_string$2;
  return_value_config_read_string$2=config_read_string(cf, section, key, &str);
  if(return_value_config_read_string$2 == 0)
  {
    *value=sl_init();
    char *next;
    char *start = str;
    do
    {
      next=index(start, (signed int)sep);
      if(next == ((char *)NULL))
        break;

      *next = (char)0;
      next = next + 1l;
      for( ; *next == sep; next = next + 1l)
        *next = (char)0;
      char *stripped;
      stripped=strip_whitespace(start);
      if(!(stripped == ((char *)NULL)))
        sl_add(*value, stripped, 1);

      start = next;
    }
    while((_Bool)1);
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(start);
    if(!(return_value_strlen$1 == 0ul))
    {
      char *config_read_stringlist$$1$$1$$2$$stripped;
      config_read_stringlist$$1$$1$$2$$stripped=strip_whitespace(start);
      sl_add(*value, config_read_stringlist$$1$$1$$2$$stripped, 1);
    }

    free((void *)str);
    return 0;
  }

  return -1;
}

// config_reload_ifneeded
// file configfile.c line 148
signed int config_reload_ifneeded(struct anonymous$0 *cf)
{
  struct stat st;
  signed int return_value_stat$1;
  return_value_stat$1=stat$link1(cf->file, &st);
  if(return_value_stat$1 == -1)
    return -1;

  else
    if(cf->mtime == st.st_mtim.tv_sec)
      return -1;

    else
    {
      cf->mtime = st.st_mtim.tv_sec;
      signed int return_value_config_read_file$2;
      return_value_config_read_file$2=config_read_file(cf);
      return return_value_config_read_file$2;
    }
}

// fusesmb_auth_fn
// file smbctx.c line 89
static void fusesmb_auth_fn(const char *server, const char *share, char *workgroup, signed int wgmaxlen, char *username, signed int unmaxlen, char *password, signed int pwmaxlen)
{
  (void)workgroup;
  (void)wgmaxlen;
  _Bool tmp_if_expr$1;
  if(server == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)server[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr$1)
  {
    char sv_section[1024l] = { '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    strcat(sv_section, server);
    strcat(sv_section, "/");
    strcat(sv_section, share);
    char *un;
    char *pw;
    pthread_mutex_lock(fusesmb_auth_fn_cfg_mutex);
    signed int return_value_config_read_string$3;
    return_value_config_read_string$3=config_read_string(fusesmb_auth_fn_cfg, sv_section, "username", &un);
    if(return_value_config_read_string$3 == 0)
    {
      signed int return_value_config_read_string$2;
      return_value_config_read_string$2=config_read_string(fusesmb_auth_fn_cfg, sv_section, "password", &pw);
      if(return_value_config_read_string$2 == 0)
      {
        pthread_mutex_unlock(fusesmb_auth_fn_cfg_mutex);
        __builtin_strncpy(username, un, (unsigned long int)unmaxlen);
        __builtin_strncpy(password, pw, (unsigned long int)pwmaxlen);
        free((void *)un);
        free((void *)pw);
        goto __CPROVER_DUMP_L10;
      }

      free((void *)un);
    }

    strcpy(sv_section, "/");
    strcat(sv_section, server);
    signed int return_value_config_read_string$5;
    return_value_config_read_string$5=config_read_string(fusesmb_auth_fn_cfg, sv_section, "username", &un);
    if(return_value_config_read_string$5 == 0)
    {
      signed int return_value_config_read_string$4;
      return_value_config_read_string$4=config_read_string(fusesmb_auth_fn_cfg, sv_section, "password", &pw);
      if(return_value_config_read_string$4 == 0)
      {
        pthread_mutex_unlock(fusesmb_auth_fn_cfg_mutex);
        __builtin_strncpy(username, un, (unsigned long int)unmaxlen);
        __builtin_strncpy(password, pw, (unsigned long int)pwmaxlen);
        free((void *)un);
        free((void *)pw);
        goto __CPROVER_DUMP_L10;
      }

      free((void *)un);
    }

    signed int return_value_config_read_string$7;
    return_value_config_read_string$7=config_read_string(fusesmb_auth_fn_cfg, "global", "username", &un);
    if(return_value_config_read_string$7 == 0)
    {
      signed int return_value_config_read_string$6;
      return_value_config_read_string$6=config_read_string(fusesmb_auth_fn_cfg, "global", "password", &pw);
      if(return_value_config_read_string$6 == 0)
      {
        pthread_mutex_unlock(fusesmb_auth_fn_cfg_mutex);
        __builtin_strncpy(username, un, (unsigned long int)unmaxlen);
        __builtin_strncpy(password, pw, (unsigned long int)pwmaxlen);
        free((void *)un);
        free((void *)pw);
        goto __CPROVER_DUMP_L10;
      }

      free((void *)un);
    }

    pthread_mutex_unlock(fusesmb_auth_fn_cfg_mutex);
    username = (char *)(void *)0;
    password = (char *)(void *)0;
    goto __CPROVER_DUMP_L10;
  }


__CPROVER_DUMP_L10:
  ;
}

// fusesmb_cache_auth_fn
// file smbctx.c line 170
static void fusesmb_cache_auth_fn(const char *server, const char *share, char *workgroup, signed int wgmaxlen, char *username, signed int unmaxlen, char *password, signed int pwmaxlen)
{
  (void)workgroup;
  (void)wgmaxlen;
  char sv[1024l];
  _Bool tmp_if_expr$1;
  if(server == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)server[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    fprintf(stderr, "empty server name");

  else
  {
    nmblookup$link1(server, sv, (unsigned long int)1024);
    char sv_section[1024l] = { '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    strcat(sv_section, sv);
    strcat(sv_section, "/");
    strcat(sv_section, share);
    char *un;
    char *pw;
    signed int return_value_config_read_string$3;
    return_value_config_read_string$3=config_read_string(fusesmb_auth_fn_cfg, sv_section, "username", &un);
    if(return_value_config_read_string$3 == 0)
    {
      signed int return_value_config_read_string$2;
      return_value_config_read_string$2=config_read_string(fusesmb_auth_fn_cfg, sv_section, "password", &pw);
      if(return_value_config_read_string$2 == 0)
      {
        __builtin_strncpy(username, un, (unsigned long int)unmaxlen);
        __builtin_strncpy(password, pw, (unsigned long int)pwmaxlen);
        free((void *)un);
        free((void *)pw);
        goto __CPROVER_DUMP_L10;
      }

      free((void *)un);
    }

    strcpy(sv_section, "/");
    strcat(sv_section, sv);
    signed int return_value_config_read_string$5;
    return_value_config_read_string$5=config_read_string(fusesmb_auth_fn_cfg, sv_section, "username", &un);
    if(return_value_config_read_string$5 == 0)
    {
      signed int return_value_config_read_string$4;
      return_value_config_read_string$4=config_read_string(fusesmb_auth_fn_cfg, sv_section, "password", &pw);
      if(return_value_config_read_string$4 == 0)
      {
        __builtin_strncpy(username, un, (unsigned long int)unmaxlen);
        __builtin_strncpy(password, pw, (unsigned long int)pwmaxlen);
        free((void *)un);
        free((void *)pw);
        goto __CPROVER_DUMP_L10;
      }

      free((void *)un);
    }

    signed int return_value_config_read_string$7;
    return_value_config_read_string$7=config_read_string(fusesmb_auth_fn_cfg, "global", "username", &un);
    if(return_value_config_read_string$7 == 0)
    {
      signed int return_value_config_read_string$6;
      return_value_config_read_string$6=config_read_string(fusesmb_auth_fn_cfg, "global", "password", &pw);
      if(return_value_config_read_string$6 == 0)
      {
        __builtin_strncpy(username, un, (unsigned long int)unmaxlen);
        __builtin_strncpy(password, pw, (unsigned long int)pwmaxlen);
        free((void *)un);
        free((void *)pw);
        goto __CPROVER_DUMP_L10;
      }

      free((void *)un);
    }

    username = (char *)(void *)0;
    password = (char *)(void *)0;
    goto __CPROVER_DUMP_L10;
  }

__CPROVER_DUMP_L10:
  ;
}

// fusesmb_cache_new_context
// file smbctx.h line 26
struct _SMBCCTX * fusesmb_cache_new_context(struct anonymous$0 *cf)
{
  fusesmb_auth_fn_cfg = cf;
  struct _SMBCCTX *return_value_fusesmb_context$1;
  return_value_fusesmb_context$1=fusesmb_context(fusesmb_cache_auth_fn);
  return return_value_fusesmb_context$1;
}

// fusesmb_context
// file smbctx.c line 248
static struct _SMBCCTX * fusesmb_context(void (*fn)(const char *, const char *, char *, signed int, char *, signed int, char *, signed int))
{
  struct _SMBCCTX *ctx;
  ctx=smbc_new_context();
  if(ctx == ((struct _SMBCCTX *)NULL))
    return (struct _SMBCCTX *)(void *)0;

  else
  {
    ctx->callbacks.auth_fn = fn;
    ctx->timeout = 10000;
    ctx->flags = ctx->flags | 1 << 0 | 1 << 1;
    ctx=smbc_init_context(ctx);
    return ctx;
  }
}

// fusesmb_new_context
// file smbctx.c line 276
struct _SMBCCTX * fusesmb_new_context(struct anonymous$0 *cf, union anonymous *mutex)
{
  fusesmb_auth_fn_cfg = cf;
  fusesmb_auth_fn_cfg_mutex = mutex;
  struct _SMBCCTX *return_value_fusesmb_context$1;
  return_value_fusesmb_context$1=fusesmb_context(fusesmb_auth_fn);
  return return_value_fusesmb_context$1;
}

// grow_table
// file hash.c line 156
static void grow_table(struct hash_t *hash)
{
  struct hnode_t **newtable;
  /* assertion 2 * hash->hash_nchains > hash->hash_nchains */
  assert((unsigned long int)2 * hash->hash_nchains > hash->hash_nchains);
  void *return_value_realloc$1;
  return_value_realloc$1=realloc((void *)hash->hash_table, sizeof(struct hnode_t *) /*8ul*/  * hash->hash_nchains * (unsigned long int)2);
  newtable = (struct hnode_t **)return_value_realloc$1;
  if(!(newtable == ((struct hnode_t **)NULL)))
  {
    unsigned long int hash_mask = hash->hash_mask << 1 | (unsigned long int)1;
    unsigned long int exposed_bit = hash_mask ^ hash->hash_mask;
    unsigned long int hash_chain;
    /* assertion hash_mask != hash->hash_mask */
    assert(hash_mask != hash->hash_mask);
    hash_chain = (unsigned long int)0;
    for( ; !(hash_chain >= hash->hash_nchains); hash_chain = hash_chain + 1ul)
    {
      struct hnode_t *low_chain = ((struct hnode_t *)NULL);
      struct hnode_t *high_chain = ((struct hnode_t *)NULL);
      struct hnode_t *hptr;
      struct hnode_t *hash_next;
      hptr = newtable[(signed long int)hash_chain];
      for( ; !(hptr == ((struct hnode_t *)NULL)); hptr = hash_next)
      {
        hash_next = hptr->hash_next;
        if(!((hptr->hash_hkey & exposed_bit) == 0ul))
        {
          hptr->hash_next = high_chain;
          high_chain = hptr;
        }

        else
        {
          hptr->hash_next = low_chain;
          low_chain = hptr;
        }
      }
      newtable[(signed long int)hash_chain] = low_chain;
      newtable[(signed long int)(hash_chain + hash->hash_nchains)] = high_chain;
    }
    hash->hash_table = newtable;
    hash->hash_mask = hash_mask;
    hash->hash_nchains = hash->hash_nchains * (unsigned long int)2;
    hash->hash_lowmark = hash->hash_lowmark * (unsigned long int)2;
    hash->hash_highmark = hash->hash_highmark * (unsigned long int)2;
  }

  signed int return_value_hash_verify$2;
  return_value_hash_verify$2=hash_verify(hash);
  /* assertion hash_verify(hash) */
  assert(return_value_hash_verify$2 != 0);
}

// hash_alloc_insert
// file hash.h line 199
extern signed int hash_alloc_insert(struct hash_t *hash, const void *hash_key, void *hash_data)
{
  struct hnode_t *node;
  node=hash->hash_allocnode(hash->hash_context);
  if(!(node == ((struct hnode_t *)NULL)))
  {
    hnode_init(node, hash_data);
    hash_insert(hash, node, hash_key);
    return 1;
  }

  else
    return 0;
}

// hash_comp_default
// file hash.c line 842
static signed int hash_comp_default(const void *key1, const void *key2)
{
  signed int tmp_statement_expression$1;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$2;
  return_value___builtin_strcmp$2=__builtin_strcmp((const char *)key1, (const char *)key2);
  tmp_statement_expression$1 = return_value___builtin_strcmp$2;
  return tmp_statement_expression$1;
}

// hash_count
// file hash.c line 808
extern unsigned long int hash_count(struct hash_t *hash)
{
  return hash->hash_nodecount;
}

// hash_create
// file hash.h line 189
extern struct hash_t * hash_create(unsigned long int hash_maxcount, signed int (*compfun)(const void *, const void *), unsigned long int (*hashfun)(const void *))
{
  struct hash_t *hash;
  if(hash_val_t_bit == 0)
    compute_bits();

  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct hash_t) /*104ul*/ );
  hash = (struct hash_t *)return_value_malloc$1;
  if(!(hash == ((struct hash_t *)NULL)))
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(sizeof(struct hnode_t *) /*8ul*/  * (1UL << 6));
    hash->hash_table = (struct hnode_t **)return_value_malloc$2;
    if(!(hash->hash_table == ((struct hnode_t **)NULL)))
    {
      hash->hash_nchains = 1UL << 6;
      hash->hash_highmark = (1UL << 6) * (unsigned long int)2;
      hash->hash_lowmark = (1UL << 6) / (unsigned long int)2;
      hash->hash_nodecount = (unsigned long int)0;
      hash->hash_maxcount = hash_maxcount;
      hash->hash_compare = compfun != ((signed int (*)(const void *, const void *))NULL) ? compfun : hash_comp_default;
      hash->hash_function = hashfun != ((unsigned long int (*)(const void *))NULL) ? hashfun : hash_fun_default;
      hash->hash_allocnode = hnode_alloc;
      hash->hash_freenode = hnode_free;
      hash->hash_context = (void *)0;
      hash->hash_mask = (1UL << 6) - (unsigned long int)1;
      hash->hash_dynamic = 1;
      clear_table(hash);
      signed int return_value_hash_verify$3;
      return_value_hash_verify$3=hash_verify(hash);
      /* assertion hash_verify(hash) */
      assert(return_value_hash_verify$3 != 0);
      return hash;
    }

    free((void *)hash);
  }

  return (struct hash_t *)(void *)0;
}

// hash_delete
// file hash.c line 590
extern struct hnode_t * hash_delete(struct hash_t *hash, struct hnode_t *node)
{
  unsigned long int hash_chain;
  struct hnode_t *hptr;
  struct hnode_t *return_value_hash_lookup$1;
  return_value_hash_lookup$1=hash_lookup(hash, node->hash_key);
  /* assertion hash_lookup(hash, node->hash_key) == node */
  assert(return_value_hash_lookup$1 == node);
  /* assertion hash_val_t_bit != 0 */
  assert(hash_val_t_bit != 0);
  if(!(hash->hash_dynamic == 0))
  {
    if(hash->hash_lowmark >= hash->hash_nodecount)
    {
      if(hash->hash_nodecount >= 65ul)
        shrink_table(hash);

    }

  }

  hash_chain = node->hash_hkey & hash->hash_mask;
  hptr = hash->hash_table[(signed long int)hash_chain];
  if(hptr == node)
    hash->hash_table[(signed long int)hash_chain] = node->hash_next;

  else
  {
    for( ; !(hptr->hash_next == node); hptr = hptr->hash_next)
      /* assertion hptr != 0 */
      assert(hptr != ((struct hnode_t *)NULL));
    /* assertion hptr->hash_next == node */
    assert(hptr->hash_next == node);
    hptr->hash_next = node->hash_next;
  }
  hash->hash_nodecount = hash->hash_nodecount - 1ul;
  signed int return_value_hash_verify$2;
  return_value_hash_verify$2=hash_verify(hash);
  /* assertion hash_verify(hash) */
  assert(return_value_hash_verify$2 != 0);
  node->hash_next = (struct hnode_t *)(void *)0;
  return node;
}

// hash_delete_free
// file hash.c line 635
extern void hash_delete_free(struct hash_t *hash, struct hnode_t *node)
{
  hash_delete(hash, node);
  hash->hash_freenode(node, hash->hash_context);
}

// hash_destroy
// file hash.h line 191
extern void hash_destroy(struct hash_t *hash)
{
  /* assertion hash_val_t_bit != 0 */
  assert(hash_val_t_bit != 0);
  /* assertion ((hash)->hash_nodecount == 0) */
  assert(hash->hash_nodecount == (unsigned long int)0);
  free((void *)hash->hash_table);
  free((void *)hash);
}

// hash_free
// file hash.c line 364
extern void hash_free(struct hash_t *hash)
{
  hash_free_nodes(hash);
  hash_destroy(hash);
}

// hash_free_nodes
// file hash.c line 346
extern void hash_free_nodes(struct hash_t *hash)
{
  struct hscan_t hs;
  struct hnode_t *node;
  hash_scan_begin(&hs, hash);
  node=hash_scan_next(&hs);
  if(!(node == ((struct hnode_t *)NULL)))
  {
    hash_scan_delete(hash, node);
    hash->hash_freenode(node, hash->hash_context);
  }

  hash->hash_nodecount = (unsigned long int)0;
  clear_table(hash);
}

// hash_fun_default
// file hash.c line 819
static unsigned long int hash_fun_default(const void *hash_key)
{
  const unsigned char *str = (const unsigned char *)hash_key;
  unsigned long int acc = (unsigned long int)0;
  const unsigned char *tmp_post$1;
  for( ; !(*str == 0); acc = acc & (unsigned long int)0xffffffffU)
  {
    static unsigned long int randbox[16l] = { (unsigned long int)0x49848f1bU, (unsigned long int)0xe6255dbaU, (unsigned long int)0x36da5bdcU, (unsigned long int)0x47bf94e9U, (unsigned long int)0x8cbcce22U, (unsigned long int)0x559fc06aU, (unsigned long int)0xd268f536U, (unsigned long int)0xe10af79aU, (unsigned long int)0xc1af4d69U, (unsigned long int)0x1d2917b5U, (unsigned long int)0xec4c304dU, (unsigned long int)0x9ee5016cU, (unsigned long int)0x69232f74U, (unsigned long int)0xfead7bb3U, (unsigned long int)0xe9089ab6U, (unsigned long int)0xf012f6aeU };
    acc = acc ^ randbox[(signed long int)((unsigned long int)*str + acc & (unsigned long int)0xf)];
    acc = acc << 1 | acc >> 31;
    acc = acc & (unsigned long int)0xffffffffU;
    tmp_post$1 = str;
    str = str + 1l;
    acc = acc ^ randbox[(signed long int)((unsigned long int)((signed int)*tmp_post$1 >> 4) + acc & (unsigned long int)0xf)];
    acc = acc << 2 | acc >> 30;
  }
  return acc;
}

// hash_init
// file hash.c line 398
extern struct hash_t * hash_init(struct hash_t *hash, unsigned long int hash_maxcount, signed int (*compfun)(const void *, const void *), unsigned long int (*hashfun)(const void *), struct hnode_t **hash_table, unsigned long int hash_nchains)
{
  if(hash_val_t_bit == 0)
    compute_bits();

  signed int return_value_is_power_of_two$1;
  return_value_is_power_of_two$1=is_power_of_two(hash_nchains);
  /* assertion is_power_of_two(hash_nchains) */
  assert(return_value_is_power_of_two$1 != 0);
  hash->hash_table = hash_table;
  hash->hash_nchains = hash_nchains;
  hash->hash_nodecount = (unsigned long int)0;
  hash->hash_maxcount = hash_maxcount;
  hash->hash_compare = compfun != ((signed int (*)(const void *, const void *))NULL) ? compfun : hash_comp_default;
  hash->hash_function = hashfun != ((unsigned long int (*)(const void *))NULL) ? hashfun : hash_fun_default;
  hash->hash_dynamic = 0;
  hash->hash_mask=compute_mask(hash_nchains);
  clear_table(hash);
  signed int return_value_hash_verify$2;
  return_value_hash_verify$2=hash_verify(hash);
  /* assertion hash_verify(hash) */
  assert(return_value_hash_verify$2 != 0);
  return hash;
}

// hash_insert
// file hash.c line 518
extern void hash_insert(struct hash_t *hash, struct hnode_t *node, const void *hash_key)
{
  unsigned long int hash_hkey;
  unsigned long int hash_chain;
  /* assertion hash_val_t_bit != 0 */
  assert(hash_val_t_bit != 0);
  /* assertion node->hash_next == ((void *)0) */
  assert(node->hash_next == (struct hnode_t *)(void *)0);
  /* assertion hash->hash_nodecount < hash->hash_maxcount */
  assert(hash->hash_nodecount < hash->hash_maxcount);
  struct hnode_t *return_value_hash_lookup$1;
  return_value_hash_lookup$1=hash_lookup(hash, hash_key);
  /* assertion hash_lookup(hash, hash_key) == ((void *)0) */
  assert(return_value_hash_lookup$1 == (struct hnode_t *)(void *)0);
  if(!(hash->hash_dynamic == 0))
  {
    if(hash->hash_nodecount >= hash->hash_highmark)
      grow_table(hash);

  }

  hash_hkey=hash->hash_function(hash_key);
  hash_chain = hash_hkey & hash->hash_mask;
  node->hash_key = hash_key;
  node->hash_hkey = hash_hkey;
  node->hash_next = hash->hash_table[(signed long int)hash_chain];
  hash->hash_table[(signed long int)hash_chain] = node;
  hash->hash_nodecount = hash->hash_nodecount + 1ul;
  signed int return_value_hash_verify$2;
  return_value_hash_verify$2=hash_verify(hash);
  /* assertion hash_verify(hash) */
  assert(return_value_hash_verify$2 != 0);
}

// hash_isempty
// file hash.c line 737
extern signed int hash_isempty(struct hash_t *hash)
{
  return (signed int)(hash->hash_nodecount == (unsigned long int)0);
}

// hash_isfull
// file hash.c line 726
extern signed int hash_isfull(struct hash_t *hash)
{
  return (signed int)(hash->hash_nodecount == hash->hash_maxcount);
}

// hash_lookup
// file hash.h line 197
extern struct hnode_t * hash_lookup(struct hash_t *hash, const void *hash_key)
{
  unsigned long int hash_hkey;
  unsigned long int hash_chain;
  struct hnode_t *nptr;
  hash_hkey=hash->hash_function(hash_key);
  hash_chain = hash_hkey & hash->hash_mask;
  nptr = hash->hash_table[(signed long int)hash_chain];
  signed int return_value;
  if(!(nptr == ((struct hnode_t *)NULL)))
  {
    if(nptr->hash_hkey == hash_hkey)
    {
      return_value=hash->hash_compare(nptr->hash_key, hash_key);
      if(return_value == 0)
        return nptr;

    }

    nptr = nptr->hash_next;
  }

  return (struct hnode_t *)(void *)0;
}

// hash_scan_begin
// file hash.h line 211
extern void hash_scan_begin(struct hscan_t *scan, struct hash_t *hash)
{
  unsigned long int hash_nchains = hash->hash_nchains;
  unsigned long int hash_chain;
  scan->hash_table = hash;
  hash_chain = (unsigned long int)0;
  _Bool tmp_if_expr$1;
  do
  {
    if(!(hash_chain >= hash_nchains))
      tmp_if_expr$1 = hash->hash_table[(signed long int)hash_chain] == ((struct hnode_t *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(!tmp_if_expr$1)
      break;

    hash_chain = hash_chain + 1ul;
  }
  while((_Bool)1);
  if(!(hash_chain >= hash_nchains))
  {
    scan->hash_chain = hash_chain;
    scan->hash_next = hash->hash_table[(signed long int)hash_chain];
  }

  else
    scan->hash_next = (struct hnode_t *)(void *)0;
}

// hash_scan_delete
// file hash.c line 646
extern struct hnode_t * hash_scan_delete(struct hash_t *hash, struct hnode_t *node)
{
  unsigned long int hash_chain;
  struct hnode_t *hptr;
  struct hnode_t *return_value_hash_lookup$1;
  return_value_hash_lookup$1=hash_lookup(hash, node->hash_key);
  /* assertion hash_lookup(hash, node->hash_key) == node */
  assert(return_value_hash_lookup$1 == node);
  /* assertion hash_val_t_bit != 0 */
  assert(hash_val_t_bit != 0);
  hash_chain = node->hash_hkey & hash->hash_mask;
  hptr = hash->hash_table[(signed long int)hash_chain];
  if(hptr == node)
    hash->hash_table[(signed long int)hash_chain] = node->hash_next;

  else
  {
    for( ; !(hptr->hash_next == node); hptr = hptr->hash_next)
      ;
    hptr->hash_next = node->hash_next;
  }
  hash->hash_nodecount = hash->hash_nodecount - 1ul;
  signed int return_value_hash_verify$2;
  return_value_hash_verify$2=hash_verify(hash);
  /* assertion hash_verify(hash) */
  assert(return_value_hash_verify$2 != 0);
  node->hash_next = (struct hnode_t *)(void *)0;
  return node;
}

// hash_scan_delfree
// file hash.h line 214
extern void hash_scan_delfree(struct hash_t *hash, struct hnode_t *node)
{
  hash_scan_delete(hash, node);
  hash->hash_freenode(node, hash->hash_context);
}

// hash_scan_next
// file hash.h line 212
extern struct hnode_t * hash_scan_next(struct hscan_t *scan)
{
  struct hnode_t *hash_next = scan->hash_next;
  struct hash_t *hash = scan->hash_table;
  unsigned long int hash_chain = scan->hash_chain + (unsigned long int)1;
  unsigned long int hash_nchains = hash->hash_nchains;
  /* assertion hash_val_t_bit != 0 */
  assert(hash_val_t_bit != 0);
  if(!(hash_next == ((struct hnode_t *)NULL)))
  {
    if(!(hash_next->hash_next == ((struct hnode_t *)NULL)))
      scan->hash_next = hash_next->hash_next;

    else
    {
      for( ; !(hash_chain >= hash_nchains); hash_chain = hash_chain + 1ul)
        if(!(hash->hash_table[(signed long int)hash_chain] == ((struct hnode_t *)NULL)))
          break;

      if(!(hash_chain >= hash_nchains))
      {
        scan->hash_chain = hash_chain;
        scan->hash_next = hash->hash_table[(signed long int)hash_chain];
      }

      else
        scan->hash_next = (struct hnode_t *)(void *)0;
    }
  }

  return hash_next;
}

// hash_set_allocator
// file hash.c line 330
extern void hash_set_allocator(struct hash_t *hash, struct hnode_t * (*al)(void *), void (*fr)(struct hnode_t *, void *), void *hash_context)
{
  /* assertion ((hash)->hash_nodecount) == 0 */
  assert(hash->hash_nodecount == (unsigned long int)0);
  /* assertion (al == 0 && fr == 0) || (al != 0 && fr != 0) */
  assert(al == ((struct hnode_t * (*)(void *))NULL) && fr == ((void (*)(struct hnode_t *, void *))NULL) || al != ((struct hnode_t * (*)(void *))NULL) && fr != ((void (*)(struct hnode_t *, void *))NULL));
  hash->hash_allocnode = al != ((struct hnode_t * (*)(void *))NULL) ? al : hnode_alloc;
  hash->hash_freenode = fr != ((void (*)(struct hnode_t *, void *))NULL) ? fr : hnode_free;
  hash->hash_context = hash_context;
}

// hash_size
// file hash.c line 814
extern unsigned long int hash_size(struct hash_t *hash)
{
  return hash->hash_nchains;
}

// hash_verify
// file hash.c line 691
extern signed int hash_verify(struct hash_t *hash)
{
  unsigned long int count = (unsigned long int)0;
  unsigned long int hash_chain;
  struct hnode_t *hptr;
  if(!(hash->hash_dynamic == 0))
  {
    if(hash->hash_lowmark >= hash->hash_highmark)
      return 0;

    signed int return_value_is_power_of_two$1;
    return_value_is_power_of_two$1=is_power_of_two(hash->hash_highmark);
    if(return_value_is_power_of_two$1 == 0)
      return 0;

    signed int return_value_is_power_of_two$2;
    return_value_is_power_of_two$2=is_power_of_two(hash->hash_lowmark);
    if(return_value_is_power_of_two$2 == 0)
      return 0;

  }

  hash_chain = (unsigned long int)0;
  for( ; !(hash_chain >= hash->hash_nchains); hash_chain = hash_chain + 1ul)
  {
    hptr = hash->hash_table[(signed long int)hash_chain];
    for( ; !(hptr == ((struct hnode_t *)NULL)); hptr = hptr->hash_next)
    {
      if(!((hash->hash_mask & hptr->hash_hkey) == hash_chain))
        return 0;

      count = count + 1ul;
    }
  }
  if(!(count == hash->hash_nodecount))
    return 0;

  else
    return 1;
}

// hnode_alloc
// file hash.c line 742
static struct hnode_t * hnode_alloc(void *hash_context)
{
  (void)hash_context;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct hnode_t) /*32ul*/ );
  return (struct hnode_t *)return_value_malloc$1;
}

// hnode_create
// file hash.c line 759
extern struct hnode_t * hnode_create(void *hash_data)
{
  struct hnode_t *node;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct hnode_t) /*32ul*/ );
  node = (struct hnode_t *)return_value_malloc$1;
  if(!(node == ((struct hnode_t *)NULL)))
  {
    node->hash_data = hash_data;
    node->hash_next = (struct hnode_t *)(void *)0;
  }

  return node;
}

// hnode_destroy
// file hash.c line 784
extern void hnode_destroy(struct hnode_t *hnode)
{
  free((void *)hnode);
}

// hnode_free
// file hash.c line 748
static void hnode_free(struct hnode_t *node, void *hash_context)
{
  (void)hash_context;
  free((void *)node);
}

// hnode_get
// file hash.c line 796
extern void * hnode_get(struct hnode_t *node)
{
  return node->hash_data;
}

// hnode_getkey
// file hash.c line 802
extern const void * hnode_getkey(struct hnode_t *node)
{
  return node->hash_key;
}

// hnode_init
// file hash.c line 773
extern struct hnode_t * hnode_init(struct hnode_t *hnode, void *hash_data)
{
  hnode->hash_data = hash_data;
  hnode->hash_next = (struct hnode_t *)(void *)0;
  return hnode;
}

// hnode_put
// file hash.c line 790
extern void hnode_put(struct hnode_t *node, void *hash_data)
{
  node->hash_data = hash_data;
}

// is_power_of_two
// file hash.c line 95
static signed int is_power_of_two(unsigned long int arg)
{
  if(arg == 0ul)
    return 0;

  else
  {
    for( ; (1ul & arg) == 0ul; arg = arg >> 1)
      ;
    return (signed int)(arg == (unsigned long int)1);
  }
}

// main
// file cache.c line 496
signed int main(signed int argc, char **argv)
{
  char pidfile[1024l];
  char *return_value_getenv$1;
  return_value_getenv$1=getenv("HOME");
  snprintf(pidfile, (unsigned long int)1024, "%s/.smb/fusesmb.cache.pid", return_value_getenv$1);
  char configfile[1024l];
  char *return_value_getenv$2;
  return_value_getenv$2=getenv("HOME");
  snprintf(configfile, (unsigned long int)1024, "%s/.smb/fusesmb.conf", return_value_getenv$2);
  signed int return_value_config_init$5;
  return_value_config_init$5=config_init(&cfg, configfile);
  if(return_value_config_init$5 == -1)
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    char *return_value_strerror$4;
    return_value_strerror$4=strerror(*return_value___errno_location$3);
    fprintf(stderr, "Could not open config file: %s (%s)", (const void *)configfile, return_value_strerror$4);
    exit(1);
  }

  options_read(&cfg, &opts);
  struct stat st;
  if(argc == 1)
  {
    signed int pid;
    signed int sid;
    signed int return_value_stat$7;
    return_value_stat$7=stat(pidfile, &st);
    if(!(return_value_stat$7 == -1))
    {
      struct _IO_FILE *f;
      signed int pid_from_file;
      signed int n;
      f=fopen(pidfile, "r");
      if(!(f == ((struct _IO_FILE *)NULL)))
      {
        n=fscanf(f, "%d", &pid_from_file);
        fclose(f);
        if(!(n == 1))
          fprintf(stderr, "Error: Can't find pid in pid file\n");

        else
        {
          signed int return_value_kill$6;
          return_value_kill$6=kill(pid_from_file, 0);
          if(return_value_kill$6 == 0)
          {
            fprintf(stderr, "Error: %s is already running with %d\n", argv[(signed long int)0], pid_from_file);
            exit(1);
          }

          else
            unlink(pidfile);
        }
      }

      else
        fprintf(stderr, "Error: Can't read pid file\n");
    }

    pid=fork();
    if(!(pid >= 0))
      exit(1);

    if(pid >= 1)
      exit(0);

    sid=setsid();
    if(!(sid >= 0))
      exit(1);

    signed int return_value_chdir$8;
    return_value_chdir$8=chdir("/");
    if(!(return_value_chdir$8 >= 0))
      exit(1);

    unsigned int oldmask;
    oldmask=umask((unsigned int)077);
    struct _IO_FILE *fp;
    fp=fopen(pidfile, "w");
    umask(oldmask);
    if(fp == ((struct _IO_FILE *)NULL))
      exit(1);

    fprintf(fp, "%i\n", sid);
    fclose(fp);
    close(0);
    close(1);
    close(2);
  }

  struct _SMBCCTX *ctx;
  ctx=fusesmb_cache_new_context(&cfg);
  cache_servers(ctx);
  smbc_free_context(ctx, 1);
  options_free(&opts);
  if(argc == 1)
    unlink(pidfile);

  exit(0);
}

// nmblookup
// file cache.c line 89
static signed int nmblookup(const char *wg, struct stringlist *sl, struct hash_t *ipcache)
{
  char wg_cmd[512l];
  snprintf(wg_cmd, (unsigned long int)512, "nmblookup '%s'", wg);
  struct _IO_FILE *pipe;
  pipe=popen(wg_cmd, "r");
  signed int return_value_feof$3;
  const unsigned short int **return_value___ctype_b_loc$5;
  signed int return_value_feof$9;
  signed int return_value_feof$13;
  char *return_value___strdup$16;
  char *return_value___strdup$17;
  if(pipe == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    signed int ip_cmd_size = 8192;
    char *ip_cmd;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)ip_cmd_size * sizeof(char) /*1ul*/ );
    ip_cmd = (char *)return_value_malloc$1;
    if(ip_cmd == ((char *)NULL))
      return -1;

    else
    {
      strcpy(ip_cmd, "nmblookup -A ");
      signed int ip_cmd_len;
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(ip_cmd);
      ip_cmd_len = (signed int)return_value_strlen$2;
      do
      {
        return_value_feof$3=feof(pipe);
        if(!(return_value_feof$3 == 0))
          break;

        char nmblookup$$1$$1$$buf[4096l];
        char *return_value_fgets$4;
        return_value_fgets$4=fgets(nmblookup$$1$$1$$buf, 4096, pipe);
        if(!(return_value_fgets$4 == ((char *)NULL)))
        {
          char *pip = nmblookup$$1$$1$$buf;
          do
          {
            return_value___ctype_b_loc$5=__ctype_b_loc();
            if((2048 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*pip]) == 0)
            {
              if(!((signed int)*pip == 46))
              {
                if(!((signed int)*pip == 32))
                  break;

              }

            }

            pip = pip + 1l;
          }
          while((_Bool)1);
          *pip = (char)0;
          signed int len;
          unsigned long int return_value_strlen$6;
          return_value_strlen$6=strlen(nmblookup$$1$$1$$buf);
          len = (signed int)return_value_strlen$6;
          if(!(len == 0))
          {
            ip_cmd_len = ip_cmd_len + len;
            if(ip_cmd_len >= ip_cmd_size + -1)
            {
              ip_cmd_size = ip_cmd_size * 2;
              char *nmblookup$$1$$1$$2$$tmp;
              void *return_value_realloc$7;
              return_value_realloc$7=realloc((void *)ip_cmd, (unsigned long int)ip_cmd_size * sizeof(char) /*1ul*/ );
              nmblookup$$1$$1$$2$$tmp = (char *)return_value_realloc$7;
              if(nmblookup$$1$$1$$2$$tmp == ((char *)NULL))
              {
                ip_cmd_size = ip_cmd_size / 2;
                ip_cmd_len = ip_cmd_len - len;
                continue;
              }

              ip_cmd = nmblookup$$1$$1$$2$$tmp;
            }

            strcat(ip_cmd, nmblookup$$1$$1$$buf);
          }

        }

      }
      while((_Bool)1);
      pclose(pipe);
      unsigned long int return_value_strlen$8;
      return_value_strlen$8=strlen(ip_cmd);
      if(return_value_strlen$8 == 13ul)
      {
        free((void *)ip_cmd);
        return 0;
      }

      else
      {
        pipe=popen(ip_cmd, "r");
        if(pipe == ((struct _IO_FILE *)NULL))
        {
          free((void *)ip_cmd);
          return -1;
        }

        else
        {
          do
          {
            return_value_feof$9=feof(pipe);
            if(!(return_value_feof$9 == 0))
              break;

            char buf2[4096l];
            char buf[4096l];
            char ip[32l];
            char *start = buf;
            char *return_value_fgets$10;
            return_value_fgets$10=fgets(buf2, 4096, pipe);
            if(!(return_value_fgets$10 == ((char *)NULL)))
            {
              unsigned long int return_value_strlen$11;
              return_value_strlen$11=strlen("Looking up status of ");
              signed int return_value_strncmp$12;
              return_value_strncmp$12=strncmp(buf2, "Looking up status of ", return_value_strlen$11);
              if(return_value_strncmp$12 == 0)
              {
                char *tmp;
                tmp=rindex(buf2, 32);
                tmp = tmp + 1l;
                char *end;
                end=index(tmp, 10);
                *end = (char)0;
                strcpy(ip, tmp);
              }

              else
                continue;
              do
              {
                return_value_feof$13=feof(pipe);
                if(!(return_value_feof$13 == 0))
                  break;

                char *return_value_fgets$14;
                return_value_fgets$14=fgets(buf, 4096, pipe);
                if(return_value_fgets$14 == ((char *)NULL))
                  break;

                char *sep = buf;
                if(!((signed int)buf[0l] == 9))
                  break;

                char *return_value_strstr$15;
                return_value_strstr$15=strstr(buf, "<GROUP>");
                if(!(return_value_strstr$15 == ((char *)NULL)))
                  break;

                sep=strstr(buf, "<00>");
                if(sep == ((char *)NULL))
                  break;

                *sep = (char)0;
                start = start + 1l;
                for( ; (_Bool)1; sep = sep - 1l)
                {
                  if(!((signed int)*sep == 9))
                  {
                    if(!((signed int)*sep == 32))
                    {
                      if(!((signed int)*sep == 0))
                        goto __CPROVER_DUMP_L23;

                    }

                  }

                  *sep = (char)0;
                }

              __CPROVER_DUMP_L23:
                ;
                sl_add(sl, start, 1);
                struct hnode_t *return_value_hash_lookup$18;
                return_value_hash_lookup$18=hash_lookup(ipcache, (const void *)start);
                if(return_value_hash_lookup$18 == ((struct hnode_t *)NULL))
                {
                  return_value___strdup$16=__strdup(start);
                  return_value___strdup$17=__strdup(ip);
                  hash_alloc_insert(ipcache, (const void *)return_value___strdup$16, (void *)return_value___strdup$17);
                }

              }
              while((_Bool)1);
            }

          }
          while((_Bool)1);
          pclose(pipe);
          free((void *)ip_cmd);
          return 0;
        }
      }
    }
  }
}

// nmblookup$link1
// file smbctx.c line 29
static signed int nmblookup$link1(const char *ip_server, char *output, unsigned long int outputsize)
{
  char ipcmd[1024l] = { 'n', 'm', 'b', 'l', 'o', 'o', 'k', 'u', 'p', ' ', '-', 'A', ' ', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  strcat(ipcmd, ip_server);
  struct _IO_FILE *pipe$link1;
  pipe$link1=popen(ipcmd, "r");
  signed int return_value_feof$1;
  signed int return_value_feof$5;
  if(pipe$link1 == ((struct _IO_FILE *)NULL))
    return -1;

  else
  {
    do
    {
      return_value_feof$1=feof(pipe$link1);
      if(!(return_value_feof$1 == 0))
        break;

      char buf2[4096l];
      char buf$link1[4096l];
      char ip[32l];
      char *start = buf$link1;
      char *return_value_fgets$2;
      return_value_fgets$2=fgets(buf2, 4096, pipe$link1);
      if(!(return_value_fgets$2 == ((char *)NULL)))
      {
        unsigned long int return_value_strlen$3;
        return_value_strlen$3=strlen("Looking up status of ");
        signed int return_value_strncmp$4;
        return_value_strncmp$4=strncmp(buf2, "Looking up status of ", return_value_strlen$3);
        if(return_value_strncmp$4 == 0)
        {
          char *tmp$link1;
          tmp$link1=rindex(buf2, 32);
          tmp$link1 = tmp$link1 + 1l;
          char *end;
          end=index(tmp$link1, 10);
          *end = (char)0;
          strcpy(ip, tmp$link1);
        }

        else
          continue;
        do
        {
          return_value_feof$5=feof(pipe$link1);
          if(!(return_value_feof$5 == 0))
            break;

          char *return_value_fgets$6;
          return_value_fgets$6=fgets(buf$link1, 4096, pipe$link1);
          if(return_value_fgets$6 == ((char *)NULL))
            break;

          char *sep = buf$link1;
          if(!((signed int)buf$link1[0l] == 9))
            break;

          char *return_value_strstr$7;
          return_value_strstr$7=strstr(buf$link1, "<GROUP>");
          if(!(return_value_strstr$7 == ((char *)NULL)))
            break;

          sep=strstr(buf$link1, "<00>");
          if(sep == ((char *)NULL))
            break;

          *sep = (char)0;
          start = start + 1l;
          for( ; (_Bool)1; sep = sep - 1l)
          {
            if(!((signed int)*sep == 9))
            {
              if(!((signed int)*sep == 32))
              {
                if(!((signed int)*sep == 0))
                  goto __CPROVER_DUMP_L10;

              }

            }

            *sep = (char)0;
          }

        __CPROVER_DUMP_L10:
          ;
          __builtin_strncpy(output, start, outputsize);
        }
        while((_Bool)1);
      }

    }
    while((_Bool)1);
    pclose(pipe$link1);
    return 0;
  }
}

// options_free
// file cache.c line 72
static void options_free(struct fusesmb_cache_opt *opt)
{
  if(!(opt->ignore_servers == ((struct stringlist *)NULL)))
    sl_free(opt->ignore_servers);

  if(!(opt->ignore_workgroups == ((struct stringlist *)NULL)))
    sl_free(opt->ignore_workgroups);

}

// options_read
// file cache.c line 58
static void options_read(struct anonymous$0 *cfg, struct fusesmb_cache_opt *opt)
{
  opt->ignore_servers = (struct stringlist *)(void *)0;
  signed int return_value_config_read_stringlist$1;
  return_value_config_read_stringlist$1=config_read_stringlist(cfg, "ignore", "servers", &opt->ignore_servers, (char)44);
  if(return_value_config_read_stringlist$1 == -1)
    opt->ignore_servers = (struct stringlist *)(void *)0;

  opt->ignore_workgroups = (struct stringlist *)(void *)0;
  signed int return_value_config_read_stringlist$2;
  return_value_config_read_stringlist$2=config_read_stringlist(cfg, "ignore", "workgroups", &opt->ignore_workgroups, (char)44);
  if(return_value_config_read_stringlist$2 == -1)
    opt->ignore_workgroups = (struct stringlist *)(void *)0;

}

// server_listing
// file cache.c line 229
static signed int server_listing(struct _SMBCCTX *ctx, struct stringlist *cache, const char *wg, const char *sv, const char *ip)
{
  char tmp_path[4096l] = { 's', 'm', 'b', ':', '/', '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if(!(ip == ((const char *)NULL)))
    strcat(tmp_path, ip);

  else
    strcat(tmp_path, sv);
  struct smbc_dirent *share_dirent;
  struct _SMBCFILE *dir;
  dir=ctx->opendir(ctx, tmp_path);
  _Bool tmp_if_expr$1;
  signed int tmp_statement_expression$2;
  _Bool tmp_if_expr$6;
  signed int tmp_statement_expression$4;
  if(dir == ((struct _SMBCFILE *)NULL))
  {
    ctx->closedir(ctx, dir);
    return -1;
  }

  else
  {
    share_dirent=ctx->readdir(ctx, dir);
    if(!(share_dirent == ((struct smbc_dirent *)NULL)))
    {
      if(!(share_dirent->smbc_type == 3u))
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = share_dirent->namelen == (unsigned int)0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$1)
      {
        unsigned long int server_listing$$1$$4$$1$$__s1_len;
        unsigned long int server_listing$$1$$4$$1$$__s2_len;
        signed int return_value___builtin_strcmp$3;
        return_value___builtin_strcmp$3=__builtin_strcmp("ADMIN$", share_dirent->name);
        tmp_statement_expression$2 = return_value___builtin_strcmp$3;
        if(tmp_statement_expression$2 == 0)
          tmp_if_expr$6 = (_Bool)1;

        else
        {
          unsigned long int __s1_len;
          unsigned long int __s2_len;
          signed int return_value___builtin_strcmp$5;
          return_value___builtin_strcmp$5=__builtin_strcmp("print$", share_dirent->name);
          tmp_statement_expression$4 = return_value___builtin_strcmp$5;
          tmp_if_expr$6 = 0 == tmp_statement_expression$4 ? (_Bool)1 : (_Bool)0;
        }
        if(!tmp_if_expr$6)
        {
          signed int len;
          unsigned long int return_value_strlen$7;
          return_value_strlen$7=strlen(wg);
          unsigned long int return_value_strlen$8;
          return_value_strlen$8=strlen(sv);
          unsigned long int return_value_strlen$9;
          return_value_strlen$9=strlen(share_dirent->name);
          len = (signed int)(return_value_strlen$7 + return_value_strlen$8 + return_value_strlen$9 + (unsigned long int)4);
          const signed long int len$array_size0 = (signed long int)len;
          char tmp[len$array_size0];
          snprintf(tmp, (unsigned long int)len, "/%s/%s/%s", wg, sv, (const void *)share_dirent->name);
          pthread_mutex_lock(&cache_mutex);
          signed int return_value_sl_add$10;
          return_value_sl_add$10=sl_add(cache, tmp, 1);
          if(return_value_sl_add$10 == -1)
          {
            pthread_mutex_unlock(&cache_mutex);
            fprintf(stderr, "sl_add failed\n");
            ctx->closedir(ctx, dir);
            return -1;
          }

          pthread_mutex_unlock(&cache_mutex);
        }

      }

    }

    ctx->closedir(ctx, dir);
    return 0;
  }
}

// shrink_table
// file hash.c line 230
static void shrink_table(struct hash_t *hash)
{
  unsigned long int hash_chain;
  unsigned long int hash_nchains;
  struct hnode_t **newtable;
  struct hnode_t *low_tail;
  struct hnode_t *low_chain;
  struct hnode_t *high_chain;
  /* assertion hash->hash_nchains >= 2 */
  assert(hash->hash_nchains >= (unsigned long int)2);
  hash_nchains = hash->hash_nchains / (unsigned long int)2;
  hash_chain = (unsigned long int)0;
  _Bool tmp_if_expr$1;
  for( ; !(hash_chain >= hash_nchains); hash_chain = hash_chain + 1ul)
  {
    low_chain = hash->hash_table[(signed long int)hash_chain];
    high_chain = hash->hash_table[(signed long int)(hash_chain + hash_nchains)];
    low_tail = low_chain;
    do
    {
      if(!(low_tail == ((struct hnode_t *)NULL)))
        tmp_if_expr$1 = low_tail->hash_next != ((struct hnode_t *)NULL) ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(!tmp_if_expr$1)
        break;

      low_tail = low_tail->hash_next;
    }
    while((_Bool)1);
    if(!(low_chain == ((struct hnode_t *)NULL)))
      low_tail->hash_next = high_chain;

    else
      if(!(high_chain == ((struct hnode_t *)NULL)))
        hash->hash_table[(signed long int)hash_chain] = high_chain;

      else
        /* assertion hash->hash_table[hash_chain] == ((void *)0) */
        assert(hash->hash_table[(signed long int)hash_chain] == (struct hnode_t *)(void *)0);
  }
  void *return_value_realloc$2;
  return_value_realloc$2=realloc((void *)hash->hash_table, sizeof(struct hnode_t *) /*8ul*/  * hash_nchains);
  newtable = (struct hnode_t **)return_value_realloc$2;
  if(!(newtable == ((struct hnode_t **)NULL)))
    hash->hash_table = newtable;

  hash->hash_mask = hash->hash_mask >> 1;
  hash->hash_nchains = hash_nchains;
  hash->hash_lowmark = hash->hash_lowmark / (unsigned long int)2;
  hash->hash_highmark = hash->hash_highmark / (unsigned long int)2;
  signed int return_value_hash_verify$3;
  return_value_hash_verify$3=hash_verify(hash);
  /* assertion hash_verify(hash) */
  assert(return_value_hash_verify$3 != 0);
}

// sl_add
// file stringlist.h line 42
inline signed int sl_add(struct stringlist *sl, char *str, signed int do_malloc)
{
  if(sl->numlines == sl->maxlines)
  {
    char **new;
    void *return_value_realloc$1;
    return_value_realloc$1=realloc((void *)sl->lines, (sl->maxlines + (unsigned long int)128) * sizeof(char *) /*8ul*/ );
    new = (char **)return_value_realloc$1;
    if(new == ((char **)NULL))
      return -1;

    sl->maxlines = sl->maxlines + (unsigned long int)128;
    sl->lines = new;
  }

  if(!(do_malloc == 0))
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(str);
    void *return_value_malloc$3;
    return_value_malloc$3=malloc((return_value_strlen$2 + (unsigned long int)1) * sizeof(char) /*1ul*/ );
    sl->lines[(signed long int)sl->numlines] = (char *)return_value_malloc$3;
    if(sl->lines[(signed long int)sl->numlines] == ((char *)NULL))
      return -1;

    strcpy(sl->lines[(signed long int)sl->numlines], str);
    sl->numlines = sl->numlines + 1ul;
    sl->sorted = (char)0;
    return 0;
  }

  sl->lines[(signed long int)sl->numlines] = str;
  sl->numlines = sl->numlines + 1ul;
  sl->sorted = (char)0;
  return 0;
}

// sl_casefind
// file stringlist.c line 173
char * sl_casefind(struct stringlist *sl, const char *str)
{
  if((signed int)sl->sorted == 2)
  {
    char **res;
    unsigned long int return_value_sl_count$1;
    return_value_sl_count$1=sl_count(sl);
    void *return_value_bsearch$2;
    return_value_bsearch$2=bsearch((const void *)&str, (const void *)sl->lines, return_value_sl_count$1, sizeof(char *) /*8ul*/ , sl_strcasecmp);
    res = (char **)return_value_bsearch$2;
    if(!(res == ((char **)NULL)))
      return *res;

    return (char *)(void *)0;
  }

  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_sl_count$3;
  do
  {
    return_value_sl_count$3=sl_count(sl);
    if(i >= return_value_sl_count$3)
      break;

    char *return_value_sl_item$5;
    return_value_sl_item$5=sl_item(sl, i);
    signed int return_value_strcasecmp$6;
    return_value_strcasecmp$6=strcasecmp(return_value_sl_item$5, str);
    if(return_value_strcasecmp$6 == 0)
    {
      char *return_value_sl_item$4;
      return_value_sl_item$4=sl_item(sl, i);
      return return_value_sl_item$4;
    }

    i = i + 1ul;
  }
  while((_Bool)1);
  return (char *)(void *)0;
}

// sl_casesort
// file stringlist.h line 50
void sl_casesort(struct stringlist *sl)
{
  unsigned long int return_value_sl_count$1;
  return_value_sl_count$1=sl_count(sl);
  qsort((void *)sl->lines, return_value_sl_count$1, sizeof(char *) /*8ul*/ , sl_strcasecmp);
  sl->sorted = (char)2;
}

// sl_clear
// file stringlist.c line 124
void sl_clear(struct stringlist *sl)
{
  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_sl_count$1;
  do
  {
    return_value_sl_count$1=sl_count(sl);
    if(i >= return_value_sl_count$1)
      break;

    free((void *)sl->lines[(signed long int)i]);
    i = i + 1ul;
  }
  while((_Bool)1);
  sl->numlines = (unsigned long int)0;
}

// sl_count
// file stringlist.h line 43
inline unsigned long int sl_count(struct stringlist *sl)
{
  return sl->numlines;
}

// sl_find
// file stringlist.h line 45
char * sl_find(struct stringlist *sl, const char *str)
{
  if((signed int)sl->sorted == 1)
  {
    char **res;
    unsigned long int return_value_sl_count$1;
    return_value_sl_count$1=sl_count(sl);
    void *return_value_bsearch$2;
    return_value_bsearch$2=bsearch((const void *)&str, (const void *)sl->lines, return_value_sl_count$1, sizeof(char *) /*8ul*/ , sl_strcmp);
    res = (char **)return_value_bsearch$2;
    if(!(res == ((char **)NULL)))
      return *res;

    return (char *)(void *)0;
  }

  unsigned long int i = (unsigned long int)0;
  unsigned long int return_value_sl_count$3;
  signed int tmp_statement_expression$5;
  do
  {
    return_value_sl_count$3=sl_count(sl);
    if(i >= return_value_sl_count$3)
      break;

    unsigned long int __s1_len;
    unsigned long int __s2_len;
    char *return_value_sl_item$6;
    return_value_sl_item$6=sl_item(sl, i);
    signed int return_value___builtin_strcmp$7;
    return_value___builtin_strcmp$7=__builtin_strcmp(return_value_sl_item$6, str);
    tmp_statement_expression$5 = return_value___builtin_strcmp$7;
    if(tmp_statement_expression$5 == 0)
    {
      char *return_value_sl_item$4;
      return_value_sl_item$4=sl_item(sl, i);
      return return_value_sl_item$4;
    }

    i = i + 1ul;
  }
  while((_Bool)1);
  return (char *)(void *)0;
}

// sl_free
// file stringlist.h line 40
void sl_free(struct stringlist *sl)
{
  unsigned long int i;
  unsigned long int return_value_sl_count$1;
  if(!(sl == ((struct stringlist *)NULL)))
  {
    if(!(sl->lines == ((char **)NULL)))
    {
      i = (unsigned long int)0;
      do
      {
        return_value_sl_count$1=sl_count(sl);
        if(i >= return_value_sl_count$1)
          break;

        free((void *)sl->lines[(signed long int)i]);
        i = i + 1ul;
      }
      while((_Bool)1);
      free((void *)sl->lines);
    }

    free((void *)sl);
  }

}

// sl_init
// file stringlist.h line 39
struct stringlist * sl_init(void)
{
  struct stringlist *sl;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct stringlist) /*32ul*/ );
  sl = (struct stringlist *)return_value_malloc$1;
  if(sl == ((struct stringlist *)NULL))
    return (struct stringlist *)(void *)0;

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)128 * sizeof(char *) /*8ul*/ );
    sl->lines = (char **)return_value_malloc$2;
    if(sl->lines == ((char **)NULL))
      return (struct stringlist *)(void *)0;

    else
    {
      sl->maxlines = (unsigned long int)128;
      sl->numlines = (unsigned long int)0;
      sl->sorted = (char)0;
      return sl;
    }
  }
}

// sl_item
// file stringlist.h line 47
inline char * sl_item(struct stringlist *sl, unsigned long int index)
{
  unsigned long int return_value_sl_count$1;
  return_value_sl_count$1=sl_count(sl);
  if(return_value_sl_count$1 == 0ul)
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_sl_count$2;
    return_value_sl_count$2=sl_count(sl);
    if(index >= return_value_sl_count$2)
      return (char *)(void *)0;

    else
      return sl->lines[(signed long int)index];
  }
}

// sl_sort
// file stringlist.c line 198
void sl_sort(struct stringlist *sl)
{
  unsigned long int return_value_sl_count$1;
  return_value_sl_count$1=sl_count(sl);
  qsort((void *)sl->lines, return_value_sl_count$1, sizeof(char *) /*8ul*/ , sl_strcmp);
  sl->sorted = (char)1;
}

// sl_strcasecmp
// file stringlist.c line 36
static signed int sl_strcasecmp(const void *p1, const void *p2)
{
  signed int return_value_strcasecmp$1;
  return_value_strcasecmp$1=strcasecmp(*((char * const *)p1), *((char * const *)p2));
  return return_value_strcasecmp$1;
}

// sl_strcmp
// file stringlist.c line 31
static signed int sl_strcmp(const void *p1, const void *p2)
{
  signed int tmp_statement_expression$1;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$2;
  return_value___builtin_strcmp$2=__builtin_strcmp(*((char * const *)p1), *((char * const *)p2));
  tmp_statement_expression$1 = return_value___builtin_strcmp$2;
  return tmp_statement_expression$1;
}

// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat(const char *__path, struct stat *__statbuf)
{
  signed int return_value___xstat$1;
  return_value___xstat$1=__xstat(1, __path, __statbuf);
  return return_value___xstat$1;
}

// stat$link1
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 452
static inline signed int stat$link1(const char *__path$link1, struct stat *__statbuf$link1)
{
  signed int return_value___xstat$1$link1;
  return_value___xstat$1$link1=__xstat(1, __path$link1, __statbuf$link1);
  return return_value___xstat$1$link1;
}

// strip_whitespace
// file configfile.c line 53
static char * strip_whitespace(const char *str)
{
  char *start = (char *)str;
  char *end;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  end = (start + (signed long int)return_value_strlen$1) - (signed long int)1;
  for( ; (_Bool)1; start = start + 1l)
    if(!((signed int)*start == 9))
    {
      if(!((signed int)*start == 32))
        goto __CPROVER_DUMP_L3;

    }

  const unsigned short int **return_value___ctype_b_loc$2;
  do
  {

  __CPROVER_DUMP_L3:
    ;
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*end]) == 0)
      break;

    *end = (char)0;
    end = end - 1l;
  }
  while((_Bool)1);
  if((signed int)*start == 0)
    return (char *)(void *)0;

  else
    return start;
}

// strip_whitespace_check_comment
// file configfile.c line 37
static char * strip_whitespace_check_comment(const char *str)
{
  char *start = (char *)str;
  char *end;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  end = (start + (signed long int)return_value_strlen$1) - (signed long int)1;
  for( ; (_Bool)1; start = start + 1l)
    if(!((signed int)*start == 9))
    {
      if(!((signed int)*start == 32))
        goto __CPROVER_DUMP_L3;

    }

  const unsigned short int **return_value___ctype_b_loc$2;
  do
  {

  __CPROVER_DUMP_L3:
    ;
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*end]) == 0)
      break;

    *end = (char)0;
    end = end - 1l;
  }
  while((_Bool)1);
  _Bool tmp_if_expr$3;
  if((signed int)*start == 35)
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = (signed int)*start == 59 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$4;
  if(tmp_if_expr$3)
    tmp_if_expr$4 = (_Bool)1;

  else
    tmp_if_expr$4 = (signed int)*start == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$4)
    return (char *)(void *)0;

  else
    return start;
}

// workgroup_listing_thread
// file cache.c line 283
static void * workgroup_listing_thread(void *args)
{
  char *wg = (char *)args;
  struct hash_t *ip_cache;
  ip_cache=hash_create((unsigned long int)0x7fffffffffffffffL * 2UL + 1UL, (signed int (*)(const void *, const void *))(void *)0, (unsigned long int (*)(const void *))(void *)0);
  _Bool tmp_if_expr$1;
  signed int tmp_statement_expression$4;
  char *return_value_sl_item$13;
  char *return_value_sl_item$14;
  if(ip_cache == ((struct hash_t *)NULL))
    return (void *)0;

  else
  {
    struct stringlist *servers;
    servers=sl_init();
    if(servers == ((struct stringlist *)NULL))
    {
      fprintf(stderr, "Malloc failed\n");
      return (void *)0;
    }

    else
    {
      struct _SMBCCTX *ctx;
      ctx=fusesmb_cache_new_context(&cfg);
      struct _SMBCFILE *dir;
      char temp_path[4096l] = { 's', 'm', 'b', ':', '/', '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
      strcat(temp_path, wg);
      struct smbc_dirent *server_dirent;
      dir=ctx->opendir(ctx, temp_path);
      if(dir == ((struct _SMBCFILE *)NULL))
        ctx->closedir(ctx, dir);

      else
      {
        server_dirent=ctx->readdir(ctx, dir);
        if(!(server_dirent == ((struct smbc_dirent *)NULL)))
        {
          if(server_dirent->namelen == 0u)
            tmp_if_expr$1 = (_Bool)1;

          else
            tmp_if_expr$1 = server_dirent->smbc_type != (unsigned int)2 ? (_Bool)1 : (_Bool)0;
          if(!tmp_if_expr$1)
          {
            signed int return_value_sl_add$2;
            return_value_sl_add$2=sl_add(servers, server_dirent->name, 1);
          }

        }

        ctx->closedir(ctx, dir);
      }

    use_popen:
      ;
      nmblookup(wg, servers, ip_cache);
      sl_casesort(servers);
      unsigned long int i = (unsigned long int)0;
      unsigned long int return_value_sl_count$3;
      return_value_sl_count$3=sl_count(servers);
      if(!(i >= return_value_sl_count$3))
      {
        if(i >= 1ul)
        {
          unsigned long int __s1_len;
          unsigned long int __s2_len;
          char *return_value_sl_item$5;
          return_value_sl_item$5=sl_item(servers, i);
          char *return_value_sl_item$6;
          return_value_sl_item$6=sl_item(servers, i - (unsigned long int)1);
          signed int return_value___builtin_strcmp$7;
          return_value___builtin_strcmp$7=__builtin_strcmp(return_value_sl_item$5, return_value_sl_item$6);
          tmp_statement_expression$4 = return_value___builtin_strcmp$7;
        }

        if(!(opts.ignore_servers == ((struct stringlist *)NULL)))
        {
          char *return_value_sl_item$8;
          return_value_sl_item$8=sl_item(servers, i);
          char *return_value_sl_find$9;
          return_value_sl_find$9=sl_find(opts.ignore_servers, return_value_sl_item$8);
        }

        char sv[1024l] = { '/', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
        char *return_value_sl_item$10;
        return_value_sl_item$10=sl_item(servers, i);
        strcat(sv, return_value_sl_item$10);
        signed int ignore = 0;
        signed int return_value_config_read_bool$11;
        return_value_config_read_bool$11=config_read_bool(&cfg, sv, "ignore", &ignore);
        if(!(return_value_config_read_bool$11 == 0))
        {
          struct hnode_t *node;
          char *return_value_sl_item$12;
          return_value_sl_item$12=sl_item(servers, i);
          node=hash_lookup(ip_cache, (const void *)return_value_sl_item$12);
          if(node == ((struct hnode_t *)NULL))
          {
            return_value_sl_item$13=sl_item(servers, i);
            server_listing(ctx, cache, wg, return_value_sl_item$13, (const char *)(void *)0);
          }

          else
          {
            return_value_sl_item$14=sl_item(servers, i);
            server_listing(ctx, cache, wg, return_value_sl_item$14, (const char *)node->hash_data);
          }
        }

        i = i + 1ul;
      }

      struct hscan_t sc;
      struct hnode_t *n;
      hash_scan_begin(&sc, ip_cache);
      n=hash_scan_next(&sc);
      if(!(n == ((struct hnode_t *)NULL)))
      {
        void *data = n->hash_data;
        const void *key = n->hash_key;
        hash_scan_delfree(ip_cache, n);
        free((void *)key);
        free(data);
      }

      hash_destroy(ip_cache);
      sl_free(servers);
      smbc_free_context(ctx, 1);
      return NULL;
    }
  }
}

