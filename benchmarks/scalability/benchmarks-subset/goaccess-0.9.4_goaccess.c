// #anon_enum$SPN_RUN=0$SPN_END=1
// file src/ui.h line 266
enum anonymous$7 { SPN_RUN=0, SPN_END=1 };

// #anon_enum$TYPE_IPINV=0$TYPE_IPV4=1$TYPE_IPV6=2
// file src/commons.h line 79
enum anonymous$23 { TYPE_IPINV=0, TYPE_IPV4=1, TYPE_IPV6=2 };

// tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 121
struct anonymous$19;

// tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 107
struct anonymous$17;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$10;

// tag-#anon#ST[S16'id'||U16'$pad0'||S32'x'||S32'y'||S32'z'||U64'bstate'|]
// file /usr/include/curses.h line 1606
struct anonymous$11;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous;

// tag-#anon#ST[S32'rm_so'||S32'rm_eo'|]
// file /usr/include/regex.h line 452
struct anonymous$24;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 74
struct anonymous$13;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 97
struct anonymous$16;

// tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 89
struct anonymous$15;

// tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 62
struct anonymous$12;

// tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 81
struct anonymous$14;

// tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 114
struct anonymous$18;

// tag-#anon#ST[U64'attr'||ARR5{S32}$S32$'chars'||U32'$pad0'|]
// file /usr/include/curses.h line 397
struct anonymous$25;

// tag-#anon#UN[*{S8}$S8$'sbw'||U64'nbw'|]
// file src/commons.h line 143
union anonymous$0;

// tag-#anon#UN[*{S8}$S8$'sts'||U64'nts'|]
// file src/commons.h line 151
union anonymous$1;

// tag-#anon#UN[*{V(S32)->V}$V(S32)->V$'sa_handler'||*{V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V}$V(S32|*{SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#}$SYM#tag-#anon#ST[S32'si_signo'||S32'si_errno'||S32'si_code'||U32'$pad0'||SYM#tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]#'_sifields'|]#$|*{V}$V$)->V$'sa_sigaction'|]
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 28
union anonymous$9;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'|]
// file /usr/include/netinet/in.h line 211
union anonymous$8;

// tag-#anon#UN[ARR16{U8}$U8$'__u6_addr8'||ARR8{U16}$U16$'__u6_addr16'||ARR4{U32}$U32$'__u6_addr32'|]
// file /usr/include/netinet/in.h line 211
union anonymous$2;

// tag-#anon#UN[ARR28{S32}$S32$'_pad'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'|]#'_kill'||SYM#tag-#anon#ST[S32'si_tid'||S32'si_overrun'||SYM#tag-sigval#'si_sigval'|]#'_timer'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||SYM#tag-sigval#'si_sigval'|]#'_rt'||SYM#tag-#anon#ST[S32'si_pid'||U32'si_uid'||S32'si_status'||U32'$pad0'||S64'si_utime'||S64'si_stime'|]#'_sigchld'||SYM#tag-#anon#ST[*{V}$V$'si_addr'||S16'si_addr_lsb'||U48'$pad0'|]#'_sigfault'||SYM#tag-#anon#ST[S64'si_band'||S32'si_fd'||U32'$pad0'|]#'_sigpoll'||SYM#tag-#anon#ST[*{V}$V$'_call_addr'||S32'_syscall'||U32'_arch'|]#'_sigsys'|]
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 69
union anonymous$20;

// tag-#anon#UN[ARR4{S8}$S8$'__size'||S32'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 130
union anonymous$3;

// tag-#anon#UN[S32'metro_code'||S32'dma_code'|]
// file /usr/include/GeoIPCity.h line 41
union anonymous$22;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$4;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$5;

// tag-CSTM_COLORS
// file src/color.h line 26
enum CSTM_COLORS { COLOR_NORMAL=0, COLOR_MTRC_HITS=1, COLOR_MTRC_VISITORS=2, COLOR_MTRC_DATA=3, COLOR_MTRC_BW=4, COLOR_MTRC_AVGTS=5, COLOR_MTRC_CUMTS=6, COLOR_MTRC_MAXTS=7, COLOR_MTRC_PROT=8, COLOR_MTRC_MTHD=9, COLOR_MTRC_PERC=10, COLOR_MTRC_PERC_MAX=11, COLOR_PANEL_COLS=12, COLOR_BARS=13, COLOR_ERROR=14, COLOR_SELECTED=15, COLOR_PANEL_ACTIVE=16, COLOR_PANEL_HEADER=17, COLOR_PANEL_DESC=18, COLOR_OVERALL_LBLS=19, COLOR_OVERALL_VALS=20, COLOR_OVERALL_PATH=21, COLOR_ACTIVE_LABEL=22, COLOR_BG=23, COLOR_DEFAULT=24, COLOR_PROGRESS=25 };

// tag-Field_
// file src/ui.c line 88
struct Field_;

// tag-GAgentItem_
// file src/commons.h line 218
struct GAgentItem_;

// tag-GAgents_
// file src/commons.h line 223
struct GAgents_;

// tag-GColorPair_
// file src/color.h line 65
struct GColorPair_;

// tag-GColors_
// file src/color.h line 72
struct GColors_;

// tag-GConf_
// file ./src/settings.h line 80
struct GConf_;

// tag-GDashData_
// file src/gdashboard.h line 81
struct GDashData_;

// tag-GDashModule_
// file src/gdashboard.h line 87
struct GDashModule_;

// tag-GDashRender_
// file src/gdashboard.h line 72
struct GDashRender_;

// tag-GDash_
// file src/gdashboard.h line 108
struct GDash_;

// tag-GDataMap_
// file src/commons.h line 211
struct GDataMap_;

// tag-GDnsQueue_
// file src/gdns.h line 35
struct GDnsQueue_;

// tag-GDnsThread_
// file src/gdns.h line 27
struct GDnsThread_;

// tag-GEnum_
// file src/commons.h line 205
struct GEnum_;

// tag-GFind_
// file src/ui.h line 227
struct GFind_;

// tag-GHolderItem_
// file src/commons.h line 189
struct GHolderItem_;

// tag-GHolder_
// file src/commons.h line 195
struct GHolder_;

// tag-GItem_
// file src/gmenu.h line 46
struct GItem_;

// tag-GKeyData_
// file src/parser.h line 97
struct GKeyData_;

// tag-GLogItem_
// file src/parser.h line 33
struct GLogItem_;

// tag-GLog_
// file src/parser.h line 67
struct GLog_;

// tag-GMenu_$link1
// file src/gmenu.h line 45
struct GMenu_$0;

// tag-GMenu_$link2
// file src/gmenu.h line 45
struct GMenu_;

// tag-GMetrics
// file src/commons.h line 128
struct GMetrics;

// tag-GOutput_
// file src/ui.h line 275
struct GOutput_;

// tag-GPanel_
// file src/csv.c line 47
struct GPanel_$0;

// tag-GPanel_$link1
// file src/gdashboard.c line 53
struct GPanel_;

// tag-GPanel_$link2
// file src/output.c line 49
struct GPanel_$1;

// tag-GParse_
// file src/parser.h line 111
struct GParse_;

// tag-GPreConfDate_
// file src/settings.h line 54
struct GPreConfDate_;

// tag-GPreConfLog_
// file src/settings.h line 62
struct GPreConfLog_;

// tag-GPreConfTime_
// file src/settings.h line 47
struct GPreConfTime_;

// tag-GRawDataItem_
// file src/parser.h line 80
struct GRawDataItem_;

// tag-GRawData_
// file src/parser.h line 86
struct GRawData_;

// tag-GSLList_
// file src/commons.h line 230
struct GSLList_;

// tag-GScrollModule_
// file src/ui.h line 239
struct GScrollModule_;

// tag-GScroll_
// file src/ui.h line 245
struct GScroll_;

// tag-GSortField_
// file src/sort.h line 38
enum GSortField_ { SORT_BY_HITS=0, SORT_BY_VISITORS=1, SORT_BY_DATA=2, SORT_BY_BW=3, SORT_BY_AVGTS=4, SORT_BY_CUMTS=5, SORT_BY_MAXTS=6, SORT_BY_PROT=7, SORT_BY_MTHD=8 };

// tag-GSortOrder_
// file src/sort.h line 51
enum GSortOrder_ { SORT_ASC=0, SORT_DESC=1 };

// tag-GSort_
// file src/sort.h line 57
struct GSort_;

// tag-GSpinner_
// file src/ui.h line 253
struct GSpinner_$0;

// tag-GSpinner_$link1
// file src/ui.h line 253
struct GSpinner_$1;

// tag-GSpinner_$link2
// file src/ui.h line 253
struct GSpinner_;

// tag-GStorageMetrics_
// file src/gstorage.h line 26
struct GStorageMetrics_;

// tag-GStorage_
// file src/gstorage.h line 125
struct GStorage_;

// tag-GSubItem_
// file src/commons.h line 174
struct GSubItem_;

// tag-GSubList_
// file src/commons.h line 182
struct GSubList_;

// tag-GeoIPRecordTag
// file /usr/include/GeoIPCity.h line 32
struct GeoIPRecordTag;

// tag-GeoIPTag
// file /usr/include/GeoIP.h line 61
struct GeoIPTag;

// tag-METRICS
// file src/commons.h line 93
enum METRICS { MTRC_KEYMAP=0, MTRC_ROOTMAP=1, MTRC_DATAMAP=2, MTRC_UNIQMAP=3, MTRC_HITS=4, MTRC_VISITORS=5, MTRC_BW=6, MTRC_CUMTS=7, MTRC_MAXTS=8, MTRC_METHODS=9, MTRC_PROTOCOLS=10, MTRC_AGENTS=11 };

// tag-MODULES
// file src/commons.h line 109
enum MODULES { VISITORS=0, REQUESTS=1, REQUESTS_STATIC=2, NOT_FOUND=3, HOSTS=4, OS=5, BROWSERS=6, VISIT_TIMES=7, REFERRERS=8, REFERRING_SITES=9, KEYPHRASES=10, GEO_LOCATION=11, STATUS_CODES=12 };

// tag-_GHashTable
// file /usr/include/glib-2.0/glib/ghash.h line 37
struct _GHashTable;

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

// tag-_win_st
// file /usr/include/curses.h line 365
struct _win_st$2;

// tag-_win_st$link1
// file /usr/include/curses.h line 365
struct _win_st$0;

// tag-_win_st$link2
// file /usr/include/curses.h line 365
struct _win_st$1;

// tag-_win_st$link3
// file /usr/include/curses.h line 365
struct _win_st;

// tag-in6_addr
// file /usr/include/netinet/in.h line 209
struct in6_addr;

// tag-in6_addr$link1
// file /usr/include/netinet/in.h line 209
struct in6_addr$0;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-ldat
// file /usr/include/curses.h line 412
struct ldat;

// tag-option
// file /usr/include/getopt.h line 104
struct option;

// tag-pdat
// file /usr/include/curses.h line 452
struct pdat;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-re_pattern_buffer
// file /usr/include/regex.h line 357
struct re_pattern_buffer;

// tag-sigaction
// file /usr/include/x86_64-linux-gnu/bits/sigaction.h line 24
struct sigaction;

// tag-sigval
// file /usr/include/x86_64-linux-gnu/bits/siginfo.h line 32
union sigval;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockaddr_in6
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6;

// tag-sockaddr_in6$link1
// file /usr/include/netinet/in.h line 252
struct sockaddr_in6$0;

// tag-stat
// file /usr/include/x86_64-linux-gnu/bits/stat.h line 46
struct stat;

// tag-timespec
// file /usr/include/time.h line 120
struct timespec;

// tag-tm
// file /usr/include/time.h line 133
struct tm$0;

// tag-tm$link1
// file /usr/include/time.h line 133
struct tm;

// tag-tm$link2
// file /usr/include/time.h line 133
struct tm$2;

// tag-tm$link3
// file /usr/include/time.h line 133
struct tm$1;

#ifndef NULL
#define NULL ((void*)0)
#endif

// GeoIPRecord_delete
// file /usr/include/GeoIPCity.h line 67
void GeoIPRecord_delete(struct GeoIPRecordTag *);
// GeoIP_code_by_id
// file /usr/include/GeoIP.h line 323
const char * GeoIP_code_by_id(signed int);
// GeoIP_continent_by_id
// file /usr/include/GeoIP.h line 335
const char * GeoIP_continent_by_id(signed int);
// GeoIP_country_name_by_name
// file /usr/include/GeoIP.h line 384
const char * GeoIP_country_name_by_name(struct GeoIPTag *, const char *);
// GeoIP_country_name_by_name_v6
// file /usr/include/GeoIP.h line 409
const char * GeoIP_country_name_by_name_v6(struct GeoIPTag *, const char *);
// GeoIP_database_edition
// file /usr/include/GeoIP.h line 344
unsigned char GeoIP_database_edition(struct GeoIPTag *);
// GeoIP_delete
// file /usr/include/GeoIP.h line 207
void GeoIP_delete(struct GeoIPTag *);
// GeoIP_id_by_name
// file /usr/include/GeoIP.h line 413
signed int GeoIP_id_by_name(struct GeoIPTag *, const char *);
// GeoIP_id_by_name_v6
// file /usr/include/GeoIP.h line 417
signed int GeoIP_id_by_name_v6(struct GeoIPTag *, const char *);
// GeoIP_new
// file /usr/include/GeoIP.h line 196
struct GeoIPTag * GeoIP_new(signed int);
// GeoIP_open
// file /usr/include/GeoIP.h line 197
struct GeoIPTag * GeoIP_open(const char *, signed int);
// GeoIP_record_by_name
// file /usr/include/GeoIPCity.h line 53
struct GeoIPRecordTag * GeoIP_record_by_name(struct GeoIPTag *, const char *);
// GeoIP_record_by_name_v6
// file /usr/include/GeoIPCity.h line 57
struct GeoIPRecordTag * GeoIP_record_by_name_v6(struct GeoIPTag *, const char *);
// GeoIP_set_charset
// file /usr/include/GeoIP.h line 347
signed int GeoIP_set_charset(struct GeoIPTag *, signed int);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// add_data_to_holder
// file src/gdashboard.c line 1599
static void add_data_to_holder(struct GRawDataItem_ item, struct GHolder_ *h, const struct GPanel_ *panel);
// add_default_colors
// file src/color.c line 643
static void add_default_colors(void);
// add_host_child_to_holder
// file src/gdashboard.c line 1560
static void add_host_child_to_holder(struct GHolder_ *h);
// add_host_to_holder
// file src/gdashboard.c line 1593
static void add_host_to_holder(struct GRawDataItem_ item, struct GHolder_ *h, const struct GPanel_ *panel);
// add_item_to_dash
// file src/gdashboard.c line 1432
static void add_item_to_dash(struct GDash_ **dash, struct GHolderItem_ item, enum MODULES module);
// add_root_to_holder
// file src/gdashboard.c line 1675
static void add_root_to_holder(struct GRawDataItem_ item, struct GHolder_ *h, const struct GPanel_ *panel);
// add_sub_item_back
// file src/gdashboard.c line 221
static void add_sub_item_back(struct GSubList_ *sub_list, enum MODULES module, struct GMetrics *nmetrics);
// add_sub_item_to_dash
// file src/gdashboard.c line 1393
static void add_sub_item_to_dash(struct GDash_ **dash, struct GHolderItem_ item, enum MODULES module, signed int *i);
// alloc_string
// file src/util.h line 43
char * alloc_string(const char *str);
// allocate_data
// file src/goaccess.c line 211
static void allocate_data(void);
// allocate_holder
// file src/goaccess.c line 186
static void allocate_holder(void);
// allocate_holder_by_module
// file src/goaccess.c line 166
static void allocate_holder_by_module(enum MODULES module);
// append_query_string
// file src/parser.c line 1341
static void append_query_string(char **req, const char *qstr);
// append_to_argv
// file src/settings.c line 181
static void append_to_argv(signed int *argc, char ***argv, char *val);
// asctime
// file /usr/include/time.h line 261
extern char * asctime(struct tm$0 *);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// backtrace
// file /usr/include/execinfo.h line 27
extern signed int backtrace(void **, signed int);
// backtrace_symbols
// file /usr/include/execinfo.h line 32
extern char ** backtrace_symbols(void * const *, signed int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// can_sort_module
// file src/sort.c line 349
signed int can_sort_module(enum MODULES module, signed int field);
// char_repeat
// file src/util.h line 44
char * char_repeat(signed int n, char c);
// char_replace
// file src/util.h line 45
char * char_replace(char *str, char o, char n);
// clean_output
// file src/output.c line 400
static void clean_output(struct _IO_FILE *fp, char *s);
// clear_confdlg_status_bar
// file src/ui.c line 935
static void clear_confdlg_status_bar(struct _win_st *win);
// close_win
// file src/ui.c line 143
void close_win(struct _win_st *w);
// cmd_help
// file src/options.h line 24
void cmd_help(void);
// cmp_avgts_asc
// file src/sort.c line 219
static signed int cmp_avgts_asc(const void *a, const void *b);
// cmp_avgts_desc
// file src/sort.c line 206
static signed int cmp_avgts_desc(const void *a, const void *b);
// cmp_bw_asc
// file src/sort.c line 193
static signed int cmp_bw_asc(const void *a, const void *b);
// cmp_bw_desc
// file src/sort.c line 180
static signed int cmp_bw_desc(const void *a, const void *b);
// cmp_cumts_asc
// file src/sort.c line 245
static signed int cmp_cumts_asc(const void *a, const void *b);
// cmp_cumts_desc
// file src/sort.c line 232
static signed int cmp_cumts_desc(const void *a, const void *b);
// cmp_data_asc
// file src/sort.c line 94
static signed int cmp_data_asc(const void *a, const void *b);
// cmp_data_desc
// file src/sort.c line 103
static signed int cmp_data_desc(const void *a, const void *b);
// cmp_maxts_asc
// file src/sort.c line 271
static signed int cmp_maxts_asc(const void *a, const void *b);
// cmp_maxts_desc
// file src/sort.c line 258
static signed int cmp_maxts_desc(const void *a, const void *b);
// cmp_mthd_asc
// file src/sort.c line 302
static signed int cmp_mthd_asc(const void *a, const void *b);
// cmp_mthd_desc
// file src/sort.c line 311
static signed int cmp_mthd_desc(const void *a, const void *b);
// cmp_num_asc
// file src/sort.c line 125
static signed int cmp_num_asc(const void *a, const void *b);
// cmp_num_desc
// file src/sort.c line 112
static signed int cmp_num_desc(const void *a, const void *b);
// cmp_proto_asc
// file src/sort.c line 284
static signed int cmp_proto_asc(const void *a, const void *b);
// cmp_proto_desc
// file src/sort.c line 293
static signed int cmp_proto_desc(const void *a, const void *b);
// cmp_raw_num_desc
// file src/sort.c line 164
static signed int cmp_raw_num_desc(const void *a, const void *b);
// cmp_vis_asc
// file src/sort.c line 151
static signed int cmp_vis_asc(const void *a, const void *b);
// cmp_vis_desc
// file src/sort.c line 138
static signed int cmp_vis_desc(const void *a, const void *b);
// collapse_current_module
// file src/goaccess.c line 340
static void collapse_current_module(void);
// color_default
// file src/color.c line 345
struct GColors_ * color_default(void);
// color_error
// file src/color.c line 351
struct GColors_ * color_error(void);
// color_overall_lbls
// file src/color.c line 297
struct GColors_ * color_overall_lbls(void);
// color_overall_path
// file src/color.c line 309
struct GColors_ * color_overall_path(void);
// color_overall_vals
// file src/color.c line 303
struct GColors_ * color_overall_vals(void);
// color_panel_active
// file src/color.c line 327
struct GColors_ * color_panel_active(void);
// color_panel_desc
// file src/color.c line 321
struct GColors_ * color_panel_desc(void);
// color_panel_header
// file src/color.c line 315
struct GColors_ * color_panel_header(void);
// color_progress
// file src/color.c line 339
struct GColors_ * color_progress(void);
// color_selected
// file src/color.c line 333
struct GColors_ * color_selected(void);
// convert_date
// file src/util.h line 66
signed int convert_date(char *res, char *data, const char *from, const char *to, signed int size);
// count_invalid
// file src/parser.c line 1079
static void count_invalid(struct GLog_ *logger, const char *line, signed int test);
// count_matches
// file src/util.h line 67
signed int count_matches(const char *s1, char c);
// count_process
// file src/parser.c line 1107
static void count_process(struct GLog_ *logger, signed int test);
// count_valid
// file src/parser.c line 1093
static void count_valid(struct GLog_ *logger, signed int test);
// curs_set
// file /usr/include/curses.h line 604
extern signed int curs_set(signed int);
// curses_output
// file src/goaccess.c line 902
static void curses_output(void);
// data_visitors
// file src/gdashboard.c line 1485
static void data_visitors(struct GHolder_ *h);
// dbg_fprintf
// file src/error.c line 134
void dbg_fprintf(const char *fmt, ...);
// dbg_log_close
// file src/error.c line 53
void dbg_log_close(void);
// dbg_log_open
// file src/error.c line 43
void dbg_log_open(const char *path);
// deblank
// file src/util.h line 46
char * deblank(char *str);
// decode_hex
// file src/parser.c line 447
static void decode_hex(char *url, char *out);
// decode_url
// file src/parser.c line 464
static char * decode_url(char *url);
// delete_sub_list
// file src/gdashboard.c line 237
static void delete_sub_list(struct GSubList_ *sub_list);
// delwin
// file /usr/include/curses.h line 610
extern signed int delwin(struct _win_st *);
// derwin
// file /usr/include/curses.h line 612
extern struct _win_st$0 * derwin(struct _win_st$0 *, signed int, signed int, signed int, signed int);
// disabled_panel_msg
// file src/goaccess.c line 353
static void disabled_panel_msg(enum MODULES module);
// display_content
// file src/gdashboard.c line 1100
void display_content(struct _win_st$2 *win, struct GLog_ *logger, struct GDash_ *dash, struct GScroll_ *gscroll);
// display_general
// file src/ui.h line 305
void display_general(struct _win_st *win, char *ifile, struct GLog_ *logger);
// display_general::1::colorlbl$object
// 
struct GColors_ * colorlbl$object(void);
// display_general::1::colorpth$object
// 
struct GColors_ * colorpth$object(void);
// display_general::1::colorval$object
// 
struct GColors_ * colorval$object(void);
// display_storage
// file src/commons.c line 72
void display_storage(void);
// display_version
// file src/commons.c line 84
void display_version(void);
// dns_resolver
// file src/gdns.h line 53
void dns_resolver(char *addr);
// dns_worker
// file src/gdns.c line 197
static void dns_worker(void *ptr_data);
// draw_header
// file src/ui.c line 199
void draw_header(struct _win_st *win, const char *s, const char *fmt, signed int y, signed int x, signed int w, struct GColors_ * (*func)(void));
// draw_header::func$object
// 
struct GColors_ * func$object(void);
// draw_menu_item
// file src/gmenu.c line 57
static void draw_menu_item(struct GMenu_$0 *menu, char *s, signed int x, signed int y, signed int w, signed int checked, struct GColors_ * (*func)(void));
// draw_menu_item::func$object
// 
struct GColors_ * func$object(void);
// dump_struct
// file src/error.c line 84
static void dump_struct(struct _IO_FILE *fp);
// end_spinner
// file src/ui.h line 307
void end_spinner(void);
// endwin
// file /usr/include/curses.h line 618
extern signed int endwin(void);
// escape_cvs_output
// file src/csv.c line 86
static void escape_cvs_output(struct _IO_FILE *fp, char *s);
// escape_json_output
// file src/json.c line 86
static void escape_json_output(struct _IO_FILE *fp, char *s);
// escape_str
// file src/util.h line 47
char * escape_str(const char *src);
// exclude_crawler
// file src/parser.c line 1137
static signed int exclude_crawler(struct GLogItem_ *glog);
// excluded_ip
// file src/parser.c line 1121
static signed int excluded_ip(struct GLog_ *logger, struct GLogItem_ *glog, signed int test);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// expand_current_module
// file src/goaccess.c line 417
static void expand_current_module(void);
// expand_on_mouse_click
// file src/goaccess.c line 437
static void expand_on_mouse_click(void);
// extract_color
// file src/color.c line 367
static signed int extract_color(char *color);
// extract_geolocation
// file src/parser.c line 533
static signed int extract_geolocation(struct GLogItem_ *glog, char *continent, char *country);
// extract_keyphrase
// file src/parser.c line 484
static signed int extract_keyphrase(char *ref, char **keyphrase);
// extract_method
// file src/parser.c line 617
static const char * extract_method(const char *token);
// extract_referer_site
// file src/parser.c line 549
static signed int extract_referer_site(const char *referer, char *host);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// file_size
// file src/util.h line 74
signed long int file_size(const char *filename);
// filesize_str
// file src/util.h line 48
char * filesize_str(unsigned long long int log_size);
// fill_host_agents
// file src/output.c line 1333
static signed int fill_host_agents(void *val, void *user_data);
// fill_host_agents_gmenu
// file src/ui.c line 681
static signed int fill_host_agents_gmenu(void *val, void *user_data);
// find_alpha
// file src/parser.c line 720
static void find_alpha(char **str);
// find_color_in_list
// file src/color.c line 472
static signed int find_color_in_list(void *data, void *color);
// find_color_item_in_list
// file src/color.c line 498
static signed int find_color_item_in_list(void *data, void *needle);
// find_color_item_module_in_list
// file src/color.c line 507
static signed int find_color_item_module_in_list(void *data, void *needle);
// find_host_agent_in_list
// file src/glibht.c line 236
static signed int find_host_agent_in_list(void *data, void *needle);
// find_next_sub_item
// file src/gdashboard.c line 1195
static signed int find_next_sub_item(struct GSubList_ *sub_list, struct re_pattern_buffer *regex);
// find_pair_in_list
// file src/color.c line 485
static signed int find_pair_in_list(void *data, void *color);
// float2str
// file src/util.h line 49
char * float2str(float d, signed int width);
// fmt_date
// file src/output.c line 1465
static void fmt_date(struct GMetrics *metrics);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// format_date_visitors
// file src/commons.c line 209
void format_date_visitors(struct GMetrics *metrics);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// free_agent_list
// file src/glibht.h line 74
void free_agent_list(void);
// free_agent_values
// file src/glibht.c line 595
static void free_agent_values(void *k, void *v, void *data_ptr);
// free_cmd_args
// file src/settings.h line 156
void free_cmd_args(void);
// free_color_lists
// file src/color.c line 267
void free_color_lists(void);
// free_dashboard
// file src/gdashboard.c line 162
void free_dashboard(struct GDash_ *dash);
// free_dashboard_data
// file src/gdashboard.c line 142
static void free_dashboard_data(struct GDashData_ item);
// free_hits
// file src/glibht.c line 61
static void free_hits(void *old_key, void *old_value, void *user_data);
// free_holder
// file src/gdashboard.c line 296
void free_holder(struct GHolder_ **holder);
// free_holder_by_module
// file src/gdashboard.c line 277
void free_holder_by_module(struct GHolder_ **holder, enum MODULES module);
// free_holder_data
// file src/gdashboard.c line 261
static void free_holder_data(struct GHolderItem_ item);
// free_logger
// file src/parser.c line 401
static void free_logger(struct GLogItem_ *glog);
// free_raw_data
// file src/parser.h line 137
void free_raw_data(struct GRawData_ *raw_data);
// free_storage
// file src/glibht.h line 70
void free_storage(void);
// free_tables
// file src/glibht.c line 108
static void free_tables(struct GStorageMetrics_ *metrics);
// freopen
// file /usr/include/stdio.h line 286
extern struct _IO_FILE * freopen(const char *, const char *, struct _IO_FILE *);
// fseeko
// file /usr/include/stdio.h line 781
extern signed int fseeko(struct _IO_FILE *, signed long int, signed int);
// g_free
// file /usr/include/glib-2.0/glib/gmem.h line 71
extern void g_free(void *);
// g_hash_table_destroy
// file /usr/include/glib-2.0/glib/ghash.h line 65
extern void g_hash_table_destroy(struct _GHashTable *);
// g_hash_table_foreach
// file /usr/include/glib-2.0/glib/ghash.h line 99
extern void g_hash_table_foreach(struct _GHashTable *, void (*)(void *, void *, void *), void *);
// g_hash_table_lookup
// file /usr/include/glib-2.0/glib/ghash.h line 88
extern void * g_hash_table_lookup(struct _GHashTable *, const void *);
// g_hash_table_lookup_extended
// file /usr/include/glib-2.0/glib/ghash.h line 94
extern signed int g_hash_table_lookup_extended(struct _GHashTable *, const void *, void **, void **);
// g_hash_table_new_full
// file /usr/include/glib-2.0/glib/ghash.h line 60
extern struct _GHashTable * g_hash_table_new_full(unsigned int (*)(const void *), signed int (*)(const void *, const void *), void (*)(void *), void (*)(void *));
// g_hash_table_replace
// file /usr/include/glib-2.0/glib/ghash.h line 71
extern signed int g_hash_table_replace(struct _GHashTable *, void *, void *);
// g_hash_table_size
// file /usr/include/glib-2.0/glib/ghash.h line 115
extern unsigned int g_hash_table_size(struct _GHashTable *);
// g_int_equal
// file /usr/include/glib-2.0/glib/ghash.h line 160
extern signed int g_int_equal(const void *, const void *);
// g_int_hash
// file /usr/include/glib-2.0/glib/ghash.h line 163
extern unsigned int g_int_hash(const void *);
// g_str_equal
// file /usr/include/glib-2.0/glib/ghash.h line 154
extern signed int g_str_equal(const void *, const void *);
// g_str_hash
// file /usr/include/glib-2.0/glib/ghash.h line 157
extern unsigned int g_str_hash(const void *);
// g_strdup
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 216
extern char * g_strdup(const char *);
// gai_strerror
// file /usr/include/netdb.h line 671
extern const char * gai_strerror(signed int);
// gdns_free_queue
// file src/gdns.c line 250
void gdns_free_queue(void);
// gdns_init
// file src/gdns.c line 233
void gdns_init(void);
// gdns_thread_create
// file src/gdns.c line 257
void gdns_thread_create(void);
// gen_404_key
// file src/parser.c line 1399
static signed int gen_404_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_browser_key
// file src/parser.c line 1426
static signed int gen_browser_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_geolocation_key
// file src/parser.c line 1512
static signed int gen_geolocation_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_host_key
// file src/parser.c line 1415
static signed int gen_host_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_keyphrase_key
// file src/parser.c line 1500
static signed int gen_keyphrase_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_os_key
// file src/parser.c line 1452
static signed int gen_os_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_ref_site_key
// file src/parser.c line 1489
static signed int gen_ref_site_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_referer_key
// file src/parser.c line 1478
static signed int gen_referer_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_req_key
// file src/parser.c line 1378
static signed int gen_req_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_request_key
// file src/parser.c line 1390
static signed int gen_request_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_static_request_key
// file src/parser.c line 1407
static signed int gen_static_request_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_status_code_key
// file src/parser.c line 1537
static signed int gen_status_code_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_unique_req_key
// file src/parser.c line 1301
static char * gen_unique_req_key(struct GLogItem_ *glog);
// gen_visit_time_key
// file src/parser.c line 1557
static signed int gen_visit_time_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// gen_visitor_key
// file src/parser.c line 1367
static signed int gen_visitor_key(struct GKeyData_ *kdata, struct GLogItem_ *glog);
// generate_time
// file src/ui.h line 308
void generate_time(void);
// geoip_get_city
// file src/geolocation.c line 285
void geoip_get_city(const char *ip, char *location, enum anonymous$23 type_ip);
// geoip_get_continent
// file src/geolocation.h line 49
void geoip_get_continent(const char *ip, char *location, enum anonymous$23 type_ip);
// geoip_get_country
// file src/geolocation.h line 50
void geoip_get_country(const char *ip, char *location, enum anonymous$23 type_ip);
// geoip_get_country_by_geoid
// file src/geolocation.c line 149
static const char * geoip_get_country_by_geoid(const char *addr, enum anonymous$23 type_ip);
// geoip_get_geoid
// file src/geolocation.c line 136
static signed int geoip_get_geoid(const char *addr, enum anonymous$23 type_ip);
// geoip_open_db
// file src/geolocation.h line 47
struct GeoIPTag * geoip_open_db(const char *db);
// geoip_set_city
// file src/geolocation.c line 86
static void geoip_set_city(const char *city, const char *region, char *loc);
// geoip_set_city_by_record
// file src/geolocation.c line 266
static void geoip_set_city_by_record(const char *ip, char *location, enum anonymous$23 type_ip);
// geoip_set_continent
// file src/geolocation.c line 93
static void geoip_set_continent(const char *continent, char *loc);
// geoip_set_continent_by_geoid
// file src/geolocation.c line 224
static void geoip_set_continent_by_geoid(const char *ip, char *location, enum anonymous$23 type_ip);
// geoip_set_continent_by_record
// file src/geolocation.c line 205
static void geoip_set_continent_by_record(const char *ip, char *location, enum anonymous$23 type_ip);
// geoip_set_country
// file src/geolocation.c line 77
static void geoip_set_country(const char *country, const char *code, char *loc);
// geoip_set_country_by_geoid
// file src/geolocation.c line 162
static void geoip_set_country_by_geoid(const char *ip, char *location, enum anonymous$23 type_ip);
// geoip_set_country_by_record
// file src/geolocation.c line 115
static void geoip_set_country_by_record(const char *ip, char *location, enum anonymous$23 type_ip);
// get_bars
// file src/gdashboard.c line 409
static char * get_bars(signed int n, signed int max, signed int x);
// get_color
// file src/color.c line 516
struct GColors_ * get_color(enum CSTM_COLORS item);
// get_color_by_item_module
// file src/color.c line 532
struct GColors_ * get_color_by_item_module(enum CSTM_COLORS item, enum MODULES module);
// get_color_item_enum
// file src/color.c line 357
static signed int get_color_item_enum(const char *str);
// get_config_file_path
// file src/settings.c line 83
static char * get_config_file_path(void);
// get_continent_name_and_code
// file src/geolocation.c line 40
static const char * get_continent_name_and_code(const char *continentid);
// get_cumulative_from_key
// file src/glibht.h line 68
unsigned long int get_cumulative_from_key(signed int data_nkey, enum MODULES module, enum METRICS metric);
// get_data_pos_rows
// file src/gdashboard.c line 349
static signed int get_data_pos_rows(void);
// get_find_current_module
// file src/gdashboard.c line 315
static enum MODULES get_find_current_module(struct GDash_ *dash, signed int offset);
// get_geoip_record
// file src/geolocation.c line 102
static struct GeoIPRecordTag * get_geoip_record(const char *addr, enum anonymous$23 type_ip);
// get_global_config
// file src/util.h line 50
char * get_global_config(void);
// get_home
// file src/util.h line 51
char * get_home(void);
// get_host_agent_list
// file src/glibht.h line 71
void * get_host_agent_list(signed int data_nkey);
// get_host_agent_val
// file src/glibht.h line 59
char * get_host_agent_val(signed int agent_nkey);
// get_hostname
// file src/glibht.h line 60
char * get_hostname(const char *host);
// get_ht_size
// file src/glibht.h line 42
unsigned int get_ht_size(struct _GHashTable *ht);
// get_ht_size_by_metric
// file src/glibht.h line 41
unsigned int get_ht_size_by_metric(enum MODULES module, enum METRICS metric);
// get_int_from_int_key
// file src/glibht.c line 394
static signed int get_int_from_int_key(struct _GHashTable *ht, signed int nkey);
// get_int_from_keymap
// file src/glibht.h line 64
signed int get_int_from_keymap(const char *key, enum MODULES module);
// get_int_from_str_key
// file src/glibht.c line 409
signed int get_int_from_str_key(struct _GHashTable *ht, const char *key);
// get_item_idx_in_holder
// file src/gdashboard.c line 1324
static signed int get_item_idx_in_holder(struct GHolder_ *holder, const char *k);
// get_kdata
// file src/parser.c line 1358
static void get_kdata(struct GKeyData_ *kdata, char *data_key, char *data);
// get_keys
// file src/goaccess.c line 680
static void get_keys(void);
// get_max_data_len
// file src/gdashboard.c line 438
static signed int get_max_data_len(struct GDashData_ *data, signed int size);
// get_max_hit
// file src/gdashboard.c line 487
static signed int get_max_hit(struct GDashData_ *data, signed int size);
// get_max_hit$link1
// file src/output.c line 948
static signed int get_max_hit$link1(struct GHolder_ *h);
// get_max_hit_len
// file src/gdashboard.c line 470
static signed int get_max_hit_len(struct GDashData_ *data, signed int size);
// get_max_method_len
// file src/gdashboard.c line 423
static signed int get_max_method_len(struct GDashData_ *data, signed int size);
// get_max_perc_len
// file src/gdashboard.c line 499
static signed int get_max_perc_len(signed int max_percent);
// get_max_visitor
// file src/output.c line 935
static signed int get_max_visitor(struct GHolder_ *h);
// get_max_visitor_len
// file src/gdashboard.c line 453
static signed int get_max_visitor_len(struct GDashData_ *data, signed int size);
// get_module_enum
// file src/commons.h line 241
signed int get_module_enum(const char *str);
// get_node_from_key
// file src/glibht.h line 61
char * get_node_from_key(signed int data_nkey, enum MODULES module, enum METRICS metric);
// get_num_collapsed_data_rows
// file src/gdashboard.c line 333
signed int get_num_collapsed_data_rows(void);
// get_num_expanded_data_rows
// file src/gdashboard.c line 341
signed int get_num_expanded_data_rows(void);
// get_num_from_key
// file src/glibht.h line 66
signed int get_num_from_key(signed int data_nkey, enum MODULES module, enum METRICS metric);
// get_percentage
// file src/commons.c line 66
float get_percentage(unsigned long long int total, unsigned long long int hit);
// get_real_android
// file src/opesys.c line 106
static char * get_real_android(const char *droid);
// get_real_mac_osx
// file src/opesys.c line 161
static char * get_real_mac_osx(const char *osx);
// get_real_win
// file src/opesys.c line 134
static char * get_real_win(const char *win);
// get_root_from_key
// file src/glibht.h line 62
char * get_root_from_key(signed int root_nkey, enum MODULES module);
// get_selected_date_str
// file src/settings.c line 332
char * get_selected_date_str(unsigned long int idx);
// get_selected_format_idx
// file src/settings.c line 272
unsigned long int get_selected_format_idx(void);
// get_selected_format_str
// file src/settings.c line 298
char * get_selected_format_str(unsigned long int idx);
// get_selected_time_str
// file src/settings.c line 356
char * get_selected_time_str(unsigned long int idx);
// get_sort_field_enum
// file src/sort.c line 319
signed int get_sort_field_enum(const char *str);
// get_sort_order_enum
// file src/sort.c line 325
signed int get_sort_order_enum(const char *str);
// get_storage_metric
// file src/gstorage.h line 140
void * get_storage_metric(enum MODULES module, enum METRICS metric);
// get_storage_metric_by_module
// file src/gstorage.c line 98
void * get_storage_metric_by_module(enum MODULES module, enum METRICS metric);
// get_storage_metrics_by_module
// file src/gstorage.c line 76
struct GStorageMetrics_ * get_storage_metrics_by_module(enum MODULES module);
// get_str_bandwidth
// file src/ui.c line 444
static char * get_str_bandwidth(struct GLog_ *logger);
// get_str_excluded_ips
// file src/ui.c line 366
static char * get_str_excluded_ips(struct GLog_ *logger);
// get_str_failed_reqs
// file src/ui.c line 372
static char * get_str_failed_reqs(struct GLog_ *logger);
// get_str_filesize
// file src/ui.c line 426
static char * get_str_filesize(struct GLog_ *logger, const char *ifile);
// get_str_from_int_key
// file src/glibht.c line 439
char * get_str_from_int_key(struct _GHashTable *ht, signed int nkey);
// get_str_logfile
// file src/ui.c line 435
static char * get_str_logfile(struct GLog_ *logger, const char *ifile);
// get_str_notfound_reqs
// file src/ui.c line 390
static char * get_str_notfound_reqs(void);
// get_str_processed_reqs
// file src/ui.c line 378
static char * get_str_processed_reqs(struct GLog_ *logger);
// get_str_proctime
// file src/ui.c line 420
static char * get_str_proctime(void);
// get_str_ref_reqs
// file src/ui.c line 396
static char * get_str_ref_reqs(void);
// get_str_reqs
// file src/ui.c line 402
static char * get_str_reqs(void);
// get_str_static_reqs
// file src/ui.c line 408
static char * get_str_static_reqs(void);
// get_str_valid_reqs
// file src/ui.c line 384
static char * get_str_valid_reqs(struct GLog_ *logger);
// get_str_visitors
// file src/ui.c line 414
static char * get_str_visitors(void);
// get_uint_from_str_key
// file src/glibht.c line 424
unsigned int get_uint_from_str_key(struct _GHashTable *ht, const char *key);
// get_uniq_visitor_key
// file src/parser.c line 1274
static char * get_uniq_visitor_key(struct GLogItem_ *glog);
// get_visitors_date
// file src/gdashboard.c line 569
static void get_visitors_date(char *buf, const char *value);
// getenv
// file /usr/include/stdlib.h line 564
extern char * getenv(const char *);
// getmouse
// file /usr/include/curses.h line 1615
extern signed int getmouse(struct anonymous$11 *);
// getnameinfo
// file /usr/include/netdb.h line 677
extern signed int getnameinfo(struct sockaddr *, unsigned int, char *, unsigned int, char *, unsigned int, signed int);
// getopt_long
// file /usr/include/getopt.h line 173
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gmenu_driver
// file src/gmenu.c line 102
void gmenu_driver(struct GMenu_$0 *menu, signed int c);
// gqueue_dequeue
// file src/gdns.c line 129
char * gqueue_dequeue(struct GDnsQueue_ *q);
// gqueue_destroy
// file src/gdns.c line 95
void gqueue_destroy(struct GDnsQueue_ *q);
// gqueue_empty
// file src/gdns.c line 81
signed int gqueue_empty(struct GDnsQueue_ *q);
// gqueue_enqueue
// file src/gdns.c line 102
signed int gqueue_enqueue(struct GDnsQueue_ *q, char *item);
// gqueue_find
// file src/gdns.c line 114
signed int gqueue_find(struct GDnsQueue_ *q, const char *item);
// gqueue_full
// file src/gdns.c line 88
signed int gqueue_full(struct GDnsQueue_ *q);
// gqueue_init
// file src/gdns.c line 64
void gqueue_init(struct GDnsQueue_ *q, signed int capacity);
// gqueue_size
// file src/gdns.c line 74
signed int gqueue_size(struct GDnsQueue_ *q);
// halfdelay
// file /usr/include/curses.h line 628
extern signed int halfdelay(signed int);
// has_colors
// file /usr/include/curses.h line 629
extern _Bool has_colors(void);
// has_timestamp
// file src/commons.c line 228
signed int has_timestamp(const char *fmt);
// house_keeping
// file src/goaccess.c line 102
static void house_keeping(void);
// ht_inc_int_from_int_key
// file src/glibht.h line 44
signed int ht_inc_int_from_int_key(struct _GHashTable *ht, signed int data_nkey, signed int inc);
// ht_inc_int_from_key
// file src/glibht.c line 275
static signed int ht_inc_int_from_key(struct _GHashTable *ht, void *key, signed int inc);
// ht_inc_int_from_str_key
// file src/glibht.c line 367
signed int ht_inc_int_from_str_key(struct _GHashTable *ht, char *key, signed int inc);
// ht_inc_u64_from_int_key
// file src/glibht.h line 46
signed int ht_inc_u64_from_int_key(struct _GHashTable *ht, signed int data_nkey, unsigned long int inc);
// ht_inc_u64_from_key
// file src/glibht.c line 295
static signed int ht_inc_u64_from_key(struct _GHashTable *ht, void *key, unsigned long int inc);
// ht_insert_agent_key
// file src/glibht.h line 48
signed int ht_insert_agent_key(const char *key);
// ht_insert_agent_val
// file src/glibht.h line 49
signed int ht_insert_agent_val(signed int nkey, const char *key);
// ht_insert_hit
// file src/glibht.h line 50
signed int ht_insert_hit(struct _GHashTable *ht, signed int data_nkey, signed int uniq_nkey, signed int root_nkey);
// ht_insert_host_agent
// file src/glibht.h line 51
signed int ht_insert_host_agent(struct _GHashTable *ht, signed int data_nkey, signed int agent_nkey);
// ht_insert_keymap
// file src/glibht.h line 52
signed int ht_insert_keymap(struct _GHashTable *ht, const char *value);
// ht_insert_nkey_nval
// file src/glibht.c line 199
signed int ht_insert_nkey_nval(struct _GHashTable *ht, signed int nkey, signed int nval);
// ht_insert_str_from_int_key
// file src/glibht.h line 54
signed int ht_insert_str_from_int_key(struct _GHashTable *ht, signed int nkey, const char *value);
// ht_insert_uniqmap
// file src/glibht.h line 55
signed int ht_insert_uniqmap(struct _GHashTable *ht, char *uniq_key);
// ht_insert_unique_key
// file src/glibht.h line 56
signed int ht_insert_unique_key(const char *key);
// ht_max_u64_from_int_key
// file src/glibht.h line 57
signed int ht_max_u64_from_int_key(struct _GHashTable *ht, signed int data_nkey, unsigned long int newval);
// ignore_panel
// file src/settings.h line 154
signed int ignore_panel(enum MODULES mod);
// ignore_referer
// file src/util.h line 68
signed int ignore_referer(const char *host);
// in_ignore_cmd_opts
// file src/settings.c line 72
static signed int in_ignore_cmd_opts(const char *val);
// inc_resp_size
// file src/parser.c line 1070
static void inc_resp_size(struct GLog_ *logger, unsigned long int resp_size);
// include_uniq
// file src/parser.c line 1590
static signed int include_uniq(struct GLogItem_ *glog);
// inet_pton
// file /usr/include/arpa/inet.h line 58
extern signed int inet_pton(signed int, const char *, void *);
// init_colors
// file src/ui.h line 309
void init_colors(signed int force);
// init_geoip
// file src/goaccess.c line 876
static void init_geoip(void);
// init_log
// file src/parser.h line 131
struct GLog_ * init_log(void);
// init_log_item
// file src/parser.c line 364
struct GLogItem_ * init_log_item(struct GLog_ *logger);
// init_pair
// file /usr/include/curses.h line 641
extern signed int init_pair(signed short int, signed short int, signed short int);
// init_storage
// file src/glibht.h line 72
void init_storage(void);
// init_tables
// file src/glibht.c line 69
static void init_tables(enum MODULES module);
// init_windows
// file src/ui.h line 310
void init_windows(struct _win_st **header_win, struct _win_st **main_win);
// initscr
// file /usr/include/curses.h line 639
extern struct _win_st * initscr(void);
// input_string
// file src/ui.c line 542
char * input_string(struct _win_st *win, signed int pos_y, signed int pos_x, unsigned long int max_width, const char *str, signed int enable_case, signed int *toggle_case);
// insert_agent
// file src/parser.c line 1261
static void insert_agent(signed int data_nkey, signed int agent_nkey, enum MODULES module);
// insert_bw
// file src/parser.c line 1216
static void insert_bw(signed int data_nkey, unsigned long int size, enum MODULES module);
// insert_cumts
// file src/parser.c line 1225
static void insert_cumts(signed int data_nkey, unsigned long int ts, enum MODULES module);
// insert_data
// file src/parser.c line 1189
static void insert_data(signed int nkey, const char *data, enum MODULES module);
// insert_hit
// file src/parser.c line 1198
static void insert_hit(signed int data_nkey, signed int uniq_nkey, signed int root_nkey, enum MODULES module);
// insert_keymap
// file src/parser.c line 1162
static signed int insert_keymap(const char *key, enum MODULES module);
// insert_maxts
// file src/parser.c line 1234
static void insert_maxts(signed int data_nkey, unsigned long int ts, enum MODULES module);
// insert_method
// file src/parser.c line 1243
static void insert_method(signed int nkey, const char *data, enum MODULES module);
// insert_protocol
// file src/parser.c line 1252
static void insert_protocol(signed int nkey, const char *data, enum MODULES module);
// insert_root
// file src/parser.c line 1180
static void insert_root(signed int root_nkey, const char *root, enum MODULES module);
// insert_uniqmap
// file src/parser.c line 1171
static signed int insert_uniqmap(char *uniq_key, enum MODULES module);
// insert_visitor
// file src/parser.c line 1207
static void insert_visitor(signed int uniq_nkey, enum MODULES module);
// int2ptr
// file src/gstorage.c line 82
signed int * int2ptr(signed int val);
// int2str
// file src/util.h line 53
char * int2str(signed int d, signed int width);
// intlen
// file src/util.h line 69
signed int intlen(signed int num);
// intrflush
// file /usr/include/curses.h line 649
extern signed int intrflush(struct _win_st *, _Bool);
// ints_to_str
// file src/util.h line 52
char * ints_to_str(signed int a, signed int b);
// invalid_fprintf
// file src/error.c line 148
void invalid_fprintf(const char *fmt, ...);
// invalid_ipaddr
// file src/util.h line 70
signed int invalid_ipaddr(char *str, signed int *ipvx);
// invalid_log_close
// file src/error.c line 70
void invalid_log_close(void);
// invalid_log_open
// file src/error.c line 60
void invalid_log_open(const char *path);
// invalid_protocol
// file src/parser.c line 644
static signed int invalid_protocol(const char *token);
// ip_in_range
// file src/util.h line 71
signed int ip_in_range(const char *ip);
// is_404
// file src/parser.c line 1149
static signed int is_404(struct GLogItem_ *glog);
// is_crawler
// file src/browsers.c line 278
signed int is_crawler(const char *agent);
// is_static
// file src/parser.c line 1143
static signed int is_static(struct GLogItem_ *glog);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// keypad
// file /usr/include/curses.h line 654
extern signed int keypad(struct _win_st$2 *, _Bool);
// left_pad_str
// file src/util.h line 54
char * left_pad_str(const char *s, signed int indent);
// list_count
// file src/commons.h line 252
signed int list_count(struct GSLList_ *node);
// list_create
// file src/commons.h line 248
struct GSLList_ * list_create(void *data);
// list_find
// file src/commons.h line 249
struct GSLList_ * list_find(struct GSLList_ *node, signed int (*func)(void *, void *), void *data);
// list_find::func$object
// 
//signed int func$object(void *, void *);
// list_foreach
// file src/commons.c line 169
signed int list_foreach(struct GSLList_ *node, signed int (*func)(void *, void *), void *user_data);
// list_foreach::func$object
// 
//signed int func$object(void *, void *);
// list_insert_append
// file src/commons.c line 121
struct GSLList_ * list_insert_append(struct GSLList_ *node, void *data);
// list_insert_prepend
// file src/commons.h line 251
struct GSLList_ * list_insert_prepend(struct GSLList_ *list, void *data);
// list_remove_nodes
// file src/commons.h line 254
signed int list_remove_nodes(struct GSLList_ *list);
// load_agent_list
// file src/ui.h line 311
void load_agent_list(struct _win_st *main_win, char *addr);
// load_data_to_dash
// file src/gdashboard.c line 1460
void load_data_to_dash(struct GHolder_ *h, struct GDash_ *dash, enum MODULES module, struct GScroll_ *gscroll);
// load_help_popup
// file src/ui.h line 312
void load_help_popup(struct _win_st *main_win);
// load_holder_data
// file src/gdashboard.c line 1728
void load_holder_data(struct GRawData_ *raw_data, struct GHolder_ *h, enum MODULES module, struct GSort_ sort);
// load_host_agents
// file src/output.c line 1348
static void load_host_agents(void *list, void *user_data, signed int count);
// load_host_agents_gmenu
// file src/ui.c line 697
static void load_host_agents_gmenu(void *list, void *user_data, signed int count);
// load_ip_agent_list
// file src/goaccess.c line 405
static void load_ip_agent_list(void);
// load_schemes_win
// file src/ui.h line 313
void load_schemes_win(struct _win_st *main_win);
// load_sort_win
// file src/ui.h line 314
void load_sort_win(struct _win_st *main_win, enum MODULES module, struct GSort_ *sort);
// localtime
// file /usr/include/time.h line 243
extern struct tm$0 * localtime(const signed long int *);
// locate_attr_color
// file src/color.c line 405
static void locate_attr_color(struct GColors_ *color, const char *attr);
// lock_spinner
// file src/parser.c line 1046
static void lock_spinner(void);
// lprint_col
// file src/gdashboard.c line 985
static void lprint_col(struct _win_st$2 *win, signed int y, signed int *x, signed int len, const char *fmt, const char *str);
// ltrim
// file src/util.c line 419
char * ltrim(char *s);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// map_log
// file src/parser.c line 1638
static void map_log(struct GLogItem_ *glog, const struct GParse_ *parse, enum MODULES module);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memmove
// file /usr/include/string.h line 50
extern void * memmove(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mktime
// file /usr/include/time.h line 199
extern signed long int mktime(struct tm$1 *);
// module_to_desc
// file src/ui.h line 298
const char * module_to_desc(enum MODULES module);
// module_to_head
// file src/ui.h line 299
const char * module_to_head(enum MODULES module);
// module_to_id
// file src/ui.h line 300
const char * module_to_id(enum MODULES module);
// module_to_label
// file src/ui.h line 301
const char * module_to_label(enum MODULES module);
// mousemask
// file /usr/include/curses.h line 1617
extern unsigned long int mousemask(unsigned long int, unsigned long int *);
// mvprintw
// file /usr/include/curses.h line 681
extern signed int mvprintw(signed int, signed int, const char *, ...);
// mvwprintw
// file /usr/include/curses.h line 706
extern signed int mvwprintw(struct _win_st$2 *, signed int, signed int, const char *, ...);
// new_gagent_item
// file src/commons.c line 201
struct GAgentItem_ * new_gagent_item(unsigned int size);
// new_gagents
// file src/commons.c line 192
struct GAgents_ * new_gagents(void);
// new_gcolorpair
// file src/color.c line 256
static struct GColorPair_ * new_gcolorpair(void);
// new_gcolors
// file src/color.c line 247
static struct GColors_ * new_gcolors(void);
// new_gdash
// file src/gdashboard.c line 123
struct GDash_ * new_gdash(void);
// new_gdata
// file src/gdashboard.c line 134
struct GDashData_ * new_gdata(unsigned int size);
// new_gholder
// file src/gdashboard.c line 176
struct GHolder_ * new_gholder(unsigned int size);
// new_gholder_item
// file src/gdashboard.c line 186
static struct GHolderItem_ * new_gholder_item(unsigned int size);
// new_gmenu
// file src/gmenu.c line 34
struct GMenu_$0 * new_gmenu(struct _win_st$0 *parent, signed int h, signed int w, signed int y, signed int x);
// new_gmetrics
// file src/gstorage.h line 133
struct GMetrics * new_gmetrics(void);
// new_grawdata
// file src/parser.c line 312
struct GRawData_ * new_grawdata(void);
// new_grawdata_item
// file src/parser.c line 322
struct GRawDataItem_ * new_grawdata_item(unsigned int size);
// new_gspinner
// file src/ui.h line 294
struct GSpinner_ * new_gspinner(void);
// new_gstorage
// file src/gstorage.c line 35
struct GStorage_ * new_gstorage(unsigned int size);
// new_gsubitem
// file src/gdashboard.c line 207
static struct GSubItem_ * new_gsubitem(enum MODULES module, struct GMetrics *nmetrics);
// new_gsublist
// file src/gdashboard.c line 195
static struct GSubList_ * new_gsublist(void);
// new_ht_metrics
// file src/gstorage.c line 50
struct GStorageMetrics_ * new_ht_metrics(void);
// new_int_ht
// file src/glibht.c line 55
static struct _GHashTable * new_int_ht(void (*d1)(void *), void (*d2)(void *));
// new_int_ht::d1$object
// 
void d1$object(void *);
// new_int_ht::d2$object
// 
void d2$object(void *);
// new_modulekey
// file src/parser.c line 283
static void new_modulekey(struct GKeyData_ *kdata);
// new_str_ht
// file src/glibht.c line 49
static struct _GHashTable * new_str_ht(void (*d1)(void *), void (*d2)(void *));
// new_str_ht::d1$object
// 
void d1$object(void *);
// new_str_ht::d2$object
// 
void d2$object(void *);
// newwin
// file /usr/include/curses.h line 714
extern struct _win_st$2 * newwin(signed int, signed int, signed int, signed int);
// next_module
// file src/goaccess.c line 622
static signed int next_module(void);
// noecho
// file /usr/include/curses.h line 718
extern signed int noecho(void);
// nonl
// file /usr/include/curses.h line 719
extern signed int nonl(void);
// output_csv
// file src/csv.c line 276
void output_csv(struct GLog_ *logger, struct GHolder_ *holder);
// output_html
// file src/output.h line 139
void output_html(struct GLog_ *logger, struct GHolder_ *holder);
// output_json
// file src/json.h line 30
void output_json(struct GLog_ *logger, struct GHolder_ *holder);
// output_lookup
// file src/ui.h line 293
struct GOutput_ * output_lookup(enum MODULES module);
// page_down_module
// file src/goaccess.c line 513
static void page_down_module(void);
// page_up_module
// file src/goaccess.c line 491
static void page_up_module(void);
// panel_lookup
// file src/csv.c line 74
static struct GPanel_$0 * panel_lookup(enum MODULES module);
// panel_lookup$link1
// file src/gdashboard.c line 95
static struct GPanel_ * panel_lookup$link1(enum MODULES module$link1);
// panel_lookup$link2
// file src/json.c line 74
static struct GPanel_$0 * panel_lookup$link2(enum MODULES module$link2);
// panel_lookup$link3
// file src/output.c line 923
static struct GPanel_$1 * panel_lookup$link3(enum MODULES module$link3);
// panel_lookup$link4
// file src/parser.c line 299
static struct GParse_ * panel_lookup$link4(enum MODULES module$link4);
// parse_android
// file src/opesys.c line 228
static char * parse_android(char *agent);
// parse_attr_color
// file src/color.c line 422
static signed int parse_attr_color(struct GColors_ *color, const char *value);
// parse_bg_fg_color
// file src/color.c line 387
static signed int parse_bg_fg_color(struct GColorPair_ *pair, const char *value);
// parse_cmd_line
// file src/goaccess.c line 931
static void parse_cmd_line(signed int argc, char **argv);
// parse_color
// file src/color.c line 589
static void parse_color(char *line);
// parse_color_line
// file src/color.c line 553
static void parse_color_line(struct GColorPair_ *pair, struct GColors_ *color, char *line);
// parse_colors
// file src/color.c line 626
static void parse_colors(const char **colors, unsigned long int n);
// parse_conf_file
// file src/settings.h line 155
signed int parse_conf_file(signed int *argc, char ***argv);
// parse_format
// file src/parser.c line 999
static signed int parse_format(struct GLogItem_ *glog, char *str);
// parse_initial_sort
// file src/sort.h line 71
void parse_initial_sort(void);
// parse_log
// file src/parser.h line 135
signed int parse_log(struct GLog_ **logger, char *tail, signed int n);
// parse_module_color
// file src/color.c line 452
static signed int parse_module_color(struct GColors_ *color, const char *value);
// parse_opera
// file src/browsers.c line 295
static char * parse_opera(char *token);
// parse_osx
// file src/opesys.c line 207
static char * parse_osx(char *agent);
// parse_others
// file src/opesys.c line 189
static char * parse_others(char *agent, signed int spaces);
// parse_raw_data
// file src/glibht.h line 39
struct GRawData_ * parse_raw_data(struct _GHashTable *ht, signed int ht_size, enum MODULES module);
// parse_req
// file src/parser.c line 653
static char * parse_req(char *line, char **method, char **protocol);
// parse_specifier
// file src/parser.c line 733
static signed int parse_specifier(struct GLogItem_ *glog, char **str, const char *p);
// parse_string
// file src/parser.c line 697
static char * parse_string(char **str, char end, signed int cnt);
// perform_find_dash_scroll
// file src/gdashboard.c line 1171
static void perform_find_dash_scroll(struct GScroll_ *gscroll, enum MODULES module);
// perform_next_find
// file src/gdashboard.c line 1225
signed int perform_next_find(struct GHolder_ *h, struct GScroll_ *gscroll);
// perform_tail_follow
// file src/goaccess.c line 584
static void perform_tail_follow(unsigned long int *size1);
// post_gmenu
// file src/gmenu.c line 75
signed int post_gmenu(struct GMenu_$0 *menu);
// post_gmenu::1::func$object
// 
struct GColors_ * func$object(void);
// pre_process_log
// file src/parser.c line 1696
static signed int pre_process_log(struct GLog_ *logger, char *line, signed int test);
// previous_module
// file src/goaccess.c line 637
static signed int previous_module(void);
// print_agents
// file src/output.c line 1358
static void print_agents(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int cspan);
// print_csv_data
// file src/csv.c line 149
static void print_csv_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int valid);
// print_csv_sub_items
// file src/csv.c line 102
static void print_csv_sub_items(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int valid);
// print_csv_summary
// file src/csv.c line 195
static void print_csv_summary(struct _IO_FILE *fp, struct GLog_ *logger);
// print_graph
// file src/output.c line 1127
static void print_graph(struct _IO_FILE *fp, signed int max_hit, signed int max_vis, signed int hits, signed int visitors);
// print_horizontal_dash
// file src/gdashboard.c line 979
static void print_horizontal_dash(struct _win_st$2 *win, signed int y, signed int x, signed int len);
// print_host_sub
// file src/output.c line 1399
static void print_host_sub(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int cspan);
// print_html_begin_agent_tr
// file src/output.c line 1060
static void print_html_begin_agent_tr(struct _IO_FILE *fp);
// print_html_begin_col_wrap
// file src/output.c line 1105
static void print_html_begin_col_wrap(struct _IO_FILE *fp, signed int size, const char *color);
// print_html_begin_grid
// file src/output.c line 1087
static void print_html_begin_grid(struct _IO_FILE *fp);
// print_html_begin_grid_col
// file src/output.c line 1093
static void print_html_begin_grid_col(struct _IO_FILE *fp, signed int size);
// print_html_begin_grid_module
// file src/output.c line 1099
static void print_html_begin_grid_module(struct _IO_FILE *fp, const char *color);
// print_html_begin_table
// file src/output.c line 1024
static void print_html_begin_table(struct _IO_FILE *fp);
// print_html_begin_tbody
// file src/output.c line 1048
static void print_html_begin_tbody(struct _IO_FILE *fp);
// print_html_begin_thead
// file src/output.c line 1036
static void print_html_begin_thead(struct _IO_FILE *fp);
// print_html_begin_tr
// file src/output.c line 1066
static void print_html_begin_tr(struct _IO_FILE *fp, signed int hide, signed int sub);
// print_html_col_title
// file src/output.c line 1119
static void print_html_col_title(struct _IO_FILE *fp, const char *title);
// print_html_common
// file src/output.c line 1495
static void print_html_common(struct _IO_FILE *fp, struct GHolder_ *h, signed int total, const struct GPanel_$1 *panel, const struct GOutput_ *output);
// print_html_data
// file src/output.c line 1471
static void print_html_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int total, signed int max_hit, signed int max_vis, const struct GPanel_$1 *panel, const struct GOutput_ *output);
// print_html_end_col_wrap
// file src/output.c line 1112
static void print_html_end_col_wrap(struct _IO_FILE *fp);
// print_html_end_div
// file src/output.c line 1081
static void print_html_end_div(struct _IO_FILE *fp);
// print_html_end_table
// file src/output.c line 1030
static void print_html_end_table(struct _IO_FILE *fp);
// print_html_end_tbody
// file src/output.c line 1054
static void print_html_end_tbody(struct _IO_FILE *fp);
// print_html_end_thead
// file src/output.c line 1042
static void print_html_end_thead(struct _IO_FILE *fp);
// print_html_end_tr
// file src/output.c line 1075
static void print_html_end_tr(struct _IO_FILE *fp);
// print_html_footer
// file src/output.c line 999
static void print_html_footer(struct _IO_FILE *fp);
// print_html_h2
// file src/output.c line 1009
static void print_html_h2(struct _IO_FILE *fp, const char *title, const char *id);
// print_html_header
// file src/output.c line 451
static void print_html_header(struct _IO_FILE *fp, char *now);
// print_html_host
// file src/output.c line 1423
static void print_html_host(struct _IO_FILE *fp, struct GHolder_ *h, signed int total, signed int max_hit, signed int max_vis, const struct GPanel_$1 *panel, const struct GOutput_ *output);
// print_html_page_header
// file src/output.c line 441
static void print_html_page_header(struct _IO_FILE *fp);
// print_html_summary
// file src/output.c line 1550
static void print_html_summary(struct _IO_FILE *fp, struct GLog_ *logger);
// print_html_title
// file src/output.c line 431
static void print_html_title(struct _IO_FILE *fp, char *now);
// print_json_block
// file src/json.c line 140
static void print_json_block(struct _IO_FILE *fp, struct GMetrics *nmetrics, char *sep);
// print_json_data
// file src/json.c line 241
static void print_json_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int valid);
// print_json_host_data
// file src/json.c line 192
static void print_json_host_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int valid);
// print_json_host_geo
// file src/json.c line 170
static void print_json_host_geo(struct _IO_FILE *fp, struct GSubList_ *sub_list, char *sep);
// print_json_sub_items
// file src/json.c line 215
static void print_json_sub_items(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int valid);
// print_json_summary
// file src/json.c line 265
static void print_json_summary(struct _IO_FILE *fp, struct GLog_ *logger);
// print_metric_avgts
// file src/output.c line 1204
static void print_metric_avgts(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_bw
// file src/output.c line 1189
static void print_metric_bw(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_cumts
// file src/output.c line 1219
static void print_metric_cumts(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_data
// file src/output.c line 1249
static void print_metric_data(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_hits
// file src/output.c line 1168
static void print_metric_hits(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_maxts
// file src/output.c line 1234
static void print_metric_maxts(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_method
// file src/output.c line 1268
static void print_metric_method(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_percent
// file src/output.c line 1180
static void print_metric_percent(struct _IO_FILE *fp, struct GMetrics *nmetrics, signed int max_hit);
// print_metric_protocol
// file src/output.c line 1257
static void print_metric_protocol(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metric_visitors
// file src/output.c line 1174
static void print_metric_visitors(struct _IO_FILE *fp, struct GMetrics *nmetrics);
// print_metrics
// file src/output.c line 1279
static void print_metrics(struct _IO_FILE *fp, struct GMetrics *nmetrics, signed int max_hit, signed int max_vis, signed int sub, const struct GOutput_ *output);
// print_p
// file src/output.c line 1018
static void print_p(struct _IO_FILE *fp, const char *paragraph);
// print_pure_menu
// file src/output.c line 961
static void print_pure_menu(struct _IO_FILE *fp, char *now);
// print_subitems
// file src/output.c line 1310
static void print_subitems(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int total, signed int max_hit, signed int max_vis, const struct GOutput_ *output);
// print_table_head
// file src/output.c line 1161
static void print_table_head(struct _IO_FILE *fp, enum MODULES module);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// process_log
// file src/parser.c line 1669
static void process_log(struct GLogItem_ *glog);
// pthread_cond_broadcast
// file /usr/include/pthread.h line 983
extern signed int pthread_cond_broadcast(union anonymous$4 *);
// pthread_cond_init
// file /usr/include/pthread.h line 970
extern signed int pthread_cond_init(union anonymous$4 *, const union anonymous$3 *);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$4 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$4 *, union anonymous$5 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_detach
// file /usr/include/pthread.h line 273
extern signed int pthread_detach(unsigned long int);
// pthread_mutex_init
// file /usr/include/pthread.h line 751
extern signed int pthread_mutex_init(union anonymous$5 *, const union anonymous$3 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$5 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$5 *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// raw_data_iter
// file src/glibht.c line 614
static void raw_data_iter(void *k, void *v, void *data_ptr);
// read_log
// file src/parser.c line 1758
static signed int read_log(struct GLog_ **logger, signed int n);
// read_option_args
// file src/options.h line 25
void read_option_args(signed int argc, char **argv);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// realpath
// file /usr/include/stdlib.h line 733
extern char * realpath(const char *, char *);
// regcomp
// file /usr/include/regex.h line 562
extern signed int regcomp(struct re_pattern_buffer *, const char *, signed int);
// regerror
// file /usr/include/regex.h line 571
extern unsigned long int regerror(signed int, const struct re_pattern_buffer *, char *, unsigned long int);
// regexec
// file /usr/include/regex.h line 566
extern signed int regexec(const struct re_pattern_buffer *, const char *, unsigned long int, struct anonymous$24 *, signed int);
// regexp_init
// file src/gdashboard.c line 1152
static signed int regexp_init(struct re_pattern_buffer *regex, const char *pattern);
// regfree
// file /usr/include/regex.h line 574
extern void regfree(struct re_pattern_buffer *);
// render_avgts
// file src/gdashboard.c line 663
static void render_avgts(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_bars
// file src/gdashboard.c line 540
static void render_bars(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_bw
// file src/gdashboard.c line 744
static void render_bw(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_child_node
// file src/gdashboard.c line 384
static char * render_child_node(const char *data);
// render_cols
// file src/gdashboard.c line 1013
static void render_cols(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y);
// render_confdlg
// file src/ui.h line 302
signed int render_confdlg(struct GLog_ *logger, struct GSpinner_ *spinner);
// render_content
// file src/gdashboard.c line 1056
static void render_content(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y, signed int *offset, signed int *total, struct GScroll_ *gscroll);
// render_cumts
// file src/gdashboard.c line 690
static void render_cumts(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_data
// file src/gdashboard.c line 580
static void render_data(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_data_hosts
// file src/gdashboard.c line 559
static void render_data_hosts(struct _win_st$2 *win, struct GDashRender_ render, char *value, signed int x);
// render_data_line
// file src/gdashboard.c line 947
static void render_data_line(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y, signed int j, struct GScroll_ *gscroll);
// render_description
// file src/gdashboard.c line 891
static void render_description(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y);
// render_find_dialog
// file src/gdashboard.c line 1288
signed int render_find_dialog(struct _win_st$2 *main_win, struct GScroll_ *gscroll);
// render_header
// file src/gdashboard.c line 865
static void render_header(struct _win_st$2 *win, struct GDashModule_ *data, enum MODULES cur_module, signed int *y);
// render_header::1::func$object
// 
struct GColors_ * func$object(void);
// render_hits
// file src/gdashboard.c line 806
static void render_hits(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_maxts
// file src/gdashboard.c line 717
static void render_maxts(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_method
// file src/gdashboard.c line 611
static void render_method(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_metrics
// file src/gdashboard.c line 906
static void render_metrics(struct GDashModule_ *data, struct GDashRender_ render, signed int expanded);
// render_overall_field
// file src/ui.c line 348
static void render_overall_field(struct _win_st *win, const char *s, signed int y, signed int x, struct GColors_ *color);
// render_overall_statistics
// file src/ui.c line 451
static void render_overall_statistics(struct _win_st *win, struct Field_ *fields, unsigned long int n);
// render_overall_value
// file src/ui.c line 357
static void render_overall_value(struct _win_st *win, const char *s, signed int y, signed int x, struct GColors_ *color);
// render_percent
// file src/gdashboard.c line 771
static void render_percent(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_proto
// file src/gdashboard.c line 637
static void render_proto(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// render_screens
// file src/goaccess.c line 306
static void render_screens(void);
// render_search_dialog
// file src/goaccess.c line 553
static void render_search_dialog(signed int search);
// render_sort_dialog
// file src/goaccess.c line 666
static void render_sort_dialog(void);
// render_total_label
// file src/gdashboard.c line 520
static void render_total_label(struct _win_st$2 *win, struct GDashModule_ *data, signed int y, struct GColors_ * (*func)(void));
// render_total_label::func$object
// 
struct GColors_ * func$object(void);
// render_visitors
// file src/gdashboard.c line 836
static void render_visitors(struct GDashModule_ *data, struct GDashRender_ render, signed int *x);
// reset_find
// file src/gdashboard.c line 108
void reset_find(void);
// reset_scroll_offsets
// file src/gdashboard.c line 1141
void reset_scroll_offsets(struct GScroll_ *gscroll);
// reset_struct
// file src/parser.c line 346
void reset_struct(struct GLog_ *logger);
// reverse_host
// file src/gdns.c line 143
static char * reverse_host(struct sockaddr *a, unsigned int length);
// reverse_ip
// file src/gdns.h line 47
char * reverse_ip(char *str);
// rprint_col
// file src/gdashboard.c line 999
static void rprint_col(struct _win_st$2 *win, signed int y, signed int *x, signed int len, const char *fmt, const char *str);
// rtrim
// file src/util.c line 431
char * rtrim(char *s);
// scheme_chosen
// file src/ui.c line 1193
static void scheme_chosen(const char *name);
// scroll_down_expanded_module
// file src/goaccess.c line 467
static void scroll_down_expanded_module(void);
// scroll_to_first_line
// file src/goaccess.c line 377
static void scroll_to_first_line(void);
// scroll_to_last_line
// file src/goaccess.c line 388
static void scroll_to_last_line(void);
// scroll_up_dashboard
// file src/goaccess.c line 485
static void scroll_up_dashboard(void);
// scroll_up_expanded_module
// file src/goaccess.c line 536
static void scroll_up_expanded_module(void);
// search_next_match
// file src/goaccess.c line 570
static void search_next_match(signed int search);
// set_colors
// file src/color.c line 660
void set_colors(signed int force);
// set_curses_spinner
// file src/ui.h line 315
void set_curses_spinner(struct GSpinner_ *spinner);
// set_data_metrics
// file src/gstorage.h line 141
void set_data_metrics(struct GMetrics *ometrics, struct GMetrics **nmetrics, signed int valid);
// set_datamap
// file src/parser.c line 1600
static void set_datamap(struct GLogItem_ *glog, struct GKeyData_ *kdata, const struct GParse_ *parse);
// set_default_static_files
// file src/settings.h line 157
void set_default_static_files(void);
// set_general_stats
// file src/goaccess.c line 857
static void set_general_stats(void);
// set_geolocation
// file src/geolocation.h line 51
signed int set_geolocation(char *host, char *continent, char *country, char *city);
// set_host_agents
// file src/ui.h line 303
signed int set_host_agents(const char *addr, void (*func)(void *, void *, signed int), void *arr);
// set_host_agents::func$object
// 
//void func$object(void *, void *, signed int);
// set_host_child_metrics
// file src/gdashboard.c line 1504
static signed int set_host_child_metrics(char *data, unsigned char id, struct GMetrics **nmetrics);
// set_host_sub_list
// file src/gdashboard.c line 1517
static void set_host_sub_list(struct GHolder_ *h, struct GSubList_ *sub_list);
// set_initial_sort
// file src/sort.c line 331
void set_initial_sort(const char *smod, const char *sfield, const char *ssort);
// set_input_opts
// file src/ui.h line 316
void set_input_opts(void);
// set_locale
// file src/goaccess.c line 917
static void set_locale(void);
// set_module_from_mouse_event
// file src/gdashboard.c line 359
signed int set_module_from_mouse_event(struct GScroll_ *gscroll, struct GDash_ *dash, signed int y);
// set_module_to
// file src/goaccess.c line 364
static void set_module_to(struct GScroll_ *scrll, enum MODULES module);
// set_normal_color
// file src/color.c line 278
void set_normal_color(void);
// set_percent_data
// file src/gdashboard.c line 506
static float set_percent_data(struct GDashData_ *data, signed int n, signed int valid);
// set_root_metrics
// file src/gdashboard.c line 1645
static signed int set_root_metrics(signed int data_nkey, struct GDataMap_ *map, enum MODULES module, struct GMetrics **nmetrics);
// set_signal_data
// file src/error.c line 77
void set_signal_data(void *p);
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// setup_signal_handlers
// file src/goaccess.c line 950
static void setup_signal_handlers(void);
// sigaction
// file /usr/include/signal.h line 259
extern signed int sigaction(signed int, struct sigaction *, struct sigaction *);
// sigemptyset
// file /usr/include/signal.h line 215
extern signed int sigemptyset(struct anonymous$10 *);
// sigsegv_handler
// file src/error.c line 101
void sigsegv_handler(signed int sig);
// snprintf
// file /usr/include/stdio.h line 386
extern signed int snprintf(char *, unsigned long int, const char *, ...);
// sort_holder_items
// file src/sort.h line 73
void sort_holder_items(struct GHolderItem_ *items, signed int size, struct GSort_ sort);
// sort_raw_data
// file src/sort.c line 453
struct GRawData_ * sort_raw_data(struct GRawData_ *raw, signed int ht_size);
// sort_sub_list
// file src/gdashboard.c line 1346
static void sort_sub_list(struct GHolder_ *h, struct GSort_ sort);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// standard_output
// file src/goaccess.c line 888
static void standard_output(void);
// start_color
// file /usr/include/curses.h line 771
extern signed int start_color(void);
// stat
// file /usr/include/x86_64-linux-gnu/sys/stat.h line 216
extern signed int stat(const char *, struct stat *);
// str2enum
// file src/commons.h line 243
signed int str2enum(const struct GEnum_ *map, signed int len, const char *str);
// str_to_time
// file src/util.h line 72
signed int str_to_time(const char *str, const char *fmt, struct tm$1 *tm);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strcspn
// file /usr/include/string.h line 284
extern unsigned long int strcspn(const char *, const char *);
// strdup
// file /usr/include/string.h line 175
extern char * strdup(const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strftime
// file /usr/include/time.h line 205
extern unsigned long int strftime(char *, unsigned long int, const char *, struct tm$0 *);
// strip_newlines
// file src/util.h line 76
void strip_newlines(char *str);
// strip_qstring
// file src/parser.c line 1060
static void strip_qstring(char *req);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strpbrk
// file /usr/include/string.h line 314
extern char * strpbrk(const char *, const char *);
// strptime
// file /usr/include/time.h line 213
extern char * strptime(const char *, const char *, struct tm$1 *);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// strspn
// file /usr/include/string.h line 288
extern unsigned long int strspn(const char *, const char *);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtod
// file /usr/include/stdlib.h line 164
extern double strtod(const char *, char ** restrict );
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// strtoull
// file /usr/include/stdlib.h line 214
extern unsigned long long int strtoull(const char *, char ** restrict , signed int);
// strtoupper
// file src/util.h line 59
char * strtoupper(char *str);
// substring
// file src/util.h line 60
char * substring(const char *str, signed int begin, signed int len);
// term_size
// file src/ui.h line 317
void term_size(struct _win_st *main_win);
// test_format
// file src/parser.c line 1836
signed int test_format(struct GLog_ *logger);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// toupper
// file /usr/include/ctype.h line 127
extern signed int toupper(signed int);
// trim_str
// file src/util.h line 61
char * trim_str(char *str);
// ui_spinner
// file src/ui.c line 838
static void ui_spinner(void *ptr_data);
// ui_spinner_create
// file src/ui.h line 318
void ui_spinner_create(struct GSpinner_ *spinner);
// uint642ptr
// file src/gstorage.c line 90
unsigned long int * uint642ptr(unsigned long int val);
// unescape_str
// file src/util.h line 62
char * unescape_str(const char *src);
// unlock_spinner
// file src/parser.c line 1053
static void unlock_spinner(void);
// update_active_module
// file src/ui.h line 319
void update_active_module(struct _win_st *header_win, enum MODULES current);
// use_default_colors
// file /usr/include/curses.h line 906
extern signed int use_default_colors(void);
// usecs_to_str
// file src/util.h line 63
char * usecs_to_str(unsigned long long int usec);
// usleep
// file /usr/include/unistd.h line 460
extern signed int usleep(unsigned int);
// valid_line
// file src/parser.c line 1033
static signed int valid_line(char *line);
// verify_browser
// file src/browsers.c line 304
char * verify_browser(char *str, char *type);
// verify_formats
// file src/parser.h line 139
void verify_formats(void);
// verify_global_config
// file src/options.h line 26
void verify_global_config(signed int argc, char **argv);
// verify_os
// file src/opesys.c line 240
char * verify_os(const char *str, char *os_type);
// verify_static_content
// file src/parser.c line 586
static signed int verify_static_content(char *req);
// verify_status_code
// file src/util.h line 64
const char * verify_status_code(char *str);
// verify_status_code_type
// file src/util.h line 65
const char * verify_status_code_type(const char *str);
// vfprintf
// file /usr/include/stdio.h line 371
extern signed int vfprintf(struct _IO_FILE *, const char *, void **);
// waddch
// file /usr/include/curses.h line 792
extern signed int waddch(struct _win_st *, const unsigned long int);
// waddnstr
// file /usr/include/curses.h line 795
extern signed int waddnstr(struct _win_st$1 *, const char *, signed int);
// wattr_off
// file /usr/include/curses.h line 802
extern signed int wattr_off(struct _win_st$2 *, unsigned long int, void *);
// wattr_on
// file /usr/include/curses.h line 801
extern signed int wattr_on(struct _win_st$2 *, unsigned long int, void *);
// wbkgd
// file /usr/include/curses.h line 804
extern signed int wbkgd(struct _win_st *, unsigned long int);
// wborder
// file /usr/include/curses.h line 806
extern signed int wborder(struct _win_st$2 *, unsigned long int, unsigned long int, unsigned long int, unsigned long int, unsigned long int, unsigned long int, unsigned long int, unsigned long int);
// wc_match
// file src/util.c line 603
signed int wc_match(char *wc, char *str);
// wclear
// file /usr/include/curses.h line 808
extern signed int wclear(struct _win_st *);
// werase
// file /usr/include/curses.h line 816
extern signed int werase(struct _win_st$2 *);
// wgetch
// file /usr/include/curses.h line 817
extern signed int wgetch(struct _win_st$1 *);
// whline
// file /usr/include/curses.h line 820
extern signed int whline(struct _win_st *, unsigned long int, signed int);
// window_resize
// file src/goaccess.c line 653
static void window_resize(void);
// within_range
// file src/util.c line 196
static signed int within_range(const char *ip, const char *start, const char *end);
// wmove
// file /usr/include/curses.h line 831
extern signed int wmove(struct _win_st$1 *, signed int, signed int);
// wrefresh
// file /usr/include/curses.h line 836
extern signed int wrefresh(struct _win_st$2 *);
// wresize
// file /usr/include/curses.h line 911
extern signed int wresize(struct _win_st *, signed int, signed int);
// wtouchln
// file /usr/include/curses.h line 846
extern signed int wtouchln(struct _win_st$2 *, signed int, signed int, signed int);
// xcalloc
// file src/xmalloc.h line 25
void * xcalloc(unsigned long int nmemb, unsigned long int size);
// xmalloc
// file src/xmalloc.h line 26
void * xmalloc(unsigned long int size);
// xrealloc
// file src/xmalloc.h line 27
void * xrealloc(void *oldptr, unsigned long int size);
// xstrdup
// file src/xmalloc.h line 24
char * xstrdup(const char *s);
// xstrncpy
// file src/util.h line 77
void xstrncpy(char *dest, const char *source, const unsigned long int dest_size);

struct anonymous$19
{
  // _call_addr
  void *_call_addr;
  // _syscall
  signed int _syscall;
  // _arch
  unsigned int _arch;
};

struct anonymous$17
{
  // si_addr
  void *si_addr;
  // si_addr_lsb
  signed short int si_addr_lsb;
};

struct anonymous$10
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous$11
{
  // id
  signed short int id;
  // x
  signed int x;
  // y
  signed int y;
  // z
  signed int z;
  // bstate
  unsigned long int bstate;
};

struct anonymous
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

struct anonymous$24
{
  // rm_so
  signed int rm_so;
  // rm_eo
  signed int rm_eo;
};

struct anonymous$13
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
};

struct anonymous$16
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_status
  signed int si_status;
  // si_utime
  signed long int si_utime;
  // si_stime
  signed long int si_stime;
};

union sigval
{
  // sival_int
  signed int sival_int;
  // sival_ptr
  void *sival_ptr;
};

struct anonymous$15
{
  // si_pid
  signed int si_pid;
  // si_uid
  unsigned int si_uid;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$14
{
  // si_tid
  signed int si_tid;
  // si_overrun
  signed int si_overrun;
  // si_sigval
  union sigval si_sigval;
};

struct anonymous$18
{
  // si_band
  signed long int si_band;
  // si_fd
  signed int si_fd;
};

union anonymous$20
{
  // _pad
  signed int _pad[28l];
  // _kill
  struct anonymous$13 _kill;
  // _timer
  struct anonymous$14 _timer;
  // _rt
  struct anonymous$15 _rt;
  // _sigchld
  struct anonymous$16 _sigchld;
  // _sigfault
  struct anonymous$17 _sigfault;
  // _sigpoll
  struct anonymous$18 _sigpoll;
  // _sigsys
  struct anonymous$19 _sigsys;
};

struct anonymous$12
{
  // si_signo
  signed int si_signo;
  // si_errno
  signed int si_errno;
  // si_code
  signed int si_code;
  // _sifields
  union anonymous$20 _sifields;
};

struct anonymous$25
{
  // attr
  unsigned long int attr;
  // chars
  signed int chars[5l];
};

union anonymous$0
{
  // sbw
  char *sbw;
  // nbw
  unsigned long int nbw;
};

union anonymous$1
{
  // sts
  char *sts;
  // nts
  unsigned long int nts;
};

union anonymous$9
{
  // sa_handler
  void (*sa_handler)(signed int);
  // sa_sigaction
  void (*sa_sigaction)(signed int, struct anonymous$12 *, void *);
};

union anonymous$8
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
};

union anonymous$2
{
  // __u6_addr8
  unsigned char __u6_addr8[16l];
  // __u6_addr16
  unsigned short int __u6_addr16[8l];
  // __u6_addr32
  unsigned int __u6_addr32[4l];
};

union anonymous$3
{
  // __size
  char __size[4l];
  // __align
  signed int __align;
};

union anonymous$22
{
  // metro_code
  signed int metro_code;
  // dma_code
  signed int dma_code;
};

union anonymous$4
{
  // __data
  struct anonymous __data;
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

union anonymous$5
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

struct Field_
{
  // field
  const char *field;
  // value
  char *value;
  // colorlbl
  struct GColors_ * (*colorlbl)(void);
  // colorval
  struct GColors_ * (*colorval)(void);
  // oneliner
  signed short int oneliner;
};

struct GAgentItem_
{
  // agent
  char *agent;
};

struct GAgents_
{
  // size
  signed int size;
  // items
  struct GAgentItem_ *items;
};

struct GColorPair_
{
  // idx
  signed short int idx;
  // fg
  signed short int fg;
  // bg
  signed short int bg;
};

struct GColors_
{
  // item
  enum CSTM_COLORS item;
  // pair
  struct GColorPair_ *pair;
  // attr
  signed int attr;
  // module
  signed short int module;
};

struct GConf_
{
  // date_format
  char *date_format;
  // debug_log
  char *debug_log;
  // geoip_database
  char *geoip_database;
  // html_report_title
  char *html_report_title;
  // iconfigfile
  char *iconfigfile;
  // ifile
  char *ifile;
  // ignore_ips
  char *ignore_ips[64l];
  // ignore_panels
  char *ignore_panels[13l];
  // ignore_referers
  char *ignore_referers[64l];
  // invalid_requests_log
  char *invalid_requests_log;
  // log_format
  char *log_format;
  // output_format
  char *output_format;
  // sort_panels
  char *sort_panels[13l];
  // time_format
  char *time_format;
  // colors
  const char *colors[64l];
  // static_files
  const char *static_files[64l];
  // all_static_files
  signed int all_static_files;
  // append_method
  signed int append_method;
  // append_protocol
  signed int append_protocol;
  // bandwidth
  signed int bandwidth;
  // client_err_to_unique_count
  signed int client_err_to_unique_count;
  // code444_as_404
  signed int code444_as_404;
  // color_scheme
  signed int color_scheme;
  // double_decode
  signed int double_decode;
  // enable_html_resolver
  signed int enable_html_resolver;
  // geo_db
  signed int geo_db;
  // hl_header
  signed int hl_header;
  // ignore_crawlers
  signed int ignore_crawlers;
  // ignore_qstr
  signed int ignore_qstr;
  // list_agents
  signed int list_agents;
  // load_conf_dlg
  signed int load_conf_dlg;
  // load_global_config
  signed int load_global_config;
  // mouse_support
  signed int mouse_support;
  // no_color
  signed int no_color;
  // no_column_names
  signed int no_column_names;
  // no_csv_summary
  signed int no_csv_summary;
  // no_progress
  signed int no_progress;
  // output_html
  signed int output_html;
  // real_os
  signed int real_os;
  // serve_usecs
  signed int serve_usecs;
  // skip_term_resolver
  signed int skip_term_resolver;
  // color_idx
  signed int color_idx;
  // ignore_ip_idx
  signed int ignore_ip_idx;
  // ignore_panel_idx
  signed int ignore_panel_idx;
  // ignore_referer_idx
  signed int ignore_referer_idx;
  // sort_panel_idx
  signed int sort_panel_idx;
  // static_file_idx
  signed int static_file_idx;
  // static_file_max_len
  unsigned long int static_file_max_len;
  // db_path
  char *db_path;
  // xmmap
  signed long int xmmap;
  // cache_lcnum
  signed int cache_lcnum;
  // cache_ncnum
  signed int cache_ncnum;
  // compression
  signed int compression;
  // keep_db_files
  signed int keep_db_files;
  // load_from_disk
  signed int load_from_disk;
  // tune_bnum
  signed int tune_bnum;
  // tune_lmemb
  signed int tune_lmemb;
  // tune_nmemb
  signed int tune_nmemb;
};

struct GDashData_
{
  // metrics
  struct GMetrics *metrics;
  // is_subitem
  signed short int is_subitem;
};

struct GDashModule_
{
  // data
  struct GDashData_ *data;
  // module
  enum MODULES module;
  // head
  const char *head;
  // desc
  const char *desc;
  // alloc_data
  signed int alloc_data;
  // dash_size
  signed int dash_size;
  // data_len
  signed int data_len;
  // hits_len
  signed int hits_len;
  // holder_size
  signed int holder_size;
  // ht_size
  signed int ht_size;
  // idx_data
  signed int idx_data;
  // max_hits
  signed int max_hits;
  // method_len
  signed int method_len;
  // perc_len
  signed int perc_len;
  // visitors_len
  signed int visitors_len;
  // pos_y
  unsigned short int pos_y;
};

struct GDashRender_
{
  // win
  struct _win_st$2 *win;
  // y
  signed int y;
  // w
  signed int w;
  // idx
  signed int idx;
  // sel
  signed int sel;
};

struct GDash_
{
  // total_alloc
  signed int total_alloc;
  // module
  struct GDashModule_ module[13l];
};

struct GDataMap_
{
  // data
  signed int data;
  // uniq
  signed int uniq;
  // root
  signed int root;
};

struct GDnsQueue_
{
  // head
  signed int head;
  // tail
  signed int tail;
  // size
  signed int size;
  // capacity
  signed int capacity;
  // buffer
  char buffer[400l][1025l];
};

struct GDnsThread_
{
  // not_empty
  union anonymous$4 not_empty;
  // not_full
  union anonymous$4 not_full;
  // mutex
  union anonymous$5 mutex;
  // thread
  unsigned long int thread;
};

struct GEnum_
{
  // str
  const char *str;
  // idx
  signed int idx;
};

struct GFind_
{
  // module
  enum MODULES module;
  // pattern
  char *pattern;
  // next_idx
  signed int next_idx;
  // next_parent_idx
  signed int next_parent_idx;
  // next_sub_idx
  signed int next_sub_idx;
  // look_in_sub
  signed int look_in_sub;
  // done
  signed int done;
  // icase
  signed int icase;
};

struct GHolderItem_
{
  // sub_list
  struct GSubList_ *sub_list;
  // metrics
  struct GMetrics *metrics;
};

struct GHolder_
{
  // items
  struct GHolderItem_ *items;
  // module
  enum MODULES module;
  // idx
  signed int idx;
  // holder_size
  signed int holder_size;
  // ht_size
  signed int ht_size;
  // sub_items_size
  signed int sub_items_size;
};

struct GItem_
{
  // name
  char *name;
  // checked
  signed int checked;
};

struct GKeyData_
{
  // data
  void *data;
  // data_key
  void *data_key;
  // data_nkey
  signed int data_nkey;
  // root
  void *root;
  // root_key
  void *root_key;
  // root_nkey
  signed int root_nkey;
  // uniq_key
  void *uniq_key;
  // uniq_nkey
  signed int uniq_nkey;
};

struct GLogItem_
{
  // agent
  char *agent;
  // browser
  char *browser;
  // browser_type
  char *browser_type;
  // continent
  char *continent;
  // country
  char *country;
  // date
  char *date;
  // host
  char *host;
  // keyphrase
  char *keyphrase;
  // method
  char *method;
  // os
  char *os;
  // os_type
  char *os_type;
  // protocol
  char *protocol;
  // qstr
  char *qstr;
  // ref
  char *ref;
  // req
  char *req;
  // req_key
  char *req_key;
  // status
  char *status;
  // time
  char *time;
  // uniq_key
  char *uniq_key;
  // site
  char site[512l];
  // resp_size
  unsigned long int resp_size;
  // serve_time
  unsigned long int serve_time;
  // type_ip
  signed int type_ip;
  // is_404
  signed int is_404;
  // is_static
  signed int is_static;
  // uniq_nkey
  signed int uniq_nkey;
  // agent_nkey
  signed int agent_nkey;
};

struct GLog_
{
  // excluded_ip
  unsigned int excluded_ip;
  // invalid
  unsigned int invalid;
  // offset
  unsigned int offset;
  // processed
  unsigned int processed;
  // valid
  unsigned int valid;
  // resp_size
  unsigned long long int resp_size;
  // load_from_disk_only
  unsigned short int load_from_disk_only;
  // piping
  unsigned short int piping;
  // items
  struct GLogItem_ *items;
};

struct GMenu_$0
{
  // win
  struct _win_st$0 *win;
  // count
  signed int count;
  // size
  signed int size;
  // idx
  signed int idx;
  // start
  signed int start;
  // h
  signed int h;
  // w
  signed int w;
  // x
  signed int x;
  // y
  signed int y;
  // multiple
  unsigned short int multiple;
  // selectable
  unsigned short int selectable;
  // status
  unsigned short int status;
  // items
  struct GItem_ *items;
};

struct GMenu_
{
  // win
  struct _win_st *win;
  // count
  signed int count;
  // size
  signed int size;
  // idx
  signed int idx;
  // start
  signed int start;
  // h
  signed int h;
  // w
  signed int w;
  // x
  signed int x;
  // y
  signed int y;
  // multiple
  unsigned short int multiple;
  // selectable
  unsigned short int selectable;
  // status
  unsigned short int status;
  // items
  struct GItem_ *items;
};

struct GMetrics
{
  // id
  unsigned char id;
  // data
  char *data;
  // method
  char *method;
  // protocol
  char *protocol;
  // percent
  float percent;
  // hits
  signed int hits;
  // visitors
  signed int visitors;
  // bw
  union anonymous$0 bw;
  // avgts
  union anonymous$1 avgts;
  // cumts
  union anonymous$1 cumts;
  // maxts
  union anonymous$1 maxts;
};

struct GOutput_
{
  // module
  enum MODULES module;
  // visitors
  signed char visitors;
  // hits
  signed char hits;
  // percent
  signed char percent;
  // bw
  signed char bw;
  // avgts
  signed char avgts;
  // cumts
  signed char cumts;
  // maxts
  signed char maxts;
  // protocol
  signed char protocol;
  // method
  signed char method;
  // data
  signed char data;
  // graph
  signed char graph;
  // sub_graph
  signed char sub_graph;
};

struct GPanel_$0
{
  // module
  enum MODULES module;
  // render
  void (*render)(struct _IO_FILE *, struct GHolder_ *, signed int);
};

struct GPanel_
{
  // module
  enum MODULES module;
  // insert
  void (*insert)(struct GRawDataItem_, struct GHolder_ *, struct GPanel_ *);
  // holder_callback
  void (*holder_callback)(struct GHolder_ *);
  // lookup
  void (*lookup)(struct GRawDataItem_);
};

struct GPanel_$1
{
  // module
  enum MODULES module;
  // render
  void (*render)(struct _IO_FILE *, struct GHolder_ *, signed int, signed int, signed int, struct GPanel_$1 *, struct GOutput_ *);
  // metrics_callback
  void (*metrics_callback)(struct GMetrics *);
  // clabel
  const char *clabel;
};

struct GParse_
{
  // module
  enum MODULES module;
  // key_data
  signed int (*key_data)(struct GKeyData_ *, struct GLogItem_ *);
  // datamap
  void (*datamap)(signed int, const char *, enum MODULES);
  // rootmap
  void (*rootmap)(signed int, const char *, enum MODULES);
  // hits
  void (*hits)(signed int, signed int, signed int, enum MODULES);
  // visitor
  void (*visitor)(signed int, enum MODULES);
  // bw
  void (*bw)(signed int, unsigned long int, enum MODULES);
  // cumts
  void (*cumts)(signed int, unsigned long int, enum MODULES);
  // maxts
  void (*maxts)(signed int, unsigned long int, enum MODULES);
  // method
  void (*method)(signed int, const char *, enum MODULES);
  // protocol
  void (*protocol)(signed int, const char *, enum MODULES);
  // agent
  void (*agent)(signed int, signed int, enum MODULES);
};

struct GPreConfDate_
{
  // apache
  const char *apache;
  // w3c
  const char *w3c;
  // usec
  const char *usec;
};

struct GPreConfLog_
{
  // combined
  const char *combined;
  // vcombined
  const char *vcombined;
  // common
  const char *common;
  // vcommon
  const char *vcommon;
  // w3c
  const char *w3c;
  // cloudfront
  const char *cloudfront;
  // cloudstorage
  const char *cloudstorage;
  // awselb
  const char *awselb;
};

struct GPreConfTime_
{
  // fmt24
  const char *fmt24;
  // usec
  const char *usec;
};

struct GRawDataItem_
{
  // key
  void *key;
  // value
  void *value;
};

struct GRawData_
{
  // items
  struct GRawDataItem_ *items;
  // module
  enum MODULES module;
  // idx
  signed int idx;
  // size
  signed int size;
};

struct GSLList_
{
  // data
  void *data;
  // next
  struct GSLList_ *next;
};

struct GScrollModule_
{
  // scroll
  signed int scroll;
  // offset
  signed int offset;
};

struct GScroll_
{
  // module
  struct GScrollModule_ module[13l];
  // current
  enum MODULES current;
  // dash
  signed int dash;
  // expanded
  signed int expanded;
};

struct GSort_
{
  // module
  enum MODULES module;
  // field
  enum GSortField_ field;
  // sort
  enum GSortOrder_ sort;
};

struct GSpinner_$0
{
  // label
  const char *label;
  // color
  struct GColors_ * (*color)(void);
  // curses
  signed int curses;
  // spin_x
  signed int spin_x;
  // w
  signed int w;
  // x
  signed int x;
  // y
  signed int y;
  // mutex
  union anonymous$5 mutex;
  // thread
  unsigned long int thread;
  // processed
  unsigned int *processed;
  // win
  struct _win_st$2 *win;
  // state
  enum anonymous$7 state;
};

struct GSpinner_$1
{
  // label
  const char *label;
  // color
  struct GColors_ * (*color)(void);
  // curses
  signed int curses;
  // spin_x
  signed int spin_x;
  // w
  signed int w;
  // x
  signed int x;
  // y
  signed int y;
  // mutex
  union anonymous$5 mutex;
  // thread
  unsigned long int thread;
  // processed
  unsigned int *processed;
  // win
  struct _win_st$1 *win;
  // state
  enum anonymous$7 state;
};

struct GSpinner_
{
  // label
  const char *label;
  // color
  struct GColors_ * (*color)(void);
  // curses
  signed int curses;
  // spin_x
  signed int spin_x;
  // w
  signed int w;
  // x
  signed int x;
  // y
  signed int y;
  // mutex
  union anonymous$5 mutex;
  // thread
  unsigned long int thread;
  // processed
  unsigned int *processed;
  // win
  struct _win_st *win;
  // state
  enum anonymous$7 state;
};

struct GStorageMetrics_
{
  // keymap
  void *keymap;
  // datamap
  void *datamap;
  // rootmap
  void *rootmap;
  // uniqmap
  void *uniqmap;
  // hits
  void *hits;
  // visitors
  void *visitors;
  // bw
  void *bw;
  // cumts
  void *cumts;
  // maxts
  void *maxts;
  // methods
  void *methods;
  // protocols
  void *protocols;
  // agents
  void *agents;
};

struct GStorage_
{
  // module
  enum MODULES module;
  // metrics
  struct GStorageMetrics_ *metrics;
};

struct GSubItem_
{
  // module
  enum MODULES module;
  // metrics
  struct GMetrics *metrics;
  // prev
  struct GSubItem_ *prev;
  // next
  struct GSubItem_ *next;
};

struct GSubList_
{
  // size
  signed int size;
  // head
  struct GSubItem_ *head;
  // tail
  struct GSubItem_ *tail;
};

struct GeoIPRecordTag
{
  // country_code
  char *country_code;
  // country_code3
  char *country_code3;
  // country_name
  char *country_name;
  // region
  char *region;
  // city
  char *city;
  // postal_code
  char *postal_code;
  // latitude
  float latitude;
  // longitude
  float longitude;
  // $anon0
  union anonymous$22 $anon0;
  // area_code
  signed int area_code;
  // charset
  signed int charset;
  // continent_code
  char *continent_code;
  // netmask
  signed int netmask;
};

struct GeoIPTag
{
  // GeoIPDatabase
  struct _IO_FILE *GeoIPDatabase;
  // file_path
  char *file_path;
  // cache
  unsigned char *cache;
  // index_cache
  unsigned char *index_cache;
  // databaseSegments
  unsigned int *databaseSegments;
  // databaseType
  char databaseType;
  // mtime
  signed long int mtime;
  // flags
  signed int flags;
  // size
  signed long int size;
  // record_length
  char record_length;
  // charset
  signed int charset;
  // record_iter
  signed int record_iter;
  // netmask
  signed int netmask;
  // last_mtime_check
  signed long int last_mtime_check;
  // dyn_seg_size
  signed long int dyn_seg_size;
  // ext_flags
  unsigned int ext_flags;
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

struct pdat
{
  // _pad_y
  signed short int _pad_y;
  // _pad_x
  signed short int _pad_x;
  // _pad_top
  signed short int _pad_top;
  // _pad_left
  signed short int _pad_left;
  // _pad_bottom
  signed short int _pad_bottom;
  // _pad_right
  signed short int _pad_right;
};

struct _win_st$2
{
  // _cury
  signed short int _cury;
  // _curx
  signed short int _curx;
  // _maxy
  signed short int _maxy;
  // _maxx
  signed short int _maxx;
  // _begy
  signed short int _begy;
  // _begx
  signed short int _begx;
  // _flags
  signed short int _flags;
  // _attrs
  unsigned long int _attrs;
  // _bkgd
  unsigned long int _bkgd;
  // _notimeout
  _Bool _notimeout;
  // _clear
  _Bool _clear;
  // _leaveok
  _Bool _leaveok;
  // _scroll
  _Bool _scroll;
  // _idlok
  _Bool _idlok;
  // _idcok
  _Bool _idcok;
  // _immed
  _Bool _immed;
  // _sync
  _Bool _sync;
  // _use_keypad
  _Bool _use_keypad;
  // _delay
  signed int _delay;
  // _line
  struct ldat *_line;
  // _regtop
  signed short int _regtop;
  // _regbottom
  signed short int _regbottom;
  // _parx
  signed int _parx;
  // _pary
  signed int _pary;
  // _parent
  struct _win_st$2 *_parent;
  // _pad
  struct pdat _pad;
  // _yoffset
  signed short int _yoffset;
  // _bkgrnd
  struct anonymous$25 _bkgrnd;
};

struct _win_st$0
{
  // _cury
  signed short int _cury;
  // _curx
  signed short int _curx;
  // _maxy
  signed short int _maxy;
  // _maxx
  signed short int _maxx;
  // _begy
  signed short int _begy;
  // _begx
  signed short int _begx;
  // _flags
  signed short int _flags;
  // _attrs
  unsigned long int _attrs;
  // _bkgd
  unsigned long int _bkgd;
  // _notimeout
  _Bool _notimeout;
  // _clear
  _Bool _clear;
  // _leaveok
  _Bool _leaveok;
  // _scroll
  _Bool _scroll;
  // _idlok
  _Bool _idlok;
  // _idcok
  _Bool _idcok;
  // _immed
  _Bool _immed;
  // _sync
  _Bool _sync;
  // _use_keypad
  _Bool _use_keypad;
  // _delay
  signed int _delay;
  // _line
  struct ldat *_line;
  // _regtop
  signed short int _regtop;
  // _regbottom
  signed short int _regbottom;
  // _parx
  signed int _parx;
  // _pary
  signed int _pary;
  // _parent
  struct _win_st$0 *_parent;
  // _pad
  struct pdat _pad;
  // _yoffset
  signed short int _yoffset;
};

struct _win_st$1
{
  // _cury
  signed short int _cury;
  // _curx
  signed short int _curx;
  // _maxy
  signed short int _maxy;
  // _maxx
  signed short int _maxx;
  // _begy
  signed short int _begy;
  // _begx
  signed short int _begx;
  // _flags
  signed short int _flags;
  // _attrs
  unsigned long int _attrs;
  // _bkgd
  unsigned long int _bkgd;
  // _notimeout
  _Bool _notimeout;
  // _clear
  _Bool _clear;
  // _leaveok
  _Bool _leaveok;
  // _scroll
  _Bool _scroll;
  // _idlok
  _Bool _idlok;
  // _idcok
  _Bool _idcok;
  // _immed
  _Bool _immed;
  // _sync
  _Bool _sync;
  // _use_keypad
  _Bool _use_keypad;
  // _delay
  signed int _delay;
  // _line
  struct ldat *_line;
  // _regtop
  signed short int _regtop;
  // _regbottom
  signed short int _regbottom;
  // _parx
  signed int _parx;
  // _pary
  signed int _pary;
  // _parent
  struct _win_st$1 *_parent;
  // _pad
  struct pdat _pad;
  // _yoffset
  signed short int _yoffset;
};

struct _win_st
{
  // _cury
  signed short int _cury;
  // _curx
  signed short int _curx;
  // _maxy
  signed short int _maxy;
  // _maxx
  signed short int _maxx;
  // _begy
  signed short int _begy;
  // _begx
  signed short int _begx;
  // _flags
  signed short int _flags;
  // _attrs
  unsigned long int _attrs;
  // _bkgd
  unsigned long int _bkgd;
  // _notimeout
  _Bool _notimeout;
  // _clear
  _Bool _clear;
  // _leaveok
  _Bool _leaveok;
  // _scroll
  _Bool _scroll;
  // _idlok
  _Bool _idlok;
  // _idcok
  _Bool _idcok;
  // _immed
  _Bool _immed;
  // _sync
  _Bool _sync;
  // _use_keypad
  _Bool _use_keypad;
  // _delay
  signed int _delay;
  // _line
  struct ldat *_line;
  // _regtop
  signed short int _regtop;
  // _regbottom
  signed short int _regbottom;
  // _parx
  signed int _parx;
  // _pary
  signed int _pary;
  // _parent
  struct _win_st *_parent;
  // _pad
  struct pdat _pad;
  // _yoffset
  signed short int _yoffset;
};

struct in6_addr
{
  // __in6_u
  union anonymous$2 __in6_u;
};

struct in6_addr$0
{
  // __in6_u
  union anonymous$8 __in6_u;
};

struct in_addr
{
  // s_addr
  unsigned int s_addr;
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

union pthread_attr_t
{
  // __size
  char __size[56l];
  // __align
  signed long int __align;
};

struct re_pattern_buffer
{
  // __buffer
  unsigned char *__buffer;
  // __allocated
  unsigned long int __allocated;
  // __used
  unsigned long int __used;
  // __syntax
  unsigned long int __syntax;
  // __fastmap
  char *__fastmap;
  // __translate
  unsigned char *__translate;
  // re_nsub
  unsigned long int re_nsub;
  // __can_be_null
  unsigned int __can_be_null : 1;
  // __regs_allocated
  unsigned int __regs_allocated : 2;
  // __fastmap_accurate
  unsigned int __fastmap_accurate : 1;
  // __no_sub
  unsigned int __no_sub : 1;
  // __not_bol
  unsigned int __not_bol : 1;
  // __not_eol
  unsigned int __not_eol : 1;
  // __newline_anchor
  unsigned int __newline_anchor : 1;
};

struct sigaction
{
  // __sigaction_handler
  union anonymous$9 __sigaction_handler;
  // sa_mask
  struct anonymous$10 sa_mask;
  // sa_flags
  signed int sa_flags;
  // sa_restorer
  void (*sa_restorer)(void);
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

struct sockaddr_in6$0
{
  // sin6_family
  unsigned short int sin6_family;
  // sin6_port
  unsigned short int sin6_port;
  // sin6_flowinfo
  unsigned int sin6_flowinfo;
  // sin6_addr
  struct in6_addr$0 sin6_addr;
  // sin6_scope_id
  unsigned int sin6_scope_id;
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

struct tm$0
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
  // __tm_gmtoff
  signed long int __tm_gmtoff;
  // __tm_zone
  const char *__tm_zone;
};

struct tm$2
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
  // __tm_gmtoff
  signed long int __tm_gmtoff;
  // __tm_zone
  const char *__tm_zone;
};

struct tm$1
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
  // __tm_gmtoff
  signed long int __tm_gmtoff;
  // __tm_zone
  const char *__tm_zone;
};


// COLORS
// file /usr/include/curses.h line 1397
extern signed int COLORS;
// CSTM_COLORS
// file src/color.c line 43
static struct GEnum_ CSTM_COLORS[25l] = { { .str="COLOR_MTRC_HITS", .idx=1 }, { .str="COLOR_MTRC_VISITORS", .idx=2 }, { .str="COLOR_MTRC_PERC", .idx=10 }, { .str="COLOR_MTRC_BW", .idx=4 }, { .str="COLOR_MTRC_AVGTS", .idx=5 }, { .str="COLOR_MTRC_CUMTS", .idx=6 }, { .str="COLOR_MTRC_MAXTS", .idx=7 }, { .str="COLOR_MTRC_PROT", .idx=8 }, { .str="COLOR_MTRC_MTHD", .idx=9 }, { .str="COLOR_MTRC_DATA", .idx=3 }, { .str="COLOR_MTRC_PERC_MAX", .idx=11 }, 
    { .str="COLOR_PANEL_COLS", .idx=12 }, { .str="COLOR_BARS", .idx=13 }, { .str="COLOR_ERROR", .idx=14 }, { .str="COLOR_SELECTED", .idx=15 }, { .str="COLOR_PANEL_ACTIVE", .idx=16 }, { .str="COLOR_PANEL_HEADER", .idx=17 }, { .str="COLOR_PANEL_DESC", .idx=18 }, { .str="COLOR_OVERALL_LBLS", .idx=19 }, { .str="COLOR_OVERALL_VALS", .idx=20 }, { .str="COLOR_OVERALL_PATH", .idx=21 }, { .str="COLOR_ACTIVE_LABEL", .idx=22 }, { .str="COLOR_BG", .idx=23 }, { .str="COLOR_DEFAULT", .idx=24 }, { .str="COLOR_PROGRESS", .idx=25 } };
// FIELD
// file src/sort.c line 56
static struct GEnum_ FIELD[9l] = { { .str="BY_HITS", .idx=0 }, { .str="BY_VISITORS", .idx=1 }, { .str="BY_DATA", .idx=2 }, { .str="BY_BW", .idx=3 }, { .str="BY_AVGTS", .idx=4 }, { .str="BY_CUMTS", .idx=5 }, { .str="BY_MAXTS", .idx=6 }, { .str="BY_PROT", .idx=7 }, { .str="BY_MTHD", .idx=8 } };
// LINES
// file /usr/include/curses.h line 1401
extern signed int LINES;
// MODULES
// file src/commons.c line 46
static struct GEnum_ MODULES[13l] = { { .str="VISITORS", .idx=0 }, { .str="REQUESTS", .idx=1 }, { .str="REQUESTS_STATIC", .idx=2 }, { .str="NOT_FOUND", .idx=3 }, { .str="HOSTS", .idx=4 }, { .str="OS", .idx=5 }, { .str="BROWSERS", .idx=6 }, { .str="VISIT_TIMES", .idx=7 }, { .str="REFERRERS", .idx=8 }, { .str="REFERRING_SITES", .idx=9 }, { .str="KEYPHRASES", .idx=10 }, { .str="GEO_LOCATION", .idx=11 }, { .str="STATUS_CODES", .idx=12 } };
// ORDER
// file src/sort.c line 68
static struct GEnum_ ORDER[2l] = { { .str="ASC", .idx=0 }, { .str="DESC", .idx=1 } };
// active_gdns
// file src/goaccess.c line 70
signed int active_gdns = 0;
// browsers
// file src/browsers.c line 36
static const char *browsers[208l][2l] = { { "Xbox One", "Game Systems" }, { "Xbox", "Game Systems" }, { "PlayStation", "Game Systems" }, { "NintendoBrowser", "Game Systems" }, { "Valve Steam", "Game Systems" }, { "Origin", "Game Systems" }, { "Raptr", "Game Systems" }, { "America Online Browser", "Others" }, { "Avant Browser", "Others" }, { "IEMobile", "MSIE" }, { "MSIE", "MSIE" }, { "Trident/7.0", "MSIE" }, { "Edge", "MSIE" }, { "Opera Mini", "Opera" }, { "Opera Mobi", "Opera" }, { "Opera", "Opera" }, { "OPR", "Opera" }, { "OPiOS", "Opera" }, { "Coast", "Opera" }, { "Homebrew", "Others" }, { "APT-HTTP", "Others" }, { "Apt-Cacher", "Others" }, { "Chef Client", "Others" }, { "Huawei", "Others" }, { "HUAWEI", "Others" }, { "BlackBerry", "Others" }, { "BrowserX", "Others" }, { "Dalvik", "Others" }, { "Dillo", "Others" }, { "ELinks", "Others" }, { "Epiphany", "Others" }, { "Firebird", "Others" }, { "Galeon", "Others" }, { "GranParadiso", "Others" }, { "IBrowse", "Others" }, { "K-Meleon", "Others" }, { "Kazehakase", "Others" }, { "Konqueror", "Others" }, { "Links", "Others" }, { "Lynx", "Others" }, { "Midori", "Others" }, { "Minefield", "Others" }, { "Mosaic", "Others" }, { "Netscape", "Others" }, { "SeaMonkey", "Others" }, { "UCBrowser", "Others" }, { "Wget", "Others" }, { "libfetch", "Others" }, { "check_http", "Others" }, { "curl", "Others" }, { "midori", "Others" }, { "w3m", "Others" }, { "Apache", "Others" }, { "Bloglines", "Feeds" }, { "Feedly", "Feeds" }, { "Flipboard", "Feeds" }, { "Netvibes", "Feeds" }, { "NewsBlur", "Feeds" }, { "YandexBlogs", "Feeds" }, { "Camino", "Others" }, { "Iceweasel", "Firefox" }, { "Firefox", "Firefox" }, { "YaBrowser", "Others" }, { "Flock", "Others" }, { "Chrome", "Chrome" }, { "CriOS", "Chrome" }, { "Safari", "Safari" }, { "AdsBot-Google", "Crawlers" }, { "Mediapartners-Google", "Crawlers" }, { "AppEngine-Google", "Crawlers" }, { "Google", "Crawlers" }, { "bingbot", "Crawlers" }, { "msnbot", "Crawlers" }, { "Yandex", "Crawlers" }, { "Baidu", "Crawlers" }, { "Ezooms", "Crawlers" }, { "Twitter", "Crawlers" }, { "Slurp", "Crawlers" }, { "Yahoo", "Crawlers" }, { "Slack", "Crawlers" }, { "AppleBot", "Crawlers" }, { "AhrefsBot", "Crawlers" }, { "Abonti", "Crawlers" }, { "MJ12bot", "Crawlers" }, { "SISTRIX", "Crawlers" }, { "facebook", "Crawlers" }, { "DotBot", "Crawlers" }, { "Speedy Spider", "Crawlers" }, { "Sosospider", "Crawlers" }, { "BPImageWalker", "Crawlers" }, { "Sogou", "Crawlers" }, { "Java", "Crawlers" }, { "Jakarta Commons-HttpClient", "Crawlers" }, 
    { "WBSearchBot", "Crawlers" }, { "SeznamBot", "Crawlers" }, { "DoCoMo", "Crawlers" }, { "TurnitinBot", "Crawlers" }, { "GSLFbot", "Crawlers" }, { "YodaoBot", "Crawlers" }, { "AddThis", "Crawlers" }, { "Purebot", "Crawlers" }, { "ia_archiver", "Crawlers" }, { "Wotbox", "Crawlers" }, { "CCBot", "Crawlers" }, { "findlinks", "Crawlers" }, { "Yeti", "Crawlers" }, { "ichiro", "Crawlers" }, { "Linguee Bot", "Crawlers" }, { "Gigabot", "Crawlers" }, { "BacklinkCrawler", "Crawlers" }, { "netEstate", "Crawlers" }, { "distilator", "Crawlers" }, { "Aboundex", "Crawlers" }, { "UnwindFetchor", "Crawlers" }, { "SEOkicks-Robot", "Crawlers" }, { "psbot", "Crawlers" }, { "SBIder", "Crawlers" }, { "TestNutch", "Crawlers" }, { "DomainCrawler", "Crawlers" }, { "NextGenSearchBot", "Crawlers" }, { "SEOENGWorldBot", "Crawlers" }, { "PiplBot", "Crawlers" }, { "IstellaBot", "Crawlers" }, { "Cityreview", "Crawlers" }, { "heritrix", "Crawlers" }, { "PagePeeker", "Crawlers" }, { "JS-Kit", "Crawlers" }, { "ScreenerBot", "Crawlers" }, { "PagesInventory", "Crawlers" }, { "ShowyouBot", "Crawlers" }, { "SolomonoBot", "Crawlers" }, { "rogerbot", "Crawlers" }, { "fastbot", "Crawlers" }, { "Domnutch", "Crawlers" }, { "MaxPoint", "Crawlers" }, { "NCBot", "Crawlers" }, { "TosCrawler", "Crawlers" }, { "Updownerbot", "Crawlers" }, { "urlwatch", "Crawlers" }, { "IstellaBot", "Crawlers" }, { "OpenWebSpider", "Crawlers" }, { "WordPress", "Crawlers" }, { "yacybot", "Crawlers" }, { "PEAR", "Crawlers" }, { "ZumBot", "Crawlers" }, { "YisouSpider", "Crawlers" }, { "W3C", "Crawlers" }, { "vcheck", "Crawlers" }, { "PycURL", "Crawlers" }, { "PHP", "Crawlers" }, { "PercolateCrawler", "Crawlers" }, { "NING", "Crawlers" }, { "gvfs", "Crawlers" }, { "Crowsnest", "Crawlers" }, { "CatchBot", "Crawlers" }, { "Combine", "Crawlers" }, { "A6-Indexer", "Crawlers" }, { "Altresium", "Crawlers" }, { "AndroidDownloadManager", "Crawlers" }, 
    { "Apache-HttpClient", "Crawlers" }, { "Comodo", "Crawlers" }, { "crawler4j", "Crawlers" }, { "Cricket", "Crawlers" }, { "EC2LinkFinder", "Crawlers" }, { "Embedly", "Crawlers" }, { "envolk", "Crawlers" }, { "libwww-perl", "Crawlers" }, { "ruby", "Crawlers" }, { "Ruby", "Crawlers" }, { "python", "Crawlers" }, { "Python", "Crawlers" }, { "LinkedIn", "Crawlers" }, { "GeoHasher", "Crawlers" }, { "HTMLParser", "Crawlers" }, { "MLBot", "Crawlers" }, { "Jaxified Bot", "Crawlers" }, { "LinkWalker", "Crawlers" }, { "Microsoft-WebDAV", "Crawlers" }, { "nutch", "Crawlers" }, { "PostRank", "Crawlers" }, { "Image", "Crawlers" }, { "Downcast", "Podcasts" }, { "gPodder", "Podcasts" }, { "Instacast", "Podcasts" }, { "iTunes", "Podcasts" }, { "Miro", "Podcasts" }, { "Pocket Casts", "Podcasts" }, { "BashPodder", "Podcasts" }, { "Akregator", "Feeds" }, { "Apple-PubSub", "Feeds" }, { "FeedDemon", "Feeds" }, { "Feedy", "Feeds" }, { "Liferea", "Feeds" }, { "NetNewsWire", "Feeds" }, { "RSSOwl", "Feeds" }, { "Thunderbird", "Feeds" }, { "Vienna", "Feeds" }, { "Windows-RSS-Platform", "Feeds" }, { "newsbeuter", "Feeds" }, { "Fever", "Feeds" }, { "Pingdom.com", "Uptime" }, { "UptimeRobot", "Uptime" }, { "jetmon", "Uptime" }, { "NodeUptime", "Uptime" }, { "NewRelicPinger", "Uptime" }, { "StatusCake", "Uptime" }, { "internetVista", "Uptime" }, { "Mozilla", "Others" } };
// code_type
// file src/util.c line 50
static const char *code_type[5l][2l] = { { "1", "1xx Informational" }, { "2", "2xx Success" }, { "3", "3xx Redirection" }, { "4", "4xx Client Error" }, { "5", "5xx Server Error" } };
// codes
// file src/util.c line 58
static const char *codes[51l][2l] = { { "100", "100 - Continue: Server received the initial part of the request" }, 
    { "101", "101 - Switching Protocols: Client asked to switch protocols" }, 
    { "200", "200 - OK: The request sent by the client was successful" }, 
    { "201", "201 - Created: The request has been fulfilled and created" }, 
    { "202", "202 - Accepted: The request has been accepted for processing" }, 
    { "203", "203 - Non-Authoritative Information: Response from a third party" }, 
    { "204", "204 - No Content: Request did not return any content" }, 
    { "205", "205 - Reset Content: Server asked the client to reset the document" }, 
    { "206", "206 - Partial Content: The partial GET has been successful" }, 
    { "300", "300 - Multiple Choices: Multiple options for the resource" }, 
    { "301", "301 - Moved Permanently: Resource has permanently moved" }, 
    { "302", "302 - Moved Temporarily (redirect)" }, 
    { "303", "303 - See Other Document: The response is at a different URI" }, 
    { "304", "304 - Not Modified: Resource has not been modified" }, 
    { "305", "305 - Use Proxy: Can only be accessed through the proxy" }, 
    { "307", "307 - Temporary Redirect: Resource temporarily moved" }, 
    { "400", "400 - Bad Request: The syntax of the request is invalid" }, 
    { "401", "401 - Unauthorized: Request needs user authentication" }, 
    { "402", "402 - Payment Required" }, { "403", "403 - Forbidden: Server is refusing to respond to it" }, 
    { "404", "404 - Document Not Found: Requested resource could not be found" }, 
    { "405", "405 - Method Not Allowed: Request method not supported" }, 
    { "406", "406 - Not Acceptable" }, { "407", "407 - Proxy Authentication Required" }, 
    { "408", "408 - Request Timeout: Server timed out waiting for the request" }, 
    { "409", "409 - Conflict: Conflict in the request" }, 
    { "410", "410 - Gone: Resource requested is no longer available" }, 
    { "411", "411 - Length Required: Invalid Content-Length" }, 
    { "412", "412 - Precondition Failed: Server does not meet preconditions" }, 
    { "413", "413 - Requested Entity Too Long" }, 
    { "414", "414 - Requested Filename Too Long" }, 
    { "415", "415 - Unsupported Media Type: Media type is not supported" }, 
    { "416", "416 - Requested Range Not Satisfiable: Cannot supply that portion" }, 
    { "417", "417 - Expectation Failed" }, { "444", "444 - (Nginx) Connection closed without sending any headers" }, 
    { "494", "494 - (Nginx) Request Header Too Large" }, 
    { "495", "495 - (Nginx) SSL client certificate error" }, 
    { "496", "496 - (Nginx) Client didn't provide certificate" }, 
    { "497", "497 - (Nginx) HTTP request sent to HTTPS port" }, 
    { "499", "499 - (Nginx) Connection closed by client while processing request" }, 
    { "500", "500 - Internal Server Error" }, 
    { "501", "501 - Not Implemented" }, { "502", "502 - Bad Gateway: Received an invalid response from the upstream" }, 
    { "503", "503 - Service Unavailable: The server is currently unavailable" }, 
    { "504", "504 - Gateway Timeout: The upstream server failed to send request" }, 
    { "505", "505 - HTTP Version Not Supported" }, 
    { "520", "520 - CloudFlare - Web server is returning an unknown error" }, 
    { "521", "521 - CloudFlare - Web server is down" }, 
    { "522", "522 - CloudFlare - Connection timed out" }, 
    { "523", "523 - CloudFlare - Origin is unreachable" }, 
    { "524", "524 - CloudFlare - A timeout occured" } };
// color_list
// file src/color.c line 39
static struct GSLList_ *color_list = (struct GSLList_ *)(void *)0;
// colors256_green
// file src/color.c line 107
static const char *colors256_green[33l] = { "COLOR_MTRC_HITS     color7:color-1", "COLOR_MTRC_VISITORS color8:color-1", "COLOR_MTRC_DATA     color7:color-1", "COLOR_MTRC_BW       color8:color-1", "COLOR_MTRC_AVGTS    color8:color-1", "COLOR_MTRC_CUMTS    color8:color-1", "COLOR_MTRC_MAXTS    color8:color-1", "COLOR_MTRC_PROT     color8:color-1", "COLOR_MTRC_MTHD     color7:color-1", "COLOR_MTRC_PERC     color0:color-1 bold", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC     color1:color-1 bold OS", 
    "COLOR_MTRC_PERC     color1:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISIT_TIMES", 
    "COLOR_MTRC_PERC_MAX color0:color-1 bold", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold OS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISIT_TIMES", 
    "COLOR_PANEL_COLS    color7:color-1", "COLOR_BARS          color7:color-1", "COLOR_ERROR         color7:color1", "COLOR_SELECTED      color7:color8", "COLOR_PANEL_ACTIVE  color0:color3", "COLOR_PANEL_HEADER  color0:color35", "COLOR_PANEL_DESC    color7:color-1", "COLOR_OVERALL_LBLS  color7:color-1 bold", 
    "COLOR_OVERALL_VALS  color6:color-1 bold", 
    "COLOR_OVERALL_PATH  color3:color-1", "COLOR_ACTIVE_LABEL  color7:color35", "COLOR_BG            color7:color-1", "COLOR_DEFAULT       color7:color-1", "COLOR_PROGRESS      color0:color6" };
// colors256_mono
// file src/color.c line 71
static const char *colors256_mono[33l] = { "COLOR_MTRC_HITS     color7:color-1", "COLOR_MTRC_VISITORS color8:color-1", "COLOR_MTRC_DATA     color7:color-1", "COLOR_MTRC_BW       color8:color-1", "COLOR_MTRC_AVGTS    color8:color-1", "COLOR_MTRC_CUMTS    color8:color-1", "COLOR_MTRC_MAXTS    color8:color-1", "COLOR_MTRC_PROT     color8:color-1", "COLOR_MTRC_MTHD     color7:color-1", "COLOR_MTRC_PERC     color0:color-1 bold", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC     color1:color-1 bold OS", 
    "COLOR_MTRC_PERC     color1:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISIT_TIMES", 
    "COLOR_MTRC_PERC_MAX color0:color-1 bold", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold OS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISIT_TIMES", 
    "COLOR_PANEL_COLS    color7:color-1", "COLOR_BARS          color7:color-1", "COLOR_ERROR         color7:color1", "COLOR_SELECTED      color7:color8", "COLOR_PANEL_ACTIVE  color0:color3", "COLOR_PANEL_HEADER  color0:color7", "COLOR_PANEL_DESC    color7:color-1", "COLOR_OVERALL_LBLS  color7:color-1 bold", 
    "COLOR_OVERALL_VALS  color6:color-1 bold", 
    "COLOR_OVERALL_PATH  color3:color-1", "COLOR_ACTIVE_LABEL  color4:color7", "COLOR_BG            color7:color-1", "COLOR_DEFAULT       color7:color-1", "COLOR_PROGRESS      color0:color6" };
// colors8_green
// file src/color.c line 179
static const char *colors8_green[33l] = { "COLOR_MTRC_HITS     color7:color-1", "COLOR_MTRC_VISITORS color0:color-1 bold", 
    "COLOR_MTRC_DATA     color7:color-1", "COLOR_MTRC_BW       color0:color-1 bold", 
    "COLOR_MTRC_AVGTS    color0:color-1 bold", 
    "COLOR_MTRC_CUMTS    color0:color-1 bold", 
    "COLOR_MTRC_MAXTS    color0:color-1 bold", 
    "COLOR_MTRC_PROT     color0:color-1 bold", 
    "COLOR_MTRC_MTHD     color7:color-1 ", "COLOR_MTRC_PERC     color0:color-1 bold", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC     color1:color-1 bold OS", 
    "COLOR_MTRC_PERC     color1:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISIT_TIMES", 
    "COLOR_MTRC_PERC_MAX color0:color-1 bold", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold OS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISIT_TIMES", 
    "COLOR_PANEL_COLS    color7:color-1", "COLOR_BARS          color2:color-1", "COLOR_ERROR         color7:color1", "COLOR_SELECTED      color0:color7", "COLOR_PANEL_ACTIVE  color0:color3", "COLOR_PANEL_HEADER  color0:color2", "COLOR_PANEL_DESC    color7:color-1", "COLOR_OVERALL_LBLS  color7:color-1 bold", 
    "COLOR_OVERALL_VALS  color6:color-1", "COLOR_OVERALL_PATH  color3:color-1", "COLOR_ACTIVE_LABEL  color0:color2", "COLOR_BG            color7:color-1", "COLOR_DEFAULT       color7:color-1", "COLOR_PROGRESS      color0:color6" };
// colors8_mono
// file src/color.c line 143
static const char *colors8_mono[33l] = { "COLOR_MTRC_HITS     color7:color-1", "COLOR_MTRC_VISITORS color0:color-1 bold", 
    "COLOR_MTRC_DATA     color7:color-1", "COLOR_MTRC_BW       color0:color-1 bold", 
    "COLOR_MTRC_AVGTS    color0:color-1 bold", 
    "COLOR_MTRC_CUMTS    color0:color-1 bold", 
    "COLOR_MTRC_MAXTS    color0:color-1 bold", 
    "COLOR_MTRC_PROT     color0:color-1 bold", 
    "COLOR_MTRC_MTHD     color7:color-1 ", "COLOR_MTRC_PERC     color0:color-1 bold", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC     color1:color-1 bold OS", 
    "COLOR_MTRC_PERC     color1:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC     color1:color-1 bold VISIT_TIMES", 
    "COLOR_MTRC_PERC_MAX color0:color-1 bold", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISITORS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold OS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold BROWSERS", 
    "COLOR_MTRC_PERC_MAX color3:color-1 bold VISIT_TIMES", 
    "COLOR_PANEL_COLS    color7:color-1", "COLOR_BARS          color7:color-1", "COLOR_ERROR         color7:color1", "COLOR_SELECTED      color0:color7", "COLOR_PANEL_ACTIVE  color0:color3", "COLOR_PANEL_HEADER  color0:color7", "COLOR_PANEL_DESC    color7:color-1", "COLOR_OVERALL_LBLS  color7:color-1 bold", 
    "COLOR_OVERALL_VALS  color6:color-1", "COLOR_OVERALL_PATH  color3:color-1", "COLOR_ACTIVE_LABEL  color4:color7", "COLOR_BG            color7:color-1", "COLOR_DEFAULT       color7:color-1", "COLOR_PROGRESS      color0:color6" };
// conf
// file src/goaccess.c line 66
struct GConf_ conf = { .date_format=((char *)NULL), .debug_log=((char *)NULL), .geoip_database=((char *)NULL),
    .html_report_title=((char *)NULL), .iconfigfile=((char *)NULL),
    .ifile=((char *)NULL), .ignore_ips={ ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL) },
    .ignore_panels={ ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL) },
    .ignore_referers={ ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL) },
    .invalid_requests_log=((char *)NULL),
    .log_format=((char *)NULL),
    .output_format=((char *)NULL), .sort_panels={ ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL), ((char *)NULL) },
    .time_format=((char *)NULL),
    .colors={ ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL) }, .static_files={ ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL), ((const char *)NULL) },
    .all_static_files=0,
    .append_method=0, .append_protocol=0,
    .bandwidth=0, .client_err_to_unique_count=0, .code444_as_404=0,
    .color_scheme=0, .double_decode=0, .enable_html_resolver=0,
    .geo_db=0, .hl_header=1, .ignore_crawlers=0,
    .ignore_qstr=0, .list_agents=0, .load_conf_dlg=0,
    .load_global_config=0, .mouse_support=0,
    .no_color=0, .no_column_names=0, .no_csv_summary=0,
    .no_progress=0, .output_html=0, .real_os=0,
    .serve_usecs=0, .skip_term_resolver=0, .color_idx=0,
    .ignore_ip_idx=0, .ignore_panel_idx=0, .ignore_referer_idx=0,
    .sort_panel_idx=0, .static_file_idx=0,
    .static_file_max_len=0ul, .db_path=((char *)NULL),
    .xmmap=0l, .cache_lcnum=0, .cache_ncnum=0,
    .compression=0, .keep_db_files=0, .load_from_disk=0,
    .tune_bnum=0, .tune_lmemb=0, .tune_nmemb=0 };
// dash
// file src/goaccess.c line 71
static struct GDash_ *dash;
// date_format
// file src/ui.c line 84
static char *date_format = (char *)(void *)0;
// dates
// file src/settings.c line 52
static const struct GPreConfDate_ dates = { .apache="%d/%b/%Y", .w3c="%Y-%m-%d", .usec="%f" };
// end_proc
// file src/commons.c line 37
signed long int end_proc;
// find_t
// file src/gdashboard.c line 70
static struct GFind_ find_t;
// gdns_queue
// file src/gdns.c line 60
static struct GDnsQueue_ *gdns_queue;
// gdns_thread
// file src/gdns.c line 59
struct GDnsThread_ gdns_thread;
// geo_location_data
// file src/geolocation.c line 36
struct GeoIPTag *geo_location_data;
// gscroll
// file src/goaccess.c line 77
static struct GScroll_ gscroll = { .module={ { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 }, { .scroll=0, .offset=0 } }, .current=(enum MODULES)0,
    .dash=0, .expanded=0 };
// header_win
// file src/goaccess.c line 64
static struct _win_st$1 *header_win;
// help_main
// file src/ui.c line 1477
static const char *help_main[53l] = { "Copyright (C) 2009-2015", "by Gerardo Orellana <hello@goaccess.io>", 
    "http://goaccess.io", "Released under the GNU GPL. See `man` page for more details", 
    "", "GoAccess is an open source real-time web log analyzer and", 
    "interactive viewer that runs in a terminal in *nix systems.", 
    "It provides fast and valuable HTTP statistics for system", 
    "administrators that require a visual server report on the", 
    "fly.", "", "The data collected based on the parsing of the log is", 
    "divided into different modules. Modules are automatically", 
    "generated and presented to the user.", "", "The main dashboard displays general statistics, top", 
    "visitors, requests, browsers, operating systems,", 
    "hosts, etc.", "", "The user can make use of the following keys:", 
    " ^F1^  or ^h^    Main help", " ^F5^            Redraw [main window]", 
    " ^q^             Quit the program, current window or module", 
    " ^o^ or ^ENTER^  Expand selected module", 
    " ^[Shift]0-9^    Set selected module to active", 
    " ^Up^ arrow      Scroll up main dashboard", 
    " ^Down^ arrow    Scroll down main dashboard", 
    " ^j^             Scroll down within expanded module", 
    " ^k^             Scroll up within expanded module", 
    " ^c^             Set or change scheme color", 
    " ^CTRL^ + ^f^    Scroll forward one screen within", 
    "                 active module", " ^CTRL^ + ^b^    Scroll backward one screen within", 
    "                 active module", " ^TAB^           Iterate modules (forward)", 
    " ^SHIFT^ + ^TAB^ Iterate modules (backward)", 
    " ^s^             Sort options for current module", 
    " ^/^             Search across all modules", 
    " ^n^             Find position of the next occurrence", 
    " ^g^             Move to the first item or top of screen", 
    " ^G^             Move to the last item or bottom of screen", 
    "", "Examples can be found by running `man goaccess`.", 
    "", "If you believe you have found a bug, please drop me", 
    "an email with details.", "", "If you have a medium or high traffic website, it", 
    "would be interesting to hear your experience with", 
    "GoAccess, such as generating time, visitors or hits.", 
    "", "Feedback? Just shoot me an email to:", "hello@goaccess.io" };
// holder
// file src/goaccess.c line 72
static struct GHolder_ *holder;
// ht_agent_keys
// file src/glibht.c line 43
struct _GHashTable *ht_agent_keys = (struct _GHashTable *)(void *)0;
// ht_agent_vals
// file src/glibht.c line 44
struct _GHashTable *ht_agent_vals = (struct _GHashTable *)(void *)0;
// ht_hostnames
// file src/glibht.c line 45
struct _GHashTable *ht_hostnames = (struct _GHashTable *)(void *)0;
// ht_storage
// file src/glibht.c line 40
struct GStorage_ *ht_storage;
// ht_unique_keys
// file src/glibht.c line 46
struct _GHashTable *ht_unique_keys = (struct _GHashTable *)(void *)0;
// icons
// file src/output.c line 84
unsigned char icons[3728l] = { (unsigned char)0x40, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x66, (unsigned char)0x61, (unsigned char)0x63, (unsigned char)0x65, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x66, (unsigned char)0x61, (unsigned char)0x6d, (unsigned char)0x69, (unsigned char)0x6c, (unsigned char)0x79, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x27, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6d, (unsigned char)0x6f, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x27, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x73, (unsigned char)0x72, (unsigned char)0x63, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x75, (unsigned char)0x72, (unsigned char)0x6c, (unsigned char)0x28, (unsigned char)0x64, (unsigned char)0x61, (unsigned char)0x74, (unsigned char)0x61, (unsigned char)0x3a, (unsigned char)0x61, (unsigned char)0x70, (unsigned char)0x70, (unsigned char)0x6c, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x61, (unsigned char)0x74, (unsigned char)0x69, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2f, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x66, (unsigned char)0x66, (unsigned char)0x3b, (unsigned char)0x63, (unsigned char)0x68, (unsigned char)0x61, (unsigned char)0x72, (unsigned char)0x73, (unsigned char)0x65, (unsigned char)0x74, (unsigned char)0x3d, (unsigned char)0x75, (unsigned char)0x74, (unsigned char)0x66, (unsigned char)0x2d, (unsigned char)0x38, (unsigned char)0x3b, (unsigned char)0x62, (unsigned char)0x61, (unsigned char)0x73, (unsigned char)0x65, (unsigned char)0x36, (unsigned char)0x34, (unsigned char)0x2c, (unsigned char)0x64, (unsigned char)0x30, (unsigned char)0x39, (unsigned char)0x47, (unsigned char)0x52, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x6a, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x73, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x4a, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x50, (unsigned char)0x55, (unsigned char)0x79, (unsigned char)0x38, (unsigned char)0x79, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x67, (unsigned char)0x44, (unsigned char)0x78, (unsigned char)0x49, (unsigned char)0x4f, (unsigned char)0x63, (unsigned char)0x47, (unsigned char)0x4e, (unsigned char)0x74, (unsigned char)0x59, (unsigned char)0x58, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x6f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x7a, (unsigned char)0x77, (unsigned char)0x33, (unsigned char)0x73, (unsigned char)0x51, (unsigned char)0x76, (unsigned char)0x5a, (unsigned char)0x32, (unsigned char)0x46, (unsigned char)0x7a, (unsigned char)0x63, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x64, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x42, (unsigned char)0x6e, (unsigned char)0x62, (unsigned char)0x48, (unsigned char)0x6c, (unsigned char)0x6d, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x33, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x4f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x67, (unsigned char)0x58, (unsigned char)0x72, (unsigned char)0x4c, (unsigned char)0x63, (unsigned char)0x58, (unsigned char)0x47, (unsigned char)0x68, (unsigned char)0x6c, (unsigned char)0x59, (unsigned char)0x57, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x61, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4e, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x59, (unsigned char)0x47, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x4f, (unsigned char)0x54, (unsigned char)0x61, (unsigned char)0x47, (unsigned char)0x68, (unsigned char)0x6c, (unsigned char)0x59, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x76, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x6b, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4a, (unsigned char)0x41, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x42, (unsigned char)0x46, (unsigned char)0x31, (unsigned char)0x6f, (unsigned char)0x62, (unsigned char)0x58, (unsigned char)0x52, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x47, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x6f, (unsigned char)0x47, (unsigned char)0x70, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x32, (unsigned char)0x78, (unsigned char)0x76, (unsigned char)0x59, (unsigned char)0x32, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x64, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x59, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x67, (unsigned char)0x50, (unsigned char)0x4d, (unsigned char)0x62, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x34, (unsigned char)0x63, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x31, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x53, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x78, (unsigned char)0x75, (unsigned char)0x59, (unsigned char)0x57, (unsigned char)0x31, (unsigned char)0x6c, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x65, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x55, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x46, (unsigned char)0x56, (unsigned char)0x78, (unsigned char)0x6d, (unsigned char)0x6d, (unsigned char)0x37, (unsigned char)0x6e, (unsigned char)0x42, (unsigned char)0x76, (unsigned char)0x63, (unsigned char)0x33, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x6a, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4d, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4b, (unsigned char)0x5a, (unsigned char)0x41, (unsigned char)0x73, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x50, (unsigned char)0x41, (unsigned char)0x70, (unsigned char)0x6b, (unsigned char)0x43, (unsigned char)0x7a, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x65, (unsigned char)0x73, (unsigned char)0x41, (unsigned char)0x4d, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x4a, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x38, (unsigned char)0x55, (unsigned char)0x59, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x50, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x59, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x5a, (unsigned char)0x76, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x38, (unsigned char)0x4f, (unsigned char)0x54, (unsigned char)0x77, (unsigned char)0x2f, (unsigned char)0x76, (unsigned char)0x46, (unsigned char)0x47, (unsigned char)0x2f, (unsigned char)0x2f, (unsigned char)0x33, (unsigned char)0x2f, (unsigned char)0x2f, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x50, (unsigned char)0x42, (unsigned char)0x6c, (unsigned char)0x38, (unsigned char)0x49, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x35, (unsigned char)0x50, (unsigned char)0x44, (unsigned char)0x2b, (unsigned char)0x38, (unsigned char)0x55, (unsigned char)0x62, (unsigned char)0x2f, (unsigned char)0x2f, (unsigned char)0x66, (unsigned char)0x2f, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x2f, (unsigned char)0x34, (unsigned char)0x77, (unsigned char)0x2b, (unsigned char)0x66, (unsigned char)0x44, (unsigned char)0x34, (unsigned char)0x59, (unsigned char)0x50, (unsigned char)0x49, (unsigned char)0x77, (unsigned char)0x38, (unsigned char)0x4b, (unsigned char)0x44, (unsigned char)0x73, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x66, (unsigned char)0x2f, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x63, (unsigned char)0x35, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x6b, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x33, (unsigned char)0x4f, (unsigned char)0x51, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x4e, (unsigned char)0x75, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x50, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x51, (unsigned char)0x50, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x51, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x69, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x49, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x4e, (unsigned char)0x52, (unsigned char)0x45, (unsigned char)0x30, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x59, (unsigned char)0x7a, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x38, (unsigned char)0x42, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x59, (unsigned char)0x7a, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x38, (unsigned char)0x42, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x42, (unsigned char)0x45, (unsigned char)0x52, (unsigned char)0x51, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x69, (unsigned char)0x4d, (unsigned char)0x69, (unsigned char)0x4c, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x69, (unsigned char)0x4d, (unsigned char)0x69, (unsigned char)0x4c, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x6d, (unsigned char)0x4e, (unsigned char)0x54, (unsigned char)0x51, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x53, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x4e, (unsigned char)0x54, (unsigned char)0x51, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x6a, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x51, (unsigned char)0x47, (unsigned char)0x76, (unsigned char)0x42, (unsigned char)0x62, (unsigned char)0x35, (unsigned char)0x53, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x44, (unsigned char)0x76, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x44, (unsigned char)0x67, (unsigned char)0x74, (unsigned char)0x54, (unsigned char)0x76, (unsigned char)0x51, (unsigned char)0x59, (unsigned char)0x48, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x5a, (unsigned char)0x42, (unsigned char)0x42, (unsigned char)0x51, (unsigned char)0x47, (unsigned char)0x2f, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x74, (unsigned char)0x53, (unsigned char)0x76, (unsigned char)0x67, (unsigned char)0x55, (unsigned char)0x49, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x5a, (unsigned char)0x42, (unsigned char)0x42, (unsigned char)0x67, (unsigned char)0x61, (unsigned char)0x2b, (unsigned char)0x55, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x4b, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x38, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x38, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x46, (unsigned char)0x62, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x61, (unsigned char)0x39, (unsigned char)0x55, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4f, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x4f, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x55, (unsigned char)0x72, (unsigned char)0x34, (unsigned char)0x46, (unsigned char)0x42, (unsigned char)0x55, (unsigned char)0x45, (unsigned char)0x47, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x75, (unsigned char)0x2f, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x4b, (unsigned char)0x55, (unsigned char)0x37, (unsigned char)0x34, (unsigned char)0x47, (unsigned char)0x42, (unsigned char)0x6b, (unsigned char)0x45, (unsigned char)0x47, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x67, (unsigned char)0x46, (unsigned char)0x76, (unsigned char)0x6c, (unsigned char)0x49, (unsigned char)0x4c, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x38, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x63, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x4e, (unsigned char)0x6d, (unsigned char)0x41, (unsigned char)0x32, (unsigned char)0x59, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x45, (unsigned char)0x52, (unsigned char)0x51, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x69, (unsigned char)0x4d, (unsigned char)0x69, (unsigned char)0x4c, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x69, (unsigned char)0x4d, (unsigned char)0x69, (unsigned char)0x4c, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x6d, (unsigned char)0x4e, (unsigned char)0x54, (unsigned char)0x51, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x53, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x4e, (unsigned char)0x54, (unsigned char)0x51, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x6a, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x51, (unsigned char)0x45, (unsigned char)0x55, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x58, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x55, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x59, (unsigned char)0x6a, (unsigned char)0x49, (unsigned char)0x53, (unsigned char)0x49, (unsigned char)0x6e, (unsigned char)0x4a, (unsigned char)0x6a, (unsigned char)0x55, (unsigned char)0x52, (unsigned char)0x4e, (unsigned char)0x44, (unsigned char)0x63, (unsigned char)0x32, (unsigned char)0x4d, (unsigned char)0x7a, (unsigned char)0x49, (unsigned char)0x66, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x63, (unsigned char)0x32, (unsigned char)0x4d, (unsigned char)0x7a, (unsigned char)0x49, (unsigned char)0x66, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x63, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x38, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x6c, (unsigned char)0x4f, (unsigned char)0x39, (unsigned char)0x42, (unsigned char)0x67, (unsigned char)0x67, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x6b, (unsigned char)0x45, (unsigned char)0x47, (unsigned char)0x42, (unsigned char)0x72, (unsigned char)0x35, (unsigned char)0x53, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4b, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x41, (unsigned char)0x61, (unsigned char)0x38, (unsigned char)0x46, (unsigned char)0x76, (unsigned char)0x6c, (unsigned char)0x49, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x2f, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x4f, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x34, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x31, (unsigned char)0x4b, (unsigned char)0x2b, (unsigned char)0x42, (unsigned char)0x67, (unsigned char)0x63, (unsigned char)0x49, (unsigned char)0x42, (unsigned char)0x55, (unsigned char)0x49, (unsigned char)0x46, (unsigned char)0x41, (unsigned char)0x5a, (unsigned char)0x4c, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x38, (unsigned char)0x4b, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x74, (unsigned char)0x53, (unsigned char)0x76, (unsigned char)0x67, (unsigned char)0x59, (unsigned char)0x47, (unsigned char)0x51, (unsigned char)0x51, (unsigned char)0x59, (unsigned char)0x48, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x61, (unsigned char)0x39, (unsigned char)0x55, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x50, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x41, (unsigned char)0x59, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x72, (unsigned char)0x35, (unsigned char)0x53, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x38, (unsigned char)0x4f, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x34, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x38, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x74, (unsigned char)0x53, (unsigned char)0x76, (unsigned char)0x67, (unsigned char)0x55, (unsigned char)0x46, (unsigned char)0x51, (unsigned char)0x67, (unsigned char)0x55, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x4a, (unsigned char)0x49, (unsigned char)0x44, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x6b, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x56, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x6f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x52, (unsigned char)0x49, (unsigned char)0x78, (unsigned char)0x45, (unsigned char)0x7a, (unsigned char)0x45, (unsigned char)0x78, (unsigned char)0x45, (unsigned char)0x6a, (unsigned char)0x45, (unsigned char)0x54, (unsigned char)0x4d, (unsigned char)0x42, (unsigned char)0x46, (unsigned char)0x53, (unsigned char)0x45, (unsigned char)0x52, (unsigned char)0x4d, (unsigned char)0x78, (unsigned char)0x45, (unsigned char)0x68, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x45, (unsigned char)0x6a, (unsigned char)0x45, (unsigned char)0x54, (unsigned char)0x4d, (unsigned char)0x33, (unsigned char)0x45, (unsigned char)0x53, (unsigned char)0x4d, (unsigned char)0x52, (unsigned char)0x4d, (unsigned char)0x77, (unsigned char)0x46, (unsigned char)0x75, (unsigned char)0x6b, (unsigned char)0x35, (unsigned char)0x50, (unsigned char)0x62, (unsigned char)0x6b, (unsigned char)0x70, (unsigned char)0x49, (unsigned char)0x43, (unsigned char)0x53, (unsigned char)0x66, (unsigned char)0x74, (unsigned char)0x75, (unsigned char)0x53, (unsigned char)0x51, (unsigned char)0x52, (unsigned char)0x4a, (unsigned char)0x2f, (unsigned char)0x70, (unsigned char)0x4f, (unsigned char)0x54, (unsigned char)0x6b, (unsigned char)0x39, (unsigned char)0x75, (unsigned char)0x53, (unsigned char)0x6b, (unsigned char)0x67, (unsigned char)0x47, (unsigned char)0x33, (unsigned char)0x2f, (unsigned char)0x74, (unsigned char)0x73, (unsigned char)0x42, (unsigned char)0x4a, (unsigned char)0x51, (unsigned char)0x45, (unsigned char)0x6b, (unsigned char)0x2f, (unsigned char)0x62, (unsigned char)0x63, (unsigned char)0x43, (unsigned char)0x53, (unsigned char)0x66, (unsigned char)0x31, (unsigned char)0x75, (unsigned char)0x53, (unsigned char)0x51, (unsigned char)0x4e, (unsigned char)0x75, (unsigned char)0x2f, (unsigned char)0x4e, (unsigned char)0x73, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x50, (unsigned char)0x35, (unsigned char)0x4a, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x66, (unsigned char)0x63, (unsigned char)0x2f, (unsigned char)0x57, (unsigned char)0x30, (unsigned char)0x43, (unsigned char)0x6b, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x79, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x68, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x51, (unsigned char)0x42, (unsigned char)0x65, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x69, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x7a, (unsigned char)0x51, (unsigned char)0x6e, (unsigned char)0x4a, (unsigned char)0x69, (unsigned char)0x4d, (unsigned char)0x69, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x42, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x4d, (unsigned char)0x7a, (unsigned char)0x49, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x6a, (unsigned char)0x55, (unsigned char)0x54, (unsigned char)0x4e, (unsigned char)0x43, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x49, (unsigned char)0x79, (unsigned char)0x49, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x55, (unsigned char)0x46, (unsigned char)0x78, (unsigned char)0x59, (unsigned char)0x7a, (unsigned char)0x4d, (unsigned char)0x6a, (unsigned char)0x63, (unsigned char)0x32, (unsigned char)0x4e, (unsigned char)0x52, (unsigned char)0x4d, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x4a, (unsigned char)0x79, (unsigned char)0x59, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x67, (unsigned char)0x38, (unsigned char)0x42, (unsigned char)0x42, (unsigned char)0x67, (unsigned char)0x63, (unsigned char)0x47, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x59, (unsigned char)0x58, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x59, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x4a, (unsigned char)0x79, (unsigned char)0x55, (unsigned char)0x30, (unsigned char)0x4a, (unsigned char)0x79, (unsigned char)0x59, (unsigned char)0x6a, (unsigned char)0x49, (unsigned char)0x67, (unsigned char)0x63, (unsigned char)0x47, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x51, (unsigned char)0x58, (unsigned char)0x46, (unsigned char)0x6a, (unsigned char)0x4d, (unsigned char)0x79, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x59, (unsigned char)0x31, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x51, (unsigned char)0x6e, (unsigned char)0x4a, (unsigned char)0x69, (unsigned char)0x4d, (unsigned char)0x69, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x42, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x4d, (unsigned char)0x7a, (unsigned char)0x49, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x6a, (unsigned char)0x55, (unsigned char)0x46, (unsigned char)0x4e, (unsigned char)0x43, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x49, (unsigned char)0x79, (unsigned char)0x49, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x55, (unsigned char)0x46, (unsigned char)0x78, (unsigned char)0x59, (unsigned char)0x7a, (unsigned char)0x4d, (unsigned char)0x6a, (unsigned char)0x63, (unsigned char)0x32, (unsigned char)0x4e, (unsigned char)0x52, (unsigned char)0x4d, (unsigned char)0x55, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x59, (unsigned char)0x6a, (unsigned char)0x49, (unsigned char)0x53, (unsigned char)0x49, (unsigned char)0x6e, (unsigned char)0x4a, (unsigned char)0x6a, (unsigned char)0x55, (unsigned char)0x30, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x59, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x6a, (unsigned char)0x63, (unsigned char)0x32, (unsigned char)0x4d, (unsigned char)0x7a, (unsigned char)0x49, (unsigned char)0x58, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x78, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x32, (unsigned char)0x78, (unsigned char)0x55, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x78, (unsigned char)0x34, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x38, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x57, (unsigned char)0x34, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x34, (unsigned char)0x65, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x34, (unsigned char)0x65, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x58, (unsigned char)0x31, (unsigned char)0x4f, (unsigned char)0x51, (unsigned char)0x51, (unsigned char)0x49, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x4f, (unsigned char)0x44, (unsigned char)0x51, (unsigned char)0x30, (unsigned char)0x45, (unsigned char)0x4f, (unsigned char)0x69, (unsigned char)0x49, (unsigned char)0x62, (unsigned char)0x47, (unsigned char)0x77, (unsigned char)0x6b, (unsigned char)0x4d, (unsigned char)0x46, (unsigned char)0x78, (unsigned char)0x63, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x6b, (unsigned char)0x4d, (unsigned char)0x44, (unsigned char)0x52, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x65, (unsigned char)0x52, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x38, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x55, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x78, (unsigned char)0x34, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x76, (unsigned char)0x36, (unsigned char)0x53, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x59, (unsigned char)0x65, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x59, (unsigned char)0x65, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x34, (unsigned char)0x65, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x34, (unsigned char)0x65, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x57, (unsigned char)0x33, (unsigned char)0x55, (unsigned char)0x51, (unsigned char)0x6f, (unsigned char)0x55, (unsigned char)0x2f, (unsigned char)0x4e, (unsigned char)0x34, (unsigned char)0x55, (unsigned char)0x43, (unsigned char)0x6c, (unsigned char)0x45, (unsigned char)0x70, (unsigned char)0x4b, (unsigned char)0x45, (unsigned char)0x56, (unsigned char)0x45, (unsigned char)0x58, (unsigned char)0x31, (unsigned char)0x39, (unsigned char)0x6f, (unsigned char)0x61, (unsigned char)0x46, (unsigned char)0x39, (unsigned char)0x66, (unsigned char)0x52, (unsigned char)0x45, (unsigned char)0x55, (unsigned char)0x6f, (unsigned char)0x4b, (unsigned char)0x51, (unsigned char)0x45, (unsigned char)0x6c, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x65, (unsigned char)0x48, (unsigned char)0x78, (unsigned char)0x55, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x66, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x65, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x59, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x34, (unsigned char)0x66, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x59, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x2f, (unsigned char)0x2b, (unsigned char)0x37, (unsigned char)0x64, (unsigned char)0x6f, (unsigned char)0x50, (unsigned char)0x44, (unsigned char)0x51, (unsigned char)0x30, (unsigned char)0x45, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x49, (unsigned char)0x44, (unsigned char)0x39, (unsigned char)0x6f, (unsigned char)0x44, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x69, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x67, (unsigned char)0x6e, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x77, (unsigned char)0x58, (unsigned char)0x46, (unsigned char)0x79, (unsigned char)0x77, (unsigned char)0x69, (unsigned char)0x49, (unsigned char)0x53, (unsigned char)0x41, (unsigned char)0x55, (unsigned char)0x45, (unsigned char)0x78, (unsigned char)0x34, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x38, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x77, (unsigned char)0x46, (unsigned char)0x74, (unsigned char)0x48, (unsigned char)0x78, (unsigned char)0x55, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x52, (unsigned char)0x55, (unsigned char)0x66, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x55, (unsigned char)0x65, (unsigned char)0x62, (unsigned char)0x52, (unsigned char)0x34, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x68, (unsigned char)0x38, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x68, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x48, (unsigned char)0x2f, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x6c, (unsigned char)0x6e, (unsigned char)0x34, (unsigned char)0x52, (unsigned char)0x45, (unsigned char)0x58, (unsigned char)0x36, (unsigned char)0x57, (unsigned char)0x61, (unsigned char)0x46, (unsigned char)0x35, (unsigned char)0x66, (unsigned char)0x52, (unsigned char)0x55, (unsigned char)0x51, (unsigned char)0x70, (unsigned char)0x4b, (unsigned char)0x53, (unsigned char)0x6b, (unsigned char)0x70, (unsigned char)0x52, (unsigned char)0x45, (unsigned char)0x56, (unsigned char)0x66, (unsigned char)0x58, (unsigned char)0x6d, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x4e, (unsigned char)0x75, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x55, (unsigned char)0x30, (unsigned char)0x4a, (unsigned char)0x79, (unsigned char)0x59, (unsigned char)0x72, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x55, (unsigned char)0x30, (unsigned char)0x4a, (unsigned char)0x79, (unsigned char)0x59, (unsigned char)0x72, (unsigned char)0x41, (unsigned char)0x53, (unsigned char)0x49, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x68, (unsigned char)0x30, (unsigned char)0x42, (unsigned char)0x49, (unsigned char)0x79, (unsigned char)0x49, (unsigned char)0x48, (unsigned char)0x42, (unsigned char)0x68, (unsigned char)0x30, (unsigned char)0x42, (unsigned char)0x46, (unsigned char)0x42, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x4f, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x56, (unsigned char)0x46, (unsigned char)0x42, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x4f, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x79, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x59, (unsigned char)0x39, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x4d, (unsigned char)0x79, (unsigned char)0x4e, (unsigned char)0x7a, (unsigned char)0x59, (unsigned char)0x31, (unsigned char)0x45, (unsigned char)0x78, (unsigned char)0x45, (unsigned char)0x55, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x59, (unsigned char)0x6a, (unsigned char)0x49, (unsigned char)0x53, (unsigned char)0x49, (unsigned char)0x6e, (unsigned char)0x4a, (unsigned char)0x6a, (unsigned char)0x55, (unsigned char)0x52, (unsigned char)0x4e, (unsigned char)0x44, (unsigned char)0x63, (unsigned char)0x32, (unsigned char)0x4d, (unsigned char)0x79, (unsigned char)0x45, (unsigned char)0x79, (unsigned char)0x46, (unsigned char)0x78, (unsigned char)0x59, (unsigned char)0x56, (unsigned char)0x41, (unsigned char)0x74, (unsigned char)0x73, (unsigned char)0x4b, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x2b, (unsigned char)0x33, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x53, (unsigned char)0x51, (unsigned char)0x38, (unsigned char)0x4b, (unsigned char)0x43, (unsigned char)0x37, (unsigned char)0x63, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x2b, (unsigned char)0x33, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x50, (unsigned char)0x53, (unsigned char)0x51, (unsigned char)0x38, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x37, (unsigned char)0x63, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x71, (unsigned char)0x54, (unsigned char)0x4d, (unsigned char)0x54, (unsigned char)0x42, (unsigned char)0x45, (unsigned char)0x2f, (unsigned char)0x64, (unsigned char)0x78, (unsigned char)0x45, (unsigned char)0x4d, (unsigned char)0x54, (unsigned char)0x41, (unsigned char)0x77, (unsigned char)0x4d, (unsigned char)0x55, (unsigned char)0x51, (unsigned char)0x43, (unsigned char)0x4a, (unsigned char)0x45, (unsigned char)0x51, (unsigned char)0x77, (unsigned char)0x4d, (unsigned char)0x51, (unsigned char)0x47, (unsigned char)0x53, (unsigned char)0x53, (unsigned char)0x51, (unsigned char)0x38, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x37, (unsigned char)0x63, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x4b, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x2b, (unsigned char)0x33, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x53, (unsigned char)0x51, (unsigned char)0x38, (unsigned char)0x4b, (unsigned char)0x43, (unsigned char)0x37, (unsigned char)0x63, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x2b, (unsigned char)0x33, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x50, (unsigned char)0x41, (unsigned char)0x54, (unsigned char)0x66, (unsigned char)0x39, (unsigned char)0x33, (unsigned char)0x45, (unsigned char)0x51, (unsigned char)0x78, (unsigned char)0x4d, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x78, (unsigned char)0x52, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x6b, (unsigned char)0x52, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x78, (unsigned char)0x4d, (unsigned char)0x54, (unsigned char)0x42, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x32, (unsigned char)0x34, (unsigned char)0x44, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x6b, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x31, (unsigned char)0x4e, (unsigned char)0x43, (unsigned char)0x63, (unsigned char)0x6d, (unsigned char)0x49, (unsigned char)0x79, (unsigned char)0x45, (unsigned char)0x69, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x59, (unsigned char)0x64, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x51, (unsigned char)0x58, (unsigned char)0x46, (unsigned char)0x6a, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x4d, (unsigned char)0x6a, (unsigned char)0x63, (unsigned char)0x32, (unsigned char)0x4e, (unsigned char)0x52, (unsigned char)0x4d, (unsigned char)0x52, (unsigned char)0x46, (unsigned char)0x41, (unsigned char)0x63, (unsigned char)0x47, (unsigned char)0x49, (unsigned char)0x79, (unsigned char)0x45, (unsigned char)0x69, (unsigned char)0x4a, (unsigned char)0x79, (unsigned char)0x59, (unsigned char)0x31, (unsigned char)0x45, (unsigned char)0x54, (unsigned char)0x51, (unsigned char)0x33, (unsigned char)0x4e, (unsigned char)0x6a, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x4d, (unsigned char)0x68, (unsigned char)0x63, (unsigned char)0x57, (unsigned char)0x46, (unsigned char)0x51, (unsigned char)0x4c, (unsigned char)0x62, (unsigned char)0x43, (unsigned char)0x67, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x2f, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x50, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x38, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x38, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x70, (unsigned char)0x4d, (unsigned char)0x78, (unsigned char)0x4d, (unsigned char)0x45, (unsigned char)0x54, (unsigned char)0x39, (unsigned char)0x33, (unsigned char)0x45, (unsigned char)0x51, (unsigned char)0x78, (unsigned char)0x4d, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x78, (unsigned char)0x52, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x6b, (unsigned char)0x52, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x78, (unsigned char)0x41, (unsigned char)0x5a, (unsigned char)0x4a, (unsigned char)0x4a, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4c, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x50, (unsigned char)0x53, (unsigned char)0x51, (unsigned char)0x38, (unsigned char)0x4b, (unsigned char)0x43, (unsigned char)0x77, (unsigned char)0x73, (unsigned char)0x4b, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x45, (unsigned char)0x33, (unsigned char)0x2f, (unsigned char)0x64, (unsigned char)0x78, (unsigned char)0x45, (unsigned char)0x4d, (unsigned char)0x54, (unsigned char)0x41, (unsigned char)0x77, (unsigned char)0x4d, (unsigned char)0x55, (unsigned char)0x51, (unsigned char)0x43, (unsigned char)0x4a, (unsigned char)0x45, (unsigned char)0x51, (unsigned char)0x77, (unsigned char)0x4d, (unsigned char)0x54, (unsigned char)0x45, (unsigned char)0x77, (unsigned char)0x52, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x59, (unsigned char)0x78, (unsigned char)0x4e, (unsigned char)0x74, (unsigned char)0x5a, (unsigned char)0x66, (unsigned char)0x44, (unsigned char)0x7a, (unsigned char)0x7a, (unsigned char)0x31, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x73, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x52, (unsigned char)0x4b, (unsigned char)0x64, (unsigned char)0x2b, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4e, (unsigned char)0x45, (unsigned char)0x70, (unsigned char)0x33, (unsigned char)0x35, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x4a, (unsigned char)0x49, (unsigned char)0x44, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x77, (unsigned char)0x50, (unsigned char)0x2f, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x6b, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x6b, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x77, (unsigned char)0x53, (unsigned char)0x53, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x6f, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x65, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x32, (unsigned char)0x67, (unsigned char)0x45, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x64, (unsigned char)0x51, (unsigned char)0x43, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x4a, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x6f, (unsigned char)0x41, (unsigned char)0x69, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x72, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x4a, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x56, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x59, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x63, (unsigned char)0x41, (unsigned char)0x4d, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x4b, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x59, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x45, (unsigned char)0x43, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x45, (unsigned char)0x43, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x52, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x45, (unsigned char)0x43, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x4a, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x45, (unsigned char)0x43, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x56, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x45, (unsigned char)0x43, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x59, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x67, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x45, (unsigned char)0x43, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x4f, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x45, (unsigned char)0x45, (unsigned char)0x43, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x4b, (unsigned char)0x41, (unsigned char)0x44, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x59, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x70, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x74, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x75, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x59, (unsigned char)0x41, (unsigned char)0x5a, (unsigned char)0x51, (unsigned char)0x42, (unsigned char)0x79, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x61, (unsigned char)0x51, (unsigned char)0x42, (unsigned char)0x76, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x78, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x70, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x74, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x75, (unsigned char)0x61, (unsigned char)0x57, (unsigned char)0x4e, (unsigned char)0x76, (unsigned char)0x62, (unsigned char)0x57, (unsigned char)0x39, (unsigned char)0x76, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x42, (unsigned char)0x70, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x74, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x75, (unsigned char)0x41, (unsigned char)0x46, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x5a, (unsigned char)0x51, (unsigned char)0x42, (unsigned char)0x6e, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x55, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x68, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x61, (unsigned char)0x51, (unsigned char)0x42, (unsigned char)0x6a, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x51, (unsigned char)0x42, (unsigned char)0x76, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x42, (unsigned char)0x47, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x67, (unsigned char)0x42, (unsigned char)0x30, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x5a, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x6c, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x5a, (unsigned char)0x51, (unsigned char)0x42, (unsigned char)0x79, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x45, (unsigned char)0x41, (unsigned char)0x64, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x6c, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x51, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x69, (unsigned char)0x41, (unsigned char)0x48, (unsigned char)0x6b, (unsigned char)0x41, (unsigned char)0x49, (unsigned char)0x41, (unsigned char)0x42, (unsigned char)0x4a, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x4d, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x4e, (unsigned char)0x41, (unsigned char)0x47, (unsigned char)0x38, (unsigned char)0x41, (unsigned char)0x62, (unsigned char)0x77, (unsigned char)0x42, (unsigned char)0x75, (unsigned char)0x41, (unsigned char)0x43, (unsigned char)0x34, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x77, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x41, (unsigned char)0x3d, (unsigned char)0x3d, (unsigned char)0x29, (unsigned char)0x20, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x6d, (unsigned char)0x61, (unsigned char)0x74, (unsigned char)0x28, (unsigned char)0x27, (unsigned char)0x77, (unsigned char)0x6f, (unsigned char)0x66, (unsigned char)0x66, (unsigned char)0x27, (unsigned char)0x29, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x77, (unsigned char)0x65, (unsigned char)0x69, (unsigned char)0x67, (unsigned char)0x68, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x6e, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x6d, (unsigned char)0x61, (unsigned char)0x6c, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x73, (unsigned char)0x74, (unsigned char)0x79, (unsigned char)0x6c, (unsigned char)0x65, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x6e, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x6d, (unsigned char)0x61, (unsigned char)0x6c, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a, (unsigned char)0x5b, (unsigned char)0x63, (unsigned char)0x6c, (unsigned char)0x61, (unsigned char)0x73, (unsigned char)0x73, (unsigned char)0x5e, (unsigned char)0x3d, (unsigned char)0x22, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x22, (unsigned char)0x5d, (unsigned char)0x2c, (unsigned char)0x20, (unsigned char)0x5b, (unsigned char)0x63, (unsigned char)0x6c, (unsigned char)0x61, (unsigned char)0x73, (unsigned char)0x73, (unsigned char)0x2a, (unsigned char)0x3d, (unsigned char)0x22, (unsigned char)0x20, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x22, (unsigned char)0x5d, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x66, (unsigned char)0x61, (unsigned char)0x6d, (unsigned char)0x69, (unsigned char)0x6c, (unsigned char)0x79, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x27, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6d, (unsigned char)0x6f, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x27, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x73, (unsigned char)0x70, (unsigned char)0x65, (unsigned char)0x61, (unsigned char)0x6b, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x6e, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x65, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x73, (unsigned char)0x74, (unsigned char)0x79, (unsigned char)0x6c, (unsigned char)0x65, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x6e, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x6d, (unsigned char)0x61, (unsigned char)0x6c, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x77, (unsigned char)0x65, (unsigned char)0x69, (unsigned char)0x67, (unsigned char)0x68, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x6e, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x6d, (unsigned char)0x61, (unsigned char)0x6c, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x76, (unsigned char)0x61, (unsigned char)0x72, (unsigned char)0x69, (unsigned char)0x61, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x6e, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x6d, (unsigned char)0x61, (unsigned char)0x6c, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x74, (unsigned char)0x65, (unsigned char)0x78, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x74, (unsigned char)0x72, (unsigned char)0x61, (unsigned char)0x6e, (unsigned char)0x73, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x6d, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x6e, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x65, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x6c, (unsigned char)0x69, (unsigned char)0x6e, (unsigned char)0x65, (unsigned char)0x2d, (unsigned char)0x68, (unsigned char)0x65, (unsigned char)0x69, (unsigned char)0x67, (unsigned char)0x68, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x31, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x2d, (unsigned char)0x77, (unsigned char)0x65, (unsigned char)0x62, (unsigned char)0x6b, (unsigned char)0x69, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x73, (unsigned char)0x6d, (unsigned char)0x6f, (unsigned char)0x6f, (unsigned char)0x74, (unsigned char)0x68, (unsigned char)0x69, (unsigned char)0x6e, (unsigned char)0x67, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x61, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x69, (unsigned char)0x61, (unsigned char)0x6c, (unsigned char)0x69, (unsigned char)0x61, (unsigned char)0x73, (unsigned char)0x65, (unsigned char)0x64, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x2d, (unsigned char)0x6d, (unsigned char)0x6f, (unsigned char)0x7a, (unsigned char)0x2d, (unsigned char)0x6f, (unsigned char)0x73, (unsigned char)0x78, (unsigned char)0x2d, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x2d, (unsigned char)0x73, (unsigned char)0x6d, (unsigned char)0x6f, (unsigned char)0x6f, (unsigned char)0x74, (unsigned char)0x68, (unsigned char)0x69, (unsigned char)0x6e, (unsigned char)0x67, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x67, (unsigned char)0x72, (unsigned char)0x61, (unsigned char)0x79, (unsigned char)0x73, (unsigned char)0x63, (unsigned char)0x61, (unsigned char)0x6c, (unsigned char)0x65, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a, (unsigned char)0x2e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x65, (unsigned char)0x78, (unsigned char)0x70, (unsigned char)0x61, (unsigned char)0x6e, (unsigned char)0x64, (unsigned char)0x3a, (unsigned char)0x62, (unsigned char)0x65, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x65, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x22, (unsigned char)0x5c, (unsigned char)0x66, (unsigned char)0x30, (unsigned char)0x36, (unsigned char)0x35, (unsigned char)0x22, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a, (unsigned char)0x2e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6d, (unsigned char)0x70, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x73, (unsigned char)0x73, (unsigned char)0x3a, (unsigned char)0x62, (unsigned char)0x65, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x65, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x22, (unsigned char)0x5c, (unsigned char)0x66, (unsigned char)0x30, (unsigned char)0x36, (unsigned char)0x36, (unsigned char)0x22, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a, (unsigned char)0x2e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x62, (unsigned char)0x61, (unsigned char)0x72, (unsigned char)0x2d, (unsigned char)0x63, (unsigned char)0x68, (unsigned char)0x61, (unsigned char)0x72, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x62, (unsigned char)0x65, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x65, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x22, (unsigned char)0x5c, (unsigned char)0x66, (unsigned char)0x30, (unsigned char)0x38, (unsigned char)0x30, (unsigned char)0x22, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a, (unsigned char)0x2e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x64, (unsigned char)0x61, (unsigned char)0x73, (unsigned char)0x68, (unsigned char)0x62, (unsigned char)0x6f, (unsigned char)0x61, (unsigned char)0x72, (unsigned char)0x64, (unsigned char)0x3a, (unsigned char)0x62, (unsigned char)0x65, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x65, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x22, (unsigned char)0x5c, (unsigned char)0x66, (unsigned char)0x30, (unsigned char)0x65, (unsigned char)0x34, (unsigned char)0x22, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a, (unsigned char)0x2e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x70, (unsigned char)0x6c, (unsigned char)0x75, (unsigned char)0x73, (unsigned char)0x2d, (unsigned char)0x73, (unsigned char)0x71, (unsigned char)0x75, (unsigned char)0x61, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x3a, (unsigned char)0x62, (unsigned char)0x65, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x65, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x22, (unsigned char)0x5c, (unsigned char)0x66, (unsigned char)0x30, (unsigned char)0x66, (unsigned char)0x65, (unsigned char)0x22, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a, (unsigned char)0x2e, (unsigned char)0x69, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x2d, (unsigned char)0x6d, (unsigned char)0x69, (unsigned char)0x6e, (unsigned char)0x75, (unsigned char)0x73, (unsigned char)0x2d, (unsigned char)0x73, (unsigned char)0x71, (unsigned char)0x75, (unsigned char)0x61, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x3a, (unsigned char)0x62, (unsigned char)0x65, (unsigned char)0x66, (unsigned char)0x6f, (unsigned char)0x72, (unsigned char)0x65, (unsigned char)0x20, (unsigned char)0x7b, (unsigned char)0x0a, (unsigned char)0x09, (unsigned char)0x63, (unsigned char)0x6f, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x65, (unsigned char)0x6e, (unsigned char)0x74, (unsigned char)0x3a, (unsigned char)0x20, (unsigned char)0x22, (unsigned char)0x5c, (unsigned char)0x66, (unsigned char)0x31, (unsigned char)0x34, (unsigned char)0x36, (unsigned char)0x22, (unsigned char)0x3b, (unsigned char)0x0a, (unsigned char)0x7d, (unsigned char)0x0a };
// ignore_cmd_opts
// file src/settings.c line 65
static const char *ignore_cmd_opts[3l] = { "help", "storage", "version" };
// log_data
// file src/error.c line 39
static struct GLog_ *log_data;
// log_file
// file src/error.c line 38
static struct _IO_FILE *log_file;
// log_format
// file src/ui.c line 85
static char *log_format = (char *)(void *)0;
// log_invalid
// file src/error.c line 40
static struct _IO_FILE *log_invalid;
// logger
// file src/goaccess.c line 73
static struct GLog_ *logger;
// logs
// file src/settings.c line 41
static const struct GPreConfLog_ logs = { .combined="%h %^[%d:%t %^] \"%r\" %s %b \"%R\" \"%u\"", .vcombined="%^:%^ %h %^[%d:%t %^] \"%r\" %s %b \"%R\" \"%u\"",
    .common="%h %^[%d:%t %^] \"%r\" %s %b",
    .vcommon="%^:%^ %h %^[%d:%t %^] \"%r\" %s %b",
    .w3c="%d %t %h %^ %^ %^ %m %r %^ %s %b %^ %^ %u %R",
    .cloudfront="%d\\t%t\\t%^\\t%b\\t%h\\t%m\\t%^\\t%r\\t%s\\t%R\\t%u\\t%^",
    .cloudstorage="\"%x\",\"%h\",%^,%^,\"%m\",\"%U\",\"%s\",%^,\"%b\",\"%D\",%^,\"%R\",\"%u\"",
    .awselb="%dT%t.%^ %^ %h:%^ %^ %T %^ %^ %^ %s %^ %b \"%r\" \"%u\"" };
// long_opts
// file src/options.c line 52
struct option long_opts[42l] = { { .name="agent-list", .has_arg=0, .flag=((signed int *)NULL), .val=97 }, 
    { .name="config-dialog", .has_arg=0, .flag=((signed int *)NULL), .val=99 }, 
    { .name="hl-header", .has_arg=0, .flag=((signed int *)NULL), .val=105 }, 
    { .name="config-file", .has_arg=1, .flag=((signed int *)NULL), .val=112 }, 
    { .name="exclude-ip", .has_arg=1, .flag=((signed int *)NULL), .val=101 }, 
    { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 }, 
    { .name="http-method", .has_arg=0, .flag=((signed int *)NULL), .val=77 }, 
    { .name="http-protocol", .has_arg=0, .flag=((signed int *)NULL), .val=72 }, 
    { .name="log-file", .has_arg=1, .flag=((signed int *)NULL), .val=102 }, 
    { .name="version", .has_arg=0, .flag=((signed int *)NULL), .val=86 }, 
    { .name="invalid-requests", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="444-as-404", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="4xx-to-unique-count", .has_arg=0, .flag=((signed int *)NULL),
    .val=0 }, 
    { .name="all-static-files", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="color", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="color-scheme", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="date-format", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="double-decode", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="html-report-title", .has_arg=1, .flag=((signed int *)NULL),
    .val=0 }, 
    { .name="ignore-crawlers", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="ignore-panel", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="ignore-referer", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="log-format", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="no-color", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="no-column-names", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="no-csv-summary", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="no-global-config", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="no-progress", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="no-query-string", .has_arg=0, .flag=((signed int *)NULL), .val=113 }, 
    { .name="no-term-resolver", .has_arg=0, .flag=((signed int *)NULL), .val=114 }, 
    { .name="output-format", .has_arg=1, .flag=((signed int *)NULL), .val=111 }, 
    { .name="real-os", .has_arg=0, .flag=((signed int *)NULL), .val=0 }, 
    { .name="sort-panel", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="static-file", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="storage", .has_arg=0, .flag=((signed int *)NULL), .val=115 }, 
    { .name="time-format", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="with-mouse", .has_arg=0, .flag=((signed int *)NULL), .val=109 }, 
    { .name="with-output-resolver", .has_arg=0, .flag=((signed int *)NULL),
    .val=100 }, 
    { .name="std-geoip", .has_arg=0, .flag=((signed int *)NULL), .val=103 }, 
    { .name="geoip-database", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name="geoip-city-data", .has_arg=1, .flag=((signed int *)NULL), .val=0 }, 
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
// main_win
// file src/goaccess.c line 64
static struct _win_st$1 *main_win;
// module_sort
// file src/sort.c line 73
struct GSort_ module_sort[13l] = { { .module=(enum MODULES)0, .field=(enum GSortField_)2, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)1, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)2, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)3, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)4, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)5, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)6, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)7, .field=(enum GSortField_)2, .sort=(enum GSortOrder_)0 }, 
    { .module=(enum MODULES)8, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)9, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)10, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)11, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 }, 
    { .module=(enum MODULES)12, .field=(enum GSortField_)0, .sort=(enum GSortOrder_)1 } };
// nargc
// file src/settings.c line 38
static signed int nargc = 0;
// nargv
// file src/settings.c line 37
static char **nargv;
// nocolors
// file src/color.c line 215
static const char *nocolors[25l] = { "COLOR_MTRC_HITS     color0:color-1", "COLOR_MTRC_VISITORS color0:color-1", "COLOR_MTRC_DATA     color0:color-1", "COLOR_MTRC_BW       color0:color-1", "COLOR_MTRC_AVGTS    color0:color-1", "COLOR_MTRC_CUMTS    color0:color-1", "COLOR_MTRC_MAXTS    color0:color-1", "COLOR_MTRC_PROT     color0:color-1", "COLOR_MTRC_MTHD     color0:color-1", "COLOR_MTRC_PERC     color0:color-1", "COLOR_MTRC_PERC_MAX color0:color-1", "COLOR_PANEL_COLS    color0:color-1", "COLOR_BARS          color0:color-1", "COLOR_ERROR         color0:color-1", "COLOR_SELECTED      color0:color-1 reverse", 
    "COLOR_PANEL_ACTIVE  color0:color-1 reverse", 
    "COLOR_PANEL_HEADER  color0:color-1 reverse", 
    "COLOR_PANEL_DESC    color0:color-1", "COLOR_OVERALL_LBLS  color0:color-1", "COLOR_OVERALL_VALS  color0:color-1", "COLOR_OVERALL_PATH  color0:color-1", "COLOR_ACTIVE_LABEL  color0:color-1 reverse", 
    "COLOR_BG            color0:color-1", "COLOR_DEFAULT       color0:color-1", "COLOR_PROGRESS      color0:color-1 reverse" };
// now_tm
// file src/commons.h line 42
struct tm$0 *now_tm;
// optarg
// file /usr/include/getopt.h line 57
extern char *optarg;
// optind
// file /usr/include/getopt.h line 71
extern signed int optind;
// os
// file src/opesys.c line 38
static const char *os[57l][2l] = { { "Android", "Android" }, { "Windows NT 10.0", "Windows" }, { "Windows NT 6.3; ARM", "Windows" }, { "Windows NT 6.3", "Windows" }, { "Windows NT 6.2; ARM", "Windows" }, { "Windows NT 6.2", "Windows" }, { "Windows NT 6.1", "Windows" }, { "Windows NT 6.0", "Windows" }, { "Windows NT 5.2", "Windows" }, { "Windows NT 5.1", "Windows" }, { "Windows NT 5.01", "Windows" }, { "Windows NT 5.0", "Windows" }, { "Windows NT 4.0", "Windows" }, { "Windows NT", "Windows" }, { "Win 9x 4.90", "Windows" }, { "Windows 98", "Windows" }, { "Windows 95", "Windows" }, { "Windows CE", "Windows" }, { "Windows Phone 8.1", "Windows" }, { "Windows Phone 8.0", "Windows" }, { "Googlebot", "Unix-like" }, { "bingbot", "Windows" }, { "iPad", "iOS" }, { "iPod", "iOS" }, { "iPhone", "iOS" }, { "AppleTV", "iOS" }, { "iTunes", "Macintosh" }, { "OS X", "Macintosh" }, { "Debian", "Linux" }, { "Ubuntu", "Linux" }, { "Fedora", "Linux" }, { "Mint", "Linux" }, { "SUSE", "Linux" }, { "Mandriva", "Linux" }, { "Red Hat", "Linux" }, { "Gentoo", "Linux" }, { "CentOS", "Linux" }, { "PCLinuxOS", "Linux" }, { "Linux", "Linux" }, { "FreeBSD", "BSD" }, { "NetBSD", "BSD" }, { "OpenBSD", "BSD" }, { "DragonFly", "BSD" }, { "PlayStation", "BSD" }, { "CrOS", "Chrome OS" }, { "SunOS", "Unix-like" }, { "QNX", "Unix-like" }, { "BB10", "Unix-like" }, { "BlackBerry", "Others" }, { "Sony", "Others" }, { "AmigaOS", "Others" }, { "SymbianOS", "Others" }, { "Nokia", "Others" }, { "Nintendo", "Others" }, { "Apache", "Others" }, { "Xbox One", "Windows" }, { "Xbox", "Windows" } };
// outputting
// file src/ui.c line 65
static struct GOutput_ outputting[13l] = { { .module=(enum MODULES)0, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)1, .sub_graph=(signed char)1 }, 
    { .module=(enum MODULES)1, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)1,
    .method=(signed char)1, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)2, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)1,
    .method=(signed char)1, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)3, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)1,
    .method=(signed char)1, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)4, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)1, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)5, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)1, .sub_graph=(signed char)1 }, 
    { .module=(enum MODULES)6, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)1, .sub_graph=(signed char)1 }, 
    { .module=(enum MODULES)7, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)1, .sub_graph=(signed char)1 }, 
    { .module=(enum MODULES)8, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)9, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)10, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)11, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 }, 
    { .module=(enum MODULES)12, .visitors=(signed char)1, .hits=(signed char)1,
    .percent=(signed char)1, .bw=(signed char)1,
    .avgts=(signed char)1, .cumts=(signed char)1,
    .maxts=(signed char)1, .protocol=(signed char)0,
    .method=(signed char)0, .data=(signed char)1,
    .graph=(signed char)0, .sub_graph=(signed char)0 } };
// pair_list
// file src/color.c line 40
static struct GSLList_ *pair_list = (struct GSLList_ *)(void *)0;
// paneling
// file src/csv.c line 55
static struct GPanel_$0 paneling[13l];
// paneling
// file src/csv.c line 55
static struct GPanel_$0 paneling[13l] = { { .module=(enum MODULES)0, .render=print_csv_data }, 
    { .module=(enum MODULES)1, .render=print_csv_data }, 
    { .module=(enum MODULES)2, .render=print_csv_data }, 
    { .module=(enum MODULES)3, .render=print_csv_data }, 
    { .module=(enum MODULES)4, .render=print_csv_data }, 
    { .module=(enum MODULES)5, .render=print_csv_data }, 
    { .module=(enum MODULES)6, .render=print_csv_data }, 
    { .module=(enum MODULES)7, .render=print_csv_data }, 
    { .module=(enum MODULES)8, .render=print_csv_data }, 
    { .module=(enum MODULES)9, .render=print_csv_data }, 
    { .module=(enum MODULES)10, .render=print_csv_data }, 
    { .module=(enum MODULES)11, .render=print_csv_data }, 
    { .module=(enum MODULES)12, .render=print_csv_data } };
// paneling$link1
// file src/gdashboard.c line 73
static struct GPanel_ paneling$link1[14l];
// paneling$link1
// file src/gdashboard.c line 73
static struct GPanel_ paneling$link1[14l] = { { .module=(enum MODULES)0, .insert=add_data_to_holder, .holder_callback=data_visitors,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)1, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)2, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)3, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)4, .insert=add_host_to_holder, .holder_callback=add_host_child_to_holder,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)5, .insert=add_root_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)6, .insert=add_root_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)7, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)8, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)9, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)10, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)11, .insert=add_root_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)12, .insert=add_root_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) }, 
    { .module=(enum MODULES)7, .insert=add_data_to_holder, .holder_callback=(void (*)(struct GHolder_ *))(void *)0,
    .lookup=((void (*)(struct GRawDataItem_))NULL) } };
// paneling$link2
// file src/json.c line 55
static struct GPanel_$0 paneling$link2[13l];
// paneling$link2
// file src/json.c line 55
static struct GPanel_$0 paneling$link2[13l] = { { .module=(enum MODULES)0, .render=print_json_data }, 
    { .module=(enum MODULES)1, .render=print_json_data }, 
    { .module=(enum MODULES)2, .render=print_json_data }, 
    { .module=(enum MODULES)3, .render=print_json_data }, 
    { .module=(enum MODULES)4, .render=print_json_host_data }, 
    { .module=(enum MODULES)5, .render=print_json_data }, 
    { .module=(enum MODULES)6, .render=print_json_data }, 
    { .module=(enum MODULES)7, .render=print_json_data }, 
    { .module=(enum MODULES)8, .render=print_json_data }, 
    { .module=(enum MODULES)9, .render=print_json_data }, 
    { .module=(enum MODULES)10, .render=print_json_data }, 
    { .module=(enum MODULES)11, .render=print_json_data }, 
    { .module=(enum MODULES)12, .render=print_json_data } };
// paneling$link3
// file src/output.c line 65
static struct GPanel_$1 paneling$link3[13l];
// paneling$link3
// file src/output.c line 65
static struct GPanel_$1 paneling$link3[13l] = { { .module=(enum MODULES)0, .render=print_html_data, .metrics_callback=fmt_date,
    .clabel="Date" }, 
    { .module=(enum MODULES)1, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)2, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)3, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)4, .render=print_html_host, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)5, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)6, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)7, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)8, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)9, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)10, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)11, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 }, 
    { .module=(enum MODULES)12, .render=print_html_data, .metrics_callback=(void (*)(struct GMetrics *))(void *)0,
    .clabel=(const char *)(void *)0 } };
// paneling$link4
// file src/parser.c line 104
static struct GParse_ paneling$link4[13l];
// paneling$link4
// file src/parser.c line 104
static struct GParse_ paneling$link4[13l] = { { .module=(enum MODULES)0, .key_data=gen_visitor_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)1, .key_data=gen_request_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=insert_method,
    .protocol=insert_protocol, .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)2, .key_data=gen_static_request_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=insert_method,
    .protocol=insert_protocol, .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)3, .key_data=gen_404_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=insert_method,
    .protocol=insert_protocol, .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)4, .key_data=gen_host_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=insert_agent }, 
    { .module=(enum MODULES)5, .key_data=gen_os_key, .datamap=insert_data,
    .rootmap=insert_root, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=insert_method,
    .protocol=insert_protocol, .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)6, .key_data=gen_browser_key, .datamap=insert_data,
    .rootmap=insert_root, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)8, .key_data=gen_referer_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)9, .key_data=gen_ref_site_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)10, .key_data=gen_keyphrase_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)11, .key_data=gen_geolocation_key, .datamap=insert_data,
    .rootmap=insert_root, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)12, .key_data=gen_status_code_key, .datamap=insert_data,
    .rootmap=insert_root, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 }, 
    { .module=(enum MODULES)7, .key_data=gen_visit_time_key, .datamap=insert_data,
    .rootmap=(void (*)(signed int, const char *, enum MODULES))(void *)0, .hits=insert_hit,
    .visitor=insert_visitor, .bw=insert_bw,
    .cumts=insert_cumts, .maxts=insert_maxts, .method=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .protocol=(void (*)(signed int, const char *, enum MODULES))(void *)0,
    .agent=(void (*)(signed int, signed int, enum MODULES))(void *)0 } };
// parsing_spinner
// file src/goaccess.c line 74
struct GSpinner_$1 *parsing_spinner;
// real_size_y
// file src/commons.c line 42
unsigned long int real_size_y = (unsigned long int)0;
// short_options
// file src/options.c line 42
static char short_options[22l] = { 'f', ':', 'e', ':', 'p', ':', 'o', ':', 'g', 'a', 'c', 'i', 'r', 'm', 'M', 'h', 'H', 'q', 'd', 's', 'V', 0 };
// sort_choices
// file src/sort.c line 38
const signed int sort_choices[13l][10l] = { { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, 7, 8, -1 }, { 0, 1, 2, 3, 4, 5, 6, 7, 8, -1 }, { 0, 1, 2, 3, 4, 5, 6, 7, 8, -1 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 }, { 0, 1, 2, 3, 4, 5, 6, -1, 0, 0 } };
// start_proc
// file src/commons.c line 39
signed long int start_proc;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stdscr
// file /usr/include/curses.h line 1395
extern struct _win_st$2 *stdscr;
// term_h
// file src/commons.c line 43
unsigned long int term_h = (unsigned long int)0;
// term_w
// file src/commons.c line 44
unsigned long int term_w = (unsigned long int)0;
// time_format
// file src/ui.c line 86
static char *time_format = (char *)(void *)0;
// times
// file src/settings.c line 58
static const struct GPreConfTime_ times = { .fmt24="%H:%M:%S", .usec="%f" };
// timestamp
// file src/commons.c line 38
signed long int timestamp;

// add_data_to_holder
// file src/gdashboard.c line 1599
static void add_data_to_holder(struct GRawDataItem_ item, struct GHolder_ *h, const struct GPanel_ *panel)
{
  struct GDataMap_ *map;
  char *data = (char *)(void *)0;
  char *method = (char *)(void *)0;
  char *protocol = (char *)(void *)0;
  signed int data_nkey = 0;
  signed int visitors = 0;
  unsigned long int bw = (unsigned long int)0;
  unsigned long int cumts = (unsigned long int)0;
  unsigned long int maxts = (unsigned long int)0;
  data_nkey = *((signed int *)item.key);
  map = (struct GDataMap_ *)item.value;
  if(!(map == ((struct GDataMap_ *)NULL)))
  {
    data=get_node_from_key(data_nkey, h->module, (enum METRICS)MTRC_DATAMAP);
    if(!(data == ((char *)NULL)))
    {
      bw=get_cumulative_from_key(data_nkey, h->module, (enum METRICS)MTRC_BW);
      cumts=get_cumulative_from_key(data_nkey, h->module, (enum METRICS)MTRC_CUMTS);
      maxts=get_cumulative_from_key(data_nkey, h->module, (enum METRICS)MTRC_MAXTS);
      visitors=get_num_from_key(data_nkey, h->module, (enum METRICS)MTRC_VISITORS);
      (h->items + (signed long int)h->idx)->metrics=new_gmetrics();
      (h->items + (signed long int)h->idx)->metrics->hits = map->data;
      (h->items + (signed long int)h->idx)->metrics->visitors = visitors;
      (h->items + (signed long int)h->idx)->metrics->data = data;
      (h->items + (signed long int)h->idx)->metrics->bw.nbw = bw;
      (h->items + (signed long int)h->idx)->metrics->avgts.nts = cumts / (unsigned long int)map->data;
      (h->items + (signed long int)h->idx)->metrics->cumts.nts = cumts;
      (h->items + (signed long int)h->idx)->metrics->maxts.nts = maxts;
      if(!(conf.append_method == 0))
      {
        method=get_node_from_key(data_nkey, h->module, (enum METRICS)MTRC_METHODS);
        (h->items + (signed long int)h->idx)->metrics->method = method;
      }

      if(!(conf.append_protocol == 0))
      {
        protocol=get_node_from_key(data_nkey, h->module, (enum METRICS)MTRC_PROTOCOLS);
        (h->items + (signed long int)h->idx)->metrics->protocol = protocol;
      }

      if(!(panel->holder_callback == ((void (*)(struct GHolder_ *))NULL)))
        panel->holder_callback(h);

      h->idx = h->idx + 1;
    }

  }

}

// add_default_colors
// file src/color.c line 643
static void add_default_colors(void)
{
  if(!(COLORS >= 8))
    parse_colors(nocolors, sizeof(const char *[25l]) /*200ul*/  / sizeof(const char *) /*8ul*/ );

  if(conf.color_scheme == 2 && COLORS == 8 && !(COLORS >= 17))
    parse_colors(colors8_green, sizeof(const char *[33l]) /*264ul*/  / sizeof(const char *) /*8ul*/ );

  else
    if(COLORS >= 8 && !(COLORS >= 17))
      parse_colors(colors8_mono, sizeof(const char *[33l]) /*264ul*/  / sizeof(const char *) /*8ul*/ );

  if(conf.color_scheme == 2 && COLORS >= 17)
    parse_colors(colors256_green, sizeof(const char *[33l]) /*264ul*/  / sizeof(const char *) /*8ul*/ );

  else
    if(COLORS >= 17)
      parse_colors(colors256_mono, sizeof(const char *[33l]) /*264ul*/  / sizeof(const char *) /*8ul*/ );

}

// add_host_child_to_holder
// file src/gdashboard.c line 1560
static void add_host_child_to_holder(struct GHolder_ *h)
{
  struct GMetrics *nmetrics;
  struct GSubList_ *sub_list;
  sub_list=new_gsublist();
  char *host = (h->items + (signed long int)h->idx)->metrics->data;
  char *hostname = (char *)(void *)0;
  signed int n = h->sub_items_size;
  set_host_sub_list(h, sub_list);
  pthread_mutex_lock(&gdns_thread.mutex);
  hostname=get_hostname(host);
  pthread_mutex_unlock(&gdns_thread.mutex);
  if(hostname == ((char *)NULL))
    dns_resolver(host);

  else
    if(!(hostname == ((char *)NULL)))
    {
      set_host_child_metrics(hostname, (unsigned char)2, &nmetrics);
      add_sub_item_back(sub_list, h->module, nmetrics);
      (h->items + (signed long int)h->idx)->sub_list = sub_list;
      h->sub_items_size = h->sub_items_size + 1;
      free((void *)hostname);
    }

  if(n == h->sub_items_size)
    free((void *)sub_list);

}

// add_host_to_holder
// file src/gdashboard.c line 1593
static void add_host_to_holder(struct GRawDataItem_ item, struct GHolder_ *h, const struct GPanel_ *panel)
{
  add_data_to_holder(item, h, panel);
}

// add_item_to_dash
// file src/gdashboard.c line 1432
static void add_item_to_dash(struct GDash_ **dash, struct GHolderItem_ item, enum MODULES module)
{
  struct GDashData_ *idata;
  signed int *idx = &(*dash)->module[(signed long int)module].idx_data;
  idata = &(*dash)->module[(signed long int)module].data[(signed long int)*idx];
  idata->metrics=new_gmetrics();
  idata->metrics->bw.sbw=filesize_str(item.metrics->bw.nbw);
  idata->metrics->data=xstrdup(item.metrics->data);
  idata->metrics->hits = item.metrics->hits;
  idata->metrics->visitors = item.metrics->visitors;
  if(!(conf.append_method == 0))
  {
    if(!(item.metrics->method == ((char *)NULL)))
      idata->metrics->method = item.metrics->method;

  }

  if(!(conf.append_protocol == 0))
  {
    if(!(item.metrics->protocol == ((char *)NULL)))
      idata->metrics->protocol = item.metrics->protocol;

  }

  if(!(conf.serve_usecs == 0))
  {
    idata->metrics->avgts.sts=usecs_to_str(item.metrics->avgts.nts);
    idata->metrics->cumts.sts=usecs_to_str(item.metrics->cumts.nts);
    idata->metrics->maxts.sts=usecs_to_str(item.metrics->maxts.nts);
  }

  *idx = *idx + 1;
}

// add_root_to_holder
// file src/gdashboard.c line 1675
static void add_root_to_holder(struct GRawDataItem_ item, struct GHolder_ *h, const struct GPanel_ *panel)
{
  struct GDataMap_ *map;
  struct GSubList_ *sub_list;
  struct GMetrics *metrics;
  struct GMetrics *nmetrics;
  char *root = (char *)(void *)0;
  signed int data_nkey = 0;
  signed int root_idx = -1;
  signed int idx = 0;
  data_nkey = *((signed int *)item.key);
  map = (struct GDataMap_ *)item.value;
  if(!(map == ((struct GDataMap_ *)NULL)))
  {
    signed int return_value_set_root_metrics$1;
    return_value_set_root_metrics$1=set_root_metrics(data_nkey, map, h->module, &nmetrics);
    if(!(return_value_set_root_metrics$1 == 1))
    {
      root=get_root_from_key(map->root, h->module);
      if(!(root == ((char *)NULL)))
      {
        root_idx=get_item_idx_in_holder(h, root);
        if(root_idx == -1)
        {
          idx = h->idx;
          sub_list=new_gsublist();
          metrics=new_gmetrics();
          (h->items + (signed long int)idx)->metrics = metrics;
          (h->items + (signed long int)idx)->metrics->data = root;
          h->idx = h->idx + 1;
        }

        else
        {
          sub_list = (h->items + (signed long int)root_idx)->sub_list;
          metrics = (h->items + (signed long int)root_idx)->metrics;
          idx = root_idx;
          free((void *)root);
        }
        add_sub_item_back(sub_list, h->module, nmetrics);
        (h->items + (signed long int)idx)->sub_list = sub_list;
        (h->items + (signed long int)idx)->metrics = metrics;
        (h->items + (signed long int)idx)->metrics->avgts.nts = (h->items + (signed long int)idx)->metrics->avgts.nts + nmetrics->avgts.nts;
        (h->items + (signed long int)idx)->metrics->cumts.nts = (h->items + (signed long int)idx)->metrics->cumts.nts + nmetrics->cumts.nts;
        (h->items + (signed long int)idx)->metrics->maxts.nts = (h->items + (signed long int)idx)->metrics->maxts.nts + nmetrics->maxts.nts;
        (h->items + (signed long int)idx)->metrics->bw.nbw = (h->items + (signed long int)idx)->metrics->bw.nbw + nmetrics->bw.nbw;
        (h->items + (signed long int)idx)->metrics->hits = (h->items + (signed long int)idx)->metrics->hits + nmetrics->hits;
        (h->items + (signed long int)idx)->metrics->visitors = (h->items + (signed long int)idx)->metrics->visitors + nmetrics->visitors;
        h->sub_items_size = h->sub_items_size + 1;
      }

    }

  }

}

// add_sub_item_back
// file src/gdashboard.c line 221
static void add_sub_item_back(struct GSubList_ *sub_list, enum MODULES module, struct GMetrics *nmetrics)
{
  struct GSubItem_ *sub_item;
  sub_item=new_gsubitem(module, nmetrics);
  if(!(sub_list->tail == ((struct GSubItem_ *)NULL)))
  {
    sub_list->tail->next = sub_item;
    sub_item->prev = sub_list->tail;
    sub_list->tail = sub_item;
  }

  else
  {
    sub_list->head = sub_item;
    sub_list->tail = sub_item;
  }
  sub_list->size = sub_list->size + 1;
}

// add_sub_item_to_dash
// file src/gdashboard.c line 1393
static void add_sub_item_to_dash(struct GDash_ **dash, struct GHolderItem_ item, enum MODULES module, signed int *i)
{
  struct GSubList_ *sub_list = item.sub_list;
  struct GSubItem_ *iter;
  struct GDashData_ *idata;
  char *entry;
  signed int *idx = &(*dash)->module[(signed long int)module].idx_data;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    iter = sub_list->head;
    for( ; !(iter == ((struct GSubItem_ *)NULL)); *i = *i + 1)
    {
      entry=render_child_node(iter->metrics->data);
      if(!(entry == ((char *)NULL)))
      {
        idata = &(*dash)->module[(signed long int)module].data[(signed long int)*idx];
        idata->metrics=new_gmetrics();
        idata->metrics->visitors = iter->metrics->visitors;
        idata->metrics->bw.sbw=filesize_str(iter->metrics->bw.nbw);
        idata->metrics->data=xstrdup(entry);
        idata->metrics->hits = iter->metrics->hits;
        if(!(conf.serve_usecs == 0))
        {
          idata->metrics->avgts.sts=usecs_to_str(iter->metrics->avgts.nts);
          idata->metrics->cumts.sts=usecs_to_str(iter->metrics->cumts.nts);
          idata->metrics->maxts.sts=usecs_to_str(iter->metrics->maxts.nts);
        }

        idata->is_subitem = (signed short int)1;
        *idx = *idx + 1;
        free((void *)entry);
      }

      iter = iter->next;
    }
  }

}

// alloc_string
// file src/util.h line 43
char * alloc_string(const char *str)
{
  char *new;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(str);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc(return_value_strlen$1 + (unsigned long int)1);
  new = (char *)return_value_xmalloc$2;
  strcpy(new, str);
  return new;
}

// allocate_data
// file src/goaccess.c line 211
static void allocate_data(void)
{
  enum MODULES module;
  signed int col_data;
  col_data=get_num_collapsed_data_rows();
  signed int size = 0;
  dash=new_gdash();
  module = (enum MODULES)0;
  signed int tmp_if_expr$2;
  signed int tmp_if_expr$3;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    signed int return_value_ignore_panel$1;
    return_value_ignore_panel$1=ignore_panel(module);
    if(return_value_ignore_panel$1 == 0)
    {
      switch((signed int)module)
      {
        case VISITORS:
        {
          dash->module[(signed long int)module].head = !(conf.ignore_crawlers != 0) ? "Unique visitors per day - Including spiders" : "Unique visitors per day";
          dash->module[(signed long int)module].desc = "Hits having the same IP, date and agent are a unique visit.";
          break;
        }
        case REQUESTS:
        {
          dash->module[(signed long int)module].head = "Top requests (URLs)";
          dash->module[(signed long int)module].desc = "Top requests sorted by hits [, avgts, cumts, maxts, mthd, proto]";
          break;
        }
        case REQUESTS_STATIC:
        {
          dash->module[(signed long int)module].head = "Top static requests (e.g. jpg, png, js, css..)";
          dash->module[(signed long int)module].desc = "Top static requests sorted by hits [, avgts, cumts, maxts, mthd, proto]";
          break;
        }
        case NOT_FOUND:
        {
          dash->module[(signed long int)module].head = "HTTP 404 Not Found URLs";
          dash->module[(signed long int)module].desc = "Top 404 Not Found URLs sorted by hits [, avgts, cumts, maxts, mthd, proto]";
          break;
        }
        case HOSTS:
        {
          dash->module[(signed long int)module].head = "Visitor hostnames and IPs";
          dash->module[(signed long int)module].desc = "Top visitor hosts sorted by hits [, avgts, cumts, maxts]";
          break;
        }
        case OS:
        {
          dash->module[(signed long int)module].head = "Operating Systems";
          dash->module[(signed long int)module].desc = "Top Operating Systems sorted by hits [, avgts, cumts, maxts]";
          break;
        }
        case BROWSERS:
        {
          dash->module[(signed long int)module].head = "Browsers";
          dash->module[(signed long int)module].desc = "Top Browsers sorted by hits [, avgts, cumts, maxts]";
          break;
        }
        case VISIT_TIMES:
        {
          dash->module[(signed long int)module].head = "Time Distribution";
          dash->module[(signed long int)module].desc = "Data sorted by hour [, avgts, cumts, maxts]";
          break;
        }
        case REFERRERS:
        {
          dash->module[(signed long int)module].head = "Referrers URLs";
          dash->module[(signed long int)module].desc = "Top Requested Referrers sorted by hits [, avgts, cumts, maxts]";
          break;
        }
        case REFERRING_SITES:
        {
          dash->module[(signed long int)module].head = "Referring Sites";
          dash->module[(signed long int)module].desc = "Top Referring Sites sorted by hits [, avgts, cumts, maxts]";
          break;
        }
        case KEYPHRASES:
        {
          dash->module[(signed long int)module].head = "Keyphrases from Google's search engine";
          dash->module[(signed long int)module].desc = "Top Keyphrases sorted by hits [, avgts, cumts, maxts]";
          break;
        }
        case GEO_LOCATION:
        {
          dash->module[(signed long int)module].head = "Geo Location";
          dash->module[(signed long int)module].desc = "Continent > Country sorted by unique hits [, avgts, cumts, maxts]";
          break;
        }
        case STATUS_CODES:
        {
          dash->module[(signed long int)module].head = "HTTP Status Codes";
          dash->module[(signed long int)module].desc = "Top HTTP Status Codes sorted by hits [, avgts, cumts, maxts]";
        }
      }
      size = (holder + (signed long int)module)->idx;
      if(module == gscroll.current && !(gscroll.expanded == 0))
      {
        if(size >= 367)
          tmp_if_expr$2 = 366;

        else
          tmp_if_expr$2 = (holder + (signed long int)module)->idx;
        size = tmp_if_expr$2;
      }

      else
      {
        if(!(col_data >= (holder + (signed long int)module)->idx))
          tmp_if_expr$3 = col_data;

        else
          tmp_if_expr$3 = (holder + (signed long int)module)->idx;
        size = tmp_if_expr$3;
      }
      dash->module[(signed long int)module].alloc_data = size;
      dash->module[(signed long int)module].ht_size = (holder + (signed long int)module)->ht_size;
      dash->module[(signed long int)module].idx_data = 0;
      dash->module[(signed long int)module].pos_y = (unsigned short int)0;
      if(module == gscroll.current && !(gscroll.expanded == 0))
        dash->module[(signed long int)module].dash_size = 32;

      else
        dash->module[(signed long int)module].dash_size = 12;
      dash->total_alloc = dash->total_alloc + dash->module[(signed long int)module].dash_size;
      pthread_mutex_lock(&gdns_thread.mutex);
      load_data_to_dash(&holder[(signed long int)module], dash, module, &gscroll);
      pthread_mutex_unlock(&gdns_thread.mutex);
    }

  }
}

// allocate_holder
// file src/goaccess.c line 186
static void allocate_holder(void)
{
  struct _GHashTable *ht;
  enum MODULES module;
  struct GRawData_ *raw_data;
  unsigned int ht_size = (unsigned int)0;
  holder=new_gholder((unsigned int)13);
  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    void *return_value_get_storage_metric$1;
    return_value_get_storage_metric$1=get_storage_metric(module, (enum METRICS)MTRC_HITS);
    ht = (struct _GHashTable *)return_value_get_storage_metric$1;
    ht_size=get_ht_size(ht);
    raw_data=parse_raw_data(ht, (signed int)ht_size, module);
    load_holder_data(raw_data, holder + (signed long int)module, module, module_sort[(signed long int)module]);
  }
}

// allocate_holder_by_module
// file src/goaccess.c line 166
static void allocate_holder_by_module(enum MODULES module)
{
  struct _GHashTable *ht;
  struct GRawData_ *raw_data;
  unsigned int ht_size = (unsigned int)0;
  void *return_value_get_storage_metric$1;
  return_value_get_storage_metric$1=get_storage_metric(module, (enum METRICS)MTRC_HITS);
  ht = (struct _GHashTable *)return_value_get_storage_metric$1;
  ht_size=get_ht_size(ht);
  raw_data=parse_raw_data(ht, (signed int)ht_size, module);
  load_holder_data(raw_data, holder + (signed long int)module, module, module_sort[(signed long int)module]);
}

// append_query_string
// file src/parser.c line 1341
static void append_query_string(char **req, const char *qstr)
{
  char *r;
  unsigned long int s1;
  unsigned long int s2;
  s1=strlen(*req);
  s2=strlen(qstr);
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(s1 + s2 + (unsigned long int)2);
  r = (char *)return_value_xmalloc$1;
  memcpy((void *)r, (const void *)*req, s1);
  memcpy((void *)(r + (signed long int)s1), (const void *)qstr, s2 + (unsigned long int)1);
  free((void *)*req);
  *req = r;
}

// append_to_argv
// file src/settings.c line 181
static void append_to_argv(signed int *argc, char ***argv, char *val)
{
  char **_argv;
  void *return_value_xrealloc$1;
  return_value_xrealloc$1=xrealloc((void *)*argv, (unsigned long int)(*argc + 2) * sizeof(char *) /*8ul*/ );
  _argv = (char **)return_value_xrealloc$1;
  _argv[(signed long int)*argc] = val;
  _argv[(signed long int)(*argc + 1)] = ((char *)NULL);
  *argc = *argc + 1;
  *argv = _argv;
}

// can_sort_module
// file src/sort.c line 349
signed int can_sort_module(enum MODULES module, signed int field)
{
  signed int i;
  signed int can_sort = 0;
  i = 0;
  for( ; !(sort_choices[(signed long int)module][(signed long int)i] == -1); i = i + 1)
  {
    if(sort_choices[(signed long int)module][(signed long int)i] == field)
    {
      if(!(conf.serve_usecs == 0) || !(field == SORT_BY_AVGTS))
      {
        if(!(conf.serve_usecs == 0) || !(field == SORT_BY_CUMTS))
        {
          if(conf.serve_usecs == 0 && field == SORT_BY_MAXTS)
            goto __CPROVER_DUMP_L6;

          else
            if(conf.bandwidth == 0 && field == SORT_BY_BW)
              goto __CPROVER_DUMP_L6;

            else
              if(conf.append_protocol == 0 && field == SORT_BY_PROT)
                goto __CPROVER_DUMP_L6;

              else
                if(conf.append_method == 0 && field == SORT_BY_MTHD)
                  goto __CPROVER_DUMP_L6;

          can_sort = 1;
          break;
        }

      }

    }


  __CPROVER_DUMP_L6:
    ;
  }
  return can_sort;
}

// char_repeat
// file src/util.h line 44
char * char_repeat(signed int n, char c)
{
  char *dest;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)(n + 1));
  dest = (char *)return_value_xmalloc$1;
  memset((void *)dest, (signed int)c, (unsigned long int)n);
  dest[(signed long int)n] = (char)0;
  return dest;
}

// char_replace
// file src/util.h line 45
char * char_replace(char *str, char o, char n)
{
  char *p = str;
  _Bool tmp_if_expr$1;
  if(str == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  char *tmp_post$2;
  if(tmp_if_expr$1)
    return str;

  else
  {
    do
    {
      p=strchr(p, (signed int)o);
      if(p == ((char *)NULL))
        break;

      tmp_post$2 = p;
      p = p + 1l;
      *tmp_post$2 = n;
    }
    while((_Bool)1);
    return str;
  }
}

// clean_output
// file src/output.c line 400
static void clean_output(struct _IO_FILE *fp, char *s)
{
  for( ; !(*s == 0); s = s + 1l)
    switch((signed int)*s)
    {
      case 39:
      {
        fprintf(fp, "&#39;");
        break;
      }
      case 34:
      {
        fprintf(fp, "&#34;");
        break;
      }
      case 38:
      {
        fprintf(fp, "&amp;");
        break;
      }
      case 60:
      {
        fprintf(fp, "&lt;");
        break;
      }
      case 62:
      {
        fprintf(fp, "&gt;");
        break;
      }
      case 32:
      {
        fprintf(fp, "&nbsp;");
        break;
      }
      default:
        fputc((signed int)*s, fp);
    }
}

// clear_confdlg_status_bar
// file src/ui.c line 935
static void clear_confdlg_status_bar(struct _win_st *win)
{
  draw_header(win, "", "%s", 3, 2, 48, color_default);
}

// close_win
// file src/ui.c line 143
void close_win(struct _win_st *w)
{
  if(!(w == ((struct _win_st *)NULL)))
  {
    wclear(w);
    wrefresh(w);
    delwin(w);
  }

}

// cmd_help
// file src/options.h line 24
void cmd_help(void)
{
  printf("\nGoAccess - %s\n\n", (const void *)"0.9.4");
  printf("Usage: goaccess [ options ... ] -f log_file [-c][-M][-H][-q][-d][...]\nThe following options can also be supplied to the command:\n\nLog & Date Format Options\n\n  --log-format=<logformat>        - Specify log format. Inner quotes need to be\n                                    escaped, or use single quotes.\n  --date-format=<dateformat>      - Specify log date format. e.g., %%d/%%b/%%Y\n  --time-format=<timeformat>      - Specify log time format. e.g., %%H:%%M:%%S\n\nUser Interface Options\n\n  -c --config-dialog              - Prompt log/date/time configuration window.\n  -i --hl-header                  - Color highlight active panel.\n  -m --with-mouse                 - Enable mouse support on main dashboard.\n  --color=<fg:bg[attrs, PANEL]>   - Specify custom colors.\n                                    See manpage for more details and options.\n  --color-scheme=<1|2>            - Color schemes: 1 => Grey, 2 => Green.\n  --html-report-title=<title>     - Set HTML report page title and header.\n  --no-color                      - Disable colored output.\n  --no-column-names               - Don't write column names in term output.\n  --no-csv-summary                - Disable summary metrics on the CSV output.\n  --no-progress                   - Disable progress metrics.\n\nFile Options\n\n  -f --log-file=<filename>        - Path to input log file.\n  -p --config-file=<filename>     - Custom configuration file.\n  --invalid-requests=<filename>   - Log invalid requests to the specified file.\n  --no-global-config              - Don't load global configuration file.\n\nParse Options\n\n  -a --agent-list                 - Enable a list of user-agents by host.\n  -d --with-output-resolver       - Enable IP resolver on HTML|JSON output.\n  -e --exclude-ip=<IP>            - Exclude one or multiple IPv4/6. Allows\n                                    IP ranges e.g. 192.168.0.1-192.168.0.10\n  -H --http-protocol              - Include HTTP request protocol if found.\n  -M --http-method                - Include HTTP request method if found.\n  -o --output-format=csv|json     - Output either a JSON or a CSV file.\n  -q --no-query-string            - Ignore request's query string.\n                                    Removing the query string can greatly\n                                    decrease memory consumption.\n  -r --no-term-resolver           - Disable IP resolver on terminal output.\n  --444-as-404                    - Treat non-standard status code 444 as 404.\n  --4xx-to-unique-count           - Add 4xx client errors to the unique\n                                    visitors count.\n  --all-static-files              - Include static files with a query string.\n  --double-decode                 - Decode double-encoded values.\n  --ignore-crawlers               - Ignore crawlers.\n  --ignore-panel=PANEL            - Ignore parsing/displaying the given panel.\n  --ignore-referer=<needle>       - Ignore a referer from being counted.\n                                    Wild cards are allowed. i.e., *.bing.com\n  --real-os                       - Display real OS names. e.g, Windows XP,\n                                    Snow Leopard.\n  --sort-panel=PANEL,METRIC,ORDER - Sort panel on initial load. For example:\n                                    --sort-panel=VISITORS,BY_HITS,ASC\n                                    See manpage for a list of panels/fields.\n  --static-file=<extension>       - Add static file extension. e.g.: .mp3\n                                    Extensions are case sensitive.\nGeoIP Options\n\n  -g --std-geoip                  - Standard GeoIP database for less memory\n                                    consumption.\n  --geoip-database=<path>         - Specify path to GeoIP database file.\n                                    i.e., GeoLiteCity.dat, GeoIPv6.dat ...\n\nOther Options\n\n  -h --help                       - This help.\n  -V --version                    - Display version information and exit.\n  -s --storage                    - Display current storage method.\n                                    e.g., B+ Tree, Hash.\n\nExamples can be found by running `man goaccess`.\n\nFor more details visit: http://goaccess.io\nGoAccess Copyright (C) 2009-2015 GNU GPL'd, by Gerardo Orellana\n\n");
  exit(1);
}

// cmp_avgts_asc
// file src/sort.c line 219
static signed int cmp_avgts_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->avgts.nts;
  unsigned long int vb = ib->metrics->avgts.nts;
  return (signed int)(va > vb) - (signed int)(va < vb);
}

// cmp_avgts_desc
// file src/sort.c line 206
static signed int cmp_avgts_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->avgts.nts;
  unsigned long int vb = ib->metrics->avgts.nts;
  return (signed int)(va < vb) - (signed int)(va > vb);
}

// cmp_bw_asc
// file src/sort.c line 193
static signed int cmp_bw_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->bw.nbw;
  unsigned long int vb = ib->metrics->bw.nbw;
  return (signed int)(va > vb) - (signed int)(va < vb);
}

// cmp_bw_desc
// file src/sort.c line 180
static signed int cmp_bw_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->bw.nbw;
  unsigned long int vb = ib->metrics->bw.nbw;
  return (signed int)(va < vb) - (signed int)(va > vb);
}

// cmp_cumts_asc
// file src/sort.c line 245
static signed int cmp_cumts_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->cumts.nts;
  unsigned long int vb = ib->metrics->cumts.nts;
  return (signed int)(va > vb) - (signed int)(va < vb);
}

// cmp_cumts_desc
// file src/sort.c line 232
static signed int cmp_cumts_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->cumts.nts;
  unsigned long int vb = ib->metrics->cumts.nts;
  return (signed int)(va < vb) - (signed int)(va > vb);
}

// cmp_data_asc
// file src/sort.c line 94
static signed int cmp_data_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(ia->metrics->data, ib->metrics->data);
  return return_value_strcmp$1;
}

// cmp_data_desc
// file src/sort.c line 103
static signed int cmp_data_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(ib->metrics->data, ia->metrics->data);
  return return_value_strcmp$1;
}

// cmp_maxts_asc
// file src/sort.c line 271
static signed int cmp_maxts_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->maxts.nts;
  unsigned long int vb = ib->metrics->maxts.nts;
  return (signed int)(va > vb) - (signed int)(va < vb);
}

// cmp_maxts_desc
// file src/sort.c line 258
static signed int cmp_maxts_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  unsigned long int va = ia->metrics->maxts.nts;
  unsigned long int vb = ib->metrics->maxts.nts;
  return (signed int)(va < vb) - (signed int)(va > vb);
}

// cmp_mthd_asc
// file src/sort.c line 302
static signed int cmp_mthd_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(ia->metrics->method, ib->metrics->method);
  return return_value_strcmp$1;
}

// cmp_mthd_desc
// file src/sort.c line 311
static signed int cmp_mthd_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(ib->metrics->method, ia->metrics->method);
  return return_value_strcmp$1;
}

// cmp_num_asc
// file src/sort.c line 125
static signed int cmp_num_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int va = ia->metrics->hits;
  signed int vb = ib->metrics->hits;
  return (signed int)(va > vb) - (signed int)(va < vb);
}

// cmp_num_desc
// file src/sort.c line 112
static signed int cmp_num_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int va = ia->metrics->hits;
  signed int vb = ib->metrics->hits;
  return (signed int)(va < vb) - (signed int)(va > vb);
}

// cmp_proto_asc
// file src/sort.c line 284
static signed int cmp_proto_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(ia->metrics->protocol, ib->metrics->protocol);
  return return_value_strcmp$1;
}

// cmp_proto_desc
// file src/sort.c line 293
static signed int cmp_proto_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp(ib->metrics->protocol, ia->metrics->protocol);
  return return_value_strcmp$1;
}

// cmp_raw_num_desc
// file src/sort.c line 164
static signed int cmp_raw_num_desc(const void *a, const void *b)
{
  const struct GRawDataItem_ *ia = (const struct GRawDataItem_ *)a;
  const struct GRawDataItem_ *ib = (const struct GRawDataItem_ *)b;
  struct GDataMap_ *amap = (struct GDataMap_ *)ia->value;
  struct GDataMap_ *bmap = (struct GDataMap_ *)ib->value;
  signed int va = amap->data;
  signed int vb = bmap->data;
  return (signed int)(va < vb) - (signed int)(va > vb);
}

// cmp_vis_asc
// file src/sort.c line 151
static signed int cmp_vis_asc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int va = ia->metrics->visitors;
  signed int vb = ib->metrics->visitors;
  return (signed int)(va > vb) - (signed int)(va < vb);
}

// cmp_vis_desc
// file src/sort.c line 138
static signed int cmp_vis_desc(const void *a, const void *b)
{
  const struct GHolderItem_ *ia = (const struct GHolderItem_ *)a;
  const struct GHolderItem_ *ib = (const struct GHolderItem_ *)b;
  signed int va = ia->metrics->visitors;
  signed int vb = ib->metrics->visitors;
  return (signed int)(va < vb) - (signed int)(va > vb);
}

// collapse_current_module
// file src/goaccess.c line 340
static void collapse_current_module(void)
{
  if(!(gscroll.expanded == 0))
  {
    gscroll.expanded = 0;
    reset_scroll_offsets(&gscroll);
    free_dashboard(dash);
    allocate_data();
    render_screens();
  }

}

// color_default
// file src/color.c line 345
struct GColors_ * color_default(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_DEFAULT);
  return return_value_get_color$1;
}

// color_error
// file src/color.c line 351
struct GColors_ * color_error(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_ERROR);
  return return_value_get_color$1;
}

// color_overall_lbls
// file src/color.c line 297
struct GColors_ * color_overall_lbls(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_OVERALL_LBLS);
  return return_value_get_color$1;
}

// color_overall_path
// file src/color.c line 309
struct GColors_ * color_overall_path(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_OVERALL_PATH);
  return return_value_get_color$1;
}

// color_overall_vals
// file src/color.c line 303
struct GColors_ * color_overall_vals(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_OVERALL_VALS);
  return return_value_get_color$1;
}

// color_panel_active
// file src/color.c line 327
struct GColors_ * color_panel_active(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_PANEL_ACTIVE);
  return return_value_get_color$1;
}

// color_panel_desc
// file src/color.c line 321
struct GColors_ * color_panel_desc(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_PANEL_DESC);
  return return_value_get_color$1;
}

// color_panel_header
// file src/color.c line 315
struct GColors_ * color_panel_header(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_PANEL_HEADER);
  return return_value_get_color$1;
}

// color_progress
// file src/color.c line 339
struct GColors_ * color_progress(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_PROGRESS);
  return return_value_get_color$1;
}

// color_selected
// file src/color.c line 333
struct GColors_ * color_selected(void)
{
  struct GColors_ *return_value_get_color$1;
  return_value_get_color$1=get_color((enum CSTM_COLORS)COLOR_SELECTED);
  return return_value_get_color$1;
}

// convert_date
// file src/util.h line 66
signed int convert_date(char *res, char *data, const char *from, const char *to, signed int size)
{
  struct tm$1 tm;
  memset((void *)&tm, 0, sizeof(struct tm$1) /*56ul*/ );
  timestamp=time((signed long int *)(void *)0);
  now_tm=localtime(&timestamp);
  signed int return_value_str_to_time$1;
  return_value_str_to_time$1=str_to_time(data, from, &tm);
  char *return_value_strpbrk$2;
  if(!(return_value_str_to_time$1 == 0))
    return 1;

  else
  {
    signed int return_value_has_timestamp$3;
    return_value_has_timestamp$3=has_timestamp(from);
    if(return_value_has_timestamp$3 == 0)
    {
      return_value_strpbrk$2=strpbrk(from, "Yy");
      if(return_value_strpbrk$2 == ((char *)NULL))
        tm.tm_year = now_tm->tm_year;

    }

    unsigned long int return_value_strftime$4;
    return_value_strftime$4=strftime(res, (unsigned long int)size, to, &tm);
    if(!(return_value_strftime$4 >= 1ul))
      return 1;

    else
      return 0;
  }
}

// count_invalid
// file src/parser.c line 1079
static void count_invalid(struct GLog_ *logger, const char *line, signed int test)
{
  logger->invalid = logger->invalid + 1u;
  (void)test;
  if(!(conf.invalid_requests_log == ((char *)NULL)))
    do
      invalid_fprintf("%s", line);
    while((_Bool)0);

}

// count_matches
// file src/util.h line 67
signed int count_matches(const char *s1, char c)
{
  const char *ptr = s1;
  signed int n = 0;
  const char *tmp_post$1;
  while((_Bool)1)
  {
    if(*ptr == c)
      n = n + 1;

    tmp_post$1 = ptr;
    ptr = ptr + 1l;
    if(*tmp_post$1 == 0)
      break;

  }
  return n;
}

// count_process
// file src/parser.c line 1107
static void count_process(struct GLog_ *logger, signed int test)
{
  lock_spinner();
  logger->processed = logger->processed + 1u;
  (void)test;
  unlock_spinner();
}

// count_valid
// file src/parser.c line 1093
static void count_valid(struct GLog_ *logger, signed int test)
{
  lock_spinner();
  logger->valid = logger->valid + 1u;
  (void)test;
  unlock_spinner();
}

// curses_output
// file src/goaccess.c line 902
static void curses_output(void)
{
  allocate_data();
  if(conf.skip_term_resolver == 0)
    gdns_thread_create();

  render_screens();
  get_keys();
  endwin();
}

// data_visitors
// file src/gdashboard.c line 1485
static void data_visitors(struct GHolder_ *h)
{
  char date[12l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *datum = (h->items + (signed long int)h->idx)->metrics->data;
  memset((void *)date, 0, sizeof(char) /*1ul*/ );
  signed int return_value_convert_date$1;
  return_value_convert_date$1=convert_date(date, datum, conf.date_format, "%Y%m%d", 12);
  if(return_value_convert_date$1 == 0)
  {
    free((void *)datum);
    (h->items + (signed long int)h->idx)->metrics->data=xstrdup(date);
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    free((void *)datum);
    (h->items + (signed long int)h->idx)->metrics->data=xstrdup("---");
  }
}

// dbg_fprintf
// file src/error.c line 134
void dbg_fprintf(const char *fmt, ...)
{
  void **args;
  if(!(log_file == ((struct _IO_FILE *)NULL)))
  {
    args = (void **)&fmt;
    vfprintf(log_file, fmt, args);
    fflush(log_file);
    args = ((void **)NULL);
  }

}

// dbg_log_close
// file src/error.c line 53
void dbg_log_close(void)
{
  if(!(log_file == ((struct _IO_FILE *)NULL)))
    fclose(log_file);

}

// dbg_log_open
// file src/error.c line 43
void dbg_log_open(const char *path)
{
  if(!(path == ((const char *)NULL)))
    log_file=fopen(path, "w");

}

// deblank
// file src/util.h line 46
char * deblank(char *str)
{
  char *out = str;
  char *put = str;
  char *tmp_post$1;
  for( ; !((signed int)*str == 0); str = str + 1l)
    if(!((signed int)*str == 32))
    {
      tmp_post$1 = put;
      put = put + 1l;
      *tmp_post$1 = *str;
    }

  *put = (char)0;
  return out;
}

// decode_hex
// file src/parser.c line 447
static void decode_hex(char *url, char *out)
{
  char *ptr;
  const char *c = url;
  ptr = out;
  _Bool tmp_if_expr$10;
  const unsigned short int **return_value___ctype_b_loc$9;
  _Bool tmp_if_expr$12;
  const unsigned short int **return_value___ctype_b_loc$11;
  char *tmp_post$1;
  char *tmp_post$2;
  _Bool tmp_if_expr$3;
  signed int tmp_if_expr$5;
  signed int return_value_toupper$4;
  _Bool tmp_if_expr$6;
  signed int tmp_if_expr$8;
  signed int return_value_toupper$7;
  for( ; !(*c == 0); c = c + 1l)
  {
    if(!((signed int)*c == 37))
      tmp_if_expr$10 = (_Bool)1;

    else
    {
      return_value___ctype_b_loc$9=__ctype_b_loc();
      tmp_if_expr$10 = !(((signed int)(*return_value___ctype_b_loc$9)[(signed long int)(signed int)c[(signed long int)1]] & (signed int)(unsigned short int)4096) != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$10)
      tmp_if_expr$12 = (_Bool)1;

    else
    {
      return_value___ctype_b_loc$11=__ctype_b_loc();
      tmp_if_expr$12 = !(((signed int)(*return_value___ctype_b_loc$11)[(signed long int)(signed int)c[(signed long int)2]] & (signed int)(unsigned short int)4096) != 0) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$12)
    {
      tmp_post$1 = ptr;
      ptr = ptr + 1l;
      *tmp_post$1 = *c;
    }

    else
    {
      tmp_post$2 = ptr;
      ptr = ptr + 1l;
      if((signed int)c[1l] >= 48)
        tmp_if_expr$3 = (signed int)c[(signed long int)1] <= 57 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$3 = (_Bool)0;
      if(tmp_if_expr$3)
        tmp_if_expr$5 = (signed int)c[(signed long int)1] - 48;

      else
      {
        return_value_toupper$4=toupper((signed int)c[(signed long int)1]);
        tmp_if_expr$5 = (return_value_toupper$4 - 65) + 10;
      }
      if((signed int)c[2l] >= 48)
        tmp_if_expr$6 = (signed int)c[(signed long int)2] <= 57 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$6 = (_Bool)0;
      if(tmp_if_expr$6)
        tmp_if_expr$8 = (signed int)c[(signed long int)2] - 48;

      else
      {
        return_value_toupper$7=toupper((signed int)c[(signed long int)2]);
        tmp_if_expr$8 = (return_value_toupper$7 - 65) + 10;
      }
      *tmp_post$2 = (char)(tmp_if_expr$5 * 16 + tmp_if_expr$8);
      c = c + (signed long int)2;
    }
  }
  *ptr = (char)0;
}

// decode_url
// file src/parser.c line 464
static char * decode_url(char *url)
{
  char *out;
  char *decoded;
  _Bool tmp_if_expr$1;
  if(url == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*url == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    decoded=xstrdup(url);
    out = decoded;
    decode_hex(url, out);
    if(!(conf.double_decode == 0))
      decode_hex(decoded, out);

    strip_newlines(out);
    char *return_value_trim_str$2;
    return_value_trim_str$2=trim_str(out);
    return return_value_trim_str$2;
  }
}

// delete_sub_list
// file src/gdashboard.c line 237
static void delete_sub_list(struct GSubList_ *sub_list)
{
  struct GSubItem_ *item = (struct GSubItem_ *)(void *)0;
  struct GSubItem_ *next = (struct GSubItem_ *)(void *)0;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    if(sub_list->size == 0)
      goto clear;

  }

  if(!(sub_list->size == 0))
  {
    item = sub_list->head;
    for( ; !(item == ((struct GSubItem_ *)NULL)); item = next)
    {
      next = item->next;
      free((void *)item->metrics->data);
      free((void *)item->metrics);
      free((void *)item);
    }

  clear:
    ;
    sub_list->head = (struct GSubItem_ *)(void *)0;
    sub_list->size = 0;
    free((void *)sub_list);
  }

}

// disabled_panel_msg
// file src/goaccess.c line 353
static void disabled_panel_msg(enum MODULES module)
{
  const char *lbl;
  lbl=module_to_label(module);
  signed int row;
  signed int col;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st$1 *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  row = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st$1 *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  col = tmp_if_expr$2;
  draw_header(stdscr, lbl, "'%s' panel is disabled", row - 1, 0, col, color_error);
}

// display_content
// file src/gdashboard.c line 1100
void display_content(struct _win_st$2 *win, struct GLog_ *logger, struct GDash_ *dash, struct GScroll_ *gscroll)
{
  struct GDashData_ *idata;
  enum MODULES module;
  float max_percent = (float)0.0;
  signed int j;
  signed int n = 0;
  signed int valid = 0;
  signed int y = 0;
  signed int offset = 0;
  signed int total = 0;
  signed int dash_scroll = gscroll->dash;
  werase(win);
  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    n = dash->module[(signed long int)module].idx_data;
    offset = 0;
    j = 0;
    for( ; !(j >= dash->module[(signed long int)module].dash_size); j = j + 1)
      if(!(total >= dash_scroll))
      {
        offset = offset + 1;
        total = total + 1;
      }

    idata = dash->module[(signed long int)module].data;
    valid = (signed int)logger->valid;
    max_percent=set_percent_data(idata, n, valid);
    dash->module[(signed long int)module].module = module;
    dash->module[(signed long int)module].method_len=get_max_method_len(idata, n);
    dash->module[(signed long int)module].data_len=get_max_data_len(idata, n);
    dash->module[(signed long int)module].hits_len=get_max_hit_len(idata, n);
    dash->module[(signed long int)module].max_hits=get_max_hit(idata, n);
    dash->module[(signed long int)module].perc_len=get_max_perc_len((signed int)max_percent);
    dash->module[(signed long int)module].visitors_len=get_max_visitor_len(idata, n);
    render_content(win, &dash->module[(signed long int)module], &y, &offset, &total, gscroll);
  }
  wrefresh(win);
}

// display_general
// file src/ui.h line 305
void display_general(struct _win_st *win, char *ifile, struct GLog_ *logger)
{
  struct GColors_ * (*colorlbl)(void) = color_overall_lbls;
  struct GColors_ * (*colorpth)(void) = color_overall_path;
  struct GColors_ * (*colorval)(void) = color_overall_vals;
  signed int col;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$1 = -1;
  col = tmp_if_expr$1;
  unsigned long int n;
  unsigned long int i;
  struct Field_ fields[13l];
  char *return_value_get_str_processed_reqs$2;
  return_value_get_str_processed_reqs$2=get_str_processed_reqs(logger);
  char *return_value_get_str_visitors$3;
  return_value_get_str_visitors$3=get_str_visitors();
  char *return_value_get_str_reqs$4;
  return_value_get_str_reqs$4=get_str_reqs();
  char *return_value_get_str_ref_reqs$5;
  return_value_get_str_ref_reqs$5=get_str_ref_reqs();
  char *return_value_get_str_valid_reqs$6;
  return_value_get_str_valid_reqs$6=get_str_valid_reqs(logger);
  char *return_value_get_str_proctime$7;
  return_value_get_str_proctime$7=get_str_proctime();
  char *return_value_get_str_static_reqs$8;
  return_value_get_str_static_reqs$8=get_str_static_reqs();
  char *return_value_get_str_filesize$9;
  return_value_get_str_filesize$9=get_str_filesize(logger, ifile);
  char *return_value_get_str_failed_reqs$10;
  return_value_get_str_failed_reqs$10=get_str_failed_reqs(logger);
  char *return_value_get_str_excluded_ips$11;
  return_value_get_str_excluded_ips$11=get_str_excluded_ips(logger);
  char *return_value_get_str_notfound_reqs$12;
  return_value_get_str_notfound_reqs$12=get_str_notfound_reqs();
  char *return_value_get_str_bandwidth$13;
  return_value_get_str_bandwidth$13=get_str_bandwidth(logger);
  char *return_value_get_str_logfile$14;
  return_value_get_str_logfile$14=get_str_logfile(logger, ifile);
  fields[0] = (struct Field_){ .field="Total Requests", .value=return_value_get_str_processed_reqs$2, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[1] = (struct Field_){ .field="Unique Visitors", .value=return_value_get_str_visitors$3, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[2] = (struct Field_){ .field="Unique Files", .value=return_value_get_str_reqs$4, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[3] = (struct Field_){ .field="Referrers", .value=return_value_get_str_ref_reqs$5, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[4] = (struct Field_){ .field="Valid Requests", .value=return_value_get_str_valid_reqs$6, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[5] = (struct Field_){ .field="Processed Time", .value=return_value_get_str_proctime$7, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[6] = (struct Field_){ .field="Static Files", .value=return_value_get_str_static_reqs$8, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[7] = (struct Field_){ .field="Log Size", .value=return_value_get_str_filesize$9, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[8] = (struct Field_){ .field="Failed Requests", .value=return_value_get_str_failed_reqs$10, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[9] = (struct Field_){ .field="Excl. IP Hits", .value=return_value_get_str_excluded_ips$11, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[10] = (struct Field_){ .field="Unique 404", .value=return_value_get_str_notfound_reqs$12, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[11] = (struct Field_){ .field="Bandwidth", .value=return_value_get_str_bandwidth$13, .colorlbl=colorlbl,
    .colorval=colorval, .oneliner=(signed short int)0 };
  fields[12] = (struct Field_){ .field="Log File", .value=return_value_get_str_logfile$14, .colorlbl=colorlbl,
    .colorval=colorpth, .oneliner=(signed short int)1 };
  werase(win);
  draw_header(win, "Dashboard - Overall Analyzed Requests", " %s", 0, 0, col, color_panel_header);
  n = sizeof(struct Field_ [13l]) /*520ul*/  / sizeof(struct Field_) /*40ul*/ ;
  render_overall_statistics(win, fields, n);
  i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
    free((void *)fields[(signed long int)i].value);
}

// display_storage
// file src/commons.c line 72
void display_storage(void)
{
  fprintf(stdout, "Built using GLib On-Memory Hash database.\n");
}

// display_version
// file src/commons.c line 84
void display_version(void)
{
  fprintf(stdout, "GoAccess - %s.\n", (const void *)"0.9.4");
  fprintf(stdout, "For more details visit: http://goaccess.io\n");
  fprintf(stdout, "Copyright (C) 2009-2015 GNU GPL'd, by Gerardo Orellana\n");
}

// dns_resolver
// file src/gdns.h line 53
void dns_resolver(char *addr)
{
  pthread_mutex_lock(&gdns_thread.mutex);
  signed int return_value_gqueue_full$3;
  return_value_gqueue_full$3=gqueue_full(gdns_queue);
  signed int return_value_gqueue_find$2;
  if(return_value_gqueue_full$3 == 0)
  {
    return_value_gqueue_find$2=gqueue_find(gdns_queue, addr);
    if(return_value_gqueue_find$2 == 0)
    {
      char *return_value_g_strdup$1;
      return_value_g_strdup$1=g_strdup(addr);
      g_hash_table_replace(ht_hostnames, (void *)return_value_g_strdup$1, (void *)0);
      gqueue_enqueue(gdns_queue, addr);
      pthread_cond_broadcast(&gdns_thread.not_empty);
    }

  }

  pthread_mutex_unlock(&gdns_thread.mutex);
}

// dns_worker
// file src/gdns.c line 197
static void dns_worker(void *ptr_data)
{
  char *ip = (char *)(void *)0;
  char *host = (char *)(void *)0;
  signed int return_value_gqueue_empty$1;
  char *return_value_g_strdup$2;
  while((_Bool)1)
  {
    pthread_mutex_lock(&gdns_thread.mutex);
    do
    {
      return_value_gqueue_empty$1=gqueue_empty(gdns_queue);
      if(return_value_gqueue_empty$1 == 0)
        break;

      pthread_cond_wait(&gdns_thread.not_empty, &gdns_thread.mutex);
    }
    while((_Bool)1);
    ip=gqueue_dequeue(gdns_queue);
    pthread_mutex_unlock(&gdns_thread.mutex);
    host=reverse_ip(ip);
    pthread_mutex_lock(&gdns_thread.mutex);
    if(active_gdns == 0)
    {
      if(!(host == ((char *)NULL)))
        free((void *)host);

      break;
    }

    if(!(host == ((char *)NULL)) && !(active_gdns == 0))
    {
      return_value_g_strdup$2=g_strdup(ip);
      g_hash_table_replace(ht_hostnames, (void *)return_value_g_strdup$2, (void *)host);
    }

    pthread_cond_signal(&gdns_thread.not_full);
    pthread_mutex_unlock(&gdns_thread.mutex);
  }
}

// draw_header
// file src/ui.c line 199
void draw_header(struct _win_st *win, const char *s, const char *fmt, signed int y, signed int x, signed int w, struct GColors_ * (*func)(void))
{
  struct GColors_ *color;
  color=func();
  char *buf;
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, fmt, s);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  buf = (char *)return_value_xmalloc$2;
  sprintf(buf, fmt, s);
  wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  signed int return_value_wmove$3;
  return_value_wmove$3=wmove(win, y, x);
  if(return_value_wmove$3 == -1)
    -1;

  else
    whline(win, (unsigned long int)32, w);
  signed int return_value_wmove$4;
  return_value_wmove$4=wmove(win, y, x);
  if(return_value_wmove$4 == -1)
    -1;

  else
    waddnstr(win, buf, w);
  wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  free((void *)buf);
}

// draw_menu_item
// file src/gmenu.c line 57
static void draw_menu_item(struct GMenu_$0 *menu, char *s, signed int x, signed int y, signed int w, signed int checked, struct GColors_ * (*func)(void))
{
  char check;
  char *lbl = (char *)(void *)0;
  if(!(menu->selectable == 0))
  {
    check = (char)(checked != 0 ? 120 : 32);
    signed int return_value_snprintf$1;
    return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "[%c] %s", check, s);
    void *return_value_xmalloc$2;
    return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
    lbl = (char *)return_value_xmalloc$2;
    sprintf(lbl, "[%c] %s", check, s);
    draw_header(menu->win, lbl, "%s", y, x, w, (func));
    free((void *)lbl);
  }

  else
    draw_header(menu->win, s, "%s", y, x, w, (func));
}

// dump_struct
// file src/error.c line 84
static void dump_struct(struct _IO_FILE *fp)
{
  signed int pid;
  pid=getpid();
  if(!(log_data == ((struct GLog_ *)NULL)))
  {
    fprintf(fp, "==%d== VALUES AT CRASH POINT\n", pid);
    fprintf(fp, "==%d==\n", pid);
    fprintf(fp, "==%d== Line number: %u\n", pid, log_data->processed);
    fprintf(fp, "==%d== Offset: %u\n", pid, log_data->offset);
    fprintf(fp, "==%d== Invalid data: %u\n", pid, log_data->invalid);
    fprintf(fp, "==%d== Piping: %d\n", pid, log_data->piping);
    fprintf(fp, "==%d== Response size: %llu bytes\n", pid, log_data->resp_size);
    fprintf(fp, "==%d==\n", pid);
  }

}

// end_spinner
// file src/ui.h line 307
void end_spinner(void)
{
  pthread_mutex_lock(&parsing_spinner->mutex);
  parsing_spinner->state = (enum anonymous$7)SPN_END;
  pthread_mutex_unlock(&parsing_spinner->mutex);
}

// escape_cvs_output
// file src/csv.c line 86
static void escape_cvs_output(struct _IO_FILE *fp, char *s)
{
  for( ; !(*s == 0); s = s + 1l)
  {
    if((signed int)*s == 34)
    {
      fprintf(fp, "\"\"");
      goto __CPROVER_DUMP_L4;
    }

    fputc((signed int)*s, fp);

  __CPROVER_DUMP_L4:
    ;
  }
}

// escape_json_output
// file src/json.c line 86
static void escape_json_output(struct _IO_FILE *fp, char *s)
{
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  for( ; !(*s == 0); s = s + 1l)
    switch((signed int)*s)
    {
      case 34:
      {
        fprintf(fp, "\\\"");
        break;
      }
      case 92:
      {
        fprintf(fp, "\\\\");
        break;
      }
      case 8:
      {
        fprintf(fp, "\\\b");
        break;
      }
      case 12:
      {
        fprintf(fp, "\\\f");
        break;
      }
      case 10:
      {
        fprintf(fp, "\\\n");
        break;
      }
      case 13:
      {
        fprintf(fp, "\\\r");
        break;
      }
      case 9:
      {
        fprintf(fp, "\\\t");
        break;
      }
      case 47:
      {
        fprintf(fp, "\\/");
        break;
      }
      default:
        if(!((signed int)(unsigned char)*s >= 32))
        {
          char buf[8l];
          snprintf(buf, sizeof(char [8l]) /*8ul*/ , "\\u%04x", *s);
          fprintf(fp, "%s", (const void *)buf);
        }

        else
        {
          if((signed int)(unsigned char)*s == 0xe2)
            tmp_if_expr$3 = (signed int)(unsigned char)s[(signed long int)1] == 0x80 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$3 = (_Bool)0;
          if(tmp_if_expr$3)
            tmp_if_expr$4 = (signed int)(unsigned char)s[(signed long int)2] == 0xa8 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$4 = (_Bool)0;
          if(tmp_if_expr$4)
          {
            fprintf(fp, "\\u2028");
            s = s + (signed long int)2;
          }

          else
          {
            if((signed int)(unsigned char)*s == 0xe2)
              tmp_if_expr$1 = (signed int)(unsigned char)s[(signed long int)1] == 0x80 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$1 = (_Bool)0;
            if(tmp_if_expr$1)
              tmp_if_expr$2 = (signed int)(unsigned char)s[(signed long int)2] == 0xa9 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$2 = (_Bool)0;
            if(tmp_if_expr$2)
            {
              fprintf(fp, "\\u2029");
              s = s + (signed long int)2;
            }

            else
              fputc((signed int)*s, fp);
          }
        }
    }
}

// escape_str
// file src/util.h line 47
char * escape_str(const char *src)
{
  char *dest;
  char *q;
  const unsigned char *p;
  _Bool tmp_if_expr$1;
  if(src == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*src == 0 ? (_Bool)1 : (_Bool)0;
  char *tmp_post$4;
  char *tmp_post$5;
  char *tmp_post$6;
  char *tmp_post$7;
  char *tmp_post$8;
  char *tmp_post$9;
  char *tmp_post$10;
  char *tmp_post$11;
  _Bool tmp_if_expr$17;
  char *tmp_post$12;
  char *tmp_post$13;
  char *tmp_post$14;
  char *tmp_post$15;
  char *tmp_post$16;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    p = (unsigned char *)src;
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(src);
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc(return_value_strlen$2 * (unsigned long int)4 + (unsigned long int)1);
    dest = (char *)return_value_xmalloc$3;
    q = dest;
    for( ; !(*p == 0); p = p + 1l)
      switch((signed int)*p)
      {
        case 92:
        {
          tmp_post$4 = q;
          q = q + 1l;
          *tmp_post$4 = (char)92;
          tmp_post$5 = q;
          q = q + 1l;
          *tmp_post$5 = (char)92;
          break;
        }
        case 10:
        {
          tmp_post$6 = q;
          q = q + 1l;
          *tmp_post$6 = (char)92;
          tmp_post$7 = q;
          q = q + 1l;
          *tmp_post$7 = (char)110;
          break;
        }
        case 13:
        {
          tmp_post$8 = q;
          q = q + 1l;
          *tmp_post$8 = (char)92;
          tmp_post$9 = q;
          q = q + 1l;
          *tmp_post$9 = (char)114;
          break;
        }
        case 9:
        {
          tmp_post$10 = q;
          q = q + 1l;
          *tmp_post$10 = (char)92;
          tmp_post$11 = q;
          q = q + 1l;
          *tmp_post$11 = (char)116;
          break;
        }
        default:
        {
          if(!((signed int)*p >= 32))
            tmp_if_expr$17 = (_Bool)1;

          else
            tmp_if_expr$17 = (signed int)*p >= 0177 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$17)
          {
            tmp_post$12 = q;
            q = q + 1l;
            *tmp_post$12 = (char)92;
            tmp_post$13 = q;
            q = q + 1l;
            *tmp_post$13 = (char)(48 + ((signed int)*p >> 6 & 07));
            tmp_post$14 = q;
            q = q + 1l;
            *tmp_post$14 = (char)(48 + ((signed int)*p >> 3 & 07));
            tmp_post$15 = q;
            q = q + 1l;
            *tmp_post$15 = (char)(48 + ((signed int)*p & 07));
          }

          else
          {
            tmp_post$16 = q;
            q = q + 1l;
            *tmp_post$16 = (char)*p;
          }
        }
      }
    *q = (char)0;
    return dest;
  }
}

// exclude_crawler
// file src/parser.c line 1137
static signed int exclude_crawler(struct GLogItem_ *glog)
{
  _Bool tmp_if_expr$2;
  signed int return_value_is_crawler$1;
  if(!(conf.ignore_crawlers == 0))
  {
    return_value_is_crawler$1=is_crawler(glog->agent);
    tmp_if_expr$2 = return_value_is_crawler$1 != 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$2 = (_Bool)0;
  return tmp_if_expr$2 ? 0 : 1;
}

// excluded_ip
// file src/parser.c line 1121
static signed int excluded_ip(struct GLog_ *logger, struct GLogItem_ *glog, signed int test)
{
  signed int return_value_ip_in_range$1;
  if(!(conf.ignore_ip_idx == 0))
  {
    return_value_ip_in_range$1=ip_in_range(glog->host);
    if(return_value_ip_in_range$1 == 0)
      goto __CPROVER_DUMP_L1;

    logger->excluded_ip = logger->excluded_ip + 1u;
    (void)test;
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return 1;
  }
}

// expand_current_module
// file src/goaccess.c line 417
static void expand_current_module(void)
{
  if((signed int)gscroll.current == HOSTS && !(gscroll.expanded == 0))
    load_ip_agent_list();

  else
    if(gscroll.expanded == 0)
    {
      reset_scroll_offsets(&gscroll);
      gscroll.expanded = 1;
      free_holder_by_module(&holder, gscroll.current);
      free_dashboard(dash);
      allocate_holder_by_module(gscroll.current);
      allocate_data();
    }

}

// expand_on_mouse_click
// file src/goaccess.c line 437
static void expand_on_mouse_click(void)
{
  signed int ok_mouse;
  struct anonymous$11 event;
  ok_mouse=getmouse(&event);
  if(!(conf.mouse_support == 0) && ok_mouse == 0)
  {
    if(!((4ul & event.bstate) == 0ul))
    {
      if(event.y == LINES + -1 || !(event.y >= 7))
        goto __CPROVER_DUMP_L5;

      signed int return_value_set_module_from_mouse_event$1;
      return_value_set_module_from_mouse_event$1=set_module_from_mouse_event(&gscroll, dash, event.y);
      if(!(return_value_set_module_from_mouse_event$1 == 0))
        goto __CPROVER_DUMP_L5;

      reset_scroll_offsets(&gscroll);
      gscroll.expanded = 1;
      free_holder_by_module(&holder, gscroll.current);
      free_dashboard(dash);
      allocate_holder_by_module(gscroll.current);
      allocate_data();
      render_screens();
    }

  }


__CPROVER_DUMP_L5:
  ;
}

// extract_color
// file src/color.c line 367
static signed int extract_color(char *color)
{
  char *sEnd;
  signed int col = 0;
  signed int return_value_strncasecmp$1;
  return_value_strncasecmp$1=strncasecmp(color, "color", (unsigned long int)5);
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$5;
  signed int *return_value___errno_location$4;
  if(!(return_value_strncasecmp$1 == 0))
    return -2;

  else
  {
    color = color + (signed long int)5;
    signed long int return_value_strtol$2;
    return_value_strtol$2=strtol(color, &sEnd, 10);
    col = (signed int)return_value_strtol$2;
    if(color == sEnd)
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = (signed int)*sEnd != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      return_value___errno_location$4=__errno_location();
      tmp_if_expr$5 = *return_value___errno_location$4 == 34 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$5)
      return -2;

    else
    {
      if(!(COLORS >= col))
        do
        {
          endwin();
          fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
          fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
          fprintf(stderr, "\nFatal error has occurred");
          fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"extract_color", 381);
          fprintf(stderr, "Terminal doesn't support color: %d - max colors: %d", col, COLORS);
          fprintf(stderr, "\n\n");

        __CPROVER_DUMP_L8:
          ;
          exit(1);
        }
        while((_Bool)0);

      return col;
    }
  }
}

// extract_geolocation
// file src/parser.c line 533
static signed int extract_geolocation(struct GLogItem_ *glog, char *continent, char *country)
{
  if(geo_location_data == ((struct GeoIPTag *)NULL))
    return 1;

  else
  {
    geoip_get_country(glog->host, country, (enum anonymous$23)glog->type_ip);
    geoip_get_continent(glog->host, continent, (enum anonymous$23)glog->type_ip);
    return 0;
  }
}

// extract_keyphrase
// file src/parser.c line 484
static signed int extract_keyphrase(char *ref, char **keyphrase)
{
  char *r;
  char *ptr;
  char *pch;
  char *referer;
  signed int encoded = 0;
  char *return_value_strstr$3;
  return_value_strstr$3=strstr(ref, "http://www.google.");
  char *return_value_strstr$2;
  char *return_value_strstr$1;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  if(return_value_strstr$3 == ((char *)NULL))
  {
    return_value_strstr$2=strstr(ref, "http://webcache.googleusercontent.com/");
    if(!(return_value_strstr$2 == ((char *)NULL)))
      goto __CPROVER_DUMP_L1;

    return_value_strstr$1=strstr(ref, "http://translate.googleusercontent.com/");
    if(!(return_value_strstr$1 == ((char *)NULL)))
      goto __CPROVER_DUMP_L1;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    r=strstr(ref, "/+&");
    if(!(r == ((char *)NULL)))
      return 1;

    else
    {
      r=strstr(ref, "/+");
      if(!(r == ((char *)NULL)))
        r = r + (signed long int)2;

      else
      {
        r=strstr(ref, "q=cache:");
        if(!(r == ((char *)NULL)))
        {
          pch=strchr(r, 43);
          if(!(pch == ((char *)NULL)))
            r = r + (pch - r) + (signed long int)1;

        }

        else
        {
          r=strstr(ref, "&q=");
          if(!(r == ((char *)NULL)))
            tmp_if_expr$5 = (_Bool)1;

          else
          {
            r=strstr(ref, "?q=");
            tmp_if_expr$5 = r != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$5)
            r = r + (signed long int)3;

          else
          {
            r=strstr(ref, "%26q%3D");
            if(!(r == ((char *)NULL)))
              tmp_if_expr$4 = (_Bool)1;

            else
            {
              r=strstr(ref, "%3Fq%3D");
              tmp_if_expr$4 = r != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
            }
            if(tmp_if_expr$4)
            {
              encoded = 1;
              r = r + (signed long int)7;
            }

            else
              return 1;
          }
        }
      }
    }
    if(encoded == 0)
    {
      ptr=strchr(r, 38);
      tmp_if_expr$6 = ptr != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$6 = (_Bool)0;
    if(tmp_if_expr$6)
      *ptr = (char)0;

    else
      if(!(encoded == 0))
      {
        ptr=strstr(r, "%26");
        if(!(ptr == ((char *)NULL)))
          *ptr = (char)0;

      }

    referer=decode_url(r);
    if(referer == ((char *)NULL))
      tmp_if_expr$7 = (_Bool)1;

    else
      tmp_if_expr$7 = (signed int)*referer == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$7)
      return 1;

    else
    {
      referer=char_replace(referer, (char)43, (char)32);
      *keyphrase=trim_str(referer);
      return 0;
    }
  }
}

// extract_method
// file src/parser.c line 617
static const char * extract_method(const char *token)
{
  const char *lookfor = (const char *)(void *)0;
  lookfor = "OPTIONS";
  signed int return_value_memcmp$1;
  return_value_memcmp$1=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)7);
  _Bool tmp_if_expr$3;
  signed int return_value_memcmp$2;
  if(return_value_memcmp$1 == 0)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    lookfor = "GET";
    return_value_memcmp$2=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)3);
    tmp_if_expr$3 = !(return_value_memcmp$2 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$5;
  signed int return_value_memcmp$4;
  if(tmp_if_expr$3)
    tmp_if_expr$5 = (_Bool)1;

  else
  {
    lookfor = "HEAD";
    return_value_memcmp$4=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)4);
    tmp_if_expr$5 = !(return_value_memcmp$4 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$7;
  signed int return_value_memcmp$6;
  if(tmp_if_expr$5)
    tmp_if_expr$7 = (_Bool)1;

  else
  {
    lookfor = "POST";
    return_value_memcmp$6=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)4);
    tmp_if_expr$7 = !(return_value_memcmp$6 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$9;
  signed int return_value_memcmp$8;
  if(tmp_if_expr$7)
    tmp_if_expr$9 = (_Bool)1;

  else
  {
    lookfor = "PUT";
    return_value_memcmp$8=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)3);
    tmp_if_expr$9 = !(return_value_memcmp$8 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$11;
  signed int return_value_memcmp$10;
  if(tmp_if_expr$9)
    tmp_if_expr$11 = (_Bool)1;

  else
  {
    lookfor = "DELETE";
    return_value_memcmp$10=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)6);
    tmp_if_expr$11 = !(return_value_memcmp$10 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$13;
  signed int return_value_memcmp$12;
  if(tmp_if_expr$11)
    tmp_if_expr$13 = (_Bool)1;

  else
  {
    lookfor = "TRACE";
    return_value_memcmp$12=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)5);
    tmp_if_expr$13 = !(return_value_memcmp$12 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$15;
  signed int return_value_memcmp$14;
  if(tmp_if_expr$13)
    tmp_if_expr$15 = (_Bool)1;

  else
  {
    lookfor = "CONNECT";
    return_value_memcmp$14=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)7);
    tmp_if_expr$15 = !(return_value_memcmp$14 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$17;
  signed int return_value_memcmp$16;
  if(tmp_if_expr$15)
    tmp_if_expr$17 = (_Bool)1;

  else
  {
    lookfor = "PATCH";
    return_value_memcmp$16=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)5);
    tmp_if_expr$17 = !(return_value_memcmp$16 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$19;
  signed int return_value_memcmp$18;
  if(tmp_if_expr$17)
    tmp_if_expr$19 = (_Bool)1;

  else
  {
    lookfor = "options";
    return_value_memcmp$18=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)7);
    tmp_if_expr$19 = !(return_value_memcmp$18 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$21;
  signed int return_value_memcmp$20;
  if(tmp_if_expr$19)
    tmp_if_expr$21 = (_Bool)1;

  else
  {
    lookfor = "get";
    return_value_memcmp$20=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)3);
    tmp_if_expr$21 = !(return_value_memcmp$20 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$23;
  signed int return_value_memcmp$22;
  if(tmp_if_expr$21)
    tmp_if_expr$23 = (_Bool)1;

  else
  {
    lookfor = "head";
    return_value_memcmp$22=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)4);
    tmp_if_expr$23 = !(return_value_memcmp$22 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$25;
  signed int return_value_memcmp$24;
  if(tmp_if_expr$23)
    tmp_if_expr$25 = (_Bool)1;

  else
  {
    lookfor = "post";
    return_value_memcmp$24=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)4);
    tmp_if_expr$25 = !(return_value_memcmp$24 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$27;
  signed int return_value_memcmp$26;
  if(tmp_if_expr$25)
    tmp_if_expr$27 = (_Bool)1;

  else
  {
    lookfor = "put";
    return_value_memcmp$26=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)3);
    tmp_if_expr$27 = !(return_value_memcmp$26 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$29;
  signed int return_value_memcmp$28;
  if(tmp_if_expr$27)
    tmp_if_expr$29 = (_Bool)1;

  else
  {
    lookfor = "delete";
    return_value_memcmp$28=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)6);
    tmp_if_expr$29 = !(return_value_memcmp$28 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$31;
  signed int return_value_memcmp$30;
  if(tmp_if_expr$29)
    tmp_if_expr$31 = (_Bool)1;

  else
  {
    lookfor = "trace";
    return_value_memcmp$30=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)5);
    tmp_if_expr$31 = !(return_value_memcmp$30 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$33;
  signed int return_value_memcmp$32;
  if(tmp_if_expr$31)
    tmp_if_expr$33 = (_Bool)1;

  else
  {
    lookfor = "connect";
    return_value_memcmp$32=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)7);
    tmp_if_expr$33 = !(return_value_memcmp$32 != 0) ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$35;
  signed int return_value_memcmp$34;
  if(tmp_if_expr$33)
    tmp_if_expr$35 = (_Bool)1;

  else
  {
    lookfor = "patch";
    return_value_memcmp$34=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)5);
    tmp_if_expr$35 = !(return_value_memcmp$34 != 0) ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$35)
    return lookfor;

  else
    return (const char *)(void *)0;
}

// extract_referer_site
// file src/parser.c line 549
static signed int extract_referer_site(const char *referer, char *host)
{
  char *url;
  char *begin;
  char *end;
  signed int len = 0;
  _Bool tmp_if_expr$1;
  if(referer == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*referer == 0 ? (_Bool)1 : (_Bool)0;
  unsigned long int return_value_strlen$2;
  if(tmp_if_expr$1)
    return 1;

  else
  {
    url=strdup(referer);
    begin=strstr(url, "//");
    if(!(begin == ((char *)NULL)))
    {
      begin = begin + (signed long int)2;
      return_value_strlen$2=strlen(begin);
      len = (signed int)return_value_strlen$2;
      if(len == 0)
        goto clean;

      end=strchr(begin, 47);
      if(!(end == ((char *)NULL)))
        len = (signed int)(end - begin);

      if(len == 0)
        goto clean;

      if(len >= 512)
        len = 512 - 1;

      memcpy((void *)host, (const void *)begin, (unsigned long int)len);
      host[(signed long int)len] = (char)0;
      free((void *)url);
      return 0;
    }

    else
    {

    clean:
      ;
      free((void *)url);
      return 1;
    }
  }
}

// file_size
// file src/util.h line 74
signed long int file_size(const char *filename)
{
  struct stat st;
  signed int return_value_stat$1;
  return_value_stat$1=stat(filename, &st);
  if(return_value_stat$1 == 0)
    return st.st_size;

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return (signed long int)-1;
  }
}

// filesize_str
// file src/util.h line 48
char * filesize_str(unsigned long long int log_size)
{
  char *size;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(char) /*1ul*/  * (unsigned long int)12);
  size = (char *)return_value_xmalloc$1;
  if(log_size >= 1073741824ul)
    snprintf(size, (unsigned long int)12, "%.2f GiB", (double)log_size / (double)(1024 * 1024 * 1024));

  else
    if(log_size >= 1048576ul)
      snprintf(size, (unsigned long int)12, "%.2f MiB", (double)log_size / (double)(1024 * 1024));

    else
      if(log_size >= 1024ul)
        snprintf(size, (unsigned long int)12, "%.2f KiB", (double)log_size / (double)1024);

      else
        snprintf(size, (unsigned long int)12, "%.1f   B", (double)log_size);
  return size;
}

// fill_host_agents
// file src/output.c line 1333
static signed int fill_host_agents(void *val, void *user_data)
{
  struct GAgents_ *agents = (struct GAgents_ *)user_data;
  char *agent;
  agent=get_host_agent_val(*((signed int *)val));
  if(agent == ((char *)NULL))
    return 1;

  else
  {
    (agents->items + (signed long int)agents->size)->agent = agent;
    agents->size = agents->size + 1;
    return 0;
  }
}

// fill_host_agents_gmenu
// file src/ui.c line 681
static signed int fill_host_agents_gmenu(void *val, void *user_data)
{
  struct GMenu_ *menu = (struct GMenu_ *)user_data;
  char *agent;
  agent=get_host_agent_val(*((signed int *)val));
  if(agent == ((char *)NULL))
    return 1;

  else
  {
    (menu->items + (signed long int)menu->size)->name = agent;
    (menu->items + (signed long int)menu->size)->checked = 0;
    menu->size = menu->size + 1;
    return 0;
  }
}

// find_alpha
// file src/parser.c line 720
static void find_alpha(char **str)
{
  char *s = *str;
  while(!(*s == 0))
  {
    const unsigned short int **return_value___ctype_b_loc$1;
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if(!((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*s]) == 0))
      s = s + 1l;

    else
      break;
  }
  *str = *str + (s - *str);
}

// find_color_in_list
// file src/color.c line 472
static signed int find_color_in_list(void *data, void *color)
{
  struct GColors_ *new_color = (struct GColors_ *)color;
  struct GColors_ *old_color = (struct GColors_ *)data;
  if(!(old_color->item == new_color->item))
    return 0;

  else
    if(!(old_color->module == new_color->module))
      return 0;

    else
      return 1;
}

// find_color_item_in_list
// file src/color.c line 498
static signed int find_color_item_in_list(void *data, void *needle)
{
  struct GColors_ *color = (struct GColors_ *)data;
  enum CSTM_COLORS *item = (enum CSTM_COLORS *)needle;
  _Bool tmp_if_expr$1;
  if(color->item == (enum CSTM_COLORS)*((signed int *)item))
    tmp_if_expr$1 = (signed int)color->module == -1 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  return (signed int)tmp_if_expr$1;
}

// find_color_item_module_in_list
// file src/color.c line 507
static signed int find_color_item_module_in_list(void *data, void *needle)
{
  struct GColors_ *color = (struct GColors_ *)data;
  struct GColors_ *item = (struct GColors_ *)needle;
  _Bool tmp_if_expr$1;
  if(color->item == item->item)
    tmp_if_expr$1 = color->module == item->module ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  return (signed int)tmp_if_expr$1;
}

// find_host_agent_in_list
// file src/glibht.c line 236
static signed int find_host_agent_in_list(void *data, void *needle)
{
  return *((signed int *)data) == *((signed int *)needle) ? 1 : 0;
}

// find_next_sub_item
// file src/gdashboard.c line 1195
static signed int find_next_sub_item(struct GSubList_ *sub_list, struct re_pattern_buffer *regex)
{
  struct GSubItem_ *iter;
  signed int i = 0;
  signed int rc;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    iter = sub_list->head;
    for( ; !(iter == ((struct GSubItem_ *)NULL)); iter = iter->next)
    {
      if(i >= find_t.next_sub_idx)
      {
        rc=regexec(regex, iter->metrics->data, (unsigned long int)0, (struct anonymous$24 *)(void *)0, 0);
        if(rc == 0)
        {
          find_t.next_idx = find_t.next_idx + 1;
          find_t.next_sub_idx = 1 + i;
          return 0;
        }

        find_t.next_idx = find_t.next_idx + 1;
      }

      i = i + 1;
    }
  }


out:
  ;
  find_t.next_parent_idx = find_t.next_parent_idx + 1;
  find_t.next_sub_idx = 0;
  find_t.look_in_sub = 0;
  return 1;
}

// find_pair_in_list
// file src/color.c line 485
static signed int find_pair_in_list(void *data, void *color)
{
  struct GColorPair_ *new_color = (struct GColorPair_ *)color;
  struct GColorPair_ *old_color = (struct GColorPair_ *)data;
  if(!(old_color->fg == new_color->fg))
    return 0;

  else
    if(!(old_color->bg == new_color->bg))
      return 0;

    else
      return 1;
}

// float2str
// file src/util.h line 49
char * float2str(float d, signed int width)
{
  char *s;
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "%*.2f", width, d);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  s = (char *)return_value_xmalloc$2;
  sprintf(s, "%*.2f", width, d);
  return s;
}

// fmt_date
// file src/output.c line 1465
static void fmt_date(struct GMetrics *metrics)
{
  format_date_visitors(metrics);
}

// format_date_visitors
// file src/commons.c line 209
void format_date_visitors(struct GMetrics *metrics)
{
  char date[12l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *datum = metrics->data;
  memset((void *)date, 0, sizeof(char) /*1ul*/ );
  signed int return_value_convert_date$1;
  return_value_convert_date$1=convert_date(date, datum, "%Y%m%d", "%d/%b/%Y", 12);
  if(return_value_convert_date$1 == 0)
  {
    free((void *)datum);
    metrics->data=xstrdup(date);
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    free((void *)datum);
    metrics->data=xstrdup("---");
  }
}

// free_agent_list
// file src/glibht.h line 74
void free_agent_list(void)
{
  struct _GHashTable *ht;
  void *return_value_get_storage_metric$1;
  return_value_get_storage_metric$1=get_storage_metric((enum MODULES)HOSTS, (enum METRICS)MTRC_AGENTS);
  ht = (struct _GHashTable *)return_value_get_storage_metric$1;
  g_hash_table_foreach(ht, (void (*)(void *, void *, void *))free_agent_values, (void *)0);
}

// free_agent_values
// file src/glibht.c line 595
static void free_agent_values(void *k, void *v, void *data_ptr)
{
  void *list = v;
  if(!(list == NULL))
    list_remove_nodes((struct GSLList_ *)list);

}

// free_cmd_args
// file src/settings.h line 156
void free_cmd_args(void)
{
  signed int i;
  if(!(nargc == 0))
  {
    i = 0;
    for( ; !(i >= nargc); i = i + 1)
      free((void *)nargv[(signed long int)i]);
    free((void *)nargv);
  }

}

// free_color_lists
// file src/color.c line 267
void free_color_lists(void)
{
  if(!(pair_list == ((struct GSLList_ *)NULL)))
    list_remove_nodes(pair_list);

  if(!(color_list == ((struct GSLList_ *)NULL)))
    list_remove_nodes(color_list);

  color_list = (struct GSLList_ *)(void *)0;
  pair_list = (struct GSLList_ *)(void *)0;
}

// free_dashboard
// file src/gdashboard.c line 162
void free_dashboard(struct GDash_ *dash)
{
  signed int i;
  signed int j;
  i = 0;
  for( ; !(i >= 13); i = i + 1)
  {
    j = 0;
    for( ; !(j >= dash->module[(signed long int)i].alloc_data); j = j + 1)
      free_dashboard_data(dash->module[(signed long int)i].data[(signed long int)j]);
    free((void *)dash->module[(signed long int)i].data);
  }
  free((void *)dash);
}

// free_dashboard_data
// file src/gdashboard.c line 142
static void free_dashboard_data(struct GDashData_ item)
{
  if(!(item.metrics == ((struct GMetrics *)NULL)))
  {
    if(!(item.metrics->data == ((char *)NULL)))
      free((void *)item.metrics->data);

    if(!(item.metrics->bw.sbw == ((char *)NULL)))
      free((void *)item.metrics->bw.sbw);

    if(!(conf.serve_usecs == 0))
    {
      if(!(item.metrics->avgts.sts == ((char *)NULL)))
        free((void *)item.metrics->avgts.sts);

    }

    if(!(conf.serve_usecs == 0))
    {
      if(!(item.metrics->cumts.sts == ((char *)NULL)))
        free((void *)item.metrics->cumts.sts);

    }

    if(!(conf.serve_usecs == 0))
    {
      if(!(item.metrics->maxts.sts == ((char *)NULL)))
        free((void *)item.metrics->maxts.sts);

    }

    free((void *)item.metrics);
  }

}

// free_hits
// file src/glibht.c line 61
static void free_hits(void *old_key, void *old_value, void *user_data)
{
  struct GDataMap_ *map = (struct GDataMap_ *)old_value;
  free((void *)map);
}

// free_holder
// file src/gdashboard.c line 296
void free_holder(struct GHolder_ **holder)
{
  enum MODULES module;
  signed int j;
  if(!(*holder == ((struct GHolder_ *)NULL)))
  {
    module = (enum MODULES)0;
    for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
    {
      j = 0;
      for( ; !(j >= (*holder + (signed long int)module)->idx); j = j + 1)
        free_holder_data((*holder + (signed long int)module)->items[(signed long int)j]);
      free((void *)(*holder + (signed long int)module)->items);
    }
    free((void *)*holder);
    *holder = (struct GHolder_ *)(void *)0;
  }

}

// free_holder_by_module
// file src/gdashboard.c line 277
void free_holder_by_module(struct GHolder_ **holder, enum MODULES module)
{
  signed int j;
  if(!(*holder == ((struct GHolder_ *)NULL)))
  {
    j = 0;
    for( ; !(j >= (*holder + (signed long int)module)->idx); j = j + 1)
      free_holder_data((*holder + (signed long int)module)->items[(signed long int)j]);
    free((void *)(*holder + (signed long int)module)->items);
    (*holder + (signed long int)module)->holder_size = 0;
    (*holder + (signed long int)module)->idx = 0;
    (*holder + (signed long int)module)->sub_items_size = 0;
  }

}

// free_holder_data
// file src/gdashboard.c line 261
static void free_holder_data(struct GHolderItem_ item)
{
  if(!(item.sub_list == ((struct GSubList_ *)NULL)))
    delete_sub_list(item.sub_list);

  if(!(item.metrics->data == ((char *)NULL)))
    free((void *)item.metrics->data);

  if(!(item.metrics->method == ((char *)NULL)))
    free((void *)item.metrics->method);

  if(!(item.metrics->protocol == ((char *)NULL)))
    free((void *)item.metrics->protocol);

  if(!(item.metrics == ((struct GMetrics *)NULL)))
    free((void *)item.metrics);

}

// free_logger
// file src/parser.c line 401
static void free_logger(struct GLogItem_ *glog)
{
  if(!(glog->agent == ((char *)NULL)))
    free((void *)glog->agent);

  if(!(glog->browser == ((char *)NULL)))
    free((void *)glog->browser);

  if(!(glog->browser_type == ((char *)NULL)))
    free((void *)glog->browser_type);

  if(!(glog->continent == ((char *)NULL)))
    free((void *)glog->continent);

  if(!(glog->country == ((char *)NULL)))
    free((void *)glog->country);

  if(!(glog->date == ((char *)NULL)))
    free((void *)glog->date);

  if(!(glog->host == ((char *)NULL)))
    free((void *)glog->host);

  if(!(glog->keyphrase == ((char *)NULL)))
    free((void *)glog->keyphrase);

  if(!(glog->method == ((char *)NULL)))
    free((void *)glog->method);

  if(!(glog->os == ((char *)NULL)))
    free((void *)glog->os);

  if(!(glog->os_type == ((char *)NULL)))
    free((void *)glog->os_type);

  if(!(glog->protocol == ((char *)NULL)))
    free((void *)glog->protocol);

  if(!(glog->qstr == ((char *)NULL)))
    free((void *)glog->qstr);

  if(!(glog->ref == ((char *)NULL)))
    free((void *)glog->ref);

  if(!(glog->req_key == ((char *)NULL)))
    free((void *)glog->req_key);

  if(!(glog->req == ((char *)NULL)))
    free((void *)glog->req);

  if(!(glog->status == ((char *)NULL)))
    free((void *)glog->status);

  if(!(glog->time == ((char *)NULL)))
    free((void *)glog->time);

  if(!(glog->uniq_key == ((char *)NULL)))
    free((void *)glog->uniq_key);

  free((void *)glog);
}

// free_raw_data
// file src/parser.h line 137
void free_raw_data(struct GRawData_ *raw_data)
{
  free((void *)raw_data->items);
  free((void *)raw_data);
}

// free_storage
// file src/glibht.h line 70
void free_storage(void)
{
  enum MODULES module;
  g_hash_table_destroy(ht_agent_keys);
  g_hash_table_destroy(ht_agent_vals);
  g_hash_table_destroy(ht_hostnames);
  g_hash_table_destroy(ht_unique_keys);
  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
    free_tables((ht_storage + (signed long int)module)->metrics);
}

// free_tables
// file src/glibht.c line 108
static void free_tables(struct GStorageMetrics_ *metrics)
{
  g_hash_table_foreach((struct _GHashTable *)metrics->hits, free_hits, (void *)0);
  g_hash_table_destroy((struct _GHashTable *)metrics->keymap);
  g_hash_table_destroy((struct _GHashTable *)metrics->datamap);
  g_hash_table_destroy((struct _GHashTable *)metrics->rootmap);
  g_hash_table_destroy((struct _GHashTable *)metrics->uniqmap);
  g_hash_table_destroy((struct _GHashTable *)metrics->hits);
  g_hash_table_destroy((struct _GHashTable *)metrics->visitors);
  g_hash_table_destroy((struct _GHashTable *)metrics->bw);
  g_hash_table_destroy((struct _GHashTable *)metrics->cumts);
  g_hash_table_destroy((struct _GHashTable *)metrics->maxts);
  g_hash_table_destroy((struct _GHashTable *)metrics->methods);
  g_hash_table_destroy((struct _GHashTable *)metrics->protocols);
  g_hash_table_destroy((struct _GHashTable *)metrics->agents);
}

// gdns_free_queue
// file src/gdns.c line 250
void gdns_free_queue(void)
{
  gqueue_destroy(gdns_queue);
}

// gdns_init
// file src/gdns.c line 233
void gdns_init(void)
{
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GDnsQueue_) /*410016ul*/ );
  gdns_queue = (struct GDnsQueue_ *)return_value_xmalloc$1;
  gqueue_init(gdns_queue, 400);
  signed int return_value_pthread_cond_init$2;
  return_value_pthread_cond_init$2=pthread_cond_init(&gdns_thread.not_empty, (const union anonymous$3 *)(void *)0);
  if(!(return_value_pthread_cond_init$2 == 0))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:28");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/gdns.c", (const void *)"gdns_init", 239);
      fprintf(stderr, "Failed init thread condition");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  signed int return_value_pthread_cond_init$3;
  return_value_pthread_cond_init$3=pthread_cond_init(&gdns_thread.not_full, (const union anonymous$3 *)(void *)0);
  if(!(return_value_pthread_cond_init$3 == 0))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:28");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/gdns.c", (const void *)"gdns_init", 242);
      fprintf(stderr, "Failed init thread condition");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L5:
      ;
      exit(1);
    }
    while((_Bool)0);

  signed int return_value_pthread_mutex_init$4;
  return_value_pthread_mutex_init$4=pthread_mutex_init(&gdns_thread.mutex, (const union anonymous$3 *)(void *)0);
  if(!(return_value_pthread_mutex_init$4 == 0))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:28");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/gdns.c", (const void *)"gdns_init", 245);
      fprintf(stderr, "Failed init thread mutex");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L8:
      ;
      exit(1);
    }
    while((_Bool)0);

}

// gdns_thread_create
// file src/gdns.c line 257
void gdns_thread_create(void)
{
  signed int thread;
  active_gdns = 1;
  thread=pthread_create(&gdns_thread.thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)dns_worker, (void *)0);
  if(!(thread == 0))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:28");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/gdns.c", (const void *)"gdns_thread_create", 265);
      fprintf(stderr, "Return code from pthread_create(): %d", thread);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  pthread_detach(gdns_thread.thread);
}

// gen_404_key
// file src/parser.c line 1399
static signed int gen_404_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  signed int return_value_gen_req_key$1;
  if(!(glog->req == ((char *)NULL)))
  {
    if(glog->is_404 == 0)
      goto __CPROVER_DUMP_L1;

    return_value_gen_req_key$1=gen_req_key(kdata, glog);
    return return_value_gen_req_key$1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return 1;
  }
}

// gen_browser_key
// file src/parser.c line 1426
static signed int gen_browser_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  char *agent = (char *)(void *)0;
  char browser_type[13l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  _Bool tmp_if_expr$1;
  if(glog->agent == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*glog->agent == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return 1;

  else
  {
    agent=xstrdup(glog->agent);
    glog->browser=verify_browser(agent, browser_type);
    glog->browser_type=xstrdup(browser_type);
    kdata->data = (void *)glog->browser;
    kdata->data_key = (void *)glog->browser;
    kdata->root = (void *)glog->browser_type;
    kdata->root_key = (void *)glog->browser_type;
    free((void *)agent);
    return 0;
  }
}

// gen_geolocation_key
// file src/parser.c line 1512
static signed int gen_geolocation_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  char continent[48l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char country[51l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int return_value_extract_geolocation$1;
  return_value_extract_geolocation$1=extract_geolocation(glog, continent, country);
  if(return_value_extract_geolocation$1 == 1)
    return 1;

  else
  {
    if(!((signed int)country[0l] == 0))
      glog->country=xstrdup(country);

    if(!((signed int)continent[0l] == 0))
      glog->continent=xstrdup(continent);

    kdata->data_key = (void *)glog->country;
    kdata->data = (void *)glog->country;
    kdata->root = (void *)glog->continent;
    kdata->root_key = (void *)glog->continent;
    return 0;
  }
}

// gen_host_key
// file src/parser.c line 1415
static signed int gen_host_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  if(glog->host == ((char *)NULL))
    return 1;

  else
  {
    get_kdata(kdata, glog->host, glog->host);
    return 0;
  }
}

// gen_keyphrase_key
// file src/parser.c line 1500
static signed int gen_keyphrase_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  if(glog->keyphrase == ((char *)NULL))
    return 1;

  else
  {
    get_kdata(kdata, glog->keyphrase, glog->keyphrase);
    return 0;
  }
}

// gen_os_key
// file src/parser.c line 1452
static signed int gen_os_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  char *agent = (char *)(void *)0;
  char os_type[10l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  _Bool tmp_if_expr$1;
  if(glog->agent == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*glog->agent == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return 1;

  else
  {
    agent=xstrdup(glog->agent);
    glog->os=verify_os(agent, os_type);
    glog->os_type=xstrdup(os_type);
    kdata->data = (void *)glog->os;
    kdata->data_key = (void *)glog->os;
    kdata->root = (void *)glog->os_type;
    kdata->root_key = (void *)glog->os_type;
    free((void *)agent);
    return 0;
  }
}

// gen_ref_site_key
// file src/parser.c line 1489
static signed int gen_ref_site_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  if((signed int)glog->site[0l] == 0)
    return 1;

  else
  {
    get_kdata(kdata, glog->site, glog->site);
    return 0;
  }
}

// gen_referer_key
// file src/parser.c line 1478
static signed int gen_referer_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  if(glog->ref == ((char *)NULL))
    return 1;

  else
  {
    get_kdata(kdata, glog->ref, glog->ref);
    return 0;
  }
}

// gen_req_key
// file src/parser.c line 1378
static signed int gen_req_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  glog->req_key=gen_unique_req_key(glog);
  if(!(glog->req == ((char *)NULL)))
  {
    if(!(glog->qstr == ((char *)NULL)))
      append_query_string(&glog->req, glog->qstr);

  }

  get_kdata(kdata, glog->req_key, glog->req);
  return 0;
}

// gen_request_key
// file src/parser.c line 1390
static signed int gen_request_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  _Bool tmp_if_expr$1;
  if(glog->req == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = glog->is_404 != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = glog->is_static != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$2)
    return 1;

  else
  {
    signed int return_value_gen_req_key$3;
    return_value_gen_req_key$3=gen_req_key(kdata, glog);
    return return_value_gen_req_key$3;
  }
}

// gen_static_request_key
// file src/parser.c line 1407
static signed int gen_static_request_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  signed int return_value_gen_req_key$1;
  if(!(glog->req == ((char *)NULL)))
  {
    if(glog->is_static == 0)
      goto __CPROVER_DUMP_L1;

    return_value_gen_req_key$1=gen_req_key(kdata, glog);
    return return_value_gen_req_key$1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    return 1;
  }
}

// gen_status_code_key
// file src/parser.c line 1537
static signed int gen_status_code_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  const char *status = (const char *)(void *)0;
  const char *type = (const char *)(void *)0;
  if(glog->status == ((char *)NULL))
    return 1;

  else
  {
    type=verify_status_code_type(glog->status);
    status=verify_status_code(glog->status);
    kdata->data = (void *)(char *)status;
    kdata->data_key = (void *)(char *)status;
    kdata->root = (void *)(char *)type;
    kdata->root_key = (void *)(char *)type;
    return 0;
  }
}

// gen_unique_req_key
// file src/parser.c line 1301
static char * gen_unique_req_key(struct GLogItem_ *glog)
{
  char *key;
  unsigned long int s1 = (unsigned long int)0;
  unsigned long int s2 = (unsigned long int)0;
  unsigned long int s3 = (unsigned long int)0;
  char *return_value_xstrdup$1;
  char *return_value_xstrdup$2;
  if(conf.append_method == 0 && conf.append_protocol == 0)
  {
    return_value_xstrdup$1=xstrdup(glog->req);
    return return_value_xstrdup$1;
  }

  else
    if(glog->method == ((char *)NULL))
    {
      if(!(glog->protocol == ((char *)NULL)))
        goto __CPROVER_DUMP_L2;

      return_value_xstrdup$2=xstrdup(glog->req);
      return return_value_xstrdup$2;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      s1=strlen(glog->req);
      if(!(glog->method == ((char *)NULL)))
        s2=strlen(glog->method);

      if(!(glog->protocol == ((char *)NULL)))
        s3=strlen(glog->protocol);

      void *return_value_xmalloc$3;
      return_value_xmalloc$3=xmalloc(s1 + s2 + s3 + (unsigned long int)3);
      key = (char *)return_value_xmalloc$3;
      memcpy((void *)key, (const void *)glog->req, s1);
      if(!(glog->method == ((char *)NULL)))
      {
        key[(signed long int)s1] = (char)124;
        memcpy((void *)(key + (signed long int)s1 + (signed long int)1), (const void *)glog->method, s2 + (unsigned long int)1);
      }

      if(!(glog->protocol == ((char *)NULL)))
      {
        key[(signed long int)(s1 + s2 + (unsigned long int)1)] = (char)124;
        memcpy((void *)(key + (signed long int)s1 + (signed long int)s2 + (signed long int)2), (const void *)glog->protocol, s3 + (unsigned long int)1);
      }

      return key;
    }
}

// gen_visit_time_key
// file src/parser.c line 1557
static signed int gen_visit_time_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  char *hmark = (char *)(void *)0;
  char hour[3l] = { 0, 0, 0 };
  if(glog->time == ((char *)NULL))
    return 1;

  else
  {
    signed int return_value_has_timestamp$1;
    return_value_has_timestamp$1=has_timestamp(conf.time_format);
    if(return_value_has_timestamp$1 == 0)
    {
      hmark=strchr(glog->time, 58);
      if(hmark == ((char *)NULL))
        goto __CPROVER_DUMP_L3;

      if(hmark - glog->time >= 1l)
        *hmark = (char)0;

      get_kdata(kdata, glog->time, glog->time);
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L3:
      ;
      memset((void *)hour, 0, sizeof(char) /*1ul*/ );
      signed int return_value_convert_date$2;
      return_value_convert_date$2=convert_date(hour, glog->time, conf.time_format, "%H", 3);
      if(!(return_value_convert_date$2 == 0))
        return 1;

      else
      {
        free((void *)glog->time);
        glog->time=xstrdup(hour);
        get_kdata(kdata, glog->time, glog->time);
        return 0;
      }
    }
  }
}

// gen_visitor_key
// file src/parser.c line 1367
static signed int gen_visitor_key(struct GKeyData_ *kdata, struct GLogItem_ *glog)
{
  if(glog->date == ((char *)NULL))
    return 1;

  else
  {
    get_kdata(kdata, glog->date, glog->date);
    return 0;
  }
}

// generate_time
// file src/ui.h line 308
void generate_time(void)
{
  timestamp=time((signed long int *)(void *)0);
  now_tm=localtime(&timestamp);
}

// geoip_get_city
// file src/geolocation.c line 285
void geoip_get_city(const char *ip, char *location, enum anonymous$23 type_ip)
{
  unsigned char rec;
  rec=GeoIP_database_edition(geo_location_data);
  if(!(conf.geoip_database == ((char *)NULL)) && !(geo_location_data == ((struct GeoIPTag *)NULL)))
    switch((signed int)rec)
    {
      case 6:

      case 2:
      {
        if((signed int)type_ip == TYPE_IPV4)
          geoip_set_city_by_record(ip, location, (enum anonymous$23)TYPE_IPV4);

        goto __CPROVER_DUMP_L5;
      }
      case 31:

      case 30:
        if((signed int)type_ip == TYPE_IPV6)
          geoip_set_city_by_record(ip, location, (enum anonymous$23)TYPE_IPV6);

      default:

        __CPROVER_DUMP_L5:
          ;
    }

}

// geoip_get_continent
// file src/geolocation.h line 49
void geoip_get_continent(const char *ip, char *location, enum anonymous$23 type_ip)
{
  unsigned char rec;
  rec=GeoIP_database_edition(geo_location_data);
  switch((signed int)rec)
  {
    case 1:
    {
      if((signed int)type_ip == TYPE_IPV4)
        geoip_set_continent_by_geoid(ip, location, (enum anonymous$23)TYPE_IPV4);

      goto __CPROVER_DUMP_L8;
    }
    case 12:
    {
      if((signed int)type_ip == TYPE_IPV6)
        geoip_set_continent_by_geoid(ip, location, (enum anonymous$23)TYPE_IPV6);

      goto __CPROVER_DUMP_L8;
    }
    case 6:

    case 2:
    {
      if((signed int)type_ip == TYPE_IPV4)
        geoip_set_continent_by_record(ip, location, (enum anonymous$23)TYPE_IPV4);

      goto __CPROVER_DUMP_L8;
    }
    case 31:

    case 30:
      if((signed int)type_ip == TYPE_IPV6)
        geoip_set_continent_by_record(ip, location, (enum anonymous$23)TYPE_IPV6);

    default:

      __CPROVER_DUMP_L8:
        ;
  }
}

// geoip_get_country
// file src/geolocation.h line 50
void geoip_get_country(const char *ip, char *location, enum anonymous$23 type_ip)
{
  unsigned char rec;
  rec=GeoIP_database_edition(geo_location_data);
  switch((signed int)rec)
  {
    case 1:
    {
      if((signed int)type_ip == TYPE_IPV4)
        geoip_set_country_by_geoid(ip, location, (enum anonymous$23)TYPE_IPV4);

      goto __CPROVER_DUMP_L8;
    }
    case 12:
    {
      if((signed int)type_ip == TYPE_IPV6)
        geoip_set_country_by_geoid(ip, location, (enum anonymous$23)TYPE_IPV6);

      goto __CPROVER_DUMP_L8;
    }
    case 6:

    case 2:
    {
      if((signed int)type_ip == TYPE_IPV4)
        geoip_set_country_by_record(ip, location, (enum anonymous$23)TYPE_IPV4);

      goto __CPROVER_DUMP_L8;
    }
    case 31:

    case 30:
      if((signed int)type_ip == TYPE_IPV6)
        geoip_set_country_by_record(ip, location, (enum anonymous$23)TYPE_IPV6);

    default:

      __CPROVER_DUMP_L8:
        ;
  }
}

// geoip_get_country_by_geoid
// file src/geolocation.c line 149
static const char * geoip_get_country_by_geoid(const char *addr, enum anonymous$23 type_ip)
{
  const char *country = (const char *)(void *)0;
  if((signed int)type_ip == TYPE_IPV4)
    country=GeoIP_country_name_by_name(geo_location_data, addr);

  else
    if((signed int)type_ip == TYPE_IPV6)
      country=GeoIP_country_name_by_name_v6(geo_location_data, addr);

  return country;
}

// geoip_get_geoid
// file src/geolocation.c line 136
static signed int geoip_get_geoid(const char *addr, enum anonymous$23 type_ip)
{
  signed int geoid = 0;
  if((signed int)type_ip == TYPE_IPV4)
    geoid=GeoIP_id_by_name(geo_location_data, addr);

  else
    if((signed int)type_ip == TYPE_IPV6)
      geoid=GeoIP_id_by_name_v6(geo_location_data, addr);

  return geoid;
}

// geoip_open_db
// file src/geolocation.h line 47
struct GeoIPTag * geoip_open_db(const char *db)
{
  struct GeoIPTag *geoip;
  geoip=GeoIP_open(db, 1);
  if(geoip == ((struct GeoIPTag *)NULL))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:49");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/geolocation.c", (const void *)"geoip_open_db", 68);
      fprintf(stderr, "Unable to open GeoIP database: %s\n", db);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  GeoIP_set_charset(geoip, 1);

__CPROVER_DUMP_L4:
  ;
  return geoip;
}

// geoip_set_city
// file src/geolocation.c line 86
static void geoip_set_city(const char *city, const char *region, char *loc)
{
  sprintf(loc, "%s, %s", city != ((const char *)NULL) ? city : "N/A City", region != ((const char *)NULL) ? region : "N/A Region");
}

// geoip_set_city_by_record
// file src/geolocation.c line 266
static void geoip_set_city_by_record(const char *ip, char *location, enum anonymous$23 type_ip)
{
  struct GeoIPRecordTag *rec = (struct GeoIPRecordTag *)(void *)0;
  const char *city = (const char *)(void *)0;
  const char *region = (const char *)(void *)0;
  const char *addr = ip;
  rec=get_geoip_record(addr, type_ip);
  if(!(rec == ((struct GeoIPRecordTag *)NULL)))
  {
    city = rec->city;
    region = rec->region;
  }

  geoip_set_city(city, region, location);
  if(!(rec == ((struct GeoIPRecordTag *)NULL)))
    GeoIPRecord_delete(rec);

}

// geoip_set_continent
// file src/geolocation.c line 93
static void geoip_set_continent(const char *continent, char *loc)
{
  const char *return_value_get_continent_name_and_code$1;
  if(!(continent == ((const char *)NULL)))
  {
    return_value_get_continent_name_and_code$1=get_continent_name_and_code(continent);
    sprintf(loc, "%s", return_value_get_continent_name_and_code$1);
  }

  else
    sprintf(loc, "%s", (const void *)"Continent Unknown");
}

// geoip_set_continent_by_geoid
// file src/geolocation.c line 224
static void geoip_set_continent_by_geoid(const char *ip, char *location, enum anonymous$23 type_ip)
{
  const char *continent = (const char *)(void *)0;
  const char *addr = ip;
  signed int geoid = 0;
  if(!(geo_location_data == ((struct GeoIPTag *)NULL)))
  {
    geoid=geoip_get_geoid(addr, type_ip);
    continent=GeoIP_continent_by_id(geoid);
    geoip_set_continent(continent, location);
  }

}

// geoip_set_continent_by_record
// file src/geolocation.c line 205
static void geoip_set_continent_by_record(const char *ip, char *location, enum anonymous$23 type_ip)
{
  struct GeoIPRecordTag *rec = (struct GeoIPRecordTag *)(void *)0;
  const char *continent = (const char *)(void *)0;
  const char *addr = ip;
  if(!(conf.geoip_database == ((char *)NULL)) && !(geo_location_data == ((struct GeoIPTag *)NULL)))
  {
    rec=get_geoip_record(addr, type_ip);
    if(!(rec == ((struct GeoIPRecordTag *)NULL)))
      continent = rec->continent_code;

    geoip_set_continent(continent, location);
    if(!(rec == ((struct GeoIPRecordTag *)NULL)))
      GeoIPRecord_delete(rec);

  }

}

// geoip_set_country
// file src/geolocation.c line 77
static void geoip_set_country(const char *country, const char *code, char *loc)
{
  if(!(code == ((const char *)NULL)) && !(country == ((const char *)NULL)))
    sprintf(loc, "%s %s", code, country);

  else
    sprintf(loc, "%s", (const void *)"Country Unknown");
}

// geoip_set_country_by_geoid
// file src/geolocation.c line 162
static void geoip_set_country_by_geoid(const char *ip, char *location, enum anonymous$23 type_ip)
{
  const char *country = (const char *)(void *)0;
  const char *code = (const char *)(void *)0;
  const char *addr = ip;
  signed int geoid = 0;
  if(!(geo_location_data == ((struct GeoIPTag *)NULL)))
  {
    geoid=geoip_get_geoid(addr, type_ip);
    country=geoip_get_country_by_geoid(addr, type_ip);
    code=GeoIP_code_by_id(geoid);
    geoip_set_country(country, code, location);
  }

}

// geoip_set_country_by_record
// file src/geolocation.c line 115
static void geoip_set_country_by_record(const char *ip, char *location, enum anonymous$23 type_ip)
{
  struct GeoIPRecordTag *rec = (struct GeoIPRecordTag *)(void *)0;
  const char *country = (const char *)(void *)0;
  const char *code = (const char *)(void *)0;
  const char *addr = ip;
  if(!(conf.geoip_database == ((char *)NULL)) && !(geo_location_data == ((struct GeoIPTag *)NULL)))
  {
    rec=get_geoip_record(addr, type_ip);
    if(!(rec == ((struct GeoIPRecordTag *)NULL)))
    {
      country = rec->country_name;
      code = rec->country_code;
    }

    geoip_set_country(country, code, location);
    if(!(rec == ((struct GeoIPRecordTag *)NULL)))
      GeoIPRecord_delete(rec);

  }

}

// get_bars
// file src/gdashboard.c line 409
static char * get_bars(signed int n, signed int max, signed int x)
{
  signed int w;
  signed int h;
  signed int len;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  h = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  w = tmp_if_expr$2;
  (void)h;
  len = (n * (w - x)) / max;
  if(!(len >= 1))
    len = 1;

  char *return_value_char_repeat$3;
  return_value_char_repeat$3=char_repeat(len, (char)124);
  return return_value_char_repeat$3;
}

// get_color
// file src/color.c line 516
struct GColors_ * get_color(enum CSTM_COLORS item)
{
  enum CSTM_COLORS normal = (enum CSTM_COLORS)COLOR_NORMAL;
  struct GSLList_ *match = (struct GSLList_ *)(void *)0;
  match=list_find(color_list, find_color_item_in_list, (void *)&item);
  if(!(match == ((struct GSLList_ *)NULL)))
    return (struct GColors_ *)match->data;

  else
  {
    match=list_find(color_list, find_color_item_in_list, (void *)&normal);
    if(!(match == ((struct GSLList_ *)NULL)))
      return (struct GColors_ *)match->data;

    else
      do
      {
        endwin();
        fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
        fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
        fprintf(stderr, "\nFatal error has occurred");
        fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"get_color", 528);
        fprintf(stderr, "Unable to find color item %d", item);
        fprintf(stderr, "\n\n");

      __CPROVER_DUMP_L3:
        ;
        exit(1);
      }
      while((_Bool)0);
  }
}

// get_color_by_item_module
// file src/color.c line 532
struct GColors_ * get_color_by_item_module(enum CSTM_COLORS item, enum MODULES module)
{
  struct GColors_ *needle;
  needle=new_gcolors();
  struct GColors_ *color = (struct GColors_ *)(void *)0;
  struct GSLList_ *match = (struct GSLList_ *)(void *)0;
  needle->module = (signed short int)module;
  needle->item = item;
  match=list_find(color_list, find_color_item_module_in_list, (void *)needle);
  if(!(match == ((struct GSLList_ *)NULL)))
    color = (struct GColors_ *)match->data;

  if(color == ((struct GColors_ *)NULL))
    color=get_color(item);

  free((void *)needle);
  return color;
}

// get_color_item_enum
// file src/color.c line 357
static signed int get_color_item_enum(const char *str)
{
  signed int return_value_str2enum$1;
  return_value_str2enum$1=str2enum(CSTM_COLORS, (signed int)(sizeof(struct GEnum_ [25l]) /*400ul*/  / sizeof(struct GEnum_) /*16ul*/ ), str);
  return return_value_str2enum$1;
}

// get_config_file_path
// file src/settings.c line 83
static char * get_config_file_path(void)
{
  char *upath = (char *)(void *)0;
  char *rpath = (char *)(void *)0;
  if(!(conf.iconfigfile == ((char *)NULL)))
  {
    rpath=realpath(conf.iconfigfile, (char *)(void *)0);
    if(rpath == ((char *)NULL))
      do
      {
        endwin();
        fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:42");
        fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
        fprintf(stderr, "\nFatal error has occurred");
        fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/settings.c", (const void *)"get_config_file_path", 91);
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        fprintf(stderr, "Unable to open the specified config file. %s", return_value_strerror$2);
        fprintf(stderr, "\n\n");

      __CPROVER_DUMP_L2:
        ;
        exit(1);
      }
      while((_Bool)0);

    return rpath;
  }

  else
  {
    if(!(conf.load_global_config == 0))
    {
      upath=get_global_config();
      rpath=realpath(upath, (char *)(void *)0);
      if(!(upath == ((char *)NULL)))
        free((void *)upath);

    }

    if(rpath == ((char *)NULL))
    {
      upath=get_home();
      rpath=realpath(upath, (char *)(void *)0);
      if(!(upath == ((char *)NULL)))
        free((void *)upath);

    }

    return rpath;
  }
}

// get_continent_name_and_code
// file src/geolocation.c line 40
static const char * get_continent_name_and_code(const char *continentid)
{
  signed int return_value_memcmp$7;
  return_value_memcmp$7=memcmp((const void *)continentid, (const void *)"NA", (unsigned long int)2);
  signed int return_value_memcmp$6;
  signed int return_value_memcmp$5;
  signed int return_value_memcmp$4;
  signed int return_value_memcmp$3;
  signed int return_value_memcmp$2;
  signed int return_value_memcmp$1;
  if(return_value_memcmp$7 == 0)
    return "NA North America";

  else
  {
    return_value_memcmp$6=memcmp((const void *)continentid, (const void *)"OC", (unsigned long int)2);
    if(return_value_memcmp$6 == 0)
      return "OC Oceania";

    else
    {
      return_value_memcmp$5=memcmp((const void *)continentid, (const void *)"EU", (unsigned long int)2);
      if(return_value_memcmp$5 == 0)
        return "EU Europe";

      else
      {
        return_value_memcmp$4=memcmp((const void *)continentid, (const void *)"SA", (unsigned long int)2);
        if(return_value_memcmp$4 == 0)
          return "SA South America";

        else
        {
          return_value_memcmp$3=memcmp((const void *)continentid, (const void *)"AF", (unsigned long int)2);
          if(return_value_memcmp$3 == 0)
            return "AF Africa";

          else
          {
            return_value_memcmp$2=memcmp((const void *)continentid, (const void *)"AN", (unsigned long int)2);
            if(return_value_memcmp$2 == 0)
              return "AN Antarctica";

            else
            {
              return_value_memcmp$1=memcmp((const void *)continentid, (const void *)"AS", (unsigned long int)2);
              if(return_value_memcmp$1 == 0)
                return "AS Asia";

              else
                return "-- Location Unknown";
            }
          }
        }
      }
    }
  }
}

// get_cumulative_from_key
// file src/glibht.h line 68
unsigned long int get_cumulative_from_key(signed int data_nkey, enum MODULES module, enum METRICS metric)
{
  void *value_ptr;
  struct _GHashTable *ht = (struct _GHashTable *)(void *)0;
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  switch((signed int)metric)
  {
    case MTRC_BW:
    {
      ht = (struct _GHashTable *)metrics->bw;
      break;
    }
    case MTRC_CUMTS:
    {
      ht = (struct _GHashTable *)metrics->cumts;
      break;
    }
    case MTRC_MAXTS:
    {
      ht = (struct _GHashTable *)metrics->maxts;
      break;
    }
    default:
      ht = (struct _GHashTable *)(void *)0;
  }
  if(ht == ((struct _GHashTable *)NULL))
    return (unsigned long int)0;

  else
  {
    value_ptr=g_hash_table_lookup(ht, (const void *)&data_nkey);
    if(!(value_ptr == NULL))
      return *((unsigned long int *)value_ptr);

    else
      return (unsigned long int)0;
  }
}

// get_data_pos_rows
// file src/gdashboard.c line 349
static signed int get_data_pos_rows(void)
{
  return conf.no_column_names != 0 ? 4 - 2 : 4;
}

// get_find_current_module
// file src/gdashboard.c line 315
static enum MODULES get_find_current_module(struct GDash_ *dash, signed int offset)
{
  enum MODULES module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    if((signed int)dash->module[(signed long int)module].pos_y == offset)
      return module;

    if(!(offset >= (signed int)dash->module[(signed long int)module].pos_y))
      return (enum MODULES)((signed int)module - 1);

  }
  return (enum MODULES)0;
}

// get_geoip_record
// file src/geolocation.c line 102
static struct GeoIPRecordTag * get_geoip_record(const char *addr, enum anonymous$23 type_ip)
{
  struct GeoIPRecordTag *rec = (struct GeoIPRecordTag *)(void *)0;
  if((signed int)type_ip == TYPE_IPV4)
    rec=GeoIP_record_by_name(geo_location_data, addr);

  else
    if((signed int)type_ip == TYPE_IPV6)
      rec=GeoIP_record_by_name_v6(geo_location_data, addr);

  return rec;
}

// get_global_config
// file src/util.h line 50
char * get_global_config(void)
{
  char *path = (char *)(void *)0;
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "%s/goaccess.conf", (const void *)"/etc");
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  path = (char *)return_value_xmalloc$2;
  sprintf(path, "%s/goaccess.conf", (const void *)"/etc");
  return path;
}

// get_home
// file src/util.h line 51
char * get_home(void)
{
  char *user_home = (char *)(void *)0;
  char *path = (char *)(void *)0;
  user_home=getenv("HOME");
  if(user_home == ((char *)NULL))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:45");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/util.c", (const void *)"get_home", 278);
      fprintf(stderr, "Unable to determine the HOME environment variable.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "%s/.goaccessrc", user_home);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  path = (char *)return_value_xmalloc$2;
  sprintf(path, "%s/.goaccessrc", user_home);
  return path;
}

// get_host_agent_list
// file src/glibht.h line 71
void * get_host_agent_list(signed int data_nkey)
{
  struct _GHashTable *ht;
  void *list;
  void *return_value_get_storage_metric$1;
  return_value_get_storage_metric$1=get_storage_metric((enum MODULES)HOSTS, (enum METRICS)MTRC_AGENTS);
  ht = (struct _GHashTable *)return_value_get_storage_metric$1;
  list=g_hash_table_lookup(ht, (const void *)&data_nkey);
  if(!(list == NULL))
    return list;

  else
    return (void *)0;
}

// get_host_agent_val
// file src/glibht.h line 59
char * get_host_agent_val(signed int agent_nkey)
{
  char *return_value_get_str_from_int_key$1;
  return_value_get_str_from_int_key$1=get_str_from_int_key(ht_agent_vals, agent_nkey);
  return return_value_get_str_from_int_key$1;
}

// get_hostname
// file src/glibht.h line 60
char * get_hostname(const char *host)
{
  signed int found;
  void *value_ptr;
  found=g_hash_table_lookup_extended(ht_hostnames, (const void *)host, (void **)(void *)0, &value_ptr);
  char *return_value_xstrdup$1;
  if(!(value_ptr == NULL) && !(found == 0))
  {
    return_value_xstrdup$1=xstrdup((const char *)value_ptr);
    return return_value_xstrdup$1;
  }

  else
    return (char *)(void *)0;
}

// get_ht_size
// file src/glibht.h line 42
unsigned int get_ht_size(struct _GHashTable *ht)
{
  unsigned int return_value_g_hash_table_size$1;
  return_value_g_hash_table_size$1=g_hash_table_size(ht);
  return return_value_g_hash_table_size$1;
}

// get_ht_size_by_metric
// file src/glibht.h line 41
unsigned int get_ht_size_by_metric(enum MODULES module, enum METRICS metric)
{
  struct _GHashTable *ht;
  void *return_value_get_storage_metric$1;
  return_value_get_storage_metric$1=get_storage_metric(module, metric);
  ht = (struct _GHashTable *)return_value_get_storage_metric$1;
  unsigned int return_value_get_ht_size$2;
  return_value_get_ht_size$2=get_ht_size(ht);
  return return_value_get_ht_size$2;
}

// get_int_from_int_key
// file src/glibht.c line 394
static signed int get_int_from_int_key(struct _GHashTable *ht, signed int nkey)
{
  void *value_ptr;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    value_ptr=g_hash_table_lookup(ht, (const void *)&nkey);
    if(!(value_ptr == NULL))
      return *((signed int *)value_ptr);

    else
      return 0;
  }
}

// get_int_from_keymap
// file src/glibht.h line 64
signed int get_int_from_keymap(const char *key, enum MODULES module)
{
  struct _GHashTable *ht;
  void *return_value_get_storage_metric$1;
  return_value_get_storage_metric$1=get_storage_metric(module, (enum METRICS)MTRC_KEYMAP);
  ht = (struct _GHashTable *)return_value_get_storage_metric$1;
  signed int return_value_get_int_from_str_key$2;
  return_value_get_int_from_str_key$2=get_int_from_str_key(ht, key);
  return return_value_get_int_from_str_key$2;
}

// get_int_from_str_key
// file src/glibht.c line 409
signed int get_int_from_str_key(struct _GHashTable *ht, const char *key)
{
  void *value_ptr;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    value_ptr=g_hash_table_lookup(ht, (const void *)key);
    if(!(value_ptr == NULL))
      return *((signed int *)value_ptr);

    else
      return 0;
  }
}

// get_item_idx_in_holder
// file src/gdashboard.c line 1324
static signed int get_item_idx_in_holder(struct GHolder_ *holder, const char *k)
{
  signed int i;
  _Bool tmp_if_expr$1;
  if(holder == ((struct GHolder_ *)NULL))
    return -1;

  else
    if(holder->idx == 0)
      return -1;

    else
    {
      if(k == ((const char *)NULL))
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = (signed int)*k == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        return -1;

      else
      {
        i = 0;
        for( ; !(i >= holder->idx); i = i + 1)
        {
          signed int return_value_strcmp$2;
          return_value_strcmp$2=strcmp(k, (holder->items + (signed long int)i)->metrics->data);
          if(return_value_strcmp$2 == 0)
            return i;

        }
        return -1;
      }
    }
}

// get_kdata
// file src/parser.c line 1358
static void get_kdata(struct GKeyData_ *kdata, char *data_key, char *data)
{
  kdata->data_key = (void *)data_key;
  kdata->data = (void *)data;
}

// get_keys
// file src/goaccess.c line 680
static void get_keys(void)
{
  signed int search = 0;
  signed int c;
  signed int quit = 1;
  unsigned long int size1 = (unsigned long int)0;
  signed long int return_value_file_size$1;
  if(logger->piping == 0)
  {
    if(logger->load_from_disk_only == 0)
    {
      return_value_file_size$1=file_size(conf.ifile);
      size1 = (unsigned long int)return_value_file_size$1;
    }

  }

  signed int return_value_next_module$2;
  signed int return_value_previous_module$3;
  while(!(quit == 0))
  {
    c=wgetch(stdscr);
    if(!(c == 113))
    {
      if(c == 63 || c == 104 || c == 1)
        goto __CPROVER_DUMP_L4;

      if(c == 49)
        goto __CPROVER_DUMP_L5;

      if(c == 50)
        goto __CPROVER_DUMP_L6;

      if(c == 51)
        goto __CPROVER_DUMP_L7;

      if(c == 52)
        goto __CPROVER_DUMP_L8;

      if(c == 53)
        goto __CPROVER_DUMP_L9;

      if(c == 54)
        goto __CPROVER_DUMP_L10;

      if(c == 55)
        goto __CPROVER_DUMP_L11;

      if(c == 56)
        goto __CPROVER_DUMP_L12;

      if(c == 57)
        goto __CPROVER_DUMP_L13;

      if(c == 48)
        goto __CPROVER_DUMP_L14;

      if(c == 33)
        goto __CPROVER_DUMP_L15;

      if(c == 34)
        goto __CPROVER_DUMP_L16;

      if(c == 35)
        goto __CPROVER_DUMP_L17;

      if(c == 9)
        goto __CPROVER_DUMP_L18;

      if(c == 353)
        goto __CPROVER_DUMP_L20;

      if(c == 103)
        goto __CPROVER_DUMP_L22;

      if(c == 71)
        goto __CPROVER_DUMP_L23;

      if(c == 0x0a || c == 0x0d || c == 32 || c == 79 || c == 111 || c == 0405 || c == 0527)
        goto __CPROVER_DUMP_L24;

      if(c == 0402)
        goto __CPROVER_DUMP_L25;

      if(c == 0631)
        goto __CPROVER_DUMP_L27;

      if(c == 106)
        goto __CPROVER_DUMP_L28;

      if(c == 0403)
        goto __CPROVER_DUMP_L29;

      if(c == 2 || c == 339)
        goto __CPROVER_DUMP_L31;

      if(c == 6 || c == 338)
        goto __CPROVER_DUMP_L32;

      if(c == 107)
        goto __CPROVER_DUMP_L33;

      if(c == 110)
        goto __CPROVER_DUMP_L34;

      if(c == 47)
        goto __CPROVER_DUMP_L35;

      if(c == 99)
        goto __CPROVER_DUMP_L36;

      if(c == 115)
        goto __CPROVER_DUMP_L38;

      if(c == 269 || c == 0632)
        goto __CPROVER_DUMP_L39;

    }

    else
    {
      if(gscroll.expanded == 0)
      {
        quit = 0;
        continue;
      }

      collapse_current_module();
      continue;

    __CPROVER_DUMP_L4:
      ;
      load_help_popup(main_win);
      render_screens();
      continue;

    __CPROVER_DUMP_L5:
      ;
      set_module_to(&gscroll, (enum MODULES)VISITORS);
      continue;

    __CPROVER_DUMP_L6:
      ;
      set_module_to(&gscroll, (enum MODULES)REQUESTS);
      continue;

    __CPROVER_DUMP_L7:
      ;
      set_module_to(&gscroll, (enum MODULES)REQUESTS_STATIC);
      continue;

    __CPROVER_DUMP_L8:
      ;
      set_module_to(&gscroll, (enum MODULES)NOT_FOUND);
      continue;

    __CPROVER_DUMP_L9:
      ;
      set_module_to(&gscroll, (enum MODULES)HOSTS);
      continue;

    __CPROVER_DUMP_L10:
      ;
      set_module_to(&gscroll, (enum MODULES)OS);
      continue;

    __CPROVER_DUMP_L11:
      ;
      set_module_to(&gscroll, (enum MODULES)BROWSERS);
      continue;

    __CPROVER_DUMP_L12:
      ;
      set_module_to(&gscroll, (enum MODULES)VISIT_TIMES);
      continue;

    __CPROVER_DUMP_L13:
      ;
      set_module_to(&gscroll, (enum MODULES)REFERRERS);
      continue;

    __CPROVER_DUMP_L14:
      ;
      set_module_to(&gscroll, (enum MODULES)REFERRING_SITES);
      continue;

    __CPROVER_DUMP_L15:
      ;
      set_module_to(&gscroll, (enum MODULES)KEYPHRASES);
      continue;

    __CPROVER_DUMP_L16:
      ;
      set_module_to(&gscroll, (enum MODULES)GEO_LOCATION);
      continue;

    __CPROVER_DUMP_L17:
      ;
      set_module_to(&gscroll, (enum MODULES)STATUS_CODES);
      continue;

    __CPROVER_DUMP_L18:
      ;
      collapse_current_module();
      return_value_next_module$2=next_module();
      if(return_value_next_module$2 == 0)
        render_screens();

      continue;

    __CPROVER_DUMP_L20:
      ;
      collapse_current_module();
      return_value_previous_module$3=previous_module();
      if(return_value_previous_module$3 == 0)
        render_screens();

      continue;

    __CPROVER_DUMP_L22:
      ;
      scroll_to_first_line();
      display_content(main_win, logger, dash, &gscroll);
      continue;

    __CPROVER_DUMP_L23:
      ;
      scroll_to_last_line();
      display_content(main_win, logger, dash, &gscroll);
      continue;

    __CPROVER_DUMP_L24:
      ;
      expand_current_module();
      display_content(main_win, logger, dash, &gscroll);
      continue;

    __CPROVER_DUMP_L25:
      ;
      if(!(real_size_y + (unsigned long int)gscroll.dash >= (unsigned long int)(unsigned int)dash->total_alloc))
      {
        gscroll.dash = gscroll.dash + 1;
        display_content(main_win, logger, dash, &gscroll);
      }

      continue;

    __CPROVER_DUMP_L27:
      ;
      expand_on_mouse_click();
      continue;

    __CPROVER_DUMP_L28:
      ;
      scroll_down_expanded_module();
      display_content(main_win, logger, dash, &gscroll);
      continue;

    __CPROVER_DUMP_L29:
      ;
      if(gscroll.dash >= 1)
      {
        scroll_up_dashboard();
        display_content(main_win, logger, dash, &gscroll);
      }

      continue;

    __CPROVER_DUMP_L31:
      ;
      page_up_module();
      display_content(main_win, logger, dash, &gscroll);
      continue;

    __CPROVER_DUMP_L32:
      ;
      page_down_module();
      display_content(main_win, logger, dash, &gscroll);
      continue;

    __CPROVER_DUMP_L33:
      ;
      scroll_up_expanded_module();
      display_content(main_win, logger, dash, &gscroll);
      continue;

    __CPROVER_DUMP_L34:
      ;
      search_next_match(search);
      continue;

    __CPROVER_DUMP_L35:
      ;
      render_search_dialog(search);
      continue;

    __CPROVER_DUMP_L36:
      ;
      if(!(conf.no_color == 0))
        continue;

      load_schemes_win(main_win);
      free_dashboard(dash);
      allocate_data();
      render_screens();
      continue;

    __CPROVER_DUMP_L38:
      ;
      render_sort_dialog();
      continue;

    __CPROVER_DUMP_L39:
      ;
      window_resize();
      continue;
    }
    perform_tail_follow(&size1);
  }
}

// get_max_data_len
// file src/gdashboard.c line 438
static signed int get_max_data_len(struct GDashData_ *data, signed int size)
{
  signed int i;
  signed int max = 0;
  signed int len;
  i = 0;
  for( ; !(i >= size); i = i + 1)
    if(!((data + (signed long int)i)->metrics->data == ((char *)NULL)))
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen((data + (signed long int)i)->metrics->data);
      len = (signed int)return_value_strlen$1;
      if(!(max >= len))
        max = len;

    }

  return max;
}

// get_max_hit
// file src/gdashboard.c line 487
static signed int get_max_hit(struct GDashData_ *data, signed int size)
{
  signed int i;
  signed int max = 0;
  i = 0;
  for( ; !(i >= size); i = i + 1)
  {
    signed int cur = 0;
    cur = (data + (signed long int)i)->metrics->hits;
    if(!(max >= cur))
      max = cur;

  }
  return max;
}

// get_max_hit$link1
// file src/output.c line 948
static signed int get_max_hit$link1(struct GHolder_ *h)
{
  signed int i$link1;
  signed int max$link1 = 0;
  i$link1 = 0;
  for( ; !(i$link1 >= h->idx); i$link1 = i$link1 + 1)
  {
    signed int cur$link1 = (h->items + (signed long int)i$link1)->metrics->hits;
    if(!(max$link1 >= cur$link1))
      max$link1 = cur$link1;

  }
  return max$link1;
}

// get_max_hit_len
// file src/gdashboard.c line 470
static signed int get_max_hit_len(struct GDashData_ *data, signed int size)
{
  signed int i;
  signed int max = 0;
  i = 0;
  for( ; !(i >= size); i = i + 1)
  {
    signed int len;
    len=intlen((data + (signed long int)i)->metrics->hits);
    if(!(max >= len))
      max = len;

  }
  if(conf.no_column_names == 0 && !(max >= 4))
    max = 4;

  return max;
}

// get_max_method_len
// file src/gdashboard.c line 423
static signed int get_max_method_len(struct GDashData_ *data, signed int size)
{
  signed int i;
  signed int max = 0;
  signed int len;
  i = 0;
  for( ; !(i >= size); i = i + 1)
    if(!((data + (signed long int)i)->metrics->method == ((char *)NULL)))
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen((data + (signed long int)i)->metrics->method);
      len = (signed int)return_value_strlen$1;
      if(!(max >= len))
        max = len;

    }

  return max;
}

// get_max_perc_len
// file src/gdashboard.c line 499
static signed int get_max_perc_len(signed int max_percent)
{
  signed int return_value_intlen$1;
  return_value_intlen$1=intlen((signed int)max_percent);
  return return_value_intlen$1;
}

// get_max_visitor
// file src/output.c line 935
static signed int get_max_visitor(struct GHolder_ *h)
{
  signed int i;
  signed int max = 0;
  i = 0;
  for( ; !(i >= h->idx); i = i + 1)
  {
    signed int cur = (h->items + (signed long int)i)->metrics->visitors;
    if(!(max >= cur))
      max = cur;

  }
  return max;
}

// get_max_visitor_len
// file src/gdashboard.c line 453
static signed int get_max_visitor_len(struct GDashData_ *data, signed int size)
{
  signed int i;
  signed int max = 0;
  i = 0;
  for( ; !(i >= size); i = i + 1)
  {
    signed int len;
    len=intlen((data + (signed long int)i)->metrics->visitors);
    if(!(max >= len))
      max = len;

  }
  if(conf.no_column_names == 0 && !(max >= 4))
    max = 4;

  return max;
}

// get_module_enum
// file src/commons.h line 241
signed int get_module_enum(const char *str)
{
  signed int return_value_str2enum$1;
  return_value_str2enum$1=str2enum(MODULES, (signed int)(sizeof(struct GEnum_ [13l]) /*208ul*/  / sizeof(struct GEnum_) /*16ul*/ ), str);
  return return_value_str2enum$1;
}

// get_node_from_key
// file src/glibht.h line 61
char * get_node_from_key(signed int data_nkey, enum MODULES module, enum METRICS metric)
{
  struct _GHashTable *ht = (struct _GHashTable *)(void *)0;
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  switch((signed int)metric)
  {
    case MTRC_DATAMAP:
    {
      ht = (struct _GHashTable *)metrics->datamap;
      break;
    }
    case MTRC_METHODS:
    {
      ht = (struct _GHashTable *)metrics->methods;
      break;
    }
    case MTRC_PROTOCOLS:
    {
      ht = (struct _GHashTable *)metrics->protocols;
      break;
    }
    default:
      ht = (struct _GHashTable *)(void *)0;
  }
  if(ht == ((struct _GHashTable *)NULL))
    return (char *)(void *)0;

  else
  {
    char *return_value_get_str_from_int_key$1;
    return_value_get_str_from_int_key$1=get_str_from_int_key(ht, data_nkey);
    return return_value_get_str_from_int_key$1;
  }
}

// get_num_collapsed_data_rows
// file src/gdashboard.c line 333
signed int get_num_collapsed_data_rows(void)
{
  signed int size = 12 - 5;
  return conf.no_column_names != 0 ? size + 2 : size;
}

// get_num_expanded_data_rows
// file src/gdashboard.c line 341
signed int get_num_expanded_data_rows(void)
{
  signed int size = 32 - 5;
  return conf.no_column_names != 0 ? size + 2 : size;
}

// get_num_from_key
// file src/glibht.h line 66
signed int get_num_from_key(signed int data_nkey, enum MODULES module, enum METRICS metric)
{
  struct _GHashTable *ht = (struct _GHashTable *)(void *)0;
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  switch((signed int)metric)
  {
    case MTRC_HITS:
    {
      ht = (struct _GHashTable *)metrics->hits;
      break;
    }
    case MTRC_VISITORS:
    {
      ht = (struct _GHashTable *)metrics->visitors;
      break;
    }
    default:
      ht = (struct _GHashTable *)(void *)0;
  }
  if(ht == ((struct _GHashTable *)NULL))
    return 0;

  else
  {
    signed int return_value_get_int_from_int_key$1;
    return_value_get_int_from_int_key$1=get_int_from_int_key(ht, data_nkey);
    return return_value_get_int_from_int_key$1;
  }
}

// get_percentage
// file src/commons.c line 66
float get_percentage(unsigned long long int total, unsigned long long int hit)
{
  return (float)(hit * (unsigned long int)100) / (float)total;
}

// get_real_android
// file src/opesys.c line 106
static char * get_real_android(const char *droid)
{
  char *return_value_strstr$26;
  return_value_strstr$26=strstr(droid, "5.0");
  _Bool tmp_if_expr$28;
  char *return_value_strstr$27;
  if(!(return_value_strstr$26 == ((char *)NULL)))
    tmp_if_expr$28 = (_Bool)1;

  else
  {
    return_value_strstr$27=strstr(droid, "5.1");
    tmp_if_expr$28 = return_value_strstr$27 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
  }
  char *return_value_alloc_string$1;
  char *return_value_strstr$25;
  char *return_value_alloc_string$2;
  char *return_value_strstr$20;
  _Bool tmp_if_expr$22;
  char *return_value_strstr$21;
  _Bool tmp_if_expr$24;
  char *return_value_strstr$23;
  char *return_value_alloc_string$3;
  char *return_value_strstr$19;
  char *return_value_alloc_string$4;
  char *return_value_strstr$18;
  char *return_value_alloc_string$5;
  char *return_value_strstr$17;
  char *return_value_alloc_string$6;
  char *return_value_strstr$16;
  char *return_value_alloc_string$7;
  char *return_value_strstr$13;
  _Bool tmp_if_expr$15;
  char *return_value_strstr$14;
  char *return_value_alloc_string$8;
  char *return_value_strstr$12;
  char *return_value_alloc_string$9;
  char *return_value_strstr$11;
  char *return_value_alloc_string$10;
  if(tmp_if_expr$28)
  {
    return_value_alloc_string$1=alloc_string("Lollipop");
    return return_value_alloc_string$1;
  }

  else
  {
    return_value_strstr$25=strstr(droid, "4.4");
    if(!(return_value_strstr$25 == ((char *)NULL)))
    {
      return_value_alloc_string$2=alloc_string("KitKat");
      return return_value_alloc_string$2;
    }

    else
    {
      return_value_strstr$20=strstr(droid, "4.3");
      if(!(return_value_strstr$20 == ((char *)NULL)))
        tmp_if_expr$22 = (_Bool)1;

      else
      {
        return_value_strstr$21=strstr(droid, "4.2");
        tmp_if_expr$22 = return_value_strstr$21 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$22)
        tmp_if_expr$24 = (_Bool)1;

      else
      {
        return_value_strstr$23=strstr(droid, "4.1");
        tmp_if_expr$24 = return_value_strstr$23 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$24)
      {
        return_value_alloc_string$3=alloc_string("Jelly Bean");
        return return_value_alloc_string$3;
      }

      else
      {
        return_value_strstr$19=strstr(droid, "4.0");
        if(!(return_value_strstr$19 == ((char *)NULL)))
        {
          return_value_alloc_string$4=alloc_string("Ice Cream Sandwich");
          return return_value_alloc_string$4;
        }

        else
        {
          return_value_strstr$18=strstr(droid, "3.");
          if(!(return_value_strstr$18 == ((char *)NULL)))
          {
            return_value_alloc_string$5=alloc_string("Honeycomb");
            return return_value_alloc_string$5;
          }

          else
          {
            return_value_strstr$17=strstr(droid, "2.3");
            if(!(return_value_strstr$17 == ((char *)NULL)))
            {
              return_value_alloc_string$6=alloc_string("Gingerbread");
              return return_value_alloc_string$6;
            }

            else
            {
              return_value_strstr$16=strstr(droid, "2.2");
              if(!(return_value_strstr$16 == ((char *)NULL)))
              {
                return_value_alloc_string$7=alloc_string("Froyo");
                return return_value_alloc_string$7;
              }

              else
              {
                return_value_strstr$13=strstr(droid, "2.0");
                if(!(return_value_strstr$13 == ((char *)NULL)))
                  tmp_if_expr$15 = (_Bool)1;

                else
                {
                  return_value_strstr$14=strstr(droid, "2.1");
                  tmp_if_expr$15 = return_value_strstr$14 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$15)
                {
                  return_value_alloc_string$8=alloc_string("Eclair");
                  return return_value_alloc_string$8;
                }

                else
                {
                  return_value_strstr$12=strstr(droid, "1.6");
                  if(!(return_value_strstr$12 == ((char *)NULL)))
                  {
                    return_value_alloc_string$9=alloc_string("Donut");
                    return return_value_alloc_string$9;
                  }

                  else
                  {
                    return_value_strstr$11=strstr(droid, "1.5");
                    if(!(return_value_strstr$11 == ((char *)NULL)))
                    {
                      return_value_alloc_string$10=alloc_string("Cupcake");
                      return return_value_alloc_string$10;
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
  char *return_value_alloc_string$29;
  return_value_alloc_string$29=alloc_string(droid);
  return return_value_alloc_string$29;
}

// get_real_mac_osx
// file src/opesys.c line 161
static char * get_real_mac_osx(const char *osx)
{
  char *return_value_strstr$22;
  return_value_strstr$22=strstr(osx, "10.10");
  char *return_value_alloc_string$1;
  char *return_value_strstr$21;
  char *return_value_alloc_string$2;
  char *return_value_strstr$20;
  char *return_value_alloc_string$3;
  char *return_value_strstr$19;
  char *return_value_alloc_string$4;
  char *return_value_strstr$18;
  char *return_value_alloc_string$5;
  char *return_value_strstr$17;
  char *return_value_alloc_string$6;
  char *return_value_strstr$16;
  char *return_value_alloc_string$7;
  char *return_value_strstr$15;
  char *return_value_alloc_string$8;
  char *return_value_strstr$14;
  char *return_value_alloc_string$9;
  char *return_value_strstr$13;
  char *return_value_alloc_string$10;
  char *return_value_strstr$12;
  char *return_value_alloc_string$11;
  if(!(return_value_strstr$22 == ((char *)NULL)))
  {
    return_value_alloc_string$1=alloc_string("OS X Yosemite");
    return return_value_alloc_string$1;
  }

  else
  {
    return_value_strstr$21=strstr(osx, "10.9");
    if(!(return_value_strstr$21 == ((char *)NULL)))
    {
      return_value_alloc_string$2=alloc_string("OS X Mavericks");
      return return_value_alloc_string$2;
    }

    else
    {
      return_value_strstr$20=strstr(osx, "10.8");
      if(!(return_value_strstr$20 == ((char *)NULL)))
      {
        return_value_alloc_string$3=alloc_string("OS X Mountain Lion");
        return return_value_alloc_string$3;
      }

      else
      {
        return_value_strstr$19=strstr(osx, "10.7");
        if(!(return_value_strstr$19 == ((char *)NULL)))
        {
          return_value_alloc_string$4=alloc_string("OS X Lion");
          return return_value_alloc_string$4;
        }

        else
        {
          return_value_strstr$18=strstr(osx, "10.6");
          if(!(return_value_strstr$18 == ((char *)NULL)))
          {
            return_value_alloc_string$5=alloc_string("OS X Snow Leopard");
            return return_value_alloc_string$5;
          }

          else
          {
            return_value_strstr$17=strstr(osx, "10.5");
            if(!(return_value_strstr$17 == ((char *)NULL)))
            {
              return_value_alloc_string$6=alloc_string("OS X Leopard");
              return return_value_alloc_string$6;
            }

            else
            {
              return_value_strstr$16=strstr(osx, "10.4");
              if(!(return_value_strstr$16 == ((char *)NULL)))
              {
                return_value_alloc_string$7=alloc_string("OS X Tiger");
                return return_value_alloc_string$7;
              }

              else
              {
                return_value_strstr$15=strstr(osx, "10.3");
                if(!(return_value_strstr$15 == ((char *)NULL)))
                {
                  return_value_alloc_string$8=alloc_string("OS X Panther");
                  return return_value_alloc_string$8;
                }

                else
                {
                  return_value_strstr$14=strstr(osx, "10.2");
                  if(!(return_value_strstr$14 == ((char *)NULL)))
                  {
                    return_value_alloc_string$9=alloc_string("OS X Jaguar");
                    return return_value_alloc_string$9;
                  }

                  else
                  {
                    return_value_strstr$13=strstr(osx, "10.1");
                    if(!(return_value_strstr$13 == ((char *)NULL)))
                    {
                      return_value_alloc_string$10=alloc_string("OS X Puma");
                      return return_value_alloc_string$10;
                    }

                    else
                    {
                      return_value_strstr$12=strstr(osx, "10.0");
                      if(!(return_value_strstr$12 == ((char *)NULL)))
                      {
                        return_value_alloc_string$11=alloc_string("OS X Cheetah");
                        return return_value_alloc_string$11;
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
  }
  char *return_value_alloc_string$23;
  return_value_alloc_string$23=alloc_string(osx);
  return return_value_alloc_string$23;
}

// get_real_win
// file src/opesys.c line 134
static char * get_real_win(const char *win)
{
  char *return_value_strstr$20;
  return_value_strstr$20=strstr(win, "10.0");
  char *return_value_alloc_string$1;
  char *return_value_strstr$19;
  char *return_value_alloc_string$2;
  char *return_value_strstr$18;
  char *return_value_alloc_string$3;
  char *return_value_strstr$17;
  char *return_value_alloc_string$4;
  char *return_value_strstr$16;
  char *return_value_alloc_string$5;
  char *return_value_strstr$15;
  char *return_value_alloc_string$6;
  char *return_value_strstr$14;
  char *return_value_alloc_string$7;
  char *return_value_strstr$13;
  char *return_value_alloc_string$8;
  char *return_value_strstr$12;
  char *return_value_alloc_string$9;
  char *return_value_strstr$11;
  char *return_value_alloc_string$10;
  if(!(return_value_strstr$20 == ((char *)NULL)))
  {
    return_value_alloc_string$1=alloc_string("Windows 10");
    return return_value_alloc_string$1;
  }

  else
  {
    return_value_strstr$19=strstr(win, "6.3");
    if(!(return_value_strstr$19 == ((char *)NULL)))
    {
      return_value_alloc_string$2=alloc_string("Windows 8.1");
      return return_value_alloc_string$2;
    }

    else
    {
      return_value_strstr$18=strstr(win, "6.3; ARM");
      if(!(return_value_strstr$18 == ((char *)NULL)))
      {
        return_value_alloc_string$3=alloc_string("Windows RT");
        return return_value_alloc_string$3;
      }

      else
      {
        return_value_strstr$17=strstr(win, "6.2; ARM");
        if(!(return_value_strstr$17 == ((char *)NULL)))
        {
          return_value_alloc_string$4=alloc_string("Windows RT");
          return return_value_alloc_string$4;
        }

        else
        {
          return_value_strstr$16=strstr(win, "6.2");
          if(!(return_value_strstr$16 == ((char *)NULL)))
          {
            return_value_alloc_string$5=alloc_string("Windows 8");
            return return_value_alloc_string$5;
          }

          else
          {
            return_value_strstr$15=strstr(win, "6.1");
            if(!(return_value_strstr$15 == ((char *)NULL)))
            {
              return_value_alloc_string$6=alloc_string("Windows 7");
              return return_value_alloc_string$6;
            }

            else
            {
              return_value_strstr$14=strstr(win, "6.0");
              if(!(return_value_strstr$14 == ((char *)NULL)))
              {
                return_value_alloc_string$7=alloc_string("Windows Vista");
                return return_value_alloc_string$7;
              }

              else
              {
                return_value_strstr$13=strstr(win, "5.2");
                if(!(return_value_strstr$13 == ((char *)NULL)))
                {
                  return_value_alloc_string$8=alloc_string("Windows XP x64");
                  return return_value_alloc_string$8;
                }

                else
                {
                  return_value_strstr$12=strstr(win, "5.1");
                  if(!(return_value_strstr$12 == ((char *)NULL)))
                  {
                    return_value_alloc_string$9=alloc_string("Windows XP");
                    return return_value_alloc_string$9;
                  }

                  else
                  {
                    return_value_strstr$11=strstr(win, "5.0");
                    if(!(return_value_strstr$11 == ((char *)NULL)))
                    {
                      return_value_alloc_string$10=alloc_string("Windows 2000");
                      return return_value_alloc_string$10;
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
  return (char *)(void *)0;
}

// get_root_from_key
// file src/glibht.h line 62
char * get_root_from_key(signed int root_nkey, enum MODULES module)
{
  struct _GHashTable *ht = (struct _GHashTable *)(void *)0;
  void *value_ptr;
  void *return_value_get_storage_metric$1;
  return_value_get_storage_metric$1=get_storage_metric(module, (enum METRICS)MTRC_ROOTMAP);
  ht = (struct _GHashTable *)return_value_get_storage_metric$1;
  char *return_value_xstrdup$2;
  if(ht == ((struct _GHashTable *)NULL))
    return (char *)(void *)0;

  else
  {
    value_ptr=g_hash_table_lookup(ht, (const void *)&root_nkey);
    if(!(value_ptr == NULL))
    {
      return_value_xstrdup$2=xstrdup((char *)value_ptr);
      return return_value_xstrdup$2;
    }

    else
      return (char *)(void *)0;
  }
}

// get_selected_date_str
// file src/settings.c line 332
char * get_selected_date_str(unsigned long int idx)
{
  char *fmt = (char *)(void *)0;
  switch(idx)
  {
    case (unsigned long int)2:

    case (unsigned long int)3:

    case (unsigned long int)0:

    case (unsigned long int)1:
    {
      fmt=alloc_string(dates.apache);
      break;
    }
    case (unsigned long int)7:

    case (unsigned long int)5:

    case (unsigned long int)4:
    {
      fmt=alloc_string(dates.w3c);
      break;
    }
    case (unsigned long int)6:
      fmt=alloc_string(dates.usec);
  }
  return fmt;
}

// get_selected_format_idx
// file src/settings.c line 272
unsigned long int get_selected_format_idx(void)
{
  signed int return_value_strcmp$7;
  signed int return_value_strcmp$6;
  signed int return_value_strcmp$5;
  signed int return_value_strcmp$4;
  signed int return_value_strcmp$3;
  signed int return_value_strcmp$2;
  signed int return_value_strcmp$1;
  if(conf.log_format == ((char *)NULL))
    return (unsigned long int)-1;

  else
  {
    signed int return_value_strcmp$8;
    return_value_strcmp$8=strcmp(conf.log_format, logs.common);
    if(return_value_strcmp$8 == 0)
      return (unsigned long int)2;

    else
    {
      return_value_strcmp$7=strcmp(conf.log_format, logs.vcommon);
      if(return_value_strcmp$7 == 0)
        return (unsigned long int)3;

      else
      {
        return_value_strcmp$6=strcmp(conf.log_format, logs.combined);
        if(return_value_strcmp$6 == 0)
          return (unsigned long int)0;

        else
        {
          return_value_strcmp$5=strcmp(conf.log_format, logs.vcombined);
          if(return_value_strcmp$5 == 0)
            return (unsigned long int)1;

          else
          {
            return_value_strcmp$4=strcmp(conf.log_format, logs.w3c);
            if(return_value_strcmp$4 == 0)
              return (unsigned long int)4;

            else
            {
              return_value_strcmp$3=strcmp(conf.log_format, logs.cloudfront);
              if(return_value_strcmp$3 == 0)
                return (unsigned long int)5;

              else
              {
                return_value_strcmp$2=strcmp(conf.log_format, logs.cloudstorage);
                if(return_value_strcmp$2 == 0)
                  return (unsigned long int)6;

                else
                {
                  return_value_strcmp$1=strcmp(conf.log_format, logs.awselb);
                  if(return_value_strcmp$1 == 0)
                    return (unsigned long int)7;

                  else
                    return (unsigned long int)-1;
                }
              }
            }
          }
        }
      }
    }
  }
}

// get_selected_format_str
// file src/settings.c line 298
char * get_selected_format_str(unsigned long int idx)
{
  char *fmt = (char *)(void *)0;
  switch(idx)
  {
    case (unsigned long int)2:
    {
      fmt=alloc_string(logs.common);
      break;
    }
    case (unsigned long int)3:
    {
      fmt=alloc_string(logs.vcommon);
      break;
    }
    case (unsigned long int)0:
    {
      fmt=alloc_string(logs.combined);
      break;
    }
    case (unsigned long int)1:
    {
      fmt=alloc_string(logs.vcombined);
      break;
    }
    case (unsigned long int)4:
    {
      fmt=alloc_string(logs.w3c);
      break;
    }
    case (unsigned long int)5:
    {
      fmt=alloc_string(logs.cloudfront);
      break;
    }
    case (unsigned long int)6:
    {
      fmt=alloc_string(logs.cloudstorage);
      break;
    }
    case (unsigned long int)7:
      fmt=alloc_string(logs.awselb);
  }
  return fmt;
}

// get_selected_time_str
// file src/settings.c line 356
char * get_selected_time_str(unsigned long int idx)
{
  char *fmt = (char *)(void *)0;
  switch(idx)
  {
    case (unsigned long int)7:

    case (unsigned long int)5:

    case (unsigned long int)0:

    case (unsigned long int)2:

    case (unsigned long int)1:

    case (unsigned long int)3:

    case (unsigned long int)4:
    {
      fmt=alloc_string(times.fmt24);
      break;
    }
    case (unsigned long int)6:
      fmt=alloc_string(times.usec);
  }
  return fmt;
}

// get_sort_field_enum
// file src/sort.c line 319
signed int get_sort_field_enum(const char *str)
{
  signed int return_value_str2enum$1;
  return_value_str2enum$1=str2enum(FIELD, (signed int)(sizeof(struct GEnum_ [9l]) /*144ul*/  / sizeof(struct GEnum_) /*16ul*/ ), str);
  return return_value_str2enum$1;
}

// get_sort_order_enum
// file src/sort.c line 325
signed int get_sort_order_enum(const char *str)
{
  signed int return_value_str2enum$1;
  return_value_str2enum$1=str2enum(ORDER, (signed int)(sizeof(struct GEnum_ [2l]) /*32ul*/  / sizeof(struct GEnum_) /*16ul*/ ), str);
  return return_value_str2enum$1;
}

// get_storage_metric
// file src/gstorage.h line 140
void * get_storage_metric(enum MODULES module, enum METRICS metric)
{
  void *return_value_get_storage_metric_by_module$1;
  return_value_get_storage_metric_by_module$1=get_storage_metric_by_module(module, metric);
  return return_value_get_storage_metric_by_module$1;
}

// get_storage_metric_by_module
// file src/gstorage.c line 98
void * get_storage_metric_by_module(enum MODULES module, enum METRICS metric)
{
  void *ht;
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  switch((signed int)metric)
  {
    case MTRC_KEYMAP:
    {
      ht = metrics->keymap;
      break;
    }
    case MTRC_ROOTMAP:
    {
      ht = metrics->rootmap;
      break;
    }
    case MTRC_DATAMAP:
    {
      ht = metrics->datamap;
      break;
    }
    case MTRC_UNIQMAP:
    {
      ht = metrics->uniqmap;
      break;
    }
    case MTRC_HITS:
    {
      ht = metrics->hits;
      break;
    }
    case MTRC_VISITORS:
    {
      ht = metrics->visitors;
      break;
    }
    case MTRC_BW:
    {
      ht = metrics->bw;
      break;
    }
    case MTRC_CUMTS:
    {
      ht = metrics->cumts;
      break;
    }
    case MTRC_MAXTS:
    {
      ht = metrics->maxts;
      break;
    }
    case MTRC_METHODS:
    {
      ht = metrics->methods;
      break;
    }
    case MTRC_PROTOCOLS:
    {
      ht = metrics->protocols;
      break;
    }
    case MTRC_AGENTS:
    {
      ht = metrics->agents;
      break;
    }
    default:
      ht = (void *)0;
  }
  return ht;
}

// get_storage_metrics_by_module
// file src/gstorage.c line 76
struct GStorageMetrics_ * get_storage_metrics_by_module(enum MODULES module)
{
  return (ht_storage + (signed long int)module)->metrics;
}

// get_str_bandwidth
// file src/ui.c line 444
static char * get_str_bandwidth(struct GLog_ *logger)
{
  char *return_value_filesize_str$1;
  return_value_filesize_str$1=filesize_str((unsigned long long int)(float)logger->resp_size);
  return return_value_filesize_str$1;
}

// get_str_excluded_ips
// file src/ui.c line 366
static char * get_str_excluded_ips(struct GLog_ *logger)
{
  char *return_value_int2str$1;
  return_value_int2str$1=int2str((signed int)logger->excluded_ip, 0);
  return return_value_int2str$1;
}

// get_str_failed_reqs
// file src/ui.c line 372
static char * get_str_failed_reqs(struct GLog_ *logger)
{
  char *return_value_int2str$1;
  return_value_int2str$1=int2str((signed int)logger->invalid, 0);
  return return_value_int2str$1;
}

// get_str_filesize
// file src/ui.c line 426
static char * get_str_filesize(struct GLog_ *logger, const char *ifile)
{
  signed long int return_value_file_size$1;
  char *return_value_filesize_str$2;
  char *return_value_alloc_string$3;
  if(logger->piping == 0 && !(ifile == ((const char *)NULL)))
  {
    return_value_file_size$1=file_size(ifile);
    return_value_filesize_str$2=filesize_str((unsigned long long int)return_value_file_size$1);
    return return_value_filesize_str$2;
  }

  else
  {
    return_value_alloc_string$3=alloc_string("N/A");
    return return_value_alloc_string$3;
  }
}

// get_str_from_int_key
// file src/glibht.c line 439
char * get_str_from_int_key(struct _GHashTable *ht, signed int nkey)
{
  void *value_ptr;
  char *return_value_xstrdup$1;
  if(ht == ((struct _GHashTable *)NULL))
    return (char *)(void *)0;

  else
  {
    value_ptr=g_hash_table_lookup(ht, (const void *)&nkey);
    if(!(value_ptr == NULL))
    {
      return_value_xstrdup$1=xstrdup((char *)value_ptr);
      return return_value_xstrdup$1;
    }

    else
      return (char *)(void *)0;
  }
}

// get_str_logfile
// file src/ui.c line 435
static char * get_str_logfile(struct GLog_ *logger, const char *ifile)
{
  char *return_value_alloc_string$1;
  char *return_value_alloc_string$2;
  if(logger->piping == 0 && !(ifile == ((const char *)NULL)))
  {
    return_value_alloc_string$1=alloc_string(ifile);
    return return_value_alloc_string$1;
  }

  else
  {
    return_value_alloc_string$2=alloc_string("STDIN");
    return return_value_alloc_string$2;
  }
}

// get_str_notfound_reqs
// file src/ui.c line 390
static char * get_str_notfound_reqs(void)
{
  unsigned int return_value_get_ht_size_by_metric$1;
  return_value_get_ht_size_by_metric$1=get_ht_size_by_metric((enum MODULES)NOT_FOUND, (enum METRICS)MTRC_DATAMAP);
  char *return_value_int2str$2;
  return_value_int2str$2=int2str((signed int)return_value_get_ht_size_by_metric$1, 0);
  return return_value_int2str$2;
}

// get_str_processed_reqs
// file src/ui.c line 378
static char * get_str_processed_reqs(struct GLog_ *logger)
{
  char *return_value_int2str$1;
  return_value_int2str$1=int2str((signed int)logger->processed, 0);
  return return_value_int2str$1;
}

// get_str_proctime
// file src/ui.c line 420
static char * get_str_proctime(void)
{
  char *return_value_int2str$1;
  return_value_int2str$1=int2str((signed int)((signed long long int)end_proc - start_proc), 0);
  return return_value_int2str$1;
}

// get_str_ref_reqs
// file src/ui.c line 396
static char * get_str_ref_reqs(void)
{
  unsigned int return_value_get_ht_size_by_metric$1;
  return_value_get_ht_size_by_metric$1=get_ht_size_by_metric((enum MODULES)REFERRERS, (enum METRICS)MTRC_DATAMAP);
  char *return_value_int2str$2;
  return_value_int2str$2=int2str((signed int)return_value_get_ht_size_by_metric$1, 0);
  return return_value_int2str$2;
}

// get_str_reqs
// file src/ui.c line 402
static char * get_str_reqs(void)
{
  unsigned int return_value_get_ht_size_by_metric$1;
  return_value_get_ht_size_by_metric$1=get_ht_size_by_metric((enum MODULES)REQUESTS, (enum METRICS)MTRC_DATAMAP);
  char *return_value_int2str$2;
  return_value_int2str$2=int2str((signed int)return_value_get_ht_size_by_metric$1, 0);
  return return_value_int2str$2;
}

// get_str_static_reqs
// file src/ui.c line 408
static char * get_str_static_reqs(void)
{
  unsigned int return_value_get_ht_size_by_metric$1;
  return_value_get_ht_size_by_metric$1=get_ht_size_by_metric((enum MODULES)REQUESTS_STATIC, (enum METRICS)MTRC_DATAMAP);
  char *return_value_int2str$2;
  return_value_int2str$2=int2str((signed int)return_value_get_ht_size_by_metric$1, 0);
  return return_value_int2str$2;
}

// get_str_valid_reqs
// file src/ui.c line 384
static char * get_str_valid_reqs(struct GLog_ *logger)
{
  char *return_value_int2str$1;
  return_value_int2str$1=int2str((signed int)logger->valid, 0);
  return return_value_int2str$1;
}

// get_str_visitors
// file src/ui.c line 414
static char * get_str_visitors(void)
{
  unsigned int return_value_get_ht_size_by_metric$1;
  return_value_get_ht_size_by_metric$1=get_ht_size_by_metric((enum MODULES)VISITORS, (enum METRICS)MTRC_UNIQMAP);
  char *return_value_int2str$2;
  return_value_int2str$2=int2str((signed int)return_value_get_ht_size_by_metric$1, 0);
  return return_value_int2str$2;
}

// get_uint_from_str_key
// file src/glibht.c line 424
unsigned int get_uint_from_str_key(struct _GHashTable *ht, const char *key)
{
  void *value_ptr;
  if(ht == ((struct _GHashTable *)NULL))
    return (unsigned int)22;

  else
  {
    value_ptr=g_hash_table_lookup(ht, (const void *)key);
    if(!(value_ptr == NULL))
      return *((unsigned int *)value_ptr);

    else
      return (unsigned int)0;
  }
}

// get_uniq_visitor_key
// file src/parser.c line 1274
static char * get_uniq_visitor_key(struct GLogItem_ *glog)
{
  char *ua;
  char *key;
  unsigned long int s1;
  unsigned long int s2;
  unsigned long int s3;
  char *return_value_xstrdup$1;
  return_value_xstrdup$1=xstrdup(glog->agent);
  ua=deblank(return_value_xstrdup$1);
  s1=strlen(glog->host);
  s2=strlen(glog->date);
  s3=strlen(ua);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc(s1 + s2 + s3 + (unsigned long int)3);
  key = (char *)return_value_xmalloc$2;
  memcpy((void *)key, (const void *)glog->host, s1);
  key[(signed long int)s1] = (char)124;
  memcpy((void *)(key + (signed long int)s1 + (signed long int)1), (const void *)glog->date, s2 + (unsigned long int)1);
  key[(signed long int)(s1 + s2 + (unsigned long int)1)] = (char)124;
  memcpy((void *)(key + (signed long int)s1 + (signed long int)s2 + (signed long int)2), (const void *)ua, s3 + (unsigned long int)1);
  free((void *)ua);
  return key;
}

// get_visitors_date
// file src/gdashboard.c line 569
static void get_visitors_date(char *buf, const char *value)
{
  signed int return_value_convert_date$1;
  return_value_convert_date$1=convert_date(buf, (char *)value, "%Y%m%d", "%d/%b/%Y", 12);
  if(!(return_value_convert_date$1 == 0))
  {

  __CPROVER_DUMP_L1:
    ;
    xstrncpy(buf, "---", (const unsigned long int)4);
  }

}

// gmenu_driver
// file src/gmenu.c line 102
void gmenu_driver(struct GMenu_$0 *menu, signed int c)
{
  signed int i;
  switch(c)
  {
    case 0:
    {
      if(menu->idx >= menu->size + -1)
        break;

      menu->idx = menu->idx + 1;
      if(menu->idx >= menu->h)
      {
        if(menu->idx >= menu->h + menu->start)
          menu->start = menu->start + 1;

      }

      post_gmenu(menu);
      break;
    }
    case 1:
    {
      if(!(menu->idx >= 1))
        break;

      menu->idx = menu->idx - 1;
      if(!(menu->idx >= menu->start))
        menu->start = menu->start - 1;

      post_gmenu(menu);
      break;
    }
    case 2:
    {
      if(menu->multiple == 0)
      {
        i = 0;
        for( ; !(i >= menu->size); i = i + 1)
          (menu->items + (signed long int)i)->checked = 0;
      }

      if(!((menu->items + (signed long int)menu->idx)->checked == 0))
        (menu->items + (signed long int)menu->idx)->checked = 0;

      else
        (menu->items + (signed long int)menu->idx)->checked = 1;
      post_gmenu(menu);
    }
  }
}

// gqueue_dequeue
// file src/gdns.c line 129
char * gqueue_dequeue(struct GDnsQueue_ *q)
{
  char *item;
  signed int return_value_gqueue_empty$1;
  return_value_gqueue_empty$1=gqueue_empty(q);
  if(!(return_value_gqueue_empty$1 == 0))
    return (char *)(void *)0;

  else
  {
    item = q->buffer[(signed long int)q->head];
    q->head = (q->head + 1) % q->capacity;
    q->size = q->size - 1;
    return item;
  }
}

// gqueue_destroy
// file src/gdns.c line 95
void gqueue_destroy(struct GDnsQueue_ *q)
{
  free((void *)q);
}

// gqueue_empty
// file src/gdns.c line 81
signed int gqueue_empty(struct GDnsQueue_ *q)
{
  return (signed int)(q->size == 0);
}

// gqueue_enqueue
// file src/gdns.c line 102
signed int gqueue_enqueue(struct GDnsQueue_ *q, char *item)
{
  signed int return_value_gqueue_full$1;
  return_value_gqueue_full$1=gqueue_full(q);
  if(!(return_value_gqueue_full$1 == 0))
    return -1;

  else
  {
    q->tail = (q->tail + 1) % q->capacity;
    strcpy(q->buffer[(signed long int)q->tail], item);
    q->size = q->size + 1;
    return 0;
  }
}

// gqueue_find
// file src/gdns.c line 114
signed int gqueue_find(struct GDnsQueue_ *q, const char *item)
{
  signed int i;
  signed int return_value_gqueue_empty$1;
  return_value_gqueue_empty$1=gqueue_empty(q);
  if(!(return_value_gqueue_empty$1 == 0))
    return 0;

  else
  {
    i = 0;
    for( ; !(i >= q->size); i = i + 1)
    {
      signed int return_value_strcmp$2;
      return_value_strcmp$2=strcmp(item, q->buffer[(signed long int)i]);
      if(return_value_strcmp$2 == 0)
        return 1;

    }
    return 0;
  }
}

// gqueue_full
// file src/gdns.c line 88
signed int gqueue_full(struct GDnsQueue_ *q)
{
  return (signed int)(q->size == q->capacity);
}

// gqueue_init
// file src/gdns.c line 64
void gqueue_init(struct GDnsQueue_ *q, signed int capacity)
{
  q->head = 0;
  q->tail = -1;
  q->size = 0;
  q->capacity = capacity;
}

// gqueue_size
// file src/gdns.c line 74
signed int gqueue_size(struct GDnsQueue_ *q)
{
  return q->size;
}

// has_timestamp
// file src/commons.c line 228
signed int has_timestamp(const char *fmt)
{
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp("%s", fmt);
  if(return_value_strcmp$1 == 0)
    return 1;

  else
    return 0;
}

// house_keeping
// file src/goaccess.c line 102
static void house_keeping(void)
{
  if(!(conf.list_agents == 0))
    free_agent_list();

  pthread_mutex_lock(&gdns_thread.mutex);
  active_gdns = 0;
  free_holder(&holder);
  gdns_free_queue();
  free_storage();
  pthread_mutex_unlock(&gdns_thread.mutex);
  if(conf.output_html == 0 && !(dash == ((struct GDash_ *)NULL)))
  {
    free_dashboard(dash);
    reset_find();
  }

  if(!(geo_location_data == ((struct GeoIPTag *)NULL)))
    GeoIP_delete(geo_location_data);

  free((void *)logger);
  if(!(conf.invalid_requests_log == ((char *)NULL)))
  {

  __CPROVER_DUMP_L4:
    ;
    invalid_log_close();
  }

  if(!(conf.debug_log == ((char *)NULL)))
  {

  __CPROVER_DUMP_L6:
    ;
    dbg_log_close();
  }

  free_color_lists();
  free_cmd_args();
}

// ht_inc_int_from_int_key
// file src/glibht.h line 44
signed int ht_inc_int_from_int_key(struct _GHashTable *ht, signed int data_nkey, signed int inc)
{
  signed int ret;
  signed int *key;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    key=int2ptr(data_nkey);
    ret=ht_inc_int_from_key(ht, (void *)key, inc);
    if(!(ret == 0))
      free((void *)key);

    return ret;
  }
}

// ht_inc_int_from_key
// file src/glibht.c line 275
static signed int ht_inc_int_from_key(struct _GHashTable *ht, void *key, signed int inc)
{
  void *value_ptr;
  signed int add_value;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    value_ptr=g_hash_table_lookup(ht, key);
    if(!(value_ptr == NULL))
      add_value = *((signed int *)value_ptr) + inc;

    else
      add_value = 0 + inc;
    signed int *return_value_int2ptr$1;
    return_value_int2ptr$1=int2ptr(add_value);
    g_hash_table_replace(ht, key, (void *)return_value_int2ptr$1);
    return 0;
  }
}

// ht_inc_int_from_str_key
// file src/glibht.c line 367
signed int ht_inc_int_from_str_key(struct _GHashTable *ht, char *key, signed int inc)
{
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    signed int return_value_ht_inc_int_from_key$1;
    return_value_ht_inc_int_from_key$1=ht_inc_int_from_key(ht, (void *)key, inc);
    return return_value_ht_inc_int_from_key$1;
  }
}

// ht_inc_u64_from_int_key
// file src/glibht.h line 46
signed int ht_inc_u64_from_int_key(struct _GHashTable *ht, signed int data_nkey, unsigned long int inc)
{
  signed int ret;
  signed int *key;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    key=int2ptr(data_nkey);
    ret=ht_inc_u64_from_key(ht, (void *)key, inc);
    if(!(ret == 0))
      free((void *)key);

    return ret;
  }
}

// ht_inc_u64_from_key
// file src/glibht.c line 295
static signed int ht_inc_u64_from_key(struct _GHashTable *ht, void *key, unsigned long int inc)
{
  void *value_ptr;
  unsigned long int add_value;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    value_ptr=g_hash_table_lookup(ht, key);
    if(!(value_ptr == NULL))
      add_value = *((unsigned long int *)value_ptr) + inc;

    else
      add_value = (unsigned long int)0 + inc;
    unsigned long int *return_value_uint642ptr$1;
    return_value_uint642ptr$1=uint642ptr(add_value);
    g_hash_table_replace(ht, key, (void *)return_value_uint642ptr$1);
    return 0;
  }
}

// ht_insert_agent_key
// file src/glibht.h line 48
signed int ht_insert_agent_key(const char *key)
{
  signed int return_value_ht_insert_keymap$1;
  return_value_ht_insert_keymap$1=ht_insert_keymap(ht_agent_keys, key);
  return return_value_ht_insert_keymap$1;
}

// ht_insert_agent_val
// file src/glibht.h line 49
signed int ht_insert_agent_val(signed int nkey, const char *key)
{
  signed int return_value_ht_insert_str_from_int_key$1;
  return_value_ht_insert_str_from_int_key$1=ht_insert_str_from_int_key(ht_agent_vals, nkey, key);
  return return_value_ht_insert_str_from_int_key$1;
}

// ht_insert_hit
// file src/glibht.h line 50
signed int ht_insert_hit(struct _GHashTable *ht, signed int data_nkey, signed int uniq_nkey, signed int root_nkey)
{
  struct GDataMap_ *map;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    void *return_value_g_hash_table_lookup$1;
    return_value_g_hash_table_lookup$1=g_hash_table_lookup(ht, (const void *)&data_nkey);
    map = (struct GDataMap_ *)return_value_g_hash_table_lookup$1;
    if(!(map == ((struct GDataMap_ *)NULL)))
      map->data = map->data + 1;

    else
    {
      void *return_value_xcalloc$2;
      return_value_xcalloc$2=xcalloc((unsigned long int)1, sizeof(struct GDataMap_) /*12ul*/ );
      map = (struct GDataMap_ *)return_value_xcalloc$2;
      map->data = 1;
      map->root = root_nkey;
      map->uniq = uniq_nkey;
    }
    signed int *return_value_int2ptr$3;
    return_value_int2ptr$3=int2ptr(data_nkey);
    g_hash_table_replace(ht, (void *)return_value_int2ptr$3, (void *)map);
    return 0;
  }
}

// ht_insert_host_agent
// file src/glibht.h line 51
signed int ht_insert_host_agent(struct _GHashTable *ht, signed int data_nkey, signed int agent_nkey)
{
  struct GSLList_ *list;
  struct GSLList_ *match;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    void *return_value_g_hash_table_lookup$1;
    return_value_g_hash_table_lookup$1=g_hash_table_lookup(ht, (const void *)&data_nkey);
    list = (struct GSLList_ *)return_value_g_hash_table_lookup$1;
    if(!(list == ((struct GSLList_ *)NULL)))
    {
      match=list_find(list, find_host_agent_in_list, (void *)&agent_nkey);
      if(!(match == ((struct GSLList_ *)NULL)))
        goto out;

      signed int *return_value_int2ptr$2;
      return_value_int2ptr$2=int2ptr(agent_nkey);
      list=list_insert_prepend(list, (void *)return_value_int2ptr$2);
    }

    else
    {
      signed int *return_value_int2ptr$3;
      return_value_int2ptr$3=int2ptr(agent_nkey);
      list=list_create((void *)return_value_int2ptr$3);
    }
    signed int *return_value_int2ptr$4;
    return_value_int2ptr$4=int2ptr(data_nkey);
    g_hash_table_replace(ht, (void *)return_value_int2ptr$4, (void *)list);

  out:
    ;
    return 0;
  }
}

// ht_insert_keymap
// file src/glibht.h line 52
signed int ht_insert_keymap(struct _GHashTable *ht, const char *value)
{
  void *value_ptr;
  signed int nkey = 0;
  signed int size = 0;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    value_ptr=g_hash_table_lookup(ht, (const void *)value);
    if(!(value_ptr == NULL))
      return *((signed int *)value_ptr);

    else
    {
      unsigned int return_value_get_ht_size$1;
      return_value_get_ht_size$1=get_ht_size(ht);
      size = (signed int)return_value_get_ht_size$1;
      nkey = size > 0 ? size + 1 : 1;
      char *return_value_g_strdup$2;
      return_value_g_strdup$2=g_strdup(value);
      signed int *return_value_int2ptr$3;
      return_value_int2ptr$3=int2ptr(nkey);
      g_hash_table_replace(ht, (void *)return_value_g_strdup$2, (void *)return_value_int2ptr$3);
      return nkey;
    }
  }
}

// ht_insert_nkey_nval
// file src/glibht.c line 199
signed int ht_insert_nkey_nval(struct _GHashTable *ht, signed int nkey, signed int nval)
{
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    void *return_value_g_hash_table_lookup$1;
    return_value_g_hash_table_lookup$1=g_hash_table_lookup(ht, (const void *)&nkey);
    if(!(return_value_g_hash_table_lookup$1 == NULL))
      return 1;

    else
    {
      signed int *return_value_int2ptr$2;
      return_value_int2ptr$2=int2ptr(nkey);
      signed int *return_value_int2ptr$3;
      return_value_int2ptr$3=int2ptr(nval);
      g_hash_table_replace(ht, (void *)return_value_int2ptr$2, (void *)return_value_int2ptr$3);
      return 0;
    }
  }
}

// ht_insert_str_from_int_key
// file src/glibht.h line 54
signed int ht_insert_str_from_int_key(struct _GHashTable *ht, signed int nkey, const char *value)
{
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    signed int *return_value_int2ptr$1;
    return_value_int2ptr$1=int2ptr(nkey);
    char *return_value_g_strdup$2;
    return_value_g_strdup$2=g_strdup(value);
    g_hash_table_replace(ht, (void *)return_value_int2ptr$1, (void *)return_value_g_strdup$2);
    return 0;
  }
}

// ht_insert_uniqmap
// file src/glibht.h line 55
signed int ht_insert_uniqmap(struct _GHashTable *ht, char *uniq_key)
{
  signed int nkey = 0;
  signed int size = 0;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    void *return_value_g_hash_table_lookup$1;
    return_value_g_hash_table_lookup$1=g_hash_table_lookup(ht, (const void *)uniq_key);
    if(!(return_value_g_hash_table_lookup$1 == NULL))
      return 0;

    else
    {
      unsigned int return_value_get_ht_size$2;
      return_value_get_ht_size$2=get_ht_size(ht);
      size = (signed int)return_value_get_ht_size$2;
      nkey = size > 0 ? size + 1 : 1;
      signed int *return_value_int2ptr$3;
      return_value_int2ptr$3=int2ptr(nkey);
      g_hash_table_replace(ht, (void *)uniq_key, (void *)return_value_int2ptr$3);
      return nkey;
    }
  }
}

// ht_insert_unique_key
// file src/glibht.h line 56
signed int ht_insert_unique_key(const char *key)
{
  signed int return_value_ht_insert_keymap$1;
  return_value_ht_insert_keymap$1=ht_insert_keymap(ht_unique_keys, key);
  return return_value_ht_insert_keymap$1;
}

// ht_max_u64_from_int_key
// file src/glibht.h line 57
signed int ht_max_u64_from_int_key(struct _GHashTable *ht, signed int data_nkey, unsigned long int newval)
{
  void *value_ptr;
  signed int *key;
  unsigned long int curval = (unsigned long int)0;
  if(ht == ((struct _GHashTable *)NULL))
    return 22;

  else
  {
    key=int2ptr(data_nkey);
    value_ptr=g_hash_table_lookup(ht, (const void *)key);
    if(!(value_ptr == NULL))
      curval = *((unsigned long int *)value_ptr);

    if(!(curval >= newval))
    {
      unsigned long int *return_value_uint642ptr$1;
      return_value_uint642ptr$1=uint642ptr(newval);
      g_hash_table_replace(ht, (void *)key, (void *)return_value_uint642ptr$1);
    }

    else
      free((void *)key);
    return 0;
  }
}

// ignore_panel
// file src/settings.h line 154
signed int ignore_panel(enum MODULES mod)
{
  signed int i;
  signed int module;
  char *view;
  i = 0;
  for( ; !(i >= conf.ignore_panel_idx); i = i + 1)
  {
    view = conf.ignore_panels[(signed long int)i];
    module=get_module_enum(view);
    if(!(module == -1))
    {
      if((unsigned int)mod == (unsigned int)module)
        return 1;

    }

  }
  return 0;
}

// ignore_referer
// file src/util.h line 68
signed int ignore_referer(const char *host)
{
  char *needle = (char *)(void *)0;
  signed int i;
  signed int ignore = 0;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  if(conf.ignore_referer_idx == 0)
    return 0;

  else
  {
    if(host == ((const char *)NULL))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)*host == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      return 0;

    else
    {
      needle=xstrdup(host);
      i = 0;
      for( ; !(i >= conf.ignore_referer_idx); i = i + 1)
      {
        if(conf.ignore_referers[(signed long int)i] == ((char *)NULL))
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = (signed int)*conf.ignore_referers[(signed long int)i] == 0 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$2)
        {
          signed int return_value_wc_match$3;
          return_value_wc_match$3=wc_match(conf.ignore_referers[(signed long int)i], needle);
          if(!(return_value_wc_match$3 == 0))
          {
            ignore = 1;
            break;
          }

        }

      }

    out:
      ;
      free((void *)needle);
      return ignore;
    }
  }
}

// in_ignore_cmd_opts
// file src/settings.c line 72
static signed int in_ignore_cmd_opts(const char *val)
{
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= 3ul); i = i + 1ul)
  {
    char *return_value_strstr$1;
    return_value_strstr$1=strstr(val, ignore_cmd_opts[(signed long int)i]);
    if(!(return_value_strstr$1 == ((char *)NULL)))
      return 1;

  }
  return 0;
}

// inc_resp_size
// file src/parser.c line 1070
static void inc_resp_size(struct GLog_ *logger, unsigned long int resp_size)
{
  logger->resp_size = logger->resp_size + resp_size;
}

// include_uniq
// file src/parser.c line 1590
static signed int include_uniq(struct GLogItem_ *glog)
{
  signed int u = conf.client_err_to_unique_count;
  _Bool tmp_if_expr$1;
  if(glog->status == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)glog->status[(signed long int)0] != 52 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    if(!(u == 0))
      tmp_if_expr$2 = (signed int)glog->status[(signed long int)0] == 52 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$3)
    return 1;

  else
    return 0;
}

// init_colors
// file src/ui.h line 309
void init_colors(signed int force)
{
  use_default_colors();
  set_normal_color();
  set_colors(force);
}

// init_geoip
// file src/goaccess.c line 876
static void init_geoip(void)
{
  if(!(conf.geoip_database == ((char *)NULL)))
    geo_location_data=geoip_open_db(conf.geoip_database);

  else
    geo_location_data=GeoIP_new(conf.geo_db);
}

// init_log
// file src/parser.h line 131
struct GLog_ * init_log(void)
{
  struct GLog_ *glog;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GLog_) /*48ul*/ );
  glog = (struct GLog_ *)return_value_xmalloc$1;
  memset((void *)glog, 0, sizeof(struct GLog_) /*48ul*/ );
  return glog;
}

// init_log_item
// file src/parser.c line 364
struct GLogItem_ * init_log_item(struct GLog_ *logger)
{
  struct GLogItem_ *glog;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GLogItem_) /*704ul*/ );
  logger->items = (struct GLogItem_ *)return_value_xmalloc$1;
  glog = logger->items;
  memset((void *)glog, 0, sizeof(struct GLogItem_) /*704ul*/ );
  glog->agent = (char *)(void *)0;
  glog->browser = (char *)(void *)0;
  glog->browser_type = (char *)(void *)0;
  glog->continent = (char *)(void *)0;
  glog->country = (char *)(void *)0;
  glog->date = (char *)(void *)0;
  glog->host = (char *)(void *)0;
  glog->keyphrase = (char *)(void *)0;
  glog->method = (char *)(void *)0;
  glog->os = (char *)(void *)0;
  glog->os_type = (char *)(void *)0;
  glog->protocol = (char *)(void *)0;
  glog->qstr = (char *)(void *)0;
  glog->ref = (char *)(void *)0;
  glog->req_key = (char *)(void *)0;
  glog->req = (char *)(void *)0;
  glog->status = (char *)(void *)0;
  glog->time = (char *)(void *)0;
  glog->uniq_key = (char *)(void *)0;
  glog->resp_size = (unsigned long int)0LL;
  glog->serve_time = (unsigned long int)0;
  strncpy(glog->site, "", (unsigned long int)512);
  glog->site[(signed long int)(512 - 1)] = (char)0;
  return glog;
}

// init_storage
// file src/glibht.h line 72
void init_storage(void)
{
  enum MODULES module;
  ht_agent_keys=new_str_ht(g_free, g_free);
  ht_agent_vals=new_str_ht(g_free, g_free);
  ht_hostnames=new_str_ht(g_free, g_free);
  ht_unique_keys=new_str_ht(g_free, g_free);
  ht_storage=new_gstorage((unsigned int)13);
  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
    init_tables(module);
}

// init_tables
// file src/glibht.c line 69
static void init_tables(enum MODULES module)
{
  (ht_storage + (signed long int)module)->module = module;
  (ht_storage + (signed long int)module)->metrics=new_ht_metrics();
  struct _GHashTable *return_value_new_str_ht$1;
  return_value_new_str_ht$1=new_str_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->keymap = (void *)return_value_new_str_ht$1;
  struct _GHashTable *return_value_new_int_ht$2;
  return_value_new_int_ht$2=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->datamap = (void *)return_value_new_int_ht$2;
  struct _GHashTable *return_value_new_int_ht$3;
  return_value_new_int_ht$3=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->rootmap = (void *)return_value_new_int_ht$3;
  struct _GHashTable *return_value_new_str_ht$4;
  return_value_new_str_ht$4=new_str_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->uniqmap = (void *)return_value_new_str_ht$4;
  struct _GHashTable *return_value_new_int_ht$5;
  return_value_new_int_ht$5=new_int_ht(g_free, (void (*)(void *))(void *)0);
  (ht_storage + (signed long int)module)->metrics->hits = (void *)return_value_new_int_ht$5;
  struct _GHashTable *return_value_new_int_ht$6;
  return_value_new_int_ht$6=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->visitors = (void *)return_value_new_int_ht$6;
  struct _GHashTable *return_value_new_int_ht$7;
  return_value_new_int_ht$7=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->bw = (void *)return_value_new_int_ht$7;
  struct _GHashTable *return_value_new_int_ht$8;
  return_value_new_int_ht$8=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->cumts = (void *)return_value_new_int_ht$8;
  struct _GHashTable *return_value_new_int_ht$9;
  return_value_new_int_ht$9=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->maxts = (void *)return_value_new_int_ht$9;
  struct _GHashTable *return_value_new_int_ht$10;
  return_value_new_int_ht$10=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->methods = (void *)return_value_new_int_ht$10;
  struct _GHashTable *return_value_new_int_ht$11;
  return_value_new_int_ht$11=new_int_ht(g_free, g_free);
  (ht_storage + (signed long int)module)->metrics->protocols = (void *)return_value_new_int_ht$11;
  struct _GHashTable *return_value_new_int_ht$12;
  return_value_new_int_ht$12=new_int_ht(g_free, (void (*)(void *))(void *)0);
  (ht_storage + (signed long int)module)->metrics->agents = (void *)return_value_new_int_ht$12;
}

// init_windows
// file src/ui.h line 310
void init_windows(struct _win_st **header_win, struct _win_st **main_win)
{
  struct GColors_ *color;
  color=get_color((enum CSTM_COLORS)COLOR_BG);
  signed int row = 0;
  signed int col = 0;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  row = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  col = tmp_if_expr$2;
  if(!(col >= 0) || !(row >= 8))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:44");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/ui.c", (const void *)"init_windows", 176);
      fprintf(stderr, "Minimum screen size - 0 columns by 7 lines");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L6:
      ;
      exit(1);
    }
    while((_Bool)0);

  *header_win=newwin(6, col, 0, 0);
  keypad(*header_win, (_Bool)1);
  if(*header_win == ((struct _win_st *)NULL))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:44");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/ui.c", (const void *)"init_windows", 182);
      fprintf(stderr, "Unable to allocate memory for header_win.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L9:
      ;
      exit(1);
    }
    while((_Bool)0);

  *main_win=newwin(row - 8, col, 7, 0);
  keypad(*main_win, (_Bool)1);
  if(*main_win == ((struct _win_st *)NULL))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:44");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/ui.c", (const void *)"init_windows", 188);
      fprintf(stderr, "Unable to allocate memory for main_win.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L12:
      ;
      exit(1);
    }
    while((_Bool)0);

  wbkgd(*main_win, (unsigned long int)color->pair->idx << 0 + 8);
  wbkgd(*header_win, (unsigned long int)color->pair->idx << 0 + 8);
  wbkgd(stdscr, (unsigned long int)color->pair->idx << 0 + 8);
}

// input_string
// file src/ui.c line 542
char * input_string(struct _win_st *win, signed int pos_y, signed int pos_x, unsigned long int max_width, const char *str, signed int enable_case, signed int *toggle_case)
{
  char *s;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(max_width + (unsigned long int)1);
  s = (char *)return_value_xmalloc$1;
  char *tmp;
  unsigned long int i;
  unsigned long int c;
  unsigned long int pos = (unsigned long int)0;
  unsigned long int x = (unsigned long int)0;
  unsigned long int quit = (unsigned long int)1;
  unsigned long int len = (unsigned long int)0;
  unsigned long int size_x = (unsigned long int)0;
  unsigned long int size_y = (unsigned long int)0;
  signed int tmp_if_expr$2;
  if(!(win == ((struct _win_st *)NULL)))
    tmp_if_expr$2 = (signed int)win->_maxy + 1;

  else
    tmp_if_expr$2 = -1;
  size_y = (unsigned long int)tmp_if_expr$2;
  signed int tmp_if_expr$3;
  if(!(win == ((struct _win_st *)NULL)))
    tmp_if_expr$3 = (signed int)win->_maxx + 1;

  else
    tmp_if_expr$3 = -1;
  size_x = (unsigned long int)tmp_if_expr$3;
  size_x = size_x - (unsigned long int)4;
  unsigned long int tmp_if_expr$6;
  unsigned long int return_value_strlen$5;
  if(!(str == ((const char *)NULL)))
  {
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(str);
    if(!(max_width >= return_value_strlen$4))
      tmp_if_expr$6 = max_width;

    else
    {
      return_value_strlen$5=strlen(str);
      tmp_if_expr$6 = return_value_strlen$5;
    }
    len = tmp_if_expr$6;
    memcpy((void *)s, (const void *)str, len);
    s[(signed long int)len] = (char)0;
    pos = (unsigned long int)0;
    x = pos;
    unsigned long int return_value_strlen$7;
    return_value_strlen$7=strlen(s);
    if(!(size_x >= return_value_strlen$7))
    {
      tmp=xstrdup(&s[(signed long int)0]);
      tmp[(signed long int)size_x] = (char)0;
      mvwprintw(win, pos_y, pos_x, "%s", tmp);
      free((void *)tmp);
    }

    else
      mvwprintw(win, pos_y, pos_x, "%s", s);
  }

  else
    s[(signed long int)0] = (char)0;
  if(!(enable_case == 0))
    mvwprintw(win, (signed int)(size_y - (unsigned long int)2), 1, " %s", (const void *)"[x] case sensitive");

  wmove(win, pos_y, (signed int)((unsigned long int)pos_x + x));
  wrefresh(win);
  curs_set(1);
  unsigned long int return_value_strlen$10;
  unsigned long int return_value_strlen$11;
  unsigned long int tmp_if_expr$18;
  unsigned long int return_value_strlen$17;
  while(!(quit == 0ul))
  {
    signed int return_value_wgetch$8;
    return_value_wgetch$8=wgetch(stdscr);
    c = (unsigned long int)return_value_wgetch$8;
    switch(c)
    {
      case (unsigned long int)1:

      case (unsigned long int)262:
      {
        x = (unsigned long int)0;
        pos = x;
        break;
      }
      case (unsigned long int)5:

      case (unsigned long int)360:
      {
        return_value_strlen$10=strlen(s);
        if(!(size_x >= return_value_strlen$10))
        {
          x = size_x;
          unsigned long int return_value_strlen$9;
          return_value_strlen$9=strlen(s);
          pos = return_value_strlen$9 - size_x;
        }

        else
        {
          pos = (unsigned long int)0;
          x=strlen(s);
        }
        break;
      }
      case (unsigned long int)7:

      case (unsigned long int)27:
      {
        x = (unsigned long int)0;
        pos = x;
        if(!(str == ((const char *)NULL)))
        {
          if((signed int)*str == 0)
            s[(signed long int)0] = (char)0;

        }

        quit = (unsigned long int)0;
        break;
      }
      case (unsigned long int)9:
      {
        if(enable_case == 0)
          break;

        *toggle_case = *toggle_case == 0 ? 1 : 0;
        if(!(*toggle_case == 0))
          mvwprintw(win, (signed int)(size_y - (unsigned long int)2), 1, " %s", (const void *)"[ ] case sensitive");

        else
          if(*toggle_case == 0)
            mvwprintw(win, (signed int)(size_y - (unsigned long int)2), 1, " %s", (const void *)"[x] case sensitive");

        break;
      }
      case (unsigned long int)21:
      {
        s[(signed long int)0] = (char)0;
        x = (unsigned long int)0;
        pos = x;
        break;
      }
      case (unsigned long int)8:

      case (unsigned long int)127:

      case (unsigned long int)0407:
      {
        if(pos + x >= 1ul)
        {
          memmove((void *)&s[(signed long int)((pos + x) - (unsigned long int)1)], (const void *)&s[(signed long int)(pos + x)], (max_width - (pos + x)) + (unsigned long int)1);
          if(!(pos >= 1ul))
            x = x - 1ul;

          else
            pos = pos - 1ul;
        }

        break;
      }
      case (unsigned long int)0404:
      {
        if(x >= 1ul)
          x = x - 1ul;

        else
          if(pos >= 1ul)
            pos = pos - 1ul;

        break;
      }
      case (unsigned long int)0405:
      {
        return_value_strlen$11=strlen(s);
        if(!(pos + x >= return_value_strlen$11))
        {
          if(!(x >= size_x))
            x = x + 1ul;

          else
            pos = pos + 1ul;
        }

        break;
      }
      case (unsigned long int)0x0a:

      case (unsigned long int)0x0d:

      case (unsigned long int)0527:
      {
        quit = (unsigned long int)0;
        break;
      }
      default:
      {
        unsigned long int return_value_strlen$12;
        return_value_strlen$12=strlen(s);
        if(!(return_value_strlen$12 == max_width))
        {
          const unsigned short int **return_value___ctype_b_loc$13;
          return_value___ctype_b_loc$13=__ctype_b_loc();
          if(!((16384 & (signed int)(*return_value___ctype_b_loc$13)[(signed long int)(signed int)c]) == 0))
          {
            unsigned long int return_value_strlen$15;
            return_value_strlen$15=strlen(s);
            if(return_value_strlen$15 == pos)
            {
              s[(signed long int)(pos + x)] = (char)c;
              s[(signed long int)(pos + x + (unsigned long int)1)] = (char)0;
              waddch(win, c);
            }

            else
            {
              unsigned long int return_value_strlen$14;
              return_value_strlen$14=strlen(&s[(signed long int)(pos + x)]);
              memmove((void *)&s[(signed long int)(pos + x + (unsigned long int)1)], (const void *)&s[(signed long int)(pos + x)], return_value_strlen$14 + (unsigned long int)1);
              s[(signed long int)(pos + x)] = (char)c;
            }
            if(!(pos + x >= max_width))
            {
              if(!(x >= size_x))
                x = x + 1ul;

              else
                pos = pos + 1ul;
            }

          }

        }

      }
    }
    tmp=xstrdup(&s[(signed long int)(pos > (unsigned long int)0 ? pos : (unsigned long int)0)]);
    unsigned long int return_value_strlen$16;
    return_value_strlen$16=strlen(tmp);
    if(!(return_value_strlen$16 >= size_x))
    {
      return_value_strlen$17=strlen(tmp);
      tmp_if_expr$18 = return_value_strlen$17;
    }

    else
      tmp_if_expr$18 = size_x;
    tmp[(signed long int)tmp_if_expr$18] = (char)0;
    i=strlen(tmp);
    for( ; !(i >= size_x); i = i + 1ul)
      mvwprintw(win, pos_y, (signed int)((unsigned long int)pos_x + i), "%s", (const void *)" ");
    mvwprintw(win, pos_y, pos_x, "%s", tmp);
    free((void *)tmp);
    wmove(win, pos_y, (signed int)((unsigned long int)pos_x + x));
    wrefresh(win);
  }
  curs_set(0);
  return s;
}

// insert_agent
// file src/parser.c line 1261
static void insert_agent(signed int data_nkey, signed int agent_nkey, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_insert_host_agent((struct _GHashTable *)metrics->agents, data_nkey, agent_nkey);
}

// insert_bw
// file src/parser.c line 1216
static void insert_bw(signed int data_nkey, unsigned long int size, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_inc_u64_from_int_key((struct _GHashTable *)metrics->bw, data_nkey, size);
}

// insert_cumts
// file src/parser.c line 1225
static void insert_cumts(signed int data_nkey, unsigned long int ts, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_inc_u64_from_int_key((struct _GHashTable *)metrics->cumts, data_nkey, ts);
}

// insert_data
// file src/parser.c line 1189
static void insert_data(signed int nkey, const char *data, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_insert_str_from_int_key((struct _GHashTable *)metrics->datamap, nkey, data);
}

// insert_hit
// file src/parser.c line 1198
static void insert_hit(signed int data_nkey, signed int uniq_nkey, signed int root_nkey, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_insert_hit((struct _GHashTable *)metrics->hits, data_nkey, uniq_nkey, root_nkey);
}

// insert_keymap
// file src/parser.c line 1162
static signed int insert_keymap(const char *key, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  signed int return_value_ht_insert_keymap$1;
  return_value_ht_insert_keymap$1=ht_insert_keymap((struct _GHashTable *)metrics->keymap, key);
  return return_value_ht_insert_keymap$1;
}

// insert_maxts
// file src/parser.c line 1234
static void insert_maxts(signed int data_nkey, unsigned long int ts, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_max_u64_from_int_key((struct _GHashTable *)metrics->maxts, data_nkey, ts);
}

// insert_method
// file src/parser.c line 1243
static void insert_method(signed int nkey, const char *data, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_insert_str_from_int_key((struct _GHashTable *)metrics->methods, nkey, data != ((const char *)NULL) ? data : "---");
}

// insert_protocol
// file src/parser.c line 1252
static void insert_protocol(signed int nkey, const char *data, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_insert_str_from_int_key((struct _GHashTable *)metrics->protocols, nkey, data != ((const char *)NULL) ? data : "---");
}

// insert_root
// file src/parser.c line 1180
static void insert_root(signed int root_nkey, const char *root, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_insert_str_from_int_key((struct _GHashTable *)metrics->rootmap, root_nkey, root);
}

// insert_uniqmap
// file src/parser.c line 1171
static signed int insert_uniqmap(char *uniq_key, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  signed int return_value_ht_insert_uniqmap$1;
  return_value_ht_insert_uniqmap$1=ht_insert_uniqmap((struct _GHashTable *)metrics->uniqmap, uniq_key);
  return return_value_ht_insert_uniqmap$1;
}

// insert_visitor
// file src/parser.c line 1207
static void insert_visitor(signed int uniq_nkey, enum MODULES module)
{
  struct GStorageMetrics_ *metrics;
  metrics=get_storage_metrics_by_module(module);
  ht_inc_int_from_int_key((struct _GHashTable *)metrics->visitors, uniq_nkey, 1);
}

// int2ptr
// file src/gstorage.c line 82
signed int * int2ptr(signed int val)
{
  signed int *ptr;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(signed int) /*4ul*/ );
  ptr = (signed int *)return_value_xmalloc$1;
  *ptr = val;
  return ptr;
}

// int2str
// file src/util.h line 53
char * int2str(signed int d, signed int width)
{
  char *s;
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "%*d", width, d);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  s = (char *)return_value_xmalloc$2;
  sprintf(s, "%*d", width, d);
  return s;
}

// intlen
// file src/util.h line 69
signed int intlen(signed int num)
{
  signed int l = 1;
  for( ; num >= 10; num = num / 10)
    l = l + 1;
  return l;
}

// ints_to_str
// file src/util.h line 52
char * ints_to_str(signed int a, signed int b)
{
  char *s;
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "%d%d", a, b);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  s = (char *)return_value_xmalloc$2;
  sprintf(s, "%d%d", a, b);
  return s;
}

// invalid_fprintf
// file src/error.c line 148
void invalid_fprintf(const char *fmt, ...)
{
  void **args;
  if(!(log_invalid == ((struct _IO_FILE *)NULL)))
  {
    args = (void **)&fmt;
    vfprintf(log_invalid, fmt, args);
    fflush(log_invalid);
    args = ((void **)NULL);
  }

}

// invalid_ipaddr
// file src/util.h line 70
signed int invalid_ipaddr(char *str, signed int *ipvx)
{
  /* tag-#anon#lUN[lSYM#tag-sockaddr#'addr'||lSYM#tag-sockaddr_in6#'addr6'||lSYM#tag-sockaddr_in#'addr4'|]$link1 */
union anonymous$21
{
  // addr
  struct sockaddr addr;
  // addr6
  struct sockaddr_in6$0 addr6;
  // addr4
  struct sockaddr_in addr4;
};

/* */
  ;
  union anonymous$21 a;
  *ipvx = TYPE_IPINV;
  _Bool tmp_if_expr$1;
  if(str == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  signed int return_value_inet_pton$2;
  if(tmp_if_expr$1)
    return 1;

  else
  {
    memset((void *)&a, 0, sizeof(union anonymous$21) /*28ul*/ );
    signed int return_value_inet_pton$3;
    return_value_inet_pton$3=inet_pton(2, str, (void *)&a.addr4.sin_addr);
    if(return_value_inet_pton$3 == 1)
    {
      *ipvx = TYPE_IPV4;
      return 0;
    }

    else
    {
      return_value_inet_pton$2=inet_pton(10, str, (void *)&a.addr6.sin6_addr);
      if(return_value_inet_pton$2 == 1)
      {
        *ipvx = TYPE_IPV6;
        return 0;
      }

    }
    return 1;
  }
}

// invalid_log_close
// file src/error.c line 70
void invalid_log_close(void)
{
  if(!(log_invalid == ((struct _IO_FILE *)NULL)))
    fclose(log_invalid);

}

// invalid_log_open
// file src/error.c line 60
void invalid_log_open(const char *path)
{
  if(!(path == ((const char *)NULL)))
    log_invalid=fopen(path, "w");

}

// invalid_protocol
// file src/parser.c line 644
static signed int invalid_protocol(const char *token)
{
  const char *lookfor = (const char *)(void *)0;
  lookfor = "HTTP/1.0";
  signed int return_value_memcmp$1;
  return_value_memcmp$1=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)8);
  _Bool tmp_if_expr$3;
  signed int return_value_memcmp$2;
  if(return_value_memcmp$1 == 0)
    tmp_if_expr$3 = (_Bool)1;

  else
  {
    lookfor = "HTTP/1.1";
    return_value_memcmp$2=memcmp((const void *)token, (const void *)lookfor, (unsigned long int)8);
    tmp_if_expr$3 = !(return_value_memcmp$2 != 0) ? (_Bool)1 : (_Bool)0;
  }
  return (signed int)!tmp_if_expr$3;
}

// ip_in_range
// file src/util.h line 71
signed int ip_in_range(const char *ip)
{
  char *start = (char *)(void *)0;
  char *end;
  char *ip_in_range$$1$$dash;
  signed int i = 0;
  _Bool tmp_if_expr$1;
  for( ; !(i >= conf.ignore_ip_idx); i = i + 1)
  {
    end = (char *)(void *)0;
    if(conf.ignore_ips[(signed long int)i] == ((char *)NULL))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = (signed int)*conf.ignore_ips[(signed long int)i] == 0 ? (_Bool)1 : (_Bool)0;
    if(!tmp_if_expr$1)
    {
      start=xstrdup(conf.ignore_ips[(signed long int)i]);
      ip_in_range$$1$$dash=strchr(start, 45);
      if(!(ip_in_range$$1$$dash == ((char *)NULL)))
      {
        *ip_in_range$$1$$dash = (char)0;
        end = ip_in_range$$1$$dash + (signed long int)1;
      }

      if(end == ((char *)NULL) && !(start == ((char *)NULL)))
      {
        signed int return_value_strcmp$2;
        return_value_strcmp$2=strcmp(ip, start);
        if(return_value_strcmp$2 == 0)
        {
          free((void *)start);
          return 1;
        }

      }

      else
        if(!(end == ((char *)NULL)) && !(start == ((char *)NULL)))
        {
          signed int return_value_within_range$3;
          return_value_within_range$3=within_range(ip, start, end);
          if(!(return_value_within_range$3 == 0))
          {
            free((void *)start);
            return 1;
          }

        }

      free((void *)start);
    }

  }
  return 0;
}

// is_404
// file src/parser.c line 1149
static signed int is_404(struct GLogItem_ *glog)
{
  _Bool tmp_if_expr$3;
  signed int return_value_memcmp$2;
  if(!(glog->status == ((char *)NULL)))
  {
    return_value_memcmp$2=memcmp((const void *)glog->status, (const void *)"404", (unsigned long int)3);
    tmp_if_expr$3 = !(return_value_memcmp$2 != 0) ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  signed int return_value_memcmp$1;
  if(tmp_if_expr$3)
    return 1;

  else
    if(!(glog->status == ((char *)NULL)))
    {
      return_value_memcmp$1=memcmp((const void *)glog->status, (const void *)"444", (unsigned long int)3);
      if(return_value_memcmp$1 == 0)
      {
        if(!(conf.code444_as_404 == 0))
          return 1;

      }

    }

  return 0;
}

// is_crawler
// file src/browsers.c line 278
signed int is_crawler(const char *agent)
{
  char type[13l];
  char *browser;
  char *a;
  _Bool tmp_if_expr$1;
  if(agent == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*agent == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return 0;

  else
  {
    a=xstrdup(agent);
    browser=verify_browser(a, type);
    if(!(browser == ((char *)NULL)))
      free((void *)browser);

    free((void *)a);
    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(type, "Crawlers");
    return return_value_strcmp$2 == 0 ? 1 : 0;
  }
}

// is_static
// file src/parser.c line 1143
static signed int is_static(struct GLogItem_ *glog)
{
  signed int return_value_verify_static_content$1;
  return_value_verify_static_content$1=verify_static_content(glog->req);
  return return_value_verify_static_content$1;
}

// left_pad_str
// file src/util.h line 54
char * left_pad_str(const char *s, signed int indent)
{
  char *buf = (char *)(void *)0;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(s);
  indent = (signed int)(return_value_strlen$1 + (unsigned long int)indent);
  signed int return_value_snprintf$2;
  return_value_snprintf$2=snprintf((char *)(void *)0, (unsigned long int)0, "%*s", indent, s);
  void *return_value_xmalloc$3;
  return_value_xmalloc$3=xmalloc((unsigned long int)(return_value_snprintf$2 + 1));
  buf = (char *)return_value_xmalloc$3;
  sprintf(buf, "%*s", indent, s);
  return buf;
}

// list_count
// file src/commons.h line 252
signed int list_count(struct GSLList_ *node)
{
  signed int count = 0;
  for( ; !(node == ((struct GSLList_ *)NULL)); node = node->next)
    count = count + 1;
  return count;
}

// list_create
// file src/commons.h line 248
struct GSLList_ * list_create(void *data)
{
  struct GSLList_ *node;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GSLList_) /*16ul*/ );
  node = (struct GSLList_ *)return_value_xmalloc$1;
  node->data = data;
  node->next = (struct GSLList_ *)(void *)0;
  return node;
}

// list_find
// file src/commons.h line 249
struct GSLList_ * list_find(struct GSLList_ *node, signed int (*func)(void *, void *), void *data)
{
  if(!(node == ((struct GSLList_ *)NULL)))
  {
    signed int return_value;
    return_value=func(node->data, data);
    if(return_value >= 1)
      return node;

    node = node->next;
  }

  return (struct GSLList_ *)(void *)0;
}

// list_foreach
// file src/commons.c line 169
signed int list_foreach(struct GSLList_ *node, signed int (*func)(void *, void *), void *user_data)
{
  if(!(node == ((struct GSLList_ *)NULL)))
  {
    signed int return_value;
    return_value=func(node->data, user_data);
    if(!(return_value == 0))
      return -1;

    node = node->next;
  }

  return 0;
}

// list_insert_append
// file src/commons.c line 121
struct GSLList_ * list_insert_append(struct GSLList_ *node, void *data)
{
  struct GSLList_ *newnode;
  newnode=list_create(data);
  newnode->next = node->next;
  node->next = newnode;
  return newnode;
}

// list_insert_prepend
// file src/commons.h line 251
struct GSLList_ * list_insert_prepend(struct GSLList_ *list, void *data)
{
  struct GSLList_ *newnode;
  newnode=list_create(data);
  newnode->next = list;
  return newnode;
}

// list_remove_nodes
// file src/commons.h line 254
signed int list_remove_nodes(struct GSLList_ *list)
{
  struct GSLList_ *tmp;
  for( ; !(list == ((struct GSLList_ *)NULL)); list = tmp)
  {
    tmp = list->next;
    if(!(list->data == NULL))
      free(list->data);

    free((void *)list);
  }
  return 0;
}

// load_agent_list
// file src/ui.h line 311
void load_agent_list(struct _win_st *main_win, char *addr)
{
  struct GMenu_ *menu;
  struct _win_st *win;
  char buf[256l];
  signed int c;
  signed int quit = 1;
  signed int i;
  signed int y;
  signed int x;
  signed int list_h;
  signed int list_w;
  signed int menu_w;
  signed int menu_h;
  signed int tmp_if_expr$1;
  signed int tmp_if_expr$2;
  signed int tmp_if_expr$4;
  if(!(conf.list_agents == 0))
  {
    if(!(stdscr == ((struct _win_st *)NULL)))
      tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

    else
      tmp_if_expr$1 = -1;
    y = tmp_if_expr$1;
    if(!(stdscr == ((struct _win_st *)NULL)))
      tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

    else
      tmp_if_expr$2 = -1;
    x = tmp_if_expr$2;
    list_h = y / 2;
    list_w = x - 4;
    menu_h = (list_h - 4) - 1;
    menu_w = (list_w - 2) - 2;
    win=newwin(list_h, list_w, (y - list_h) / 2, (x - list_w) / 2);
    keypad(win, (_Bool)1);
    wborder(win, (unsigned long int)124, (unsigned long int)124, (unsigned long int)45, (unsigned long int)45, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43);
    menu=new_gmenu(win, menu_h, menu_w, 4, 2);
    signed int return_value_set_host_agents$3;
    return_value_set_host_agents$3=set_host_agents(addr, load_host_agents_gmenu, (void *)menu);
    if(!(return_value_set_host_agents$3 == 1))
    {
      post_gmenu(menu);
      snprintf(buf, sizeof(char [256l]) /*256ul*/ , "User Agents for %s", addr);
      draw_header(win, buf, " %s", 1, 1, list_w - 2, color_panel_header);
      mvwprintw(win, 2, 2, "[UP/DOWN] to scroll - [q] to close window");
      wrefresh(win);
      while(!(quit == 0))
      {
        c=wgetch(stdscr);
        switch(c)
        {
          case 0402:
          {
            gmenu_driver(menu, 0);
            goto __CPROVER_DUMP_L10;
          }
          case 0403:
          {
            gmenu_driver(menu, 1);
            goto __CPROVER_DUMP_L10;
          }
          case 0632:

          case 113:
            quit = 0;
          default:
          {

          __CPROVER_DUMP_L10:
            ;
            wrefresh(win);
          }
        }
      }
      if(!(main_win == ((struct _win_st *)NULL)))
        tmp_if_expr$4 = (signed int)main_win->_maxy + 1;

      else
        tmp_if_expr$4 = -1;
      wtouchln(main_win, 0, tmp_if_expr$4, 1);
      close_win(win);
      wrefresh(main_win);
    }


  out:
    ;
    i = 0;
    for( ; !(i >= menu->size); i = i + 1)
      free((void *)(menu->items + (signed long int)i)->name);
    if(!(menu->items == ((struct GItem_ *)NULL)))
      free((void *)menu->items);

    free((void *)menu);
  }

}

// load_data_to_dash
// file src/gdashboard.c line 1460
void load_data_to_dash(struct GHolder_ *h, struct GDash_ *dash, enum MODULES module, struct GScroll_ *gscroll)
{
  signed int alloc_size = 0;
  signed int i;
  signed int j;
  alloc_size = dash->module[(signed long int)module].alloc_data;
  if(!(gscroll->expanded == 0))
  {
    if(module == gscroll->current)
      alloc_size = alloc_size + h->sub_items_size;

  }

  dash->module[(signed long int)module].alloc_data = alloc_size;
  dash->module[(signed long int)module].data=new_gdata((unsigned int)alloc_size);
  dash->module[(signed long int)module].holder_size = h->holder_size;
  i = 0;
  j = 0;
  for( ; !(i >= alloc_size); i = i + 1)
    if(!((h->items + (signed long int)j)->metrics->data == ((char *)NULL)))
    {
      add_item_to_dash(&dash, h->items[(signed long int)j], module);
      if(!(gscroll->expanded == 0))
      {
        if(module == gscroll->current)
        {
          if(!(h->sub_items_size == 0))
            add_sub_item_to_dash(&dash, h->items[(signed long int)j], module, &i);

        }

      }

      j = j + 1;
    }

}

// load_help_popup
// file src/ui.h line 312
void load_help_popup(struct _win_st *main_win)
{
  signed int c;
  signed int quit = 1;
  unsigned long int i;
  unsigned long int n;
  signed int y;
  signed int x;
  signed int h = 17;
  signed int w = 64;
  signed int w2 = w - 2;
  struct _win_st *win;
  struct GMenu_ *menu;
  n = sizeof(const char *[53l]) /*424ul*/  / sizeof(const char *) /*8ul*/ ;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  y = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  x = tmp_if_expr$2;
  win=newwin(h, w, (y - h) / 2, (x - w) / 2);
  keypad(win, (_Bool)1);
  wborder(win, (unsigned long int)124, (unsigned long int)124, (unsigned long int)45, (unsigned long int)45, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43);
  menu=new_gmenu(win, 12, 60, 4, 2);
  menu->size = (signed int)n;
  void *return_value_xcalloc$3;
  return_value_xcalloc$3=xcalloc(n, sizeof(struct GItem_) /*16ul*/ );
  menu->items = (struct GItem_ *)return_value_xcalloc$3;
  i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
  {
    (menu->items + (signed long int)i)->name=alloc_string(help_main[(signed long int)i]);
    (menu->items + (signed long int)i)->checked = 0;
  }
  post_gmenu(menu);
  draw_header(win, "GoAccess Quick Help", " %s", 1, 1, w2, color_panel_header);
  mvwprintw(win, 2, 2, "[UP/DOWN] to scroll - [q] to quit");
  wrefresh(win);
  while(!(quit == 0))
  {
    c=wgetch(stdscr);
    switch(c)
    {
      case 0402:
      {
        gmenu_driver(menu, 0);
        goto __CPROVER_DUMP_L11;
      }
      case 0403:
      {
        gmenu_driver(menu, 1);
        goto __CPROVER_DUMP_L11;
      }
      case 0632:

      case 113:
        quit = 0;
      default:
      {

      __CPROVER_DUMP_L11:
        ;
        wrefresh(win);
      }
    }
  }
  i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
    free((void *)(menu->items + (signed long int)i)->name);
  free((void *)menu->items);
  free((void *)menu);
  signed int tmp_if_expr$4;
  if(!(main_win == ((struct _win_st *)NULL)))
    tmp_if_expr$4 = (signed int)main_win->_maxy + 1;

  else
    tmp_if_expr$4 = -1;
  wtouchln(main_win, 0, tmp_if_expr$4, 1);
  close_win(win);
  wrefresh(main_win);
}

// load_holder_data
// file src/gdashboard.c line 1728
void load_holder_data(struct GRawData_ *raw_data, struct GHolder_ *h, enum MODULES module, struct GSort_ sort)
{
  signed int i;
  signed int size = 0;
  const struct GPanel_ *panel;
  panel=panel_lookup$link1(module);
  size = raw_data->size;
  h->holder_size = size > 366 ? 366 : size;
  h->ht_size = size;
  h->idx = 0;
  h->module = module;
  h->sub_items_size = 0;
  h->items=new_gholder_item((unsigned int)h->holder_size);
  i = 0;
  if(!(i >= h->holder_size))
  {
    panel->insert(raw_data->items[(signed long int)i], h, panel);
    i = i + 1;
  }

  sort_holder_items(h->items, h->idx, sort);
  if(!(h->sub_items_size == 0))
    sort_sub_list(h, sort);

  free_raw_data(raw_data);
}

// load_host_agents
// file src/output.c line 1348
static void load_host_agents(void *list, void *user_data, signed int count)
{
  struct GSLList_ *lst = (struct GSLList_ *)list;
  struct GAgents_ *agents = (struct GAgents_ *)user_data;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)count, sizeof(struct GAgentItem_) /*8ul*/ );
  agents->items = (struct GAgentItem_ *)return_value_xcalloc$1;
  list_foreach(lst, fill_host_agents, (void *)agents);
}

// load_host_agents_gmenu
// file src/ui.c line 697
static void load_host_agents_gmenu(void *list, void *user_data, signed int count)
{
  struct GSLList_ *lst = (struct GSLList_ *)list;
  struct GMenu_ *menu = (struct GMenu_ *)user_data;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)count, sizeof(struct GItem_) /*16ul*/ );
  menu->items = (struct GItem_ *)return_value_xcalloc$1;
  list_foreach(lst, fill_host_agents_gmenu, (void *)menu);
}

// load_ip_agent_list
// file src/goaccess.c line 405
static void load_ip_agent_list(void)
{
  signed int type_ip = 0;
  signed int sel = gscroll.module[(signed long int)gscroll.current].scroll;
  struct GDashData_ item = dash->module[(signed long int)HOSTS].data[(signed long int)sel];
  signed int return_value_invalid_ipaddr$1;
  return_value_invalid_ipaddr$1=invalid_ipaddr(item.metrics->data, &type_ip);
  if(return_value_invalid_ipaddr$1 == 0)
    load_agent_list(main_win, item.metrics->data);

}

// load_schemes_win
// file src/ui.h line 313
void load_schemes_win(struct _win_st *main_win)
{
  struct GMenu_ *menu;
  struct _win_st *win;
  signed int c;
  signed int quit = 1;
  unsigned long int i;
  unsigned long int n;
  signed int y;
  signed int x;
  signed int h = 10;
  signed int w = 42;
  signed int w2 = w - 2;
  const char *choices[3l] = { "Monochrome/Default", "Green/Original", "Custom Scheme" };
  n = sizeof(const char *[3l]) /*24ul*/  / sizeof(const char *) /*8ul*/ ;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  y = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  x = tmp_if_expr$2;
  win=newwin(h, w, (y - h) / 2, (x - w) / 2);
  keypad(win, (_Bool)1);
  wborder(win, (unsigned long int)124, (unsigned long int)124, (unsigned long int)45, (unsigned long int)45, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43);
  menu=new_gmenu(win, 4, 38, 4, 2);
  menu->size = (signed int)(conf.color_idx == 0 ? n - (unsigned long int)1 : n);
  void *return_value_xcalloc$3;
  return_value_xcalloc$3=xcalloc(n, sizeof(struct GItem_) /*16ul*/ );
  menu->items = (struct GItem_ *)return_value_xcalloc$3;
  i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
  {
    (menu->items + (signed long int)i)->name=alloc_string(choices[(signed long int)i]);
    (menu->items + (signed long int)i)->checked = 0;
  }
  post_gmenu(menu);
  draw_header(win, "Scheme Configuration", " %s", 1, 1, w2, color_panel_header);
  mvwprintw(win, 2, 2, "[ENTER] to switch scheme");
  wrefresh(win);
  while(!(quit == 0))
  {
    c=wgetch(stdscr);
    switch(c)
    {
      case 0402:
      {
        gmenu_driver(menu, 0);
        goto __CPROVER_DUMP_L15;
      }
      case 0403:
      {
        gmenu_driver(menu, 1);
        goto __CPROVER_DUMP_L15;
      }
      case 32:

      case 0x0a:

      case 0x0d:

      case 0527:
      {
        gmenu_driver(menu, 2);
        i = (unsigned long int)0;
        for( ; !(i >= n); i = i + 1ul)
          if((menu->items + (signed long int)i)->checked == 1)
          {
            scheme_chosen(choices[(signed long int)i]);
            break;
          }

        quit = 0;
        goto __CPROVER_DUMP_L15;
      }
      case 0632:

      case 113:
        quit = 0;
      default:
      {

      __CPROVER_DUMP_L15:
        ;
        wrefresh(win);
      }
    }
  }
  i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
    free((void *)(menu->items + (signed long int)i)->name);
  free((void *)menu->items);
  free((void *)menu);
  signed int tmp_if_expr$4;
  if(!(main_win == ((struct _win_st *)NULL)))
    tmp_if_expr$4 = (signed int)main_win->_maxy + 1;

  else
    tmp_if_expr$4 = -1;
  wtouchln(main_win, 0, tmp_if_expr$4, 1);
  close_win(win);
  wrefresh(main_win);
}

// load_sort_win
// file src/ui.h line 314
void load_sort_win(struct _win_st *main_win, enum MODULES module, struct GSort_ *sort)
{
  struct GMenu_ *menu;
  struct _win_st *win;
  enum GSortField_ opts[10l];
  signed int c;
  signed int quit = 1;
  signed int i = 0;
  signed int k;
  signed int n = 0;
  signed int y;
  signed int x;
  signed int h = 13;
  signed int w = 42;
  signed int w2 = w - 2;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  y = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  x = tmp_if_expr$2;
  i = 0;
  k = 0;
  signed int tmp_post$3;
  for( ; !(sort_choices[(signed long int)module][(signed long int)i] == -1); i = i + 1)
  {
    enum GSortField_ field = (enum GSortField_)sort_choices[(signed long int)module][(signed long int)i];
    if(conf.serve_usecs == 0 && (signed int)field == SORT_BY_CUMTS)
      goto __CPROVER_DUMP_L11;

    else
      if(conf.bandwidth == 0 && (signed int)field == SORT_BY_MAXTS)
        goto __CPROVER_DUMP_L11;

      else
        if(conf.bandwidth == 0 && (signed int)field == SORT_BY_BW)
          goto __CPROVER_DUMP_L11;

        else
          if(conf.append_protocol == 0 && (signed int)field == SORT_BY_PROT)
            goto __CPROVER_DUMP_L11;

          else
            if(conf.append_method == 0 && (signed int)field == SORT_BY_MTHD)
              goto __CPROVER_DUMP_L11;

    tmp_post$3 = k;
    k = k + 1;
    opts[(signed long int)tmp_post$3] = field;
    n = n + 1;

  __CPROVER_DUMP_L11:
    ;
  }
  win=newwin(h, w, (y - h) / 2, (x - w) / 2);
  keypad(win, (_Bool)1);
  wborder(win, (unsigned long int)124, (unsigned long int)124, (unsigned long int)45, (unsigned long int)45, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43);
  menu=new_gmenu(win, 6, 38, 4, 2);
  menu->size = n;
  menu->selectable = (unsigned short int)1;
  void *return_value_xcalloc$4;
  return_value_xcalloc$4=xcalloc((unsigned long int)n, sizeof(struct GItem_) /*16ul*/ );
  menu->items = (struct GItem_ *)return_value_xcalloc$4;
  i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    enum GSortField_ load_sort_win$$1$$2$$1$$field = (enum GSortField_)sort_choices[(signed long int)module][(signed long int)opts[(signed long int)i]];
    if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_HITS)
    {
      (menu->items + (signed long int)i)->name=alloc_string("Hits");
      if((signed int)sort->field == SORT_BY_HITS)
      {
        (menu->items + (signed long int)i)->checked = 1;
        menu->idx = i;
      }

    }

    else
      if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_VISITORS)
      {
        (menu->items + (signed long int)i)->name=alloc_string("Visitors");
        if((signed int)sort->field == SORT_BY_VISITORS)
        {
          (menu->items + (signed long int)i)->checked = 1;
          menu->idx = i;
        }

      }

      else
        if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_DATA)
        {
          (menu->items + (signed long int)i)->name=alloc_string("Data");
          if((signed int)sort->field == SORT_BY_DATA)
          {
            (menu->items + (signed long int)i)->checked = 1;
            menu->idx = i;
          }

        }

        else
          if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_BW)
          {
            (menu->items + (signed long int)i)->name=alloc_string("Bandwidth");
            if((signed int)sort->field == SORT_BY_BW)
            {
              (menu->items + (signed long int)i)->checked = 1;
              menu->idx = i;
            }

          }

          else
            if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_AVGTS)
            {
              (menu->items + (signed long int)i)->name=alloc_string("Avg. Time Served");
              if((signed int)sort->field == SORT_BY_AVGTS)
              {
                (menu->items + (signed long int)i)->checked = 1;
                menu->idx = i;
              }

            }

            else
              if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_CUMTS)
              {
                (menu->items + (signed long int)i)->name=alloc_string("Cum. Time Served");
                if((signed int)sort->field == SORT_BY_CUMTS)
                {
                  (menu->items + (signed long int)i)->checked = 1;
                  menu->idx = i;
                }

              }

              else
                if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_MAXTS)
                {
                  (menu->items + (signed long int)i)->name=alloc_string("Max. Time Served");
                  if((signed int)sort->field == SORT_BY_MAXTS)
                  {
                    (menu->items + (signed long int)i)->checked = 1;
                    menu->idx = i;
                  }

                }

                else
                  if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_PROT)
                  {
                    (menu->items + (signed long int)i)->name=alloc_string("Protocol");
                    if((signed int)sort->field == SORT_BY_PROT)
                    {
                      (menu->items + (signed long int)i)->checked = 1;
                      menu->idx = i;
                    }

                  }

                  else
                    if((signed int)load_sort_win$$1$$2$$1$$field == SORT_BY_MTHD)
                    {
                      (menu->items + (signed long int)i)->name=alloc_string("Method");
                      if((signed int)sort->field == SORT_BY_MTHD)
                      {
                        (menu->items + (signed long int)i)->checked = 1;
                        menu->idx = i;
                      }

                    }

  }
  post_gmenu(menu);
  draw_header(win, "Sort active module by", " %s", 1, 1, w2, color_panel_header);
  mvwprintw(win, 2, 2, "[ENTER] to select field - [TAB] sort");
  if((signed int)sort->sort == SORT_ASC)
    mvwprintw(win, 13 - 2, 1, " %s", (const void *)"[x] ASC [ ] DESC");

  else
    mvwprintw(win, 13 - 2, 1, " %s", (const void *)"[ ] ASC [x] DESC");
  wrefresh(win);
  signed int return_value_strcmp$12;
  signed int return_value_strcmp$11;
  signed int return_value_strcmp$10;
  signed int return_value_strcmp$9;
  signed int return_value_strcmp$8;
  signed int return_value_strcmp$7;
  signed int return_value_strcmp$6;
  signed int return_value_strcmp$5;
  while(!(quit == 0))
  {
    c=wgetch(stdscr);
    switch(c)
    {
      case 0402:
      {
        gmenu_driver(menu, 0);
        goto __CPROVER_DUMP_L54;
      }
      case 0403:
      {
        gmenu_driver(menu, 1);
        goto __CPROVER_DUMP_L54;
      }
      case 9:
      {
        if((signed int)sort->sort == SORT_ASC)
        {
          sort->sort = (enum GSortOrder_)SORT_DESC;
          mvwprintw(win, 13 - 2, 1, " %s", (const void *)"[ ] ASC [x] DESC");
        }

        else
        {
          sort->sort = (enum GSortOrder_)SORT_ASC;
          mvwprintw(win, 13 - 2, 1, " %s", (const void *)"[x] ASC [ ] DESC");
        }
        goto __CPROVER_DUMP_L54;
      }
      case 32:

      case 0x0a:

      case 0x0d:

      case 0527:
      {
        gmenu_driver(menu, 2);
        i = 0;
        for( ; !(i >= n); i = i + 1)
          if((menu->items + (signed long int)i)->checked == 1)
          {
            signed int return_value_strcmp$13;
            return_value_strcmp$13=strcmp("Hits", (menu->items + (signed long int)i)->name);
            if(return_value_strcmp$13 == 0)
              sort->field = (enum GSortField_)SORT_BY_HITS;

            else
            {
              return_value_strcmp$12=strcmp("Visitors", (menu->items + (signed long int)i)->name);
              if(return_value_strcmp$12 == 0)
                sort->field = (enum GSortField_)SORT_BY_VISITORS;

              else
              {
                return_value_strcmp$11=strcmp("Data", (menu->items + (signed long int)i)->name);
                if(return_value_strcmp$11 == 0)
                  sort->field = (enum GSortField_)SORT_BY_DATA;

                else
                {
                  return_value_strcmp$10=strcmp("Bandwidth", (menu->items + (signed long int)i)->name);
                  if(return_value_strcmp$10 == 0)
                    sort->field = (enum GSortField_)SORT_BY_BW;

                  else
                  {
                    return_value_strcmp$9=strcmp("Avg. Time Served", (menu->items + (signed long int)i)->name);
                    if(return_value_strcmp$9 == 0)
                      sort->field = (enum GSortField_)SORT_BY_AVGTS;

                    else
                    {
                      return_value_strcmp$8=strcmp("Cum. Time Served", (menu->items + (signed long int)i)->name);
                      if(return_value_strcmp$8 == 0)
                        sort->field = (enum GSortField_)SORT_BY_CUMTS;

                      else
                      {
                        return_value_strcmp$7=strcmp("Max. Time Served", (menu->items + (signed long int)i)->name);
                        if(return_value_strcmp$7 == 0)
                          sort->field = (enum GSortField_)SORT_BY_MAXTS;

                        else
                        {
                          return_value_strcmp$6=strcmp("Protocol", (menu->items + (signed long int)i)->name);
                          if(return_value_strcmp$6 == 0)
                            sort->field = (enum GSortField_)SORT_BY_PROT;

                          else
                          {
                            return_value_strcmp$5=strcmp("Method", (menu->items + (signed long int)i)->name);
                            if(return_value_strcmp$5 == 0)
                              sort->field = (enum GSortField_)SORT_BY_MTHD;

                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            quit = 0;
            break;
          }

        goto __CPROVER_DUMP_L54;
      }
      case 0632:

      case 113:
        quit = 0;
      default:
      {

      __CPROVER_DUMP_L54:
        ;
        wrefresh(win);
      }
    }
  }
  i = 0;
  for( ; !(i >= n); i = i + 1)
    free((void *)(menu->items + (signed long int)i)->name);
  free((void *)menu->items);
  free((void *)menu);
  signed int tmp_if_expr$14;
  if(!(main_win == ((struct _win_st *)NULL)))
    tmp_if_expr$14 = (signed int)main_win->_maxy + 1;

  else
    tmp_if_expr$14 = -1;
  wtouchln(main_win, 0, tmp_if_expr$14, 1);
  close_win(win);
  wrefresh(main_win);
}

// locate_attr_color
// file src/color.c line 405
static void locate_attr_color(struct GColors_ *color, const char *attr)
{
  char *return_value_strstr$1;
  return_value_strstr$1=strstr(attr, "bold");
  if(!(return_value_strstr$1 == ((char *)NULL)))
    color->attr = color->attr | (signed int)((unsigned long int)1UL << 13 + 8);

  char *return_value_strstr$2;
  return_value_strstr$2=strstr(attr, "underline");
  if(!(return_value_strstr$2 == ((char *)NULL)))
    color->attr = color->attr | (signed int)((unsigned long int)1UL << 9 + 8);

  char *return_value_strstr$3;
  return_value_strstr$3=strstr(attr, "normal");
  if(!(return_value_strstr$3 == ((char *)NULL)))
    color->attr = color->attr | (signed int)(1UL - 1UL);

  char *return_value_strstr$4;
  return_value_strstr$4=strstr(attr, "reverse");
  if(!(return_value_strstr$4 == ((char *)NULL)))
    color->attr = color->attr | (signed int)((unsigned long int)1UL << 10 + 8);

  char *return_value_strstr$5;
  return_value_strstr$5=strstr(attr, "standout");
  if(!(return_value_strstr$5 == ((char *)NULL)))
    color->attr = color->attr | (signed int)((unsigned long int)1UL << 10 + 8);

  char *return_value_strstr$6;
  return_value_strstr$6=strstr(attr, "blink");
  if(!(return_value_strstr$6 == ((char *)NULL)))
    color->attr = color->attr | (signed int)((unsigned long int)1UL << 11 + 8);

}

// lock_spinner
// file src/parser.c line 1046
static void lock_spinner(void)
{
  if(!(parsing_spinner == ((struct GSpinner_$0 *)NULL)))
  {
    if((signed int)parsing_spinner->state == SPN_RUN)
      pthread_mutex_lock(&parsing_spinner->mutex);

  }

}

// lprint_col
// file src/gdashboard.c line 985
static void lprint_col(struct _win_st$2 *win, signed int y, signed int *x, signed int len, const char *fmt, const char *str)
{
  struct GColors_ *color;
  color=get_color((enum CSTM_COLORS)COLOR_PANEL_COLS);
  wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  mvwprintw(win, y, *x, fmt, str);
  print_horizontal_dash(win, y + 1, *x, len);
  wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  *x = *x + len + 1;
}

// ltrim
// file src/util.c line 419
char * ltrim(char *s)
{
  char *begin = s;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*begin]) == 0)
      break;

    begin = begin + 1l;
  }
  while((_Bool)1);
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(begin);
  memmove((void *)s, (const void *)begin, return_value_strlen$2 + (unsigned long int)1);
  return s;
}

// main
// file src/goaccess.c line 962
signed int main(signed int argc, char **argv)
{
  signed int quit = 0;
  setup_signal_handlers();
  verify_global_config(argc, argv);
  parse_conf_file(&argc, &argv);
  parse_cmd_line(argc, argv);
  init_storage();
  set_locale();
  init_geoip();
  logger=init_log();
  set_signal_data((void *)logger);
  parsing_spinner=new_gspinner();
  parsing_spinner->processed = &logger->processed;
  _Bool tmp_if_expr$2;
  _Bool return_value_has_colors$1;
  signed int return_value_isatty$3;
  if(!(conf.output_html == 0))
    ui_spinner_create(parsing_spinner);

  else
  {
    set_input_opts();
    if(!(conf.no_color == 0))
      tmp_if_expr$2 = (_Bool)1;

    else
    {
      return_value_has_colors$1=has_colors();
      tmp_if_expr$2 = (signed int)return_value_has_colors$1 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$2)
    {
      conf.color_scheme = 0;
      conf.no_color = 1;
    }

    else
      start_color();
    init_colors(0);
    init_windows(&header_win, &main_win);
    set_curses_spinner(parsing_spinner);
    return_value_isatty$3=isatty(0);
    if(!(return_value_isatty$3 == 0) && (conf.log_format == ((char *)NULL) || !(conf.load_conf_dlg == 0)))
    {
      wrefresh(stdscr);
      quit=render_confdlg(logger, parsing_spinner);
    }

    else
      ui_spinner_create(parsing_spinner);
  }

out:
  ;
  time(&start_proc);
  if(!(conf.load_from_disk == 0))
    set_general_stats();

  signed int return_value_parse_log$4;
  if(quit == 0)
  {
    return_value_parse_log$4=parse_log(&logger, (char *)(void *)0, -1);
    if(!(return_value_parse_log$4 == 0))
      do
      {
        endwin();
        fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:31");
        fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
        fprintf(stderr, "\nFatal error has occurred");
        fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/goaccess.c", (const void *)"main", 1027);
        fprintf(stderr, "Error while processing file");
        fprintf(stderr, "\n\n");

      __CPROVER_DUMP_L10:
        ;
        exit(1);
      }
      while((_Bool)0);

  }

  logger->offset = logger->processed;
  if(logger->valid == 0u)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:31");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/goaccess.c", (const void *)"main", 1033);
      fprintf(stderr, "Nothing valid to process.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L13:
      ;
      exit(1);
    }
    while((_Bool)0);

  gdns_init();
  parse_initial_sort();
  allocate_holder();
  end_spinner();
  time(&end_proc);
  if(!(conf.output_html == 0))
    standard_output();

  else
    curses_output();
  house_keeping();
  return 0;
}

// map_log
// file src/parser.c line 1638
static void map_log(struct GLogItem_ *glog, const struct GParse_ *parse, enum MODULES module)
{
  struct GKeyData_ kdata;
  char *uniq_key = (char *)(void *)0;
  new_modulekey(&kdata);
  signed int return_value;
  return_value=parse->key_data(&kdata, glog);
  signed int return_value_include_uniq$1;
  if(!(return_value == 1))
  {
    if(!(parse->datamap == ((void (*)(signed int, const char *, enum MODULES))NULL)))
    {
      if(!(kdata.data_key == NULL))
        kdata.data_nkey=insert_keymap((const char *)kdata.data_key, module);

    }

    if(!(parse->visitor == ((void (*)(signed int, enum MODULES))NULL)))
    {
      if(!(glog->uniq_key == ((char *)NULL)))
      {
        return_value_include_uniq$1=include_uniq(glog);
        if(!(return_value_include_uniq$1 == 0))
        {
          uniq_key=ints_to_str(glog->uniq_nkey, kdata.data_nkey);
          kdata.uniq_nkey=insert_uniqmap(uniq_key, module);
          if(kdata.uniq_nkey == 0)
            free((void *)uniq_key);

        }

      }

    }

    if(!(parse->rootmap == ((void (*)(signed int, const char *, enum MODULES))NULL)))
    {
      if(!(kdata.root_key == NULL))
        kdata.root_nkey=insert_keymap((const char *)kdata.root_key, module);

    }

    if(!(parse->datamap == ((void (*)(signed int, const char *, enum MODULES))NULL)))
    {
      if(!(kdata.data_key == NULL))
        set_datamap(glog, &kdata, parse);

    }

  }

}

// module_to_desc
// file src/ui.h line 298
const char * module_to_desc(enum MODULES module)
{
  static const char *modules[13l] = { "Hits having the same IP, date and agent are a unique visit.", 
    "Top requests sorted by hits [, avgts, cumts, maxts, mthd, proto]", 
    "Top static requests sorted by hits [, avgts, cumts, maxts, mthd, proto]", 
    "Top 404 Not Found URLs sorted by hits [, avgts, cumts, maxts, mthd, proto]", 
    "Top visitor hosts sorted by hits [, avgts, cumts, maxts]", 
    "Top Operating Systems sorted by hits [, avgts, cumts, maxts]", 
    "Top Browsers sorted by hits [, avgts, cumts, maxts]", 
    "Data sorted by hour [, avgts, cumts, maxts]", 
    "Top Requested Referrers sorted by hits [, avgts, cumts, maxts]", 
    "Top Referring Sites sorted by hits [, avgts, cumts, maxts]", 
    "Top Keyphrases sorted by hits [, avgts, cumts, maxts]", 
    "Continent > Country sorted by unique hits [, avgts, cumts, maxts]", 
    "Top HTTP Status Codes sorted by hits [, avgts, cumts, maxts]" };
  return modules[(signed long int)module];
}

// module_to_head
// file src/ui.h line 299
const char * module_to_head(enum MODULES module)
{
  static const char *modules[13l] = { "Unique visitors per day", "Top requests (URLs)", "Top static requests (e.g. jpg, png, js, css..)", 
    "HTTP 404 Not Found URLs", "Visitor hostnames and IPs", "Operating Systems", "Browsers", "Time Distribution", "Referrers URLs", "Referring Sites", "Keyphrases from Google's search engine", 
    "Geo Location", "HTTP Status Codes" };
  return modules[(signed long int)module];
}

// module_to_id
// file src/ui.h line 300
const char * module_to_id(enum MODULES module)
{
  static const char *modules[13l] = { "visitors", "requests", "static_requests", "not_found", "hosts", "os", "browsers", "visit_time", "referrers", "referring_sites", "keyphrases", "geolocation", "status_codes" };
  return modules[(signed long int)module];
}

// module_to_label
// file src/ui.h line 301
const char * module_to_label(enum MODULES module)
{
  static const char *modules[13l] = { "Visitors", "Requests", "Static Requests", "Not Found", "Hosts", "OS", "Browsers", "Time", "Referrers", "Referring Sites", "Keyphrases", "Geo Location", "Status Codes" };
  return modules[(signed long int)module];
}

// new_gagent_item
// file src/commons.c line 201
struct GAgentItem_ * new_gagent_item(unsigned int size)
{
  struct GAgentItem_ *item;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)size, sizeof(struct GAgentItem_) /*8ul*/ );
  item = (struct GAgentItem_ *)return_value_xcalloc$1;
  return item;
}

// new_gagents
// file src/commons.c line 192
struct GAgents_ * new_gagents(void)
{
  struct GAgents_ *agents;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GAgents_) /*16ul*/ );
  agents = (struct GAgents_ *)return_value_xmalloc$1;
  memset((void *)agents, 0, sizeof(struct GAgents_) /*16ul*/ );
  return agents;
}

// new_gcolorpair
// file src/color.c line 256
static struct GColorPair_ * new_gcolorpair(void)
{
  struct GColorPair_ *pair;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)1, sizeof(struct GColorPair_) /*6ul*/ );
  pair = (struct GColorPair_ *)return_value_xcalloc$1;
  pair->idx = (signed short int)2;
  return pair;
}

// new_gcolors
// file src/color.c line 247
static struct GColors_ * new_gcolors(void)
{
  struct GColors_ *color;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)1, sizeof(struct GColors_) /*24ul*/ );
  color = (struct GColors_ *)return_value_xcalloc$1;
  color->module = (signed short int)-1;
  return color;
}

// new_gdash
// file src/gdashboard.c line 123
struct GDash_ * new_gdash(void)
{
  struct GDash_ *new_gdash$$1$$dash;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GDash_) /*1048ul*/ );
  new_gdash$$1$$dash = (struct GDash_ *)return_value_xmalloc$1;
  memset((void *)new_gdash$$1$$dash, 0, sizeof(struct GDash_) /*1048ul*/ );
  new_gdash$$1$$dash->total_alloc = 0;
  return new_gdash$$1$$dash;
}

// new_gdata
// file src/gdashboard.c line 134
struct GDashData_ * new_gdata(unsigned int size)
{
  struct GDashData_ *data;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)size, sizeof(struct GDashData_) /*16ul*/ );
  data = (struct GDashData_ *)return_value_xcalloc$1;
  return data;
}

// new_gholder
// file src/gdashboard.c line 176
struct GHolder_ * new_gholder(unsigned int size)
{
  struct GHolder_ *new_gholder$$1$$holder;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc((unsigned long int)size * sizeof(struct GHolder_) /*32ul*/ );
  new_gholder$$1$$holder = (struct GHolder_ *)return_value_xmalloc$1;
  memset((void *)new_gholder$$1$$holder, 0, (unsigned long int)size * sizeof(struct GHolder_) /*32ul*/ );
  return new_gholder$$1$$holder;
}

// new_gholder_item
// file src/gdashboard.c line 186
static struct GHolderItem_ * new_gholder_item(unsigned int size)
{
  struct GHolderItem_ *item;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ );
  item = (struct GHolderItem_ *)return_value_xcalloc$1;
  return item;
}

// new_gmenu
// file src/gmenu.c line 34
struct GMenu_$0 * new_gmenu(struct _win_st$0 *parent, signed int h, signed int w, signed int y, signed int x)
{
  struct GMenu_$0 *menu;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GMenu_$0) /*56ul*/ );
  menu = (struct GMenu_$0 *)return_value_xmalloc$1;
  memset((void *)menu, 0, sizeof(struct GMenu_$0) /*56ul*/ );
  menu->count = 0;
  menu->idx = 0;
  menu->multiple = (unsigned short int)0;
  menu->selectable = (unsigned short int)0;
  menu->start = 0;
  menu->status = (unsigned short int)0;
  menu->h = h;
  menu->w = w;
  menu->x = x;
  menu->y = y;
  menu->win=derwin(parent, menu->h, menu->w, menu->y, menu->x);
  return menu;
}

// new_gmetrics
// file src/gstorage.h line 133
struct GMetrics * new_gmetrics(void)
{
  struct GMetrics *metrics;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)1, sizeof(struct GMetrics) /*80ul*/ );
  metrics = (struct GMetrics *)return_value_xcalloc$1;
  return metrics;
}

// new_grawdata
// file src/parser.c line 312
struct GRawData_ * new_grawdata(void)
{
  struct GRawData_ *raw_data;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GRawData_) /*24ul*/ );
  raw_data = (struct GRawData_ *)return_value_xmalloc$1;
  memset((void *)raw_data, 0, sizeof(struct GRawData_) /*24ul*/ );
  return raw_data;
}

// new_grawdata_item
// file src/parser.c line 322
struct GRawDataItem_ * new_grawdata_item(unsigned int size)
{
  struct GRawDataItem_ *item;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)size, sizeof(struct GRawDataItem_) /*16ul*/ );
  item = (struct GRawDataItem_ *)return_value_xcalloc$1;
  return item;
}

// new_gspinner
// file src/ui.h line 294
struct GSpinner_ * new_gspinner(void)
{
  struct GSpinner_ *spinner;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)1, sizeof(struct GSpinner_) /*112ul*/ );
  spinner = (struct GSpinner_ *)return_value_xcalloc$1;
  spinner->label = "Parsing...";
  spinner->state = (enum anonymous$7)SPN_RUN;
  spinner->curses = 0;
  if(!(conf.load_from_disk == 0))
    conf.no_progress = 1;

  signed int return_value_pthread_mutex_init$2;
  return_value_pthread_mutex_init$2=pthread_mutex_init(&spinner->mutex, (const union anonymous$3 *)(void *)0);
  if(!(return_value_pthread_mutex_init$2 == 0))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:44");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/ui.c", (const void *)"new_gspinner", 929);
      fprintf(stderr, "Failed init thread mutex");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L3:
      ;
      exit(1);
    }
    while((_Bool)0);

  return spinner;
}

// new_gstorage
// file src/gstorage.c line 35
struct GStorage_ * new_gstorage(unsigned int size)
{
  struct GStorage_ *store;
  void *return_value_xcalloc$1;
  return_value_xcalloc$1=xcalloc((unsigned long int)size, sizeof(struct GStorage_) /*16ul*/ );
  store = (struct GStorage_ *)return_value_xcalloc$1;
  return store;
}

// new_gsubitem
// file src/gdashboard.c line 207
static struct GSubItem_ * new_gsubitem(enum MODULES module, struct GMetrics *nmetrics)
{
  struct GSubItem_ *sub_item;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GSubItem_) /*32ul*/ );
  sub_item = (struct GSubItem_ *)return_value_xmalloc$1;
  sub_item->metrics = nmetrics;
  sub_item->module = module;
  sub_item->prev = (struct GSubItem_ *)(void *)0;
  sub_item->next = (struct GSubItem_ *)(void *)0;
  return sub_item;
}

// new_gsublist
// file src/gdashboard.c line 195
static struct GSubList_ * new_gsublist(void)
{
  struct GSubList_ *sub_list;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GSubList_) /*24ul*/ );
  sub_list = (struct GSubList_ *)return_value_xmalloc$1;
  sub_list->head = (struct GSubItem_ *)(void *)0;
  sub_list->tail = (struct GSubItem_ *)(void *)0;
  sub_list->size = 0;
  return sub_list;
}

// new_ht_metrics
// file src/gstorage.c line 50
struct GStorageMetrics_ * new_ht_metrics(void)
{
  struct GStorageMetrics_ *metrics;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(struct GStorageMetrics_) /*96ul*/ );
  metrics = (struct GStorageMetrics_ *)return_value_xmalloc$1;
  memset((void *)metrics, 0, sizeof(struct GStorageMetrics_) /*96ul*/ );
  metrics->keymap = (void *)0;
  metrics->datamap = (void *)0;
  metrics->rootmap = (void *)0;
  metrics->uniqmap = (void *)0;
  metrics->hits = (void *)0;
  metrics->visitors = (void *)0;
  metrics->bw = (void *)0;
  metrics->cumts = (void *)0;
  metrics->maxts = (void *)0;
  metrics->protocols = (void *)0;
  metrics->methods = (void *)0;
  metrics->agents = (void *)0;
  return metrics;
}

// new_int_ht
// file src/glibht.c line 55
static struct _GHashTable * new_int_ht(void (*d1)(void *), void (*d2)(void *))
{
  struct _GHashTable *return_value_g_hash_table_new_full$1;
  return_value_g_hash_table_new_full$1=g_hash_table_new_full(g_int_hash, g_int_equal, d1, d2);
  return return_value_g_hash_table_new_full$1;
}

// new_modulekey
// file src/parser.c line 283
static void new_modulekey(struct GKeyData_ *kdata)
{
  struct GKeyData_ key = { .data=(void *)0, .data_key=(void *)0, .data_nkey=0, .root=(void *)0,
    .root_key=(void *)0, .root_nkey=0,
    .uniq_key=(void *)0, .uniq_nkey=0 };
  *kdata = key;
}

// new_str_ht
// file src/glibht.c line 49
static struct _GHashTable * new_str_ht(void (*d1)(void *), void (*d2)(void *))
{
  struct _GHashTable *return_value_g_hash_table_new_full$1;
  return_value_g_hash_table_new_full$1=g_hash_table_new_full(g_str_hash, g_str_equal, d1, d2);
  return return_value_g_hash_table_new_full$1;
}

// next_module
// file src/goaccess.c line 622
static signed int next_module(void)
{
  gscroll.current = (enum MODULES)((signed int)gscroll.current + 1);
  if((signed int)gscroll.current == 13)
    gscroll.current = (enum MODULES)0;

  signed int return_value_ignore_panel$1;
  return_value_ignore_panel$1=ignore_panel(gscroll.current);
  if(!(return_value_ignore_panel$1 == 0))
  {
    disabled_panel_msg(gscroll.current);
    return 1;
  }

  else
    return 0;
}

// output_csv
// file src/csv.c line 276
void output_csv(struct GLog_ *logger, struct GHolder_ *holder)
{
  enum MODULES module;
  struct _IO_FILE *fp = stdout;
  if(conf.no_csv_summary == 0)
    print_csv_summary(fp, logger);

  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    const struct GPanel_$0 *panel;
    panel=panel_lookup(module);
    if(!(panel == ((const struct GPanel_$0 *)NULL)))
    {
      signed int return_value_ignore_panel$1;
      return_value_ignore_panel$1=ignore_panel(module);
      if(return_value_ignore_panel$1 == 0)
        panel->render(fp, holder + (signed long int)module, (signed int)logger->valid);

    }

  }
  fclose(fp);
}

// output_html
// file src/output.h line 139
void output_html(struct GLog_ *logger, struct GHolder_ *holder)
{
  struct _IO_FILE *fp = stdout;
  enum MODULES module;
  char now[20l];
  const struct GOutput_ *output;
  const struct GPanel_$1 *panel;
  generate_time();
  strftime(now, (unsigned long int)20, "%Y-%m-%d %H:%M:%S", now_tm);
  setlocale(1, "");
  print_html_header(fp, now);
  print_pure_menu(fp, now);
  print_html_summary(fp, logger);
  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    panel=panel_lookup$link3(module);
    output=output_lookup(module);
    if(!(panel == ((const struct GPanel_$1 *)NULL)))
    {
      signed int return_value_ignore_panel$1;
      return_value_ignore_panel$1=ignore_panel(module);
      if(return_value_ignore_panel$1 == 0)
        print_html_common(fp, holder + (signed long int)module, (signed int)logger->processed, panel, output);

    }

  }
  print_html_footer(fp);
  fclose(fp);
}

// output_json
// file src/json.h line 30
void output_json(struct GLog_ *logger, struct GHolder_ *holder)
{
  enum MODULES module;
  struct _IO_FILE *fp = stdout;
  fprintf(fp, "{\n");
  print_json_summary(fp, logger);
  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    const struct GPanel_$0 *panel;
    panel=panel_lookup$link2(module);
    if(!(panel == ((const struct GPanel_$0 *)NULL)))
    {
      signed int return_value_ignore_panel$1;
      return_value_ignore_panel$1=ignore_panel(module);
      if(return_value_ignore_panel$1 == 0)
      {
        panel->render(fp, holder + (signed long int)module, (signed int)logger->valid);
        if(!((signed int)module == 13))
          fprintf(fp, ",\n");

        else
          fprintf(fp, "\n");
      }

    }

  }
  fprintf(fp, "}");
  fclose(fp);
}

// output_lookup
// file src/ui.h line 293
struct GOutput_ * output_lookup(enum MODULES module)
{
  signed int i;
  signed int num_panels = (signed int)(sizeof(struct GOutput_ [13l]) /*208ul*/  / sizeof(struct GOutput_) /*16ul*/ );
  i = 0;
  for( ; !(i >= num_panels); i = i + 1)
    if(outputting[(signed long int)i].module == module)
      return &outputting[(signed long int)i];

  return (struct GOutput_ *)(void *)0;
}

// page_down_module
// file src/goaccess.c line 513
static void page_down_module(void)
{
  signed int exp_size;
  exp_size=get_num_expanded_data_rows();
  signed int *scroll_ptr;
  signed int *offset_ptr;
  scroll_ptr = &gscroll.module[(signed long int)gscroll.current].scroll;
  offset_ptr = &gscroll.module[(signed long int)gscroll.current].offset;
  if(!(gscroll.expanded == 0))
  {
    *scroll_ptr = *scroll_ptr + exp_size;
    if(*scroll_ptr >= dash->module[(signed long int)gscroll.current].idx_data + -1)
      *scroll_ptr = dash->module[(signed long int)gscroll.current].idx_data - 1;

    if(*scroll_ptr >= exp_size)
    {
      if(*scroll_ptr >= *offset_ptr + exp_size)
        *offset_ptr = *offset_ptr + exp_size;

    }

    if(*offset_ptr + exp_size >= dash->module[(signed long int)gscroll.current].idx_data + -1)
      *offset_ptr = dash->module[(signed long int)gscroll.current].idx_data - exp_size;

    if(!(*scroll_ptr >= exp_size + -1))
      *offset_ptr = 0;

  }

}

// page_up_module
// file src/goaccess.c line 491
static void page_up_module(void)
{
  signed int exp_size;
  exp_size=get_num_expanded_data_rows();
  signed int *scroll_ptr;
  signed int *offset_ptr;
  scroll_ptr = &gscroll.module[(signed long int)gscroll.current].scroll;
  offset_ptr = &gscroll.module[(signed long int)gscroll.current].offset;
  if(!(gscroll.expanded == 0))
  {
    *scroll_ptr = *scroll_ptr - exp_size;
    if(!(*scroll_ptr >= 0))
      *scroll_ptr = 0;

    if(!(*scroll_ptr >= *offset_ptr))
      *offset_ptr = *offset_ptr - exp_size;

    if(!(*offset_ptr >= 1))
      *offset_ptr = 0;

  }

}

// panel_lookup
// file src/csv.c line 74
static struct GPanel_$0 * panel_lookup(enum MODULES module)
{
  signed int i;
  signed int num_panels = (signed int)(sizeof(struct GPanel_$0 [13l]) /*208ul*/  / sizeof(struct GPanel_$0) /*16ul*/ );
  i = 0;
  for( ; !(i >= num_panels); i = i + 1)
    if(paneling[(signed long int)i].module == module)
      return &paneling[(signed long int)i];

  return (struct GPanel_$0 *)(void *)0;
}

// panel_lookup$link1
// file src/gdashboard.c line 95
static struct GPanel_ * panel_lookup$link1(enum MODULES module$link1)
{
  signed int i$link1;
  signed int num_panels$link1 = (signed int)(sizeof(struct GPanel_ [14l]) /*448ul*/  / sizeof(struct GPanel_) /*32ul*/ );
  i$link1 = 0;
  for( ; !(i$link1 >= num_panels$link1); i$link1 = i$link1 + 1)
    if(paneling$link1[(signed long int)i$link1].module == module$link1)
      return &paneling$link1[(signed long int)i$link1];

  return (struct GPanel_ *)(void *)0;
}

// panel_lookup$link2
// file src/json.c line 74
static struct GPanel_$0 * panel_lookup$link2(enum MODULES module$link2)
{
  signed int i$link2;
  signed int num_panels$link2 = (signed int)(sizeof(struct GPanel_$0 [13l]) /*208ul*/  / sizeof(struct GPanel_$0) /*16ul*/ );
  i$link2 = 0;
  for( ; !(i$link2 >= num_panels$link2); i$link2 = i$link2 + 1)
    if(paneling$link2[(signed long int)i$link2].module == module$link2)
      return &paneling$link2[(signed long int)i$link2];

  return (struct GPanel_$0 *)(void *)0;
}

// panel_lookup$link3
// file src/output.c line 923
static struct GPanel_$1 * panel_lookup$link3(enum MODULES module$link3)
{
  signed int i$link3;
  signed int num_panels$link3 = (signed int)(sizeof(struct GPanel_$1 [13l]) /*416ul*/  / sizeof(struct GPanel_$1) /*32ul*/ );
  i$link3 = 0;
  for( ; !(i$link3 >= num_panels$link3); i$link3 = i$link3 + 1)
    if(paneling$link3[(signed long int)i$link3].module == module$link3)
      return &paneling$link3[(signed long int)i$link3];

  return (struct GPanel_$1 *)(void *)0;
}

// panel_lookup$link4
// file src/parser.c line 299
static struct GParse_ * panel_lookup$link4(enum MODULES module$link4)
{
  signed int i$link4;
  signed int num_panels$link4 = (signed int)(sizeof(struct GParse_ [13l]) /*1248ul*/  / sizeof(struct GParse_) /*96ul*/ );
  i$link4 = 0;
  for( ; !(i$link4 >= num_panels$link4); i$link4 = i$link4 + 1)
    if(paneling$link4[(signed long int)i$link4].module == module$link4)
      return &paneling$link4[(signed long int)i$link4];

  return (struct GParse_ *)(void *)0;
}

// parse_android
// file src/opesys.c line 228
static char * parse_android(char *agent)
{
  char *p = agent;
  for( ; !((signed int)*p == 59); p = p + 1l)
  {
    if((signed int)*p == 41)
      break;

    if((signed int)*p == 40)
      break;

    if((signed int)*p == 0)
      break;

  }
  *p = (char)0;
  return agent;
}

// parse_attr_color
// file src/color.c line 422
static signed int parse_attr_color(struct GColors_ *color, const char *value)
{
  char *line;
  char *ptr;
  char *start;
  signed int ret = 0;
  line=xstrdup(value);
  start=strchr(line, 32);
  _Bool tmp_if_expr$1;
  if(start == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = !(start[(signed long int)1] != 0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)

    __CPROVER_DUMP_L3:
      ;

  else
  {
    start = start + 1l;
    for( ; (_Bool)1; start = ptr + (signed long int)1)
    {
      ptr=strpbrk(start, ", ");
      if(!(ptr == ((char *)NULL)))
        *ptr = (char)0;

      locate_attr_color(color, start);
      if(ptr == ((char *)NULL))
        break;

    }
  }

clean:
  ;
  free((void *)line);
  return ret;
}

// parse_bg_fg_color
// file src/color.c line 387
static signed int parse_bg_fg_color(struct GColorPair_ *pair, const char *value)
{
  char bgcolor[9l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char fgcolor[9l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int ret = 0;
  signed int return_value_sscanf$1;
  return_value_sscanf$1=sscanf(value, "%8[^:]:%8[^ ]", (const void *)fgcolor, (const void *)bgcolor);
  if(!(return_value_sscanf$1 == 2))
    return 1;

  else
  {
    signed int return_value_extract_color$2;
    return_value_extract_color$2=extract_color(bgcolor);
    pair->bg = (signed short int)return_value_extract_color$2;
    if((signed int)pair->bg == -2)
      ret = 1;

    signed int return_value_extract_color$3;
    return_value_extract_color$3=extract_color(fgcolor);
    pair->fg = (signed short int)return_value_extract_color$3;
    if((signed int)pair->fg == -2)
      ret = 1;

    return ret;
  }
}

// parse_cmd_line
// file src/goaccess.c line 931
static void parse_cmd_line(signed int argc, char **argv)
{
  read_option_args(argc, argv);
  signed int return_value_isatty$1;
  return_value_isatty$1=isatty(1);
  if(return_value_isatty$1 == 0 || !(conf.output_format == ((char *)NULL)))
    conf.output_html = 1;

  signed int return_value_isatty$2;
  if(!(conf.ifile == ((char *)NULL)))
  {
    return_value_isatty$2=isatty(0);
    if(return_value_isatty$2 == 0)
    {
      if(conf.output_html == 0)
        cmd_help();

    }

  }

  signed int return_value_isatty$3;
  if(conf.ifile == ((char *)NULL))
  {
    return_value_isatty$3=isatty(0);
    if(!(return_value_isatty$3 == 0))
    {
      if(conf.load_from_disk == 0)
        cmd_help();

    }

  }

  set_default_static_files();
}

// parse_color
// file src/color.c line 589
static void parse_color(char *line)
{
  struct GSLList_ *match = (struct GSLList_ *)(void *)0;
  struct GColors_ *color = (struct GColors_ *)(void *)0;
  struct GColorPair_ *pair = (struct GColorPair_ *)(void *)0;
  color=new_gcolors();
  pair=new_gcolorpair();
  parse_color_line(pair, color, line);
  if(pair_list == ((struct GSLList_ *)NULL))
    pair_list=list_create((void *)pair);

  else
  {
    match=list_find(pair_list, find_pair_in_list, (void *)pair);
    if(!(match == ((struct GSLList_ *)NULL)))
    {
      free((void *)pair);
      pair = (struct GColorPair_ *)match->data;
    }

    else
    {
      signed int return_value_list_count$1;
      return_value_list_count$1=list_count(pair_list);
      pair->idx = pair->idx + (signed short int)return_value_list_count$1;
      pair_list=list_insert_prepend(pair_list, (void *)pair);
    }
  }
  color->pair = pair;
  struct GSLList_ *return_value_list_find$2;
  if(color_list == ((struct GSLList_ *)NULL))
    color_list=list_create((void *)color);

  else
  {
    return_value_list_find$2=list_find(color_list, find_color_in_list, (void *)color);
    if(!(return_value_list_find$2 == ((struct GSLList_ *)NULL)))
      free((void *)color);

    else
      color_list=list_insert_prepend(color_list, (void *)color);
  }
  if(match == ((struct GSLList_ *)NULL))
    init_pair(color->pair->idx, color->pair->fg, color->pair->bg);

  free((void *)line);
}

// parse_color_line
// file src/color.c line 553
static void parse_color_line(struct GColorPair_ *pair, struct GColors_ *color, char *line)
{
  char *val;
  signed int item = 0;
  unsigned long int idx;
  idx=strcspn(line, " \t");
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(line);
  if(return_value_strlen$1 == idx)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"parse_color_line", 562);
      fprintf(stderr, "Malformed color key at line: %s", line);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  line[(signed long int)idx] = (char)0;
  item=get_color_item_enum(line);
  if(item == -1)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"parse_color_line", 566);
      fprintf(stderr, "Unable to find color key: %s", line);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L5:
      ;
      exit(1);
    }
    while((_Bool)0);

  val = line + (signed long int)(idx + (unsigned long int)1);
  idx=strspn(val, " \t");
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(line);
  if(return_value_strlen$2 == idx)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"parse_color_line", 572);
      fprintf(stderr, "Malformed color value at line: %s", line);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L8:
      ;
      exit(1);
    }
    while((_Bool)0);

  val = val + (signed long int)idx;
  signed int return_value_parse_bg_fg_color$3;
  return_value_parse_bg_fg_color$3=parse_bg_fg_color(pair, val);
  if(return_value_parse_bg_fg_color$3 == 1)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"parse_color_line", 577);
      fprintf(stderr, "Invalid bg/fg color pairs at: %s %s", line, val);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L11:
      ;
      exit(1);
    }
    while((_Bool)0);

  signed int return_value_parse_attr_color$4;
  return_value_parse_attr_color$4=parse_attr_color(color, val);
  if(return_value_parse_attr_color$4 == 1)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"parse_color_line", 580);
      fprintf(stderr, "Invalid color attrs at: %s %s", line, val);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L14:
      ;
      exit(1);
    }
    while((_Bool)0);

  signed int return_value_parse_module_color$5;
  return_value_parse_module_color$5=parse_module_color(color, val);
  if(return_value_parse_module_color$5 == 1)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:22");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/color.c", (const void *)"parse_color_line", 583);
      fprintf(stderr, "Invalid color module at: %s %s", line, val);
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L17:
      ;
      exit(1);
    }
    while((_Bool)0);

  color->item = (enum CSTM_COLORS)item;
}

// parse_colors
// file src/color.c line 626
static void parse_colors(const char **colors, unsigned long int n)
{
  char *line;
  unsigned long int i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
  {
    line=strdup(colors[(signed long int)i]);
    char *return_value_strchr$1;
    return_value_strchr$1=strchr(line, 58);
    if(return_value_strchr$1 == ((char *)NULL))
      free((void *)line);

    else
      parse_color(line);
  }
}

// parse_conf_file
// file src/settings.h line 155
signed int parse_conf_file(signed int *argc, char ***argv)
{
  char line[513l];
  char *path = (char *)(void *)0;
  char *val;
  char *opt;
  char *p;
  struct _IO_FILE *file;
  signed int i;
  unsigned long int idx;
  char *return_value_xstrdup$1;
  return_value_xstrdup$1=xstrdup((char *)*argv[(signed long int)0]);
  append_to_argv(&nargc, &nargv, return_value_xstrdup$1);
  path=get_config_file_path();
  char *return_value_fgets$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  char *return_value_xstrdup$11;
  char *return_value_xstrdup$13;
  if(path == ((char *)NULL))
    return 2;

  else
  {
    file=fopen(path, "r");
    if(file == ((struct _IO_FILE *)NULL))
    {
      free((void *)path);
      return 2;
    }

    else
    {
      do
      {
        return_value_fgets$2=fgets(line, (signed int)sizeof(char [513l]) /*513ul*/ , file);
        if(return_value_fgets$2 == ((char *)NULL))
          break;

        if((signed int)line[0l] == 10)
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = (signed int)line[(signed long int)0] == 13 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$3)
          tmp_if_expr$4 = (_Bool)1;

        else
          tmp_if_expr$4 = (signed int)line[(signed long int)0] == 35 ? (_Bool)1 : (_Bool)0;
        if(!tmp_if_expr$4)
        {
          idx=strcspn(line, " \t");
          unsigned long int return_value_strlen$5;
          return_value_strlen$5=strlen(line);
          if(return_value_strlen$5 == idx)
            do
            {
              endwin();
              fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:42");
              fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
              fprintf(stderr, "\nFatal error has occurred");
              fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/settings.c", (const void *)"parse_conf_file", 221);
              fprintf(stderr, "Malformed config key at line: %s", (const void *)line);
              fprintf(stderr, "\n\n");

            __CPROVER_DUMP_L8:
              ;
              exit(1);
            }
            while((_Bool)0);

          line[(signed long int)idx] = (char)0;
          do
          {
            p=strpbrk(line, "_");
            if(p == ((char *)NULL))
              break;

            *p = (char)45;
          }
          while((_Bool)1);
          signed int return_value_in_ignore_cmd_opts$6;
          return_value_in_ignore_cmd_opts$6=in_ignore_cmd_opts(line);
          if(return_value_in_ignore_cmd_opts$6 == 0)
          {
            val = line + (signed long int)(idx + (unsigned long int)1);
            idx=strspn(val, " \t");
            unsigned long int return_value_strlen$7;
            return_value_strlen$7=strlen(line);
            if(return_value_strlen$7 == idx)
              do
              {
                endwin();
                fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:42");
                fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
                fprintf(stderr, "\nFatal error has occurred");
                fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/settings.c", (const void *)"parse_conf_file", 238);
                fprintf(stderr, "Malformed config value at line: %s", (const void *)line);
                fprintf(stderr, "\n\n");

              __CPROVER_DUMP_L13:
                ;
                exit(1);
              }
              while((_Bool)0);

            val = val + (signed long int)idx;
            val=trim_str(val);
            signed int return_value_strcmp$8;
            return_value_strcmp$8=strcmp("false", val);
            if(!(return_value_strcmp$8 == 0))
            {
              signed int return_value_snprintf$9;
              return_value_snprintf$9=snprintf((char *)(void *)0, (unsigned long int)0, "--%s", (const void *)line);
              void *return_value_xmalloc$10;
              return_value_xmalloc$10=xmalloc((unsigned long int)(return_value_snprintf$9 + 1));
              opt = (char *)return_value_xmalloc$10;
              sprintf(opt, "--%s", (const void *)line);
              append_to_argv(&nargc, &nargv, opt);
              signed int return_value_strcmp$12;
              return_value_strcmp$12=strcmp("true", val);
              if(!(return_value_strcmp$12 == 0))
              {
                return_value_xstrdup$11=xstrdup(val);
                append_to_argv(&nargc, &nargv, return_value_xstrdup$11);
              }

            }

          }

        }

      }
      while((_Bool)1);
      i = 1;
      for( ; !(i >= *argc); i = i + 1)
      {
        return_value_xstrdup$13=xstrdup((char *)(*argv)[(signed long int)i]);
        append_to_argv(&nargc, &nargv, return_value_xstrdup$13);
      }
      *argc = nargc;
      *argv = (char **)nargv;
      fclose(file);
      if(conf.iconfigfile == ((char *)NULL))
        conf.iconfigfile=xstrdup(path);

      free((void *)path);
      return 0;
    }
  }
}

// parse_format
// file src/parser.c line 999
static signed int parse_format(struct GLogItem_ *glog, char *str)
{
  const char *p;
  const char *lfmt = conf.log_format;
  signed int special = 0;
  _Bool tmp_if_expr$1;
  if(str == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$5;
  const unsigned short int **return_value___ctype_b_loc$4;
  if(tmp_if_expr$1)
    return 1;

  else
  {
    p = lfmt;
    for( ; !(*p == 0); p = p + 1l)
      if((signed int)*p == 37)
        special = special + 1;

      else
      {
        if(!(special == 0))
          tmp_if_expr$6 = (signed int)*p != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$6 = (_Bool)0;
        if(tmp_if_expr$6)
        {
          if(str == ((char *)NULL))
            tmp_if_expr$2 = (_Bool)1;

          else
            tmp_if_expr$2 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$2)
            return 0;

          signed int return_value_parse_specifier$3;
          return_value_parse_specifier$3=parse_specifier(glog, &str, p);
          if(return_value_parse_specifier$3 == 1)
            return 1;

          special = 0;
        }

        else
        {
          if(!(special == 0))
          {
            return_value___ctype_b_loc$4=__ctype_b_loc();
            tmp_if_expr$5 = ((signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)p[(signed long int)0]] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$5 = (_Bool)0;
          if(tmp_if_expr$5)
            return 1;

          else
            str = str + 1l;
        }
      }
    return 0;
  }
}

// parse_initial_sort
// file src/sort.h line 71
void parse_initial_sort(void)
{
  signed int i;
  char *view;
  char module[16l];
  char field[12l];
  char order[5l];
  i = 0;
  for( ; !(i >= conf.sort_panel_idx); i = i + 1)
  {
    view = conf.sort_panels[(signed long int)i];
    signed int return_value_sscanf$1;
    return_value_sscanf$1=sscanf(view, "%15[^','],%11[^','],%4s", (const void *)module, (const void *)field, (const void *)order);
    if(return_value_sscanf$1 == 3)
      set_initial_sort(module, field, order);

  }
}

// parse_log
// file src/parser.h line 135
signed int parse_log(struct GLog_ **logger, char *tail, signed int n)
{
  signed int test = -1 == n ? 0 : 1;
  verify_formats();
  if(!(tail == ((char *)NULL)))
  {
    signed int return_value_pre_process_log$1;
    return_value_pre_process_log$1=pre_process_log(*logger, tail, test);
    if(!(return_value_pre_process_log$1 == 0))
      return 1;

    return 0;
  }

  signed int return_value_read_log$2;
  return_value_read_log$2=read_log(logger, n);
  return return_value_read_log$2;
}

// parse_module_color
// file src/color.c line 452
static signed int parse_module_color(struct GColors_ *color, const char *value)
{
  char *line;
  line=xstrdup(value);
  char *p;
  p=strrchr(line, 32);
  _Bool tmp_if_expr$1;
  if(p == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = !(p[(signed long int)1] != 0) ? (_Bool)1 : (_Bool)0;
  signed int return_value_get_module_enum$2;
  if(tmp_if_expr$1)

    __CPROVER_DUMP_L3:
      ;

  else
  {
    return_value_get_module_enum$2=get_module_enum(p + (signed long int)1);
    color->module = (signed short int)return_value_get_module_enum$2;
    if((signed int)color->module == -1)

      __CPROVER_DUMP_L5:
        ;

  }

clean:
  ;
  free((void *)line);
  return 0;
}

// parse_opera
// file src/browsers.c line 295
static char * parse_opera(char *token)
{
  char *val;
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "Opera%s", token);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  val = (char *)return_value_xmalloc$2;
  sprintf(val, "Opera%s", token);
  return val;
}

// parse_osx
// file src/opesys.c line 207
static char * parse_osx(char *agent)
{
  signed int space = 0;
  char *p = agent;
  for( ; !((signed int)*p == 59); p = p + 1l)
  {
    if((signed int)*p == 41)
      break;

    if((signed int)*p == 40)
      break;

    if((signed int)*p == 0)
      break;

    if((signed int)*p == 95)
      *p = (char)46;

    if((signed int)*p == 32)
      space = space + 1;

    if(space >= 4)
      break;

  }
  *p = (char)0;
  return agent;
}

// parse_others
// file src/opesys.c line 189
static char * parse_others(char *agent, signed int spaces)
{
  char *p;
  signed int space = 0;
  p = agent;
  for( ; !((signed int)*p == 59); p = p + 1l)
  {
    if((signed int)*p == 41)
      break;

    if((signed int)*p == 40)
      break;

    if((signed int)*p == 0)
      break;

    if((signed int)*p == 32)
      space = space + 1;

    if(!(spaces >= space))
      break;

  }
  *p = (char)0;
  return agent;
}

// parse_raw_data
// file src/glibht.h line 39
struct GRawData_ * parse_raw_data(struct _GHashTable *ht, signed int ht_size, enum MODULES module)
{
  struct GRawData_ *raw_data;
  raw_data=new_grawdata();
  raw_data->size = ht_size;
  raw_data->module = module;
  raw_data->idx = 0;
  raw_data->items=new_grawdata_item((unsigned int)ht_size);
  g_hash_table_foreach(ht, (void (*)(void *, void *, void *))raw_data_iter, (void *)raw_data);
  sort_raw_data(raw_data, ht_size);
  return raw_data;
}

// parse_req
// file src/parser.c line 653
static char * parse_req(char *line, char **method, char **protocol)
{
  char *req = (char *)(void *)0;
  char *request = (char *)(void *)0;
  char *proto = (char *)(void *)0;
  char *dreq = (char *)(void *)0;
  const char *meth;
  signed long int rlen;
  meth=extract_method(line);
  char *return_value_alloc_string$3;
  char *return_value_xstrdup$5;
  char *return_value_xstrdup$6;
  if(meth == ((const char *)NULL))
    request=xstrdup(line);

  else
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(meth);
    req = line + (signed long int)return_value_strlen$1;
    proto=strstr(line, " HTTP/1.0");
    if(proto == ((char *)NULL))
    {
      proto=strstr(line, " HTTP/1.1");
      if(proto == ((char *)NULL))
      {
        char *return_value_alloc_string$2;
        return_value_alloc_string$2=alloc_string("-");
        return return_value_alloc_string$2;
      }

    }

    req = req + 1l;
    rlen = proto - req;
    if(!(rlen >= 1l))
    {
      return_value_alloc_string$3=alloc_string("-");
      return return_value_alloc_string$3;
    }

    void *return_value_xmalloc$4;
    return_value_xmalloc$4=xmalloc((unsigned long int)(rlen + (signed long int)1));
    request = (char *)return_value_xmalloc$4;
    strncpy(request, req, (unsigned long int)rlen);
    request[rlen] = (char)0;
    if(!(conf.append_method == 0))
    {
      return_value_xstrdup$5=xstrdup(meth);
      *method=strtoupper(return_value_xstrdup$5);
    }

    if(!(conf.append_protocol == 0))
    {
      proto = proto + 1l;
      return_value_xstrdup$6=xstrdup(proto);
      *protocol=strtoupper(return_value_xstrdup$6);
    }

  }
  dreq=decode_url(request);
  if(!(dreq == ((char *)NULL)))
  {
    if(dreq == ((char *)NULL))
      goto __CPROVER_DUMP_L7;

    free((void *)request);
    return dreq;
  }

  else
  {

  __CPROVER_DUMP_L7:
    ;
    return request;
  }
}

// parse_specifier
// file src/parser.c line 733
static signed int parse_specifier(struct GLogItem_ *glog, char **str, const char *p)
{
  struct tm$2 tm;
  const char *dfmt = conf.date_format;
  const char *tfmt = conf.time_format;
  char *pch;
  char *sEnd;
  char *bEnd;
  char *tkn = (char *)(void *)0;
  double serve_secs = 0.0;
  unsigned long int bandw = (unsigned long int)0;
  unsigned long int serve_time = (unsigned long int)0;
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  *return_value___errno_location$1 = 0;
  memset((void *)&tm, 0, sizeof(struct tm$2) /*56ul*/ );
  signed int return_value_count_matches$2;
  signed int return_value_str_to_time$3;
  signed int return_value_str_to_time$4;
  signed int return_value_str_to_time$5;
  signed int return_value_invalid_ipaddr$6;
  const char *return_value_extract_method$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  signed int return_value_invalid_protocol$10;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$13;
  signed int *return_value___errno_location$12;
  signed long int return_value_strtol$14;
  _Bool tmp_if_expr$15;
  _Bool tmp_if_expr$17;
  signed int *return_value___errno_location$16;
  signed int return_value_strcmp$18;
  _Bool tmp_if_expr$21;
  _Bool tmp_if_expr$20;
  unsigned long long int return_value_strtoull$22;
  _Bool tmp_if_expr$23;
  _Bool tmp_if_expr$25;
  signed int *return_value___errno_location$24;
  char *return_value_strchr$27;
  unsigned long long int return_value_strtoull$26;
  _Bool tmp_if_expr$28;
  _Bool tmp_if_expr$30;
  signed int *return_value___errno_location$29;
  _Bool tmp_if_expr$31;
  _Bool tmp_if_expr$33;
  signed int *return_value___errno_location$32;
  switch((signed int)*p)
  {
    case 100:
    {
      if(!(glog->date == ((char *)NULL)))
        return 1;

      return_value_count_matches$2=count_matches(dfmt, (char)32);
      tkn=parse_string(&(*str), p[(signed long int)1], return_value_count_matches$2 + 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_str_to_time$3=str_to_time(tkn, dfmt, &tm);
      if(!(return_value_str_to_time$3 == 0))
      {
        free((void *)tkn);
        return 1;
      }

      glog->date = tkn;
      break;
    }
    case 116:
    {
      if(!(glog->time == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_str_to_time$4=str_to_time(tkn, tfmt, &tm);
      if(!(return_value_str_to_time$4 == 0))
      {
        free((void *)tkn);
        return 1;
      }

      glog->time = tkn;
      break;
    }
    case 120:
    {
      if(!(glog->time == ((char *)NULL)))
      {
        if(!(glog->date == ((char *)NULL)))
          return 1;

      }

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_str_to_time$5=str_to_time(tkn, tfmt, &tm);
      if(!(return_value_str_to_time$5 == 0))
      {
        free((void *)tkn);
        return 1;
      }

      glog->date=xstrdup(tkn);
      glog->time = tkn;
      break;
    }
    case 104:
    {
      if(!(glog->host == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_invalid_ipaddr$6=invalid_ipaddr(tkn, &glog->type_ip);
      if(!(return_value_invalid_ipaddr$6 == 0))
      {
        free((void *)tkn);
        return 1;
      }

      glog->host = tkn;
      break;
    }
    case 109:
    {
      if(!(glog->method == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_extract_method$7=extract_method(tkn);
      if(return_value_extract_method$7 == ((const char *)NULL))
      {
        free((void *)tkn);
        return 1;
      }

      glog->method = tkn;
      break;
    }
    case 85:
    {
      if(!(glog->req == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        tmp_if_expr$8 = (_Bool)1;

      else
        tmp_if_expr$8 = (signed int)*tkn == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$8)
        return 1;

      glog->req=decode_url(tkn);
      if(glog->req == ((char *)NULL))
        return 1;

      free((void *)tkn);
      break;
    }
    case 113:
    {
      if(!(glog->qstr == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        tmp_if_expr$9 = (_Bool)1;

      else
        tmp_if_expr$9 = (signed int)*tkn == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$9)
        return 1;

      glog->qstr=decode_url(tkn);
      if(glog->qstr == ((char *)NULL))
        return 1;

      free((void *)tkn);
      break;
    }
    case 72:
    {
      if(!(glog->protocol == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_invalid_protocol$10=invalid_protocol(tkn);
      if(!(return_value_invalid_protocol$10 == 0))
      {
        free((void *)tkn);
        return 1;
      }

      glog->protocol = tkn;
      break;
    }
    case 114:
    {
      if(!(glog->req == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      glog->req=parse_req(tkn, &glog->method, &glog->protocol);
      free((void *)tkn);
      break;
    }
    case 115:
    {
      if(!(glog->status == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      strtol(tkn, &sEnd, 10);
      if(tkn == sEnd)
        tmp_if_expr$11 = (_Bool)1;

      else
        tmp_if_expr$11 = (signed int)*sEnd != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$11)
        tmp_if_expr$13 = (_Bool)1;

      else
      {
        return_value___errno_location$12=__errno_location();
        tmp_if_expr$13 = *return_value___errno_location$12 == 34 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$13)
      {
        free((void *)tkn);
        return 1;
      }

      glog->status = tkn;
      break;
    }
    case 98:
    {
      if(!(glog->resp_size == 0ul))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_strtol$14=strtol(tkn, &bEnd, 10);
      bandw = (unsigned long int)return_value_strtol$14;
      if(tkn == bEnd)
        tmp_if_expr$15 = (_Bool)1;

      else
        tmp_if_expr$15 = (signed int)*bEnd != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$15)
        tmp_if_expr$17 = (_Bool)1;

      else
      {
        return_value___errno_location$16=__errno_location();
        tmp_if_expr$17 = *return_value___errno_location$16 == 34 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$17)
        bandw = (unsigned long int)0;

      glog->resp_size = bandw;
      conf.bandwidth = 1;
      free((void *)tkn);
      break;
    }
    case 82:
    {
      if(!(glog->ref == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        tkn=alloc_string("-");

      if(!(tkn == ((char *)NULL)))
      {
        if((signed int)*tkn == 0)
        {
          free((void *)tkn);
          tkn=alloc_string("-");
        }

      }

      return_value_strcmp$18=strcmp(tkn, "-");
      if(!(return_value_strcmp$18 == 0))
      {
        extract_keyphrase(tkn, &glog->keyphrase);
        extract_referer_site(tkn, glog->site);
      }

      glog->ref = tkn;
      break;
    }
    case 117:
    {
      if(!(glog->agent == ((char *)NULL)))
        return 1;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(!(tkn == ((char *)NULL)))
        tmp_if_expr$21 = (signed int)*tkn != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$21 = (_Bool)0;
      if(tmp_if_expr$21)
      {
        char *return_value_decode_url$19;
        return_value_decode_url$19=decode_url(tkn);
        glog->agent=char_replace(return_value_decode_url$19, (char)43, (char)32);
        free((void *)tkn);
        break;
      }

      else
      {
        if(!(tkn == ((char *)NULL)))
          tmp_if_expr$20 = (signed int)*tkn == 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$20 = (_Bool)0;
        if(tmp_if_expr$20)
        {
          free((void *)tkn);
          tkn=alloc_string("-");
        }

        else
          tkn=alloc_string("-");
      }
      glog->agent = tkn;
      break;
    }
    case 76:
    {
      if(!(glog->serve_time == 0ul))
        break;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_strtoull$22=strtoull(tkn, &bEnd, 10);
      serve_secs = (double)return_value_strtoull$22;
      if(tkn == bEnd)
        tmp_if_expr$23 = (_Bool)1;

      else
        tmp_if_expr$23 = (signed int)*bEnd != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$23)
        tmp_if_expr$25 = (_Bool)1;

      else
      {
        return_value___errno_location$24=__errno_location();
        tmp_if_expr$25 = *return_value___errno_location$24 == 34 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$25)
        serve_secs = (double)0;

      glog->serve_time = (unsigned long int)(serve_secs > (double)0 ? serve_secs * (double)1000ULL : (double)0);
      conf.serve_usecs = 1;
      free((void *)tkn);
      break;
    }
    case 84:
    {
      if(!(glog->serve_time == 0ul))
        break;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      return_value_strchr$27=strchr(tkn, 46);
      if(!(return_value_strchr$27 == ((char *)NULL)))
        serve_secs=strtod(tkn, &bEnd);

      else
      {
        return_value_strtoull$26=strtoull(tkn, &bEnd, 10);
        serve_secs = (double)return_value_strtoull$26;
      }
      if(tkn == bEnd)
        tmp_if_expr$28 = (_Bool)1;

      else
        tmp_if_expr$28 = (signed int)*bEnd != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$28)
        tmp_if_expr$30 = (_Bool)1;

      else
      {
        return_value___errno_location$29=__errno_location();
        tmp_if_expr$30 = *return_value___errno_location$29 == 34 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$30)
        serve_secs = (double)0;

      glog->serve_time = (unsigned long int)(serve_secs > (double)0 ? serve_secs * (double)1000000ULL : (double)0);
      conf.serve_usecs = 1;
      free((void *)tkn);
      break;
    }
    case 68:
    {
      if(!(glog->serve_time == 0ul))
        break;

      tkn=parse_string(&(*str), p[(signed long int)1], 1);
      if(tkn == ((char *)NULL))
        return 1;

      serve_time=strtoull(tkn, &bEnd, 10);
      if(tkn == bEnd)
        tmp_if_expr$31 = (_Bool)1;

      else
        tmp_if_expr$31 = (signed int)*bEnd != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$31)
        tmp_if_expr$33 = (_Bool)1;

      else
      {
        return_value___errno_location$32=__errno_location();
        tmp_if_expr$33 = *return_value___errno_location$32 == 34 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$33)
        serve_time = (unsigned long int)0;

      glog->serve_time = serve_time;
      conf.serve_usecs = 1;
      free((void *)tkn);
      break;
    }
    case 126:
    {
      find_alpha(&(*str));
      break;
    }
    default:
    {
      pch=strchr(*str, (signed int)p[(signed long int)1]);
      if(!(pch == ((char *)NULL)))
        *str = *str + (pch - *str);

    }
  }
  return 0;
}

// parse_string
// file src/parser.c line 697
static char * parse_string(char **str, char end, signed int cnt)
{
  signed int idx = 0;
  char *pch = *str;
  char *p;
  _Bool tmp_if_expr$4;
  char *tmp_post$1;
  while((_Bool)1)
  {
    if(*pch == end)
      idx = idx + 1;

    if(*pch == end && cnt == idx)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = (signed int)*pch == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
    {
      unsigned long int len = (unsigned long int)((pch - *str) + (signed long int)1);
      void *return_value_xmalloc$2;
      return_value_xmalloc$2=xmalloc(len);
      p = (char *)return_value_xmalloc$2;
      memcpy((void *)p, (const void *)*str, len - (unsigned long int)1);
      p[(signed long int)(len - (unsigned long int)1)] = (char)0;
      *str = *str + (signed long int)(len - (unsigned long int)1);
      char *return_value_trim_str$3;
      return_value_trim_str$3=trim_str(p);
      return return_value_trim_str$3;
    }

    if((signed int)*pch == 92)
      pch = pch + 1l;

    tmp_post$1 = pch;
    pch = pch + 1l;
    if(*tmp_post$1 == 0)
      break;

  }
  return (char *)(void *)0;
}

// perform_find_dash_scroll
// file src/gdashboard.c line 1171
static void perform_find_dash_scroll(struct GScroll_ *gscroll, enum MODULES module)
{
  signed int *scrll;
  signed int *offset;
  signed int exp_size;
  exp_size=get_num_expanded_data_rows();
  if(!(gscroll->current == module))
    reset_scroll_offsets(gscroll);

  scrll = &gscroll->module[(signed long int)module].scroll;
  offset = &gscroll->module[(signed long int)module].offset;
  *scrll = find_t.next_idx;
  signed int tmp_if_expr$1;
  if(*scrll >= exp_size)
  {
    if(*scrll >= *offset + exp_size)
    {
      if(!(*scrll >= exp_size + -1))
        tmp_if_expr$1 = 0;

      else
        tmp_if_expr$1 = (*scrll - exp_size) + 1;
      *offset = tmp_if_expr$1;
    }

  }

  gscroll->current = module;
  gscroll->dash = (signed int)module * 12;
  gscroll->expanded = 1;
  find_t.module = module;
}

// perform_next_find
// file src/gdashboard.c line 1225
signed int perform_next_find(struct GHolder_ *h, struct GScroll_ *gscroll)
{
  signed int y;
  signed int x;
  signed int j;
  signed int n;
  signed int rc;
  char buf[100l];
  char *data;
  struct re_pattern_buffer regex;
  enum MODULES module;
  struct GSubList_ *sub_list;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  y = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  x = tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  if(find_t.pattern == ((char *)NULL))
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = (signed int)*find_t.pattern == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$3)
    return 1;

  else
  {
    signed int return_value_regexp_init$4;
    return_value_regexp_init$4=regexp_init(&regex, find_t.pattern);
    if(!(return_value_regexp_init$4 == 0))
      return 1;

    else
    {
      module = find_t.module;
      for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
      {
        n = (h + (signed long int)module)->idx;
        j = find_t.next_parent_idx;
        for( ; !(j >= n); find_t.next_idx = find_t.next_idx + 1)
        {
          data = ((h + (signed long int)module)->items + (signed long int)j)->metrics->data;
          rc=regexec(&regex, data, (unsigned long int)0, (struct anonymous$24 *)(void *)0, 0);
          if(!(rc == 0) && !(rc == 1))
          {
            regerror(rc, &regex, buf, sizeof(char [100l]) /*100ul*/ );
            draw_header(stdscr, buf, "%s", y - 1, 0, x, color_error);
            wrefresh(stdscr);
            regfree(&regex);
            return 1;
          }

          else
            if(find_t.look_in_sub == 0 && rc == 0)
            {
              find_t.look_in_sub = 1;
              goto found;
            }

            else
            {
              sub_list = ((h + (signed long int)module)->items + (signed long int)j)->sub_list;
              signed int return_value_find_next_sub_item$5;
              return_value_find_next_sub_item$5=find_next_sub_item(sub_list, &regex);
              if(return_value_find_next_sub_item$5 == 0)
                goto found;

            }
          j = j + 1;
        }
        find_t.next_idx = 0;
        find_t.next_parent_idx = 0;
        find_t.next_sub_idx = 0;
        if(!(find_t.module == module))
        {
          reset_scroll_offsets(gscroll);
          gscroll->expanded = 0;
        }

        if((signed int)module == 13)
        {
          find_t.module = (enum MODULES)0;
          goto out;
        }

      }

    found:
      ;
      perform_find_dash_scroll(gscroll, module);

    out:
      ;
      regfree(&regex);
      return 0;
    }
  }
}

// perform_tail_follow
// file src/goaccess.c line 584
static void perform_tail_follow(unsigned long int *size1)
{
  unsigned long int size2 = (unsigned long int)0;
  char buf[4096l];
  struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
  _Bool tmp_if_expr$1;
  if(!(logger->piping == 0))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = logger->load_from_disk_only != 0 ? (_Bool)1 : (_Bool)0;
  char *return_value_fgets$5;
  if(!tmp_if_expr$1)
  {
    signed long int return_value_file_size$2;
    return_value_file_size$2=file_size(conf.ifile);
    size2 = (unsigned long int)return_value_file_size$2;
    if(!(size2 == *size1))
    {
      fp=fopen(conf.ifile, "r");
      if(fp == ((struct _IO_FILE *)NULL))
        do
        {
          endwin();
          fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:31");
          fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
          fprintf(stderr, "\nFatal error has occurred");
          fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/goaccess.c", (const void *)"perform_tail_follow", 600);
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          char *return_value_strerror$4;
          return_value_strerror$4=strerror(*return_value___errno_location$3);
          fprintf(stderr, "Unable to read log file %s.", return_value_strerror$4);
          fprintf(stderr, "\n\n");

        __CPROVER_DUMP_L6:
          ;
          exit(1);
        }
        while((_Bool)0);

      signed int return_value_fseeko$6;
      return_value_fseeko$6=fseeko(fp, (signed long int)*size1, 0);
      if(return_value_fseeko$6 == 0)
        do
        {
          return_value_fgets$5=fgets(buf, 4096, fp);
          if(return_value_fgets$5 == ((char *)NULL))
            break;

          parse_log(&logger, buf, -1);
        }
        while((_Bool)1);

      fclose(fp);
      *size1 = size2;
      pthread_mutex_lock(&gdns_thread.mutex);
      free_holder(&holder);
      pthread_cond_broadcast(&gdns_thread.not_empty);
      pthread_mutex_unlock(&gdns_thread.mutex);
      free_dashboard(dash);
      allocate_holder();
      allocate_data();
      term_size(main_win);
      render_screens();
      usleep((unsigned int)200000);
    }

  }

}

// post_gmenu
// file src/gmenu.c line 75
signed int post_gmenu(struct GMenu_$0 *menu)
{
  struct GColors_ * (*func)(void);
  signed int i = 0;
  signed int j = 0;
  signed int start;
  signed int end;
  signed int height;
  signed int total;
  signed int checked = 0;
  if(menu == ((struct GMenu_$0 *)NULL))
    return 1;

  else
  {
    werase(menu->win);
    height = menu->h;
    start = menu->start;
    total = menu->size;
    end = height < total ? start + height : total;
    i = start;
    for( ; !(i >= end); j = j + 1)
    {
      func = i == menu->idx ? color_selected : color_default;
      checked = (menu->items + (signed long int)i)->checked != 0 ? 1 : 0;
      draw_menu_item(menu, (menu->items + (signed long int)i)->name, 0, j, menu->w, checked, func);
      i = i + 1;
    }
    wrefresh(menu->win);
    return 0;
  }
}

// pre_process_log
// file src/parser.c line 1696
static signed int pre_process_log(struct GLog_ *logger, char *line, signed int test)
{
  struct GLogItem_ *glog;
  signed int return_value_valid_line$1;
  return_value_valid_line$1=valid_line(line);
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  signed int return_value_excluded_ip$5;
  signed int return_value_exclude_crawler$6;
  signed int return_value_ignore_referer$7;
  signed int return_value_is_404$9;
  signed int return_value_is_static$8;
  if(!(return_value_valid_line$1 == 0))
  {
    count_invalid(logger, line, test);
    return 0;
  }

  else
  {
    count_process(logger, test);
    glog=init_log_item(logger);
    signed int return_value_parse_format$2;
    return_value_parse_format$2=parse_format(glog, line);
    if(!(return_value_parse_format$2 == 0))
      count_invalid(logger, line, test);

    else
    {
      if(glog->host == ((char *)NULL))
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = glog->date == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
        tmp_if_expr$4 = (_Bool)1;

      else
        tmp_if_expr$4 = glog->req == (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$4)
        count_invalid(logger, line, test);

      else
      {
        if(glog->agent == ((char *)NULL))
          glog->agent=alloc_string("-");

        if(!(test == 0))
          count_valid(logger, test);

        else
        {
          return_value_excluded_ip$5=excluded_ip(logger, glog, test);
          if(!(return_value_excluded_ip$5 == 0))
          {
            return_value_exclude_crawler$6=exclude_crawler(glog);
            if(!(return_value_exclude_crawler$6 == 0))
            {
              return_value_ignore_referer$7=ignore_referer(glog->site);
              if(return_value_ignore_referer$7 == 0)
              {
                if(!(conf.ignore_qstr == 0))
                  strip_qstring(glog->req);

                return_value_is_404$9=is_404(glog);
                if(!(return_value_is_404$9 == 0))
                  glog->is_404 = 1;

                else
                {
                  return_value_is_static$8=is_static(glog);
                  if(!(return_value_is_static$8 == 0))
                    glog->is_static = 1;

                }
                glog->uniq_key=get_uniq_visitor_key(glog);
                inc_resp_size(logger, glog->resp_size);
                process_log(glog);
                count_valid(logger, test);
              }

            }

          }

        }
      }
    }

  cleanup:
    ;
    free_logger(glog);
    return 0;
  }
}

// previous_module
// file src/goaccess.c line 637
static signed int previous_module(void)
{
  if((signed int)gscroll.current == 0)
    gscroll.current = (enum MODULES)(13 - 1);

  else
    gscroll.current = (enum MODULES)((signed int)gscroll.current - 1);
  signed int return_value_ignore_panel$1;
  return_value_ignore_panel$1=ignore_panel(gscroll.current);
  if(!(return_value_ignore_panel$1 == 0))
  {
    disabled_panel_msg(gscroll.current);
    return 1;
  }

  else
    return 0;
}

// print_agents
// file src/output.c line 1358
static void print_agents(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int cspan)
{
  struct GAgents_ *agents;
  agents=new_gagents();
  const char *addr = (h->items + (signed long int)idx)->metrics->data;
  signed int i;
  signed int n = 0;
  signed int return_value_set_host_agents$1;
  return_value_set_host_agents$1=set_host_agents(addr, load_host_agents, (void *)agents);
  signed int tmp_if_expr$2;
  if(!(return_value_set_host_agents$1 == 1))
  {
    if(!(agents->size == 0))
    {
      print_html_begin_agent_tr(fp);
      fprintf(fp, "<td colspan='2'></td>");
      fprintf(fp, "<th colspan='%d' class='left'>UA - %s</th>", cspan, addr);
      print_html_end_tr(fp);
      if(agents->size >= 11)
        tmp_if_expr$2 = 10;

      else
        tmp_if_expr$2 = agents->size;
      n = tmp_if_expr$2;
      i = 0;
      for( ; !(i >= n); i = i + 1)
      {
        print_html_begin_agent_tr(fp);
        fprintf(fp, "<td colspan='2'></td>");
        fprintf(fp, "<td colspan='%d'>", cspan);
        fprintf(fp, "<div>");
        clean_output(fp, (agents->items + (signed long int)i)->agent);
        fprintf(fp, "</div>");
        fprintf(fp, "</td>");
        print_html_end_tr(fp);
      }
    }

  }


out:
  ;
  i = 0;
  for( ; !(i >= agents->size); i = i + 1)
    free((void *)(agents->items + (signed long int)i)->agent);
  if(!(agents->items == ((struct GAgentItem_ *)NULL)))
    free((void *)agents->items);

  free((void *)agents);
}

// print_csv_data
// file src/csv.c line 149
static void print_csv_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int valid)
{
  struct GMetrics *nmetrics;
  signed int i = 0;
  for( ; !(i >= h->idx); i = i + 1)
  {
    set_data_metrics((h->items + (signed long int)i)->metrics, &nmetrics, valid);
    fprintf(fp, "\"%d\",", i);
    fprintf(fp, ",");
    const char *return_value_module_to_id$1;
    return_value_module_to_id$1=module_to_id(h->module);
    fprintf(fp, "\"%s\",", return_value_module_to_id$1);
    fprintf(fp, "\"%d\",", nmetrics->hits);
    fprintf(fp, "\"%d\",", nmetrics->visitors);
    fprintf(fp, "\"%4.2f%%\",", nmetrics->percent);
    if(!(conf.bandwidth == 0))
      fprintf(fp, "\"%lld\",", (signed long long int)nmetrics->bw.nbw);

    if(!(conf.serve_usecs == 0))
    {
      fprintf(fp, "\"%lld\",", (signed long long int)nmetrics->avgts.nts);
      fprintf(fp, "\"%lld\",", (signed long long int)nmetrics->cumts.nts);
      fprintf(fp, "\"%lld\",", (signed long long int)nmetrics->maxts.nts);
    }

    if(!(conf.append_method == 0))
    {
      if(!(nmetrics->method == ((char *)NULL)))
        fprintf(fp, "\"%s\"", nmetrics->method);

    }

    fprintf(fp, ",");
    if(!(conf.append_protocol == 0))
    {
      if(!(nmetrics->protocol == ((char *)NULL)))
        fprintf(fp, "\"%s\"", nmetrics->protocol);

    }

    fprintf(fp, ",");
    fprintf(fp, "\"");
    escape_cvs_output(fp, nmetrics->data);
    fprintf(fp, "\"\r\n");
    if(!(h->sub_items_size == 0))
      print_csv_sub_items(fp, h, i, valid);

    free((void *)nmetrics);
  }
}

// print_csv_sub_items
// file src/csv.c line 102
static void print_csv_sub_items(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int valid)
{
  struct GSubList_ *sub_list = (h->items + (signed long int)idx)->sub_list;
  struct GSubItem_ *iter;
  float percent;
  signed int i = 0;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    iter = sub_list->head;
    for( ; !(iter == ((struct GSubItem_ *)NULL)); i = i + 1)
    {
      percent=get_percentage((unsigned long long int)valid, (unsigned long long int)iter->metrics->hits);
      percent = percent < (float)0 ? (float)0 : percent;
      fprintf(fp, "\"%d\",", i);
      fprintf(fp, "\"%d\",", idx);
      const char *return_value_module_to_id$1;
      return_value_module_to_id$1=module_to_id(h->module);
      fprintf(fp, "\"%s\",", return_value_module_to_id$1);
      fprintf(fp, "\"%d\",", iter->metrics->hits);
      fprintf(fp, "\"%d\",", iter->metrics->visitors);
      fprintf(fp, "\"%4.2f%%\",", percent);
      if(!(conf.bandwidth == 0))
        fprintf(fp, "\"%lld\",", (signed long long int)iter->metrics->bw.nbw);

      if(!(conf.serve_usecs == 0))
      {
        fprintf(fp, "\"%lld\",", (signed long long int)iter->metrics->avgts.nts);
        fprintf(fp, "\"%lld\",", (signed long long int)iter->metrics->cumts.nts);
        fprintf(fp, "\"%lld\",", (signed long long int)iter->metrics->maxts.nts);
      }

      if(!(conf.append_method == 0))
      {
        if(!(iter->metrics->method == ((char *)NULL)))
          fprintf(fp, "\"%s\"", iter->metrics->method);

      }

      fprintf(fp, ",");
      if(!(conf.append_protocol == 0))
      {
        if(!(iter->metrics->protocol == ((char *)NULL)))
          fprintf(fp, "\"%s\"", iter->metrics->protocol);

      }

      fprintf(fp, ",");
      fprintf(fp, "\"");
      escape_cvs_output(fp, iter->metrics->data);
      fprintf(fp, "\",");
      fprintf(fp, "\r\n");
      iter = iter->next;
    }
  }

}

// print_csv_summary
// file src/csv.c line 195
static void print_csv_summary(struct _IO_FILE *fp, struct GLog_ *logger)
{
  signed long long int t = 0LL;
  signed int i = 0;
  signed int total = 0;
  signed long int log_size = (signed long int)0;
  char now[20l];
  const char *fmt;
  generate_time();
  strftime(now, (unsigned long int)20, "%Y-%m-%d %H:%M:%S", now_tm);
  fmt = "\"%d\",,\"%s\",,,,,,,,\"%s\",\"%s\"\r\n";
  signed int tmp_post$1 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$1, (const void *)"general", (const void *)now, (const void *)"date_time");
  fmt = "\"%d\",,\"%s\",,,,,,,,\"%d\",\"%s\"\r\n";
  total = (signed int)logger->processed;
  signed int tmp_post$2 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$2, (const void *)"general", total, (const void *)"total_requests");
  fmt = "\"%d\",,\"%s\",,,,,,,,\"%d\",\"%s\"\r\n";
  total = (signed int)logger->valid;
  signed int tmp_post$3 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$3, (const void *)"general", total, (const void *)"valid_requests");
  total = (signed int)logger->invalid;
  signed int tmp_post$4 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$4, (const void *)"general", total, (const void *)"failed_requests");
  fmt = "\"%d\",,\"%s\",,,,,,,,\"%llu\",\"%s\"\r\n";
  t = (signed long long int)end_proc - start_proc;
  signed int tmp_post$5 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$5, (const void *)"general", t, (const void *)"generation_time");
  fmt = "\"%d\",,\"%s\",,,,,,,,\"%d\",\"%s\"\r\n";
  unsigned int return_value_get_ht_size_by_metric$6;
  return_value_get_ht_size_by_metric$6=get_ht_size_by_metric((enum MODULES)VISITORS, (enum METRICS)MTRC_UNIQMAP);
  total = (signed int)return_value_get_ht_size_by_metric$6;
  signed int tmp_post$7 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$7, (const void *)"general", total, (const void *)"unique_visitors");
  unsigned int return_value_get_ht_size_by_metric$8;
  return_value_get_ht_size_by_metric$8=get_ht_size_by_metric((enum MODULES)REQUESTS, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$8;
  signed int tmp_post$9 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$9, (const void *)"general", total, (const void *)"unique_files");
  total = (signed int)logger->excluded_ip;
  signed int tmp_post$10 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$10, (const void *)"general", total, (const void *)"excluded_hits");
  unsigned int return_value_get_ht_size_by_metric$11;
  return_value_get_ht_size_by_metric$11=get_ht_size_by_metric((enum MODULES)REFERRERS, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$11;
  signed int tmp_post$12 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$12, (const void *)"general", total, (const void *)"unique_referrers");
  unsigned int return_value_get_ht_size_by_metric$13;
  return_value_get_ht_size_by_metric$13=get_ht_size_by_metric((enum MODULES)NOT_FOUND, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$13;
  signed int tmp_post$14 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$14, (const void *)"general", total, (const void *)"unique_not_found");
  unsigned int return_value_get_ht_size_by_metric$15;
  return_value_get_ht_size_by_metric$15=get_ht_size_by_metric((enum MODULES)REQUESTS_STATIC, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$15;
  signed int tmp_post$16 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$16, (const void *)"general", total, (const void *)"unique_static_files");
  if(logger->piping == 0)
    log_size=file_size(conf.ifile);

  fmt = "\"%d\",,\"%s\",,,,,,,,\"%jd\",\"%s\"\r\n";
  signed int tmp_post$17 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$17, (const void *)"general", (signed long int)log_size, (const void *)"log_size");
  fmt = "\"%d\",,\"%s\",,,,,,,,\"%lld\",\"%s\"\r\n";
  signed int tmp_post$18 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$18, (const void *)"general", logger->resp_size, (const void *)"bandwidth");
  if(conf.ifile == ((char *)NULL))
    conf.ifile = (char *)"STDIN";

  fmt = "\"%d\",,\"%s\",,,,,,,,\"%s\",\"%s\"\r\n";
  signed int tmp_post$19 = i;
  i = i + 1;
  fprintf(fp, fmt, tmp_post$19, (const void *)"general", conf.ifile, (const void *)"log_path");
}

// print_graph
// file src/output.c line 1127
static void print_graph(struct _IO_FILE *fp, signed int max_hit, signed int max_vis, signed int hits, signed int visitors)
{
  const char *s;
  const char *c = "class='bar'";
  float lh;
  lh=get_percentage((unsigned long long int)max_hit, (unsigned long long int)hits);
  float lv = (float)0;
  signed int h = 0;
  setlocale(1, "POSIX");
  fprintf(fp, "<td class='graph'>");
  h = max_vis != 0 ? 8 : 16;
  lh = lh < (float)1 ? (float)1 : lh;
  if(!(max_hit == 0))
  {
    s = "<div title='Hits:%d%%' %s style='width:%f%%;height:%dpx'></div>";
    fprintf(fp, s, (signed int)lh, c, lh, h);
  }

  if(!(max_vis == 0))
  {
    c = "class='bar light'";
    s = "<div title='Visitors: %d%%' %s style='width:%f%%;height:%dpx'></div>";
    lv=get_percentage((unsigned long long int)max_vis, (unsigned long long int)visitors);
    lv = lv < (float)1 ? (float)1 : lv;
    fprintf(fp, s, (signed int)lv, c, lv, h);
  }

  fprintf(fp, "</td>\n");
  setlocale(1, "");
}

// print_horizontal_dash
// file src/gdashboard.c line 979
static void print_horizontal_dash(struct _win_st$2 *win, signed int y, signed int x, signed int len)
{
  mvwprintw(win, y, x, "%.*s", len, (const void *)"----------------");
}

// print_host_sub
// file src/output.c line 1399
static void print_host_sub(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int cspan)
{
  struct GSubItem_ *iter;
  struct GSubList_ *sub_list = (h->items + (signed long int)idx)->sub_list;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    print_html_begin_agent_tr(fp);
    fprintf(fp, "<td colspan='2'></td>");
    fprintf(fp, "<th class='left' colspan='%d'>Location/Hostname</th>", cspan);
    print_html_end_tr(fp);
    iter = sub_list->head;
    for( ; !(iter == ((struct GSubItem_ *)NULL)); iter = iter->next)
    {
      print_html_begin_agent_tr(fp);
      fprintf(fp, "<td colspan='2'></td>");
      fprintf(fp, "<td colspan='%d'><div>", cspan);
      clean_output(fp, iter->metrics->data);
      fprintf(fp, "</div></td>");
      print_html_end_tr(fp);
    }
  }

}

// print_html_begin_agent_tr
// file src/output.c line 1060
static void print_html_begin_agent_tr(struct _IO_FILE *fp)
{
  fprintf(fp, "<tr class='agent sub'>");
}

// print_html_begin_col_wrap
// file src/output.c line 1105
static void print_html_begin_col_wrap(struct _IO_FILE *fp, signed int size, const char *color)
{
  print_html_begin_grid_col(fp, size);
  print_html_begin_grid_module(fp, color);
}

// print_html_begin_grid
// file src/output.c line 1087
static void print_html_begin_grid(struct _IO_FILE *fp)
{
  fprintf(fp, "<div class='grid grid-pad'>");
}

// print_html_begin_grid_col
// file src/output.c line 1093
static void print_html_begin_grid_col(struct _IO_FILE *fp, signed int size)
{
  fprintf(fp, "<div class='col-1-%d'>", size);
}

// print_html_begin_grid_module
// file src/output.c line 1099
static void print_html_begin_grid_module(struct _IO_FILE *fp, const char *color)
{
  fprintf(fp, "<div class='grid-module %s'>", color);
}

// print_html_begin_table
// file src/output.c line 1024
static void print_html_begin_table(struct _IO_FILE *fp)
{
  fprintf(fp, "<table class=\"pure-table\">\n");
}

// print_html_begin_tbody
// file src/output.c line 1048
static void print_html_begin_tbody(struct _IO_FILE *fp)
{
  fprintf(fp, "<tbody>\n");
}

// print_html_begin_thead
// file src/output.c line 1036
static void print_html_begin_thead(struct _IO_FILE *fp)
{
  fprintf(fp, "<thead>\n");
}

// print_html_begin_tr
// file src/output.c line 1066
static void print_html_begin_tr(struct _IO_FILE *fp, signed int hide, signed int sub)
{
  if(!(hide == 0))
    fprintf(fp, "<tr class='hide %s'>", sub != 0 ? "sub" : "root");

  else
    fprintf(fp, "<tr class='%s'>", sub != 0 ? "sub" : "root");
}

// print_html_col_title
// file src/output.c line 1119
static void print_html_col_title(struct _IO_FILE *fp, const char *title)
{
  fprintf(fp, "<div class='col-title trunc'>");
  fprintf(fp, "<i class='icon-bar-chart'></i> %s</div>", title);
}

// print_html_common
// file src/output.c line 1495
static void print_html_common(struct _IO_FILE *fp, struct GHolder_ *h, signed int total, const struct GPanel_$1 *panel, const struct GOutput_ *output)
{
  signed int max_hit = 0;
  signed int max_vis = 0;
  const char *lbl = panel->clabel;
  if(panel->clabel == ((const char *)NULL))
    lbl=module_to_label(h->module);

  if(!(output->graph == 0))
  {
    max_hit=get_max_hit$link1(h);
    max_vis=get_max_visitor(h);
  }

  print_table_head(fp, h->module);
  print_html_begin_table(fp);
  print_html_begin_thead(fp);
  fprintf(fp, "<tr>");
  if((signed int)h->module == HOSTS)
    fprintf(fp, "<th>-</th>");

  fprintf(fp, "<th>%s</th>", (const void *)"Visitors");
  fprintf(fp, "<th>%s</th>", (const void *)"Hits");
  fprintf(fp, "<th>%%</th>");
  if(!(conf.bandwidth == 0))
    fprintf(fp, "<th>%s</th>", (const void *)"Bandwidth");

  if(!(conf.serve_usecs == 0))
  {
    fprintf(fp, "<th>%s</th>", (const void *)"Avg. T.S.");
    fprintf(fp, "<th>%s</th>", (const void *)"Cum. T.S.");
    fprintf(fp, "<th>%s</th>", (const void *)"Max. T.S.");
  }

  if(!(conf.append_protocol == 0))
  {
    if(!(output->protocol == 0))
      fprintf(fp, "<th>%s</th>", (const void *)"Protocol");

  }

  if(!(conf.append_method == 0))
  {
    if(!(output->method == 0))
      fprintf(fp, "<th>%s</th>", (const void *)"Method");

  }

  if(!(max_hit == 0))
    fprintf(fp, "<th>%s</th>", lbl);

  fprintf(fp, "<th class='%s'>%s", max_hit != 0 ? "fr" : "", max_hit != 0 ? "" : lbl);
  fprintf(fp, "<span class='r icon-expand' onclick='t(this)'>&#8199;</span>");
  fprintf(fp, "</th>");
  fprintf(fp, "</tr>");
  print_html_end_thead(fp);
  print_html_begin_tbody(fp);
  panel->render(fp, h, total, max_hit, max_vis, panel, output);
  print_html_end_tbody(fp);
  print_html_end_table(fp);
}

// print_html_data
// file src/output.c line 1471
static void print_html_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int total, signed int max_hit, signed int max_vis, const struct GPanel_$1 *panel, const struct GOutput_ *output)
{
  struct GMetrics *nmetrics;
  signed int i = 0;
  for( ; !(i >= h->idx); i = i + 1)
  {
    if(!(panel->metrics_callback == ((void (*)(struct GMetrics *))NULL)))
      panel->metrics_callback((h->items + (signed long int)i)->metrics);

    set_data_metrics((h->items + (signed long int)i)->metrics, &nmetrics, total);
    print_html_begin_tr(fp, (signed int)(i > 10), 0);
    print_metrics(fp, nmetrics, max_hit, max_vis, 0, output);
    print_html_end_tr(fp);
    if(!(h->sub_items_size == 0))
      print_subitems(fp, h, i, total, max_hit, max_vis, output);

    free((void *)nmetrics);
  }
}

// print_html_end_col_wrap
// file src/output.c line 1112
static void print_html_end_col_wrap(struct _IO_FILE *fp)
{
  print_html_end_div(fp);
  print_html_end_div(fp);
}

// print_html_end_div
// file src/output.c line 1081
static void print_html_end_div(struct _IO_FILE *fp)
{
  fprintf(fp, "</div>");
}

// print_html_end_table
// file src/output.c line 1030
static void print_html_end_table(struct _IO_FILE *fp)
{
  fprintf(fp, "</table>\n");
}

// print_html_end_tbody
// file src/output.c line 1054
static void print_html_end_tbody(struct _IO_FILE *fp)
{
  fprintf(fp, "</tbody>\n");
}

// print_html_end_thead
// file src/output.c line 1042
static void print_html_end_thead(struct _IO_FILE *fp)
{
  fprintf(fp, "</thead>\n");
}

// print_html_end_tr
// file src/output.c line 1075
static void print_html_end_tr(struct _IO_FILE *fp)
{
  fprintf(fp, "</tr>");
}

// print_html_footer
// file src/output.c line 999
static void print_html_footer(struct _IO_FILE *fp)
{
  fprintf(fp, "</div> <!-- l-box -->\n");
  fprintf(fp, "</div> <!-- main -->\n");
  fprintf(fp, "</div> <!-- layout -->\n");
  fprintf(fp, "</body>\n");
  fprintf(fp, "</html>");
}

// print_html_h2
// file src/output.c line 1009
static void print_html_h2(struct _IO_FILE *fp, const char *title, const char *id)
{
  if(!(id == ((const char *)NULL)))
    fprintf(fp, "<h2 id=\"%s\">%s</h2>", id, title);

  else
    fprintf(fp, "<h2>%s</h2>", title);
}

// print_html_header
// file src/output.c line 451
static void print_html_header(struct _IO_FILE *fp, char *now)
{
  fprintf(fp, "<!DOCTYPE html>\n");
  fprintf(fp, "<html lang='en'><head>\n");
  fprintf(fp, "<meta charset='UTF-8' />");
  fprintf(fp, "<meta http-equiv='X-UA-Compatible' content='IE=edge'>");
  fprintf(fp, "<meta name='viewport' content='width=device-width, initial-scale=1'>");
  fprintf(fp, "<meta name='robots' content='noindex, nofollow' />");
  print_html_title(fp, now);
  fprintf(fp, "<script type=\"text/javascript\">\n");
  fprintf(fp, "function t(c){for(var b=c.parentNode.parentNode.parentNode");
  fprintf(fp, ".parentNode.getElementsByTagName('tr'),a=0;a<b.length;a++)");
  fprintf(fp, "b[a].classList.contains('hide')?(b[a].classList.add('show'),");
  fprintf(fp, "b[a].classList.remove('hide'),c.classList.remove('icon-expand'),");
  fprintf(fp, "c.classList.add('icon-compress')):b[a].classList.contains('show')&&");
  fprintf(fp, "(b[a].classList.add('hide'),b[a].classList.remove('show'),");
  fprintf(fp, "c.classList.remove('icon-compress'),c.classList.add('icon-expand'))};");
  fprintf(fp, "function a(b){for(var a=b.parentNode.parentNode,a=ne(a,'tr');a&&-1!=");
  fprintf(fp, "a.className.indexOf('sub');)-1!=a.className.indexOf('agent')?(");
  fprintf(fp, "b.firstChild.className='icon-minus-square',a.className='sub'):");
  fprintf(fp, "(b.firstChild.className='icon-plus-square',a.className='agent sub'),");
  fprintf(fp, "a=ne(a,'tr')}function ne(b,a){a=a.toUpperCase();for(b=b.nextSibling;");
  fprintf(fp, "b&&b.tagName!==a;)b=b.nextSibling;return b};");
  fprintf(fp, "</script>\n");
  fprintf(fp, "<style type=\"text/css\">");
  fprintf(fp, "html {    font-size: 100%%;    -ms-text-size-adjust: 100%%;    -webkit-text-size-adjust: 100%%;}html {    font-family: sans-serif}body {    font-size: 80%%;    color: #777;    margin: 0;}a:focus {    outline: thin dotted}a:active,a:hover {    outline: 0}p {    margin: 0 0 1em 0}ul {    margin: 1em 0}ul {    padding: 0 0 0 40px}table {    border-collapse: collapse;    border-spacing: 0;}h1 {    color: rgb(36, 36, 36);}h2 {    font-weight: 700;    color: #4b4b4b;    font-size: 1.2em;    margin: .83em 0 .20em 0;}.agent,.hide {    display: none}.r,.s {    cursor: pointer}.r {    float: right}.left {    text-align: left;}.graph,thead th {    text-align: center}.max {    background: #f0ad4e;    border-radius: 5px;    color: #FFF;    padding: 2px 5px;}.fr {    width:100%%;    text-align:right;}#layout {    padding-left: 225px;    left: 0;}.l-box {    padding: 0 1.3em 1.3em 1.3em}.graph .bar {    -webkit-box-sizing: border-box;    -moz-box-sizing: border-box;    background-color: rgba(119, 119, 119, 0.7);    border-bottom-right-radius: 3px;    border-top-right-radius: 3px;    box-sizing: border-box;    color: #ffffff;    height: 17px;    width: 0;}.graph .light {    background-color: rgba(119, 119, 119, 0.3);    margin-top: 1px;}#menu {    -webkit-overflow-scroll: touch;    -webkit-transition: left 0.75s, -webkit-transform 0.75s;    background: #242424;    border-right: 1px solid #3E444C;    bottom: 0;    box-shadow: inset 0 0 90px #000;    left: 225px;    margin-left: -225px;    outline: 1px solid #101214;    overflow-y: auto;    position: fixed;    text-shadow: 0px -1px 0px #000;    top: 0;    transition: left 0.75s, -webkit-transform 0.75s, transform 0.75s;    width: 225px;    z-index: 1000;}#menu a {    border: 0;    border-bottom: 1px solid #111;    box-shadow: 0 1px 0 #383838;    color: #999;    padding: .6em 0 .6em .6em;    white-space: normal;}#menu p {    color: #eee;    font-size: 85%%;    padding: .6em;    text-shadow: 0 -1px 0 #000;}#menu .pure-menu-open {    background: transparent;    border: 0;}#menu .pure-menu ul {    border: 0;    background: transparent;}#menu .pure-menu li a:hover,#menu .pure-menu li a:focus {    background: #333}#menu .pure-menu-heading:hover,#menu .pure-menu-heading:focus {    color: #999}#menu .pure-menu-heading {    color: #FFF;    font-size: 110%%;    font-weight: bold;}.pure-u {    display: inline-block;    *display: inline;    zoom: 1;    letter-spacing: normal;    word-spacing: normal;    vertical-align: top;    text-rendering: auto;}.pure-u-1 {    display: inline-block;    *display: inline;    zoom: 1;    letter-spacing: normal;    word-spacing: normal;    vertical-align: top;    text-rendering: auto;}.pure-u-1 {    width: 100%%}.pure-g-r {    letter-spacing: -.31em;    *letter-spacing: normal;    *word-spacing: -.43em;    font-family: sans-serif;    display: -webkit-flex;    -webkit-flex-flow: row wrap;    display: -ms-flexbox;    -ms-flex-flow: row wrap;}.pure-g-r {    word-spacing: -.43em}.pure-g-r [class *=pure-u] {    font-family: sans-serif}@media (max-width:480px) {     .pure-g-r>.pure-u,    .pure-g-r>[class *=pure-u-] {        width: 100%%    }}@media (max-width:767px) {     .pure-g-r>.pure-u,    .pure-g-r>[class *=pure-u-] {        width: 100%%    }}.pure-menu ul {    position: absolute;    visibility: hidden;}.pure-menu.pure-menu-open {    visibility: visible;    z-index: 2;    width: 100%%;}.pure-menu ul {    left: -10000px;    list-style: none;    margin: 0;    padding: 0;    top: -10000px;    z-index: 1;}.pure-menu>ul {    position: relative}.pure-menu-open>ul {    left: 0;    top: 0;    visibility: visible;}.pure-menu-open>ul:focus {    outline: 0}.pure-menu li {    position: relative}.pure-menu a,.pure-menu .pure-menu-heading {    display: block;    color: inherit;    line-height: 1.5em;    padding: 5px 20px;    text-decoration: none;    white-space: nowrap;}.pure-menu li a {    padding: 5px 20px}.pure-menu.pure-menu-open {    background: #fff;    border: 1px solid #b7b7b7;}.pure-menu a {    border: 1px solid transparent;    border-left: 0;    border-right: 0;}.pure-menu a {    color: #777}.pure-menu li a:hover,.pure-menu li a:focus {    background: #eee}.pure-menu .pure-menu-heading {    color: #565d64;    font-size: 90%%;    margin-top: .5em;    border-bottom-width: 1px;    border-bottom-style: solid;    border-bottom-color: #dfdfdf;}.pure-table {    animation: float 5s infinite;    border: 1px solid #cbcbcb;    border-collapse: collapse;    border-spacing: 0;    box-shadow: 0 5px 10px rgba(0, 0, 0, 0.1);    empty-cells: show;    border-radius:3px;}.pure-table a {    color:#242424;    outline: 0;    text-decoration: none;}.pure-table td {    border-left: 1px solid #cbcbcb;}.pure-table td,.pure-table th {    font-size: inherit;    margin: 0;    overflow: visible;    padding: 6px 12px;}.pure-table th:last-child {    padding-right: 0;}.pure-table th:last-child span {    margin: 1px 5px 0 15px;}.pure-table thead th {    border-bottom:4px solid #9ea7af;    border-right: 1px solid #343a45;}.pure-table tbody th {    background:rgb(242, 242, 242);    border-left:1px solid rgb(203, 203, 203);}.pure-table td:first-child,.pure-table th:first-child {    border-left-width: 0}.pure-table td:last-child {    white-space: normal;    width: auto;    word-break: break-all;    word-wrap: break-word;}.pure-table thead {    background: #242424;    color: #FFF;    text-align: left;    text-shadow: 0px -1px 0px #000;    vertical-align: bottom;    white-space: nowrap;}.pure-table td {    background-color: #FFF}.pure-table td.num {    text-align: right}.pure-table .sub td {    background-color: #F2F2F2;}.pure-table tbody tr:hover,.pure-table-striped tr:nth-child(2n-1) td {    background-color: #f4f4f4}.pure-table tr {    border-bottom: 1px solid #ddd;}.pure-table thead tr {    border: 1px solid rgb(52, 58, 69);}.grid {    background: white;    margin: 0 0 10px 0;}.grid * {    -moz-box-sizing: border-box;    -webkit-box-sizing: border-box;    box-sizing: border-box;}.grid:after {    content:\"\";    display: table;    clear: both;}[class*='col-'] {    float: left;    padding-right: 20px;}.grid[class*='col-']:last-of-type {    padding-right: 0;}.col-1-3 {    width: 33.33%%;}.col-1-2 {    width: 50%%;}.col-1-4 {    width: 25%%;}.col-1-6 {    width: 16.6%%;}.col-1-8 {    width: 12.5%%;}.grid-module {    background: #F1F1F1;    border-top: 4px solid #9E9E9E;    color: rgb(36, 36, 36);    font-weight: normal;    padding: 7px;}.col-title {    color: rgb(36, 36, 36);    font-size: 85%%;    text-shadow: 1px 1px 0 #FFF;    width: 100%%;}.label {    color: rgb(36, 36, 36);    font-size: 19px;    margin: 0;    text-shadow: 1px 1px 0 #FFF;}.grid .green {    border-top: 4px solid #5cb85c;}.grid .red{    border-top: 4px solid #d9534f;}.grid .blue {    border-top: 4px solid #5bc0de;}.trunc {    width: 100%%;    white-space: nowrap;    overflow: hidden;    text-overflow: ellipsis;}@media (max-width: 974px) {    #layout {        position: relative;        padding-left: 0;    }    #layout.active {        position: relative;        left: 200px;    }    #layout.active #menu {        left: 200px;        width: 200px;    }    #menu {        left: 0    }    .pure-menu-link {        position: fixed;        left: 0;        display: block;    }    #layout.active .pure-menu-link {        left: 200px    }}%s", (const void *)icons);
  fprintf(fp, "</style>\n");
  fprintf(fp, "</head>\n");
  fprintf(fp, "<body>\n");
  fprintf(fp, "<div class=\"pure-g-r\" id=\"layout\">");
}

// print_html_host
// file src/output.c line 1423
static void print_html_host(struct _IO_FILE *fp, struct GHolder_ *h, signed int total, signed int max_hit, signed int max_vis, const struct GPanel_$1 *panel, const struct GOutput_ *output)
{
  struct GMetrics *nmetrics;
  signed int i;
  signed int cspan = 5;
  if(!(output->avgts == 0))
  {
    if(!(conf.serve_usecs == 0))
      cspan = cspan + 1;

  }

  if(!(output->cumts == 0))
  {
    if(!(conf.serve_usecs == 0))
      cspan = cspan + 1;

  }

  if(!(output->maxts == 0))
  {
    if(!(conf.serve_usecs == 0))
      cspan = cspan + 1;

  }

  i = 0;
  _Bool tmp_if_expr$1;
  for( ; !(i >= h->idx); i = i + 1)
  {
    set_data_metrics((h->items + (signed long int)i)->metrics, &nmetrics, total);
    print_html_begin_tr(fp, (signed int)(i > 10), 0);
    fprintf(fp, "<td>");
    if(!(conf.list_agents == 0))
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = h->sub_items_size != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
    {
      fprintf(fp, "<a href='javascript:void(0);' onclick='a(this);'>");
      fprintf(fp, "<i class='ua icon-plus-square'></i>");
      fprintf(fp, "</a>");
    }

    else
      fprintf(fp, "-");
    fprintf(fp, "</td>");
    print_metrics(fp, nmetrics, max_hit, max_vis, 0, output);
    print_html_end_tr(fp);
    if(!(h->sub_items_size == 0))
      print_host_sub(fp, h, i, cspan);

    if(!(conf.list_agents == 0))
      print_agents(fp, h, i, cspan);

    free((void *)nmetrics);
  }
}

// print_html_page_header
// file src/output.c line 441
static void print_html_page_header(struct _IO_FILE *fp)
{
  const char *header = conf.html_report_title != ((char *)NULL) ? conf.html_report_title : "Dashboard";
  fprintf(fp, "<h1><i class='icon-dashboard'></i> ");
  clean_output(fp, (char *)header);
  fprintf(fp, "</h1>\n");
}

// print_html_summary
// file src/output.c line 1550
static void print_html_summary(struct _IO_FILE *fp, struct GLog_ *logger)
{
  signed long long int t = 0LL;
  signed int total = 0;
  signed int valid = 0;
  signed long int log_size = (signed long int)0;
  char *bw;
  char *size;
  print_html_page_header(fp);
  print_html_h2(fp, "Overall Analyzed Requests", "general");
  print_html_begin_grid(fp);
  total = (signed int)logger->processed;
  valid = (signed int)logger->valid;
  print_html_begin_col_wrap(fp, 6, "green");
  print_html_col_title(fp, "Valid Requests / Total Requests");
  fprintf(fp, "<h3 class='label trunc'>%'d / %'d</h3>", valid, total);
  print_html_end_col_wrap(fp);
  total = (signed int)logger->invalid;
  print_html_begin_col_wrap(fp, 6, "red");
  print_html_col_title(fp, "Failed Requests");
  fprintf(fp, "<h3 class='label trunc'>%'d</h3>", total);
  print_html_end_col_wrap(fp);
  t = (signed long long int)end_proc - start_proc;
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Processed Time");
  fprintf(fp, "<h3 class='label trunc'>%lld secs</h3>", t);
  print_html_end_col_wrap(fp);
  unsigned int return_value_get_ht_size_by_metric$1;
  return_value_get_ht_size_by_metric$1=get_ht_size_by_metric((enum MODULES)VISITORS, (enum METRICS)MTRC_UNIQMAP);
  total = (signed int)return_value_get_ht_size_by_metric$1;
  print_html_begin_col_wrap(fp, 6, "blue");
  print_html_col_title(fp, "Unique Visitors");
  fprintf(fp, "<h3 class='label trunc'>%'d</h3>", total);
  print_html_end_col_wrap(fp);
  unsigned int return_value_get_ht_size_by_metric$2;
  return_value_get_ht_size_by_metric$2=get_ht_size_by_metric((enum MODULES)REQUESTS, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$2;
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Unique Files");
  fprintf(fp, "<h3 class='label trunc'>%'d</h3>", total);
  print_html_end_col_wrap(fp);
  total = (signed int)logger->excluded_ip;
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Excl. IP Hits");
  fprintf(fp, "<h3 class='label trunc'>%'d</h3>", total);
  print_html_end_col_wrap(fp);
  print_html_end_div(fp);
  print_html_begin_grid(fp);
  unsigned int return_value_get_ht_size_by_metric$3;
  return_value_get_ht_size_by_metric$3=get_ht_size_by_metric((enum MODULES)REFERRERS, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$3;
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Referrers");
  fprintf(fp, "<h3 class='label trunc'>%'d</h3>", total);
  print_html_end_col_wrap(fp);
  unsigned int return_value_get_ht_size_by_metric$4;
  return_value_get_ht_size_by_metric$4=get_ht_size_by_metric((enum MODULES)NOT_FOUND, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$4;
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Unique 404");
  fprintf(fp, "<h3 class='label trunc'>%'d</h3>", total);
  print_html_end_col_wrap(fp);
  unsigned int return_value_get_ht_size_by_metric$5;
  return_value_get_ht_size_by_metric$5=get_ht_size_by_metric((enum MODULES)REQUESTS_STATIC, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$5;
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Static Files");
  fprintf(fp, "<h3 class='label trunc'>%'d</h3>", total);
  print_html_end_col_wrap(fp);
  if(logger->piping == 0)
  {
    log_size=file_size(conf.ifile);
    size=filesize_str((unsigned long long int)log_size);
  }

  else
    size=alloc_string("N/A");
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Log Size");
  fprintf(fp, "<h3 class='label trunc'>%s</h3>", size);
  print_html_end_col_wrap(fp);
  bw=filesize_str((unsigned long long int)(float)logger->resp_size);
  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Bandwidth");
  fprintf(fp, "<h3 class='label trunc'>%s</h3>", bw);
  print_html_end_col_wrap(fp);
  if(conf.ifile == ((char *)NULL))
    conf.ifile = (char *)"STDIN";

  print_html_begin_col_wrap(fp, 6, (const char *)(void *)0);
  print_html_col_title(fp, "Log File");
  fprintf(fp, "<h3 class='label trunc'>%s</h3>", conf.ifile);
  print_html_end_col_wrap(fp);
  print_html_end_div(fp);
  free((void *)bw);
  free((void *)size);
}

// print_html_title
// file src/output.c line 431
static void print_html_title(struct _IO_FILE *fp, char *now)
{
  const char *title = conf.html_report_title != ((char *)NULL) ? conf.html_report_title : "Server Statistics";
  fprintf(fp, "<title>");
  clean_output(fp, (char *)title);
  fprintf(fp, " - %s</title>\n", now);
}

// print_json_block
// file src/json.c line 140
static void print_json_block(struct _IO_FILE *fp, struct GMetrics *nmetrics, char *sep)
{
  fprintf(fp, "%s\t\"hits\": %d,\n", sep, nmetrics->hits);
  fprintf(fp, "%s\t\"visitors\": %d,\n", sep, nmetrics->visitors);
  fprintf(fp, "%s\t\"percent\": %4.2f,\n", sep, nmetrics->percent);
  if(!(conf.bandwidth == 0))
    fprintf(fp, "%s\t\"bytes\": %lld,\n", sep, (signed long long int)nmetrics->bw.nbw);

  if(!(conf.serve_usecs == 0))
  {
    fprintf(fp, "%s\t\"avgts\": %lld,\n", sep, (signed long long int)nmetrics->avgts.nts);
    fprintf(fp, "%s\t\"cumts\": %lld,\n", sep, (signed long long int)nmetrics->cumts.nts);
    fprintf(fp, "%s\t\"maxts\": %lld,\n", sep, (signed long long int)nmetrics->maxts.nts);
  }

  if(!(conf.append_method == 0))
  {
    if(!(nmetrics->method == ((char *)NULL)))
      fprintf(fp, "%s\t\"method\": \"%s\",\n", sep, nmetrics->method);

  }

  if(!(conf.append_protocol == 0))
  {
    if(!(nmetrics->protocol == ((char *)NULL)))
      fprintf(fp, "%s\t\"protocol\": \"%s\",\n", sep, nmetrics->protocol);

  }

  fprintf(fp, "%s\t\"data\": \"", sep);
  escape_json_output(fp, nmetrics->data);
  fprintf(fp, "\"");
}

// print_json_data
// file src/json.c line 241
static void print_json_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int valid)
{
  struct GMetrics *nmetrics;
  char *sep;
  sep=char_repeat(2, (char)9);
  signed int i;
  const char *return_value_module_to_id$1;
  return_value_module_to_id$1=module_to_id(h->module);
  fprintf(fp, "\t\"%s\": [\n", return_value_module_to_id$1);
  i = 0;
  for( ; !(i >= h->idx); i = i + 1)
  {
    set_data_metrics((h->items + (signed long int)i)->metrics, &nmetrics, valid);
    fprintf(fp, "%s{\n", sep);
    print_json_block(fp, nmetrics, sep);
    if(!(h->sub_items_size == 0))
      print_json_sub_items(fp, h, i, valid);

    fprintf(fp, i != h->idx - 1 ? "\n%s},\n" : "\n%s}\n", sep);
    free((void *)nmetrics);
  }
  fprintf(fp, "\t]");
  free((void *)sep);
}

// print_json_host_data
// file src/json.c line 192
static void print_json_host_data(struct _IO_FILE *fp, struct GHolder_ *h, signed int valid)
{
  struct GMetrics *nmetrics;
  char *sep;
  sep=char_repeat(2, (char)9);
  signed int i;
  const char *return_value_module_to_id$1;
  return_value_module_to_id$1=module_to_id(h->module);
  fprintf(fp, "\t\"%s\": [\n", return_value_module_to_id$1);
  i = 0;
  for( ; !(i >= h->idx); i = i + 1)
  {
    set_data_metrics((h->items + (signed long int)i)->metrics, &nmetrics, valid);
    fprintf(fp, "%s{\n", sep);
    print_json_block(fp, nmetrics, sep);
    print_json_host_geo(fp, (h->items + (signed long int)i)->sub_list, sep);
    fprintf(fp, i != h->idx - 1 ? "\n%s},\n" : "\n%s}\n", sep);
    free((void *)nmetrics);
  }
  fprintf(fp, "\t]");
  free((void *)sep);
}

// print_json_host_geo
// file src/json.c line 170
static void print_json_host_geo(struct _IO_FILE *fp, struct GSubList_ *sub_list, char *sep)
{
  struct GSubItem_ *iter;
  signed int i;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    fprintf(fp, ",\n");
    i = 0;
    iter = sub_list->head;
    for( ; !(iter == ((struct GSubItem_ *)NULL)); i = i + 1)
    {
      static const char *key[3l] = { "country", "city", "hostname" };
      fprintf(fp, "%s\t\"%s\": \"", sep, key[(signed long int)iter->metrics->id]);
      escape_json_output(fp, iter->metrics->data);
      fprintf(fp, i != sub_list->size - 1 ? "\",\n" : "\"");
      iter = iter->next;
    }
  }

}

// print_json_sub_items
// file src/json.c line 215
static void print_json_sub_items(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int valid)
{
  struct GMetrics *nmetrics;
  struct GSubItem_ *iter;
  struct GSubList_ *sub_list = (h->items + (signed long int)idx)->sub_list;
  char *sep;
  sep=char_repeat(3, (char)9);
  signed int i = 0;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    fprintf(fp, ",\n%s\"items\": [\n", sep);
    iter = sub_list->head;
    for( ; !(iter == ((struct GSubItem_ *)NULL)); i = i + 1)
    {
      set_data_metrics(iter->metrics, &nmetrics, valid);
      fprintf(fp, "%s{\n", sep);
      print_json_block(fp, nmetrics, sep);
      fprintf(fp, i != sub_list->size - 1 ? "\n%s},\n" : "\n%s}\n", sep);
      free((void *)nmetrics);
      iter = iter->next;
    }
    fprintf(fp, "\t\t\t]");
    free((void *)sep);
  }

}

// print_json_summary
// file src/json.c line 265
static void print_json_summary(struct _IO_FILE *fp, struct GLog_ *logger)
{
  signed long long int t = 0LL;
  signed int total = 0;
  signed long int log_size = (signed long int)0;
  char now[20l];
  generate_time();
  strftime(now, (unsigned long int)20, "%Y-%m-%d %H:%M:%S", now_tm);
  fprintf(fp, "\t\"%s\": {\n", (const void *)"general");
  fprintf(fp, "\t\t\"%s\": \"%s\",\n", (const void *)"date_time", (const void *)now);
  total = (signed int)logger->processed;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"total_requests", total);
  total = (signed int)logger->valid;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"valid_requests", total);
  total = (signed int)logger->invalid;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"failed_requests", total);
  t = (signed long long int)end_proc - start_proc;
  fprintf(fp, "\t\t\"%s\": %lld,\n", (const void *)"generation_time", t);
  unsigned int return_value_get_ht_size_by_metric$1;
  return_value_get_ht_size_by_metric$1=get_ht_size_by_metric((enum MODULES)VISITORS, (enum METRICS)MTRC_UNIQMAP);
  total = (signed int)return_value_get_ht_size_by_metric$1;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"unique_visitors", total);
  unsigned int return_value_get_ht_size_by_metric$2;
  return_value_get_ht_size_by_metric$2=get_ht_size_by_metric((enum MODULES)REQUESTS, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$2;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"unique_files", total);
  total = (signed int)logger->excluded_ip;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"excluded_hits", total);
  unsigned int return_value_get_ht_size_by_metric$3;
  return_value_get_ht_size_by_metric$3=get_ht_size_by_metric((enum MODULES)REFERRERS, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$3;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"unique_referrers", total);
  unsigned int return_value_get_ht_size_by_metric$4;
  return_value_get_ht_size_by_metric$4=get_ht_size_by_metric((enum MODULES)NOT_FOUND, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$4;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"unique_not_found", total);
  unsigned int return_value_get_ht_size_by_metric$5;
  return_value_get_ht_size_by_metric$5=get_ht_size_by_metric((enum MODULES)REQUESTS_STATIC, (enum METRICS)MTRC_DATAMAP);
  total = (signed int)return_value_get_ht_size_by_metric$5;
  fprintf(fp, "\t\t\"%s\": %d,\n", (const void *)"unique_static_files", total);
  if(logger->piping == 0)
    log_size=file_size(conf.ifile);

  fprintf(fp, "\t\t\"%s\": %jd,\n", (const void *)"log_size", (signed long int)log_size);
  fprintf(fp, "\t\t\"%s\": %llu,\n", (const void *)"bandwidth", logger->resp_size);
  if(conf.ifile == ((char *)NULL))
    conf.ifile = (char *)"STDIN";

  fprintf(fp, "\t\t\"%s\": \"", (const void *)"log_path");
  escape_json_output(fp, conf.ifile);
  fprintf(fp, "\"\n");
  fprintf(fp, "\t},\n");
}

// print_metric_avgts
// file src/output.c line 1204
static void print_metric_avgts(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  char *avgts = (char *)(void *)0;
  if(!(conf.serve_usecs == 0))
  {
    avgts=usecs_to_str(nmetrics->avgts.nts);
    fprintf(fp, "<td class='num'>");
    clean_output(fp, avgts);
    fprintf(fp, "</td>");
    free((void *)avgts);
  }

}

// print_metric_bw
// file src/output.c line 1189
static void print_metric_bw(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  char *bw = (char *)(void *)0;
  if(!(conf.bandwidth == 0))
  {
    bw=filesize_str(nmetrics->bw.nbw);
    fprintf(fp, "<td class='num'>");
    clean_output(fp, bw);
    fprintf(fp, "</td>");
    free((void *)bw);
  }

}

// print_metric_cumts
// file src/output.c line 1219
static void print_metric_cumts(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  char *cumts = (char *)(void *)0;
  if(!(conf.serve_usecs == 0))
  {
    cumts=usecs_to_str(nmetrics->cumts.nts);
    fprintf(fp, "<td class='num'>");
    clean_output(fp, cumts);
    fprintf(fp, "</td>");
    free((void *)cumts);
  }

}

// print_metric_data
// file src/output.c line 1249
static void print_metric_data(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  fprintf(fp, "<td>");
  clean_output(fp, nmetrics->data);
  fprintf(fp, "</td>");
}

// print_metric_hits
// file src/output.c line 1168
static void print_metric_hits(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  fprintf(fp, "<td class='num'>%'d</td>", nmetrics->hits);
}

// print_metric_maxts
// file src/output.c line 1234
static void print_metric_maxts(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  char *maxts = (char *)(void *)0;
  if(!(conf.serve_usecs == 0))
  {
    maxts=usecs_to_str(nmetrics->maxts.nts);
    fprintf(fp, "<td class='num'>");
    clean_output(fp, maxts);
    fprintf(fp, "</td>");
    free((void *)maxts);
  }

}

// print_metric_method
// file src/output.c line 1268
static void print_metric_method(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  if(!(conf.append_method == 0))
  {
    fprintf(fp, "<td>");
    clean_output(fp, nmetrics->method);
    fprintf(fp, "</td>");
  }

}

// print_metric_percent
// file src/output.c line 1180
static void print_metric_percent(struct _IO_FILE *fp, struct GMetrics *nmetrics, signed int max_hit)
{
  fprintf(fp, "<td class='num'>");
  fprintf(fp, "<span class='%s'>%4.2f%%</span>", max_hit != 0 ? "max" : "", nmetrics->percent);
  fprintf(fp, "</td>");
}

// print_metric_protocol
// file src/output.c line 1257
static void print_metric_protocol(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  if(!(conf.append_protocol == 0))
  {
    fprintf(fp, "<td>");
    clean_output(fp, nmetrics->protocol);
    fprintf(fp, "</td>");
  }

}

// print_metric_visitors
// file src/output.c line 1174
static void print_metric_visitors(struct _IO_FILE *fp, struct GMetrics *nmetrics)
{
  fprintf(fp, "<td class='num'>%'d</td>", nmetrics->visitors);
}

// print_metrics
// file src/output.c line 1279
static void print_metrics(struct _IO_FILE *fp, struct GMetrics *nmetrics, signed int max_hit, signed int max_vis, signed int sub, const struct GOutput_ *output)
{
  if(!(output->visitors == 0))
    print_metric_visitors(fp, nmetrics);

  if(!(output->hits == 0))
    print_metric_hits(fp, nmetrics);

  if(!(output->percent == 0))
    print_metric_percent(fp, nmetrics, (signed int)(max_hit == nmetrics->hits));

  if(!(output->bw == 0))
    print_metric_bw(fp, nmetrics);

  if(!(output->avgts == 0))
    print_metric_avgts(fp, nmetrics);

  if(!(output->cumts == 0))
    print_metric_cumts(fp, nmetrics);

  if(!(output->maxts == 0))
    print_metric_maxts(fp, nmetrics);

  if(!(output->protocol == 0))
    print_metric_protocol(fp, nmetrics);

  if(!(output->method == 0))
    print_metric_method(fp, nmetrics);

  if(!(output->data == 0))
    print_metric_data(fp, nmetrics);

  _Bool tmp_if_expr$1;
  if(!(output->graph == 0) && !(max_hit == 0))
    tmp_if_expr$1 = !(output->sub_graph != 0) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(!(sub == 0) && tmp_if_expr$1)
    fprintf(fp, "<td></td>");

  else
    if(!(output->graph == 0))
    {
      if(!(max_hit == 0))
        print_graph(fp, max_hit, max_vis, nmetrics->hits, nmetrics->visitors);

    }

}

// print_p
// file src/output.c line 1018
static void print_p(struct _IO_FILE *fp, const char *paragraph)
{
  fprintf(fp, "<p>%s</p>", paragraph);
}

// print_pure_menu
// file src/output.c line 961
static void print_pure_menu(struct _IO_FILE *fp, char *now)
{
  fprintf(fp, "<div id=\"menu\" class=\"pure-u\">");
  fprintf(fp, "<div class=\"pure-menu pure-menu-open\">");
  fprintf(fp, "<a class=\"pure-menu-heading\" href=\"%s\">", (const void *)"http://goaccess.io/");
  fprintf(fp, "<img src='data:image/png;base64,%s' alt='goaccess'/>", (const void *)"iVBORw0KGgoAAAANSUhEUgAAAMgAAAAeCAYAAABpP1GsAAAABmJLR0QA/wD/AP+gvaeTAAAACXBIWXMAAAsTAAALEwEAmpwYAAAAB3RJTUUH3wIOBC8F0NxENwAAFlpJREFUeNrtfHmUHdV55+8udWt9S+9amlavkrq1IDVSa7FGaAEbMIYBDIaxjBPZeAKYY4yTmDkmiWMnZxIPYYkdMoODDsYiTjAYRgZrhKRuhCy0oD4IgUBqtVpCQmrUWrrf67fVq7r3zh+81zw1CtgTRraU/p3zTr+q993v3lv17V9VA2MYwxj+42KhZX3k74tt+989R319/cfSNDU1jd2M8xDkQt3YcsfBxkwGghAy17Kutwn5gkXIFE5IDQUGQq37FfBWRuuu3lxu42Gl0kWFeTmb/a3nmzhxIrNtew7n/F5KaSkDBuDwO++88+10Oq3GRG5MQX4vMNUwSCVjs11Kf1XDWE0FYzAIGdmwAqAB5LXGsFJIK/XcU6nUdf+v8zU2NlY4jvNAPB6/1TRNaK3fv8CEQGt9LAiCP9i8efP6MZE7v0AvxE3VUEqqOZ8VZ2zbVCFqJnIOkxDQgkUgBbPOATiEoIaxoMEwguL4BR8Rli0dFZI1NDQAAEzTjDDGbrAsC5RSMMbAGCt+rzAM4/MA0NHRMVqx/s25Wlpazpjj48K3+vp6TJs27eyh5OLFZ4R5HzVvKc/flO5CBb+QNrPAsrA1l8M004yahDzRwLnhEAL98UPTAH5RPNiay2GBZc21Kf2vNiHzDUKqKTAkte7Oab0awAu76+ow8/BhHDx4EJWVlQLAYsuyXErpiPcogUkpXVJXV2fu2LHDLwpeX18f8vm82dTU9CXDML5oGEYjpZRrrQ8qpV7L5/OrAWw/ePAgGhoapnLOvyWEWMAYqyaEnFZK7ZVS/vLIkSNPAsgdOnQI9fX11S0tLXdxzi/nnNdRSgOt9bYTJ048ceDAgReKC1JKxZqbm79mGMb1nPNJBbpDWutjUsptuVyuE8AbSqmyAt11hmFMIoT4Wut3lFJHlVJbc7lc5/jx4/f29/fLsRDrPMA002TjGLtqHGNr6jgvVY5jCvjqDwYH1wLArdFoWYTSFhNYTIE2X+tv/TCRGFxgWa5FyN9XMrZyfInnKYZlea2RUOqVg/n8VZtyuUTBitbYtv1EZWXlpw3DAIC01vp1pVQrY6ysMPxEGIbf6urq+unMmTOxe/duNDQ01Jmm+VQ0Gp3neR4opcWQDFprBEGAbDa7cXBw8MeO4/xLPB6HEAKEvH/btNaQUsL3/f5MJnPr8PCwadv2mlgsRi3LAiFkhF8Yhshms2t6e3tv8Dyv1nGcVdFodKnneWfQaa2hlEIYhlv6+/u/LYT4XjQaXea67lnpgiDYMjg4eO2ePXtOjYVY5wHKCbEE8Ok4Y6WnByVwzQ8GB9feE48DAJ5IJgeV1jseGBq6//6hoZU/TCQG55qm61D6J7WGsbLJMOAQAjYqLLPfD8kWzDDNNUXmQogKwzAuLygHAKSllGsymczmEm9STgi5FgB2796N+vr6cZZl3V9eXj4vHo+DMTYi+IQQUEphmuYp13XDysrKJysrK1EU+hHrRgg45/A870AQBHnP835RVVVFXdcdUbYinWEYiEQiV7S2tq6yLOvySCSyNBaLfYiOUgrOeSCE2C+EmBGJRJZFo9F/i07atv3qnj17Ti1atGgsxDofYFLKDUJm2IUkvPCn938MDnYvtCy+I5frWOY4V1Gtw/35PC77IKfIg5BklNK7x32gXApAjwaeU0A7AT5dyGOIS+nUr8diV/6ouflFks1+xrIsUrSuAIaTyeRPlFKnLcu6pqA4jFJ68Zw5c6p37tw5YNt2q23bN7quWxyjAOwF8LTWOqa1XgBgmtbatm2bMcZGeAN4GsARpdQMAK1Syj2Msas9zxOGYUBrrQCszefzdyil2jjnD3LOpxJChBDiirKyshbrgzxrGMBjQRD8mBAyi1K6GMC4XC73hmmaHfYH1ycB4NEgCB4nhLQX6MYD2AQAv/71r8cU5LxQEIAIQlz6gaUNJbCvoCk8xtjCizj/jvvh3CQTAq+EWsf4B8p1LKv1vIeHhpI3e16ZR+lTFYxdVuAcsYDLQcgWSulNtm0XBTgEsKu7u/u9Sy655JVcLgchBLTWIIRURKPRmwH8iDE2z7ZtlCjVm5lMZs6WLVtGigUXX3xxk23bWz3PK546DeD769evf6h04ZMnT57sed4zlmUVeb3NGPvmpk2bDgM43NHRUWPb9uOmaYJSWuW6blVJrhQJguCWRCJhpVKpZ/fv3387AF1XVzehurr6gRK6WBAEKxKJhDs8PPxsb2/v10YKF0uXoqura6yKdR4lVXLUKa8QG4AWrIIgZPTHMQm5zKa0VHEOPzw0lASAfimDIaW25LUuhlyCUNoUB2qEEPPZB15nkBDyZOH7O0qpF5UaaX+UEUI+A4BTShsL1h4AfK319i1btgRLliwZmVxrXRaGYRWlI7dpQEq57kNWjnOPEFJbpNNaT0un0z3t7e26vb1da60fp5TqQniUIITsLVkTDMOoKS8v/6MJEyasmz9/vpw9e/YPgyDIE0JeDsNwJLQyDGN8eXn5HRMnTlxfoHuooaEheqEqxwXpQRQgCXBQAfMKYsUJMG++YYi0UmEFpXsV8LQEAg1UU2B50dewwmek0AOMNPxyWqtAaz/UGigITEhIdbVSnxvlCary+fwvLrnkEmitz8gtAIBSOqW9vX2BUoqXCL7SWvsA8NJLL5XSshIaANBhGPqj98wYo5RSq7gGQggsy0JJeAStNSmGckqpZ4MgsIUQdxf5U0ohhIAQgjiO83XP82oHBgZuF0LMkVL+4VnoqOM433Bd96KDBw/eMNYHOU+Q0jofAtvCklIrASrmuO6ju30/fD6dfv6RROLGHwwO/pf9+fz3h5Qqep1QA4dKvAclwEgDQhBiaeBiVkxUgXzAecozzZtLG4MFS4uKigpUVlaiJDwqosJ13c9prXtKxtgA2s8i+KcKOUJRyGOU0rmFsKpU+DOEkP4SfoeVUitzudzMXC43J5fLzQnDcJaUclY2m73a9/0HNm/e/E3f95uCIPg7pdTh0vUzxmCaZltNTc3MLVu2rPR9f3IQBA8qpd4dtT5YljX50ksvXXyhKsgF2Um/JRKZ4FJ6oIpSq3jbJYDTUvqnldoaam1SoNWhNF7DmLYJIRrIhsD2vNZLivmJBnIJKX/+ehA8YhOyrJKxv27gvHjRho7H4y/uq629yf2Y570+5OWU2n7q1Kk/9Txvk+M4xbJpJpPJ/OuxY8ceoZTWcc6vNE3z+lgsVl6kAYAwDPedPHny3mQy+Z5hGIsL/Ykqz/N2OI5zS8GLyDAMO48ePfoX+Xw+zxirNQzjaiHEFYZhbMjlcoeEEPcBeDiZTP6kr6/vjUWLFl3GGFtfouyD2Wx2KJPJlEspHx0eHv5JX1/fnkWLFn2WMfZ8Cd0+AN9Yv379ujEFOU/wWdc1Y5TeMZ7zB4xRvxUEf6R0WwI/ANYnpTxWxtjXSnsfaaUgAUQoHQnBQsbe2zZ58gvMML4ihCjykFrrE2fxzCYhJFZyfCidTt+nlPpKJBJZWuIJ4Ps+lFIwDAOc8wBACkCMEDLCMwgCBEEwEu4QQo75vr+dMXZdsSCgtUY+nx+h45zDMAxIKQez2exBx3HaKaXwfR+5XA5aa7iui1JvWKiG0SKvXC4HAHAcp5Ruq5Tyi52dnQfHcpDzAFe7Lp5Pp/2Vkcg/DEkZL2Psz/koi3A2q6CBHQz4y6RS73FClsYobSnGoJEz8wAQrY8O2PbdvpQPxxyntCS8dsOGDZ8bzXvevHmtQoi3SipdVaZpXpxMJu/yfX+baZpesb9gnemNDAApKWUXpfT6kmQZJT0XAIhzzo8GQfAdxthfF3sWpmnCNM0znBdjTNu23VIsKliWNdJfKSoWgNNKqf1a6+mMMbe4rrPQZQD8qrOz8+CyZcvQ2dk5loP8vuP5dBo3eR5WDQ/nH0sm/2JQylk+8IIE8mdRim4NfDcAJv3t4OBiAN3/mkq9m1Jq5rBS/y0Ajo4qBSc18HdHOZ+1s6yMUGBCSRKttdZrz7ambDY77Pv+qyWVI5cxdlN3d/dbvu+35PP5x5RSuVHDdmit7zxy5Mikt99++6ZsNntjGIb7Rj3GMqi1fkxrvbCrq+uu4eHh+3O53PVSyt1nedxlvdb6ug0bNlSkUqnx+Xz+dinlRqVUpui9Cn+7tda3bdy4cX4qlZqQz+e/LqXsUkplR9Ht0Frfsn79+r8CcEEqxwWP22KxM44vdxzx1Wi05guue8YTh3cXuuuF/AUPVVefMW5lNFpzqWn+Rt728ssvP+N41qxZv/F6Z86cac+bN6+s9NzSpUvxqU99arRHqhZCjGjmsmXLAOBDdB0dHdUdHR3R0nNLliz5EF1ZWRmbP39+xcfNW1tby89GN4YxjGEMYxjDGM5bnO2diNbW1t/JHA0NDV5jY+MNzc3N7f+/9z36fYvW1taRGkNzc/MZv02dOvWcVCV/V/P+LvB7u7GmpiaTEPLHnPPSco0vpXzPsqxVlNIlr7/++qZPet4JEyYYnufdaJrmk5zzL7722mv/XF9fzwDUAogPDQ3trq2tbWaM9cRisQdffvnle86BQE42DOMF0zQHd+3adcYbVy0tLdM55//HNM2+Xbt2nbOGXUtLyyLDMJ4TQry0a9euz1+oCvJ7W+YVQoyzbfuvysrKSisnb58+ffpn8Xg85/s+b2lpuUcp9dyBAwf6Ghsbr+WczwjD8Km+vr6egpLZAL5EKQ2VUkOMsXd93z9sGMaXKaXHenp6ftrQ0GAQQj7DOZ+ilHqbUtohhHBisVjCtu23AIAxNtU0zZ9FIpHm8vLy65LJ5FtCiO8lk8l1LS0tKwEYSqmjlNKabDb7vGman6eU7t6/f//mhoaGRsbYTZTSvp6enqcKAj8ewB2c884gCE5SShfncrlVpml+lXN+aO/evS80NTV9gTE20ff9J03TZKZpmrFYbKC1tfWLQRBkent7nwUA0zQt0zSN8vLy7sKeb2aMNSilXuzt7e1ubGxsoJReSQgZKHTih3p6ep4BgMbGxqbCbwmttUMpHZBS9lBKrwbQo7WuopR2Z7PZvUKIayilca31ECGECyGytm1nPM+jM2bM+Ibv+51BEJzinN9MKe0Pw7CPENKC99tOCUrpjlwulxdCfJ4QwoMgeIpSWk0pvYIQclprPcw5f2Xv3r3HzzsFWbFiBQHwZQD152BNEsDW1atXbwBA5s2b92PP827ZuHGjV6gKPU0ptUzT3DBu3LhAa72Uc77L87z7HMfp0lrfF41GJ+3ateu4bdsRzvkD8XjcDcNQhmH4tVQq1RWLxd5ljIny8vJFJ0+efDYSifwyFosFUkqDUprK5/Mvcc79IAjejUajwjTNpdFodEYkEkEQBPf7vn+v67p3CyEOUUq/F41GJ0opUWy8McZgGMbr2Wz2Rsdx9pSVlR2ilLKKiopLtm7d+m3P88oYY192HKdmaGjIi0Qic1Op1Huc8791Xfc+SukjjuPc5jhOt9b6K0NDQ3cwxi6ilF5UVVV1FaX0aFVVVWbr1q3rOOcOIaQ6CAI2bdq0VY7j/KHjOEcA3O553oNBEFwTi8WWcM6hlAo45w/19PQ809DQMNW27VWxWGxB4aHJrNb6x4lE4iLXdf/GNE1IKUEI2XD8+PFnPM/7R8/zlFKKMsbWJJPJNZTSOAAajUa/zhirOXny5GHHce4VQvyvXC53p+M4nyqUwbcnEokfGIbxB47jLLZt+4RS6qpEIvGibdsPOo6DMAzXO46zuaOjY7lSajnOUpb/pG0wgM2rV69e+0l4kKKCLDkHChIAeBDAhra2NjebzbZ6npcAgLa2tohSqpZSepgQchWANznnfiwWu9V13TeGh4e3CSH+U0VFRTuAtYQQhzHmCiH+dxAEd+Xz+S/FYjGTMbYpnU5P9zxvgeu6JBqNDkgpZ0spHxFCfFZKySmlYWdn50kAiEajTwO4W2u97qWXXrpz5syZ3zYMI6eUOkYpreGcPxYEwRuGYfyZbdu3BUHwp5RSu7y8/FrP8xQhZFMmk5kdiUSmA4BSymeMDVBKZ7muO9227UBrfZdhGAdTqdQrlmXdF4lEtqZSqTcMw7ghGo1eIaVMcc6/mUql3jVN8+loNOoVeDVxzk9rrbXjOFdHo9E/TyQSa0zT3B6NRi/1fX+G53l/PDQ0tFYI8YYQYgAAXNedaJrmbM/z7k0kEuuFEDsZYz5jrIlzvocQ8jeEkNsopWWxWOxqx3E2ZLPZe4QQjzPGPK21wRhLaq1fVUrFGWMrXNd9x7KsHZs3b/6zcePGuZMmTXrItu1rHMf5bn9/fxCLxZa4rrspk8kEhmG0RSKRgFI6aJrmdw8fPvyP8+fPt5VSVwL41jlyEBEAH6kg9LdQEO8cLdrA+w/vgVJKCSHjtdZ7C6EOI4Q0AtjV39+vMpkMKKUHGGO1jLGEbduCc75KSrkFAA3DcCrnXBJCntq2bdvxIAhqDMNQjLFhx3FeU0r9TyFEJWOMDQ4OtqXT6bla6yNa67jWel9xQdls1s3n801a68qpU6fOB1DHOVf5fJ4zxpTW+sDw8HCzlDKbSqWOZzKZCVrrQ5zzWiGE5JwnbdveppT6JwAIwzAPIMsYm2vb9jtKqT7LsuYKIV7M5XKnGWNljLGMZVk5xtg/h2F4kjFmpNPpBZlM5ptKqROU0jcACELIeErpsNb6KOe8TErZls/nby+EfK9yzqO+71/r+/7DSqkBSmkvABiGwTnnIgiCi9Lp9M1BEBxXSp0mhDRxzo8PDAz0pdPpiFLqPcaYRym1kslkezabbVRKnSSEVFJKh8Mw3B6GYTel9KJIJFJnmuY/RaPR6vLy8ie11l8G8Oi2bds2u647kXPucc5D0zSPEUKe0VonAfQSQp7v6+sLCt7GPocRlP3vDrFWrFiB1atXSwBzz3n8xzknhDRSSncCACHEZoxVEUL6AbQWwoZuKeV/l1J+hxCySCn1xMsvv5ysra01CCF1jDGmlHpXSpkvKM9NjLF7tNZvSil/EYZhbxiG11VUVPwcQJwQsh1AOyHk5yNWhNIM53w/IeTG8vLyQ9lsdialFEEQxAzDEEEQ9FNKr2SM8VQqNeC6bh1j7GcA/kVKeWthvlfDMFxdsPoBgAQhRCqlns7lcte7rqsppc/4vv9eNBpdJaVcCWBJGIaPB0FQJoQwhRCfrqioqOWc/8natWt76uvrawgh0xljhpRyA4BJhJA7ysrKhhhj97755puPNzc3+4yxqysqKmoIIckwDA8BgJRyL6X0VwDuLCsrSwghTqVSqRSldDpjbFcYhooQMo1zviafzx+VUj5aXV19CSEESqlMYd4wnU4fUEoNK6Vgmubz69ate66tre1213WvjcfjCILgvtbW1rknTpz4I9d1fyml/M8ABoMg+CmAGsMwlJTyFACsXr06CeDOwuecYMWKFSjMfX5VD9rbz6ygLl++/DceO7oDDACXXnrpb72GZcuWkTlz5nyi+5o9e/YnwmfhwoUfW4GcMmXK3La2trc6Ojp2LFy4UC1fvvyZT/o+TZ8+/ftz5szRy5Yt+9FH0Z3l0ZczUPqi2FiZdwznBNOmTavyPO8yx3FaCCFvaq2f6+rq+kT+u+OUKVOwb98+zJ07d6LWum7nzp1bL7vsMmzYsGHswo9hDP9R8H8BM/XVggoDbGIAAAAASUVORK5CYII=");
  fprintf(fp, "</a>");
  fprintf(fp, "<ul>");
  fprintf(fp, "<li><a href=\"#\">Overall</a></li>");
  fprintf(fp, "<li><a href=\"#%s\">Unique visitors</a></li>", (const void *)"visitors");
  fprintf(fp, "<li><a href=\"#%s\">Requested files</a></li>", (const void *)"requests");
  fprintf(fp, "<li><a href=\"#%s\">Requested static files</a></li>", (const void *)"static_requests");
  fprintf(fp, "<li><a href=\"#%s\">Not found URLs</a></li>", (const void *)"not_found");
  fprintf(fp, "<li><a href=\"#%s\">Hosts</a></li>", (const void *)"hosts");
  fprintf(fp, "<li><a href=\"#%s\">Operating Systems</a></li>", (const void *)"os");
  fprintf(fp, "<li><a href=\"#%s\">Browsers</a></li>", (const void *)"browsers");
  fprintf(fp, "<li><a href=\"#%s\">Time Distribution</a></li>", (const void *)"visit_time");
  fprintf(fp, "<li><a href=\"#%s\">Referrers URLs</a></li>", (const void *)"referrers");
  fprintf(fp, "<li><a href=\"#%s\">Referring sites</a></li>", (const void *)"referring_sites");
  signed int return_value_ignore_panel$1;
  return_value_ignore_panel$1=ignore_panel((enum MODULES)KEYPHRASES);
  if(return_value_ignore_panel$1 == 0)
    fprintf(fp, "<li><a href=\"#%s\">Keyphrases</a></li>", (const void *)"keyphrases");

  fprintf(fp, "<li><a href=\"#%s\">Geo Location</a></li>", (const void *)"geolocation");
  fprintf(fp, "<li><a href=\"#%s\">Status codes</a></li>", (const void *)"status_codes");
  fprintf(fp, "<li class=\"menu-item-divided\"></li>");
  fprintf(fp, "</ul>");
  fprintf(fp, "<p>Generated by<br />GoAccess %s<br />—<br />%s</p>", (const void *)"0.9.4", now);
  fprintf(fp, "</div>");
  fprintf(fp, "</div> <!-- menu -->");
  fprintf(fp, "<div id=\"main\" class=\"pure-u-1\">");
  fprintf(fp, "<div class=\"l-box\">");
}

// print_subitems
// file src/output.c line 1310
static void print_subitems(struct _IO_FILE *fp, struct GHolder_ *h, signed int idx, signed int total, signed int max_hit, signed int max_vis, const struct GOutput_ *output)
{
  struct GMetrics *nmetrics;
  struct GSubItem_ *iter;
  struct GSubList_ *sub_list = (h->items + (signed long int)idx)->sub_list;
  signed int i = 0;
  if(!(sub_list == ((struct GSubList_ *)NULL)))
  {
    iter = sub_list->head;
    for( ; !(iter == ((struct GSubItem_ *)NULL)); i = i + 1)
    {
      set_data_metrics(iter->metrics, &nmetrics, total);
      print_html_begin_tr(fp, 1, 1);
      print_metrics(fp, nmetrics, max_hit, max_vis, 1, output);
      print_html_end_tr(fp);
      free((void *)nmetrics);
      iter = iter->next;
    }
  }

}

// print_table_head
// file src/output.c line 1161
static void print_table_head(struct _IO_FILE *fp, enum MODULES module)
{
  const char *return_value_module_to_head$1;
  return_value_module_to_head$1=module_to_head(module);
  const char *return_value_module_to_id$2;
  return_value_module_to_id$2=module_to_id(module);
  print_html_h2(fp, return_value_module_to_head$1, return_value_module_to_id$2);
  const char *return_value_module_to_desc$3;
  return_value_module_to_desc$3=module_to_desc(module);
  print_p(fp, return_value_module_to_desc$3);
}

// process_log
// file src/parser.c line 1669
static void process_log(struct GLogItem_ *glog)
{
  enum MODULES module;
  glog->uniq_nkey=ht_insert_unique_key(glog->uniq_key);
  if(!(conf.list_agents == 0))
  {
    glog->agent_nkey=ht_insert_agent_key(glog->agent);
    ht_insert_agent_val(glog->agent_nkey, glog->agent);
  }

  module = (enum MODULES)0;
  for( ; !((signed int)module >= 13); module = (enum MODULES)((signed int)module + 1))
  {
    const struct GParse_ *parse;
    parse=panel_lookup$link4(module);
    if(!(parse == ((const struct GParse_ *)NULL)))
    {
      signed int return_value_ignore_panel$1;
      return_value_ignore_panel$1=ignore_panel(module);
      if(return_value_ignore_panel$1 == 0)
        map_log(glog, parse, module);

    }

  }
}

// raw_data_iter
// file src/glibht.c line 614
static void raw_data_iter(void *k, void *v, void *data_ptr)
{
  struct GRawData_ *raw_data = (struct GRawData_ *)data_ptr;
  (raw_data->items + (signed long int)raw_data->idx)->key = k;
  (raw_data->items + (signed long int)raw_data->idx)->value = v;
  raw_data->idx = raw_data->idx + 1;
}

// read_log
// file src/parser.c line 1758
static signed int read_log(struct GLog_ **logger, signed int n)
{
  struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
  char line[4096l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  signed int i = 0;
  signed int test = -1 == n ? 0 : 1;
  signed int return_value_isatty$1;
  char *return_value_fgets$5;
  signed int tmp_post$6;
  if(conf.ifile == ((char *)NULL) && !(conf.load_from_disk == 0))
  {
    return_value_isatty$1=isatty(0);
    if(return_value_isatty$1 == 0)
      goto __CPROVER_DUMP_L1;

    (*logger)->load_from_disk_only = (unsigned short int)1;
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    signed int return_value_isatty$2;
    return_value_isatty$2=isatty(0);
    if(return_value_isatty$2 == 0)
    {
      if(conf.ifile == ((char *)NULL))
      {
        fp = stdin;
        (*logger)->piping = (unsigned short int)1;
      }

    }

    if((*logger)->piping == 0)
    {
      fp=fopen(conf.ifile, "r");
      if(fp == ((struct _IO_FILE *)NULL))
        do
        {
          endwin();
          fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:40");
          fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
          fprintf(stderr, "\nFatal error has occurred");
          fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/parser.c", (const void *)"read_log", 1778);
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          char *return_value_strerror$4;
          return_value_strerror$4=strerror(*return_value___errno_location$3);
          fprintf(stderr, "Unable to open the specified log file. %s", return_value_strerror$4);
          fprintf(stderr, "\n\n");

        __CPROVER_DUMP_L4:
          ;
          exit(1);
        }
        while((_Bool)0);

    }

    do
    {
      return_value_fgets$5=fgets(line, 4096, fp);
      if(return_value_fgets$5 == ((char *)NULL))
        break;

      if(n >= 0)
      {
        tmp_post$6 = i;
        i = i + 1;
        if(tmp_post$6 == n)
          break;

      }

      signed int return_value_pre_process_log$7;
      return_value_pre_process_log$7=pre_process_log(*logger, line, test);
      if(!(return_value_pre_process_log$7 == 0))
      {
        if((*logger)->piping == 0)
          fclose(fp);

        return 1;
      }

    }
    while((_Bool)1);
    if(!((*logger)->piping == 0))
      freopen("/dev/tty", "r", stdin);

    if((*logger)->piping == 0)
      fclose(fp);

    return 0;
  }
}

// read_option_args
// file src/options.h line 25
void read_option_args(signed int argc, char **argv)
{
  signed int o;
  signed int idx = 0;
  conf.geo_db = 1;
  signed int tmp_post$1;
  signed int return_value_strcmp$2;
  signed int return_value_strcmp$4;
  signed int tmp_post$3;
  signed int return_value_strcmp$5;
  signed int return_value_strcmp$6;
  signed int return_value_strcmp$7;
  signed int return_value_strcmp$8;
  signed int return_value_strcmp$9;
  signed int return_value_strcmp$12;
  signed int tmp_post$11;
  signed int return_value_strcmp$13;
  signed int return_value_strcmp$14;
  signed int return_value_strcmp$15;
  signed int return_value_strcmp$16;
  signed int return_value_strcmp$17;
  signed int return_value_strcmp$19;
  signed int tmp_post$18;
  signed int return_value_strcmp$21;
  signed int tmp_post$20;
  signed int return_value_strcmp$23;
  signed int tmp_post$22;
  signed int return_value_strcmp$24;
  signed int return_value_strcmp$25;
  signed int return_value_strcmp$26;
  signed int return_value_strcmp$27;
  signed int return_value_strcmp$28;
  signed int return_value_strcmp$29;
  signed int return_value_strcmp$30;
  _Bool tmp_if_expr$32;
  signed int return_value_strcmp$31;
  signed int return_value_strcmp$33;
  signed int return_value_strcmp$34;
  signed int return_value_strcmp$35;
  signed int return_value_strcmp$37;
  signed int return_value_atoi$36;
  signed int return_value_strcmp$38;
  signed int return_value_strcmp$39;
  signed int return_value_strcmp$40;
  signed int return_value_strcmp$41;
  signed int return_value_strcmp$42;
  signed int return_value_strcmp$43;
  do
  {
    o=getopt_long(argc, argv, short_options, long_opts, &idx);
    if(!(o >= 0))
      break;

    if(o == -1)
      break;

    switch(o)
    {
      case 102:
      {
        conf.ifile = optarg;
        break;
      }
      case 112:
        break;
      case 103:
      {
        conf.geo_db = 0;
        break;
      }
      case 101:
      {
        if(!(conf.ignore_ip_idx >= 64))
        {
          tmp_post$1 = conf.ignore_ip_idx;
          conf.ignore_ip_idx = conf.ignore_ip_idx + 1;
          conf.ignore_ips[(signed long int)tmp_post$1] = optarg;
        }

        break;
      }
      case 97:
      {
        conf.list_agents = 1;
        break;
      }
      case 99:
      {
        conf.load_conf_dlg = 1;
        break;
      }
      case 105:
      {
        conf.hl_header = 1;
        break;
      }
      case 113:
      {
        conf.ignore_qstr = 1;
        break;
      }
      case 111:
      {
        conf.output_format = optarg;
        break;
      }
      case 108:
      {
        conf.debug_log = optarg;
        dbg_log_open(conf.debug_log);
        break;
      }
      case 114:
      {
        conf.skip_term_resolver = 1;
        break;
      }
      case 100:
      {
        conf.enable_html_resolver = 1;
        break;
      }
      case 109:
      {
        conf.mouse_support = 1;
        break;
      }
      case 77:
      {
        conf.append_method = 1;
        break;
      }
      case 104:
      {
        cmd_help();
        break;
      }
      case 72:
      {
        conf.append_protocol = 1;
        break;
      }
      case 86:
      {
        display_version();
        exit(0);
        break;
      }
      case 0:
      {
        return_value_strcmp$2=strcmp("no-global-config", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$2 == 0)
          break;

        return_value_strcmp$4=strcmp("color", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$4 == 0)
        {
          if(!(conf.color_idx >= 64))
          {
            tmp_post$3 = conf.color_idx;
            conf.color_idx = conf.color_idx + 1;
            conf.colors[(signed long int)tmp_post$3] = optarg;
          }

        }

        return_value_strcmp$5=strcmp("color-scheme", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$5 == 0)
          conf.color_scheme=atoi(optarg);

        return_value_strcmp$6=strcmp("log-format", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$6 == 0)
        {
          if(conf.log_format == ((char *)NULL))
            conf.log_format=unescape_str(optarg);

        }

        return_value_strcmp$7=strcmp("time-format", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$7 == 0)
        {
          if(conf.time_format == ((char *)NULL))
            conf.time_format=unescape_str(optarg);

        }

        return_value_strcmp$8=strcmp("date-format", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$8 == 0)
        {
          if(conf.date_format == ((char *)NULL))
            conf.date_format=unescape_str(optarg);

        }

        return_value_strcmp$9=strcmp("invalid-requests", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$9 == 0)
        {
          conf.invalid_requests_log = optarg;
          invalid_log_open(conf.invalid_requests_log);
        }

        return_value_strcmp$12=strcmp("static-file", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$12 == 0)
        {
          if(!(conf.static_file_idx >= 64))
          {
            unsigned long int return_value_strlen$10;
            return_value_strlen$10=strlen(optarg);
            if(!(conf.static_file_max_len >= return_value_strlen$10))
              conf.static_file_max_len=strlen(optarg);

            tmp_post$11 = conf.static_file_idx;
            conf.static_file_idx = conf.static_file_idx + 1;
            conf.static_files[(signed long int)tmp_post$11] = optarg;
          }

        }

        return_value_strcmp$13=strcmp("4xx-to-unique-count", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$13 == 0)
          conf.client_err_to_unique_count = 1;

        return_value_strcmp$14=strcmp("html-report-title", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$14 == 0)
          conf.html_report_title = optarg;

        return_value_strcmp$15=strcmp("444-as-404", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$15 == 0)
          conf.code444_as_404 = 1;

        return_value_strcmp$16=strcmp("all-static-files", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$16 == 0)
          conf.all_static_files = 1;

        return_value_strcmp$17=strcmp("ignore-crawlers", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$17 == 0)
          conf.ignore_crawlers = 1;

        return_value_strcmp$19=strcmp("ignore-panel", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$19 == 0)
        {
          if(!(conf.ignore_panel_idx >= 13))
          {
            tmp_post$18 = conf.ignore_panel_idx;
            conf.ignore_panel_idx = conf.ignore_panel_idx + 1;
            conf.ignore_panels[(signed long int)tmp_post$18] = optarg;
          }

        }

        return_value_strcmp$21=strcmp("ignore-referer", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$21 == 0)
        {
          if(!(conf.ignore_referer_idx >= 64))
          {
            tmp_post$20 = conf.ignore_referer_idx;
            conf.ignore_referer_idx = conf.ignore_referer_idx + 1;
            conf.ignore_referers[(signed long int)tmp_post$20] = optarg;
          }

        }

        return_value_strcmp$23=strcmp("sort-panel", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$23 == 0)
        {
          if(!(conf.sort_panel_idx >= 13))
          {
            tmp_post$22 = conf.sort_panel_idx;
            conf.sort_panel_idx = conf.sort_panel_idx + 1;
            conf.sort_panels[(signed long int)tmp_post$22] = optarg;
          }

        }

        return_value_strcmp$24=strcmp("real-os", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$24 == 0)
          conf.real_os = 1;

        return_value_strcmp$25=strcmp("double-decode", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$25 == 0)
          conf.double_decode = 1;

        return_value_strcmp$26=strcmp("no-color", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$26 == 0)
          conf.no_color = 1;

        return_value_strcmp$27=strcmp("no-column-names", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$27 == 0)
          conf.no_column_names = 1;

        return_value_strcmp$28=strcmp("no-csv-summary", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$28 == 0)
          conf.no_csv_summary = 1;

        return_value_strcmp$29=strcmp("no-progress", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$29 == 0)
          conf.no_progress = 1;

        return_value_strcmp$30=strcmp("geoip-city-data", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$30 == 0)
          tmp_if_expr$32 = (_Bool)1;

        else
        {
          return_value_strcmp$31=strcmp("geoip-database", long_opts[(signed long int)idx].name);
          tmp_if_expr$32 = !(return_value_strcmp$31 != 0) ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$32)
          conf.geoip_database = optarg;

        return_value_strcmp$33=strcmp("load-from-disk", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$33 == 0)
          conf.load_from_disk = 1;

        return_value_strcmp$34=strcmp("keep-db-files", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$34 == 0)
          conf.keep_db_files = 1;

        return_value_strcmp$35=strcmp("db-path", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$35 == 0)
          conf.db_path = optarg;

        return_value_strcmp$37=strcmp("xmmap", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$37 == 0)
        {
          return_value_atoi$36=atoi(optarg);
          conf.xmmap = (signed long int)return_value_atoi$36;
        }

        return_value_strcmp$38=strcmp("cache-lcnum", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$38 == 0)
          conf.cache_lcnum=atoi(optarg);

        return_value_strcmp$39=strcmp("cache-ncnum", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$39 == 0)
          conf.cache_ncnum=atoi(optarg);

        return_value_strcmp$40=strcmp("tune-lmemb", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$40 == 0)
          conf.tune_lmemb=atoi(optarg);

        return_value_strcmp$41=strcmp("tune-nmemb", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$41 == 0)
          conf.tune_nmemb=atoi(optarg);

        return_value_strcmp$42=strcmp("tune-bnum", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$42 == 0)
          conf.tune_bnum=atoi(optarg);

        return_value_strcmp$43=strcmp("compression", long_opts[(signed long int)idx].name);
        break;
      }
      case 115:
      {
        display_storage();
        exit(0);
      }
      case 63:
        exit(1);
      default:
        exit(1);
    }
  }
  while((_Bool)1);
  idx = optind;
  for( ; !(idx >= argc); idx = idx + 1)
    cmd_help();
}

// regexp_init
// file src/gdashboard.c line 1152
static signed int regexp_init(struct re_pattern_buffer *regex, const char *pattern)
{
  signed int y;
  signed int x;
  signed int rc;
  char buf[100l];
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  y = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  x = tmp_if_expr$2;
  rc=regcomp(regex, pattern, 1 | (find_t.icase != 0 ? 1 << 1 : 0));
  if(!(rc == 0))
  {
    regerror(rc, regex, buf, sizeof(char [100l]) /*100ul*/ );
    draw_header(stdscr, buf, "%s", y - 1, 0, x, color_error);
    wrefresh(stdscr);
    return 1;
  }

  else
    return 0;
}

// render_avgts
// file src/gdashboard.c line 663
static void render_avgts(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_AVGTS, data->module);
  struct _win_st$2 *win = render.win;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  char *avgts = (data->data + (signed long int)idx)->metrics->avgts.sts;
  if((signed int)data->module == HOSTS)
  {
    if(!((data->data + (signed long int)idx)->is_subitem == 0))
      goto out;

  }

  if(!(sel == 0))
    draw_header(win, avgts, "%9s", y, *x, w, color_selected);

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%9s", avgts);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }

out:
  ;
  *x = *x + 9 + 1;
}

// render_bars
// file src/gdashboard.c line 540
static void render_bars(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color((enum CSTM_COLORS)COLOR_BARS);
  struct _win_st$2 *win = render.win;
  char *bar;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  bar=get_bars((data->data + (signed long int)idx)->metrics->hits, data->max_hits, *x);
  if(!(sel == 0))
    draw_header(win, bar, "%s", y, *x, w, color_selected);

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%s", bar);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }
  free((void *)bar);
}

// render_bw
// file src/gdashboard.c line 744
static void render_bw(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_BW, data->module);
  struct _win_st$2 *win = render.win;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  char *bw = (data->data + (signed long int)idx)->metrics->bw.sbw;
  if((signed int)data->module == HOSTS)
  {
    if(!((data->data + (signed long int)idx)->is_subitem == 0))
      goto out;

  }

  if(!(sel == 0))
    draw_header(win, bw, "%11s", y, *x, w, color_selected);

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%11s", bw);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }

out:
  ;
  *x = *x + 11 + 1;
}

// render_child_node
// file src/gdashboard.c line 384
static char * render_child_node(const char *data)
{
  char *buf;
  signed int len = 0;
  const char *bend = "|";
  const char *horz = "`-";
  _Bool tmp_if_expr$1;
  if(data == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*data == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    len=snprintf((char *)(void *)0, (unsigned long int)0, " %s%s %s", bend, horz, data);
    void *return_value_xmalloc$2;
    return_value_xmalloc$2=xmalloc((unsigned long int)(len + 3));
    buf = (char *)return_value_xmalloc$2;
    sprintf(buf, " %s%s %s", bend, horz, data);
    return buf;
  }
}

// render_cols
// file src/gdashboard.c line 1013
static void render_cols(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y)
{
  enum MODULES module = data->module;
  const struct GOutput_ *output;
  output=output_lookup(module);
  signed int x = 1;
  if(!(data->idx_data == 0) && conf.no_column_names == 0)
  {
    if(!(output->hits == 0))
      lprint_col(win, *y, &x, data->hits_len, "%s", "Hits");

    if(!(output->visitors == 0))
      rprint_col(win, *y, &x, data->visitors_len, "%*s", "Vis.");

    if(!(output->percent == 0))
      rprint_col(win, *y, &x, data->perc_len + 4, "%*s", "%");

    if(!(output->bw == 0))
    {
      if(!(conf.bandwidth == 0))
        rprint_col(win, *y, &x, 11, "%*s", "Bandwidth");

    }

    if(!(output->avgts == 0))
    {
      if(!(conf.serve_usecs == 0))
        rprint_col(win, *y, &x, 9, "%*s", "Avg. T.S.");

    }

    if(!(output->cumts == 0))
    {
      if(!(conf.serve_usecs == 0))
        rprint_col(win, *y, &x, 9, "%*s", "Cum. T.S.");

    }

    if(!(output->maxts == 0))
    {
      if(!(conf.serve_usecs == 0))
        rprint_col(win, *y, &x, 9, "%*s", "Max. T.S.");

    }

    if(!(output->method == 0))
    {
      if(!(conf.append_method == 0))
        lprint_col(win, *y, &x, data->method_len, "%s", "Mtd");

    }

    if(!(output->protocol == 0))
    {
      if(!(conf.append_protocol == 0))
        lprint_col(win, *y, &x, 8, "%s", "Proto");

    }

    if(!(output->data == 0))
      lprint_col(win, *y, &x, 4, "%s", "Data");

  }

}

// render_confdlg
// file src/ui.h line 302
signed int render_confdlg(struct GLog_ *logger, struct GSpinner_ *spinner)
{
  struct GMenu_ *menu;
  struct _win_st *win;
  char *cstm_log;
  char *cstm_date;
  char *cstm_time;
  signed int c;
  signed int quit = 1;
  signed int invalid = 1;
  signed int y;
  signed int x;
  signed int h = 20;
  signed int w = 52;
  signed int w2 = w - 2;
  unsigned long int i;
  unsigned long int n;
  unsigned long int sel;
  const char *choices[8l] = { "NCSA Combined Log Format", "NCSA Combined Log Format with Virtual Host", 
    "Common Log Format (CLF)", "Common Log Format (CLF) with Virtual Host", 
    "W3C", "CloudFront (Download Distribution)", "Google Cloud Storage", "AWS Elastic Load Balancing (HTTP/S)" };
  n = sizeof(const char *[8l]) /*64ul*/  / sizeof(const char *) /*8ul*/ ;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  y = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  x = tmp_if_expr$2;
  win=newwin(h, w, (y - h) / 2, (x - w) / 2);
  keypad(win, (_Bool)1);
  wborder(win, (unsigned long int)124, (unsigned long int)124, (unsigned long int)45, (unsigned long int)45, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43);
  menu=new_gmenu(win, 6, 48, 4, 2);
  menu->size = (signed int)n;
  menu->selectable = (unsigned short int)1;
  void *return_value_xcalloc$3;
  return_value_xcalloc$3=xcalloc(n, sizeof(struct GItem_) /*16ul*/ );
  menu->items = (struct GItem_ *)return_value_xcalloc$3;
  i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
  {
    (menu->items + (signed long int)i)->name=alloc_string(choices[(signed long int)i]);
    sel=get_selected_format_idx();
    (menu->items + (signed long int)i)->checked = sel == i ? 1 : 0;
  }
  post_gmenu(menu);
  draw_header(win, "Log Format Configuration", " %s", 1, 1, w2, color_panel_header);
  mvwprintw(win, 2, 2, "[SPACE] to toggle - [ENTER] to proceed");
  draw_header(win, "Log Format - [c] to add/edit format", " %s", 11, 1, w2, color_panel_header);
  if(!(conf.log_format == ((char *)NULL)))
  {
    log_format=escape_str(conf.log_format);
    mvwprintw(win, 12, 2, "%.*s", 48, log_format);
    if(!(conf.log_format == ((char *)NULL)))
      free((void *)conf.log_format);

  }

  draw_header(win, "Date Format - [d] to add/edit format", " %s", 14, 1, w2, color_panel_header);
  if(!(conf.date_format == ((char *)NULL)))
  {
    date_format=escape_str(conf.date_format);
    mvwprintw(win, 15, 2, "%.*s", 48, date_format);
    if(!(conf.date_format == ((char *)NULL)))
      free((void *)conf.date_format);

  }

  draw_header(win, "Time Format - [t] to add/edit format", " %s", 17, 1, w2, color_panel_header);
  if(!(conf.time_format == ((char *)NULL)))
  {
    time_format=escape_str(conf.time_format);
    mvwprintw(win, 18, 2, "%.*s", 48, time_format);
    if(!(conf.time_format == ((char *)NULL)))
      free((void *)conf.time_format);

  }

  wrefresh(win);
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$6;
  while(!(quit == 0))
  {
    c=wgetch(stdscr);
    switch(c)
    {
      case 0402:
      {
        gmenu_driver(menu, 0);
        clear_confdlg_status_bar(win);
        goto __CPROVER_DUMP_L49;
      }
      case 0403:
      {
        gmenu_driver(menu, 1);
        clear_confdlg_status_bar(win);
        goto __CPROVER_DUMP_L49;
      }
      case 32:
      {
        gmenu_driver(menu, 2);
        if(!(time_format == ((char *)NULL)))
          free((void *)time_format);

        if(!(date_format == ((char *)NULL)))
          free((void *)date_format);

        if(!(log_format == ((char *)NULL)))
          free((void *)log_format);

        i = (unsigned long int)0;
        for( ; !(i >= n); i = i + 1ul)
          if((menu->items + (signed long int)i)->checked == 1)
          {
            date_format=get_selected_date_str(i);
            log_format=get_selected_format_str(i);
            time_format=get_selected_time_str(i);
            mvwprintw(win, 12, 1, " %s", log_format);
            mvwprintw(win, 15, 1, " %s", date_format);
            mvwprintw(win, 18, 1, " %s", time_format);
            break;
          }

        goto __CPROVER_DUMP_L49;
      }
      case 99:
      {
        clear_confdlg_status_bar(win);
        wmove(win, 12, 2);
        cstm_log=input_string(win, 12, 2, (unsigned long int)70, log_format, 0, ((signed int *)NULL));
        if(!(cstm_log == ((char *)NULL)))
          tmp_if_expr$4 = (signed int)*cstm_log != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$4 = (_Bool)0;
        if(tmp_if_expr$4)
        {
          if(!(log_format == ((char *)NULL)))
            free((void *)log_format);

          log_format=alloc_string(cstm_log);
          free((void *)cstm_log);
        }

        else
        {
          if(!(cstm_log == ((char *)NULL)))
            free((void *)cstm_log);

          if(!(log_format == ((char *)NULL)))
          {
            free((void *)log_format);
            log_format = (char *)(void *)0;
          }

        }
        goto __CPROVER_DUMP_L49;
      }
      case 100:
      {
        clear_confdlg_status_bar(win);
        wmove(win, 15, 0);
        cstm_date=input_string(win, 15, 2, (unsigned long int)14, date_format, 0, ((signed int *)NULL));
        if(!(cstm_date == ((char *)NULL)))
          tmp_if_expr$5 = (signed int)*cstm_date != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$5 = (_Bool)0;
        if(tmp_if_expr$5)
        {
          if(!(date_format == ((char *)NULL)))
            free((void *)date_format);

          date_format=alloc_string(cstm_date);
          free((void *)cstm_date);
        }

        else
        {
          if(!(cstm_date == ((char *)NULL)))
            free((void *)cstm_date);

          if(!(date_format == ((char *)NULL)))
          {
            free((void *)date_format);
            date_format = (char *)(void *)0;
          }

        }
        goto __CPROVER_DUMP_L49;
      }
      case 116:
      {
        clear_confdlg_status_bar(win);
        wmove(win, 15, 0);
        cstm_time=input_string(win, 18, 2, (unsigned long int)14, time_format, 0, ((signed int *)NULL));
        if(!(cstm_time == ((char *)NULL)))
          tmp_if_expr$6 = (signed int)*cstm_time != 0 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$6 = (_Bool)0;
        if(tmp_if_expr$6)
        {
          if(!(time_format == ((char *)NULL)))
            free((void *)time_format);

          time_format=alloc_string(cstm_time);
          free((void *)cstm_time);
        }

        else
        {
          if(!(cstm_time == ((char *)NULL)))
            free((void *)cstm_time);

          if(!(time_format == ((char *)NULL)))
          {
            free((void *)time_format);
            time_format = (char *)(void *)0;
          }

        }
        goto __CPROVER_DUMP_L49;
      }
      case 274:

      case 0x0a:

      case 0x0d:

      case 0527:
      {
        if(time_format == ((char *)NULL))
          draw_header(win, "Select a time format.", " %s", 3, 2, 48, color_error);

        if(date_format == ((char *)NULL))
          draw_header(win, "Select a date format.", " %s", 3, 2, 48, color_error);

        if(log_format == ((char *)NULL))
          draw_header(win, "Select a log format.", " %s", 3, 2, 48, color_error);

        if(!(date_format == ((char *)NULL)) && !(log_format == ((char *)NULL)) && !(time_format == ((char *)NULL)))
        {
          conf.time_format=unescape_str(time_format);
          conf.date_format=unescape_str(date_format);
          conf.log_format=unescape_str(log_format);
          signed int return_value_test_format$7;
          return_value_test_format$7=test_format(logger);
          if(!(return_value_test_format$7 == 0))
          {
            invalid = 1;
            draw_header(win, "No valid hits.", " %s", 3, 2, 48, color_error);
            free((void *)conf.log_format);
            free((void *)conf.date_format);
            free((void *)conf.time_format);
          }

          else
          {
            reset_struct(logger);
            spinner->win = win;
            spinner->y = 3;
            spinner->x = 2;
            spinner->spin_x = 48;
            spinner->w = 48;
            spinner->color = color_progress;
            ui_spinner_create(spinner);
            invalid = 0;
            quit = 0;
          }
        }

        goto __CPROVER_DUMP_L49;
      }
      case 0632:

      case 113:
        quit = 0;
      default:
      {

      __CPROVER_DUMP_L49:
        ;
        pthread_mutex_lock(&spinner->mutex);
        wrefresh(win);
        pthread_mutex_unlock(&spinner->mutex);
      }
    }
  }
  i = (unsigned long int)0;
  for( ; !(i >= n); i = i + 1ul)
    free((void *)(menu->items + (signed long int)i)->name);
  free((void *)menu->items);
  free((void *)menu);
  return invalid != 0 ? 1 : 0;
}

// render_content
// file src/gdashboard.c line 1056
static void render_content(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y, signed int *offset, signed int *total, struct GScroll_ *gscroll)
{
  enum MODULES module = data->module;
  signed int i;
  signed int j;
  signed int size;
  signed int h;
  signed int w;
  signed int data_pos;
  data_pos=get_data_pos_rows();
  signed int tmp_if_expr$1;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)win->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  h = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)win->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  w = tmp_if_expr$2;
  (void)w;
  size = data->dash_size;
  i = *offset;
  j = 0;
  for( ; !(i >= size); i = i + 1)
  {
    if(i % size == 0)
      render_header(win, data, gscroll->current, y);

    else
      if(i % size == 1 && !(conf.no_column_names == 0))
        render_description(win, data, y);

      else
        if(i % size == size + -1 || i % size == 1)
          *y = *y + 1;

        else
          if(conf.no_column_names == 0 && i % size == 3)
            *y = *y + 1;

          else
            if(conf.no_column_names == 0 && i % size == 2)
            {
              render_cols(win, data, y);
              *y = *y + 1;
            }

            else
              if(size + -2 >= i % size || i % size >= data_pos)
              {
                j = (i % size - data_pos) + gscroll->module[(signed long int)module].offset;
                render_data_line(win, data, y, j, gscroll);
              }

              else
                *y = *y + 1;
    *total = *total + 1;
    if(*y >= h)
      break;

  }
}

// render_cumts
// file src/gdashboard.c line 690
static void render_cumts(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_CUMTS, data->module);
  struct _win_st$2 *win = render.win;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  char *cumts = (data->data + (signed long int)idx)->metrics->cumts.sts;
  if((signed int)data->module == HOSTS)
  {
    if(!((data->data + (signed long int)idx)->is_subitem == 0))
      goto out;

  }

  if(!(sel == 0))
    draw_header(win, cumts, "%9s", y, *x, w, color_selected);

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%9s", cumts);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }

out:
  ;
  *x = *x + 9 + 1;
}

// render_data
// file src/gdashboard.c line 580
static void render_data(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_DATA, data->module);
  struct _win_st$2 *win = render.win;
  char buf[12l];
  char *value;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  value=substring((data->data + (signed long int)idx)->metrics->data, 0, w - *x);
  if((signed int)data->module == VISITORS)
    get_visitors_date(buf, value);

  _Bool tmp_if_expr$3;
  if(!(sel == 0))
    tmp_if_expr$3 = (signed int)data->module == HOSTS ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3 = (_Bool)0;
  _Bool tmp_if_expr$4;
  if(tmp_if_expr$3)
    tmp_if_expr$4 = (data->data + (signed long int)idx)->is_subitem != 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$4 = (_Bool)0;
  char *tmp_if_expr$1;
  char *tmp_if_expr$2;
  if(tmp_if_expr$4)
    render_data_hosts(win, render, value, *x);

  else
    if(!(sel == 0))
    {
      if((signed int)data->module == VISITORS)
        tmp_if_expr$1 = buf;

      else
        tmp_if_expr$1 = value;
      draw_header(win, tmp_if_expr$1, "%s", y, *x, w, color_selected);
    }

    else
    {
      wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
      if((signed int)data->module == VISITORS)
        tmp_if_expr$2 = buf;

      else
        tmp_if_expr$2 = value;
      mvwprintw(win, y, *x, "%s", tmp_if_expr$2);
      wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    }
  signed int tmp_if_expr$5;
  if((signed int)data->module == VISITORS)
    tmp_if_expr$5 = 12 - 1;

  else
    tmp_if_expr$5 = data->data_len;
  *x = *x + tmp_if_expr$5;
  *x = *x + 1;
  free((void *)value);
}

// render_data_hosts
// file src/gdashboard.c line 559
static void render_data_hosts(struct _win_st$2 *win, struct GDashRender_ render, char *value, signed int x)
{
  char *padded_data;
  padded_data=left_pad_str(value, x);
  draw_header(win, padded_data, "%s", render.y, 0, render.w, color_selected);
  free((void *)padded_data);
}

// render_data_line
// file src/gdashboard.c line 947
static void render_data_line(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y, signed int j, struct GScroll_ *gscroll)
{
  struct GDashRender_ render;
  enum MODULES module = data->module;
  signed int expanded = 0;
  signed int sel = 0;
  signed int w;
  signed int h;
  signed int tmp_if_expr$1;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)win->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  h = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)win->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  w = tmp_if_expr$2;
  (void)h;
  if(!(gscroll->expanded == 0))
  {
    if(module == gscroll->current)
      expanded = 1;

  }

  _Bool tmp_if_expr$3;
  if(!(j >= data->idx_data))
  {
    if(!(expanded == 0))
      tmp_if_expr$3 = j == gscroll->module[(signed long int)module].scroll ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$3 = (_Bool)0;
    sel = tmp_if_expr$3 ? 1 : 0;
    render.win = win;
    render.y = *y;
    render.w = w;
    render.idx = j;
    render.sel = sel;
    render_metrics(data, render, expanded);
  }


out:
  ;
  *y = *y + 1;
}

// render_description
// file src/gdashboard.c line 891
static void render_description(struct _win_st$2 *win, struct GDashModule_ *data, signed int *y)
{
  signed int w;
  signed int h;
  signed int tmp_if_expr$1;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)win->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  h = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)win->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  w = tmp_if_expr$2;
  (void)h;
  draw_header(win, data->desc, " %s", *y, 0, w, color_panel_desc);
  data->pos_y = (unsigned short int)*y;
  *y = *y + 1;
  *y = *y + 1;
}

// render_find_dialog
// file src/gdashboard.c line 1288
signed int render_find_dialog(struct _win_st$2 *main_win, struct GScroll_ *gscroll)
{
  signed int y;
  signed int x;
  signed int valid = 1;
  signed int w = 50;
  signed int h = 8;
  char *query = (char *)(void *)0;
  struct _win_st$2 *win;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  y = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  x = tmp_if_expr$2;
  win=newwin(h, w, (y - h) / 2, (x - w) / 2);
  keypad(win, (_Bool)1);
  wborder(win, (unsigned long int)124, (unsigned long int)124, (unsigned long int)45, (unsigned long int)45, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43, (unsigned long int)43);
  draw_header(win, "Find pattern in all views", " %s", 1, 1, w - 2, color_panel_header);
  mvwprintw(win, 2, 1, " %s", (const void *)"Regex allowed - ^g to cancel - TAB switch case");
  find_t.icase = 0;
  query=input_string(win, 4, 2, (unsigned long int)(w - 3), "", 1, &find_t.icase);
  if(!(query == ((char *)NULL)))
  {
    if(!((signed int)*query == 0))
    {
      reset_scroll_offsets(gscroll);
      reset_find();
      find_t.pattern=xstrdup(query);
      valid = 0;
    }

  }

  if(!(query == ((char *)NULL)))
    free((void *)query);

  signed int tmp_if_expr$3;
  if(!(main_win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$3 = (signed int)main_win->_maxy + 1;

  else
    tmp_if_expr$3 = -1;
  wtouchln(main_win, 0, tmp_if_expr$3, 1);
  close_win(win);
  wrefresh(main_win);
  return valid;
}

// render_header
// file src/gdashboard.c line 865
static void render_header(struct _win_st$2 *win, struct GDashModule_ *data, enum MODULES cur_module, signed int *y)
{
  struct GColors_ * (*func)(void);
  char ind;
  char *hd;
  signed int k;
  signed int w;
  signed int h;
  signed int tmp_if_expr$1;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$1 = (signed int)win->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  h = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$2 = (signed int)win->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  w = tmp_if_expr$2;
  (void)h;
  k = (signed int)data->module + 1;
  ind = (char)(cur_module == data->module ? 62 : 32);
  func = (cur_module == data->module ? (conf.hl_header != 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? color_panel_active : color_panel_header;
  signed int return_value_snprintf$3;
  return_value_snprintf$3=snprintf((char *)(void *)0, (unsigned long int)0, "%c %d - %s", ind, k, data->head);
  void *return_value_xmalloc$4;
  return_value_xmalloc$4=xmalloc((unsigned long int)(return_value_snprintf$3 + 1));
  hd = (char *)return_value_xmalloc$4;
  sprintf(hd, "%c %d - %s", ind, k, data->head);
  draw_header(win, hd, " %s", *y, 0, w, func);
  free((void *)hd);
  render_total_label(win, data, *y, func);
  data->pos_y = (unsigned short int)*y;
  *y = *y + 1;
}

// render_hits
// file src/gdashboard.c line 806
static void render_hits(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_HITS, data->module);
  struct _win_st$2 *win = render.win;
  char *hits;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  signed int len = data->hits_len;
  if((signed int)data->module == HOSTS)
  {
    if(!((data->data + (signed long int)idx)->is_subitem == 0))
      goto out;

  }

  if(!(sel == 0))
  {
    hits=int2str((data->data + (signed long int)idx)->metrics->hits, 0);
    draw_header(win, hits, " %s", y, 0, w, color_selected);
    free((void *)hits);
  }

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%d", (data->data + (signed long int)idx)->metrics->hits);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }

out:
  ;
  *x = *x + len + 1;
}

// render_maxts
// file src/gdashboard.c line 717
static void render_maxts(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_MAXTS, data->module);
  struct _win_st$2 *win = render.win;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  char *maxts = (data->data + (signed long int)idx)->metrics->maxts.sts;
  if((signed int)data->module == HOSTS)
  {
    if(!((data->data + (signed long int)idx)->is_subitem == 0))
      goto out;

  }

  if(!(sel == 0))
    draw_header(win, maxts, "%9s", y, *x, w, color_selected);

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%9s", maxts);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }

out:
  ;
  *x = *x + 9 + 1;
}

// render_method
// file src/gdashboard.c line 611
static void render_method(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_MTHD, data->module);
  struct _win_st$2 *win = render.win;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  char *method = (data->data + (signed long int)idx)->metrics->method;
  _Bool tmp_if_expr$1;
  if(method == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*method == 0 ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr$1)
  {
    if(!(sel == 0))
      draw_header(win, method, "%s", y, *x, w, color_selected);

    else
    {
      wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
      mvwprintw(win, y, *x, "%s", method);
      wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    }
    *x = *x + data->method_len + 1;
  }

}

// render_metrics
// file src/gdashboard.c line 906
static void render_metrics(struct GDashModule_ *data, struct GDashRender_ render, signed int expanded)
{
  signed int x = 1;
  enum MODULES module = data->module;
  const struct GOutput_ *output;
  output=output_lookup(module);
  if(!(output->hits == 0))
    render_hits(data, render, &x);

  if(!(output->visitors == 0))
    render_visitors(data, render, &x);

  if(!(output->percent == 0))
    render_percent(data, render, &x);

  if(!(conf.bandwidth == 0))
  {
    if(!(output->bw == 0))
      render_bw(data, render, &x);

  }

  if(!(output->avgts == 0))
  {
    if(!(conf.serve_usecs == 0))
      render_avgts(data, render, &x);

  }

  if(!(output->cumts == 0))
  {
    if(!(conf.serve_usecs == 0))
      render_cumts(data, render, &x);

  }

  if(!(output->maxts == 0))
  {
    if(!(conf.serve_usecs == 0))
      render_maxts(data, render, &x);

  }

  if(!(output->method == 0))
  {
    if(!(conf.append_method == 0))
      render_method(data, render, &x);

  }

  if(!(output->protocol == 0))
  {
    if(!(conf.append_protocol == 0))
      render_proto(data, render, &x);

  }

  if(!(output->data == 0))
    render_data(data, render, &x);

  _Bool tmp_if_expr$1;
  if(expanded == 0 && !(output->graph == 0))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (output->sub_graph != 0 ? (expanded != 0 ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    render_bars(data, render, &x);

}

// render_overall_field
// file src/ui.c line 348
static void render_overall_field(struct _win_st *win, const char *s, signed int y, signed int x, struct GColors_ *color)
{
  wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  mvwprintw(win, y, x, "%s", s);
  wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
}

// render_overall_statistics
// file src/ui.c line 451
static void render_overall_statistics(struct _win_st *win, struct Field_ *fields, unsigned long int n)
{
  struct GColors_ *color = (struct GColors_ *)(void *)0;
  signed int x_field = 2;
  signed int x_value = 0;
  unsigned long int i;
  unsigned long int j;
  unsigned long int k;
  unsigned long int max_field = (unsigned long int)0;
  unsigned long int max_value = (unsigned long int)0;
  unsigned long int mod_val;
  unsigned long int y;
  i = (unsigned long int)0;
  k = (unsigned long int)0;
  y = (unsigned long int)2;
  if(!(i >= n))
  {
    mod_val = k % (unsigned long int)4;
    if(mod_val == 0ul && k >= 1ul)
    {
      max_field = (unsigned long int)0;
      max_value = max_field;
      x_field = 2;
      x_value = x_field;
      y = y + 1ul;
    }

    x_field = x_field + (signed int)max_field;
    color=(fields + (signed long int)i)->colorlbl();
    render_overall_field(win, (fields + (signed long int)i)->field, (signed int)y, x_field, color);
    max_field = (unsigned long int)0;
    j = (unsigned long int)0;
    if(!(j >= n))
    {
      unsigned long int render_overall_statistics$$1$$1$$1$$2$$1$$len;
      render_overall_statistics$$1$$1$$1$$2$$1$$len=strlen((fields + (signed long int)j)->field);
      if(j % 4ul == mod_val && !(max_field >= render_overall_statistics$$1$$1$$1$$2$$1$$len))
      {
        if((fields + (signed long int)j)->oneliner == 0)
          max_field = render_overall_statistics$$1$$1$$1$$2$$1$$len;

      }

      j = j + 1ul;
    }

    max_value = (unsigned long int)0;
    j = (unsigned long int)0;
    if(!(j >= n))
    {
      unsigned long int len;
      len=strlen((fields + (signed long int)j)->value);
      if(j % 4ul == mod_val && !(max_value >= len))
      {
        if((fields + (signed long int)j)->oneliner == 0)
          max_value = len;

      }

      j = j + 1ul;
    }

    x_value = (signed int)(max_field + (unsigned long int)x_field + (unsigned long int)1);
    max_field = max_field + max_value + (unsigned long int)2;
    color=(fields + (signed long int)i)->colorval();
    render_overall_value(win, (fields + (signed long int)i)->value, (signed int)y, x_value, color);
    k = k + (unsigned long int)((fields + (signed long int)i)->oneliner != 0 ? 4 : 1);
    i = i + 1ul;
  }

}

// render_overall_value
// file src/ui.c line 357
static void render_overall_value(struct _win_st *win, const char *s, signed int y, signed int x, struct GColors_ *color)
{
  wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  mvwprintw(win, y, x, "%s", s);
  wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
}

// render_percent
// file src/gdashboard.c line 771
static void render_percent(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  enum CSTM_COLORS item = (enum CSTM_COLORS)COLOR_MTRC_PERC;
  struct GColors_ *color;
  struct _win_st$2 *win = render.win;
  char *percent;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  signed int len = data->perc_len + 3;
  if((signed int)data->module == HOSTS)
  {
    if(!((data->data + (signed long int)idx)->is_subitem == 0))
      goto out;

  }

  if(data->max_hits == (data->data + (signed long int)idx)->metrics->hits)
    item = (enum CSTM_COLORS)COLOR_MTRC_PERC_MAX;

  color=get_color_by_item_module(item, data->module);
  if(!(sel == 0))
  {
    percent=float2str((data->data + (signed long int)idx)->metrics->percent, len);
    draw_header(win, percent, "%s%%", y, *x, w, color_selected);
    free((void *)percent);
  }

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%*.2f%%", len, (data->data + (signed long int)idx)->metrics->percent);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }

out:
  ;
  *x = *x + len + 1 + 1;
}

// render_proto
// file src/gdashboard.c line 637
static void render_proto(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_PROT, data->module);
  struct _win_st$2 *win = render.win;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  char *protocol = (data->data + (signed long int)idx)->metrics->protocol;
  _Bool tmp_if_expr$1;
  if(protocol == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*protocol == 0 ? (_Bool)1 : (_Bool)0;
  if(!tmp_if_expr$1)
  {
    if(!(sel == 0))
      draw_header(win, protocol, "%s", y, *x, w, color_selected);

    else
    {
      wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
      mvwprintw(win, y, *x, "%s", protocol);
      wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    }
    *x = *x + (9 - 1) + 1;
  }

}

// render_screens
// file src/goaccess.c line 306
static void render_screens(void)
{
  struct GColors_ *color;
  color=get_color((enum CSTM_COLORS)COLOR_DEFAULT);
  signed int row;
  signed int col;
  signed int chg = 0;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st$1 *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  row = tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st$1 *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  col = tmp_if_expr$2;
  term_size(main_win);
  generate_time();
  chg = (signed int)(logger->processed - logger->offset);
  draw_header(stdscr, "", "%s", row - 1, 0, col, color_default);
  wattr_on(stdscr, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  signed int return_value_wmove$3;
  return_value_wmove$3=wmove(stdscr, row - 1, 1);
  if(return_value_wmove$3 == -1)
    -1;

  else
    waddnstr(stdscr, "[F1]Help [Enter] Exp. Panel", -1);
  char *return_value_asctime$4;
  return_value_asctime$4=asctime(now_tm);
  mvprintw(row - 1, 30, "%d - %s", chg, return_value_asctime$4);
  signed int return_value_wmove$5;
  return_value_wmove$5=wmove(stdscr, row - 1, col - 21);
  if(return_value_wmove$5 == -1)
    -1;

  else
    waddnstr(stdscr, "[Q]uit GoAccess", -1);
  mvprintw(row - 1, col - 5, "%s", (const void *)"0.9.4");
  wattr_off(stdscr, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  wrefresh(stdscr);
  display_general(header_win, conf.ifile, logger);
  wrefresh(header_win);
  update_active_module(header_win, gscroll.current);
  display_content(main_win, logger, dash, &gscroll);
}

// render_search_dialog
// file src/goaccess.c line 553
static void render_search_dialog(signed int search)
{
  signed int return_value_render_find_dialog$1;
  return_value_render_find_dialog$1=render_find_dialog(main_win, &gscroll);
  if(return_value_render_find_dialog$1 == 0)
  {
    pthread_mutex_lock(&gdns_thread.mutex);
    search=perform_next_find(holder, &gscroll);
    pthread_mutex_unlock(&gdns_thread.mutex);
    if(search == 0)
    {
      free_dashboard(dash);
      allocate_data();
      render_screens();
    }

  }

}

// render_sort_dialog
// file src/goaccess.c line 666
static void render_sort_dialog(void)
{
  load_sort_win(main_win, gscroll.current, &module_sort[(signed long int)gscroll.current]);
  pthread_mutex_lock(&gdns_thread.mutex);
  free_holder(&holder);
  pthread_cond_broadcast(&gdns_thread.not_empty);
  pthread_mutex_unlock(&gdns_thread.mutex);
  free_dashboard(dash);
  allocate_holder();
  allocate_data();
  render_screens();
}

// render_total_label
// file src/gdashboard.c line 520
static void render_total_label(struct _win_st$2 *win, struct GDashModule_ *data, signed int y, struct GColors_ * (*func)(void))
{
  char *s;
  signed int win_h;
  signed int win_w;
  signed int total;
  signed int ht_size;
  total = data->holder_size;
  ht_size = data->ht_size;
  signed int return_value_snprintf$1;
  return_value_snprintf$1=snprintf((char *)(void *)0, (unsigned long int)0, "Total: %d/%d", total, ht_size);
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc((unsigned long int)(return_value_snprintf$1 + 1));
  s = (char *)return_value_xmalloc$2;
  signed int tmp_if_expr$3;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$3 = (signed int)win->_maxy + 1;

  else
    tmp_if_expr$3 = -1;
  win_h = tmp_if_expr$3;
  signed int tmp_if_expr$4;
  if(!(win == ((struct _win_st$2 *)NULL)))
    tmp_if_expr$4 = (signed int)win->_maxx + 1;

  else
    tmp_if_expr$4 = -1;
  win_w = tmp_if_expr$4;
  (void)win_h;
  sprintf(s, "Total: %d/%d", total, ht_size);
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(s);
  draw_header(win, s, "%s", y, (signed int)(((unsigned long int)win_w - return_value_strlen$5) - (unsigned long int)2), win_w, func);
  free((void *)s);
}

// render_visitors
// file src/gdashboard.c line 836
static void render_visitors(struct GDashModule_ *data, struct GDashRender_ render, signed int *x)
{
  struct GColors_ *color;
  color=get_color_by_item_module((enum CSTM_COLORS)COLOR_MTRC_VISITORS, data->module);
  struct _win_st$2 *win = render.win;
  char *visitors;
  signed int y = render.y;
  signed int w = render.w;
  signed int idx = render.idx;
  signed int sel = render.sel;
  signed int len = data->visitors_len;
  if((signed int)data->module == HOSTS)
  {
    if(!((data->data + (signed long int)idx)->is_subitem == 0))
      goto out;

  }

  if(!(sel == 0))
  {
    visitors=int2str((data->data + (signed long int)idx)->metrics->visitors, len);
    draw_header(win, visitors, "%s", y, *x, w, color_selected);
    free((void *)visitors);
  }

  else
  {
    wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
    mvwprintw(win, y, *x, "%*d", len, (data->data + (signed long int)idx)->metrics->visitors);
    wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  }

out:
  ;
  *x = *x + len + 1;
}

// reset_find
// file src/gdashboard.c line 108
void reset_find(void)
{
  if(!(find_t.pattern == ((char *)NULL)))
  {
    if(!((signed int)*find_t.pattern == 0))
      free((void *)find_t.pattern);

  }

  find_t.look_in_sub = 0;
  find_t.module = (enum MODULES)0;
  find_t.next_idx = 0;
  find_t.next_parent_idx = 0;
  find_t.next_sub_idx = 0;
  find_t.pattern = (char *)(void *)0;
}

// reset_scroll_offsets
// file src/gdashboard.c line 1141
void reset_scroll_offsets(struct GScroll_ *gscroll)
{
  signed int i = 0;
  for( ; !(i >= 13); i = i + 1)
  {
    gscroll->module[(signed long int)i].scroll = 0;
    gscroll->module[(signed long int)i].offset = 0;
  }
}

// reset_struct
// file src/parser.c line 346
void reset_struct(struct GLog_ *logger)
{
  logger->invalid = (unsigned int)0;
  logger->processed = (unsigned int)0;
  logger->resp_size = (unsigned long long int)0LL;
  logger->valid = (unsigned int)0;
}

// reverse_host
// file src/gdns.c line 143
static char * reverse_host(struct sockaddr *a, unsigned int length)
{
  char h[1025l];
  signed int flags;
  signed int st;
  flags = 8;
  st=getnameinfo(a, length, h, (unsigned int)1025, (char *)(void *)0, (unsigned int)0, flags);
  char *return_value_alloc_string$1;
  if(st == 0)
  {
    return_value_alloc_string$1=alloc_string(h);
    return return_value_alloc_string$1;
  }

  else
  {
    const char *return_value_gai_strerror$2;
    return_value_gai_strerror$2=gai_strerror(st);
    char *return_value_alloc_string$3;
    return_value_alloc_string$3=alloc_string(return_value_gai_strerror$2);
    return return_value_alloc_string$3;
  }
}

// reverse_ip
// file src/gdns.h line 47
char * reverse_ip(char *str)
{
  /* tag-#anon#lUN[lSYM#tag-sockaddr#'addr'||lSYM#tag-sockaddr_in6#'addr6'||lSYM#tag-sockaddr_in#'addr4'|] */
union anonymous$6
{
  // addr
  struct sockaddr addr;
  // addr6
  struct sockaddr_in6 addr6;
  // addr4
  struct sockaddr_in addr4;
};

/* */
  ;
  union anonymous$6 a;
  _Bool tmp_if_expr$1;
  if(str == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  signed int return_value_inet_pton$4;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    memset((void *)&a, 0, sizeof(union anonymous$6) /*28ul*/ );
    signed int return_value_inet_pton$5;
    return_value_inet_pton$5=inet_pton(2, str, (void *)&a.addr4.sin_addr);
    if(return_value_inet_pton$5 == 1)
    {
      a.addr4.sin_family = (unsigned short int)2;
      char *return_value_reverse_host$2;
      return_value_reverse_host$2=reverse_host(&a.addr, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
      return return_value_reverse_host$2;
    }

    else
    {
      return_value_inet_pton$4=inet_pton(10, str, (void *)&a.addr6.sin6_addr);
      if(return_value_inet_pton$4 == 1)
      {
        a.addr6.sin6_family = (unsigned short int)10;
        char *return_value_reverse_host$3;
        return_value_reverse_host$3=reverse_host(&a.addr, (unsigned int)sizeof(struct sockaddr_in6) /*28ul*/ );
        return return_value_reverse_host$3;
      }

    }
    return (char *)(void *)0;
  }
}

// rprint_col
// file src/gdashboard.c line 999
static void rprint_col(struct _win_st$2 *win, signed int y, signed int *x, signed int len, const char *fmt, const char *str)
{
  struct GColors_ *color;
  color=get_color((enum CSTM_COLORS)COLOR_PANEL_COLS);
  wattr_on(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  mvwprintw(win, y, *x, fmt, len, str);
  print_horizontal_dash(win, y + 1, *x, len);
  wattr_off(win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  *x = *x + len + 1;
}

// rtrim
// file src/util.c line 431
char * rtrim(char *s)
{
  char *end;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(s);
  end = s + (signed long int)return_value_strlen$1;
  const unsigned short int **return_value___ctype_b_loc$2;
  for( ; !(end == s); end = end - 1l)
  {
    return_value___ctype_b_loc$2=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)end[-1l]]) == 0)
      break;

  }
  *end = (char)0;
  return s;
}

// scheme_chosen
// file src/ui.c line 1193
static void scheme_chosen(const char *name)
{
  signed int force = 0;
  free_color_lists();
  signed int return_value_strcmp$3;
  return_value_strcmp$3=strcmp("Green/Original", name);
  signed int return_value_strcmp$2;
  signed int return_value_strcmp$1;
  if(return_value_strcmp$3 == 0)
  {
    conf.color_scheme = 2;
    force = 1;
  }

  else
  {
    return_value_strcmp$2=strcmp("Monochrome/Default", name);
    if(return_value_strcmp$2 == 0)
    {
      conf.color_scheme = 1;
      force = 1;
    }

    else
    {
      return_value_strcmp$1=strcmp("Custom Scheme", name);
      if(return_value_strcmp$1 == 0)
        force = 0;

    }
  }
  init_colors(force);
}

// scroll_down_expanded_module
// file src/goaccess.c line 467
static void scroll_down_expanded_module(void)
{
  signed int exp_size;
  exp_size=get_num_expanded_data_rows();
  signed int *scroll_ptr;
  signed int *offset_ptr;
  scroll_ptr = &gscroll.module[(signed long int)gscroll.current].scroll;
  offset_ptr = &gscroll.module[(signed long int)gscroll.current].offset;
  if(!(gscroll.expanded == 0))
  {
    if(!(*scroll_ptr >= -1 + dash->module[(signed long int)gscroll.current].idx_data))
    {
      *scroll_ptr = *scroll_ptr + 1;
      if(*scroll_ptr >= exp_size)
      {
        if(*scroll_ptr >= *offset_ptr + exp_size)
          *offset_ptr = *offset_ptr + 1;

      }

    }

  }

}

// scroll_to_first_line
// file src/goaccess.c line 377
static void scroll_to_first_line(void)
{
  if(gscroll.expanded == 0)
    gscroll.dash = 0;

  else
  {
    gscroll.module[(signed long int)gscroll.current].scroll = 0;
    gscroll.module[(signed long int)gscroll.current].offset = 0;
  }
}

// scroll_to_last_line
// file src/goaccess.c line 388
static void scroll_to_last_line(void)
{
  signed int exp_size;
  exp_size=get_num_expanded_data_rows();
  signed int scrll = 0;
  signed int offset = 0;
  if(gscroll.expanded == 0)
    gscroll.dash = (signed int)((unsigned long int)dash->total_alloc - real_size_y);

  else
  {
    scrll = dash->module[(signed long int)gscroll.current].idx_data - 1;
    if(scrll >= exp_size + offset && scrll >= exp_size)
      offset = scrll < exp_size - 1 ? 0 : (scrll - exp_size) + 1;

    gscroll.module[(signed long int)gscroll.current].scroll = scrll;
    gscroll.module[(signed long int)gscroll.current].offset = offset;
  }
}

// scroll_up_dashboard
// file src/goaccess.c line 485
static void scroll_up_dashboard(void)
{
  gscroll.dash = gscroll.dash - 1;
}

// scroll_up_expanded_module
// file src/goaccess.c line 536
static void scroll_up_expanded_module(void)
{
  signed int *scroll_ptr;
  signed int *offset_ptr;
  scroll_ptr = &gscroll.module[(signed long int)gscroll.current].scroll;
  offset_ptr = &gscroll.module[(signed long int)gscroll.current].offset;
  if(!(gscroll.expanded == 0))
  {
    if(*scroll_ptr >= 1)
    {
      *scroll_ptr = *scroll_ptr - 1;
      if(!(*scroll_ptr >= *offset_ptr))
        *offset_ptr = *offset_ptr - 1;

    }

  }

}

// search_next_match
// file src/goaccess.c line 570
static void search_next_match(signed int search)
{
  pthread_mutex_lock(&gdns_thread.mutex);
  search=perform_next_find(holder, &gscroll);
  pthread_mutex_unlock(&gdns_thread.mutex);
  if(search == 0)
  {
    free_dashboard(dash);
    allocate_data();
    render_screens();
  }

}

// set_colors
// file src/color.c line 660
void set_colors(signed int force)
{
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  *return_value___errno_location$1 = 0;
  if(force == 0 && conf.color_idx >= 1)
    parse_colors(conf.colors, (unsigned long int)conf.color_idx);

  else
    add_default_colors();
}

// set_curses_spinner
// file src/ui.h line 315
void set_curses_spinner(struct GSpinner_ *spinner)
{
  signed int y;
  signed int x;
  signed int tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(spinner == ((struct GSpinner_ *)NULL)))
  {
    if(!(stdscr == ((struct _win_st *)NULL)))
      tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

    else
      tmp_if_expr$1 = -1;
    y = tmp_if_expr$1;
    if(!(stdscr == ((struct _win_st *)NULL)))
      tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

    else
      tmp_if_expr$2 = -1;
    x = tmp_if_expr$2;
    spinner->color = color_progress;
    spinner->curses = 1;
    spinner->win = stdscr;
    spinner->x = 0;
    spinner->w = x;
    spinner->spin_x = x - 2;
    spinner->y = y - 1;
  }

}

// set_data_metrics
// file src/gstorage.h line 141
void set_data_metrics(struct GMetrics *ometrics, struct GMetrics **nmetrics, signed int valid)
{
  struct GMetrics *metrics;
  float percent;
  percent=get_percentage((unsigned long long int)valid, (unsigned long long int)ometrics->hits);
  metrics=new_gmetrics();
  metrics->bw.nbw = ometrics->bw.nbw;
  metrics->id = ometrics->id;
  metrics->data = ometrics->data;
  metrics->hits = ometrics->hits;
  metrics->percent = percent < (float)0 ? (float)0 : percent;
  metrics->visitors = ometrics->visitors;
  if(!(conf.serve_usecs == 0))
  {
    if(ometrics->hits >= 1)
    {
      metrics->avgts.nts = ometrics->avgts.nts;
      metrics->cumts.nts = ometrics->cumts.nts;
      metrics->maxts.nts = ometrics->maxts.nts;
    }

  }

  if(!(conf.append_method == 0))
  {
    if(!(ometrics->method == ((char *)NULL)))
      metrics->method = ometrics->method;

  }

  if(!(conf.append_method == 0))
  {
    if(!(ometrics->protocol == ((char *)NULL)))
      metrics->protocol = ometrics->protocol;

  }

  *nmetrics = metrics;
}

// set_datamap
// file src/parser.c line 1600
static void set_datamap(struct GLogItem_ *glog, struct GKeyData_ *kdata, const struct GParse_ *parse)
{
  enum MODULES module = parse->module;
  parse->datamap(kdata->data_nkey, (const char *)kdata->data, module);
  if(!(parse->rootmap == ((void (*)(signed int, const char *, enum MODULES))NULL)))
    parse->rootmap(kdata->root_nkey, (const char *)kdata->root, module);

  if(!(parse->hits == ((void (*)(signed int, signed int, signed int, enum MODULES))NULL)))
    parse->hits(kdata->data_nkey, kdata->uniq_nkey, kdata->root_nkey, module);

  if(!(parse->visitor == ((void (*)(signed int, enum MODULES))NULL)))
  {
    if(!(kdata->uniq_nkey == 0))
      parse->visitor(kdata->data_nkey, module);

  }

  if(!(parse->bw == ((void (*)(signed int, unsigned long int, enum MODULES))NULL)))
    parse->bw(kdata->data_nkey, glog->resp_size, module);

  if(!(parse->cumts == ((void (*)(signed int, unsigned long int, enum MODULES))NULL)))
    parse->cumts(kdata->data_nkey, glog->serve_time, module);

  if(!(parse->maxts == ((void (*)(signed int, unsigned long int, enum MODULES))NULL)))
    parse->maxts(kdata->data_nkey, glog->serve_time, module);

  if(!(parse->method == ((void (*)(signed int, const char *, enum MODULES))NULL)))
  {
    if(!(conf.append_method == 0))
      parse->method(kdata->data_nkey, glog->method, module);

  }

  if(!(parse->protocol == ((void (*)(signed int, const char *, enum MODULES))NULL)))
  {
    if(!(conf.append_protocol == 0))
      parse->protocol(kdata->data_nkey, glog->protocol, module);

  }

  if(!(parse->agent == ((void (*)(signed int, signed int, enum MODULES))NULL)))
  {
    if(!(conf.list_agents == 0))
      parse->agent(kdata->data_nkey, glog->agent_nkey, module);

  }

}

// set_default_static_files
// file src/settings.h line 157
void set_default_static_files(void)
{
  unsigned long int i;
  const char *exts[34l] = { ".css", ".CSS", ".dae", ".DAE", ".eot", ".EOT", ".gif", ".GIF", ".ico", ".ICO", ".jpeg", ".JPEG", ".jpg", ".JPG", ".js", ".JS", ".map", ".MAP", ".mp3", ".MP3", ".pdf", ".PDF", ".png", ".PNG", ".svg", ".SVG", ".swf", ".SWF", ".ttf", ".TTF", ".txt", ".TXT", ".woff", ".WOFF" };
  signed int tmp_post$2;
  if(!(conf.static_file_idx >= 1))
  {
    i = (unsigned long int)0;
    for( ; !(i >= 34ul); i = i + 1ul)
    {
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen(exts[(signed long int)i]);
      if(!(conf.static_file_max_len >= return_value_strlen$1))
        conf.static_file_max_len=strlen(exts[(signed long int)i]);

      tmp_post$2 = conf.static_file_idx;
      conf.static_file_idx = conf.static_file_idx + 1;
      conf.static_files[(signed long int)tmp_post$2] = exts[(signed long int)i];
    }
  }

}

// set_general_stats
// file src/goaccess.c line 857
static void set_general_stats(void)
{
  verify_formats();
  logger->excluded_ip = (unsigned int)0;
  logger->invalid = logger->excluded_ip;
  logger->processed = logger->invalid;
  logger->valid = logger->processed;
}

// set_geolocation
// file src/geolocation.h line 51
signed int set_geolocation(char *host, char *continent, char *country, char *city)
{
  signed int type_ip = 0;
  if(geo_location_data == ((struct GeoIPTag *)NULL))
    return 1;

  else
  {
    signed int return_value_invalid_ipaddr$1;
    return_value_invalid_ipaddr$1=invalid_ipaddr(host, &type_ip);
    if(!(return_value_invalid_ipaddr$1 == 0))
      return 1;

    else
    {
      geoip_get_country(host, country, (enum anonymous$23)type_ip);
      geoip_get_continent(host, continent, (enum anonymous$23)type_ip);
      if(!(conf.geoip_database == ((char *)NULL)))
        geoip_get_city(host, city, (enum anonymous$23)type_ip);

      return 0;
    }
  }
}

// set_host_agents
// file src/ui.h line 303
signed int set_host_agents(const char *addr, void (*func)(void *, void *, signed int), void *arr)
{
  struct GSLList_ *list;
  signed int data_nkey;
  signed int count = 0;
  data_nkey=get_int_from_keymap(addr, (enum MODULES)HOSTS);
  if(data_nkey == 0)
    return 1;

  else
  {
    void *return_value_get_host_agent_list$1;
    return_value_get_host_agent_list$1=get_host_agent_list(data_nkey);
    list = (struct GSLList_ *)return_value_get_host_agent_list$1;
    if(list == ((struct GSLList_ *)NULL))
      return 1;

    else
    {
      count=list_count(list);
      if(count == 0)
      {
        free((void *)list);
        return 1;
      }

      else
      {
        func((void *)list, arr, count);
        return 0;
      }
    }
  }
}

// set_host_child_metrics
// file src/gdashboard.c line 1504
static signed int set_host_child_metrics(char *data, unsigned char id, struct GMetrics **nmetrics)
{
  struct GMetrics *metrics;
  metrics=new_gmetrics();
  metrics->data=xstrdup(data);
  metrics->id = id;
  *nmetrics = metrics;
  return 0;
}

// set_host_sub_list
// file src/gdashboard.c line 1517
static void set_host_sub_list(struct GHolder_ *h, struct GSubList_ *sub_list)
{
  struct GMetrics *nmetrics;
  char city[28l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char continent[48l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char country[51l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  char *host = (h->items + (signed long int)h->idx)->metrics->data;
  char *hostname = (char *)(void *)0;
  set_geolocation(host, continent, country, city);
  if(!((signed int)country[0l] == 0))
  {
    set_host_child_metrics(country, (unsigned char)0, &nmetrics);
    add_sub_item_back(sub_list, h->module, nmetrics);
    (h->items + (signed long int)h->idx)->sub_list = sub_list;
    h->sub_items_size = h->sub_items_size + 1;
  }

  if(!((signed int)city[0l] == 0))
  {
    set_host_child_metrics(city, (unsigned char)1, &nmetrics);
    add_sub_item_back(sub_list, h->module, nmetrics);
    (h->items + (signed long int)h->idx)->sub_list = sub_list;
    h->sub_items_size = h->sub_items_size + 1;
  }

  if(!(conf.enable_html_resolver == 0) && !(conf.output_html == 0))
  {
    hostname=reverse_ip(host);
    set_host_child_metrics(hostname, (unsigned char)2, &nmetrics);
    add_sub_item_back(sub_list, h->module, nmetrics);
    (h->items + (signed long int)h->idx)->sub_list = sub_list;
    h->sub_items_size = h->sub_items_size + 1;
    free((void *)hostname);
  }

}

// set_initial_sort
// file src/sort.c line 331
void set_initial_sort(const char *smod, const char *sfield, const char *ssort)
{
  signed int module;
  signed int field;
  signed int order;
  module=get_module_enum(smod);
  if(!(module == -1))
  {
    field=get_sort_field_enum(sfield);
    if(!(field == -1))
    {
      order=get_sort_order_enum(ssort);
      if(!(order == -1))
      {
        signed int return_value_can_sort_module$1;
        return_value_can_sort_module$1=can_sort_module((enum MODULES)module, field);
        if(!(return_value_can_sort_module$1 == 0))
        {
          module_sort[(signed long int)module].field = (enum GSortField_)field;
          module_sort[(signed long int)module].sort = (enum GSortOrder_)order;
        }

      }

    }

  }

}

// set_input_opts
// file src/ui.h line 316
void set_input_opts(void)
{
  initscr();
  wclear(stdscr);
  noecho();
  halfdelay(10);
  nonl();
  intrflush(stdscr, (_Bool)0);
  keypad(stdscr, (_Bool)1);
  signed int return_value_curs_set$1;
  return_value_curs_set$1=curs_set(0);
  if(return_value_curs_set$1 == -1)

    __CPROVER_DUMP_L1:
      ;

  if(!(conf.mouse_support == 0))
    mousemask((unsigned long int)(004L << (1 - 1) * 6), (unsigned long int *)(void *)0);

}

// set_locale
// file src/goaccess.c line 917
static void set_locale(void)
{
  char *loc_ctype;
  loc_ctype=getenv("LC_CTYPE");
  if(!(loc_ctype == ((char *)NULL)))
    setlocale(0, loc_ctype);

  else
  {
    loc_ctype=getenv("LC_ALL");
    if(!(loc_ctype == ((char *)NULL)))
      setlocale(0, loc_ctype);

    else
      setlocale(0, "");
  }
}

// set_module_from_mouse_event
// file src/gdashboard.c line 359
signed int set_module_from_mouse_event(struct GScroll_ *gscroll, struct GDash_ *dash, signed int y)
{
  signed int module = 0;
  signed int offset = ((y - 7) - 1) + 1;
  if(!(gscroll->expanded == 0))
  {
    enum MODULES return_value_get_find_current_module$1;
    return_value_get_find_current_module$1=get_find_current_module(dash, offset);
    module = (signed int)return_value_get_find_current_module$1;
  }

  else
  {
    offset = offset + gscroll->dash;
    module = offset / 12;
  }
  if(module >= 13)
    module = 13 - 1;

  else
    if(!(module >= 0))
      module = 0;

  if((signed int)gscroll->current == module)
    return 1;

  else
  {
    gscroll->current = (enum MODULES)module;
    return 0;
  }
}

// set_module_to
// file src/goaccess.c line 364
static void set_module_to(struct GScroll_ *scrll, enum MODULES module)
{
  signed int return_value_ignore_panel$1;
  return_value_ignore_panel$1=ignore_panel(module);
  if(!(return_value_ignore_panel$1 == 0))
    disabled_panel_msg(module);

  else
  {
    collapse_current_module();
    scrll->current = module;
    render_screens();
  }
}

// set_normal_color
// file src/color.c line 278
void set_normal_color(void)
{
  struct GColorPair_ *pair;
  pair=new_gcolorpair();
  struct GColors_ *color;
  color=new_gcolors();
  pair->idx = (signed short int)1;
  pair->fg = (signed short int)7;
  pair->bg = (signed short int)-1;
  color->pair = pair;
  color->item = (enum CSTM_COLORS)COLOR_NORMAL;
  pair_list=list_create((void *)pair);
  color_list=list_create((void *)color);
  init_pair(pair->idx, pair->fg, pair->bg);
}

// set_percent_data
// file src/gdashboard.c line 506
static float set_percent_data(struct GDashData_ *data, signed int n, signed int valid)
{
  float max = (float)0.0;
  signed int i = 0;
  for( ; !(i >= n); i = i + 1)
  {
    (data + (signed long int)i)->metrics->percent=get_percentage((unsigned long long int)valid, (unsigned long long int)(data + (signed long int)i)->metrics->hits);
    if((data + (signed long int)i)->metrics->percent > max)
      max = (data + (signed long int)i)->metrics->percent;

  }
  return max;
}

// set_root_metrics
// file src/gdashboard.c line 1645
static signed int set_root_metrics(signed int data_nkey, struct GDataMap_ *map, enum MODULES module, struct GMetrics **nmetrics)
{
  struct GMetrics *metrics;
  char *data = (char *)(void *)0;
  unsigned long int bw = (unsigned long int)0;
  unsigned long int cumts = (unsigned long int)0;
  unsigned long int maxts = (unsigned long int)0;
  signed int visitors = 0;
  data=get_node_from_key(data_nkey, module, (enum METRICS)MTRC_DATAMAP);
  if(data == ((char *)NULL))
    return 1;

  else
  {
    bw=get_cumulative_from_key(data_nkey, module, (enum METRICS)MTRC_BW);
    cumts=get_cumulative_from_key(data_nkey, module, (enum METRICS)MTRC_CUMTS);
    maxts=get_cumulative_from_key(data_nkey, module, (enum METRICS)MTRC_MAXTS);
    visitors=get_num_from_key(data_nkey, module, (enum METRICS)MTRC_VISITORS);
    metrics=new_gmetrics();
    metrics->avgts.nts = cumts / (unsigned long int)map->data;
    metrics->cumts.nts = cumts;
    metrics->maxts.nts = maxts;
    metrics->bw.nbw = bw;
    metrics->data = data;
    metrics->hits = map->data;
    metrics->visitors = visitors;
    *nmetrics = metrics;
    return 0;
  }
}

// set_signal_data
// file src/error.c line 77
void set_signal_data(void *p)
{
  log_data = (struct GLog_ *)p;
}

// setup_signal_handlers
// file src/goaccess.c line 950
static void setup_signal_handlers(void)
{
  struct sigaction act;
  sigemptyset(&act.sa_mask);
  act.sa_flags = 0;
  act.__sigaction_handler.sa_handler = sigsegv_handler;
  sigaction(11, &act, (struct sigaction *)(void *)0);
}

// sigsegv_handler
// file src/error.c line 101
void sigsegv_handler(signed int sig)
{
  char **messages;
  struct _IO_FILE *fp = stderr;
  signed int pid;
  pid=getpid();
  unsigned long int size;
  unsigned long int i;
  void *trace_stack[128l];
  endwin();
  fprintf(fp, "\n==%d== GoAccess %s crashed by Signal %d\n", pid, (const void *)"0.9.4", sig);
  fprintf(fp, "==%d==\n", pid);
  dump_struct(fp);
  signed int return_value_backtrace$1;
  return_value_backtrace$1=backtrace(trace_stack, 128);
  size = (unsigned long int)return_value_backtrace$1;
  messages=backtrace_symbols(trace_stack, (signed int)size);
  fprintf(fp, "==%d== STACK TRACE:\n", pid);
  fprintf(fp, "==%d==\n", pid);
  i = (unsigned long int)0;
  for( ; !(i >= size); i = i + 1ul)
    fprintf(fp, "==%d== %zu %s\n", pid, i, messages[(signed long int)i]);
  fprintf(fp, "==%d==\n", pid);
  fprintf(fp, "==%d== Please report it by opening an issue on GitHub:\n", pid);
  fprintf(fp, "==%d== https://github.com/allinurl/goaccess/issues\n\n", pid);
  exit(1);
}

// sort_holder_items
// file src/sort.h line 73
void sort_holder_items(struct GHolderItem_ *items, signed int size, struct GSort_ sort)
{
  switch((signed int)sort.field)
  {
    case SORT_BY_HITS:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_num_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_num_asc);
      break;
    }
    case SORT_BY_VISITORS:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_vis_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_vis_asc);
      break;
    }
    case SORT_BY_DATA:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_data_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_data_asc);
      break;
    }
    case SORT_BY_BW:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_bw_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_bw_asc);
      break;
    }
    case SORT_BY_AVGTS:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_avgts_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_avgts_asc);
      break;
    }
    case SORT_BY_CUMTS:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_cumts_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_cumts_asc);
      break;
    }
    case SORT_BY_MAXTS:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_maxts_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_maxts_asc);
      break;
    }
    case SORT_BY_PROT:
    {
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_proto_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_proto_asc);
      break;
    }
    case SORT_BY_MTHD:
      if((signed int)sort.sort == SORT_DESC)
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_mthd_desc);

      else
        qsort((void *)items, (unsigned long int)size, sizeof(struct GHolderItem_) /*16ul*/ , cmp_mthd_asc);
  }
}

// sort_raw_data
// file src/sort.c line 453
struct GRawData_ * sort_raw_data(struct GRawData_ *raw, signed int ht_size)
{
  qsort((void *)raw->items, (unsigned long int)ht_size, sizeof(struct GRawDataItem_) /*16ul*/ , cmp_raw_num_desc);
  return raw;
}

// sort_sub_list
// file src/gdashboard.c line 1346
static void sort_sub_list(struct GHolder_ *h, struct GSort_ sort)
{
  struct GHolderItem_ *arr;
  struct GSubItem_ *iter;
  struct GSubList_ *sub_list;
  signed int i;
  signed int j;
  signed int k;
  i = 0;
  for( ; !(i >= h->idx); i = i + 1)
  {
    sub_list = (h->items + (signed long int)i)->sub_list;
    if(!(sub_list == ((struct GSubList_ *)NULL)))
    {
      arr=new_gholder_item((unsigned int)sub_list->size);
      j = 0;
      iter = sub_list->head;
      for( ; !(iter == ((struct GSubItem_ *)NULL)); j = j + 1)
      {
        (arr + (signed long int)j)->metrics=new_gmetrics();
        (arr + (signed long int)j)->metrics->bw.nbw = iter->metrics->bw.nbw;
        (arr + (signed long int)j)->metrics->data=xstrdup(iter->metrics->data);
        (arr + (signed long int)j)->metrics->hits = iter->metrics->hits;
        (arr + (signed long int)j)->metrics->id = iter->metrics->id;
        (arr + (signed long int)j)->metrics->visitors = iter->metrics->visitors;
        if(!(conf.serve_usecs == 0))
        {
          (arr + (signed long int)j)->metrics->avgts.nts = iter->metrics->avgts.nts;
          (arr + (signed long int)j)->metrics->cumts.nts = iter->metrics->cumts.nts;
          (arr + (signed long int)j)->metrics->maxts.nts = iter->metrics->maxts.nts;
        }

        iter = iter->next;
      }
      sort_holder_items(arr, j, sort);
      delete_sub_list(sub_list);
      sub_list=new_gsublist();
      k = 0;
      for( ; !(k >= j); k = k + 1)
      {
        if(k >= 1)
          sub_list = (h->items + (signed long int)i)->sub_list;

        add_sub_item_back(sub_list, h->module, (arr + (signed long int)k)->metrics);
        (h->items + (signed long int)i)->sub_list = sub_list;
      }
      free((void *)arr);
    }

  }
}

// standard_output
// file src/goaccess.c line 888
static void standard_output(void)
{
  _Bool tmp_if_expr$4;
  signed int return_value_strcmp$3;
  if(!(conf.output_format == ((char *)NULL)))
  {
    return_value_strcmp$3=strcmp("csv", conf.output_format);
    tmp_if_expr$4 = return_value_strcmp$3 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$4 = (_Bool)0;
  _Bool tmp_if_expr$2;
  signed int return_value_strcmp$1;
  if(tmp_if_expr$4)
    output_csv(logger, holder);

  else
  {
    if(!(conf.output_format == ((char *)NULL)))
    {
      return_value_strcmp$1=strcmp("json", conf.output_format);
      tmp_if_expr$2 = return_value_strcmp$1 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
      output_json(logger, holder);

    else
      output_html(logger, holder);
  }
}

// str2enum
// file src/commons.h line 243
signed int str2enum(const struct GEnum_ *map, signed int len, const char *str)
{
  signed int i = 0;
  for( ; !(i >= len); i = i + 1)
  {
    signed int return_value_strcmp$1;
    return_value_strcmp$1=strcmp(str, (map + (signed long int)i)->str);
    if(return_value_strcmp$1 == 0)
      return (map + (signed long int)i)->idx;

  }
  return -1;
}

// str_to_time
// file src/util.h line 72
signed int str_to_time(const char *str, const char *fmt, struct tm$1 *tm)
{
  char *end = (char *)(void *)0;
  char *sEnd = (char *)(void *)0;
  unsigned long long int usecs = (unsigned long long int)0;
  _Bool tmp_if_expr$1;
  if(str == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(fmt == ((const char *)NULL) || tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = (signed int)*fmt == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  signed int *return_value___errno_location$5;
  _Bool tmp_if_expr$9;
  if(tmp_if_expr$2)
    return 1;

  else
  {
    signed int return_value_strcmp$8;
    return_value_strcmp$8=strcmp("%f", fmt);
    if(return_value_strcmp$8 == 0)
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      *return_value___errno_location$3 = 0;
      tm->tm_year = 1970 - 1900;
      tm->tm_mday = 1;
      usecs=strtoull(str, &sEnd, 10);
      if(str == sEnd)
        tmp_if_expr$4 = (_Bool)1;

      else
        tmp_if_expr$4 = (signed int)*sEnd != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$4)
        tmp_if_expr$6 = (_Bool)1;

      else
      {
        return_value___errno_location$5=__errno_location();
        tmp_if_expr$6 = *return_value___errno_location$5 == 34 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$6)
        return 1;

      tm->tm_sec = (signed int)(usecs / 1000000ULL);
      tm->tm_isdst = -1;
      signed long int return_value_mktime$7;
      return_value_mktime$7=mktime(tm);
      if(return_value_mktime$7 == -1l)
        return 1;

      return 0;
    }

    end=strptime(str, fmt, tm);
    if(end == ((char *)NULL))
      tmp_if_expr$9 = (_Bool)1;

    else
      tmp_if_expr$9 = (signed int)*end != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$9)
      return 1;

    else
      return 0;
  }
}

// strip_newlines
// file src/util.h line 76
void strip_newlines(char *str)
{
  char *src;
  char *dst = str;
  src = dst;
  for( ; !((signed int)*src == 0); src = src + 1l)
  {
    *dst = *src;
    if(!((signed int)*dst == 13))
    {
      if(!((signed int)*dst == 10))
        dst = dst + 1l;

    }

  }
  *dst = (char)0;
}

// strip_qstring
// file src/parser.c line 1060
static void strip_qstring(char *req)
{
  char *qmark;
  qmark=strchr(req, 63);
  if(!(qmark == ((char *)NULL)))
  {
    if(qmark - req >= 1l)
      *qmark = (char)0;

  }

}

// strtoupper
// file src/util.h line 59
char * strtoupper(char *str)
{
  char *p = str;
  _Bool tmp_if_expr$1;
  if(str == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    return str;

  else
  {
    while(!((signed int)*p == 0))
    {
      signed int return_value_toupper$2;
      return_value_toupper$2=toupper((signed int)*p);
      *p = (char)return_value_toupper$2;
      p = p + 1l;
    }
    return str;
  }
}

// substring
// file src/util.h line 60
char * substring(const char *str, signed int begin, signed int len)
{
  char *buffer;
  unsigned long int return_value_strlen$1;
  unsigned long int return_value_strlen$2;
  unsigned long int return_value_strlen$4;
  if(str == ((const char *)NULL))
    return (char *)(void *)0;

  else
  {
    if(!(begin >= 0))
    {
      return_value_strlen$1=strlen(str);
      begin = (signed int)(return_value_strlen$1 + (unsigned long int)begin);
    }

    if(!(begin >= 0))
      begin = 0;

    if(!(len >= 0))
      len = 0;

    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen(str);
    if(!(return_value_strlen$3 >= (unsigned long int)begin))
    {
      return_value_strlen$2=strlen(str);
      begin = (signed int)return_value_strlen$2;
    }

    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(&str[(signed long int)begin]);
    if(!(return_value_strlen$5 >= (unsigned long int)len))
    {
      return_value_strlen$4=strlen(&str[(signed long int)begin]);
      len = (signed int)return_value_strlen$4;
    }

    void *return_value_xmalloc$6;
    return_value_xmalloc$6=xmalloc((unsigned long int)(len + 1));
    buffer = (char *)return_value_xmalloc$6;
    if(buffer == ((char *)NULL))
      return (char *)(void *)0;

    else
    {
      memcpy((void *)buffer, (const void *)&str[(signed long int)begin], (unsigned long int)len);
      buffer[(signed long int)len] = (char)0;
      return buffer;
    }
  }
}

// term_size
// file src/ui.h line 317
void term_size(struct _win_st *main_win)
{
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxy + 1;

  else
    tmp_if_expr$1 = -1;
  term_h = (unsigned long int)tmp_if_expr$1;
  signed int tmp_if_expr$2;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$2 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$2 = -1;
  term_w = (unsigned long int)tmp_if_expr$2;
  real_size_y = term_h - (unsigned long int)(7 + 1);
  wresize(main_win, (signed int)real_size_y, (signed int)term_w);
  wmove(main_win, (signed int)real_size_y, 0);
}

// test_format
// file src/parser.c line 1836
signed int test_format(struct GLog_ *logger)
{
  signed int return_value_parse_log$1;
  return_value_parse_log$1=parse_log(&logger, (char *)(void *)0, 20);
  if(!(return_value_parse_log$1 == 0))
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:40");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/parser.c", (const void *)"test_format", 1839);
      fprintf(stderr, "Error while processing file");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  if(!(logger->load_from_disk_only == 0))
    return 0;

  else
    if(logger->valid == 0u)
      return 1;

    else
      return 0;
}

// trim_str
// file src/util.h line 61
char * trim_str(char *str)
{
  char *return_value_ltrim$1;
  return_value_ltrim$1=ltrim(str);
  char *return_value_rtrim$2;
  return_value_rtrim$2=rtrim(return_value_ltrim$1);
  return return_value_rtrim$2;
}

// ui_spinner
// file src/ui.c line 838
static void ui_spinner(void *ptr_data)
{
  struct GSpinner_ *sp = (struct GSpinner_ *)ptr_data;
  struct GColors_ *color = (struct GColors_ *)(void *)0;
  char buf[50l];
  signed int i = 0;
  signed long long int tdiff = (signed long long int)0;
  signed long long int psec = (signed long long int)0;
  signed long int begin;
  if(!(sp->curses == 0))
    color=sp->color();

  time(&begin);
  signed long int tmp_if_expr$2;
  signed int tmp_post$3;
  while((_Bool)1)
  {
    pthread_mutex_lock(&sp->mutex);
    if((signed int)sp->state == SPN_END)
      break;

    setlocale(1, "");
    if(!(conf.no_progress == 0))
      snprintf(buf, sizeof(char [50l]) /*50ul*/ , "%s", sp->label);

    else
    {
      signed long int return_value_time$1;
      return_value_time$1=time((signed long int *)(void *)0);
      tdiff = (signed long long int)(return_value_time$1 - begin);
      if(tdiff >= 1l)
        tmp_if_expr$2 = (signed long int)*sp->processed / tdiff;

      else
        tmp_if_expr$2 = (signed long int)0;
      psec = tmp_if_expr$2;
      snprintf(buf, sizeof(char [50l]) /*50ul*/ , "%s [%'d] [%'lld/s]", sp->label, *sp->processed, psec);
    }
    setlocale(1, "POSIX");
    if(!(sp->curses == 0))
    {
      draw_header(sp->win, buf, " %s", sp->y, sp->x, sp->w, sp->color);
      wattr_on(sp->win, (unsigned long int)((unsigned long int)color->pair->idx << 0 + 8), (void *)0);
      signed int return_value_wmove$4;
      return_value_wmove$4=wmove(sp->win, sp->y, sp->spin_x);
      if(return_value_wmove$4 == -1)
        -1;

      else
      {
        tmp_post$3 = i;
        i = i + 1;
        static const char spin_chars[5l] = { '/', '-', '|', '|', '0' };
        //waddch(sp->win, (const unsigned long int)spin_chars[(signed long int)(tmp_post$3 & 3)]);
      }
      //wattr_off(sp->win, (unsigned long int)((unsigned long int)color->pair->idx << 0 + 8), (void *)0);
      wrefresh(sp->win);
    }

    else
      if(conf.no_progress == 0)
        fprintf(stderr, "%s\r", (const void *)buf);

    pthread_mutex_unlock(&sp->mutex);
    usleep((unsigned int)100000);
  }
  sp = (struct GSpinner_ *)(void *)0;
  free((void *)sp);
}

// ui_spinner_create
// file src/ui.h line 318
void ui_spinner_create(struct GSpinner_ *spinner)
{
  pthread_create(&spinner->thread, (const union pthread_attr_t *)(void *)0, (void * (*)(void *))(void *)ui_spinner, (void *)spinner);
  pthread_detach(spinner->thread);
}

// uint642ptr
// file src/gstorage.c line 90
unsigned long int * uint642ptr(unsigned long int val)
{
  unsigned long int *ptr;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(unsigned long int) /*8ul*/ );
  ptr = (unsigned long int *)return_value_xmalloc$1;
  *ptr = val;
  return ptr;
}

// unescape_str
// file src/util.h line 62
char * unescape_str(const char *src)
{
  char *dest;
  char *q;
  const char *p = src;
  _Bool tmp_if_expr$1;
  if(src == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*src == 0 ? (_Bool)1 : (_Bool)0;
  char *tmp_post$4;
  char *tmp_post$5;
  char *tmp_post$6;
  char *tmp_post$7;
  char *tmp_post$8;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(src);
    void *return_value_xmalloc$3;
    return_value_xmalloc$3=xmalloc(return_value_strlen$2 + (unsigned long int)1);
    dest = (char *)return_value_xmalloc$3;
    q = dest;
    for( ; !(*p == 0); p = p + 1l)
      if((signed int)*p == 92)
      {
        p = p + 1l;
        switch((signed int)*p)
        {
          case 0:
            goto out;
          case 110:
          {
            tmp_post$4 = q;
            q = q + 1l;
            *tmp_post$4 = (char)10;
            break;
          }
          case 114:
          {
            tmp_post$5 = q;
            q = q + 1l;
            *tmp_post$5 = (char)13;
            break;
          }
          case 116:
          {
            tmp_post$6 = q;
            q = q + 1l;
            *tmp_post$6 = (char)9;
            break;
          }
          default:
          {
            tmp_post$7 = q;
            q = q + 1l;
            *tmp_post$7 = *p;
          }
        }
      }

      else
      {
        tmp_post$8 = q;
        q = q + 1l;
        *tmp_post$8 = *p;
      }

  out:
    ;
    *q = (char)0;
    return dest;
  }
}

// unlock_spinner
// file src/parser.c line 1053
static void unlock_spinner(void)
{
  if(!(parsing_spinner == ((struct GSpinner_$0 *)NULL)))
  {
    if((signed int)parsing_spinner->state == SPN_RUN)
      pthread_mutex_unlock(&parsing_spinner->mutex);

  }

}

// update_active_module
// file src/ui.h line 319
void update_active_module(struct _win_st *header_win, enum MODULES current)
{
  struct GColors_ *color;
  color=get_color((enum CSTM_COLORS)COLOR_ACTIVE_LABEL);
  const char *module;
  module=module_to_label(current);
  signed int col;
  signed int tmp_if_expr$1;
  if(!(stdscr == ((struct _win_st *)NULL)))
    tmp_if_expr$1 = (signed int)stdscr->_maxx + 1;

  else
    tmp_if_expr$1 = -1;
  col = tmp_if_expr$1;
  char *lbl;
  signed int return_value_snprintf$2;
  return_value_snprintf$2=snprintf((char *)(void *)0, (unsigned long int)0, "[Active Panel: %s]", module);
  void *return_value_xmalloc$3;
  return_value_xmalloc$3=xmalloc((unsigned long int)(return_value_snprintf$2 + 1));
  lbl = (char *)return_value_xmalloc$3;
  sprintf(lbl, "[Active Panel: %s]", module);
  wmove(header_win, 0, 30);
  wattr_on(header_win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(lbl);
  mvwprintw(header_win, 0, (signed int)(((unsigned long int)col - return_value_strlen$4) - (unsigned long int)1), "%s", lbl);
  wattr_off(header_win, (unsigned long int)((unsigned long int)color->attr | (unsigned long int)color->pair->idx << 0 + 8), (void *)0);
  wrefresh(header_win);
  free((void *)lbl);
}

// usecs_to_str
// file src/util.h line 63
char * usecs_to_str(unsigned long long int usec)
{
  char *size;
  void *return_value_xmalloc$1;
  return_value_xmalloc$1=xmalloc(sizeof(char) /*1ul*/  * (unsigned long int)11);
  size = (char *)return_value_xmalloc$1;
  if(usec >= 86400000000ULL)
    snprintf(size, (unsigned long int)11, "%.2f  d", (double)usec / (double)86400000000ULL);

  else
    if(usec >= 3600000000ULL)
      snprintf(size, (unsigned long int)11, "%.2f hr", (double)usec / (double)3600000000ULL);

    else
      if(usec >= 60000000ULL)
        snprintf(size, (unsigned long int)11, "%.2f mn", (double)usec / (double)60000000ULL);

      else
        if(usec >= 1000000ULL)
          snprintf(size, (unsigned long int)11, "%.2f  s", (double)usec / (double)1000000ULL);

        else
          if(usec >= 1000ULL)
            snprintf(size, (unsigned long int)11, "%.2f ms", (double)usec / (double)1000ULL);

          else
            snprintf(size, (unsigned long int)11, "%.2f us", (double)usec);
  return size;
}

// valid_line
// file src/parser.c line 1033
static signed int valid_line(char *line)
{
  _Bool tmp_if_expr$1;
  if(line == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*line == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    return 1;

  else
  {
    if((signed int)*line == 35)
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = (signed int)*line == 10 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      return 1;

    else
      return 0;
  }
}

// verify_browser
// file src/browsers.c line 304
char * verify_browser(char *str, char *type)
{
  char *a;
  char *b;
  char *ptr;
  char *slash;
  unsigned long int i;
  _Bool tmp_if_expr$1;
  if(str == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$3;
  char *return_value_strstr$5;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= 208ul); i = i + 1ul)
    {
      a=strstr(str, browsers[(signed long int)i][(signed long int)0]);
      if(!(a == ((char *)NULL)))
      {
        char *return_value_strchr$2;
        return_value_strchr$2=strchr(browsers[(signed long int)i][(signed long int)0], 32);
        if(!(return_value_strchr$2 == ((char *)NULL)))
        {
          b=strchr(a, 32);
          tmp_if_expr$3 = b != (char *)(void *)0 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$3 = (_Bool)0;
        if(tmp_if_expr$3)
          b = b + 1l;

        else
          b = a;
        xstrncpy(type, browsers[(signed long int)i][(signed long int)1], (const unsigned long int)13);
        char *return_value_strstr$6;
        return_value_strstr$6=strstr(a, "rv:11");
        if(!(return_value_strstr$6 == ((char *)NULL)))
        {
          return_value_strstr$5=strstr(a, "Trident/7.0");
          if(!(return_value_strstr$5 == ((char *)NULL)))
          {
            char *return_value_alloc_string$4;
            return_value_alloc_string$4=alloc_string("MSIE/11.0");
            return return_value_alloc_string$4;
          }

        }

        char *return_value_strstr$8;
        return_value_strstr$8=strstr(a, "OPR");
        if(!(return_value_strstr$8 == ((char *)NULL)))
        {
          slash=strrchr(a, 47);
          if(!(slash == ((char *)NULL)))
          {
            char *return_value_parse_opera$7;
            return_value_parse_opera$7=parse_opera(slash);
            return return_value_parse_opera$7;
          }

        }

        char *return_value_strstr$10;
        return_value_strstr$10=strstr(a, "Opera");
        if(!(return_value_strstr$10 == ((char *)NULL)))
        {
          slash=strrchr(a, 47);
          if(!(slash == ((char *)NULL)))
          {
            if(!(a >= slash))
            {
              unsigned long int return_value_strlen$9;
              return_value_strlen$9=strlen(slash);
              memmove((void *)(a + (signed long int)5), (const void *)slash, return_value_strlen$9 + (unsigned long int)1);
            }

          }

        }

        char *return_value_strstr$11;
        return_value_strstr$11=strstr(a, "MSIE");
        if(!(return_value_strstr$11 == ((char *)NULL)))
        {
          ptr=strpbrk(a, ";)-");
          if(!(ptr == ((char *)NULL)))
            *ptr = (char)0;

          a=char_replace(a, (char)32, (char)47);
        }

        else
        {
          ptr=strpbrk(b, ";) ");
          if(!(ptr == ((char *)NULL)))
            *ptr = (char)0;

        }
        char *return_value_alloc_string$12;
        return_value_alloc_string$12=alloc_string(a);
        return return_value_alloc_string$12;
      }

    }
    xstrncpy(type, "Unknown", (const unsigned long int)13);
    char *return_value_alloc_string$13;
    return_value_alloc_string$13=alloc_string("Unknown");
    return return_value_alloc_string$13;
  }
}

// verify_formats
// file src/parser.h line 139
void verify_formats(void)
{
  _Bool tmp_if_expr$1;
  if(conf.time_format == ((char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*conf.time_format == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$1)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:40");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/parser.c", (const void *)"verify_formats", 1807);
      fprintf(stderr, "No time format was found on your conf file.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L4:
      ;
      exit(1);
    }
    while((_Bool)0);

  _Bool tmp_if_expr$2;
  if(conf.date_format == ((char *)NULL))
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = (signed int)*conf.date_format == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$2)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:40");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/parser.c", (const void *)"verify_formats", 1810);
      fprintf(stderr, "No date format was found on your conf file.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L9:
      ;
      exit(1);
    }
    while((_Bool)0);

  _Bool tmp_if_expr$3;
  if(conf.log_format == ((char *)NULL))
    tmp_if_expr$3 = (_Bool)1;

  else
    tmp_if_expr$3 = (signed int)*conf.log_format == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$3)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:40");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/parser.c", (const void *)"verify_formats", 1813);
      fprintf(stderr, "No log format was found on your conf file.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L14:
      ;
      exit(1);
    }
    while((_Bool)0);

}

// verify_global_config
// file src/options.h line 26
void verify_global_config(signed int argc, char **argv)
{
  signed int o;
  signed int idx = 0;
  conf.load_global_config = 1;
  signed int return_value_strcmp$1;
  do
  {
    o=getopt_long(argc, argv, short_options, long_opts, &idx);
    if(!(o >= 0))
      break;

    if(o == -1)
      break;

    switch(o)
    {
      case 112:
      {
        conf.iconfigfile = optarg;
        break;
      }
      case 0:
      {
        return_value_strcmp$1=strcmp("no-global-config", long_opts[(signed long int)idx].name);
        if(return_value_strcmp$1 == 0)
          conf.load_global_config = 0;

        break;
      }
      case 63:
        exit(1);
    }
  }
  while((_Bool)1);
  idx = optind;
  for( ; !(idx >= argc); idx = idx + 1)
    cmd_help();
  optind = 1;
}

// verify_os
// file src/opesys.c line 240
char * verify_os(const char *str, char *os_type)
{
  char *a;
  char *b;
  signed int spaces = 0;
  unsigned long int i;
  _Bool tmp_if_expr$1;
  if(str == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*str == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  char *tmp_if_expr$4;
  char *return_value_xstrdup$3;
  char *tmp_if_expr$8;
  char *return_value_get_real_android$6;
  char *return_value_xstrdup$7;
  char *tmp_if_expr$12;
  char *return_value_get_real_mac_osx$10;
  char *return_value_xstrdup$11;
  if(tmp_if_expr$1)
    return (char *)(void *)0;

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= 57ul); i = i + 1ul)
    {
      a=strstr(str, os[(signed long int)i][(signed long int)0]);
      if(!(a == ((char *)NULL)))
      {
        xstrncpy(os_type, os[(signed long int)i][(signed long int)1], (const unsigned long int)10);
        char *return_value_strstr$5;
        return_value_strstr$5=strstr(str, "Windows");
        if(!(return_value_strstr$5 == ((char *)NULL)))
        {
          if(!(conf.real_os == 0))
          {
            b=get_real_win(a);
            tmp_if_expr$2 = b != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
          }

          else
            tmp_if_expr$2 = (_Bool)0;
          if(tmp_if_expr$2)
            tmp_if_expr$4 = b;

          else
          {
            return_value_xstrdup$3=xstrdup(os[(signed long int)i][(signed long int)0]);
            tmp_if_expr$4 = return_value_xstrdup$3;
          }
          return tmp_if_expr$4;
        }

        char *return_value_strstr$9;
        return_value_strstr$9=strstr(a, "Android");
        if(!(return_value_strstr$9 == ((char *)NULL)))
        {
          a=parse_android(a);
          if(!(conf.real_os == 0))
          {
            return_value_get_real_android$6=get_real_android(a);
            tmp_if_expr$8 = return_value_get_real_android$6;
          }

          else
          {
            return_value_xstrdup$7=xstrdup(a);
            tmp_if_expr$8 = return_value_xstrdup$7;
          }
          return tmp_if_expr$8;
        }

        char *return_value_strstr$13;
        return_value_strstr$13=strstr(a, "OS X");
        if(!(return_value_strstr$13 == ((char *)NULL)))
        {
          a=parse_osx(a);
          if(!(conf.real_os == 0))
          {
            return_value_get_real_mac_osx$10=get_real_mac_osx(a);
            tmp_if_expr$12 = return_value_get_real_mac_osx$10;
          }

          else
          {
            return_value_xstrdup$11=xstrdup(a);
            tmp_if_expr$12 = return_value_xstrdup$11;
          }
          return tmp_if_expr$12;
        }

        spaces=count_matches(os[(signed long int)i][(signed long int)0], (char)32);
        char *return_value_parse_others$14;
        return_value_parse_others$14=parse_others(a, spaces);
        char *return_value_alloc_string$15;
        return_value_alloc_string$15=alloc_string(return_value_parse_others$14);
        return return_value_alloc_string$15;
      }

    }
    xstrncpy(os_type, "Unknown", (const unsigned long int)10);
    char *return_value_alloc_string$16;
    return_value_alloc_string$16=alloc_string("Unknown");
    return return_value_alloc_string$16;
  }
}

// verify_static_content
// file src/parser.c line 586
static signed int verify_static_content(char *req)
{
  char *nul;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(req);
  nul = req + (signed long int)return_value_strlen$1;
  const char *ext = (const char *)(void *)0;
  const char *pch = (const char *)(void *)0;
  signed int elen = 0;
  signed int i;
  unsigned long int return_value_strlen$2;
  return_value_strlen$2=strlen(req);
  _Bool tmp_if_expr$3;
  if(!(return_value_strlen$2 >= conf.static_file_max_len))
    return 0;

  else
  {
    i = 0;
    for( ; !(i >= conf.static_file_idx); i = i + 1)
    {
      ext = conf.static_files[(signed long int)i];
      if(ext == ((const char *)NULL))
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = (signed int)*ext == 0 ? (_Bool)1 : (_Bool)0;
      if(!tmp_if_expr$3)
      {
        unsigned long int return_value_strlen$4;
        return_value_strlen$4=strlen(ext);
        elen = (signed int)return_value_strlen$4;
        if(!(conf.all_static_files == 0))
        {
          pch=strchr(req, 63);
          if(!(pch == ((const char *)NULL)))
          {
            if(!((signed long int)elen >= pch - req))
            {
              pch = pch - (signed long int)elen;
              signed int return_value_strncmp$5;
              return_value_strncmp$5=strncmp(ext, pch, (unsigned long int)elen);
              if(return_value_strncmp$5 == 0)
                return 1;

              goto __CPROVER_DUMP_L8;
            }

          }

        }

        signed int return_value_memcmp$6;
        return_value_memcmp$6=memcmp((const void *)(nul - (signed long int)elen), (const void *)ext, (unsigned long int)elen);
        if(return_value_memcmp$6 == 0)
          return 1;

      }


    __CPROVER_DUMP_L8:
      ;
    }
    return 0;
  }
}

// verify_status_code
// file src/util.h line 64
const char * verify_status_code(char *str)
{
  unsigned long int i = (unsigned long int)0;
  char *return_value_strstr$1;
  for( ; !(i >= 51ul); i = i + 1ul)
  {
    return_value_strstr$1=strstr(str, codes[(signed long int)i][(signed long int)0]);
    if(!(return_value_strstr$1 == ((char *)NULL)))
      return codes[(signed long int)i][(signed long int)1];

  }
  return "Unknown";
}

// verify_status_code_type
// file src/util.h line 65
const char * verify_status_code_type(const char *str)
{
  unsigned long int i = (unsigned long int)0;
  char *return_value_strchr$1;
  for( ; !(i >= 5ul); i = i + 1ul)
  {
    return_value_strchr$1=strchr(code_type[(signed long int)i][(signed long int)0], (signed int)str[(signed long int)0]);
    if(!(return_value_strchr$1 == ((char *)NULL)))
      return code_type[(signed long int)i][(signed long int)1];

  }
  return "Unknown";
}

// wc_match
// file src/util.c line 603
signed int wc_match(char *wc, char *str)
{
  _Bool tmp_if_expr$1;
  while(!(*wc == 0))
  {
    if(*str == 0)
      break;

    if((signed int)*wc == 42)
    {
      for( ; !(*wc == 0); wc = wc + 1l)
        if(!((signed int)*wc == 42))
          break;

      if(*wc == 0)
        return 1;

      for( ; !(*str == 0); str = str + 1l)
        if(*str == *wc)
          break;

    }

    else
    {
      if((signed int)*wc == 63)
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = *wc == *str ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
      {
        wc = wc + 1l;
        str = str + 1l;
      }

      else
        break;
    }
  }
  if(*wc == 0)
  {
    if(!(*str == 0))
      goto __CPROVER_DUMP_L12;

    return 1;
  }

  else
  {

  __CPROVER_DUMP_L12:
    ;
    return 0;
  }
}

// window_resize
// file src/goaccess.c line 653
static void window_resize(void)
{
  endwin();
  wrefresh(stdscr);
  werase(header_win);
  werase(main_win);
  werase(stdscr);
  term_size(main_win);
  wrefresh(stdscr);
  render_screens();
}

// within_range
// file src/util.c line 196
static signed int within_range(const char *ip, const char *start, const char *end)
{
  struct in6_addr$0 addr6;
  struct in6_addr$0 start6;
  struct in6_addr$0 end6;
  struct in_addr addr4;
  struct in_addr start4;
  struct in_addr end4;
  _Bool tmp_if_expr$1;
  if(start == ((const char *)NULL))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)*start == 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  signed int return_value_memcmp$6;
  signed int return_value_inet_pton$12;
  signed int return_value_memcmp$10;
  if(tmp_if_expr$1)
    return 0;

  else
  {
    if(end == ((const char *)NULL))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = (signed int)*end == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
      return 0;

    else
    {
      if(ip == ((const char *)NULL))
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = (signed int)*ip == 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
        return 0;

      else
      {
        signed int return_value_inet_pton$13;
        return_value_inet_pton$13=inet_pton(2, ip, (void *)&addr4);
        if(return_value_inet_pton$13 == 1)
        {
          signed int return_value_inet_pton$4;
          return_value_inet_pton$4=inet_pton(2, start, (void *)&start4);
          if(!(return_value_inet_pton$4 == 1))
            return 0;

          signed int return_value_inet_pton$5;
          return_value_inet_pton$5=inet_pton(2, end, (void *)&end4);
          if(!(return_value_inet_pton$5 == 1))
            return 0;

          signed int return_value_memcmp$7;
          return_value_memcmp$7=memcmp((const void *)&addr4, (const void *)&start4, sizeof(struct in_addr) /*4ul*/ );
          if(return_value_memcmp$7 >= 0)
          {
            return_value_memcmp$6=memcmp((const void *)&addr4, (const void *)&end4, sizeof(struct in_addr) /*4ul*/ );
            if(!(return_value_memcmp$6 >= 1))
              return 1;

          }

        }

        else
        {
          return_value_inet_pton$12=inet_pton(10, ip, (void *)&addr6);
          if(return_value_inet_pton$12 == 1)
          {
            signed int return_value_inet_pton$8;
            return_value_inet_pton$8=inet_pton(10, start, (void *)&start6);
            if(!(return_value_inet_pton$8 == 1))
              return 0;

            signed int return_value_inet_pton$9;
            return_value_inet_pton$9=inet_pton(10, end, (void *)&end6);
            if(!(return_value_inet_pton$9 == 1))
              return 0;

            signed int return_value_memcmp$11;
            return_value_memcmp$11=memcmp((const void *)&addr6, (const void *)&start6, sizeof(struct in6_addr$0) /*16ul*/ );
            if(return_value_memcmp$11 >= 0)
            {
              return_value_memcmp$10=memcmp((const void *)&addr6, (const void *)&end6, sizeof(struct in6_addr$0) /*16ul*/ );
              if(!(return_value_memcmp$10 >= 1))
                return 1;

            }

          }

        }
        return 0;
      }
    }
  }
}

// xcalloc
// file src/xmalloc.h line 25
void * xcalloc(unsigned long int nmemb, unsigned long int size)
{
  void *ptr;
  ptr=calloc(nmemb, size);
  if(ptr == NULL)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:46");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/xmalloc.c", (const void *)"xcalloc", 64);
      fprintf(stderr, "Unable to calloc memory - failed.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  return ptr;
}

// xmalloc
// file src/xmalloc.h line 26
void * xmalloc(unsigned long int size)
{
  void *ptr;
  ptr=malloc(size);
  if(ptr == NULL)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:46");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/xmalloc.c", (const void *)"xmalloc", 39);
      fprintf(stderr, "Unable to allocate memory - failed.");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  return ptr;
}

// xrealloc
// file src/xmalloc.h line 27
void * xrealloc(void *oldptr, unsigned long int size)
{
  void *newptr;
  newptr=realloc(oldptr, size);
  if(newptr == NULL)
    do
    {
      endwin();
      fprintf(stderr, "\nGoAccess - version %s - %s %s\n", (const void *)"0.9.4", (const void *)"Jan 24 2016", (const void *)"07:34:46");
      fprintf(stderr, "Config file: %s\n", (_Bool)conf.iconfigfile ? conf.iconfigfile : "No config file used");
      fprintf(stderr, "\nFatal error has occurred");
      fprintf(stderr, "\nError occured at: %s - %s - %d\n", (const void *)"src/xmalloc.c", (const void *)"xrealloc", 76);
      fprintf(stderr, "Unable to reallocate memory - failed");
      fprintf(stderr, "\n\n");

    __CPROVER_DUMP_L2:
      ;
      exit(1);
    }
    while((_Bool)0);

  return newptr;
}

// xstrdup
// file src/xmalloc.h line 24
char * xstrdup(const char *s)
{
  char *ptr;
  unsigned long int len;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(s);
  len = return_value_strlen$1 + (unsigned long int)1;
  void *return_value_xmalloc$2;
  return_value_xmalloc$2=xmalloc(len);
  ptr = (char *)return_value_xmalloc$2;
  strncpy(ptr, s, len);
  return ptr;
}

// xstrncpy
// file src/util.h line 77
void xstrncpy(char *dest, const char *source, const unsigned long int dest_size)
{
  strncpy(dest, source, dest_size);
  if(dest_size >= 1ul)
    dest[(signed long int)(dest_size - (unsigned long int)1)] = (char)0;

  else
    dest[(signed long int)0] = (char)0;
}

