// #anon_enum$DB_BACKUP_READ_COUNT=1$DB_BACKUP_READ_SLEEP=2$DB_BACKUP_SIZE=3$DB_BACKUP_WRITE_DIRECT=4
// file /usr/include/db.h line 2269
enum anonymous$0 { DB_BACKUP_READ_COUNT=1, DB_BACKUP_READ_SLEEP=2, DB_BACKUP_SIZE=3, DB_BACKUP_WRITE_DIRECT=4 };

// #anon_enum$DB_BTREE=1$DB_HASH=2$DB_HEAP=6$DB_RECNO=3$DB_QUEUE=4$DB_UNKNOWN=5
// file /usr/include/db.h line 1292
enum anonymous$17 { DB_BTREE=1, DB_HASH=2, DB_HEAP=6, DB_RECNO=3, DB_QUEUE=4, DB_UNKNOWN=5 };

// #anon_enum$DB_LOCK_DUMP=0$DB_LOCK_GET=1$DB_LOCK_GET_TIMEOUT=2$DB_LOCK_INHERIT=3$DB_LOCK_PUT=4$DB_LOCK_PUT_ALL=5$DB_LOCK_PUT_OBJ=6$DB_LOCK_PUT_READ=7$DB_LOCK_TIMEOUT=8$DB_LOCK_TRADE=9$DB_LOCK_UPGRADE_WRITE=10
// file /usr/include/db.h line 325
enum anonymous$12 { DB_LOCK_DUMP=0, DB_LOCK_GET=1, DB_LOCK_GET_TIMEOUT=2, DB_LOCK_INHERIT=3, DB_LOCK_PUT=4, DB_LOCK_PUT_ALL=5, DB_LOCK_PUT_OBJ=6, DB_LOCK_PUT_READ=7, DB_LOCK_TIMEOUT=8, DB_LOCK_TRADE=9, DB_LOCK_UPGRADE_WRITE=10 };

// #anon_enum$DB_LOCK_NG=0$DB_LOCK_READ=1$DB_LOCK_WRITE=2$DB_LOCK_WAIT=3$DB_LOCK_IWRITE=4$DB_LOCK_IREAD=5$DB_LOCK_IWR=6$DB_LOCK_READ_UNCOMMITTED=7$DB_LOCK_WWRITE=8
// file /usr/include/db.h line 310
enum anonymous$7 { DB_LOCK_NG=0, DB_LOCK_READ=1, DB_LOCK_WRITE=2, DB_LOCK_WAIT=3, DB_LOCK_IWRITE=4, DB_LOCK_IREAD=5, DB_LOCK_IWR=6, DB_LOCK_READ_UNCOMMITTED=7, DB_LOCK_WWRITE=8 };

// #anon_enum$DB_MEM_LOCK=1$DB_MEM_LOCKOBJECT=2$DB_MEM_LOCKER=3$DB_MEM_LOGID=4$DB_MEM_TRANSACTION=5$DB_MEM_THREAD=6
// file /usr/include/db.h line 2257
enum anonymous$1 { DB_MEM_LOCK=1, DB_MEM_LOCKOBJECT=2, DB_MEM_LOCKER=3, DB_MEM_LOGID=4, DB_MEM_TRANSACTION=5, DB_MEM_THREAD=6 };

// #anon_enum$DB_PRIORITY_UNCHANGED=0$DB_PRIORITY_VERY_LOW=1$DB_PRIORITY_LOW=2$DB_PRIORITY_DEFAULT=3$DB_PRIORITY_HIGH=4$DB_PRIORITY_VERY_HIGH=5
// file /usr/include/db.h line 618
enum anonymous$16 { DB_PRIORITY_UNCHANGED=0, DB_PRIORITY_VERY_LOW=1, DB_PRIORITY_LOW=2, DB_PRIORITY_DEFAULT=3, DB_PRIORITY_HIGH=4, DB_PRIORITY_VERY_HIGH=5 };

// #anon_enum$DB_TXN_ABORT=0$DB_TXN_APPLY=1$DB_TXN_BACKWARD_ROLL=3$DB_TXN_FORWARD_ROLL=4$DB_TXN_OPENFILES=5$DB_TXN_POPENFILES=6$DB_TXN_PRINT=7$DB_TXN_LOG_VERIFY=8
// file /usr/include/db.h line 794
enum anonymous { DB_TXN_ABORT=0, DB_TXN_APPLY=1, DB_TXN_BACKWARD_ROLL=3, DB_TXN_FORWARD_ROLL=4, DB_TXN_OPENFILES=5, DB_TXN_POPENFILES=6, DB_TXN_PRINT=7, DB_TXN_LOG_VERIFY=8 };

// #anon_enum$LOGREC_Done=0$LOGREC_ARG=1$LOGREC_HDR=2$LOGREC_DATA=3$LOGREC_DB=4$LOGREC_DBOP=5$LOGREC_DBT=6$LOGREC_LOCKS=7$LOGREC_OP=8$LOGREC_PGDBT=9$LOGREC_PGDDBT=10$LOGREC_PGLIST=11$LOGREC_POINTER=12$LOGREC_TIME=13
// file /usr/include/db.h line 584
enum anonymous$14 { LOGREC_Done=0, LOGREC_ARG=1, LOGREC_HDR=2, LOGREC_DATA=3, LOGREC_DB=4, LOGREC_DBOP=5, LOGREC_DBT=6, LOGREC_LOCKS=7, LOGREC_OP=8, LOGREC_PGDBT=9, LOGREC_PGDDBT=10, LOGREC_PGLIST=11, LOGREC_POINTER=12, LOGREC_TIME=13 };

// tag-#anon#ST[*{SYM#tag-__db#}$SYM#tag-__db#$'le_next'||*{*{SYM#tag-__db#}$SYM#tag-__db#$}$*{SYM#tag-__db#}$SYM#tag-__db#$$'le_prev'|]
// file /usr/include/db.h line 1548
struct anonymous$20;

// tag-#anon#ST[*{SYM#tag-__db#}$SYM#tag-__db#$'lh_first'|]
// file /usr/include/db.h line 1532
struct anonymous$19;

// tag-#anon#ST[*{SYM#tag-__db#}$SYM#tag-__db#$'tqe_next'||*{*{SYM#tag-__db#}$SYM#tag-__db#$}$*{SYM#tag-__db#}$SYM#tag-__db#$$'tqe_prev'|]
// file /usr/include/db.h line 1496
struct anonymous$18;

// tag-#anon#ST[*{SYM#tag-__db_foreign_info#}$SYM#tag-__db_foreign_info#$'lh_first'|]
// file /usr/include/db.h line 1575
struct anonymous$21;

// tag-#anon#ST[*{SYM#tag-__db_mpoolfile#}$SYM#tag-__db_mpoolfile#$'tqe_next'||*{*{SYM#tag-__db_mpoolfile#}$SYM#tag-__db_mpoolfile#$}$*{SYM#tag-__db_mpoolfile#}$SYM#tag-__db_mpoolfile#$$'tqe_prev'|]
// file /usr/include/db.h line 644
struct anonymous$5;

// tag-#anon#ST[*{SYM#tag-__db_txn#}$SYM#tag-__db_txn#$'tqe_next'||*{*{SYM#tag-__db_txn#}$SYM#tag-__db_txn#$}$*{SYM#tag-__db_txn#}$SYM#tag-__db_txn#$$'tqe_prev'|]
// file /usr/include/db.h line 832
struct anonymous$8;

// tag-#anon#ST[*{SYM#tag-__dbc#}$SYM#tag-__dbc#$'tqe_next'||*{*{SYM#tag-__dbc#}$SYM#tag-__dbc#$}$*{SYM#tag-__dbc#}$SYM#tag-__dbc#$$'tqe_prev'|]
// file /usr/include/db.h line 2027
struct anonymous$15;

// tag-#anon#ST[*{SYM#tag-__txn_event#}$SYM#tag-__txn_event#$'tqh_first'||*{*{SYM#tag-__txn_event#}$SYM#tag-__txn_event#$}$*{SYM#tag-__txn_event#}$SYM#tag-__txn_event#$$'tqh_last'|]
// file /usr/include/db.h line 864
struct anonymous$10;

// tag-#anon#ST[*{SYM#tag-__txn_logrec#}$SYM#tag-__txn_logrec#$'stqh_first'||*{*{SYM#tag-__txn_logrec#}$SYM#tag-__txn_logrec#$}$*{SYM#tag-__txn_logrec#}$SYM#tag-__txn_logrec#$$'stqh_last'|]
// file /usr/include/db.h line 874
struct anonymous$11;

// tag-#anon#ST[ARR512{S8}$S8$'regular_expression'||*{SYM#tag-real_pcre#}$SYM#tag-real_pcre#$'re_pcre'||S32'erroffset'||U32'$pad0'||*{cS8}$cS8$'error'||ARR300{S32}$S32$'ovector'||S32'ret'||S32'cp_substr_ret'|]
// file dnshistory.h line 152
struct anonymous$6;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$2;

// tag-#anon#ST[S64'stqe_next'||S64'stqe_prev'|]
// file /usr/include/db.h line 844
struct anonymous$9;

// tag-#anon#ST[SYM#tag-in_addr#'ipaddress'||U32'$pad0'||S64'date_last'||*{SYM#tag-dns_record_lists_t#}$SYM#tag-dns_record_lists_t#$'list'|]
// file dnshistory.h line 139
struct anonymous$13;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$3;

// tag-_IO_FILE
// file /usr/include/stdio.h line 44
struct _IO_FILE;

// tag-_IO_marker
// file /usr/include/libio.h line 160
struct _IO_marker;

// tag-__channel
// file /usr/include/db.h line 151
struct __channel;

// tag-__cq_aq
// file /usr/include/db.h line 1514
struct __cq_aq;

// tag-__cq_fq
// file /usr/include/db.h line 1510
struct __cq_fq;

// tag-__cq_jq
// file /usr/include/db.h line 1518
struct __cq_jq;

// tag-__db
// file /usr/include/db.h line 152
struct __db;

// tag-__db_channel
// file /usr/include/db.h line 154
struct __db_channel;

// tag-__db_compact
// file /usr/include/db.h line 156
struct __db_compact;

// tag-__db_dbt
// file /usr/include/db.h line 157
struct __db_dbt;

// tag-__db_env
// file /usr/include/db.h line 159
struct __db_env;

// tag-__db_foreign_info
// file /usr/include/db.h line 1576
struct __db_foreign_info;

// tag-__db_ilock
// file /usr/include/db.h line 163
struct __db_ilock;

// tag-__db_lock_stat
// file /usr/include/db.h line 166
struct __db_lock_stat;

// tag-__db_lock_u
// file /usr/include/db.h line 167
struct __db_lock_u;

// tag-__db_locker
// file /usr/include/db.h line 168
struct __db_locker;

// tag-__db_lockreq
// file /usr/include/db.h line 169
struct __db_lockreq;

// tag-__db_log_cursor
// file /usr/include/db.h line 172
struct __db_log_cursor;

// tag-__db_log_stat
// file /usr/include/db.h line 173
struct __db_log_stat;

// tag-__db_logvrfy_config
// file /usr/include/db.h line 207
struct __db_logvrfy_config;

// tag-__db_lsn
// file /usr/include/db.h line 174
struct __db_lsn;

// tag-__db_mpool_fstat
// file /usr/include/db.h line 176
struct __db_mpool_fstat;

// tag-__db_mpool_stat
// file /usr/include/db.h line 177
struct __db_mpool_stat;

// tag-__db_mpoolfile
// file /usr/include/db.h line 178
struct __db_mpoolfile;

// tag-__db_mutex_stat
// file /usr/include/db.h line 179
struct __db_mutex_stat;

// tag-__db_preplist
// file /usr/include/db.h line 182
struct __db_preplist;

// tag-__db_rep_stat
// file /usr/include/db.h line 185
struct __db_rep_stat;

// tag-__db_repmgr_site
// file /usr/include/db.h line 188
struct __db_repmgr_site;

// tag-__db_repmgr_stat
// file /usr/include/db.h line 189
struct __db_repmgr_stat;

// tag-__db_site
// file /usr/include/db.h line 192
struct __db_site;

// tag-__db_thread_info
// file /usr/include/db.h line 194
struct __db_thread_info;

// tag-__db_txn
// file /usr/include/db.h line 195
struct __db_txn;

// tag-__db_txn_active
// file /usr/include/db.h line 196
struct __db_txn_active;

// tag-__db_txn_stat
// file /usr/include/db.h line 197
struct __db_txn_stat;

// tag-__db_txn_token
// file /usr/include/db.h line 198
struct __db_txn_token;

// tag-__db_txnmgr
// file /usr/include/db.h line 199
struct __db_txnmgr;

// tag-__dbc
// file /usr/include/db.h line 200
struct __dbc;

// tag-__dbc_internal
// file /usr/include/db.h line 201
struct __dbc_internal;

// tag-__env
// file /usr/include/db.h line 202
struct __env;

// tag-__femfs
// file /usr/include/db.h line 906
struct __femfs;

// tag-__fh_t
// file /usr/include/db.h line 203
struct __fh_t;

// tag-__fname
// file /usr/include/db.h line 204
struct __fname;

// tag-__key_range
// file /usr/include/db.h line 205
struct __key_range;

// tag-__kids
// file /usr/include/db.h line 854
struct __kids;

// tag-__log_rec_spec
// file /usr/include/db.h line 601
struct __log_rec_spec;

// tag-__mpoolfile
// file /usr/include/db.h line 206
struct __mpoolfile;

// tag-__my_cursors
// file /usr/include/db.h line 894
struct __my_cursors;

// tag-__pthread_internal_list
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 75
struct __pthread_internal_list;

// tag-__pthread_mutex_s
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 92
struct __pthread_mutex_s;

// tag-__txn_event
// file /usr/include/db.h line 865
struct __txn_event;

// tag-__txn_logrec
// file /usr/include/db.h line 875
struct __txn_logrec;

// tag-buffer_position_struct
// file dnshistory.h line 145
struct buffer_position_struct;

// tag-dns_record_lists_t
// file dnshistory.h line 133
struct dns_record_lists_t;

// tag-gzFile_s
// file /usr/include/zlib.h line 1224
struct gzFile_s;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pcre_extra
// file /usr/include/pcre.h line 376
struct pcre_extra;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-real_pcre
// file /usr/include/pcre.h line 324
struct real_pcre;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __strpbrk_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1100
static inline char * __strpbrk_c2(const char *__s, signed int __accept1, signed int __accept2);
// __strpbrk_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1111
static inline char * __strpbrk_c3(const char *__s, signed int __accept1, signed int __accept2, signed int __accept3);
// add_address
// file dnshistory.c line 742
void add_address(char *str_ipaddr);
// add_new_address
// file dnshistory.c line 1195
void * add_new_address(void *arg);
// add_old_address
// file dnshistory.c line 1251
void * add_old_address(void *arg);
// add_recombined_address
// file dnshistory.c line 953
void add_recombined_address(char *str_ipaddr, char *str_fqdn, char *str_time);
// add_record
// file db_dnshistory.h line 49
extern void add_record(struct __db **db_ptr, void *key_val, signed int size_key, void *data_val, signed int size_data);
// address_exists
// file dnshistory.c line 1459
signed int address_exists(struct anonymous$13 *dns_rec_ptr);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_n_fix_fqdn
// file dnshistory.c line 1936
void check_n_fix_fqdn(char *fqdn);
// close_dnshistory_db
// file db_dnshistory.h line 48
extern signed int close_dnshistory_db(struct __db **db_ptr);
// close_exit
// file dnshistory.c line 1444
void close_exit(signed int exit_code);
// db_create
// file /usr/include/db.h line 3049
signed int db_create(struct __db **, struct __db_env *, unsigned int);
// db_strerror
// file /usr/include/db.h line 3050
char * db_strerror(signed int);
// decrease_thread_counter
// file dnshistory.c line 1167
void decrease_thread_counter(void);
// delete_record
// file db_dnshistory.c line 171
extern void delete_record(struct __db **db_ptr, char *key_val);
// difftime
// file /usr/include/time.h line 195
extern double difftime(signed long int, signed long int);
// display_gnu_info
// file options.c line 138
void display_gnu_info(signed int exit_code);
// display_record
// file dnshistory.c line 1626
void display_record(struct __db_dbt *dbt_key, struct __db_dbt *dbt_data, _Bool realdate);
// display_usage
// file options.c line 95
void display_usage(signed int exit_code);
// display_version
// file options.c line 82
void display_version(void);
// drop_long_lines
// file dnshistory.c line 1350
void drop_long_lines(struct gzFile_s **file_input, char *buffer_ptr, struct buffer_position_struct *buf_posn);
// dump_dns_historydb
// file dnshistory.c line 1701
void dump_dns_historydb(struct __db **db_ptr);
// error_substring_extract
// file regexp.h line 49
extern void error_substring_extract(char *failed_pattern, char *text, signed int substr_idx, signed int err, unsigned long int line_nbr);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// get_log_line
// file dnshistory.c line 1384
char * get_log_line(char *buf, signed int size, struct gzFile_s **file_ptr, struct buffer_position_struct *buf_posn);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gzopen
// file /usr/include/zlib.h line 1725
extern struct gzFile_s * gzopen(const char *, const char *);
// gzread
// file /usr/include/zlib.h line 1313
extern signed int gzread(struct gzFile_s *, void *, unsigned int);
// identify_log_format
// file dnshistory.c line 1961
signed int identify_log_format(char *buffer);
// import_dns_historydb
// file dnshistory.c line 1736
void import_dns_historydb(void);
// increase_thread_counter
// file dnshistory.c line 1138
void increase_thread_counter(void);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// localtime_r
// file /usr/include/time.h line 254
extern struct tm * localtime_r(const signed long int *, struct tm *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mktime
// file /usr/include/time.h line 199
extern signed long int mktime(struct tm *);
// name_lookup
// file dnshistory.c line 1054
signed int name_lookup(struct in_addr ipaddr, char *host_name);
// name_lookup_errors
// file dnshistory.c line 1326
void name_lookup_errors(signed int error_code);
// open_dnshistory_db
// file db_dnshistory.h line 47
extern void open_dnshistory_db(struct __db **db_ptr, char *db_dirfilename, unsigned int cache_size, unsigned int flags);
// pcre_compile
// file /usr/include/pcre.h line 540
extern struct real_pcre * pcre_compile(const char *, signed int, const char **, signed int *, const unsigned char *);
// pcre_copy_substring
// file /usr/include/pcre.h line 561
extern signed int pcre_copy_substring(const char *, signed int *, signed int, signed int, char *, signed int);
// pcre_exec
// file /usr/include/pcre.h line 573
extern signed int pcre_exec(const struct real_pcre *, const struct pcre_extra *, const char *, signed int, signed int, signed int, signed int *, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_options
// file dnshistory.h line 201
void process_options(signed int argc, char **argv);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setstacksize
// file /usr/include/pthread.h line 377
extern signed int pthread_attr_setstacksize(union pthread_attr_t *, unsigned long int);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$4 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$4 *, union anonymous$3 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_detach
// file /usr/include/pthread.h line 273
extern signed int pthread_detach(unsigned long int);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$3 *);
// pthread_self
// file /usr/include/pthread.h line 277
extern unsigned long int pthread_self(void);
// re_check_errors
// file regexp.h line 48
extern void re_check_errors(signed int err, unsigned long int line_nbr, char *str_ptr);
// re_compile_all_regexes
// file dnshistory.c line 2022
void re_compile_all_regexes(void);
// re_compile_failed
// file regexp.h line 47
extern void re_compile_failed(signed int err, const char *err_offset, char *re_str);
// retrieve_address
// file dnshistory.c line 857
void retrieve_address(char *str_ipaddr, char *str_fqdn, char *str_time);
// showhistory
// file dnshistory.c line 1886
void showhistory(struct __db **db_ptr, signed int argc, char **argv);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// store_dns_records
// file dnshistory.c line 1553
void store_dns_records(struct anonymous$13 *dns_rec_ptr);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strptime
// file /usr/include/time.h line 213
extern char * strptime(const char *, const char *, struct tm *);
// strtoul
// file /usr/include/stdlib.h line 187
extern unsigned long int strtoul(const char *, char ** restrict , signed int);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// xmalloc
// file xmalloc.h line 46
extern void * xmalloc(unsigned long int size);

struct anonymous$20
{
  // le_next
  struct __db *le_next;
  // le_prev
  struct __db **le_prev;
};

struct anonymous$19
{
  // lh_first
  struct __db *lh_first;
};

struct anonymous$18
{
  // tqe_next
  struct __db *tqe_next;
  // tqe_prev
  struct __db **tqe_prev;
};

struct anonymous$21
{
  // lh_first
  struct __db_foreign_info *lh_first;
};

struct anonymous$5
{
  // tqe_next
  struct __db_mpoolfile *tqe_next;
  // tqe_prev
  struct __db_mpoolfile **tqe_prev;
};

struct anonymous$8
{
  // tqe_next
  struct __db_txn *tqe_next;
  // tqe_prev
  struct __db_txn **tqe_prev;
};

struct anonymous$15
{
  // tqe_next
  struct __dbc *tqe_next;
  // tqe_prev
  struct __dbc **tqe_prev;
};

struct anonymous$10
{
  // tqh_first
  struct __txn_event *tqh_first;
  // tqh_last
  struct __txn_event **tqh_last;
};

struct anonymous$11
{
  // stqh_first
  struct __txn_logrec *stqh_first;
  // stqh_last
  struct __txn_logrec **stqh_last;
};

struct anonymous$6
{
  // regular_expression
  char regular_expression[512l];
  // re_pcre
  struct real_pcre *re_pcre;
  // erroffset
  signed int erroffset;
  // error
  const char *error;
  // ovector
  signed int ovector[300l];
  // ret
  signed int ret;
  // cp_substr_ret
  signed int cp_substr_ret;
};

struct anonymous$2
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

struct anonymous$9
{
  // stqe_next
  signed long int stqe_next;
  // stqe_prev
  signed long int stqe_prev;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct anonymous$13
{
  // ipaddress
  struct in_addr ipaddress;
  // date_last
  signed long int date_last;
  // list
  struct dns_record_lists_t *list;
};

union anonymous$4
{
  // __data
  struct anonymous$2 __data;
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

struct __cq_aq
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __cq_fq
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __cq_jq
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __db_lock_u
{
  // off
  unsigned long int off;
  // ndx
  unsigned int ndx;
  // gen
  unsigned int gen;
  // mode
  enum anonymous$7 mode;
};

struct __db_dbt
{
  // data
  void *data;
  // size
  unsigned int size;
  // ulen
  unsigned int ulen;
  // dlen
  unsigned int dlen;
  // doff
  unsigned int doff;
  // app_data
  void *app_data;
  // flags
  unsigned int flags;
};

struct __db
{
  // pgsize
  unsigned int pgsize;
  // priority
  enum anonymous$16 priority;
  // db_append_recno
  signed int (*db_append_recno)(struct __db *, struct __db_dbt *, unsigned int);
  // db_feedback
  void (*db_feedback)(struct __db *, signed int, signed int);
  // dup_compare
  signed int (*dup_compare)(struct __db *, const struct __db_dbt *, const struct __db_dbt *);
  // app_private
  void *app_private;
  // dbenv
  struct __db_env *dbenv;
  // env
  struct __env *env;
  // type
  enum anonymous$17 type;
  // mpf
  struct __db_mpoolfile *mpf;
  // mutex
  unsigned long int mutex;
  // fname
  char *fname;
  // dname
  char *dname;
  // dirname
  const char *dirname;
  // open_flags
  unsigned int open_flags;
  // fileid
  unsigned char fileid[20l];
  // adj_fileid
  unsigned int adj_fileid;
  // log_filename
  struct __fname *log_filename;
  // meta_pgno
  unsigned int meta_pgno;
  // locker
  struct __db_locker *locker;
  // cur_locker
  struct __db_locker *cur_locker;
  // cur_txn
  struct __db_txn *cur_txn;
  // associate_locker
  struct __db_locker *associate_locker;
  // handle_lock
  struct __db_lock_u handle_lock;
  // timestamp
  signed long int timestamp;
  // fid_gen
  unsigned int fid_gen;
  // my_rskey
  struct __db_dbt my_rskey;
  // my_rkey
  struct __db_dbt my_rkey;
  // my_rdata
  struct __db_dbt my_rdata;
  // saved_open_fhp
  struct __fh_t *saved_open_fhp;
  // dblistlinks
  struct anonymous$18 dblistlinks;
  // free_queue
  struct __cq_fq free_queue;
  // active_queue
  struct __cq_aq active_queue;
  // join_queue
  struct __cq_jq join_queue;
  // s_secondaries
  struct anonymous$19 s_secondaries;
  // s_links
  struct anonymous$20 s_links;
  // s_refcnt
  unsigned int s_refcnt;
  // s_callback
  signed int (*s_callback)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *);
  // s_primary
  struct __db *s_primary;
  // s_assoc_flags
  unsigned int s_assoc_flags;
  // f_primaries
  struct anonymous$21 f_primaries;
  // felink
  struct anonymous$18 felink;
  // s_foreign
  struct __db *s_foreign;
  // api_internal
  void *api_internal;
  // bt_internal
  void *bt_internal;
  // h_internal
  void *h_internal;
  // heap_internal
  void *heap_internal;
  // p_internal
  void *p_internal;
  // q_internal
  void *q_internal;
  // associate
  signed int (*associate)(struct __db *, struct __db_txn *, struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *), unsigned int);
  // associate_foreign
  signed int (*associate_foreign)(struct __db *, struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, struct __db_dbt *, const struct __db_dbt *, signed int *), unsigned int);
  // close
  signed int (*close)(struct __db *, unsigned int);
  // compact
  signed int (*compact)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, struct __db_compact *, unsigned int, struct __db_dbt *);
  // cursor
  signed int (*cursor)(struct __db *, struct __db_txn *, struct __dbc **, unsigned int);
  // del
  signed int (*del)(struct __db *, struct __db_txn *, struct __db_dbt *, unsigned int);
  // err
  void (*err)(struct __db *, signed int, const char *, ...);
  // errx
  void (*errx)(struct __db *, const char *, ...);
  // exists
  signed int (*exists)(struct __db *, struct __db_txn *, struct __db_dbt *, unsigned int);
  // fd
  signed int (*fd)(struct __db *, signed int *);
  // get
  signed int (*get)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // get_alloc
  signed int (*get_alloc)(struct __db *, void * (**)(unsigned long int), void * (**)(void *, unsigned long int), void (**)(void *));
  // get_append_recno
  signed int (*get_append_recno)(struct __db *, signed int (**)(struct __db *, struct __db_dbt *, unsigned int));
  // get_assoc_flags
  signed int (*get_assoc_flags)(struct __db *, unsigned int *);
  // get_bt_compare
  signed int (*get_bt_compare)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_bt_compress
  signed int (*get_bt_compress)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *), signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *));
  // get_bt_minkey
  signed int (*get_bt_minkey)(struct __db *, unsigned int *);
  // get_bt_prefix
  signed int (*get_bt_prefix)(struct __db *, unsigned long int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_byteswapped
  signed int (*get_byteswapped)(struct __db *, signed int *);
  // get_cachesize
  signed int (*get_cachesize)(struct __db *, unsigned int *, unsigned int *, signed int *);
  // get_create_dir
  signed int (*get_create_dir)(struct __db *, const char **);
  // get_dbname
  signed int (*get_dbname)(struct __db *, const char **, const char **);
  // get_dup_compare
  signed int (*get_dup_compare)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_encrypt_flags
  signed int (*get_encrypt_flags)(struct __db *, unsigned int *);
  // get_env
  struct __db_env * (*get_env)(struct __db *);
  // get_errcall
  void (*get_errcall)(struct __db *, void (**)(const struct __db_env *, const char *, const char *));
  // get_errfile
  void (*get_errfile)(struct __db *, struct _IO_FILE **);
  // get_errpfx
  void (*get_errpfx)(struct __db *, const char **);
  // get_feedback
  signed int (*get_feedback)(struct __db *, void (**)(struct __db *, signed int, signed int));
  // get_flags
  signed int (*get_flags)(struct __db *, unsigned int *);
  // get_h_compare
  signed int (*get_h_compare)(struct __db *, signed int (**)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // get_h_ffactor
  signed int (*get_h_ffactor)(struct __db *, unsigned int *);
  // get_h_hash
  signed int (*get_h_hash)(struct __db *, unsigned int (**)(struct __db *, const void *, unsigned int));
  // get_h_nelem
  signed int (*get_h_nelem)(struct __db *, unsigned int *);
  // get_heapsize
  signed int (*get_heapsize)(struct __db *, unsigned int *, unsigned int *);
  // get_heap_regionsize
  signed int (*get_heap_regionsize)(struct __db *, unsigned int *);
  // get_lk_exclusive
  signed int (*get_lk_exclusive)(struct __db *, signed int *, signed int *);
  // get_lorder
  signed int (*get_lorder)(struct __db *, signed int *);
  // get_mpf
  struct __db_mpoolfile * (*get_mpf)(struct __db *);
  // get_msgcall
  void (*get_msgcall)(struct __db *, void (**)(const struct __db_env *, const char *));
  // get_msgfile
  void (*get_msgfile)(struct __db *, struct _IO_FILE **);
  // get_multiple
  signed int (*get_multiple)(struct __db *);
  // get_open_flags
  signed int (*get_open_flags)(struct __db *, unsigned int *);
  // get_pagesize
  signed int (*get_pagesize)(struct __db *, unsigned int *);
  // get_partition_callback
  signed int (*get_partition_callback)(struct __db *, unsigned int *, unsigned int (**)(struct __db *, struct __db_dbt *));
  // get_partition_dirs
  signed int (*get_partition_dirs)(struct __db *, const char ***);
  // get_partition_keys
  signed int (*get_partition_keys)(struct __db *, unsigned int *, struct __db_dbt **);
  // get_priority
  signed int (*get_priority)(struct __db *, enum anonymous$16 *);
  // get_q_extentsize
  signed int (*get_q_extentsize)(struct __db *, unsigned int *);
  // get_re_delim
  signed int (*get_re_delim)(struct __db *, signed int *);
  // get_re_len
  signed int (*get_re_len)(struct __db *, unsigned int *);
  // get_re_pad
  signed int (*get_re_pad)(struct __db *, signed int *);
  // get_re_source
  signed int (*get_re_source)(struct __db *, const char **);
  // get_transactional
  signed int (*get_transactional)(struct __db *);
  // get_type
  signed int (*get_type)(struct __db *, enum anonymous$17 *);
  // join
  signed int (*join)(struct __db *, struct __dbc **, struct __dbc **, unsigned int);
  // key_range
  signed int (*key_range)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __key_range *, unsigned int);
  // open
  signed int (*open)(struct __db *, struct __db_txn *, const char *, const char *, enum anonymous$17, unsigned int, signed int);
  // pget
  signed int (*pget)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // put
  signed int (*put)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // remove
  signed int (*remove)(struct __db *, const char *, const char *, unsigned int);
  // rename
  signed int (*rename)(struct __db *, const char *, const char *, const char *, unsigned int);
  // set_alloc
  signed int (*set_alloc)(struct __db *, void * (*)(unsigned long int), void * (*)(void *, unsigned long int), void (*)(void *));
  // set_append_recno
  signed int (*set_append_recno)(struct __db *, signed int (*)(struct __db *, struct __db_dbt *, unsigned int));
  // set_bt_compare
  signed int (*set_bt_compare)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_bt_compress
  signed int (*set_bt_compress)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *), signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *));
  // set_bt_minkey
  signed int (*set_bt_minkey)(struct __db *, unsigned int);
  // set_bt_prefix
  signed int (*set_bt_prefix)(struct __db *, unsigned long int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_cachesize
  signed int (*set_cachesize)(struct __db *, unsigned int, unsigned int, signed int);
  // set_create_dir
  signed int (*set_create_dir)(struct __db *, const char *);
  // set_dup_compare
  signed int (*set_dup_compare)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_encrypt
  signed int (*set_encrypt)(struct __db *, const char *, unsigned int);
  // set_errcall
  void (*set_errcall)(struct __db *, void (*)(const struct __db_env *, const char *, const char *));
  // set_errfile
  void (*set_errfile)(struct __db *, struct _IO_FILE *);
  // set_errpfx
  void (*set_errpfx)(struct __db *, const char *);
  // set_feedback
  signed int (*set_feedback)(struct __db *, void (*)(struct __db *, signed int, signed int));
  // set_flags
  signed int (*set_flags)(struct __db *, unsigned int);
  // set_h_compare
  signed int (*set_h_compare)(struct __db *, signed int (*)(struct __db *, const struct __db_dbt *, const struct __db_dbt *));
  // set_h_ffactor
  signed int (*set_h_ffactor)(struct __db *, unsigned int);
  // set_h_hash
  signed int (*set_h_hash)(struct __db *, unsigned int (*)(struct __db *, const void *, unsigned int));
  // set_h_nelem
  signed int (*set_h_nelem)(struct __db *, unsigned int);
  // set_heapsize
  signed int (*set_heapsize)(struct __db *, unsigned int, unsigned int, unsigned int);
  // set_heap_regionsize
  signed int (*set_heap_regionsize)(struct __db *, unsigned int);
  // set_lk_exclusive
  signed int (*set_lk_exclusive)(struct __db *, signed int);
  // set_lorder
  signed int (*set_lorder)(struct __db *, signed int);
  // set_msgcall
  void (*set_msgcall)(struct __db *, void (*)(const struct __db_env *, const char *));
  // set_msgfile
  void (*set_msgfile)(struct __db *, struct _IO_FILE *);
  // set_pagesize
  signed int (*set_pagesize)(struct __db *, unsigned int);
  // set_paniccall
  signed int (*set_paniccall)(struct __db *, void (*)(struct __db_env *, signed int));
  // set_partition
  signed int (*set_partition)(struct __db *, unsigned int, struct __db_dbt *, unsigned int (*)(struct __db *, struct __db_dbt *));
  // set_partition_dirs
  signed int (*set_partition_dirs)(struct __db *, const char **);
  // set_priority
  signed int (*set_priority)(struct __db *, enum anonymous$16);
  // set_q_extentsize
  signed int (*set_q_extentsize)(struct __db *, unsigned int);
  // set_re_delim
  signed int (*set_re_delim)(struct __db *, signed int);
  // set_re_len
  signed int (*set_re_len)(struct __db *, unsigned int);
  // set_re_pad
  signed int (*set_re_pad)(struct __db *, signed int);
  // set_re_source
  signed int (*set_re_source)(struct __db *, const char *);
  // sort_multiple
  signed int (*sort_multiple)(struct __db *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // stat
  signed int (*stat)(struct __db *, struct __db_txn *, void *, unsigned int);
  // stat_print
  signed int (*stat_print)(struct __db *, unsigned int);
  // sync
  signed int (*sync)(struct __db *, unsigned int);
  // truncate
  signed int (*truncate)(struct __db *, struct __db_txn *, unsigned int *, unsigned int);
  // upgrade
  signed int (*upgrade)(struct __db *, const char *, unsigned int);
  // verify
  signed int (*verify)(struct __db *, const char *, const char *, struct _IO_FILE *, unsigned int);
  // dump
  signed int (*dump)(struct __db *, const char *, signed int (*)(void *, const void *), void *, signed int, signed int);
  // db_am_remove
  signed int (*db_am_remove)(struct __db *, struct __db_thread_info *, struct __db_txn *, const char *, const char *, unsigned int);
  // db_am_rename
  signed int (*db_am_rename)(struct __db *, struct __db_thread_info *, struct __db_txn *, const char *, const char *, const char *);
  // stored_get
  signed int (*stored_get)(struct __db *, struct __db_txn *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // stored_close
  signed int (*stored_close)(struct __db *, unsigned int);
  // alt_close
  signed int (*alt_close)(struct __db *, unsigned int);
  // am_ok
  unsigned int am_ok;
  // preserve_fid
  signed int preserve_fid;
  // orig_flags
  unsigned int orig_flags;
  // flags
  unsigned int flags;
  // orig_flags2
  unsigned int orig_flags2;
  // flags2
  unsigned int flags2;
};

struct __db_channel
{
  // channel
  struct __channel *channel;
  // eid
  signed int eid;
  // timeout
  unsigned int timeout;
  // close
  signed int (*close)(struct __db_channel *, unsigned int);
  // send_msg
  signed int (*send_msg)(struct __db_channel *, struct __db_dbt *, unsigned int, unsigned int);
  // send_request
  signed int (*send_request)(struct __db_channel *, struct __db_dbt *, unsigned int, struct __db_dbt *, unsigned int, unsigned int);
  // set_timeout
  signed int (*set_timeout)(struct __db_channel *, unsigned int);
};

struct __db_compact
{
  // compact_fillpercent
  unsigned int compact_fillpercent;
  // compact_timeout
  unsigned int compact_timeout;
  // compact_pages
  unsigned int compact_pages;
  // compact_empty_buckets
  unsigned int compact_empty_buckets;
  // compact_pages_free
  unsigned int compact_pages_free;
  // compact_pages_examine
  unsigned int compact_pages_examine;
  // compact_levels
  unsigned int compact_levels;
  // compact_deadlock
  unsigned int compact_deadlock;
  // compact_pages_truncated
  unsigned int compact_pages_truncated;
  // compact_truncate
  unsigned int compact_truncate;
};

struct __db_env
{
  // env
  struct __env *env;
  // mtx_db_env
  unsigned long int mtx_db_env;
  // db_errcall
  void (*db_errcall)(const struct __db_env *, const char *, const char *);
  // db_errfile
  struct _IO_FILE *db_errfile;
  // db_errpfx
  const char *db_errpfx;
  // db_msgcall
  void (*db_msgcall)(const struct __db_env *, const char *);
  // db_msgfile
  struct _IO_FILE *db_msgfile;
  // app_dispatch
  signed int (*app_dispatch)(struct __db_env *, struct __db_dbt *, struct __db_lsn *, enum anonymous);
  // db_event_func
  void (*db_event_func)(struct __db_env *, unsigned int, void *);
  // db_feedback
  void (*db_feedback)(struct __db_env *, signed int, signed int);
  // db_free
  void (*db_free)(void *);
  // db_paniccall
  void (*db_paniccall)(struct __db_env *, signed int);
  // db_malloc
  void * (*db_malloc)(unsigned long int);
  // db_realloc
  void * (*db_realloc)(void *, unsigned long int);
  // is_alive
  signed int (*is_alive)(struct __db_env *, signed int, unsigned long int, unsigned int);
  // thread_id
  void (*thread_id)(struct __db_env *, signed int *, unsigned long int *);
  // thread_id_string
  char * (*thread_id_string)(struct __db_env *, signed int, unsigned long int, char *);
  // db_log_dir
  char *db_log_dir;
  // db_md_dir
  char *db_md_dir;
  // db_tmp_dir
  char *db_tmp_dir;
  // db_create_dir
  char *db_create_dir;
  // db_data_dir
  char **db_data_dir;
  // data_cnt
  signed int data_cnt;
  // data_next
  signed int data_next;
  // intermediate_dir_mode
  char *intermediate_dir_mode;
  // shm_key
  signed long int shm_key;
  // passwd
  char *passwd;
  // passwd_len
  unsigned long int passwd_len;
  // app_private
  void *app_private;
  // api1_internal
  void *api1_internal;
  // api2_internal
  void *api2_internal;
  // verbose
  unsigned int verbose;
  // mutex_align
  unsigned int mutex_align;
  // mutex_cnt
  unsigned int mutex_cnt;
  // mutex_inc
  unsigned int mutex_inc;
  // mutex_max
  unsigned int mutex_max;
  // mutex_tas_spins
  unsigned int mutex_tas_spins;
  // lk_conflicts
  unsigned char *lk_conflicts;
  // lk_modes
  signed int lk_modes;
  // lk_detect
  unsigned int lk_detect;
  // lk_max
  unsigned int lk_max;
  // lk_max_lockers
  unsigned int lk_max_lockers;
  // lk_max_objects
  unsigned int lk_max_objects;
  // lk_init
  unsigned int lk_init;
  // lk_init_lockers
  unsigned int lk_init_lockers;
  // lk_init_objects
  unsigned int lk_init_objects;
  // lk_partitions
  unsigned int lk_partitions;
  // lk_timeout
  unsigned int lk_timeout;
  // locker_t_size
  unsigned int locker_t_size;
  // object_t_size
  unsigned int object_t_size;
  // lg_bsize
  unsigned int lg_bsize;
  // lg_fileid_init
  unsigned int lg_fileid_init;
  // lg_filemode
  signed int lg_filemode;
  // lg_regionmax
  unsigned int lg_regionmax;
  // lg_size
  unsigned int lg_size;
  // lg_flags
  unsigned int lg_flags;
  // mp_gbytes
  unsigned int mp_gbytes;
  // mp_bytes
  unsigned int mp_bytes;
  // mp_max_gbytes
  unsigned int mp_max_gbytes;
  // mp_max_bytes
  unsigned int mp_max_bytes;
  // mp_mmapsize
  unsigned long int mp_mmapsize;
  // mp_maxopenfd
  signed int mp_maxopenfd;
  // mp_maxwrite
  signed int mp_maxwrite;
  // mp_ncache
  unsigned int mp_ncache;
  // mp_pagesize
  unsigned int mp_pagesize;
  // mp_tablesize
  unsigned int mp_tablesize;
  // mp_mtxcount
  unsigned int mp_mtxcount;
  // mp_maxwrite_sleep
  unsigned int mp_maxwrite_sleep;
  // tx_init
  unsigned int tx_init;
  // tx_max
  unsigned int tx_max;
  // tx_timestamp
  signed long int tx_timestamp;
  // tx_timeout
  unsigned int tx_timeout;
  // thr_init
  unsigned int thr_init;
  // thr_max
  unsigned int thr_max;
  // memory_max
  unsigned long int memory_max;
  // registry
  struct __fh_t *registry;
  // registry_off
  unsigned int registry_off;
  // envreg_timeout
  unsigned int envreg_timeout;
  // flags
  unsigned int flags;
  // add_data_dir
  signed int (*add_data_dir)(struct __db_env *, const char *);
  // backup
  signed int (*backup)(struct __db_env *, const char *, unsigned int);
  // cdsgroup_begin
  signed int (*cdsgroup_begin)(struct __db_env *, struct __db_txn **);
  // close
  signed int (*close)(struct __db_env *, unsigned int);
  // dbbackup
  signed int (*dbbackup)(struct __db_env *, const char *, const char *, unsigned int);
  // dbremove
  signed int (*dbremove)(struct __db_env *, struct __db_txn *, const char *, const char *, unsigned int);
  // dbrename
  signed int (*dbrename)(struct __db_env *, struct __db_txn *, const char *, const char *, const char *, unsigned int);
  // err
  void (*err)(const struct __db_env *, signed int, const char *, ...);
  // errx
  void (*errx)(const struct __db_env *, const char *, ...);
  // failchk
  signed int (*failchk)(struct __db_env *, unsigned int);
  // fileid_reset
  signed int (*fileid_reset)(struct __db_env *, const char *, unsigned int);
  // get_alloc
  signed int (*get_alloc)(struct __db_env *, void * (**)(unsigned long int), void * (**)(void *, unsigned long int), void (**)(void *));
  // get_app_dispatch
  signed int (*get_app_dispatch)(struct __db_env *, signed int (**)(struct __db_env *, struct __db_dbt *, struct __db_lsn *, enum anonymous));
  // get_cache_max
  signed int (*get_cache_max)(struct __db_env *, unsigned int *, unsigned int *);
  // get_cachesize
  signed int (*get_cachesize)(struct __db_env *, unsigned int *, unsigned int *, signed int *);
  // get_create_dir
  signed int (*get_create_dir)(struct __db_env *, const char **);
  // get_data_dirs
  signed int (*get_data_dirs)(struct __db_env *, const char ***);
  // get_data_len
  signed int (*get_data_len)(struct __db_env *, unsigned int *);
  // get_backup_callbacks
  signed int (*get_backup_callbacks)(struct __db_env *, signed int (**)(struct __db_env *, const char *, const char *, void **), signed int (**)(struct __db_env *, unsigned int, unsigned int, unsigned int, unsigned char *, void *), signed int (**)(struct __db_env *, const char *, void *));
  // get_backup_config
  signed int (*get_backup_config)(struct __db_env *, enum anonymous$0, unsigned int *);
  // get_encrypt_flags
  signed int (*get_encrypt_flags)(struct __db_env *, unsigned int *);
  // get_errcall
  void (*get_errcall)(struct __db_env *, void (**)(const struct __db_env *, const char *, const char *));
  // get_errfile
  void (*get_errfile)(struct __db_env *, struct _IO_FILE **);
  // get_errpfx
  void (*get_errpfx)(struct __db_env *, const char **);
  // get_flags
  signed int (*get_flags)(struct __db_env *, unsigned int *);
  // get_feedback
  signed int (*get_feedback)(struct __db_env *, void (**)(struct __db_env *, signed int, signed int));
  // get_home
  signed int (*get_home)(struct __db_env *, const char **);
  // get_intermediate_dir_mode
  signed int (*get_intermediate_dir_mode)(struct __db_env *, const char **);
  // get_isalive
  signed int (*get_isalive)(struct __db_env *, signed int (**)(struct __db_env *, signed int, unsigned long int, unsigned int));
  // get_lg_bsize
  signed int (*get_lg_bsize)(struct __db_env *, unsigned int *);
  // get_lg_dir
  signed int (*get_lg_dir)(struct __db_env *, const char **);
  // get_lg_filemode
  signed int (*get_lg_filemode)(struct __db_env *, signed int *);
  // get_lg_max
  signed int (*get_lg_max)(struct __db_env *, unsigned int *);
  // get_lg_regionmax
  signed int (*get_lg_regionmax)(struct __db_env *, unsigned int *);
  // get_lk_conflicts
  signed int (*get_lk_conflicts)(struct __db_env *, const unsigned char **, signed int *);
  // get_lk_detect
  signed int (*get_lk_detect)(struct __db_env *, unsigned int *);
  // get_lk_max_lockers
  signed int (*get_lk_max_lockers)(struct __db_env *, unsigned int *);
  // get_lk_max_locks
  signed int (*get_lk_max_locks)(struct __db_env *, unsigned int *);
  // get_lk_max_objects
  signed int (*get_lk_max_objects)(struct __db_env *, unsigned int *);
  // get_lk_partitions
  signed int (*get_lk_partitions)(struct __db_env *, unsigned int *);
  // get_lk_priority
  signed int (*get_lk_priority)(struct __db_env *, unsigned int, unsigned int *);
  // get_lk_tablesize
  signed int (*get_lk_tablesize)(struct __db_env *, unsigned int *);
  // get_memory_init
  signed int (*get_memory_init)(struct __db_env *, enum anonymous$1, unsigned int *);
  // get_memory_max
  signed int (*get_memory_max)(struct __db_env *, unsigned int *, unsigned int *);
  // get_metadata_dir
  signed int (*get_metadata_dir)(struct __db_env *, const char **);
  // get_mp_max_openfd
  signed int (*get_mp_max_openfd)(struct __db_env *, signed int *);
  // get_mp_max_write
  signed int (*get_mp_max_write)(struct __db_env *, signed int *, unsigned int *);
  // get_mp_mmapsize
  signed int (*get_mp_mmapsize)(struct __db_env *, unsigned long int *);
  // get_mp_mtxcount
  signed int (*get_mp_mtxcount)(struct __db_env *, unsigned int *);
  // get_mp_pagesize
  signed int (*get_mp_pagesize)(struct __db_env *, unsigned int *);
  // get_mp_tablesize
  signed int (*get_mp_tablesize)(struct __db_env *, unsigned int *);
  // get_msgcall
  void (*get_msgcall)(struct __db_env *, void (**)(const struct __db_env *, const char *));
  // get_msgfile
  void (*get_msgfile)(struct __db_env *, struct _IO_FILE **);
  // get_open_flags
  signed int (*get_open_flags)(struct __db_env *, unsigned int *);
  // get_shm_key
  signed int (*get_shm_key)(struct __db_env *, signed long int *);
  // get_thread_count
  signed int (*get_thread_count)(struct __db_env *, unsigned int *);
  // get_thread_id_fn
  signed int (*get_thread_id_fn)(struct __db_env *, void (**)(struct __db_env *, signed int *, unsigned long int *));
  // get_thread_id_string_fn
  signed int (*get_thread_id_string_fn)(struct __db_env *, char * (**)(struct __db_env *, signed int, unsigned long int, char *));
  // get_timeout
  signed int (*get_timeout)(struct __db_env *, unsigned int *, unsigned int);
  // get_tmp_dir
  signed int (*get_tmp_dir)(struct __db_env *, const char **);
  // get_tx_max
  signed int (*get_tx_max)(struct __db_env *, unsigned int *);
  // get_tx_timestamp
  signed int (*get_tx_timestamp)(struct __db_env *, signed long int *);
  // get_verbose
  signed int (*get_verbose)(struct __db_env *, unsigned int, signed int *);
  // is_bigendian
  signed int (*is_bigendian)(void);
  // lock_detect
  signed int (*lock_detect)(struct __db_env *, unsigned int, unsigned int, signed int *);
  // lock_get
  signed int (*lock_get)(struct __db_env *, unsigned int, unsigned int, struct __db_dbt *, enum anonymous$7, struct __db_lock_u *);
  // lock_id
  signed int (*lock_id)(struct __db_env *, unsigned int *);
  // lock_id_free
  signed int (*lock_id_free)(struct __db_env *, unsigned int);
  // lock_put
  signed int (*lock_put)(struct __db_env *, struct __db_lock_u *);
  // lock_stat
  signed int (*lock_stat)(struct __db_env *, struct __db_lock_stat **, unsigned int);
  // lock_stat_print
  signed int (*lock_stat_print)(struct __db_env *, unsigned int);
  // lock_vec
  signed int (*lock_vec)(struct __db_env *, unsigned int, unsigned int, struct __db_lockreq *, signed int, struct __db_lockreq **);
  // log_archive
  signed int (*log_archive)(struct __db_env *, char ***, unsigned int);
  // log_cursor
  signed int (*log_cursor)(struct __db_env *, struct __db_log_cursor **, unsigned int);
  // log_file
  signed int (*log_file)(struct __db_env *, const struct __db_lsn *, char *, unsigned long int);
  // log_flush
  signed int (*log_flush)(struct __db_env *, const struct __db_lsn *);
  // log_get_config
  signed int (*log_get_config)(struct __db_env *, unsigned int, signed int *);
  // log_printf
  signed int (*log_printf)(struct __db_env *, struct __db_txn *, const char *, ...);
  // log_put
  signed int (*log_put)(struct __db_env *, struct __db_lsn *, const struct __db_dbt *, unsigned int);
  // log_put_record
  signed int (*log_put_record)(struct __db_env *, struct __db *, struct __db_txn *, struct __db_lsn *, unsigned int, unsigned int, unsigned int, unsigned int, struct __log_rec_spec *, ...);
  // log_read_record
  signed int (*log_read_record)(struct __db_env *, struct __db **, void *, void *, struct __log_rec_spec *, unsigned int, void **);
  // log_set_config
  signed int (*log_set_config)(struct __db_env *, unsigned int, signed int);
  // log_stat
  signed int (*log_stat)(struct __db_env *, struct __db_log_stat **, unsigned int);
  // log_stat_print
  signed int (*log_stat_print)(struct __db_env *, unsigned int);
  // log_verify
  signed int (*log_verify)(struct __db_env *, const struct __db_logvrfy_config *);
  // lsn_reset
  signed int (*lsn_reset)(struct __db_env *, const char *, unsigned int);
  // memp_fcreate
  signed int (*memp_fcreate)(struct __db_env *, struct __db_mpoolfile **, unsigned int);
  // memp_register
  signed int (*memp_register)(struct __db_env *, signed int, signed int (*)(struct __db_env *, unsigned int, void *, struct __db_dbt *), signed int (*)(struct __db_env *, unsigned int, void *, struct __db_dbt *));
  // memp_stat
  signed int (*memp_stat)(struct __db_env *, struct __db_mpool_stat **, struct __db_mpool_fstat ***, unsigned int);
  // memp_stat_print
  signed int (*memp_stat_print)(struct __db_env *, unsigned int);
  // memp_sync
  signed int (*memp_sync)(struct __db_env *, struct __db_lsn *);
  // memp_trickle
  signed int (*memp_trickle)(struct __db_env *, signed int, signed int *);
  // mutex_alloc
  signed int (*mutex_alloc)(struct __db_env *, unsigned int, unsigned long int *);
  // mutex_free
  signed int (*mutex_free)(struct __db_env *, unsigned long int);
  // mutex_get_align
  signed int (*mutex_get_align)(struct __db_env *, unsigned int *);
  // mutex_get_increment
  signed int (*mutex_get_increment)(struct __db_env *, unsigned int *);
  // mutex_get_init
  signed int (*mutex_get_init)(struct __db_env *, unsigned int *);
  // mutex_get_max
  signed int (*mutex_get_max)(struct __db_env *, unsigned int *);
  // mutex_get_tas_spins
  signed int (*mutex_get_tas_spins)(struct __db_env *, unsigned int *);
  // mutex_lock
  signed int (*mutex_lock)(struct __db_env *, unsigned long int);
  // mutex_set_align
  signed int (*mutex_set_align)(struct __db_env *, unsigned int);
  // mutex_set_increment
  signed int (*mutex_set_increment)(struct __db_env *, unsigned int);
  // mutex_set_init
  signed int (*mutex_set_init)(struct __db_env *, unsigned int);
  // mutex_set_max
  signed int (*mutex_set_max)(struct __db_env *, unsigned int);
  // mutex_set_tas_spins
  signed int (*mutex_set_tas_spins)(struct __db_env *, unsigned int);
  // mutex_stat
  signed int (*mutex_stat)(struct __db_env *, struct __db_mutex_stat **, unsigned int);
  // mutex_stat_print
  signed int (*mutex_stat_print)(struct __db_env *, unsigned int);
  // mutex_unlock
  signed int (*mutex_unlock)(struct __db_env *, unsigned long int);
  // open
  signed int (*open)(struct __db_env *, const char *, unsigned int, signed int);
  // remove
  signed int (*remove)(struct __db_env *, const char *, unsigned int);
  // rep_elect
  signed int (*rep_elect)(struct __db_env *, unsigned int, unsigned int, unsigned int);
  // rep_flush
  signed int (*rep_flush)(struct __db_env *);
  // rep_get_clockskew
  signed int (*rep_get_clockskew)(struct __db_env *, unsigned int *, unsigned int *);
  // rep_get_config
  signed int (*rep_get_config)(struct __db_env *, unsigned int, signed int *);
  // rep_get_limit
  signed int (*rep_get_limit)(struct __db_env *, unsigned int *, unsigned int *);
  // rep_get_nsites
  signed int (*rep_get_nsites)(struct __db_env *, unsigned int *);
  // rep_get_priority
  signed int (*rep_get_priority)(struct __db_env *, unsigned int *);
  // rep_get_request
  signed int (*rep_get_request)(struct __db_env *, unsigned int *, unsigned int *);
  // rep_get_timeout
  signed int (*rep_get_timeout)(struct __db_env *, signed int, unsigned int *);
  // rep_process_message
  signed int (*rep_process_message)(struct __db_env *, struct __db_dbt *, struct __db_dbt *, signed int, struct __db_lsn *);
  // rep_set_clockskew
  signed int (*rep_set_clockskew)(struct __db_env *, unsigned int, unsigned int);
  // rep_set_config
  signed int (*rep_set_config)(struct __db_env *, unsigned int, signed int);
  // rep_set_limit
  signed int (*rep_set_limit)(struct __db_env *, unsigned int, unsigned int);
  // rep_set_nsites
  signed int (*rep_set_nsites)(struct __db_env *, unsigned int);
  // rep_set_priority
  signed int (*rep_set_priority)(struct __db_env *, unsigned int);
  // rep_set_request
  signed int (*rep_set_request)(struct __db_env *, unsigned int, unsigned int);
  // rep_set_timeout
  signed int (*rep_set_timeout)(struct __db_env *, signed int, unsigned int);
  // rep_set_transport
  signed int (*rep_set_transport)(struct __db_env *, signed int, signed int (*)(struct __db_env *, const struct __db_dbt *, const struct __db_dbt *, const struct __db_lsn *, signed int, unsigned int));
  // rep_start
  signed int (*rep_start)(struct __db_env *, struct __db_dbt *, unsigned int);
  // rep_stat
  signed int (*rep_stat)(struct __db_env *, struct __db_rep_stat **, unsigned int);
  // rep_stat_print
  signed int (*rep_stat_print)(struct __db_env *, unsigned int);
  // rep_sync
  signed int (*rep_sync)(struct __db_env *, unsigned int);
  // repmgr_channel
  signed int (*repmgr_channel)(struct __db_env *, signed int, struct __db_channel **, unsigned int);
  // repmgr_get_ack_policy
  signed int (*repmgr_get_ack_policy)(struct __db_env *, signed int *);
  // repmgr_local_site
  signed int (*repmgr_local_site)(struct __db_env *, struct __db_site **);
  // repmgr_msg_dispatch
  signed int (*repmgr_msg_dispatch)(struct __db_env *, void (*)(struct __db_env *, struct __db_channel *, struct __db_dbt *, unsigned int, unsigned int), unsigned int);
  // repmgr_set_ack_policy
  signed int (*repmgr_set_ack_policy)(struct __db_env *, signed int);
  // repmgr_site
  signed int (*repmgr_site)(struct __db_env *, const char *, unsigned int, struct __db_site **, unsigned int);
  // repmgr_site_by_eid
  signed int (*repmgr_site_by_eid)(struct __db_env *, signed int, struct __db_site **);
  // repmgr_site_list
  signed int (*repmgr_site_list)(struct __db_env *, unsigned int *, struct __db_repmgr_site **);
  // repmgr_start
  signed int (*repmgr_start)(struct __db_env *, signed int, unsigned int);
  // repmgr_stat
  signed int (*repmgr_stat)(struct __db_env *, struct __db_repmgr_stat **, unsigned int);
  // repmgr_stat_print
  signed int (*repmgr_stat_print)(struct __db_env *, unsigned int);
  // set_alloc
  signed int (*set_alloc)(struct __db_env *, void * (*)(unsigned long int), void * (*)(void *, unsigned long int), void (*)(void *));
  // set_app_dispatch
  signed int (*set_app_dispatch)(struct __db_env *, signed int (*)(struct __db_env *, struct __db_dbt *, struct __db_lsn *, enum anonymous));
  // set_cache_max
  signed int (*set_cache_max)(struct __db_env *, unsigned int, unsigned int);
  // set_cachesize
  signed int (*set_cachesize)(struct __db_env *, unsigned int, unsigned int, signed int);
  // set_create_dir
  signed int (*set_create_dir)(struct __db_env *, const char *);
  // set_data_dir
  signed int (*set_data_dir)(struct __db_env *, const char *);
  // set_data_len
  signed int (*set_data_len)(struct __db_env *, unsigned int);
  // set_backup_callbacks
  signed int (*set_backup_callbacks)(struct __db_env *, signed int (*)(struct __db_env *, const char *, const char *, void **), signed int (*)(struct __db_env *, unsigned int, unsigned int, unsigned int, unsigned char *, void *), signed int (*)(struct __db_env *, const char *, void *));
  // set_backup_config
  signed int (*set_backup_config)(struct __db_env *, enum anonymous$0, unsigned int);
  // set_encrypt
  signed int (*set_encrypt)(struct __db_env *, const char *, unsigned int);
  // set_errcall
  void (*set_errcall)(struct __db_env *, void (*)(const struct __db_env *, const char *, const char *));
  // set_errfile
  void (*set_errfile)(struct __db_env *, struct _IO_FILE *);
  // set_errpfx
  void (*set_errpfx)(struct __db_env *, const char *);
  // set_event_notify
  signed int (*set_event_notify)(struct __db_env *, void (*)(struct __db_env *, unsigned int, void *));
  // set_feedback
  signed int (*set_feedback)(struct __db_env *, void (*)(struct __db_env *, signed int, signed int));
  // set_flags
  signed int (*set_flags)(struct __db_env *, unsigned int, signed int);
  // set_intermediate_dir_mode
  signed int (*set_intermediate_dir_mode)(struct __db_env *, const char *);
  // set_isalive
  signed int (*set_isalive)(struct __db_env *, signed int (*)(struct __db_env *, signed int, unsigned long int, unsigned int));
  // set_lg_bsize
  signed int (*set_lg_bsize)(struct __db_env *, unsigned int);
  // set_lg_dir
  signed int (*set_lg_dir)(struct __db_env *, const char *);
  // set_lg_filemode
  signed int (*set_lg_filemode)(struct __db_env *, signed int);
  // set_lg_max
  signed int (*set_lg_max)(struct __db_env *, unsigned int);
  // set_lg_regionmax
  signed int (*set_lg_regionmax)(struct __db_env *, unsigned int);
  // set_lk_conflicts
  signed int (*set_lk_conflicts)(struct __db_env *, unsigned char *, signed int);
  // set_lk_detect
  signed int (*set_lk_detect)(struct __db_env *, unsigned int);
  // set_lk_max_lockers
  signed int (*set_lk_max_lockers)(struct __db_env *, unsigned int);
  // set_lk_max_locks
  signed int (*set_lk_max_locks)(struct __db_env *, unsigned int);
  // set_lk_max_objects
  signed int (*set_lk_max_objects)(struct __db_env *, unsigned int);
  // set_lk_partitions
  signed int (*set_lk_partitions)(struct __db_env *, unsigned int);
  // set_lk_priority
  signed int (*set_lk_priority)(struct __db_env *, unsigned int, unsigned int);
  // set_lk_tablesize
  signed int (*set_lk_tablesize)(struct __db_env *, unsigned int);
  // set_memory_init
  signed int (*set_memory_init)(struct __db_env *, enum anonymous$1, unsigned int);
  // set_memory_max
  signed int (*set_memory_max)(struct __db_env *, unsigned int, unsigned int);
  // set_metadata_dir
  signed int (*set_metadata_dir)(struct __db_env *, const char *);
  // set_mp_max_openfd
  signed int (*set_mp_max_openfd)(struct __db_env *, signed int);
  // set_mp_max_write
  signed int (*set_mp_max_write)(struct __db_env *, signed int, unsigned int);
  // set_mp_mmapsize
  signed int (*set_mp_mmapsize)(struct __db_env *, unsigned long int);
  // set_mp_mtxcount
  signed int (*set_mp_mtxcount)(struct __db_env *, unsigned int);
  // set_mp_pagesize
  signed int (*set_mp_pagesize)(struct __db_env *, unsigned int);
  // set_mp_tablesize
  signed int (*set_mp_tablesize)(struct __db_env *, unsigned int);
  // set_msgcall
  void (*set_msgcall)(struct __db_env *, void (*)(const struct __db_env *, const char *));
  // set_msgfile
  void (*set_msgfile)(struct __db_env *, struct _IO_FILE *);
  // set_paniccall
  signed int (*set_paniccall)(struct __db_env *, void (*)(struct __db_env *, signed int));
  // set_shm_key
  signed int (*set_shm_key)(struct __db_env *, signed long int);
  // set_thread_count
  signed int (*set_thread_count)(struct __db_env *, unsigned int);
  // set_thread_id
  signed int (*set_thread_id)(struct __db_env *, void (*)(struct __db_env *, signed int *, unsigned long int *));
  // set_thread_id_string
  signed int (*set_thread_id_string)(struct __db_env *, char * (*)(struct __db_env *, signed int, unsigned long int, char *));
  // set_timeout
  signed int (*set_timeout)(struct __db_env *, unsigned int, unsigned int);
  // set_tmp_dir
  signed int (*set_tmp_dir)(struct __db_env *, const char *);
  // set_tx_max
  signed int (*set_tx_max)(struct __db_env *, unsigned int);
  // set_tx_timestamp
  signed int (*set_tx_timestamp)(struct __db_env *, signed long int *);
  // set_verbose
  signed int (*set_verbose)(struct __db_env *, unsigned int, signed int);
  // txn_applied
  signed int (*txn_applied)(struct __db_env *, struct __db_txn_token *, unsigned int, unsigned int);
  // stat_print
  signed int (*stat_print)(struct __db_env *, unsigned int);
  // txn_begin
  signed int (*txn_begin)(struct __db_env *, struct __db_txn *, struct __db_txn **, unsigned int);
  // txn_checkpoint
  signed int (*txn_checkpoint)(struct __db_env *, unsigned int, unsigned int, unsigned int);
  // txn_recover
  signed int (*txn_recover)(struct __db_env *, struct __db_preplist *, signed long int, signed long int *, unsigned int);
  // txn_stat
  signed int (*txn_stat)(struct __db_env *, struct __db_txn_stat **, unsigned int);
  // txn_stat_print
  signed int (*txn_stat_print)(struct __db_env *, unsigned int);
  // prdbt
  signed int (*prdbt)(struct __db_dbt *, signed int, const char *, void *, signed int (*)(void *, const void *), signed int, signed int);
};

struct __db_ilock
{
  // pgno
  unsigned int pgno;
  // fileid
  unsigned char fileid[20l];
  // type
  unsigned int type;
};

struct __db_lock_stat
{
  // st_id
  unsigned int st_id;
  // st_cur_maxid
  unsigned int st_cur_maxid;
  // st_initlocks
  unsigned int st_initlocks;
  // st_initlockers
  unsigned int st_initlockers;
  // st_initobjects
  unsigned int st_initobjects;
  // st_locks
  unsigned int st_locks;
  // st_lockers
  unsigned int st_lockers;
  // st_objects
  unsigned int st_objects;
  // st_maxlocks
  unsigned int st_maxlocks;
  // st_maxlockers
  unsigned int st_maxlockers;
  // st_maxobjects
  unsigned int st_maxobjects;
  // st_partitions
  unsigned int st_partitions;
  // st_tablesize
  unsigned int st_tablesize;
  // st_nmodes
  signed int st_nmodes;
  // st_nlockers
  unsigned int st_nlockers;
  // st_nlocks
  unsigned int st_nlocks;
  // st_maxnlocks
  unsigned int st_maxnlocks;
  // st_maxhlocks
  unsigned int st_maxhlocks;
  // st_locksteals
  unsigned long int st_locksteals;
  // st_maxlsteals
  unsigned long int st_maxlsteals;
  // st_maxnlockers
  unsigned int st_maxnlockers;
  // st_nobjects
  unsigned int st_nobjects;
  // st_maxnobjects
  unsigned int st_maxnobjects;
  // st_maxhobjects
  unsigned int st_maxhobjects;
  // st_objectsteals
  unsigned long int st_objectsteals;
  // st_maxosteals
  unsigned long int st_maxosteals;
  // st_nrequests
  unsigned long int st_nrequests;
  // st_nreleases
  unsigned long int st_nreleases;
  // st_nupgrade
  unsigned long int st_nupgrade;
  // st_ndowngrade
  unsigned long int st_ndowngrade;
  // st_lock_wait
  unsigned long int st_lock_wait;
  // st_lock_nowait
  unsigned long int st_lock_nowait;
  // st_ndeadlocks
  unsigned long int st_ndeadlocks;
  // st_locktimeout
  unsigned int st_locktimeout;
  // st_nlocktimeouts
  unsigned long int st_nlocktimeouts;
  // st_txntimeout
  unsigned int st_txntimeout;
  // st_ntxntimeouts
  unsigned long int st_ntxntimeouts;
  // st_part_wait
  unsigned long int st_part_wait;
  // st_part_nowait
  unsigned long int st_part_nowait;
  // st_part_max_wait
  unsigned long int st_part_max_wait;
  // st_part_max_nowait
  unsigned long int st_part_max_nowait;
  // st_objs_wait
  unsigned long int st_objs_wait;
  // st_objs_nowait
  unsigned long int st_objs_nowait;
  // st_lockers_wait
  unsigned long int st_lockers_wait;
  // st_lockers_nowait
  unsigned long int st_lockers_nowait;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_hash_len
  unsigned int st_hash_len;
  // st_regsize
  unsigned long int st_regsize;
};

struct __db_lockreq
{
  // op
  enum anonymous$12 op;
  // mode
  enum anonymous$7 mode;
  // timeout
  unsigned int timeout;
  // obj
  struct __db_dbt *obj;
  // lock
  struct __db_lock_u lock;
};

struct __db_lsn
{
  // file
  unsigned int file;
  // offset
  unsigned int offset;
};

struct __db_log_cursor
{
  // env
  struct __env *env;
  // fhp
  struct __fh_t *fhp;
  // lsn
  struct __db_lsn lsn;
  // len
  unsigned int len;
  // prev
  unsigned int prev;
  // dbt
  struct __db_dbt dbt;
  // p_lsn
  struct __db_lsn p_lsn;
  // p_version
  unsigned int p_version;
  // bp
  unsigned char *bp;
  // bp_size
  unsigned int bp_size;
  // bp_rlen
  unsigned int bp_rlen;
  // bp_lsn
  struct __db_lsn bp_lsn;
  // bp_maxrec
  unsigned int bp_maxrec;
  // close
  signed int (*close)(struct __db_log_cursor *, unsigned int);
  // get
  signed int (*get)(struct __db_log_cursor *, struct __db_lsn *, struct __db_dbt *, unsigned int);
  // version
  signed int (*version)(struct __db_log_cursor *, unsigned int *, unsigned int);
  // flags
  unsigned int flags;
};

struct __db_log_stat
{
  // st_magic
  unsigned int st_magic;
  // st_version
  unsigned int st_version;
  // st_mode
  signed int st_mode;
  // st_lg_bsize
  unsigned int st_lg_bsize;
  // st_lg_size
  unsigned int st_lg_size;
  // st_wc_bytes
  unsigned int st_wc_bytes;
  // st_wc_mbytes
  unsigned int st_wc_mbytes;
  // st_fileid_init
  unsigned int st_fileid_init;
  // st_nfileid
  unsigned int st_nfileid;
  // st_maxnfileid
  unsigned int st_maxnfileid;
  // st_record
  unsigned long int st_record;
  // st_w_bytes
  unsigned int st_w_bytes;
  // st_w_mbytes
  unsigned int st_w_mbytes;
  // st_wcount
  unsigned long int st_wcount;
  // st_wcount_fill
  unsigned long int st_wcount_fill;
  // st_rcount
  unsigned long int st_rcount;
  // st_scount
  unsigned long int st_scount;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_cur_file
  unsigned int st_cur_file;
  // st_cur_offset
  unsigned int st_cur_offset;
  // st_disk_file
  unsigned int st_disk_file;
  // st_disk_offset
  unsigned int st_disk_offset;
  // st_maxcommitperflush
  unsigned int st_maxcommitperflush;
  // st_mincommitperflush
  unsigned int st_mincommitperflush;
  // st_regsize
  unsigned long int st_regsize;
};

struct __db_logvrfy_config
{
  // continue_after_fail
  signed int continue_after_fail;
  // verbose
  signed int verbose;
  // cachesize
  unsigned int cachesize;
  // temp_envhome
  const char *temp_envhome;
  // dbfile
  const char *dbfile;
  // dbname
  const char *dbname;
  // start_lsn
  struct __db_lsn start_lsn;
  // end_lsn
  struct __db_lsn end_lsn;
  // start_time
  signed long int start_time;
  // end_time
  signed long int end_time;
};

struct __db_mpool_fstat
{
  // st_pagesize
  unsigned int st_pagesize;
  // st_map
  unsigned int st_map;
  // st_cache_hit
  unsigned long int st_cache_hit;
  // st_cache_miss
  unsigned long int st_cache_miss;
  // st_page_create
  unsigned long int st_page_create;
  // st_page_in
  unsigned long int st_page_in;
  // st_page_out
  unsigned long int st_page_out;
  // st_backup_spins
  unsigned long int st_backup_spins;
  // file_name
  char *file_name;
};

struct __db_mpool_stat
{
  // st_gbytes
  unsigned int st_gbytes;
  // st_bytes
  unsigned int st_bytes;
  // st_ncache
  unsigned int st_ncache;
  // st_max_ncache
  unsigned int st_max_ncache;
  // st_mmapsize
  unsigned long int st_mmapsize;
  // st_maxopenfd
  signed int st_maxopenfd;
  // st_maxwrite
  signed int st_maxwrite;
  // st_maxwrite_sleep
  unsigned int st_maxwrite_sleep;
  // st_pages
  unsigned int st_pages;
  // st_map
  unsigned int st_map;
  // st_cache_hit
  unsigned long int st_cache_hit;
  // st_cache_miss
  unsigned long int st_cache_miss;
  // st_page_create
  unsigned long int st_page_create;
  // st_page_in
  unsigned long int st_page_in;
  // st_page_out
  unsigned long int st_page_out;
  // st_ro_evict
  unsigned long int st_ro_evict;
  // st_rw_evict
  unsigned long int st_rw_evict;
  // st_page_trickle
  unsigned long int st_page_trickle;
  // st_page_clean
  unsigned int st_page_clean;
  // st_page_dirty
  unsigned int st_page_dirty;
  // st_hash_buckets
  unsigned int st_hash_buckets;
  // st_hash_mutexes
  unsigned int st_hash_mutexes;
  // st_pagesize
  unsigned int st_pagesize;
  // st_hash_searches
  unsigned int st_hash_searches;
  // st_hash_longest
  unsigned int st_hash_longest;
  // st_hash_examined
  unsigned long int st_hash_examined;
  // st_hash_nowait
  unsigned long int st_hash_nowait;
  // st_hash_wait
  unsigned long int st_hash_wait;
  // st_hash_max_nowait
  unsigned long int st_hash_max_nowait;
  // st_hash_max_wait
  unsigned long int st_hash_max_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_mvcc_frozen
  unsigned long int st_mvcc_frozen;
  // st_mvcc_thawed
  unsigned long int st_mvcc_thawed;
  // st_mvcc_freed
  unsigned long int st_mvcc_freed;
  // st_alloc
  unsigned long int st_alloc;
  // st_alloc_buckets
  unsigned long int st_alloc_buckets;
  // st_alloc_max_buckets
  unsigned long int st_alloc_max_buckets;
  // st_alloc_pages
  unsigned long int st_alloc_pages;
  // st_alloc_max_pages
  unsigned long int st_alloc_max_pages;
  // st_io_wait
  unsigned long int st_io_wait;
  // st_sync_interrupted
  unsigned long int st_sync_interrupted;
  // st_regsize
  unsigned long int st_regsize;
  // st_regmax
  unsigned long int st_regmax;
};

struct __db_mpoolfile
{
  // fhp
  struct __fh_t *fhp;
  // ref
  unsigned int ref;
  // pinref
  unsigned int pinref;
  // q
  struct anonymous$5 q;
  // env
  struct __env *env;
  // mfp
  struct __mpoolfile *mfp;
  // clear_len
  unsigned int clear_len;
  // fileid
  unsigned char fileid[20l];
  // ftype
  signed int ftype;
  // lsn_offset
  signed int lsn_offset;
  // gbytes
  unsigned int gbytes;
  // bytes
  unsigned int bytes;
  // pgcookie
  struct __db_dbt *pgcookie;
  // priority
  signed int priority;
  // addr
  void *addr;
  // len
  unsigned long int len;
  // config_flags
  unsigned int config_flags;
  // close
  signed int (*close)(struct __db_mpoolfile *, unsigned int);
  // get
  signed int (*get)(struct __db_mpoolfile *, unsigned int *, struct __db_txn *, unsigned int, void *);
  // get_clear_len
  signed int (*get_clear_len)(struct __db_mpoolfile *, unsigned int *);
  // get_fileid
  signed int (*get_fileid)(struct __db_mpoolfile *, unsigned char *);
  // get_flags
  signed int (*get_flags)(struct __db_mpoolfile *, unsigned int *);
  // get_ftype
  signed int (*get_ftype)(struct __db_mpoolfile *, signed int *);
  // get_last_pgno
  signed int (*get_last_pgno)(struct __db_mpoolfile *, unsigned int *);
  // get_lsn_offset
  signed int (*get_lsn_offset)(struct __db_mpoolfile *, signed int *);
  // get_maxsize
  signed int (*get_maxsize)(struct __db_mpoolfile *, unsigned int *, unsigned int *);
  // get_pgcookie
  signed int (*get_pgcookie)(struct __db_mpoolfile *, struct __db_dbt *);
  // get_priority
  signed int (*get_priority)(struct __db_mpoolfile *, enum anonymous$16 *);
  // open
  signed int (*open)(struct __db_mpoolfile *, const char *, unsigned int, signed int, unsigned long int);
  // put
  signed int (*put)(struct __db_mpoolfile *, void *, enum anonymous$16, unsigned int);
  // set_clear_len
  signed int (*set_clear_len)(struct __db_mpoolfile *, unsigned int);
  // set_fileid
  signed int (*set_fileid)(struct __db_mpoolfile *, unsigned char *);
  // set_flags
  signed int (*set_flags)(struct __db_mpoolfile *, unsigned int, signed int);
  // set_ftype
  signed int (*set_ftype)(struct __db_mpoolfile *, signed int);
  // set_lsn_offset
  signed int (*set_lsn_offset)(struct __db_mpoolfile *, signed int);
  // set_maxsize
  signed int (*set_maxsize)(struct __db_mpoolfile *, unsigned int, unsigned int);
  // set_pgcookie
  signed int (*set_pgcookie)(struct __db_mpoolfile *, struct __db_dbt *);
  // set_priority
  signed int (*set_priority)(struct __db_mpoolfile *, enum anonymous$16);
  // sync
  signed int (*sync)(struct __db_mpoolfile *);
  // flags
  unsigned int flags;
};

struct __db_mutex_stat
{
  // st_mutex_align
  unsigned int st_mutex_align;
  // st_mutex_tas_spins
  unsigned int st_mutex_tas_spins;
  // st_mutex_init
  unsigned int st_mutex_init;
  // st_mutex_cnt
  unsigned int st_mutex_cnt;
  // st_mutex_max
  unsigned int st_mutex_max;
  // st_mutex_free
  unsigned int st_mutex_free;
  // st_mutex_inuse
  unsigned int st_mutex_inuse;
  // st_mutex_inuse_max
  unsigned int st_mutex_inuse_max;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_regsize
  unsigned long int st_regsize;
  // st_regmax
  unsigned long int st_regmax;
};

struct __db_preplist
{
  // txn
  struct __db_txn *txn;
  // gid
  unsigned char gid[128l];
};

struct __db_rep_stat
{
  // st_startup_complete
  unsigned int st_startup_complete;
  // st_log_queued
  unsigned long int st_log_queued;
  // st_status
  unsigned int st_status;
  // st_next_lsn
  struct __db_lsn st_next_lsn;
  // st_waiting_lsn
  struct __db_lsn st_waiting_lsn;
  // st_max_perm_lsn
  struct __db_lsn st_max_perm_lsn;
  // st_next_pg
  unsigned int st_next_pg;
  // st_waiting_pg
  unsigned int st_waiting_pg;
  // st_dupmasters
  unsigned int st_dupmasters;
  // st_env_id
  signed long int st_env_id;
  // st_env_priority
  unsigned int st_env_priority;
  // st_bulk_fills
  unsigned long int st_bulk_fills;
  // st_bulk_overflows
  unsigned long int st_bulk_overflows;
  // st_bulk_records
  unsigned long int st_bulk_records;
  // st_bulk_transfers
  unsigned long int st_bulk_transfers;
  // st_client_rerequests
  unsigned long int st_client_rerequests;
  // st_client_svc_req
  unsigned long int st_client_svc_req;
  // st_client_svc_miss
  unsigned long int st_client_svc_miss;
  // st_gen
  unsigned int st_gen;
  // st_egen
  unsigned int st_egen;
  // st_lease_chk
  unsigned long int st_lease_chk;
  // st_lease_chk_misses
  unsigned long int st_lease_chk_misses;
  // st_lease_chk_refresh
  unsigned long int st_lease_chk_refresh;
  // st_lease_sends
  unsigned long int st_lease_sends;
  // st_log_duplicated
  unsigned long int st_log_duplicated;
  // st_log_queued_max
  unsigned long int st_log_queued_max;
  // st_log_queued_total
  unsigned long int st_log_queued_total;
  // st_log_records
  unsigned long int st_log_records;
  // st_log_requested
  unsigned long int st_log_requested;
  // st_master
  signed long int st_master;
  // st_master_changes
  unsigned long int st_master_changes;
  // st_msgs_badgen
  unsigned long int st_msgs_badgen;
  // st_msgs_processed
  unsigned long int st_msgs_processed;
  // st_msgs_recover
  unsigned long int st_msgs_recover;
  // st_msgs_send_failures
  unsigned long int st_msgs_send_failures;
  // st_msgs_sent
  unsigned long int st_msgs_sent;
  // st_newsites
  unsigned long int st_newsites;
  // st_nsites
  unsigned int st_nsites;
  // st_nthrottles
  unsigned long int st_nthrottles;
  // st_outdated
  unsigned long int st_outdated;
  // st_pg_duplicated
  unsigned long int st_pg_duplicated;
  // st_pg_records
  unsigned long int st_pg_records;
  // st_pg_requested
  unsigned long int st_pg_requested;
  // st_txns_applied
  unsigned long int st_txns_applied;
  // st_startsync_delayed
  unsigned long int st_startsync_delayed;
  // st_elections
  unsigned long int st_elections;
  // st_elections_won
  unsigned long int st_elections_won;
  // st_election_cur_winner
  signed long int st_election_cur_winner;
  // st_election_gen
  unsigned int st_election_gen;
  // st_election_datagen
  unsigned int st_election_datagen;
  // st_election_lsn
  struct __db_lsn st_election_lsn;
  // st_election_nsites
  unsigned int st_election_nsites;
  // st_election_nvotes
  unsigned int st_election_nvotes;
  // st_election_priority
  unsigned int st_election_priority;
  // st_election_status
  signed int st_election_status;
  // st_election_tiebreaker
  unsigned int st_election_tiebreaker;
  // st_election_votes
  unsigned int st_election_votes;
  // st_election_sec
  unsigned int st_election_sec;
  // st_election_usec
  unsigned int st_election_usec;
  // st_max_lease_sec
  unsigned int st_max_lease_sec;
  // st_max_lease_usec
  unsigned int st_max_lease_usec;
};

struct __db_repmgr_site
{
  // eid
  signed int eid;
  // host
  char *host;
  // port
  unsigned int port;
  // status
  unsigned int status;
  // flags
  unsigned int flags;
};

struct __db_repmgr_stat
{
  // st_perm_failed
  unsigned long int st_perm_failed;
  // st_msgs_queued
  unsigned long int st_msgs_queued;
  // st_msgs_dropped
  unsigned long int st_msgs_dropped;
  // st_connection_drop
  unsigned long int st_connection_drop;
  // st_connect_fail
  unsigned long int st_connect_fail;
  // st_elect_threads
  unsigned long int st_elect_threads;
  // st_max_elect_threads
  unsigned long int st_max_elect_threads;
};

struct __db_site
{
  // env
  struct __env *env;
  // eid
  signed int eid;
  // host
  const char *host;
  // port
  unsigned int port;
  // flags
  unsigned int flags;
  // get_address
  signed int (*get_address)(struct __db_site *, const char **, unsigned int *);
  // get_config
  signed int (*get_config)(struct __db_site *, unsigned int, unsigned int *);
  // get_eid
  signed int (*get_eid)(struct __db_site *, signed int *);
  // set_config
  signed int (*set_config)(struct __db_site *, unsigned int, unsigned int);
  // remove
  signed int (*remove)(struct __db_site *);
  // close
  signed int (*close)(struct __db_site *);
};

struct __kids
{
  // tqh_first
  struct __db_txn *tqh_first;
  // tqh_last
  struct __db_txn **tqh_last;
};

struct __my_cursors
{
  // tqh_first
  struct __dbc *tqh_first;
  // tqh_last
  struct __dbc **tqh_last;
};

struct __femfs
{
  // tqh_first
  struct __db *tqh_first;
  // tqh_last
  struct __db **tqh_last;
};

struct __db_txn
{
  // mgrp
  struct __db_txnmgr *mgrp;
  // parent
  struct __db_txn *parent;
  // thread_info
  struct __db_thread_info *thread_info;
  // txnid
  unsigned int txnid;
  // name
  char *name;
  // locker
  struct __db_locker *locker;
  // td
  void *td;
  // lock_timeout
  unsigned int lock_timeout;
  // txn_list
  void *txn_list;
  // links
  struct anonymous$8 links;
  // xa_links
  struct anonymous$9 xa_links;
  // kids
  struct __kids kids;
  // events
  struct anonymous$10 events;
  // logs
  struct anonymous$11 logs;
  // klinks
  struct anonymous$8 klinks;
  // my_cursors
  struct __my_cursors my_cursors;
  // femfs
  struct __femfs femfs;
  // token_buffer
  struct __db_txn_token *token_buffer;
  // api_internal
  void *api_internal;
  // xml_internal
  void *xml_internal;
  // cursors
  unsigned int cursors;
  // abort
  signed int (*abort)(struct __db_txn *);
  // commit
  signed int (*commit)(struct __db_txn *, unsigned int);
  // discard
  signed int (*discard)(struct __db_txn *, unsigned int);
  // get_name
  signed int (*get_name)(struct __db_txn *, const char **);
  // get_priority
  signed int (*get_priority)(struct __db_txn *, unsigned int *);
  // id
  unsigned int (*id)(struct __db_txn *);
  // prepare
  signed int (*prepare)(struct __db_txn *, unsigned char *);
  // set_commit_token
  signed int (*set_commit_token)(struct __db_txn *, struct __db_txn_token *);
  // set_name
  signed int (*set_name)(struct __db_txn *, const char *);
  // set_priority
  signed int (*set_priority)(struct __db_txn *, unsigned int);
  // set_timeout
  signed int (*set_timeout)(struct __db_txn *, unsigned int, unsigned int);
  // set_txn_lsnp
  void (*set_txn_lsnp)(struct __db_txn *, struct __db_lsn **, struct __db_lsn **);
  // xa_thr_status
  unsigned int xa_thr_status;
  // flags
  unsigned int flags;
};

struct __db_txn_active
{
  // txnid
  unsigned int txnid;
  // parentid
  unsigned int parentid;
  // pid
  signed int pid;
  // tid
  unsigned long int tid;
  // lsn
  struct __db_lsn lsn;
  // read_lsn
  struct __db_lsn read_lsn;
  // mvcc_ref
  unsigned int mvcc_ref;
  // priority
  unsigned int priority;
  // status
  unsigned int status;
  // xa_status
  unsigned int xa_status;
  // gid
  unsigned char gid[128l];
  // name
  char name[51l];
};

struct __db_txn_stat
{
  // st_nrestores
  unsigned int st_nrestores;
  // st_last_ckp
  struct __db_lsn st_last_ckp;
  // st_time_ckp
  signed long int st_time_ckp;
  // st_last_txnid
  unsigned int st_last_txnid;
  // st_inittxns
  unsigned int st_inittxns;
  // st_maxtxns
  unsigned int st_maxtxns;
  // st_naborts
  unsigned long int st_naborts;
  // st_nbegins
  unsigned long int st_nbegins;
  // st_ncommits
  unsigned long int st_ncommits;
  // st_nactive
  unsigned int st_nactive;
  // st_nsnapshot
  unsigned int st_nsnapshot;
  // st_maxnactive
  unsigned int st_maxnactive;
  // st_maxnsnapshot
  unsigned int st_maxnsnapshot;
  // st_region_wait
  unsigned long int st_region_wait;
  // st_region_nowait
  unsigned long int st_region_nowait;
  // st_regsize
  unsigned long int st_regsize;
  // st_txnarray
  struct __db_txn_active *st_txnarray;
};

struct __db_txn_token
{
  // buf
  unsigned char buf[20l];
};

struct __dbc
{
  // dbp
  struct __db *dbp;
  // dbenv
  struct __db_env *dbenv;
  // env
  struct __env *env;
  // thread_info
  struct __db_thread_info *thread_info;
  // txn
  struct __db_txn *txn;
  // priority
  enum anonymous$16 priority;
  // links
  struct anonymous$15 links;
  // txn_cursors
  struct anonymous$15 txn_cursors;
  // rskey
  struct __db_dbt *rskey;
  // rkey
  struct __db_dbt *rkey;
  // rdata
  struct __db_dbt *rdata;
  // my_rskey
  struct __db_dbt my_rskey;
  // my_rkey
  struct __db_dbt my_rkey;
  // my_rdata
  struct __db_dbt my_rdata;
  // lref
  struct __db_locker *lref;
  // locker
  struct __db_locker *locker;
  // lock_dbt
  struct __db_dbt lock_dbt;
  // lock
  struct __db_ilock lock;
  // mylock
  struct __db_lock_u mylock;
  // dbtype
  enum anonymous$17 dbtype;
  // internal
  struct __dbc_internal *internal;
  // close
  signed int (*close)(struct __dbc *);
  // cmp
  signed int (*cmp)(struct __dbc *, struct __dbc *, signed int *, unsigned int);
  // count
  signed int (*count)(struct __dbc *, unsigned int *, unsigned int);
  // del
  signed int (*del)(struct __dbc *, unsigned int);
  // dup
  signed int (*dup)(struct __dbc *, struct __dbc **, unsigned int);
  // get
  signed int (*get)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // get_priority
  signed int (*get_priority)(struct __dbc *, enum anonymous$16 *);
  // pget
  signed int (*pget)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // put
  signed int (*put)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // set_priority
  signed int (*set_priority)(struct __dbc *, enum anonymous$16);
  // c_close
  signed int (*c_close)(struct __dbc *);
  // c_count
  signed int (*c_count)(struct __dbc *, unsigned int *, unsigned int);
  // c_del
  signed int (*c_del)(struct __dbc *, unsigned int);
  // c_dup
  signed int (*c_dup)(struct __dbc *, struct __dbc **, unsigned int);
  // c_get
  signed int (*c_get)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // c_pget
  signed int (*c_pget)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // c_put
  signed int (*c_put)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int);
  // am_bulk
  signed int (*am_bulk)(struct __dbc *, struct __db_dbt *, unsigned int);
  // am_close
  signed int (*am_close)(struct __dbc *, unsigned int, signed int *);
  // am_del
  signed int (*am_del)(struct __dbc *, unsigned int);
  // am_destroy
  signed int (*am_destroy)(struct __dbc *);
  // am_get
  signed int (*am_get)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int, unsigned int *);
  // am_put
  signed int (*am_put)(struct __dbc *, struct __db_dbt *, struct __db_dbt *, unsigned int, unsigned int *);
  // am_writelock
  signed int (*am_writelock)(struct __dbc *);
  // flags
  unsigned int flags;
};

struct __key_range
{
  // less
  double less;
  // equal
  double equal;
  // greater
  double greater;
};

struct __log_rec_spec
{
  // type
  enum anonymous$14 type;
  // offset
  unsigned int offset;
  // name
  const char *name;
  // fmt
  const char fmt[4l];
};

struct buffer_position_struct
{
  // decomp_buf
  char decomp_buf[131072l];
  // current_pos_ptr
  char *current_pos_ptr;
  // end_decompbuf_ptr
  char *end_decompbuf_ptr;
};

struct dns_record_lists_t
{
  // date_set
  signed long int date_set;
  // fqdn
  char fqdn[1025l];
  // next
  struct dns_record_lists_t *next;
};

struct gzFile_s
{
  // have
  unsigned int have;
  // next
  unsigned char *next;
  // pos
  signed long int pos;
};

struct option
{
  // name
  const char *name;
  // has_arg
  signed int has_arg;
  // flag
  signed int *flag;
  // val
  signed int val;
};

struct pcre_extra
{
  // flags
  unsigned long int flags;
  // study_data
  void *study_data;
  // match_limit
  unsigned long int match_limit;
  // callout_data
  void *callout_data;
  // tables
  const unsigned char *tables;
  // match_limit_recursion
  unsigned long int match_limit_recursion;
  // mark
  unsigned char **mark;
  // executable_jit
  void *executable_jit;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct sockaddr
{
  // sa_family
  unsigned short int sa_family;
  // sa_data
  char sa_data[14l];
};

struct sockaddr_in
{
  // sin_family
  unsigned short int sin_family;
  // sin_port
  unsigned short int sin_port;
  // sin_addr
  struct in_addr sin_addr;
  // sin_zero
  unsigned char sin_zero[8l];
};

struct tm
{
  // tm_sec
  signed int tm_sec;
  // tm_min
  signed int tm_min;
  // tm_hour
  signed int tm_hour;
  // tm_mday
  signed int tm_mday;
  // tm_mon
  signed int tm_mon;
  // tm_year
  signed int tm_year;
  // tm_wday
  signed int tm_wday;
  // tm_yday
  signed int tm_yday;
  // tm_isdst
  signed int tm_isdst;
  // tm_gmtoff
  signed long int tm_gmtoff;
  // tm_zone
  const char *tm_zone;
};


// bad_lines
// file dnshistory.c line 174
unsigned long int bad_lines = (unsigned long int)0;
// bad_mismatched_lines
// file dnshistory.c line 176
unsigned long int bad_mismatched_lines = (unsigned long int)0;
// bad_recom_lines
// file dnshistory.c line 175
unsigned long int bad_recom_lines = (unsigned long int)0;
// cmp_log_regexp
// file dnshistory.c line 178
struct real_pcre *cmp_log_regexp = (struct real_pcre *)(void *)0;
// cmp_log_regexp_clf
// file dnshistory.c line 179
struct real_pcre *cmp_log_regexp_clf = (struct real_pcre *)(void *)0;
// cmp_log_regexp_combined_enhanced
// file dnshistory.c line 182
struct real_pcre *cmp_log_regexp_combined_enhanced = (struct real_pcre *)(void *)0;
// cmp_log_regexp_iptables
// file dnshistory.c line 183
struct real_pcre *cmp_log_regexp_iptables = (struct real_pcre *)(void *)0;
// cmp_log_regexp_squid
// file dnshistory.c line 181
struct real_pcre *cmp_log_regexp_squid = (struct real_pcre *)(void *)0;
// cmp_log_regexp_syslog
// file dnshistory.c line 184
struct real_pcre *cmp_log_regexp_syslog = (struct real_pcre *)(void *)0;
// cmp_log_regexp_xferlog
// file dnshistory.c line 180
struct real_pcre *cmp_log_regexp_xferlog = (struct real_pcre *)(void *)0;
// cond_thread_count
// file dnshistory.c line 227
union anonymous$4 cond_thread_count = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// current_day
// file dnshistory.h line 166
signed long int current_day;
// db_cache_size
// file options.c line 61
unsigned int db_cache_size = (unsigned int)20;
// dnshistory_db_ptr
// file dnshistory.c line 164
struct __db *dnshistory_db_ptr;
// g_db_dirfilename
// file dnshistory.c line 165
char g_db_dirfilename[512l] = { '/', 'v', 'a', 'r', '/', 'l', 'i', 'b', '/', 'd', 'n', 's', 'h', 'i', 's', 't', 'o', 'r', 'y', '/', 'd', 'n', 's', 'h', 'i', 's', 't', 'o', 'r', 'y', '.', 'd', 'b', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
// g_dns_lookups
// file options.c line 63
signed int g_dns_lookups = 2;
// g_dns_retry_delay
// file options.c line 65
signed int g_dns_retry_delay = 1;
// g_dns_timeout
// file options.c line 62
signed int g_dns_timeout = 7 * 24 * 60 * 60;
// g_doimport
// file options.c line 59
_Bool g_doimport = (_Bool)0;
// g_dolookups
// file options.c line 52
_Bool g_dolookups = (_Bool)1;
// g_dorecombine
// file options.c line 56
_Bool g_dorecombine = (_Bool)0;
// g_dotranslate
// file options.c line 55
_Bool g_dotranslate = (_Bool)0;
// g_dumpdnsdb
// file options.c line 57
_Bool g_dumpdnsdb = (_Bool)0;
// g_filename
// file options.c line 46
char *g_filename = (char *)(void *)0;
// g_import_filename
// file options.c line 50
char *g_import_filename = (char *)(void *)0;
// g_log_type
// file dnshistory.c line 186
signed int g_log_type = 0;
// g_max_threads
// file options.c line 64
unsigned int g_max_threads = (unsigned int)100;
// g_recombine_filename
// file options.c line 47
char *g_recombine_filename = (char *)(void *)0;
// g_showhistory
// file options.c line 58
_Bool g_showhistory = (_Bool)0;
// g_verbosity
// file messages.c line 34
signed int g_verbosity = 0;
// is_shown_filter
// file regexp.c line 50
_Bool is_shown_filter = (_Bool)0;
// malloc_dns_list
// file dnshistory.c line 233
signed int malloc_dns_list = 0;
// malloc_dns_rec
// file dnshistory.c line 231
signed int malloc_dns_rec = 0;
// msg_E_ip_conversion
// file messages.c line 73
const char *msg_E_ip_conversion = "ERROR! IP conversion: %d - %s\n";
// msg_E_log_misordered
// file messages.c line 71
const char *msg_E_log_misordered = "ERROR! Current Time is older than 1st logged time entry: ";
// msg_E_pcre_no_memory
// file messages.c line 76
const char *msg_E_pcre_no_memory = " PCRE: Insufficient Memory.%s\n";
// msg_E_pcre_nonexist_substring
// file messages.c line 77
const char *msg_E_pcre_nonexist_substring = " PCRE: Substring doesn't exist.%s\n";
// msg_E_pcre_unknown
// file messages.c line 78
const char *msg_E_pcre_unknown = " PCRE: Unknown PCRE Error: %d\n";
// msg_E_re_too_many_substrings
// file messages.c line 72
const char *msg_E_re_too_many_substrings = "ERROR! Too many substrings. Line Number: %lu  Max Substrings: %d\n";
// msg_E_substring_extraction
// file messages.c line 75
const char *msg_E_substring_extraction = "ERROR! Failed to extract substring: %d  Line Number: %lu\n";
// msg_E_thread_creation
// file messages.c line 81
const char *msg_E_thread_creation = "ERROR! Thread Creation: %d\n";
// msg_E_thread_lock
// file messages.c line 82
const char *msg_E_thread_lock = "ERROR! Thread Locking: %d\n";
// msg_E_thread_stack_resize
// file messages.c line 80
const char *msg_E_thread_stack_resize = "ERROR! Thread Stack Resize: %d\n";
// msg_E_thread_unlock
// file messages.c line 83
const char *msg_E_thread_unlock = "ERROR! Thread Unlocking: %d\n";
// msg_F_db_cache
// file messages.c line 86
const char *msg_F_db_cache = "FATAL ERROR! DB Set Cache Size Failure: %s\n";
// msg_F_db_close
// file messages.c line 87
const char *msg_F_db_close = "FATAL ERROR! Error closing DB. Possible Corruption! : %d\n";
// msg_F_db_create
// file messages.c line 85
const char *msg_F_db_create = "FATAL ERROR! DB Create Failure: %s\n";
// msg_F_db_cursor
// file messages.c line 88
const char *msg_F_db_cursor = "FATAL ERROR! DB Cursor Creation Failure.%s\n";
// msg_F_early_log_termination
// file messages.c line 100
const char *msg_F_early_log_termination = "FATAL ERROR! Recombine Log has terminated early! Line: %lu\n";
// msg_F_file_open
// file messages.c line 90
const char *msg_F_file_open = "FATAL ERROR! Failed to open file: %s\n";
// msg_F_incompatible_options
// file messages.c line 98
const char *msg_F_incompatible_options = "FATAL ERROR! Incompatible Option Settings!";
// msg_F_mem_alloc_hash
// file messages.c line 91
const char *msg_F_mem_alloc_hash = "FATAL ERROR! Failed to allocate memory for hash data.%s\n";
// msg_F_memory_alloc
// file messages.c line 92
const char *msg_F_memory_alloc = "FATAL ERROR! Failed to allocate memory.%s\n";
// msg_F_mismatched_lines
// file messages.c line 99
const char *msg_F_mismatched_lines = "FATAL ERROR! Totally Mismatched Log Lines. Line Number %lu\n %s %s\n";
// msg_F_pcre_failed_compilation
// file messages.c line 94
const char *msg_F_pcre_failed_compilation = "FATAL ERROR! PCRE compilation failed at offset";
// msg_F_run_start_datetime
// file messages.c line 95
const char *msg_F_run_start_datetime = "FATAL ERROR! Can't extract starting date/time. Sorry things didn't work out...";
// msg_F_vital_substring
// file messages.c line 96
const char *msg_F_vital_substring = "FATAL ERROR! Failed to extract vital substring: %d\n";
// msg_I_number_bad_lines
// file messages.c line 51
const char *msg_I_number_bad_lines = "INFO: Log Files(s) had BAD lines: ";
// msg_W_exceeded_verbosity
// file messages.c line 54
const char *msg_W_exceeded_verbosity = "WARN: Too many 'v' options. Setting to Max Verbosness";
// msg_W_import_line_failure
// file messages.c line 60
const char *msg_W_import_line_failure = "WARN: Failed to import line: %lu\n";
// msg_W_import_line_too_long
// file messages.c line 59
const char *msg_W_import_line_too_long = "WARN: Import line too long: %lu\n";
// msg_W_line_too_big
// file messages.c line 55
const char *msg_W_line_too_big = "WARN: Line too big. Ignoring.";
// msg_W_mismatched_lines
// file messages.c line 58
const char *msg_W_mismatched_lines = "WARN: Possibly Mismatched Log Lines. Line Number: %lu\n ++ %s -- %s";
// msg_W_re_match_error
// file messages.c line 57
const char *msg_W_re_match_error = "WARN: PCRE: Matching error. Line Number: %lu\n  %s";
// msg_W_re_match_failed
// file messages.c line 56
const char *msg_W_re_match_failed = "WARN: PCRE: No match. Line Number: %lu\n  %s";
// msg_namelookup_default
// file messages.c line 63
const char *msg_namelookup_default = "Some other error occoured: ";
// msg_namelookup_try_agin
// file messages.c line 62
const char *msg_namelookup_try_agin = "Name could not be looked up at this time; Try again later";
// msg_v1_hashdb
// file messages.c line 65
const char *msg_v1_hashdb = "Entering: Open Hash DB";
// msg_v2_create_dbcache
// file messages.c line 67
const char *msg_v2_create_dbcache = "Setting Cache Size for Hash DB: ";
// msg_v2_create_hashdb
// file messages.c line 66
const char *msg_v2_create_hashdb = "Creating Hash DB: ";
// msg_v2_no_dbcache
// file messages.c line 68
const char *msg_v2_no_dbcache = "Cache <= 0. Not Creating. Size: ";
// mutex_db_access
// file dnshistory.c line 229
union anonymous$3 mutex_db_access = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mutex_malloc_dns_list
// file dnshistory.c line 232
union anonymous$3 mutex_malloc_dns_list = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mutex_malloc_dns_rec
// file dnshistory.c line 230
union anonymous$3 mutex_malloc_dns_rec = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mutex_other_counters
// file dnshistory.c line 235
union anonymous$3 mutex_other_counters = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// mutex_thread_count
// file dnshistory.c line 224
union anonymous$3 mutex_thread_count = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// number_added_addresses
// file dnshistory.c line 168
unsigned long int number_added_addresses = (unsigned long int)0;
// number_name_lookups
// file dnshistory.c line 169
unsigned long int number_name_lookups = (unsigned long int)0;
// number_retries
// file dnshistory.c line 170
unsigned long int number_retries = (unsigned long int)0;
// number_successful_fqdns
// file dnshistory.c line 172
unsigned long int number_successful_fqdns = (unsigned long int)0;
// number_successful_retries
// file dnshistory.c line 171
unsigned long int number_successful_retries = (unsigned long int)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// rtn_db
// file dnshistory.c line 167
signed int rtn_db;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// thread_count
// file dnshistory.c line 225
unsigned int thread_count = (unsigned int)0;
// thread_count_max
// file dnshistory.c line 226
unsigned int thread_count_max = (unsigned int)0;
// total_lines
// file dnshistory.c line 173
unsigned long int total_lines = (unsigned long int)0;

// __strpbrk_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1100
static inline char * __strpbrk_c2(const char *__s, signed int __accept1, signed int __accept2)
{
  for( ; !((signed int)*__s == 0); __s = __s + 1l)
  {
    if((signed int)*__s == __accept1)
      break;

    if((signed int)*__s == __accept2)
      break;

  }
  return (signed int)*__s == 0 ? (char *)(void *)0 : (char *)(unsigned long int)__s;
}

// __strpbrk_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1111
static inline char * __strpbrk_c3(const char *__s, signed int __accept1, signed int __accept2, signed int __accept3)
{
  for( ; !((signed int)*__s == 0); __s = __s + 1l)
  {
    if((signed int)*__s == __accept1)
      break;

    if((signed int)*__s == __accept2)
      break;

    if((signed int)*__s == __accept3)
      break;

  }
  return (signed int)*__s == 0 ? (char *)(void *)0 : (char *)(unsigned long int)__s;
}

// add_address
// file dnshistory.c line 742
void add_address(char *str_ipaddr)
{
  struct anonymous$13 *dnsrec;
  unsigned long int pthrd;
  union pthread_attr_t pthrd_attrs;
  signed int ret_thrd;
  signed int ret_pton;
  struct dns_record_lists_t *list;
  struct dns_record_lists_t *list_next;
  if(g_verbosity >= 5)
    printf("  INIT. Add Address; Do Lookup on: %s\n", str_ipaddr);

  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)1 * sizeof(struct anonymous$13) /*24ul*/ );
  dnsrec = (struct anonymous$13 *)return_value_xmalloc$1;
  pthread_mutex_lock(&mutex_malloc_dns_rec);
  malloc_dns_rec = malloc_dns_rec + 1;
  pthread_mutex_unlock(&mutex_malloc_dns_rec);
  dnsrec->list = (struct dns_record_lists_t *)(void *)0;
  ret_pton=inet_pton(2, str_ipaddr, (void *)&dnsrec->ipaddress);
  if(ret_pton == 0)
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_ip_conversion, ret_pton, str_ipaddr);

  }

  else
  {
    pthread_attr_init(&pthrd_attrs);
    ret_thrd=pthread_attr_setstacksize(&pthrd_attrs, (unsigned long int)(1 << 15));
    if(!(ret_thrd == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_stack_resize, ret_thrd);

    }

    signed int return_value_address_exists$2;
    return_value_address_exists$2=address_exists(dnsrec);
    if(return_value_address_exists$2 == 0)
    {
      if(g_verbosity >= 5)
        printf("    New Record%s", (const void *)"\n");

      dnsrec->date_last = current_day;
      number_added_addresses = number_added_addresses + 1ul;
      store_dns_records(dnsrec);
      increase_thread_counter();
      ret_thrd=pthread_create(&pthrd, &pthrd_attrs, add_new_address, (void *)dnsrec);
      if(!(ret_thrd == 0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, msg_E_thread_creation, ret_thrd);

      }

    }

    else
    {
      if(g_verbosity >= 5)
        printf("    Old Record: %lu --> %lu\n", dnsrec->date_last, current_day);

      if(!(dnsrec->date_last >= current_day + -((signed long int)g_dns_timeout)))
      {
        if(g_verbosity >= 5)
          printf("     Outside timeout period. New Lookup.%s", (const void *)"\n");

        dnsrec->date_last = current_day;
        number_added_addresses = number_added_addresses + 1ul;
        store_dns_records(dnsrec);
        increase_thread_counter();
        ret_thrd=pthread_create(&pthrd, &pthrd_attrs, add_old_address, (void *)dnsrec);
        if(!(ret_thrd == 0))
        {
          fflush(stdout);
          if(g_verbosity >= 0)
            fprintf(stderr, msg_E_thread_creation, ret_thrd);

        }

      }

      else
      {
        list = dnsrec->list;
        if(g_verbosity >= 5)
          printf("    Inside timeout period. Free Record(s).%s", (const void *)"\n");

        while(!(list == ((struct dns_record_lists_t *)NULL)))
        {
          if(g_verbosity >= 5)
            printf("      Freeing List Entry: %s\n", (const void *)list->fqdn);

          list_next = list->next;
          free((void *)list);
          list = (struct dns_record_lists_t *)(void *)0;
          list = list_next;
          pthread_mutex_lock(&mutex_malloc_dns_list);
          malloc_dns_list = malloc_dns_list - 1;
          pthread_mutex_unlock(&mutex_malloc_dns_list);
        }
        free((void *)dnsrec);
        dnsrec = (struct anonymous$13 *)(void *)0;
        pthread_mutex_lock(&mutex_malloc_dns_rec);
        malloc_dns_rec = malloc_dns_rec - 1;
        pthread_mutex_unlock(&mutex_malloc_dns_rec);
      }
    }
  }
}

// add_new_address
// file dnshistory.c line 1195
void * add_new_address(void *arg)
{
  signed int ret_gni;
  struct anonymous$13 *dnsrec = (struct anonymous$13 *)arg;
  struct dns_record_lists_t dnsrec_list;
  signed int err;
  if(g_verbosity >= 5)
    printf("ADD_NEW_ADDR: START!:%s", (const void *)"\n");

  memset((void *)&dnsrec_list, 0, sizeof(struct dns_record_lists_t) /*1048ul*/ );
  dnsrec->list = &dnsrec_list;
  ret_gni=name_lookup(dnsrec->ipaddress, dnsrec->list->fqdn);
  if(!(ret_gni == 0))
    name_lookup_errors(ret_gni);

  else
  {
    dnsrec->date_last = current_day;
    dnsrec->list->date_set = current_day;
    dnsrec->list->next = (struct dns_record_lists_t *)(void *)0;
  }
  store_dns_records(dnsrec);
  free((void *)dnsrec);
  dnsrec = (struct anonymous$13 *)(void *)0;
  err=pthread_mutex_lock(&mutex_malloc_dns_rec);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_lock, err);

  }

  malloc_dns_rec = malloc_dns_rec - 1;
  err=pthread_mutex_unlock(&mutex_malloc_dns_rec);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_unlock, err);

  }

  decrease_thread_counter();
  unsigned long int return_value_pthread_self$1;
  return_value_pthread_self$1=pthread_self();
  pthread_detach(return_value_pthread_self$1);
  pthread_exit(NULL);
}

// add_old_address
// file dnshistory.c line 1251
void * add_old_address(void *arg)
{
  signed int ret_gni;
  struct anonymous$13 *dnsrec = (struct anonymous$13 *)arg;
  struct dns_record_lists_t dnsrec_list;
  struct dns_record_lists_t *list;
  struct dns_record_lists_t *list_next;
  signed int err;
  memset((void *)&dnsrec_list, 0, sizeof(struct dns_record_lists_t) /*1048ul*/ );
  ret_gni=name_lookup(dnsrec->ipaddress, dnsrec_list.fqdn);
  if(!(ret_gni == 0))
    name_lookup_errors(ret_gni);

  else
  {
    signed int return_value_strncmp$1;
    return_value_strncmp$1=strncmp(dnsrec->list->fqdn, dnsrec_list.fqdn, (unsigned long int)1025);
    if(!(return_value_strncmp$1 == 0))
    {
      if(g_verbosity >= 2)
        printf("ADD_OLD_ADDR: Changed FQDN: %s --> %s\n", (const void *)dnsrec->list->fqdn, (const void *)dnsrec_list.fqdn);

      dnsrec->date_last = current_day;
      dnsrec_list.date_set = current_day;
      dnsrec_list.next = dnsrec->list;
      dnsrec->list = &dnsrec_list;
      store_dns_records(dnsrec);
    }

  }
  list = dnsrec->list;
  if(dnsrec->list == &dnsrec_list)
    list = dnsrec->list->next;

  while(!(list == ((struct dns_record_lists_t *)NULL)))
  {
    if(g_verbosity >= 5)
      printf("ADD_OLD_ADDR: Freeing List Entry: %s\n", (const void *)list->fqdn);

    list_next = list->next;
    free((void *)list);
    list = (struct dns_record_lists_t *)(void *)0;
    list = list_next;
    err=pthread_mutex_lock(&mutex_malloc_dns_list);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_lock, err);

    }

    malloc_dns_list = malloc_dns_list - 1;
    err=pthread_mutex_unlock(&mutex_malloc_dns_list);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_unlock, err);

    }

  }
  free((void *)dnsrec);
  dnsrec = (struct anonymous$13 *)(void *)0;
  err=pthread_mutex_lock(&mutex_malloc_dns_rec);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_lock, err);

  }

  malloc_dns_rec = malloc_dns_rec - 1;
  err=pthread_mutex_unlock(&mutex_malloc_dns_rec);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_unlock, err);

  }

  decrease_thread_counter();
  if(g_verbosity >= 5)
    printf("ADD_OLD_ADDR: EXITING!: %s\n", (const void *)dnsrec_list.fqdn);

  unsigned long int return_value_pthread_self$2;
  return_value_pthread_self$2=pthread_self();
  pthread_detach(return_value_pthread_self$2);
  pthread_exit(NULL);
}

// add_recombined_address
// file dnshistory.c line 953
void add_recombined_address(char *str_ipaddr, char *str_fqdn, char *str_time)
{
  struct anonymous$13 *dnsrec;
  signed int ret_pton;
  struct dns_record_lists_t *list;
  struct dns_record_lists_t *list_next;
  struct dns_record_lists_t dnsrec_list;
  struct tm time_rec;
  signed long int time_logentry = (signed long int)0;
  if(g_verbosity >= 3)
    printf("  **INIT: Add Recombined Address; Given: %s  Add: %s\n", str_ipaddr, str_fqdn);

  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)1 * sizeof(struct anonymous$13) /*24ul*/ );
  dnsrec = (struct anonymous$13 *)return_value_xmalloc$1;
  dnsrec->list = (struct dns_record_lists_t *)(void *)0;
  ret_pton=inet_pton(2, str_ipaddr, (void *)&dnsrec->ipaddress);
  if(ret_pton == 0)
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_ip_conversion, ret_pton, str_ipaddr);

  }

  else
  {
    memset((void *)&time_rec, 0, sizeof(struct tm) /*56ul*/ );
    strptime(str_time, "%d/%b/%Y:%H:%M:%S", &time_rec);
    time_logentry=mktime(&time_rec);
    if(g_verbosity >= 5)
      printf("    ARA: Date/Time: %s -> %ld\n", str_time, time_logentry);

    signed int return_value_address_exists$4;
    return_value_address_exists$4=address_exists(dnsrec);
    if(return_value_address_exists$4 == 0)
    {
      if(g_verbosity >= 4)
        printf("    ARA: New Record%s", (const void *)"\n");

      memset((void *)&dnsrec_list, 0, sizeof(struct dns_record_lists_t) /*1048ul*/ );
      dnsrec->list = &dnsrec_list;
      __builtin_strncpy(dnsrec->list->fqdn, str_fqdn, (unsigned long int)1025);
      dnsrec->date_last = time_logentry;
      dnsrec->list->date_set = time_logentry;
      dnsrec->list->next = (struct dns_record_lists_t *)(void *)0;
      if(g_verbosity >= 2)
        printf("  ARA: Storing New: %15s %s\n", str_ipaddr, str_fqdn);

      number_added_addresses = number_added_addresses + 1ul;
      store_dns_records(dnsrec);
      free((void *)dnsrec);
      dnsrec = (struct anonymous$13 *)(void *)0;
    }

    else
    {
      if(g_verbosity >= 5)
        printf("    ARA: Old Record: %lu --> %lu\n", dnsrec->date_last, time_logentry);

      if(!(dnsrec->date_last >= time_logentry + -((signed long int)g_dns_timeout)))
      {
        if(g_verbosity >= 5)
          printf("      ARA: Outside timeout period. Update Entry.%s", (const void *)"\n");

        dnsrec->date_last = time_logentry;
        signed int return_value_strncmp$3;
        return_value_strncmp$3=strncmp(dnsrec->list->fqdn, str_fqdn, (unsigned long int)1025);
        if(!(return_value_strncmp$3 == 0))
        {
          if(g_verbosity >= 4)
            printf("      ARA: Add Recombined Address: Changed FQDN: %s --> %s\n", (const void *)dnsrec->list->fqdn, str_fqdn);

          void *return_value_xmalloc$2;
          return_value_xmalloc$2=xmalloc((unsigned long int)1 * sizeof(struct dns_record_lists_t) /*1048ul*/ );
          list_next = (struct dns_record_lists_t *)return_value_xmalloc$2;
          list_next->date_set = time_logentry;
          __builtin_strncpy(list_next->fqdn, str_fqdn, (unsigned long int)1025);
          list_next->next = dnsrec->list;
          dnsrec->list = list_next;
          if(g_verbosity >= 2)
            printf("  ARA: Storing Update: %15s %s\n", str_ipaddr, str_fqdn);

        }

        number_added_addresses = number_added_addresses + 1ul;
        store_dns_records(dnsrec);
      }

      list = dnsrec->list;
      if(g_verbosity >= 5)
        printf("      ARA: Inside timeout period. Free Record(s).%s", (const void *)"\n");

      for( ; !(list == ((struct dns_record_lists_t *)NULL)); list = list_next)
      {
        if(g_verbosity >= 5)
          printf("        ARA: Freeing List Entry: %s\n", (const void *)list->fqdn);

        list_next = list->next;
        free((void *)list);
        list = (struct dns_record_lists_t *)(void *)0;
      }
      free((void *)dnsrec);
      dnsrec = (struct anonymous$13 *)(void *)0;
    }
  }
}

// add_record
// file db_dnshistory.h line 49
extern void add_record(struct __db **db_ptr, void *key_val, signed int size_key, void *data_val, signed int size_data)
{
  signed int rtn;
  struct __db_dbt dbt_key;
  struct __db_dbt dbt_data;
  if(g_verbosity >= 4)
    printf("  ADD Record%s\n", (const void *)"");

  memset((void *)&dbt_key, 0, sizeof(struct __db_dbt) /*40ul*/ );
  memset((void *)&dbt_data, 0, sizeof(struct __db_dbt) /*40ul*/ );
  dbt_key.data = (void *)(char *)key_val;
  dbt_key.size = (unsigned int)size_key;
  dbt_data.data = (void *)(char *)data_val;
  dbt_data.size = (unsigned int)size_data;
  pthread_mutex_lock(&mutex_db_access);
  rtn=(*db_ptr)->put(*db_ptr, (struct __db_txn *)(void *)0, &dbt_key, &dbt_data, (unsigned int)0);
  if(!(rtn == 0))
  {
    (*db_ptr)->err(*db_ptr, rtn, "\tDB->put");
    close_dnshistory_db(db_ptr);
    exit(43);
  }

  pthread_mutex_unlock(&mutex_db_access);
}

// address_exists
// file dnshistory.c line 1459
signed int address_exists(struct anonymous$13 *dns_rec_ptr)
{
  signed int rtn = 0;
  struct __db_dbt dbt_key;
  struct __db_dbt dbt_data;
  signed int db_rtn;
  struct dns_record_lists_t *new_dns_rec = (struct dns_record_lists_t *)(void *)0;
  struct dns_record_lists_t *tail_dns_rec = (struct dns_record_lists_t *)(void *)0;
  void *idx_ptr = (void *)0;
  signed int size = 0;
  signed int nbr_items = 0;
  signed int err;
  char str_address[16l];
  if(g_verbosity >= 5)
  {
    const char *return_value_inet_ntop$1;
    return_value_inet_ntop$1=inet_ntop(2, (const void *)&dns_rec_ptr->ipaddress, str_address, (unsigned int)16);
    printf("    Address Exists?: %16s\n", return_value_inet_ntop$1);
  }

  memset((void *)&dbt_key, 0, sizeof(struct __db_dbt) /*40ul*/ );
  memset((void *)&dbt_data, 0, sizeof(struct __db_dbt) /*40ul*/ );
  dbt_key.data = (void *)(char *)&dns_rec_ptr->ipaddress.s_addr;
  dbt_key.size = (unsigned int)sizeof(unsigned int) /*4ul*/ ;
  err=pthread_mutex_lock(&mutex_db_access);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_lock, err);

  }

  db_rtn=dnshistory_db_ptr->get(dnshistory_db_ptr, (struct __db_txn *)(void *)0, &dbt_key, &dbt_data, (unsigned int)0);
  if(db_rtn == 0)
  {
    idx_ptr = dbt_data.data;
    size = (signed int)sizeof(signed long int) /*8ul*/ ;
    memcpy((void *)&dns_rec_ptr->date_last, idx_ptr, (unsigned long int)size);
    idx_ptr = idx_ptr + (signed long int)size;
    size = (signed int)sizeof(signed int) /*4ul*/ ;
    memcpy((void *)&nbr_items, idx_ptr, (unsigned long int)size);
    idx_ptr = idx_ptr + (signed long int)size;
    if(nbr_items >= 1)
    {
      void *return_value_xmalloc$2;
      return_value_xmalloc$2=xmalloc((unsigned long int)1 * sizeof(struct dns_record_lists_t) /*1048ul*/ );
      new_dns_rec = (struct dns_record_lists_t *)return_value_xmalloc$2;
      err=pthread_mutex_lock(&mutex_malloc_dns_list);
      if(!(err == 0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, msg_E_thread_lock, err);

      }

      malloc_dns_list = malloc_dns_list + 1;
      err=pthread_mutex_unlock(&mutex_malloc_dns_list);
      if(!(err == 0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, msg_E_thread_unlock, err);

      }

      if(dns_rec_ptr->list == ((struct dns_record_lists_t *)NULL))
        dns_rec_ptr->list = new_dns_rec;

      else
        tail_dns_rec->next = new_dns_rec;
      tail_dns_rec = new_dns_rec;
      new_dns_rec->next = (struct dns_record_lists_t *)(void *)0;
      size = (signed int)sizeof(signed long int) /*8ul*/ ;
      memcpy((void *)&new_dns_rec->date_set, idx_ptr, (unsigned long int)size);
      idx_ptr = idx_ptr + (signed long int)size;
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen((char *)idx_ptr);
      size = (signed int)((return_value_strlen$3 + (unsigned long int)1) * sizeof(char) /*1ul*/ );
      memcpy((void *)new_dns_rec->fqdn, idx_ptr, (unsigned long int)size);
      check_n_fix_fqdn(new_dns_rec->fqdn);
      idx_ptr = idx_ptr + (signed long int)size;
      if(g_verbosity >= 5)
        printf("      Address Exists? Yes: %s\n", (const void *)new_dns_rec->fqdn);

      nbr_items = nbr_items - 1;
    }

    rtn = 1;
    err=pthread_mutex_unlock(&mutex_db_access);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_unlock, err);

    }

  }

  else
  {
    err=pthread_mutex_unlock(&mutex_db_access);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_unlock, err);

    }

    if(g_verbosity >= 5)
      printf("      Address Exists?: No.%s", (const void *)"\n");

    rtn = 0;
  }
  return rtn;
}

// check_n_fix_fqdn
// file dnshistory.c line 1936
void check_n_fix_fqdn(char *fqdn)
{
  unsigned int length;
  unsigned int i;
  if(g_verbosity >= 4)
    printf("  Check'N Fix: %s --> ", fqdn);

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(fqdn);
  length = (unsigned int)return_value_strlen$1;
  i = (unsigned int)0;
  _Bool tmp_if_expr$2;
  for( ; !(i >= length); i = i + 1u)
  {
    if(!((signed int)fqdn[(signed long int)i] >= 33))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = (signed int)fqdn[(signed long int)i] > 126 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      fqdn[(signed long int)i] = (char)95;

  }
  if(g_verbosity >= 4)
    printf("%s\n", fqdn);

}

// close_dnshistory_db
// file db_dnshistory.h line 48
extern signed int close_dnshistory_db(struct __db **db_ptr)
{
  signed int rtn_db_close;
  rtn_db_close=(*db_ptr)->close(*db_ptr, (unsigned int)0);
  if(!(rtn_db_close == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_F_db_close, rtn_db_close);

  }

  return rtn_db_close;
}

// close_exit
// file dnshistory.c line 1444
void close_exit(signed int exit_code)
{
  close_dnshistory_db(&dnshistory_db_ptr);
  exit(exit_code);
}

// decrease_thread_counter
// file dnshistory.c line 1167
void decrease_thread_counter(void)
{
  signed int err;
  err=pthread_mutex_lock(&mutex_thread_count);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_lock, err);

  }

  thread_count = thread_count - 1u;
  if(g_verbosity >= 4)
    printf("THRD EXIT: Thread count: %d\n", thread_count);

  pthread_cond_signal(&cond_thread_count);
  err=pthread_mutex_unlock(&mutex_thread_count);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_unlock, err);

  }

}

// delete_record
// file db_dnshistory.c line 171
extern void delete_record(struct __db **db_ptr, char *key_val)
{
  signed int rtn;
  struct __db_dbt del_key;
  if(g_verbosity >= 4)
    printf("  DELETE Record%s\n", (const void *)"");

  memset((void *)&del_key, 0, sizeof(struct __db_dbt) /*40ul*/ );
  del_key.data = (void *)key_val;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(key_val);
  del_key.size = (unsigned int)((return_value_strlen$1 + (unsigned long int)1) * sizeof(char) /*1ul*/ );
  rtn=(*db_ptr)->del(*db_ptr, (struct __db_txn *)(void *)0, &del_key, (unsigned int)0);
  if(!(rtn == 0))
  {
    (*db_ptr)->err(*db_ptr, rtn, "\tDB->del");
    close_dnshistory_db(db_ptr);
    free((void *)db_ptr);
    db_ptr = (struct __db **)(void *)0;
    exit(44);
  }

}

// display_gnu_info
// file options.c line 138
void display_gnu_info(signed int exit_code)
{
  display_version();
  printf("%s\n%s%s%s\n%s\n%s\n", (const void *)"There is NO warranty; not even for MERCHANTABILITY or FITNESS FOR A", (const void *)"PARTICULAR PURPOSE.  You may redistribute copies of ", (const void *)"dnshistory", (const void *)" under the terms", (const void *)"the GNU General Public License.", (const void *)"For more information about these matters, see the file named COPYING.");
  exit(exit_code);
}

// display_record
// file dnshistory.c line 1626
void display_record(struct __db_dbt *dbt_key, struct __db_dbt *dbt_data, _Bool realdate)
{
  struct anonymous$13 dnsrec;
  struct dns_record_lists_t dnslist_rec;
  void *idx_ptr = (void *)0;
  signed int size = 0;
  signed int nbr_items = 0;
  char str_address[16l];
  struct tm *date_last_full;
  if(g_verbosity >= 5)
    printf("  Display Record!%s", (const void *)"\n");

  memset((void *)&dnsrec, 0, sizeof(struct anonymous$13) /*24ul*/ );
  idx_ptr = dbt_data->data;
  size = (signed int)sizeof(signed long int) /*8ul*/ ;
  memcpy((void *)&dnsrec.date_last, idx_ptr, (unsigned long int)size);
  idx_ptr = idx_ptr + (signed long int)size;
  size = (signed int)sizeof(signed int) /*4ul*/ ;
  memcpy((void *)&nbr_items, idx_ptr, (unsigned long int)size);
  idx_ptr = idx_ptr + (signed long int)size;
  memcpy((void *)&dnsrec.ipaddress.s_addr, dbt_key->data, sizeof(unsigned int) /*4ul*/ );
  inet_ntop(2, (const void *)&dnsrec.ipaddress, str_address, (unsigned int)16);
  printf("%-s", (const void *)str_address);
  while(nbr_items >= 1)
  {
    memset((void *)&dnslist_rec, 0, sizeof(struct anonymous$13) /*24ul*/ );
    size = (signed int)sizeof(signed long int) /*8ul*/ ;
    memcpy((void *)&dnslist_rec.date_set, idx_ptr, (unsigned long int)size);
    idx_ptr = idx_ptr + (signed long int)size;
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen((char *)idx_ptr);
    size = (signed int)((return_value_strlen$1 + (unsigned long int)1) * sizeof(char) /*1ul*/ );
    memcpy((void *)dnslist_rec.fqdn, idx_ptr, (unsigned long int)size);
    idx_ptr = idx_ptr + (signed long int)size;
    printf("\t");
    if((signed int)realdate == 1)
    {
      date_last_full=localtime(&dnslist_rec.date_set);
      printf("%4d-%02d-%02d:%02d:%02d:%02d,", date_last_full->tm_year + 1900, date_last_full->tm_mon + 1, date_last_full->tm_mday, date_last_full->tm_hour, date_last_full->tm_min, date_last_full->tm_sec);
    }

    else
      printf("%d,", (signed int)dnslist_rec.date_set);
    check_n_fix_fqdn(dnslist_rec.fqdn);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(dnslist_rec.fqdn);
    if(return_value_strlen$2 >= 1ul)
      printf("%s", (const void *)dnslist_rec.fqdn);

    else
      printf("%s", (const void *)"NONAME");
    memset((void *)&str_address, 0, sizeof(char [16l]) /*16ul*/ );
    nbr_items = nbr_items - 1;
  }
  printf("\n");
}

// display_usage
// file options.c line 95
void display_usage(signed int exit_code)
{
  display_version();
  printf("Usage: dnshistory [OPTION]...\n");
  printf("  -L, --dolookups            Do Lookups and store into DB (default)\n");
  printf("  -D, --dodump               Dump the history Database to STDOUT\n");
  printf("  -I, --doimport=FILE        Import a Dumped history from FILE\n");
  printf("  -T, --dotranslate          Retrieve lookups from DB and replace in output\n");
  printf("  -R, --dorecombine=FILE     Recombine wth the Names in this log file\n");
  printf("  -S, --showhistory          Given one or more IP's show their history\n");
  printf("\n");
  printf("  --logtype=LOGTYPE          Set the log type to use\n");
  printf("                               auto, clf or www, squid, ftp, iptables\n");
  printf("                               (default = auto)\n");
  printf("\n");
  printf("  -c, --cache=SIZE           Size of the In Memory Cache to create in Mb\n");
  printf("                               (default = %d)\n", 20);
  printf("  -d, --database=FILE        Database File to store results in\n");
  printf("                               (default = %s)\n", (const void *)"/var/lib/dnshistory/dnshistory.db");
  printf("  -f, --file=FILE            Log File to process\n");
  printf("                               if not set will use STDIN\n");
  printf("  -h, --help                 Display this message\n");
  printf("  -l, --maxlookups=NUMBER    Number of attempts to try queries\n");
  printf("                               (default = %d)\n", 2);
  printf("  -m, --maxthreads=NUMBER    Maximum number of threads\n");
  printf("                               (default = %d)\n", 100);
  printf("  -t, --timeout=SECONDS      Time interval to ignore doing further lookups.\n");
  printf("                               (default = %d)\n", 7 * 24 * 60 * 60);
  printf("  -v, --verbose              Level of verbosity, Multiple v's will increase\n");
  printf("  -V, --version              Display the version information and exit\n");
  printf("  -w, --wait=SECONDS         Delay time between query retries in a single run\n");
  printf("                               (default = %d)\n", 1);
  exit(exit_code);
}

// display_version
// file options.c line 82
void display_version(void)
{
  printf("%s\n", (const void *)"dnshistory 1.3");
  printf("Copyright (C) %s Stephen McInerney\n\n", (const void *)"2004, 2005, 2006");
}

// drop_long_lines
// file dnshistory.c line 1350
void drop_long_lines(struct gzFile_s **file_input, char *buffer_ptr, struct buffer_position_struct *buf_posn)
{
  char *fgets_rtn = (char *)(void *)0;
  buffer_ptr[(signed long int)125] = (char)0;
  fflush(stdout);
  if(g_verbosity >= 1)
    fprintf(stderr, "#%lu  %s :%s...\n", total_lines, msg_W_line_too_big, buffer_ptr);

  char *tmp_statement_expression$1;
  while((_Bool)1)
  {
    if(file_input == ((struct gzFile_s **)NULL))
      fgets_rtn=fgets(buffer_ptr, 128 * 2 * 512, stdin);

    else
      fgets_rtn=get_log_line(buffer_ptr, 128 * 2 * 512, file_input, buf_posn);
    char __a0;
    char __a1;
    char __a2;
    char *return_value___builtin_strpbrk$2;
    return_value___builtin_strpbrk$2=__builtin_strpbrk("\n", buffer_ptr);
    tmp_statement_expression$1 = return_value___builtin_strpbrk$2;
    if(!(tmp_statement_expression$1 == ((char *)NULL)))
      break;

  }
}

// dump_dns_historydb
// file dnshistory.c line 1701
void dump_dns_historydb(struct __db **db_ptr)
{
  struct __dbc *dbcurs_ptr = (struct __dbc *)(void *)0;
  struct __db_dbt dbt_key;
  struct __db_dbt dbt_data;
  signed int db_rtn;
  if(g_verbosity >= 5)
    printf("  History Dump!%s", (const void *)"\n");

  db_rtn=(*db_ptr)->cursor(*db_ptr, (struct __db_txn *)(void *)0, &dbcurs_ptr, (unsigned int)0);
  if(!(db_rtn == 0))
  {
    (*db_ptr)->err(*db_ptr, db_rtn, "DB->cursor");
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_F_db_cursor, (const void *)"");

    close_exit(45);
  }

  if(g_verbosity >= 5)
    printf("dbcurs_ptr == %p", dbcurs_ptr);

  memset((void *)&dbt_key, 0, sizeof(struct __db_dbt) /*40ul*/ );
  memset((void *)&dbt_data, 0, sizeof(struct __db_dbt) /*40ul*/ );
  db_rtn=dbcurs_ptr->c_get(dbcurs_ptr, &dbt_key, &dbt_data, (unsigned int)16);
  if(db_rtn == 0)
    display_record(&dbt_key, &dbt_data, (_Bool)0);

  db_rtn=dbcurs_ptr->c_close(dbcurs_ptr);
}

// error_substring_extract
// file regexp.h line 49
extern void error_substring_extract(char *failed_pattern, char *text, signed int substr_idx, signed int err, unsigned long int line_nbr)
{
  if((signed int)is_shown_filter == 0)
  {
    if(g_verbosity >= 1)
      printf("RegExp Pattern: %s\n", failed_pattern);

    is_shown_filter = (_Bool)1;
  }

  fflush(stdout);
  if(g_verbosity >= 1)
    fprintf(stderr, msg_E_substring_extraction, substr_idx, line_nbr);

  if(!(err == -6))
  {
    if(err == -7)
      goto __CPROVER_DUMP_L6;

  }

  else
  {
    fflush(stdout);
    if(g_verbosity >= 1)
      fprintf(stderr, msg_E_pcre_no_memory, (const void *)"");

    goto __CPROVER_DUMP_L9;

  __CPROVER_DUMP_L6:
    ;
    fflush(stdout);
    if(g_verbosity >= 1)
      fprintf(stderr, msg_E_pcre_nonexist_substring, (const void *)"");

    goto __CPROVER_DUMP_L9;
  }
  fflush(stdout);
  if(g_verbosity >= 1)
    fprintf(stderr, msg_E_pcre_unknown, err);


__CPROVER_DUMP_L9:
  ;
  fflush(stdout);
  if(g_verbosity >= 1)
    fprintf(stderr, "  %s\n", text);

}

// get_log_line
// file dnshistory.c line 1384
char * get_log_line(char *buf, signed int size, struct gzFile_s **file_ptr, struct buffer_position_struct *buf_posn)
{
  char *out_copy = buf;
  signed int bytes_returned;
  signed int size_ctr = 0;
  if(g_verbosity >= 5)
    printf("\n##GLL: Start: %-10p Cur: %-10p End: %-10p\n", (const void *)buf_posn->decomp_buf, buf_posn->current_pos_ptr, buf_posn->end_decompbuf_ptr);

  for( ; (_Bool)1; buf_posn->current_pos_ptr = buf_posn->current_pos_ptr + 1l)
  {
    if(!(buf_posn->end_decompbuf_ptr >= buf_posn->current_pos_ptr))
    {
      bytes_returned=gzread((struct gzFile_s *)file_ptr, (void *)buf_posn->decomp_buf, (unsigned int)(128 * 2 * 512));
      if(!(bytes_returned >= 1))
        return (char *)(void *)0;

      buf_posn->end_decompbuf_ptr = buf_posn->decomp_buf + (signed long int)((unsigned long int)(bytes_returned - 1) * sizeof(char) /*1ul*/ );
      buf_posn->current_pos_ptr = buf_posn->decomp_buf;
    }

    if(size_ctr >= size + -1)
    {
      buf[(signed long int)(size - 1)] = (char)0;
      return buf;
    }

    else
    {
      *out_copy = *buf_posn->current_pos_ptr;
      if((signed int)*buf_posn->current_pos_ptr == 10)
      {
        out_copy = out_copy + 1l;
        *out_copy = (char)0;
        buf_posn->current_pos_ptr = buf_posn->current_pos_ptr + 1l;
        return buf;
      }

    }
    size_ctr = size_ctr + 1;
    out_copy = out_copy + 1l;
  }
}

// identify_log_format
// file dnshistory.c line 1961
signed int identify_log_format(char *buffer)
{
  signed int ovector[300l];
  signed int rc;
  signed int buffer_length;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(buffer);
  buffer_length = (signed int)return_value_strlen$1;
  rc=pcre_exec(cmp_log_regexp_clf, (const struct pcre_extra *)(void *)0, buffer, buffer_length, 0, 0, ovector, 300);
  if(rc >= 0)
  {
    if(g_verbosity >= 1)
      printf("Using CLF Log Format%s", (const void *)"\n");

    return 1;
  }

  else
  {
    rc=pcre_exec(cmp_log_regexp_xferlog, (const struct pcre_extra *)(void *)0, buffer, buffer_length, 0, 0, ovector, 300);
    if(rc >= 0)
    {
      if(g_verbosity >= 1)
        printf("Using FTP/XFERLOG Log Format%s", (const void *)"\n");

      return 2;
    }

    else
    {
      rc=pcre_exec(cmp_log_regexp_squid, (const struct pcre_extra *)(void *)0, buffer, buffer_length, 0, 0, ovector, 300);
      if(rc >= 0)
      {
        if(g_verbosity >= 1)
          printf("Using SQUID Log Format%s", (const void *)"\n");

        return 3;
      }

      else
      {
        rc=pcre_exec(cmp_log_regexp_iptables, (const struct pcre_extra *)(void *)0, buffer, buffer_length, 0, 0, ovector, 300);
        if(rc >= 0)
        {
          if(g_verbosity >= 1)
            printf("Using IPTABLES Log Format%s", (const void *)"\n");

          return 5;
        }

        else
        {
          rc=pcre_exec(cmp_log_regexp_syslog, (const struct pcre_extra *)(void *)0, buffer, buffer_length, 0, 0, ovector, 300);
          if(rc >= 0)
          {
            if(g_verbosity >= 1)
              printf("Using SYSLOG/IPTABLES Log Format%s", (const void *)"\n");

            return 5;
          }

          else
          {
            if(g_verbosity >= 1)
              printf("Unrecognised Log Format%s", (const void *)"\n");

            return -1;
          }
        }
      }
    }
  }
}

// import_dns_historydb
// file dnshistory.c line 1736
void import_dns_historydb(void)
{
  struct _IO_FILE *import_file;
  char *fgets_rtn = (char *)(void *)0;
  char buffer[131072l];
  char str_address[16l];
  struct anonymous$13 dnsrec;
  struct dns_record_lists_t *last_list_ptr;
  struct dns_record_lists_t *new_dns_rec = (struct dns_record_lists_t *)(void *)0;
  struct dns_record_lists_t *list;
  struct dns_record_lists_t *list_next;
  signed int rtn_sscanf = 0;
  _Bool flag_is_bad_line;
  if(g_verbosity >= 1)
    printf("DNS History Import!%s", (const void *)"\n");

  import_file=fopen(g_import_filename, "r");
  if(import_file == ((struct _IO_FILE *)NULL))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_F_file_open, g_import_filename);

    exit(1);
  }

  char *tmp_statement_expression$3;
  char *tmp_statement_expression$1;
  char *tmp_statement_expression$5;
  char *tmp_statement_expression$10;
  while((_Bool)1)
  {
    fgets_rtn=fgets(buffer, 128 * 2 * 512, import_file);
    if(fgets_rtn == ((char *)NULL))
      break;

    total_lines = total_lines + 1ul;
    if(g_verbosity >= 5)
      printf("Line: %lu  Importing: %s", total_lines, (const void *)buffer);

    flag_is_bad_line = (_Bool)0;
    char import_dns_historydb$$1$$3$$3$$__a0;
    char import_dns_historydb$$1$$3$$3$$__a1;
    char import_dns_historydb$$1$$3$$3$$__a2;
    char *return_value___builtin_strpbrk$4;
    return_value___builtin_strpbrk$4=__builtin_strpbrk(buffer, "\n");
    tmp_statement_expression$3 = return_value___builtin_strpbrk$4;
    if(tmp_statement_expression$3 == ((char *)NULL))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_W_import_line_too_long, total_lines);

      while((_Bool)1)
      {
        fgets_rtn=fgets(buffer, 128 * 2 * 512, import_file);
        char import_dns_historydb$$1$$3$$4$$2$$1$$__a0;
        char import_dns_historydb$$1$$3$$4$$2$$1$$__a1;
        char import_dns_historydb$$1$$3$$4$$2$$1$$__a2;
        char *return_value___builtin_strpbrk$2;
        return_value___builtin_strpbrk$2=__builtin_strpbrk("\n", buffer);
        tmp_statement_expression$1 = return_value___builtin_strpbrk$2;
        if(!(tmp_statement_expression$1 == ((char *)NULL)))
          break;

      }
      bad_lines = bad_lines + 1ul;
    }

    else
    {
      char *buf_ptr1 = (char *)(void *)0;
      char *buf_ptr2 = (char *)(void *)0;
      memset((void *)&dnsrec, 0, sizeof(struct anonymous$13) /*24ul*/ );
      rtn_sscanf=sscanf(buffer, "%15s ", (char *)&str_address);
      if(!(rtn_sscanf >= 1))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, msg_W_import_line_failure, total_lines);

        bad_lines = bad_lines + 1ul;
      }

      else
      {
        inet_pton(2, str_address, (void *)&dnsrec.ipaddress);
        dnsrec.list = (struct dns_record_lists_t *)(void *)0;
        last_list_ptr = (struct dns_record_lists_t *)(void *)0;
        char import_dns_historydb$$1$$3$$6$$__a0;
        char import_dns_historydb$$1$$3$$6$$__a1;
        char import_dns_historydb$$1$$3$$6$$__a2;
        char *return_value___builtin_strpbrk$6;
        return_value___builtin_strpbrk$6=__builtin_strpbrk(buffer, "\t");
        tmp_statement_expression$5 = return_value___builtin_strpbrk$6;
        buf_ptr1 = tmp_statement_expression$5;
        if(buf_ptr1 == ((char *)NULL))
        {
          fflush(stdout);
          if(g_verbosity >= 0)
            fprintf(stderr, msg_W_import_line_failure, total_lines);

          bad_lines = bad_lines + 1ul;
        }

        else
        {
          buf_ptr2 = buf_ptr1;
          while(!(buf_ptr2 == ((char *)NULL)))
          {
            void *return_value_xmalloc$7;
            return_value_xmalloc$7=xmalloc((unsigned long int)1 * sizeof(struct dns_record_lists_t) /*1048ul*/ );
            new_dns_rec = (struct dns_record_lists_t *)return_value_xmalloc$7;
            if(dnsrec.list == ((struct dns_record_lists_t *)NULL))
              dnsrec.list = new_dns_rec;

            rtn_sscanf=sscanf(buf_ptr2, " %lu,%1024s ", (unsigned long int *)&new_dns_rec->date_set, (char *)&new_dns_rec->fqdn);
            if(g_verbosity >= 2)
              printf("    Scan: %lu --> %s\n", (unsigned long int)new_dns_rec->date_set, (const void *)new_dns_rec->fqdn);

            if(!(rtn_sscanf >= 2))
            {
              fflush(stdout);
              if(g_verbosity >= 0)
                fprintf(stderr, msg_W_import_line_failure, total_lines);

              bad_lines = bad_lines + 1ul;
              flag_is_bad_line = (_Bool)1;
              break;
            }

            if(dnsrec.date_last == 0l)
              dnsrec.date_last = new_dns_rec->date_set;

            if(!(last_list_ptr == ((struct dns_record_lists_t *)NULL)))
              last_list_ptr->next = new_dns_rec;

            last_list_ptr = new_dns_rec;
            new_dns_rec->next = (struct dns_record_lists_t *)(void *)0;
            unsigned long int return_value_strlen$8;
            return_value_strlen$8=strlen(new_dns_rec->fqdn);
            signed int return_value_strncmp$9;
            return_value_strncmp$9=strncmp(new_dns_rec->fqdn, "NONAME", return_value_strlen$8);
            if(return_value_strncmp$9 == 0)
              new_dns_rec->fqdn[(signed long int)0] = (char)0;

            else
              check_n_fix_fqdn(new_dns_rec->fqdn);
            buf_ptr1 = buf_ptr2;
            char __a0;
            char __a1;
            char __a2;
            char *return_value___builtin_strpbrk$11;
            return_value___builtin_strpbrk$11=__builtin_strpbrk(buf_ptr1 + (signed long int)1, "\t");
            tmp_statement_expression$10 = return_value___builtin_strpbrk$11;
            buf_ptr2 = tmp_statement_expression$10;
          }
          if(!((signed int)flag_is_bad_line == 1))
          {
            store_dns_records(&dnsrec);
            number_successful_fqdns = number_successful_fqdns + 1ul;
          }

          if(!(dnsrec.list == ((struct dns_record_lists_t *)NULL)))
            list = dnsrec.list;

          else
            list = (struct dns_record_lists_t *)(void *)0;
          for( ; !(list == ((struct dns_record_lists_t *)NULL)); list = list_next)
          {
            fflush(stdout);
            if(g_verbosity >= 3)
              fprintf(stderr, "  Freeing List Entry: %s\n", (const void *)list->fqdn);

            list_next = list->next;
            free((void *)list);
            list = (struct dns_record_lists_t *)(void *)0;
          }
        }
      }
    }
  }
  if(g_verbosity >= 0)
    printf("Successfully Imported %lu Records\n", number_successful_fqdns);

  if(bad_lines >= 1ul)
  {
    if(g_verbosity >= 0)
      printf("%s%lu of %lu\n", msg_I_number_bad_lines, bad_lines, total_lines);

  }

}

// increase_thread_counter
// file dnshistory.c line 1138
void increase_thread_counter(void)
{
  signed int err;
  err=pthread_mutex_lock(&mutex_thread_count);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_lock, err);

  }

  thread_count = thread_count + 1u;
  if(!(thread_count_max >= thread_count))
    thread_count_max = thread_count;

  if(g_verbosity >= 4)
    printf("THRD START: Thread count: %d\n", thread_count);

  err=pthread_mutex_unlock(&mutex_thread_count);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_unlock, err);

  }

}

// main
// file dnshistory.c line 244
signed int main(signed int argc, char **argv)
{
  struct anonymous$6 main_pcre;
  struct anonymous$6 recombine_pcre;
  char buffer_primary[131072l];
  signed int buffer_length;
  char buffer_recombine[131072l];
  signed int buffer_recombine_length;
  char buffer_tmp_output[131072l];
  _Bool have_set_logtype_flag = (_Bool)0;
  struct gzFile_s **file_input = (struct gzFile_s **)(void *)0;
  struct gzFile_s **file_recombine_input = (struct gzFile_s **)(void *)0;
  char *fgets_rtn = (char *)(void *)0;
  char str_address[1025l];
  char str_address2[1025l];
  char str_previous_address[1025l];
  char str_fqdn[1025l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char str_fqdn2[1025l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *buf_ptr;
  char str_time[50l];
  char str_time_raw[50l];
  char access_size_raw[25l];
  char access_size_recombine[25l];
  signed int comp_ret = 0;
  _Bool badlogline_flag = (_Bool)0;
  char str_address_recombine[1025l];
  char *bufer_recombine_ptr;
  struct buffer_position_struct buf_posn;
  struct buffer_position_struct buf_recombine_posn;
  unsigned int position_address = (unsigned int)0;
  unsigned int position_datetime = (unsigned int)0;
  process_options(argc, argv);
  if((signed int)g_dumpdnsdb == 1)
  {
    open_dnshistory_db(&dnshistory_db_ptr, g_db_dirfilename, db_cache_size, (unsigned int)0x00000400);
    dump_dns_historydb(&dnshistory_db_ptr);
    close_exit(0);
  }

  if((signed int)g_showhistory == 1)
  {
    open_dnshistory_db(&dnshistory_db_ptr, g_db_dirfilename, db_cache_size, (unsigned int)0x00000400);
    showhistory(&dnshistory_db_ptr, argc, argv);
    close_exit(0);
  }

  if((signed int)g_doimport == 1)
  {
    open_dnshistory_db(&dnshistory_db_ptr, g_db_dirfilename, db_cache_size, (unsigned int)(0x00000001 | 0x00000004));
    import_dns_historydb();
    close_exit(0);
  }

  if((signed int)g_dotranslate == 1)
    open_dnshistory_db(&dnshistory_db_ptr, g_db_dirfilename, db_cache_size, (unsigned int)0x00000400);

  else
    open_dnshistory_db(&dnshistory_db_ptr, g_db_dirfilename, db_cache_size, (unsigned int)0x00000001);
  if(g_verbosity >= 4)
    printf("Setting pthread stacksize to: %d\n", 1 << 15);

  re_compile_all_regexes();
  buf_posn.current_pos_ptr = buf_posn.decomp_buf + (signed long int)(128 * 2 * 512);
  buf_posn.end_decompbuf_ptr = (char *)(void *)0;
  if(!(g_filename == ((char *)NULL)))
  {
    if(g_verbosity >= 4)
      printf("Using file: %s\n", g_filename);

    struct gzFile_s *return_value_gzopen$1;
    return_value_gzopen$1=gzopen(g_filename, "rb");
    file_input = (struct gzFile_s **)return_value_gzopen$1;
    if(file_input == ((struct gzFile_s **)NULL))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_F_file_open, g_filename);

      close_exit(3);
    }

  }

  if((signed int)g_dorecombine == 1)
  {
    memset((void *)&recombine_pcre, 0, sizeof(struct anonymous$6) /*1744ul*/ );
    __builtin_strncpy(recombine_pcre.regular_expression, "^([^ ]+) ([^ ]+) ([^ ]+) \\[([^ ]+) ([^ ]+)\\] \"([^ \"]+) ?([^ ]+)? ?([^\"]*)?\" ([^ ]+) ([^ ]+) \"(.*?)\" \"([^\"]*)\"", (unsigned long int)512);
    if(g_verbosity >= 3)
      printf("Recombine Reg Ex Pattern: %s\n", (const void *)recombine_pcre.regular_expression);

    recombine_pcre.re_pcre=pcre_compile(recombine_pcre.regular_expression, 0, &recombine_pcre.error, &recombine_pcre.erroffset, (const unsigned char *)(void *)0);
    if(main_pcre.re_pcre == ((struct real_pcre *)NULL))
      re_compile_failed(recombine_pcre.erroffset, recombine_pcre.error, recombine_pcre.regular_expression);

    buf_recombine_posn.current_pos_ptr = buf_recombine_posn.decomp_buf + (signed long int)(128 * 2 * 512);
    buf_recombine_posn.end_decompbuf_ptr = (char *)(void *)0;
    if(g_verbosity >= 4)
      printf("Using Recombine file: %s\n", g_recombine_filename);

    struct gzFile_s *return_value_gzopen$2;
    return_value_gzopen$2=gzopen(g_recombine_filename, "rb");
    file_recombine_input = (struct gzFile_s **)return_value_gzopen$2;
    if(file_recombine_input == ((struct gzFile_s **)NULL))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_F_file_open, g_recombine_filename);

      close_exit(3);
    }

  }

  current_day=time((signed long int *)(void *)0);
  str_previous_address[(signed long int)0] = (char)0;
  if(g_verbosity >= 4)
    printf("Beginning Main Loop.%s\n", (const void *)"");

  char *tmp_statement_expression$4;
  _Bool tmp_if_expr$7;
  char *tmp_statement_expression$9;
  char *tmp_statement_expression$11;
  char *tmp_statement_expression$13;
  while((_Bool)1)
  {
    if(!(file_input == ((struct gzFile_s **)NULL)))
      fgets_rtn=get_log_line(buffer_primary, 128 * 2 * 512, file_input, &buf_posn);

    else
      fgets_rtn=fgets(buffer_primary, 128 * 2 * 512, stdin);
    if(fgets_rtn == ((char *)NULL))
      break;

    total_lines = total_lines + 1ul;
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(buffer_primary);
    buffer_length = (signed int)return_value_strlen$3;
    char main$$1$$10$$4$$__a0;
    char main$$1$$10$$4$$__a1;
    char main$$1$$10$$4$$__a2;
    char *return_value___builtin_strpbrk$5;
    return_value___builtin_strpbrk$5=__builtin_strpbrk("\n", buffer_primary);
    tmp_statement_expression$4 = return_value___builtin_strpbrk$5;
    if(tmp_statement_expression$4 == ((char *)NULL))
    {
      if(file_input == ((struct gzFile_s **)NULL))
        drop_long_lines((struct gzFile_s **)(void *)0, buffer_primary, (struct buffer_position_struct *)(void *)0);

      else
        drop_long_lines(file_input, buffer_primary, &buf_posn);
      bad_lines = bad_lines + 1ul;
      if((signed int)g_dorecombine == 1)
      {
        badlogline_flag = (_Bool)1;
        goto __CPROVER_DUMP_L23;
      }

    }

    else
    {

    __CPROVER_DUMP_L23:
      ;
      if(have_set_logtype_flag == (_Bool)0)
      {
        if(g_log_type == 0)
        {
          g_log_type=identify_log_format(buffer_primary);
          if(!(g_log_type >= 1))
          {
            fflush(stdout);
            if(g_verbosity >= 0)
              fprintf(stderr, "Cannot recognise log format.%s", (const void *)"\n");

            exit(1);
          }

        }

        memset((void *)&main_pcre, 0, sizeof(struct anonymous$6) /*1744ul*/ );
        switch(g_log_type)
        {
          case 2:
          {
            main_pcre.re_pcre = cmp_log_regexp_xferlog;
            __builtin_strncpy(main_pcre.regular_expression, "^(... ... .. ..:..:.. ....) ([[:digit:]]+) ([[:digit:].]+)", (unsigned long int)512);
            position_address = (unsigned int)3;
            position_datetime = (unsigned int)1;
            break;
          }
          case 3:
          {
            main_pcre.re_pcre = cmp_log_regexp_squid;
            __builtin_strncpy(main_pcre.regular_expression, "^([[:digit:]]+)\\.([[:digit:]]+)[ ]+([[:digit:]]+) ([[:digit:].]+)", (unsigned long int)512);
            position_address = (unsigned int)4;
            position_datetime = (unsigned int)1;
            break;
          }
          case 1:
          {
            main_pcre.re_pcre = cmp_log_regexp_clf;
            __builtin_strncpy(main_pcre.regular_expression, "^([^ ]+) ([^ ]+) ([^ ]+) \\[([^ ]+)", (unsigned long int)512);
            position_address = (unsigned int)1;
            position_datetime = (unsigned int)4;
            break;
          }
          case 5:
          {
            main_pcre.re_pcre = cmp_log_regexp_iptables;
            __builtin_strncpy(main_pcre.regular_expression, "^(... .. ..:..:..) ([^ ]+) kernel:.* SRC=([[:digit:].]+) DST=([[:digit:].]+)", (unsigned long int)512);
            position_address = (unsigned int)3;
            position_datetime = (unsigned int)1;
            break;
          }
          default:
          {
            fflush(stdout);
            if(g_verbosity >= 0)
              fprintf(stderr, "Unknown LOG Type Setting. Sorry.... : %d\n", g_log_type);

            exit(1);
          }
        }
        if(g_verbosity >= 3)
          printf("Main Reg Ex Pattern: %s\n", (const void *)main_pcre.regular_expression);

      }

      if(!((signed int)badlogline_flag == 1))
      {
        if(g_verbosity >= 3)
          printf("-%lu-%s", total_lines, (const void *)buffer_primary);

        main_pcre.ret=pcre_exec(main_pcre.re_pcre, (const struct pcre_extra *)(void *)0, buffer_primary, buffer_length, 0, 0, main_pcre.ovector, 300);
        if(!(main_pcre.ret >= 1))
        {
          if(!(g_log_type == 5))
          {
            re_check_errors(main_pcre.ret, total_lines, buffer_primary);
            if((signed int)g_dorecombine == 1)
              badlogline_flag = (_Bool)1;

            else
              continue;
          }

          else
            continue;
        }

        main_pcre.cp_substr_ret=pcre_copy_substring(buffer_primary, main_pcre.ovector, main_pcre.ret, (signed int)position_address, str_address, 128 * 2 * 512);
        if(!(main_pcre.cp_substr_ret >= 0))
        {
          error_substring_extract(main_pcre.regular_expression, buffer_primary, (signed int)position_address, main_pcre.cp_substr_ret, total_lines);
          if((signed int)g_dorecombine == 1)
            badlogline_flag = (_Bool)1;

          else
            continue;
        }

        if(!(g_log_type == 5))
          goto __CPROVER_DUMP_L42;

        main_pcre.cp_substr_ret=pcre_copy_substring(buffer_primary, main_pcre.ovector, main_pcre.ret, 4, str_address2, 128 * 2 * 512);
        if(main_pcre.cp_substr_ret >= 0)
          goto __CPROVER_DUMP_L42;

        error_substring_extract(main_pcre.regular_expression, buffer_primary, (signed int)position_address, main_pcre.cp_substr_ret, total_lines);
        if((signed int)g_dorecombine == 1)
        {
          badlogline_flag = (_Bool)1;
          goto __CPROVER_DUMP_L42;
        }

      }

      else
      {

      __CPROVER_DUMP_L42:
        ;
        if((signed int)g_dotranslate == 1)
        {
          signed int return_value_strncmp$6;
          return_value_strncmp$6=strncmp(str_previous_address, str_address, (unsigned long int)1025);
          comp_ret = return_value_strncmp$6;
          if(!(comp_ret == 0))
          {
            main_pcre.cp_substr_ret=pcre_copy_substring(buffer_primary, main_pcre.ovector, main_pcre.ret, (signed int)position_datetime, str_time, 50);
            if(!(main_pcre.cp_substr_ret >= 0))
            {
              fflush(stdout);
              if(g_verbosity >= 0)
                fprintf(stderr, msg_F_vital_substring, position_datetime);

              close_exit(21);
            }

            retrieve_address(str_address, str_fqdn, str_time);
            __builtin_strncpy(str_previous_address, str_address, (unsigned long int)1025);
            if(g_log_type == 5)
              retrieve_address(str_address2, str_fqdn2, str_time);

          }

          if(g_log_type == 5)
          {
            if((signed int)str_fqdn[0l] == 0)
              tmp_if_expr$7 = (signed int)str_fqdn2[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$7 = (_Bool)0;
            if(tmp_if_expr$7)
              printf("%s", (const void *)buffer_primary);

            else
              if((signed int)str_fqdn[0l] == 0)
              {
                buffer_tmp_output[(signed long int)0] = (char)0;
                __builtin_strncat(buffer_tmp_output, buffer_primary, (unsigned long int)main_pcre.ovector[(signed long int)((4 * 2 - 1) + 1)]);
                printf("%s", (const void *)buffer_tmp_output);
                printf("%s", (const void *)str_fqdn2);
                buffer_tmp_output[(signed long int)0] = (char)0;
                strcat(buffer_tmp_output, buffer_primary + (signed long int)main_pcre.ovector[(signed long int)(4 * 2 + 1)]);
                printf("%s", (const void *)buffer_tmp_output);
              }

              else
              {
                buffer_tmp_output[(signed long int)0] = (char)0;
                __builtin_strncat(buffer_tmp_output, buffer_primary, (unsigned long int)main_pcre.ovector[(signed long int)((position_address * (unsigned int)2 - (unsigned int)1) + (unsigned int)1)]);
                printf("%s", (const void *)buffer_tmp_output);
                printf("%s", (const void *)str_fqdn);
                printf(" DST=");
                buffer_tmp_output[(signed long int)0] = (char)0;
                if((signed int)str_fqdn2[0l] == 0)
                  strcat(buffer_tmp_output, buffer_primary + (signed long int)main_pcre.ovector[(signed long int)(4 * 2)]);

                else
                {
                  printf("%s", (const void *)str_fqdn2);
                  strcat(buffer_tmp_output, buffer_primary + (signed long int)main_pcre.ovector[(signed long int)(4 * 2 + 1)]);
                }
                printf("%s", (const void *)buffer_tmp_output);
              }
          }

          else
            if((signed int)str_fqdn[0l] == 0)
              printf("%s", (const void *)buffer_primary);

            else
            {
              if(position_address >= 2u)
              {
                buffer_tmp_output[(signed long int)0] = (char)0;
                __builtin_strncat(buffer_tmp_output, buffer_primary, (unsigned long int)main_pcre.ovector[(signed long int)((position_address * (unsigned int)2 - (unsigned int)1) + (unsigned int)1)]);
                printf("%s", (const void *)buffer_tmp_output);
              }

              printf("%s", (const void *)str_fqdn);
              buffer_tmp_output[(signed long int)0] = (char)0;
              strcat(buffer_tmp_output, buffer_primary + (signed long int)main_pcre.ovector[(signed long int)(position_address * (unsigned int)2 + (unsigned int)1)]);
              printf("%s", (const void *)buffer_tmp_output);
            }
        }

        else
          if((signed int)g_dorecombine == 1)
          {
            if(!(g_log_type == 1))
            {
              fflush(stdout);
              if(g_verbosity >= 0)
                fprintf(stderr, "Sorry, can't recombine non CLF logs. Yet. Please email author!%s", (const void *)"\n");

              exit(1);
            }

            fgets_rtn=get_log_line(buffer_recombine, 128 * 2 * 512, file_recombine_input, &buf_recombine_posn);
            if(fgets_rtn == ((char *)NULL))
            {
              fflush(stdout);
              if(g_verbosity >= 0)
                fprintf(stderr, msg_F_early_log_termination, total_lines);

              close_exit(5);
            }

            unsigned long int return_value_strlen$8;
            return_value_strlen$8=strlen(buffer_recombine);
            buffer_recombine_length = (signed int)return_value_strlen$8;
            char main$$1$$10$$9$$3$$__a0;
            char main$$1$$10$$9$$3$$__a1;
            char main$$1$$10$$9$$3$$__a2;
            char *return_value___builtin_strpbrk$10;
            return_value___builtin_strpbrk$10=__builtin_strpbrk("\n", buffer_recombine);
            tmp_statement_expression$9 = return_value___builtin_strpbrk$10;
            if(tmp_statement_expression$9 == ((char *)NULL) || (signed int)badlogline_flag == 1)
            {
              drop_long_lines(file_recombine_input, buffer_recombine, &buf_recombine_posn);
              if((signed int)badlogline_flag == 0)
                bad_lines = bad_lines + 1ul;

              badlogline_flag = (_Bool)0;
              continue;
            }

            if(g_verbosity >= 3)
              printf("+%lu+%s", total_lines, (const void *)buffer_recombine);

            if(g_verbosity >= 5)
              printf("  New Address: %s  Old Address: %s\n", (const void *)str_address, (const void *)str_previous_address);

            signed int return_value_strncmp$20;
            return_value_strncmp$20=strncmp(str_previous_address, str_address, (unsigned long int)1025);
            if(!(return_value_strncmp$20 == 0))
            {
              __builtin_strncpy(str_previous_address, str_address, (unsigned long int)1025);
              main_pcre.ret=pcre_exec(main_pcre.re_pcre, (const struct pcre_extra *)(void *)0, buffer_recombine, buffer_recombine_length, 0, 0, main_pcre.ovector, 300);
              if(!(main_pcre.ret >= 1))
              {
                re_check_errors(main_pcre.ret, total_lines, buffer_recombine);
                bad_lines = bad_lines + 1ul;
                continue;
              }

              main_pcre.cp_substr_ret=pcre_copy_substring(buffer_recombine, main_pcre.ovector, main_pcre.ret, 1, str_address_recombine, (signed int)sizeof(char [1025l]) /*1025ul*/ );
              if(!(recombine_pcre.cp_substr_ret >= 0))
              {
                error_substring_extract(recombine_pcre.regular_expression, buffer_recombine, 1, recombine_pcre.cp_substr_ret, total_lines);
                bad_lines = bad_lines + 1ul;
                continue;
              }

              main_pcre.cp_substr_ret=pcre_copy_substring(buffer_recombine, main_pcre.ovector, main_pcre.ret, 4, str_time, (signed int)sizeof(char [50l]) /*50ul*/ );
              if(!(recombine_pcre.cp_substr_ret >= 0))
              {
                fflush(stdout);
                if(g_verbosity >= 0)
                  fprintf(stderr, "%s\n", msg_F_vital_substring);

                close_exit(21);
              }

              char __a0;
              char __a1;
              char __a2;
              char *return_value___builtin_strpbrk$12;
              return_value___builtin_strpbrk$12=__builtin_strpbrk(buffer_primary, " ");
              tmp_statement_expression$11 = return_value___builtin_strpbrk$12;
              buf_ptr = tmp_statement_expression$11;
              char main$$1$$10$$9$$8$$5$$__a0;
              char main$$1$$10$$9$$8$$5$$__a1;
              char main$$1$$10$$9$$8$$5$$__a2;
              char *return_value___builtin_strpbrk$14;
              return_value___builtin_strpbrk$14=__builtin_strpbrk(buffer_recombine, " ");
              tmp_statement_expression$13 = return_value___builtin_strpbrk$14;
              bufer_recombine_ptr = tmp_statement_expression$13;
              signed int return_value_strncmp$15;
              return_value_strncmp$15=strncmp(buf_ptr, bufer_recombine_ptr, (unsigned long int)(128 * 2 * 512));
              comp_ret = return_value_strncmp$15;
              if(!(comp_ret == 0))
              {
                recombine_pcre.ret=pcre_exec(recombine_pcre.re_pcre, (const struct pcre_extra *)(void *)0, buffer_primary, buffer_length, 0, 0, recombine_pcre.ovector, 300);
                if(!(recombine_pcre.ret >= 1))
                {
                  re_check_errors(recombine_pcre.ret, total_lines, buffer_primary);
                  bad_lines = bad_lines + 1ul;
                  continue;
                }

                recombine_pcre.cp_substr_ret=pcre_copy_substring(buffer_primary, recombine_pcre.ovector, recombine_pcre.ret, 4, str_time_raw, (signed int)sizeof(char [50l]) /*50ul*/ );
                if(!(recombine_pcre.cp_substr_ret >= 0))
                {
                  error_substring_extract(recombine_pcre.regular_expression, buffer_primary, 4, recombine_pcre.cp_substr_ret, total_lines);
                  bad_lines = bad_lines + 1ul;
                  continue;
                }

                unsigned long int return_value_strlen$16;
                return_value_strlen$16=strlen(str_time);
                signed int return_value_strncmp$17;
                return_value_strncmp$17=strncmp(str_time_raw, str_time, return_value_strlen$16);
                comp_ret = return_value_strncmp$17;
                if(!(comp_ret == 0))
                {
                  fflush(stdout);
                  if(g_verbosity >= 0)
                    fprintf(stderr, msg_F_mismatched_lines, total_lines, (const void *)buffer_primary, (const void *)buffer_recombine);

                  close_exit(4);
                }

                recombine_pcre.cp_substr_ret=pcre_copy_substring(buffer_primary, recombine_pcre.ovector, recombine_pcre.ret, 10, access_size_raw, (signed int)sizeof(char [25l]) /*25ul*/ );
                if(!(recombine_pcre.cp_substr_ret >= 0))
                {
                  error_substring_extract(recombine_pcre.regular_expression, buffer_primary, 10, recombine_pcre.cp_substr_ret, total_lines);
                  bad_lines = bad_lines + 1ul;
                  continue;
                }

                recombine_pcre.ret=pcre_exec(recombine_pcre.re_pcre, (const struct pcre_extra *)(void *)0, buffer_recombine, buffer_recombine_length, 0, 0, recombine_pcre.ovector, 300);
                if(!(recombine_pcre.ret >= 1))
                {
                  re_check_errors(recombine_pcre.ret, total_lines, buffer_recombine);
                  bad_lines = bad_lines + 1ul;
                  continue;
                }

                recombine_pcre.cp_substr_ret=pcre_copy_substring(buffer_recombine, recombine_pcre.ovector, recombine_pcre.ret, 10, access_size_recombine, (signed int)sizeof(char [25l]) /*25ul*/ );
                if(!(recombine_pcre.cp_substr_ret >= 0))
                {
                  error_substring_extract(recombine_pcre.regular_expression, buffer_primary, 4, recombine_pcre.cp_substr_ret, total_lines);
                  bad_lines = bad_lines + 1ul;
                  continue;
                }

                unsigned long int return_value_strlen$18;
                return_value_strlen$18=strlen(access_size_raw);
                signed int return_value_strncmp$19;
                return_value_strncmp$19=strncmp(access_size_raw, access_size_recombine, return_value_strlen$18);
                comp_ret = return_value_strncmp$19;
                if(!(comp_ret == 0))
                {
                  fflush(stdout);
                  if(g_verbosity >= 0)
                    fprintf(stderr, msg_F_mismatched_lines, total_lines, (const void *)buffer_primary, (const void *)buffer_recombine);

                  close_exit(4);
                }

                fflush(stdout);
                if(g_verbosity >= 2)
                  fprintf(stderr, msg_W_mismatched_lines, total_lines, (const void *)buffer_primary, (const void *)buffer_recombine);

                bad_mismatched_lines = bad_mismatched_lines + 1ul;
              }

              add_recombined_address(str_address, str_address_recombine, str_time);
            }

          }

          else
          {
            signed int return_value_strncmp$21;
            return_value_strncmp$21=strncmp(str_previous_address, str_address, (unsigned long int)1025);
            comp_ret = return_value_strncmp$21;
            if(!(comp_ret == 0))
            {
              pthread_mutex_lock(&mutex_thread_count);
              while(thread_count >= g_max_threads)
              {
                if(g_verbosity >= 2)
                  printf("HOLDING: Exceeding Maximum Thread Count!: %d <= %d\n", g_max_threads, thread_count);

                pthread_cond_wait(&cond_thread_count, &mutex_thread_count);
              }
              pthread_mutex_unlock(&mutex_thread_count);
              add_address(str_address);
              __builtin_strncpy(str_previous_address, str_address, (unsigned long int)1025);
            }

            if(g_log_type == 5)
            {
              pthread_mutex_lock(&mutex_thread_count);
              while(thread_count >= g_max_threads)
              {
                if(g_verbosity >= 2)
                  printf("HOLDING: Exceeding Maximum Thread Count!: %d <= %d\n", g_max_threads, thread_count);

                pthread_cond_wait(&cond_thread_count, &mutex_thread_count);
              }
              pthread_mutex_unlock(&mutex_thread_count);
              add_address(str_address2);
            }

          }
      }
    }
  }
  if((signed int)g_dolookups == 1)
  {
    pthread_mutex_lock(&mutex_thread_count);
    while(thread_count >= 1u)
    {
      if(g_verbosity >= 5)
        printf("FINISHING: Countdown thread count: %d\n", thread_count);

      pthread_cond_wait(&cond_thread_count, &mutex_thread_count);
    }
    if(g_verbosity >= 1)
      printf("Maximum Concurrent Threads:  %d\n", thread_count_max);

    if(g_verbosity >= 5)
      printf("Final Remaining DNS Records: %d\n", malloc_dns_rec);

    if(g_verbosity >= 5)
      printf("Final Remaining DNS Lists:   %d\n", malloc_dns_list);

  }

  if(g_verbosity >= 1)
    printf("Stored %lu Addresses from %lu Log Lines\n", number_added_addresses, total_lines);

  if(number_name_lookups >= 1ul)
  {
    if(g_verbosity >= 1)
      printf("Number of Name Lookups Performed: %lu of %lu Log Lines\n", number_name_lookups, total_lines);

  }

  if(bad_lines >= 1ul)
  {
    if(g_verbosity >= 0)
      printf("%s%lu of %lu\n", msg_I_number_bad_lines, bad_lines, total_lines);

  }

  if(bad_recom_lines >= 1ul)
  {
    if(g_verbosity >= 0)
      printf("%s%lu of %lu\n", (const void *)"Number of Bad Recombined Lines: ", bad_recom_lines, total_lines);

  }

  if(bad_mismatched_lines >= 1ul)
  {
    if(g_verbosity >= 0)
      printf("%s%lu of %lu\n", (const void *)"Number of Possibly Mismatched Lines: ", bad_mismatched_lines, total_lines);

  }

  if(g_verbosity >= 1)
    printf("%s%lu of %lu\n", (const void *)"Number of Stored FQDNs: ", number_successful_fqdns, number_name_lookups);

  if(g_verbosity >= 1)
    printf("%s%lu of %lu\n", (const void *)"Number of Successful Retries: ", number_successful_retries, number_retries);

  close_dnshistory_db(&dnshistory_db_ptr);
  return 0;
}

// name_lookup
// file dnshistory.c line 1054
signed int name_lookup(struct in_addr ipaddr, char *host_name)
{
  signed int ret_gni = 0;
  struct sockaddr_in sa;
  sa.sin_family = (unsigned short int)2;
  sa.sin_port = (unsigned short int)0;
  sa.sin_addr.s_addr = ipaddr.s_addr;
  signed int retries = g_dns_lookups;
  signed int err;
  _Bool doing_retry = (_Bool)0;
  err=pthread_mutex_lock(&mutex_other_counters);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_lock, err);

  }

  number_name_lookups = number_name_lookups + 1ul;
  err=pthread_mutex_unlock(&mutex_other_counters);
  if(!(err == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_thread_unlock, err);

  }

  while(retries >= 1)
  {
    ret_gni=getnameinfo((struct sockaddr *)&sa, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ , host_name, (unsigned int)1025, (char *)(void *)0, (unsigned int)0, 8);
    if(!(ret_gni == 0))
    {
      if(ret_gni == -3 || ret_gni == -2)
      {
        if(g_verbosity >= 3)
          printf("NameLookup: TryAgain: %s\n", host_name);

        retries = retries - 1;
        if(retries >= 1)
        {
          err=pthread_mutex_lock(&mutex_other_counters);
          if(!(err == 0))
          {
            fflush(stdout);
            if(g_verbosity >= 0)
              fprintf(stderr, msg_E_thread_lock, err);

          }

          number_retries = number_retries + 1ul;
          err=pthread_mutex_unlock(&mutex_other_counters);
          if(!(err == 0))
          {
            fflush(stdout);
            if(g_verbosity >= 0)
              fprintf(stderr, msg_E_thread_unlock, err);

          }

          if((signed int)doing_retry == 0)
            doing_retry = (_Bool)1;

          sleep((unsigned int)g_dns_retry_delay);
        }

      }

      else
      {
        name_lookup_errors(ret_gni);
        break;
      }
    }

    else
    {
      if(g_verbosity >= 2)
        printf("NameLookup: Success: %s\n", host_name);

      break;
    }
  }
  check_n_fix_fqdn(host_name);
  if(ret_gni == 0)
  {
    err=pthread_mutex_lock(&mutex_other_counters);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_lock, err);

    }

    number_successful_fqdns = number_successful_fqdns + 1ul;
    err=pthread_mutex_unlock(&mutex_other_counters);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_unlock, err);

    }

  }

  if(ret_gni == 0 && (signed int)doing_retry == 1)
  {
    err=pthread_mutex_lock(&mutex_other_counters);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_lock, err);

    }

    number_successful_retries = number_successful_retries + 1ul;
    err=pthread_mutex_unlock(&mutex_other_counters);
    if(!(err == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_thread_unlock, err);

    }

  }

  if(ret_gni == -2)
    ret_gni = 0;

  return ret_gni;
}

// name_lookup_errors
// file dnshistory.c line 1326
void name_lookup_errors(signed int error_code)
{
  if(g_verbosity >= 1)
  {
    if(!(error_code == -3))
    {
      if(error_code == -4)
        goto __CPROVER_DUMP_L3;

    }

    else
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, "NameLookup: %s\n", msg_namelookup_try_agin);

      goto __CPROVER_DUMP_L6;

    __CPROVER_DUMP_L3:
      ;
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, "NameLookup: %s\n", (const void *)"Fatal Error");

      goto __CPROVER_DUMP_L6;
    }
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, "NameLookup: %d %s\n", error_code, msg_namelookup_default);

  }


__CPROVER_DUMP_L6:
  ;
}

// open_dnshistory_db
// file db_dnshistory.h line 47
extern void open_dnshistory_db(struct __db **db_ptr, char *db_dirfilename, unsigned int cache_size, unsigned int flags)
{
  signed int open_dnshistory_db$$1$$rtn_db;
  if(g_verbosity >= 2)
    printf("%s\n", msg_v1_hashdb);

  if(g_verbosity >= 3)
    printf("%s%s\n", msg_v2_create_hashdb, db_dirfilename);

  open_dnshistory_db$$1$$rtn_db=db_create(db_ptr, (struct __db_env *)(void *)0, (unsigned int)0);
  if(!(open_dnshistory_db$$1$$rtn_db == 0))
  {
    fflush(stdout);
    if(g_verbosity >= 0)
    {
      char *return_value_db_strerror$1;
      return_value_db_strerror$1=db_strerror(open_dnshistory_db$$1$$rtn_db);
      fprintf(stderr, msg_F_db_create, return_value_db_strerror$1);
    }

    exit(40);
  }

  if(cache_size >= 1u)
  {
    cache_size = cache_size * (unsigned int)(1024 * 1024);
    if(g_verbosity >= 3)
      printf("%s%d\n", msg_v2_create_dbcache, cache_size);

    open_dnshistory_db$$1$$rtn_db=(*db_ptr)->set_cachesize(*db_ptr, (unsigned int)0, cache_size, 1);
    if(!(open_dnshistory_db$$1$$rtn_db == 0))
    {
      fflush(stdout);
      if(g_verbosity >= 0)
      {
        char *return_value_db_strerror$2;
        return_value_db_strerror$2=db_strerror(open_dnshistory_db$$1$$rtn_db);
        fprintf(stderr, msg_F_db_cache, return_value_db_strerror$2);
      }

      exit(41);
    }

  }

  else
    if(g_verbosity >= 3)
      printf("%s%d\n", msg_v2_no_dbcache, cache_size);

  if(g_verbosity >= 3)
    printf("Open the DB: %s\n", db_dirfilename);

  open_dnshistory_db$$1$$rtn_db=(*db_ptr)->open(*db_ptr, (struct __db_txn *)(void *)0, db_dirfilename, (const char *)(void *)0, (enum anonymous$17)DB_BTREE, flags, 0664);
  if(!(open_dnshistory_db$$1$$rtn_db == 0))
  {
    (*db_ptr)->err(*db_ptr, open_dnshistory_db$$1$$rtn_db, "%s", db_dirfilename);
    exit(42);
  }

}

// process_options
// file dnshistory.h line 201
void process_options(signed int argc, char **argv)
{
  signed int opt;
  signed int option_index = 0;
  char log_type[20l];
  _Bool optL = (_Bool)0;
  _Bool optD = (_Bool)0;
  _Bool optI = (_Bool)0;
  _Bool optR = (_Bool)0;
  _Bool optT = (_Bool)0;
  _Bool optS = (_Bool)0;
  const char *short_options = "c:d:Df:F:h:I:Ll:m:R:STt:vVw:?";
  struct option long_options[18l] = { { .name="cache", .has_arg=1, .flag=(signed int *)(void *)0, .val=99 }, 
    { .name="database", .has_arg=1, .flag=(signed int *)(void *)0, .val=100 }, 
    { .name="dodump", .has_arg=0, .flag=(signed int *)(void *)0, .val=68 }, 
    { .name="file", .has_arg=1, .flag=(signed int *)(void *)0, .val=102 }, 
    { .name="help", .has_arg=0, .flag=(signed int *)(void *)0, .val=104 }, 
    { .name="doimport", .has_arg=1, .flag=(signed int *)(void *)0, .val=73 }, 
    { .name="dolookups", .has_arg=0, .flag=(signed int *)(void *)0, .val=76 }, 
    { .name="maxthreads", .has_arg=1, .flag=(signed int *)(void *)0, .val=109 }, 
    { .name="dorecombine", .has_arg=1, .flag=(signed int *)(void *)0, .val=82 }, 
    { .name="lookups", .has_arg=1, .flag=(signed int *)(void *)0, .val=108 }, 
    { .name="showhistory", .has_arg=0, .flag=(signed int *)(void *)0, .val=83 }, 
    { .name="dotranslate", .has_arg=0, .flag=(signed int *)(void *)0, .val=84 }, 
    { .name="timeout", .has_arg=1, .flag=(signed int *)(void *)0, .val=116 }, 
    { .name="verbose", .has_arg=0, .flag=(signed int *)(void *)0, .val=118 }, 
    { .name="version", .has_arg=0, .flag=(signed int *)(void *)0, .val=86 }, 
    { .name="wait", .has_arg=1, .flag=(signed int *)(void *)0, .val=119 }, 
    { .name="logtype", .has_arg=1, .flag=(signed int *)(void *)0, .val=0 }, 
    { .name=(const char *)(void *)0, .has_arg=0, .flag=(signed int *)(void *)0,
    .val=0 } };
  signed int return_value_strncmp$7;
  signed int return_value_strncmp$5;
  signed int return_value_strncmp$4;
  signed int return_value_strncmp$3;
  signed int return_value_strncmp$2;
  signed int return_value_strncmp$1;
  unsigned long int return_value_strlen$8;
  do
  {
    opt=getopt_long(argc, argv, short_options, long_options, &option_index);
    if(!(opt == 0))
    {
      if(opt == 76)
        goto __CPROVER_DUMP_L12;

      if(opt == 68)
        goto __CPROVER_DUMP_L16;

      if(opt == 73)
        goto __CPROVER_DUMP_L20;

      if(opt == 82)
        goto __CPROVER_DUMP_L24;

      if(opt == 83)
        goto __CPROVER_DUMP_L28;

      if(opt == 84)
        goto __CPROVER_DUMP_L32;

      if(opt == 99)
        goto __CPROVER_DUMP_L36;

      if(opt == 100)
        goto __CPROVER_DUMP_L39;

      if(opt == 104)
        goto __CPROVER_DUMP_L40;

      if(opt == 102)
        goto __CPROVER_DUMP_L41;

      if(opt == 108)
        goto __CPROVER_DUMP_L42;

      if(opt == 109)
        goto __CPROVER_DUMP_L45;

      if(opt == 116)
        goto __CPROVER_DUMP_L48;

      if(opt == 86)
        goto __CPROVER_DUMP_L51;

      if(opt == 118)
        goto __CPROVER_DUMP_L52;

      if(opt == 119)
        goto __CPROVER_DUMP_L54;

      if(opt == 63)
        goto __CPROVER_DUMP_L57;

      if(opt == -1)
        goto __CPROVER_DUMP_L58;

    }

    else
    {
      return_value_strncmp$7=strncmp("logtype", long_options[(signed long int)option_index].name, (unsigned long int)7);
      if(return_value_strncmp$7 == 0)
      {
        sscanf(optarg, "%s", (const void *)log_type);
        signed int return_value_strncmp$6;
        return_value_strncmp$6=strncmp(log_type, "auto", (unsigned long int)4);
        if(return_value_strncmp$6 == 0)
          g_log_type = 0;

        else
        {
          return_value_strncmp$5=strncmp(log_type, "clf", (unsigned long int)3);
          if(return_value_strncmp$5 == 0)
            g_log_type = 1;

          else
          {
            return_value_strncmp$4=strncmp(log_type, "www", (unsigned long int)3);
            if(return_value_strncmp$4 == 0)
              g_log_type = 1;

            else
            {
              return_value_strncmp$3=strncmp(log_type, "ftp", (unsigned long int)3);
              if(return_value_strncmp$3 == 0)
                g_log_type = 2;

              else
              {
                return_value_strncmp$2=strncmp(log_type, "squid", (unsigned long int)5);
                if(return_value_strncmp$2 == 0)
                  g_log_type = 3;

                else
                {
                  return_value_strncmp$1=strncmp(log_type, "iptables", (unsigned long int)8);
                  if(return_value_strncmp$1 == 0)
                    g_log_type = 5;

                  else
                  {
                    fflush(stdout);
                    if(g_verbosity >= 0)
                      fprintf(stderr, "Unknown Log Type: %s\n", (const void *)log_type);

                    exit(1);
                  }
                }
              }
            }
          }
        }
      }

      continue;

    __CPROVER_DUMP_L12:
      ;
      if(!(optD == (_Bool)0) || !(optI == (_Bool)0) || !(optL == (_Bool)0) || !(optR == (_Bool)0) || !(optS == (_Bool)0) || !(optT == (_Bool)0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "%s\n\n", msg_F_incompatible_options);

        display_usage(1);
      }

      else
      {
        g_dolookups = (_Bool)1;
        g_dotranslate = (_Bool)0;
        g_dorecombine = (_Bool)0;
        g_dumpdnsdb = (_Bool)0;
        g_showhistory = (_Bool)0;
        g_doimport = (_Bool)0;
        optL = (_Bool)1;
      }
      continue;

    __CPROVER_DUMP_L16:
      ;
      if(!(optD == (_Bool)0) || !(optI == (_Bool)0) || !(optL == (_Bool)0) || !(optR == (_Bool)0) || !(optS == (_Bool)0) || !(optT == (_Bool)0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "%s\n\n", msg_F_incompatible_options);

        display_usage(1);
      }

      else
      {
        g_dolookups = (_Bool)0;
        g_dotranslate = (_Bool)0;
        g_dorecombine = (_Bool)0;
        g_dumpdnsdb = (_Bool)1;
        g_showhistory = (_Bool)0;
        g_doimport = (_Bool)0;
        optD = (_Bool)1;
      }
      continue;

    __CPROVER_DUMP_L20:
      ;
      if(!(optD == (_Bool)0) || !(optI == (_Bool)0) || !(optL == (_Bool)0) || !(optR == (_Bool)0) || !(optS == (_Bool)0) || !(optT == (_Bool)0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "%s\n\n", msg_F_incompatible_options);

        display_usage(1);
      }

      else
      {
        g_dolookups = (_Bool)0;
        g_dotranslate = (_Bool)0;
        g_dorecombine = (_Bool)0;
        g_dumpdnsdb = (_Bool)0;
        g_showhistory = (_Bool)0;
        g_doimport = (_Bool)1;
        g_import_filename = optarg;
        optI = (_Bool)1;
      }
      continue;

    __CPROVER_DUMP_L24:
      ;
      if(!(optD == (_Bool)0) || !(optI == (_Bool)0) || !(optL == (_Bool)0) || !(optR == (_Bool)0) || !(optS == (_Bool)0) || !(optT == (_Bool)0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "%s\n\n", msg_F_incompatible_options);

        display_usage(1);
      }

      else
      {
        g_dolookups = (_Bool)0;
        g_dotranslate = (_Bool)0;
        g_dorecombine = (_Bool)1;
        g_dumpdnsdb = (_Bool)0;
        g_showhistory = (_Bool)0;
        g_doimport = (_Bool)0;
        g_recombine_filename = optarg;
        optR = (_Bool)1;
      }
      continue;

    __CPROVER_DUMP_L28:
      ;
      if(!(optD == (_Bool)0) || !(optI == (_Bool)0) || !(optL == (_Bool)0) || !(optR == (_Bool)0) || !(optS == (_Bool)0) || !(optT == (_Bool)0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "%s\n\n", msg_F_incompatible_options);

        display_usage(1);
      }

      else
      {
        g_dolookups = (_Bool)0;
        g_dotranslate = (_Bool)0;
        g_dorecombine = (_Bool)0;
        g_dumpdnsdb = (_Bool)0;
        g_showhistory = (_Bool)1;
        g_doimport = (_Bool)0;
        optS = (_Bool)1;
      }
      continue;

    __CPROVER_DUMP_L32:
      ;
      if(!(optD == (_Bool)0) || !(optI == (_Bool)0) || !(optL == (_Bool)0) || !(optR == (_Bool)0) || !(optS == (_Bool)0) || !(optT == (_Bool)0))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "%s\n\n", msg_F_incompatible_options);

        display_usage(1);
      }

      else
      {
        g_dolookups = (_Bool)0;
        g_dotranslate = (_Bool)1;
        g_dorecombine = (_Bool)0;
        g_dumpdnsdb = (_Bool)0;
        g_showhistory = (_Bool)0;
        g_doimport = (_Bool)0;
        optT = (_Bool)1;
      }
      continue;

    __CPROVER_DUMP_L36:
      ;
      sscanf(optarg, "%d", &db_cache_size);
      if(!(db_cache_size >= 1u))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "Database Cache Size must be greater than 0\n%s", (const void *)"");

        display_usage(1);
      }

      continue;
      continue;

    __CPROVER_DUMP_L39:
      ;
      return_value_strlen$8=strlen(optarg);
      __builtin_strncpy(g_db_dirfilename, optarg, return_value_strlen$8 + (unsigned long int)1);
      continue;

    __CPROVER_DUMP_L40:
      ;
      display_usage(0);
      continue;

    __CPROVER_DUMP_L41:
      ;
      g_filename = optarg;
      continue;

    __CPROVER_DUMP_L42:
      ;
      sscanf(optarg, "%d", &g_dns_lookups);
      if(!(g_dns_lookups >= 1))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "Lookup attempts must be greater than 0\n%s", (const void *)"");

        display_usage(1);
      }

      continue;

    __CPROVER_DUMP_L45:
      ;
      sscanf(optarg, "%d", &g_max_threads);
      if(!(g_max_threads >= 1u))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "Maximum threads must be greater than 0\n%s", (const void *)"");

        display_usage(1);
      }

      continue;

    __CPROVER_DUMP_L48:
      ;
      sscanf(optarg, "%d", &g_dns_timeout);
      if(!(g_dns_timeout >= 1))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "DNS Timeout must be greater than 0\n%s", (const void *)"");

        display_usage(1);
      }

      continue;

    __CPROVER_DUMP_L51:
      ;
      display_gnu_info(0);
      continue;

    __CPROVER_DUMP_L52:
      ;
      g_verbosity = g_verbosity + 1;
      if(g_verbosity >= 6)
      {
        g_verbosity = 5;
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "%s\n", msg_W_exceeded_verbosity);

      }

      continue;

    __CPROVER_DUMP_L54:
      ;
      sscanf(optarg, "%d", &g_dns_retry_delay);
      if(!(g_dns_retry_delay >= 1))
      {
        fflush(stdout);
        if(g_verbosity >= 0)
          fprintf(stderr, "DNS Rety Delay must be greater than 0\n%s", (const void *)"");

        display_usage(1);
      }

      continue;

    __CPROVER_DUMP_L57:
      ;
      display_usage(0);
      continue;

    __CPROVER_DUMP_L58:
      ;
      continue;
    }
    exit(1);
  }
  while(!(opt == -1));
  if(g_verbosity >= 2)
    printf("Commandline Settings:%s\n", (const void *)"");

  if(g_verbosity >= 2)
    printf("  DB Cache Size: %d Mb\n", db_cache_size);

  if(g_verbosity >= 2)
    printf("  DB File:       %s\n", (const void *)g_db_dirfilename);

  if(g_verbosity >= 2)
    printf("  Log File:      %s\n", g_filename);

  if(g_verbosity >= 2)
    printf("  DNS Lookups:   %d\n", g_dns_lookups);

  if(g_verbosity >= 2)
    printf("  Max Threads:   %d\n", g_max_threads);

  if(g_verbosity >= 2)
    printf("  DNS Timeout:   %d\n", g_dns_timeout);

  if(g_verbosity >= 2)
    printf("  Retry Delay:   %d\n", g_dns_retry_delay);

  if(g_verbosity >= 2)
    printf("  Verbosity:     %d\n", g_verbosity);

  if(g_verbosity >= 2)
    printf("  Log Type:      %d\n", g_log_type);

}

// re_check_errors
// file regexp.h line 48
extern void re_check_errors(signed int err, unsigned long int line_nbr, char *str_ptr)
{
  signed int out_vector_size;
  if(!(err == -1))
  {
    if(err == 0)
      goto __CPROVER_DUMP_L3;

  }

  else
  {
    fflush(stdout);
    if(g_verbosity >= 1)
      fprintf(stderr, msg_W_re_match_failed, line_nbr, str_ptr);

    goto __CPROVER_DUMP_L6;

  __CPROVER_DUMP_L3:
    ;
    out_vector_size = 300 / 3;
    fflush(stdout);
    if(g_verbosity >= 1)
      fprintf(stderr, msg_E_re_too_many_substrings, line_nbr, out_vector_size - 1);

    goto __CPROVER_DUMP_L6;
  }
  fflush(stdout);
  if(g_verbosity >= 1)
    fprintf(stderr, msg_W_re_match_error, err, line_nbr, str_ptr);


__CPROVER_DUMP_L6:
  ;
}

// re_compile_all_regexes
// file dnshistory.c line 2022
void re_compile_all_regexes(void)
{
  char log_regexp_clf[512l] = { '^', '(', '[', '^', ' ', ']', '+', ')', ' ', '(', '[', '^', ' ', ']', '+', ')', ' ', '(', '[', '^', ' ', ']', '+', ')', ' ', '\', '[', '(', '[', '^', ' ', ']', '+', ')', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char log_regexp_xferlog[512l] = { '^', '(', '.', '.', '.', ' ', '.', '.', '.', ' ', '.', '.', ' ', '.', '.', ':', '.', '.', ':', '.', '.', ' ', '.', '.', '.', '.', ')', ' ', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', ']', '+', ')', ' ', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', '.', ']', '+', ')', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char log_regexp_squid[512l] = { '^', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', ']', '+', ')', '\', '.', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', ']', '+', ')', '[', ' ', ']', '+', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', ']', '+', ')', ' ', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', '.', ']', '+', ')', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char log_regexp_combined_enhanced[512l] = { '^', '(', '[', '^', ' ', ']', '+', ')', ' ', '(', '[', '^', ' ', ']', '+', ')', ' ', '(', '[', '^', ' ', ']', '+', ')', ' ', '\', '[', '(', '[', '^', ' ', ']', '+', ')', ' ', '(', '[', '^', ' ', ']', '+', ')', '\', ']', ' ', '"', '(', '[', '^', ' ', '"', ']', '+', ')', ' ', '?', '(', '[', '^', ' ', ']', '+', ')', '?', ' ', '?', '(', '[', '^', '"', ']', '*', ')', '?', '"', ' ', '(', '[', '^', ' ', ']', '+', ')', ' ', '(', '[', '^', ' ', ']', '+', ')', ' ', '"', '(', '.', '*', '?', ')', '"', ' ', '"', '(', '[', '^', '"', ']', '*', ')', '"', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char log_regexp_iptables[512l] = { '^', '(', '.', '.', '.', ' ', '.', '.', ' ', '.', '.', ':', '.', '.', ':', '.', '.', ')', ' ', '(', '[', '^', ' ', ']', '+', ')', ' ', 'k', 'e', 'r', 'n', 'e', 'l', ':', '.', '*', ' ', 'S', 'R', 'C', '=', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', '.', ']', '+', ')', ' ', 'D', 'S', 'T', '=', '(', '[', '[', ':', 'd', 'i', 'g', 'i', 't', ':', ']', '.', ']', '+', ')', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char log_regexp_syslog[512l] = { '^', '(', '.', '.', '.', ' ', '.', '.', ' ', '.', '.', ':', '.', '.', ':', '.', '.', ')', ' ', '(', '[', '^', ':', ']', '+', ')', ':', 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  const char *error;
  signed int erroffset;
  cmp_log_regexp_clf=pcre_compile(log_regexp_clf, 0, &error, &erroffset, (const unsigned char *)(void *)0);
  if(g_verbosity >= 2)
    printf("PCRE: Compile CLF%s", (const void *)"\n");

  if(cmp_log_regexp_clf == ((struct real_pcre *)NULL))
    re_compile_failed(erroffset, error, log_regexp_clf);

  cmp_log_regexp_combined_enhanced=pcre_compile(log_regexp_combined_enhanced, 0, &error, &erroffset, (const unsigned char *)(void *)0);
  if(g_verbosity >= 2)
    printf("PCRE: Compile COMBINED_ENHANCED%s", (const void *)"\n");

  if(cmp_log_regexp_combined_enhanced == ((struct real_pcre *)NULL))
    re_compile_failed(erroffset, error, log_regexp_combined_enhanced);

  cmp_log_regexp_xferlog=pcre_compile(log_regexp_xferlog, 0, &error, &erroffset, (const unsigned char *)(void *)0);
  if(g_verbosity >= 2)
    printf("PCRE: Compile PATTERN_XFERLOG%s", (const void *)"\n");

  if(cmp_log_regexp_xferlog == ((struct real_pcre *)NULL))
    re_compile_failed(erroffset, error, log_regexp_xferlog);

  cmp_log_regexp_squid=pcre_compile(log_regexp_squid, 0, &error, &erroffset, (const unsigned char *)(void *)0);
  if(g_verbosity >= 2)
    printf("PCRE: Compile PATTERN_SQUID%s", (const void *)"\n");

  if(cmp_log_regexp_squid == ((struct real_pcre *)NULL))
    re_compile_failed(erroffset, error, log_regexp_squid);

  cmp_log_regexp_iptables=pcre_compile(log_regexp_iptables, 0, &error, &erroffset, (const unsigned char *)(void *)0);
  if(g_verbosity >= 2)
    printf("PCRE: Compile PATTERN_IPTABLES%s", (const void *)"\n");

  if(cmp_log_regexp_iptables == ((struct real_pcre *)NULL))
    re_compile_failed(erroffset, error, log_regexp_iptables);

  cmp_log_regexp_syslog=pcre_compile(log_regexp_syslog, 0, &error, &erroffset, (const unsigned char *)(void *)0);
  if(g_verbosity >= 2)
    printf("PCRE: Compile PATTERN_SYSLOG%s", (const void *)"\n");

  if(cmp_log_regexp_syslog == ((struct real_pcre *)NULL))
    re_compile_failed(erroffset, error, log_regexp_syslog);

}

// re_compile_failed
// file regexp.h line 47
extern void re_compile_failed(signed int err, const char *err_offset, char *re_str)
{
  fflush(stdout);
  if(g_verbosity >= 0)
    fprintf(stderr, "%s %d: %s\n%s\n", msg_F_pcre_failed_compilation, err, err_offset, re_str);

  exit(20);
}

// retrieve_address
// file dnshistory.c line 857
void retrieve_address(char *str_ipaddr, char *str_fqdn, char *str_time)
{
  struct anonymous$13 *dnsrec;
  struct dns_record_lists_t *list;
  struct dns_record_lists_t *list_next;
  signed int ret_pton;
  struct tm time_rec;
  signed long int time_logentry = (signed long int)0;
  signed int ret_addrexists = 0;
  signed long int temp_time_squid;
  if(g_verbosity >= 5)
    printf("  INIT. Retrieve Address; Looking for: %s\n", str_ipaddr);

  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)1 * sizeof(struct anonymous$13) /*24ul*/ );
  dnsrec = (struct anonymous$13 *)return_value_xmalloc$1;
  dnsrec->list = (struct dns_record_lists_t *)(void *)0;
  ret_pton=inet_pton(2, str_ipaddr, (void *)&dnsrec->ipaddress);
  _Bool tmp_if_expr$5;
  unsigned long int return_value_strtoul$2;
  _Bool tmp_if_expr$4;
  double return_value_difftime$3;
  if(ret_pton == 0)
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_E_ip_conversion, ret_pton, str_ipaddr);

    str_fqdn[(signed long int)0] = (char)0;
  }

  else
  {
    ret_addrexists=address_exists(dnsrec);
    ret_addrexists = 0;
    if(!(ret_addrexists == 0))
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = dnsrec->list == (struct dns_record_lists_t *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
      str_fqdn[(signed long int)0] = (char)0;

    else
    {
      list = dnsrec->list;
      if(!(list->next == ((struct dns_record_lists_t *)NULL)))
      {
        memset((void *)&time_rec, 0, sizeof(struct tm) /*56ul*/ );
        switch(g_log_type)
        {
          case 1:
          {
            strptime(str_time, "%d/%b/%Y:%H:%M:%S", &time_rec);
            break;
          }
          case 2:
          {
            strptime(str_time, "%a %b %d %H:%M:%S %Y", &time_rec);
            break;
          }
          case 5:
          {
            strptime(str_time, "%a %d %H:%M:%S", &time_rec);
            break;
          }
          case 3:
          {
            return_value_strtoul$2=strtoul(str_time, (char ** restrict )(void *)0, 10);
            temp_time_squid = (signed long int)return_value_strtoul$2;
            localtime_r(&temp_time_squid, &time_rec);
          }
        }
        time_logentry=mktime(&time_rec);
        if(g_verbosity >= 5)
          printf("    **Date/Time: %s -> %ld\n", str_time, time_logentry);

        if(g_verbosity >= 5)
          printf("    **Date/Time: DB START: %ld -> %ld\n", time_logentry, dnsrec->date_last);

        while(!(list == ((struct dns_record_lists_t *)NULL)))
        {
          if(g_verbosity >= 5)
            printf("    **Date/Time: DB List: %ld -> %ld\n", time_logentry, list->date_set);

          if(list->next == ((struct dns_record_lists_t *)NULL))
            tmp_if_expr$4 = (_Bool)1;

          else
          {
            return_value_difftime$3=difftime(time_logentry, list->date_set);
            tmp_if_expr$4 = return_value_difftime$3 >= (double)0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$4)
            __builtin_strncpy(str_fqdn, list->fqdn, (unsigned long int)1025);

          list = list->next;
        }
      }

      else
        __builtin_strncpy(str_fqdn, list->fqdn, (unsigned long int)1025);
    }
  }
  list = dnsrec->list;
  if(g_verbosity >= 5)
    printf("    Inside timeout period. Free Record(s).%s", (const void *)"\n");

  for( ; !(list == ((struct dns_record_lists_t *)NULL)); list = list_next)
  {
    if(g_verbosity >= 5)
      printf("      Freeing List Entry: %s\n", (const void *)list->fqdn);

    list_next = list->next;
    free((void *)list);
    list = (struct dns_record_lists_t *)(void *)0;
  }
  free((void *)dnsrec);
  dnsrec = (struct anonymous$13 *)(void *)0;
  goto __CPROVER_DUMP_L24;

__CPROVER_DUMP_L24:
  ;
}

// showhistory
// file dnshistory.c line 1886
void showhistory(struct __db **db_ptr, signed int argc, char **argv)
{
  char *str_ipaddr;
  signed int ret_pton;
  struct __db_dbt dbt_key;
  struct __db_dbt dbt_data;
  signed int db_rtn;
  struct anonymous$13 dnsrec;
  signed int arg_ctr = optind;
  if(g_verbosity >= 5)
    printf("  History Lookup!%s", (const void *)"\n");

  if(g_verbosity >= 5)
    printf("    Doing  %d\n", argc);

  while(!(arg_ctr >= argc))
  {
    str_ipaddr = argv[(signed long int)arg_ctr];
    arg_ctr = arg_ctr + 1;
    if(g_verbosity >= 5)
      printf("    IP: %s\n", str_ipaddr);

    ret_pton=inet_pton(2, str_ipaddr, (void *)&dnsrec.ipaddress);
    if(ret_pton == 0)
    {
      fflush(stdout);
      if(g_verbosity >= 0)
        fprintf(stderr, msg_E_ip_conversion, ret_pton, str_ipaddr);

    }

    else
    {
      memset((void *)&dbt_key, 0, sizeof(struct __db_dbt) /*40ul*/ );
      memset((void *)&dbt_data, 0, sizeof(struct __db_dbt) /*40ul*/ );
      dbt_key.data = (void *)(char *)&dnsrec.ipaddress.s_addr;
      dbt_key.size = (unsigned int)sizeof(unsigned int) /*4ul*/ ;
      db_rtn=(*db_ptr)->get(*db_ptr, (struct __db_txn *)(void *)0, &dbt_key, &dbt_data, (unsigned int)0);
      if(db_rtn == 0)
        display_record(&dbt_key, &dbt_data, (_Bool)1);

      else
        printf("%-s\t%s\n", str_ipaddr, (const void *)"ADDRESS NOT FOUND");
    }
  }
}

// store_dns_records
// file dnshistory.c line 1553
void store_dns_records(struct anonymous$13 *dns_rec_ptr)
{
  void *data_ptr = (void *)0;
  void *idx_ptr = (void *)0;
  struct dns_record_lists_t *list_ptr;
  signed int data_size = 0;
  signed int key_size = 0;
  signed int nbr_items = 0;
  signed int size = 0;
  char str_address[16l];
  if(g_verbosity >= 4)
  {
    const char *return_value_inet_ntop$1;
    return_value_inet_ntop$1=inet_ntop(2, (const void *)&dns_rec_ptr->ipaddress, str_address, (unsigned int)16);
    printf("  **STORE: %16s\n", return_value_inet_ntop$1);
  }

  key_size = (signed int)sizeof(unsigned int) /*4ul*/ ;
  data_size = (signed int)sizeof(signed long int) /*8ul*/ ;
  list_ptr = dns_rec_ptr->list;
  while(!(list_ptr == ((struct dns_record_lists_t *)NULL)))
  {
    data_size = data_size + (signed int)sizeof(signed long int) /*8ul*/ ;
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(list_ptr->fqdn);
    data_size = data_size + (signed int)((return_value_strlen$2 + (unsigned long int)1) * sizeof(char) /*1ul*/ );
    list_ptr = list_ptr->next;
    nbr_items = nbr_items + 1;
  }
  data_size = data_size + (signed int)sizeof(signed int) /*4ul*/ ;
  void *return_value_malloc$3;
  return_value_malloc$3=malloc((unsigned long int)data_size);
  data_ptr = (void *)return_value_malloc$3;
  if(data_ptr == NULL)
  {
    fflush(stdout);
    if(g_verbosity >= 0)
      fprintf(stderr, msg_F_memory_alloc, (const void *)"");

    close_exit(2);
  }

  memset(data_ptr, 0, (unsigned long int)data_size);
  idx_ptr = data_ptr;
  size = (signed int)sizeof(signed long int) /*8ul*/ ;
  memcpy(idx_ptr, (const void *)&dns_rec_ptr->date_last, (unsigned long int)size);
  idx_ptr = idx_ptr + (signed long int)size;
  size = (signed int)sizeof(signed int) /*4ul*/ ;
  memcpy(idx_ptr, (const void *)&nbr_items, (unsigned long int)size);
  idx_ptr = idx_ptr + (signed long int)size;
  list_ptr = dns_rec_ptr->list;
  while(!(list_ptr == ((struct dns_record_lists_t *)NULL)))
  {
    size = (signed int)sizeof(signed long int) /*8ul*/ ;
    memcpy(idx_ptr, (const void *)&list_ptr->date_set, (unsigned long int)size);
    idx_ptr = idx_ptr + (signed long int)size;
    if(g_verbosity >= 5)
      printf("    STO: fqdn: %s\n", (const void *)list_ptr->fqdn);

    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(list_ptr->fqdn);
    size = (signed int)((return_value_strlen$4 + (unsigned long int)1) * sizeof(char) /*1ul*/ );
    memcpy(idx_ptr, (const void *)&list_ptr->fqdn, (unsigned long int)size);
    idx_ptr = idx_ptr + (signed long int)size;
    list_ptr = list_ptr->next;
  }
  add_record(&dnshistory_db_ptr, (void *)&dns_rec_ptr->ipaddress.s_addr, key_size, data_ptr, data_size);
  free(data_ptr);
  data_ptr = (void *)0;
}

// xmalloc
// file xmalloc.h line 46
extern void * xmalloc(unsigned long int size)
{
  void *data_ptr;
  data_ptr=calloc((unsigned long int)1, size);
  if(data_ptr == NULL)
  {
    fprintf(stderr, "%s\n", msg_F_memory_alloc);
    exit(2);
  }

  return data_ptr;
}

