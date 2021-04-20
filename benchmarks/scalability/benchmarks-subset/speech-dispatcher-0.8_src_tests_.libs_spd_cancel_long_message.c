// #anon_enum$G_SPAWN_DEFAULT=0$G_SPAWN_LEAVE_DESCRIPTORS_OPEN=1$G_SPAWN_DO_NOT_REAP_CHILD=2$G_SPAWN_SEARCH_PATH=4$G_SPAWN_STDOUT_TO_DEV_NULL=8$G_SPAWN_STDERR_TO_DEV_NULL=16$G_SPAWN_CHILD_INHERITS_STDIN=32$G_SPAWN_FILE_AND_ARGV_ZERO=64$G_SPAWN_SEARCH_PATH_FROM_ENVP=128$G_SPAWN_CLOEXEC_PIPES=256
// file /usr/include/glib-2.0/glib/gspawn.h line 172
enum anonymous$15 { G_SPAWN_DEFAULT=0, G_SPAWN_LEAVE_DESCRIPTORS_OPEN=1, G_SPAWN_DO_NOT_REAP_CHILD=2, G_SPAWN_SEARCH_PATH=4, G_SPAWN_STDOUT_TO_DEV_NULL=8, G_SPAWN_STDERR_TO_DEV_NULL=16, G_SPAWN_CHILD_INHERITS_STDIN=32, G_SPAWN_FILE_AND_ARGV_ZERO=64, G_SPAWN_SEARCH_PATH_FROM_ENVP=128, G_SPAWN_CLOEXEC_PIPES=256 };

// #anon_enum$SPD_BEGIN=1$SPD_END=2$SPD_INDEX_MARKS=4$SPD_CANCEL=8$SPD_PAUSE=16$SPD_RESUME=32$SPD_ALL=63
// file ../../include/speechd_types.h line 73
enum anonymous$4 { SPD_BEGIN=1, SPD_END=2, SPD_INDEX_MARKS=4, SPD_CANCEL=8, SPD_PAUSE=16, SPD_RESUME=32, SPD_ALL=63 };

// #anon_enum$SPD_CAP_NONE=0$SPD_CAP_SPELL=1$SPD_CAP_ICON=2
// file ../../../include/speechd_types.h line 32
enum anonymous$13 { SPD_CAP_NONE=0, SPD_CAP_SPELL=1, SPD_CAP_ICON=2 };

// #anon_enum$SPD_DATA_TEXT=0$SPD_DATA_SSML=1
// file ../../include/speechd_types.h line 60
enum anonymous$6 { SPD_DATA_TEXT=0, SPD_DATA_SSML=1 };

// #anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5
// file ../../include/speechd_types.h line 84
enum anonymous$14 { SPD_EVENT_BEGIN=0, SPD_EVENT_END=1, SPD_EVENT_INDEX_MARK=2, SPD_EVENT_CANCEL=3, SPD_EVENT_PAUSE=4, SPD_EVENT_RESUME=5 };

// #anon_enum$SPD_IMPORTANT=1$SPD_MESSAGE=2$SPD_TEXT=3$SPD_NOTIFICATION=4$SPD_PROGRESS=5
// file ../../include/speechd_types.h line 65
enum anonymous$9 { SPD_IMPORTANT=1, SPD_MESSAGE=2, SPD_TEXT=3, SPD_NOTIFICATION=4, SPD_PROGRESS=5 };

// #anon_enum$SPD_MALE1=1$SPD_MALE2=2$SPD_MALE3=3$SPD_FEMALE1=4$SPD_FEMALE2=5$SPD_FEMALE3=6$SPD_CHILD_MALE=7$SPD_CHILD_FEMALE=8
// file ../../../include/speechd_types.h line 43
enum anonymous$5 { SPD_MALE1=1, SPD_MALE2=2, SPD_MALE3=3, SPD_FEMALE1=4, SPD_FEMALE2=5, SPD_FEMALE3=6, SPD_CHILD_MALE=7, SPD_CHILD_FEMALE=8 };

// #anon_enum$SPD_METHOD_UNIX_SOCKET=0$SPD_METHOD_INET_SOCKET=1
// file libspeechd.h line 58
enum anonymous$16 { SPD_METHOD_UNIX_SOCKET=0, SPD_METHOD_INET_SOCKET=1 };

// #anon_enum$SPD_MODE_SINGLE=0$SPD_MODE_THREADED=1
// file ../../src/api/c/libspeechd.h line 53
enum anonymous$3 { SPD_MODE_SINGLE=0, SPD_MODE_THREADED=1 };

// #anon_enum$SPD_PUNCT_ALL=0$SPD_PUNCT_NONE=1$SPD_PUNCT_SOME=2
// file ../../../include/speechd_types.h line 26
enum anonymous$8 { SPD_PUNCT_ALL=0, SPD_PUNCT_NONE=1, SPD_PUNCT_SOME=2 };

// #anon_enum$SPD_SPELL_OFF=0$SPD_SPELL_ON=1
// file ../../../include/speechd_types.h line 38
enum anonymous$2 { SPD_SPELL_OFF=0, SPD_SPELL_ON=1 };

// tag-#anon#ST[*{S8}$S8$'name'||*{S8}$S8$'language'||*{S8}$S8$'variant'|]
// file ../../../include/speechd_types.h line 54
struct anonymous$18;

// tag-#anon#ST[*{V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V}$V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V$'callback_begin'||*{V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V}$V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V$'callback_end'||*{V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V}$V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V$'callback_cancel'||*{V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V}$V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V$'callback_pause'||*{V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V}$V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$)->V$'callback_resume'||*{V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$|*{S8}$S8$)->V}$V(U64|U64|EN#anon_enum$SPD_EVENT_BEGIN=0$SPD_EVENT_END=1$SPD_EVENT_INDEX_MARK=2$SPD_EVENT_CANCEL=3$SPD_EVENT_PAUSE=4$SPD_EVENT_RESUME=5#{U32}$U32$|*{S8}$S8$)->V$'callback_im'||S32'socket'||U32'$pad0'||*{SYM#tag-_IO_FILE#}$SYM#tag-_IO_FILE#$'stream'||EN#anon_enum$SPD_MODE_SINGLE=0$SPD_MODE_THREADED=1#{U32}$U32$'mode'||U32'$pad1'||*{SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#}$SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#$'ssip_mutex'||*{U64}$U64$'events_thread'||*{SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#}$SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#$'comm_mutex'||*{SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]#}$SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]#$'cond_reply_ready'||*{SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#}$SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#$'mutex_reply_ready'||*{SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]#}$SYM#tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]#$'cond_reply_ack'||*{SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#}$SYM#tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]#$'mutex_reply_ack'||*{S8}$S8$'reply'|]
// file ../../src/api/c/libspeechd.h line 76
struct anonymous$1;

// tag-#anon#ST[EN#anon_enum$SPD_METHOD_UNIX_SOCKET=0$SPD_METHOD_INET_SOCKET=1#{U32}$U32$'method'||U32'$pad0'||*{S8}$S8$'unix_socket_name'||*{S8}$S8$'inet_socket_host'||S32'inet_socket_port'||U32'$pad1'||*{S8}$S8$'dbus_bus'|]
// file libspeechd.h line 63
struct anonymous$17;

// tag-#anon#ST[S32'__count'||SYM#tag-#anon#UN[U32'__wch'||ARR4{S8}$S8$'__wchb'|]#'__value'|]
// file /usr/include/wchar.h line 82
struct anonymous$11;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$0;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'||ARR8{U16}$U16$'__u6_addr16'||ARR4{U32}$U32$'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous$7;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$19;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$20;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$21;

// tag-#anon#UN[U32'__wch'||ARR4{S8}$S8$'__wchb'|]
// file /usr/include/wchar.h line 85
union anonymous$10;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous$12;

// tag-#anon#UN[r*{SYM#tag-sockaddr#}$SYM#tag-sockaddr#$'__sockaddr__'||r*{SYM#tag-sockaddr_at#}$SYM#tag-sockaddr_at#$'__sockaddr_at__'||r*{SYM#tag-sockaddr_ax25#}$SYM#tag-sockaddr_ax25#$'__sockaddr_ax25__'||r*{SYM#tag-sockaddr_dl#}$SYM#tag-sockaddr_dl#$'__sockaddr_dl__'||r*{SYM#tag-sockaddr_eon#}$SYM#tag-sockaddr_eon#$'__sockaddr_eon__'||r*{SYM#tag-sockaddr_in#}$SYM#tag-sockaddr_in#$'__sockaddr_in__'||r*{SYM#tag-sockaddr_in6#}$SYM#tag-sockaddr_in6#$'__sockaddr_in6__'||r*{SYM#tag-sockaddr_inarp#}$SYM#tag-sockaddr_inarp#$'__sockaddr_inarp__'||r*{SYM#tag-sockaddr_ipx#}$SYM#tag-sockaddr_ipx#$'__sockaddr_ipx__'||r*{SYM#tag-sockaddr_iso#}$SYM#tag-sockaddr_iso#$'__sockaddr_iso__'||r*{SYM#tag-sockaddr_ns#}$SYM#tag-sockaddr_ns#$'__sockaddr_ns__'||r*{SYM#tag-sockaddr_un#}$SYM#tag-sockaddr_un#$'__sockaddr_un__'||r*{SYM#tag-sockaddr_x25#}$SYM#tag-sockaddr_x25#$'__sockaddr_x25__'|]$transparent
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
union anonymous;

// tag-_GError
// file /usr/include/glib-2.0/glib/gerror.h line 42
struct _GError;

// tag-_GString
// file /usr/include/glib-2.0/glib/gstring.h line 39
struct _GString;

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

// tag-addrinfo
// file /usr/include/netdb.h line 567
struct addrinfo;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_at
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_at;

// tag-sockaddr_ax25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ax25;

// tag-sockaddr_dl
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_dl;

// tag-sockaddr_eon
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_eon;

// tag-sockaddr_in
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_in6;

// tag-sockaddr_inarp
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_inarp;

// tag-sockaddr_ipx
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ipx;

// tag-sockaddr_iso
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_iso;

// tag-sockaddr_ns
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_ns;

// tag-sockaddr_un
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_un;

// tag-sockaddr_x25
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 90
struct sockaddr_x25;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// SPD_DBG
// file libspeechd.c line 1836
static void SPD_DBG(char *format, ...);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _get_default_unix_socket_name
// file libspeechd.c line 156
static char * _get_default_unix_socket_name(void);
// _init_debug
// file libspeechd.c line 216
static void _init_debug(void);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// connect
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 137
extern signed int connect(signed int, union anonymous, unsigned int);
// escape_dot
// file libspeechd.c line 1774
static char * escape_dot(const char *text);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fdopen
// file /usr/include/stdio.h line 306
extern struct _IO_FILE * fdopen(signed int, const char *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeaddrinfo
// file /usr/include/netdb.h line 668
extern void freeaddrinfo(struct addrinfo *);
// g_free
// file /usr/include/glib-2.0/glib/gmem.h line 71
extern void g_free(void *);
// g_get_user_name
// file /usr/include/glib-2.0/glib/gutils.h line 86
extern const char * g_get_user_name(void);
// g_get_user_runtime_dir
// file /usr/include/glib-2.0/glib/gutils.h line 138
extern const char * g_get_user_runtime_dir(void);
// g_getenv
// file /usr/include/glib-2.0/glib/genviron.h line 37
extern const char * g_getenv(const char *);
// g_spawn_sync
// file /usr/include/glib-2.0/glib/gspawn.h line 226
extern signed int g_spawn_sync(const char *, char **, char **, enum anonymous$15, void (*)(void *), void *, char **, char **, signed int *, struct _GError **);
// g_strcmp0
// file /usr/include/glib-2.0/glib/gtestutils.h line 123
extern signed int g_strcmp0(const char *, const char *);
// g_strdup
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 216
extern char * g_strdup(const char *);
// g_strdup_printf
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 218
extern char * g_strdup_printf(const char *, ...);
// g_strdup_vprintf
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 221
extern char * g_strdup_vprintf(const char *, void **);
// g_strfreev
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 281
extern void g_strfreev(char **);
// g_string_append
// file /usr/include/glib-2.0/glib/gstring.h line 80
extern struct _GString * g_string_append(struct _GString *, const char *);
// g_string_free
// file /usr/include/glib-2.0/glib/gstring.h line 56
extern char * g_string_free(struct _GString *, signed int);
// g_string_new
// file /usr/include/glib-2.0/glib/gstring.h line 49
extern struct _GString * g_string_new(const char *);
// g_string_printf
// file /usr/include/glib-2.0/glib/gstring.h line 140
extern void g_string_printf(struct _GString *, const char *, ...);
// g_strsplit
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 270
extern char ** g_strsplit(const char *, const char *, signed int);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// get_err_code
// file libspeechd.c line 1710
static signed int get_err_code(char *reply);
// get_param_int
// file libspeechd.c line 1687
static signed int get_param_int(char *reply, signed int num, signed int *err);
// get_param_str
// file libspeechd.c line 1636
static char * get_param_str(char *reply, signed int num, signed int *err);
// get_reply
// file libspeechd.c line 1460
static char * get_reply(struct anonymous$1 *connection);
// getaddrinfo
// file /usr/include/netdb.h line 662
extern signed int getaddrinfo(const char *, const char *, struct addrinfo *, struct addrinfo ** restrict );
// getline
// file /usr/include/stdio.h line 678
extern signed long int getline(char ** restrict , unsigned long int *, struct _IO_FILE *);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_addr
// file /usr/include/arpa/inet.h line 34
extern unsigned int inet_addr(const char *);
// inet_ntop
// file /usr/include/arpa/inet.h line 64
extern const char * inet_ntop(signed int, const void *, char *, unsigned int);
// isanum
// file libspeechd.c line 1738
static signed int isanum(char *str);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// notification_cb
// file spd_cancel_long_message.c line 42
static void notification_cb(unsigned long int msg_id, unsigned long int client_id, enum anonymous$14 type);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_cond_destroy
// file /usr/include/pthread.h line 975
extern signed int pthread_cond_destroy(union anonymous$20 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$20 *, const union anonymous$19 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$20 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$20 *, union anonymous$21 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$21 *);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$21 *, const union anonymous$19 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$21 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$21 *);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// resolve_host
// file libspeechd.c line 257
static char * resolve_host(char *host_name_or_ip, signed int *is_localhost, char **error);
// ret_ok
// file libspeechd.c line 1619
static signed int ret_ok(char *reply);
// setsockopt
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 226
extern signed int setsockopt(signed int, signed int, signed int, const void *, unsigned int);
// setvbuf
// file /usr/include/stdio.h line 336
extern signed int setvbuf(struct _IO_FILE *, char *, signed int, unsigned long int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// spawn_server
// file libspeechd.c line 311
static signed int spawn_server(struct anonymous$17 *address, signed int is_localhost, char **spawn_error);
// spd_cancel
// file ../../src/api/c/libspeechd.h line 127
signed int spd_cancel(struct anonymous$1 *connection);
// spd_cancel_all
// file libspeechd.c line 720
signed int spd_cancel_all(struct anonymous$1 *connection);
// spd_cancel_uid
// file libspeechd.c line 725
signed int spd_cancel_uid(struct anonymous$1 *connection, signed int target_uid);
// spd_char
// file libspeechd.c line 796
signed int spd_char(struct anonymous$1 *connection, enum anonymous$9 priority, const char *character);
// spd_close
// file ../../src/api/c/libspeechd.h line 115
void spd_close(struct anonymous$1 *connection);
// spd_events_handler
// file libspeechd.c line 1504
static void * spd_events_handler(void *conn);
// spd_execute_command
// file libspeechd.c line 1273
signed int spd_execute_command(struct anonymous$1 *connection, char *command);
// spd_execute_command_with_list_reply
// file libspeechd.c line 1201
char ** spd_execute_command_with_list_reply(struct anonymous$1 *connection, char *command);
// spd_execute_command_with_reply
// file libspeechd.c line 1308
signed int spd_execute_command_with_reply(struct anonymous$1 *connection, char *command, char **reply);
// spd_execute_command_wo_mutex
// file libspeechd.c line 1291
signed int spd_execute_command_wo_mutex(struct anonymous$1 *connection, char *command);
// spd_get_default_address
// file libspeechd.c line 170
struct anonymous$17 * spd_get_default_address(char **error);
// spd_get_message_list_fd
// file libspeechd.c line 1244
signed int spd_get_message_list_fd(struct anonymous$1 *connection, signed int target, signed int *msg_ids, char **client_names);
// spd_key
// file libspeechd.c line 770
signed int spd_key(struct anonymous$1 *connection, enum anonymous$9 priority, const char *key_name);
// spd_list_modules
// file libspeechd.c line 1147
char ** spd_list_modules(struct anonymous$1 *connection);
// spd_list_synthesis_voices
// file libspeechd.c line 1163
struct anonymous$18 ** spd_list_synthesis_voices(struct anonymous$1 *connection);
// spd_list_voices
// file libspeechd.c line 1156
char ** spd_list_voices(struct anonymous$1 *connection);
// spd_open
// file ../../src/api/c/libspeechd.h line 108
struct anonymous$1 * spd_open(const char *client_name, const char *connection_name, const char *user_name, enum anonymous$3 mode);
// spd_open2
// file libspeechd.c line 372
struct anonymous$1 * spd_open2(const char *client_name, const char *connection_name, const char *user_name, enum anonymous$3 mode, struct anonymous$17 *address, signed int autospawn, char **error_result);
// spd_pause
// file libspeechd.c line 733
signed int spd_pause(struct anonymous$1 *connection);
// spd_pause_all
// file libspeechd.c line 738
signed int spd_pause_all(struct anonymous$1 *connection);
// spd_pause_uid
// file libspeechd.c line 743
signed int spd_pause_uid(struct anonymous$1 *connection, signed int target_uid);
// spd_resume
// file libspeechd.c line 751
signed int spd_resume(struct anonymous$1 *connection);
// spd_resume_all
// file libspeechd.c line 756
signed int spd_resume_all(struct anonymous$1 *connection);
// spd_resume_uid
// file libspeechd.c line 761
signed int spd_resume_uid(struct anonymous$1 *connection, signed int target_uid);
// spd_say
// file ../../src/api/c/libspeechd.h line 118
signed int spd_say(struct anonymous$1 *connection, enum anonymous$9 priority, const char *text);
// spd_say_prepare
// file libspeechd.c line 583
static inline signed int spd_say_prepare(struct anonymous$1 *connection, enum anonymous$9 priority, const char *text, char **escaped_text);
// spd_say_sending
// file libspeechd.c line 613
static inline signed int spd_say_sending(struct anonymous$1 *connection, const char *text);
// spd_sayf
// file libspeechd.c line 675
signed int spd_sayf(struct anonymous$1 *connection, enum anonymous$9 priority, const char *format, ...);
// spd_send_data
// file libspeechd.c line 1333
char * spd_send_data(struct anonymous$1 *connection, const char *message, signed int wfr);
// spd_send_data_wo_mutex
// file libspeechd.c line 1351
char * spd_send_data_wo_mutex(struct anonymous$1 *connection, const char *message, signed int wfr);
// spd_set_capital_letters
// file libspeechd.c line 1072
signed int spd_set_capital_letters(struct anonymous$1 *connection, enum anonymous$13 val);
// spd_set_capital_letters_all
// file libspeechd.c line 1072
signed int spd_set_capital_letters_all(struct anonymous$1 *connection, enum anonymous$13 val);
// spd_set_capital_letters_uid
// file libspeechd.c line 1072
signed int spd_set_capital_letters_uid(struct anonymous$1 *connection, enum anonymous$13 val, unsigned int uid);
// spd_set_data_mode
// file ../../src/api/c/libspeechd.h line 162
signed int spd_set_data_mode(struct anonymous$1 *connection, enum anonymous$6 mode);
// spd_set_language
// file libspeechd.c line 1067
signed int spd_set_language(struct anonymous$1 *connection, const char *str);
// spd_set_language_all
// file libspeechd.c line 1067
signed int spd_set_language_all(struct anonymous$1 *connection, const char *str);
// spd_set_language_uid
// file libspeechd.c line 1067
signed int spd_set_language_uid(struct anonymous$1 *connection, const char *str, unsigned int uid);
// spd_set_notification
// file libspeechd.c line 1107
signed int spd_set_notification(struct anonymous$1 *connection, enum anonymous$4 notification, const char *state);
// spd_set_notification_off
// file libspeechd.c line 1090
signed int spd_set_notification_off(struct anonymous$1 *connection, enum anonymous$4 notification);
// spd_set_notification_on
// file ../../src/api/c/libspeechd.h line 164
signed int spd_set_notification_on(struct anonymous$1 *connection, enum anonymous$4 notification);
// spd_set_output_module
// file libspeechd.c line 1068
signed int spd_set_output_module(struct anonymous$1 *connection, const char *str);
// spd_set_output_module_all
// file libspeechd.c line 1068
signed int spd_set_output_module_all(struct anonymous$1 *connection, const char *str);
// spd_set_output_module_uid
// file libspeechd.c line 1068
signed int spd_set_output_module_uid(struct anonymous$1 *connection, const char *str, unsigned int uid);
// spd_set_priority
// file libspeechd.c line 1430
static signed int spd_set_priority(struct anonymous$1 *connection, enum anonymous$9 priority);
// spd_set_punctuation
// file libspeechd.c line 1071
signed int spd_set_punctuation(struct anonymous$1 *connection, enum anonymous$8 val);
// spd_set_punctuation_all
// file libspeechd.c line 1071
signed int spd_set_punctuation_all(struct anonymous$1 *connection, enum anonymous$8 val);
// spd_set_punctuation_uid
// file libspeechd.c line 1071
signed int spd_set_punctuation_uid(struct anonymous$1 *connection, enum anonymous$8 val, unsigned int uid);
// spd_set_spelling
// file libspeechd.c line 1073
signed int spd_set_spelling(struct anonymous$1 *connection, enum anonymous$2 val);
// spd_set_spelling_all
// file libspeechd.c line 1073
signed int spd_set_spelling_all(struct anonymous$1 *connection, enum anonymous$2 val);
// spd_set_spelling_uid
// file libspeechd.c line 1073
signed int spd_set_spelling_uid(struct anonymous$1 *connection, enum anonymous$2 val, unsigned int uid);
// spd_set_synthesis_voice
// file libspeechd.c line 1069
signed int spd_set_synthesis_voice(struct anonymous$1 *connection, const char *str);
// spd_set_synthesis_voice_all
// file libspeechd.c line 1069
signed int spd_set_synthesis_voice_all(struct anonymous$1 *connection, const char *str);
// spd_set_synthesis_voice_uid
// file libspeechd.c line 1069
signed int spd_set_synthesis_voice_uid(struct anonymous$1 *connection, const char *str, unsigned int uid);
// spd_set_voice_pitch
// file libspeechd.c line 1064
signed int spd_set_voice_pitch(struct anonymous$1 *connection, signed int val);
// spd_set_voice_pitch_all
// file libspeechd.c line 1064
signed int spd_set_voice_pitch_all(struct anonymous$1 *connection, signed int val);
// spd_set_voice_pitch_uid
// file libspeechd.c line 1064
signed int spd_set_voice_pitch_uid(struct anonymous$1 *connection, signed int val, unsigned int uid);
// spd_set_voice_rate
// file libspeechd.c line 1063
signed int spd_set_voice_rate(struct anonymous$1 *connection, signed int val);
// spd_set_voice_rate_all
// file libspeechd.c line 1063
signed int spd_set_voice_rate_all(struct anonymous$1 *connection, signed int val);
// spd_set_voice_rate_uid
// file libspeechd.c line 1063
signed int spd_set_voice_rate_uid(struct anonymous$1 *connection, signed int val, unsigned int uid);
// spd_set_voice_type
// file libspeechd.c line 1074
signed int spd_set_voice_type(struct anonymous$1 *connection, enum anonymous$5 val);
// spd_set_voice_type_all
// file libspeechd.c line 1074
signed int spd_set_voice_type_all(struct anonymous$1 *connection, enum anonymous$5 val);
// spd_set_voice_type_uid
// file libspeechd.c line 1074
signed int spd_set_voice_type_uid(struct anonymous$1 *connection, enum anonymous$5 val, unsigned int uid);
// spd_set_volume
// file libspeechd.c line 1065
signed int spd_set_volume(struct anonymous$1 *connection, signed int val);
// spd_set_volume_all
// file libspeechd.c line 1065
signed int spd_set_volume_all(struct anonymous$1 *connection, signed int val);
// spd_set_volume_uid
// file libspeechd.c line 1065
signed int spd_set_volume_uid(struct anonymous$1 *connection, signed int val, unsigned int uid);
// spd_sound_icon
// file libspeechd.c line 852
signed int spd_sound_icon(struct anonymous$1 *connection, enum anonymous$9 priority, const char *icon_name);
// spd_stop
// file libspeechd.c line 697
signed int spd_stop(struct anonymous$1 *connection);
// spd_stop_all
// file libspeechd.c line 702
signed int spd_stop_all(struct anonymous$1 *connection);
// spd_stop_uid
// file libspeechd.c line 707
signed int spd_stop_uid(struct anonymous$1 *connection, signed int target_uid);
// spd_w_set_capital_letters
// file libspeechd.c line 898
signed int spd_w_set_capital_letters(struct anonymous$1 *connection, enum anonymous$13 type, const char *who);
// spd_w_set_language
// file libspeechd.c line 1067
signed int spd_w_set_language(struct anonymous$1 *connection, const char *str, const char *who);
// spd_w_set_output_module
// file libspeechd.c line 1068
signed int spd_w_set_output_module(struct anonymous$1 *connection, const char *str, const char *who);
// spd_w_set_punctuation
// file libspeechd.c line 879
signed int spd_w_set_punctuation(struct anonymous$1 *connection, enum anonymous$8 type, const char *who);
// spd_w_set_spelling
// file libspeechd.c line 917
signed int spd_w_set_spelling(struct anonymous$1 *connection, enum anonymous$2 type, const char *who);
// spd_w_set_synthesis_voice
// file libspeechd.c line 1069
signed int spd_w_set_synthesis_voice(struct anonymous$1 *connection, const char *str, const char *who);
// spd_w_set_voice_pitch
// file libspeechd.c line 1064
signed int spd_w_set_voice_pitch(struct anonymous$1 *connection, signed int val, const char *who);
// spd_w_set_voice_rate
// file libspeechd.c line 1063
signed int spd_w_set_voice_rate(struct anonymous$1 *connection, signed int val, const char *who);
// spd_w_set_voice_type
// file libspeechd.c line 949
signed int spd_w_set_voice_type(struct anonymous$1 *connection, enum anonymous$5 type, const char *who);
// spd_w_set_volume
// file libspeechd.c line 1065
signed int spd_w_set_volume(struct anonymous$1 *connection, signed int val, const char *who);
// spd_wchar
// file libspeechd.c line 824
signed int spd_wchar(struct anonymous$1 *connection, enum anonymous$9 priority, signed int wcharacter);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strndup
// file /usr/include/string.h line 183
extern char * strndup(const char *, unsigned long int);
// strsep
// file /usr/include/string.h line 556
extern char * strsep(char ** restrict , const char *);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// wcrtomb
// file /usr/include/wchar.h line 370
extern unsigned long int wcrtomb(char *, signed int, struct anonymous$11 *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);
// xfree
// file libspeechd.c line 1763
static void xfree(void *ptr);
// xmalloc
// file libspeechd.c line 1750
static void * xmalloc(unsigned long int bytes);

struct anonymous$18
{
  // name
  char *name;
  // language
  char *language;
  // variant
  char *variant;
};

struct anonymous$1
{
  // callback_begin
  void (*callback_begin)(unsigned long int, unsigned long int, enum anonymous$14);
  // callback_end
  void (*callback_end)(unsigned long int, unsigned long int, enum anonymous$14);
  // callback_cancel
  void (*callback_cancel)(unsigned long int, unsigned long int, enum anonymous$14);
  // callback_pause
  void (*callback_pause)(unsigned long int, unsigned long int, enum anonymous$14);
  // callback_resume
  void (*callback_resume)(unsigned long int, unsigned long int, enum anonymous$14);
  // callback_im
  void (*callback_im)(unsigned long int, unsigned long int, enum anonymous$14, char *);
  // socket
  signed int socket;
  // stream
  struct _IO_FILE *stream;
  // mode
  enum anonymous$3 mode;
  // ssip_mutex
  union anonymous$21 *ssip_mutex;
  // events_thread
  unsigned long int *events_thread;
  // comm_mutex
  union anonymous$21 *comm_mutex;
  // cond_reply_ready
  union anonymous$20 *cond_reply_ready;
  // mutex_reply_ready
  union anonymous$21 *mutex_reply_ready;
  // cond_reply_ack
  union anonymous$20 *cond_reply_ack;
  // mutex_reply_ack
  union anonymous$21 *mutex_reply_ack;
  // reply
  char *reply;
};

struct anonymous$17
{
  // method
  enum anonymous$16 method;
  // unix_socket_name
  char *unix_socket_name;
  // inet_socket_host
  char *inet_socket_host;
  // inet_socket_port
  signed int inet_socket_port;
  // dbus_bus
  char *dbus_bus;
};

union anonymous$10
{
  // __wch
  unsigned int __wch;
  // __wchb
  char __wchb[4l];
};

struct anonymous$11
{
  // __count
  signed int __count;
  // __value
  union anonymous$10 __value;
};

struct anonymous$0
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

union anonymous$7
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous$19
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$20
{
  // __data
  struct anonymous$0 __data;
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

union anonymous$21
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

union anonymous$12
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
};

union anonymous
{
  // __sockaddr__
  struct sockaddr * restrict __sockaddr__;
  // __sockaddr_at__
  struct sockaddr_at * restrict __sockaddr_at__;
  // __sockaddr_ax25__
  struct sockaddr_ax25 * restrict __sockaddr_ax25__;
  // __sockaddr_dl__
  struct sockaddr_dl * restrict __sockaddr_dl__;
  // __sockaddr_eon__
  struct sockaddr_eon * restrict __sockaddr_eon__;
  // __sockaddr_in__
  struct sockaddr_in * restrict __sockaddr_in__;
  // __sockaddr_in6__
  struct sockaddr_in6 * restrict __sockaddr_in6__;
  // __sockaddr_inarp__
  struct sockaddr_inarp * restrict __sockaddr_inarp__;
  // __sockaddr_ipx__
  struct sockaddr_ipx * restrict __sockaddr_ipx__;
  // __sockaddr_iso__
  struct sockaddr_iso * restrict __sockaddr_iso__;
  // __sockaddr_ns__
  struct sockaddr_ns * restrict __sockaddr_ns__;
  // __sockaddr_un__
  struct sockaddr_un * restrict __sockaddr_un__;
  // __sockaddr_x25__
  struct sockaddr_x25 * restrict __sockaddr_x25__;
} __attribute__ ((__transparent_union__));

struct _GError
{
  // domain
  unsigned int domain;
  // code
  signed int code;
  // message
  char *message;
};

struct _GString
{
  // str
  char *str;
  // len
  unsigned long int len;
  // allocated_len
  unsigned long int allocated_len;
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

struct addrinfo
{
  // ai_flags
  signed int ai_flags;
  // ai_family
  signed int ai_family;
  // ai_socktype
  signed int ai_socktype;
  // ai_protocol
  signed int ai_protocol;
  // ai_addrlen
  unsigned int ai_addrlen;
  // ai_addr
  struct sockaddr *ai_addr;
  // ai_canonname
  char *ai_canonname;
  // ai_next
  struct addrinfo *ai_next;
};

struct in6_addr
{
  // __in6_u
  union anonymous$7 __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

struct sockaddr_in6
{
  // sin6_family
  unsigned short int sin6_family;
  // sin6_port
  unsigned short int sin6_port;
  // sin6_flowinfo
  unsigned int sin6_flowinfo;
  // sin6_addr
  struct in6_addr sin6_addr;
  // sin6_scope_id
  unsigned int sin6_scope_id;
};

struct sockaddr_un
{
  // sun_family
  unsigned short int sun_family;
  // sun_path
  char sun_path[108l];
};


// events
// file spd_cancel_long_message.c line 32
static const char *events[6l] = { "SPD_EVENT_BEGIN", "SPD_EVENT_END", "SPD_EVENT_INDEX_MARK", "SPD_EVENT_CANCEL", "SPD_EVENT_PAUSE", "SPD_EVENT_RESUME" };
// notification_mask
// file spd_cancel_long_message.c line 29
static signed int notification_mask;
// spd
// file spd_cancel_long_message.c line 30
static struct anonymous$1 *spd;
// spd_logging_mutex
// file libspeechd.c line 86
union anonymous$21 spd_logging_mutex;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// SPD_DBG
// file libspeechd.c line 1836
static void SPD_DBG(char *format, ...)
{
  ;
}

// _get_default_unix_socket_name
// file libspeechd.c line 156
static char * _get_default_unix_socket_name(void)
{
  struct _GString *socket_filename;
  char *h;
  const char *rundir;
  rundir=g_get_user_runtime_dir();
  socket_filename=g_string_new("");
  g_string_printf(socket_filename, "%s/speech-dispatcher/speechd.sock", rundir);
  h=strdup(socket_filename->str);
  g_string_free(socket_filename, 1);
  return h;
}

// _init_debug
// file libspeechd.c line 216
static void _init_debug(void)
{
  ;
}

// escape_dot
// file libspeechd.c line 1774
static char * escape_dot(const char *text)
{
  unsigned long int orig_len = (unsigned long int)0;
  const char *orig_end;
  char *result = (char *)(void *)0;
  char *result_ptr;
  char *tmp_post$2;
  char *tmp_post$3;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  char *tmp_post$4;
  const char *tmp_post$5;
  if(text == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    orig_len=strlen(text);
    orig_end = text + (signed long int)orig_len;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((orig_len * (unsigned long int)2 + (unsigned long int)1) * sizeof(char) /*1ul*/ );
    result = (char *)return_value_malloc$1;
    if(result == ((char *)NULL))
      return (char *)(void *)0;

    else
    {
      result_ptr = result;
      if(orig_len >= 1ul)
      {
        if((signed int)*text == 46)
        {
          tmp_post$2 = result_ptr;
          result_ptr = result_ptr + 1l;
          *tmp_post$2 = (char)46;
          tmp_post$3 = result_ptr;
          result_ptr = result_ptr + 1l;
          *tmp_post$3 = (char)46;
          text = text + (signed long int)1;
        }

      }

      while(!(text >= orig_end))
      {
        if((signed int)*text == 13)
          tmp_if_expr$6 = (signed int)text[(signed long int)1] == 10 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$6 = (_Bool)0;
        if(tmp_if_expr$6)
          tmp_if_expr$7 = (signed int)text[(signed long int)2] == 46 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$7 = (_Bool)0;
        if(tmp_if_expr$7)
        {
          static const unsigned long int ESCAPED_DOTLINELEN = (const unsigned long int)4;
          static const char *ESCAPED_DOTLINE = "\r\n..";
          memcpy((void *)result_ptr, (const void *)ESCAPED_DOTLINE, ESCAPED_DOTLINELEN);
          result_ptr = result_ptr + (signed long int)ESCAPED_DOTLINELEN;
          static const unsigned long int DOTLINELEN = (const unsigned long int)3;
          text = text + (signed long int)DOTLINELEN;
        }

        else
        {
          tmp_post$4 = result_ptr;
          result_ptr = result_ptr + 1l;
          tmp_post$5 = text;
          text = text + 1l;
          *tmp_post$4 = *tmp_post$5;
        }
      }
      *result_ptr = (char)0;
      return result;
    }
  }
}

// get_err_code
// file libspeechd.c line 1710
static signed int get_err_code(char *reply)
{
  char err_code[4l];
  signed int err;
  if(reply == ((char *)NULL))
    return -1;

  else
  {
    SPD_DBG("spd_send_data:\treply: %s\n", reply);
    err_code[(signed long int)0] = reply[(signed long int)0];
    err_code[(signed long int)1] = reply[(signed long int)1];
    err_code[(signed long int)2] = reply[(signed long int)2];
    err_code[(signed long int)3] = (char)0;
    SPD_DBG("ret_ok: err_code:\t|%s|\n", (const void *)err_code);
    signed int return_value_isanum$1;
    return_value_isanum$1=isanum(err_code);
    if(!(return_value_isanum$1 == 0))
      err=atoi(err_code);

    else
    {
      SPD_DBG("ret_ok: not a number\n");
      return -1;
    }
    return err;
  }
}

// get_param_int
// file libspeechd.c line 1687
static signed int get_param_int(char *reply, signed int num, signed int *err)
{
  char *rep_str;
  char *tptr;
  signed int ret;
  rep_str=get_param_str(reply, num, err);
  if(rep_str == ((char *)NULL))
    return 0;

  else
  {
    signed long int return_value_strtol$1;
    return_value_strtol$1=strtol(rep_str, &tptr, 10);
    ret = (signed int)return_value_strtol$1;
    if(!((signed int)*tptr == 0))
    {
      *err = -3;
      return 0;
    }

    else
    {
      xfree((void *)rep_str);
      return ret;
    }
  }
}

// get_param_str
// file libspeechd.c line 1636
static char * get_param_str(char *reply, signed int num, signed int *err)
{
  signed int i;
  char *tptr;
  char *pos;
  char *pos_begin;
  char *pos_end;
  char *rep;
  /* assertion err != ((void *)0) */
  assert(err != (signed int *)(void *)0);
  if(!(num >= 1))
  {
    *err = -1;
    return (char *)(void *)0;
  }

  else
  {
    pos = reply;
    i = 0;
    for( ; num + -2 >= i; i = i + 1)
    {
      pos=strstr(pos, "\r\n");
      if(pos == ((char *)NULL))
      {
        *err = -2;
        return (char *)(void *)0;
      }

      pos = pos + (signed long int)2;
    }
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(pos);
    if(!(return_value_strlen$1 >= 4ul))
      return (char *)(void *)0;

    else
    {
      signed long int return_value_strtol$2;
      return_value_strtol$2=strtol(pos, &tptr, 10);
      *err = (signed int)return_value_strtol$2;
      if(*err >= 300)
      {
        if(*err >= 400)
          goto __CPROVER_DUMP_L6;

        return (char *)(void *)0;
      }

      else
      {

      __CPROVER_DUMP_L6:
        ;
        if(!(tptr == pos + 3l) || !((signed int)*tptr == 45))
        {
          *err = -3;
          return (char *)(void *)0;
        }

        else
        {
          pos_begin = pos + (signed long int)4;
          pos_end=strstr(pos_begin, "\r\n");
          if(pos_end == ((char *)NULL))
          {
            *err = -4;
            return (char *)(void *)0;
          }

          else
          {
            char *return_value_strndup$3;
            return_value_strndup$3=strndup(pos_begin, (unsigned long int)(pos_end - pos_begin));
            rep = (char *)return_value_strndup$3;
            *err = 0;
            return rep;
          }
        }
      }
    }
  }
}

// get_reply
// file libspeechd.c line 1460
static char * get_reply(struct anonymous$1 *connection)
{
  struct _GString *str;
  char *line = (char *)(void *)0;
  unsigned long int N = (unsigned long int)0;
  signed int bytes;
  char *reply;
  signed int errors = 0;
  str=g_string_new("");
  _Bool tmp_if_expr$3;
  unsigned long int return_value_strlen$1;
  _Bool tmp_if_expr$2;
  do
  {
    signed long int return_value_getline$4;
    return_value_getline$4=getline(&line, &N, connection->stream);
    bytes = (signed int)return_value_getline$4;
    if(bytes == -1)
    {
      SPD_DBG("Error: Can't read reply, broken socket in get_reply!");
      if(!(connection->stream == ((struct _IO_FILE *)NULL)))
        fclose(connection->stream);

      connection->stream = (struct _IO_FILE *)(void *)0;
      errors = (signed int)!(0 != 0);
    }

    else
      g_string_append(str, line);
    if(errors == 0)
    {
      return_value_strlen$1=strlen(line);
      if(!(return_value_strlen$1 >= 4ul))
        tmp_if_expr$2 = (_Bool)1;

      else
        tmp_if_expr$2 = (signed int)line[(signed long int)3] == 32 ? (_Bool)1 : (_Bool)0;
      tmp_if_expr$3 = !tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$3 = (_Bool)0;
  }
  while(tmp_if_expr$3);
  xfree((void *)line);
  if(!(errors == 0))
  {
    g_string_free(str, (signed int)!(0 != 0));
    reply = (char *)(void *)0;
  }

  else
  {
    reply = str->str;
    g_string_free(str, 0);
  }
  return reply;
}

// isanum
// file libspeechd.c line 1738
static signed int isanum(char *str)
{
  signed int i;
  unsigned long int return_value_strlen$1;
  if(str == ((char *)NULL))
    return 0;

  else
  {
    i = 0;
    do
    {
      return_value_strlen$1=strlen(str);
      if(!(return_value_strlen$1 + 18446744073709551615ul >= (unsigned long int)i))
        break;

      const unsigned short int **return_value___ctype_b_loc$2;
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if((2048 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)str[(signed long int)i]]) == 0)
        return 0;

      i = i + 1;
    }
    while((_Bool)1);
    return 1;
  }
}

// main
// file spd_cancel_long_message.c line 49
signed int main(signed int argc, char **argv)
{
  signed int result;
  signed int count;
  spd=spd_open("spd_cancel_long_message.c", "main", (const char *)(void *)0, (enum anonymous$3)SPD_MODE_THREADED);
  if(spd == ((struct anonymous$1 *)NULL))
  {
    printf("Speech-dispatcher: Failed to open connection. \n");
    exit(1);
  }

  printf("Speech-dispatcher: connection opened. \n");
  spd->callback_cancel = notification_cb;
  result=spd_set_notification_on(spd, (enum anonymous$4)SPD_CANCEL);
  if(result == -1)
  {
    printf("Notification SPD_CANCEL not set correctly \n");
    spd_close(spd);
    exit(1);
  }

  result=spd_set_data_mode(spd, (enum anonymous$6)SPD_DATA_TEXT);
  if(result == -1)
  {
    printf("Could not set spd_set_data_mode() to SPD_DATA_TEXT \n");
    spd_close(spd);
    exit(1);
  }

  printf("Sending a long message \n");
  result=spd_say(spd, (enum anonymous$9)SPD_MESSAGE, "\t\t\t\t\t\t\n       ALICE'S ADVENTURES IN WONDERLAND by Lewis Carroll.\n\n                CHAPTER I: Down the Rabbit-Hole.\n\n  Alice was beginning to get very tired of sitting by her sister\non the bank, and of having nothing to do:  once or twice she had\npeeped into the book her sister was reading, but it had no\npictures or conversations in it, `and what is the use of a book,'\nthought Alice `without pictures or conversation?'\n\n  So she was considering in her own mind (as well as she could,\nfor the hot day made her feel very sleepy and stupid), whether\nthe pleasure of making a daisy-chain would be worth the trouble\nof getting up and picking the daisies, when suddenly a White\nRabbit with pink eyes ran close by her.\n\n  There was nothing so VERY remarkable in that; nor did Alice\nthink it so VERY much out of the way to hear the Rabbit say to\nitself, `Oh dear!  Oh dear!  I shall be late!'  (when she thought\nit over afterwards, it occurred to her that she ought to have\nwondered at this, but at the time it all seemed quite natural);\nbut when the Rabbit actually TOOK A WATCH OUT OF ITS WAISTCOAT-\nPOCKET, and looked at it, and then hurried on, Alice started to\nher feet, for it flashed across her mind that she had never\nbefore seen a rabbit with either a waistcoat-pocket, or a watch to\ntake out of it, and burning with curiosity, she ran across the\nfield after it, and fortunately was just in time to see it pop\ndown a large rabbit-hole under the hedge.\n\n  In another moment down went Alice after it, never once\nconsidering how in the world she was to get out again.\n\n  The rabbit-hole went straight on like a tunnel for some way,\nand then dipped suddenly down, so suddenly that Alice had not a\nmoment to think about stopping herself before she found herself\nfalling down a very deep well.\n\n  Either the well was very deep, or she fell very slowly, for she\nhad plenty of time as she went down to look about her and to\nwonder what was going to happen next.  First, she tried to look\ndown and make out what she was coming to, but it was too dark to\nsee anything; then she looked at the sides of the well, and\nnoticed that they were filled with cupboards and book-shelves;\nhere and there she saw maps and pictures hung upon pegs.  She\ntook down a jar from one of the shelves as she passed; it was\nlabelled `ORANGE MARMALADE', but to her great disappointment it\nwas empty:  she did not like to drop the jar for fear of killing\nsomebody, so managed to put it into one of the cupboards as she\nfell past it.\n\n  `Well!' thought Alice to herself, `after such a fall as this, I\nshall think nothing of tumbling down stairs!  How brave they'll\nall think me at home!  Why, I wouldn't say anything about it,\neven if I fell off the top of the house!' (Which was very likely\ntrue.)\n\n  Down, down, down.  Would the fall NEVER come to an end!  `I\nwonder how many miles I've fallen by this time?' she said aloud.\n`I must be getting somewhere near the centre of the earth.  Let\nme see:  that would be four thousand miles down, I think--' (for,\nyou see, Alice had learnt several things of this sort in her\nlessons in the schoolroom, and though this was not a VERY good\nopportunity for showing off her knowledge, as there was no one to\nlisten to her, still it was good practice to say it over) `--yes,\nthat's about the right distance--but then I wonder what Latitude\nor Longitude I've got to?'  (Alice had no idea what Latitude was,\nor Longitude either, but thought they were nice grand words to\nsay.)\n\n  Presently she began again.  `I wonder if I shall fall right\nTHROUGH the earth!  How funny it'll seem to come out among the\npeople that walk with their heads downward!  The Antipathies, I\nthink--' (she was rather glad there WAS no one listening, this\ntime, as it didn't sound at all the right word) `--but I shall\nhave to ask them what the name of the country is, you know.\nPlease, Ma'am, is this New Zealand or Australia?' (and she tried\nto curtsey as she spoke--fancy CURTSEYING as you're falling\nthrough the air!  Do you think you could manage it?)  `And what\nan ignorant little girl she'll think me for asking!  No, it'll\nnever do to ask:  perhaps I shall see it written up somewhere.'\n\n  Down, down, down.  There was nothing else to do, so Alice soon\nbegan talking again.  `Dinah'll miss me very much to-night, I\nshould think!'  (Dinah was the cat.)  `I hope they'll remember\nher saucer of milk at tea-time.  Dinah my dear!  I wish you were\ndown here with me!  There are no mice in the air, I'm afraid, but\nyou might catch a bat, and that's very like a mouse, you know.\nBut do cats eat bats, I wonder?'  And here Alice began to get\nrather sleepy, and went on saying to herself, in a dreamy sort of\nway, `Do cats eat bats?  Do cats eat bats?' and sometimes, `Do\nbats eat cats?' for, you see, as she couldn't answer either\nquestion, it didn't much matter which way she put it.  She felt\nthat she was dozing off, and had just begun to dream that she\nwas walking hand in hand with Dinah, and saying to her very\nearnestly, `Now, Dinah, tell me the truth:  did you ever eat a\nbat?' when suddenly, thump! thump! down she came upon a heap of\nsticks and dry leaves, and the fall was over.\n\n  Alice was not a bit hurt, and she jumped up on to her feet in a\nmoment:  she looked up, but it was all dark overhead; before her\nwas another long passage, and the White Rabbit was still in\nsight, hurrying down it.  There was not a moment to be lost:\naway went Alice like the wind, and was just in time to hear it\nsay, as it turned a corner, `Oh my ears and whiskers, how late\nit's getting!'  She was close behind it when she turned the\ncorner, but the Rabbit was no longer to be seen:  she found\nherself in a long, low hall, which was lit up by a row of lamps\nhanging from the roof.\n\n  There were doors all round the hall, but they were all locked;\nand when Alice had been all the way down one side and up the\nother, trying every door, she walked sadly down the middle,\nwondering how she was ever to get out again.\n\n  Suddenly she came upon a little three-legged table, all made of\nsolid glass; there was nothing on it except a tiny golden key,\nand Alice's first thought was that it might belong to one of the\ndoors of the hall; but, alas! either the locks were too large, or\nthe key was too small, but at any rate it would not open any of\nthem.  However, on the second time round, she came upon a low\ncurtain she had not noticed before, and behind it was a little\ndoor about fifteen inches high:  she tried the little golden key\nin the lock, and to her great delight it fitted!\n\n  Alice opened the door and found that it led into a small\npassage, not much larger than a rat-hole:  she knelt down and\nlooked along the passage into the loveliest garden you ever saw.\nHow she longed to get out of that dark hall, and wander about\namong those beds of bright flowers and those cool fountains, but\nshe could not even get her head though the doorway; `and even if\nmy head would go through,' thought poor Alice, `it would be of\nvery little use without my shoulders.  Oh, how I wish\nI could shut up like a telescope!  I think I could, if I only\nknow how to begin.'  For, you see, so many out-of-the-way things\nhad happened lately, that Alice had begun to think that very few\nthings indeed were really impossible.\n\n  There seemed to be no use in waiting by the little door, so she\nwent back to the table, half hoping she might find another key on\nit, or at any rate a book of rules for shutting people up like\ntelescopes:  this time she found a little bottle on it, (`which\ncertainly was not here before,' said Alice,) and round the neck\nof the bottle was a paper label, with the words `DRINK ME'\nbeautifully printed on it in large letters.\n\n  It was all very well to say `Drink me,' but the wise little\nAlice was not going to do THAT in a hurry.  `No, I'll look\nfirst,' she said, `and see whether it's marked \"poison\" or not';\nfor she had read several nice little histories about children who\nhad got burnt, and eaten up by wild beasts and other unpleasant\nthings, all because they WOULD not remember the simple rules\ntheir friends had taught them:  such as, that a red-hot poker\nwill burn you if you hold it too long; and that if you cut your\nfinger VERY deeply with a knife, it usually bleeds; and she had\nnever forgotten that, if you drink much from a bottle marked\n`poison,' it is almost certain to disagree with you, sooner or\nlater.\n\n  However, this bottle was NOT marked `poison,' so Alice ventured\nto taste it, and finding it very nice, (it had, in fact, a sort\nof mixed flavour of cherry-tart, custard, pine-apple, roast\nturkey, toffee, and hot buttered toast,) she very soon finished\nit off.\n\n  `What a curious feeling!' said Alice; `I must be shutting up\nlike a telescope.'\n\n  And so it was indeed:  she was now only ten inches high, and\nher face brightened up at the thought that she was now the right\nsize for going though the little door into that lovely garden.\nFirst, however, she waited for a few minutes to see if she was\ngoing to shrink any further:  she felt a little nervous about\nthis; `for it might end, you know,' said Alice to herself, `in my\ngoing out altogether, like a candle.  I wonder what I should be\nlike then?'  And she tried to fancy what the flame of a candle is\nlike after the candle is blown out, for she could not remember\never having seen such a thing.\n\n  After a while, finding that nothing more happened, she decided\non going into the garden at once; but, alas for poor Alice! when\nshe got to the door, she found he had forgotten the little golden\nkey, and when she went back to the table for it, she found she\ncould not possibly reach it:  she could see it quite plainly\nthrough the glass, and she tried her best to climb up one of the\nlegs of the table, but it was too slippery; and when she had\ntired herself out with trying, the poor little thing sat down and\ncried.\n\n  `Come, there's no use in crying like that!' said Alice to\nherself, rather sharply; `I advise you to leave off this minute!'\nShe generally gave herself very good advice, (though she very\nseldom followed it), and sometimes she scolded herself so\nseverely as to bring tears into her eyes; and once she remembered\ntrying to box her own ears for having cheated herself in a game\nof croquet she was playing against herself, for this curious\nchild was very fond of pretending to be two people.  `But it's no\nuse now,' thought poor Alice, `to pretend to be two people!  Why,\nthere's hardly enough of me left to make ONE respectable\nperson!'\n\n  Soon her eye fell on a little glass box that was lying under\nthe table:  she opened it, and found in it a very small cake, on\nwhich the words `EAT ME' were beautifully marked in currants.\n`Well, I'll eat it,' said Alice, `and if it makes me grow larger,\nI can reach the key; and if it makes me grow smaller, I can creep\nunder the door; so either way I'll get into the garden, and I\ndon't care which happens!'\n\n  She ate a little bit, and said anxiously to herself, `Which\nway?  Which way?', holding her hand on the top of her head to\nfeel which way it was growing, and she was quite surprised to\nfind that she remained the same size:  to be sure, this generally\nhappens when one eats cake, but Alice had got so much into the\nway of expecting nothing but out-of-the-way things to happen,\nthat it seemed quite dull and stupid for life to go on in the\ncommon way.\n\n  So she set to work, and very soon finished off the cake. ");
  if(result == -1)
  {
    printf("spd_say() failed. \n");
    spd_close(spd);
    exit(1);
  }

  printf("Wait 5 secs and then cancel it.\n");
  sleep((unsigned int)5);
  result=spd_cancel(spd);
  if(result == -1)
  {
    printf("spd_cancel() failed. \n");
    spd_close(spd);
    exit(1);
  }

  count = 0;
  signed int tmp_post$1;
  while(!((~notification_mask & SPD_CANCEL) == 0))
  {
    sleep((unsigned int)1);
    tmp_post$1 = count;
    count = count + 1;
    if(tmp_post$1 == 10)
    {
      printf("SPD_CANCEL wait count exceeded\n");
      spd_close(spd);
      exit(1);
    }

  }
  printf("Message successfuly canceled.\n");
  printf("Speech-dispatcher: connection closed.\n");
  exit(0);
}

// notification_cb
// file spd_cancel_long_message.c line 42
static void notification_cb(unsigned long int msg_id, unsigned long int client_id, enum anonymous$14 type)
{
  notification_mask = notification_mask | 1 << (signed int)type;
  printf("notification %s received\n", events[(signed long int)type]);
}

// resolve_host
// file libspeechd.c line 257
static char * resolve_host(char *host_name_or_ip, signed int *is_localhost, char **error)
{
  struct addrinfo *addr_result;
  signed int err;
  char *resolve_buffer;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)16 + (unsigned long int)1 * sizeof(char) /*1ul*/ );
  resolve_buffer = (char *)return_value_malloc$1;
  const char *resolved_ip = (const char *)(void *)0;
  char *ip;
  *error = (char *)(void *)0;
  struct sockaddr_in *addr_in;
  if(resolve_buffer == ((char *)NULL))
  {
    *error=g_strdup("Failed to allocate memory.");
    return (char *)(void *)0;
  }

  else
  {
    err=getaddrinfo(host_name_or_ip, ((const char *)NULL), (struct addrinfo *)(void *)0, &addr_result);
    if(!(err == 0))
    {
      const char *return_value_gai_strerror$2;
      return_value_gai_strerror$2=gai_strerror(err);
      *error=g_strdup_printf("Can't resolve address %d due to error %s:", err, return_value_gai_strerror$2);
      xfree((void *)resolve_buffer);
      return (char *)(void *)0;
    }

    addr_in = (struct sockaddr_in *)addr_result->ai_addr;
    resolved_ip=inet_ntop(2, (const void *)&addr_in->sin_addr.s_addr, resolve_buffer, (unsigned int)(16 + 1));
    if(resolved_ip == ((const char *)NULL))
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      char *return_value_strerror$4;
      return_value_strerror$4=strerror(*return_value___errno_location$3);
      *error=g_strdup_printf("Could not convert address, due to the following error: %s", return_value_strerror$4);
      freeaddrinfo(addr_result);
      xfree((void *)resolve_buffer);
      return (char *)(void *)0;
    }

    signed int return_value_strncmp$5;
    return_value_strncmp$5=strncmp(resolved_ip, "127.", (unsigned long int)4);
    if(return_value_strncmp$5 == 0)
    {
      *is_localhost = 1;
      xfree((void *)resolve_buffer);
      ip=strdup("127.0.0.1");
    }

    else
    {
      *is_localhost = 0;
      ip = resolve_buffer;
    }
    freeaddrinfo(addr_result);
    return ip;
  }
}

// ret_ok
// file libspeechd.c line 1619
static signed int ret_ok(char *reply)
{
  signed int err;
  if(reply == ((char *)NULL))
    return -1;

  else
  {
    err=get_err_code(reply);
    if(err >= 100 && !(err >= 300))
      return 1;

    else
      if(err >= 300)
        return 0;

      else
      {
        printf("Fatal error (libspeechd) [%s:%d]:Internal error during communication.", (const void *)"libspeechd.c", 1633);
        fflush(stdout);
        exit(1);
      }
  }
}

// spawn_server
// file libspeechd.c line 311
static signed int spawn_server(struct anonymous$17 *address, signed int is_localhost, char **spawn_error)
{
  char **speechd_cmd;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)16 * sizeof(char *) /*8ul*/ );
  speechd_cmd = (char **)return_value_malloc$1;
  char *stderr_output;
  signed int spawn_ok;
  struct _GError *gerror = (struct _GError *)(void *)0;
  signed int exit_status;
  signed int i;
  if((signed int)address->method == SPD_METHOD_INET_SOCKET)
  {
    if(!(is_localhost == 0))
      goto __CPROVER_DUMP_L1;

    *spawn_error=g_strdup("Spawn failed, the given network address doesn't seem to be on localhost");
    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    speechd_cmd[(signed long int)0]=g_strdup("/usr/bin/speech-dispatcher");
    speechd_cmd[(signed long int)1]=g_strdup("--spawn");
    speechd_cmd[(signed long int)2]=g_strdup("--communication-method");
    if((signed int)address->method == SPD_METHOD_INET_SOCKET)
    {
      speechd_cmd[(signed long int)3]=g_strdup("inet_socket");
      speechd_cmd[(signed long int)4]=g_strdup("--port");
      speechd_cmd[(signed long int)5]=g_strdup_printf("%d", address->inet_socket_port);
      speechd_cmd[(signed long int)6] = (char *)(void *)0;
    }

    else
      if((signed int)address->method == SPD_METHOD_UNIX_SOCKET)
      {
        speechd_cmd[(signed long int)3]=g_strdup("unix_socket");
        speechd_cmd[(signed long int)4]=g_strdup("--socket-path");
        speechd_cmd[(signed long int)5]=g_strdup_printf("%s", address->unix_socket_name);
        speechd_cmd[(signed long int)6] = (char *)(void *)0;
      }

      else
        /* assertion 0 */
        assert(0 != 0);
    spawn_ok=g_spawn_sync((const char *)(void *)0, (char **)speechd_cmd, (char **)(void *)0, (enum anonymous$15)(G_SPAWN_SEARCH_PATH | G_SPAWN_STDOUT_TO_DEV_NULL), (void (*)(void *))(void *)0, (void *)0, (char **)(void *)0, &stderr_output, &exit_status, &gerror);
    i = 0;
    for( ; !(speechd_cmd[(signed long int)i] == ((char *)NULL)); i = i + 1)
      g_free((void *)speechd_cmd[(signed long int)i]);
    if(spawn_ok == 0)
    {
      *spawn_error=g_strdup_printf("Autospawn failed. Spawn error %d: %s", gerror->code, gerror->message);
      return 1;
    }

    else
      if(!(exit_status == 0))
      {
        *spawn_error=g_strdup_printf("Autospawn failed. Speech Dispatcher refused to start with error code, stating this as a reason: %s", stderr_output);
        return 1;
      }

      else
      {
        *spawn_error = (char *)(void *)0;
        return 0;
      }
    /* assertion 0 */
    assert(0 != 0);
  }
}

// spd_cancel
// file ../../src/api/c/libspeechd.h line 127
signed int spd_cancel(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "CANCEL SELF");
  return return_value_spd_execute_command$1;
}

// spd_cancel_all
// file libspeechd.c line 720
signed int spd_cancel_all(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "CANCEL ALL");
  return return_value_spd_execute_command$1;
}

// spd_cancel_uid
// file libspeechd.c line 725
signed int spd_cancel_uid(struct anonymous$1 *connection, signed int target_uid)
{
  static char command[16l];
  sprintf(command, "CANCEL %d", target_uid);
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, command);
  return return_value_spd_execute_command$1;
}

// spd_char
// file libspeechd.c line 796
signed int spd_char(struct anonymous$1 *connection, enum anonymous$9 priority, const char *character)
{
  signed int ret;
  if(character == ((const char *)NULL))
    return -1;

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(character);
    if(return_value_strlen$1 >= 7ul)
      return -1;

    else
    {
      pthread_mutex_lock(connection->ssip_mutex);
      ret=spd_set_priority(connection, priority);
      if(!(ret == 0))
      {
        pthread_mutex_unlock(connection->ssip_mutex);
        return -1;
      }

      else
      {
        static char command[16l];
        sprintf(command, "CHAR %s", character);
        ret=spd_execute_command_wo_mutex(connection, command);
        if(!(ret == 0))
        {
          pthread_mutex_unlock(connection->ssip_mutex);
          return -1;
        }

        else
        {
          pthread_mutex_unlock(connection->ssip_mutex);
          return 0;
        }
      }
    }
  }
}

// spd_close
// file ../../src/api/c/libspeechd.h line 115
void spd_close(struct anonymous$1 *connection)
{
  pthread_mutex_lock(connection->ssip_mutex);
  if((signed int)connection->mode == SPD_MODE_THREADED)
  {
    pthread_cancel(*connection->events_thread);
    pthread_mutex_destroy(connection->mutex_reply_ready);
    pthread_mutex_destroy(connection->mutex_reply_ack);
    pthread_cond_destroy(connection->cond_reply_ready);
    pthread_cond_destroy(connection->cond_reply_ack);
    pthread_join(*connection->events_thread, (void **)(void *)0);
    connection->mode = (enum anonymous$3)SPD_MODE_SINGLE;
  }

  close(connection->socket);
  pthread_mutex_unlock(connection->ssip_mutex);
  pthread_mutex_destroy(connection->ssip_mutex);
  xfree((void *)connection);
}

// spd_events_handler
// file libspeechd.c line 1504
static void * spd_events_handler(void *conn)
{
  char *reply;
  signed int reply_code;
  struct anonymous$1 *connection = (struct anonymous$1 *)conn;
  while((_Bool)1)
  {
    SPD_DBG("Getting reply in spd_events_handler");
    reply=get_reply(connection);
    if(reply == ((char *)NULL))
    {
      SPD_DBG("ERROR: BROKEN SOCKET");
      reply_code = -1;
    }

    else
    {
      SPD_DBG("<< : |%s|\n", reply);
      reply_code=get_err_code(reply);
    }
    if(reply_code >= 700 && !(reply_code >= 800))
    {
      signed int msg_id;
      signed int client_id;
      signed int err;
      SPD_DBG("Callback detected: %s", reply);
      msg_id=get_param_int(reply, 1, &err);
      if(!(err >= 0))
      {
        SPD_DBG("Bad reply from Speech Dispatcher: %s (code %d)", reply, err);
        break;
      }

      client_id=get_param_int(reply, 2, &err);
      if(!(err >= 0))
      {
        SPD_DBG("Bad reply from Speech Dispatcher: %s (code %d)", reply, err);
        break;
      }

      if(reply_code == 701)
      {
        if(!(connection->callback_begin == ((void (*)(unsigned long int, unsigned long int, enum anonymous$14))NULL)))
          connection->callback_begin((unsigned long int)msg_id, (unsigned long int)client_id, (enum anonymous$14)SPD_EVENT_BEGIN);

      }

      if(reply_code == 702)
      {
        if(!(connection->callback_end == ((void (*)(unsigned long int, unsigned long int, enum anonymous$14))NULL)))
          connection->callback_end((unsigned long int)msg_id, (unsigned long int)client_id, (enum anonymous$14)SPD_EVENT_END);

      }

      if(reply_code == 703)
      {
        if(!(connection->callback_cancel == ((void (*)(unsigned long int, unsigned long int, enum anonymous$14))NULL)))
          connection->callback_cancel((unsigned long int)msg_id, (unsigned long int)client_id, (enum anonymous$14)SPD_EVENT_CANCEL);

      }

      if(reply_code == 704)
      {
        if(!(connection->callback_pause == ((void (*)(unsigned long int, unsigned long int, enum anonymous$14))NULL)))
          connection->callback_pause((unsigned long int)msg_id, (unsigned long int)client_id, (enum anonymous$14)SPD_EVENT_PAUSE);

      }

      if(reply_code == 705)
      {
        if(!(connection->callback_resume == ((void (*)(unsigned long int, unsigned long int, enum anonymous$14))NULL)))
          connection->callback_resume((unsigned long int)msg_id, (unsigned long int)client_id, (enum anonymous$14)SPD_EVENT_RESUME);

      }

      if(reply_code == 700)
      {
        if(!(connection->callback_im == ((void (*)(unsigned long int, unsigned long int, enum anonymous$14, char *))NULL)))
        {
          char *im;
          signed int spd_events_handler$$1$$1$$3$$3$$err;
          im=get_param_str(reply, 3, &spd_events_handler$$1$$1$$3$$3$$err);
          if(im == ((char *)NULL) || !(spd_events_handler$$1$$1$$3$$3$$err >= 0))
          {
            SPD_DBG("Broken reply from Speech Dispatcher: %s", reply);
            break;
          }

          connection->callback_im((unsigned long int)msg_id, (unsigned long int)client_id, (enum anonymous$14)SPD_EVENT_INDEX_MARK, im);
          xfree((void *)im);
        }

      }

    }

    else
    {
      pthread_mutex_lock(connection->mutex_reply_ready);
      if(!(reply == ((char *)NULL)))
        connection->reply=strdup(reply);

      else
      {
        SPD_DBG("Connection reply is NULL");
        connection->reply = (char *)(void *)0;
        break;
      }
      pthread_cond_signal(connection->cond_reply_ready);
      pthread_mutex_lock(connection->mutex_reply_ack);
      pthread_mutex_unlock(connection->mutex_reply_ready);
      pthread_cond_wait(connection->cond_reply_ack, connection->mutex_reply_ack);
      pthread_mutex_unlock(connection->mutex_reply_ack);
      xfree((void *)reply);
    }
  }
  if(connection->reply == ((char *)NULL))
  {
    SPD_DBG("Signalling reply ready after communication failure");
    pthread_mutex_unlock(connection->mutex_reply_ready);
    pthread_mutex_unlock(connection->mutex_reply_ack);
    if(!(connection->stream == ((struct _IO_FILE *)NULL)))
      fclose(connection->stream);

    connection->stream = (struct _IO_FILE *)(void *)0;
    pthread_cond_signal(connection->cond_reply_ready);
    pthread_exit(NULL);
  }

  return NULL;
}

// spd_execute_command
// file libspeechd.c line 1273
signed int spd_execute_command(struct anonymous$1 *connection, char *command)
{
  char *reply;
  signed int ret;
  pthread_mutex_lock(connection->ssip_mutex);
  ret=spd_execute_command_with_reply(connection, command, &reply);
  if(!(ret == 0))
    SPD_DBG("Can't execute command in spd_execute_command");

  xfree((void *)reply);
  pthread_mutex_unlock(connection->ssip_mutex);
  return ret;
}

// spd_execute_command_with_list_reply
// file libspeechd.c line 1201
char ** spd_execute_command_with_list_reply(struct anonymous$1 *connection, char *command)
{
  char *reply = (char *)(void *)0;
  char *line;
  signed int err;
  signed int max_items = 50;
  char **result;
  signed int i;
  signed int ret;
  ret=spd_execute_command_with_reply(connection, command, &reply);
  signed int return_value_ret_ok$1;
  return_value_ret_ok$1=ret_ok(reply);
  if(return_value_ret_ok$1 == 0)
  {
    if(!(reply == ((char *)NULL)))
      free((void *)reply);

    return (char **)(void *)0;
  }

  else
  {
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)(max_items + 1) * sizeof(char *) /*8ul*/ );
    result = (char **)return_value_malloc$2;
    i = 0;
    do
    {
      line=get_param_str(reply, i + 1, &err);
      if(line == ((char *)NULL) || !(err == 0))
        break;

      result[(signed long int)i]=strdup(line);
      if(i >= max_items + -2)
      {
        max_items = max_items * 2;
        void *return_value_realloc$3;
        return_value_realloc$3=realloc((void *)result, (unsigned long int)max_items * sizeof(char *) /*8ul*/ );
        result = (char **)return_value_realloc$3;
      }

      i = i + 1;
    }
    while((_Bool)1);
    result[(signed long int)i] = (char *)(void *)0;
    free((void *)reply);
    return result;
  }
}

// spd_execute_command_with_reply
// file libspeechd.c line 1308
signed int spd_execute_command_with_reply(struct anonymous$1 *connection, char *command, char **reply)
{
  char *buf;
  signed int r;
  SPD_DBG("Inside execute_command_with_reply");
  buf=g_strdup_printf("%s\r\n", command);
  *reply=spd_send_data_wo_mutex(connection, buf, 1);
  xfree((void *)buf);
  buf = (char *)(void *)0;
  if(*reply == ((char *)NULL))
  {
    SPD_DBG("Can't send data wo mutex in spd_execute_command_with_reply");
    return -1;
  }

  else
  {
    r=ret_ok(*reply);
    if(r == 0)
      return -1;

    else
      return 0;
  }
}

// spd_execute_command_wo_mutex
// file libspeechd.c line 1291
signed int spd_execute_command_wo_mutex(struct anonymous$1 *connection, char *command)
{
  char *reply;
  signed int ret;
  SPD_DBG("Executing command wo_mutex");
  ret=spd_execute_command_with_reply(connection, command, &reply);
  if(!(ret == 0))
    SPD_DBG("Can't execute command in spd_execute_command_wo_mutex");

  xfree((void *)reply);
  return ret;
}

// spd_get_default_address
// file libspeechd.c line 170
struct anonymous$17 * spd_get_default_address(char **error)
{
  const char *env_address;
  env_address=g_getenv("SPEECHD_ADDRESS");
  char **pa;
  struct anonymous$17 *address;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$17) /*40ul*/ );
  address = (struct anonymous$17 *)return_value_malloc$1;
  _Bool tmp_if_expr$4;
  signed int return_value_g_strcmp0$2;
  if(env_address == ((const char *)NULL))
  {
    address->method = (enum anonymous$16)SPD_METHOD_UNIX_SOCKET;
    address->unix_socket_name=_get_default_unix_socket_name();
  }

  else
  {
    pa=g_strsplit(env_address, ":", 0);
    /* assertion pa */
    assert(pa != ((char **)NULL));
    signed int return_value_g_strcmp0$3;
    return_value_g_strcmp0$3=g_strcmp0(pa[(signed long int)0], "unix_socket");
    if(return_value_g_strcmp0$3 == 0)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = pa[(signed long int)0] == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
    {
      address->method = (enum anonymous$16)SPD_METHOD_UNIX_SOCKET;
      if(pa[1l] == ((char *)NULL))
        address->unix_socket_name=_get_default_unix_socket_name();

      else
        address->unix_socket_name=strdup(pa[(signed long int)1]);
    }

    else
    {
      return_value_g_strcmp0$2=g_strcmp0(pa[(signed long int)0], "inet_socket");
      if(return_value_g_strcmp0$2 == 0)
      {
        address->method = (enum anonymous$16)SPD_METHOD_INET_SOCKET;
        if(pa[1l] == ((char *)NULL))
        {
          address->inet_socket_host=strdup("127.0.0.1");
          address->inet_socket_port = 6560;
        }

        else
        {
          address->inet_socket_host=strdup(pa[(signed long int)1]);
          if(pa[2l] == ((char *)NULL))
            address->inet_socket_port = 6560;

          else
            address->inet_socket_port=atoi(pa[(signed long int)2]);
        }
      }

      else
      {
        *error=strdup("Unknown or unsupported communication method");
        free((void *)address);
        address = (struct anonymous$17 *)(void *)0;
      }
    }
    g_strfreev(pa);
  }
  return address;
}

// spd_get_message_list_fd
// file libspeechd.c line 1244
signed int spd_get_message_list_fd(struct anonymous$1 *connection, signed int target, signed int *msg_ids, char **client_names)
{
  SPD_DBG("spd_get_client_list: History is not yet implemented.");
  return -1;
}

// spd_key
// file libspeechd.c line 770
signed int spd_key(struct anonymous$1 *connection, enum anonymous$9 priority, const char *key_name)
{
  char *command_key;
  signed int ret;
  if(key_name == ((const char *)NULL))
    return -1;

  else
  {
    pthread_mutex_lock(connection->ssip_mutex);
    ret=spd_set_priority(connection, priority);
    if(!(ret == 0))
    {
      pthread_mutex_unlock(connection->ssip_mutex);
      return -1;
    }

    else
    {
      command_key=g_strdup_printf("KEY %s", key_name);
      ret=spd_execute_command_wo_mutex(connection, command_key);
      xfree((void *)command_key);
      if(!(ret == 0))
      {
        pthread_mutex_unlock(connection->ssip_mutex);
        return -1;
      }

      else
      {
        pthread_mutex_unlock(connection->ssip_mutex);
        return 0;
      }
    }
  }
}

// spd_list_modules
// file libspeechd.c line 1147
char ** spd_list_modules(struct anonymous$1 *connection)
{
  char **available_modules;
  available_modules=spd_execute_command_with_list_reply(connection, "LIST OUTPUT_MODULES");
  return available_modules;
}

// spd_list_synthesis_voices
// file libspeechd.c line 1163
struct anonymous$18 ** spd_list_synthesis_voices(struct anonymous$1 *connection)
{
  char **svoices_str;
  struct anonymous$18 **svoices;
  signed int i;
  signed int num_items;
  svoices_str=spd_execute_command_with_list_reply(connection, "LIST SYNTHESIS_VOICES");
  if(svoices_str == ((char **)NULL))
    return (struct anonymous$18 **)(void *)0;

  else
  {
    i = 0;
    for( ; !(svoices_str[(signed long int)i] == ((char *)NULL)); i = i + 1)
      ;
    num_items = i;
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)(num_items + 1) * sizeof(struct anonymous$18 *) /*8ul*/ );
    svoices = (struct anonymous$18 **)return_value_malloc$1;
    i = 0;
    for( ; num_items >= i; i = i + 1)
    {
      const char delimiters[2l] = { ' ', 0 };
      char *running;
      if(svoices_str[(signed long int)i] == ((char *)NULL))
        break;

      running=strdup(svoices_str[(signed long int)i]);
      void *return_value_malloc$2;
      return_value_malloc$2=malloc(sizeof(struct anonymous$18) /*24ul*/ );
      svoices[(signed long int)i] = (struct anonymous$18 *)return_value_malloc$2;
      svoices[(signed long int)i]->name=strsep(&running, delimiters);
      svoices[(signed long int)i]->language=strsep(&running, delimiters);
      svoices[(signed long int)i]->variant=strsep(&running, delimiters);
      /* assertion svoices[i]->name != ((void *)0) */
      assert(svoices[(signed long int)i]->name != (char *)(void *)0);
    }
    svoices[(signed long int)num_items] = (struct anonymous$18 *)(void *)0;
    return svoices;
  }
}

// spd_list_voices
// file libspeechd.c line 1156
char ** spd_list_voices(struct anonymous$1 *connection)
{
  char **voices;
  voices=spd_execute_command_with_list_reply(connection, "LIST VOICES");
  return voices;
}

// spd_open
// file ../../src/api/c/libspeechd.h line 108
struct anonymous$1 * spd_open(const char *client_name, const char *connection_name, const char *user_name, enum anonymous$3 mode)
{
  char *error;
  signed int autospawn = 1;
  struct anonymous$1 *conn;
  conn=spd_open2(client_name, connection_name, user_name, mode, (struct anonymous$17 *)(void *)0, autospawn, &error);
  if(conn == ((struct anonymous$1 *)NULL))
  {
    _init_debug();
    /* assertion error */
    assert(error != ((char *)NULL));
    SPD_DBG("Could not connect to Speech Dispatcher: %s", error);
    xfree((void *)error);
  }

  return conn;
}

// spd_open2
// file libspeechd.c line 372
struct anonymous$1 * spd_open2(const char *client_name, const char *connection_name, const char *user_name, enum anonymous$3 mode, struct anonymous$17 *address, signed int autospawn, char **error_result)
{
  struct anonymous$1 *connection;
  char *set_client_name;
  char *conn_name;
  char *usr_name;
  signed int ret;
  char tcp_no_delay = (char)1;
  signed int spawn_err;
  char *spawn_report;
  char *host_ip;
  signed int is_localhost = 1;
  struct sockaddr_in address_inet;
  struct sockaddr_un address_unix;
  struct sockaddr *sock_address;
  unsigned long int sock_address_len;
  char *resolve_error;
  _init_debug();
  signed int *return_value___errno_location$4;
  char *return_value_strerror$5;
  signed int *return_value___errno_location$6;
  char *return_value_strerror$7;
  if(client_name == ((const char *)NULL))
  {
    *error_result=strdup("ERROR: Client name not specified");
    SPD_DBG(*error_result);
    return (struct anonymous$1 *)(void *)0;
  }

  else
  {
    if(user_name == ((const char *)NULL))
    {
      const char *return_value_g_get_user_name$1;
      return_value_g_get_user_name$1=g_get_user_name();
      usr_name=strdup((char *)return_value_g_get_user_name$1);
    }

    else
      usr_name=strdup(user_name);
    if(connection_name == ((const char *)NULL))
      conn_name=strdup("main");

    else
      conn_name=strdup(connection_name);
    if(address == ((struct anonymous$17 *)NULL))
    {
      char *err = (char *)(void *)0;
      address=spd_get_default_address(&err);
      if(address == ((struct anonymous$17 *)NULL))
      {
        /* assertion err */
        assert(err != ((char *)NULL));
        *error_result = err;
        SPD_DBG(*error_result);
        return (struct anonymous$1 *)(void *)0;
      }

    }

    void *return_value_xmalloc$2;
    return_value_xmalloc$2=xmalloc(sizeof(struct anonymous$1) /*136ul*/ );
    connection = (struct anonymous$1 *)return_value_xmalloc$2;
    if((signed int)address->method == SPD_METHOD_INET_SOCKET)
    {
      host_ip=resolve_host(address->inet_socket_host, &is_localhost, &resolve_error);
      if(host_ip == ((char *)NULL))
      {
        *error_result=strdup(resolve_error);
        g_free((void *)resolve_error);
        return (struct anonymous$1 *)(void *)0;
      }

      address_inet.sin_addr.s_addr=inet_addr(host_ip);
      address_inet.sin_port=htons((unsigned short int)address->inet_socket_port);
      address_inet.sin_family = (unsigned short int)2;
      connection->socket=socket(2, 1, 0);
      sock_address = (struct sockaddr *)&address_inet;
      sock_address_len = sizeof(struct sockaddr_in) /*16ul*/ ;
    }

    else
      if((signed int)address->method == SPD_METHOD_UNIX_SOCKET)
      {
        address_unix.sun_family = (unsigned short int)1;
        strncpy(address_unix.sun_path, address->unix_socket_name, sizeof(char [108l]) /*108ul*/ );
        address_unix.sun_path[(signed long int)(sizeof(char [108l]) /*108ul*/  - (unsigned long int)1)] = (char)0;
        connection->socket=socket(1, 1, 0);
        sock_address = (struct sockaddr *)&address_unix;
        unsigned long int return_value_strlen$3;
        return_value_strlen$3=strlen((&address_unix)->sun_path);
        sock_address_len = (unsigned long int)((struct sockaddr_un *)0)->sun_path + return_value_strlen$3;
      }

      else
      {
        printf("Fatal error (libspeechd) [%s:%d]:Unsupported connection method for spd_open2()", (const void *)"libspeechd.c", 452);
        fflush(stdout);
        exit(1);
      }
    ret=connect(connection->socket, sock_address, (unsigned int)sock_address_len);
    if(ret == -1)
    {
      if(!(autospawn == 0))
      {
        spawn_err=spawn_server(address, is_localhost, &spawn_report);
        if(spawn_err == 0)
          spawn_report=g_strdup("Server successfully autospawned");

        ret=connect(connection->socket, sock_address, (unsigned int)sock_address_len);
      }

      else
        spawn_report=g_strdup("Autospawn disabled");
      if(ret == -1)
      {
        if((signed int)address->method == SPD_METHOD_INET_SOCKET)
        {
          return_value___errno_location$4=__errno_location();
          return_value_strerror$5=strerror(*return_value___errno_location$4);
          *error_result=g_strdup_printf("Error: Can't connect to %s on port %d using inet sockets: %s. Autospawn: %s", address->inet_socket_host, address->inet_socket_port, return_value_strerror$5, spawn_report);
        }

        else
          if((signed int)address->method == SPD_METHOD_UNIX_SOCKET)
          {
            return_value___errno_location$6=__errno_location();
            return_value_strerror$7=strerror(*return_value___errno_location$6);
            *error_result=g_strdup_printf("Error: Can't connect to unix socket %s: %s. Autospawn: %s", address->unix_socket_name, return_value_strerror$7, spawn_report);
          }

          else
            /* assertion 0 */
            assert(0 != 0);
        SPD_DBG(*error_result);
        close(connection->socket);
        return (struct anonymous$1 *)(void *)0;
      }

    }

    if((signed int)address->method == SPD_METHOD_INET_SOCKET)
      setsockopt(connection->socket, 6, 1, (const void *)&tcp_no_delay, (unsigned int)sizeof(signed int) /*4ul*/ );

    connection->callback_begin = (void (*)(unsigned long int, unsigned long int, enum anonymous$14))(void *)0;
    connection->callback_end = (void (*)(unsigned long int, unsigned long int, enum anonymous$14))(void *)0;
    connection->callback_im = (void (*)(unsigned long int, unsigned long int, enum anonymous$14, char *))(void *)0;
    connection->callback_pause = (void (*)(unsigned long int, unsigned long int, enum anonymous$14))(void *)0;
    connection->callback_resume = (void (*)(unsigned long int, unsigned long int, enum anonymous$14))(void *)0;
    connection->callback_cancel = (void (*)(unsigned long int, unsigned long int, enum anonymous$14))(void *)0;
    connection->mode = mode;
    connection->stream=fdopen(connection->socket, "r");
    if(connection->stream == ((struct _IO_FILE *)NULL))
    {
      printf("Fatal error (libspeechd) [%s:%d]:Can't create a stream for socket, fdopen() failed.", (const void *)"libspeechd.c", 507);
      fflush(stdout);
      exit(1);
    }

    ret=setvbuf(connection->stream, (char *)(void *)0, 2, (unsigned long int)65536);
    if(!(ret == 0))
    {
      printf("Fatal error (libspeechd) [%s:%d]:Can't set buffering, setvbuf failed.", (const void *)"libspeechd.c", 511);
      fflush(stdout);
      exit(1);
    }

    void *return_value_xmalloc$8;
    return_value_xmalloc$8=xmalloc(sizeof(union anonymous$21) /*40ul*/ );
    connection->ssip_mutex = (union anonymous$21 *)return_value_xmalloc$8;
    pthread_mutex_init(connection->ssip_mutex, (const union anonymous$19 *)(void *)0);
    if((signed int)mode == SPD_MODE_THREADED)
    {
      SPD_DBG("Initializing threads, condition variables and mutexes...");
      void *return_value_xmalloc$9;
      return_value_xmalloc$9=xmalloc(sizeof(unsigned long int) /*8ul*/ );
      connection->events_thread = (unsigned long int *)return_value_xmalloc$9;
      void *return_value_xmalloc$10;
      return_value_xmalloc$10=xmalloc(sizeof(union anonymous$20) /*48ul*/ );
      connection->cond_reply_ready = (union anonymous$20 *)return_value_xmalloc$10;
      void *return_value_xmalloc$11;
      return_value_xmalloc$11=xmalloc(sizeof(union anonymous$21) /*40ul*/ );
      connection->mutex_reply_ready = (union anonymous$21 *)return_value_xmalloc$11;
      void *return_value_xmalloc$12;
      return_value_xmalloc$12=xmalloc(sizeof(union anonymous$20) /*48ul*/ );
      connection->cond_reply_ack = (union anonymous$20 *)return_value_xmalloc$12;
      void *return_value_xmalloc$13;
      return_value_xmalloc$13=xmalloc(sizeof(union anonymous$21) /*40ul*/ );
      connection->mutex_reply_ack = (union anonymous$21 *)return_value_xmalloc$13;
      pthread_cond_init(connection->cond_reply_ready, (const union anonymous$19 *)(void *)0);
      pthread_mutex_init(connection->mutex_reply_ready, (const union anonymous$19 *)(void *)0);
      pthread_cond_init(connection->cond_reply_ack, (const union anonymous$19 *)(void *)0);
      pthread_mutex_init(connection->mutex_reply_ack, (const union anonymous$19 *)(void *)0);
      ret=pthread_create(connection->events_thread, (const union pthread_attr_t *)(void *)0, spd_events_handler, (void *)connection);
      if(!(ret == 0))
      {
        *error_result=strdup("Thread initialization failed");
        SPD_DBG(*error_result);
        return (struct anonymous$1 *)(void *)0;
      }

    }

    set_client_name=g_strdup_printf("SET SELF CLIENT_NAME \"%s:%s:%s\"", usr_name, client_name, conn_name);
    ret=spd_execute_command_wo_mutex(connection, set_client_name);
    xfree((void *)usr_name);
    xfree((void *)conn_name);
    xfree((void *)set_client_name);
    return connection;
  }
}

// spd_pause
// file libspeechd.c line 733
signed int spd_pause(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "PAUSE SELF");
  return return_value_spd_execute_command$1;
}

// spd_pause_all
// file libspeechd.c line 738
signed int spd_pause_all(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "PAUSE ALL");
  return return_value_spd_execute_command$1;
}

// spd_pause_uid
// file libspeechd.c line 743
signed int spd_pause_uid(struct anonymous$1 *connection, signed int target_uid)
{
  char command[16l];
  sprintf(command, "PAUSE %d", target_uid);
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, command);
  return return_value_spd_execute_command$1;
}

// spd_resume
// file libspeechd.c line 751
signed int spd_resume(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "RESUME SELF");
  return return_value_spd_execute_command$1;
}

// spd_resume_all
// file libspeechd.c line 756
signed int spd_resume_all(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "RESUME ALL");
  return return_value_spd_execute_command$1;
}

// spd_resume_uid
// file libspeechd.c line 761
signed int spd_resume_uid(struct anonymous$1 *connection, signed int target_uid)
{
  static char command[16l];
  sprintf(command, "RESUME %d", target_uid);
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, command);
  return return_value_spd_execute_command$1;
}

// spd_say
// file ../../src/api/c/libspeechd.h line 118
signed int spd_say(struct anonymous$1 *connection, enum anonymous$9 priority, const char *text)
{
  char *escaped_text = (char *)(void *)0;
  signed int msg_id = -1;
  signed int prepare_failed = 0;
  if(!(text == ((const char *)NULL)))
  {
    pthread_mutex_lock(connection->ssip_mutex);
    prepare_failed=spd_say_prepare(connection, priority, text, &escaped_text);
    if(prepare_failed == 0)
      msg_id=spd_say_sending(connection, escaped_text);

    xfree((void *)escaped_text);
    pthread_mutex_unlock(connection->ssip_mutex);
  }

  else
    SPD_DBG("spd_say called with a NULL argument for <text>");
  SPD_DBG("Returning from spd_say");
  return msg_id;
}

// spd_say_prepare
// file libspeechd.c line 583
static inline signed int spd_say_prepare(struct anonymous$1 *connection, enum anonymous$9 priority, const char *text, char **escaped_text)
{
  signed int ret = 0;
  SPD_DBG("Text to say is: %s", text);
  *escaped_text=escape_dot(text);
  if(*escaped_text == ((char *)NULL))
  {
    SPD_DBG("spd_say could not allocate memory.");
    ret = -1;
  }

  else
  {
    SPD_DBG("Setting priority");
    ret=spd_set_priority(connection, priority);
    if(ret == 0)
    {
      SPD_DBG("Sending SPEAK");
      ret=spd_execute_command_wo_mutex(connection, "speak");
      if(!(ret == 0))
        SPD_DBG("Error: Can't start data flow!");

    }

  }
  return ret;
}

// spd_say_sending
// file libspeechd.c line 613
static inline signed int spd_say_sending(struct anonymous$1 *connection, const char *text)
{
  signed int msg_id = -1;
  signed int err = 0;
  char *reply = (char *)(void *)0;
  char *pret = (char *)(void *)0;
  SPD_DBG("Sending data");
  pret=spd_send_data_wo_mutex(connection, text, 0);
  if(pret == ((char *)NULL))
    SPD_DBG("Can't send data wo mutex");

  else
  {
    SPD_DBG("Terminating data flow");
    err=spd_execute_command_with_reply(connection, "\r\n.", &reply);
    if(!(err == 0))
      SPD_DBG("Can't terminate data flow");

    else
    {
      msg_id=get_param_int(reply, 1, &err);
      if(!(err >= 0))
      {
        SPD_DBG("Can't determine SSIP message unique ID parameter.");
        msg_id = -1;
      }

    }
  }
  xfree((void *)reply);
  xfree((void *)pret);
  return msg_id;
}

// spd_sayf
// file libspeechd.c line 675
signed int spd_sayf(struct anonymous$1 *connection, enum anonymous$9 priority, const char *format, ...)
{
  void **args;
  char *buf;
  if(format == ((const char *)NULL))
    return -1;

  else
  {
    args = (void **)&format;
    buf=g_strdup_vprintf(format, args);
    args = ((void **)NULL);
    static signed int ret;
    ret=spd_say(connection, priority, buf);
    xfree((void *)buf);
    return ret;
  }
}

// spd_send_data
// file libspeechd.c line 1333
char * spd_send_data(struct anonymous$1 *connection, const char *message, signed int wfr)
{
  char *reply;
  pthread_mutex_lock(connection->ssip_mutex);
  if(connection->stream == ((struct _IO_FILE *)NULL))
  {
    pthread_mutex_unlock(connection->ssip_mutex);
    return (char *)(void *)0;
  }

  else
  {
    reply=spd_send_data_wo_mutex(connection, message, wfr);
    if(reply == ((char *)NULL))
    {
      SPD_DBG("Can't send data wo mutex in spd_send_data");
      pthread_mutex_unlock(connection->ssip_mutex);
      return (char *)(void *)0;
    }

    else
    {
      pthread_mutex_unlock(connection->ssip_mutex);
      return reply;
    }
  }
}

// spd_send_data_wo_mutex
// file libspeechd.c line 1351
char * spd_send_data_wo_mutex(struct anonymous$1 *connection, const char *message, signed int wfr)
{
  char *reply;
  signed int bytes;
  SPD_DBG("Inside spd_send_data_wo_mutex");
  if(connection->stream == ((struct _IO_FILE *)NULL))
    return (char *)(void *)0;

  else
  {
    if((signed int)connection->mode == SPD_MODE_THREADED)
      pthread_mutex_lock(connection->mutex_reply_ready);

    SPD_DBG("Writing to socket");
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(message);
    signed long int return_value_write$4;
    return_value_write$4=write(connection->socket, (const void *)message, return_value_strlen$3);
    if(return_value_write$4 == 0l)
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      char *return_value_strerror$2;
      return_value_strerror$2=strerror(*return_value___errno_location$1);
      SPD_DBG("Can't write to socket: %s", return_value_strerror$2);
      pthread_mutex_unlock(connection->mutex_reply_ready);
      return (char *)(void *)0;
    }

    SPD_DBG("Written to socket");
    SPD_DBG(">> : |%s|", message);
    if(!(wfr == 0))
    {
      if((signed int)connection->mode == SPD_MODE_THREADED)
      {
        SPD_DBG("Waiting for cond_reply_ready in spd_send_data_wo_mutex");
        pthread_cond_wait(connection->cond_reply_ready, connection->mutex_reply_ready);
        SPD_DBG("Condition for cond_reply_ready satisfied");
        pthread_mutex_unlock(connection->mutex_reply_ready);
        SPD_DBG("Reading the reply in spd_send_data_wo_mutex threaded mode");
        if(!(connection->reply == ((char *)NULL)))
          reply=strdup(connection->reply);

        else
        {
          SPD_DBG("Error: Can't read reply, broken socket in spd_send_data.");
          return (char *)(void *)0;
        }
        xfree((void *)connection->reply);
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen(reply);
        bytes = (signed int)return_value_strlen$5;
        if(bytes == 0)
        {
          SPD_DBG("Error: Empty reply, broken socket.");
          return (char *)(void *)0;
        }

        pthread_mutex_lock(connection->mutex_reply_ack);
        pthread_cond_signal(connection->cond_reply_ack);
        pthread_mutex_unlock(connection->mutex_reply_ack);
      }

      else
        reply=get_reply(connection);
      if(!(reply == ((char *)NULL)))
        SPD_DBG("<< : |%s|\n", reply);

    }

    else
    {
      if((signed int)connection->mode == SPD_MODE_THREADED)
        pthread_mutex_unlock(connection->mutex_reply_ready);

      SPD_DBG("<< : no reply expected");
      char *return_value_strdup$6;
      return_value_strdup$6=strdup("NO REPLY");
      return return_value_strdup$6;
    }
    if(reply == ((char *)NULL))
      SPD_DBG("Reply from get_reply is NULL in spd_send_data_wo_mutex");

    SPD_DBG("Returning from spd_send_data_wo_mutex");
    return reply;
  }
}

// spd_set_capital_letters
// file libspeechd.c line 1072
signed int spd_set_capital_letters(struct anonymous$1 *connection, enum anonymous$13 val)
{
  signed int return_value_spd_w_set_capital_letters$1;
  return_value_spd_w_set_capital_letters$1=spd_w_set_capital_letters(connection, val, "SELF");
  return return_value_spd_w_set_capital_letters$1;
}

// spd_set_capital_letters_all
// file libspeechd.c line 1072
signed int spd_set_capital_letters_all(struct anonymous$1 *connection, enum anonymous$13 val)
{
  signed int return_value_spd_w_set_capital_letters$1;
  return_value_spd_w_set_capital_letters$1=spd_w_set_capital_letters(connection, val, "ALL");
  return return_value_spd_w_set_capital_letters$1;
}

// spd_set_capital_letters_uid
// file libspeechd.c line 1072
signed int spd_set_capital_letters_uid(struct anonymous$1 *connection, enum anonymous$13 val, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_capital_letters$1;
  return_value_spd_w_set_capital_letters$1=spd_w_set_capital_letters(connection, val, who);
  return return_value_spd_w_set_capital_letters$1;
}

// spd_set_data_mode
// file ../../src/api/c/libspeechd.h line 162
signed int spd_set_data_mode(struct anonymous$1 *connection, enum anonymous$6 mode)
{
  char command[32l];
  signed int ret;
  if((signed int)mode == SPD_DATA_TEXT)
    sprintf(command, "SET SELF SSML_MODE off");

  if((signed int)mode == SPD_DATA_SSML)
    sprintf(command, "SET SELF SSML_MODE on");

  ret=spd_execute_command(connection, command);
  return ret;
}

// spd_set_language
// file libspeechd.c line 1067
signed int spd_set_language(struct anonymous$1 *connection, const char *str)
{
  signed int return_value_spd_w_set_language$1;
  return_value_spd_w_set_language$1=spd_w_set_language(connection, str, "SELF");
  return return_value_spd_w_set_language$1;
}

// spd_set_language_all
// file libspeechd.c line 1067
signed int spd_set_language_all(struct anonymous$1 *connection, const char *str)
{
  signed int return_value_spd_w_set_language$1;
  return_value_spd_w_set_language$1=spd_w_set_language(connection, str, "ALL");
  return return_value_spd_w_set_language$1;
}

// spd_set_language_uid
// file libspeechd.c line 1067
signed int spd_set_language_uid(struct anonymous$1 *connection, const char *str, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_language$1;
  return_value_spd_w_set_language$1=spd_w_set_language(connection, str, who);
  return return_value_spd_w_set_language$1;
}

// spd_set_notification
// file libspeechd.c line 1107
signed int spd_set_notification(struct anonymous$1 *connection, enum anonymous$4 notification, const char *state)
{
  signed int ret;
  signed int return_value_strcmp$1;
  if(!((signed int)connection->mode == SPD_MODE_THREADED))
    return -1;

  else
    if(state == ((const char *)NULL))
    {
      SPD_DBG("Requested state is NULL");
      return -1;
    }

    else
    {
      signed int return_value_strcmp$2;
      return_value_strcmp$2=strcmp(state, "on");
      if(!(return_value_strcmp$2 == 0))
      {
        return_value_strcmp$1=strcmp(state, "off");
        if(return_value_strcmp$1 == 0)
          goto __CPROVER_DUMP_L3;

        SPD_DBG("Invalid argument for spd_set_notification: %s", state);
        return -1;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        pthread_mutex_lock(connection->ssip_mutex);
        static char command[64l];
        if(!((SPD_INDEX_MARKS & (signed int)notification) == 0))
        {
          sprintf(command, "SET SELF NOTIFICATION index_marks %s", state);
          ret=spd_execute_command_wo_mutex(connection, command);
          if(ret >= 0)
            goto __CPROVER_DUMP_L4;

          pthread_mutex_unlock(connection->ssip_mutex);
          return -1;
        }

        else
        {

        __CPROVER_DUMP_L4:
          ;
          if(!((SPD_BEGIN & (signed int)notification) == 0))
          {
            sprintf(command, "SET SELF NOTIFICATION begin %s", state);
            ret=spd_execute_command_wo_mutex(connection, command);
            if(ret >= 0)
              goto __CPROVER_DUMP_L5;

            pthread_mutex_unlock(connection->ssip_mutex);
            return -1;
          }

          else
          {

          __CPROVER_DUMP_L5:
            ;
            if(!((SPD_END & (signed int)notification) == 0))
            {
              sprintf(command, "SET SELF NOTIFICATION end %s", state);
              ret=spd_execute_command_wo_mutex(connection, command);
              if(ret >= 0)
                goto __CPROVER_DUMP_L6;

              pthread_mutex_unlock(connection->ssip_mutex);
              return -1;
            }

            else
            {

            __CPROVER_DUMP_L6:
              ;
              if(!((SPD_CANCEL & (signed int)notification) == 0))
              {
                sprintf(command, "SET SELF NOTIFICATION cancel %s", state);
                ret=spd_execute_command_wo_mutex(connection, command);
                if(ret >= 0)
                  goto __CPROVER_DUMP_L7;

                pthread_mutex_unlock(connection->ssip_mutex);
                return -1;
              }

              else
              {

              __CPROVER_DUMP_L7:
                ;
                if(!((SPD_PAUSE & (signed int)notification) == 0))
                {
                  sprintf(command, "SET SELF NOTIFICATION pause %s", state);
                  ret=spd_execute_command_wo_mutex(connection, command);
                  if(ret >= 0)
                    goto __CPROVER_DUMP_L8;

                  pthread_mutex_unlock(connection->ssip_mutex);
                  return -1;
                }

                else
                {

                __CPROVER_DUMP_L8:
                  ;
                  if(!((SPD_RESUME & (signed int)notification) == 0))
                  {
                    sprintf(command, "SET SELF NOTIFICATION resume %s", state);
                    ret=spd_execute_command_wo_mutex(connection, command);
                    if(ret >= 0)
                      goto __CPROVER_DUMP_L9;

                    pthread_mutex_unlock(connection->ssip_mutex);
                    return -1;
                  }

                  else
                  {

                  __CPROVER_DUMP_L9:
                    ;
                    if(!((SPD_ALL & (signed int)notification) == 0))
                    {
                      sprintf(command, "SET SELF NOTIFICATION all %s", state);
                      ret=spd_execute_command_wo_mutex(connection, command);
                      if(ret >= 0)
                        goto __CPROVER_DUMP_L10;

                      pthread_mutex_unlock(connection->ssip_mutex);
                      return -1;
                    }

                    else
                    {

                    __CPROVER_DUMP_L10:
                      ;
                      pthread_mutex_unlock(connection->ssip_mutex);
                      return 0;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
}

// spd_set_notification_off
// file libspeechd.c line 1090
signed int spd_set_notification_off(struct anonymous$1 *connection, enum anonymous$4 notification)
{
  signed int return_value_spd_set_notification$1;
  if((signed int)connection->mode == SPD_MODE_THREADED)
  {
    return_value_spd_set_notification$1=spd_set_notification(connection, notification, "off");
    return return_value_spd_set_notification$1;
  }

  else
    return -1;
}

// spd_set_notification_on
// file ../../src/api/c/libspeechd.h line 164
signed int spd_set_notification_on(struct anonymous$1 *connection, enum anonymous$4 notification)
{
  signed int return_value_spd_set_notification$1;
  if((signed int)connection->mode == SPD_MODE_THREADED)
  {
    return_value_spd_set_notification$1=spd_set_notification(connection, notification, "on");
    return return_value_spd_set_notification$1;
  }

  else
    return -1;
}

// spd_set_output_module
// file libspeechd.c line 1068
signed int spd_set_output_module(struct anonymous$1 *connection, const char *str)
{
  signed int return_value_spd_w_set_output_module$1;
  return_value_spd_w_set_output_module$1=spd_w_set_output_module(connection, str, "SELF");
  return return_value_spd_w_set_output_module$1;
}

// spd_set_output_module_all
// file libspeechd.c line 1068
signed int spd_set_output_module_all(struct anonymous$1 *connection, const char *str)
{
  signed int return_value_spd_w_set_output_module$1;
  return_value_spd_w_set_output_module$1=spd_w_set_output_module(connection, str, "ALL");
  return return_value_spd_w_set_output_module$1;
}

// spd_set_output_module_uid
// file libspeechd.c line 1068
signed int spd_set_output_module_uid(struct anonymous$1 *connection, const char *str, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_output_module$1;
  return_value_spd_w_set_output_module$1=spd_w_set_output_module(connection, str, who);
  return return_value_spd_w_set_output_module$1;
}

// spd_set_priority
// file libspeechd.c line 1430
static signed int spd_set_priority(struct anonymous$1 *connection, enum anonymous$9 priority)
{
  static char p_name[16l];
  switch((signed int)priority)
  {
    case SPD_IMPORTANT:
    {
      strcpy(p_name, "IMPORTANT");
      break;
    }
    case SPD_MESSAGE:
    {
      strcpy(p_name, "MESSAGE");
      break;
    }
    case SPD_TEXT:
    {
      strcpy(p_name, "TEXT");
      break;
    }
    case SPD_NOTIFICATION:
    {
      strcpy(p_name, "NOTIFICATION");
      break;
    }
    case SPD_PROGRESS:
    {
      strcpy(p_name, "PROGRESS");
      break;
    }
    default:
    {
      SPD_DBG("Error: Can't set priority! Incorrect value.");
      return -1;
    }
  }
  static char command[64l];
  sprintf(command, "SET SELF PRIORITY %s", (const void *)p_name);
  signed int return_value_spd_execute_command_wo_mutex$1;
  return_value_spd_execute_command_wo_mutex$1=spd_execute_command_wo_mutex(connection, command);
  return return_value_spd_execute_command_wo_mutex$1;
}

// spd_set_punctuation
// file libspeechd.c line 1071
signed int spd_set_punctuation(struct anonymous$1 *connection, enum anonymous$8 val)
{
  signed int return_value_spd_w_set_punctuation$1;
  return_value_spd_w_set_punctuation$1=spd_w_set_punctuation(connection, val, "SELF");
  return return_value_spd_w_set_punctuation$1;
}

// spd_set_punctuation_all
// file libspeechd.c line 1071
signed int spd_set_punctuation_all(struct anonymous$1 *connection, enum anonymous$8 val)
{
  signed int return_value_spd_w_set_punctuation$1;
  return_value_spd_w_set_punctuation$1=spd_w_set_punctuation(connection, val, "ALL");
  return return_value_spd_w_set_punctuation$1;
}

// spd_set_punctuation_uid
// file libspeechd.c line 1071
signed int spd_set_punctuation_uid(struct anonymous$1 *connection, enum anonymous$8 val, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_punctuation$1;
  return_value_spd_w_set_punctuation$1=spd_w_set_punctuation(connection, val, who);
  return return_value_spd_w_set_punctuation$1;
}

// spd_set_spelling
// file libspeechd.c line 1073
signed int spd_set_spelling(struct anonymous$1 *connection, enum anonymous$2 val)
{
  signed int return_value_spd_w_set_spelling$1;
  return_value_spd_w_set_spelling$1=spd_w_set_spelling(connection, val, "SELF");
  return return_value_spd_w_set_spelling$1;
}

// spd_set_spelling_all
// file libspeechd.c line 1073
signed int spd_set_spelling_all(struct anonymous$1 *connection, enum anonymous$2 val)
{
  signed int return_value_spd_w_set_spelling$1;
  return_value_spd_w_set_spelling$1=spd_w_set_spelling(connection, val, "ALL");
  return return_value_spd_w_set_spelling$1;
}

// spd_set_spelling_uid
// file libspeechd.c line 1073
signed int spd_set_spelling_uid(struct anonymous$1 *connection, enum anonymous$2 val, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_spelling$1;
  return_value_spd_w_set_spelling$1=spd_w_set_spelling(connection, val, who);
  return return_value_spd_w_set_spelling$1;
}

// spd_set_synthesis_voice
// file libspeechd.c line 1069
signed int spd_set_synthesis_voice(struct anonymous$1 *connection, const char *str)
{
  signed int return_value_spd_w_set_synthesis_voice$1;
  return_value_spd_w_set_synthesis_voice$1=spd_w_set_synthesis_voice(connection, str, "SELF");
  return return_value_spd_w_set_synthesis_voice$1;
}

// spd_set_synthesis_voice_all
// file libspeechd.c line 1069
signed int spd_set_synthesis_voice_all(struct anonymous$1 *connection, const char *str)
{
  signed int return_value_spd_w_set_synthesis_voice$1;
  return_value_spd_w_set_synthesis_voice$1=spd_w_set_synthesis_voice(connection, str, "ALL");
  return return_value_spd_w_set_synthesis_voice$1;
}

// spd_set_synthesis_voice_uid
// file libspeechd.c line 1069
signed int spd_set_synthesis_voice_uid(struct anonymous$1 *connection, const char *str, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_synthesis_voice$1;
  return_value_spd_w_set_synthesis_voice$1=spd_w_set_synthesis_voice(connection, str, who);
  return return_value_spd_w_set_synthesis_voice$1;
}

// spd_set_voice_pitch
// file libspeechd.c line 1064
signed int spd_set_voice_pitch(struct anonymous$1 *connection, signed int val)
{
  signed int return_value_spd_w_set_voice_pitch$1;
  return_value_spd_w_set_voice_pitch$1=spd_w_set_voice_pitch(connection, val, "SELF");
  return return_value_spd_w_set_voice_pitch$1;
}

// spd_set_voice_pitch_all
// file libspeechd.c line 1064
signed int spd_set_voice_pitch_all(struct anonymous$1 *connection, signed int val)
{
  signed int return_value_spd_w_set_voice_pitch$1;
  return_value_spd_w_set_voice_pitch$1=spd_w_set_voice_pitch(connection, val, "ALL");
  return return_value_spd_w_set_voice_pitch$1;
}

// spd_set_voice_pitch_uid
// file libspeechd.c line 1064
signed int spd_set_voice_pitch_uid(struct anonymous$1 *connection, signed int val, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_voice_pitch$1;
  return_value_spd_w_set_voice_pitch$1=spd_w_set_voice_pitch(connection, val, who);
  return return_value_spd_w_set_voice_pitch$1;
}

// spd_set_voice_rate
// file libspeechd.c line 1063
signed int spd_set_voice_rate(struct anonymous$1 *connection, signed int val)
{
  signed int return_value_spd_w_set_voice_rate$1;
  return_value_spd_w_set_voice_rate$1=spd_w_set_voice_rate(connection, val, "SELF");
  return return_value_spd_w_set_voice_rate$1;
}

// spd_set_voice_rate_all
// file libspeechd.c line 1063
signed int spd_set_voice_rate_all(struct anonymous$1 *connection, signed int val)
{
  signed int return_value_spd_w_set_voice_rate$1;
  return_value_spd_w_set_voice_rate$1=spd_w_set_voice_rate(connection, val, "ALL");
  return return_value_spd_w_set_voice_rate$1;
}

// spd_set_voice_rate_uid
// file libspeechd.c line 1063
signed int spd_set_voice_rate_uid(struct anonymous$1 *connection, signed int val, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_voice_rate$1;
  return_value_spd_w_set_voice_rate$1=spd_w_set_voice_rate(connection, val, who);
  return return_value_spd_w_set_voice_rate$1;
}

// spd_set_voice_type
// file libspeechd.c line 1074
signed int spd_set_voice_type(struct anonymous$1 *connection, enum anonymous$5 val)
{
  signed int return_value_spd_w_set_voice_type$1;
  return_value_spd_w_set_voice_type$1=spd_w_set_voice_type(connection, val, "SELF");
  return return_value_spd_w_set_voice_type$1;
}

// spd_set_voice_type_all
// file libspeechd.c line 1074
signed int spd_set_voice_type_all(struct anonymous$1 *connection, enum anonymous$5 val)
{
  signed int return_value_spd_w_set_voice_type$1;
  return_value_spd_w_set_voice_type$1=spd_w_set_voice_type(connection, val, "ALL");
  return return_value_spd_w_set_voice_type$1;
}

// spd_set_voice_type_uid
// file libspeechd.c line 1074
signed int spd_set_voice_type_uid(struct anonymous$1 *connection, enum anonymous$5 val, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_voice_type$1;
  return_value_spd_w_set_voice_type$1=spd_w_set_voice_type(connection, val, who);
  return return_value_spd_w_set_voice_type$1;
}

// spd_set_volume
// file libspeechd.c line 1065
signed int spd_set_volume(struct anonymous$1 *connection, signed int val)
{
  signed int return_value_spd_w_set_volume$1;
  return_value_spd_w_set_volume$1=spd_w_set_volume(connection, val, "SELF");
  return return_value_spd_w_set_volume$1;
}

// spd_set_volume_all
// file libspeechd.c line 1065
signed int spd_set_volume_all(struct anonymous$1 *connection, signed int val)
{
  signed int return_value_spd_w_set_volume$1;
  return_value_spd_w_set_volume$1=spd_w_set_volume(connection, val, "ALL");
  return return_value_spd_w_set_volume$1;
}

// spd_set_volume_uid
// file libspeechd.c line 1065
signed int spd_set_volume_uid(struct anonymous$1 *connection, signed int val, unsigned int uid)
{
  char who[8l];
  sprintf(who, "%d", uid);
  signed int return_value_spd_w_set_volume$1;
  return_value_spd_w_set_volume$1=spd_w_set_volume(connection, val, who);
  return return_value_spd_w_set_volume$1;
}

// spd_sound_icon
// file libspeechd.c line 852
signed int spd_sound_icon(struct anonymous$1 *connection, enum anonymous$9 priority, const char *icon_name)
{
  char *command;
  signed int ret;
  if(icon_name == ((const char *)NULL))
    return -1;

  else
  {
    pthread_mutex_lock(connection->ssip_mutex);
    ret=spd_set_priority(connection, priority);
    if(!(ret == 0))
    {
      pthread_mutex_unlock(connection->ssip_mutex);
      return -1;
    }

    else
    {
      command=g_strdup_printf("SOUND_ICON %s", icon_name);
      ret=spd_execute_command_wo_mutex(connection, command);
      xfree((void *)command);
      if(!(ret == 0))
      {
        pthread_mutex_unlock(connection->ssip_mutex);
        return -1;
      }

      else
      {
        pthread_mutex_unlock(connection->ssip_mutex);
        return 0;
      }
    }
  }
}

// spd_stop
// file libspeechd.c line 697
signed int spd_stop(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "STOP SELF");
  return return_value_spd_execute_command$1;
}

// spd_stop_all
// file libspeechd.c line 702
signed int spd_stop_all(struct anonymous$1 *connection)
{
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, "STOP ALL");
  return return_value_spd_execute_command$1;
}

// spd_stop_uid
// file libspeechd.c line 707
signed int spd_stop_uid(struct anonymous$1 *connection, signed int target_uid)
{
  static char command[16l];
  sprintf(command, "STOP %d", target_uid);
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, command);
  return return_value_spd_execute_command$1;
}

// spd_w_set_capital_letters
// file libspeechd.c line 898
signed int spd_w_set_capital_letters(struct anonymous$1 *connection, enum anonymous$13 type, const char *who)
{
  char command[64l];
  signed int ret;
  if((signed int)type == SPD_CAP_NONE)
    sprintf(command, "SET %s CAP_LET_RECOGN none", who);

  if((signed int)type == SPD_CAP_SPELL)
    sprintf(command, "SET %s CAP_LET_RECOGN spell", who);

  if((signed int)type == SPD_CAP_ICON)
    sprintf(command, "SET %s CAP_LET_RECOGN icon", who);

  ret=spd_execute_command(connection, command);
  return ret;
}

// spd_w_set_language
// file libspeechd.c line 1067
signed int spd_w_set_language(struct anonymous$1 *connection, const char *str, const char *who)
{
  char *command;
  signed int ret;
  if(str == ((const char *)NULL))
    return -1;

  else
  {
    command=g_strdup_printf("SET %s language %s", who, str);
    ret=spd_execute_command(connection, command);
    xfree((void *)command);
    return ret;
  }
}

// spd_w_set_output_module
// file libspeechd.c line 1068
signed int spd_w_set_output_module(struct anonymous$1 *connection, const char *str, const char *who)
{
  char *command;
  signed int ret;
  if(str == ((const char *)NULL))
    return -1;

  else
  {
    command=g_strdup_printf("SET %s output_module %s", who, str);
    ret=spd_execute_command(connection, command);
    xfree((void *)command);
    return ret;
  }
}

// spd_w_set_punctuation
// file libspeechd.c line 879
signed int spd_w_set_punctuation(struct anonymous$1 *connection, enum anonymous$8 type, const char *who)
{
  char command[32l];
  signed int ret;
  if((signed int)type == SPD_PUNCT_ALL)
    sprintf(command, "SET %s PUNCTUATION all", who);

  if((signed int)type == SPD_PUNCT_NONE)
    sprintf(command, "SET %s PUNCTUATION none", who);

  if((signed int)type == SPD_PUNCT_SOME)
    sprintf(command, "SET %s PUNCTUATION some", who);

  ret=spd_execute_command(connection, command);
  return ret;
}

// spd_w_set_spelling
// file libspeechd.c line 917
signed int spd_w_set_spelling(struct anonymous$1 *connection, enum anonymous$2 type, const char *who)
{
  char command[32l];
  signed int ret;
  if((signed int)type == SPD_SPELL_ON)
    sprintf(command, "SET %s SPELLING on", who);

  if((signed int)type == SPD_SPELL_OFF)
    sprintf(command, "SET %s SPELLING off", who);

  ret=spd_execute_command(connection, command);
  return ret;
}

// spd_w_set_synthesis_voice
// file libspeechd.c line 1069
signed int spd_w_set_synthesis_voice(struct anonymous$1 *connection, const char *str, const char *who)
{
  char *command;
  signed int ret;
  if(str == ((const char *)NULL))
    return -1;

  else
  {
    command=g_strdup_printf("SET %s synthesis_voice %s", who, str);
    ret=spd_execute_command(connection, command);
    xfree((void *)command);
    return ret;
  }
}

// spd_w_set_voice_pitch
// file libspeechd.c line 1064
signed int spd_w_set_voice_pitch(struct anonymous$1 *connection, signed int val, const char *who)
{
  if(!(val >= -100) || val >= 101)
    return -1;

  else
  {
    static char command[64l];
    sprintf(command, "SET %s PITCH %d", who, val);
    signed int return_value_spd_execute_command$1;
    return_value_spd_execute_command$1=spd_execute_command(connection, command);
    return return_value_spd_execute_command$1;
  }
}

// spd_w_set_voice_rate
// file libspeechd.c line 1063
signed int spd_w_set_voice_rate(struct anonymous$1 *connection, signed int val, const char *who)
{
  if(!(val >= -100) || val >= 101)
    return -1;

  else
  {
    static char command[64l];
    sprintf(command, "SET %s RATE %d", who, val);
    signed int return_value_spd_execute_command$1;
    return_value_spd_execute_command$1=spd_execute_command(connection, command);
    return return_value_spd_execute_command$1;
  }
}

// spd_w_set_voice_type
// file libspeechd.c line 949
signed int spd_w_set_voice_type(struct anonymous$1 *connection, enum anonymous$5 type, const char *who)
{
  static char command[64l];
  switch((signed int)type)
  {
    case SPD_MALE1:
    {
      sprintf(command, "SET %s VOICE MALE1", who);
      break;
    }
    case SPD_MALE2:
    {
      sprintf(command, "SET %s VOICE MALE2", who);
      break;
    }
    case SPD_MALE3:
    {
      sprintf(command, "SET %s VOICE MALE3", who);
      break;
    }
    case SPD_FEMALE1:
    {
      sprintf(command, "SET %s VOICE FEMALE1", who);
      break;
    }
    case SPD_FEMALE2:
    {
      sprintf(command, "SET %s VOICE FEMALE2", who);
      break;
    }
    case SPD_FEMALE3:
    {
      sprintf(command, "SET %s VOICE FEMALE3", who);
      break;
    }
    case SPD_CHILD_MALE:
    {
      sprintf(command, "SET %s VOICE CHILD_MALE", who);
      break;
    }
    case SPD_CHILD_FEMALE:
    {
      sprintf(command, "SET %s VOICE CHILD_FEMALE", who);
      break;
    }
    default:
      return -1;
  }
  signed int return_value_spd_execute_command$1;
  return_value_spd_execute_command$1=spd_execute_command(connection, command);
  return return_value_spd_execute_command$1;
}

// spd_w_set_volume
// file libspeechd.c line 1065
signed int spd_w_set_volume(struct anonymous$1 *connection, signed int val, const char *who)
{
  if(!(val >= -100) || val >= 101)
    return -1;

  else
  {
    static char command[64l];
    sprintf(command, "SET %s VOLUME %d", who, val);
    signed int return_value_spd_execute_command$1;
    return_value_spd_execute_command$1=spd_execute_command(connection, command);
    return return_value_spd_execute_command$1;
  }
}

// spd_wchar
// file libspeechd.c line 824
signed int spd_wchar(struct anonymous$1 *connection, enum anonymous$9 priority, signed int wcharacter)
{
  char character[8l];
  signed int ret;
  pthread_mutex_lock(connection->ssip_mutex);
  unsigned long int return_value_wcrtomb$1;
  return_value_wcrtomb$1=wcrtomb(character, wcharacter, (struct anonymous$11 *)(void *)0);
  ret = (signed int)return_value_wcrtomb$1;
  if(!(ret >= 1))
  {
    pthread_mutex_unlock(connection->ssip_mutex);
    return -1;
  }

  else
  {
    ret=spd_set_priority(connection, priority);
    if(!(ret == 0))
    {
      pthread_mutex_unlock(connection->ssip_mutex);
      return -1;
    }

    else
    {
      /* assertion character != ((void *)0) */
      assert(character != (char *)(void *)0);
      static char command[16l];
      sprintf(command, "CHAR %s", (const void *)character);
      ret=spd_execute_command_wo_mutex(connection, command);
      if(!(ret == 0))
      {
        pthread_mutex_unlock(connection->ssip_mutex);
        return -1;
      }

      else
      {
        pthread_mutex_unlock(connection->ssip_mutex);
        return 0;
      }
    }
  }
}

// xfree
// file libspeechd.c line 1763
static void xfree(void *ptr)
{
  if(!(ptr == NULL))
    free(ptr);

}

// xmalloc
// file libspeechd.c line 1750
static void * xmalloc(unsigned long int bytes)
{
  void *mem;
  mem=malloc(bytes);
  if(mem == NULL)
  {
    printf("Fatal error (libspeechd) [%s:%d]:Not enough memmory!", (const void *)"libspeechd.c", 1756);
    fflush(stdout);
    exit(1);
    exit(1);
  }

  return mem;
}

