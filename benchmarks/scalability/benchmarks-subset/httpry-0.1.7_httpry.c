// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$2;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'||ARR8{U16}$U16$'__u6_addr16'||ARR4{U32}$U32$'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous$1;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$0;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous;

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

// tag-bpf_insn
// file /usr/include/pcap/bpf.h line 108
struct bpf_insn;

// tag-bpf_program
// file /usr/include/pcap/bpf.h line 106
struct bpf_program;

// tag-format_node
// file format.c line 36
struct format_node;

// tag-host_stats
// file rate.c line 28
struct host_stats;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-ip6_ext_header
// file tcp.h line 142
struct ip6_ext_header;

// tag-ip6_header
// file tcp.h line 130
struct ip6_header;

// tag-ip_header
// file tcp.h line 111
struct ip_header;

// tag-method_node
// file methods.c line 32
struct method_node;

// tag-passwd
// file /usr/include/pwd.h line 49
struct passwd;

// tag-pcap
// file /usr/include/pcap/pcap.h line 79
struct pcap;

// tag-pcap_dumper
// file /usr/include/pcap/pcap.h line 80
struct pcap_dumper;

// tag-pcap_pkthdr
// file /usr/include/pcap/pcap.h line 160
struct pcap_pkthdr;

// tag-pcap_stat
// file /usr/include/pcap/pcap.h line 169
struct pcap_stat;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-tcp_header
// file tcp.h line 150
struct tcp_header;

// tag-thread_args
// file rate.c line 36
struct thread_args;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

#ifndef NULL
#define NULL ((void*)0)
#endif

// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// ceil
// file /usr/include/x86_64-linux-gnu/bits/mathcalls.h line 178
extern double ceil(double);
// change_user
// file httpry.c line 247
void change_user(char *name);
// chdir
// file /usr/include/unistd.h line 497
extern signed int chdir(const char *);
// chown
// file /usr/include/unistd.h line 473
extern signed int chown(const char *, unsigned int, unsigned int);
// cleanup
// file httpry.c line 552
void cleanup();
// cleanup_rate_stats
// file rate.h line 15
void cleanup_rate_stats();
// clear_values
// file format.h line 17
void clear_values();
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// closelog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 175
extern void closelog(void);
// create_rate_stats_thread
// file rate.c line 77
void create_rate_stats_thread(signed int rate_interval, char *use_infile, signed int rate_threshold);
// display_banner
// file httpry.c line 602
void display_banner();
// display_rate_stats
// file rate.h line 16
void display_rate_stats(char *use_infile, signed int rate_threshold);
// display_usage
// file httpry.c line 611
void display_usage();
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// exit_rate_stats_thread
// file rate.c line 139
void exit_rate_stats_thread();
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fopen
// file /usr/include/stdio.h line 272
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
// free_format
// file format.h line 20
void free_format();
// free_methods
// file methods.h line 16
void free_methods();
// free_node
// file methods.c line 148
void free_node(struct method_node *node);
// freopen
// file /usr/include/stdio.h line 278
extern struct _IO_FILE * freopen(const char *, const char *, struct _IO_FILE *);
// get_field
// file format.c line 267
struct format_node * get_field(char *str);
// get_host
// file rate.c line 332
struct host_stats * get_host(char *str);
// get_node
// file rate.c line 350
struct host_stats * get_node();
// get_value
// file format.h line 16
char * get_value(char *name);
// getegid
// file /usr/include/unistd.h line 684
extern unsigned int getegid(void);
// geteuid
// file /usr/include/unistd.h line 678
extern unsigned int geteuid(void);
// getopt
// file /usr/include/getopt.h line 150
extern signed int getopt(signed int, char * const *, const char *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// getppid
// file /usr/include/unistd.h line 631
extern signed int getppid(void);
// getpwnam
// file /usr/include/pwd.h line 116
extern struct passwd * getpwnam(const char *);
// getuid
// file /usr/include/unistd.h line 675
extern unsigned int getuid(void);
// handle_signal
// file httpry.c line 517
void handle_signal(signed int sig);
// hash_str
// file utility.h line 19
unsigned int hash_str(char *str, unsigned int hashsize);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// init_rate_stats
// file rate.h line 14
void init_rate_stats(signed int rate_interval, char *use_infile, signed int rate_threshold);
// initgroups
// file /usr/include/grp.h line 200
extern signed int initgroups(const char *, unsigned int);
// insert_field
// file format.c line 106
struct format_node * insert_field(char *name, unsigned long int len);
// insert_method
// file methods.c line 78
signed int insert_method(char *method, unsigned long int len);
// insert_value
// file format.h line 15
void insert_value(char *name, char *value);
// is_request_method
// file methods.h line 15
signed int is_request_method(const char *str);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// open_outfiles
// file httpry.c line 170
void open_outfiles();
// openlog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 181
extern void openlog(const char *, signed int, signed int);
// parse_client_request
// file httpry.c line 461
signed int parse_client_request(char *header_line);
// parse_format_string
// file format.h line 14
void parse_format_string(char *str);
// parse_header_line
// file httpry.c line 434
char * parse_header_line(char *header_line);
// parse_http_packet
// file httpry.c line 285
void parse_http_packet(unsigned char *args, struct pcap_pkthdr *header, const unsigned char *pkt);
// parse_methods_string
// file methods.h line 14
void parse_methods_string(char *str);
// parse_server_response
// file httpry.c line 490
signed int parse_server_response(char *header_line);
// pcap_breakloop
// file /usr/include/pcap/pcap.h line 377
void pcap_breakloop(struct pcap *);
// pcap_close
// file /usr/include/pcap/pcap.h line 371
void pcap_close(struct pcap *);
// pcap_compile
// file /usr/include/pcap/pcap.h line 389
signed int pcap_compile(struct pcap *, struct bpf_program *, const char *, signed int, unsigned int);
// pcap_datalink
// file /usr/include/pcap/pcap.h line 396
signed int pcap_datalink(struct pcap *);
// pcap_datalink_val_to_name
// file /usr/include/pcap/pcap.h line 402
const char * pcap_datalink_val_to_name(signed int);
// pcap_dump
// file /usr/include/pcap/pcap.h line 420
void pcap_dump(unsigned char *, struct pcap_pkthdr *, const unsigned char *);
// pcap_dump_open
// file /usr/include/pcap/pcap.h line 413
struct pcap_dumper * pcap_dump_open(struct pcap *, const char *);
// pcap_freecode
// file /usr/include/pcap/pcap.h line 393
void pcap_freecode(struct bpf_program *);
// pcap_geterr
// file /usr/include/pcap/pcap.h line 387
char * pcap_geterr(struct pcap *);
// pcap_lookupdev
// file /usr/include/pcap/pcap.h line 274
char * pcap_lookupdev(char *);
// pcap_lookupnet
// file /usr/include/pcap/pcap.h line 275
signed int pcap_lookupnet(const char *, unsigned int *, unsigned int *, char *);
// pcap_loop
// file /usr/include/pcap/pcap.h line 372
signed int pcap_loop(struct pcap *, signed int, void (*)(unsigned char *, struct pcap_pkthdr *, const unsigned char *), unsigned char *);
// pcap_open_live
// file /usr/include/pcap/pcap.h line 349
struct pcap * pcap_open_live(const char *, signed int, signed int, signed int, char *);
// pcap_open_offline
// file /usr/include/pcap/pcap.h line 353
struct pcap * pcap_open_offline(const char *, char *);
// pcap_setfilter
// file /usr/include/pcap/pcap.h line 379
signed int pcap_setfilter(struct pcap *, struct bpf_program *);
// pcap_stats
// file /usr/include/pcap/pcap.h line 378
signed int pcap_stats(struct pcap *, struct pcap_stat *);
// prepare_capture
// file httpry.c line 82
struct pcap * prepare_capture(char *interface, signed int promisc, char *filename, char *capfilter);
// print_format_list
// file format.h line 18
void print_format_list();
// print_format_values
// file format.h line 19
void print_format_values();
// print_stats
// file httpry.c line 573
void print_stats();
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_ip6_nh
// file httpry.c line 402
signed int process_ip6_nh(const unsigned char *pkt, signed int size_ip, signed int len);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous *, const union anonymous$0 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$2 *, struct anonymous$2 *);
// raise
// file /usr/include/signal.h line 139
extern signed int raise(signed int);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// remove
// file /usr/include/stdio.h line 178
extern signed int remove(const char *);
// remove_node
// file rate.c line 255
struct host_stats * remove_node(struct host_stats *node, struct host_stats *prev);
// run_stats
// file rate.c line 166
void * run_stats(void *args);
// runas_daemon
// file httpry.c line 199
void runas_daemon();
// set_header_offset
// file httpry.c line 130
void set_header_offset(signed int header_type);
// setgid
// file /usr/include/unistd.h line 717
extern signed int setgid(unsigned int);
// setsid
// file /usr/include/unistd.h line 667
extern signed int setsid(void);
// setuid
// file /usr/include/unistd.h line 700
extern signed int setuid(unsigned int);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$2 *, signed int);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$2 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// str_compare
// file utility.h line 16
signed int str_compare(const char *str1, const char *str2);
// str_copy
// file utility.h line 17
signed int str_copy(char *dest, const char *src, unsigned long int len);
// str_duplicate
// file utility.h line 18
char * str_duplicate(const char *str);
// str_strip_whitespace
// file utility.h line 14
char * str_strip_whitespace(char *str);
// str_tolower
// file utility.h line 15
char * str_tolower(char *str);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm *);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// syslog
// file /usr/include/x86_64-linux-gnu/sys/syslog.h line 190
extern void syslog(signed int, const char *, ...);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// umask
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 311
extern unsigned int umask(unsigned int);
// update_host_stats
// file rate.h line 17
void update_host_stats(char *host, signed long int t);

struct anonymous$2
{
  // __val
  unsigned long int __val[16l];
};

union anonymous$1
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous$0
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
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

struct bpf_insn
{
  // code
  unsigned short int code;
  // jt
  unsigned char jt;
  // jf
  unsigned char jf;
  // k
  unsigned int k;
};

struct bpf_program
{
  // bf_len
  unsigned int bf_len;
  // bf_insns
  struct bpf_insn *bf_insns;
};

struct format_node
{
  // name
  char *name;
  // value
  char *value;
  // next
  struct format_node *next;
  // list
  struct format_node *list;
};

struct host_stats
{
  // host
  char host[256l];
  // count
  unsigned int count;
  // first_packet
  signed long int first_packet;
  // last_packet
  signed long int last_packet;
  // next
  struct host_stats *next;
};

struct in6_addr
{
  // __in6_u
  union anonymous$1 __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
};

struct ip6_ext_header
{
  // ip6_eh_nh
  unsigned char ip6_eh_nh;
  // ip6_eh_len
  unsigned char ip6_eh_len;
};

struct ip6_header
{
  // ip6_vtcfl
  unsigned int ip6_vtcfl;
  // ip6_plen
  unsigned short int ip6_plen;
  // ip6_nh
  unsigned char ip6_nh;
  // ip6_hl
  unsigned char ip6_hl;
  // ip_src
  struct in6_addr ip_src;
  // ip_dst
  struct in6_addr ip_dst;
};

struct ip_header
{
  // ip_vhl
  unsigned char ip_vhl;
  // ip_tos
  unsigned char ip_tos;
  // ip_len
  unsigned short int ip_len;
  // ip_id
  unsigned short int ip_id;
  // ip_off
  unsigned short int ip_off;
  // ip_ttl
  unsigned char ip_ttl;
  // ip_p
  unsigned char ip_p;
  // ip_sum
  unsigned short int ip_sum;
  // ip_src
  struct in_addr ip_src;
  // ip_dst
  struct in_addr ip_dst;
};

struct method_node
{
  // method
  char *method;
  // left
  struct method_node *left;
  // right
  struct method_node *right;
};

struct passwd
{
  // pw_name
  char *pw_name;
  // pw_passwd
  char *pw_passwd;
  // pw_uid
  unsigned int pw_uid;
  // pw_gid
  unsigned int pw_gid;
  // pw_gecos
  char *pw_gecos;
  // pw_dir
  char *pw_dir;
  // pw_shell
  char *pw_shell;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
};

struct pcap_pkthdr
{
  // ts
  struct timeval ts;
  // caplen
  unsigned int caplen;
  // len
  unsigned int len;
};

struct pcap_stat
{
  // ps_recv
  unsigned int ps_recv;
  // ps_drop
  unsigned int ps_drop;
  // ps_ifdrop
  unsigned int ps_ifdrop;
};

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct tcp_header
{
  // th_sport
  unsigned short int th_sport;
  // th_dport
  unsigned short int th_dport;
  // th_seq
  unsigned int th_seq;
  // th_ack
  unsigned int th_ack;
  // th_offx2
  unsigned char th_offx2;
  // th_flags
  unsigned char th_flags;
  // th_win
  unsigned short int th_win;
  // th_sum
  unsigned short int th_sum;
  // th_urp
  unsigned short int th_urp;
};

struct thread_args
{
  // use_infile
  char *use_infile;
  // rate_interval
  unsigned int rate_interval;
  // rate_threshold
  signed int rate_threshold;
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


// block_alloc
// file rate.c line 54
static struct host_stats **block_alloc = (struct host_stats **)(void *)0;
// buf
// file httpry.c line 71
static char *buf = (char *)(void *)0;
// capfilter
// file httpry.c line 55
static char *capfilter = (char *)(void *)0;
// daemon_mode
// file httpry.c line 52
static signed int daemon_mode = 0;
// default_capfilter
// file httpry.c line 76
static char default_capfilter[20l] = { 't', 'c', 'p', ' ', 'p', 'o', 'r', 't', ' ', '8', '0', ' ', 'o', 'r', ' ', '8', '0', '8', '0', 0 };
// default_format
// file httpry.c line 77
static char default_format[101l] = { 't', 'i', 'm', 'e', 's', 't', 'a', 'm', 'p', ',', 's', 'o', 'u', 'r', 'c', 'e', '-', 'i', 'p', ',', 'd', 'e', 's', 't', '-', 'i', 'p', ',', 'd', 'i', 'r', 'e', 'c', 't', 'i', 'o', 'n', ',', 'm', 'e', 't', 'h', 'o', 'd', ',', 'h', 'o', 's', 't', ',', 'r', 'e', 'q', 'u', 'e', 's', 't', '-', 'u', 'r', 'i', ',', 'h', 't', 't', 'p', '-', 'v', 'e', 'r', 's', 'i', 'o', 'n', ',', 's', 't', 'a', 't', 'u', 's', '-', 'c', 'o', 'd', 'e', ',', 'r', 'e', 'a', 's', 'o', 'n', '-', 'p', 'h', 'r', 'a', 's', 'e', 0 };
// default_methods
// file httpry.c line 79
static char default_methods[47l] = { 'g', 'e', 't', ',', 'p', 'o', 's', 't', ',', 'p', 'u', 't', ',', 'h', 'e', 'a', 'd', ',', 'o', 'p', 't', 'i', 'o', 'n', 's', ',', 'd', 'e', 'l', 'e', 't', 'e', ',', 't', 'r', 'a', 'c', 'e', ',', 'c', 'o', 'n', 'n', 'e', 'c', 't', 0 };
// dumpfile
// file httpry.c line 75
static struct pcap_dumper *dumpfile = (struct pcap_dumper *)(void *)0;
// fields
// file format.c line 45
static struct format_node *fields[64l];
// force_flush
// file httpry.c line 66
static signed int force_flush = 0;
// format_str
// file httpry.c line 60
static char *format_str = (char *)(void *)0;
// free_stack
// file rate.c line 53
static struct host_stats *free_stack = (struct host_stats *)(void *)0;
// head
// file format.c line 46
static struct format_node *head = (struct format_node *)(void *)0;
// header_offset
// file httpry.c line 74
static signed int header_offset = 0;
// interface
// file httpry.c line 54
static char *interface = (char *)(void *)0;
// methods
// file methods.c line 38
static struct method_node *methods = (struct method_node *)(void *)0;
// methods_str
// file httpry.c line 61
static char *methods_str = (char *)(void *)0;
// new_user
// file httpry.c line 59
static char *new_user = (char *)(void *)0;
// num_parsed
// file httpry.c line 72
static unsigned int num_parsed = (unsigned int)0;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// parse_count
// file httpry.c line 51
static unsigned int parse_count = (unsigned int)0;
// pcap_hnd
// file httpry.c line 70
static struct pcap *pcap_hnd = (struct pcap *)(void *)0;
// pid_filename
// file httpry.c line 58
static char *pid_filename = (char *)(void *)0;
// quiet_mode
// file httpry.c line 67
signed int quiet_mode = 0;
// rate_format
// file httpry.c line 78
static char rate_format[5l] = { 'h', 'o', 's', 't', 0 };
// rate_interval
// file httpry.c line 64
static signed int rate_interval = 5;
// rate_stats
// file httpry.c line 63
static signed int rate_stats = 0;
// rate_threshold
// file httpry.c line 65
static signed int rate_threshold = 2;
// set_promisc
// file httpry.c line 57
static signed int set_promisc = 1;
// start_time
// file httpry.c line 73
static signed long int start_time = (signed long int)0;
// stats
// file rate.c line 52
static struct host_stats **stats = (struct host_stats **)(void *)0;
// stats_lock
// file rate.c line 51
static union anonymous stats_lock;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// thread
// file rate.c line 49
static unsigned long int thread;
// thread_args
// file rate.c line 56
static struct thread_args thread_args;
// thread_created
// file rate.c line 50
static signed int thread_created = 0;
// totals
// file rate.c line 55
static struct host_stats totals;
// use_dumpfile
// file httpry.c line 62
static char *use_dumpfile = (char *)(void *)0;
// use_infile
// file httpry.c line 53
static char *use_infile = (char *)(void *)0;
// use_outfile
// file httpry.c line 56
static char *use_outfile = (char *)(void *)0;
// use_syslog
// file httpry.c line 68
signed int use_syslog = 0;

// change_user
// file httpry.c line 247
void change_user(char *name)
{
  struct passwd *user = (struct passwd *)(void *)0;
  if(name == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"httpry.c", 251);
    fflush(stderr);
    exit(1);
  }

  unsigned int return_value_getuid$2;
  return_value_getuid$2=getuid();
  unsigned int return_value_geteuid$1;
  if(!(return_value_getuid$2 == 0u))
  {
    return_value_geteuid$1=geteuid();
    if(!(return_value_geteuid$1 == 0u))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "You must be root to switch users");
        closelog();
      }

      fprintf(stderr, "Error: You must be root to switch users");
      fprintf(stderr, "\n");
      raise(2);
    }

  }

  user=getpwnam(name);
  if(user == ((struct passwd *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "User '%s' not found in system", name);
      closelog();
    }

    fprintf(stderr, "Error: User '%s' not found in system", name);
    fprintf(stderr, "\n");
    raise(2);
  }

  if(!(use_outfile == ((char *)NULL)))
  {
    signed int return_value_chown$3;
    return_value_chown$3=chown(use_outfile, user->pw_uid, user->pw_gid);
    if(!(return_value_chown$3 >= 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot change ownership of output file '%s'", use_outfile);
        closelog();
      }

      fprintf(stderr, "Warning: Cannot change ownership of output file '%s'", use_outfile);
      fprintf(stderr, "\n");
    }

  }

  if(!(use_dumpfile == ((char *)NULL)))
  {
    signed int return_value_chown$4;
    return_value_chown$4=chown(use_dumpfile, user->pw_uid, user->pw_gid);
    if(!(return_value_chown$4 >= 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot change ownership of dump file '%s'", use_dumpfile);
        closelog();
      }

      fprintf(stderr, "Warning: Cannot change ownership of dump file '%s'", use_dumpfile);
      fprintf(stderr, "\n");
    }

  }

  signed int return_value_initgroups$5;
  return_value_initgroups$5=initgroups(name, user->pw_gid);
  if(!(return_value_initgroups$5 == 0))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot initialize the group access list");
      closelog();
    }

    fprintf(stderr, "Error: Cannot initialize the group access list");
    fprintf(stderr, "\n");
    raise(2);
  }

  signed int return_value_setgid$6;
  return_value_setgid$6=setgid(user->pw_gid);
  if(!(return_value_setgid$6 == 0))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot set GID");
      closelog();
    }

    fprintf(stderr, "Error: Cannot set GID");
    fprintf(stderr, "\n");
    raise(2);
  }

  signed int return_value_setuid$7;
  return_value_setuid$7=setuid(user->pw_uid);
  if(!(return_value_setuid$7 == 0))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot set UID");
      closelog();
    }

    fprintf(stderr, "Error: Cannot set UID");
    fprintf(stderr, "\n");
    raise(2);
  }

  unsigned int return_value_getegid$8;
  return_value_getegid$8=getegid();
  _Bool tmp_if_expr$10;
  unsigned int return_value_geteuid$9;
  if(!(return_value_getegid$8 == user->pw_gid))
    tmp_if_expr$10 = (_Bool)1;

  else
  {
    return_value_geteuid$9=geteuid();
    tmp_if_expr$10 = return_value_geteuid$9 != user->pw_uid ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$10)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot change process owner to '%s'", name);
      closelog();
    }

    fprintf(stderr, "Error: Cannot change process owner to '%s'", name);
    fprintf(stderr, "\n");
    raise(2);
  }

  goto __CPROVER_DUMP_L22;

__CPROVER_DUMP_L22:
  ;
}

// cleanup
// file httpry.c line 552
void cleanup()
{
  if(!(pcap_hnd == ((struct pcap *)NULL)))
    pcap_breakloop(pcap_hnd);

  if(!(rate_stats == 0))
    cleanup_rate_stats();

  fflush((struct _IO_FILE *)(void *)0);
  free_format();
  free_methods();
  if(!(buf == ((char *)NULL)))
    free((void *)buf);

  if(!(daemon_mode == 0))
    remove(pid_filename);

  if(!(pcap_hnd == ((struct pcap *)NULL)))
    pcap_close(pcap_hnd);

}

// cleanup_rate_stats
// file rate.h line 15
void cleanup_rate_stats()
{
  struct host_stats **i;
  exit_rate_stats_thread();
  if(!(block_alloc == ((struct host_stats **)NULL)))
  {
    i = block_alloc;
    for( ; !(*i == ((struct host_stats *)NULL)); i = i + 1l)
      free((void *)*i);
    free((void *)block_alloc);
    block_alloc = (struct host_stats **)(void *)0;
  }

  if(!(stats == ((struct host_stats **)NULL)))
  {
    free((void *)stats);
    stats = (struct host_stats **)(void *)0;
  }

  free_stack = (struct host_stats *)(void *)0;
  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// clear_values
// file format.h line 17
void clear_values()
{
  struct format_node *node = head;
  if(node == ((struct format_node *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 188);
    fflush(stderr);
    exit(1);
  }

  for( ; !(node == ((struct format_node *)NULL)); node = node->list)
    node->value = (char *)(void *)0;
  goto __CPROVER_DUMP_L3;

__CPROVER_DUMP_L3:
  ;
}

// create_rate_stats_thread
// file rate.c line 77
void create_rate_stats_thread(signed int rate_interval, char *use_infile, signed int rate_threshold)
{
  struct anonymous$2 set;
  signed int s;
  if(thread_created == 0)
  {
    thread_args.use_infile = use_infile;
    thread_args.rate_interval = (unsigned int)rate_interval;
    thread_args.rate_threshold = rate_threshold;
    sigemptyset(&set);
    sigaddset(&set, 2);
    sigaddset(&set, 1);
    s=pthread_mutex_init(&stats_lock, (const union anonymous$0 *)(void *)0);
    if(!(s == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistics thread mutex initialization failed with error %d", s);
        closelog();
      }

      fprintf(stderr, "Error: Statistics thread mutex initialization failed with error %d", s);
      fprintf(stderr, "\n");
      raise(2);
    }

    s=pthread_sigmask(0, &set, (struct anonymous$2 *)(void *)0);
    if(!(s == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistics thread signal blocking failed with error %d", s);
        closelog();
      }

      fprintf(stderr, "Error: Statistics thread signal blocking failed with error %d", s);
      fprintf(stderr, "\n");
      raise(2);
    }

    s=pthread_create(&thread, (const union pthread_attr_t *)(void *)0, run_stats, (void *)&thread_args);
    if(!(s == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistics thread creation failed with error %d", s);
        closelog();
      }

      fprintf(stderr, "Error: Statistics thread creation failed with error %d", s);
      fprintf(stderr, "\n");
      raise(2);
    }

    s=pthread_sigmask(1, &set, (struct anonymous$2 *)(void *)0);
    if(!(s == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistics thread signal unblocking failed with error %d", s);
        closelog();
      }

      fprintf(stderr, "Error: Statistics thread signal unblocking failed with error %d", s);
      fprintf(stderr, "\n");
      raise(2);
    }

    thread_created = 1;
    goto __CPROVER_DUMP_L10;
  }


__CPROVER_DUMP_L10:
  ;
}

// display_banner
// file httpry.c line 602
void display_banner()
{
  if(quiet_mode == 0)
  {
    fprintf(stderr, "%s version %s -- HTTP logging and information retrieval tool", (const void *)"httpry", (const void *)"0.1.7");
    fprintf(stderr, "\n");
  }

  if(quiet_mode == 0)
  {
    fprintf(stderr, "Copyright (c) 2005-2012 Jason Bittel <jason.bittel@gmail.com>");
    fprintf(stderr, "\n");
  }

}

// display_rate_stats
// file rate.h line 16
void display_rate_stats(char *use_infile, signed int rate_threshold)
{
  signed long int now;
  char st_time[20l];
  unsigned int delta;
  unsigned int rps = (unsigned int)0;
  signed int i;
  struct host_stats *node;
  struct host_stats *prev;
  if(!(stats == ((struct host_stats **)NULL)))
  {
    if(!(thread_created == 0))
      pthread_mutex_lock(&stats_lock);

    if(!(use_infile == ((char *)NULL)))
      now = totals.last_packet;

    else
      now=time((signed long int *)(void *)0);
    struct tm *return_value_localtime$1;
    return_value_localtime$1=localtime(&now);
    strftime(st_time, (unsigned long int)20, "%Y-%m-%d %H:%M:%S", return_value_localtime$1);
    signed int j;
    signed int num_buckets = 0;
    signed int num_chain;
    signed int max_chain = 0;
    signed int num_nodes = 0;
    j = 0;
    for( ; !(j >= 2048); j = j + 1)
    {
      if(!(stats[(signed long int)j] == ((struct host_stats *)NULL)))
        num_buckets = num_buckets + 1;

      num_chain = 0;
      node = stats[(signed long int)j];
      for( ; !(node == ((struct host_stats *)NULL)); node = node->next)
        num_chain = num_chain + 1;
      if(!(max_chain >= num_chain))
        max_chain = num_chain;

      num_nodes = num_nodes + num_chain;
    }
    if(quiet_mode == 0)
    {
      fprintf(stderr, "----------------------------");
      fprintf(stderr, "\n");
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Hash buckets:       %d", 2048);
      fprintf(stderr, "\n");
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Nodes inserted:     %d", num_nodes);
      fprintf(stderr, "\n");
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Buckets in use:     %d", num_buckets);
      fprintf(stderr, "\n");
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Hash collisions:    %d", num_nodes - num_buckets);
      fprintf(stderr, "\n");
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Longest hash chain: %d", max_chain);
      fprintf(stderr, "\n");
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "----------------------------");
      fprintf(stderr, "\n");
    }

    i = 0;
    for( ; !(i >= 2048); i = i + 1)
    {
      node = stats[(signed long int)i];
      prev = (struct host_stats *)(void *)0;
      while(!(node == ((struct host_stats *)NULL)))
      {
        delta = (unsigned int)(now - node->first_packet);
        if(delta >= 1u)
        {
          double return_value_ceil$2;
          return_value_ceil$2=ceil((double)((float)node->count / (float)delta));
          rps = (unsigned int)return_value_ceil$2;
        }

        else
          rps = (unsigned int)0;
        if(rps >= (unsigned int)rate_threshold)
        {
          printf("%s%s%s%s%u rps\n", (const void *)st_time, (const void *)"\t", (const void *)node->host, (const void *)"\t", rps);
          prev = node;
          node = node->next;
        }

        else
          node=remove_node(node, prev);
      }
    }
    delta = (unsigned int)(now - totals.first_packet);
    if(delta >= 1u)
      printf("%s%stotals%s%3.2f rps\n", (const void *)st_time, (const void *)"\t", (const void *)"\t", (float)totals.count / (float)delta);

    if(!(thread_created == 0))
      pthread_mutex_unlock(&stats_lock);

    goto __CPROVER_DUMP_L28;
  }


__CPROVER_DUMP_L28:
  ;
}

// display_usage
// file httpry.c line 611
void display_usage()
{
  display_banner();
  printf("Usage: %s [ -dFhpqs ] [-b file ] [ -f format ] [ -i device ] [ -l threshold ]\n              [ -m methods ] [ -n count ] [ -o file ] [ -P file ] [ -r file ]\n              [ -t seconds] [ -u user ] [ 'expression' ]\n\n", (const void *)"httpry");
  printf("   -b file      write HTTP packets to a binary dump file\n   -d           run as daemon\n   -f format    specify output format string\n   -F           force output flush\n   -h           print this help information\n   -i device    listen on this interface\n   -l threshold specify a rps threshold for rate statistics\n   -m methods   specify request methods to parse\n   -n count     set number of HTTP packets to parse\n   -o file      write output to a file\n   -p           disable promiscuous mode\n   -P file      use custom PID filename when running in daemon mode \n   -q           suppress non-critical output\n   -r file      read packets from input file\n   -s           run in HTTP requests per second mode\n   -t seconds   specify the display interval for rate statistics\n   -u user      set process owner\n   expression   specify a bpf-style capture filter\n\n");
  printf("Additional information can be found at:\n   http://dumpsterventures.com/jason/httpry\n\n");
  exit(0);
}

// exit_rate_stats_thread
// file rate.c line 139
void exit_rate_stats_thread()
{
  signed int s;
  void *retval;
  if(!(thread_created == 0))
  {
    s=pthread_cancel(thread);
    if(!(s == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistics thread cancellation failed with error %d", s);
        closelog();
      }

      fprintf(stderr, "Warning: Statistics thread cancellation failed with error %d", s);
      fprintf(stderr, "\n");
    }

    s=pthread_join(thread, &retval);
    if(!(s == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistics thread join failed with error %d", s);
        closelog();
      }

      fprintf(stderr, "Warning: Statistics thread join failed with error %d", s);
      fprintf(stderr, "\n");
    }

    if(!(retval == (void *)-1))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistics thread exit value was unexpected");
        closelog();
      }

      fprintf(stderr, "Warning: Statistics thread exit value was unexpected");
      fprintf(stderr, "\n");
    }

    thread_created = 0;
    s=pthread_mutex_destroy(&stats_lock);
    if(!(s == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Statistcs thread mutex destroy failed with error %d", s);
        closelog();
      }

      fprintf(stderr, "Warning: Statistcs thread mutex destroy failed with error %d", s);
      fprintf(stderr, "\n");
    }

    goto __CPROVER_DUMP_L10;
  }


__CPROVER_DUMP_L10:
  ;
}

// free_format
// file format.h line 20
void free_format()
{
  struct format_node *prev;
  struct format_node *curr;
  if(!(head == ((struct format_node *)NULL)))
  {
    curr = head;
    while(!(curr == ((struct format_node *)NULL)))
    {
      prev = curr;
      curr = curr->list;
      free((void *)prev->name);
      free((void *)prev);
    }
    goto __CPROVER_DUMP_L4;
  }


__CPROVER_DUMP_L4:
  ;
}

// free_methods
// file methods.h line 16
void free_methods()
{
  free_node(methods);
}

// free_node
// file methods.c line 148
void free_node(struct method_node *node)
{
  if(!(node == ((struct method_node *)NULL)))
  {
    free_node(node->left);
    free_node(node->right);
    free((void *)node->method);
    free((void *)node);
  }

}

// get_field
// file format.c line 267
struct format_node * get_field(char *str)
{
  struct format_node *node;
  if(str == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 271);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 272);
    fflush(stderr);
    exit(1);
  }

  unsigned int return_value_hash_str$2;
  return_value_hash_str$2=hash_str(str, (unsigned int)64);
  unsigned int return_value_hash_str$3;
  return_value_hash_str$3=hash_str(str, (unsigned int)64);
  if(return_value_hash_str$3 >= 64u)
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 273);
    fflush(stderr);
    exit(1);
  }

  unsigned int return_value_hash_str$4;
  return_value_hash_str$4=hash_str(str, (unsigned int)64);
  node = fields[(signed long int)return_value_hash_str$4];
  signed int return_value_str_compare$5;
  for( ; !(node == ((struct format_node *)NULL)); node = node->next)
  {
    return_value_str_compare$5=str_compare(str, node->name);
    if(return_value_str_compare$5 == 0)
      return node;

  }
  return (struct format_node *)(void *)0;
}

// get_host
// file rate.c line 332
struct host_stats * get_host(char *str)
{
  struct host_stats *node;
  if(str == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"rate.c", 336);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"rate.c", 337);
    fflush(stderr);
    exit(1);
  }

  unsigned int return_value_hash_str$2;
  return_value_hash_str$2=hash_str(str, (unsigned int)2048);
  unsigned int return_value_hash_str$3;
  return_value_hash_str$3=hash_str(str, (unsigned int)2048);
  if(return_value_hash_str$3 >= 2048u)
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"rate.c", 338);
    fflush(stderr);
    exit(1);
  }

  unsigned int return_value_hash_str$4;
  return_value_hash_str$4=hash_str(str, (unsigned int)2048);
  node = stats[(signed long int)return_value_hash_str$4];
  signed int return_value_str_compare$5;
  for( ; !(node == ((struct host_stats *)NULL)); node = node->next)
  {
    return_value_str_compare$5=str_compare(str, node->host);
    if(return_value_str_compare$5 == 0)
      return node;

  }
  return (struct host_stats *)(void *)0;
}

// get_node
// file rate.c line 350
struct host_stats * get_node()
{
  struct host_stats *get_node$$1$$head;
  struct host_stats **tmp;
  static signed int alloc_size;
  static struct host_stats *block;
  if(block_alloc == ((struct host_stats **)NULL))
  {
    block = (struct host_stats *)(void *)0;
    alloc_size = 0;
  }

  static struct host_stats *tail;
  if(!(free_stack == ((struct host_stats *)NULL)))
  {
    get_node$$1$$head = free_stack;
    free_stack = free_stack->next;
    get_node$$1$$head->next = (struct host_stats *)(void *)0;
  }

  else
    if(!(block == ((struct host_stats *)NULL)))
    {
      get_node$$1$$head = block;
      if(block == tail)
        block = (struct host_stats *)(void *)0;

      else
        block = block + 1l;
    }

    else
    {
      void *return_value_malloc$1;
      return_value_malloc$1=malloc((unsigned long int)100 * sizeof(struct host_stats) /*288ul*/ );
      block = (struct host_stats *)return_value_malloc$1;
      if(block == ((struct host_stats *)NULL))
      {
        if(!(use_syslog == 0))
        {
          openlog("httpry", 0x01, 3 << 3);
          syslog(3, "Cannot allocate memory for node block");
          closelog();
        }

        fprintf(stderr, "Error: Cannot allocate memory for node block");
        fprintf(stderr, "\n");
        raise(2);
      }

      static struct host_stats **mv;
      if(block_alloc == ((struct host_stats **)NULL))
      {
        void *return_value_malloc$2;
        return_value_malloc$2=malloc((unsigned long int)10 * sizeof(struct host_stats *) /*8ul*/ );
        block_alloc = (struct host_stats **)return_value_malloc$2;
        if(block_alloc == ((struct host_stats **)NULL))
        {
          if(!(use_syslog == 0))
          {
            openlog("httpry", 0x01, 3 << 3);
            syslog(3, "Cannot allocate memory for blocks array");
            closelog();
          }

          fprintf(stderr, "Error: Cannot allocate memory for blocks array");
          fprintf(stderr, "\n");
          raise(2);
        }

        mv = block_alloc;
      }

      *mv = block;
      alloc_size = alloc_size + 1;
      if(alloc_size % 10 == 0)
      {
        void *return_value_realloc$3;
        return_value_realloc$3=realloc((void *)block_alloc, (unsigned long int)(alloc_size + 10) * sizeof(struct host_stats *) /*8ul*/ );
        tmp = (struct host_stats **)return_value_realloc$3;
        if(tmp == ((struct host_stats **)NULL))
        {
          if(!(use_syslog == 0))
          {
            openlog("httpry", 0x01, 3 << 3);
            syslog(3, "Cannot re-allocate memory for blocks array");
            closelog();
          }

          fprintf(stderr, "Error: Cannot re-allocate memory for blocks array");
          fprintf(stderr, "\n");
          raise(2);
        }

        block_alloc = tmp;
        mv = (block_alloc + (signed long int)alloc_size) - (signed long int)1;
      }

      mv = mv + 1l;
      *mv = (struct host_stats *)(void *)0;
      tail = (block + (signed long int)100) - (signed long int)1;
      get_node$$1$$head = block;
      block = block + 1l;
    }
  return get_node$$1$$head;
}

// get_value
// file format.h line 16
char * get_value(char *name)
{
  struct format_node *node;
  if(name == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 171);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(name);
  if(return_value_strlen$1 == 0ul)
    return "-";

  else
  {
    node=get_field(name);
    if(!(node == ((struct format_node *)NULL)))
      return node->value;

    else
      return "-";
  }
}

// handle_signal
// file httpry.c line 517
void handle_signal(signed int sig)
{
  if(!(sig >= 1))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"httpry.c", 520);
    fflush(stderr);
    exit(1);
  }

  switch(sig)
  {
    case 1:
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Caught SIGHUP, reloading...");
        closelog();
      }

      if(quiet_mode == 0)
      {
        fprintf(stderr, "Caught SIGHUP, reloading...");
        fprintf(stderr, "\n");
      }

      print_stats();
      if(!(rate_stats == 0))
        cleanup_rate_stats();

      open_outfiles();
      if(!(rate_stats == 0))
        init_rate_stats(rate_interval, use_infile, rate_threshold);

      goto __CPROVER_DUMP_L16;
    }
    case 2:
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Caught SIGINT, shutting down...");
        closelog();
      }

      if(quiet_mode == 0)
      {
        fprintf(stderr, "Caught SIGINT, shutting down...");
        fprintf(stderr, "\n");
      }

      print_stats();
      cleanup();
      break;
    }
    case 15:
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Caught SIGTERM, shutting down...");
        closelog();
      }

      if(quiet_mode == 0)
      {
        fprintf(stderr, "Caught SIGTERM, shutting down...");
        fprintf(stderr, "\n");
      }

      print_stats();
      cleanup();
      break;
    }
    default:
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Ignoring unknown signal '%d'", sig);
        closelog();
      }

      fprintf(stderr, "Warning: Ignoring unknown signal '%d'", sig);
      fprintf(stderr, "\n");
      goto __CPROVER_DUMP_L16;
    }
  }
  exit(sig);

__CPROVER_DUMP_L16:
  ;
}

// hash_str
// file utility.h line 19
unsigned int hash_str(char *str, unsigned int hashsize)
{
  unsigned long int hash;
  if(str == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 113);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 114);
    fflush(stderr);
    exit(1);
  }

  hash = (unsigned long int)0;
  for( ; !((signed int)*str == 0); str = str + 1l)
  {
    signed int return_value_tolower$2;
    return_value_tolower$2=tolower((signed int)*str);
    hash = hash + (unsigned long int)return_value_tolower$2;
    hash = hash + (hash << 10);
    hash = hash ^ hash >> 6;
  }
  hash = hash + (hash << 3);
  hash = hash ^ hash >> 11;
  hash = hash + (hash << 15);
  return (unsigned int)(hash & (unsigned long int)(hashsize - (unsigned int)1));
}

// init_rate_stats
// file rate.h line 14
void init_rate_stats(signed int rate_interval, char *use_infile, signed int rate_threshold)
{
  totals.count = (unsigned int)0;
  totals.first_packet = (signed long int)0;
  totals.last_packet = (signed long int)0;
  void *return_value_calloc$1;
  return_value_calloc$1=calloc((unsigned long int)2048, sizeof(struct host_stats *) /*8ul*/ );
  stats = (struct host_stats **)return_value_calloc$1;
  if(stats == ((struct host_stats **)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot allocate memory for host stats");
      closelog();
    }

    fprintf(stderr, "Error: Cannot allocate memory for host stats");
    fprintf(stderr, "\n");
    raise(2);
  }

  if(use_infile == ((char *)NULL))
    create_rate_stats_thread(rate_interval, use_infile, rate_threshold);

  goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// insert_field
// file format.c line 106
struct format_node * insert_field(char *name, unsigned long int len)
{
  struct format_node *node;
  unsigned int hashval;
  if(name == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 112);
    fflush(stderr);
    exit(1);
  }

  if(!(len >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 113);
    fflush(stderr);
    exit(1);
  }

  node=get_field(name);
  if(node == ((struct format_node *)NULL))
  {
    void *return_value_malloc$1;
    return_value_malloc$1=malloc(sizeof(struct format_node) /*32ul*/ );
    node = (struct format_node *)return_value_malloc$1;
    if(node == ((struct format_node *)NULL))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot allocate memory for new node");
        closelog();
      }

      fprintf(stderr, "Error: Cannot allocate memory for new node");
      fprintf(stderr, "\n");
      raise(2);
    }

    hashval=hash_str(name, (unsigned int)64);
    if(hashval >= 64u)
    {
      fflush((struct _IO_FILE *)(void *)0);
      fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 123);
      fflush(stderr);
      exit(1);
    }

    node->next = fields[(signed long int)hashval];
    fields[(signed long int)hashval] = node;
  }

  else
  {
    fprintf(stderr, "Warning: Format name '%s' already provided", name);
    fprintf(stderr, "\n");
    return (struct format_node *)(void *)0;
  }
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(len + (unsigned long int)1);
  node->name = (char *)return_value_malloc$2;
  if(node->name == ((char *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot allocate memory for node name");
      closelog();
    }

    fprintf(stderr, "Error: Cannot allocate memory for node name");
    fprintf(stderr, "\n");
    raise(2);
  }

  str_copy(node->name, name, len + (unsigned long int)1);
  node->value = (char *)(void *)0;
  node->list = (struct format_node *)(void *)0;
  static struct format_node *prev = (struct format_node *)(void *)0;
  if(!(prev == ((struct format_node *)NULL)))
    prev->list = node;

  prev = node;
  if(head == ((struct format_node *)NULL))
    head = node;

  return node;
}

// insert_method
// file methods.c line 78
signed int insert_method(char *method, unsigned long int len)
{
  struct method_node **node = &methods;
  signed int cmp;
  if(method == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"methods.c", 83);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(method);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"methods.c", 84);
    fflush(stderr);
    exit(1);
  }

  while(!(*node == ((struct method_node *)NULL)))
  {
    cmp=str_compare(method, (*node)->method);
    if(cmp >= 1)
      node = &(*node)->right;

    else
      if(!(cmp >= 0))
        node = &(*node)->left;

      else
      {
        fprintf(stderr, "Warning: Method '%s' already provided", method);
        fprintf(stderr, "\n");
        return 0;
      }
  }
  void *return_value_malloc$2;
  return_value_malloc$2=malloc(sizeof(struct method_node) /*24ul*/ );
  *node = (struct method_node *)return_value_malloc$2;
  if(*node == ((struct method_node *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot allocate memory for method node");
      closelog();
    }

    fprintf(stderr, "Error: Cannot allocate memory for method node");
    fprintf(stderr, "\n");
    raise(2);
  }

  void *return_value_malloc$3;
  return_value_malloc$3=malloc(len + (unsigned long int)1);
  (*node)->method = (char *)return_value_malloc$3;
  if((*node)->method == ((char *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot allocate memory for method string");
      closelog();
    }

    fprintf(stderr, "Error: Cannot allocate memory for method string");
    fprintf(stderr, "\n");
    raise(2);
  }

  str_copy((*node)->method, method, len + (unsigned long int)1);
  (*node)->right = (struct method_node *)(void *)0;
  (*node)->left = (*node)->right;
  return 1;
}

// insert_value
// file format.h line 15
void insert_value(char *name, char *value)
{
  struct format_node *node;
  if(name == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 153);
    fflush(stderr);
    exit(1);
  }

  if(value == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 154);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(name);
  _Bool tmp_if_expr$3;
  unsigned long int return_value_strlen$2;
  if(return_value_strlen$1 == 0ul)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    return_value_strlen$2=strlen(value);
    tmp_if_expr$3 = return_value_strlen$2 == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  }
  if(!tmp_if_expr$3)
  {
    node=get_field(name);
    if(!(node == ((struct format_node *)NULL)))
      node->value = value;

    goto __CPROVER_DUMP_L7;
  }


__CPROVER_DUMP_L7:
  ;
}

// is_request_method
// file methods.h line 15
signed int is_request_method(const char *str)
{
  struct method_node *node = methods;
  signed int cmp;
  if(node == ((struct method_node *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"methods.c", 120);
    fflush(stderr);
    exit(1);
  }

  if(str == ((const char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"methods.c", 121);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  if(return_value_strlen$1 == 0ul)
    return 0;

  else
  {
    while(!(node == ((struct method_node *)NULL)))
    {
      cmp=str_compare(str, node->method);
      if(cmp >= 1)
        node = node->right;

      else
        if(!(cmp >= 0))
          node = node->left;

        else
          return 1;
    }
    return 0;
  }
}

// main
// file httpry.c line 643
signed int main(signed int argc, char **argv)
{
  signed int opt;
  signed int loop_status;
  signal(1, handle_signal);
  signal(2, handle_signal);
  signed int return_value_atoi$1;
  do
  {
    opt=getopt(argc, argv, "b:df:Fhpqi:l:m:n:o:P:r:st:u:");
    if(opt == -1)
      break;

    switch(opt)
    {
      case 98:
      {
        use_dumpfile = optarg;
        break;
      }
      case 100:
      {
        daemon_mode = 1;
        use_syslog = 1;
        break;
      }
      case 102:
      {
        format_str = optarg;
        break;
      }
      case 70:
      {
        force_flush = 1;
        break;
      }
      case 104:
      {
        display_usage();
        break;
      }
      case 105:
      {
        interface = optarg;
        break;
      }
      case 108:
      {
        rate_threshold=atoi(optarg);
        break;
      }
      case 109:
      {
        methods_str = optarg;
        break;
      }
      case 110:
      {
        return_value_atoi$1=atoi(optarg);
        parse_count = (unsigned int)return_value_atoi$1;
        break;
      }
      case 111:
      {
        use_outfile = optarg;
        break;
      }
      case 112:
      {
        set_promisc = 0;
        break;
      }
      case 80:
      {
        pid_filename = optarg;
        break;
      }
      case 113:
      {
        quiet_mode = 1;
        break;
      }
      case 114:
      {
        use_infile = optarg;
        break;
      }
      case 115:
      {
        rate_stats = 1;
        break;
      }
      case 116:
      {
        rate_interval=atoi(optarg);
        break;
      }
      case 117:
      {
        new_user = optarg;
        break;
      }
      default:
        display_usage();
    }
  }
  while((_Bool)1);
  display_banner();
  if(use_outfile == ((char *)NULL) && !(daemon_mode == 0))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Daemon mode requires an output file");
      closelog();
    }

    fprintf(stderr, "Error: Daemon mode requires an output file");
    fprintf(stderr, "\n");
    raise(2);
  }

  if(!(rate_interval >= 1))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Invalid -t value, must be 1 or greater");
      closelog();
    }

    fprintf(stderr, "Error: Invalid -t value, must be 1 or greater");
    fprintf(stderr, "\n");
    raise(2);
  }

  if(!(rate_threshold >= 1))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Invalid -l value, must be 1 or greater");
      closelog();
    }

    fprintf(stderr, "Error: Invalid -l value, must be 1 or greater");
    fprintf(stderr, "\n");
    raise(2);
  }

  _Bool tmp_if_expr$2;
  if(!(argv[(signed long int)optind] == ((char *)NULL)))
    tmp_if_expr$2 = *argv[(signed long int)optind] != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
    capfilter = argv[(signed long int)optind];

  else
    capfilter = default_capfilter;
  if(format_str == ((char *)NULL))
    format_str = default_format;

  if(!(rate_stats == 0))
    format_str = rate_format;

  parse_format_string(format_str);
  if(methods_str == ((char *)NULL))
    methods_str = default_methods;

  parse_methods_string(methods_str);
  if(!(force_flush == 0))
  {
    signed int return_value_setvbuf$3;
    return_value_setvbuf$3=setvbuf(stdout, (char *)(void *)0, 2, (unsigned long int)0);
    if(!(return_value_setvbuf$3 == 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot disable buffering on stdout");
        closelog();
      }

      fprintf(stderr, "Warning: Cannot disable buffering on stdout");
      fprintf(stderr, "\n");
    }

  }

  if(pid_filename == ((char *)NULL))
    pid_filename = "/var/run/httpry.pid";

  pcap_hnd=prepare_capture(interface, set_promisc, use_infile, capfilter);
  open_outfiles();
  if(!(daemon_mode == 0))
    runas_daemon();

  if(!(new_user == ((char *)NULL)))
    change_user(new_user);

  void *return_value_malloc$4;
  return_value_malloc$4=malloc((unsigned long int)(8192 + 1));
  buf = (char *)return_value_malloc$4;
  if(buf == ((char *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot allocate memory for packet data buffer");
      closelog();
    }

    fprintf(stderr, "Error: Cannot allocate memory for packet data buffer");
    fprintf(stderr, "\n");
    raise(2);
  }

  if(!(rate_stats == 0))
    init_rate_stats(rate_interval, use_infile, rate_threshold);

  start_time=time(((signed long int *)NULL));
  loop_status=pcap_loop(pcap_hnd, -1, parse_http_packet, (unsigned char *)(void *)0);
  if(loop_status == -1)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      char *return_value_pcap_geterr$5;
      return_value_pcap_geterr$5=pcap_geterr(pcap_hnd);
      syslog(3, "Problem reading packets from interface: %s", return_value_pcap_geterr$5);
      closelog();
    }

    char *return_value_pcap_geterr$6;
    return_value_pcap_geterr$6=pcap_geterr(pcap_hnd);
    fprintf(stderr, "Error: Problem reading packets from interface: %s", return_value_pcap_geterr$6);
    fprintf(stderr, "\n");
    raise(2);
  }

  else
    if(loop_status == -2)
    {
      if(quiet_mode == 0)
      {
        fprintf(stderr, "Loop halted, shutting down...");
        fprintf(stderr, "\n");
      }

    }

  print_stats();
  cleanup();
  return loop_status == -1 ? 1 : 0;
}

// open_outfiles
// file httpry.c line 170
void open_outfiles()
{
  if(!(use_outfile == ((char *)NULL)))
  {
    if(!(daemon_mode == 0))
    {
      if(!((signed int)*use_outfile == 47))
      {
        if(!(use_syslog == 0))
        {
          openlog("httpry", 0x01, 3 << 3);
          syslog(3, "Output file path is not absolute and may be inaccessible after daemonizing");
          closelog();
        }

        fprintf(stderr, "Warning: Output file path is not absolute and may be inaccessible after daemonizing");
        fprintf(stderr, "\n");
      }

    }

    struct _IO_FILE *return_value_freopen$1;
    return_value_freopen$1=freopen(use_outfile, "a", stdout);
    if(return_value_freopen$1 == ((struct _IO_FILE *)NULL))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot reopen output stream to '%s'", use_outfile);
        closelog();
      }

      fprintf(stderr, "Error: Cannot reopen output stream to '%s'", use_outfile);
      fprintf(stderr, "\n");
      raise(2);
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Writing output to file: %s", use_outfile);
      fprintf(stderr, "\n");
    }

    printf("# %s version %s\n", (const void *)"httpry", (const void *)"0.1.7");
    print_format_list();
  }

  if(!(use_dumpfile == ((char *)NULL)))
  {
    if(!(daemon_mode == 0))
    {
      if(!((signed int)*use_dumpfile == 47))
      {
        if(!(use_syslog == 0))
        {
          openlog("httpry", 0x01, 3 << 3);
          syslog(3, "Binary capture file path is not absolute and may be inaccessible after daemonizing");
          closelog();
        }

        fprintf(stderr, "Warning: Binary capture file path is not absolute and may be inaccessible after daemonizing");
        fprintf(stderr, "\n");
      }

    }

    dumpfile=pcap_dump_open(pcap_hnd, use_dumpfile);
    if(dumpfile == ((struct pcap_dumper *)NULL))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot open binary dump file '%s'", use_dumpfile);
        closelog();
      }

      fprintf(stderr, "Error: Cannot open binary dump file '%s'", use_dumpfile);
      fprintf(stderr, "\n");
      raise(2);
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Writing binary dump file: %s", use_dumpfile);
      fprintf(stderr, "\n");
    }

  }

}

// parse_client_request
// file httpry.c line 461
signed int parse_client_request(char *header_line)
{
  char *method;
  char *request_uri;
  char *http_version;
  if(header_line == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"httpry.c", 465);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(header_line);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"httpry.c", 466);
    fflush(stderr);
    exit(1);
  }

  method = header_line;
  request_uri=strchr(method, 32);
  char *tmp_post$2;
  const unsigned short int **return_value___ctype_b_loc$3;
  char *tmp_post$4;
  const unsigned short int **return_value___ctype_b_loc$5;
  if(request_uri == ((char *)NULL))
    return 1;

  else
  {
    tmp_post$2 = request_uri;
    request_uri = request_uri + 1l;
    *tmp_post$2 = (char)0;
    do
    {
      return_value___ctype_b_loc$3=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)*request_uri]) == 0)
        break;

      request_uri = request_uri + 1l;
    }
    while((_Bool)1);
    http_version=strchr(request_uri, 32);
    if(http_version == ((char *)NULL))
      return 1;

    else
    {
      tmp_post$4 = http_version;
      http_version = http_version + 1l;
      *tmp_post$4 = (char)0;
      do
      {
        return_value___ctype_b_loc$5=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*http_version]) == 0)
          break;

        http_version = http_version + 1l;
      }
      while((_Bool)1);
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen("HTTP/");
      signed int return_value_strncmp$7;
      return_value_strncmp$7=strncmp(http_version, "HTTP/", return_value_strlen$6);
      if(!(return_value_strncmp$7 == 0))
        return 1;

      else
      {
        insert_value("method", method);
        insert_value("request-uri", request_uri);
        insert_value("http-version", http_version);
        insert_value("direction", ">");
        return 0;
      }
    }
  }
}

// parse_format_string
// file format.h line 14
void parse_format_string(char *str)
{
  char *name;
  char *tmp;
  char *i;
  signed int num_nodes = 0;
  unsigned long int len;
  if(str == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 55);
    fflush(stderr);
    exit(1);
  }

  len=strlen(str);
  if(len == 0ul)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Empty format string provided");
      closelog();
    }

    fprintf(stderr, "Error: Empty format string provided");
    fprintf(stderr, "\n");
    raise(2);
  }

  tmp=str_duplicate(str);
  if(tmp == ((char *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot allocate memory for format string buffer");
      closelog();
    }

    fprintf(stderr, "Error: Cannot allocate memory for format string buffer");
    fprintf(stderr, "\n");
    raise(2);
  }

  i = tmp;
  do
  {
    name=strtok(i, ",");
    if(name == ((char *)NULL))
      break;

    name=str_strip_whitespace(name);
    name=str_tolower(name);
    len=strlen(name);
    if(!(len == 0ul))
    {
      struct format_node *return_value_insert_field$1;
      return_value_insert_field$1=insert_field(name, len);
      if(!(return_value_insert_field$1 == ((struct format_node *)NULL)))
        num_nodes = num_nodes + 1;

    }

    i = (char *)(void *)0;
  }
  while((_Bool)1);
  free((void *)tmp);
  if(num_nodes == 0)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "No valid fields found in format string");
      closelog();
    }

    fprintf(stderr, "Error: No valid fields found in format string");
    fprintf(stderr, "\n");
    raise(2);
  }

  signed int j;
  signed int num_buckets = 0;
  signed int num_chain;
  signed int max_chain = 0;
  struct format_node *node;
  j = 0;
  for( ; !(j >= 64); j = j + 1)
  {
    if(!(fields[(signed long int)j] == ((struct format_node *)NULL)))
      num_buckets = num_buckets + 1;

    num_chain = 0;
    node = fields[(signed long int)j];
    for( ; !(node == ((struct format_node *)NULL)); node = node->next)
      num_chain = num_chain + 1;
    if(!(max_chain >= num_chain))
      max_chain = num_chain;

  }
  if(quiet_mode == 0)
  {
    fprintf(stderr, "----------------------------");
    fprintf(stderr, "\n");
  }

  if(quiet_mode == 0)
  {
    fprintf(stderr, "Hash buckets:       %d", 64);
    fprintf(stderr, "\n");
  }

  if(quiet_mode == 0)
  {
    fprintf(stderr, "Nodes inserted:     %d", num_nodes);
    fprintf(stderr, "\n");
  }

  if(quiet_mode == 0)
  {
    fprintf(stderr, "Buckets in use:     %d", num_buckets);
    fprintf(stderr, "\n");
  }

  if(quiet_mode == 0)
  {
    fprintf(stderr, "Hash collisions:    %d", num_nodes - num_buckets);
    fprintf(stderr, "\n");
  }

  if(quiet_mode == 0)
  {
    fprintf(stderr, "Longest hash chain: %d", max_chain);
    fprintf(stderr, "\n");
  }

  if(quiet_mode == 0)
  {
    fprintf(stderr, "----------------------------");
    fprintf(stderr, "\n");
  }

  goto __CPROVER_DUMP_L25;

__CPROVER_DUMP_L25:
  ;
}

// parse_header_line
// file httpry.c line 434
char * parse_header_line(char *header_line)
{
  char *tmp;
  static char *pos;
  if(!(header_line == ((char *)NULL)))
    pos = header_line;

  tmp=strchr(pos, 10);
  if(tmp == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    *tmp = (char)0;
    if((signed int)tmp[-1l] == 13)
    {
      tmp = tmp - 1l;
      *tmp = (char)0;
    }

    if(tmp == pos)
      return (char *)(void *)0;

    else
    {
      header_line = pos;
      if((signed int)*tmp == 0)
      {
        tmp = tmp + 1l;
        if((signed int)*tmp == 0)
          tmp = tmp + 1l;

      }

      pos = tmp;
      return header_line;
    }
  }
}

// parse_http_packet
// file httpry.c line 285
void parse_http_packet(unsigned char *args, struct pcap_pkthdr *header, const unsigned char *pkt)
{
  struct tm *pkt_time;
  char *header_line;
  char *req_value;
  char saddr[46l];
  char daddr[46l];
  char sport[6l];
  char dport[6l];
  char ts[20l];
  signed int is_request = 0;
  signed int is_response = 0;
  struct ip_header *ip;
  struct ip6_header *ip6;
  struct tcp_header *tcp;
  const char *data;
  signed int size_ip;
  signed int size_tcp;
  signed int size_data;
  signed int family;
  ip = (struct ip_header *)(pkt + (signed long int)header_offset);
  ip6 = (struct ip6_header *)(pkt + (signed long int)header_offset);
  switch((signed int)ip->ip_vhl >> 4)
  {
    case 4:
    {
      family = 2;
      break;
    }
    case 6:
    {
      family = 10;
      break;
    }
    default:
      goto __CPROVER_DUMP_L31;
  }
  if(family == 2)
  {
    size_ip = ((signed int)ip->ip_vhl & 0x0f) * 4;
    if(!(size_ip >= 20))
      goto __CPROVER_DUMP_L31;

    if(!((signed int)ip->ip_p == 6))
      goto __CPROVER_DUMP_L31;

  }

  else
  {
    size_ip = (signed int)sizeof(struct ip6_header) /*40ul*/ ;
    if(!((signed int)ip6->ip6_nh == 6))
      size_ip=process_ip6_nh(pkt, size_ip, (signed int)(header->caplen - (unsigned int)header_offset));

    if(!(size_ip >= 40))
      goto __CPROVER_DUMP_L31;

  }
  tcp = (struct tcp_header *)(pkt + (signed long int)header_offset + (signed long int)size_ip);
  size_tcp = (((signed int)tcp->th_offx2 & 0xf0) >> 4) * 4;
  unsigned long int return_value_strlen$1;
  signed int return_value_strncmp$2;
  char *tmp_post$6;
  const unsigned short int **return_value___ctype_b_loc$7;
  if(size_tcp >= 20)
  {
    data = (char *)(pkt + (signed long int)header_offset + (signed long int)size_ip + (signed long int)size_tcp);
    size_data = (signed int)(header->caplen - (unsigned int)(header_offset + size_ip + size_tcp));
    if(size_data >= 1)
    {
      signed int return_value_is_request_method$3;
      return_value_is_request_method$3=is_request_method(data);
      if(!(return_value_is_request_method$3 == 0))
        is_request = 1;

      else
      {
        return_value_strlen$1=strlen("HTTP/");
        return_value_strncmp$2=strncmp(data, "HTTP/", return_value_strlen$1);
        if(return_value_strncmp$2 == 0)
          is_response = 1;

        else
          goto __CPROVER_DUMP_L31;
      }
      if(size_data >= 8193)
        size_data = 8192;

      memcpy((void *)buf, (const void *)data, (unsigned long int)size_data);
      buf[(signed long int)size_data] = (char)0;
      header_line=parse_header_line(buf);
      if(!(header_line == ((char *)NULL)))
      {
        if(!(is_request == 0))
        {
          signed int return_value_parse_client_request$4;
          return_value_parse_client_request$4=parse_client_request(header_line);
          if(!(return_value_parse_client_request$4 == 0))
            goto __CPROVER_DUMP_L31;

        }

        else
          if(!(is_response == 0))
          {
            signed int return_value_parse_server_response$5;
            return_value_parse_server_response$5=parse_server_response(header_line);
            if(!(return_value_parse_server_response$5 == 0))
              goto __CPROVER_DUMP_L31;

          }

        do
        {
          header_line=parse_header_line((char *)(void *)0);
          if(header_line == ((char *)NULL))
            break;

          req_value=strchr(header_line, 58);
          if(!(req_value == ((char *)NULL)))
          {
            tmp_post$6 = req_value;
            req_value = req_value + 1l;
            *tmp_post$6 = (char)0;
            do
            {
              return_value___ctype_b_loc$7=__ctype_b_loc();
              if((8192 & (signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)*req_value]) == 0)
                break;

              req_value = req_value + 1l;
            }
            while((_Bool)1);
            insert_value(header_line, req_value);
          }

        }
        while((_Bool)1);
        if(family == 2)
        {
          inet_ntop(family, (const void *)&ip->ip_src, saddr, (unsigned int)sizeof(char [46l]) /*46ul*/ );
          inet_ntop(family, (const void *)&ip->ip_dst, daddr, (unsigned int)sizeof(char [46l]) /*46ul*/ );
        }

        else
        {
          inet_ntop(family, (const void *)&ip6->ip_src, saddr, (unsigned int)sizeof(char [46l]) /*46ul*/ );
          inet_ntop(family, (const void *)&ip6->ip_dst, daddr, (unsigned int)sizeof(char [46l]) /*46ul*/ );
        }
        insert_value("source-ip", saddr);
        insert_value("dest-ip", daddr);
        unsigned short int return_value_ntohs$8;
        return_value_ntohs$8=ntohs(tcp->th_sport);
        snprintf(sport, (unsigned long int)6, "%d", return_value_ntohs$8);
        unsigned short int return_value_ntohs$9;
        return_value_ntohs$9=ntohs(tcp->th_dport);
        snprintf(dport, (unsigned long int)6, "%d", return_value_ntohs$9);
        insert_value("source-port", sport);
        insert_value("dest-port", dport);
        pkt_time=localtime((signed long int *)&header->ts.tv_sec);
        strftime(ts, (unsigned long int)20, "%Y-%m-%d %H:%M:%S", pkt_time);
        insert_value("timestamp", ts);
        if(!(rate_stats == 0))
        {
          char *return_value_get_value$10;
          return_value_get_value$10=get_value("host");
          update_host_stats(return_value_get_value$10, header->ts.tv_sec);
          clear_values();
        }

        else
          print_format_values();
        if(!(dumpfile == ((struct pcap_dumper *)NULL)))
          pcap_dump((unsigned char *)dumpfile, header, pkt);

        num_parsed = num_parsed + 1u;
        if(num_parsed >= parse_count && !(parse_count == 0u))
          pcap_breakloop(pcap_hnd);

        goto __CPROVER_DUMP_L31;
      }

    }

  }


__CPROVER_DUMP_L31:
  ;
}

// parse_methods_string
// file methods.h line 14
void parse_methods_string(char *str)
{
  char *method;
  char *tmp;
  char *i;
  signed int num_methods = 0;
  unsigned long int len;
  if(str == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"methods.c", 50);
    fflush(stderr);
    exit(1);
  }

  len=strlen(str);
  if(len == 0ul)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Empty methods string provided");
      closelog();
    }

    fprintf(stderr, "Error: Empty methods string provided");
    fprintf(stderr, "\n");
    raise(2);
  }

  tmp=str_duplicate(str);
  if(tmp == ((char *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Cannot allocate memory for methods string buffer");
      closelog();
    }

    fprintf(stderr, "Error: Cannot allocate memory for methods string buffer");
    fprintf(stderr, "\n");
    raise(2);
  }

  i = tmp;
  do
  {
    method=strtok(i, ",");
    if(method == ((char *)NULL))
      break;

    method=str_strip_whitespace(method);
    method=str_tolower(method);
    len=strlen(method);
    if(!(len == 0ul))
    {
      signed int return_value_insert_method$1;
      return_value_insert_method$1=insert_method(method, len);
      if(!(return_value_insert_method$1 == 0))
        num_methods = num_methods + 1;

    }

    i = (char *)(void *)0;
  }
  while((_Bool)1);
  free((void *)tmp);
  if(num_methods == 0)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "No valid methods found in string");
      closelog();
    }

    fprintf(stderr, "Error: No valid methods found in string");
    fprintf(stderr, "\n");
    raise(2);
  }

  goto __CPROVER_DUMP_L12;

__CPROVER_DUMP_L12:
  ;
}

// parse_server_response
// file httpry.c line 490
signed int parse_server_response(char *header_line)
{
  char *http_version;
  char *status_code;
  char *reason_phrase;
  if(header_line == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"httpry.c", 494);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(header_line);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"httpry.c", 495);
    fflush(stderr);
    exit(1);
  }

  http_version = header_line;
  status_code=strchr(http_version, 32);
  char *tmp_post$2;
  const unsigned short int **return_value___ctype_b_loc$3;
  char *tmp_post$4;
  const unsigned short int **return_value___ctype_b_loc$5;
  if(status_code == ((char *)NULL))
    return 1;

  else
  {
    tmp_post$2 = status_code;
    status_code = status_code + 1l;
    *tmp_post$2 = (char)0;
    do
    {
      return_value___ctype_b_loc$3=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)*status_code]) == 0)
        break;

      status_code = status_code + 1l;
    }
    while((_Bool)1);
    reason_phrase=strchr(status_code, 32);
    if(reason_phrase == ((char *)NULL))
      return 1;

    else
    {
      tmp_post$4 = reason_phrase;
      reason_phrase = reason_phrase + 1l;
      *tmp_post$4 = (char)0;
      do
      {
        return_value___ctype_b_loc$5=__ctype_b_loc();
        if((8192 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*reason_phrase]) == 0)
          break;

        reason_phrase = reason_phrase + 1l;
      }
      while((_Bool)1);
      insert_value("http-version", http_version);
      insert_value("status-code", status_code);
      insert_value("reason-phrase", reason_phrase);
      insert_value("direction", "<");
      return 0;
    }
  }
}

// prepare_capture
// file httpry.c line 82
struct pcap * prepare_capture(char *interface, signed int promisc, char *filename, char *capfilter)
{
  char errbuf[256l];
  struct pcap *prepare_capture$$1$$pcap_hnd;
  char *dev = (char *)(void *)0;
  unsigned int net;
  unsigned int mask;
  struct bpf_program filter;
  if(filename == ((char *)NULL))
  {
    if(interface == ((char *)NULL))
    {
      dev=pcap_lookupdev(errbuf);
      if(dev == ((char *)NULL))
      {
        if(!(use_syslog == 0))
        {
          openlog("httpry", 0x01, 3 << 3);
          syslog(3, "Cannot find a valid capture device: %s", (const void *)errbuf);
          closelog();
        }

        fprintf(stderr, "Error: Cannot find a valid capture device: %s", (const void *)errbuf);
        fprintf(stderr, "\n");
        raise(2);
      }

    }

    else
      dev = interface;
    signed int return_value_pcap_lookupnet$1;
    return_value_pcap_lookupnet$1=pcap_lookupnet(dev, &net, &mask, errbuf);
    if(return_value_pcap_lookupnet$1 == -1)
      net = (unsigned int)0;

    prepare_capture$$1$$pcap_hnd=pcap_open_live(dev, 8192, promisc, 0, errbuf);
    if(prepare_capture$$1$$pcap_hnd == ((struct pcap *)NULL))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot open live capture on '%s': %s", dev, (const void *)errbuf);
        closelog();
      }

      fprintf(stderr, "Error: Cannot open live capture on '%s': %s", dev, (const void *)errbuf);
      fprintf(stderr, "\n");
      raise(2);
    }

  }

  else
  {
    prepare_capture$$1$$pcap_hnd=pcap_open_offline(filename, errbuf);
    if(prepare_capture$$1$$pcap_hnd == ((struct pcap *)NULL))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot open saved capture file: %s", (const void *)errbuf);
        closelog();
      }

      fprintf(stderr, "Error: Cannot open saved capture file: %s", (const void *)errbuf);
      fprintf(stderr, "\n");
      raise(2);
    }

  }
  signed int return_value_pcap_datalink$2;
  return_value_pcap_datalink$2=pcap_datalink(prepare_capture$$1$$pcap_hnd);
  set_header_offset(return_value_pcap_datalink$2);
  signed int return_value_pcap_compile$5;
  return_value_pcap_compile$5=pcap_compile(prepare_capture$$1$$pcap_hnd, &filter, capfilter, 0, net);
  if(return_value_pcap_compile$5 == -1)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      char *return_value_pcap_geterr$3;
      return_value_pcap_geterr$3=pcap_geterr(prepare_capture$$1$$pcap_hnd);
      syslog(3, "Cannot compile capture filter '%s': %s", capfilter, return_value_pcap_geterr$3);
      closelog();
    }

    char *return_value_pcap_geterr$4;
    return_value_pcap_geterr$4=pcap_geterr(prepare_capture$$1$$pcap_hnd);
    fprintf(stderr, "Error: Cannot compile capture filter '%s': %s", capfilter, return_value_pcap_geterr$4);
    fprintf(stderr, "\n");
    raise(2);
  }

  signed int return_value_pcap_setfilter$8;
  return_value_pcap_setfilter$8=pcap_setfilter(prepare_capture$$1$$pcap_hnd, &filter);
  if(return_value_pcap_setfilter$8 == -1)
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      char *return_value_pcap_geterr$6;
      return_value_pcap_geterr$6=pcap_geterr(prepare_capture$$1$$pcap_hnd);
      syslog(3, "Cannot apply capture filter: %s", return_value_pcap_geterr$6);
      closelog();
    }

    char *return_value_pcap_geterr$7;
    return_value_pcap_geterr$7=pcap_geterr(prepare_capture$$1$$pcap_hnd);
    fprintf(stderr, "Error: Cannot apply capture filter: %s", return_value_pcap_geterr$7);
    fprintf(stderr, "\n");
    raise(2);
  }

  pcap_freecode(&filter);
  if(filename == ((char *)NULL))
  {
    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "Starting capture on %s interface", dev);
      closelog();
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "Starting capture on %s interface", dev);
      fprintf(stderr, "\n");
    }

  }

  return prepare_capture$$1$$pcap_hnd;
}

// print_format_list
// file format.h line 18
void print_format_list()
{
  struct format_node *node = head;
  if(node == ((struct format_node *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 204);
    fflush(stderr);
    exit(1);
  }

  printf("# Fields: ");
  for( ; !(node == ((struct format_node *)NULL)); node = node->list)
  {
    printf("%s", node->name);
    if(!(node->list == ((struct format_node *)NULL)))
      printf(",");

  }
  printf("\n");
  goto __CPROVER_DUMP_L5;

__CPROVER_DUMP_L5:
  ;
}

// print_format_values
// file format.h line 19
void print_format_values()
{
  struct format_node *node = head;
  if(node == ((struct format_node *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"format.c", 225);
    fflush(stderr);
    exit(1);
  }

  for( ; !(node == ((struct format_node *)NULL)); node = node->list)
  {
    if(!(node->value == ((char *)NULL)))
    {
      printf("%s", node->value);
      node->value = (char *)(void *)0;
    }

    else
      printf("%s", (const void *)"-");
    if(!(node->list == ((struct format_node *)NULL)))
      printf("%s", (const void *)"\t");

  }
  printf("\n");
  goto __CPROVER_DUMP_L6;

__CPROVER_DUMP_L6:
  ;
}

// print_stats
// file httpry.c line 573
void print_stats()
{
  struct pcap_stat pkt_stats;
  float run_time;
  if(!(rate_stats == 0))
    display_rate_stats(use_infile, rate_threshold);

  if(use_infile == ((char *)NULL) && !(pcap_hnd == ((struct pcap *)NULL)))
  {
    signed int return_value_pcap_stats$2;
    return_value_pcap_stats$2=pcap_stats(pcap_hnd, &pkt_stats);
    if(!(return_value_pcap_stats$2 == 0))
    {
      char *return_value_pcap_geterr$1;
      return_value_pcap_geterr$1=pcap_geterr(pcap_hnd);
      fprintf(stderr, "Warning: Cannot obtain packet capture statistics: %s", return_value_pcap_geterr$1);
      fprintf(stderr, "\n");
      goto __CPROVER_DUMP_L9;
    }

    if(!(use_syslog == 0))
    {
      openlog("httpry", 0x01, 3 << 3);
      syslog(3, "%u packets received, %u packets dropped, %u http packets parsed", pkt_stats.ps_recv, pkt_stats.ps_drop, num_parsed);
      closelog();
    }

    if(quiet_mode == 0)
    {
      fprintf(stderr, "%u packets received, %u packets dropped, %u http packets parsed", pkt_stats.ps_recv, pkt_stats.ps_drop, num_parsed);
      fprintf(stderr, "\n");
    }

    signed long int return_value_time$3;
    return_value_time$3=time(((signed long int *)NULL));
    run_time = (float)(return_value_time$3 - start_time);
    if(run_time > 0.000000f)
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "%0.1f packets/min, %0.1f http packets/min", (float)(pkt_stats.ps_recv * (unsigned int)60) / run_time, (float)(num_parsed * (unsigned int)60) / run_time);
        closelog();
      }

      if(quiet_mode == 0)
      {
        fprintf(stderr, "%0.1f packets/min, %0.1f http packets/min", (float)(pkt_stats.ps_recv * (unsigned int)60) / run_time, (float)(num_parsed * (unsigned int)60) / run_time);
        fprintf(stderr, "\n");
      }

    }

  }

  else
    if(!(pcap_hnd == ((struct pcap *)NULL)))
    {
      if(quiet_mode == 0)
      {
        fprintf(stderr, "%u http packets parsed", num_parsed);
        fprintf(stderr, "\n");
      }

    }

  goto __CPROVER_DUMP_L9;

__CPROVER_DUMP_L9:
  ;
}

// process_ip6_nh
// file httpry.c line 402
signed int process_ip6_nh(const unsigned char *pkt, signed int size_ip, signed int len)
{
  struct ip6_ext_header *ip6_eh = (struct ip6_ext_header *)(pkt + (signed long int)header_offset + (signed long int)size_ip);
  for( ; !((signed int)ip6_eh->ip6_eh_nh == 6); ip6_eh = (struct ip6_ext_header *)(pkt + (signed long int)header_offset + (signed long int)size_ip))
  {
    if(!((signed int)ip6_eh->ip6_eh_nh == 0) && !((signed int)ip6_eh->ip6_eh_nh == 43) && !((signed int)ip6_eh->ip6_eh_nh == 44) && !((signed int)ip6_eh->ip6_eh_nh == 50) && !((signed int)ip6_eh->ip6_eh_nh == 51) && !((signed int)ip6_eh->ip6_eh_nh == 60))
    {
      if((signed int)ip6_eh->ip6_eh_nh == 59)
        goto __CPROVER_DUMP_L3;

    }

    else
    {
      size_ip = size_ip + (signed int)ip6_eh->ip6_eh_len * 8 + 8;
      goto __CPROVER_DUMP_L4;
    }

  __CPROVER_DUMP_L3:
    ;
    return 0;

  __CPROVER_DUMP_L4:
    ;
    if(!(len >= size_ip))
      return 0;

  }
  size_ip = size_ip + (signed int)ip6_eh->ip6_eh_len * 8 + 8;
  return size_ip;
}

// remove_node
// file rate.c line 255
struct host_stats * remove_node(struct host_stats *node, struct host_stats *prev)
{
  struct host_stats *next;
  unsigned int hashval;
  if(prev == ((struct host_stats *)NULL))
  {
    hashval=hash_str(node->host, (unsigned int)2048);
    if(!(node->next == ((struct host_stats *)NULL)))
      stats[(signed long int)hashval] = node->next;

    else
      stats[(signed long int)hashval] = (struct host_stats *)(void *)0;
    next = stats[(signed long int)hashval];
  }

  else
  {
    if(!(node->next == ((struct host_stats *)NULL)))
      prev->next = node->next;

    else
      prev->next = (struct host_stats *)(void *)0;
    next = prev->next;
  }
  node->next = free_stack;
  free_stack = node;
  return next;
}

// run_stats
// file rate.c line 166
void * run_stats(void *args)
{
  struct thread_args *run_stats$$1$$thread_args = (struct thread_args *)args;
  while((_Bool)1)
  {
    sleep(run_stats$$1$$thread_args->rate_interval);
    display_rate_stats(run_stats$$1$$thread_args->use_infile, run_stats$$1$$thread_args->rate_threshold);
  }
  return (void *)0;
}

// runas_daemon
// file httpry.c line 199
void runas_daemon()
{
  signed int child_pid;
  struct _IO_FILE *pid_file;
  signed int return_value_getppid$1;
  return_value_getppid$1=getppid();
  if(!(return_value_getppid$1 == 1))
  {
    fflush((struct _IO_FILE *)(void *)0);
    child_pid=fork();
    if(!(child_pid >= 0))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot fork child process");
        closelog();
      }

      fprintf(stderr, "Error: Cannot fork child process");
      fprintf(stderr, "\n");
      raise(2);
    }

    if(child_pid >= 1)
      exit(0);

    dup2(1, 2);
    close(0);
    struct _IO_FILE *return_value_freopen$2;
    return_value_freopen$2=freopen("/dev/null", "a", stderr);
    if(return_value_freopen$2 == ((struct _IO_FILE *)NULL))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot reopen stderr to '%s'", (const void *)"/dev/null");
        closelog();
      }

      fprintf(stderr, "Error: Cannot reopen stderr to '%s'", (const void *)"/dev/null");
      fprintf(stderr, "\n");
      raise(2);
    }

    signed int return_value_setsid$3;
    return_value_setsid$3=setsid();
    if(return_value_setsid$3 == -1)
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot assign new session for child process");
        closelog();
      }

      fprintf(stderr, "Warning: Cannot assign new session for child process");
      fprintf(stderr, "\n");
    }

    umask((unsigned int)022);
    signed int return_value_chdir$4;
    return_value_chdir$4=chdir("/");
    if(return_value_chdir$4 == -1)
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot change run directory to '/'");
        closelog();
      }

      fprintf(stderr, "Error: Cannot change run directory to '/'");
      fprintf(stderr, "\n");
      raise(2);
    }

    if(!((signed int)*pid_filename == 47))
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "PID file path is not absolute and may be inaccessible after daemonizing");
        closelog();
      }

      fprintf(stderr, "Warning: PID file path is not absolute and may be inaccessible after daemonizing");
      fprintf(stderr, "\n");
    }

    pid_file=fopen(pid_filename, "w");
    if(!(pid_file == ((struct _IO_FILE *)NULL)))
    {
      signed int return_value_getpid$5;
      return_value_getpid$5=getpid();
      fprintf(pid_file, "%d", return_value_getpid$5);
      fclose(pid_file);
    }

    else
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        syslog(3, "Cannot open PID file '%s'", pid_filename);
        closelog();
      }

      fprintf(stderr, "Warning: Cannot open PID file '%s'", pid_filename);
      fprintf(stderr, "\n");
    }
    signal(17, (void (*)(signed int))1);
    signal(20, (void (*)(signed int))1);
    signal(22, (void (*)(signed int))1);
    signal(21, (void (*)(signed int))1);
    signal(15, handle_signal);
    fflush((struct _IO_FILE *)(void *)0);
    goto __CPROVER_DUMP_L16;
  }


__CPROVER_DUMP_L16:
  ;
}

// set_header_offset
// file httpry.c line 130
void set_header_offset(signed int header_type)
{
  if(!(header_type >= 0))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"httpry.c", 133);
    fflush(stderr);
    exit(1);
  }

  switch(header_type)
  {
    case 1:
    {
      header_offset = 14;
      break;
    }
    case 105:
    {
      header_offset = 32;
      break;
    }
    case 113:
    {
      header_offset = 16;
      break;
    }
    case 108:
    {
      header_offset = 4;
      break;
    }
    case 0:
    {
      header_offset = 4;
      break;
    }
    case 12:
    {
      header_offset = 0;
      break;
    }
    default:
    {
      if(!(use_syslog == 0))
      {
        openlog("httpry", 0x01, 3 << 3);
        const char *return_value_pcap_datalink_val_to_name$1;
        return_value_pcap_datalink_val_to_name$1=pcap_datalink_val_to_name(header_type);
        syslog(3, "Unsupported datalink type: %s", return_value_pcap_datalink_val_to_name$1);
        closelog();
      }

      const char *return_value_pcap_datalink_val_to_name$2;
      return_value_pcap_datalink_val_to_name$2=pcap_datalink_val_to_name(header_type);
      fprintf(stderr, "Error: Unsupported datalink type: %s", return_value_pcap_datalink_val_to_name$2);
      fprintf(stderr, "\n");
      raise(2);
    }
  }
}

// str_compare
// file utility.h line 16
signed int str_compare(const char *str1, const char *str2)
{
  if(str2 == ((const char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 58);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str2);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 59);
    fflush(stderr);
    exit(1);
  }

  if(str1 == str2)
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 60);
    fflush(stderr);
    exit(1);
  }

  signed int return_value_tolower$2;
  do
  {
    return_value_tolower$2=tolower((signed int)*str1);
    if(!(return_value_tolower$2 == (signed int)*str2))
      break;

    str1 = str1 + 1l;
    str2 = str2 + 1l;
    if((signed int)*str2 == 0)
      return 0;

  }
  while((_Bool)1);
  signed int return_value_tolower$3;
  return_value_tolower$3=tolower((signed int)*str1);
  return return_value_tolower$3 - (signed int)*str2;
}

// str_copy
// file utility.h line 17
signed int str_copy(char *dest, const char *src, unsigned long int len)
{
  const char *start = dest;
  char *tmp_post$1;
  const char *tmp_post$2;
  if(len >= 1ul)
  {
    for( ; !((signed int)*src == 0); *tmp_post$1 = *tmp_post$2)
    {
      len = len - 1ul;
      if(len == 0ul)
        break;

      tmp_post$1 = dest;
      dest = dest + 1l;
      tmp_post$2 = src;
      src = src + 1l;
    }
    *dest = (char)0;
  }

  return (signed int)(dest - start);
}

// str_duplicate
// file utility.h line 18
char * str_duplicate(const char *str)
{
  char *new;
  unsigned long int len;
  len=strlen(str);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  new = (char *)return_value_malloc$1;
  if(new == ((char *)NULL))
    return (char *)(void *)0;

  else
  {
    signed int return_value_str_copy$2;
    return_value_str_copy$2=str_copy(new, str, len + (unsigned long int)1);
    if(!(1ul + len >= (unsigned long int)return_value_str_copy$2))
    {
      fflush((struct _IO_FILE *)(void *)0);
      fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 99);
      fflush(stderr);
      exit(1);
    }

    return new;
  }
}

// str_strip_whitespace
// file utility.h line 14
char * str_strip_whitespace(char *str)
{
  unsigned long int len;
  len=strlen(str);
  if(str == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 24);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 25);
    fflush(stderr);
    exit(1);
  }

  const unsigned short int **return_value___ctype_b_loc$2;
  do
  {
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*str]) == 0)
      break;

    str = str + 1l;
  }
  while((_Bool)1);
  const unsigned short int **return_value___ctype_b_loc$3;
  unsigned long int tmp_post$4;
  for( ; !(len == 0ul); *((str + (signed long int)tmp_post$4) - (signed long int)1) = (char)0)
  {
    return_value___ctype_b_loc$3=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)str[(signed long int)len + -1l]]) == 0)
      break;

    tmp_post$4 = len;
    len = len - 1ul;
  }
  return str;
}

// str_tolower
// file utility.h line 15
char * str_tolower(char *str)
{
  char *c;
  if(str == ((char *)NULL))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 40);
    fflush(stderr);
    exit(1);
  }

  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  if(!(return_value_strlen$1 >= 1ul))
  {
    fflush((struct _IO_FILE *)(void *)0);
    fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"utility.c", 41);
    fflush(stderr);
    exit(1);
  }

  c = str;
  for( ; !((signed int)*c == 0); c = c + 1l)
  {
    signed int return_value_tolower$2;
    return_value_tolower$2=tolower((signed int)*c);
    *c = (char)return_value_tolower$2;
  }
  return str;
}

// update_host_stats
// file rate.h line 17
void update_host_stats(char *host, signed long int t)
{
  struct host_stats *node;
  unsigned int hashval;
  if(!(stats == ((struct host_stats **)NULL)) && !(host == ((char *)NULL)))
  {
    if(!(thread_created == 0))
      pthread_mutex_lock(&stats_lock);

    node=get_host(host);
    if(node == ((struct host_stats *)NULL))
    {
      node=get_node();
      hashval=hash_str(host, (unsigned int)2048);
      if(hashval >= 2048u)
      {
        fflush((struct _IO_FILE *)(void *)0);
        fprintf(stderr, "\nAssertion failed: %s, line %d\n", (const void *)"rate.c", 302);
        fflush(stderr);
        exit(1);
      }

      str_copy(node->host, host, (unsigned long int)255);
      node->count = (unsigned int)0;
      node->first_packet = t;
      node->next = stats[(signed long int)hashval];
      stats[(signed long int)hashval] = node;
    }

    if(node->first_packet == 0l)
      node->first_packet = t;

    node->last_packet = t;
    node->count = node->count + 1u;
    if(totals.first_packet == 0l)
      totals.first_packet = t;

    totals.last_packet = t;
    totals.count = totals.count + 1u;
    if(!(thread_created == 0))
      pthread_mutex_unlock(&stats_lock);

    goto __CPROVER_DUMP_L8;
  }


__CPROVER_DUMP_L8:
  ;
}

