// #anon_enum$SPD_AUDIO_LE=0$SPD_AUDIO_BE=1
// file ../../include/spd_audio_plugin.h line 34
enum anonymous$9 { SPD_AUDIO_LE=0, SPD_AUDIO_BE=1 };

// #anon_enum$SPD_CAP_NONE=0$SPD_CAP_SPELL=1$SPD_CAP_ICON=2
// file ../../include/speechd_types.h line 32
enum anonymous$3 { SPD_CAP_NONE=0, SPD_CAP_SPELL=1, SPD_CAP_ICON=2 };

// #anon_enum$SPD_IMPORTANT=1$SPD_MESSAGE=2$SPD_TEXT=3$SPD_NOTIFICATION=4$SPD_PROGRESS=5
// file ../../include/speechd_types.h line 65
enum anonymous$4 { SPD_IMPORTANT=1, SPD_MESSAGE=2, SPD_TEXT=3, SPD_NOTIFICATION=4, SPD_PROGRESS=5 };

// #anon_enum$SPD_MALE1=1$SPD_MALE2=2$SPD_MALE3=3$SPD_FEMALE1=4$SPD_FEMALE2=5$SPD_FEMALE3=6$SPD_CHILD_MALE=7$SPD_CHILD_FEMALE=8
// file ../../include/speechd_types.h line 43
enum anonymous$5 { SPD_MALE1=1, SPD_MALE2=2, SPD_MALE3=3, SPD_FEMALE1=4, SPD_FEMALE2=5, SPD_FEMALE3=6, SPD_CHILD_MALE=7, SPD_CHILD_FEMALE=8 };

// #anon_enum$SPD_MSGTYPE_TEXT=0$SPD_MSGTYPE_SOUND_ICON=1$SPD_MSGTYPE_CHAR=2$SPD_MSGTYPE_KEY=3$SPD_MSGTYPE_SPELL=99
// file ../../include/speechd_types.h line 98
enum anonymous$13 { SPD_MSGTYPE_TEXT=0, SPD_MSGTYPE_SOUND_ICON=1, SPD_MSGTYPE_CHAR=2, SPD_MSGTYPE_KEY=3, SPD_MSGTYPE_SPELL=99 };

// #anon_enum$SPD_PUNCT_ALL=0$SPD_PUNCT_NONE=1$SPD_PUNCT_SOME=2
// file ../../include/speechd_types.h line 26
enum anonymous$6 { SPD_PUNCT_ALL=0, SPD_PUNCT_NONE=1, SPD_PUNCT_SOME=2 };

// #anon_enum$SPD_SPELL_OFF=0$SPD_SPELL_ON=1
// file ../../include/speechd_types.h line 38
enum anonymous$2 { SPD_SPELL_OFF=0, SPD_SPELL_ON=1 };

// tag-#anon#ST[*{S8}$S8$'name'||*{S8}$S8$'language'||*{S8}$S8$'variant'|]
// file ../../include/speechd_types.h line 54
struct anonymous$0;

// tag-#anon#ST[*{cS8}$cS8$'name'||*{V}$V$'address'|]
// file /usr/include/ltdl.h line 92
struct anonymous$11;

// tag-#anon#ST[ARR16{U64}$U64$'__val'|]
// file /usr/include/x86_64-linux-gnu/bits/sigset.h line 27
struct anonymous$14;

// tag-#anon#ST[ARR2{S32}$S32$'pc'||ARR2{S32}$S32$'cp'|]
// file module_utils.h line 156
struct anonymous;

// tag-#anon#ST[S32'bits'||S32'num_channels'||S32'sample_rate'||S32'num_samples'||*{S16}$S16$'samples'|]
// file ../../include/spd_audio_plugin.h line 37
struct anonymous$8;

// tag-#anon#ST[S32'rate'||S32'pitch'||S32'volume'||EN#anon_enum$SPD_PUNCT_ALL=0$SPD_PUNCT_NONE=1$SPD_PUNCT_SOME=2#{U32}$U32$'punctuation_mode'||EN#anon_enum$SPD_SPELL_OFF=0$SPD_SPELL_ON=1#{U32}$U32$'spelling_mode'||EN#anon_enum$SPD_CAP_NONE=0$SPD_CAP_SPELL=1$SPD_CAP_ICON=2#{U32}$U32$'cap_let_recogn'||EN#anon_enum$SPD_MALE1=1$SPD_MALE2=2$SPD_MALE3=3$SPD_FEMALE1=4$SPD_FEMALE2=5$SPD_FEMALE3=6$SPD_CHILD_MALE=7$SPD_CHILD_FEMALE=8#{U32}$U32$'voice_type'||U32'$pad0'||SYM#tag-#anon#ST[*{S8}$S8$'name'||*{S8}$S8$'language'||*{S8}$S8$'variant'|]#'voice'|]
// file ../../include/speechd_types.h line 106
struct anonymous$1;

// tag-#anon#ST[S32'volume'||EN#anon_enum$SPD_AUDIO_LE=0$SPD_AUDIO_BE=1#{U32}$U32$'format'||*{SYM#tag-spd_audio_plugin#}$SYM#tag-spd_audio_plugin#$'function'||*{V}$V$'private_data'||S32'working'||U32'$pad0'|]
// file ../../include/spd_audio_plugin.h line 49
struct anonymous$7;

// tag-#anon#ST[S64'value'||*{S8}$S8$'str'||*{*{S8}$S8$}$*{S8}$S8$$'list'||F64'dvalue'|]
// file /usr/include/dotconf.h line 170
struct anonymous$15;

// tag-#anon#UN[ARR32{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 239
union anonymous$12;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$10;

// tag-_GError
// file /usr/include/glib-2.0/glib/gerror.h line 42
struct _GError;

// tag-_GHashTable
// file /usr/include/glib-2.0/glib/ghash.h line 37
struct _GHashTable;

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

// tag-command_t
// file /usr/include/dotconf.h line 116
struct command_t;

// tag-configfile_t
// file /usr/include/dotconf.h line 113
struct configfile_t;

// tag-configoption_t
// file /usr/include/dotconf.h line 114
struct configoption_t;

// tag-lt__advise
// file /usr/include/libltdl/lt_dlloader.h line 41
struct lt__advise;

// tag-lt__handle
// file /usr/include/ltdl.h line 50
struct lt__handle;

// tag-pollfd
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 39
struct pollfd;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-spd_audio_plugin
// file ../../include/spd_audio_plugin.h line 47
struct spd_audio_plugin;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

#include <assert.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

// CiceroExecutableLog_cb
// file cicero.c line 70
const char * CiceroExecutableLog_cb(struct command_t *cmd, void *ctx);
// CiceroExecutable_cb
// file cicero.c line 69
const char * CiceroExecutable_cb(struct command_t *cmd, void *ctx);
// Debug_cb
// file cicero.c line 42
const char * Debug_cb(struct command_t *cmd, void *ctx);
// ECapLetRecogn2str
// file fdsetconv.c line 163
char * ECapLetRecogn2str(enum anonymous$3 recogn);
// EPunctMode2str
// file fdsetconv.c line 94
char * EPunctMode2str(enum anonymous$6 punct);
// ESpellMode2str
// file fdsetconv.c line 131
char * ESpellMode2str(enum anonymous$2 spell);
// EVoice2str
// file fdsetconv.c line 32
char * EVoice2str(enum anonymous$5 voice);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// __assert_fail
// file /usr/include/assert.h line 69
extern void __assert_fail(const char *, const char *, unsigned int, const char *);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// _cicero_speak
// file cicero.c line 306
static void * _cicero_speak(void *nothing);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// bindtextdomain
// file /usr/include/libintl.h line 86
extern char * bindtextdomain(const char *, const char *);
// cicero_set_rate
// file cicero.c line 416
static void cicero_set_rate(signed int rate);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// ctime
// file /usr/include/time.h line 264
extern char * ctime(const signed long int *);
// do_audio
// file module_utils.h line 198
char * do_audio(void);
// do_char
// file module_utils.h line 192
char * do_char(void);
// do_debug
// file module_utils.h line 200
char * do_debug(char *cmd_buf);
// do_key
// file module_utils.h line 193
char * do_key(void);
// do_list_voices
// file module_utils.h line 196
char * do_list_voices(void);
// do_loglevel
// file module_utils.h line 199
char * do_loglevel(void);
// do_message
// file module_utils.c line 43
char * do_message(enum anonymous$13 msgtype);
// do_pause
// file module_utils.h line 195
void do_pause(void);
// do_quit
// file module_utils.h line 201
void do_quit(void);
// do_set
// file module_utils.h line 197
char * do_set(void);
// do_sound_icon
// file module_utils.h line 191
char * do_sound_icon(void);
// do_speak
// file module_utils.h line 190
char * do_speak(void);
// do_stop
// file module_utils.h line 194
void do_stop(void);
// dotconf_cleanup
// file /usr/include/dotconf.h line 183
void dotconf_cleanup(struct configfile_t *);
// dotconf_command_loop
// file /usr/include/dotconf.h line 186
signed int dotconf_command_loop(struct configfile_t *);
// dotconf_create
// file /usr/include/dotconf.h line 179
struct configfile_t * dotconf_create(char *, const struct configoption_t *, void *, unsigned long int);
// dup2
// file /usr/include/unistd.h line 534
extern signed int dup2(signed int, signed int);
// execl
// file /usr/include/unistd.h line 573
extern signed int execl(const char *, const char *, ...);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
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
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// g_convert_with_fallback
// file /usr/include/glib-2.0/glib/gconvert.h line 108
extern char * g_convert_with_fallback(const char *, signed long int, const char *, const char *, const char *, unsigned long int *, unsigned long int *, struct _GError **);
// g_free
// file /usr/include/glib-2.0/glib/gmem.h line 71
extern void g_free(void *);
// g_hash_table_lookup
// file /usr/include/glib-2.0/glib/ghash.h line 88
extern void * g_hash_table_lookup(struct _GHashTable *, const void *);
// g_malloc
// file /usr/include/glib-2.0/glib/gmem.h line 78
extern void * g_malloc(unsigned long int);
// g_realloc
// file /usr/include/glib-2.0/glib/gmem.h line 82
extern void * g_realloc(void *, unsigned long int);
// g_strdup
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 216
extern char * g_strdup(const char *);
// g_strdup_printf
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 218
extern char * g_strdup_printf(const char *, ...);
// g_strfreev
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 281
extern void g_strfreev(char **);
// g_string_append
// file /usr/include/glib-2.0/glib/gstring.h line 80
extern struct _GString * g_string_append(struct _GString *, const char *);
// g_string_append_printf
// file /usr/include/glib-2.0/glib/gstring.h line 149
extern void g_string_append_printf(struct _GString *, const char *, ...);
// g_string_free
// file /usr/include/glib-2.0/glib/gstring.h line 56
extern char * g_string_free(struct _GString *, signed int);
// g_string_new
// file /usr/include/glib-2.0/glib/gstring.h line 49
extern struct _GString * g_string_new(const char *);
// g_strsplit
// file /usr/include/glib-2.0/glib/gstrfuncs.h line 270
extern char ** g_strsplit(const char *, const char *, signed int);
// g_thread_init
// file /usr/include/glib-2.0/glib/deprecated/gthread.h line 265
extern void g_thread_init(void *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// hasTimedOut
// file cicero.c line 95
static signed int hasTimedOut(signed int milliseconds);
// i18n_init
// file i18n.c line 32
void i18n_init(void);
// lt_dladvise_destroy
// file /usr/include/ltdl.h line 69
extern signed int lt_dladvise_destroy(struct lt__advise **);
// lt_dladvise_ext
// file /usr/include/ltdl.h line 70
extern signed int lt_dladvise_ext(struct lt__advise **);
// lt_dladvise_global
// file /usr/include/ltdl.h line 73
extern signed int lt_dladvise_global(struct lt__advise **);
// lt_dladvise_init
// file /usr/include/ltdl.h line 68
extern signed int lt_dladvise_init(struct lt__advise **);
// lt_dlclose
// file /usr/include/ltdl.h line 83
extern signed int lt_dlclose(struct lt__handle *);
// lt_dlerror
// file /usr/include/ltdl.h line 82
extern const char * lt_dlerror(void);
// lt_dlexit
// file /usr/include/ltdl.h line 54
extern signed int lt_dlexit(void);
// lt_dlinit
// file /usr/include/ltdl.h line 53
extern signed int lt_dlinit(void);
// lt_dlopenadvise
// file /usr/include/ltdl.h line 79
extern struct lt__handle * lt_dlopenadvise(const char *, struct lt__advise *);
// lt_dlpreload_default
// file /usr/include/ltdl.h line 100
extern signed int lt_dlpreload_default(const struct anonymous$11 *);
// lt_dlsetsearchpath
// file /usr/include/ltdl.h line 60
extern signed int lt_dlsetsearchpath(const char *);
// lt_dlsym
// file /usr/include/ltdl.h line 81
extern void * lt_dlsym(struct lt__handle *, const char *);
// millisecondsBetween
// file cicero.c line 81
static signed long int millisecondsBetween(struct timeval *from, struct timeval *to);
// millisecondsSince
// file cicero.c line 88
signed long int millisecondsSince(struct timeval *from);
// module_add_config_option
// file module_utils.h line 214
struct configoption_t * module_add_config_option(struct configoption_t *options, signed int *num_options, char *name, signed int type, const char * (*callback)(struct command_t *, void *), void *info, unsigned long int context);
// module_add_config_option::callback$object
// 
const char * callback$object(struct command_t *, void *);
// module_audio_init
// file module_utils.c line 947
signed int module_audio_init(char **status_info);
// module_child_dp_close
// file module_utils.c line 709
void module_child_dp_close(struct anonymous dpipe);
// module_child_dp_init
// file module_utils.c line 702
void module_child_dp_init(struct anonymous dpipe);
// module_child_dp_read
// file module_utils.c line 736
signed int module_child_dp_read(struct anonymous dpipe, char *msg, unsigned long int maxlen);
// module_child_dp_write
// file module_utils.c line 716
void module_child_dp_write(struct anonymous dpipe, const char *msg, unsigned long int bytes);
// module_close
// file cicero.c line 290
signed int module_close(void);
// module_get_ht_option
// file module_utils.c line 935
void * module_get_ht_option(struct _GHashTable *hash_table, const char *key);
// module_get_message_part
// file module_utils.h line 161
signed int module_get_message_part(const char *message, char *part, unsigned int *pos, unsigned long int maxlen, const char *dividers);
// module_init
// file cicero.c line 142
signed int module_init(char **status_info);
// module_list_voices
// file cicero.c line 230
struct anonymous$0 ** module_list_voices(void);
// module_load
// file cicero.c line 132
signed int module_load(void);
// module_parent_dp_close
// file module_utils.c line 695
void module_parent_dp_close(struct anonymous dpipe);
// module_parent_dp_init
// file module_utils.c line 688
void module_parent_dp_init(struct anonymous dpipe);
// module_parent_dp_read
// file module_utils.c line 748
signed int module_parent_dp_read(struct anonymous dpipe, char *msg, unsigned long int maxlen);
// module_parent_dp_write
// file module_utils.c line 725
signed int module_parent_dp_write(struct anonymous dpipe, const char *msg, unsigned long int bytes);
// module_parent_wait_continue
// file module_utils.c line 668
signed int module_parent_wait_continue(struct anonymous dpipe);
// module_parent_wfork
// file module_utils.c line 608
unsigned long int module_parent_wfork(struct anonymous dpipe, const char *message, enum anonymous$13 msgtype, const unsigned long int maxlen, const char *dividers, signed int *pause_requested);
// module_pause
// file cicero.c line 277
unsigned long int module_pause(void);
// module_play_file
// file module_utils.c line 992
signed int module_play_file(const char *filename);
// module_recode_to_iso
// file module_utils.c line 841
char * module_recode_to_iso(char *data, signed int bytes, char *language, char *fallback);
// module_report_event_begin
// file module_utils.h line 380
void module_report_event_begin(void);
// module_report_event_end
// file module_utils.h line 381
void module_report_event_end(void);
// module_report_event_pause
// file module_utils.c line 904
void module_report_event_pause(void);
// module_report_event_stop
// file module_utils.h line 382
void module_report_event_stop(void);
// module_report_index_mark
// file module_utils.c line 871
void module_report_index_mark(char *mark);
// module_send_asynchronous
// file module_utils.c line 860
void module_send_asynchronous(char *text);
// module_sigblockall
// file module_utils.c line 761
void module_sigblockall(void);
// module_sigblockusr
// file module_utils.c line 789
void module_sigblockusr(struct anonymous$14 *some_signals);
// module_sigunblockusr
// file module_utils.c line 776
void module_sigunblockusr(struct anonymous$14 *some_signals);
// module_speak
// file cicero.c line 235
signed int module_speak(char *data, unsigned long int bytes, enum anonymous$13 msgtype);
// module_stop
// file cicero.c line 267
signed int module_stop(void);
// module_strip_punctuation_default
// file module_utils.c line 601
void module_strip_punctuation_default(char *buf);
// module_strip_punctuation_some
// file module_utils.c line 538
void module_strip_punctuation_some(char *message, char *punct_chars);
// module_strip_ssml
// file module_utils.h line 183
char * module_strip_ssml(char *message);
// module_terminate_thread
// file module_utils.h line 210
signed int module_terminate_thread(unsigned long int thread);
// module_tts_output
// file module_utils.c line 981
signed int module_tts_output(struct anonymous$8 track, enum anonymous$9 format);
// my_dlopenextglobal
// file spd_audio.c line 62
static struct lt__handle * my_dlopenextglobal(const char *filename);
// mywrite
// file cicero.c line 106
static void mywrite(signed int fd, const void *buf, signed int len);
// open
// file /usr/include/fcntl.h line 146
extern signed int open(const char *, signed int, ...);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pipe
// file /usr/include/unistd.h line 417
extern signed int pipe(signed int *);
// poll
// file /usr/include/x86_64-linux-gnu/sys/poll.h line 57
extern signed int poll(struct pollfd *, unsigned long int, signed int);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cancel
// file /usr/include/pthread.h line 515
extern signed int pthread_cancel(unsigned long int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_exit
// file /usr/include/pthread.h line 244
extern void pthread_exit(void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$10 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$10 *);
// pthread_setcancelstate
// file /usr/include/pthread.h line 508
extern signed int pthread_setcancelstate(signed int, signed int *);
// pthread_setcanceltype
// file /usr/include/pthread.h line 512
extern signed int pthread_setcanceltype(signed int, signed int *);
// pthread_sigmask
// file /usr/include/x86_64-linux-gnu/bits/sigthread.h line 30
extern signed int pthread_sigmask(signed int, const struct anonymous$14 *, struct anonymous$14 *);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// sem_destroy
// file /usr/include/semaphore.h line 39
extern signed int sem_destroy(union anonymous$12 *);
// sem_init
// file /usr/include/semaphore.h line 36
extern signed int sem_init(union anonymous$12 *, signed int, unsigned int);
// sem_post
// file /usr/include/semaphore.h line 69
extern signed int sem_post(union anonymous$12 *);
// sem_wait
// file /usr/include/semaphore.h line 54
extern signed int sem_wait(union anonymous$12 *);
// set_speaking_thread_parameters
// file module_utils.h line 165
void set_speaking_thread_parameters();
// setlocale
// file /usr/include/locale.h line 124
extern char * setlocale(signed int, const char *);
// sigaddset
// file /usr/include/signal.h line 221
extern signed int sigaddset(struct anonymous$14 *, signed int);
// sigdelset
// file /usr/include/signal.h line 224
extern signed int sigdelset(struct anonymous$14 *, signed int);
// sigfillset
// file /usr/include/signal.h line 218
extern signed int sigfillset(struct anonymous$14 *);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sigprocmask
// file /usr/include/signal.h line 248
extern signed int sigprocmask(signed int, const struct anonymous$14 *, struct anonymous$14 *);
// spd_audio_close
// file spd_audio.c line 254
signed int spd_audio_close(struct anonymous$7 *id);
// spd_audio_get_playcmd
// file spd_audio.c line 315
const char * spd_audio_get_playcmd(struct anonymous$7 *id);
// spd_audio_open
// file spd_audio.c line 93
struct anonymous$7 * spd_audio_open(char *name, void **pars, char **error);
// spd_audio_open::1::fn$object
// 
struct spd_audio_plugin * fn$object(void);
// spd_audio_play
// file spd_audio.c line 174
signed int spd_audio_play(struct anonymous$7 *id, struct anonymous$8 track, enum anonymous$9 format);
// spd_audio_set_loglevel
// file spd_audio.c line 306
void spd_audio_set_loglevel(struct anonymous$7 *id, signed int level);
// spd_audio_set_volume
// file spd_audio.c line 292
signed int spd_audio_set_volume(struct anonymous$7 *id, signed int volume);
// spd_audio_stop
// file spd_audio.c line 228
signed int spd_audio_stop(struct anonymous$7 *id);
// spd_getline
// file ../../include/spd_utils.h line 29
signed long int spd_getline(char **lineptr, unsigned long int *n, struct _IO_FILE *f);
// str2ECapLetRecogn
// file ../../include/fdsetconv.h line 22
enum anonymous$3 str2ECapLetRecogn(char *str);
// str2EPunctMode
// file ../../include/fdsetconv.h line 14
enum anonymous$6 str2EPunctMode(char *str);
// str2ESpellMode
// file ../../include/fdsetconv.h line 18
enum anonymous$2 str2ESpellMode(char *str);
// str2EVoice
// file ../../include/fdsetconv.h line 10
enum anonymous$5 str2EVoice(char *str);
// str2intpriority
// file fdsetconv.c line 200
enum anonymous$4 str2intpriority(char *str);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
// strcmp
// file /usr/include/string.h line 144
extern signed int strcmp(const char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strtok
// file /usr/include/string.h line 347
extern char * strtok(char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// textdomain
// file /usr/include/libintl.h line 82
extern char * textdomain(const char *);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// ungetc
// file /usr/include/stdio.h line 702
extern signed int ungetc(signed int, struct _IO_FILE *);
// write
// file /usr/include/unistd.h line 366
extern signed long int write(signed int, const void *, unsigned long int);

struct anonymous$0
{
  // name
  char *name;
  // language
  char *language;
  // variant
  char *variant;
};

struct anonymous$11
{
  // name
  const char *name;
  // address
  void *address;
};

struct anonymous$14
{
  // __val
  unsigned long int __val[16l];
};

struct anonymous
{
  // pc
  signed int pc[2l];
  // cp
  signed int cp[2l];
};

struct anonymous$8
{
  // bits
  signed int bits;
  // num_channels
  signed int num_channels;
  // sample_rate
  signed int sample_rate;
  // num_samples
  signed int num_samples;
  // samples
  signed short int *samples;
};

struct anonymous$1
{
  // rate
  signed int rate;
  // pitch
  signed int pitch;
  // volume
  signed int volume;
  // punctuation_mode
  enum anonymous$6 punctuation_mode;
  // spelling_mode
  enum anonymous$2 spelling_mode;
  // cap_let_recogn
  enum anonymous$3 cap_let_recogn;
  // voice_type
  enum anonymous$5 voice_type;
  // voice
  struct anonymous$0 voice;
};

struct anonymous$7
{
  // volume
  signed int volume;
  // format
  enum anonymous$9 format;
  // function
  struct spd_audio_plugin *function;
  // private_data
  void *private_data;
  // working
  signed int working;
};

struct anonymous$15
{
  // value
  signed long int value;
  // str
  char *str;
  // list
  char **list;
  // dvalue
  double dvalue;
};

union anonymous$12
{
  // __size
  char __size[32l];
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

union anonymous$10
{
  // __data
  struct __pthread_mutex_s __data;
  // __size
  char __size[40l];
  // __align
  signed long int __align;
};

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

struct command_t
{
  // name
  const char *name;
  // option
  struct configoption_t *option;
  // configfile
  struct configfile_t *configfile;
  // context
  void *context;
  // arg_count
  signed int arg_count;
  // data
  struct anonymous$15 data;
};

struct configfile_t
{
  // stream
  struct _IO_FILE *stream;
  // eof
  char eof;
  // size
  unsigned long int size;
  // context
  void *context;
  // config_options
  const struct configoption_t **config_options;
  // config_option_count
  signed int config_option_count;
  // filename
  char *filename;
  // line
  unsigned long int line;
  // flags
  unsigned long int flags;
  // includepath
  char *includepath;
  // errorhandler
  signed int (*errorhandler)(struct configfile_t *, signed int, unsigned long int, const char *);
  // contextchecker
  const char * (*contextchecker)(struct command_t *, unsigned long int);
  // cmp_func
  signed int (*cmp_func)(const char *, const char *, unsigned long int);
};

struct configoption_t
{
  // name
  const char *name;
  // type
  signed int type;
  // callback
  const char * (*callback)(struct command_t *, void *);
  // info
  void *info;
  // context
  unsigned long int context;
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

struct spd_audio_plugin
{
  // name
  const char *name;
  // open
  struct anonymous$7 * (*open)(void **);
  // play
  signed int (*play)(struct anonymous$7 *, struct anonymous$8);
  // stop
  signed int (*stop)(struct anonymous$7 *);
  // close
  signed int (*close)(struct anonymous$7 *);
  // set_volume
  signed int (*set_volume)(struct anonymous$7 *, signed int);
  // set_loglevel
  void (*set_loglevel)(signed int);
  // get_playcmd
  const char * (*get_playcmd)(void);
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


// CiceroExecutable
// file cicero.c line 69
static char *CiceroExecutable = (char *)(void *)0;
// CiceroExecutableLog
// file cicero.c line 70
static char *CiceroExecutableLog = (char *)(void *)0;
// CiceroMaxChunkLength
// file cicero.c line 56
static unsigned int CiceroMaxChunkLength = (unsigned int)500;
// CustomDebugFile
// file module_utils.h line 56
struct _IO_FILE *CustomDebugFile;
// Debug
// file module_utils.h line 55
signed int Debug;
// cicero_message
// file cicero.c line 50
static char **cicero_message;
// cicero_message_type
// file cicero.c line 51
static enum anonymous$13 cicero_message_type;
// cicero_pause_requested
// file cicero.c line 54
static signed int cicero_pause_requested = 0;
// cicero_position
// file cicero.c line 53
static signed int cicero_position = 0;
// cicero_semaphore
// file cicero.c line 48
static union anonymous$12 cicero_semaphore;
// cicero_speaking
// file cicero.c line 45
static signed int cicero_speaking = 0;
// cicero_speaking_thread
// file cicero.c line 47
static unsigned long int cicero_speaking_thread;
// cicero_stop
// file cicero.c line 63
signed int cicero_stop = 0;
// cicero_volume
// file cicero.c line 55
signed int cicero_volume = 0;
// configfile
// file module_utils.h line 58
struct configfile_t *configfile;
// current_index_mark
// file module_utils.h line 53
signed int current_index_mark;
// fd1
// file cicero.c line 75
static signed int fd1[2l];
// fd2
// file cicero.c line 75
static signed int fd2[2l];
// log_level
// file module_utils.h line 46
signed int log_level;
// lt__PROGRAM__LTX_preloaded_symbols
// file sd_ciceroS.c line 34
const struct anonymous$11 lt__PROGRAM__LTX_preloaded_symbols[2l] = { { .name="@PROGRAM@", .address=(void *)0 }, 
    { .name=((const char *)NULL), .address=(void *)0 } };
// lt_h
// file spd_audio.c line 54
static struct lt__handle *lt_h;
// module_audio_id
// file module_utils.h line 48
struct anonymous$7 *module_audio_id;
// module_audio_pars
// file module_utils.c line 36
static char *module_audio_pars[10l];
// module_dc_options
// file module_utils.h line 59
struct configoption_t *module_dc_options;
// module_index_mark
// file module_utils.h line 372
char *module_index_mark;
// module_num_dc_options
// file module_utils.h line 60
signed int module_num_dc_options;
// module_stdout_mutex
// file module_utils.c line 40
union anonymous$10 module_stdout_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// msg_settings
// file module_utils.h line 50
struct anonymous$1 msg_settings;
// msg_settings_old
// file module_utils.h line 51
struct anonymous$1 msg_settings_old;
// spd_audio_log_level
// file spd_audio.c line 53
static signed int spd_audio_log_level;
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;

// CiceroExecutableLog_cb
// file cicero.c line 70
const char * CiceroExecutableLog_cb(struct command_t *cmd, void *ctx)
{
  g_free((void *)CiceroExecutableLog);
  if(!(cmd->data.str == ((char *)NULL)))
    CiceroExecutableLog=g_strdup(cmd->data.str);

  return (const char *)(void *)0;
}

// CiceroExecutable_cb
// file cicero.c line 69
const char * CiceroExecutable_cb(struct command_t *cmd, void *ctx)
{
  g_free((void *)CiceroExecutable);
  if(!(cmd->data.str == ((char *)NULL)))
    CiceroExecutable=g_strdup(cmd->data.str);

  return (const char *)(void *)0;
}

// Debug_cb
// file cicero.c line 42
const char * Debug_cb(struct command_t *cmd, void *ctx)
{
  Debug = (signed int)cmd->data.value;
  return (const char *)(void *)0;
}

// ECapLetRecogn2str
// file fdsetconv.c line 163
char * ECapLetRecogn2str(enum anonymous$3 recogn)
{
  char *str;
  switch((signed int)recogn)
  {
    case SPD_CAP_NONE:
    {
      str=g_strdup("none");
      break;
    }
    case SPD_CAP_SPELL:
    {
      str=g_strdup("spell");
      break;
    }
    case SPD_CAP_ICON:
    {
      str=g_strdup("icon");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// EPunctMode2str
// file fdsetconv.c line 94
char * EPunctMode2str(enum anonymous$6 punct)
{
  char *str;
  switch((signed int)punct)
  {
    case SPD_PUNCT_NONE:
    {
      str=g_strdup("none");
      break;
    }
    case SPD_PUNCT_ALL:
    {
      str=g_strdup("all");
      break;
    }
    case SPD_PUNCT_SOME:
    {
      str=g_strdup("some");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// ESpellMode2str
// file fdsetconv.c line 131
char * ESpellMode2str(enum anonymous$2 spell)
{
  char *str;
  switch((signed int)spell)
  {
    case SPD_SPELL_ON:
    {
      str=g_strdup("on");
      break;
    }
    case SPD_SPELL_OFF:
    {
      str=g_strdup("off");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// EVoice2str
// file fdsetconv.c line 32
char * EVoice2str(enum anonymous$5 voice)
{
  char *str;
  switch((signed int)voice)
  {
    case SPD_MALE1:
    {
      str=g_strdup("male1");
      break;
    }
    case SPD_MALE2:
    {
      str=g_strdup("male2");
      break;
    }
    case SPD_MALE3:
    {
      str=g_strdup("male3");
      break;
    }
    case SPD_FEMALE1:
    {
      str=g_strdup("female1");
      break;
    }
    case SPD_FEMALE2:
    {
      str=g_strdup("female2");
      break;
    }
    case SPD_FEMALE3:
    {
      str=g_strdup("female3");
      break;
    }
    case SPD_CHILD_MALE:
    {
      str=g_strdup("child_male");
      break;
    }
    case SPD_CHILD_FEMALE:
    {
      str=g_strdup("child_female");
      break;
    }
    default:
      str = (char *)(void *)0;
  }
  return str;
}

// _cicero_speak
// file cicero.c line 306
static void * _cicero_speak(void *nothing)
{
  char stop_code = (char)1;
  unsigned int pos = (unsigned int)0;
  unsigned int inx = (unsigned int)0;
  unsigned int len = (unsigned int)0;
  signed int flag = 0;
  signed int bytes;
  signed int ret;
  const signed long int ret$array_size0 = (signed long int)CiceroMaxChunkLength;
  char buf[ret$array_size0];
  char l[5l];
  char b[2l];
  struct pollfd ufds = { .fd=fd1[(signed long int)0], .events=(signed short int)(0x001 | 0x002), .revents=(signed short int)0 };
  if(!(Debug == 0))
  {
    signed long int _cicero_speak$$1$$1$$t;
    struct timeval _cicero_speak$$1$$1$$tv;
    char *_cicero_speak$$1$$1$$tstr;
    _cicero_speak$$1$$1$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&_cicero_speak$$1$$1$$t);
    _cicero_speak$$1$$1$$tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(_cicero_speak$$1$$1$$tstr);
    _cicero_speak$$1$$1$$tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&_cicero_speak$$1$$1$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", _cicero_speak$$1$$1$$tstr, (signed int)_cicero_speak$$1$$1$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "cicero: speaking thread starting.......\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$1$$tstr, (signed int)_cicero_speak$$1$$1$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "cicero: speaking thread starting.......\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)_cicero_speak$$1$$1$$tstr);
  }

  set_speaking_thread_parameters();
  signed long int return_value_read$26;
  _Bool tmp_if_expr$25;
  signed int *return_value___errno_location$24;
  while((_Bool)1)
  {
    sem_wait(&cicero_semaphore);
    if(!(Debug == 0))
    {
      signed long int _cicero_speak$$1$$2$$1$$t;
      struct timeval _cicero_speak$$1$$2$$1$$tv;
      char *_cicero_speak$$1$$2$$1$$tstr;
      _cicero_speak$$1$$2$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&_cicero_speak$$1$$2$$1$$t);
      _cicero_speak$$1$$2$$1$$tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(_cicero_speak$$1$$2$$1$$tstr);
      _cicero_speak$$1$$2$$1$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&_cicero_speak$$1$$2$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$1$$tstr, (signed int)_cicero_speak$$1$$2$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Semaphore on\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$1$$tstr, (signed int)_cicero_speak$$1$$2$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Semaphore on\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)_cicero_speak$$1$$2$$1$$tstr);
    }

    unsigned long int return_value_strlen$5;
    return_value_strlen$5=strlen(*cicero_message);
    len = (unsigned int)return_value_strlen$5;
    cicero_stop = 0;
    cicero_speaking = 1;
    cicero_position = 0;
    pos = (unsigned int)0;
    module_report_event_begin();
    while((_Bool)1)
    {
      flag = 0;
      if(!(cicero_stop == 0))
      {
        if(!(Debug == 0))
        {
          signed long int _cicero_speak$$1$$2$$2$$1$$1$$t;
          struct timeval _cicero_speak$$1$$2$$2$$1$$1$$tv;
          char *_cicero_speak$$1$$2$$2$$1$$1$$tstr;
          _cicero_speak$$1$$2$$2$$1$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$6;
          return_value_ctime$6=ctime(&_cicero_speak$$1$$2$$2$$1$$1$$t);
          _cicero_speak$$1$$2$$2$$1$$1$$tstr=g_strdup(return_value_ctime$6);
          unsigned long int return_value_strlen$7;
          return_value_strlen$7=strlen(_cicero_speak$$1$$2$$2$$1$$1$$tstr);
          _cicero_speak$$1$$2$$2$$1$$1$$tstr[(signed long int)(return_value_strlen$7 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_cicero_speak$$1$$2$$2$$1$$1$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$1$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$1$$1$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Stop in thread, terminating");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$1$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$1$$1$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Stop in thread, terminating");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_cicero_speak$$1$$2$$2$$1$$1$$tstr);
        }

        cicero_speaking = 0;
        module_report_event_stop();
        break;
      }

      if(pos >= len)
      {
        if(!(Debug == 0))
        {
          signed long int _cicero_speak$$1$$2$$2$$2$$1$$t;
          struct timeval _cicero_speak$$1$$2$$2$$2$$1$$tv;
          char *_cicero_speak$$1$$2$$2$$2$$1$$tstr;
          _cicero_speak$$1$$2$$2$$2$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$8;
          return_value_ctime$8=ctime(&_cicero_speak$$1$$2$$2$$2$$1$$t);
          _cicero_speak$$1$$2$$2$$2$$1$$tstr=g_strdup(return_value_ctime$8);
          unsigned long int return_value_strlen$9;
          return_value_strlen$9=strlen(_cicero_speak$$1$$2$$2$$2$$1$$tstr);
          _cicero_speak$$1$$2$$2$$2$$1$$tstr[(signed long int)(return_value_strlen$9 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_cicero_speak$$1$$2$$2$$2$$1$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$2$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$2$$1$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "End of text in speaking thread\n");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$2$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$2$$1$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "End of text in speaking thread\n");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_cicero_speak$$1$$2$$2$$2$$1$$tstr);
        }

        module_report_event_end();
        cicero_speaking = 0;
        break;
      }

      if(!(Debug == 0))
      {
        signed long int _cicero_speak$$1$$2$$2$$3$$t;
        struct timeval _cicero_speak$$1$$2$$2$$3$$tv;
        char *_cicero_speak$$1$$2$$2$$3$$tstr;
        _cicero_speak$$1$$2$$2$$3$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$10;
        return_value_ctime$10=ctime(&_cicero_speak$$1$$2$$2$$3$$t);
        _cicero_speak$$1$$2$$2$$3$$tstr=g_strdup(return_value_ctime$10);
        unsigned long int return_value_strlen$11;
        return_value_strlen$11=strlen(_cicero_speak$$1$$2$$2$$3$$tstr);
        _cicero_speak$$1$$2$$2$$3$$tstr[(signed long int)(return_value_strlen$11 - (unsigned long int)1)] = (char)0;
        gettimeofday(&_cicero_speak$$1$$2$$2$$3$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$3$$tstr, (signed int)_cicero_speak$$1$$2$$2$$3$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Call get_parts: pos=%d, msg=\"%s\" \n", pos, *cicero_message);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$3$$tstr, (signed int)_cicero_speak$$1$$2$$2$$3$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Call get_parts: pos=%d, msg=\"%s\" \n", pos, *cicero_message);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)_cicero_speak$$1$$2$$2$$3$$tstr);
      }

      bytes=module_get_message_part(*cicero_message, buf, &pos, (unsigned long int)CiceroMaxChunkLength, ".;?!");
      if(!(Debug == 0))
      {
        signed long int _cicero_speak$$1$$2$$2$$4$$t;
        struct timeval _cicero_speak$$1$$2$$2$$4$$tv;
        char *_cicero_speak$$1$$2$$2$$4$$tstr;
        _cicero_speak$$1$$2$$2$$4$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$12;
        return_value_ctime$12=ctime(&_cicero_speak$$1$$2$$2$$4$$t);
        _cicero_speak$$1$$2$$2$$4$$tstr=g_strdup(return_value_ctime$12);
        unsigned long int return_value_strlen$13;
        return_value_strlen$13=strlen(_cicero_speak$$1$$2$$2$$4$$tstr);
        _cicero_speak$$1$$2$$2$$4$$tstr[(signed long int)(return_value_strlen$13 - (unsigned long int)1)] = (char)0;
        gettimeofday(&_cicero_speak$$1$$2$$2$$4$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$4$$tstr, (signed int)_cicero_speak$$1$$2$$2$$4$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Returned %d bytes from get_part\n", bytes);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$4$$tstr, (signed int)_cicero_speak$$1$$2$$2$$4$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Returned %d bytes from get_part\n", bytes);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)_cicero_speak$$1$$2$$2$$4$$tstr);
      }

      if(!(bytes >= 0))
      {
        if(!(Debug == 0))
        {
          signed long int _cicero_speak$$1$$2$$2$$5$$1$$t;
          struct timeval _cicero_speak$$1$$2$$2$$5$$1$$tv;
          char *_cicero_speak$$1$$2$$2$$5$$1$$tstr;
          _cicero_speak$$1$$2$$2$$5$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$14;
          return_value_ctime$14=ctime(&_cicero_speak$$1$$2$$2$$5$$1$$t);
          _cicero_speak$$1$$2$$2$$5$$1$$tstr=g_strdup(return_value_ctime$14);
          unsigned long int return_value_strlen$15;
          return_value_strlen$15=strlen(_cicero_speak$$1$$2$$2$$5$$1$$tstr);
          _cicero_speak$$1$$2$$2$$5$$1$$tstr[(signed long int)(return_value_strlen$15 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_cicero_speak$$1$$2$$2$$5$$1$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$5$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$5$$1$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "ERROR: Can't get message part, terminating");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$5$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$5$$1$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "ERROR: Can't get message part, terminating");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_cicero_speak$$1$$2$$2$$5$$1$$tstr);
        }

        cicero_speaking = 0;
        module_report_event_stop();
        break;
      }

      buf[(signed long int)bytes] = (char)0;
      if(!(Debug == 0))
      {
        signed long int _cicero_speak$$1$$2$$2$$6$$t;
        struct timeval _cicero_speak$$1$$2$$2$$6$$tv;
        char *_cicero_speak$$1$$2$$2$$6$$tstr;
        _cicero_speak$$1$$2$$2$$6$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$16;
        return_value_ctime$16=ctime(&_cicero_speak$$1$$2$$2$$6$$t);
        _cicero_speak$$1$$2$$2$$6$$tstr=g_strdup(return_value_ctime$16);
        unsigned long int return_value_strlen$17;
        return_value_strlen$17=strlen(_cicero_speak$$1$$2$$2$$6$$tstr);
        _cicero_speak$$1$$2$$2$$6$$tstr[(signed long int)(return_value_strlen$17 - (unsigned long int)1)] = (char)0;
        gettimeofday(&_cicero_speak$$1$$2$$2$$6$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$6$$tstr, (signed int)_cicero_speak$$1$$2$$2$$6$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Text to synthesize is '%s'\n", (const void *)buf);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$6$$tstr, (signed int)_cicero_speak$$1$$2$$2$$6$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Text to synthesize is '%s'\n", (const void *)buf);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)_cicero_speak$$1$$2$$2$$6$$tstr);
      }

      if(bytes >= 1)
      {
        if(!(Debug == 0))
        {
          signed long int _cicero_speak$$1$$2$$2$$7$$1$$t;
          struct timeval tv;
          char *tstr;
          _cicero_speak$$1$$2$$2$$7$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$18;
          return_value_ctime$18=ctime(&_cicero_speak$$1$$2$$2$$7$$1$$t);
          tstr=g_strdup(return_value_ctime$18);
          unsigned long int return_value_strlen$19;
          return_value_strlen$19=strlen(tstr);
          tstr[(signed long int)(return_value_strlen$19 - (unsigned long int)1)] = (char)0;
          gettimeofday(&tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Speaking ...");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Speaking ...");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)tstr);
        }

        if(!(Debug == 0))
        {
          signed long int t;
          struct timeval _cicero_speak$$1$$2$$2$$7$$2$$tv;
          char *_cicero_speak$$1$$2$$2$$7$$2$$tstr;
          t=time((signed long int *)(void *)0);
          char *return_value_ctime$20;
          return_value_ctime$20=ctime(&t);
          _cicero_speak$$1$$2$$2$$7$$2$$tstr=g_strdup(return_value_ctime$20);
          unsigned long int return_value_strlen$21;
          return_value_strlen$21=strlen(_cicero_speak$$1$$2$$2$$7$$2$$tstr);
          _cicero_speak$$1$$2$$2$$7$$2$$tstr[(signed long int)(return_value_strlen$21 - (unsigned long int)1)] = (char)0;
          gettimeofday(&_cicero_speak$$1$$2$$2$$7$$2$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$7$$2$$tstr, (signed int)_cicero_speak$$1$$2$$2$$7$$2$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Trying to synthesize text");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$7$$2$$tstr, (signed int)_cicero_speak$$1$$2$$2$$7$$2$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Trying to synthesize text");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)_cicero_speak$$1$$2$$2$$7$$2$$tstr);
        }

        l[(signed long int)0] = (char)4;
        l[(signed long int)1] = (char)(bytes >> 8);
        l[(signed long int)2] = (char)(bytes & 0xFF);
        l[(signed long int)3] = (char)0;
        l[(signed long int)4] = (char)0;
        mywrite(fd2[(signed long int)1], (const void *)&stop_code, 1);
        mywrite(fd2[(signed long int)1], (const void *)l, 5);
        mywrite(fd2[(signed long int)1], (const void *)buf, bytes);
        cicero_position = 0;
        while((_Bool)1)
        {
          ret=poll(&ufds, (unsigned long int)1, 60);
          if(!(ret == 0))
          {
            if(!(Debug == 0))
            {
              signed long int _cicero_speak$$1$$2$$2$$7$$3$$1$$t;
              struct timeval _cicero_speak$$1$$2$$2$$7$$3$$1$$tv;
              char *_cicero_speak$$1$$2$$2$$7$$3$$1$$tstr;
              _cicero_speak$$1$$2$$2$$7$$3$$1$$t=time((signed long int *)(void *)0);
              char *return_value_ctime$22;
              return_value_ctime$22=ctime(&_cicero_speak$$1$$2$$2$$7$$3$$1$$t);
              _cicero_speak$$1$$2$$2$$7$$3$$1$$tstr=g_strdup(return_value_ctime$22);
              unsigned long int return_value_strlen$23;
              return_value_strlen$23=strlen(_cicero_speak$$1$$2$$2$$7$$3$$1$$tstr);
              _cicero_speak$$1$$2$$2$$7$$3$$1$$tstr[(signed long int)(return_value_strlen$23 - (unsigned long int)1)] = (char)0;
              gettimeofday(&_cicero_speak$$1$$2$$2$$7$$3$$1$$tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$7$$3$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$7$$3$$1$$tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "poll() system call returned %d, events=%d\n", ret, ufds.events);
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$7$$3$$1$$tstr, (signed int)_cicero_speak$$1$$2$$2$$7$$3$$1$$tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "poll() system call returned %d, events=%d\n", ret, ufds.events);
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)_cicero_speak$$1$$2$$2$$7$$3$$1$$tstr);
            }

          }

          if(!(ret >= 0))
          {
            perror("poll");
            module_report_event_stop();
            flag = 1;
            cicero_speaking = 0;
            break;
          }

          if(ret >= 1)
          {
            signed long int __result;
            do
            {
              return_value_read$26=read(fd1[(signed long int)0], (void *)b, (unsigned long int)2);
              __result = (signed long int)return_value_read$26;
              if(__result == -1l)
              {
                return_value___errno_location$24=__errno_location();
                tmp_if_expr$25 = *return_value___errno_location$24 == 4 ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$25 = (_Bool)0;
            }
            while(tmp_if_expr$25);
            __result;
          }

          if(!(cicero_stop == 0))
          {
            cicero_speaking = 0;
            module_report_event_stop();
            flag = 1;
            break;
          }

          if(!(ret == 0))
          {
            inx = (unsigned int)((signed int)b[(signed long int)0] << 8 | (signed int)b[(signed long int)1]);
            if(!(Debug == 0))
            {
              signed long int _cicero_speak$$1$$2$$2$$7$$3$$5$$t;
              struct timeval _cicero_speak$$1$$2$$2$$7$$3$$5$$tv;
              char *_cicero_speak$$1$$2$$2$$7$$3$$5$$tstr;
              _cicero_speak$$1$$2$$2$$7$$3$$5$$t=time((signed long int *)(void *)0);
              char *return_value_ctime$27;
              return_value_ctime$27=ctime(&_cicero_speak$$1$$2$$2$$7$$3$$5$$t);
              _cicero_speak$$1$$2$$2$$7$$3$$5$$tstr=g_strdup(return_value_ctime$27);
              unsigned long int return_value_strlen$28;
              return_value_strlen$28=strlen(_cicero_speak$$1$$2$$2$$7$$3$$5$$tstr);
              _cicero_speak$$1$$2$$2$$7$$3$$5$$tstr[(signed long int)(return_value_strlen$28 - (unsigned long int)1)] = (char)0;
              gettimeofday(&_cicero_speak$$1$$2$$2$$7$$3$$5$$tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", _cicero_speak$$1$$2$$2$$7$$3$$5$$tstr, (signed int)_cicero_speak$$1$$2$$2$$7$$3$$5$$tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "Tracking: index=%u, bytes=%d\n", inx, bytes);
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$2$$2$$7$$3$$5$$tstr, (signed int)_cicero_speak$$1$$2$$2$$7$$3$$5$$tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "Tracking: index=%u, bytes=%d\n", inx, bytes);
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)_cicero_speak$$1$$2$$2$$7$$3$$5$$tstr);
            }

            if(inx == (unsigned int)bytes)
            {
              cicero_speaking = 0;
              break;
            }

            else
              if(!(inx == 0u))
                cicero_position = (signed int)inx;

          }

        }
      }

      else
      {
        cicero_speaking = 0;
        break;
      }
      if(!(flag == 0))
        break;

    }
    cicero_stop = 0;
  }
  cicero_speaking = 0;
  if(!(Debug == 0))
  {
    signed long int _cicero_speak$$1$$3$$t;
    struct timeval _cicero_speak$$1$$3$$tv;
    char *_cicero_speak$$1$$3$$tstr;
    _cicero_speak$$1$$3$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$29;
    return_value_ctime$29=ctime(&_cicero_speak$$1$$3$$t);
    _cicero_speak$$1$$3$$tstr=g_strdup(return_value_ctime$29);
    unsigned long int return_value_strlen$30;
    return_value_strlen$30=strlen(_cicero_speak$$1$$3$$tstr);
    _cicero_speak$$1$$3$$tstr[(signed long int)(return_value_strlen$30 - (unsigned long int)1)] = (char)0;
    gettimeofday(&_cicero_speak$$1$$3$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", _cicero_speak$$1$$3$$tstr, (signed int)_cicero_speak$$1$$3$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "cicero: tracking thread ended.......\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", _cicero_speak$$1$$3$$tstr, (signed int)_cicero_speak$$1$$3$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "cicero: tracking thread ended.......\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)_cicero_speak$$1$$3$$tstr);
  }

  pthread_exit((void *)0);
}

// cicero_set_rate
// file cicero.c line 416
static void cicero_set_rate(signed int rate)
{
  const float spkRateTable[21l] = { (const float)0.3333, (const float)0.3720, (const float)0.4152, (const float)0.4635, (const float)0.5173, (const float)0.5774, (const float)0.6444, (const float)0.7192, (const float)0.8027, (const float)0.8960, (const float)1.0000, (const float)1.1161, (const float)1.2457, (const float)1.3904, (const float)1.5518, (const float)1.7320, (const float)1.9332, (const float)2.1577, (const float)2.4082, (const float)2.6879, (const float)3.0000 };
  float expand;
  rate = rate - 100;
  rate=abs(rate);
  rate = rate / 10;
  expand = spkRateTable[(signed long int)rate];
  unsigned char *p = (unsigned char *)&expand;
  unsigned char l[5l];
  l[(signed long int)0] = (unsigned char)3;
  l[(signed long int)1] = p[(signed long int)3];
  l[(signed long int)2] = p[(signed long int)2];
  l[(signed long int)3] = p[(signed long int)1];
  l[(signed long int)4] = p[(signed long int)0];
  mywrite(fd2[(signed long int)1], (const void *)l, 5);
}

// do_audio
// file module_utils.h line 198
char * do_audio(void)
{
  char *cur_item = (char *)(void *)0;
  char *cur_value = (char *)(void *)0;
  char *line = (char *)(void *)0;
  signed int ret;
  unsigned long int n;
  signed int err = 0;
  char *status = (char *)(void *)0;
  char *msg;
  printf("207 OK RECEIVING AUDIO SETTINGS\n");
  fflush(stdout);
  signed int return_value_strcmp$13;
  signed int return_value_strcmp$12;
  signed int return_value_strcmp$11;
  signed int return_value_strcmp$10;
  signed int return_value_strcmp$9;
  while((_Bool)1)
  {
    line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline$1;
    return_value_spd_getline$1=spd_getline(&line, &n, stdin);
    ret = (signed int)return_value_spd_getline$1;
    if(ret == -1)
    {
      err = 1;
      break;
    }

    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(line, ".\n");
    if(return_value_strcmp$2 == 0)
    {
      g_free((void *)line);
      break;
    }

    if(err == 0)
    {
      cur_item=strtok(line, "=");
      if(cur_item == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      cur_value=strtok((char *)(void *)0, "\n");
      if(cur_value == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      signed int return_value_strcmp$14;
      return_value_strcmp$14=strcmp(cur_item, "audio_output_method");
      if(return_value_strcmp$14 == 0)
      {
        g_free((void *)module_audio_pars[(signed long int)0]);
        signed int return_value_strcmp$3;
        return_value_strcmp$3=strcmp(cur_value, "NULL");
        if(return_value_strcmp$3 == 0)
          module_audio_pars[(signed long int)0] = (char *)(void *)0;

        else
          module_audio_pars[(signed long int)0]=g_strdup(cur_value);
      }

      else
      {
        return_value_strcmp$13=strcmp(cur_item, "audio_oss_device");
        if(return_value_strcmp$13 == 0)
        {
          g_free((void *)module_audio_pars[(signed long int)1]);
          signed int return_value_strcmp$4;
          return_value_strcmp$4=strcmp(cur_value, "NULL");
          if(return_value_strcmp$4 == 0)
            module_audio_pars[(signed long int)1] = (char *)(void *)0;

          else
            module_audio_pars[(signed long int)1]=g_strdup(cur_value);
        }

        else
        {
          return_value_strcmp$12=strcmp(cur_item, "audio_alsa_device");
          if(return_value_strcmp$12 == 0)
          {
            g_free((void *)module_audio_pars[(signed long int)2]);
            signed int return_value_strcmp$5;
            return_value_strcmp$5=strcmp(cur_value, "NULL");
            if(return_value_strcmp$5 == 0)
              module_audio_pars[(signed long int)2] = (char *)(void *)0;

            else
              module_audio_pars[(signed long int)2]=g_strdup(cur_value);
          }

          else
          {
            return_value_strcmp$11=strcmp(cur_item, "audio_nas_server");
            if(return_value_strcmp$11 == 0)
            {
              g_free((void *)module_audio_pars[(signed long int)3]);
              signed int return_value_strcmp$6;
              return_value_strcmp$6=strcmp(cur_value, "NULL");
              if(return_value_strcmp$6 == 0)
                module_audio_pars[(signed long int)3] = (char *)(void *)0;

              else
                module_audio_pars[(signed long int)3]=g_strdup(cur_value);
            }

            else
            {
              return_value_strcmp$10=strcmp(cur_item, "audio_pulse_server");
              if(return_value_strcmp$10 == 0)
              {
                g_free((void *)module_audio_pars[(signed long int)4]);
                signed int return_value_strcmp$7;
                return_value_strcmp$7=strcmp(cur_value, "NULL");
                if(return_value_strcmp$7 == 0)
                  module_audio_pars[(signed long int)4] = (char *)(void *)0;

                else
                  module_audio_pars[(signed long int)4]=g_strdup(cur_value);
              }

              else
              {
                return_value_strcmp$9=strcmp(cur_item, "audio_pulse_min_length");
                if(return_value_strcmp$9 == 0)
                {
                  g_free((void *)module_audio_pars[(signed long int)5]);
                  signed int return_value_strcmp$8;
                  return_value_strcmp$8=strcmp(cur_value, "NULL");
                  if(return_value_strcmp$8 == 0)
                    module_audio_pars[(signed long int)5] = (char *)(void *)0;

                  else
                    module_audio_pars[(signed long int)5]=g_strdup(cur_value);
                }

                else
                  err = 2;
              }
            }
          }
        }
      }
    }

    g_free((void *)line);
  }
  char *return_value_g_strdup$15;
  char *return_value_g_strdup$16;
  if(err == 1)
  {
    return_value_g_strdup$15=g_strdup("302 ERROR BAD SYNTAX");
    return return_value_g_strdup$15;
  }

  else
    if(err == 2)
    {
      return_value_g_strdup$16=g_strdup("303 ERROR INVALID PARAMETER OR VALUE");
      return return_value_g_strdup$16;
    }

    else
    {
      err=module_audio_init(&status);
      if(err == 0)
        msg=g_strdup_printf("203 OK AUDIO INITIALIZED");

      else
        msg=g_strdup_printf("300-%s\n300 UNKNOWN ERROR", status);
      g_free((void *)status);
      return msg;
    }
}

// do_char
// file module_utils.h line 192
char * do_char(void)
{
  char *return_value_do_message$1;
  return_value_do_message$1=do_message((enum anonymous$13)SPD_MSGTYPE_CHAR);
  return return_value_do_message$1;
}

// do_debug
// file module_utils.h line 200
char * do_debug(char *cmd_buf)
{
  char **cmd;
  char *filename;
  cmd=g_strsplit(cmd_buf, " ", -1);
  if(cmd[1l] == ((char *)NULL))
  {
    g_strfreev(cmd);
    char *return_value_g_strdup$1;
    return_value_g_strdup$1=g_strdup("302 ERROR BAD SYNTAX");
    return return_value_g_strdup$1;
  }

  signed int return_value_strcmp$20;
  return_value_strcmp$20=strcmp(cmd[(signed long int)1], "ON");
  signed int return_value_strcmp$19;
  if(return_value_strcmp$20 == 0)
  {
    if(cmd[2l] == ((char *)NULL))
    {
      g_strfreev(cmd);
      char *return_value_g_strdup$2;
      return_value_g_strdup$2=g_strdup("302 ERROR BAD SYNTAX");
      return return_value_g_strdup$2;
    }

    filename = cmd[(signed long int)2];
    if(!(Debug == 0))
    {
      signed long int do_debug$$1$$2$$2$$t;
      struct timeval do_debug$$1$$2$$2$$tv;
      char *tstr;
      do_debug$$1$$2$$2$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&do_debug$$1$$2$$2$$t);
      tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&do_debug$$1$$2$$2$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)do_debug$$1$$2$$2$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Additional logging into specific path %s requested", filename);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)do_debug$$1$$2$$2$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Additional logging into specific path %s requested", filename);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    CustomDebugFile=fopen(filename, "w+");
    if(CustomDebugFile == ((struct _IO_FILE *)NULL))
    {
      if(!(Debug == 0))
      {
        signed long int t;
        struct timeval tv;
        char *do_debug$$1$$2$$3$$1$$tstr;
        t=time((signed long int *)(void *)0);
        char *return_value_ctime$5;
        return_value_ctime$5=ctime(&t);
        do_debug$$1$$2$$3$$1$$tstr=g_strdup(return_value_ctime$5);
        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(do_debug$$1$$2$$3$$1$$tstr);
        do_debug$$1$$2$$3$$1$$tstr[(signed long int)(return_value_strlen$6 - (unsigned long int)1)] = (char)0;
        gettimeofday(&tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", do_debug$$1$$2$$3$$1$$tstr, (signed int)tv.tv_usec);
        fprintf(stderr, ": ");
        signed int *return_value___errno_location$7;
        return_value___errno_location$7=__errno_location();
        signed int *return_value___errno_location$8;
        return_value___errno_location$8=__errno_location();
        char *return_value_strerror$9;
        return_value_strerror$9=strerror(*return_value___errno_location$8);
        fprintf(stderr, "ERROR: Can't open custom debug file for logging: %d (%s)", *return_value___errno_location$7, return_value_strerror$9);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", do_debug$$1$$2$$3$$1$$tstr, (signed int)tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          signed int *return_value___errno_location$10;
          return_value___errno_location$10=__errno_location();
          signed int *return_value___errno_location$11;
          return_value___errno_location$11=__errno_location();
          char *return_value_strerror$12;
          return_value_strerror$12=strerror(*return_value___errno_location$11);
          fprintf(CustomDebugFile, "ERROR: Can't open custom debug file for logging: %d (%s)", *return_value___errno_location$10, return_value_strerror$12);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)do_debug$$1$$2$$3$$1$$tstr);
      }

      char *return_value_g_strdup$13;
      return_value_g_strdup$13=g_strdup("303 CANT OPEN CUSTOM DEBUG FILE");
      return return_value_g_strdup$13;
    }

    if(Debug == 1)
      Debug = 3;

    else
      Debug = 2;
    if(!(Debug == 0))
    {
      signed long int do_debug$$1$$2$$4$$t;
      struct timeval do_debug$$1$$2$$4$$tv;
      char *do_debug$$1$$2$$4$$tstr;
      do_debug$$1$$2$$4$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$14;
      return_value_ctime$14=ctime(&do_debug$$1$$2$$4$$t);
      do_debug$$1$$2$$4$$tstr=g_strdup(return_value_ctime$14);
      unsigned long int return_value_strlen$15;
      return_value_strlen$15=strlen(do_debug$$1$$2$$4$$tstr);
      do_debug$$1$$2$$4$$tstr[(signed long int)(return_value_strlen$15 - (unsigned long int)1)] = (char)0;
      gettimeofday(&do_debug$$1$$2$$4$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", do_debug$$1$$2$$4$$tstr, (signed int)do_debug$$1$$2$$4$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Additional logging initialized");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", do_debug$$1$$2$$4$$tstr, (signed int)do_debug$$1$$2$$4$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Additional logging initialized");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)do_debug$$1$$2$$4$$tstr);
    }

  }

  else
  {
    return_value_strcmp$19=strcmp(cmd[(signed long int)1], "OFF");
    if(return_value_strcmp$19 == 0)
    {
      if(Debug == 3)
        Debug = 1;

      else
        Debug = 0;
      if(!(CustomDebugFile == ((struct _IO_FILE *)NULL)))
        fclose(CustomDebugFile);

      CustomDebugFile = (struct _IO_FILE *)(void *)0;
      if(!(Debug == 0))
      {
        signed long int do_debug$$1$$3$$1$$t;
        struct timeval do_debug$$1$$3$$1$$tv;
        char *do_debug$$1$$3$$1$$tstr;
        do_debug$$1$$3$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$16;
        return_value_ctime$16=ctime(&do_debug$$1$$3$$1$$t);
        do_debug$$1$$3$$1$$tstr=g_strdup(return_value_ctime$16);
        unsigned long int return_value_strlen$17;
        return_value_strlen$17=strlen(do_debug$$1$$3$$1$$tstr);
        do_debug$$1$$3$$1$$tstr[(signed long int)(return_value_strlen$17 - (unsigned long int)1)] = (char)0;
        gettimeofday(&do_debug$$1$$3$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", do_debug$$1$$3$$1$$tstr, (signed int)do_debug$$1$$3$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Additional logging into specific path terminated");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", do_debug$$1$$3$$1$$tstr, (signed int)do_debug$$1$$3$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Additional logging into specific path terminated");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)do_debug$$1$$3$$1$$tstr);
      }

    }

    else
    {
      char *return_value_g_strdup$18;
      return_value_g_strdup$18=g_strdup("302 ERROR BAD SYNTAX");
      return return_value_g_strdup$18;
    }
  }
  g_strfreev(cmd);
  char *return_value_g_strdup$21;
  return_value_g_strdup$21=g_strdup("200 OK DEBUGGING ON");
  return return_value_g_strdup$21;
}

// do_key
// file module_utils.h line 193
char * do_key(void)
{
  char *return_value_do_message$1;
  return_value_do_message$1=do_message((enum anonymous$13)SPD_MSGTYPE_KEY);
  return return_value_do_message$1;
}

// do_list_voices
// file module_utils.h line 196
char * do_list_voices(void)
{
  struct anonymous$0 **voices;
  signed int i;
  char *lang;
  char *variant;
  struct _GString *voice_list;
  voices=module_list_voices();
  if(voices == ((struct anonymous$0 **)NULL))
  {
    char *return_value_g_strdup$1;
    return_value_g_strdup$1=g_strdup("304 CANT LIST VOICES");
    return return_value_g_strdup$1;
  }

  voice_list=g_string_new("");
  i = 0;
  for( ; !(voices[(signed long int)i] == ((struct anonymous$0 *)NULL)); i = i + 1)
    if(voices[(signed long int)i]->name == ((char *)NULL))
    {
      if(!(Debug == 0))
      {
        signed long int t;
        struct timeval tv;
        char *tstr;
        t=time((signed long int *)(void *)0);
        char *return_value_ctime$2;
        return_value_ctime$2=ctime(&t);
        tstr=g_strdup(return_value_ctime$2);
        unsigned long int return_value_strlen$3;
        return_value_strlen$3=strlen(tstr);
        tstr[(signed long int)(return_value_strlen$3 - (unsigned long int)1)] = (char)0;
        gettimeofday(&tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Unnamed voice found; ignoring it.");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Unnamed voice found; ignoring it.");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)tstr);
      }

    }

    else
    {
      if(voices[(signed long int)i]->language == ((char *)NULL))
        lang = "none";

      else
        lang = voices[(signed long int)i]->language;
      if(voices[(signed long int)i]->variant == ((char *)NULL))
        variant = "none";

      else
        variant = voices[(signed long int)i]->variant;
      g_string_append_printf(voice_list, "200-%s %s %s\n", voices[(signed long int)i]->name, lang, variant);
    }
  if(voice_list->len == 0ul)
  {
    g_string_free(voice_list, (signed int)!(0 != 0));
    char *return_value_g_strdup$4;
    return_value_g_strdup$4=g_strdup("304 CANT LIST VOICES");
    return return_value_g_strdup$4;
  }

  g_string_append(voice_list, "200 OK VOICE LIST SENT");
  if(!(Debug == 0))
  {
    signed long int do_list_voices$$1$$4$$t;
    struct timeval do_list_voices$$1$$4$$tv;
    char *do_list_voices$$1$$4$$tstr;
    do_list_voices$$1$$4$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$5;
    return_value_ctime$5=ctime(&do_list_voices$$1$$4$$t);
    do_list_voices$$1$$4$$tstr=g_strdup(return_value_ctime$5);
    unsigned long int return_value_strlen$6;
    return_value_strlen$6=strlen(do_list_voices$$1$$4$$tstr);
    do_list_voices$$1$$4$$tstr[(signed long int)(return_value_strlen$6 - (unsigned long int)1)] = (char)0;
    gettimeofday(&do_list_voices$$1$$4$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", do_list_voices$$1$$4$$tstr, (signed int)do_list_voices$$1$$4$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Voice prepared to  send to speechd");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", do_list_voices$$1$$4$$tstr, (signed int)do_list_voices$$1$$4$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Voice prepared to  send to speechd");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)do_list_voices$$1$$4$$tstr);
  }

  char *return_value_g_string_free$7;
  return_value_g_string_free$7=g_string_free(voice_list, 0);
  return return_value_g_string_free$7;
}

// do_loglevel
// file module_utils.h line 199
char * do_loglevel(void)
{
  char *cur_item = (char *)(void *)0;
  char *cur_value = (char *)(void *)0;
  char *line = (char *)(void *)0;
  signed int ret;
  unsigned long int n;
  signed int number;
  char *tptr;
  signed int err = 0;
  char *msg;
  printf("207 OK RECEIVING LOGLEVEL SETTINGS\n");
  fflush(stdout);
  while((_Bool)1)
  {
    line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline$1;
    return_value_spd_getline$1=spd_getline(&line, &n, stdin);
    ret = (signed int)return_value_spd_getline$1;
    if(ret == -1)
    {
      err = 1;
      break;
    }

    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(line, ".\n");
    if(return_value_strcmp$2 == 0)
    {
      g_free((void *)line);
      break;
    }

    if(err == 0)
    {
      cur_item=strtok(line, "=");
      if(cur_item == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      cur_value=strtok((char *)(void *)0, "\n");
      if(cur_value == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      signed int return_value_strcmp$4;
      return_value_strcmp$4=strcmp(cur_item, "log_level");
      if(return_value_strcmp$4 == 0)
      {
        signed long int return_value_strtol$3;
        return_value_strtol$3=strtol(cur_value, &tptr, 10);
        number = (signed int)return_value_strtol$3;
        if(tptr == cur_value)
        {
          err = 2;
          continue;
        }

        log_level = number;
        spd_audio_set_loglevel(module_audio_id, number);
      }

      else
        err = 2;
    }

    g_free((void *)line);
  }
  char *return_value_g_strdup$5;
  char *return_value_g_strdup$6;
  if(err == 1)
  {
    return_value_g_strdup$5=g_strdup("302 ERROR BAD SYNTAX");
    return return_value_g_strdup$5;
  }

  else
    if(err == 2)
    {
      return_value_g_strdup$6=g_strdup("303 ERROR INVALID PARAMETER OR VALUE");
      return return_value_g_strdup$6;
    }

    else
    {
      msg=g_strdup_printf("203 OK LOG LEVEL SET");
      return msg;
    }
}

// do_message
// file module_utils.c line 43
char * do_message(enum anonymous$13 msgtype)
{
  signed int ret;
  char *cur_line;
  struct _GString *msg;
  unsigned long int n;
  signed int nlines = 0;
  msg=g_string_new("");
  printf("202 OK RECEIVING MESSAGE\n");
  fflush(stdout);
  char *return_value_g_strdup$2;
  signed int return_value_strcmp$4;
  while((_Bool)1)
  {
    cur_line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline$1;
    return_value_spd_getline$1=spd_getline(&cur_line, &n, stdin);
    ret = (signed int)return_value_spd_getline$1;
    nlines = nlines + 1;
    if(ret == -1)
    {
      return_value_g_strdup$2=g_strdup("401 ERROR INTERNAL");
      return return_value_g_strdup$2;
    }

    signed int return_value_strcmp$5;
    return_value_strcmp$5=strcmp(cur_line, "..\n");
    if(return_value_strcmp$5 == 0)
    {
      g_free((void *)cur_line);
      cur_line=g_strdup(".\n");
    }

    else
    {
      return_value_strcmp$4=strcmp(cur_line, ".\n");
      if(return_value_strcmp$4 == 0)
      {
        unsigned long int return_value_strlen$3;
        return_value_strlen$3=strlen(msg->str);
        msg->str[(signed long int)(return_value_strlen$3 - (unsigned long int)1)] = (char)0;
        g_free((void *)cur_line);
        break;
      }

    }
    g_string_append(msg, cur_line);
    g_free((void *)cur_line);
  }
  if(nlines >= 3 && !((signed int)msgtype == SPD_MSGTYPE_TEXT))
  {
    char *return_value_g_strdup$6;
    return_value_g_strdup$6=g_strdup("305 DATA MORE THAN ONE LINE");
    return return_value_g_strdup$6;
  }

  signed int return_value_strcmp$7;
  if((signed int)msgtype == SPD_MSGTYPE_CHAR)
  {
    return_value_strcmp$7=strcmp(msg->str, "space");
    if(return_value_strcmp$7 == 0)
    {
      g_string_free(msg, 1);
      msg=g_string_new(" ");
    }

  }

  _Bool tmp_if_expr$11;
  if(msg->str == ((char *)NULL))
    tmp_if_expr$11 = (_Bool)1;

  else
    tmp_if_expr$11 = (signed int)msg->str[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$11)
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$8;
      return_value_ctime$8=ctime(&t);
      tstr=g_strdup(return_value_ctime$8);
      unsigned long int return_value_strlen$9;
      return_value_strlen$9=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$9 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "requested data NULL or empty\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "requested data NULL or empty\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    g_string_free(msg, (signed int)!(0 != 0));
    char *return_value_g_strdup$10;
    return_value_g_strdup$10=g_strdup("301 ERROR CANT SPEAK");
    return return_value_g_strdup$10;
  }

  if(msg_settings.voice.name == ((char *)NULL) && msg_settings.voice_type == msg_settings_old.voice_type && !(msg_settings_old.voice.name == ((char *)NULL)))
    msg_settings_old.voice_type = (enum anonymous$5)-1;

  signed int return_value_spd_audio_set_volume$14;
  return_value_spd_audio_set_volume$14=spd_audio_set_volume(module_audio_id, 85);
  if(!(return_value_spd_audio_set_volume$14 >= 0))
  {
    if(!(Debug == 0))
    {
      signed long int do_message$$1$$6$$1$$t;
      struct timeval do_message$$1$$6$$1$$tv;
      char *do_message$$1$$6$$1$$tstr;
      do_message$$1$$6$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$12;
      return_value_ctime$12=ctime(&do_message$$1$$6$$1$$t);
      do_message$$1$$6$$1$$tstr=g_strdup(return_value_ctime$12);
      unsigned long int return_value_strlen$13;
      return_value_strlen$13=strlen(do_message$$1$$6$$1$$tstr);
      do_message$$1$$6$$1$$tstr[(signed long int)(return_value_strlen$13 - (unsigned long int)1)] = (char)0;
      gettimeofday(&do_message$$1$$6$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", do_message$$1$$6$$1$$tstr, (signed int)do_message$$1$$6$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't set volume. audio not initialized?");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", do_message$$1$$6$$1$$tstr, (signed int)do_message$$1$$6$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't set volume. audio not initialized?");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)do_message$$1$$6$$1$$tstr);
    }

  }

  unsigned long int return_value_strlen$15;
  return_value_strlen$15=strlen(msg->str);
  ret=module_speak(msg->str, return_value_strlen$15, msgtype);
  g_string_free(msg, 1);
  char *return_value_g_strdup$16;
  if(!(ret >= 1))
  {
    return_value_g_strdup$16=g_strdup("301 ERROR CANT SPEAK");
    return return_value_g_strdup$16;
  }

  else
  {
    char *return_value_g_strdup$17;
    return_value_g_strdup$17=g_strdup("200 OK SPEAKING");
    return return_value_g_strdup$17;
  }
}

// do_pause
// file module_utils.h line 195
void do_pause(void)
{
  signed int ret;
  unsigned long int return_value_module_pause$1;
  return_value_module_pause$1=module_pause();
  ret = (signed int)return_value_module_pause$1;
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$2;
      return_value_ctime$2=ctime(&t);
      tstr=g_strdup(return_value_ctime$2);
      unsigned long int return_value_strlen$3;
      return_value_strlen$3=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$3 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "WARNING: Can't pause");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "WARNING: Can't pause");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

  }

  else
    goto __CPROVER_DUMP_L4;

__CPROVER_DUMP_L4:
  ;
}

// do_quit
// file module_utils.h line 201
void do_quit(void)
{
  printf("210 OK QUIT\n");
  fflush(stdout);
  spd_audio_close(module_audio_id);
  module_audio_id = (struct anonymous$7 *)(void *)0;
  module_close();
}

// do_set
// file module_utils.h line 197
char * do_set(void)
{
  char *cur_item = (char *)(void *)0;
  char *cur_value = (char *)(void *)0;
  char *line = (char *)(void *)0;
  signed int ret;
  unsigned long int n;
  signed int number;
  char *tptr;
  signed int err = 0;
  printf("203 OK RECEIVING SETTINGS\n");
  fflush(stdout);
  signed int return_value_strcmp$19;
  signed int return_value_strcmp$18;
  signed int return_value_strcmp$17;
  signed int return_value_strcmp$16;
  signed int return_value_strcmp$15;
  signed int return_value_strcmp$14;
  signed int return_value_strcmp$13;
  signed int return_value_strcmp$12;
  while((_Bool)1)
  {
    line = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline$1;
    return_value_spd_getline$1=spd_getline(&line, &n, stdin);
    ret = (signed int)return_value_spd_getline$1;
    if(ret == -1)
    {
      err = 1;
      break;
    }

    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp(line, ".\n");
    if(return_value_strcmp$2 == 0)
    {
      g_free((void *)line);
      break;
    }

    if(err == 0)
    {
      cur_item=strtok(line, "=");
      if(cur_item == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      cur_value=strtok((char *)(void *)0, "\n");
      if(cur_value == ((char *)NULL))
      {
        err = 1;
        continue;
      }

      signed int return_value_strcmp$20;
      return_value_strcmp$20=strcmp(cur_item, "rate");
      if(return_value_strcmp$20 == 0)
      {
        signed long int return_value_strtol$3;
        return_value_strtol$3=strtol(cur_value, &tptr, 10);
        number = (signed int)return_value_strtol$3;
        if(!(number >= -100) || number >= 101)
        {
          err = 2;
          continue;
        }

        if(tptr == cur_value)
        {
          err = 2;
          continue;
        }

        msg_settings.rate = number;
      }

      else
      {
        return_value_strcmp$19=strcmp(cur_item, "pitch");
        if(return_value_strcmp$19 == 0)
        {
          signed long int return_value_strtol$4;
          return_value_strtol$4=strtol(cur_value, &tptr, 10);
          number = (signed int)return_value_strtol$4;
          if(!(number >= -100) || number >= 101)
          {
            err = 2;
            continue;
          }

          if(tptr == cur_value)
          {
            err = 2;
            continue;
          }

          msg_settings.pitch = number;
        }

        else
        {
          return_value_strcmp$18=strcmp(cur_item, "volume");
          if(return_value_strcmp$18 == 0)
          {
            signed long int return_value_strtol$5;
            return_value_strtol$5=strtol(cur_value, &tptr, 10);
            number = (signed int)return_value_strtol$5;
            if(!(number >= -100) || number >= 101)
            {
              err = 2;
              continue;
            }

            if(tptr == cur_value)
            {
              err = 2;
              continue;
            }

            msg_settings.volume = number;
          }

          else
          {
            return_value_strcmp$17=strcmp(cur_item, "punctuation_mode");
            if(return_value_strcmp$17 == 0)
            {
              enum anonymous$6 return_value_str2EPunctMode$6;
              return_value_str2EPunctMode$6=str2EPunctMode(cur_value);
              ret = (signed int)return_value_str2EPunctMode$6;
              if(!(ret == -1))
                msg_settings.punctuation_mode = (enum anonymous$6)ret;

              else
                err = 2;
            }

            else
            {
              return_value_strcmp$16=strcmp(cur_item, "spelling_mode");
              if(return_value_strcmp$16 == 0)
              {
                enum anonymous$2 return_value_str2ESpellMode$7;
                return_value_str2ESpellMode$7=str2ESpellMode(cur_value);
                ret = (signed int)return_value_str2ESpellMode$7;
                if(!(ret == -1))
                  msg_settings.spelling_mode = (enum anonymous$2)ret;

                else
                  err = 2;
              }

              else
              {
                return_value_strcmp$15=strcmp(cur_item, "cap_let_recogn");
                if(return_value_strcmp$15 == 0)
                {
                  enum anonymous$3 return_value_str2ECapLetRecogn$8;
                  return_value_str2ECapLetRecogn$8=str2ECapLetRecogn(cur_value);
                  ret = (signed int)return_value_str2ECapLetRecogn$8;
                  if(!(ret == -1))
                    msg_settings.cap_let_recogn = (enum anonymous$3)ret;

                  else
                    err = 2;
                }

                else
                {
                  return_value_strcmp$14=strcmp(cur_item, "voice");
                  if(return_value_strcmp$14 == 0)
                  {
                    enum anonymous$5 return_value_str2EVoice$9;
                    return_value_str2EVoice$9=str2EVoice(cur_value);
                    ret = (signed int)return_value_str2EVoice$9;
                    if(!(ret == -1))
                      msg_settings.voice_type = (enum anonymous$5)ret;

                    else
                      err = 2;
                  }

                  else
                  {
                    return_value_strcmp$13=strcmp(cur_item, "synthesis_voice");
                    if(return_value_strcmp$13 == 0)
                    {
                      g_free((void *)msg_settings.voice.name);
                      signed int return_value_strcmp$10;
                      return_value_strcmp$10=strcmp(cur_value, "NULL");
                      if(return_value_strcmp$10 == 0)
                        msg_settings.voice.name = (char *)(void *)0;

                      else
                        msg_settings.voice.name=g_strdup(cur_value);
                    }

                    else
                    {
                      return_value_strcmp$12=strcmp(cur_item, "language");
                      if(return_value_strcmp$12 == 0)
                      {
                        g_free((void *)msg_settings.voice.language);
                        signed int return_value_strcmp$11;
                        return_value_strcmp$11=strcmp(cur_value, "NULL");
                        if(return_value_strcmp$11 == 0)
                          msg_settings.voice.language = (char *)(void *)0;

                        else
                          msg_settings.voice.language=g_strdup(cur_value);
                      }

                      else
                        err = 2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    g_free((void *)line);
  }
  char *return_value_g_strdup$21;
  char *return_value_g_strdup$22;
  char *return_value_g_strdup$23;
  if(err == 0)
  {
    return_value_g_strdup$21=g_strdup("203 OK SETTINGS RECEIVED");
    return return_value_g_strdup$21;
  }

  else
    if(err == 1)
    {
      return_value_g_strdup$22=g_strdup("302 ERROR BAD SYNTAX");
      return return_value_g_strdup$22;
    }

    else
      if(err == 2)
      {
        return_value_g_strdup$23=g_strdup("303 ERROR INVALID PARAMETER OR VALUE");
        return return_value_g_strdup$23;
      }

      else
      {
        char *return_value_g_strdup$24;
        return_value_g_strdup$24=g_strdup("401 ERROR INTERNAL");
        return return_value_g_strdup$24;
      }
}

// do_sound_icon
// file module_utils.h line 191
char * do_sound_icon(void)
{
  char *return_value_do_message$1;
  return_value_do_message$1=do_message((enum anonymous$13)SPD_MSGTYPE_SOUND_ICON);
  return return_value_do_message$1;
}

// do_speak
// file module_utils.h line 190
char * do_speak(void)
{
  char *return_value_do_message$1;
  return_value_do_message$1=do_message((enum anonymous$13)SPD_MSGTYPE_TEXT);
  return return_value_do_message$1;
}

// do_stop
// file module_utils.h line 194
void do_stop(void)
{
  module_stop();
}

// hasTimedOut
// file cicero.c line 95
static signed int hasTimedOut(signed int milliseconds)
{
  signed long int return_value_millisecondsSince$1;
  static struct timeval start = { .tv_sec=(signed long int)0, .tv_usec=(signed long int)0 };
  if(!(milliseconds == 0))
  {
    return_value_millisecondsSince$1=millisecondsSince(&start);
    return (signed int)(return_value_millisecondsSince$1 >= (signed long int)milliseconds);
  }

  else
  {
    gettimeofday(&start, (struct timezone *)(void *)0);
    return 1;
  }
}

// i18n_init
// file i18n.c line 32
void i18n_init(void)
{
  char *return_value_setlocale$1;
  return_value_setlocale$1=setlocale(6, "");
  if(return_value_setlocale$1 == ((char *)NULL))
  {
    perror("setlocale");
    exit(1);
  }

  char *return_value_bindtextdomain$2;
  return_value_bindtextdomain$2=bindtextdomain("speech-dispatcher", "/usr/share/locale");
  if(return_value_bindtextdomain$2 == ((char *)NULL))
  {
    perror("bindtextdomain");
    exit(1);
  }

  char *return_value_textdomain$3;
  return_value_textdomain$3=textdomain("speech-dispatcher");
  if(return_value_textdomain$3 == ((char *)NULL))
  {
    perror("textdomain");
    exit(1);
  }

}

// main
// file module_main.c line 73
signed int main(signed int argc, char **argv)
{
  char *cmd_buf;
  signed int ret;
  unsigned long int n;
  char *configfilename = (char *)(void *)0;
  char *status_info = (char *)(void *)0;
  g_thread_init((void *)0);
  lt_dlpreload_default(lt__PROGRAM__LTX_preloaded_symbols);
  module_num_dc_options = 0;
  module_audio_id = ((struct anonymous$7 *)NULL);
  if(argc >= 2)
    configfilename=g_strdup(argv[(signed long int)1]);

  ret=module_load();
  if(ret == -1)
  {
    module_close();
    exit(1);
  }

  if(!(configfilename == ((char *)NULL)))
  {
    module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "", 0, (const char * (*)(struct command_t *, void *))(void *)0, (void *)0, (unsigned long int)0);
    configfile=dotconf_create(configfilename, module_dc_options, NULL, (unsigned long int)(1 << 0));
    if(!(configfile == ((struct configfile_t *)NULL)))
    {
      signed int return_value_dotconf_command_loop$3;
      return_value_dotconf_command_loop$3=dotconf_command_loop(configfile);
      if(return_value_dotconf_command_loop$3 == 0)
      {
        if(!(Debug == 0))
        {
          signed long int main$$1$$3$$1$$1$$1$$t;
          struct timeval main$$1$$3$$1$$1$$1$$tv;
          char *main$$1$$3$$1$$1$$1$$tstr;
          main$$1$$3$$1$$1$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$1;
          return_value_ctime$1=ctime(&main$$1$$3$$1$$1$$1$$t);
          main$$1$$3$$1$$1$$1$$tstr=g_strdup(return_value_ctime$1);
          unsigned long int return_value_strlen$2;
          return_value_strlen$2=strlen(main$$1$$3$$1$$1$$1$$tstr);
          main$$1$$3$$1$$1$$1$$tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
          gettimeofday(&main$$1$$3$$1$$1$$1$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", main$$1$$3$$1$$1$$1$$tstr, (signed int)main$$1$$3$$1$$1$$1$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Error reading config file\n");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", main$$1$$3$$1$$1$$1$$tstr, (signed int)main$$1$$3$$1$$1$$1$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Error reading config file\n");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)main$$1$$3$$1$$1$$1$$tstr);
        }

        module_close();
        exit(1);
      }

      dotconf_cleanup(configfile);
      if(!(Debug == 0))
      {
        signed long int main$$1$$3$$1$$2$$t;
        struct timeval main$$1$$3$$1$$2$$tv;
        char *main$$1$$3$$1$$2$$tstr;
        main$$1$$3$$1$$2$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$4;
        return_value_ctime$4=ctime(&main$$1$$3$$1$$2$$t);
        main$$1$$3$$1$$2$$tstr=g_strdup(return_value_ctime$4);
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen(main$$1$$3$$1$$2$$tstr);
        main$$1$$3$$1$$2$$tstr[(signed long int)(return_value_strlen$5 - (unsigned long int)1)] = (char)0;
        gettimeofday(&main$$1$$3$$1$$2$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", main$$1$$3$$1$$2$$tstr, (signed int)main$$1$$3$$1$$2$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Configuration (pre) has been read from \"%s\"\n", configfilename);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", main$$1$$3$$1$$2$$tstr, (signed int)main$$1$$3$$1$$2$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Configuration (pre) has been read from \"%s\"\n", configfilename);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)main$$1$$3$$1$$2$$tstr);
      }

      g_free((void *)configfilename);
    }

    else
      if(!(Debug == 0))
      {
        signed long int main$$1$$3$$2$$1$$t;
        struct timeval main$$1$$3$$2$$1$$tv;
        char *main$$1$$3$$2$$1$$tstr;
        main$$1$$3$$2$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$6;
        return_value_ctime$6=ctime(&main$$1$$3$$2$$1$$t);
        main$$1$$3$$2$$1$$tstr=g_strdup(return_value_ctime$6);
        unsigned long int return_value_strlen$7;
        return_value_strlen$7=strlen(main$$1$$3$$2$$1$$tstr);
        main$$1$$3$$2$$1$$tstr[(signed long int)(return_value_strlen$7 - (unsigned long int)1)] = (char)0;
        gettimeofday(&main$$1$$3$$2$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", main$$1$$3$$2$$1$$tstr, (signed int)main$$1$$3$$2$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Can't read specified config file!\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", main$$1$$3$$2$$1$$tstr, (signed int)main$$1$$3$$2$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Can't read specified config file!\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)main$$1$$3$$2$$1$$tstr);
      }

  }

  else
    if(!(Debug == 0))
    {
      signed long int main$$1$$4$$1$$t;
      struct timeval main$$1$$4$$1$$tv;
      char *main$$1$$4$$1$$tstr;
      main$$1$$4$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$8;
      return_value_ctime$8=ctime(&main$$1$$4$$1$$t);
      main$$1$$4$$1$$tstr=g_strdup(return_value_ctime$8);
      unsigned long int return_value_strlen$9;
      return_value_strlen$9=strlen(main$$1$$4$$1$$tstr);
      main$$1$$4$$1$$tstr[(signed long int)(return_value_strlen$9 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main$$1$$4$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main$$1$$4$$1$$tstr, (signed int)main$$1$$4$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "No config file specified, using defaults...\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main$$1$$4$$1$$tstr, (signed int)main$$1$$4$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "No config file specified, using defaults...\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main$$1$$4$$1$$tstr);
    }

  cmd_buf = (char *)(void *)0;
  n = (unsigned long int)0;
  signed long int return_value_spd_getline$10;
  return_value_spd_getline$10=spd_getline(&cmd_buf, &n, stdin);
  ret = (signed int)return_value_spd_getline$10;
  if(ret == -1)
  {
    if(!(Debug == 0))
    {
      signed long int main$$1$$5$$1$$t;
      struct timeval main$$1$$5$$1$$tv;
      char *main$$1$$5$$1$$tstr;
      main$$1$$5$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$11;
      return_value_ctime$11=ctime(&main$$1$$5$$1$$t);
      main$$1$$5$$1$$tstr=g_strdup(return_value_ctime$11);
      unsigned long int return_value_strlen$12;
      return_value_strlen$12=strlen(main$$1$$5$$1$$tstr);
      main$$1$$5$$1$$tstr[(signed long int)(return_value_strlen$12 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main$$1$$5$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main$$1$$5$$1$$tstr, (signed int)main$$1$$5$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Broken pipe when reading INIT, exiting... \n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main$$1$$5$$1$$tstr, (signed int)main$$1$$5$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Broken pipe when reading INIT, exiting... \n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main$$1$$5$$1$$tstr);
    }

    module_close();
    exit(2);
  }

  signed int return_value_strcmp$15;
  return_value_strcmp$15=strcmp(cmd_buf, "INIT\n");
  if(!(return_value_strcmp$15 == 0))
  {
    if(!(Debug == 0))
    {
      signed long int main$$1$$6$$1$$t;
      struct timeval main$$1$$6$$1$$tv;
      char *main$$1$$6$$1$$tstr;
      main$$1$$6$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$13;
      return_value_ctime$13=ctime(&main$$1$$6$$1$$t);
      main$$1$$6$$1$$tstr=g_strdup(return_value_ctime$13);
      unsigned long int return_value_strlen$14;
      return_value_strlen$14=strlen(main$$1$$6$$1$$tstr);
      main$$1$$6$$1$$tstr[(signed long int)(return_value_strlen$14 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main$$1$$6$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main$$1$$6$$1$$tstr, (signed int)main$$1$$6$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "ERROR: Wrong communication from module client: didn't call INIT\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main$$1$$6$$1$$tstr, (signed int)main$$1$$6$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "ERROR: Wrong communication from module client: didn't call INIT\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main$$1$$6$$1$$tstr);
    }

    module_close();
    exit(3);
  }

  ret=module_init(&status_info);
  if(status_info == ((char *)NULL))
    status_info=g_strdup("unknown, was not set by module");

  if(!(ret == 0))
  {
    printf("399-%s\n", status_info);
    printf("%s\n", (const void *)"399 ERR CANT INIT MODULE");
    g_free((void *)status_info);
    module_close();
    exit(1);
  }

  printf("299-%s\n", status_info);
  ret = printf("%s\n", (const void *)"299 OK LOADED SUCCESSFULLY");
  if(!(ret >= 0))
  {
    if(!(Debug == 0))
    {
      signed long int main$$1$$9$$1$$t;
      struct timeval main$$1$$9$$1$$tv;
      char *main$$1$$9$$1$$tstr;
      main$$1$$9$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$16;
      return_value_ctime$16=ctime(&main$$1$$9$$1$$t);
      main$$1$$9$$1$$tstr=g_strdup(return_value_ctime$16);
      unsigned long int return_value_strlen$17;
      return_value_strlen$17=strlen(main$$1$$9$$1$$tstr);
      main$$1$$9$$1$$tstr[(signed long int)(return_value_strlen$17 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main$$1$$9$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main$$1$$9$$1$$tstr, (signed int)main$$1$$9$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Broken pipe, exiting...\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main$$1$$9$$1$$tstr, (signed int)main$$1$$9$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main$$1$$9$$1$$tstr);
    }

    module_close();
    exit(2);
  }

  fflush(stdout);
  g_free((void *)status_info);
  g_free((void *)cmd_buf);
  signed int return_value_strcmp$70;
  signed int return_value_strcmp$69;
  signed int return_value_strcmp$68;
  signed int return_value_strcmp$67;
  signed int return_value_strcmp$66;
  signed int return_value_strcmp$65;
  signed int return_value_strcmp$64;
  signed int return_value_strcmp$63;
  signed int return_value_strcmp$62;
  unsigned long int return_value_strlen$60;
  signed int return_value_strncmp$61;
  signed int return_value_strcmp$59;
  while((_Bool)1)
  {
    cmd_buf = (char *)(void *)0;
    n = (unsigned long int)0;
    signed long int return_value_spd_getline$18;
    return_value_spd_getline$18=spd_getline(&cmd_buf, &n, stdin);
    ret = (signed int)return_value_spd_getline$18;
    if(ret == -1)
    {
      if(!(Debug == 0))
      {
        signed long int main$$1$$10$$1$$1$$t;
        struct timeval main$$1$$10$$1$$1$$tv;
        char *main$$1$$10$$1$$1$$tstr;
        main$$1$$10$$1$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$19;
        return_value_ctime$19=ctime(&main$$1$$10$$1$$1$$t);
        main$$1$$10$$1$$1$$tstr=g_strdup(return_value_ctime$19);
        unsigned long int return_value_strlen$20;
        return_value_strlen$20=strlen(main$$1$$10$$1$$1$$tstr);
        main$$1$$10$$1$$1$$tstr[(signed long int)(return_value_strlen$20 - (unsigned long int)1)] = (char)0;
        gettimeofday(&main$$1$$10$$1$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", main$$1$$10$$1$$1$$tstr, (signed int)main$$1$$10$$1$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Broken pipe, exiting... \n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$1$$1$$tstr, (signed int)main$$1$$10$$1$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Broken pipe, exiting... \n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)main$$1$$10$$1$$1$$tstr);
      }

      ret = 2;
      break;
    }

    if(!(Debug == 0))
    {
      signed long int main$$1$$10$$2$$t;
      struct timeval main$$1$$10$$2$$tv;
      char *main$$1$$10$$2$$tstr;
      main$$1$$10$$2$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$21;
      return_value_ctime$21=ctime(&main$$1$$10$$2$$t);
      main$$1$$10$$2$$tstr=g_strdup(return_value_ctime$21);
      unsigned long int return_value_strlen$22;
      return_value_strlen$22=strlen(main$$1$$10$$2$$tstr);
      main$$1$$10$$2$$tstr[(signed long int)(return_value_strlen$22 - (unsigned long int)1)] = (char)0;
      gettimeofday(&main$$1$$10$$2$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", main$$1$$10$$2$$tstr, (signed int)main$$1$$10$$2$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "CMD: <%s>", cmd_buf);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$2$$tstr, (signed int)main$$1$$10$$2$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "CMD: <%s>", cmd_buf);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)main$$1$$10$$2$$tstr);
    }

    signed int return_value_strcmp$71;
    return_value_strcmp$71=strcmp(cmd_buf, "SPEAK\n");
    if(return_value_strcmp$71 == 0)
    {
      char *main$$1$$10$$3$$msg;
      pthread_mutex_lock(&module_stdout_mutex);
      char *return_value_do_speak$25;
      return_value_do_speak$25=do_speak();
      main$$1$$10$$3$$msg = (char *)return_value_do_speak$25;
      signed int return_value_printf$26 = printf("%s\n", main$$1$$10$$3$$msg);
      if(!(return_value_printf$26 >= 0))
      {
        if(!(Debug == 0))
        {
          signed long int main$$1$$10$$3$$1$$1$$t;
          struct timeval main$$1$$10$$3$$1$$1$$tv;
          char *main$$1$$10$$3$$1$$1$$tstr;
          main$$1$$10$$3$$1$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$23;
          return_value_ctime$23=ctime(&main$$1$$10$$3$$1$$1$$t);
          main$$1$$10$$3$$1$$1$$tstr=g_strdup(return_value_ctime$23);
          unsigned long int return_value_strlen$24;
          return_value_strlen$24=strlen(main$$1$$10$$3$$1$$1$$tstr);
          main$$1$$10$$3$$1$$1$$tstr[(signed long int)(return_value_strlen$24 - (unsigned long int)1)] = (char)0;
          gettimeofday(&main$$1$$10$$3$$1$$1$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", main$$1$$10$$3$$1$$1$$tstr, (signed int)main$$1$$10$$3$$1$$1$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Broken pipe, exiting...\n");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$3$$1$$1$$tstr, (signed int)main$$1$$10$$3$$1$$1$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)main$$1$$10$$3$$1$$1$$tstr);
        }

        ret = 2;
        break;
      }

      fflush(stdout);
      pthread_mutex_unlock(&module_stdout_mutex);
      g_free((void *)main$$1$$10$$3$$msg);
    }

    else
    {
      return_value_strcmp$70=strcmp(cmd_buf, "SOUND_ICON\n");
      if(return_value_strcmp$70 == 0)
      {
        char *main$$1$$10$$4$$msg;
        pthread_mutex_lock(&module_stdout_mutex);
        char *return_value_do_sound_icon$29;
        return_value_do_sound_icon$29=do_sound_icon();
        main$$1$$10$$4$$msg = (char *)return_value_do_sound_icon$29;
        signed int return_value_printf$30 = printf("%s\n", main$$1$$10$$4$$msg);
        if(!(return_value_printf$30 >= 0))
        {
          if(!(Debug == 0))
          {
            signed long int main$$1$$10$$4$$1$$1$$t;
            struct timeval main$$1$$10$$4$$1$$1$$tv;
            char *main$$1$$10$$4$$1$$1$$tstr;
            main$$1$$10$$4$$1$$1$$t=time((signed long int *)(void *)0);
            char *return_value_ctime$27;
            return_value_ctime$27=ctime(&main$$1$$10$$4$$1$$1$$t);
            main$$1$$10$$4$$1$$1$$tstr=g_strdup(return_value_ctime$27);
            unsigned long int return_value_strlen$28;
            return_value_strlen$28=strlen(main$$1$$10$$4$$1$$1$$tstr);
            main$$1$$10$$4$$1$$1$$tstr[(signed long int)(return_value_strlen$28 - (unsigned long int)1)] = (char)0;
            gettimeofday(&main$$1$$10$$4$$1$$1$$tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", main$$1$$10$$4$$1$$1$$tstr, (signed int)main$$1$$10$$4$$1$$1$$tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "Broken pipe, exiting...\n");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$4$$1$$1$$tstr, (signed int)main$$1$$10$$4$$1$$1$$tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)main$$1$$10$$4$$1$$1$$tstr);
          }

          ret = 2;
          break;
        }

        fflush(stdout);
        pthread_mutex_unlock(&module_stdout_mutex);
        g_free((void *)main$$1$$10$$4$$msg);
      }

      else
      {
        return_value_strcmp$69=strcmp(cmd_buf, "CHAR\n");
        if(return_value_strcmp$69 == 0)
        {
          char *main$$1$$10$$5$$msg;
          pthread_mutex_lock(&module_stdout_mutex);
          char *return_value_do_char$33;
          return_value_do_char$33=do_char();
          main$$1$$10$$5$$msg = (char *)return_value_do_char$33;
          signed int return_value_printf$34 = printf("%s\n", main$$1$$10$$5$$msg);
          if(!(return_value_printf$34 >= 0))
          {
            if(!(Debug == 0))
            {
              signed long int main$$1$$10$$5$$1$$1$$t;
              struct timeval main$$1$$10$$5$$1$$1$$tv;
              char *main$$1$$10$$5$$1$$1$$tstr;
              main$$1$$10$$5$$1$$1$$t=time((signed long int *)(void *)0);
              char *return_value_ctime$31;
              return_value_ctime$31=ctime(&main$$1$$10$$5$$1$$1$$t);
              main$$1$$10$$5$$1$$1$$tstr=g_strdup(return_value_ctime$31);
              unsigned long int return_value_strlen$32;
              return_value_strlen$32=strlen(main$$1$$10$$5$$1$$1$$tstr);
              main$$1$$10$$5$$1$$1$$tstr[(signed long int)(return_value_strlen$32 - (unsigned long int)1)] = (char)0;
              gettimeofday(&main$$1$$10$$5$$1$$1$$tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", main$$1$$10$$5$$1$$1$$tstr, (signed int)main$$1$$10$$5$$1$$1$$tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "Broken pipe, exiting...\n");
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$5$$1$$1$$tstr, (signed int)main$$1$$10$$5$$1$$1$$tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)main$$1$$10$$5$$1$$1$$tstr);
            }

            ret = 2;
            break;
          }

          fflush(stdout);
          pthread_mutex_unlock(&module_stdout_mutex);
          g_free((void *)main$$1$$10$$5$$msg);
        }

        else
        {
          return_value_strcmp$68=strcmp(cmd_buf, "KEY\n");
          if(return_value_strcmp$68 == 0)
          {
            char *main$$1$$10$$6$$msg;
            pthread_mutex_lock(&module_stdout_mutex);
            char *return_value_do_key$37;
            return_value_do_key$37=do_key();
            main$$1$$10$$6$$msg = (char *)return_value_do_key$37;
            signed int return_value_printf$38 = printf("%s\n", main$$1$$10$$6$$msg);
            if(!(return_value_printf$38 >= 0))
            {
              if(!(Debug == 0))
              {
                signed long int main$$1$$10$$6$$1$$1$$t;
                struct timeval main$$1$$10$$6$$1$$1$$tv;
                char *main$$1$$10$$6$$1$$1$$tstr;
                main$$1$$10$$6$$1$$1$$t=time((signed long int *)(void *)0);
                char *return_value_ctime$35;
                return_value_ctime$35=ctime(&main$$1$$10$$6$$1$$1$$t);
                main$$1$$10$$6$$1$$1$$tstr=g_strdup(return_value_ctime$35);
                unsigned long int return_value_strlen$36;
                return_value_strlen$36=strlen(main$$1$$10$$6$$1$$1$$tstr);
                main$$1$$10$$6$$1$$1$$tstr[(signed long int)(return_value_strlen$36 - (unsigned long int)1)] = (char)0;
                gettimeofday(&main$$1$$10$$6$$1$$1$$tv, (struct timezone *)(void *)0);
                fprintf(stderr, " %s [%d]", main$$1$$10$$6$$1$$1$$tstr, (signed int)main$$1$$10$$6$$1$$1$$tv.tv_usec);
                fprintf(stderr, ": ");
                fprintf(stderr, "Broken pipe, exiting...\n");
                fprintf(stderr, "\n");
                fflush(stderr);
                if(Debug == 2 || Debug == 3)
                {
                  fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$6$$1$$1$$tstr, (signed int)main$$1$$10$$6$$1$$1$$tv.tv_usec);
                  fprintf(CustomDebugFile, ": ");
                  fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                  fprintf(CustomDebugFile, "\n");
                  fflush(CustomDebugFile);
                }

                g_free((void *)main$$1$$10$$6$$1$$1$$tstr);
              }

              ret = 2;
              break;
            }

            fflush(stdout);
            pthread_mutex_unlock(&module_stdout_mutex);
            g_free((void *)main$$1$$10$$6$$msg);
          }

          else
          {
            return_value_strcmp$67=strcmp(cmd_buf, "STOP\n");
            if(return_value_strcmp$67 == 0)
              do_stop();

            else
            {
              return_value_strcmp$66=strcmp(cmd_buf, "PAUSE\n");
              if(return_value_strcmp$66 == 0)
                do_pause();

              else
              {
                return_value_strcmp$65=strcmp(cmd_buf, "LIST VOICES\n");
                if(return_value_strcmp$65 == 0)
                {
                  char *main$$1$$10$$9$$msg;
                  pthread_mutex_lock(&module_stdout_mutex);
                  char *return_value_do_list_voices$41;
                  return_value_do_list_voices$41=do_list_voices();
                  main$$1$$10$$9$$msg = (char *)return_value_do_list_voices$41;
                  signed int return_value_printf$42 = printf("%s\n", main$$1$$10$$9$$msg);
                  if(!(return_value_printf$42 >= 0))
                  {
                    if(!(Debug == 0))
                    {
                      signed long int main$$1$$10$$9$$1$$1$$t;
                      struct timeval main$$1$$10$$9$$1$$1$$tv;
                      char *main$$1$$10$$9$$1$$1$$tstr;
                      main$$1$$10$$9$$1$$1$$t=time((signed long int *)(void *)0);
                      char *return_value_ctime$39;
                      return_value_ctime$39=ctime(&main$$1$$10$$9$$1$$1$$t);
                      main$$1$$10$$9$$1$$1$$tstr=g_strdup(return_value_ctime$39);
                      unsigned long int return_value_strlen$40;
                      return_value_strlen$40=strlen(main$$1$$10$$9$$1$$1$$tstr);
                      main$$1$$10$$9$$1$$1$$tstr[(signed long int)(return_value_strlen$40 - (unsigned long int)1)] = (char)0;
                      gettimeofday(&main$$1$$10$$9$$1$$1$$tv, (struct timezone *)(void *)0);
                      fprintf(stderr, " %s [%d]", main$$1$$10$$9$$1$$1$$tstr, (signed int)main$$1$$10$$9$$1$$1$$tv.tv_usec);
                      fprintf(stderr, ": ");
                      fprintf(stderr, "Broken pipe, exiting...\n");
                      fprintf(stderr, "\n");
                      fflush(stderr);
                      if(Debug == 2 || Debug == 3)
                      {
                        fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$9$$1$$1$$tstr, (signed int)main$$1$$10$$9$$1$$1$$tv.tv_usec);
                        fprintf(CustomDebugFile, ": ");
                        fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                        fprintf(CustomDebugFile, "\n");
                        fflush(CustomDebugFile);
                      }

                      g_free((void *)main$$1$$10$$9$$1$$1$$tstr);
                    }

                    ret = 2;
                    break;
                  }

                  fflush(stdout);
                  pthread_mutex_unlock(&module_stdout_mutex);
                  g_free((void *)main$$1$$10$$9$$msg);
                }

                else
                {
                  return_value_strcmp$64=strcmp(cmd_buf, "SET\n");
                  if(return_value_strcmp$64 == 0)
                  {
                    char *main$$1$$10$$10$$msg;
                    pthread_mutex_lock(&module_stdout_mutex);
                    char *return_value_do_set$45;
                    return_value_do_set$45=do_set();
                    main$$1$$10$$10$$msg = (char *)return_value_do_set$45;
                    signed int return_value_printf$46 = printf("%s\n", main$$1$$10$$10$$msg);
                    if(!(return_value_printf$46 >= 0))
                    {
                      if(!(Debug == 0))
                      {
                        signed long int main$$1$$10$$10$$1$$1$$t;
                        struct timeval main$$1$$10$$10$$1$$1$$tv;
                        char *tstr;
                        main$$1$$10$$10$$1$$1$$t=time((signed long int *)(void *)0);
                        char *return_value_ctime$43;
                        return_value_ctime$43=ctime(&main$$1$$10$$10$$1$$1$$t);
                        tstr=g_strdup(return_value_ctime$43);
                        unsigned long int return_value_strlen$44;
                        return_value_strlen$44=strlen(tstr);
                        tstr[(signed long int)(return_value_strlen$44 - (unsigned long int)1)] = (char)0;
                        gettimeofday(&main$$1$$10$$10$$1$$1$$tv, (struct timezone *)(void *)0);
                        fprintf(stderr, " %s [%d]", tstr, (signed int)main$$1$$10$$10$$1$$1$$tv.tv_usec);
                        fprintf(stderr, ": ");
                        fprintf(stderr, "Broken pipe, exiting...\n");
                        fprintf(stderr, "\n");
                        fflush(stderr);
                        if(Debug == 2 || Debug == 3)
                        {
                          fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)main$$1$$10$$10$$1$$1$$tv.tv_usec);
                          fprintf(CustomDebugFile, ": ");
                          fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                          fprintf(CustomDebugFile, "\n");
                          fflush(CustomDebugFile);
                        }

                        g_free((void *)tstr);
                      }

                      ret = 2;
                      break;
                    }

                    fflush(stdout);
                    pthread_mutex_unlock(&module_stdout_mutex);
                    g_free((void *)main$$1$$10$$10$$msg);
                  }

                  else
                  {
                    return_value_strcmp$63=strcmp(cmd_buf, "AUDIO\n");
                    if(return_value_strcmp$63 == 0)
                    {
                      char *msg;
                      pthread_mutex_lock(&module_stdout_mutex);
                      char *return_value_do_audio$49;
                      return_value_do_audio$49=do_audio();
                      msg = (char *)return_value_do_audio$49;
                      signed int return_value_printf$50 = printf("%s\n", msg);
                      if(!(return_value_printf$50 >= 0))
                      {
                        if(!(Debug == 0))
                        {
                          signed long int t;
                          struct timeval tv;
                          char *main$$1$$10$$11$$1$$1$$tstr;
                          t=time((signed long int *)(void *)0);
                          char *return_value_ctime$47;
                          return_value_ctime$47=ctime(&t);
                          main$$1$$10$$11$$1$$1$$tstr=g_strdup(return_value_ctime$47);
                          unsigned long int return_value_strlen$48;
                          return_value_strlen$48=strlen(main$$1$$10$$11$$1$$1$$tstr);
                          main$$1$$10$$11$$1$$1$$tstr[(signed long int)(return_value_strlen$48 - (unsigned long int)1)] = (char)0;
                          gettimeofday(&tv, (struct timezone *)(void *)0);
                          fprintf(stderr, " %s [%d]", main$$1$$10$$11$$1$$1$$tstr, (signed int)tv.tv_usec);
                          fprintf(stderr, ": ");
                          fprintf(stderr, "Broken pipe, exiting...\n");
                          fprintf(stderr, "\n");
                          fflush(stderr);
                          if(Debug == 2 || Debug == 3)
                          {
                            fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$11$$1$$1$$tstr, (signed int)tv.tv_usec);
                            fprintf(CustomDebugFile, ": ");
                            fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                            fprintf(CustomDebugFile, "\n");
                            fflush(CustomDebugFile);
                          }

                          g_free((void *)main$$1$$10$$11$$1$$1$$tstr);
                        }

                        ret = 2;
                        break;
                      }

                      fflush(stdout);
                      pthread_mutex_unlock(&module_stdout_mutex);
                      g_free((void *)msg);
                    }

                    else
                    {
                      return_value_strcmp$62=strcmp(cmd_buf, "LOGLEVEL\n");
                      if(return_value_strcmp$62 == 0)
                      {
                        char *main$$1$$10$$12$$msg;
                        pthread_mutex_lock(&module_stdout_mutex);
                        char *return_value_do_loglevel$53;
                        return_value_do_loglevel$53=do_loglevel();
                        main$$1$$10$$12$$msg = (char *)return_value_do_loglevel$53;
                        signed int return_value_printf$54 = printf("%s\n", main$$1$$10$$12$$msg);
                        if(!(return_value_printf$54 >= 0))
                        {
                          if(!(Debug == 0))
                          {
                            signed long int main$$1$$10$$12$$1$$1$$t;
                            struct timeval main$$1$$10$$12$$1$$1$$tv;
                            char *main$$1$$10$$12$$1$$1$$tstr;
                            main$$1$$10$$12$$1$$1$$t=time((signed long int *)(void *)0);
                            char *return_value_ctime$51;
                            return_value_ctime$51=ctime(&main$$1$$10$$12$$1$$1$$t);
                            main$$1$$10$$12$$1$$1$$tstr=g_strdup(return_value_ctime$51);
                            unsigned long int return_value_strlen$52;
                            return_value_strlen$52=strlen(main$$1$$10$$12$$1$$1$$tstr);
                            main$$1$$10$$12$$1$$1$$tstr[(signed long int)(return_value_strlen$52 - (unsigned long int)1)] = (char)0;
                            gettimeofday(&main$$1$$10$$12$$1$$1$$tv, (struct timezone *)(void *)0);
                            fprintf(stderr, " %s [%d]", main$$1$$10$$12$$1$$1$$tstr, (signed int)main$$1$$10$$12$$1$$1$$tv.tv_usec);
                            fprintf(stderr, ": ");
                            fprintf(stderr, "Broken pipe, exiting...\n");
                            fprintf(stderr, "\n");
                            fflush(stderr);
                            if(Debug == 2 || Debug == 3)
                            {
                              fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$12$$1$$1$$tstr, (signed int)main$$1$$10$$12$$1$$1$$tv.tv_usec);
                              fprintf(CustomDebugFile, ": ");
                              fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                              fprintf(CustomDebugFile, "\n");
                              fflush(CustomDebugFile);
                            }

                            g_free((void *)main$$1$$10$$12$$1$$1$$tstr);
                          }

                          ret = 2;
                          break;
                        }

                        fflush(stdout);
                        pthread_mutex_unlock(&module_stdout_mutex);
                        g_free((void *)main$$1$$10$$12$$msg);
                      }

                      else
                      {
                        return_value_strlen$60=strlen("DEBUG");
                        return_value_strncmp$61=strncmp(cmd_buf, "DEBUG", return_value_strlen$60);
                        if(return_value_strncmp$61 == 0)
                        {
                          char *main$$1$$10$$13$$msg;
                          pthread_mutex_lock(&module_stdout_mutex);
                          char *return_value_do_debug$57;
                          return_value_do_debug$57=do_debug(cmd_buf);
                          main$$1$$10$$13$$msg = (char *)return_value_do_debug$57;
                          signed int return_value_printf$58 = printf("%s\n", main$$1$$10$$13$$msg);
                          if(!(return_value_printf$58 >= 0))
                          {
                            if(!(Debug == 0))
                            {
                              signed long int main$$1$$10$$13$$1$$1$$t;
                              struct timeval main$$1$$10$$13$$1$$1$$tv;
                              char *main$$1$$10$$13$$1$$1$$tstr;
                              main$$1$$10$$13$$1$$1$$t=time((signed long int *)(void *)0);
                              char *return_value_ctime$55;
                              return_value_ctime$55=ctime(&main$$1$$10$$13$$1$$1$$t);
                              main$$1$$10$$13$$1$$1$$tstr=g_strdup(return_value_ctime$55);
                              unsigned long int return_value_strlen$56;
                              return_value_strlen$56=strlen(main$$1$$10$$13$$1$$1$$tstr);
                              main$$1$$10$$13$$1$$1$$tstr[(signed long int)(return_value_strlen$56 - (unsigned long int)1)] = (char)0;
                              gettimeofday(&main$$1$$10$$13$$1$$1$$tv, (struct timezone *)(void *)0);
                              fprintf(stderr, " %s [%d]", main$$1$$10$$13$$1$$1$$tstr, (signed int)main$$1$$10$$13$$1$$1$$tv.tv_usec);
                              fprintf(stderr, ": ");
                              fprintf(stderr, "Broken pipe, exiting...\n");
                              fprintf(stderr, "\n");
                              fflush(stderr);
                              if(Debug == 2 || Debug == 3)
                              {
                                fprintf(CustomDebugFile, " %s [%d]", main$$1$$10$$13$$1$$1$$tstr, (signed int)main$$1$$10$$13$$1$$1$$tv.tv_usec);
                                fprintf(CustomDebugFile, ": ");
                                fprintf(CustomDebugFile, "Broken pipe, exiting...\n");
                                fprintf(CustomDebugFile, "\n");
                                fflush(CustomDebugFile);
                              }

                              g_free((void *)main$$1$$10$$13$$1$$1$$tstr);
                            }

                            ret = 2;
                            break;
                          }

                          fflush(stdout);
                          pthread_mutex_unlock(&module_stdout_mutex);
                          g_free((void *)main$$1$$10$$13$$msg);
                        }

                        else
                        {
                          return_value_strcmp$59=strcmp(cmd_buf, "QUIT\n");
                          if(return_value_strcmp$59 == 0)
                          {
                            do_quit();
                            exit(0);
                          }

                          else
                          {
                            printf("300 ERR UNKNOWN COMMAND\n");
                            fflush(stdout);
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
    }
    g_free((void *)cmd_buf);
  }
  module_close();
  exit(ret);
}

// millisecondsBetween
// file cicero.c line 81
static signed long int millisecondsBetween(struct timeval *from, struct timeval *to)
{
  return (to->tv_sec - from->tv_sec) * (signed long int)1000 + (to->tv_usec - from->tv_usec) / (signed long int)1000;
}

// millisecondsSince
// file cicero.c line 88
signed long int millisecondsSince(struct timeval *from)
{
  struct timeval now;
  gettimeofday(&now, (struct timezone *)(void *)0);
  signed long int return_value_millisecondsBetween$1;
  return_value_millisecondsBetween$1=millisecondsBetween(from, &now);
  return return_value_millisecondsBetween$1;
}

// module_add_config_option
// file module_utils.h line 214
struct configoption_t * module_add_config_option(struct configoption_t *options, signed int *num_options, char *name, signed int type, const char * (*callback)(struct command_t *, void *), void *info, unsigned long int context)
{
  struct configoption_t *opts;
  signed int num_config_options = *num_options;
  /* assertion name != ((void *)0) */
  assert(name != (char *)(void *)0);
  num_config_options = num_config_options + 1;
  void *return_value_g_realloc$1;
  return_value_g_realloc$1=g_realloc((void *)options, (unsigned long int)(num_config_options + 1) * sizeof(struct configoption_t) /*40ul*/ );
  opts = (struct configoption_t *)return_value_g_realloc$1;
  char *return_value_g_strdup$2;
  return_value_g_strdup$2=g_strdup(name);
  (opts + (signed long int)(num_config_options - 1))->name = (char *)return_value_g_strdup$2;
  (opts + (signed long int)(num_config_options - 1))->type = type;
  (opts + (signed long int)(num_config_options - 1))->callback = callback;
  (opts + (signed long int)(num_config_options - 1))->info = info;
  (opts + (signed long int)(num_config_options - 1))->context = context;
  *num_options = num_config_options;
  return opts;
}

// module_audio_init
// file module_utils.c line 947
signed int module_audio_init(char **status_info)
{
  char *error = ((char *)NULL);
  char **outputs;
  signed int i = 0;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Openning audio output system");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Openning audio output system");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  if(module_audio_pars[0l] == ((char *)NULL))
  {
    *status_info=g_strdup("Sound output method specified in configuration not supported. Please choose 'oss', 'alsa', 'nas', 'libao' or 'pulse'.");
    return -1;
  }

  else
  {
    outputs=g_strsplit(module_audio_pars[(signed long int)0], ",", 0);
    for( ; !(outputs[(signed long int)i] == ((char *)NULL)); i = i + 1)
    {
      module_audio_id=spd_audio_open(outputs[(signed long int)i], (void **)&module_audio_pars[(signed long int)1], &error);
      if(!(module_audio_id == ((struct anonymous$7 *)NULL)))
      {
        if(!(Debug == 0))
        {
          signed long int module_audio_init$$1$$3$$1$$1$$t;
          struct timeval module_audio_init$$1$$3$$1$$1$$tv;
          char *module_audio_init$$1$$3$$1$$1$$tstr;
          module_audio_init$$1$$3$$1$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$3;
          return_value_ctime$3=ctime(&module_audio_init$$1$$3$$1$$1$$t);
          module_audio_init$$1$$3$$1$$1$$tstr=g_strdup(return_value_ctime$3);
          unsigned long int return_value_strlen$4;
          return_value_strlen$4=strlen(module_audio_init$$1$$3$$1$$1$$tstr);
          module_audio_init$$1$$3$$1$$1$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
          gettimeofday(&module_audio_init$$1$$3$$1$$1$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", module_audio_init$$1$$3$$1$$1$$tstr, (signed int)module_audio_init$$1$$3$$1$$1$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Using %s audio output method", outputs[(signed long int)i]);
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", module_audio_init$$1$$3$$1$$1$$tstr, (signed int)module_audio_init$$1$$3$$1$$1$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Using %s audio output method", outputs[(signed long int)i]);
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)module_audio_init$$1$$3$$1$$1$$tstr);
        }

        g_strfreev(outputs);
        *status_info=g_strdup("audio initialized successfully.");
        return 0;
      }

    }
    *status_info=g_strdup_printf("Opening sound device failed. Reason: %s. ", error);
    g_free((void *)error);
    g_strfreev(outputs);
    return -1;
  }
}

// module_child_dp_close
// file module_utils.c line 709
void module_child_dp_close(struct anonymous dpipe)
{
  close(dpipe.pc[(signed long int)0]);
  close(dpipe.cp[(signed long int)1]);
}

// module_child_dp_init
// file module_utils.c line 702
void module_child_dp_init(struct anonymous dpipe)
{
  close(dpipe.pc[(signed long int)1]);
  close(dpipe.cp[(signed long int)0]);
}

// module_child_dp_read
// file module_utils.c line 736
signed int module_child_dp_read(struct anonymous dpipe, char *msg, unsigned long int maxlen)
{
  signed int bytes;
  signed long int return_value_read$1;
  do
  {
    return_value_read$1=read(dpipe.pc[(signed long int)0], (void *)msg, maxlen);
    bytes = (signed int)return_value_read$1;
    if(bytes >= 0)
      break;

    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    if(!(*return_value___errno_location$2 == 4))
    {
      fprintf(stderr, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 741);
      if(Debug >= 2)
        fprintf(CustomDebugFile, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 741);

      exit(1);
    }

  }
  while((_Bool)1);
  return bytes;
}

// module_child_dp_write
// file module_utils.c line 716
void module_child_dp_write(struct anonymous dpipe, const char *msg, unsigned long int bytes)
{
  signed int ret;
  /* assertion msg != ((void *)0) */
  assert(msg != (const char *)(void *)0);
  signed long int return_value_write$1;
  return_value_write$1=write(dpipe.cp[(signed long int)1], (const void *)msg, bytes);
  ret = (signed int)return_value_write$1;
  /* assertion ret */
  assert(ret != 0);
}

// module_close
// file cicero.c line 290
signed int module_close(void)
{
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "cicero: close()\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "cicero: close()\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  if(!(cicero_speaking == 0))
    module_stop();

  signed int return_value_module_terminate_thread$3;
  return_value_module_terminate_thread$3=module_terminate_thread(cicero_speaking_thread);
  if(!(return_value_module_terminate_thread$3 == 0))
    return -1;

  else
  {
    sem_destroy(&cicero_semaphore);
    return 0;
  }
}

// module_get_ht_option
// file module_utils.c line 935
void * module_get_ht_option(struct _GHashTable *hash_table, const char *key)
{
  void *option;
  /* assertion key != ((void *)0) */
  assert(key != (const char *)(void *)0);
  option=g_hash_table_lookup(hash_table, (const void *)key);
  if(option == NULL)
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$1;
      return_value_ctime$1=ctime(&t);
      tstr=g_strdup(return_value_ctime$1);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Requested option by key %s not found.\n", key);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Requested option by key %s not found.\n", key);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

  }

  return option;
}

// module_get_message_part
// file module_utils.h line 161
signed int module_get_message_part(const char *message, char *part, unsigned int *pos, unsigned long int maxlen, const char *dividers)
{
  signed int i;
  signed int n;
  signed int num_dividers;
  signed int len;
  /* assertion part != ((void *)0) */
  assert(part != (char *)(void *)0);
  /* assertion message != ((void *)0) */
  assert(message != (const char *)(void *)0);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(message);
  len = (signed int)return_value_strlen$1;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$4;
  if((signed int)message[(signed long int)*pos] == 0)
    return -1;

  else
  {
    if(!(dividers == ((const char *)NULL)))
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(dividers);
      num_dividers = (signed int)return_value_strlen$2;
    }

    else
      num_dividers = 0;
    i = 0;
    for( ; maxlen + 18446744073709551615ul >= (unsigned long int)i; i = i + 1)
    {
      part[(signed long int)i] = message[(signed long int)*pos];
      if((signed int)part[(signed long int)i] == 0)
        return i;

      if(len + -1 + -i >= 3)
      {
        if((signed int)message[(signed long int)(1u + *pos)] == 32)
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = (signed int)message[(signed long int)(*pos + (unsigned int)1)] == 10 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$3)
          tmp_if_expr$4 = (_Bool)1;

        else
          tmp_if_expr$4 = (signed int)message[(signed long int)(*pos + (unsigned int)1)] == 13 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$4)
        {
          n = 0;
          for( ; num_dividers + -1 >= n; n = n + 1)
            if(part[(signed long int)i] == dividers[(signed long int)n])
            {
              part[(signed long int)(i + 1)] = (char)0;
              *pos = *pos + 1u;
              return i + 1;
            }

          if((signed int)message[(signed long int)*pos] == 10)
          {
            if((signed int)message[(signed long int)(1u + *pos)] == 10)
            {
              part[(signed long int)(i + 1)] = (char)0;
              *pos = *pos + 1u;
              return i + 1;
            }

          }

          if(len + -1 + -i >= 5)
          {
            if((signed int)message[(signed long int)*pos] == 13)
            {
              if((signed int)message[(signed long int)(1u + *pos)] == 10)
              {
                if((signed int)message[(signed long int)(2u + *pos)] == 13)
                {
                  if((signed int)message[(signed long int)(3u + *pos)] == 10)
                  {
                    part[(signed long int)(i + 1)] = (char)0;
                    *pos = *pos + 1u;
                    return i + 1;
                  }

                }

              }

            }

          }

        }

      }

      *pos = *pos + 1u;
    }
    part[(signed long int)i] = (char)0;
    return i;
  }
}

// module_init
// file cicero.c line 142
signed int module_init(char **status_info)
{
  signed int ret;
  signed int stderr_redirect;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval module_init$$1$$1$$tv;
    char *module_init$$1$$1$$tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    module_init$$1$$1$$tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(module_init$$1$$1$$tstr);
    module_init$$1$$1$$tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_init$$1$$1$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_init$$1$$1$$tstr, (signed int)module_init$$1$$1$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Module init\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$1$$tstr, (signed int)module_init$$1$$1$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Module init\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_init$$1$$1$$tstr);
  }

  signal(13, (void (*)(signed int))1);
  if(!(Debug == 0))
  {
    signed long int module_init$$1$$2$$t;
    struct timeval module_init$$1$$2$$tv;
    char *module_init$$1$$2$$tstr;
    module_init$$1$$2$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$3;
    return_value_ctime$3=ctime(&module_init$$1$$2$$t);
    module_init$$1$$2$$tstr=g_strdup(return_value_ctime$3);
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(module_init$$1$$2$$tstr);
    module_init$$1$$2$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_init$$1$$2$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_init$$1$$2$$tstr, (signed int)module_init$$1$$2$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "call the pipe system call\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$2$$tstr, (signed int)module_init$$1$$2$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "call the pipe system call\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_init$$1$$2$$tstr);
  }

  signed int return_value_pipe$7;
  return_value_pipe$7=pipe(fd1);
  _Bool tmp_if_expr$9;
  signed int return_value_pipe$8;
  if(!(return_value_pipe$7 >= 0))
    tmp_if_expr$9 = (_Bool)1;

  else
  {
    return_value_pipe$8=pipe(fd2);
    tmp_if_expr$9 = return_value_pipe$8 < 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$27;
  signed int return_value_dup2$26;
  _Bool tmp_if_expr$37;
  signed int return_value_fcntl$36;
  if(tmp_if_expr$9)
  {
    if(!(Debug == 0))
    {
      signed long int module_init$$1$$3$$1$$t;
      struct timeval module_init$$1$$3$$1$$tv;
      char *module_init$$1$$3$$1$$tstr;
      module_init$$1$$3$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$5;
      return_value_ctime$5=ctime(&module_init$$1$$3$$1$$t);
      module_init$$1$$3$$1$$tstr=g_strdup(return_value_ctime$5);
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(module_init$$1$$3$$1$$tstr);
      module_init$$1$$3$$1$$tstr[(signed long int)(return_value_strlen$6 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_init$$1$$3$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_init$$1$$3$$1$$tstr, (signed int)module_init$$1$$3$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Error pipe()\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$3$$1$$tstr, (signed int)module_init$$1$$3$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Error pipe()\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_init$$1$$3$$1$$tstr);
    }

    return -1;
  }

  else
  {
    if(!(Debug == 0))
    {
      signed long int module_init$$1$$4$$t;
      struct timeval module_init$$1$$4$$tv;
      char *module_init$$1$$4$$tstr;
      module_init$$1$$4$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$10;
      return_value_ctime$10=ctime(&module_init$$1$$4$$t);
      module_init$$1$$4$$tstr=g_strdup(return_value_ctime$10);
      unsigned long int return_value_strlen$11;
      return_value_strlen$11=strlen(module_init$$1$$4$$tstr);
      module_init$$1$$4$$tstr[(signed long int)(return_value_strlen$11 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_init$$1$$4$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_init$$1$$4$$tstr, (signed int)module_init$$1$$4$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Call fork system call\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$4$$tstr, (signed int)module_init$$1$$4$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Call fork system call\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_init$$1$$4$$tstr);
    }

    stderr_redirect=open(CiceroExecutableLog, 01 | 0100 | 01000, 0400 | 0200);
    if(stderr_redirect == -1)
    {
      if(!(Debug == 0))
      {
        signed long int module_init$$1$$5$$1$$t;
        struct timeval module_init$$1$$5$$1$$tv;
        char *module_init$$1$$5$$1$$tstr;
        module_init$$1$$5$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$12;
        return_value_ctime$12=ctime(&module_init$$1$$5$$1$$t);
        module_init$$1$$5$$1$$tstr=g_strdup(return_value_ctime$12);
        unsigned long int return_value_strlen$13;
        return_value_strlen$13=strlen(module_init$$1$$5$$1$$tstr);
        module_init$$1$$5$$1$$tstr[(signed long int)(return_value_strlen$13 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_init$$1$$5$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_init$$1$$5$$1$$tstr, (signed int)module_init$$1$$5$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        signed int *return_value___errno_location$14;
        return_value___errno_location$14=__errno_location();
        char *return_value_strerror$15;
        return_value_strerror$15=strerror(*return_value___errno_location$14);
        fprintf(stderr, "ERROR: Openning debug file for Cicero binary failed: (error=%d) %s", stderr_redirect, return_value_strerror$15);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$5$$1$$tstr, (signed int)module_init$$1$$5$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          signed int *return_value___errno_location$16;
          return_value___errno_location$16=__errno_location();
          char *return_value_strerror$17;
          return_value_strerror$17=strerror(*return_value___errno_location$16);
          fprintf(CustomDebugFile, "ERROR: Openning debug file for Cicero binary failed: (error=%d) %s", stderr_redirect, return_value_strerror$17);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_init$$1$$5$$1$$tstr);
      }

    }

    else
      if(!(Debug == 0))
      {
        signed long int module_init$$1$$6$$1$$t;
        struct timeval module_init$$1$$6$$1$$tv;
        char *module_init$$1$$6$$1$$tstr;
        module_init$$1$$6$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$18;
        return_value_ctime$18=ctime(&module_init$$1$$6$$1$$t);
        module_init$$1$$6$$1$$tstr=g_strdup(return_value_ctime$18);
        unsigned long int return_value_strlen$19;
        return_value_strlen$19=strlen(module_init$$1$$6$$1$$tstr);
        module_init$$1$$6$$1$$tstr[(signed long int)(return_value_strlen$19 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_init$$1$$6$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_init$$1$$6$$1$$tstr, (signed int)module_init$$1$$6$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Cicero synthesizer logging to file %s", CiceroExecutableLog);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$6$$1$$tstr, (signed int)module_init$$1$$6$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Cicero synthesizer logging to file %s", CiceroExecutableLog);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_init$$1$$6$$1$$tstr);
      }

    signed int return_value_fork$20;
    return_value_fork$20=fork();
    if(!(return_value_fork$20 == -1))
    {
      if(return_value_fork$20 == 0)
        goto __CPROVER_DUMP_L20;

    }

    else
    {
      if(!(Debug == 0))
      {
        signed long int module_init$$1$$7$$1$$1$$t;
        struct timeval module_init$$1$$7$$1$$1$$tv;
        char *module_init$$1$$7$$1$$1$$tstr;
        module_init$$1$$7$$1$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$21;
        return_value_ctime$21=ctime(&module_init$$1$$7$$1$$1$$t);
        module_init$$1$$7$$1$$1$$tstr=g_strdup(return_value_ctime$21);
        unsigned long int return_value_strlen$22;
        return_value_strlen$22=strlen(module_init$$1$$7$$1$$1$$tstr);
        module_init$$1$$7$$1$$1$$tstr[(signed long int)(return_value_strlen$22 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_init$$1$$7$$1$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_init$$1$$7$$1$$1$$tstr, (signed int)module_init$$1$$7$$1$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Error fork()\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$7$$1$$1$$tstr, (signed int)module_init$$1$$7$$1$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Error fork()\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_init$$1$$7$$1$$1$$tstr);
      }

      return -1;

    __CPROVER_DUMP_L20:
      ;
      signed int return_value_dup2$25;
      return_value_dup2$25=dup2(fd2[(signed long int)0], 0);
      if(!(return_value_dup2$25 >= 0))
        tmp_if_expr$27 = (_Bool)1;

      else
      {
        return_value_dup2$26=dup2(fd1[(signed long int)1], 1);
        tmp_if_expr$27 = return_value_dup2$26 < 0 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$27)
      {
        if(!(Debug == 0))
        {
          signed long int module_init$$1$$7$$2$$1$$1$$t;
          struct timeval module_init$$1$$7$$2$$1$$1$$tv;
          char *module_init$$1$$7$$2$$1$$1$$tstr;
          module_init$$1$$7$$2$$1$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$23;
          return_value_ctime$23=ctime(&module_init$$1$$7$$2$$1$$1$$t);
          module_init$$1$$7$$2$$1$$1$$tstr=g_strdup(return_value_ctime$23);
          unsigned long int return_value_strlen$24;
          return_value_strlen$24=strlen(module_init$$1$$7$$2$$1$$1$$tstr);
          module_init$$1$$7$$2$$1$$1$$tstr[(signed long int)(return_value_strlen$24 - (unsigned long int)1)] = (char)0;
          gettimeofday(&module_init$$1$$7$$2$$1$$1$$tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", module_init$$1$$7$$2$$1$$1$$tstr, (signed int)module_init$$1$$7$$2$$1$$1$$tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Error dup2()\n");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$7$$2$$1$$1$$tstr, (signed int)module_init$$1$$7$$2$$1$$1$$tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Error dup2()\n");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)module_init$$1$$7$$2$$1$$1$$tstr);
        }

        exit(1);
      }

      if(stderr_redirect >= 0)
      {
        signed int return_value_dup2$30;
        return_value_dup2$30=dup2(stderr_redirect, 2);
        if(!(return_value_dup2$30 >= 0))
        {
          if(!(Debug == 0))
          {
            signed long int module_init$$1$$7$$2$$2$$1$$t;
            struct timeval module_init$$1$$7$$2$$2$$1$$tv;
            char *module_init$$1$$7$$2$$2$$1$$tstr;
            module_init$$1$$7$$2$$2$$1$$t=time((signed long int *)(void *)0);
            char *return_value_ctime$28;
            return_value_ctime$28=ctime(&module_init$$1$$7$$2$$2$$1$$t);
            module_init$$1$$7$$2$$2$$1$$tstr=g_strdup(return_value_ctime$28);
            unsigned long int return_value_strlen$29;
            return_value_strlen$29=strlen(module_init$$1$$7$$2$$2$$1$$tstr);
            module_init$$1$$7$$2$$2$$1$$tstr[(signed long int)(return_value_strlen$29 - (unsigned long int)1)] = (char)0;
            gettimeofday(&module_init$$1$$7$$2$$2$$1$$tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", module_init$$1$$7$$2$$2$$1$$tstr, (signed int)module_init$$1$$7$$2$$2$$1$$tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "ERROR: Couldn't redirect stderr, not logging for Cicero synthesizer.");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$7$$2$$2$$1$$tstr, (signed int)module_init$$1$$7$$2$$2$$1$$tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "ERROR: Couldn't redirect stderr, not logging for Cicero synthesizer.");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)module_init$$1$$7$$2$$2$$1$$tstr);
          }

        }

      }

      signed int i = 0;
      i = 3;
      for( ; !(i >= 256); i = i + 1)
        close(i);
      signal(13, (void (*)(signed int))1);
      execl(CiceroExecutable, CiceroExecutable, (void *)0);
      if(!(Debug == 0))
      {
        signed long int module_init$$1$$7$$2$$4$$t;
        struct timeval module_init$$1$$7$$2$$4$$tv;
        char *module_init$$1$$7$$2$$4$$tstr;
        module_init$$1$$7$$2$$4$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$31;
        return_value_ctime$31=ctime(&module_init$$1$$7$$2$$4$$t);
        module_init$$1$$7$$2$$4$$tstr=g_strdup(return_value_ctime$31);
        unsigned long int return_value_strlen$32;
        return_value_strlen$32=strlen(module_init$$1$$7$$2$$4$$tstr);
        module_init$$1$$7$$2$$4$$tstr[(signed long int)(return_value_strlen$32 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_init$$1$$7$$2$$4$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_init$$1$$7$$2$$4$$tstr, (signed int)module_init$$1$$7$$2$$4$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Error execl()\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$7$$2$$4$$tstr, (signed int)module_init$$1$$7$$2$$4$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Error execl()\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_init$$1$$7$$2$$4$$tstr);
      }

      exit(1);
    }
    close(fd1[(signed long int)1]);
    close(fd2[(signed long int)0]);
    signed int return_value_fcntl$35;
    return_value_fcntl$35=fcntl(fd2[(signed long int)1], 4, 04000);
    if(!(return_value_fcntl$35 >= 0))
      tmp_if_expr$37 = (_Bool)1;

    else
    {
      return_value_fcntl$36=fcntl(fd1[(signed long int)0], 4, 04000);
      tmp_if_expr$37 = return_value_fcntl$36 < 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$37)
    {
      if(!(Debug == 0))
      {
        signed long int module_init$$1$$7$$3$$1$$1$$t;
        struct timeval module_init$$1$$7$$3$$1$$1$$tv;
        char *module_init$$1$$7$$3$$1$$1$$tstr;
        module_init$$1$$7$$3$$1$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$33;
        return_value_ctime$33=ctime(&module_init$$1$$7$$3$$1$$1$$t);
        module_init$$1$$7$$3$$1$$1$$tstr=g_strdup(return_value_ctime$33);
        unsigned long int return_value_strlen$34;
        return_value_strlen$34=strlen(module_init$$1$$7$$3$$1$$1$$tstr);
        module_init$$1$$7$$3$$1$$1$$tstr[(signed long int)(return_value_strlen$34 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_init$$1$$7$$3$$1$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_init$$1$$7$$3$$1$$1$$tstr, (signed int)module_init$$1$$7$$3$$1$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Error fcntl()\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$7$$3$$1$$1$$tstr, (signed int)module_init$$1$$7$$3$$1$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Error fcntl()\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_init$$1$$7$$3$$1$$1$$tstr);
      }

      return -1;
    }

    else
    {
      void *return_value_g_malloc$38;
      return_value_g_malloc$38=g_malloc(sizeof(char *) /*8ul*/ );
      cicero_message = (char **)return_value_g_malloc$38;
      *cicero_message = (char *)(void *)0;
      sem_init(&cicero_semaphore, 0, (unsigned int)0);
      if(!(Debug == 0))
      {
        signed long int module_init$$1$$8$$t;
        struct timeval module_init$$1$$8$$tv;
        char *module_init$$1$$8$$tstr;
        module_init$$1$$8$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$39;
        return_value_ctime$39=ctime(&module_init$$1$$8$$t);
        module_init$$1$$8$$tstr=g_strdup(return_value_ctime$39);
        unsigned long int return_value_strlen$40;
        return_value_strlen$40=strlen(module_init$$1$$8$$tstr);
        module_init$$1$$8$$tstr[(signed long int)(return_value_strlen$40 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_init$$1$$8$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_init$$1$$8$$tstr, (signed int)module_init$$1$$8$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Cicero: creating new thread for cicero_tracking\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_init$$1$$8$$tstr, (signed int)module_init$$1$$8$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Cicero: creating new thread for cicero_tracking\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_init$$1$$8$$tstr);
      }

      cicero_speaking = 0;
      ret=pthread_create(&cicero_speaking_thread, (const union pthread_attr_t *)(void *)0, _cicero_speak, (void *)0);
      if(!(ret == 0))
      {
        if(!(Debug == 0))
        {
          signed long int module_init$$1$$9$$1$$t;
          struct timeval tv;
          char *tstr;
          module_init$$1$$9$$1$$t=time((signed long int *)(void *)0);
          char *return_value_ctime$41;
          return_value_ctime$41=ctime(&module_init$$1$$9$$1$$t);
          tstr=g_strdup(return_value_ctime$41);
          unsigned long int return_value_strlen$42;
          return_value_strlen$42=strlen(tstr);
          tstr[(signed long int)(return_value_strlen$42 - (unsigned long int)1)] = (char)0;
          gettimeofday(&tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Cicero: thread failed\n");
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Cicero: thread failed\n");
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)tstr);
        }

        *status_info=g_strdup("The module couldn't initialize threads This can be either an internal problem or an architecture problem. If you are sure your architecture supports threads, please report a bug.");
        return -1;
      }

      else
      {
        *status_info=g_strdup("Cicero initialized successfully.");
        return 0;
      }
    }
  }
}

// module_list_voices
// file cicero.c line 230
struct anonymous$0 ** module_list_voices(void)
{
  return (struct anonymous$0 **)(void *)0;
}

// module_load
// file cicero.c line 132
signed int module_load(void)
{
  module_dc_options = (struct configoption_t *)(void *)0;
  msg_settings.rate = 0;
  msg_settings.pitch = 0;
  msg_settings.volume = 0;
  msg_settings.punctuation_mode = (enum anonymous$6)SPD_PUNCT_NONE;
  msg_settings.spelling_mode = (enum anonymous$2)SPD_SPELL_OFF;
  msg_settings.cap_let_recogn = (enum anonymous$3)SPD_CAP_NONE;
  msg_settings.voice_type = (enum anonymous$5)SPD_MALE1;
  msg_settings.voice.name = (char *)(void *)0;
  msg_settings.voice.language = (char *)(void *)0;
  msg_settings_old.rate = -101;
  msg_settings_old.pitch = -101;
  msg_settings_old.volume = -101;
  msg_settings_old.punctuation_mode = (enum anonymous$6)-1;
  msg_settings_old.spelling_mode = (enum anonymous$2)-1;
  msg_settings_old.cap_let_recogn = (enum anonymous$3)-1;
  msg_settings_old.voice_type = (enum anonymous$5)-1;
  msg_settings_old.voice.name = (char *)(void *)0;
  msg_settings_old.voice.language = (char *)(void *)0;
  Debug = 0;
  module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "Debug", 1, Debug_cb, (void *)0, (unsigned long int)0);
  CiceroExecutable=g_strdup("/usr/bin/cicero");
  module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "CiceroExecutable", 2, CiceroExecutable_cb, (void *)0, (unsigned long int)0);
  CiceroExecutableLog=g_strdup("/var/log/speech-dispatcher/cicero-executable.log");
  module_dc_options=module_add_config_option(module_dc_options, &module_num_dc_options, "CiceroExecutableLog", 2, CiceroExecutableLog_cb, (void *)0, (unsigned long int)0);
  return 0;
}

// module_parent_dp_close
// file module_utils.c line 695
void module_parent_dp_close(struct anonymous dpipe)
{
  close(dpipe.pc[(signed long int)1]);
  close(dpipe.cp[(signed long int)0]);
}

// module_parent_dp_init
// file module_utils.c line 688
void module_parent_dp_init(struct anonymous dpipe)
{
  close(dpipe.pc[(signed long int)0]);
  close(dpipe.cp[(signed long int)1]);
}

// module_parent_dp_read
// file module_utils.c line 748
signed int module_parent_dp_read(struct anonymous dpipe, char *msg, unsigned long int maxlen)
{
  signed int bytes;
  signed long int return_value_read$1;
  do
  {
    return_value_read$1=read(dpipe.cp[(signed long int)0], (void *)msg, maxlen);
    bytes = (signed int)return_value_read$1;
    if(bytes >= 0)
      break;

    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    if(!(*return_value___errno_location$2 == 4))
    {
      fprintf(stderr, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 753);
      if(Debug >= 2)
        fprintf(CustomDebugFile, "FATAL ERROR in output module [%s:%d]:\n   Unable to read data", (const void *)"module_utils.c", 753);

      exit(1);
    }

  }
  while((_Bool)1);
  return bytes;
}

// module_parent_dp_write
// file module_utils.c line 725
signed int module_parent_dp_write(struct anonymous dpipe, const char *msg, unsigned long int bytes)
{
  signed long int ret;
  /* assertion msg != ((void *)0) */
  assert(msg != (const char *)(void *)0);
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "going to write %lu bytes", (unsigned long int)bytes);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "going to write %lu bytes", (unsigned long int)bytes);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  ret=write(dpipe.pc[(signed long int)1], (const void *)msg, bytes);
  if(!(Debug == 0))
  {
    signed long int module_parent_dp_write$$1$$2$$t;
    struct timeval module_parent_dp_write$$1$$2$$tv;
    char *module_parent_dp_write$$1$$2$$tstr;
    module_parent_dp_write$$1$$2$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$3;
    return_value_ctime$3=ctime(&module_parent_dp_write$$1$$2$$t);
    module_parent_dp_write$$1$$2$$tstr=g_strdup(return_value_ctime$3);
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(module_parent_dp_write$$1$$2$$tstr);
    module_parent_dp_write$$1$$2$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_parent_dp_write$$1$$2$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_parent_dp_write$$1$$2$$tstr, (signed int)module_parent_dp_write$$1$$2$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "written %ld bytes", (signed long int)ret);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_parent_dp_write$$1$$2$$tstr, (signed int)module_parent_dp_write$$1$$2$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "written %ld bytes", (signed long int)ret);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_parent_dp_write$$1$$2$$tstr);
  }

  return (signed int)ret;
}

// module_parent_wait_continue
// file module_utils.c line 668
signed int module_parent_wait_continue(struct anonymous dpipe)
{
  char msg[16l];
  signed int bytes;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "parent: Waiting for response from child...\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "parent: Waiting for response from child...\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  while((_Bool)1)
  {
    bytes=module_parent_dp_read(dpipe, msg, (unsigned long int)8);
    if(bytes == 0)
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wait_continue$$1$$2$$1$$1$$t;
        struct timeval module_parent_wait_continue$$1$$2$$1$$1$$tv;
        char *module_parent_wait_continue$$1$$2$$1$$1$$tstr;
        module_parent_wait_continue$$1$$2$$1$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$3;
        return_value_ctime$3=ctime(&module_parent_wait_continue$$1$$2$$1$$1$$t);
        module_parent_wait_continue$$1$$2$$1$$1$$tstr=g_strdup(return_value_ctime$3);
        unsigned long int return_value_strlen$4;
        return_value_strlen$4=strlen(module_parent_wait_continue$$1$$2$$1$$1$$tstr);
        module_parent_wait_continue$$1$$2$$1$$1$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wait_continue$$1$$2$$1$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wait_continue$$1$$2$$1$$1$$tstr, (signed int)module_parent_wait_continue$$1$$2$$1$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "parent: Read bytes 0, child stopped\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wait_continue$$1$$2$$1$$1$$tstr, (signed int)module_parent_wait_continue$$1$$2$$1$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "parent: Read bytes 0, child stopped\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wait_continue$$1$$2$$1$$1$$tstr);
      }

      return 1;
    }

    if((signed int)msg[0l] == 67)
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wait_continue$$1$$2$$2$$1$$t;
        struct timeval module_parent_wait_continue$$1$$2$$2$$1$$tv;
        char *module_parent_wait_continue$$1$$2$$2$$1$$tstr;
        module_parent_wait_continue$$1$$2$$2$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$5;
        return_value_ctime$5=ctime(&module_parent_wait_continue$$1$$2$$2$$1$$t);
        module_parent_wait_continue$$1$$2$$2$$1$$tstr=g_strdup(return_value_ctime$5);
        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen(module_parent_wait_continue$$1$$2$$2$$1$$tstr);
        module_parent_wait_continue$$1$$2$$2$$1$$tstr[(signed long int)(return_value_strlen$6 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wait_continue$$1$$2$$2$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wait_continue$$1$$2$$2$$1$$tstr, (signed int)module_parent_wait_continue$$1$$2$$2$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "parent: Ok, received report to continue...\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wait_continue$$1$$2$$2$$1$$tstr, (signed int)module_parent_wait_continue$$1$$2$$2$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "parent: Ok, received report to continue...\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wait_continue$$1$$2$$2$$1$$tstr);
      }

      return 0;
    }

  }
}

// module_parent_wfork
// file module_utils.c line 608
unsigned long int module_parent_wfork(struct anonymous dpipe, const char *message, enum anonymous$13 msgtype, const unsigned long int maxlen, const char *dividers, signed int *pause_requested)
{
  unsigned int pos = (unsigned int)0;
  char msg[16l];
  char *buf;
  signed int bytes;
  unsigned long int read_bytes = (unsigned long int)0;
  if(!(Debug == 0))
  {
    signed long int module_parent_wfork$$1$$1$$t;
    struct timeval module_parent_wfork$$1$$1$$tv;
    char *module_parent_wfork$$1$$1$$tstr;
    module_parent_wfork$$1$$1$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&module_parent_wfork$$1$$1$$t);
    module_parent_wfork$$1$$1$$tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(module_parent_wfork$$1$$1$$tstr);
    module_parent_wfork$$1$$1$$tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_parent_wfork$$1$$1$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$1$$tstr, (signed int)module_parent_wfork$$1$$1$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Entering parent process, closing pipes");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$1$$tstr, (signed int)module_parent_wfork$$1$$1$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Entering parent process, closing pipes");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_parent_wfork$$1$$1$$tstr);
  }

  void *return_value_g_malloc$3;
  return_value_g_malloc$3=g_malloc((maxlen + (unsigned long int)1) * sizeof(char) /*1ul*/ );
  buf = (char *)return_value_g_malloc$3;
  module_parent_dp_init(dpipe);
  pos = (unsigned int)0;
  while((_Bool)1)
  {
    if(!(Debug == 0))
    {
      signed long int module_parent_wfork$$1$$2$$1$$t;
      struct timeval module_parent_wfork$$1$$2$$1$$tv;
      char *module_parent_wfork$$1$$2$$1$$tstr;
      module_parent_wfork$$1$$2$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$4;
      return_value_ctime$4=ctime(&module_parent_wfork$$1$$2$$1$$t);
      module_parent_wfork$$1$$2$$1$$tstr=g_strdup(return_value_ctime$4);
      unsigned long int return_value_strlen$5;
      return_value_strlen$5=strlen(module_parent_wfork$$1$$2$$1$$tstr);
      module_parent_wfork$$1$$2$$1$$tstr[(signed long int)(return_value_strlen$5 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_parent_wfork$$1$$2$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$2$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "  Looping...\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$2$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "  Looping...\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_parent_wfork$$1$$2$$1$$tstr);
    }

    bytes=module_get_message_part(message, buf, &pos, maxlen, dividers);
    if(!(Debug == 0))
    {
      signed long int module_parent_wfork$$1$$2$$2$$t;
      struct timeval module_parent_wfork$$1$$2$$2$$tv;
      char *module_parent_wfork$$1$$2$$2$$tstr;
      module_parent_wfork$$1$$2$$2$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$6;
      return_value_ctime$6=ctime(&module_parent_wfork$$1$$2$$2$$t);
      module_parent_wfork$$1$$2$$2$$tstr=g_strdup(return_value_ctime$6);
      unsigned long int return_value_strlen$7;
      return_value_strlen$7=strlen(module_parent_wfork$$1$$2$$2$$tstr);
      module_parent_wfork$$1$$2$$2$$tstr[(signed long int)(return_value_strlen$7 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_parent_wfork$$1$$2$$2$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$2$$2$$tstr, (signed int)module_parent_wfork$$1$$2$$2$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Returned %d bytes from get_part\n", bytes);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$2$$2$$tstr, (signed int)module_parent_wfork$$1$$2$$2$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Returned %d bytes from get_part\n", bytes);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_parent_wfork$$1$$2$$2$$tstr);
    }

    if(!(*pause_requested == 0))
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wfork$$1$$2$$3$$1$$t;
        struct timeval tv;
        char *tstr;
        module_parent_wfork$$1$$2$$3$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$8;
        return_value_ctime$8=ctime(&module_parent_wfork$$1$$2$$3$$1$$t);
        tstr=g_strdup(return_value_ctime$8);
        unsigned long int return_value_strlen$9;
        return_value_strlen$9=strlen(tstr);
        tstr[(signed long int)(return_value_strlen$9 - (unsigned long int)1)] = (char)0;
        gettimeofday(&tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Pause requested in parent");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Pause requested in parent");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)tstr);
      }

      module_parent_dp_close(dpipe);
      *pause_requested = 0;
      return (unsigned long int)0;
    }

    if(bytes >= 1)
    {
      if(!(Debug == 0))
      {
        signed long int t;
        struct timeval module_parent_wfork$$1$$2$$4$$1$$tv;
        char *module_parent_wfork$$1$$2$$4$$1$$tstr;
        t=time((signed long int *)(void *)0);
        char *return_value_ctime$10;
        return_value_ctime$10=ctime(&t);
        module_parent_wfork$$1$$2$$4$$1$$tstr=g_strdup(return_value_ctime$10);
        unsigned long int return_value_strlen$11;
        return_value_strlen$11=strlen(module_parent_wfork$$1$$2$$4$$1$$tstr);
        module_parent_wfork$$1$$2$$4$$1$$tstr[(signed long int)(return_value_strlen$11 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wfork$$1$$2$$4$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$2$$4$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Sending buf to child:|%s| %d\n", buf, bytes);
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$2$$4$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Sending buf to child:|%s| %d\n", buf, bytes);
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wfork$$1$$2$$4$$1$$tstr);
      }

      module_parent_dp_write(dpipe, buf, (unsigned long int)bytes);
      if(!(Debug == 0))
      {
        signed long int module_parent_wfork$$1$$2$$4$$2$$t;
        struct timeval module_parent_wfork$$1$$2$$4$$2$$tv;
        char *module_parent_wfork$$1$$2$$4$$2$$tstr;
        module_parent_wfork$$1$$2$$4$$2$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$12;
        return_value_ctime$12=ctime(&module_parent_wfork$$1$$2$$4$$2$$t);
        module_parent_wfork$$1$$2$$4$$2$$tstr=g_strdup(return_value_ctime$12);
        unsigned long int return_value_strlen$13;
        return_value_strlen$13=strlen(module_parent_wfork$$1$$2$$4$$2$$tstr);
        module_parent_wfork$$1$$2$$4$$2$$tstr[(signed long int)(return_value_strlen$13 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wfork$$1$$2$$4$$2$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$2$$4$$2$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$2$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Waiting for response from child...\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$2$$4$$2$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$2$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Waiting for response from child...\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wfork$$1$$2$$4$$2$$tstr);
      }

      while((_Bool)1)
      {
        signed int return_value_module_parent_dp_read$14;
        return_value_module_parent_dp_read$14=module_parent_dp_read(dpipe, msg, (unsigned long int)8);
        read_bytes = (unsigned long int)return_value_module_parent_dp_read$14;
        if(read_bytes == 0ul)
        {
          if(!(Debug == 0))
          {
            signed long int module_parent_wfork$$1$$2$$4$$3$$1$$1$$t;
            struct timeval module_parent_wfork$$1$$2$$4$$3$$1$$1$$tv;
            char *module_parent_wfork$$1$$2$$4$$3$$1$$1$$tstr;
            module_parent_wfork$$1$$2$$4$$3$$1$$1$$t=time((signed long int *)(void *)0);
            char *return_value_ctime$15;
            return_value_ctime$15=ctime(&module_parent_wfork$$1$$2$$4$$3$$1$$1$$t);
            module_parent_wfork$$1$$2$$4$$3$$1$$1$$tstr=g_strdup(return_value_ctime$15);
            unsigned long int return_value_strlen$16;
            return_value_strlen$16=strlen(module_parent_wfork$$1$$2$$4$$3$$1$$1$$tstr);
            module_parent_wfork$$1$$2$$4$$3$$1$$1$$tstr[(signed long int)(return_value_strlen$16 - (unsigned long int)1)] = (char)0;
            gettimeofday(&module_parent_wfork$$1$$2$$4$$3$$1$$1$$tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$2$$4$$3$$1$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$3$$1$$1$$tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "parent: Read bytes 0, child stopped\n");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$2$$4$$3$$1$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$3$$1$$1$$tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "parent: Read bytes 0, child stopped\n");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)module_parent_wfork$$1$$2$$4$$3$$1$$1$$tstr);
          }

          break;
        }

        if((signed int)msg[0l] == 67)
        {
          if(!(Debug == 0))
          {
            signed long int module_parent_wfork$$1$$2$$4$$3$$2$$1$$t;
            struct timeval module_parent_wfork$$1$$2$$4$$3$$2$$1$$tv;
            char *module_parent_wfork$$1$$2$$4$$3$$2$$1$$tstr;
            module_parent_wfork$$1$$2$$4$$3$$2$$1$$t=time((signed long int *)(void *)0);
            char *return_value_ctime$17;
            return_value_ctime$17=ctime(&module_parent_wfork$$1$$2$$4$$3$$2$$1$$t);
            module_parent_wfork$$1$$2$$4$$3$$2$$1$$tstr=g_strdup(return_value_ctime$17);
            unsigned long int return_value_strlen$18;
            return_value_strlen$18=strlen(module_parent_wfork$$1$$2$$4$$3$$2$$1$$tstr);
            module_parent_wfork$$1$$2$$4$$3$$2$$1$$tstr[(signed long int)(return_value_strlen$18 - (unsigned long int)1)] = (char)0;
            gettimeofday(&module_parent_wfork$$1$$2$$4$$3$$2$$1$$tv, (struct timezone *)(void *)0);
            fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$2$$4$$3$$2$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$3$$2$$1$$tv.tv_usec);
            fprintf(stderr, ": ");
            fprintf(stderr, "Ok, received report to continue...\n");
            fprintf(stderr, "\n");
            fflush(stderr);
            if(Debug == 2 || Debug == 3)
            {
              fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$2$$4$$3$$2$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$4$$3$$2$$1$$tv.tv_usec);
              fprintf(CustomDebugFile, ": ");
              fprintf(CustomDebugFile, "Ok, received report to continue...\n");
              fprintf(CustomDebugFile, "\n");
              fflush(CustomDebugFile);
            }

            g_free((void *)module_parent_wfork$$1$$2$$4$$3$$2$$1$$tstr);
          }

          break;
        }

      }
    }

    if(bytes == -1 || read_bytes == 0ul)
    {
      if(!(Debug == 0))
      {
        signed long int module_parent_wfork$$1$$2$$5$$1$$t;
        struct timeval module_parent_wfork$$1$$2$$5$$1$$tv;
        char *module_parent_wfork$$1$$2$$5$$1$$tstr;
        module_parent_wfork$$1$$2$$5$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$19;
        return_value_ctime$19=ctime(&module_parent_wfork$$1$$2$$5$$1$$t);
        module_parent_wfork$$1$$2$$5$$1$$tstr=g_strdup(return_value_ctime$19);
        unsigned long int return_value_strlen$20;
        return_value_strlen$20=strlen(module_parent_wfork$$1$$2$$5$$1$$tstr);
        module_parent_wfork$$1$$2$$5$$1$$tstr[(signed long int)(return_value_strlen$20 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_parent_wfork$$1$$2$$5$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_parent_wfork$$1$$2$$5$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$5$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "End of data in parent, closing pipes");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_parent_wfork$$1$$2$$5$$1$$tstr, (signed int)module_parent_wfork$$1$$2$$5$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "End of data in parent, closing pipes");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_parent_wfork$$1$$2$$5$$1$$tstr);
      }

      module_parent_dp_close(dpipe);
      break;
    }

  }
  return (unsigned long int)0;
}

// module_pause
// file cicero.c line 277
unsigned long int module_pause(void)
{
  if(!(Debug == 0))
  {
    signed long int module_pause$$1$$1$$t;
    struct timeval module_pause$$1$$1$$tv;
    char *module_pause$$1$$1$$tstr;
    module_pause$$1$$1$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&module_pause$$1$$1$$t);
    module_pause$$1$$1$$tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(module_pause$$1$$1$$tstr);
    module_pause$$1$$1$$tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_pause$$1$$1$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_pause$$1$$1$$tstr, (signed int)module_pause$$1$$1$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "pause requested\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_pause$$1$$1$$tstr, (signed int)module_pause$$1$$1$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "pause requested\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_pause$$1$$1$$tstr);
  }

  if(!(cicero_speaking == 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&t);
      tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Pause not supported by cicero\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Pause not supported by cicero\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    cicero_pause_requested = 1;
    module_stop();
    return (unsigned long int)-1;
  }

  else
  {
    cicero_pause_requested = 0;
    return (unsigned long int)0;
  }
}

// module_play_file
// file module_utils.c line 992
signed int module_play_file(const char *filename)
{
  signed int result = 0;
  return result;
}

// module_recode_to_iso
// file module_utils.c line 841
char * module_recode_to_iso(char *data, signed int bytes, char *language, char *fallback)
{
  char *recoded;
  if(language == ((char *)NULL))
    recoded=g_strdup(data);

  signed int return_value_strcmp$3;
  return_value_strcmp$3=strcmp(language, "cs");
  char *return_value_g_convert_with_fallback$1;
  char *return_value_g_convert_with_fallback$2;
  if(return_value_strcmp$3 == 0)
  {
    return_value_g_convert_with_fallback$1=g_convert_with_fallback(data, (signed long int)bytes, "ISO8859-2", "UTF-8", fallback, (unsigned long int *)(void *)0, (unsigned long int *)(void *)0, (struct _GError **)(void *)0);
    recoded = (char *)return_value_g_convert_with_fallback$1;
  }

  else
  {
    return_value_g_convert_with_fallback$2=g_convert_with_fallback(data, (signed long int)bytes, "ISO8859-1", "UTF-8", fallback, (unsigned long int *)(void *)0, (unsigned long int *)(void *)0, (struct _GError **)(void *)0);
    recoded = (char *)return_value_g_convert_with_fallback$2;
  }
  if(recoded == ((char *)NULL))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$4;
      return_value_ctime$4=ctime(&t);
      tstr=g_strdup(return_value_ctime$4);
      unsigned long int return_value_strlen$5;
      return_value_strlen$5=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$5 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "festival: Conversion to ISO coding failed\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "festival: Conversion to ISO coding failed\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

  }

  return recoded;
}

// module_report_event_begin
// file module_utils.h line 380
void module_report_event_begin(void)
{
  module_send_asynchronous("701 BEGIN\n");
}

// module_report_event_end
// file module_utils.h line 381
void module_report_event_end(void)
{
  module_send_asynchronous("702 END\n");
}

// module_report_event_pause
// file module_utils.c line 904
void module_report_event_pause(void)
{
  module_send_asynchronous("704 PAUSE\n");
}

// module_report_event_stop
// file module_utils.h line 382
void module_report_event_stop(void)
{
  module_send_asynchronous("703 STOP\n");
}

// module_report_index_mark
// file module_utils.c line 871
void module_report_index_mark(char *mark)
{
  char *reply;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Event: Index mark %s", mark);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Event: Index mark %s", mark);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  if(!(mark == ((char *)NULL)))
    reply=g_strdup_printf("700-%s\n700 INDEX MARK\n", mark);

  else
    goto __CPROVER_DUMP_L5;
  module_send_asynchronous(reply);
  g_free((void *)reply);

__CPROVER_DUMP_L5:
  ;
}

// module_send_asynchronous
// file module_utils.c line 860
void module_send_asynchronous(char *text)
{
  pthread_mutex_lock(&module_stdout_mutex);
  if(!(Debug == 0))
  {
    signed long int module_send_asynchronous$$1$$1$$t;
    struct timeval module_send_asynchronous$$1$$1$$tv;
    char *module_send_asynchronous$$1$$1$$tstr;
    module_send_asynchronous$$1$$1$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&module_send_asynchronous$$1$$1$$t);
    module_send_asynchronous$$1$$1$$tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(module_send_asynchronous$$1$$1$$tstr);
    module_send_asynchronous$$1$$1$$tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_send_asynchronous$$1$$1$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_send_asynchronous$$1$$1$$tstr, (signed int)module_send_asynchronous$$1$$1$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Printing reply: %s", text);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_send_asynchronous$$1$$1$$tstr, (signed int)module_send_asynchronous$$1$$1$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Printing reply: %s", text);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_send_asynchronous$$1$$1$$tstr);
  }

  fputs(text, stdout);
  fflush(stdout);
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$3;
    return_value_ctime$3=ctime(&t);
    tstr=g_strdup(return_value_ctime$3);
    unsigned long int return_value_strlen$4;
    return_value_strlen$4=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Printed");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Printed");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  pthread_mutex_unlock(&module_stdout_mutex);
}

// module_sigblockall
// file module_utils.c line 761
void module_sigblockall(void)
{
  signed int ret;
  struct anonymous$14 all_signals;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Blocking all signals");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Blocking all signals");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  sigfillset(&all_signals);
  ret=sigprocmask(0, &all_signals, (struct anonymous$14 *)(void *)0);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int module_sigblockall$$1$$2$$t;
      struct timeval module_sigblockall$$1$$2$$tv;
      char *module_sigblockall$$1$$2$$tstr;
      module_sigblockall$$1$$2$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&module_sigblockall$$1$$2$$t);
      module_sigblockall$$1$$2$$tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(module_sigblockall$$1$$2$$tstr);
      module_sigblockall$$1$$2$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_sigblockall$$1$$2$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_sigblockall$$1$$2$$tstr, (signed int)module_sigblockall$$1$$2$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't block signals, expect problems with terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_sigblockall$$1$$2$$tstr, (signed int)module_sigblockall$$1$$2$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't block signals, expect problems with terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_sigblockall$$1$$2$$tstr);
    }

  }

}

// module_sigblockusr
// file module_utils.c line 789
void module_sigblockusr(struct anonymous$14 *some_signals)
{
  signed int ret;
  if(!(Debug == 0))
  {
    signed long int module_sigblockusr$$1$$1$$t;
    struct timeval tv;
    char *tstr;
    module_sigblockusr$$1$$1$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&module_sigblockusr$$1$$1$$t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Blocking user signal");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Blocking user signal");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  sigaddset(some_signals, 10);
  ret=sigprocmask(2, some_signals, (struct anonymous$14 *)(void *)0);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval module_sigblockusr$$1$$2$$tv;
      char *module_sigblockusr$$1$$2$$tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&t);
      module_sigblockusr$$1$$2$$tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(module_sigblockusr$$1$$2$$tstr);
      module_sigblockusr$$1$$2$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_sigblockusr$$1$$2$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_sigblockusr$$1$$2$$tstr, (signed int)module_sigblockusr$$1$$2$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't block signal set, expect problems when terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_sigblockusr$$1$$2$$tstr, (signed int)module_sigblockusr$$1$$2$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't block signal set, expect problems when terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_sigblockusr$$1$$2$$tstr);
    }

  }

}

// module_sigunblockusr
// file module_utils.c line 776
void module_sigunblockusr(struct anonymous$14 *some_signals)
{
  signed int ret;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "UnBlocking user signal");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "UnBlocking user signal");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  sigdelset(some_signals, 10);
  ret=sigprocmask(2, some_signals, (struct anonymous$14 *)(void *)0);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int module_sigunblockusr$$1$$2$$t;
      struct timeval module_sigunblockusr$$1$$2$$tv;
      char *module_sigunblockusr$$1$$2$$tstr;
      module_sigunblockusr$$1$$2$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&module_sigunblockusr$$1$$2$$t);
      module_sigunblockusr$$1$$2$$tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(module_sigunblockusr$$1$$2$$tstr);
      module_sigunblockusr$$1$$2$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_sigunblockusr$$1$$2$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_sigunblockusr$$1$$2$$tstr, (signed int)module_sigunblockusr$$1$$2$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't block signal set, expect problems with terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_sigunblockusr$$1$$2$$tstr, (signed int)module_sigunblockusr$$1$$2$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't block signal set, expect problems with terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_sigunblockusr$$1$$2$$tstr);
    }

  }

}

// module_speak
// file cicero.c line 235
signed int module_speak(char *data, unsigned long int bytes, enum anonymous$13 msgtype)
{
  if(!(Debug == 0))
  {
    signed long int module_speak$$1$$1$$t;
    struct timeval module_speak$$1$$1$$tv;
    char *module_speak$$1$$1$$tstr;
    module_speak$$1$$1$$t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&module_speak$$1$$1$$t);
    module_speak$$1$$1$$tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(module_speak$$1$$1$$tstr);
    module_speak$$1$$1$$tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&module_speak$$1$$1$$tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", module_speak$$1$$1$$tstr, (signed int)module_speak$$1$$1$$tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "Module speak\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", module_speak$$1$$1$$tstr, (signed int)module_speak$$1$$1$$tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "Module speak\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)module_speak$$1$$1$$tstr);
  }

  if(!(cicero_speaking == 0))
  {
    if(!(Debug == 0))
    {
      signed long int module_speak$$1$$2$$1$$t;
      struct timeval module_speak$$1$$2$$1$$tv;
      char *tstr;
      module_speak$$1$$2$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&module_speak$$1$$2$$1$$t);
      tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_speak$$1$$2$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)module_speak$$1$$2$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Speaking when requested to write");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)module_speak$$1$$2$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Speaking when requested to write");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    return 0;
  }

  else
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *module_speak$$1$$3$$tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$5;
      return_value_ctime$5=ctime(&t);
      module_speak$$1$$3$$tstr=g_strdup(return_value_ctime$5);
      unsigned long int return_value_strlen$6;
      return_value_strlen$6=strlen(module_speak$$1$$3$$tstr);
      module_speak$$1$$3$$tstr[(signed long int)(return_value_strlen$6 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_speak$$1$$3$$tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Requested data: |%s|\n", data);
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_speak$$1$$3$$tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Requested data: |%s|\n", data);
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_speak$$1$$3$$tstr);
    }

    if(!(*cicero_message == ((char *)NULL)))
    {
      g_free((void *)*cicero_message);
      *cicero_message = (char *)(void *)0;
    }

    *cicero_message=module_strip_ssml(data);
    cicero_message_type = (enum anonymous$13)SPD_MSGTYPE_TEXT;
    if(!(msg_settings_old.rate == msg_settings.rate))
    {
      msg_settings_old.rate = msg_settings.rate;
      cicero_set_rate(msg_settings.rate);
    }

    cicero_speaking = 1;
    sem_post(&cicero_semaphore);
    if(!(Debug == 0))
    {
      signed long int module_speak$$1$$6$$t;
      struct timeval module_speak$$1$$6$$tv;
      char *module_speak$$1$$6$$tstr;
      module_speak$$1$$6$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$7;
      return_value_ctime$7=ctime(&module_speak$$1$$6$$t);
      module_speak$$1$$6$$tstr=g_strdup(return_value_ctime$7);
      unsigned long int return_value_strlen$8;
      return_value_strlen$8=strlen(module_speak$$1$$6$$tstr);
      module_speak$$1$$6$$tstr[(signed long int)(return_value_strlen$8 - (unsigned long int)1)] = (char)0;
      gettimeofday(&module_speak$$1$$6$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", module_speak$$1$$6$$tstr, (signed int)module_speak$$1$$6$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Cicero: leaving module_speak() normaly\n\r");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", module_speak$$1$$6$$tstr, (signed int)module_speak$$1$$6$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Cicero: leaving module_speak() normaly\n\r");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)module_speak$$1$$6$$tstr);
    }

    return (signed int)bytes;
  }
}

// module_stop
// file cicero.c line 267
signed int module_stop(void)
{
  unsigned char c = (unsigned char)1;
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$1;
    return_value_ctime$1=ctime(&t);
    tstr=g_strdup(return_value_ctime$1);
    unsigned long int return_value_strlen$2;
    return_value_strlen$2=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "cicero: stop()\n");
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "cicero: stop()\n");
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  cicero_stop = 1;
  mywrite(fd2[(signed long int)1], (const void *)&c, 1);
  return 0;
}

// module_strip_punctuation_default
// file module_utils.c line 601
void module_strip_punctuation_default(char *buf)
{
  /* assertion buf != ((void *)0) */
  assert(buf != (char *)(void *)0);
  module_strip_punctuation_some(buf, "~#$%^&*+=|<>[]_");
}

// module_strip_punctuation_some
// file module_utils.c line 538
void module_strip_punctuation_some(char *message, char *punct_chars)
{
  signed int len;
  char *p = message;
  signed int i;
  /* assertion message != ((void *)0) */
  assert(message != (char *)(void *)0);
  if(!(punct_chars == ((char *)NULL)))
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(message);
    len = (signed int)return_value_strlen$1;
    i = 0;
    for( ; len + -1 >= i; i = i + 1)
    {
      char *return_value_strchr$4;
      return_value_strchr$4=strchr(punct_chars, (signed int)*p);
      if(!(return_value_strchr$4 == ((char *)NULL)))
      {
        if(!(Debug == 0))
        {
          signed long int t;
          struct timeval tv;
          char *tstr;
          t=time((signed long int *)(void *)0);
          char *return_value_ctime$2;
          return_value_ctime$2=ctime(&t);
          tstr=g_strdup(return_value_ctime$2);
          unsigned long int return_value_strlen$3;
          return_value_strlen$3=strlen(tstr);
          tstr[(signed long int)(return_value_strlen$3 - (unsigned long int)1)] = (char)0;
          gettimeofday(&tv, (struct timezone *)(void *)0);
          fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(stderr, ": ");
          fprintf(stderr, "Substitution %d: char -%c- for whitespace\n", i, *p);
          fprintf(stderr, "\n");
          fflush(stderr);
          if(Debug == 2 || Debug == 3)
          {
            fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
            fprintf(CustomDebugFile, ": ");
            fprintf(CustomDebugFile, "Substitution %d: char -%c- for whitespace\n", i, *p);
            fprintf(CustomDebugFile, "\n");
            fflush(CustomDebugFile);
          }

          g_free((void *)tstr);
        }

        *p = (char)32;
      }

      p = p + 1l;
    }
  }

}

// module_strip_ssml
// file module_utils.h line 183
char * module_strip_ssml(char *message)
{
  signed int len;
  char *out;
  signed int i;
  signed int n;
  signed int omit = 0;
  /* assertion message != ((void *)0) */
  assert(message != (char *)(void *)0);
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(message);
  len = (signed int)return_value_strlen$1;
  void *return_value_g_malloc$2;
  return_value_g_malloc$2=g_malloc(sizeof(char) /*1ul*/  * (unsigned long int)(len + 1));
  out = (char *)return_value_g_malloc$2;
  i = 0;
  n = 0;
  signed int tmp_post$3;
  signed int return_value_strncmp$8;
  signed int tmp_post$4;
  signed int return_value_strncmp$7;
  signed int tmp_post$5;
  signed int tmp_post$6;
  for( ; len >= i; i = i + 1)
    if((signed int)message[(signed long int)i] == 60)
      omit = 1;

    else
      if((signed int)message[(signed long int)i] == 62)
        omit = 0;

      else
      {
        signed int return_value_strncmp$9;
        return_value_strncmp$9=strncmp(&message[(signed long int)i], "&lt;", (unsigned long int)4);
        if(return_value_strncmp$9 == 0)
        {
          i = i + 3;
          tmp_post$3 = n;
          n = n + 1;
          out[(signed long int)tmp_post$3] = (char)60;
        }

        else
        {
          return_value_strncmp$8=strncmp(&message[(signed long int)i], "&gt;", (unsigned long int)4);
          if(return_value_strncmp$8 == 0)
          {
            i = i + 3;
            tmp_post$4 = n;
            n = n + 1;
            out[(signed long int)tmp_post$4] = (char)62;
          }

          else
          {
            return_value_strncmp$7=strncmp(&message[(signed long int)i], "&amp;", (unsigned long int)5);
            if(return_value_strncmp$7 == 0)
            {
              i = i + 4;
              tmp_post$5 = n;
              n = n + 1;
              out[(signed long int)tmp_post$5] = (char)38;
            }

            else
              if(i == len || omit == 0)
              {
                tmp_post$6 = n;
                n = n + 1;
                out[(signed long int)tmp_post$6] = message[(signed long int)i];
              }

          }
        }
      }
  if(!(Debug == 0))
  {
    signed long int t;
    struct timeval tv;
    char *tstr;
    t=time((signed long int *)(void *)0);
    char *return_value_ctime$10;
    return_value_ctime$10=ctime(&t);
    tstr=g_strdup(return_value_ctime$10);
    unsigned long int return_value_strlen$11;
    return_value_strlen$11=strlen(tstr);
    tstr[(signed long int)(return_value_strlen$11 - (unsigned long int)1)] = (char)0;
    gettimeofday(&tv, (struct timezone *)(void *)0);
    fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
    fprintf(stderr, ": ");
    fprintf(stderr, "In stripping ssml: |%s|", out);
    fprintf(stderr, "\n");
    fflush(stderr);
    if(Debug == 2 || Debug == 3)
    {
      fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(CustomDebugFile, ": ");
      fprintf(CustomDebugFile, "In stripping ssml: |%s|", out);
      fprintf(CustomDebugFile, "\n");
      fflush(CustomDebugFile);
    }

    g_free((void *)tstr);
  }

  return out;
}

// module_terminate_thread
// file module_utils.h line 210
signed int module_terminate_thread(unsigned long int thread)
{
  signed int ret;
  ret=pthread_cancel(thread);
  if(!(ret == 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$1;
      return_value_ctime$1=ctime(&t);
      tstr=g_strdup(return_value_ctime$1);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Cancellation of speak thread failed");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Cancellation of speak thread failed");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    return 1;
  }

  else
  {
    ret=pthread_join(thread, (void **)(void *)0);
    if(!(ret == 0))
    {
      if(!(Debug == 0))
      {
        signed long int module_terminate_thread$$1$$2$$1$$t;
        struct timeval module_terminate_thread$$1$$2$$1$$tv;
        char *module_terminate_thread$$1$$2$$1$$tstr;
        module_terminate_thread$$1$$2$$1$$t=time((signed long int *)(void *)0);
        char *return_value_ctime$3;
        return_value_ctime$3=ctime(&module_terminate_thread$$1$$2$$1$$t);
        module_terminate_thread$$1$$2$$1$$tstr=g_strdup(return_value_ctime$3);
        unsigned long int return_value_strlen$4;
        return_value_strlen$4=strlen(module_terminate_thread$$1$$2$$1$$tstr);
        module_terminate_thread$$1$$2$$1$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
        gettimeofday(&module_terminate_thread$$1$$2$$1$$tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", module_terminate_thread$$1$$2$$1$$tstr, (signed int)module_terminate_thread$$1$$2$$1$$tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "join failed!\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", module_terminate_thread$$1$$2$$1$$tstr, (signed int)module_terminate_thread$$1$$2$$1$$tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "join failed!\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)module_terminate_thread$$1$$2$$1$$tstr);
      }

      return 1;
    }

    else
      return 0;
  }
}

// module_tts_output
// file module_utils.c line 981
signed int module_tts_output(struct anonymous$8 track, enum anonymous$9 format)
{
  signed int return_value_spd_audio_play$3;
  return_value_spd_audio_play$3=spd_audio_play(module_audio_id, track, format);
  if(!(return_value_spd_audio_play$3 >= 0))
  {
    if(!(Debug == 0))
    {
      signed long int t;
      struct timeval tv;
      char *tstr;
      t=time((signed long int *)(void *)0);
      char *return_value_ctime$1;
      return_value_ctime$1=ctime(&t);
      tstr=g_strdup(return_value_ctime$1);
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(tstr);
      tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
      gettimeofday(&tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't play track for unknown reason.");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't play track for unknown reason.");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)tstr);
    }

    return -1;
  }

  else
    return 0;
}

// my_dlopenextglobal
// file spd_audio.c line 62
static struct lt__handle * my_dlopenextglobal(const char *filename)
{
  struct lt__handle *handle = (struct lt__handle *)(void *)0;
  struct lt__advise *advise;
  signed int return_value_lt_dladvise_init$1;
  return_value_lt_dladvise_init$1=lt_dladvise_init(&advise);
  signed int return_value_lt_dladvise_global$2;
  if(!(return_value_lt_dladvise_init$1 == 0))
    return handle;

  else
  {
    signed int return_value_lt_dladvise_ext$3;
    return_value_lt_dladvise_ext$3=lt_dladvise_ext(&advise);
    if(return_value_lt_dladvise_ext$3 == 0)
    {
      return_value_lt_dladvise_global$2=lt_dladvise_global(&advise);
      if(return_value_lt_dladvise_global$2 == 0)
        handle=lt_dlopenadvise(filename, advise);

    }

    lt_dladvise_destroy(&advise);
    return handle;
  }
}

// mywrite
// file cicero.c line 106
static void mywrite(signed int fd, const void *buf, signed int len)
{
  char *pos = (char *)buf;
  signed int w;
  _Bool tmp_if_expr$8;
  signed int *return_value___errno_location$7;
  signed int *return_value___errno_location$5;
  _Bool tmp_if_expr$2;
  signed int return_value_hasTimedOut$1;
  if(fd >= 0)
  {
    hasTimedOut(0);
    do
    {
      signed long int return_value_write$9;
      return_value_write$9=write(fd, (const void *)pos, (unsigned long int)len);
      w = (signed int)return_value_write$9;
      if(!(w >= 0))
      {
        signed int *return_value___errno_location$6;
        return_value___errno_location$6=__errno_location();
        if(*return_value___errno_location$6 == 4)
          tmp_if_expr$8 = (_Bool)1;

        else
        {
          return_value___errno_location$7=__errno_location();
          tmp_if_expr$8 = *return_value___errno_location$7 == 11 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$8)
          goto __CPROVER_DUMP_L11;

        else
        {
          return_value___errno_location$5=__errno_location();
          if(*return_value___errno_location$5 == 32)
          {
            if(!(Debug == 0))
            {
              signed long int t;
              struct timeval tv;
              char *tstr;
              t=time((signed long int *)(void *)0);
              char *return_value_ctime$3;
              return_value_ctime$3=ctime(&t);
              tstr=g_strdup(return_value_ctime$3);
              unsigned long int return_value_strlen$4;
              return_value_strlen$4=strlen(tstr);
              tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
              gettimeofday(&tv, (struct timezone *)(void *)0);
              fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
              fprintf(stderr, ": ");
              fprintf(stderr, "Broken pipe\n");
              fprintf(stderr, "\n");
              fflush(stderr);
              if(Debug == 2 || Debug == 3)
              {
                fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
                fprintf(CustomDebugFile, ": ");
                fprintf(CustomDebugFile, "Broken pipe\n");
                fprintf(CustomDebugFile, "\n");
                fflush(CustomDebugFile);
              }

              g_free((void *)tstr);
            }

          }

          else
            perror("Pipe write");
        }
        goto __CPROVER_DUMP_L15;
      }

      pos = pos + (signed long int)w;
      len = len - w;

    __CPROVER_DUMP_L11:
      ;
      if(!(len == 0))
      {
        return_value_hasTimedOut$1=hasTimedOut(600);
        tmp_if_expr$2 = !(return_value_hasTimedOut$1 != 0) ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$2 = (_Bool)0;
    }
    while(tmp_if_expr$2);
    if(!(len == 0))
      fprintf(stderr, "Pipe write timed out");

  }


__CPROVER_DUMP_L15:
  ;
}

// set_speaking_thread_parameters
// file module_utils.h line 165
void set_speaking_thread_parameters()
{
  signed int ret;
  struct anonymous$14 all_signals;
  ret=sigfillset(&all_signals);
  if(ret == 0)
  {
    ret=pthread_sigmask(0, &all_signals, (struct anonymous$14 *)(void *)0);
    if(!(ret == 0))
    {
      if(!(Debug == 0))
      {
        signed long int t;
        struct timeval tv;
        char *tstr;
        t=time((signed long int *)(void *)0);
        char *return_value_ctime$1;
        return_value_ctime$1=ctime(&t);
        tstr=g_strdup(return_value_ctime$1);
        unsigned long int return_value_strlen$2;
        return_value_strlen$2=strlen(tstr);
        tstr[(signed long int)(return_value_strlen$2 - (unsigned long int)1)] = (char)0;
        gettimeofday(&tv, (struct timezone *)(void *)0);
        fprintf(stderr, " %s [%d]", tstr, (signed int)tv.tv_usec);
        fprintf(stderr, ": ");
        fprintf(stderr, "Can't set signal set, expect problems when terminating!\n");
        fprintf(stderr, "\n");
        fflush(stderr);
        if(Debug == 2 || Debug == 3)
        {
          fprintf(CustomDebugFile, " %s [%d]", tstr, (signed int)tv.tv_usec);
          fprintf(CustomDebugFile, ": ");
          fprintf(CustomDebugFile, "Can't set signal set, expect problems when terminating!\n");
          fprintf(CustomDebugFile, "\n");
          fflush(CustomDebugFile);
        }

        g_free((void *)tstr);
      }

    }

  }

  else
    if(!(Debug == 0))
    {
      signed long int set_speaking_thread_parameters$$1$$2$$1$$t;
      struct timeval set_speaking_thread_parameters$$1$$2$$1$$tv;
      char *set_speaking_thread_parameters$$1$$2$$1$$tstr;
      set_speaking_thread_parameters$$1$$2$$1$$t=time((signed long int *)(void *)0);
      char *return_value_ctime$3;
      return_value_ctime$3=ctime(&set_speaking_thread_parameters$$1$$2$$1$$t);
      set_speaking_thread_parameters$$1$$2$$1$$tstr=g_strdup(return_value_ctime$3);
      unsigned long int return_value_strlen$4;
      return_value_strlen$4=strlen(set_speaking_thread_parameters$$1$$2$$1$$tstr);
      set_speaking_thread_parameters$$1$$2$$1$$tstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
      gettimeofday(&set_speaking_thread_parameters$$1$$2$$1$$tv, (struct timezone *)(void *)0);
      fprintf(stderr, " %s [%d]", set_speaking_thread_parameters$$1$$2$$1$$tstr, (signed int)set_speaking_thread_parameters$$1$$2$$1$$tv.tv_usec);
      fprintf(stderr, ": ");
      fprintf(stderr, "Can't fill signal set, expect problems when terminating!\n");
      fprintf(stderr, "\n");
      fflush(stderr);
      if(Debug == 2 || Debug == 3)
      {
        fprintf(CustomDebugFile, " %s [%d]", set_speaking_thread_parameters$$1$$2$$1$$tstr, (signed int)set_speaking_thread_parameters$$1$$2$$1$$tv.tv_usec);
        fprintf(CustomDebugFile, ": ");
        fprintf(CustomDebugFile, "Can't fill signal set, expect problems when terminating!\n");
        fprintf(CustomDebugFile, "\n");
        fflush(CustomDebugFile);
      }

      g_free((void *)set_speaking_thread_parameters$$1$$2$$1$$tstr);
    }

  pthread_setcancelstate(0, (signed int *)(void *)0);
  pthread_setcanceltype(1, (signed int *)(void *)0);
}

// spd_audio_close
// file spd_audio.c line 254
signed int spd_audio_close(struct anonymous$7 *id)
{
  signed int ret = 0;
  if(!(id == ((struct anonymous$7 *)NULL)))
  {
    if(!(id->function->close == ((signed int (*)(struct anonymous$7 *))NULL)))
      ret=id->function->close(id);

  }

  if(!(lt_h == ((struct lt__handle *)NULL)))
  {
    lt_dlclose(lt_h);
    lt_h = (struct lt__handle *)(void *)0;
    lt_dlexit();
  }

  return ret;
}

// spd_audio_get_playcmd
// file spd_audio.c line 315
const char * spd_audio_get_playcmd(struct anonymous$7 *id)
{
  if(!(id == ((struct anonymous$7 *)NULL)))
  {
    if(!(id->function == ((struct spd_audio_plugin *)NULL)))
    {
      const char *return_value;
      return_value=id->function->get_playcmd();
      return return_value;
    }

  }

  return (const char *)(void *)0;
}

// spd_audio_open
// file spd_audio.c line 93
struct anonymous$7 * spd_audio_open(char *name, void **pars, char **error)
{
  struct anonymous$7 *id;
  const struct spd_audio_plugin *p;
  struct spd_audio_plugin * (*fn)(void);
  char *libname;
  signed int ret;
  ret=lt_dlinit();
  if(!(ret == 0))
  {
    char *return_value_g_strdup_printf$1;
    return_value_g_strdup_printf$1=g_strdup_printf("lt_dlinit() failed");
    *error = (char *)return_value_g_strdup_printf$1;
    return (struct anonymous$7 *)(void *)0;
  }

  ret=lt_dlsetsearchpath("/usr/lib/x86_64-linux-gnu/speech-dispatcher");
  if(!(ret == 0))
  {
    char *return_value_g_strdup_printf$2;
    return_value_g_strdup_printf$2=g_strdup_printf("lt_dlsetsearchpath() failed");
    *error = (char *)return_value_g_strdup_printf$2;
    return (struct anonymous$7 *)(void *)0;
  }

  libname=g_strdup_printf("spd_%s", name);
  lt_h=my_dlopenextglobal(libname);
  g_free((void *)libname);
  if(lt_h == ((struct lt__handle *)NULL))
  {
    const char *return_value_lt_dlerror$3;
    return_value_lt_dlerror$3=lt_dlerror();
    char *return_value_g_strdup_printf$4;
    return_value_g_strdup_printf$4=g_strdup_printf("Cannot open plugin %s. error: %s", name, return_value_lt_dlerror$3);
    *error = (char *)return_value_g_strdup_printf$4;
    return (struct anonymous$7 *)(void *)0;
  }

  void *return_value_lt_dlsym$5;
  return_value_lt_dlsym$5=lt_dlsym(lt_h, "spd_audio_plugin_get");
  fn = (struct spd_audio_plugin * (*)(void))return_value_lt_dlsym$5;
  if(fn == ((struct spd_audio_plugin * (*)(void))NULL))
  {
    char *return_value_g_strdup_printf$6;
    return_value_g_strdup_printf$6=g_strdup_printf("Cannot find symbol %s", (const void *)"spd_audio_plugin_get");
    *error = (char *)return_value_g_strdup_printf$6;
    return (struct anonymous$7 *)(void *)0;
  }

  p=fn();
  _Bool tmp_if_expr$8;
  if(p == ((const struct spd_audio_plugin *)NULL))
    tmp_if_expr$8 = (_Bool)1;

  else
    tmp_if_expr$8 = p->name == (const char *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$8)
  {
    char *return_value_g_strdup_printf$7;
    return_value_g_strdup_printf$7=g_strdup_printf("plugin %s not found", name);
    *error = (char *)return_value_g_strdup_printf$7;
    return (struct anonymous$7 *)(void *)0;
  }

  id=p->open(pars);
  if(id == ((struct anonymous$7 *)NULL))
  {
    char *return_value_g_strdup_printf$9;
    return_value_g_strdup_printf$9=g_strdup_printf("Couldn't open %s plugin", name);
    *error = (char *)return_value_g_strdup_printf$9;
    return (struct anonymous$7 *)(void *)0;
  }

  id->function = p;
  id->format = (enum anonymous$9)SPD_AUDIO_LE;
  *error = (char *)(void *)0;
  return id;
}

// spd_audio_play
// file spd_audio.c line 174
signed int spd_audio_play(struct anonymous$7 *id, struct anonymous$8 track, enum anonymous$9 format)
{
  signed int ret;
  _Bool tmp_if_expr$1;
  if(!(id == ((struct anonymous$7 *)NULL)))
    tmp_if_expr$1 = id->function->play != ((signed int (*)(struct anonymous$7 *, struct anonymous$8))NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
  {
    if(!(format == id->format))
    {
      unsigned char *out_ptr;
      unsigned char *out_end;
      unsigned char c;
      out_ptr = (unsigned char *)track.samples;
      out_end = out_ptr + (signed long int)(track.num_samples * 2 * track.num_channels);
      for( ; !(out_ptr >= out_end); out_ptr = out_ptr + (signed long int)2)
      {
        c = out_ptr[(signed long int)0];
        out_ptr[(signed long int)0] = out_ptr[(signed long int)1];
        out_ptr[(signed long int)1] = c;
      }
    }

    ret=id->function->play(id, track);
  }

  else
  {
    fprintf(stderr, "Play not supported on this device\n");
    return -1;
  }
  return ret;
}

// spd_audio_set_loglevel
// file spd_audio.c line 306
void spd_audio_set_loglevel(struct anonymous$7 *id, signed int level)
{
  if(!(level == 0))
  {
    spd_audio_log_level = level;
    if(!(id == ((struct anonymous$7 *)NULL)))
    {
      if(!(id->function == ((struct spd_audio_plugin *)NULL)))
        id->function->set_loglevel(level);

    }

  }

}

// spd_audio_set_volume
// file spd_audio.c line 292
signed int spd_audio_set_volume(struct anonymous$7 *id, signed int volume)
{
  if(volume >= 101 || !(volume >= -100))
  {
    fprintf(stderr, "Requested volume out of range");
    return -1;
  }

  else
    if(id == ((struct anonymous$7 *)NULL))
    {
      fprintf(stderr, "audio id is NULL in spd_audio_set_volume\n");
      return -1;
    }

    else
    {
      id->volume = volume;
      return 0;
    }
}

// spd_audio_stop
// file spd_audio.c line 228
signed int spd_audio_stop(struct anonymous$7 *id)
{
  signed int ret;
  _Bool tmp_if_expr$1;
  if(!(id == ((struct anonymous$7 *)NULL)))
    tmp_if_expr$1 = id->function->stop != ((signed int (*)(struct anonymous$7 *))NULL) ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  if(tmp_if_expr$1)
    ret=id->function->stop(id);

  else
  {
    fprintf(stderr, "Stop not supported on this device\n");
    return -1;
  }
  return ret;
}

// spd_getline
// file ../../include/spd_utils.h line 29
signed long int spd_getline(char **lineptr, unsigned long int *n, struct _IO_FILE *f)
{
  char ch;
  signed long int buf_pos = (signed long int)0;
  signed long int needed = (signed long int)2;
  unsigned long int new_length = (unsigned long int)0;
  char *temp;
  if(lineptr == ((char **)NULL) || f == ((struct _IO_FILE *)NULL) || n == ((unsigned long int *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 22;
    return (signed long int)-1;
  }

  signed int *return_value___errno_location$3;
  return_value___errno_location$3=__errno_location();
  signed int *return_value___errno_location$2;
  if(!(*return_value___errno_location$3 == 0))
  {
    return_value___errno_location$2=__errno_location();
    *return_value___errno_location$2 = 0;
  }

  _Bool tmp_if_expr$5;
  if(*lineptr == ((char *)NULL))
    tmp_if_expr$5 = (_Bool)1;

  else
    tmp_if_expr$5 = *n == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$5)
  {
    *n = (unsigned long int)120;
    void *return_value_g_malloc$4;
    return_value_g_malloc$4=g_malloc(*n * sizeof(char) /*1ul*/ );
    *lineptr = (char *)return_value_g_malloc$4;
    if(*lineptr == ((char *)NULL))
    {
      *n = (unsigned long int)0;
      return (signed long int)-1;
    }

  }

  signed int return_value__IO_getc$6;
  signed long int tmp_post$10;
  do
  {
    return_value__IO_getc$6=_IO_getc(f);
    ch = (char)return_value__IO_getc$6;
    if((signed int)ch == -1)
      break;

    signed int *return_value___errno_location$7;
    return_value___errno_location$7=__errno_location();
    if(!(*return_value___errno_location$7 == 0))
      return (signed long int)-1;

    if(!(*n >= (unsigned long int)needed))
    {
      new_length = *n * (unsigned long int)2;
      if(*n >= new_length)
      {
        signed int *return_value___errno_location$8;
        return_value___errno_location$8=__errno_location();
        *return_value___errno_location$8 = 12;
        ungetc((signed int)ch, f);
        return (signed long int)-1;
      }

      void *return_value_g_realloc$9;
      return_value_g_realloc$9=g_realloc((void *)*lineptr, new_length * sizeof(char) /*1ul*/ );
      temp = (char *)return_value_g_realloc$9;
      if(temp == ((char *)NULL))
      {
        ungetc((signed int)ch, f);
        return (signed long int)-1;
      }

      *n = new_length;
      *lineptr = temp;
    }

    tmp_post$10 = buf_pos;
    buf_pos = buf_pos + 1l;
    (*lineptr)[tmp_post$10] = ch;
    if((signed int)ch == 10)
      break;

    if(needed == 0x7fffffffffffffffL)
    {
      signed int *return_value___errno_location$11;
      return_value___errno_location$11=__errno_location();
      *return_value___errno_location$11 = 12;
      return (signed long int)-1;
    }

    needed = needed + 1l;
  }
  while((_Bool)1);
  (*lineptr)[buf_pos] = (char)0;
  if(buf_pos == 0l)
    buf_pos = (signed long int)-1;

  return buf_pos;
}

// str2ECapLetRecogn
// file ../../include/fdsetconv.h line 22
enum anonymous$3 str2ECapLetRecogn(char *str)
{
  enum anonymous$3 recogn;
  signed int return_value_strcmp$3;
  return_value_strcmp$3=strcmp(str, "none");
  signed int return_value_strcmp$2;
  signed int return_value_strcmp$1;
  if(return_value_strcmp$3 == 0)
    recogn = (enum anonymous$3)SPD_CAP_NONE;

  else
  {
    return_value_strcmp$2=strcmp(str, "spell");
    if(return_value_strcmp$2 == 0)
      recogn = (enum anonymous$3)SPD_CAP_SPELL;

    else
    {
      return_value_strcmp$1=strcmp(str, "icon");
      if(return_value_strcmp$1 == 0)
        recogn = (enum anonymous$3)SPD_CAP_ICON;

      else
        recogn = (enum anonymous$3)-1;
    }
  }
  return recogn;
}

// str2EPunctMode
// file ../../include/fdsetconv.h line 14
enum anonymous$6 str2EPunctMode(char *str)
{
  enum anonymous$6 punct;
  signed int return_value_strcmp$3;
  return_value_strcmp$3=strcmp(str, "none");
  signed int return_value_strcmp$2;
  signed int return_value_strcmp$1;
  if(return_value_strcmp$3 == 0)
    punct = (enum anonymous$6)SPD_PUNCT_NONE;

  else
  {
    return_value_strcmp$2=strcmp(str, "all");
    if(return_value_strcmp$2 == 0)
      punct = (enum anonymous$6)SPD_PUNCT_ALL;

    else
    {
      return_value_strcmp$1=strcmp(str, "some");
      if(return_value_strcmp$1 == 0)
        punct = (enum anonymous$6)SPD_PUNCT_SOME;

      else
        punct = (enum anonymous$6)-1;
    }
  }
  return punct;
}

// str2ESpellMode
// file ../../include/fdsetconv.h line 18
enum anonymous$2 str2ESpellMode(char *str)
{
  enum anonymous$2 spell;
  signed int return_value_strcmp$2;
  return_value_strcmp$2=strcmp(str, "on");
  signed int return_value_strcmp$1;
  if(return_value_strcmp$2 == 0)
    spell = (enum anonymous$2)SPD_SPELL_ON;

  else
  {
    return_value_strcmp$1=strcmp(str, "off");
    if(return_value_strcmp$1 == 0)
      spell = (enum anonymous$2)SPD_SPELL_OFF;

    else
      spell = (enum anonymous$2)-1;
  }
  return spell;
}

// str2EVoice
// file ../../include/fdsetconv.h line 10
enum anonymous$5 str2EVoice(char *str)
{
  enum anonymous$5 voice;
  signed int return_value_strcmp$8;
  return_value_strcmp$8=strcmp(str, "male1");
  signed int return_value_strcmp$7;
  signed int return_value_strcmp$6;
  signed int return_value_strcmp$5;
  signed int return_value_strcmp$4;
  signed int return_value_strcmp$3;
  signed int return_value_strcmp$2;
  signed int return_value_strcmp$1;
  if(return_value_strcmp$8 == 0)
    voice = (enum anonymous$5)SPD_MALE1;

  else
  {
    return_value_strcmp$7=strcmp(str, "male2");
    if(return_value_strcmp$7 == 0)
      voice = (enum anonymous$5)SPD_MALE2;

    else
    {
      return_value_strcmp$6=strcmp(str, "male3");
      if(return_value_strcmp$6 == 0)
        voice = (enum anonymous$5)SPD_MALE3;

      else
      {
        return_value_strcmp$5=strcmp(str, "female1");
        if(return_value_strcmp$5 == 0)
          voice = (enum anonymous$5)SPD_FEMALE1;

        else
        {
          return_value_strcmp$4=strcmp(str, "female2");
          if(return_value_strcmp$4 == 0)
            voice = (enum anonymous$5)SPD_FEMALE2;

          else
          {
            return_value_strcmp$3=strcmp(str, "female3");
            if(return_value_strcmp$3 == 0)
              voice = (enum anonymous$5)SPD_FEMALE3;

            else
            {
              return_value_strcmp$2=strcmp(str, "child_male");
              if(return_value_strcmp$2 == 0)
                voice = (enum anonymous$5)SPD_CHILD_MALE;

              else
              {
                return_value_strcmp$1=strcmp(str, "child_female");
                if(return_value_strcmp$1 == 0)
                  voice = (enum anonymous$5)SPD_CHILD_FEMALE;

                else
                  voice = (enum anonymous$5)-1;
              }
            }
          }
        }
      }
    }
  }
  return voice;
}

// str2intpriority
// file fdsetconv.c line 200
enum anonymous$4 str2intpriority(char *str)
{
  enum anonymous$4 priority;
  signed int return_value_strcmp$5;
  return_value_strcmp$5=strcmp(str, "important");
  signed int return_value_strcmp$4;
  signed int return_value_strcmp$3;
  signed int return_value_strcmp$2;
  signed int return_value_strcmp$1;
  if(return_value_strcmp$5 == 0)
    priority = (enum anonymous$4)SPD_IMPORTANT;

  else
  {
    return_value_strcmp$4=strcmp(str, "message");
    if(return_value_strcmp$4 == 0)
      priority = (enum anonymous$4)SPD_MESSAGE;

    else
    {
      return_value_strcmp$3=strcmp(str, "text");
      if(return_value_strcmp$3 == 0)
        priority = (enum anonymous$4)SPD_TEXT;

      else
      {
        return_value_strcmp$2=strcmp(str, "notification");
        if(return_value_strcmp$2 == 0)
          priority = (enum anonymous$4)SPD_NOTIFICATION;

        else
        {
          return_value_strcmp$1=strcmp(str, "progress");
          if(return_value_strcmp$1 == 0)
            priority = (enum anonymous$4)SPD_PROGRESS;

          else
            priority = (enum anonymous$4)-1;
        }
      }
    }
  }
  return priority;
}

