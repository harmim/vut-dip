// tag-#anon#ST[*{*{SYM#tag-#anon#ST[U16'LoID'||U16'HiID'||U32'$pad0'||U64'DatLen'||*{U8}$U8$'Buffer'|]#}$SYM#tag-#anon#ST[U16'LoID'||U16'HiID'||U32'$pad0'||U64'DatLen'||*{U8}$U8$'Buffer'|]#$}$*{SYM#tag-#anon#ST[U16'LoID'||U16'HiID'||U32'$pad0'||U64'DatLen'||*{U8}$U8$'Buffer'|]#}$SYM#tag-#anon#ST[U16'LoID'||U16'HiID'||U32'$pad0'||U64'DatLen'||*{U8}$U8$'Buffer'|]#$$'Fields'||U64'NumFields'||U64'NumAlloc'|]
// file jamlib/jam.h line 230
struct anonymous$8;

// tag-#anon#ST[*{SYM#tag-_IO_FILE#}$SYM#tag-_IO_FILE#$'HdrFile_PS'||*{SYM#tag-_IO_FILE#}$SYM#tag-_IO_FILE#$'TxtFile_PS'||*{SYM#tag-_IO_FILE#}$SYM#tag-_IO_FILE#$'IdxFile_PS'||*{SYM#tag-_IO_FILE#}$SYM#tag-_IO_FILE#$'LrdFile_PS'||S32'Errno_I'||S32'Locked_I'||U64'LastUserPos_I'||U64'LastUserId_I'|]
// file jamlib/jam.h line 216
struct anonymous$7;

// tag-#anon#ST[ARR16{S64}$S64$'__fds_bits'|]
// file /usr/include/x86_64-linux-gnu/sys/select.h line 64
struct anonymous$1;

// tag-#anon#ST[ARR4{U8}$U8$'Signature'||U16'Revision'||U16'ReservedWord'||U64'SubfieldLen'||U64'TimesRead'||U64'MsgIdCRC'||U64'ReplyCRC'||U64'ReplyTo'||U64'Reply1st'||U64'ReplyNext'||U64'DateWritten'||U64'DateReceived'||U64'DateProcessed'||U64'MsgNum'||U64'Attribute'||U64'Attribute2'||U64'TxtOffset'||U64'TxtLen'||U64'PasswordCRC'||U64'Cost'|]
// file jamlib/jam.h line 131
struct anonymous$5;

// tag-#anon#ST[ARR4{U8}$U8$'Signature'||U32'$pad0'||U64'DateCreated'||U64'ModCounter'||U64'ActiveMsgs'||U64'PasswordCRC'||U64'BaseMsgNum'||ARR1000{U8}$U8$'RSRVD'|]
// file jamlib/jam.h line 85
struct anonymous$4;

// tag-#anon#ST[U16'LoID'||U16'HiID'||U32'$pad0'||U64'DatLen'|]
// file jam.h line 189
struct anonymous$0;

// tag-#anon#ST[U16'LoID'||U16'HiID'||U32'$pad0'||U64'DatLen'||*{U8}$U8$'Buffer'|]
// file jamlib/jam.h line 182
struct anonymous$6;

// tag-#anon#ST[U64'UserCRC'||U64'HdrOffset'|]
// file jam.h line 198
struct anonymous;

// tag-#anon#ST[U64'UserCRC'||U64'UserID'||U64'LastReadMsg'||U64'HighReadMsg'|]
// file jam.h line 206
struct anonymous$2;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$3;

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

// tag-attributename
// file nntpserv.c line 488
struct attributename;

// tag-flock
// file /usr/include/x86_64-linux-gnu/bits/fcntl.h line 35
struct flock;

// tag-group
// file nntpserv.h line 23
struct group;

// tag-hostent
// file /usr/include/netdb.h line 100
struct hostent;

// tag-in_addr
// file /usr/include/netinet/in.h line 31
struct in_addr;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-sockaddr
// file /usr/include/x86_64-linux-gnu/bits/socket.h line 149
struct sockaddr;

// tag-sockaddr_in
// file /usr/include/netinet/in.h line 237
struct sockaddr_in;

// tag-sockio
// file nntpserv.h line 20
struct sockio;

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-var
// file nntpserv.h line 18
struct var;

// tag-xlat
// file nntpserv.h line 36
struct xlat;

// tag-xlatalias
// file nntpserv.h line 38
struct xlatalias;

// tag-xlattab
// file nntpserv.h line 40
struct xlattab;

#ifndef NULL
#define NULL ((void*)0)
#endif

// JAM_AddEmptyMessage
// file message.c line 469
signed int JAM_AddEmptyMessage(struct anonymous$7 *Base_PS);
// JAM_AddMessage
// file jamlib/jam.h line 285
signed int JAM_AddMessage(struct anonymous$7 *Base_PS, struct anonymous$5 *Header_PS, struct anonymous$8 *SubPack_PS, unsigned char *Text_PC, unsigned long int TextLen_I);
// JAM_ChangeMsgHeader
// file jamlib/jam.h line 296
signed int JAM_ChangeMsgHeader(struct anonymous$7 *Base_PS, unsigned long int MsgNo_I, struct anonymous$5 *Header_PS);
// JAM_ClearMsgHeader
// file jamlib/jam.h line 300
signed int JAM_ClearMsgHeader(struct anonymous$5 *Header_PS);
// JAM_CloseMB
// file jamlib/jam.h line 245
signed int JAM_CloseMB(struct anonymous$7 *Base_PS);
// JAM_Crc32
// file jamlib/jam.h line 330
unsigned long int JAM_Crc32(unsigned char *Buffer_PC, unsigned long int Length_I);
// JAM_CreateMB
// file mbase.c line 147
signed int JAM_CreateMB(unsigned char *Basename_PC, unsigned long int BaseMsg_I, struct anonymous$7 **NewArea_PPS);
// JAM_DelSubPacket
// file jamlib/jam.h line 318
signed int JAM_DelSubPacket(struct anonymous$8 *SubPack_PS);
// JAM_DeleteMessage
// file message.c line 505
signed int JAM_DeleteMessage(struct anonymous$7 *Base_PS, unsigned long int MsgNo_I);
// JAM_Errno
// file message.c line 601
signed int JAM_Errno(struct anonymous$7 *Base_PS);
// JAM_FindUser
// file mbase.c line 404
signed int JAM_FindUser(struct anonymous$7 *Base_PS, unsigned long int UserCrc_I, unsigned long int StartMsg_I, unsigned long int *MsgNo_PI);
// JAM_GetMBSize
// file jamlib/jam.h line 270
signed int JAM_GetMBSize(struct anonymous$7 *Base_PS, unsigned long int *Messages_PI);
// JAM_GetSubfield
// file jam.h line 320
struct anonymous$6 * JAM_GetSubfield(struct anonymous$8 *SubPack_PS);
// JAM_GetSubfield_R
// file jamlib/jam.h line 322
struct anonymous$6 * JAM_GetSubfield_R(struct anonymous$8 *SubPack_PS, unsigned long int *Count_PI);
// JAM_LockMB
// file jamlib/jam.h line 254
signed int JAM_LockMB(struct anonymous$7 *Base_PS, signed int Timeout_I);
// JAM_NewSubPacket
// file jamlib/jam.h line 316
struct anonymous$8 * JAM_NewSubPacket(void);
// JAM_OpenMB
// file jamlib/jam.h line 242
signed int JAM_OpenMB(unsigned char *Basename_PC, struct anonymous$7 **NewArea_PPS);
// JAM_PutSubfield
// file jamlib/jam.h line 325
signed int JAM_PutSubfield(struct anonymous$8 *SubPack_PS, struct anonymous$6 *Field_PS);
// JAM_ReadLastRead
// file lastread.c line 49
signed int JAM_ReadLastRead(struct anonymous$7 *Base_PS, unsigned long int User_I, struct anonymous$2 *Record_PS);
// JAM_ReadMBHeader
// file jamlib/jam.h line 259
signed int JAM_ReadMBHeader(struct anonymous$7 *Base_PS, struct anonymous$4 *Header_PS);
// JAM_ReadMsgHeader
// file jamlib/jam.h line 275
signed int JAM_ReadMsgHeader(struct anonymous$7 *Base_PS, unsigned long int MsgNo_I, struct anonymous$5 *Header_PS, struct anonymous$8 **SubfieldPack_PPS);
// JAM_ReadMsgText
// file jamlib/jam.h line 280
signed int JAM_ReadMsgText(struct anonymous$7 *Base_PS, unsigned long int Offset_I, unsigned long int Length_I, unsigned char *Buffer_PC);
// JAM_RemoveMB
// file mbase.c line 222
signed int JAM_RemoveMB(struct anonymous$7 *Base_PS, unsigned char *Basename_PC);
// JAM_UnlockMB
// file jamlib/jam.h line 257
signed int JAM_UnlockMB(struct anonymous$7 *Base_PS);
// JAM_WriteLastRead
// file lastread.c line 89
signed int JAM_WriteLastRead(struct anonymous$7 *Base_PS, unsigned long int User_I, struct anonymous$2 *Record_PS);
// JAM_WriteMBHeader
// file mbase.c line 372
signed int JAM_WriteMBHeader(struct anonymous$7 *Base_PS, struct anonymous$4 *Header_PS);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// accept
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 243
extern signed int accept(signed int, struct sockaddr *, unsigned int *);
// addjamfield
// file nntpserv.c line 1467
void addjamfield(struct anonymous$8 *SubPacket_PS, unsigned long int fieldnum, unsigned char *fielddata);
// allocsockio
// file sockio.h line 10
struct sockio * allocsockio(signed int socket);
// atoi
// file /usr/include/stdlib.h line 147
extern signed int atoi(const char *);
// atol
// file /usr/include/stdlib.h line 150
extern signed long int atol(const char *);
// bind
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 123
extern signed int bind(signed int, struct sockaddr *, unsigned int);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// cancelmessage
// file nntpserv.c line 1652
void cancelmessage(struct var *var, unsigned char *article, struct xlat *postxlat);
// checkallow
// file allow.h line 1
signed int checkallow(struct var *var, unsigned char *ip);
// chsgetbyte
// file xlat.c line 50
unsigned char chsgetbyte(struct var *var, unsigned char *filename, unsigned char *buf);
// chsgetline
// file xlat.c line 38
signed int chsgetline(struct _IO_FILE *fp, unsigned char *str, unsigned long int len);
// chsgetword
// file xlat.c line 89
signed int chsgetword(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen);
// close
// file /usr/include/unistd.h line 353
extern signed int close(signed int);
// command_abhs
// file nntpserv.c line 664
void command_abhs(struct var *var, unsigned char *cmd);
// command_authinfo
// file nntpserv.c line 2821
void command_authinfo(struct var *var);
// command_group
// file nntpserv.c line 387
void command_group(struct var *var);
// command_last
// file nntpserv.c line 454
void command_last(struct var *var);
// command_list
// file nntpserv.c line 312
void command_list(struct var *var);
// command_next
// file nntpserv.c line 420
void command_next(struct var *var);
// command_post
// file nntpserv.c line 2062
void command_post(struct var *var);
// command_xover
// file nntpserv.c line 1142
void command_xover(struct var *var);
// copyline
// file nntpserv.c line 530
void copyline(unsigned char *dest, unsigned char *src, signed long int len);
// count8bit
// file misc.h line 9
unsigned long int count8bit(unsigned char *text);
// createconfig
// file main.c line 310
void createconfig(unsigned char *file);
// decodeb64
// file mime.h line 5
void decodeb64(unsigned char *in, unsigned char *out);
// decodeqpbody
// file mime.h line 4
void decodeqpbody(unsigned char *in, unsigned char *out);
// decodeqpheader
// file mime.c line 99
void decodeqpheader(unsigned char *in, unsigned char *out);
// encodeb64
// file mime.c line 315
signed int encodeb64(unsigned char *data, unsigned char *dest, unsigned char *specials, signed int maxdestlen);
// encodeqp
// file mime.c line 276
signed int encodeqp(unsigned char *data, unsigned char *dest, unsigned char *specials, signed int maxdestlen);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
// fcntl
// file /usr/include/fcntl.h line 137
extern signed int fcntl(signed int, signed int, ...);
// feof
// file /usr/include/stdio.h line 828
extern signed int feof(struct _IO_FILE *);
// fflush
// file /usr/include/stdio.h line 242
extern signed int fflush(struct _IO_FILE *);
// fgets
// file /usr/include/stdio.h line 622
extern char * fgets(char *, signed int, struct _IO_FILE *);
// fileno
// file /usr/include/stdio.h line 858
extern signed int fileno(struct _IO_FILE *);
// findpostxlat
// file xlat.h line 30
struct xlat * findpostxlat(struct var *var, unsigned char *ichrs, unsigned char *destpat);
// findreadxlat
// file xlat.h line 29
struct xlat * findreadxlat(struct var *var, struct group *group, unsigned char *ichrs, unsigned char *icodepage, unsigned char *destpat);
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// freadjambaseheader
// file structrw.h line 71
signed int freadjambaseheader(struct _IO_FILE *fp, struct anonymous$4 *s_JamBaseHeader);
// freadjamindex
// file structrw.h line 77
signed int freadjamindex(struct _IO_FILE *fp, struct anonymous *s_JamIndex);
// freadjamlastread
// file structrw.h line 80
signed int freadjamlastread(struct _IO_FILE *fp, struct anonymous$2 *s_JamLastRead);
// freadjammsgheader
// file structrw.h line 74
signed int freadjammsgheader(struct _IO_FILE *fp, struct anonymous$5 *s_JamMsgHeader);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// freeargs
// file main.c line 354
void freeargs(void);
// freegroups
// file groups.h line 15
void freegroups(struct var *var);
// freelist
// file misc.h line 10
void freelist(void *first);
// freesockio
// file sockio.h line 11
void freesockio(struct sockio *sio);
// freexlat
// file xlat.h line 26
void freexlat(struct var *var);
// fseek
// file /usr/include/stdio.h line 749
extern signed int fseek(struct _IO_FILE *, signed long int, signed int);
// ftell
// file /usr/include/stdio.h line 754
extern signed long int ftell(struct _IO_FILE *);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// fwritejambaseheader
// file structrw.h line 72
signed int fwritejambaseheader(struct _IO_FILE *fp, struct anonymous$4 *s_JamBaseHeader);
// fwritejamindex
// file structrw.h line 78
signed int fwritejamindex(struct _IO_FILE *fp, struct anonymous *s_JamIndex);
// fwritejamlastread
// file structrw.h line 81
signed int fwritejamlastread(struct _IO_FILE *fp, struct anonymous$2 *s_JamLastRead);
// fwritejammsgheader
// file structrw.h line 75
signed int fwritejammsgheader(struct _IO_FILE *fp, struct anonymous$5 *s_JamMsgHeader);
// fwritejamsavesubfield
// file structrw.h line 83
signed int fwritejamsavesubfield(struct _IO_FILE *fp, struct anonymous$0 *s_JamSaveSubfield);
// get_msgid_num
// file nntpserv.c line 58
unsigned long int get_msgid_num(void);
// get_server_openconnections
// file nntpserv.h line 81
signed int get_server_openconnections(void);
// get_server_quit
// file nntpserv.h line 82
signed int get_server_quit(void);
// getcfgword
// file misc.h line 5
signed int getcfgword(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen);
// getcomma
// file misc.h line 12
signed int getcomma(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen);
// getcontenttypepart
// file nntpserv.c line 1396
signed int getcontenttypepart(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen);
// gethostbyaddr
// file /usr/include/netdb.h line 137
extern struct hostent * gethostbyaddr(const void *, unsigned int, signed int);
// getjamsubfield
// file structrw.h line 84
void getjamsubfield(unsigned char *buf, struct anonymous$6 *Subfield_S);
// getparentinfo
// file nntpserv.c line 1480
void getparentinfo(struct var *var, unsigned char *article, unsigned char *currentgroup, unsigned char *msgid, unsigned char *fromname, unsigned char *fromaddr, unsigned long int *msgnum, struct xlat *postxlat, signed int readorigin);
// getpeername
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 141
extern signed int getpeername(signed int, struct sockaddr *, unsigned int *);
// getpid
// file /usr/include/unistd.h line 628
extern signed int getpid(void);
// gmtime
// file /usr/include/time.h line 239
extern struct tm * gmtime(const signed long int *);
// htons
// file /usr/include/netinet/in.h line 379
extern unsigned short int htons(unsigned short int);
// inet_ntoa
// file /usr/include/arpa/inet.h line 53
extern char * inet_ntoa(struct in_addr);
// ispattern
// file misc.h line 11
signed int ispattern(unsigned char *pat);
// jam_Lock
// file mbase.c line 445
signed int jam_Lock(struct anonymous$7 *Base_PS, signed int DoLock_I);
// jam_Open
// file mbase.c line 547
signed int jam_Open(struct anonymous$7 *Base_PS, unsigned char *Basename_PC, char *Mode_PC);
// jamgetminmaxnum
// file nntpserv.c line 127
signed int jamgetminmaxnum(struct var *var, struct group *group, unsigned long int *min, unsigned long int *max, unsigned long int *num);
// jamgetulong
// file structrw.c line 50
unsigned long int jamgetulong(unsigned char *buf, unsigned long int offset);
// jamgetuword
// file structrw.c line 30
unsigned short int jamgetuword(unsigned char *buf, unsigned long int offset);
// jamopenarea
// file nntpserv.c line 98
signed int jamopenarea(struct var *var, struct group *group);
// jamputulong
// file structrw.c line 42
void jamputulong(unsigned char *buf, unsigned long int offset, unsigned long int num);
// jamputuword
// file structrw.c line 36
void jamputuword(unsigned char *buf, unsigned long int offset, unsigned short int num);
// linux_serverstub
// file os_linux.c line 29
void * linux_serverstub(void *arglist);
// linux_srv$object
// 
void linux_srv$object(signed int);
// listen
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 233
extern signed int listen(signed int, signed int);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// login
// file login.h line 1
signed int login(struct var *var, unsigned char *user, unsigned char *pass);
// makedate
// file misc.h line 3
void makedate(signed long int t, unsigned char *dest, unsigned char *tz);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// matchcharset
// file xlat.c line 272
signed int matchcharset(unsigned char *pat, unsigned char *chrs, unsigned char *codepage);
// matchgroup
// file misc.h line 6
signed int matchgroup(unsigned char *groups, unsigned char group);
// matchname
// file misc.h line 13
signed int matchname(unsigned char *namelist, unsigned char *name);
// matchpattern
// file misc.c line 174
signed int matchpattern(unsigned char *pat, unsigned char *str);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// mimemakeheaderline
// file mime.h line 7
void mimemakeheaderline(unsigned char *dest, unsigned long int destlen, unsigned char *keyword, unsigned char *data, unsigned char *chrs, unsigned char *fromaddr, signed int noencode);
// mimesendheaderline
// file mime.h line 6
void mimesendheaderline(struct var *var, unsigned char *keyword, unsigned char *data, unsigned char *chrs, unsigned char *fromaddr, signed int noencode);
// mktime
// file /usr/include/time.h line 199
extern signed long int mktime(struct tm *);
// mystrncpy
// file misc.h line 1
void mystrncpy(unsigned char *dest, unsigned char *src, signed long int len);
// ntohs
// file /usr/include/netinet/in.h line 375
extern unsigned short int ntohs(unsigned short int);
// os_errno
// file os.h line 21
signed int os_errno(void);
// os_free
// file os.h line 14
void os_free(void);
// os_getexclusive
// file os.h line 17
void os_getexclusive(void);
// os_init
// file os.h line 13
signed int os_init(void);
// os_logwrite
// file os.h line 19
void os_logwrite(unsigned char *fmt, ...);
// os_showerror
// file os.h line 20
void os_showerror(unsigned char *fmt, ...);
// os_sleep
// file os.h line 16
void os_sleep(signed int x);
// os_startserver
// file os.h line 15
void os_startserver(void (*srv)(signed int), signed int sock);
// os_startserver::srv$object
// 
void srv$object(signed int);
// os_stopexclusive
// file os.h line 18
void os_stopexclusive(void);
// os_strerr
// file os.h line 22
unsigned char * os_strerr(signed int err, unsigned char *str, unsigned long int len);
// parseargs
// file main.c line 11
signed int parseargs(signed int argc, char **argv, unsigned char *filename, unsigned long int line);
// parseinput
// file nntpserv.c line 76
unsigned char * parseinput(struct var *var);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_attr_init
// file /usr/include/pthread.h line 289
extern signed int pthread_attr_init(union pthread_attr_t *);
// pthread_attr_setdetachstate
// file /usr/include/pthread.h line 301
extern signed int pthread_attr_setdetachstate(union pthread_attr_t *, signed int);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_mutex_destroy
// file /usr/include/pthread.h line 756
extern signed int pthread_mutex_destroy(union anonymous$3 *);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$3 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$3 *);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// readargs
// file main.c line 255
signed int readargs(unsigned char *file);
// readchs
// file xlat.c line 115
struct xlattab * readchs(struct var *var, unsigned char *filename);
// readgroups
// file groups.h line 14
signed int readgroups(struct var *var);
// readoriginaddr
// file nntpserv.c line 256
void readoriginaddr(struct anonymous$7 *mb, unsigned long int offset, unsigned long int len, unsigned char *addr);
// readxlat
// file xlat.h line 25
signed int readxlat(struct var *var);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// recv
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 156
extern signed long int recv(signed int, void *, unsigned long int, signed int);
// remove
// file /usr/include/stdio.h line 178
extern signed int remove(const char *);
// select
// file /usr/include/x86_64-linux-gnu/sys/select.h line 106
extern signed int select(signed int, struct anonymous$1 *, struct anonymous$1 *, struct anonymous$1 *, struct timeval *);
// send
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 149
extern signed long int send(signed int, const void *, unsigned long int, signed int);
// sendtextblock
// file nntpserv.c line 542
void sendtextblock(struct var *var, unsigned char *text, struct xlat *xlat);
// server
// file nntpserv.h line 84
void server(signed int s);
// setboolonoff
// file misc.h line 4
signed int setboolonoff(unsigned char *opt, signed int *var);
// setcharset
// file mime.h line 2
void setcharset(unsigned char *newchrs, unsigned char *chrs, unsigned char *chrs2, unsigned long int chrslen);
// setchrscodepage
// file xlat.h line 28
void setchrscodepage(unsigned char *chrs, unsigned char *codepage, unsigned char *str);
// setreply
// file nntpserv.c line 1984
void setreply(struct var *var, unsigned long int parentmsg, unsigned long int newmsg);
// shutdown
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 261
extern signed int shutdown(signed int, signed int);
// sighandler
// file os_linux.c line 7
void sighandler(signed int sig);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// sleep
// file /usr/include/unistd.h line 444
extern unsigned int sleep(unsigned int);
// smartquote
// file nntpserv.c line 1916
unsigned char * smartquote(unsigned char *oldtext, unsigned long int maxlen, unsigned char *fromname);
// socket
// file /usr/include/x86_64-linux-gnu/sys/socket.h line 113
extern signed int socket(signed int, signed int, signed int);
// sockprintf
// file sockio.h line 15
void sockprintf(struct var *var, unsigned char *fmt, ...);
// sockreadchar
// file sockio.c line 23
signed int sockreadchar(struct sockio *sio);
// sockreadline
// file sockio.h line 13
signed int sockreadline(struct var *var, unsigned char *buf, signed int len);
// socksendtext
// file sockio.h line 14
void socksendtext(struct var *var, unsigned char *buf);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strcasecmp
// file /usr/include/string.h line 533
extern signed int strcasecmp(const char *, const char *);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strchr
// file /usr/include/string.h line 235
extern char * strchr(const char *, signed int);
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
// strip
// file misc.h line 2
void strip(unsigned char *str);
// stripctrl
// file misc.h line 8
void stripctrl(unsigned char *str);
// stripreplyaddr
// file nntpserv.c line 649
void stripreplyaddr(unsigned char *str);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncasecmp
// file /usr/include/string.h line 537
extern signed int strncasecmp(const char *, const char *, unsigned long int);
// strncat
// file /usr/include/string.h line 140
extern char * strncat(char *, const char *, unsigned long int);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strncpy
// file /usr/include/string.h line 132
extern char * strncpy(char *, const char *, unsigned long int);
// strrchr
// file /usr/include/string.h line 262
extern char * strrchr(const char *, signed int);
// tidyquote
// file nntpserv.c line 1836
void tidyquote(char *line);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tolower
// file /usr/include/ctype.h line 124
extern signed int tolower(signed int);
// unbackslashquote
// file nntpserv.c line 1450
void unbackslashquote(unsigned char *text);
// unmime
// file mime.h line 1
void unmime(unsigned char *text, unsigned char *chrs, unsigned char *chrs2, unsigned long int chrslen);
// unmimecpy
// file nntpserv.c line 1444
void unmimecpy(unsigned char *dest, unsigned char *src, unsigned long int destlen, unsigned char *chrs, unsigned char *chrs2, unsigned long int chrslen);
// validateaddr
// file nntpserv.c line 2035
signed int validateaddr(unsigned char *str);
// vprintf
// file /usr/include/stdio.h line 377
extern signed int vprintf(const char *, void **);
// vsprintf
// file /usr/include/stdio.h line 379
extern signed int vsprintf(char *, const char *, void **);
// xlatstr
// file xlat.h line 24
unsigned char * xlatstr(unsigned char *text, struct xlattab *xlattab);

struct anonymous$8
{
  // Fields
  struct anonymous$6 **Fields;
  // NumFields
  unsigned long int NumFields;
  // NumAlloc
  unsigned long int NumAlloc;
};

struct anonymous$7
{
  // HdrFile_PS
  struct _IO_FILE *HdrFile_PS;
  // TxtFile_PS
  struct _IO_FILE *TxtFile_PS;
  // IdxFile_PS
  struct _IO_FILE *IdxFile_PS;
  // LrdFile_PS
  struct _IO_FILE *LrdFile_PS;
  // Errno_I
  signed int Errno_I;
  // Locked_I
  signed int Locked_I;
  // LastUserPos_I
  unsigned long int LastUserPos_I;
  // LastUserId_I
  unsigned long int LastUserId_I;
};

struct anonymous$1
{
  // __fds_bits
  signed long int __fds_bits[16l];
};

struct anonymous$5
{
  // Signature
  unsigned char Signature[4l];
  // Revision
  unsigned short int Revision;
  // ReservedWord
  unsigned short int ReservedWord;
  // SubfieldLen
  unsigned long int SubfieldLen;
  // TimesRead
  unsigned long int TimesRead;
  // MsgIdCRC
  unsigned long int MsgIdCRC;
  // ReplyCRC
  unsigned long int ReplyCRC;
  // ReplyTo
  unsigned long int ReplyTo;
  // Reply1st
  unsigned long int Reply1st;
  // ReplyNext
  unsigned long int ReplyNext;
  // DateWritten
  unsigned long int DateWritten;
  // DateReceived
  unsigned long int DateReceived;
  // DateProcessed
  unsigned long int DateProcessed;
  // MsgNum
  unsigned long int MsgNum;
  // Attribute
  unsigned long int Attribute;
  // Attribute2
  unsigned long int Attribute2;
  // TxtOffset
  unsigned long int TxtOffset;
  // TxtLen
  unsigned long int TxtLen;
  // PasswordCRC
  unsigned long int PasswordCRC;
  // Cost
  unsigned long int Cost;
};

struct anonymous$4
{
  // Signature
  unsigned char Signature[4l];
  // DateCreated
  unsigned long int DateCreated;
  // ModCounter
  unsigned long int ModCounter;
  // ActiveMsgs
  unsigned long int ActiveMsgs;
  // PasswordCRC
  unsigned long int PasswordCRC;
  // BaseMsgNum
  unsigned long int BaseMsgNum;
  // RSRVD
  unsigned char RSRVD[1000l];
};

struct anonymous$0
{
  // LoID
  unsigned short int LoID;
  // HiID
  unsigned short int HiID;
  // DatLen
  unsigned long int DatLen;
};

struct anonymous$6
{
  // LoID
  unsigned short int LoID;
  // HiID
  unsigned short int HiID;
  // DatLen
  unsigned long int DatLen;
  // Buffer
  unsigned char *Buffer;
};

struct anonymous
{
  // UserCRC
  unsigned long int UserCRC;
  // HdrOffset
  unsigned long int HdrOffset;
};

struct anonymous$2
{
  // UserCRC
  unsigned long int UserCRC;
  // UserID
  unsigned long int UserID;
  // LastReadMsg
  unsigned long int LastReadMsg;
  // HighReadMsg
  unsigned long int HighReadMsg;
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

struct attributename
{
  // attr
  unsigned long int attr;
  // name
  unsigned char *name;
};

struct flock
{
  // l_type
  signed short int l_type;
  // l_whence
  signed short int l_whence;
  // l_start
  signed long int l_start;
  // l_len
  signed long int l_len;
  // l_pid
  signed int l_pid;
};

struct group
{
  // next
  struct group *next;
  // tagname
  unsigned char tagname[100l];
  // group
  unsigned char group;
  // jampath
  unsigned char jampath[100l];
  // aka
  unsigned char aka[40l];
  // defaultchrs
  unsigned char defaultchrs[20l];
  // netmail
  signed int netmail;
  // local
  signed int local;
  // nochrs
  signed int nochrs;
};

struct hostent
{
  // h_name
  char *h_name;
  // h_aliases
  char **h_aliases;
  // h_addrtype
  signed int h_addrtype;
  // h_length
  signed int h_length;
  // h_addr_list
  char **h_addr_list;
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

struct sockio
{
  // socket
  signed int socket;
  // buf
  unsigned char buf[1024l];
  // buflen
  signed int buflen;
  // bufpos
  signed int bufpos;
};

struct timeval
{
  // tv_sec
  signed long int tv_sec;
  // tv_usec
  signed long int tv_usec;
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

struct var
{
  // sio
  struct sockio *sio;
  // disconnect
  signed int disconnect;
  // currentgroup
  struct group *currentgroup;
  // currentarticle
  unsigned long int currentarticle;
  // opengroup
  struct group *opengroup;
  // openmb
  struct anonymous$7 *openmb;
  // inputpos
  unsigned long int inputpos;
  // input
  unsigned char *input;
  // clientid
  unsigned char clientid[100l];
  // firstgroup
  struct group *firstgroup;
  // firstreadxlat
  struct xlat *firstreadxlat;
  // firstpostxlat
  struct xlat *firstpostxlat;
  // firstreadalias
  struct xlatalias *firstreadalias;
  // firstpostalias
  struct xlatalias *firstpostalias;
  // firstxlattab
  struct xlattab *firstxlattab;
  // defaultreadchrs
  unsigned char defaultreadchrs[20l];
  // defaultpostchrs
  unsigned char defaultpostchrs[20l];
  // readgroups
  unsigned char readgroups[50l];
  // postgroups
  unsigned char postgroups[50l];
  // loginname
  unsigned char loginname[100l];
  // password
  unsigned char password[100l];
  // realnames
  unsigned char realnames[36l];
  // opt_flowed
  signed int opt_flowed;
  // opt_showto
  signed int opt_showto;
  // login
  signed int login;
};

struct xlat
{
  // next
  struct xlat *next;
  // fromchrs
  unsigned char fromchrs[20l];
  // tochrs
  unsigned char tochrs[20l];
  // xlattab
  struct xlattab *xlattab;
  // keepsoftcr
  signed int keepsoftcr;
};

struct xlatalias
{
  // next
  struct xlatalias *next;
  // pattern
  unsigned char pattern[20l];
  // replace
  unsigned char replace[20l];
};

struct xlattab
{
  // next
  struct xlattab *next;
  // filename
  unsigned char filename[100l];
  // table
  unsigned char table[1024l];
};


// attributenames
// file nntpserv.c line 494
struct attributename attributenames[30l] = { { .attr=(unsigned long int)0x00000001L, .name=(unsigned char *)"Local" }, 
    { .attr=(unsigned long int)0x00000002L, .name=(unsigned char *)"InTransit" }, 
    { .attr=(unsigned long int)0x00000004L, .name=(unsigned char *)"Private" }, 
    { .attr=(unsigned long int)0x00000008L, .name=(unsigned char *)"Read" }, 
    { .attr=(unsigned long int)0x00000010L, .name=(unsigned char *)"Sent" }, 
    { .attr=(unsigned long int)0x00000020L, .name=(unsigned char *)"KillSent" }, 
    { .attr=(unsigned long int)0x00000040L, .name=(unsigned char *)"ArchiveSent" }, 
    { .attr=(unsigned long int)0x00000080L, .name=(unsigned char *)"Hold" }, 
    { .attr=(unsigned long int)0x00000100L, .name=(unsigned char *)"Crash" }, 
    { .attr=(unsigned long int)0x00000200L, .name=(unsigned char *)"Immediate" }, 
    { .attr=(unsigned long int)0x00000400L, .name=(unsigned char *)"Direct" }, 
    { .attr=(unsigned long int)0x00000800L, .name=(unsigned char *)"Gate" }, 
    { .attr=(unsigned long int)0x00001000L, .name=(unsigned char *)"FReq" }, 
    { .attr=(unsigned long int)0x00002000L, .name=(unsigned char *)"FAttach" }, 
    { .attr=(unsigned long int)0x00004000L, .name=(unsigned char *)"TruncFile" }, 
    { .attr=(unsigned long int)0x00008000L, .name=(unsigned char *)"KillFile" }, 
    { .attr=(unsigned long int)0x00010000L, .name=(unsigned char *)"ReceiptReq" }, 
    { .attr=(unsigned long int)0x00020000L, .name=(unsigned char *)"ConfirmReq" }, 
    { .attr=(unsigned long int)0x00040000L, .name=(unsigned char *)"Orphan" }, 
    { .attr=(unsigned long int)0x00080000L, .name=(unsigned char *)"Encrypted" }, 
    { .attr=(unsigned long int)0x00100000L, .name=(unsigned char *)"Compressed" }, 
    { .attr=(unsigned long int)0x00200000L, .name=(unsigned char *)"Escaped" }, 
    { .attr=(unsigned long int)0x00400000L, .name=(unsigned char *)"ForcePickup" }, 
    { .attr=(unsigned long int)0x00800000L, .name=(unsigned char *)"TypeLocal" }, 
    { .attr=(unsigned long int)0x01000000L, .name=(unsigned char *)"TypeEcho" }, 
    { .attr=(unsigned long int)0x02000000L, .name=(unsigned char *)"TypeNet" }, 
    { .attr=(unsigned long int)0x20000000L, .name=(unsigned char *)"NoDisp" }, 
    { .attr=(unsigned long int)0x40000000L, .name=(unsigned char *)"Locked" }, 
    { .attr=(unsigned long int)0x80000000L, .name=(unsigned char *)"Deleted" }, 
    { .attr=(unsigned long int)0, .name=(unsigned char *)(void *)0 } };
// cfg_allowfile
// file nntpserv.c line 10
unsigned char *cfg_allowfile = (unsigned char *)"/etc/jamnntpd.allow";
// cfg_debug
// file nntpserv.c line 19
signed int cfg_debug;
// cfg_def_flowed
// file nntpserv.c line 16
signed int cfg_def_flowed = 1;
// cfg_def_showto
// file nntpserv.c line 17
signed int cfg_def_showto = 1;
// cfg_echomailjam
// file nntpserv.c line 8
unsigned char *cfg_echomailjam;
// cfg_groupsfile
// file nntpserv.c line 11
unsigned char *cfg_groupsfile = (unsigned char *)"/etc/jamnntpd.groups";
// cfg_guestsuffix
// file nntpserv.c line 7
unsigned char *cfg_guestsuffix;
// cfg_logfile
// file nntpserv.c line 12
unsigned char *cfg_logfile = (unsigned char *)"/var/log/jamnntpd.log";
// cfg_maxconn
// file nntpserv.c line 4
unsigned long int cfg_maxconn = (unsigned long int)5;
// cfg_nocancel
// file nntpserv.c line 27
signed int cfg_nocancel;
// cfg_noecholog
// file nntpserv.c line 20
signed int cfg_noecholog;
// cfg_noencode
// file nntpserv.c line 25
signed int cfg_noencode;
// cfg_noreplyaddr
// file nntpserv.c line 22
signed int cfg_noreplyaddr;
// cfg_nostripre
// file nntpserv.c line 21
signed int cfg_nostripre;
// cfg_notearline
// file nntpserv.c line 23
signed int cfg_notearline;
// cfg_notzutc
// file nntpserv.c line 26
signed int cfg_notzutc;
// cfg_origin
// file nntpserv.c line 6
unsigned char *cfg_origin;
// cfg_port
// file nntpserv.c line 3
unsigned long int cfg_port = (unsigned long int)5000;
// cfg_readorigin
// file nntpserv.c line 29
signed int cfg_readorigin;
// cfg_smartquote
// file nntpserv.c line 24
signed int cfg_smartquote;
// cfg_strictnetmail
// file nntpserv.c line 28
signed int cfg_strictnetmail;
// cfg_usersfile
// file nntpserv.c line 13
unsigned char *cfg_usersfile = (unsigned char *)"/etc/jamnntpd.users";
// cfg_xlatfile
// file nntpserv.c line 14
unsigned char *cfg_xlatfile = (unsigned char *)"/etc/jamnntpd.xlat";
// crc32tab
// file crc32.c line 26
unsigned long int crc32tab[256l] = { (unsigned long int)0x00000000, (unsigned long int)0x77073096, (unsigned long int)0xee0e612c, (unsigned long int)0x990951ba, (unsigned long int)0x076dc419, (unsigned long int)0x706af48f, (unsigned long int)0xe963a535, (unsigned long int)0x9e6495a3, (unsigned long int)0x0edb8832, (unsigned long int)0x79dcb8a4, (unsigned long int)0xe0d5e91e, (unsigned long int)0x97d2d988, (unsigned long int)0x09b64c2b, (unsigned long int)0x7eb17cbd, (unsigned long int)0xe7b82d07, (unsigned long int)0x90bf1d91, (unsigned long int)0x1db71064, (unsigned long int)0x6ab020f2, (unsigned long int)0xf3b97148, (unsigned long int)0x84be41de, (unsigned long int)0x1adad47d, (unsigned long int)0x6ddde4eb, (unsigned long int)0xf4d4b551, (unsigned long int)0x83d385c7, (unsigned long int)0x136c9856, (unsigned long int)0x646ba8c0, (unsigned long int)0xfd62f97a, (unsigned long int)0x8a65c9ec, (unsigned long int)0x14015c4f, (unsigned long int)0x63066cd9, (unsigned long int)0xfa0f3d63, (unsigned long int)0x8d080df5, (unsigned long int)0x3b6e20c8, (unsigned long int)0x4c69105e, (unsigned long int)0xd56041e4, (unsigned long int)0xa2677172, (unsigned long int)0x3c03e4d1, (unsigned long int)0x4b04d447, (unsigned long int)0xd20d85fd, (unsigned long int)0xa50ab56b, (unsigned long int)0x35b5a8fa, (unsigned long int)0x42b2986c, (unsigned long int)0xdbbbc9d6, (unsigned long int)0xacbcf940, (unsigned long int)0x32d86ce3, (unsigned long int)0x45df5c75, (unsigned long int)0xdcd60dcf, (unsigned long int)0xabd13d59, (unsigned long int)0x26d930ac, (unsigned long int)0x51de003a, (unsigned long int)0xc8d75180, (unsigned long int)0xbfd06116, (unsigned long int)0x21b4f4b5, (unsigned long int)0x56b3c423, (unsigned long int)0xcfba9599, (unsigned long int)0xb8bda50f, (unsigned long int)0x2802b89e, (unsigned long int)0x5f058808, (unsigned long int)0xc60cd9b2, (unsigned long int)0xb10be924, (unsigned long int)0x2f6f7c87, (unsigned long int)0x58684c11, (unsigned long int)0xc1611dab, (unsigned long int)0xb6662d3d, (unsigned long int)0x76dc4190, (unsigned long int)0x01db7106, (unsigned long int)0x98d220bc, (unsigned long int)0xefd5102a, (unsigned long int)0x71b18589, (unsigned long int)0x06b6b51f, (unsigned long int)0x9fbfe4a5, (unsigned long int)0xe8b8d433, (unsigned long int)0x7807c9a2, (unsigned long int)0x0f00f934, (unsigned long int)0x9609a88e, (unsigned long int)0xe10e9818, (unsigned long int)0x7f6a0dbb, (unsigned long int)0x086d3d2d, (unsigned long int)0x91646c97, (unsigned long int)0xe6635c01, (unsigned long int)0x6b6b51f4, (unsigned long int)0x1c6c6162, (unsigned long int)0x856530d8, (unsigned long int)0xf262004e, (unsigned long int)0x6c0695ed, (unsigned long int)0x1b01a57b, (unsigned long int)0x8208f4c1, (unsigned long int)0xf50fc457, (unsigned long int)0x65b0d9c6, (unsigned long int)0x12b7e950, (unsigned long int)0x8bbeb8ea, (unsigned long int)0xfcb9887c, (unsigned long int)0x62dd1ddf, (unsigned long int)0x15da2d49, (unsigned long int)0x8cd37cf3, (unsigned long int)0xfbd44c65, (unsigned long int)0x4db26158, (unsigned long int)0x3ab551ce, (unsigned long int)0xa3bc0074, (unsigned long int)0xd4bb30e2, (unsigned long int)0x4adfa541, (unsigned long int)0x3dd895d7, (unsigned long int)0xa4d1c46d, (unsigned long int)0xd3d6f4fb, (unsigned long int)0x4369e96a, (unsigned long int)0x346ed9fc, (unsigned long int)0xad678846, (unsigned long int)0xda60b8d0, (unsigned long int)0x44042d73, (unsigned long int)0x33031de5, (unsigned long int)0xaa0a4c5f, (unsigned long int)0xdd0d7cc9, (unsigned long int)0x5005713c, (unsigned long int)0x270241aa, (unsigned long int)0xbe0b1010, (unsigned long int)0xc90c2086, (unsigned long int)0x5768b525, (unsigned long int)0x206f85b3, (unsigned long int)0xb966d409, (unsigned long int)0xce61e49f, (unsigned long int)0x5edef90e, (unsigned long int)0x29d9c998, (unsigned long int)0xb0d09822, (unsigned long int)0xc7d7a8b4, (unsigned long int)0x59b33d17, (unsigned long int)0x2eb40d81, (unsigned long int)0xb7bd5c3b, (unsigned long int)0xc0ba6cad, (unsigned long int)0xedb88320, (unsigned long int)0x9abfb3b6, (unsigned long int)0x03b6e20c, (unsigned long int)0x74b1d29a, (unsigned long int)0xead54739, (unsigned long int)0x9dd277af, (unsigned long int)0x04db2615, (unsigned long int)0x73dc1683, (unsigned long int)0xe3630b12, (unsigned long int)0x94643b84, (unsigned long int)0x0d6d6a3e, (unsigned long int)0x7a6a5aa8, (unsigned long int)0xe40ecf0b, (unsigned long int)0x9309ff9d, (unsigned long int)0x0a00ae27, (unsigned long int)0x7d079eb1, (unsigned long int)0xf00f9344, (unsigned long int)0x8708a3d2, (unsigned long int)0x1e01f268, (unsigned long int)0x6906c2fe, (unsigned long int)0xf762575d, (unsigned long int)0x806567cb, (unsigned long int)0x196c3671, (unsigned long int)0x6e6b06e7, (unsigned long int)0xfed41b76, (unsigned long int)0x89d32be0, (unsigned long int)0x10da7a5a, (unsigned long int)0x67dd4acc, (unsigned long int)0xf9b9df6f, (unsigned long int)0x8ebeeff9, (unsigned long int)0x17b7be43, (unsigned long int)0x60b08ed5, (unsigned long int)0xd6d6a3e8, (unsigned long int)0xa1d1937e, (unsigned long int)0x38d8c2c4, (unsigned long int)0x4fdff252, (unsigned long int)0xd1bb67f1, (unsigned long int)0xa6bc5767, (unsigned long int)0x3fb506dd, (unsigned long int)0x48b2364b, (unsigned long int)0xd80d2bda, (unsigned long int)0xaf0a1b4c, (unsigned long int)0x36034af6, (unsigned long int)0x41047a60, (unsigned long int)0xdf60efc3, (unsigned long int)0xa867df55, (unsigned long int)0x316e8eef, (unsigned long int)0x4669be79, (unsigned long int)0xcb61b38c, (unsigned long int)0xbc66831a, (unsigned long int)0x256fd2a0, (unsigned long int)0x5268e236, (unsigned long int)0xcc0c7795, (unsigned long int)0xbb0b4703, (unsigned long int)0x220216b9, (unsigned long int)0x5505262f, (unsigned long int)0xc5ba3bbe, (unsigned long int)0xb2bd0b28, (unsigned long int)0x2bb45a92, (unsigned long int)0x5cb36a04, (unsigned long int)0xc2d7ffa7, (unsigned long int)0xb5d0cf31, (unsigned long int)0x2cd99e8b, (unsigned long int)0x5bdeae1d, (unsigned long int)0x9b64c2b0, (unsigned long int)0xec63f226, (unsigned long int)0x756aa39c, (unsigned long int)0x026d930a, (unsigned long int)0x9c0906a9, (unsigned long int)0xeb0e363f, (unsigned long int)0x72076785, (unsigned long int)0x05005713, (unsigned long int)0x95bf4a82, (unsigned long int)0xe2b87a14, (unsigned long int)0x7bb12bae, (unsigned long int)0x0cb61b38, (unsigned long int)0x92d28e9b, (unsigned long int)0xe5d5be0d, (unsigned long int)0x7cdcefb7, (unsigned long int)0x0bdbdf21, (unsigned long int)0x86d3d2d4, (unsigned long int)0xf1d4e242, (unsigned long int)0x68ddb3f8, (unsigned long int)0x1fda836e, (unsigned long int)0x81be16cd, (unsigned long int)0xf6b9265b, (unsigned long int)0x6fb077e1, (unsigned long int)0x18b74777, (unsigned long int)0x88085ae6, (unsigned long int)0xff0f6a70, (unsigned long int)0x66063bca, (unsigned long int)0x11010b5c, (unsigned long int)0x8f659eff, (unsigned long int)0xf862ae69, (unsigned long int)0x616bffd3, (unsigned long int)0x166ccf45, (unsigned long int)0xa00ae278, (unsigned long int)0xd70dd2ee, (unsigned long int)0x4e048354, (unsigned long int)0x3903b3c2, (unsigned long int)0xa7672661, (unsigned long int)0xd06016f7, (unsigned long int)0x4969474d, (unsigned long int)0x3e6e77db, (unsigned long int)0xaed16a4a, (unsigned long int)0xd9d65adc, (unsigned long int)0x40df0b66, (unsigned long int)0x37d83bf0, (unsigned long int)0xa9bcae53, (unsigned long int)0xdebb9ec5, (unsigned long int)0x47b2cf7f, (unsigned long int)0x30b5ffe9, (unsigned long int)0xbdbdf21c, (unsigned long int)0xcabac28a, (unsigned long int)0x53b39330, (unsigned long int)0x24b4a3a6, (unsigned long int)0xbad03605, (unsigned long int)0xcdd70693, (unsigned long int)0x54de5729, (unsigned long int)0x23d967bf, (unsigned long int)0xb3667a2e, (unsigned long int)0xc4614ab8, (unsigned long int)0x5d681b02, (unsigned long int)0x2a6f2b94, (unsigned long int)0xb40bbe37, (unsigned long int)0xc30c8ea1, (unsigned long int)0x5a05df1b, (unsigned long int)0x2d02ef8d };
// fileargc
// file main.c line 6
signed int fileargc;
// fileargv
// file main.c line 5
char *fileargv[100l];
// lastmsgidnum
// file nntpserv.c line 34
unsigned long int lastmsgidnum;
// linux_mutex
// file os_linux.c line 5
union anonymous$3 linux_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// linux_srv
// file os_linux.c line 27
void (*linux_srv)(signed int);
// server_openconnections
// file nntpserv.c line 31
signed int server_openconnections;
// server_quit
// file nntpserv.c line 32
signed int server_quit;

// JAM_AddEmptyMessage
// file message.c line 469
signed int JAM_AddEmptyMessage(struct anonymous$7 *Base_PS)
{
  struct anonymous Index_S;
  if(Base_PS == ((struct anonymous$7 *)NULL))
    return 1;

  else
    if(Base_PS->Locked_I == 0)
      return 4;

    else
    {
      signed int return_value_fseek$2;
      return_value_fseek$2=fseek(Base_PS->IdxFile_PS, (signed long int)0, 2);
      if(!(return_value_fseek$2 == 0))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$1;
        return 2;
      }

      Index_S.HdrOffset = (unsigned long int)0xffffffff;
      Index_S.UserCRC = (unsigned long int)0xffffffff;
      signed int return_value_fwritejamindex$4;
      return_value_fwritejamindex$4=fwritejamindex(Base_PS->IdxFile_PS, &Index_S);
      if(!(return_value_fwritejamindex$4 >= 1))
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$3;
        return 2;
      }

      return 0;
    }
}

// JAM_AddMessage
// file jamlib/jam.h line 285
signed int JAM_AddMessage(struct anonymous$7 *Base_PS, struct anonymous$5 *Header_PS, struct anonymous$8 *SubPack_PS, unsigned char *Text_PC, unsigned long int TextLen_I)
{
  struct anonymous$4 BaseHeader_S;
  struct anonymous Index_S;
  signed long int Offset_I;
  signed int Status_I;
  unsigned long int TotLen_I;
  unsigned long int return_value_strlen$20;
  if(Base_PS == ((struct anonymous$7 *)NULL))
    return 1;

  else
    if(Base_PS->Locked_I == 0)
      return 4;

    else
    {
      Status_I=JAM_ReadMBHeader(Base_PS, &BaseHeader_S);
      if(!(Status_I == 0))
        return Status_I;

      else
      {
        Header_PS->TxtOffset = (unsigned long int)0;
        Header_PS->TxtLen = (unsigned long int)0;
        if(!(Text_PC == ((unsigned char *)NULL)) && !(TextLen_I == 0ul))
        {
          signed int return_value_fseek$2;
          return_value_fseek$2=fseek(Base_PS->TxtFile_PS, (signed long int)0, 2);
          if(!(return_value_fseek$2 == 0))
          {
            signed int *return_value___errno_location$1;
            return_value___errno_location$1=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$1;
            return 2;
          }

          Offset_I=ftell(Base_PS->TxtFile_PS);
          if(Offset_I == -1l)
          {
            signed int *return_value___errno_location$3;
            return_value___errno_location$3=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$3;
            return 2;
          }

          Header_PS->TxtOffset = (unsigned long int)Offset_I;
          Header_PS->TxtLen = TextLen_I;
          unsigned long int return_value_fwrite$5;
          return_value_fwrite$5=fwrite((const void *)Text_PC, TextLen_I, (unsigned long int)1, Base_PS->TxtFile_PS);
          if(!(return_value_fwrite$5 >= 1ul))
          {
            signed int *return_value___errno_location$4;
            return_value___errno_location$4=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$4;
            return 2;
          }

        }

        signed int return_value_fseek$7;
        return_value_fseek$7=fseek(Base_PS->HdrFile_PS, (signed long int)0, 2);
        if(!(return_value_fseek$7 == 0))
        {
          signed int *return_value___errno_location$6;
          return_value___errno_location$6=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$6;
          return 2;
        }

        TotLen_I = (unsigned long int)0;
        if(!(SubPack_PS == ((struct anonymous$8 *)NULL)))
        {
          struct anonymous$6 *Subfield_PS;
          Subfield_PS=JAM_GetSubfield(SubPack_PS);
          while(!(Subfield_PS == ((struct anonymous$6 *)NULL)))
          {
            TotLen_I = TotLen_I + sizeof(struct anonymous$0) /*16ul*/  + Subfield_PS->DatLen;
            Subfield_PS=JAM_GetSubfield((struct anonymous$8 *)(void *)0);
          }
        }

        Header_PS->SubfieldLen = TotLen_I;
        signed int return_value_fseek$9;
        return_value_fseek$9=fseek(Base_PS->IdxFile_PS, (signed long int)0, 2);
        if(!(return_value_fseek$9 == 0))
        {
          signed int *return_value___errno_location$8;
          return_value___errno_location$8=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$8;
          return 2;
        }

        Offset_I=ftell(Base_PS->IdxFile_PS);
        if(Offset_I == -1l)
        {
          signed int *return_value___errno_location$10;
          return_value___errno_location$10=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$10;
          return 2;
        }

        Header_PS->MsgNum = (unsigned long int)Offset_I / sizeof(struct anonymous) /*16ul*/  + BaseHeader_S.BaseMsgNum;
        memcpy((void *)Header_PS->Signature, (const void *)"JAM\0", (unsigned long int)4);
        Header_PS->Revision = (unsigned short int)1;
        signed int return_value_fseek$12;
        return_value_fseek$12=fseek(Base_PS->HdrFile_PS, (signed long int)0, 2);
        if(!(return_value_fseek$12 == 0))
        {
          signed int *return_value___errno_location$11;
          return_value___errno_location$11=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$11;
          return 2;
        }

        Offset_I=ftell(Base_PS->HdrFile_PS);
        if(Offset_I == -1l)
        {
          signed int *return_value___errno_location$13;
          return_value___errno_location$13=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$13;
          return 2;
        }

        Index_S.HdrOffset = (unsigned long int)Offset_I;
        signed int return_value_fwritejammsgheader$15;
        return_value_fwritejammsgheader$15=fwritejammsgheader(Base_PS->HdrFile_PS, Header_PS);
        if(!(return_value_fwritejammsgheader$15 >= 1))
        {
          signed int *return_value___errno_location$14;
          return_value___errno_location$14=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$14;
          return 2;
        }

        if(!(SubPack_PS == ((struct anonymous$8 *)NULL)))
        {
          struct anonymous$6 *JAM_AddMessage$$1$$9$$Subfield_PS;
          unsigned char User_AC[101l];
          User_AC[(signed long int)0] = (unsigned char)0;
          JAM_AddMessage$$1$$9$$Subfield_PS=JAM_GetSubfield(SubPack_PS);
          while(!(JAM_AddMessage$$1$$9$$Subfield_PS == ((struct anonymous$6 *)NULL)))
          {
            signed int return_value_fwritejamsavesubfield$17;
            return_value_fwritejamsavesubfield$17=fwritejamsavesubfield(Base_PS->HdrFile_PS, (struct anonymous$0 *)JAM_AddMessage$$1$$9$$Subfield_PS);
            if(!(return_value_fwritejamsavesubfield$17 >= 1))
            {
              signed int *return_value___errno_location$16;
              return_value___errno_location$16=__errno_location();
              Base_PS->Errno_I = *return_value___errno_location$16;
              return 2;
            }

            if(!(JAM_AddMessage$$1$$9$$Subfield_PS->DatLen == 0ul))
            {
              unsigned long int return_value_fwrite$19;
              return_value_fwrite$19=fwrite((const void *)JAM_AddMessage$$1$$9$$Subfield_PS->Buffer, JAM_AddMessage$$1$$9$$Subfield_PS->DatLen, (unsigned long int)1, Base_PS->HdrFile_PS);
              if(!(return_value_fwrite$19 >= 1ul))
              {
                signed int *return_value___errno_location$18;
                return_value___errno_location$18=__errno_location();
                Base_PS->Errno_I = *return_value___errno_location$18;
                return 2;
              }

            }

            if((signed int)JAM_AddMessage$$1$$9$$Subfield_PS->LoID == 3)
            {
              memcpy((void *)User_AC, (const void *)JAM_AddMessage$$1$$9$$Subfield_PS->Buffer, JAM_AddMessage$$1$$9$$Subfield_PS->DatLen);
              User_AC[(signed long int)JAM_AddMessage$$1$$9$$Subfield_PS->DatLen] = (unsigned char)0;
            }

            JAM_AddMessage$$1$$9$$Subfield_PS=JAM_GetSubfield((struct anonymous$8 *)(void *)0);
          }
          if(!(User_AC[0l] == 0))
          {
            return_value_strlen$20=strlen((const char *)User_AC);
            Index_S.UserCRC=JAM_Crc32(User_AC, return_value_strlen$20);
          }

          else
            Index_S.UserCRC = (unsigned long int)0xffffffff;
        }

        else
          Index_S.UserCRC = (unsigned long int)0xffffffff;
        signed int return_value_fwritejamindex$22;
        return_value_fwritejamindex$22=fwritejamindex(Base_PS->IdxFile_PS, &Index_S);
        if(!(return_value_fwritejamindex$22 >= 1))
        {
          signed int *return_value___errno_location$21;
          return_value___errno_location$21=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$21;
          return 2;
        }

        if((2147483648ul & Header_PS->Attribute) == 0ul)
          BaseHeader_S.ActiveMsgs = BaseHeader_S.ActiveMsgs + 1ul;

        Status_I=JAM_WriteMBHeader(Base_PS, &BaseHeader_S);
        if(!(Status_I == 0))
          return Status_I;

        else
          return 0;
      }
    }
}

// JAM_ChangeMsgHeader
// file jamlib/jam.h line 296
signed int JAM_ChangeMsgHeader(struct anonymous$7 *Base_PS, unsigned long int MsgNo_I, struct anonymous$5 *Header_PS)
{
  struct anonymous$4 BaseHeader_S;
  struct anonymous$5 OldHeader_S;
  struct anonymous Index_S;
  signed int Status_I;
  if(Base_PS == ((struct anonymous$7 *)NULL))
    return 1;

  else
    if(Base_PS->Locked_I == 0)
      return 4;

    else
    {
      Status_I=JAM_ReadMBHeader(Base_PS, &BaseHeader_S);
      if(!(Status_I == 0))
        return Status_I;

      else
      {
        signed int return_value_fseek$2;
        return_value_fseek$2=fseek(Base_PS->IdxFile_PS, (signed long int)(MsgNo_I * sizeof(struct anonymous) /*16ul*/ ), 0);
        if(!(return_value_fseek$2 == 0))
        {
          signed int *return_value___errno_location$1;
          return_value___errno_location$1=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$1;
          return 2;
        }

        signed int return_value_freadjamindex$4;
        return_value_freadjamindex$4=freadjamindex(Base_PS->IdxFile_PS, &Index_S);
        if(!(return_value_freadjamindex$4 >= 1))
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$3;
          return 2;
        }

        signed int return_value_fseek$6;
        return_value_fseek$6=fseek(Base_PS->HdrFile_PS, (signed long int)Index_S.HdrOffset, 0);
        if(!(return_value_fseek$6 == 0))
        {
          signed int *return_value___errno_location$5;
          return_value___errno_location$5=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$5;
          return 2;
        }

        signed int return_value_freadjammsgheader$8;
        return_value_freadjammsgheader$8=freadjammsgheader(Base_PS->HdrFile_PS, &OldHeader_S);
        if(!(return_value_freadjammsgheader$8 >= 1))
        {
          signed int *return_value___errno_location$7;
          return_value___errno_location$7=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$7;
          return 2;
        }

        signed int return_value_fseek$10;
        return_value_fseek$10=fseek(Base_PS->HdrFile_PS, (signed long int)Index_S.HdrOffset, 0);
        if(!(return_value_fseek$10 == 0))
        {
          signed int *return_value___errno_location$9;
          return_value___errno_location$9=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$9;
          return 2;
        }

        signed int return_value_fwritejammsgheader$12;
        return_value_fwritejammsgheader$12=fwritejammsgheader(Base_PS->HdrFile_PS, Header_PS);
        if(!(return_value_fwritejammsgheader$12 >= 1))
        {
          signed int *return_value___errno_location$11;
          return_value___errno_location$11=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$11;
          return 2;
        }

        if(!((2147483648ul & Header_PS->Attribute) == 0ul))
        {
          if((2147483648ul & OldHeader_S.Attribute) == 0ul)
            BaseHeader_S.ActiveMsgs = BaseHeader_S.ActiveMsgs - 1ul;

        }

        Status_I=JAM_WriteMBHeader(Base_PS, &BaseHeader_S);
        if(!(Status_I == 0))
          return Status_I;

        else
          return 0;
      }
    }
}

// JAM_ClearMsgHeader
// file jamlib/jam.h line 300
signed int JAM_ClearMsgHeader(struct anonymous$5 *Header_PS)
{
  if(Header_PS == ((struct anonymous$5 *)NULL))
    return 1;

  else
  {
    memset((void *)Header_PS, 0, sizeof(struct anonymous$5) /*144ul*/ );
    memcpy((void *)Header_PS->Signature, (const void *)"JAM\0", (unsigned long int)4);
    Header_PS->Revision = (unsigned short int)1;
    Header_PS->MsgIdCRC = (unsigned long int)0xffffffff;
    Header_PS->ReplyCRC = (unsigned long int)0xffffffff;
    Header_PS->PasswordCRC = (unsigned long int)0xffffffff;
    return 0;
  }
}

// JAM_CloseMB
// file jamlib/jam.h line 245
signed int JAM_CloseMB(struct anonymous$7 *Base_PS)
{
  if(!(Base_PS->Locked_I == 0))
  {
    signed int Status_I;
    Status_I=JAM_UnlockMB(Base_PS);
    if(!(Status_I == 0))
      return Status_I;

  }

  if(!(Base_PS->HdrFile_PS == ((struct _IO_FILE *)NULL)))
  {
    fclose(Base_PS->HdrFile_PS);
    Base_PS->HdrFile_PS = (struct _IO_FILE *)(void *)0;
    fclose(Base_PS->TxtFile_PS);
    Base_PS->TxtFile_PS = (struct _IO_FILE *)(void *)0;
    fclose(Base_PS->IdxFile_PS);
    Base_PS->IdxFile_PS = (struct _IO_FILE *)(void *)0;
    fclose(Base_PS->LrdFile_PS);
    Base_PS->LrdFile_PS = (struct _IO_FILE *)(void *)0;
  }

  Base_PS->Locked_I = 0;
  return 0;
}

// JAM_Crc32
// file jamlib/jam.h line 330
unsigned long int JAM_Crc32(unsigned char *Buffer_PC, unsigned long int Length_I)
{
  unsigned long int Crc_I;
  unsigned long int c;
  Crc_I = (unsigned long int)0xffffffff;
  c = (unsigned long int)0;
  signed int return_value_tolower$1;
  for( ; !(c >= Length_I); c = c + 1ul)
  {
    return_value_tolower$1=tolower((signed int)Buffer_PC[(signed long int)c]);
    Crc_I = Crc_I >> 8 ^ crc32tab[(signed long int)((signed int)(unsigned char)Crc_I ^ return_value_tolower$1)];
  }
  return Crc_I;
}

// JAM_CreateMB
// file mbase.c line 147
signed int JAM_CreateMB(unsigned char *Basename_PC, unsigned long int BaseMsg_I, struct anonymous$7 **NewArea_PPS)
{
  struct anonymous$4 Base_S;
  signed int Status_I;
  struct anonymous$7 *Base_PS;
  if(NewArea_PPS == ((struct anonymous$7 **)NULL) || BaseMsg_I == 0ul)
    return 1;

  else
  {
    *NewArea_PPS = (struct anonymous$7 *)(void *)0;
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct anonymous$7) /*56ul*/ );
    Base_PS = (struct anonymous$7 *)return_value_calloc$1;
    if(Base_PS == ((struct anonymous$7 *)NULL))
      return 5;

    else
    {
      *NewArea_PPS = Base_PS;
      Status_I=jam_Open(Base_PS, Basename_PC, "w+b");
      if(!(Status_I == 0))
        return Status_I;

      else
      {
        signed long int return_value_time$2;
        return_value_time$2=time((signed long int *)(void *)0);
        Base_S.DateCreated = (unsigned long int)return_value_time$2;
        Base_S.ModCounter = (unsigned long int)0;
        Base_S.ActiveMsgs = (unsigned long int)0;
        Base_S.PasswordCRC = (unsigned long int)0xffffffff;
        Base_S.BaseMsgNum = BaseMsg_I;
        memset((void *)&Base_S.RSRVD, 0, sizeof(unsigned char [1000l]) /*1000ul*/ );
        Status_I=JAM_LockMB(Base_PS, 0);
        if(!(Status_I == 0))
        {
          JAM_CloseMB(Base_PS);
          return Status_I;
        }

        else
        {
          Status_I=JAM_WriteMBHeader(Base_PS, &Base_S);
          if(!(Status_I == 0))
          {
            JAM_UnlockMB(Base_PS);
            JAM_CloseMB(Base_PS);
            return Status_I;
          }

          else
          {
            JAM_UnlockMB(Base_PS);
            return 0;
          }
        }
      }
    }
  }
}

// JAM_DelSubPacket
// file jamlib/jam.h line 318
signed int JAM_DelSubPacket(struct anonymous$8 *SubPack_PS)
{
  unsigned long int i;
  if(SubPack_PS == ((struct anonymous$8 *)NULL))
    return 1;

  else
  {
    i = (unsigned long int)0;
    for( ; !(i >= SubPack_PS->NumFields); i = i + 1ul)
    {
      struct anonymous$6 *Field_PS = SubPack_PS->Fields[(signed long int)i];
      if(!(Field_PS->Buffer == ((unsigned char *)NULL)))
        free((void *)Field_PS->Buffer);

      free((void *)Field_PS);
    }
    free((void *)SubPack_PS->Fields);
    free((void *)SubPack_PS);
    return 0;
  }
}

// JAM_DeleteMessage
// file message.c line 505
signed int JAM_DeleteMessage(struct anonymous$7 *Base_PS, unsigned long int MsgNo_I)
{
  struct anonymous$4 BaseHeader_S;
  struct anonymous$5 Header_S;
  struct anonymous Index_S;
  signed int Status_I;
  unsigned long int OldAttribute_I;
  if(Base_PS == ((struct anonymous$7 *)NULL))
    return 1;

  else
    if(Base_PS->Locked_I == 0)
      return 4;

    else
    {
      Status_I=JAM_ReadMBHeader(Base_PS, &BaseHeader_S);
      if(!(Status_I == 0))
        return Status_I;

      else
      {
        signed int return_value_fseek$2;
        return_value_fseek$2=fseek(Base_PS->IdxFile_PS, (signed long int)(MsgNo_I * sizeof(struct anonymous) /*16ul*/ ), 0);
        if(!(return_value_fseek$2 == 0))
        {
          signed int *return_value___errno_location$1;
          return_value___errno_location$1=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$1;
          return 2;
        }

        signed int return_value_freadjamindex$4;
        return_value_freadjamindex$4=freadjamindex(Base_PS->IdxFile_PS, &Index_S);
        if(!(return_value_freadjamindex$4 >= 1))
        {
          signed int *return_value___errno_location$3;
          return_value___errno_location$3=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$3;
          return 2;
        }

        if(Index_S.HdrOffset == 4294967295ul && Index_S.UserCRC == 4294967295ul)
          return 7;

        else
        {
          signed int return_value_fseek$6;
          return_value_fseek$6=fseek(Base_PS->HdrFile_PS, (signed long int)Index_S.HdrOffset, 0);
          if(!(return_value_fseek$6 == 0))
          {
            signed int *return_value___errno_location$5;
            return_value___errno_location$5=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$5;
            return 2;
          }

          signed int return_value_freadjammsgheader$8;
          return_value_freadjammsgheader$8=freadjammsgheader(Base_PS->HdrFile_PS, &Header_S);
          if(!(return_value_freadjammsgheader$8 >= 1))
          {
            signed int *return_value___errno_location$7;
            return_value___errno_location$7=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$7;
            return 2;
          }

          OldAttribute_I = Header_S.Attribute;
          Header_S.Attribute = Header_S.Attribute | (unsigned long int)0x80000000L;
          signed int return_value_fseek$10;
          return_value_fseek$10=fseek(Base_PS->HdrFile_PS, (signed long int)Index_S.HdrOffset, 0);
          if(!(return_value_fseek$10 == 0))
          {
            signed int *return_value___errno_location$9;
            return_value___errno_location$9=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$9;
            return 2;
          }

          signed int return_value_fwritejammsgheader$12;
          return_value_fwritejammsgheader$12=fwritejammsgheader(Base_PS->HdrFile_PS, &Header_S);
          if(!(return_value_fwritejammsgheader$12 >= 1))
          {
            signed int *return_value___errno_location$11;
            return_value___errno_location$11=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$11;
            return 2;
          }

          signed int return_value_fseek$14;
          return_value_fseek$14=fseek(Base_PS->IdxFile_PS, (signed long int)(MsgNo_I * sizeof(struct anonymous) /*16ul*/ ), 0);
          if(!(return_value_fseek$14 == 0))
          {
            signed int *return_value___errno_location$13;
            return_value___errno_location$13=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$13;
            return 2;
          }

          Index_S.HdrOffset = (unsigned long int)0xffffffff;
          Index_S.UserCRC = (unsigned long int)0xffffffff;
          signed int return_value_fwritejamindex$16;
          return_value_fwritejamindex$16=fwritejamindex(Base_PS->IdxFile_PS, &Index_S);
          if(!(return_value_fwritejamindex$16 >= 1))
          {
            signed int *return_value___errno_location$15;
            return_value___errno_location$15=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$15;
            return 2;
          }

          if((2147483648ul & OldAttribute_I) == 0ul)
            BaseHeader_S.ActiveMsgs = BaseHeader_S.ActiveMsgs - 1ul;

          Status_I=JAM_WriteMBHeader(Base_PS, &BaseHeader_S);
          if(!(Status_I == 0))
            return Status_I;

          else
            return 0;
        }
      }
    }
}

// JAM_Errno
// file message.c line 601
signed int JAM_Errno(struct anonymous$7 *Base_PS)
{
  return Base_PS->Errno_I;
}

// JAM_FindUser
// file mbase.c line 404
signed int JAM_FindUser(struct anonymous$7 *Base_PS, unsigned long int UserCrc_I, unsigned long int StartMsg_I, unsigned long int *MsgNo_PI)
{
  unsigned long int MsgNo_I;
  signed int return_value_fseek$2;
  return_value_fseek$2=fseek(Base_PS->IdxFile_PS, (signed long int)(StartMsg_I * sizeof(struct anonymous) /*16ul*/ ), 0);
  if(!(return_value_fseek$2 == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$1;
    return 2;
  }

  MsgNo_I = StartMsg_I;
  do
  {
    struct anonymous Index_S;
    signed int return_value_freadjamindex$5;
    return_value_freadjamindex$5=freadjamindex(Base_PS->IdxFile_PS, &Index_S);
    if(!(return_value_freadjamindex$5 >= 1))
    {
      signed int return_value_feof$3;
      return_value_feof$3=feof(Base_PS->IdxFile_PS);
      if(!(return_value_feof$3 == 0))
        return 6;

      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$4;
      return 2;
    }

    if(Index_S.UserCRC == UserCrc_I)
      break;

    MsgNo_I = MsgNo_I + 1ul;
  }
  while((_Bool)1);
  *MsgNo_PI = MsgNo_I;
  return 0;
}

// JAM_GetMBSize
// file jamlib/jam.h line 270
signed int JAM_GetMBSize(struct anonymous$7 *Base_PS, unsigned long int *Messages_PI)
{
  signed long int Offset_I;
  signed int return_value_fseek$2;
  return_value_fseek$2=fseek(Base_PS->IdxFile_PS, (signed long int)0, 2);
  if(!(return_value_fseek$2 == 0))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$1;
    return 2;
  }

  Offset_I=ftell(Base_PS->IdxFile_PS);
  if(Offset_I == -1l)
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$3;
    return 2;
  }

  *Messages_PI = (unsigned long int)Offset_I / sizeof(struct anonymous) /*16ul*/ ;
  return 0;
}

// JAM_GetSubfield
// file jam.h line 320
struct anonymous$6 * JAM_GetSubfield(struct anonymous$8 *SubPack_PS)
{
  static unsigned long int NextIndex_I = (unsigned long int)0;
  static struct anonymous$8 *LastPack_PS = (struct anonymous$8 *)(void *)0;
  if(!(SubPack_PS == ((struct anonymous$8 *)NULL)))
  {
    LastPack_PS = SubPack_PS;
    NextIndex_I = (unsigned long int)0;
  }

  unsigned long int tmp_post$1;
  if(!(NextIndex_I >= LastPack_PS->NumFields))
  {
    tmp_post$1 = NextIndex_I;
    NextIndex_I = NextIndex_I + 1ul;
    return LastPack_PS->Fields[(signed long int)tmp_post$1];
  }

  else
    return (struct anonymous$6 *)(void *)0;
}

// JAM_GetSubfield_R
// file jamlib/jam.h line 322
struct anonymous$6 * JAM_GetSubfield_R(struct anonymous$8 *SubPack_PS, unsigned long int *Count_PI)
{
  unsigned long int tmp_post$1;
  if(!(*Count_PI >= SubPack_PS->NumFields))
  {
    tmp_post$1 = *Count_PI;
    *Count_PI = *Count_PI + 1ul;
    return SubPack_PS->Fields[(signed long int)tmp_post$1];
  }

  else
    return (struct anonymous$6 *)(void *)0;
}

// JAM_LockMB
// file jamlib/jam.h line 254
signed int JAM_LockMB(struct anonymous$7 *Base_PS, signed int Timeout_I)
{
  signed int return_value_jam_Lock$1;
  signed int return_value_jam_Lock$2;
  signed long int return_value_time$4;
  if(!(Base_PS->Locked_I == 0))
    return 0;

  else
  {
    if(!(Timeout_I == -1))
    {
      if(Timeout_I == 0)
        goto __CPROVER_DUMP_L4;

    }

    else
    {
      do
      {
        return_value_jam_Lock$1=jam_Lock(Base_PS, 1);
        if(!(return_value_jam_Lock$1 == 3))
          break;

        sleep((unsigned int)1);
      }
      while((_Bool)1);
      return 0;

    __CPROVER_DUMP_L4:
      ;
      return_value_jam_Lock$2=jam_Lock(Base_PS, 1);
      return return_value_jam_Lock$2;
    }
    signed long int Time_I;
    signed long int return_value_time$3;
    return_value_time$3=time((signed long int *)(void *)0);
    Time_I = return_value_time$3 + (signed long int)Timeout_I;
    do
    {
      return_value_time$4=time((signed long int *)(void *)0);
      if(return_value_time$4 >= Time_I)
        break;

      signed int Result_I;
      Result_I=jam_Lock(Base_PS, 1);
      if(Result_I == 3)
        sleep((unsigned int)1);

      else
        return Result_I;
    }
    while((_Bool)1);
    return 3;
  }
}

// JAM_NewSubPacket
// file jamlib/jam.h line 316
struct anonymous$8 * JAM_NewSubPacket(void)
{
  struct anonymous$8 *Sub_PS;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct anonymous$8) /*24ul*/ );
  Sub_PS = (struct anonymous$8 *)return_value_malloc$1;
  if(Sub_PS == ((struct anonymous$8 *)NULL))
    return (struct anonymous$8 *)(void *)0;

  else
  {
    Sub_PS->NumAlloc = (unsigned long int)20;
    Sub_PS->NumFields = (unsigned long int)0;
    void *return_value_calloc$2;
    return_value_calloc$2=calloc(Sub_PS->NumAlloc, sizeof(struct anonymous$6 *) /*8ul*/ );
    Sub_PS->Fields = (struct anonymous$6 **)return_value_calloc$2;
    if(Sub_PS->Fields == ((struct anonymous$6 **)NULL))
    {
      free((void *)Sub_PS);
      return (struct anonymous$8 *)(void *)0;
    }

    else
      return Sub_PS;
  }
}

// JAM_OpenMB
// file jamlib/jam.h line 242
signed int JAM_OpenMB(unsigned char *Basename_PC, struct anonymous$7 **NewArea_PPS)
{
  struct anonymous$7 *Base_PS;
  signed int Status_I;
  if(NewArea_PPS == ((struct anonymous$7 **)NULL))
    return 1;

  else
  {
    *NewArea_PPS = (struct anonymous$7 *)(void *)0;
    void *return_value_calloc$1;
    return_value_calloc$1=calloc((unsigned long int)1, sizeof(struct anonymous$7) /*56ul*/ );
    Base_PS = (struct anonymous$7 *)return_value_calloc$1;
    if(Base_PS == ((struct anonymous$7 *)NULL))
      return 5;

    else
    {
      *NewArea_PPS = Base_PS;
      Status_I=jam_Open(Base_PS, Basename_PC, "r+b");
      if(!(Status_I == 0))
        return Status_I;

      else
        return 0;
    }
  }
}

// JAM_PutSubfield
// file jamlib/jam.h line 325
signed int JAM_PutSubfield(struct anonymous$8 *SubPack_PS, struct anonymous$6 *Field_PS)
{
  struct anonymous$6 *NewField_PS;
  unsigned char *NewBuf_PC;
  if(SubPack_PS->NumFields == SubPack_PS->NumAlloc)
  {
    struct anonymous$6 **Fields_PPS;
    SubPack_PS->NumAlloc = SubPack_PS->NumAlloc * (unsigned long int)2;
    void *return_value_realloc$1;
    return_value_realloc$1=realloc((void *)SubPack_PS->Fields, SubPack_PS->NumAlloc * sizeof(struct anonymous$6 *) /*8ul*/ );
    Fields_PPS = (struct anonymous$6 **)return_value_realloc$1;
    if(Fields_PPS == ((struct anonymous$6 **)NULL))
      return 5;

    SubPack_PS->Fields = Fields_PPS;
  }

  void *return_value_malloc$2;
  return_value_malloc$2=malloc(sizeof(struct anonymous$6) /*24ul*/ );
  NewField_PS = (struct anonymous$6 *)return_value_malloc$2;
  if(NewField_PS == ((struct anonymous$6 *)NULL))
    return 5;

  else
  {
    if(!(Field_PS->DatLen == 0ul))
    {
      void *return_value_malloc$3;
      return_value_malloc$3=malloc(Field_PS->DatLen);
      NewBuf_PC = (unsigned char *)return_value_malloc$3;
      if(NewBuf_PC == ((unsigned char *)NULL))
      {
        free((void *)NewField_PS);
        return 5;
      }

      memcpy((void *)NewBuf_PC, (const void *)Field_PS->Buffer, Field_PS->DatLen);
    }

    else
      NewBuf_PC = (unsigned char *)(void *)0;
    NewField_PS->LoID = Field_PS->LoID;
    NewField_PS->HiID = Field_PS->HiID;
    NewField_PS->DatLen = Field_PS->DatLen;
    NewField_PS->Buffer = NewBuf_PC;
    SubPack_PS->Fields[(signed long int)SubPack_PS->NumFields] = NewField_PS;
    SubPack_PS->NumFields = SubPack_PS->NumFields + 1ul;
    return 0;
  }
}

// JAM_ReadLastRead
// file lastread.c line 49
signed int JAM_ReadLastRead(struct anonymous$7 *Base_PS, unsigned long int User_I, struct anonymous$2 *Record_PS)
{
  struct anonymous$2 Record_S;
  signed int Pos_I;
  if(Record_PS == ((struct anonymous$2 *)NULL))
    return 1;

  else
  {
    signed int return_value_fseek$2;
    return_value_fseek$2=fseek(Base_PS->LrdFile_PS, (signed long int)0, 0);
    if(!(return_value_fseek$2 == 0))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$1;
      return 2;
    }

    Pos_I = 0;
    do
    {
      signed int return_value_freadjamlastread$5;
      return_value_freadjamlastread$5=freadjamlastread(Base_PS->LrdFile_PS, &Record_S);
      if(!(return_value_freadjamlastread$5 >= 1))
      {
        signed int return_value_feof$3;
        return_value_feof$3=feof(Base_PS->LrdFile_PS);
        if(!(return_value_feof$3 == 0))
          return 6;

        signed int *return_value___errno_location$4;
        return_value___errno_location$4=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$4;
        return 2;
      }

      if(Record_S.UserID == User_I)
      {
        Base_PS->LastUserPos_I = (unsigned long int)Pos_I;
        Base_PS->LastUserId_I = User_I;
        *Record_PS = Record_S;
        return 0;
      }

      Pos_I = Pos_I + 1;
    }
    while((_Bool)1);
    return 0;
  }
}

// JAM_ReadMBHeader
// file jamlib/jam.h line 259
signed int JAM_ReadMBHeader(struct anonymous$7 *Base_PS, struct anonymous$4 *Header_PS)
{
  if(Base_PS == ((struct anonymous$7 *)NULL) || Header_PS == ((struct anonymous$4 *)NULL))
    return 1;

  else
  {
    signed int return_value_fseek$2;
    return_value_fseek$2=fseek(Base_PS->HdrFile_PS, (signed long int)0, 0);
    if(!(return_value_fseek$2 == 0))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$1;
      return 2;
    }

    signed int return_value_freadjambaseheader$4;
    return_value_freadjambaseheader$4=freadjambaseheader(Base_PS->HdrFile_PS, Header_PS);
    if(!(return_value_freadjambaseheader$4 >= 1))
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$3;
      return 2;
    }

    return 0;
  }
}

// JAM_ReadMsgHeader
// file jamlib/jam.h line 275
signed int JAM_ReadMsgHeader(struct anonymous$7 *Base_PS, unsigned long int MsgNo_I, struct anonymous$5 *Header_PS, struct anonymous$8 **SubfieldPack_PPS)
{
  struct anonymous Index_S;
  _Bool tmp_if_expr$12;
  if(Base_PS == ((struct anonymous$7 *)NULL) || Header_PS == ((struct anonymous$5 *)NULL))
    return 1;

  else
  {
    signed int return_value_fseek$2;
    return_value_fseek$2=fseek(Base_PS->IdxFile_PS, (signed long int)(MsgNo_I * sizeof(struct anonymous) /*16ul*/ ), 0);
    if(!(return_value_fseek$2 == 0))
    {
      signed int *return_value___errno_location$1;
      return_value___errno_location$1=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$1;
      return 2;
    }

    signed int return_value_freadjamindex$4;
    return_value_freadjamindex$4=freadjamindex(Base_PS->IdxFile_PS, &Index_S);
    if(!(return_value_freadjamindex$4 >= 1))
    {
      signed int *return_value___errno_location$3;
      return_value___errno_location$3=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$3;
      return 2;
    }

    if(Index_S.HdrOffset == 4294967295ul && Index_S.UserCRC == 4294967295ul)
      return 7;

    else
    {
      signed int return_value_fseek$6;
      return_value_fseek$6=fseek(Base_PS->HdrFile_PS, (signed long int)Index_S.HdrOffset, 0);
      if(!(return_value_fseek$6 == 0))
      {
        signed int *return_value___errno_location$5;
        return_value___errno_location$5=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$5;
        return 2;
      }

      signed int return_value_freadjammsgheader$8;
      return_value_freadjammsgheader$8=freadjammsgheader(Base_PS->HdrFile_PS, Header_PS);
      if(!(return_value_freadjammsgheader$8 >= 1))
      {
        signed int *return_value___errno_location$7;
        return_value___errno_location$7=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$7;
        return 2;
      }

      if(!(SubfieldPack_PPS == ((struct anonymous$8 **)NULL)))
        tmp_if_expr$12 = Header_PS->SubfieldLen != 0ul ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$12 = (_Bool)0;
      if(tmp_if_expr$12)
      {
        struct anonymous$8 *SubPacket_PS;
        struct anonymous$6 Subfield_S;
        char *Buf_PC;
        char *Ptr_PC;
        char *Roof_PC;
        signed int BufSize_I = (signed int)Header_PS->SubfieldLen;
        void *return_value_malloc$9;
        return_value_malloc$9=malloc((unsigned long int)BufSize_I);
        Buf_PC = (char *)(void *)return_value_malloc$9;
        if(Buf_PC == ((char *)NULL))
          return 5;

        unsigned long int return_value_fread$11;
        return_value_fread$11=fread((void *)Buf_PC, (unsigned long int)BufSize_I, (unsigned long int)1, Base_PS->HdrFile_PS);
        if(!(return_value_fread$11 >= 1ul))
        {
          signed int *return_value___errno_location$10;
          return_value___errno_location$10=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$10;
          free((void *)Buf_PC);
          return 2;
        }

        SubPacket_PS=JAM_NewSubPacket();
        if(SubPacket_PS == ((struct anonymous$8 *)NULL))
        {
          free((void *)Buf_PC);
          return 5;
        }

        Roof_PC = Buf_PC + (signed long int)BufSize_I;
        Ptr_PC = Buf_PC;
        for( ; !(Ptr_PC >= Roof_PC); Ptr_PC = Ptr_PC + (signed long int)(Subfield_S.DatLen + (unsigned long int)8))
        {
          signed int Status_I;
          getjamsubfield((unsigned char *)Ptr_PC, &Subfield_S);
          if(!(Roof_PC >= (char *)Subfield_S.Buffer + (signed long int)Subfield_S.DatLen))
          {
            JAM_DelSubPacket(SubPacket_PS);
            free((void *)Buf_PC);
            return 8;
          }

          Status_I=JAM_PutSubfield(SubPacket_PS, &Subfield_S);
          if(!(Status_I == 0))
          {
            JAM_DelSubPacket(SubPacket_PS);
            free((void *)Buf_PC);
            return Status_I;
          }

        }
        free((void *)Buf_PC);
        *SubfieldPack_PPS = SubPacket_PS;
      }

      else
        if(!(SubfieldPack_PPS == ((struct anonymous$8 **)NULL)))
          *SubfieldPack_PPS=JAM_NewSubPacket();

      return 0;
    }
  }
}

// JAM_ReadMsgText
// file jamlib/jam.h line 280
signed int JAM_ReadMsgText(struct anonymous$7 *Base_PS, unsigned long int Offset_I, unsigned long int Length_I, unsigned char *Buffer_PC)
{
  if(Base_PS == ((struct anonymous$7 *)NULL) || Buffer_PC == ((unsigned char *)NULL))
    return 1;

  else
    if(Length_I == 0ul)
      return 0;

    else
    {
      signed int return_value_fseek$2;
      return_value_fseek$2=fseek(Base_PS->TxtFile_PS, (signed long int)Offset_I, 0);
      if(!(return_value_fseek$2 == 0))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$1;
        return 2;
      }

      unsigned long int return_value_fread$4;
      return_value_fread$4=fread((void *)Buffer_PC, Length_I, (unsigned long int)1, Base_PS->TxtFile_PS);
      if(!(return_value_fread$4 >= 1ul))
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$3;
        return 2;
      }

      return 0;
    }
}

// JAM_RemoveMB
// file mbase.c line 222
signed int JAM_RemoveMB(struct anonymous$7 *Base_PS, unsigned char *Basename_PC)
{
  unsigned char Filename_AC[250l];
  signed int Status_AI[4l];
  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jhr");
  Status_AI[(signed long int)0]=remove((const char *)Filename_AC);
  signed int *return_value___errno_location$1;
  if(!(Status_AI[0l] == 0))
  {
    return_value___errno_location$1=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$1;
  }

  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jdt");
  Status_AI[(signed long int)1]=remove((const char *)Filename_AC);
  signed int *return_value___errno_location$2;
  if(!(Status_AI[1l] == 0))
  {
    return_value___errno_location$2=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$2;
  }

  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jdx");
  Status_AI[(signed long int)2]=remove((const char *)Filename_AC);
  signed int *return_value___errno_location$3;
  if(!(Status_AI[2l] == 0))
  {
    return_value___errno_location$3=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$3;
  }

  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jlr");
  Status_AI[(signed long int)3]=remove((const char *)Filename_AC);
  signed int *return_value___errno_location$4;
  if(!(Status_AI[3l] == 0))
  {
    return_value___errno_location$4=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$4;
  }

  _Bool tmp_if_expr$5;
  if(!(Status_AI[0l] == 0))
    tmp_if_expr$5 = (_Bool)1;

  else
    tmp_if_expr$5 = Status_AI[(signed long int)1] != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$6;
  if(tmp_if_expr$5)
    tmp_if_expr$6 = (_Bool)1;

  else
    tmp_if_expr$6 = Status_AI[(signed long int)2] != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$7;
  if(tmp_if_expr$6)
    tmp_if_expr$7 = (_Bool)1;

  else
    tmp_if_expr$7 = Status_AI[(signed long int)3] != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$7)
    return 2;

  else
    return 0;
}

// JAM_UnlockMB
// file jamlib/jam.h line 257
signed int JAM_UnlockMB(struct anonymous$7 *Base_PS)
{
  fflush(Base_PS->HdrFile_PS);
  fflush(Base_PS->TxtFile_PS);
  fflush(Base_PS->IdxFile_PS);
  fflush(Base_PS->LrdFile_PS);
  signed int return_value_jam_Lock$1;
  return_value_jam_Lock$1=jam_Lock(Base_PS, 0);
  return return_value_jam_Lock$1;
}

// JAM_WriteLastRead
// file lastread.c line 89
signed int JAM_WriteLastRead(struct anonymous$7 *Base_PS, unsigned long int User_I, struct anonymous$2 *Record_PS)
{
  struct anonymous$2 Record_S;
  signed int Pos_I;
  if(Record_PS == ((struct anonymous$2 *)NULL))
    return 1;

  else
  {
    if(User_I == Base_PS->LastUserId_I)
    {
      Pos_I = (signed int)(Base_PS->LastUserPos_I * sizeof(struct anonymous$2) /*32ul*/ );
      signed int return_value_fseek$2;
      return_value_fseek$2=fseek(Base_PS->LrdFile_PS, (signed long int)Pos_I, 0);
      if(!(return_value_fseek$2 == 0))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$1;
        return 2;
      }

      signed int return_value_freadjamlastread$4;
      return_value_freadjamlastread$4=freadjamlastread(Base_PS->LrdFile_PS, &Record_S);
      if(!(return_value_freadjamlastread$4 >= 1))
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$3;
        return 2;
      }

      if(User_I == Record_S.UserID)
      {
        signed int return_value_fseek$6;
        return_value_fseek$6=fseek(Base_PS->LrdFile_PS, (signed long int)Pos_I, 0);
        if(!(return_value_fseek$6 == 0))
        {
          signed int *return_value___errno_location$5;
          return_value___errno_location$5=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$5;
          return 2;
        }

        signed int return_value_fwritejamlastread$8;
        return_value_fwritejamlastread$8=fwritejamlastread(Base_PS->LrdFile_PS, Record_PS);
        if(!(return_value_fwritejamlastread$8 >= 1))
        {
          signed int *return_value___errno_location$7;
          return_value___errno_location$7=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$7;
          return 2;
        }

        fflush(Base_PS->LrdFile_PS);
        return 0;
      }

    }

    signed int return_value_fseek$10;
    return_value_fseek$10=fseek(Base_PS->LrdFile_PS, (signed long int)0, 0);
    if(!(return_value_fseek$10 == 0))
    {
      signed int *return_value___errno_location$9;
      return_value___errno_location$9=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$9;
      return 2;
    }

    Pos_I = 0;
    do
    {
      signed int return_value_freadjamlastread$15;
      return_value_freadjamlastread$15=freadjamlastread(Base_PS->LrdFile_PS, &Record_S);
      if(!(return_value_freadjamlastread$15 >= 1))
      {
        signed int return_value_feof$13;
        return_value_feof$13=feof(Base_PS->LrdFile_PS);
        if(!(return_value_feof$13 == 0))
        {
          signed int return_value_fseek$12;
          return_value_fseek$12=fseek(Base_PS->LrdFile_PS, (signed long int)0, 2);
          if(!(return_value_fseek$12 == 0))
          {
            signed int *return_value___errno_location$11;
            return_value___errno_location$11=__errno_location();
            Base_PS->Errno_I = *return_value___errno_location$11;
            return 2;
          }

          break;
        }

        signed int *return_value___errno_location$14;
        return_value___errno_location$14=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$14;
        return 2;
      }

      if(Record_S.UserID == User_I)
      {
        signed int return_value_fseek$17;
        return_value_fseek$17=fseek(Base_PS->LrdFile_PS, (signed long int)((unsigned long int)Pos_I * sizeof(struct anonymous$2) /*32ul*/ ), 0);
        if(!(return_value_fseek$17 == 0))
        {
          signed int *return_value___errno_location$16;
          return_value___errno_location$16=__errno_location();
          Base_PS->Errno_I = *return_value___errno_location$16;
          return 2;
        }

        break;
      }

      Pos_I = Pos_I + 1;
    }
    while((_Bool)1);
    signed int return_value_fwritejamlastread$19;
    return_value_fwritejamlastread$19=fwritejamlastread(Base_PS->LrdFile_PS, Record_PS);
    if(!(return_value_fwritejamlastread$19 >= 1))
    {
      signed int *return_value___errno_location$18;
      return_value___errno_location$18=__errno_location();
      Base_PS->Errno_I = *return_value___errno_location$18;
      return 2;
    }

    fflush(Base_PS->LrdFile_PS);
    return 0;
  }
}

// JAM_WriteMBHeader
// file mbase.c line 372
signed int JAM_WriteMBHeader(struct anonymous$7 *Base_PS, struct anonymous$4 *Header_PS)
{
  if(Base_PS == ((struct anonymous$7 *)NULL) || Header_PS == ((struct anonymous$4 *)NULL))
    return 1;

  else
    if(Base_PS->Locked_I == 0)
      return 4;

    else
    {
      signed int return_value_fseek$2;
      return_value_fseek$2=fseek(Base_PS->HdrFile_PS, (signed long int)0, 0);
      if(!(return_value_fseek$2 == 0))
      {
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$1;
        return 2;
      }

      memcpy((void *)Header_PS->Signature, (const void *)"JAM\0", (unsigned long int)4);
      Header_PS->ModCounter = Header_PS->ModCounter + 1ul;
      signed int return_value_fwritejambaseheader$4;
      return_value_fwritejambaseheader$4=fwritejambaseheader(Base_PS->HdrFile_PS, Header_PS);
      if(!(return_value_fwritejambaseheader$4 >= 1))
      {
        signed int *return_value___errno_location$3;
        return_value___errno_location$3=__errno_location();
        Base_PS->Errno_I = *return_value___errno_location$3;
        return 2;
      }

      fflush(Base_PS->HdrFile_PS);
      return 0;
    }
}

// addjamfield
// file nntpserv.c line 1467
void addjamfield(struct anonymous$8 *SubPacket_PS, unsigned long int fieldnum, unsigned char *fielddata)
{
  struct anonymous$6 Subfield_S;
  Subfield_S.LoID = (unsigned short int)fieldnum;
  Subfield_S.HiID = (unsigned short int)0;
  Subfield_S.DatLen=strlen((const char *)fielddata);
  Subfield_S.Buffer = fielddata;
  JAM_PutSubfield(SubPacket_PS, &Subfield_S);
}

// allocsockio
// file sockio.h line 10
struct sockio * allocsockio(signed int socket)
{
  struct sockio *sio;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(sizeof(struct sockio) /*1036ul*/ );
  sio = (struct sockio *)return_value_malloc$1;
  if(sio == ((struct sockio *)NULL))
    return (struct sockio *)(void *)0;

  else
  {
    sio->bufpos = 0;
    sio->buflen = 0;
    sio->socket = socket;
    return sio;
  }
}

// cancelmessage
// file nntpserv.c line 1652
void cancelmessage(struct var *var, unsigned char *article, struct xlat *postxlat)
{
  unsigned char *at;
  unsigned char *pc;
  struct group *group;
  unsigned long int num;
  unsigned long int count;
  signed int res;
  struct anonymous$4 baseheader;
  struct anonymous$8 *subpack;
  struct anonymous$5 header;
  struct anonymous$6 *field;
  struct xlat *xlat;
  unsigned char *xlatres;
  unsigned char buf[100l];
  unsigned char fromname[100l];
  unsigned char chrs[20l];
  unsigned char codepage[20l];
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(!((signed int)*article == 60))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_strlen$1=strlen((const char *)article);
    tmp_if_expr$2 = (signed int)article[(signed long int)(return_value_strlen$1 - (unsigned long int)1)] != 62 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_matchgroup$8;
  signed int return_value_strcasecmp$7;
  unsigned long int tmp_if_expr$13;
  unsigned long int tmp_if_expr$14;
  char *return_value_strchr$15;
  if(tmp_if_expr$2)
    socksendtext(var, (unsigned char *)"441 POST failed (Article to cancel not found)\r\n");

  else
  {
    strcpy((char *)article, (const char *)&article[(signed long int)1]);
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen((const char *)article);
    article[(signed long int)(return_value_strlen$3 - (unsigned long int)1)] = (unsigned char)0;
    char *return_value_strchr$4;
    return_value_strchr$4=strchr((const char *)article, 64);
    at = (unsigned char *)return_value_strchr$4;
    char *return_value_strchr$5;
    return_value_strchr$5=strchr((const char *)article, 36);
    pc = (unsigned char *)return_value_strchr$5;
    if(at == ((unsigned char *)NULL) || pc == ((unsigned char *)NULL))
      socksendtext(var, (unsigned char *)"441 POST failed (Article to cancel not found)\r\n");

    else
    {
      *at = (unsigned char)0;
      *pc = (unsigned char)0;
      at = at + 1l;
      pc = pc + 1l;
      signed int return_value_strcmp$6;
      return_value_strcmp$6=strcmp((const char *)at, "JamNNTPd");
      if(!(return_value_strcmp$6 == 0))
        socksendtext(var, (unsigned char *)"441 POST failed (Article to cancel not found)\r\n");

      else
      {
        group = var->firstgroup;
        for( ; !(group == ((struct group *)NULL)); group = group->next)
        {
          return_value_matchgroup$8=matchgroup(var->readgroups, group->group);
          if(!(return_value_matchgroup$8 == 0))
          {
            return_value_strcasecmp$7=strcasecmp((const char *)pc, (const char *)group->tagname);
            if(return_value_strcasecmp$7 == 0)
              break;

          }

        }
        signed int return_value_strcmp$9;
        return_value_strcmp$9=strcmp((const char *)at, "JamNNTPd");
        if(!(return_value_strcmp$9 == 0))
          socksendtext(var, (unsigned char *)"441 POST failed (Article to cancel not found)\r\n");

        else
        {
          signed long int return_value_atol$10;
          return_value_atol$10=atol((const char *)article);
          num = (unsigned long int)return_value_atol$10;
          signed int return_value_jamopenarea$11;
          return_value_jamopenarea$11=jamopenarea(var, group);
          if(return_value_jamopenarea$11 == 0)
            socksendtext(var, (unsigned char *)"441 POST failed (Article to cancel not found)\r\n");

          else
          {
            signed int return_value_JAM_ReadMBHeader$12;
            return_value_JAM_ReadMBHeader$12=JAM_ReadMBHeader(var->openmb, &baseheader);
            if(!(return_value_JAM_ReadMBHeader$12 == 0))
            {
              os_logwrite((unsigned char *)"(%s) Could not read messagebase header of \"%s\"", (const void *)var->clientid, (const void *)group->jampath);
              socksendtext(var, (unsigned char *)"441 POST failed (Could not read message to cancel)\r\n");
            }

            else
            {
              res=JAM_ReadMsgHeader(var->openmb, num - baseheader.BaseMsgNum, &header, &subpack);
              if(!(res == 0) && !(res == 7))
              {
                os_logwrite((unsigned char *)"(%s) Could not read message %lu in \"%s\"", (const void *)var->clientid, num, (const void *)var->opengroup->jampath);
                socksendtext(var, (unsigned char *)"441 POST failed (Could not read message to cancel)\r\n");
                JAM_DelSubPacket(subpack);
              }

              else
                if(res == 7)
                {
                  socksendtext(var, (unsigned char *)"441 POST failed (Article to cancel not found)\r\n");
                  JAM_DelSubPacket(subpack);
                }

                else
                {
                  fromname[(signed long int)0] = (unsigned char)0;
                  chrs[(signed long int)0] = (unsigned char)0;
                  codepage[(signed long int)0] = (unsigned char)0;
                  count = (unsigned long int)0;
                  do
                  {
                    field=JAM_GetSubfield_R(subpack, &count);
                    if(field == ((struct anonymous$6 *)NULL))
                      break;

                    if((signed int)field->LoID == 2)
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$13 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$13 = (unsigned long int)100;
                      mystrncpy(fromname, field->Buffer, (signed long int)tmp_if_expr$13);
                    }

                    if((signed int)field->LoID == 2000)
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$14 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$14 = (unsigned long int)100;
                      mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$14);
                      signed int return_value_strncasecmp$17;
                      return_value_strncasecmp$17=strncasecmp((const char *)buf, "CHRS: ", (unsigned long int)6);
                      if(return_value_strncasecmp$17 == 0)
                      {
                        mystrncpy(chrs, &buf[(signed long int)6], (signed long int)20);
                        char *return_value_strchr$16;
                        return_value_strchr$16=strchr((const char *)chrs, 32);
                        if(!(return_value_strchr$16 == ((char *)NULL)))
                        {
                          return_value_strchr$15=strchr((const char *)chrs, 32);
                          *return_value_strchr$15 = (char)0;
                        }

                        strip(chrs);
                      }

                      signed int return_value_strncasecmp$18;
                      return_value_strncasecmp$18=strncasecmp((const char *)buf, "CHARSET: ", (unsigned long int)9);
                      if(return_value_strncasecmp$18 == 0)
                        mystrncpy(chrs, &buf[(signed long int)9], (signed long int)20);

                      signed int return_value_strncasecmp$19;
                      return_value_strncasecmp$19=strncasecmp((const char *)buf, "CODEPAGE: ", (unsigned long int)10);
                      if(return_value_strncasecmp$19 == 0)
                        mystrncpy(codepage, &buf[(signed long int)10], (signed long int)20);

                    }

                  }
                  while((_Bool)1);
                  xlat=findreadxlat(var, group, chrs, codepage, postxlat->fromchrs);
                  if(!(xlat == ((struct xlat *)NULL)))
                  {
                    if(!(xlat->xlattab == ((struct xlattab *)NULL)))
                    {
                      xlatres=xlatstr(fromname, xlat->xlattab);
                      if(!(xlatres == ((unsigned char *)NULL)))
                      {
                        mystrncpy(fromname, xlatres, (signed long int)100);
                        free((void *)xlatres);
                      }

                    }

                  }

                  signed int return_value_matchname$20;
                  return_value_matchname$20=matchname(var->realnames, fromname);
                  if(return_value_matchname$20 == 0)
                  {
                    socksendtext(var, (unsigned char *)"441 POST failed (Cannot cancel, message not from you)\r\n");
                    JAM_DelSubPacket(subpack);
                  }

                  else
                    if((1ul & header.Attribute) == 0ul)
                    {
                      socksendtext(var, (unsigned char *)"441 POST failed (Cannot cancel, message not local)\r\n");
                      JAM_DelSubPacket(subpack);
                    }

                    else
                      if(!((16ul & header.Attribute) == 0ul))
                      {
                        socksendtext(var, (unsigned char *)"441 POST failed (Cannot cancel, message already sent)\r\n");
                        JAM_DelSubPacket(subpack);
                      }

                      else
                        if(!((1073741824ul & header.Attribute) == 0ul))
                        {
                          socksendtext(var, (unsigned char *)"441 POST failed (Cannot cancel, message is locked)\r\n");
                          JAM_DelSubPacket(subpack);
                        }

                        else
                        {
                          signed int return_value_JAM_LockMB$21;
                          return_value_JAM_LockMB$21=JAM_LockMB(var->openmb, 10);
                          if(!(return_value_JAM_LockMB$21 == 0))
                          {
                            os_logwrite((unsigned char *)"(%s) Failed to lock JAM messagebase \"%s\"", (const void *)var->clientid, (const void *)group->jampath);
                            socksendtext(var, (unsigned char *)"441 Local error: Failed to lock messagebase\r\n");
                            JAM_DelSubPacket(subpack);
                          }

                          else
                          {
                            header.Attribute = header.Attribute | (unsigned long int)0x80000000L;
                            res=JAM_ChangeMsgHeader(var->openmb, num - baseheader.BaseMsgNum, &header);
                            JAM_UnlockMB(var->openmb);
                            if(!(res == 0))
                            {
                              os_logwrite((unsigned char *)"(%s) Could not delete message %lu in \"%s\"", (const void *)var->clientid, num, (const void *)var->opengroup->jampath);
                              socksendtext(var, (unsigned char *)"441 Local error: Failed to delete message\r\n");
                              JAM_DelSubPacket(subpack);
                            }

                            else
                            {
                              socksendtext(var, (unsigned char *)"240 Article cancelled\r\n");
                              JAM_DelSubPacket(subpack);
                              goto __CPROVER_DUMP_L33;
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

__CPROVER_DUMP_L33:
  ;
}

// checkallow
// file allow.h line 1
signed int checkallow(struct var *var, unsigned char *ip)
{
  struct _IO_FILE *fp;
  unsigned char s[1000l];
  unsigned char cfgip[100l];
  unsigned char cfgreadgroups[50l];
  unsigned char cfgpostgroups[50l];
  signed int res1;
  signed int res2;
  signed int res3;
  unsigned long int pos;
  unsigned long int line;
  fp=fopen((const char *)cfg_allowfile, "r");
  char *return_value_fgets$1;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    os_logwrite((unsigned char *)"(%s) Can't read allow file %s", (const void *)var->clientid, cfg_allowfile);
    return 0;
  }

  else
  {
    line = (unsigned long int)0;
    do
    {
      return_value_fgets$1=fgets((char *)s, 999, fp);
      if(return_value_fgets$1 == ((char *)NULL))
        break;

      line = line + 1ul;
      strip(s);
      pos = (unsigned long int)0;
      if(!((signed int)s[0l] == 0))
      {
        if(!((signed int)s[0l] == 35))
        {
          res1=getcfgword(s, &pos, cfgip, (unsigned long int)100);
          res2=getcfgword(s, &pos, cfgreadgroups, (unsigned long int)50);
          res3=getcfgword(s, &pos, cfgpostgroups, (unsigned long int)50);
          if(!(res1 == 0))
          {
            signed int return_value_matchpattern$2;
            return_value_matchpattern$2=matchpattern(cfgip, ip);
            if(!(return_value_matchpattern$2 == 0))
            {
              if(!(res2 == 0))
                strcpy((char *)var->readgroups, (const char *)cfgreadgroups);

              if(!(res3 == 0))
                strcpy((char *)var->postgroups, (const char *)cfgpostgroups);

              fclose(fp);
              return 1;
            }

          }

          else
            os_logwrite((unsigned char *)"(%s) Syntax error on line %lu in %s, skipping line", (const void *)var->clientid, line, cfg_allowfile);
        }

      }

    }
    while((_Bool)1);
    fclose(fp);
    return 0;
  }
}

// chsgetbyte
// file xlat.c line 50
unsigned char chsgetbyte(struct var *var, unsigned char *filename, unsigned char *buf)
{
  unsigned long int res;
  if(buf == ((unsigned char *)NULL))
    return (unsigned char)0;

  else
    if((signed int)*buf == 92)
    {
      if((signed int)buf[1l] == 92)
        return (unsigned char)92;

      if((signed int)buf[1l] == 48)
        return (unsigned char)0;

      if((signed int)buf[1l] == 100)
      {
        signed int return_value_atoi$1;
        return_value_atoi$1=atoi((const char *)&buf[(signed long int)2]);
        return (unsigned char)return_value_atoi$1;
      }

      if((signed int)buf[1l] == 120)
      {
        sscanf((const char *)&buf[(signed long int)2], "%lx", &res);
        return (unsigned char)res;
      }

      os_logwrite((unsigned char *)"(%s) Warning: Unknown byte string %s in %s", (const void *)var->clientid, buf, filename);
      return (unsigned char)0;
    }

    else
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen((const char *)buf);
      if(return_value_strlen$2 >= 2ul)
        os_logwrite((unsigned char *)"(%s) Warning: Too long byte string %s in %s", (const void *)var->clientid, buf, filename);

      return buf[(signed long int)0];
    }
}

// chsgetline
// file xlat.c line 38
signed int chsgetline(struct _IO_FILE *fp, unsigned char *str, unsigned long int len)
{
  do
  {
    char *return_value_fgets$1;
    return_value_fgets$1=fgets((char *)str, (signed int)len, fp);
    if(return_value_fgets$1 == ((char *)NULL))
      return 0;

    if(!((signed int)*str == 59))
      return 1;

  }
  while((_Bool)1);
}

// chsgetword
// file xlat.c line 89
signed int chsgetword(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen)
{
  unsigned long int begin;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)line[(signed long int)*pos]]) == 0)
      break;

    if((signed int)line[(signed long int)*pos] == 0)
      break;

    *pos = *pos + 1ul;
  }
  while((_Bool)1);
  const unsigned short int **return_value___ctype_b_loc$2;
  if((signed int)line[(signed long int)*pos] == 0)
    return 0;

  else
  {
    begin = *pos;
    for( ; !((signed int)line[(signed long int)*pos] == 0); *pos = *pos + 1ul)
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if(!((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)line[(signed long int)*pos]]) == 0))
        break;

    }
    if(!((signed int)line[(signed long int)*pos] == 0))
    {
      line[(signed long int)*pos] = (unsigned char)0;
      *pos = *pos + 1ul;
    }

    mystrncpy(dest, &line[(signed long int)begin], (signed long int)destlen);
    return 1;
  }
}

// command_abhs
// file nntpserv.c line 664
void command_abhs(struct var *var, unsigned char *cmd)
{
  unsigned char *article;
  unsigned long int articlenum;
  struct group *group;
  unsigned long int min;
  unsigned long int max;
  unsigned long int num;
  unsigned long int command_abhs$$1$$c;
  unsigned long int d;
  unsigned char datebuf[50l];
  unsigned char jamfromaddr[100l];
  unsigned char jamtoaddr[100l];
  unsigned char replyaddr[100l];
  unsigned char fromaddr[100l];
  unsigned char fromname[100l];
  unsigned char toname[100l];
  unsigned char subject[100l];
  unsigned char chrs[20l];
  unsigned char codepage[20l];
  unsigned char encoding[20l];
  unsigned char format[20l];
  unsigned char timezone[20l];
  unsigned char buf[250l];
  unsigned char *at;
  unsigned char *pc;
  unsigned char *text;
  struct xlat *xlat;
  unsigned char *xlatres;
  struct anonymous$4 baseheader;
  struct anonymous$8 *subpack;
  struct anonymous$5 header;
  struct anonymous$6 *field;
  signed int res;
  unsigned long int count;
  article=parseinput(var);
  _Bool tmp_if_expr$12;
  unsigned long int return_value_strlen$11;
  signed int return_value_matchgroup$6;
  signed int return_value_strcasecmp$5;
  signed long int return_value_atol$10;
  if(article == ((unsigned char *)NULL))
  {
    if(var->currentgroup == ((struct group *)NULL))
    {
      socksendtext(var, (unsigned char *)"412 No newsgroup selected\r\n");
      goto __CPROVER_DUMP_L136;
    }

    if(var->currentarticle == 0ul)
    {
      socksendtext(var, (unsigned char *)"420 No current article has been selected\r\n");
      goto __CPROVER_DUMP_L136;
    }

    articlenum = var->currentarticle;
    group = var->currentgroup;
  }

  else
  {
    if((signed int)*article == 60)
    {
      return_value_strlen$11=strlen((const char *)article);
      tmp_if_expr$12 = (signed int)article[(signed long int)(return_value_strlen$11 - (unsigned long int)1)] == 62 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$12 = (_Bool)0;
    if(tmp_if_expr$12)
    {
      strcpy((char *)article, (const char *)&article[(signed long int)1]);
      unsigned long int return_value_strlen$1;
      return_value_strlen$1=strlen((const char *)article);
      article[(signed long int)(return_value_strlen$1 - (unsigned long int)1)] = (unsigned char)0;
      char *return_value_strchr$2;
      return_value_strchr$2=strchr((const char *)article, 64);
      at = (unsigned char *)return_value_strchr$2;
      char *return_value_strchr$3;
      return_value_strchr$3=strchr((const char *)article, 36);
      pc = (unsigned char *)return_value_strchr$3;
      if(at == ((unsigned char *)NULL) || pc == ((unsigned char *)NULL))
      {
        socksendtext(var, (unsigned char *)"430 No such article found\r\n");
        goto __CPROVER_DUMP_L136;
      }

      *at = (unsigned char)0;
      *pc = (unsigned char)0;
      at = at + 1l;
      pc = pc + 1l;
      signed int return_value_strcmp$4;
      return_value_strcmp$4=strcmp((const char *)at, "JamNNTPd");
      if(!(return_value_strcmp$4 == 0))
      {
        socksendtext(var, (unsigned char *)"430 No such article found\r\n");
        goto __CPROVER_DUMP_L136;
      }

      group = var->firstgroup;
      for( ; !(group == ((struct group *)NULL)); group = group->next)
      {
        return_value_matchgroup$6=matchgroup(var->readgroups, group->group);
        if(!(return_value_matchgroup$6 == 0))
        {
          return_value_strcasecmp$5=strcasecmp((const char *)pc, (const char *)group->tagname);
          if(return_value_strcasecmp$5 == 0)
            break;

        }

      }
      if(group == ((struct group *)NULL))
      {
        socksendtext(var, (unsigned char *)"430 No such article found\r\n");
        goto __CPROVER_DUMP_L136;
      }

      signed long int return_value_atol$7;
      return_value_atol$7=atol((const char *)article);
      articlenum = (unsigned long int)return_value_atol$7;
      jamgetminmaxnum(var, group, &min, &max, &num);
      if(!(articlenum >= min) || !(max >= articlenum))
      {
        socksendtext(var, (unsigned char *)"430 No such article found\r\n");
        goto __CPROVER_DUMP_L136;
      }

    }

    else
    {
      return_value_atol$10=atol((const char *)article);
      if(return_value_atol$10 >= 1l)
      {
        if(var->currentgroup == ((struct group *)NULL))
        {
          socksendtext(var, (unsigned char *)"412 No newsgroup selected\r\n");
          goto __CPROVER_DUMP_L136;
        }

        signed long int return_value_atol$8;
        return_value_atol$8=atol((const char *)article);
        articlenum = (unsigned long int)return_value_atol$8;
        group = var->currentgroup;
        signed int return_value_jamgetminmaxnum$9;
        return_value_jamgetminmaxnum$9=jamgetminmaxnum(var, var->currentgroup, &min, &max, &num);
        if(return_value_jamgetminmaxnum$9 == 0)
        {
          socksendtext(var, (unsigned char *)"503 Local error: Could not get size of messagebase\r\n");
          goto __CPROVER_DUMP_L136;
        }

        jamgetminmaxnum(var, group, &min, &max, &num);
        if(!(articlenum >= min) || !(max >= articlenum))
        {
          socksendtext(var, (unsigned char *)"423 No such article number in this group\r\n");
          goto __CPROVER_DUMP_L136;
        }

        var->currentarticle = articlenum;
      }

      else
      {
        socksendtext(var, (unsigned char *)"501 Invalid article number specified\r\n");
        goto __CPROVER_DUMP_L136;
      }
    }
  }
  signed int return_value_strcasecmp$13;
  return_value_strcasecmp$13=strcasecmp((const char *)cmd, "STAT");
  unsigned long int tmp_if_expr$17;
  unsigned long int tmp_if_expr$18;
  unsigned long int tmp_if_expr$19;
  unsigned long int tmp_if_expr$20;
  unsigned long int tmp_if_expr$21;
  unsigned long int tmp_if_expr$22;
  unsigned long int tmp_if_expr$23;
  signed int return_value_strncasecmp$24;
  signed int return_value_strncasecmp$25;
  signed int return_value_strncasecmp$26;
  signed int return_value_strncasecmp$27;
  signed int return_value_strncasecmp$30;
  char *return_value_strchr$28;
  signed int return_value_strncasecmp$31;
  signed int return_value_strncasecmp$32;
  signed int return_value_matchname$33;
  _Bool tmp_if_expr$53;
  signed int return_value_strcasecmp$52;
  signed int return_value_sscanf$38;
  _Bool tmp_if_expr$40;
  unsigned long int tmp_if_expr$41;
  unsigned long int tmp_if_expr$42;
  unsigned long int tmp_if_expr$43;
  unsigned long int tmp_if_expr$44;
  unsigned long int tmp_if_expr$45;
  unsigned long int tmp_if_expr$46;
  unsigned long int tmp_if_expr$47;
  unsigned long int tmp_if_expr$48;
  unsigned long int tmp_if_expr$49;
  _Bool tmp_if_expr$59;
  signed int return_value_strcasecmp$58;
  _Bool tmp_if_expr$56;
  unsigned long int tmp_post$55;
  if(return_value_strcasecmp$13 == 0)
    sockprintf(var, (unsigned char *)"223 %lu <%lu$%s@JamNNTPd> Article retrieved\r\n", articlenum, articlenum, (const void *)group->tagname);

  else
  {
    signed int return_value_jamopenarea$14;
    return_value_jamopenarea$14=jamopenarea(var, group);
    if(return_value_jamopenarea$14 == 0)
      socksendtext(var, (unsigned char *)"503 Local error: Could not open messagebase\r\n");

    else
    {
      signed int return_value_JAM_ReadMBHeader$15;
      return_value_JAM_ReadMBHeader$15=JAM_ReadMBHeader(var->openmb, &baseheader);
      if(!(return_value_JAM_ReadMBHeader$15 == 0))
      {
        os_logwrite((unsigned char *)"(%s) Could not read messagebase header of \"%s\"", (const void *)var->clientid, (const void *)var->opengroup->jampath);
        socksendtext(var, (unsigned char *)"503 Local error: Could not read messagebase header\r\n");
      }

      else
      {
        res=JAM_ReadMsgHeader(var->openmb, articlenum - baseheader.BaseMsgNum, &header, &subpack);
        if(!(res == 0) && !(res == 7))
        {
          os_logwrite((unsigned char *)"(%s) Could not read message %lu in \"%s\"", (const void *)var->clientid, articlenum, (const void *)var->opengroup->jampath);
          socksendtext(var, (unsigned char *)"503 Local error: Could not read message header\r\n");
          JAM_DelSubPacket(subpack);
        }

        else
          if(res == 7 || !((2147483648ul & header.Attribute) == 0ul))
          {
            socksendtext(var, (unsigned char *)"503 Message has been deleted\r\n");
            JAM_DelSubPacket(subpack);
          }

          else
          {
            void *return_value_malloc$16;
            return_value_malloc$16=malloc(header.TxtLen + (unsigned long int)1);
            text = (unsigned char *)return_value_malloc$16;
            if(text == ((unsigned char *)NULL))
            {
              socksendtext(var, (unsigned char *)"503 Local error: Out of memory\r\n");
              JAM_DelSubPacket(subpack);
            }

            else
              if(!(header.TxtLen == 0ul))
              {
                res=JAM_ReadMsgText(var->openmb, header.TxtOffset, header.TxtLen, text);
                if(res == 0)
                  goto __CPROVER_DUMP_L25;

                socksendtext(var, (unsigned char *)"503 Local error: Could not read message text\r\n");
                JAM_DelSubPacket(subpack);
                free((void *)text);
              }

              else
              {

              __CPROVER_DUMP_L25:
                ;
                text[(signed long int)header.TxtLen] = (unsigned char)0;
                fromname[(signed long int)0] = (unsigned char)0;
                jamfromaddr[(signed long int)0] = (unsigned char)0;
                toname[(signed long int)0] = (unsigned char)0;
                jamtoaddr[(signed long int)0] = (unsigned char)0;
                subject[(signed long int)0] = (unsigned char)0;
                replyaddr[(signed long int)0] = (unsigned char)0;
                timezone[(signed long int)0] = (unsigned char)0;
                chrs[(signed long int)0] = (unsigned char)0;
                codepage[(signed long int)0] = (unsigned char)0;
                count = (unsigned long int)0;
                do
                {
                  field=JAM_GetSubfield_R(subpack, &count);
                  if(field == ((struct anonymous$6 *)NULL))
                    break;

                  switch((signed int)field->LoID)
                  {
                    case 2:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$17 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$17 = (unsigned long int)100;
                      mystrncpy(fromname, field->Buffer, (signed long int)tmp_if_expr$17);
                      break;
                    }
                    case 3:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$18 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$18 = (unsigned long int)100;
                      mystrncpy(toname, field->Buffer, (signed long int)tmp_if_expr$18);
                      break;
                    }
                    case 0:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$19 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$19 = (unsigned long int)100;
                      mystrncpy(jamfromaddr, field->Buffer, (signed long int)tmp_if_expr$19);
                      break;
                    }
                    case 1:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$20 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$20 = (unsigned long int)100;
                      mystrncpy(jamtoaddr, field->Buffer, (signed long int)tmp_if_expr$20);
                      break;
                    }
                    case 6:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$21 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$21 = (unsigned long int)100;
                      mystrncpy(subject, field->Buffer, (signed long int)tmp_if_expr$21);
                      break;
                    }
                    case 2004:
                    {
                      if(!(1ul + field->DatLen >= 20ul))
                        tmp_if_expr$22 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$22 = (unsigned long int)20;
                      mystrncpy(timezone, field->Buffer, (signed long int)tmp_if_expr$22);
                      break;
                    }
                    case 2000:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$23 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$23 = (unsigned long int)100;
                      mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$23);
                      return_value_strncasecmp$24=strncasecmp((const char *)buf, "REPLYADDR ", (unsigned long int)10);
                      if(return_value_strncasecmp$24 == 0)
                        mystrncpy(replyaddr, &buf[(signed long int)10], (signed long int)100);

                      return_value_strncasecmp$25=strncasecmp((const char *)buf, "REPLYADDR: ", (unsigned long int)11);
                      if(return_value_strncasecmp$25 == 0)
                        mystrncpy(replyaddr, &buf[(signed long int)11], (signed long int)100);

                      return_value_strncasecmp$26=strncasecmp((const char *)buf, "TZUTC: ", (unsigned long int)7);
                      if(return_value_strncasecmp$26 == 0)
                        mystrncpy(timezone, &buf[(signed long int)7], (signed long int)20);

                      return_value_strncasecmp$27=strncasecmp((const char *)buf, "TZUTCINFO: ", (unsigned long int)11);
                      if(return_value_strncasecmp$27 == 0)
                        mystrncpy(timezone, &buf[(signed long int)11], (signed long int)20);

                      return_value_strncasecmp$30=strncasecmp((const char *)buf, "CHRS: ", (unsigned long int)6);
                      if(return_value_strncasecmp$30 == 0)
                      {
                        mystrncpy(chrs, &buf[(signed long int)6], (signed long int)20);
                        char *return_value_strchr$29;
                        return_value_strchr$29=strchr((const char *)chrs, 32);
                        if(!(return_value_strchr$29 == ((char *)NULL)))
                        {
                          return_value_strchr$28=strchr((const char *)chrs, 32);
                          *return_value_strchr$28 = (char)0;
                        }

                        strip(chrs);
                      }

                      return_value_strncasecmp$31=strncasecmp((const char *)buf, "CHARSET: ", (unsigned long int)9);
                      if(return_value_strncasecmp$31 == 0)
                      {
                        mystrncpy(chrs, &buf[(signed long int)9], (signed long int)20);
                        strip(chrs);
                      }

                      return_value_strncasecmp$32=strncasecmp((const char *)buf, "CODEPAGE: ", (unsigned long int)10);
                      if(return_value_strncasecmp$32 == 0)
                      {
                        mystrncpy(codepage, &buf[(signed long int)10], (signed long int)20);
                        strip(codepage);
                      }

                    }
                  }
                }
                while((_Bool)1);
                if(!(cfg_readorigin == 0))
                {
                  if(group->netmail == 0)
                  {
                    if(group->local == 0)
                      readoriginaddr(var->openmb, header.TxtOffset, header.TxtLen, jamfromaddr);

                  }

                }

                stripreplyaddr(replyaddr);
                xlat=findreadxlat(var, group, chrs, codepage, (unsigned char *)(void *)0);
                if(!(xlat == ((struct xlat *)NULL)))
                  strcpy((char *)chrs, (const char *)xlat->tochrs);

                else
                  strcpy((char *)chrs, "unknown-8bit");
                if(!(xlat == ((struct xlat *)NULL)))
                {
                  if(!(xlat->xlattab == ((struct xlattab *)NULL)))
                  {
                    xlatres=xlatstr(fromname, xlat->xlattab);
                    if(!(xlatres == ((unsigned char *)NULL)))
                    {
                      mystrncpy(fromname, xlatres, (signed long int)100);
                      free((void *)xlatres);
                    }

                    xlatres=xlatstr(toname, xlat->xlattab);
                    if(!(xlatres == ((unsigned char *)NULL)))
                    {
                      mystrncpy(toname, xlatres, (signed long int)100);
                      free((void *)xlatres);
                    }

                    xlatres=xlatstr(subject, xlat->xlattab);
                    if(!(xlatres == ((unsigned char *)NULL)))
                    {
                      mystrncpy(subject, xlatres, (signed long int)100);
                      free((void *)xlatres);
                    }

                  }

                }

                if(!(group->netmail == 0))
                {
                  signed int return_value_matchname$34;
                  return_value_matchname$34=matchname(var->realnames, fromname);
                  if(return_value_matchname$34 == 0)
                  {
                    return_value_matchname$33=matchname(var->realnames, toname);
                    if(return_value_matchname$33 == 0)
                    {
                      socksendtext(var, (unsigned char *)"503 Access denied\r\n");
                      JAM_DelSubPacket(subpack);
                      free((void *)text);
                      goto __CPROVER_DUMP_L136;
                    }

                  }

                }

                signed int return_value_strcasecmp$35;
                return_value_strcasecmp$35=strcasecmp((const char *)cmd, "ARTICLE");
                if(return_value_strcasecmp$35 == 0)
                  sockprintf(var, (unsigned char *)"220 %ld <%ld$%s@JamNNTPd> Article retrieved - Head and body follow\r\n", articlenum, articlenum, (const void *)group->tagname);

                signed int return_value_strcasecmp$36;
                return_value_strcasecmp$36=strcasecmp((const char *)cmd, "HEAD");
                if(return_value_strcasecmp$36 == 0)
                  sockprintf(var, (unsigned char *)"221 %ld <%ld$%s@JamNNTPd> Article retrieved - Head follows\r\n", articlenum, articlenum, (const void *)group->tagname);

                signed int return_value_strcasecmp$37;
                return_value_strcasecmp$37=strcasecmp((const char *)cmd, "BODY");
                if(return_value_strcasecmp$37 == 0)
                  sockprintf(var, (unsigned char *)"222 %ld <%ld$%s@JamNNTPd> Article retrieved - Body follows\r\n", articlenum, articlenum, (const void *)group->tagname);

                signed int return_value_strcasecmp$51;
                return_value_strcasecmp$51=strcasecmp((const char *)cmd, "ARTICLE");
                if(return_value_strcasecmp$51 == 0)
                  tmp_if_expr$53 = (_Bool)1;

                else
                {
                  return_value_strcasecmp$52=strcasecmp((const char *)cmd, "HEAD");
                  tmp_if_expr$53 = return_value_strcasecmp$52 == 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$53)
                {
                  if(!(replyaddr[0l] == 0))
                    strcpy((char *)fromaddr, (const char *)replyaddr);

                  else
                    strcpy((char *)fromaddr, (const char *)jamfromaddr);
                  if((signed int)fromaddr[0l] == 0)
                    strcpy((char *)fromaddr, "unknown");

                  if((signed int)fromname[0l] == 0)
                    strcpy((char *)fromname, "unknown");

                  if((signed int)toname[0l] == 0)
                    strcpy((char *)toname, "(none)");

                  makedate((signed long int)header.DateWritten, datebuf, timezone);
                  sockprintf(var, (unsigned char *)"Path: JamNNTPd!not-for-mail\r\n");
                  if(!(var->opt_showto == 0))
                    sprintf((char *)buf, "%s -> %s", (const void *)fromname, (const void *)toname);

                  else
                    strcpy((char *)buf, (const char *)fromname);
                  unsigned int zone;
                  unsigned int net;
                  unsigned int node;
                  unsigned int point;
                  signed int return_value_sscanf$39;
                  return_value_sscanf$39=sscanf((const char *)fromaddr, "%u:%u/%u.%u", &zone, &net, &node, &point);
                  if(return_value_sscanf$39 == 4)
                    sprintf((char *)fromaddr, "%u@%u.%u.%u", point, node, net, zone);

                  else
                  {
                    return_value_sscanf$38=sscanf((const char *)fromaddr, "%u:%u/%u", &zone, &net, &node);
                    if(return_value_sscanf$38 == 3)
                      sprintf((char *)fromaddr, "0@%u.%u.%u", node, net, zone);

                  }
                  mimesendheaderline(var, (unsigned char *)"From", buf, chrs, fromaddr, cfg_noencode);
                  mimesendheaderline(var, (unsigned char *)"X-Comment-To", toname, chrs, (unsigned char *)(void *)0, cfg_noencode);
                  sockprintf(var, (unsigned char *)"Newsgroups: %s\r\n", (const void *)group->tagname);
                  mimesendheaderline(var, (unsigned char *)"Subject", subject, chrs, (unsigned char *)(void *)0, cfg_noencode);
                  sockprintf(var, (unsigned char *)"Date: %s\r\n", (const void *)datebuf);
                  sockprintf(var, (unsigned char *)"Message-ID: <%ld$%s@JamNNTPd>\r\n", articlenum, (const void *)group->tagname);
                  if(!(header.ReplyTo == 0ul))
                    sockprintf(var, (unsigned char *)"References: <%ld$%s@JamNNTPd>\r\n", header.ReplyTo, (const void *)group->tagname);

                  if(!(jamfromaddr[0l] == 0))
                    sockprintf(var, (unsigned char *)"X-JAM-From: %s <%s>\r\n", (const void *)fromname, (const void *)jamfromaddr);

                  else
                    sockprintf(var, (unsigned char *)"X-JAM-From: %s\r\n", (const void *)fromname);
                  if(!(toname[0l] == 0))
                    tmp_if_expr$40 = (_Bool)1;

                  else
                    tmp_if_expr$40 = jamtoaddr[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;
                  if(tmp_if_expr$40)
                  {
                    if(!(jamtoaddr[0l] == 0))
                      sockprintf(var, (unsigned char *)"X-JAM-To: %s <%s>\r\n", (const void *)toname, (const void *)jamtoaddr);

                    else
                      sockprintf(var, (unsigned char *)"X-JAM-To: %s\r\n", (const void *)toname);
                  }

                  count = (unsigned long int)0;
                  do
                  {
                    field=JAM_GetSubfield_R(subpack, &count);
                    if(field == ((struct anonymous$6 *)NULL))
                      break;

                    switch((signed int)field->LoID)
                    {
                      case 4:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$41 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$41 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$41);
                        sockprintf(var, (unsigned char *)"X-JAM-MSGID: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 5:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$42 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$42 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$42);
                        sockprintf(var, (unsigned char *)"X-JAM-REPLYID: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 7:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$43 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$43 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$43);
                        sockprintf(var, (unsigned char *)"X-JAM-PID: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 2003:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$44 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$44 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$44);
                        sockprintf(var, (unsigned char *)"X-JAM-FLAGS: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 8:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$45 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$45 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$45);
                        sockprintf(var, (unsigned char *)"X-JAM-TRACE: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 2004:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$46 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$46 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$46);
                        sockprintf(var, (unsigned char *)"X-JAM-TZUTCINFO: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 2001:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$47 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$47 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$47);
                        sockprintf(var, (unsigned char *)"X-JAM-SEENBY2D: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 2002:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$48 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$48 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$48);
                        sockprintf(var, (unsigned char *)"X-JAM-PATH2D: %s\r\n", (const void *)buf);
                        break;
                      }
                      case 2000:
                      {
                        if(!(1ul + field->DatLen >= 200ul))
                          tmp_if_expr$49 = field->DatLen + (unsigned long int)1;

                        else
                          tmp_if_expr$49 = (unsigned long int)200;
                        mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$49);
                        sockprintf(var, (unsigned char *)"X-JAM-FTSKLUDGE: %s\r\n", (const void *)buf);
                      }
                    }
                  }
                  while((_Bool)1);
                  if(!(header.Attribute == 0ul))
                  {
                    signed int c;
                    strcpy((char *)buf, "X-JAM-Attributes:");
                    c = 0;
                    for( ; !(attributenames[(signed long int)c].name == ((unsigned char *)NULL)); c = c + 1)
                      if(!((attributenames[(signed long int)c].attr & header.Attribute) == 0ul))
                      {
                        strcat((char *)buf, " ");
                        strcat((char *)buf, (const char *)attributenames[(signed long int)c].name);
                      }

                    strcat((char *)buf, "\r\n");
                    socksendtext(var, buf);
                  }

                  socksendtext(var, (unsigned char *)"MIME-Version: 1.0\r\n");
                  unsigned long int return_value_count8bit$50;
                  return_value_count8bit$50=count8bit(text);
                  if(!(return_value_count8bit$50 == 0ul))
                    strcpy((char *)encoding, "8bit");

                  else
                  {
                    strcpy((char *)encoding, "7bit");
                    strcpy((char *)chrs, "us-ascii");
                  }
                  if(!(var->opt_flowed == 0))
                    strcpy((char *)format, "flowed");

                  else
                    strcpy((char *)format, "fixed");
                  sockprintf(var, (unsigned char *)"Content-Type: text/plain; charset=%s; format=%s\r\n", (const void *)chrs, (const void *)format);
                  sockprintf(var, (unsigned char *)"Content-Transfer-Encoding: %s\r\n", (const void *)encoding);
                }

                signed int return_value_strcasecmp$54;
                return_value_strcasecmp$54=strcasecmp((const char *)cmd, "ARTICLE");
                if(return_value_strcasecmp$54 == 0)
                  socksendtext(var, (unsigned char *)"\r\n");

                signed int return_value_strcasecmp$57;
                return_value_strcasecmp$57=strcasecmp((const char *)cmd, "ARTICLE");
                if(return_value_strcasecmp$57 == 0)
                  tmp_if_expr$59 = (_Bool)1;

                else
                {
                  return_value_strcasecmp$58=strcasecmp((const char *)cmd, "BODY");
                  tmp_if_expr$59 = return_value_strcasecmp$58 == 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$59)
                {
                  if(!(header.TxtLen == 0ul))
                  {
                    if(!(xlat == ((struct xlat *)NULL)))
                      tmp_if_expr$56 = xlat->keepsoftcr != 0 ? (_Bool)1 : (_Bool)0;

                    else
                      tmp_if_expr$56 = (_Bool)0;
                    if(!tmp_if_expr$56)
                    {
                      d = (unsigned long int)0;
                      command_abhs$$1$$c = (unsigned long int)0;
                      for( ; !(text[(signed long int)command_abhs$$1$$c] == 0); command_abhs$$1$$c = command_abhs$$1$$c + 1ul)
                        if(!((signed int)text[(signed long int)command_abhs$$1$$c] == 0x8d))
                        {
                          tmp_post$55 = d;
                          d = d + 1ul;
                          text[(signed long int)tmp_post$55] = text[(signed long int)command_abhs$$1$$c];
                        }

                      text[(signed long int)d] = (unsigned char)0;
                    }

                    sendtextblock(var, text, xlat);
                  }

                }

                socksendtext(var, (unsigned char *)".\r\n");
                JAM_DelSubPacket(subpack);
                free((void *)text);
              }
          }
      }
    }
  }

__CPROVER_DUMP_L136:
  ;
}

// command_authinfo
// file nntpserv.c line 2821
void command_authinfo(struct var *var)
{
  unsigned char *tmp;
  unsigned char *opt;
  unsigned char *next;
  unsigned char *equal;
  signed int flowed;
  signed int showto;
  tmp=parseinput(var);
  signed int return_value_strcasecmp$1;
  signed int return_value_strcasecmp$10;
  if(tmp == ((unsigned char *)NULL))
    socksendtext(var, (unsigned char *)"501 Only AUTHINFO USER or AUTHINFO pass are understood\r\n");

  else
  {
    signed int return_value_strcasecmp$2;
    return_value_strcasecmp$2=strcasecmp((const char *)tmp, "user");
    if(!(return_value_strcasecmp$2 == 0))
    {
      return_value_strcasecmp$1=strcasecmp((const char *)tmp, "pass");
      if(return_value_strcasecmp$1 == 0)
        goto __CPROVER_DUMP_L2;

      socksendtext(var, (unsigned char *)"501 Only AUTHINFO USER or AUTHINFO pass are understood\r\n");
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      signed int return_value_strcasecmp$3;
      return_value_strcasecmp$3=strcasecmp((const char *)tmp, "user");
      if(return_value_strcasecmp$3 == 0)
      {
        tmp=parseinput(var);
        if(tmp == ((unsigned char *)NULL))
        {
          socksendtext(var, (unsigned char *)"482 No user specified for AUTHINFO USER\r\n");
          goto __CPROVER_DUMP_L19;
        }

        mystrncpy(var->loginname, tmp, (signed long int)100);
        socksendtext(var, (unsigned char *)"381 Received login name, now send password\r\n");
      }

      else
        if((signed int)var->loginname[0l] == 0)
          socksendtext(var, (unsigned char *)"482 Use AUTHINFO USER before AUTHINFO pass\r\n");

        else
        {
          tmp=parseinput(var);
          if(tmp == ((unsigned char *)NULL))
            socksendtext(var, (unsigned char *)"482 No password specified for AUTHINFO PASS\r\n");

          else
          {
            mystrncpy(var->password, tmp, (signed long int)100);
            opt = (unsigned char *)(void *)0;
            flowed = var->opt_flowed;
            showto = var->opt_showto;
            char *return_value_strchr$5;
            return_value_strchr$5=strchr((const char *)var->loginname, 47);
            if(!(return_value_strchr$5 == ((char *)NULL)))
            {
              char *return_value_strchr$4;
              return_value_strchr$4=strchr((const char *)var->loginname, 47);
              opt = (unsigned char *)return_value_strchr$4;
              *opt = (unsigned char)0;
              opt = opt + 1l;
            }

            while(!(opt == ((unsigned char *)NULL)))
            {
              char *return_value_strchr$6;
              return_value_strchr$6=strchr((const char *)opt, 44);
              next = (unsigned char *)return_value_strchr$6;
              if(!(next == ((unsigned char *)NULL)))
              {
                *next = (unsigned char)0;
                next = next + 1l;
              }

              char *return_value_strchr$7;
              return_value_strchr$7=strchr((const char *)opt, 61);
              equal = (unsigned char *)return_value_strchr$7;
              if(equal == ((unsigned char *)NULL))
              {
                sockprintf(var, (unsigned char *)"482 Invalid option format %s, use option=on/off\r\n", opt);
                goto __CPROVER_DUMP_L19;
              }

              *equal = (unsigned char)0;
              equal = equal + 1l;
              signed int return_value_strcasecmp$11;
              return_value_strcasecmp$11=strcasecmp((const char *)opt, "flowed");
              if(return_value_strcasecmp$11 == 0)
              {
                signed int return_value_setboolonoff$8;
                return_value_setboolonoff$8=setboolonoff(equal, &flowed);
                if(return_value_setboolonoff$8 == 0)
                {
                  sockprintf(var, (unsigned char *)"482 Unknown setting %s for option %s, use on or off\r\n", equal, opt);
                  goto __CPROVER_DUMP_L19;
                }

              }

              else
              {
                return_value_strcasecmp$10=strcasecmp((const char *)opt, "showto");
                if(return_value_strcasecmp$10 == 0)
                {
                  signed int return_value_setboolonoff$9;
                  return_value_setboolonoff$9=setboolonoff(equal, &showto);
                  if(return_value_setboolonoff$9 == 0)
                  {
                    sockprintf(var, (unsigned char *)"482 Unknown setting %s for option %s, use on or off\r\n", equal, opt);
                    goto __CPROVER_DUMP_L19;
                  }

                }

                else
                {
                  sockprintf(var, (unsigned char *)"482 Unknown option %s, known options: flowed, showto\r\n", opt);
                  goto __CPROVER_DUMP_L19;
                }
              }
              opt = next;
            }
            if(!(var->loginname[0l] == 0))
            {
              signed int return_value_login$12;
              return_value_login$12=login(var, var->loginname, var->password);
              if(return_value_login$12 == 0)
              {
                socksendtext(var, (unsigned char *)"481 Authentication rejected\r\n");
                goto __CPROVER_DUMP_L19;
              }

              socksendtext(var, (unsigned char *)"281 Authentication accepted\r\n");
            }

            else
              socksendtext(var, (unsigned char *)"281 Authentication accepted (options set, no login)\r\n");
            var->opt_flowed = flowed;
            var->opt_showto = showto;
            goto __CPROVER_DUMP_L19;
          }
        }
    }
  }

__CPROVER_DUMP_L19:
  ;
}

// command_group
// file nntpserv.c line 387
void command_group(struct var *var)
{
  unsigned char *groupname;
  struct group *g;
  unsigned long int min;
  unsigned long int max;
  unsigned long int num;
  groupname=parseinput(var);
  signed int return_value_matchgroup$2;
  signed int return_value_strcasecmp$1;
  if(groupname == ((unsigned char *)NULL))
    socksendtext(var, (unsigned char *)"501 No group specified\r\n");

  else
  {
    g = var->firstgroup;
    for( ; !(g == ((struct group *)NULL)); g = g->next)
    {
      return_value_matchgroup$2=matchgroup(var->readgroups, g->group);
      if(!(return_value_matchgroup$2 == 0))
      {
        return_value_strcasecmp$1=strcasecmp((const char *)g->tagname, (const char *)groupname);
        if(return_value_strcasecmp$1 == 0)
          break;

      }

    }
    if(g == ((struct group *)NULL))
      socksendtext(var, (unsigned char *)"411 No such newsgroup\r\n");

    else
    {
      signed int return_value_jamgetminmaxnum$3;
      return_value_jamgetminmaxnum$3=jamgetminmaxnum(var, g, &min, &max, &num);
      if(return_value_jamgetminmaxnum$3 == 0)
        socksendtext(var, (unsigned char *)"503 Local error: Could not get size of messagebase\r\n");

      else
      {
        var->currentgroup = g;
        var->currentarticle = min;
        sockprintf(var, (unsigned char *)"211 %lu %lu %lu %s Group selected\r\n", num, min, max, (const void *)g->tagname);
      }
    }
  }
}

// command_last
// file nntpserv.c line 454
void command_last(struct var *var)
{
  unsigned long int min;
  unsigned long int max;
  unsigned long int num;
  if(var->currentgroup == ((struct group *)NULL))
    socksendtext(var, (unsigned char *)"412 No newsgroup selected\r\n");

  else
    if(var->currentarticle == 0ul)
      socksendtext(var, (unsigned char *)"420 No current article has been selected\r\n");

    else
    {
      signed int return_value_jamgetminmaxnum$1;
      return_value_jamgetminmaxnum$1=jamgetminmaxnum(var, var->currentgroup, &min, &max, &num);
      if(return_value_jamgetminmaxnum$1 == 0)
        socksendtext(var, (unsigned char *)"503 Local error: Could not get size of messagebase\r\n");

      else
        if(!(var->currentarticle + 18446744073709551615ul >= min))
          socksendtext(var, (unsigned char *)"422 No previous article in this group\r\n");

        else
        {
          var->currentarticle = var->currentarticle - 1ul;
          sockprintf(var, (unsigned char *)"223 %lu <%lu$%s@JamNNTPd> Article retrieved\r\n", var->currentarticle, var->currentarticle, (const void *)var->currentgroup->tagname);
        }
    }
}

// command_list
// file nntpserv.c line 312
void command_list(struct var *var)
{
  struct group *g;
  unsigned long int min;
  unsigned long int max;
  unsigned long int num;
  unsigned char *arg;
  signed int listnewsgroups = 0;
  arg=parseinput(var);
  signed int return_value_strcasecmp$3;
  signed int return_value_strcasecmp$2;
  if(!(arg == ((unsigned char *)NULL)))
  {
    signed int return_value_strcasecmp$4;
    return_value_strcasecmp$4=strcasecmp((const char *)arg, "overview.fmt");
    if(return_value_strcasecmp$4 == 0)
    {
      socksendtext(var, (unsigned char *)"215 List of fields in XOVER result\r\n");
      socksendtext(var, (unsigned char *)"Subject:\r\n");
      socksendtext(var, (unsigned char *)"From:\r\n");
      socksendtext(var, (unsigned char *)"Date:\r\n");
      socksendtext(var, (unsigned char *)"Message-ID:\r\n");
      socksendtext(var, (unsigned char *)"References:\r\n");
      socksendtext(var, (unsigned char *)"Bytes:\r\n");
      socksendtext(var, (unsigned char *)"Lines:\r\n");
      socksendtext(var, (unsigned char *)".\r\n");
      goto __CPROVER_DUMP_L17;
    }

    else
    {
      return_value_strcasecmp$3=strcasecmp((const char *)arg, "newsgroups");
      if(return_value_strcasecmp$3 == 0)
      {
        unsigned char *return_value_parseinput$1;
        return_value_parseinput$1=parseinput(var);
        if(!(return_value_parseinput$1 == ((unsigned char *)NULL)))
        {
          socksendtext(var, (unsigned char *)"501 Patterns not supported for LIST NEWSGROUPS\r\n");
          goto __CPROVER_DUMP_L17;
        }

        listnewsgroups = 1;
      }

      else
      {
        return_value_strcasecmp$2=strcasecmp((const char *)arg, "active");
        if(!(return_value_strcasecmp$2 == 0))
        {
          socksendtext(var, (unsigned char *)"501 Unknown argument for LIST command\r\n");
          goto __CPROVER_DUMP_L17;
        }

      }
    }
  }

  socksendtext(var, (unsigned char *)"215 List of newsgroups follows\r\n");
  g = var->firstgroup;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$7;
  signed int return_value_get_server_quit$6;
  do
  {
    if(!(g == ((struct group *)NULL)))
      tmp_if_expr$5 = !(var->disconnect != 0) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$5 = (_Bool)0;
    if(tmp_if_expr$5)
    {
      return_value_get_server_quit$6=get_server_quit();
      tmp_if_expr$7 = !(return_value_get_server_quit$6 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$7 = (_Bool)0;
    if(!tmp_if_expr$7)
      break;

    signed int return_value_matchgroup$10;
    return_value_matchgroup$10=matchgroup(var->readgroups, g->group);
    if(!(return_value_matchgroup$10 == 0))
    {
      if(!(listnewsgroups == 0))
        sockprintf(var, (unsigned char *)"%s\t\r\n", (const void *)g->tagname);

      else
      {
        signed int return_value_jamgetminmaxnum$8;
        return_value_jamgetminmaxnum$8=jamgetminmaxnum(var, g, &min, &max, &num);
        if(return_value_jamgetminmaxnum$8 == 0)
        {
          min = (unsigned long int)0;
          max = (unsigned long int)0;
          num = (unsigned long int)0;
        }

        signed int return_value_matchgroup$9;
        return_value_matchgroup$9=matchgroup(var->postgroups, g->group);
        if(!(return_value_matchgroup$9 == 0))
          sockprintf(var, (unsigned char *)"%s %lu %lu y\r\n", (const void *)g->tagname, min, max);

        else
          sockprintf(var, (unsigned char *)"%s %lu %lu n\r\n", (const void *)g->tagname, min, max);
      }
    }

    g = g->next;
  }
  while((_Bool)1);
  socksendtext(var, (unsigned char *)".\r\n");

__CPROVER_DUMP_L17:
  ;
}

// command_next
// file nntpserv.c line 420
void command_next(struct var *var)
{
  unsigned long int min;
  unsigned long int max;
  unsigned long int num;
  if(var->currentgroup == ((struct group *)NULL))
    socksendtext(var, (unsigned char *)"412 No newsgroup selected\r\n");

  else
    if(var->currentarticle == 0ul)
      socksendtext(var, (unsigned char *)"420 No current article has been selected\r\n");

    else
    {
      signed int return_value_jamgetminmaxnum$1;
      return_value_jamgetminmaxnum$1=jamgetminmaxnum(var, var->currentgroup, &min, &max, &num);
      if(return_value_jamgetminmaxnum$1 == 0)
        socksendtext(var, (unsigned char *)"503 Local error: Could not get size of messagebase\r\n");

      else
        if(!(max >= 1ul + var->currentarticle))
          socksendtext(var, (unsigned char *)"421 No next article in this group\r\n");

        else
        {
          var->currentarticle = var->currentarticle + 1ul;
          sockprintf(var, (unsigned char *)"223 %lu <%lu$%s@JamNNTPd> Article retrieved\r\n", var->currentarticle, var->currentarticle, (const void *)var->currentgroup->tagname);
        }
    }
}

// command_post
// file nntpserv.c line 2062
void command_post(struct var *var)
{
  unsigned char *text;
  unsigned char *newtext;
  unsigned char *xlatres;
  unsigned char line[1000l];
  unsigned char buf[100l];
  unsigned char *ch;
  unsigned long int allocsize;
  unsigned long int textlen;
  unsigned long int textpos;
  unsigned long int getctpos;
  unsigned long int c;
  unsigned long int d;
  unsigned long int parentmsg;
  unsigned long int count;
  signed int finished;
  signed int toobig;
  unsigned char from[100l];
  unsigned char fromaddr[100l];
  unsigned char toname[100l];
  unsigned char subject[100l];
  unsigned char organization[100l];
  unsigned char newsgroup[100l];
  unsigned char contenttype[100l];
  unsigned char contenttransferencoding[100l];
  unsigned char reference[100l];
  unsigned char newsreader[100l];
  unsigned char msgid[100l];
  unsigned char replyid[100l];
  unsigned char replyto[100l];
  unsigned char chrs[20l];
  unsigned char chrs2[20l];
  unsigned char codepage[20l];
  unsigned char timezone[13l];
  unsigned char control[100l];
  unsigned char dispname[100l];
  unsigned char toaddr[100l];
  unsigned char quotename[100l];
  struct group *g;
  struct xlat *xlat;
  struct anonymous$8 *SubPacket_PS;
  struct anonymous$5 Header_S;
  signed long int t1;
  signed long int t2;
  struct tm *tp;
  signed int res;
  signed int timeofs;
  signed int timesign;
  signed int tr;
  signed int flowed;
  struct _IO_FILE *fp;
  allocsize = (unsigned long int)(20000 + 500);
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(allocsize);
  text = (unsigned char *)return_value_malloc$1;
  signed int return_value_get_server_quit$2;
  signed int return_value_sockreadline$3;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$8;
  unsigned long int tmp_post$10;
  _Bool tmp_if_expr$25;
  char *return_value_strchr$24;
  unsigned long int return_value_strlen$20;
  _Bool tmp_if_expr$22;
  char *return_value_strchr$21;
  unsigned long int return_value_strlen$27;
  signed int return_value_strncasecmp$45;
  signed int return_value_strncasecmp$44;
  signed int return_value_strncasecmp$43;
  signed int return_value_strncasecmp$42;
  signed int return_value_getcontenttypepart$30;
  signed int return_value_strcasecmp$31;
  signed int return_value_strncasecmp$41;
  signed int return_value_strncasecmp$40;
  char *return_value_strrchr$34;
  signed int return_value_strncasecmp$39;
  signed int return_value_strncasecmp$38;
  signed int return_value_strncasecmp$37;
  signed int return_value_strncasecmp$36;
  signed int return_value_strncmp$47;
  _Bool tmp_if_expr$49;
  signed int return_value_strcmp$48;
  _Bool tmp_if_expr$50;
  signed int return_value_strcasecmp$52;
  signed int return_value_strcasecmp$55;
  signed int return_value_strcasecmp$54;
  signed int return_value_strcasecmp$53;
  unsigned long int tmp_post$57;
  _Bool tmp_if_expr$66;
  _Bool tmp_if_expr$67;
  _Bool tmp_if_expr$69;
  signed int return_value_strncmp$68;
  unsigned long int tmp_post$59;
  unsigned long int tmp_post$61;
  unsigned long int tmp_post$65;
  unsigned long int tmp_post$70;
  signed int return_value_strcasecmp$71;
  _Bool tmp_if_expr$73;
  unsigned long int tmp_post$76;
  unsigned long int tmp_post$77;
  signed int return_value_ispattern$90;
  if(text == ((unsigned char *)NULL))
    socksendtext(var, (unsigned char *)"503 Out of memory\r\n");

  else
  {
    socksendtext(var, (unsigned char *)"340 Send article to be posted. End with <CR-LF>.<CR-LF>\r\n");
    finished = 0;
    toobig = 0;
    textpos = (unsigned long int)0;
    while(finished == 0)
    {
      if(!(var->disconnect == 0))
        break;

      return_value_get_server_quit$2=get_server_quit();
      if(!(return_value_get_server_quit$2 == 0))
        break;

      return_value_sockreadline$3=sockreadline(var, line, 1000);
      if(return_value_sockreadline$3 == 0)
        break;

      if(!(line[0l] == 0))
      {
        if(!(cfg_debug == 0))
          printf("(%s) < %s", (const void *)var->clientid, (const void *)line);

      }

      signed int return_value_strcasecmp$6;
      return_value_strcasecmp$6=strcasecmp((const char *)line, ".\r\n");
      if(return_value_strcasecmp$6 == 0)
        finished = 1;

      else
      {
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen((const char *)line);
        if(return_value_strlen$5 + textpos >= 20000ul)
          toobig = 1;

        else
        {
          strcpy((char *)&text[(signed long int)textpos], (const char *)line);
          unsigned long int return_value_strlen$4;
          return_value_strlen$4=strlen((const char *)line);
          textpos = textpos + return_value_strlen$4;
        }
      }
    }
    text[(signed long int)textpos] = (unsigned char)0;
    signed int return_value_get_server_quit$7;
    return_value_get_server_quit$7=get_server_quit();
    if(!(return_value_get_server_quit$7 == 0))
      free((void *)text);

    else
      if(!(toobig == 0))
      {
        sockprintf(var, (unsigned char *)"441 Posting failed (message too long, maximum size %ld bytes\r\n", 20000);
        os_logwrite((unsigned char *)"(%s) POST failed (message too long, maximum size %ld bytes)", (const void *)var->clientid, 20000);
        free((void *)text);
      }

      else
      {
        from[(signed long int)0] = (unsigned char)0;
        fromaddr[(signed long int)0] = (unsigned char)0;
        newsgroup[(signed long int)0] = (unsigned char)0;
        subject[(signed long int)0] = (unsigned char)0;
        replyto[(signed long int)0] = (unsigned char)0;
        contenttype[(signed long int)0] = (unsigned char)0;
        chrs[(signed long int)0] = (unsigned char)0;
        chrs2[(signed long int)0] = (unsigned char)0;
        contenttransferencoding[(signed long int)0] = (unsigned char)0;
        reference[(signed long int)0] = (unsigned char)0;
        organization[(signed long int)0] = (unsigned char)0;
        newsreader[(signed long int)0] = (unsigned char)0;
        control[(signed long int)0] = (unsigned char)0;
        flowed = 0;
        textpos = (unsigned long int)0;
        textlen=strlen((const char *)text);
        finished = 0;
        while(!((signed int)text[(signed long int)textpos] == 0))
        {
          if(!(finished == 0))
            break;

          c = (unsigned long int)0;
          for( ; (_Bool)1; textpos = textpos + 1ul)
            if((signed int)text[(signed long int)textpos] == 0)
              goto __CPROVER_DUMP_L29;

            else
            {
              if(c >= 1ul)
                tmp_if_expr$11 = (signed int)text[(signed long int)(textpos - (unsigned long int)1)] == 13 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$11 = (_Bool)0;
              if(tmp_if_expr$11)
                tmp_if_expr$12 = (signed int)text[(signed long int)textpos] == 10 ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$12 = (_Bool)0;
              if(tmp_if_expr$12)
              {
                if(c >= 2ul)
                {
                  if((signed int)text[1l + (signed long int)textpos] == 32)
                    tmp_if_expr$8 = (_Bool)1;

                  else
                    tmp_if_expr$8 = (signed int)text[(signed long int)(textpos + (unsigned long int)1)] == 9 ? (_Bool)1 : (_Bool)0;
                  tmp_if_expr$9 = tmp_if_expr$8 ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$9 = (_Bool)0;
                if(tmp_if_expr$9)
                {
                  for( ; (_Bool)1; textpos = textpos + 1ul)
                    if(!((signed int)text[1l + (signed long int)textpos] == 32))
                    {
                      if(!((signed int)text[1l + (signed long int)textpos] == 9))
                        goto __CPROVER_DUMP_L24;

                    }


                __CPROVER_DUMP_L24:
                  ;
                  line[(signed long int)(c - (unsigned long int)1)] = (unsigned char)32;
                }

                else
                {
                  line[(signed long int)(c - (unsigned long int)1)] = (unsigned char)0;
                  textpos = textpos + 1ul;
                  goto __CPROVER_DUMP_L29;
                }
              }

              else
                if(!(c >= 999ul))
                {
                  tmp_post$10 = c;
                  c = c + 1ul;
                  line[(signed long int)tmp_post$10] = text[(signed long int)textpos];
                }

            }

        __CPROVER_DUMP_L29:
          ;
          line[(signed long int)c] = (unsigned char)0;
          strip(line);
          signed int return_value_strncasecmp$46;
          return_value_strncasecmp$46=strncasecmp((const char *)line, "From: ", (unsigned long int)6);
          if(return_value_strncasecmp$46 == 0)
          {
            unsigned long int return_value_strlen$23;
            return_value_strlen$23=strlen((const char *)line);
            if((signed int)line[-1l + (signed long int)return_value_strlen$23] == 62)
            {
              return_value_strchr$24=strchr((const char *)line, 60);
              tmp_if_expr$25 = return_value_strchr$24 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$25 = (_Bool)0;
            if(tmp_if_expr$25)
            {
              unsigned long int return_value_strlen$13;
              return_value_strlen$13=strlen((const char *)line);
              line[(signed long int)(return_value_strlen$13 - (unsigned long int)1)] = (unsigned char)0;
              char *return_value_strrchr$14;
              return_value_strrchr$14=strrchr((const char *)line, 60);
              unmimecpy(fromaddr, (unsigned char *)(return_value_strrchr$14 + (signed long int)1), (unsigned long int)100, chrs, chrs2, (unsigned long int)20);
              strip(fromaddr);
              char *return_value_strchr$15;
              return_value_strchr$15=strchr((const char *)line, 60);
              *return_value_strchr$15 = (char)0;
              unmimecpy(from, &line[(signed long int)6], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);
              strip(from);
            }

            else
            {
              return_value_strlen$20=strlen((const char *)line);
              if((signed int)line[-1l + (signed long int)return_value_strlen$20] == 41)
              {
                return_value_strchr$21=strchr((const char *)line, 40);
                tmp_if_expr$22 = return_value_strchr$21 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
              }

              else
                tmp_if_expr$22 = (_Bool)0;
              if(tmp_if_expr$22)
              {
                unsigned long int return_value_strlen$16;
                return_value_strlen$16=strlen((const char *)line);
                line[(signed long int)(return_value_strlen$16 - (unsigned long int)1)] = (unsigned char)0;
                char *return_value_strrchr$17;
                return_value_strrchr$17=strrchr((const char *)line, 40);
                unbackslashquote((unsigned char *)(return_value_strrchr$17 + (signed long int)1));
                char *return_value_strrchr$18;
                return_value_strrchr$18=strrchr((const char *)line, 40);
                unmimecpy(from, (unsigned char *)(return_value_strrchr$18 + (signed long int)1), (unsigned long int)100, chrs, chrs2, (unsigned long int)20);
                strip(from);
                char *return_value_strrchr$19;
                return_value_strrchr$19=strrchr((const char *)line, 40);
                *return_value_strrchr$19 = (char)0;
                unmimecpy(fromaddr, &line[(signed long int)6], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);
                strip(fromaddr);
              }

              else
              {
                unmimecpy(from, &line[(signed long int)6], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);
                unmimecpy(fromaddr, &line[(signed long int)6], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);
              }
            }
            unsigned long int return_value_strlen$28;
            return_value_strlen$28=strlen((const char *)from);
            if(return_value_strlen$28 >= 1ul)
            {
              if((signed int)from[0l] == 34)
              {
                return_value_strlen$27=strlen((const char *)from);
                if((signed int)from[-1l + (signed long int)return_value_strlen$27] == 34)
                {
                  unsigned long int return_value_strlen$26;
                  return_value_strlen$26=strlen((const char *)from);
                  from[(signed long int)(return_value_strlen$26 - (unsigned long int)1)] = (unsigned char)0;
                  strcpy((char *)from, (const char *)&from[(signed long int)1]);
                  unbackslashquote(from);
                }

              }

            }

          }

          else
          {
            return_value_strncasecmp$45=strncasecmp((const char *)line, "Newsgroups: ", (unsigned long int)12);
            if(return_value_strncasecmp$45 == 0)
              mystrncpy(newsgroup, &line[(signed long int)12], (signed long int)100);

            else
            {
              return_value_strncasecmp$44=strncasecmp((const char *)line, "Subject: ", (unsigned long int)9);
              if(return_value_strncasecmp$44 == 0)
                unmimecpy(subject, &line[(signed long int)9], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);

              else
              {
                return_value_strncasecmp$43=strncasecmp((const char *)line, "Reply-To: ", (unsigned long int)10);
                if(return_value_strncasecmp$43 == 0)
                  unmimecpy(replyto, &line[(signed long int)10], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);

                else
                {
                  return_value_strncasecmp$42=strncasecmp((const char *)line, "Content-Type: ", (unsigned long int)14);
                  if(return_value_strncasecmp$42 == 0)
                  {
                    getctpos = (unsigned long int)14;
                    signed int return_value_getcontenttypepart$29;
                    return_value_getcontenttypepart$29=getcontenttypepart(line, &getctpos, contenttype, (unsigned long int)100);
                    if(return_value_getcontenttypepart$29 == 0)
                      contenttype[(signed long int)0] = (unsigned char)0;

                    do
                    {
                      return_value_getcontenttypepart$30=getcontenttypepart(line, &getctpos, buf, (unsigned long int)100);
                      if(return_value_getcontenttypepart$30 == 0)
                        break;

                      signed int return_value_strncasecmp$32;
                      return_value_strncasecmp$32=strncasecmp((const char *)buf, "charset=", (unsigned long int)8);
                      if(return_value_strncasecmp$32 == 0)
                        setcharset(&buf[(signed long int)8], chrs, chrs2, (unsigned long int)20);

                      else
                      {
                        return_value_strcasecmp$31=strcasecmp((const char *)buf, "format=flowed");
                        if(return_value_strcasecmp$31 == 0)
                          flowed = 1;

                      }
                    }
                    while((_Bool)1);
                  }

                  else
                  {
                    return_value_strncasecmp$41=strncasecmp((const char *)line, "Content-Transfer-Encoding: ", (unsigned long int)27);
                    if(return_value_strncasecmp$41 == 0)
                    {
                      getctpos = (unsigned long int)27;
                      signed int return_value_getcontenttypepart$33;
                      return_value_getcontenttypepart$33=getcontenttypepart(line, &getctpos, contenttransferencoding, (unsigned long int)100);
                      if(return_value_getcontenttypepart$33 == 0)
                        contenttransferencoding[(signed long int)0] = (unsigned char)0;

                    }

                    else
                    {
                      return_value_strncasecmp$40=strncasecmp((const char *)line, "References: ", (unsigned long int)12);
                      if(return_value_strncasecmp$40 == 0)
                      {
                        char *return_value_strrchr$35;
                        return_value_strrchr$35=strrchr((const char *)line, 60);
                        if(!(return_value_strrchr$35 == ((char *)NULL)))
                        {
                          return_value_strrchr$34=strrchr((const char *)line, 60);
                          mystrncpy(reference, (unsigned char *)return_value_strrchr$34, (signed long int)100);
                        }

                      }

                      else
                      {
                        return_value_strncasecmp$39=strncasecmp((const char *)line, "Organization: ", (unsigned long int)14);
                        if(return_value_strncasecmp$39 == 0)
                          unmimecpy(organization, &line[(signed long int)14], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);

                        else
                        {
                          return_value_strncasecmp$38=strncasecmp((const char *)line, "X-Newsreader: ", (unsigned long int)14);
                          if(return_value_strncasecmp$38 == 0)
                            unmimecpy(newsreader, &line[(signed long int)14], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);

                          else
                          {
                            return_value_strncasecmp$37=strncasecmp((const char *)line, "User-Agent: ", (unsigned long int)12);
                            if(return_value_strncasecmp$37 == 0)
                              unmimecpy(newsreader, &line[(signed long int)12], (unsigned long int)100, chrs, chrs2, (unsigned long int)20);

                            else
                            {
                              return_value_strncasecmp$36=strncasecmp((const char *)line, "Control: ", (unsigned long int)9);
                              if(return_value_strncasecmp$36 == 0)
                                mystrncpy(control, &line[(signed long int)9], (signed long int)100);

                              else
                                if((signed int)line[0l] == 0)
                                  finished = 1;

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
        if(cfg_nostripre == 0)
        {
          return_value_strncmp$47=strncmp((const char *)subject, "Re: ", (unsigned long int)4);
          if(return_value_strncmp$47 == 0)
            tmp_if_expr$49 = (_Bool)1;

          else
          {
            return_value_strcmp$48=strcmp((const char *)subject, "Re:");
            tmp_if_expr$49 = return_value_strcmp$48 == 0 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$49)
            strcpy((char *)subject, (const char *)&subject[(signed long int)4]);

        }

        from[(signed long int)36] = (unsigned char)0;
        subject[(signed long int)72] = (unsigned char)0;
        organization[(signed long int)70] = (unsigned char)0;
        newsreader[(signed long int)75] = (unsigned char)0;
        if((signed int)newsgroup[0l] == 0)
        {
          sockprintf(var, (unsigned char *)"441 Posting failed (No valid Newsgroups line found)\r\n");
          os_logwrite((unsigned char *)"(%s) POST failed (No valid Newsgroups line found)", (const void *)var->clientid);
          free((void *)text);
        }

        else
        {
          if((signed int)from[0l] == 0)
            tmp_if_expr$50 = (_Bool)1;

          else
            tmp_if_expr$50 = (signed int)fromaddr[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$50)
          {
            sockprintf(var, (unsigned char *)"441 Posting failed (No valid From line found)\r\n");
            os_logwrite((unsigned char *)"(%s) POST failed (No valid From line found)", (const void *)var->clientid);
            free((void *)text);
          }

          else
          {
            char *return_value_strchr$51;
            return_value_strchr$51=strchr((const char *)newsgroup, 44);
            if(!(return_value_strchr$51 == ((char *)NULL)))
            {
              sockprintf(var, (unsigned char *)"441 Posting failed (Crossposts are not allowed)\r\n");
              os_logwrite((unsigned char *)"(%s) POST failed (Crossposts are not allowed)", (const void *)var->clientid);
              free((void *)text);
            }

            else
              if(!(contenttype[0l] == 0))
              {
                return_value_strcasecmp$52=strcasecmp((const char *)contenttype, "text/plain");
                if(return_value_strcasecmp$52 == 0)
                  goto __CPROVER_DUMP_L66;

                sockprintf(var, (unsigned char *)"441 Posting failed (Content-Type \"%s\" not allowed, please use text/plain)\r\n", (const void *)contenttype);
                os_logwrite((unsigned char *)"(%s) POST failed (Content-Type \"%s\" not allowed)", (const void *)var->clientid, (const void *)contenttype);
                free((void *)text);
              }

              else
              {

              __CPROVER_DUMP_L66:
                ;
                signed int return_value_strcasecmp$56;
                return_value_strcasecmp$56=strcasecmp((const char *)contenttransferencoding, "quoted-printable");
                if(return_value_strcasecmp$56 == 0)
                  decodeqpbody(&text[(signed long int)textpos], &text[(signed long int)textpos]);

                else
                {
                  return_value_strcasecmp$55=strcasecmp((const char *)contenttransferencoding, "base64");
                  if(return_value_strcasecmp$55 == 0)
                    decodeb64(&text[(signed long int)textpos], &text[(signed long int)textpos]);

                  else
                    if(!(contenttransferencoding[0l] == 0))
                    {
                      return_value_strcasecmp$54=strcasecmp((const char *)contenttransferencoding, "8bit");
                      if(!(return_value_strcasecmp$54 == 0))
                      {
                        return_value_strcasecmp$53=strcasecmp((const char *)contenttransferencoding, "7bit");
                        if(!(return_value_strcasecmp$53 == 0))
                        {
                          sockprintf(var, (unsigned char *)"441 Posting failed (unknown Content-Transfer-Encoding \"%s\")\r\n", (const void *)contenttransferencoding);
                          os_logwrite((unsigned char *)"(%s) POST failed (Content-Transfer-Encoding \"%s\" not allowed)", (const void *)var->clientid, (const void *)contenttransferencoding);
                          free((void *)text);
                          goto __CPROVER_DUMP_L162;
                        }

                      }

                    }

                }
                d = (unsigned long int)0;
                while(!(text[(signed long int)textpos] == 0))
                {
                  c = (unsigned long int)0;
                  while((_Bool)1)
                    if((signed int)text[(signed long int)textpos] == 0)
                      goto __CPROVER_DUMP_L76;

                    else
                      if(c == 999ul || (signed int)text[(signed long int)textpos] == 13)
                      {
                        textpos = textpos + 1ul;
                        goto __CPROVER_DUMP_L76;
                      }

                      else
                      {
                        if(!((signed int)text[(signed long int)textpos] == 10))
                        {
                          tmp_post$57 = c;
                          c = c + 1ul;
                          line[(signed long int)tmp_post$57] = text[(signed long int)textpos];
                        }

                        textpos = textpos + 1ul;
                      }

                __CPROVER_DUMP_L76:
                  ;
                  line[(signed long int)c] = (unsigned char)0;
                  if(!(flowed == 0))
                    tmp_if_expr$66 = (signed int)line[(signed long int)0] != 0 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$66 = (_Bool)0;
                  if(tmp_if_expr$66)
                    tmp_if_expr$67 = (signed int)line[(signed long int)0] != 62 ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$67 = (_Bool)0;
                  if(tmp_if_expr$67)
                  {
                    return_value_strncmp$68=strncmp((const char *)line, "-- ", (unsigned long int)3);
                    tmp_if_expr$69 = return_value_strncmp$68 != 0 ? (_Bool)1 : (_Bool)0;
                  }

                  else
                    tmp_if_expr$69 = (_Bool)0;
                  if(tmp_if_expr$69)
                  {
                    if((signed int)line[0l] == 32)
                      strcpy((char *)line, (const char *)&line[(signed long int)1]);

                    unsigned long int return_value_strlen$62;
                    return_value_strlen$62=strlen((const char *)line);
                    if((signed int)line[-1l + (signed long int)return_value_strlen$62] == 32)
                    {
                      strip(line);
                      strcpy((char *)&text[(signed long int)d], (const char *)line);
                      unsigned long int return_value_strlen$58;
                      return_value_strlen$58=strlen((const char *)line);
                      d = d + return_value_strlen$58;
                      tmp_post$59 = d;
                      d = d + 1ul;
                      text[(signed long int)tmp_post$59] = (unsigned char)32;
                    }

                    else
                    {
                      strip(line);
                      strcpy((char *)&text[(signed long int)d], (const char *)line);
                      unsigned long int return_value_strlen$60;
                      return_value_strlen$60=strlen((const char *)line);
                      d = d + return_value_strlen$60;
                      tmp_post$61 = d;
                      d = d + 1ul;
                      text[(signed long int)tmp_post$61] = (unsigned char)13;
                    }
                  }

                  else
                  {
                    signed int return_value_strncmp$63;
                    return_value_strncmp$63=strncmp((const char *)line, "-- ", (unsigned long int)3);
                    if(!(return_value_strncmp$63 == 0))
                      strip(line);

                    strcpy((char *)&text[(signed long int)d], (const char *)line);
                    unsigned long int return_value_strlen$64;
                    return_value_strlen$64=strlen((const char *)line);
                    d = d + return_value_strlen$64;
                    tmp_post$65 = d;
                    d = d + 1ul;
                    text[(signed long int)tmp_post$65] = (unsigned char)13;
                  }
                }
                for( ; d >= 1ul; d = d - 1ul)
                  if(!((signed int)text[-1l + (signed long int)d] == 13))
                    break;

                if(d >= 1ul && !(d >= 19998ul))
                {
                  tmp_post$70 = d;
                  d = d + 1ul;
                  text[(signed long int)tmp_post$70] = (unsigned char)13;
                }

                text[(signed long int)d] = (unsigned char)0;
                g = var->firstgroup;
                for( ; !(g == ((struct group *)NULL)); g = g->next)
                {
                  return_value_strcasecmp$71=strcasecmp((const char *)newsgroup, (const char *)g->tagname);
                  if(return_value_strcasecmp$71 == 0)
                    break;

                }
                if(g == ((struct group *)NULL))
                {
                  sockprintf(var, (unsigned char *)"441 Posting failed (Unknown newsgroup %s)\r\n", (const void *)newsgroup);
                  os_logwrite((unsigned char *)"(%s) POST failed (Unknown newsgroup %s)", (const void *)var->clientid, (const void *)newsgroup);
                  free((void *)text);
                }

                else
                {
                  signed int return_value_matchgroup$72;
                  return_value_matchgroup$72=matchgroup(var->postgroups, g->group);
                  if(return_value_matchgroup$72 == 0)
                  {
                    sockprintf(var, (unsigned char *)"441 Posting failed (Posting access denied to %s)\r\n", (const void *)newsgroup);
                    os_logwrite((unsigned char *)"(%s) POST failed (Posting access denied to %s)", (const void *)var->clientid, (const void *)newsgroup);
                    free((void *)text);
                  }

                  else
                    if(!(chrs2[0l] == 0))
                    {
                      sockprintf(var, (unsigned char *)"441 Posting failed (Message contains multiple charsets, \"%s\" and \"%s\")\r\n", (const void *)chrs, (const void *)chrs2);
                      os_logwrite((unsigned char *)"(%s) POST failed (Message contains multiple charsets, \"%s\" and \"%s\")", (const void *)var->clientid, (const void *)chrs, (const void *)chrs2);
                      free((void *)text);
                    }

                    else
                    {
                      if((signed int)g->defaultchrs[0l] == 33)
                        tmp_if_expr$73 = (_Bool)1;

                      else
                        tmp_if_expr$73 = (signed int)var->defaultreadchrs[(signed long int)0] == 33 ? (_Bool)1 : (_Bool)0;
                      if(tmp_if_expr$73)
                      {
                        if((signed int)g->defaultchrs[0l] == 33)
                          xlat=findpostxlat(var, chrs, &g->defaultchrs[(signed long int)1]);

                        else
                          xlat=findpostxlat(var, chrs, &var->defaultreadchrs[(signed long int)1]);
                        if(xlat == ((struct xlat *)NULL))
                        {
                          sockprintf(var, (unsigned char *)"441 Posting failed (Unsupported charset \"%s\" for area %s)\r\n", (const void *)chrs, (const void *)g->tagname);
                          os_logwrite((unsigned char *)"(%s) POST failed (Unsupported charset \"%s\" for area %s)", (const void *)var->clientid, (const void *)chrs, (const void *)g->tagname);
                          free((void *)text);
                          goto __CPROVER_DUMP_L162;
                        }

                      }

                      else
                      {
                        xlat=findpostxlat(var, chrs, (unsigned char *)(void *)0);
                        if(xlat == ((struct xlat *)NULL))
                        {
                          sockprintf(var, (unsigned char *)"441 Posting failed (Unsupported charset \"%s\")\r\n", (const void *)chrs);
                          os_logwrite((unsigned char *)"(%s) POST failed (Unsupported charset \"%s\")", (const void *)var->clientid, (const void *)chrs);
                          free((void *)text);
                          goto __CPROVER_DUMP_L162;
                        }

                      }
                      signed int return_value_strncasecmp$74;
                      return_value_strncasecmp$74=strncasecmp((const char *)control, "cancel ", (unsigned long int)7);
                      if(return_value_strncasecmp$74 == 0)
                      {
                        if(cfg_nocancel == 0)
                        {
                          cancelmessage(var, &control[(signed long int)7], xlat);
                          free((void *)text);
                          goto __CPROVER_DUMP_L162;
                        }

                        sockprintf(var, (unsigned char *)"441 Posting failed (Cancel messages are not permitted)\r\n");
                        free((void *)text);
                      }

                      else
                      {
                        replyid[(signed long int)0] = (unsigned char)0;
                        toname[(signed long int)0] = (unsigned char)0;
                        toaddr[(signed long int)0] = (unsigned char)0;
                        parentmsg = (unsigned long int)0;
                        quotename[(signed long int)0] = (unsigned char)0;
                        unsigned long int return_value_get_msgid_num$75;
                        return_value_get_msgid_num$75=get_msgid_num();
                        sprintf((char *)msgid, "%s %08lx", (const void *)g->aka, return_value_get_msgid_num$75);
                        if(!(reference[0l] == 0))
                        {
                          if(!(g->netmail == 0))
                            getparentinfo(var, reference, g->tagname, replyid, toname, toaddr, &parentmsg, xlat, 1);

                          else
                            getparentinfo(var, reference, g->tagname, replyid, toname, toaddr, &parentmsg, xlat, 0);
                          strcpy((char *)quotename, (const char *)toname);
                          toname[(signed long int)36] = (unsigned char)0;
                        }

                        else
                          strcpy((char *)toname, "All");
                        signed int return_value_strncasecmp$79;
                        return_value_strncasecmp$79=strncasecmp((const char *)text, "To:", (unsigned long int)3);
                        if(return_value_strncasecmp$79 == 0)
                        {
                          if((signed int)text[3l] == 32)
                            c = (unsigned long int)4;

                          else
                            c = (unsigned long int)3;
                          d = (unsigned long int)0;
                          while(!((signed int)text[(signed long int)c] == 13))
                          {
                            if((signed int)text[(signed long int)c] == 0)
                              break;

                            if(!(d >= 99ul))
                            {
                              tmp_post$76 = d;
                              d = d + 1ul;
                              tmp_post$77 = c;
                              c = c + 1ul;
                              line[(signed long int)tmp_post$76] = text[(signed long int)tmp_post$77];
                            }

                            else
                              c = c + 1ul;
                          }
                          line[(signed long int)d] = (unsigned char)0;
                          if((signed int)text[(signed long int)c] == 13)
                            c = c + 1ul;

                          if((signed int)text[(signed long int)c] == 13)
                            c = c + 1ul;

                          strcpy((char *)text, (const char *)&text[(signed long int)c]);
                          char *return_value_strchr$78;
                          return_value_strchr$78=strchr((const char *)line, 44);
                          ch = (unsigned char *)return_value_strchr$78;
                          if(!(ch == ((unsigned char *)NULL)))
                          {
                            *ch = (unsigned char)0;
                            ch = ch + 1l;
                            for( ; (signed int)*ch == 32; ch = ch + 1l)
                              ;
                            mystrncpy(toname, line, (signed long int)36);
                            mystrncpy(toaddr, ch, (signed long int)100);
                            strip(toname);
                            strip(toaddr);
                          }

                          else
                          {
                            mystrncpy(toname, line, (signed long int)36);
                            strip(toname);
                          }
                          if(!(xlat->xlattab == ((struct xlattab *)NULL)))
                          {
                            xlatres=xlatstr(toname, xlat->xlattab);
                            if(!(xlatres == ((unsigned char *)NULL)))
                            {
                              mystrncpy(toname, xlatres, (signed long int)36);
                              free((void *)xlatres);
                            }

                          }

                        }

                        else
                          if(!(g->netmail == 0))
                          {
                            if(reference[0l] == 0)
                            {
                              sockprintf(var, (unsigned char *)"441 Posting failed (No \"To:\" line found)\r\n");
                              free((void *)text);
                              goto __CPROVER_DUMP_L162;
                            }

                          }

                        if(!(g->netmail == 0))
                        {
                          if(toaddr[0l] == 0)
                          {
                            sockprintf(var, (unsigned char *)"441 Posting failed (No destination address specified on \"To:\" line)\r\n");
                            free((void *)text);
                            goto __CPROVER_DUMP_L162;
                          }

                          signed int return_value_validateaddr$80;
                          return_value_validateaddr$80=validateaddr(toaddr);
                          if(return_value_validateaddr$80 == 0)
                          {
                            sockprintf(var, (unsigned char *)"441 Posting failed (Invalid address %s)\r\n", (const void *)toaddr);
                            free((void *)text);
                            goto __CPROVER_DUMP_L162;
                          }

                        }

                        if(!(reference[0l] == 0))
                        {
                          if(!(cfg_smartquote == 0))
                          {
                            newtext=smartquote(text, allocsize, quotename);
                            if(!(newtext == ((unsigned char *)NULL)))
                            {
                              free((void *)text);
                              text = newtext;
                            }

                          }

                        }

                        JAM_ClearMsgHeader(&Header_S);
                        SubPacket_PS=JAM_NewSubPacket();
                        if(SubPacket_PS == ((struct anonymous$8 *)NULL))
                        {
                          socksendtext(var, (unsigned char *)"503 Local error: JAM_NewSubPacket() failed\r\n");
                          free((void *)text);
                        }

                        else
                        {
                          t1=time((signed long int *)(void *)0);
                          tp=gmtime(&t1);
                          tp->tm_isdst = -1;
                          t2=mktime(tp);
                          timeofs = (signed int)((t1 - t2) / (signed long int)60);
                          timesign = timeofs < 0 ? -1 : 1;
                          sprintf((char *)timezone, "TZUTC: %s%02d%02d", t1 < t2 ? "-" : "", (timesign * timeofs) / 60, (timesign * timeofs) % 60);
                          signed long int return_value_time$81;
                          return_value_time$81=time((signed long int *)(void *)0);
                          Header_S.DateWritten = (unsigned long int)((return_value_time$81 - t2) + t1);
                          signed long int return_value_time$82;
                          return_value_time$82=time((signed long int *)(void *)0);
                          Header_S.DateReceived = (unsigned long int)((return_value_time$82 - t2) + t1);
                          signed long int return_value_time$83;
                          return_value_time$83=time((signed long int *)(void *)0);
                          Header_S.DateProcessed = (unsigned long int)((return_value_time$83 - t2) + t1);
                          addjamfield(SubPacket_PS, (unsigned long int)4, msgid);
                          if(!(replyid[0l] == 0))
                            addjamfield(SubPacket_PS, (unsigned long int)5, replyid);

                          unsigned long int return_value_strlen$84;
                          return_value_strlen$84=strlen((const char *)msgid);
                          Header_S.MsgIdCRC=JAM_Crc32(msgid, return_value_strlen$84);
                          unsigned long int return_value_strlen$85;
                          return_value_strlen$85=strlen((const char *)replyid);
                          Header_S.ReplyCRC=JAM_Crc32(replyid, return_value_strlen$85);
                          Header_S.ReplyTo = parentmsg;
                          if(g->netmail == 0)
                          {
                            if(g->local == 0)
                            {
                              if((signed int)newsreader[0l] == 0 || !(cfg_notearline == 0))
                                strcpy((char *)line, "\r---\r");

                              else
                                sprintf((char *)line, "\r--- %s\r", (const void *)newsreader);
                              unsigned long int return_value_strlen$86;
                              return_value_strlen$86=strlen((const char *)text);
                              unsigned long int return_value_strlen$87;
                              return_value_strlen$87=strlen((const char *)line);
                              if(!(return_value_strlen$86 + return_value_strlen$87 >= allocsize + 18446744073709551615ul))
                                strcat((char *)text, (const char *)line);

                              if(!(cfg_origin == ((unsigned char *)NULL)))
                                sprintf((char *)line, " * Origin: %s (%s)\r", cfg_origin, (const void *)g->aka);

                              else
                                sprintf((char *)line, " * Origin: %s (%s)\r", (const void *)organization, (const void *)g->aka);
                              unsigned long int return_value_strlen$88;
                              return_value_strlen$88=strlen((const char *)text);
                              unsigned long int return_value_strlen$89;
                              return_value_strlen$89=strlen((const char *)line);
                              if(!(return_value_strlen$88 + return_value_strlen$89 >= allocsize + 18446744073709551615ul))
                                strcat((char *)text, (const char *)line);

                            }

                          }

                          count = (unsigned long int)0;
                          signed int return_value_getcomma$91;
                          return_value_getcomma$91=getcomma(var->realnames, &count, dispname, (unsigned long int)100);
                          if(!(return_value_getcomma$91 == 0))
                          {
                            return_value_ispattern$90=ispattern(dispname);
                            if(return_value_ispattern$90 == 0)
                              mystrncpy(from, dispname, (signed long int)36);

                          }

                          if(var->login == 0)
                          {
                            if(!(cfg_guestsuffix == ((unsigned char *)NULL)))
                            {
                              unsigned long int return_value_strlen$92;
                              return_value_strlen$92=strlen((const char *)cfg_guestsuffix);
                              tr = (signed int)(((unsigned long int)36 - return_value_strlen$92) - (unsigned long int)1);
                              if(!(tr >= 0))
                                tr = 0;

                              from[(signed long int)tr] = (unsigned char)0;
                              strcat((char *)from, (const char *)cfg_guestsuffix);
                            }

                          }

                          if(!(xlat->xlattab == ((struct xlattab *)NULL)))
                          {
                            xlatres=xlatstr(from, xlat->xlattab);
                            if(!(xlatres == ((unsigned char *)NULL)))
                            {
                              mystrncpy(from, xlatres, (signed long int)36);
                              free((void *)xlatres);
                            }

                            xlatres=xlatstr(subject, xlat->xlattab);
                            if(!(xlatres == ((unsigned char *)NULL)))
                            {
                              mystrncpy(subject, xlatres, (signed long int)72);
                              free((void *)xlatres);
                            }

                            xlatres=xlatstr(text, xlat->xlattab);
                            if(!(xlatres == ((unsigned char *)NULL)))
                            {
                              free((void *)text);
                              text = xlatres;
                            }

                          }

                          addjamfield(SubPacket_PS, (unsigned long int)2, from);
                          addjamfield(SubPacket_PS, (unsigned long int)3, toname);
                          addjamfield(SubPacket_PS, (unsigned long int)6, subject);
                          if(g->local == 0)
                            addjamfield(SubPacket_PS, (unsigned long int)0, g->aka);

                          if(!(g->netmail == 0))
                            addjamfield(SubPacket_PS, (unsigned long int)1, toaddr);

                          if(cfg_noreplyaddr == 0)
                          {
                            if(!(replyto[0l] == 0))
                              sprintf((char *)line, "REPLYADDR %s", (const void *)replyto);

                            else
                              sprintf((char *)line, "REPLYADDR %s", (const void *)fromaddr);
                            addjamfield(SubPacket_PS, (unsigned long int)2000, line);
                          }

                          strcpy((char *)line, "JamNNTPd/Linux 1");
                          addjamfield(SubPacket_PS, (unsigned long int)7, line);
                          if(!(xlat->tochrs[0l] == 0))
                          {
                            if(g->nochrs == 0)
                            {
                              setchrscodepage(chrs, codepage, xlat->tochrs);
                              if(!(chrs[0l] == 0))
                              {
                                sprintf((char *)line, "CHRS: %s 2", (const void *)chrs);
                                addjamfield(SubPacket_PS, (unsigned long int)2000, line);
                              }

                              if(!(codepage[0l] == 0))
                              {
                                sprintf((char *)line, "CODEPAGE: %s", (const void *)codepage);
                                addjamfield(SubPacket_PS, (unsigned long int)2000, line);
                              }

                            }

                          }

                          if(cfg_notzutc == 0)
                            addjamfield(SubPacket_PS, (unsigned long int)2000, timezone);

                          if(!(g->netmail == 0))
                            Header_S.Attribute = (unsigned long int)(0x00000001L | 0x00000004L | 0x02000000L);

                          else
                            if(!(g->local == 0))
                              Header_S.Attribute = (unsigned long int)(0x00000001L | 0x00800000L);

                            else
                              Header_S.Attribute = (unsigned long int)(0x00000001L | 0x01000000L);
                          signed int return_value_jamopenarea$93;
                          return_value_jamopenarea$93=jamopenarea(var, g);
                          if(return_value_jamopenarea$93 == 0)
                          {
                            socksendtext(var, (unsigned char *)"503 Local error: Could not open messagebase\r\n");
                            free((void *)text);
                            JAM_DelSubPacket(SubPacket_PS);
                          }

                          else
                          {
                            signed int return_value_JAM_LockMB$94;
                            return_value_JAM_LockMB$94=JAM_LockMB(var->openmb, 10);
                            if(!(return_value_JAM_LockMB$94 == 0))
                            {
                              os_logwrite((unsigned char *)"(%s) Failed to lock JAM messagebase \"%s\"", (const void *)var->clientid, (const void *)g->jampath);
                              socksendtext(var, (unsigned char *)"503 Local error: Failed to lock messagebase\r\n");
                              free((void *)text);
                              JAM_DelSubPacket(SubPacket_PS);
                            }

                            else
                            {
                              unsigned long int return_value_strlen$95;
                              return_value_strlen$95=strlen((const char *)text);
                              res=JAM_AddMessage(var->openmb, &Header_S, SubPacket_PS, text, return_value_strlen$95);
                              if(!(res == 0))
                              {
                                socksendtext(var, (unsigned char *)"503 Local error: Failed to write to messagebase\r\n");
                                os_logwrite((unsigned char *)"(%s) Failed to write message to JAM messagebase \"%s\"", (const void *)var->clientid, (const void *)g->jampath);
                              }

                              else
                              {
                                socksendtext(var, (unsigned char *)"240 Article posted\r\n");
                                os_logwrite((unsigned char *)"(%s) Posted message to %s (#%lu)", (const void *)var->clientid, (const void *)newsgroup, Header_S.MsgNum);
                              }
                              JAM_DelSubPacket(SubPacket_PS);
                              if(!(parentmsg == 0ul))
                                setreply(var, parentmsg, Header_S.MsgNum);

                              JAM_UnlockMB(var->openmb);
                              if(!(cfg_echomailjam == ((unsigned char *)NULL)))
                              {
                                fp=fopen((const char *)cfg_echomailjam, "a");
                                if(fp == ((struct _IO_FILE *)NULL))
                                  os_logwrite((unsigned char *)"(%s) Failed to open %s", (const void *)var->clientid, cfg_echomailjam);

                                else
                                {
                                  fprintf(fp, "%s %ld\n", (const void *)g->jampath, Header_S.MsgNum);
                                  fclose(fp);
                                }
                              }

                              free((void *)text);
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

__CPROVER_DUMP_L162:
  ;
}

// command_xover
// file nntpserv.c line 1142
void command_xover(struct var *var)
{
  unsigned char *article;
  unsigned char *dash;
  unsigned long int min;
  unsigned long int max;
  unsigned long int num;
  unsigned long int first;
  unsigned long int last;
  unsigned long int c;
  unsigned char msgid[150l];
  unsigned char reply[150l];
  unsigned char buf[250l];
  unsigned char chrs[20l];
  unsigned char codepage[20l];
  unsigned char datebuf[50l];
  unsigned char timezone[20l];
  unsigned char fromname[100l];
  unsigned char toname[100l];
  unsigned char fromaddr[100l];
  unsigned char subject[100l];
  unsigned char replyaddr[100l];
  unsigned char mimefrom[1000l];
  unsigned char mimesubj[1000l];
  unsigned char xoverres[2500l];
  struct xlat *xlat;
  unsigned char *xlatres;
  struct anonymous$4 baseheader;
  struct anonymous$8 *subpack;
  struct anonymous$5 header;
  struct anonymous$6 *field;
  signed int res;
  unsigned long int count;
  signed int access;
  signed long int return_value_atol$3;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$10;
  signed int return_value_get_server_quit$9;
  unsigned long int tmp_if_expr$11;
  unsigned long int tmp_if_expr$12;
  unsigned long int tmp_if_expr$13;
  unsigned long int tmp_if_expr$14;
  unsigned long int tmp_if_expr$15;
  unsigned long int tmp_if_expr$16;
  char *return_value_strchr$17;
  signed int return_value_matchname$26;
  signed int return_value_sscanf$28;
  if(var->currentgroup == ((struct group *)NULL))
    socksendtext(var, (unsigned char *)"412 No newsgroup selected\r\n");

  else
  {
    jamgetminmaxnum(var, var->currentgroup, &min, &max, &num);
    article=parseinput(var);
    if(article == ((unsigned char *)NULL))
    {
      if(var->currentarticle == 0ul)
      {
        socksendtext(var, (unsigned char *)"420 No current article has been selected\r\n");
        goto __CPROVER_DUMP_L68;
      }

      first = var->currentarticle;
      last = var->currentarticle;
    }

    else
    {
      char *return_value_strchr$1;
      return_value_strchr$1=strchr((const char *)article, 45);
      dash = (unsigned char *)return_value_strchr$1;
      if(!(dash == ((unsigned char *)NULL)))
      {
        *dash = (unsigned char)0;
        dash = dash + 1l;
        signed long int return_value_atol$2;
        return_value_atol$2=atol((const char *)article);
        first = (unsigned long int)return_value_atol$2;
        if((signed int)*dash == 0)
          last = max;

        else
        {
          return_value_atol$3=atol((const char *)dash);
          last = (unsigned long int)return_value_atol$3;
        }
      }

      else
      {
        signed long int return_value_atol$4;
        return_value_atol$4=atol((const char *)article);
        first = (unsigned long int)return_value_atol$4;
        signed long int return_value_atol$5;
        return_value_atol$5=atol((const char *)article);
        last = (unsigned long int)return_value_atol$5;
      }
    }
    if(!(first >= min))
      first = min;

    if(!(max >= last))
      last = max;

    if(num == 0ul || !(last >= first))
      socksendtext(var, (unsigned char *)"420 No articles found in this range\r\n");

    else
    {
      signed int return_value_jamopenarea$6;
      return_value_jamopenarea$6=jamopenarea(var, var->currentgroup);
      if(return_value_jamopenarea$6 == 0)
        socksendtext(var, (unsigned char *)"503 Local error: Could not open messagebase\r\n");

      else
      {
        signed int return_value_JAM_ReadMBHeader$7;
        return_value_JAM_ReadMBHeader$7=JAM_ReadMBHeader(var->openmb, &baseheader);
        if(!(return_value_JAM_ReadMBHeader$7 == 0))
        {
          os_logwrite((unsigned char *)"(%s) Could not read messagebase header of \"%s\"", (const void *)var->clientid, (const void *)var->opengroup->jampath);
          socksendtext(var, (unsigned char *)"503 Local error: Could not read messagebase header\r\n");
        }

        else
        {
          socksendtext(var, (unsigned char *)"224 Overview information follows\r\n");
          c = first;
          do
          {
            if(last >= c)
              tmp_if_expr$8 = !(var->disconnect != 0) ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$8 = (_Bool)0;
            if(tmp_if_expr$8)
            {
              return_value_get_server_quit$9=get_server_quit();
              tmp_if_expr$10 = !(return_value_get_server_quit$9 != 0) ? (_Bool)1 : (_Bool)0;
            }

            else
              tmp_if_expr$10 = (_Bool)0;
            if(!tmp_if_expr$10)
              break;

            res=JAM_ReadMsgHeader(var->openmb, c - baseheader.BaseMsgNum, &header, &subpack);
            if(res == 0)
            {
              if((2147483648ul & header.Attribute) == 0ul)
              {
                count = (unsigned long int)0;
                fromname[(signed long int)0] = (unsigned char)0;
                fromaddr[(signed long int)0] = (unsigned char)0;
                subject[(signed long int)0] = (unsigned char)0;
                toname[(signed long int)0] = (unsigned char)0;
                chrs[(signed long int)0] = (unsigned char)0;
                codepage[(signed long int)0] = (unsigned char)0;
                replyaddr[(signed long int)0] = (unsigned char)0;
                timezone[(signed long int)0] = (unsigned char)0;
                do
                {
                  field=JAM_GetSubfield_R(subpack, &count);
                  if(field == ((struct anonymous$6 *)NULL))
                    break;

                  switch((signed int)field->LoID)
                  {
                    case 0:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$11 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$11 = (unsigned long int)100;
                      mystrncpy(fromaddr, field->Buffer, (signed long int)tmp_if_expr$11);
                      break;
                    }
                    case 2:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$12 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$12 = (unsigned long int)100;
                      mystrncpy(fromname, field->Buffer, (signed long int)tmp_if_expr$12);
                      break;
                    }
                    case 3:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$13 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$13 = (unsigned long int)100;
                      mystrncpy(toname, field->Buffer, (signed long int)tmp_if_expr$13);
                      break;
                    }
                    case 6:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$14 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$14 = (unsigned long int)100;
                      mystrncpy(subject, field->Buffer, (signed long int)tmp_if_expr$14);
                      break;
                    }
                    case 2004:
                    {
                      if(!(1ul + field->DatLen >= 20ul))
                        tmp_if_expr$15 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$15 = (unsigned long int)20;
                      mystrncpy(timezone, field->Buffer, (signed long int)tmp_if_expr$15);
                      break;
                    }
                    case 2000:
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$16 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$16 = (unsigned long int)100;
                      mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$16);
                      signed int return_value_strncasecmp$19;
                      return_value_strncasecmp$19=strncasecmp((const char *)buf, "CHRS: ", (unsigned long int)6);
                      if(return_value_strncasecmp$19 == 0)
                      {
                        mystrncpy(chrs, &buf[(signed long int)6], (signed long int)20);
                        char *return_value_strchr$18;
                        return_value_strchr$18=strchr((const char *)chrs, 32);
                        if(!(return_value_strchr$18 == ((char *)NULL)))
                        {
                          return_value_strchr$17=strchr((const char *)chrs, 32);
                          *return_value_strchr$17 = (char)0;
                        }

                        strip(chrs);
                      }

                      signed int return_value_strncasecmp$20;
                      return_value_strncasecmp$20=strncasecmp((const char *)buf, "CHARSET: ", (unsigned long int)9);
                      if(return_value_strncasecmp$20 == 0)
                        mystrncpy(chrs, &buf[(signed long int)9], (signed long int)20);

                      signed int return_value_strncasecmp$21;
                      return_value_strncasecmp$21=strncasecmp((const char *)buf, "CODEPAGE: ", (unsigned long int)10);
                      if(return_value_strncasecmp$21 == 0)
                        mystrncpy(codepage, &buf[(signed long int)10], (signed long int)20);

                      signed int return_value_strncasecmp$22;
                      return_value_strncasecmp$22=strncasecmp((const char *)buf, "REPLYADDR ", (unsigned long int)10);
                      if(return_value_strncasecmp$22 == 0)
                        mystrncpy(replyaddr, &buf[(signed long int)10], (signed long int)100);

                      signed int return_value_strncasecmp$23;
                      return_value_strncasecmp$23=strncasecmp((const char *)buf, "REPLYADDR: ", (unsigned long int)11);
                      if(return_value_strncasecmp$23 == 0)
                        mystrncpy(replyaddr, &buf[(signed long int)11], (signed long int)100);

                      signed int return_value_strncasecmp$24;
                      return_value_strncasecmp$24=strncasecmp((const char *)buf, "TZUTC: ", (unsigned long int)7);
                      if(return_value_strncasecmp$24 == 0)
                        mystrncpy(timezone, &buf[(signed long int)7], (signed long int)20);

                      signed int return_value_strncasecmp$25;
                      return_value_strncasecmp$25=strncasecmp((const char *)buf, "TZUTCINFO: ", (unsigned long int)11);
                      if(return_value_strncasecmp$25 == 0)
                        mystrncpy(timezone, &buf[(signed long int)11], (signed long int)20);

                    }
                  }
                }
                while((_Bool)1);
                if(!(cfg_readorigin == 0))
                {
                  if(var->currentgroup->netmail == 0)
                  {
                    if(var->currentgroup->local == 0)
                      readoriginaddr(var->openmb, header.TxtOffset, header.TxtLen, fromaddr);

                  }

                }

                stripreplyaddr(replyaddr);
                xlat=findreadxlat(var, var->currentgroup, chrs, codepage, (unsigned char *)(void *)0);
                if(!(xlat == ((struct xlat *)NULL)))
                  strcpy((char *)chrs, (const char *)xlat->tochrs);

                else
                  strcpy((char *)chrs, "unknown-8bit");
                if(!(xlat == ((struct xlat *)NULL)))
                {
                  if(!(xlat->xlattab == ((struct xlattab *)NULL)))
                  {
                    xlatres=xlatstr(fromname, xlat->xlattab);
                    if(!(xlatres == ((unsigned char *)NULL)))
                    {
                      mystrncpy(fromname, xlatres, (signed long int)100);
                      free((void *)xlatres);
                    }

                    xlatres=xlatstr(toname, xlat->xlattab);
                    if(!(xlatres == ((unsigned char *)NULL)))
                    {
                      mystrncpy(toname, xlatres, (signed long int)100);
                      free((void *)xlatres);
                    }

                    xlatres=xlatstr(subject, xlat->xlattab);
                    if(!(xlatres == ((unsigned char *)NULL)))
                    {
                      mystrncpy(subject, xlatres, (signed long int)100);
                      free((void *)xlatres);
                    }

                  }

                }

                access = 1;
                if(!(var->currentgroup->netmail == 0))
                {
                  signed int return_value_matchname$27;
                  return_value_matchname$27=matchname(var->realnames, fromname);
                  if(return_value_matchname$27 == 0)
                  {
                    return_value_matchname$26=matchname(var->realnames, toname);
                    if(return_value_matchname$26 == 0)
                      access = 0;

                  }

                }

                if(!(access == 0))
                {
                  if((signed int)fromaddr[0l] == 0)
                    strcpy((char *)fromaddr, "unknown");

                  if((signed int)fromname[0l] == 0)
                    strcpy((char *)fromname, "unknown");

                  if((signed int)toname[0l] == 0)
                    strcpy((char *)toname, "(none)");

                  makedate((signed long int)header.DateWritten, datebuf, timezone);
                  sprintf((char *)msgid, "<%ld$%s@JamNNTPd>", c, (const void *)var->currentgroup->tagname);
                  reply[(signed long int)0] = (unsigned char)0;
                  if(!(header.ReplyTo == 0ul))
                    sprintf((char *)reply, "<%ld$%s@JamNNTPd>", header.ReplyTo, (const void *)var->currentgroup->tagname);

                  if(!(var->opt_showto == 0))
                  {
                    sprintf((char *)buf, "%s -> %s", (const void *)fromname, (const void *)toname);
                    mystrncpy(fromname, buf, (signed long int)100);
                  }

                  unsigned int zone;
                  unsigned int net;
                  unsigned int node;
                  unsigned int point;
                  signed int return_value_sscanf$29;
                  return_value_sscanf$29=sscanf((const char *)fromaddr, "%u:%u/%u.%u", &zone, &net, &node, &point);
                  if(return_value_sscanf$29 == 4)
                    sprintf((char *)fromaddr, "%u@%u.%u.%u", point, node, net, zone);

                  else
                  {
                    return_value_sscanf$28=sscanf((const char *)fromaddr, "%u:%u/%u", &zone, &net, &node);
                    if(return_value_sscanf$28 == 3)
                      sprintf((char *)fromaddr, "0@%u.%u.%u", node, net, zone);

                  }
                  if(!(replyaddr[0l] == 0))
                    mimemakeheaderline(mimefrom, (unsigned long int)1000, (unsigned char *)"From", fromname, chrs, replyaddr, cfg_noencode);

                  else
                    mimemakeheaderline(mimefrom, (unsigned long int)1000, (unsigned char *)"From", fromname, chrs, fromaddr, cfg_noencode);
                  mimemakeheaderline(mimesubj, (unsigned long int)1000, (unsigned char *)"Subject", subject, chrs, (unsigned char *)(void *)0, cfg_noencode);
                  strcpy((char *)mimefrom, (const char *)&mimefrom[(signed long int)6]);
                  strcpy((char *)mimesubj, (const char *)&mimesubj[(signed long int)9]);
                  stripctrl(mimesubj);
                  stripctrl(mimefrom);
                  sprintf((char *)xoverres, "%ld\t%s\t%s\t%s\t%s\t%s\t\t\r\n", c, (const void *)mimesubj, (const void *)mimefrom, (const void *)datebuf, (const void *)msgid, (const void *)reply);
                  socksendtext(var, xoverres);
                }

              }

              JAM_DelSubPacket(subpack);
            }

            c = c + 1ul;
          }
          while((_Bool)1);
          socksendtext(var, (unsigned char *)".\r\n");
        }
      }
    }
  }

__CPROVER_DUMP_L68:
  ;
}

// copyline
// file nntpserv.c line 530
void copyline(unsigned char *dest, unsigned char *src, signed long int len)
{
  signed int d;
  signed int c;
  d = 0;
  c = 0;
  signed int tmp_post$1;
  for( ; !((signed long int)c >= len); c = c + 1)
    if(!((signed int)src[(signed long int)c] == 10))
    {
      tmp_post$1 = d;
      d = d + 1;
      dest[(signed long int)tmp_post$1] = src[(signed long int)c];
    }

  dest[(signed long int)d] = (unsigned char)0;
}

// count8bit
// file misc.h line 9
unsigned long int count8bit(unsigned char *text)
{
  unsigned long int c;
  unsigned long int res = (unsigned long int)0;
  c = (unsigned long int)0;
  for( ; !(text[(signed long int)c] == 0); c = c + 1ul)
    if(!((0x80 & (signed int)text[(signed long int)c]) == 0))
      res = res + 1ul;

  return res;
}

// createconfig
// file main.c line 310
void createconfig(unsigned char *file)
{
  struct _IO_FILE *fp;
  fp=fopen((const char *)file, "w");
  if(fp == ((struct _IO_FILE *)NULL))
    printf("Failed to open %s\n", file);

  else
  {
    fprintf(fp, "# JamNNTPd configuration file\n");
    fprintf(fp, "port %lu\n", cfg_port);
    fprintf(fp, "max %lu\n", cfg_maxconn);
    fprintf(fp, "groups \"%s\"\n", cfg_groupsfile);
    fprintf(fp, "allow \"%s\"\n", cfg_allowfile);
    fprintf(fp, "users \"%s\"\n", cfg_usersfile);
    fprintf(fp, "xlat \"%s\"\n", cfg_xlatfile);
    fprintf(fp, "logfile \"%s\"\n", cfg_logfile);
    fprintf(fp, "%snoecholog\n", cfg_noecholog != 0 ? "" : "#");
    fprintf(fp, "%sdebug\n", cfg_debug != 0 ? "" : "#");
    fprintf(fp, "%sreadorigin\n", cfg_readorigin != 0 ? "" : "#");
    fprintf(fp, "%snoencode\n", cfg_noencode != 0 ? "" : "#");
    fprintf(fp, "%sstrictnetmail\n", cfg_strictnetmail != 0 ? "" : "#");
    fprintf(fp, "def_flowed %s\n", cfg_def_flowed != 0 ? "on" : "off");
    fprintf(fp, "def_showto %s\n", cfg_def_showto != 0 ? "on" : "off");
    fprintf(fp, "%snostripre\n", cfg_nostripre != 0 ? "" : "#");
    fprintf(fp, "%snotearline\n", cfg_notearline != 0 ? "" : "#");
    fprintf(fp, "%snoreplyaddr\n", cfg_noreplyaddr != 0 ? "" : "#");
    fprintf(fp, "%snotzutc\n", cfg_notzutc != 0 ? "" : "#");
    fprintf(fp, "%snocancel\n", cfg_nocancel != 0 ? "" : "#");
    fprintf(fp, "%ssmartquote\n", cfg_smartquote != 0 ? "" : "#");
    if(!(cfg_origin == ((unsigned char *)NULL)))
      fprintf(fp, "origin \"%s\"\n", cfg_origin);

    else
      fprintf(fp, "#origin <origin>\n");
    if(!(cfg_guestsuffix == ((unsigned char *)NULL)))
      fprintf(fp, "guestsuffix \"%s\"\n", cfg_guestsuffix);

    else
      fprintf(fp, "#guestsuffix <suffix>\n");
    if(!(cfg_echomailjam == ((unsigned char *)NULL)))
      fprintf(fp, "echomailjam \"%s\"\n", cfg_echomailjam);

    else
      fprintf(fp, "#echomailjam <file>\n");
    fclose(fp);
  }
}

// decodeb64
// file mime.h line 5
void decodeb64(unsigned char *in, unsigned char *out)
{
  unsigned char *found;
  unsigned char *b64 = (unsigned char *)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  signed int c;
  signed int d;
  signed int count;
  unsigned long int num;
  c = 0;
  d = 0;
  num = (unsigned long int)0;
  count = 0;
  _Bool tmp_if_expr$5;
  signed int tmp_post$2;
  signed int tmp_post$3;
  signed int tmp_post$4;
  while(!(in[(signed long int)c] == 0))
  {
    char *return_value_strchr$1;
    return_value_strchr$1=strchr((const char *)b64, (signed int)in[(signed long int)c]);
    found = (unsigned char *)return_value_strchr$1;
    if(!(found == ((unsigned char *)NULL)))
    {
      num = num << 6;
      num = num + (unsigned long int)(found - b64);
      count = count + 1;
    }

    if(count == 4)
      tmp_if_expr$5 = (_Bool)1;

    else
      tmp_if_expr$5 = (signed int)in[(signed long int)c] == 61 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$5)
    {
      if(count == 3)
        num = num << 6;

      if(count == 2)
        num = num << 12;

      if(count >= 2)
      {
        tmp_post$2 = d;
        d = d + 1;
        out[(signed long int)tmp_post$2] = (unsigned char)(num >> 16 & (unsigned long int)0xff);
      }

      if(count >= 3)
      {
        tmp_post$3 = d;
        d = d + 1;
        out[(signed long int)tmp_post$3] = (unsigned char)(num >> 8 & (unsigned long int)0xff);
      }

      if(count == 4)
      {
        tmp_post$4 = d;
        d = d + 1;
        out[(signed long int)tmp_post$4] = (unsigned char)(num & (unsigned long int)0xff);
      }

      count = 0;
      num = (unsigned long int)0;
    }

    c = c + 1;
  }
  out[(signed long int)d] = (unsigned char)0;
}

// decodeqpbody
// file mime.h line 4
void decodeqpbody(unsigned char *in, unsigned char *out)
{
  signed int c;
  signed int d;
  unsigned char *f1;
  unsigned char *f2;
  unsigned char *hex = (unsigned char *)"0123456789ABCDEF";
  c = 0;
  d = 0;
  signed int tmp_post$1;
  signed int tmp_post$2;
  for( ; !(in[(signed long int)c] == 0); out[(signed long int)tmp_post$1] = in[(signed long int)tmp_post$2])
  {
    if((signed int)in[(signed long int)c] == 13)
      for( ; d >= 1; d = d - 1)
        if(!((signed int)out[(signed long int)(d + -1)] == 32))
        {
          if(!((signed int)out[(signed long int)(d + -1)] == 9))
            break;

        }


    tmp_post$1 = d;
    d = d + 1;
    tmp_post$2 = c;
    c = c + 1;
  }
  c = 0;
  d = 0;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  signed int tmp_post$5;
  signed int tmp_post$6;
  signed int tmp_post$7;
  signed int tmp_post$8;
  while(!(out[(signed long int)c] == 0))
  {
    if((signed int)out[(signed long int)c] == 61)
      tmp_if_expr$11 = (signed int)out[(signed long int)(c + 1)] == 13 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$11 = (_Bool)0;
    if(tmp_if_expr$11)
    {
      c = c + 2;
      if((signed int)out[(signed long int)c] == 10)
        c = c + 1;

    }

    else
    {
      if((signed int)out[(signed long int)c] == 61)
        tmp_if_expr$9 = out[(signed long int)(c + 1)] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$9 = (_Bool)0;
      if(tmp_if_expr$9)
        tmp_if_expr$10 = out[(signed long int)(c + 2)] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$10 = (_Bool)0;
      if(tmp_if_expr$10)
      {
        char *return_value_strchr$3;
        return_value_strchr$3=strchr((const char *)hex, (signed int)out[(signed long int)(c + 1)]);
        f1 = (unsigned char *)return_value_strchr$3;
        char *return_value_strchr$4;
        return_value_strchr$4=strchr((const char *)hex, (signed int)out[(signed long int)(c + 2)]);
        f2 = (unsigned char *)return_value_strchr$4;
        if(f1 == ((unsigned char *)NULL) || f2 == ((unsigned char *)NULL))
        {
          tmp_post$5 = d;
          d = d + 1;
          out[(signed long int)tmp_post$5] = (unsigned char)63;
        }

        else
        {
          tmp_post$6 = d;
          d = d + 1;
          out[(signed long int)tmp_post$6] = (unsigned char)((f1 - hex) * (signed long int)16 + (f2 - hex));
        }
        c = c + 3;
      }

      else
      {
        tmp_post$7 = d;
        d = d + 1;
        tmp_post$8 = c;
        c = c + 1;
        out[(signed long int)tmp_post$7] = out[(signed long int)tmp_post$8];
      }
    }
  }
  out[(signed long int)d] = (unsigned char)0;
}

// decodeqpheader
// file mime.c line 99
void decodeqpheader(unsigned char *in, unsigned char *out)
{
  signed int c;
  signed int d;
  unsigned char *f1;
  unsigned char *f2;
  unsigned char *hex = (unsigned char *)"0123456789ABCDEF";
  c = 0;
  d = 0;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  signed int tmp_post$3;
  signed int tmp_post$4;
  signed int tmp_post$5;
  signed int tmp_post$6;
  signed int tmp_post$7;
  while(!(in[(signed long int)c] == 0))
  {
    if((signed int)in[(signed long int)c] == 61)
      tmp_if_expr$8 = in[(signed long int)(c + 1)] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$8 = (_Bool)0;
    if(tmp_if_expr$8)
      tmp_if_expr$9 = in[(signed long int)(c + 2)] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$9 = (_Bool)0;
    if(tmp_if_expr$9)
    {
      char *return_value_strchr$1;
      return_value_strchr$1=strchr((const char *)hex, (signed int)in[(signed long int)(c + 1)]);
      f1 = (unsigned char *)return_value_strchr$1;
      char *return_value_strchr$2;
      return_value_strchr$2=strchr((const char *)hex, (signed int)in[(signed long int)(c + 2)]);
      f2 = (unsigned char *)return_value_strchr$2;
      if(f1 == ((unsigned char *)NULL) || f2 == ((unsigned char *)NULL))
      {
        tmp_post$3 = d;
        d = d + 1;
        out[(signed long int)tmp_post$3] = (unsigned char)63;
      }

      else
      {
        tmp_post$4 = d;
        d = d + 1;
        out[(signed long int)tmp_post$4] = (unsigned char)((f1 - hex) * (signed long int)16 + (f2 - hex));
      }
      c = c + 3;
    }

    else
      if((signed int)in[(signed long int)c] == 95)
      {
        tmp_post$5 = d;
        d = d + 1;
        out[(signed long int)tmp_post$5] = (unsigned char)32;
        c = c + 1;
      }

      else
      {
        tmp_post$6 = d;
        d = d + 1;
        tmp_post$7 = c;
        c = c + 1;
        out[(signed long int)tmp_post$6] = in[(signed long int)tmp_post$7];
      }
  }
  out[(signed long int)d] = (unsigned char)0;
}

// encodeb64
// file mime.c line 315
signed int encodeb64(unsigned char *data, unsigned char *dest, unsigned char *specials, signed int maxdestlen)
{
  signed int c;
  signed int d;
  unsigned long int num;
  unsigned char *b64 = (unsigned char *)"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  c = 0;
  d = 0;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$1;
  while(!(data[(signed long int)c] == 0))
  {
    if(!(maxdestlen >= 4 + d))
      return c;

    if(!(data[(signed long int)c] == 0))
      tmp_if_expr$2 = data[(signed long int)(c + 1)] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$2 = (_Bool)0;
    if(tmp_if_expr$2)
      tmp_if_expr$3 = data[(signed long int)(c + 2)] != 0 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$3 = (_Bool)0;
    if(tmp_if_expr$3)
    {
      num = (unsigned long int)(((signed int)data[(signed long int)c] << 16) + ((signed int)data[(signed long int)(c + 1)] << 8) + (signed int)data[(signed long int)(c + 2)]);
      dest[(signed long int)d] = b64[(signed long int)(num >> 18 & (unsigned long int)63)];
      dest[(signed long int)(d + 1)] = b64[(signed long int)(num >> 12 & (unsigned long int)63)];
      dest[(signed long int)(d + 2)] = b64[(signed long int)(num >> 6 & (unsigned long int)63)];
      dest[(signed long int)(d + 3)] = b64[(signed long int)(num & (unsigned long int)63)];
      dest[(signed long int)(d + 4)] = (unsigned char)0;
      c = c + 3;
      d = d + 4;
    }

    else
    {
      if(!(data[(signed long int)c] == 0))
        tmp_if_expr$1 = data[(signed long int)(c + 1)] != 0 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$1 = (_Bool)0;
      if(tmp_if_expr$1)
      {
        num = (unsigned long int)(((signed int)data[(signed long int)c] << 16) + ((signed int)data[(signed long int)(c + 1)] << 8));
        dest[(signed long int)d] = b64[(signed long int)(num >> 18 & (unsigned long int)63)];
        dest[(signed long int)(d + 1)] = b64[(signed long int)(num >> 12 & (unsigned long int)63)];
        dest[(signed long int)(d + 2)] = b64[(signed long int)(num >> 6 & (unsigned long int)63)];
        dest[(signed long int)(d + 3)] = (unsigned char)61;
        dest[(signed long int)(d + 4)] = (unsigned char)0;
        c = c + 2;
        d = d + 4;
      }

      else
      {
        num = (unsigned long int)((signed int)data[(signed long int)c] << 16);
        dest[(signed long int)d] = b64[(signed long int)(num >> 18 & (unsigned long int)63)];
        dest[(signed long int)(d + 1)] = b64[(signed long int)(num >> 12 & (unsigned long int)63)];
        dest[(signed long int)(d + 2)] = (unsigned char)61;
        dest[(signed long int)(d + 3)] = (unsigned char)61;
        dest[(signed long int)(d + 4)] = (unsigned char)0;
        c = c + 1;
        d = d + 4;
      }
    }
  }
  return c;
}

// encodeqp
// file mime.c line 276
signed int encodeqp(unsigned char *data, unsigned char *dest, unsigned char *specials, signed int maxdestlen)
{
  signed int c;
  signed int d;
  unsigned char buf[10l];
  c = 0;
  d = 0;
  _Bool tmp_if_expr$7;
  char *return_value_strchr$6;
  signed int tmp_post$1;
  signed int tmp_post$2;
  signed int tmp_post$3;
  signed int tmp_post$4;
  signed int tmp_post$5;
  while(!(data[(signed long int)c] == 0))
  {
    if((signed int)data[(signed long int)c] >= 128)
      tmp_if_expr$7 = (_Bool)1;

    else
    {
      return_value_strchr$6=strchr((const char *)specials, (signed int)data[(signed long int)c]);
      tmp_if_expr$7 = return_value_strchr$6 != ((char *)NULL) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$7)
    {
      if(!(maxdestlen >= 3 + d))
        return c;

      sprintf((char *)buf, "%02X", data[(signed long int)c]);
      tmp_post$1 = d;
      d = d + 1;
      dest[(signed long int)tmp_post$1] = (unsigned char)61;
      tmp_post$2 = d;
      d = d + 1;
      dest[(signed long int)tmp_post$2] = buf[(signed long int)0];
      tmp_post$3 = d;
      d = d + 1;
      dest[(signed long int)tmp_post$3] = buf[(signed long int)1];
      dest[(signed long int)d] = (unsigned char)0;
    }

    else
    {
      if(!(maxdestlen >= 1 + d))
        return c;

      if((signed int)data[(signed long int)c] == 32)
      {
        tmp_post$4 = d;
        d = d + 1;
        dest[(signed long int)tmp_post$4] = (unsigned char)95;
      }

      else
      {
        tmp_post$5 = d;
        d = d + 1;
        dest[(signed long int)tmp_post$5] = data[(signed long int)c];
      }
      dest[(signed long int)d] = (unsigned char)0;
    }
    c = c + 1;
  }
  return c;
}

// findpostxlat
// file xlat.h line 30
struct xlat * findpostxlat(struct var *var, unsigned char *ichrs, unsigned char *destpat)
{
  unsigned char chrs[20l];
  struct xlat *xlat;
  struct xlatalias *xlatalias;
  mystrncpy(chrs, ichrs, (signed long int)20);
  if((signed int)chrs[0l] == 0)
  {
    if(!((signed int)var->defaultpostchrs[0l] == 0))
      mystrncpy(chrs, var->defaultpostchrs, (signed long int)20);

  }

  xlatalias = var->firstpostalias;
  signed int return_value_matchpattern$1;
  for( ; !(xlatalias == ((struct xlatalias *)NULL)); xlatalias = xlatalias->next)
  {
    return_value_matchpattern$1=matchpattern(xlatalias->pattern, chrs);
    if(!(return_value_matchpattern$1 == 0))
      break;

  }
  if(!(xlatalias == ((struct xlatalias *)NULL)))
    mystrncpy(chrs, xlatalias->replace, (signed long int)20);

  signed int return_value_matchpattern$3;
  signed int return_value_matchpattern$2;
  signed int return_value_matchpattern$4;
  if(!(destpat == ((unsigned char *)NULL)))
  {
    xlat = var->firstpostxlat;
    for( ; !(xlat == ((struct xlat *)NULL)); xlat = xlat->next)
    {
      return_value_matchpattern$3=matchpattern(xlat->fromchrs, chrs);
      if(!(return_value_matchpattern$3 == 0))
      {
        return_value_matchpattern$2=matchpattern(destpat, xlat->tochrs);
        if(!(return_value_matchpattern$2 == 0))
          break;

      }

    }
  }

  else
  {
    xlat = var->firstpostxlat;
    for( ; !(xlat == ((struct xlat *)NULL)); xlat = xlat->next)
    {
      return_value_matchpattern$4=matchpattern(xlat->fromchrs, chrs);
      if(!(return_value_matchpattern$4 == 0))
        break;

    }
  }
  return xlat;
}

// findreadxlat
// file xlat.h line 29
struct xlat * findreadxlat(struct var *var, struct group *group, unsigned char *ichrs, unsigned char *icodepage, unsigned char *destpat)
{
  unsigned char chrs[20l];
  unsigned char codepage[20l];
  struct xlat *xlat;
  struct xlatalias *xlatalias;
  mystrncpy(chrs, ichrs, (signed long int)20);
  mystrncpy(codepage, icodepage, (signed long int)20);
  if((signed int)group->defaultchrs[0l] == 33)
    setchrscodepage(chrs, codepage, &group->defaultchrs[(signed long int)1]);

  else
    if((signed int)var->defaultreadchrs[0l] == 33)
      setchrscodepage(chrs, codepage, &var->defaultreadchrs[(signed long int)1]);

  if((signed int)chrs[0l] == 0)
  {
    if(!((signed int)group->defaultchrs[0l] == 0))
    {
      if(!((signed int)group->defaultchrs[0l] == 33))
        setchrscodepage(chrs, codepage, group->defaultchrs);

    }

  }

  if((signed int)chrs[0l] == 0)
  {
    if(!((signed int)var->defaultreadchrs[0l] == 0))
    {
      if(!((signed int)var->defaultreadchrs[0l] == 33))
        setchrscodepage(chrs, codepage, var->defaultreadchrs);

    }

  }

  xlatalias = var->firstreadalias;
  signed int return_value_matchcharset$1;
  for( ; !(xlatalias == ((struct xlatalias *)NULL)); xlatalias = xlatalias->next)
  {
    return_value_matchcharset$1=matchcharset(xlatalias->pattern, chrs, codepage);
    if(!(return_value_matchcharset$1 == 0))
      break;

  }
  if(!(xlatalias == ((struct xlatalias *)NULL)))
    setchrscodepage(chrs, codepage, xlatalias->replace);

  signed int return_value_matchcharset$3;
  signed int return_value_matchpattern$2;
  signed int return_value_matchcharset$4;
  if(!(destpat == ((unsigned char *)NULL)))
  {
    xlat = var->firstreadxlat;
    for( ; !(xlat == ((struct xlat *)NULL)); xlat = xlat->next)
    {
      return_value_matchcharset$3=matchcharset(xlat->fromchrs, chrs, codepage);
      if(!(return_value_matchcharset$3 == 0))
      {
        return_value_matchpattern$2=matchpattern(destpat, xlat->tochrs);
        if(!(return_value_matchpattern$2 == 0))
          break;

      }

    }
  }

  else
  {
    xlat = var->firstreadxlat;
    for( ; !(xlat == ((struct xlat *)NULL)); xlat = xlat->next)
    {
      return_value_matchcharset$4=matchcharset(xlat->fromchrs, chrs, codepage);
      if(!(return_value_matchcharset$4 == 0))
        break;

    }
  }
  return xlat;
}

// freadjambaseheader
// file structrw.h line 71
signed int freadjambaseheader(struct _IO_FILE *fp, struct anonymous$4 *s_JamBaseHeader)
{
  unsigned char buf[1024l];
  unsigned long int return_value_fread$1;
  return_value_fread$1=fread((void *)buf, (unsigned long int)1024, (unsigned long int)1, fp);
  if(!(return_value_fread$1 == 1ul))
    return 0;

  else
  {
    memcpy((void *)s_JamBaseHeader->Signature, (const void *)&buf[(signed long int)0], (unsigned long int)4);
    s_JamBaseHeader->DateCreated=jamgetulong(buf, (unsigned long int)4);
    s_JamBaseHeader->ModCounter=jamgetulong(buf, (unsigned long int)8);
    s_JamBaseHeader->ActiveMsgs=jamgetulong(buf, (unsigned long int)12);
    s_JamBaseHeader->PasswordCRC=jamgetulong(buf, (unsigned long int)16);
    s_JamBaseHeader->BaseMsgNum=jamgetulong(buf, (unsigned long int)20);
    memcpy((void *)s_JamBaseHeader->RSRVD, (const void *)&buf[(signed long int)24], (unsigned long int)1000);
    return 1;
  }
}

// freadjamindex
// file structrw.h line 77
signed int freadjamindex(struct _IO_FILE *fp, struct anonymous *s_JamIndex)
{
  unsigned char buf[8l];
  unsigned long int return_value_fread$1;
  return_value_fread$1=fread((void *)buf, (unsigned long int)8, (unsigned long int)1, fp);
  if(!(return_value_fread$1 == 1ul))
    return 0;

  else
  {
    s_JamIndex->UserCRC=jamgetulong(buf, (unsigned long int)0);
    s_JamIndex->HdrOffset=jamgetulong(buf, (unsigned long int)4);
    return 1;
  }
}

// freadjamlastread
// file structrw.h line 80
signed int freadjamlastread(struct _IO_FILE *fp, struct anonymous$2 *s_JamLastRead)
{
  unsigned char buf[16l];
  unsigned long int return_value_fread$1;
  return_value_fread$1=fread((void *)buf, (unsigned long int)16, (unsigned long int)1, fp);
  if(!(return_value_fread$1 == 1ul))
    return 0;

  else
  {
    s_JamLastRead->UserCRC=jamgetulong(buf, (unsigned long int)0);
    s_JamLastRead->UserID=jamgetulong(buf, (unsigned long int)4);
    s_JamLastRead->LastReadMsg=jamgetulong(buf, (unsigned long int)8);
    s_JamLastRead->HighReadMsg=jamgetulong(buf, (unsigned long int)12);
    return 1;
  }
}

// freadjammsgheader
// file structrw.h line 74
signed int freadjammsgheader(struct _IO_FILE *fp, struct anonymous$5 *s_JamMsgHeader)
{
  unsigned char buf[76l];
  unsigned long int return_value_fread$1;
  return_value_fread$1=fread((void *)buf, (unsigned long int)76, (unsigned long int)1, fp);
  if(!(return_value_fread$1 == 1ul))
    return 0;

  else
  {
    memcpy((void *)s_JamMsgHeader->Signature, (const void *)&buf[(signed long int)0], (unsigned long int)4);
    s_JamMsgHeader->Revision=jamgetuword(buf, (unsigned long int)4);
    s_JamMsgHeader->ReservedWord=jamgetuword(buf, (unsigned long int)6);
    s_JamMsgHeader->SubfieldLen=jamgetulong(buf, (unsigned long int)8);
    s_JamMsgHeader->TimesRead=jamgetulong(buf, (unsigned long int)12);
    s_JamMsgHeader->MsgIdCRC=jamgetulong(buf, (unsigned long int)16);
    s_JamMsgHeader->ReplyCRC=jamgetulong(buf, (unsigned long int)20);
    s_JamMsgHeader->ReplyTo=jamgetulong(buf, (unsigned long int)24);
    s_JamMsgHeader->Reply1st=jamgetulong(buf, (unsigned long int)28);
    s_JamMsgHeader->ReplyNext=jamgetulong(buf, (unsigned long int)32);
    s_JamMsgHeader->DateWritten=jamgetulong(buf, (unsigned long int)36);
    s_JamMsgHeader->DateReceived=jamgetulong(buf, (unsigned long int)40);
    s_JamMsgHeader->DateProcessed=jamgetulong(buf, (unsigned long int)44);
    s_JamMsgHeader->MsgNum=jamgetulong(buf, (unsigned long int)48);
    s_JamMsgHeader->Attribute=jamgetulong(buf, (unsigned long int)52);
    s_JamMsgHeader->Attribute2=jamgetulong(buf, (unsigned long int)56);
    s_JamMsgHeader->TxtOffset=jamgetulong(buf, (unsigned long int)60);
    s_JamMsgHeader->TxtLen=jamgetulong(buf, (unsigned long int)64);
    s_JamMsgHeader->PasswordCRC=jamgetulong(buf, (unsigned long int)68);
    s_JamMsgHeader->Cost=jamgetulong(buf, (unsigned long int)72);
    return 1;
  }
}

// freeargs
// file main.c line 354
void freeargs(void)
{
  signed int c = 0;
  for( ; !(c >= fileargc); c = c + 1)
    free((void *)fileargv[(signed long int)c]);
}

// freegroups
// file groups.h line 15
void freegroups(struct var *var)
{
  freelist((void *)var->firstgroup);
  var->firstgroup = (struct group *)(void *)0;
}

// freelist
// file misc.h line 10
void freelist(void *first)
{
  void *ptr;
  void *next;
  ptr = first;
  for( ; !(ptr == NULL); ptr = next)
  {
    next = *((void **)ptr);
    free(ptr);
  }
}

// freesockio
// file sockio.h line 11
void freesockio(struct sockio *sio)
{
  free((void *)sio);
}

// freexlat
// file xlat.h line 26
void freexlat(struct var *var)
{
  freelist((void *)var->firstreadxlat);
  freelist((void *)var->firstpostxlat);
  freelist((void *)var->firstreadalias);
  freelist((void *)var->firstpostalias);
  freelist((void *)var->firstxlattab);
  var->firstreadxlat = (struct xlat *)(void *)0;
  var->firstpostxlat = (struct xlat *)(void *)0;
  var->firstreadalias = (struct xlatalias *)(void *)0;
  var->firstpostalias = (struct xlatalias *)(void *)0;
  var->firstxlattab = (struct xlattab *)(void *)0;
}

// fwritejambaseheader
// file structrw.h line 72
signed int fwritejambaseheader(struct _IO_FILE *fp, struct anonymous$4 *s_JamBaseHeader)
{
  unsigned char buf[1024l];
  memcpy((void *)&buf[(signed long int)0], (const void *)s_JamBaseHeader->Signature, (unsigned long int)4);
  jamputulong(buf, (unsigned long int)4, s_JamBaseHeader->DateCreated);
  jamputulong(buf, (unsigned long int)8, s_JamBaseHeader->ModCounter);
  jamputulong(buf, (unsigned long int)12, s_JamBaseHeader->ActiveMsgs);
  jamputulong(buf, (unsigned long int)16, s_JamBaseHeader->PasswordCRC);
  jamputulong(buf, (unsigned long int)20, s_JamBaseHeader->BaseMsgNum);
  memcpy((void *)&buf[(signed long int)24], (const void *)s_JamBaseHeader->RSRVD, (unsigned long int)1000);
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite((const void *)buf, (unsigned long int)1024, (unsigned long int)1, fp);
  if(!(return_value_fwrite$1 == 1ul))
    return 0;

  else
    return 1;
}

// fwritejamindex
// file structrw.h line 78
signed int fwritejamindex(struct _IO_FILE *fp, struct anonymous *s_JamIndex)
{
  unsigned char buf[8l];
  jamputulong(buf, (unsigned long int)0, s_JamIndex->UserCRC);
  jamputulong(buf, (unsigned long int)4, s_JamIndex->HdrOffset);
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite((const void *)buf, (unsigned long int)8, (unsigned long int)1, fp);
  if(!(return_value_fwrite$1 == 1ul))
    return 0;

  else
    return 1;
}

// fwritejamlastread
// file structrw.h line 81
signed int fwritejamlastread(struct _IO_FILE *fp, struct anonymous$2 *s_JamLastRead)
{
  unsigned char buf[16l];
  jamputulong(buf, (unsigned long int)0, s_JamLastRead->UserCRC);
  jamputulong(buf, (unsigned long int)4, s_JamLastRead->UserID);
  jamputulong(buf, (unsigned long int)8, s_JamLastRead->LastReadMsg);
  jamputulong(buf, (unsigned long int)12, s_JamLastRead->HighReadMsg);
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite((const void *)buf, (unsigned long int)16, (unsigned long int)1, fp);
  if(!(return_value_fwrite$1 == 1ul))
    return 0;

  else
    return 1;
}

// fwritejammsgheader
// file structrw.h line 75
signed int fwritejammsgheader(struct _IO_FILE *fp, struct anonymous$5 *s_JamMsgHeader)
{
  unsigned char buf[76l];
  memcpy((void *)&buf[(signed long int)0], (const void *)s_JamMsgHeader->Signature, (unsigned long int)4);
  jamputuword(buf, (unsigned long int)4, s_JamMsgHeader->Revision);
  jamputuword(buf, (unsigned long int)6, s_JamMsgHeader->ReservedWord);
  jamputulong(buf, (unsigned long int)8, s_JamMsgHeader->SubfieldLen);
  jamputulong(buf, (unsigned long int)12, s_JamMsgHeader->TimesRead);
  jamputulong(buf, (unsigned long int)16, s_JamMsgHeader->MsgIdCRC);
  jamputulong(buf, (unsigned long int)20, s_JamMsgHeader->ReplyCRC);
  jamputulong(buf, (unsigned long int)24, s_JamMsgHeader->ReplyTo);
  jamputulong(buf, (unsigned long int)28, s_JamMsgHeader->Reply1st);
  jamputulong(buf, (unsigned long int)32, s_JamMsgHeader->ReplyNext);
  jamputulong(buf, (unsigned long int)36, s_JamMsgHeader->DateWritten);
  jamputulong(buf, (unsigned long int)40, s_JamMsgHeader->DateReceived);
  jamputulong(buf, (unsigned long int)44, s_JamMsgHeader->DateProcessed);
  jamputulong(buf, (unsigned long int)48, s_JamMsgHeader->MsgNum);
  jamputulong(buf, (unsigned long int)52, s_JamMsgHeader->Attribute);
  jamputulong(buf, (unsigned long int)56, s_JamMsgHeader->Attribute2);
  jamputulong(buf, (unsigned long int)60, s_JamMsgHeader->TxtOffset);
  jamputulong(buf, (unsigned long int)64, s_JamMsgHeader->TxtLen);
  jamputulong(buf, (unsigned long int)68, s_JamMsgHeader->PasswordCRC);
  jamputulong(buf, (unsigned long int)72, s_JamMsgHeader->Cost);
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite((const void *)buf, (unsigned long int)76, (unsigned long int)1, fp);
  if(!(return_value_fwrite$1 == 1ul))
    return 0;

  else
    return 1;
}

// fwritejamsavesubfield
// file structrw.h line 83
signed int fwritejamsavesubfield(struct _IO_FILE *fp, struct anonymous$0 *s_JamSaveSubfield)
{
  unsigned char buf[16l];
  jamputuword(buf, (unsigned long int)0, s_JamSaveSubfield->LoID);
  jamputuword(buf, (unsigned long int)2, s_JamSaveSubfield->HiID);
  jamputulong(buf, (unsigned long int)4, s_JamSaveSubfield->DatLen);
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite((const void *)buf, (unsigned long int)8, (unsigned long int)1, fp);
  if(!(return_value_fwrite$1 == 1ul))
    return 0;

  else
    return 1;
}

// get_msgid_num
// file nntpserv.c line 58
unsigned long int get_msgid_num(void)
{
  unsigned long int msgidnum;
  os_getexclusive();
  signed long int return_value_time$1;
  return_value_time$1=time((signed long int *)(void *)0);
  msgidnum = (unsigned long int)((return_value_time$1 / (signed long int)10) * (signed long int)10);
  if(lastmsgidnum >= msgidnum)
    msgidnum = lastmsgidnum + (unsigned long int)1;

  lastmsgidnum = msgidnum;
  os_stopexclusive();
  return msgidnum;
}

// get_server_openconnections
// file nntpserv.h line 81
signed int get_server_openconnections(void)
{
  signed int res;
  os_getexclusive();
  res = server_openconnections;
  os_stopexclusive();
  return res;
}

// get_server_quit
// file nntpserv.h line 82
signed int get_server_quit(void)
{
  signed int res;
  os_getexclusive();
  res = server_quit;
  os_stopexclusive();
  return res;
}

// getcfgword
// file misc.h line 5
signed int getcfgword(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen)
{
  signed int quote;
  unsigned long int begin;
  quote = 0;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)line[(signed long int)*pos]]) == 0)
      break;

    if((signed int)line[(signed long int)*pos] == 0)
      break;

    *pos = *pos + 1ul;
  }
  while((_Bool)1);
  const unsigned short int **return_value___ctype_b_loc$2;
  if((signed int)line[(signed long int)*pos] == 0)
    return 0;

  else
  {
    if((signed int)line[(signed long int)*pos] == 34)
    {
      quote = 1;
      *pos = *pos + 1ul;
    }

    begin = *pos;
    for( ; !((signed int)line[(signed long int)*pos] == 0); *pos = *pos + 1ul)
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if(!((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)line[(signed long int)*pos]]) == 0))
      {
        if(quote == 0)
          break;

      }

      if((signed int)line[(signed long int)*pos] == 34)
      {
        if(!(quote == 0))
          break;

      }

    }
    if(!((signed int)line[(signed long int)*pos] == 0))
    {
      line[(signed long int)*pos] = (unsigned char)0;
      *pos = *pos + 1ul;
    }

    mystrncpy(dest, &line[(signed long int)begin], (signed long int)destlen);
    return 1;
  }
}

// getcomma
// file misc.h line 12
signed int getcomma(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen)
{
  unsigned long int c;
  unsigned long int d;
  c = *pos;
  d = (unsigned long int)0;
  _Bool tmp_if_expr$2;
  unsigned long int tmp_post$1;
  do
  {
    if((signed int)line[(signed long int)c] == 0)
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = (signed int)line[(signed long int)c] == 44 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$2)
    {
      if(!((signed int)line[(signed long int)c] == 0))
        c = c + 1ul;

      *pos = c;
      dest[(signed long int)d] = (unsigned char)0;
      if(!(*dest == 0))
        return 1;

      else
        return 0;
    }

    else
      if(!(d >= destlen + 18446744073709551615ul))
      {
        tmp_post$1 = d;
        d = d + 1ul;
        dest[(signed long int)tmp_post$1] = line[(signed long int)c];
      }

    c = c + 1ul;
  }
  while((_Bool)1);
}

// getcontenttypepart
// file nntpserv.c line 1396
signed int getcontenttypepart(unsigned char *line, unsigned long int *pos, unsigned char *dest, unsigned long int destlen)
{
  signed int quote;
  unsigned long int c;
  unsigned long int d;
  quote = 0;
  c = *pos;
  d = (unsigned long int)0;
  const unsigned short int **return_value___ctype_b_loc$1;
  do
  {
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)line[(signed long int)c]]) == 0)
      break;

    c = c + 1ul;
  }
  while((_Bool)1);
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$4;
  const unsigned short int **return_value___ctype_b_loc$3;
  unsigned long int tmp_post$2;
  if((signed int)line[(signed long int)c] == 0)
  {
    *pos = c;
    return 0;
  }

  else
    while((_Bool)1)
    {
      if((signed int)line[(signed long int)c] == 34)
      {
        if(!(quote == 0))
          quote = 0;

        else
          quote = 1;
      }

      else
      {
        if((signed int)line[(signed long int)c] == 0)
          tmp_if_expr$5 = (_Bool)1;

        else
          tmp_if_expr$5 = ((signed int)line[(signed long int)c] == 59 ? (!(quote != 0) ? (_Bool)1 : (_Bool)0) : (_Bool)0) ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$5)
        {
          if(!((signed int)line[(signed long int)c] == 0))
            c = c + 1ul;

          *pos = c;
          dest[(signed long int)d] = (unsigned char)0;
          return 1;
        }

        else
        {
          if(!(quote == 0))
            tmp_if_expr$4 = (_Bool)1;

          else
          {
            return_value___ctype_b_loc$3=__ctype_b_loc();
            tmp_if_expr$4 = !(((signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)line[(signed long int)c]] & (signed int)(unsigned short int)8192) != 0) ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$4)
          {
            if(!(d >= destlen + 18446744073709551615ul))
            {
              tmp_post$2 = d;
              d = d + 1ul;
              dest[(signed long int)tmp_post$2] = line[(signed long int)c];
            }

          }

        }
      }
      c = c + 1ul;
    }
}

// getjamsubfield
// file structrw.h line 84
void getjamsubfield(unsigned char *buf, struct anonymous$6 *Subfield_S)
{
  Subfield_S->LoID=jamgetuword(buf, (unsigned long int)0);
  Subfield_S->HiID=jamgetuword(buf, (unsigned long int)2);
  Subfield_S->DatLen=jamgetulong(buf, (unsigned long int)4);
  Subfield_S->Buffer = (unsigned char *)buf + (signed long int)8;
}

// getparentinfo
// file nntpserv.c line 1480
void getparentinfo(struct var *var, unsigned char *article, unsigned char *currentgroup, unsigned char *msgid, unsigned char *fromname, unsigned char *fromaddr, unsigned long int *msgnum, struct xlat *postxlat, signed int readorigin)
{
  unsigned char *at;
  unsigned char *pc;
  struct group *group;
  unsigned long int articlenum;
  struct anonymous$4 baseheader;
  struct anonymous$8 *subpack;
  struct anonymous$5 header;
  struct anonymous$6 *field;
  signed int res;
  unsigned long int count;
  unsigned char buf[100l];
  unsigned char jam_fromname[100l];
  unsigned char jam_fromaddr[100l];
  unsigned char jam_toname[100l];
  unsigned char jam_msgid[100l];
  unsigned char jam_chrs[20l];
  unsigned char jam_codepage[20l];
  struct xlat *xlat;
  unsigned char *xlatres;
  msgid[(signed long int)0] = (unsigned char)0;
  fromname[(signed long int)0] = (unsigned char)0;
  fromaddr[(signed long int)0] = (unsigned char)0;
  *msgnum = (unsigned long int)0;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(!((signed int)*article == 60))
    tmp_if_expr$2 = (_Bool)1;

  else
  {
    return_value_strlen$1=strlen((const char *)article);
    tmp_if_expr$2 = (signed int)article[(signed long int)(return_value_strlen$1 - (unsigned long int)1)] != 62 ? (_Bool)1 : (_Bool)0;
  }
  signed int return_value_matchgroup$8;
  signed int return_value_strcasecmp$7;
  unsigned long int tmp_if_expr$13;
  unsigned long int tmp_if_expr$14;
  unsigned long int tmp_if_expr$15;
  unsigned long int tmp_if_expr$16;
  unsigned long int tmp_if_expr$17;
  char *return_value_strchr$18;
  signed int return_value_matchname$23;
  if(!tmp_if_expr$2)
  {
    strcpy((char *)article, (const char *)&article[(signed long int)1]);
    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen((const char *)article);
    article[(signed long int)(return_value_strlen$3 - (unsigned long int)1)] = (unsigned char)0;
    char *return_value_strchr$4;
    return_value_strchr$4=strchr((const char *)article, 64);
    at = (unsigned char *)return_value_strchr$4;
    char *return_value_strchr$5;
    return_value_strchr$5=strchr((const char *)article, 36);
    pc = (unsigned char *)return_value_strchr$5;
    if(!(at == ((unsigned char *)NULL)) && !(pc == ((unsigned char *)NULL)))
    {
      *at = (unsigned char)0;
      *pc = (unsigned char)0;
      at = at + 1l;
      pc = pc + 1l;
      signed int return_value_strcmp$6;
      return_value_strcmp$6=strcmp((const char *)at, "JamNNTPd");
      if(return_value_strcmp$6 == 0)
      {
        group = var->firstgroup;
        for( ; !(group == ((struct group *)NULL)); group = group->next)
        {
          return_value_matchgroup$8=matchgroup(var->readgroups, group->group);
          if(!(return_value_matchgroup$8 == 0))
          {
            return_value_strcasecmp$7=strcasecmp((const char *)pc, (const char *)group->tagname);
            if(return_value_strcasecmp$7 == 0)
              break;

          }

        }
        if(!(group == ((struct group *)NULL)))
        {
          signed long int return_value_atol$9;
          return_value_atol$9=atol((const char *)article);
          articlenum = (unsigned long int)return_value_atol$9;
          signed int return_value_strcasecmp$10;
          return_value_strcasecmp$10=strcasecmp((const char *)pc, (const char *)currentgroup);
          if(return_value_strcasecmp$10 == 0)
            *msgnum = articlenum;

          signed int return_value_jamopenarea$11;
          return_value_jamopenarea$11=jamopenarea(var, group);
          if(!(return_value_jamopenarea$11 == 0))
          {
            signed int return_value_JAM_ReadMBHeader$12;
            return_value_JAM_ReadMBHeader$12=JAM_ReadMBHeader(var->openmb, &baseheader);
            if(!(return_value_JAM_ReadMBHeader$12 == 0))
              os_logwrite((unsigned char *)"(%s) Could not read messagebase header of \"%s\"", (const void *)var->clientid, (const void *)var->opengroup->jampath);

            else
            {
              res=JAM_ReadMsgHeader(var->openmb, articlenum - baseheader.BaseMsgNum, &header, &subpack);
              if(!(res == 0) && !(res == 7))
              {
                os_logwrite((unsigned char *)"(%s) Could not read message %lu in \"%s\"", (const void *)var->clientid, articlenum, (const void *)var->opengroup->jampath);
                JAM_DelSubPacket(subpack);
              }

              else
                if(res == 7)
                  JAM_DelSubPacket(subpack);

                else
                {
                  count = (unsigned long int)0;
                  jam_fromname[(signed long int)0] = (unsigned char)0;
                  jam_toname[(signed long int)0] = (unsigned char)0;
                  jam_msgid[(signed long int)0] = (unsigned char)0;
                  jam_chrs[(signed long int)0] = (unsigned char)0;
                  jam_codepage[(signed long int)0] = (unsigned char)0;
                  jam_fromaddr[(signed long int)0] = (unsigned char)0;
                  do
                  {
                    field=JAM_GetSubfield_R(subpack, &count);
                    if(field == ((struct anonymous$6 *)NULL))
                      break;

                    if((signed int)field->LoID == 4)
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$13 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$13 = (unsigned long int)100;
                      mystrncpy(jam_msgid, field->Buffer, (signed long int)tmp_if_expr$13);
                    }

                    if((signed int)field->LoID == 2)
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$14 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$14 = (unsigned long int)100;
                      mystrncpy(jam_fromname, field->Buffer, (signed long int)tmp_if_expr$14);
                    }

                    if((signed int)field->LoID == 0)
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$15 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$15 = (unsigned long int)100;
                      mystrncpy(jam_fromaddr, field->Buffer, (signed long int)tmp_if_expr$15);
                    }

                    if((signed int)field->LoID == 3)
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$16 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$16 = (unsigned long int)100;
                      mystrncpy(jam_toname, field->Buffer, (signed long int)tmp_if_expr$16);
                    }

                    if((signed int)field->LoID == 2000)
                    {
                      if(!(1ul + field->DatLen >= 100ul))
                        tmp_if_expr$17 = field->DatLen + (unsigned long int)1;

                      else
                        tmp_if_expr$17 = (unsigned long int)100;
                      mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$17);
                      signed int return_value_strncasecmp$20;
                      return_value_strncasecmp$20=strncasecmp((const char *)buf, "CHRS: ", (unsigned long int)6);
                      if(return_value_strncasecmp$20 == 0)
                      {
                        mystrncpy(jam_chrs, &buf[(signed long int)6], (signed long int)20);
                        char *return_value_strchr$19;
                        return_value_strchr$19=strchr((const char *)jam_chrs, 32);
                        if(!(return_value_strchr$19 == ((char *)NULL)))
                        {
                          return_value_strchr$18=strchr((const char *)jam_chrs, 32);
                          *return_value_strchr$18 = (char)0;
                        }

                        strip(jam_chrs);
                      }

                      signed int return_value_strncasecmp$21;
                      return_value_strncasecmp$21=strncasecmp((const char *)buf, "CHARSET: ", (unsigned long int)9);
                      if(return_value_strncasecmp$21 == 0)
                        mystrncpy(jam_chrs, &buf[(signed long int)9], (signed long int)20);

                      signed int return_value_strncasecmp$22;
                      return_value_strncasecmp$22=strncasecmp((const char *)buf, "CODEPAGE: ", (unsigned long int)10);
                      if(return_value_strncasecmp$22 == 0)
                        mystrncpy(jam_codepage, &buf[(signed long int)10], (signed long int)20);

                    }

                  }
                  while((_Bool)1);
                  xlat=findreadxlat(var, group, jam_chrs, jam_codepage, postxlat->fromchrs);
                  if(!(xlat == ((struct xlat *)NULL)))
                  {
                    if(!(xlat->xlattab == ((struct xlattab *)NULL)))
                    {
                      xlatres=xlatstr(jam_fromname, xlat->xlattab);
                      if(!(xlatres == ((unsigned char *)NULL)))
                      {
                        mystrncpy(jam_fromname, xlatres, (signed long int)100);
                        free((void *)xlatres);
                      }

                      xlatres=xlatstr(jam_toname, xlat->xlattab);
                      if(!(xlatres == ((unsigned char *)NULL)))
                      {
                        mystrncpy(jam_toname, xlatres, (signed long int)100);
                        free((void *)xlatres);
                      }

                    }

                  }

                  if(!(group->netmail == 0))
                  {
                    signed int return_value_matchname$24;
                    return_value_matchname$24=matchname(var->realnames, jam_fromname);
                    if(return_value_matchname$24 == 0)
                    {
                      return_value_matchname$23=matchname(var->realnames, jam_toname);
                      if(return_value_matchname$23 == 0)
                      {
                        JAM_DelSubPacket(subpack);
                        goto __CPROVER_DUMP_L42;
                      }

                    }

                  }

                  if(!(readorigin == 0))
                  {
                    if(group->netmail == 0)
                    {
                      if(group->local == 0)
                      {
                        if(!(header.TxtLen == 0ul))
                          readoriginaddr(var->openmb, header.TxtOffset, header.TxtLen, jam_fromaddr);

                      }

                    }

                  }

                  if(!(xlat == ((struct xlat *)NULL)))
                  {
                    if(!(postxlat->xlattab == ((struct xlattab *)NULL)))
                    {
                      xlatres=xlatstr(jam_fromname, postxlat->xlattab);
                      if(!(xlatres == ((unsigned char *)NULL)))
                      {
                        mystrncpy(jam_fromname, xlatres, (signed long int)100);
                        free((void *)xlatres);
                      }

                    }

                  }

                  strcpy((char *)fromname, (const char *)jam_fromname);
                  strcpy((char *)fromaddr, (const char *)jam_fromaddr);
                  strcpy((char *)msgid, (const char *)jam_msgid);
                  JAM_DelSubPacket(subpack);
                  goto __CPROVER_DUMP_L42;
                }
            }
          }

        }

      }

    }

  }


__CPROVER_DUMP_L42:
  ;
}

// ispattern
// file misc.h line 11
signed int ispattern(unsigned char *pat)
{
  char *return_value_strchr$1;
  return_value_strchr$1=strchr((const char *)pat, 42);
  if(!(return_value_strchr$1 == ((char *)NULL)))
    return 1;

  else
    return 0;
}

// jam_Lock
// file mbase.c line 445
signed int jam_Lock(struct anonymous$7 *Base_PS, signed int DoLock_I)
{
  signed int Handle_I;
  signed int Status_I;
  struct flock fl;
  fseek(Base_PS->HdrFile_PS, (signed long int)0, 0);
  Handle_I=fileno(Base_PS->HdrFile_PS);
  if(Handle_I == -1)
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$1;
    return 2;
  }

  if(!(DoLock_I == 0))
    fl.l_type = (signed short int)1;

  else
    fl.l_type = (signed short int)2;
  fl.l_whence = (signed short int)0;
  fl.l_start = (signed long int)0;
  fl.l_len = (signed long int)1;
  fl.l_pid=getpid();
  Status_I=fcntl(Handle_I, 6, &fl);
  if(!(Status_I == 0))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$2;
    return 3;
  }

  if(!(DoLock_I == 0))
    Base_PS->Locked_I = 1;

  else
    Base_PS->Locked_I = 0;
  return 0;
}

// jam_Open
// file mbase.c line 547
signed int jam_Open(struct anonymous$7 *Base_PS, unsigned char *Basename_PC, char *Mode_PC)
{
  unsigned char Filename_AC[250l];
  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jhr");
  Base_PS->HdrFile_PS=fopen((const char *)Filename_AC, Mode_PC);
  if(Base_PS->HdrFile_PS == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$1;
    return 2;
  }

  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jdt");
  Base_PS->TxtFile_PS=fopen((const char *)Filename_AC, Mode_PC);
  if(Base_PS->TxtFile_PS == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$2;
    return_value___errno_location$2=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$2;
    fclose(Base_PS->HdrFile_PS);
    Base_PS->HdrFile_PS = (struct _IO_FILE *)(void *)0;
    return 2;
  }

  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jdx");
  Base_PS->IdxFile_PS=fopen((const char *)Filename_AC, Mode_PC);
  if(Base_PS->IdxFile_PS == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$3;
    fclose(Base_PS->HdrFile_PS);
    Base_PS->HdrFile_PS = (struct _IO_FILE *)(void *)0;
    fclose(Base_PS->TxtFile_PS);
    Base_PS->TxtFile_PS = (struct _IO_FILE *)(void *)0;
    return 2;
  }

  sprintf((char *)Filename_AC, "%s%s", Basename_PC, (const void *)".jlr");
  Base_PS->LrdFile_PS=fopen((const char *)Filename_AC, Mode_PC);
  if(Base_PS->LrdFile_PS == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$4;
    return_value___errno_location$4=__errno_location();
    Base_PS->Errno_I = *return_value___errno_location$4;
    fclose(Base_PS->HdrFile_PS);
    Base_PS->HdrFile_PS = (struct _IO_FILE *)(void *)0;
    fclose(Base_PS->TxtFile_PS);
    Base_PS->TxtFile_PS = (struct _IO_FILE *)(void *)0;
    fclose(Base_PS->IdxFile_PS);
    Base_PS->IdxFile_PS = (struct _IO_FILE *)(void *)0;
    return 2;
  }

  return 0;
}

// jamgetminmaxnum
// file nntpserv.c line 127
signed int jamgetminmaxnum(struct var *var, struct group *group, unsigned long int *min, unsigned long int *max, unsigned long int *num)
{
  struct anonymous$4 baseheader;
  signed int return_value_jamopenarea$1;
  return_value_jamopenarea$1=jamopenarea(var, group);
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$6;
  signed int return_value_get_server_quit$5;
  unsigned long int tmp_if_expr$7;
  unsigned long int tmp_if_expr$8;
  unsigned long int tmp_if_expr$9;
  char *return_value_strchr$10;
  _Bool tmp_if_expr$17;
  signed int return_value_matchname$16;
  if(return_value_jamopenarea$1 == 0)
    return 0;

  else
  {
    signed int return_value_JAM_GetMBSize$2;
    return_value_JAM_GetMBSize$2=JAM_GetMBSize(var->openmb, num);
    if(!(return_value_JAM_GetMBSize$2 == 0))
    {
      os_logwrite((unsigned char *)"(%s) Failed to get size of JAM area \"%s\"", (const void *)var->clientid, (const void *)group->jampath);
      return 0;
    }

    else
      if(*num == 0ul)
      {
        *min = (unsigned long int)0;
        *max = (unsigned long int)0;
        return 1;
      }

      else
      {
        signed int return_value_JAM_ReadMBHeader$3;
        return_value_JAM_ReadMBHeader$3=JAM_ReadMBHeader(var->openmb, &baseheader);
        if(!(return_value_JAM_ReadMBHeader$3 == 0))
        {
          os_logwrite((unsigned char *)"(%s) Failed to read header of JAM area \"%s\"", (const void *)var->clientid, (const void *)group->jampath);
          return 0;
        }

        else
        {
          *min = baseheader.BaseMsgNum;
          *max = (baseheader.BaseMsgNum + *num) - (unsigned long int)1;
          if(!(group->netmail == 0))
          {
            if(!(cfg_strictnetmail == 0))
            {
              unsigned char fromname[100l];
              unsigned char toname[100l];
              unsigned char chrs[20l];
              unsigned char codepage[20l];
              unsigned char buf[100l];
              unsigned char *xlatres;
              struct xlat *xlat;
              unsigned long int netmin;
              unsigned long int netmax;
              unsigned long int netnum;
              unsigned long int count;
              unsigned long int c;
              signed int res;
              struct anonymous$8 *subpack;
              struct anonymous$5 header;
              struct anonymous$6 *field;
              netmin = (unsigned long int)0;
              netmax = (unsigned long int)0;
              netnum = (unsigned long int)0;
              c = *min;
              do
              {
                if(*max >= c)
                  tmp_if_expr$4 = !(var->disconnect != 0) ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$4 = (_Bool)0;
                if(tmp_if_expr$4)
                {
                  return_value_get_server_quit$5=get_server_quit();
                  tmp_if_expr$6 = !(return_value_get_server_quit$5 != 0) ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$6 = (_Bool)0;
                if(!tmp_if_expr$6)
                  break;

                res=JAM_ReadMsgHeader(var->openmb, c - baseheader.BaseMsgNum, &header, &subpack);
                if(res == 0)
                {
                  if((2147483648ul & header.Attribute) == 0ul)
                  {
                    count = (unsigned long int)0;
                    fromname[(signed long int)0] = (unsigned char)0;
                    toname[(signed long int)0] = (unsigned char)0;
                    chrs[(signed long int)0] = (unsigned char)0;
                    codepage[(signed long int)0] = (unsigned char)0;
                    do
                    {
                      field=JAM_GetSubfield_R(subpack, &count);
                      if(field == ((struct anonymous$6 *)NULL))
                        break;

                      switch((signed int)field->LoID)
                      {
                        case 2:
                        {
                          if(!(1ul + field->DatLen >= 100ul))
                            tmp_if_expr$7 = field->DatLen + (unsigned long int)1;

                          else
                            tmp_if_expr$7 = (unsigned long int)100;
                          mystrncpy(fromname, field->Buffer, (signed long int)tmp_if_expr$7);
                          break;
                        }
                        case 3:
                        {
                          if(!(1ul + field->DatLen >= 100ul))
                            tmp_if_expr$8 = field->DatLen + (unsigned long int)1;

                          else
                            tmp_if_expr$8 = (unsigned long int)100;
                          mystrncpy(toname, field->Buffer, (signed long int)tmp_if_expr$8);
                          break;
                        }
                        case 2000:
                        {
                          if(!(1ul + field->DatLen >= 100ul))
                            tmp_if_expr$9 = field->DatLen + (unsigned long int)1;

                          else
                            tmp_if_expr$9 = (unsigned long int)100;
                          mystrncpy(buf, field->Buffer, (signed long int)tmp_if_expr$9);
                          signed int return_value_strncasecmp$12;
                          return_value_strncasecmp$12=strncasecmp((const char *)buf, "CHRS: ", (unsigned long int)6);
                          if(return_value_strncasecmp$12 == 0)
                          {
                            mystrncpy(chrs, &buf[(signed long int)6], (signed long int)20);
                            char *return_value_strchr$11;
                            return_value_strchr$11=strchr((const char *)chrs, 32);
                            if(!(return_value_strchr$11 == ((char *)NULL)))
                            {
                              return_value_strchr$10=strchr((const char *)chrs, 32);
                              *return_value_strchr$10 = (char)0;
                            }

                            strip(chrs);
                          }

                          signed int return_value_strncasecmp$13;
                          return_value_strncasecmp$13=strncasecmp((const char *)buf, "CHARSET: ", (unsigned long int)9);
                          if(return_value_strncasecmp$13 == 0)
                            mystrncpy(chrs, &buf[(signed long int)9], (signed long int)20);

                          signed int return_value_strncasecmp$14;
                          return_value_strncasecmp$14=strncasecmp((const char *)buf, "CODEPAGE: ", (unsigned long int)10);
                          if(return_value_strncasecmp$14 == 0)
                            mystrncpy(codepage, &buf[(signed long int)10], (signed long int)20);

                        }
                      }
                    }
                    while((_Bool)1);
                    xlat=findreadxlat(var, group, chrs, codepage, (unsigned char *)(void *)0);
                    if(!(xlat == ((struct xlat *)NULL)))
                    {
                      if(!(xlat->xlattab == ((struct xlattab *)NULL)))
                      {
                        xlatres=xlatstr(fromname, xlat->xlattab);
                        if(!(xlatres == ((unsigned char *)NULL)))
                        {
                          mystrncpy(fromname, xlatres, (signed long int)100);
                          free((void *)xlatres);
                        }

                        xlatres=xlatstr(toname, xlat->xlattab);
                        if(!(xlatres == ((unsigned char *)NULL)))
                        {
                          mystrncpy(toname, xlatres, (signed long int)100);
                          free((void *)xlatres);
                        }

                      }

                    }

                    signed int return_value_matchname$15;
                    return_value_matchname$15=matchname(var->realnames, fromname);
                    if(!(return_value_matchname$15 == 0))
                      tmp_if_expr$17 = (_Bool)1;

                    else
                    {
                      return_value_matchname$16=matchname(var->realnames, toname);
                      tmp_if_expr$17 = return_value_matchname$16 != 0 ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr$17)
                    {
                      if(netmin == 0ul)
                        netmin = c;

                      netmax = c;
                      netnum = netnum + 1ul;
                    }

                  }

                  JAM_DelSubPacket(subpack);
                }

                c = c + 1ul;
              }
              while((_Bool)1);
              *min = netmin;
              *max = netmax;
              *num = netnum;
            }

          }

          return 1;
        }
      }
  }
}

// jamgetulong
// file structrw.c line 50
unsigned long int jamgetulong(unsigned char *buf, unsigned long int offset)
{
  return (unsigned long int)buf[(signed long int)offset] + (unsigned long int)((signed int)buf[(signed long int)(offset + (unsigned long int)1)] * 256) + (unsigned long int)((signed int)buf[(signed long int)(offset + (unsigned long int)2)] * 256 * 256) + (unsigned long int)((signed int)buf[(signed long int)(offset + (unsigned long int)3)] * 256 * 256 * 256);
}

// jamgetuword
// file structrw.c line 30
unsigned short int jamgetuword(unsigned char *buf, unsigned long int offset)
{
  return (unsigned short int)((signed int)(unsigned short int)buf[(signed long int)offset] + (signed int)buf[(signed long int)(offset + (unsigned long int)1)] * 256);
}

// jamopenarea
// file nntpserv.c line 98
signed int jamopenarea(struct var *var, struct group *group)
{
  if(group == var->opengroup)
    return 1;

  else
  {
    if(!(var->openmb == ((struct anonymous$7 *)NULL)))
    {
      JAM_CloseMB(var->openmb);
      free((void *)var->openmb);
      var->openmb = (struct anonymous$7 *)(void *)0;
      var->opengroup = (struct group *)(void *)0;
    }

    signed int return_value_JAM_OpenMB$1;
    return_value_JAM_OpenMB$1=JAM_OpenMB(group->jampath, &var->openmb);
    if(!(return_value_JAM_OpenMB$1 == 0))
    {
      if(!(var->openmb == ((struct anonymous$7 *)NULL)))
        free((void *)var->openmb);

      var->openmb = (struct anonymous$7 *)(void *)0;
      var->opengroup = (struct group *)(void *)0;
      os_logwrite((unsigned char *)"(%s) Failed to open JAM messagebase \"%s\"", (const void *)var->clientid, (const void *)group->jampath);
      return 0;
    }

    else
    {
      var->opengroup = group;
      return 1;
    }
  }
}

// jamputulong
// file structrw.c line 42
void jamputulong(unsigned char *buf, unsigned long int offset, unsigned long int num)
{
  buf[(signed long int)offset] = (unsigned char)(num % (unsigned long int)256);
  buf[(signed long int)(offset + (unsigned long int)1)] = (unsigned char)((num / (unsigned long int)256) % (unsigned long int)256);
  buf[(signed long int)(offset + (unsigned long int)2)] = (unsigned char)(((num / (unsigned long int)256) / (unsigned long int)256) % (unsigned long int)256);
  buf[(signed long int)(offset + (unsigned long int)3)] = (unsigned char)((((num / (unsigned long int)256) / (unsigned long int)256) / (unsigned long int)256) % (unsigned long int)256);
}

// jamputuword
// file structrw.c line 36
void jamputuword(unsigned char *buf, unsigned long int offset, unsigned short int num)
{
  buf[(signed long int)offset] = (unsigned char)((signed int)num % 256);
  buf[(signed long int)(offset + (unsigned long int)1)] = (unsigned char)((signed int)num / 256);
}

// linux_serverstub
// file os_linux.c line 29
void * linux_serverstub(void *arglist)
{
  signed int s = (signed int)arglist;
  linux_srv(s);
  return (void *)0;
}

// login
// file login.h line 1
signed int login(struct var *var, unsigned char *user, unsigned char *pass)
{
  struct _IO_FILE *fp;
  unsigned char s[1000l];
  unsigned char cfguser[100l];
  unsigned char cfgpass[100l];
  unsigned char cfgreadgroups[50l];
  unsigned char cfgpostgroups[50l];
  unsigned char realnames[100l];
  signed int res1;
  signed int res2;
  signed int res3;
  signed int res4;
  signed int res5;
  unsigned long int pos;
  unsigned long int line;
  fp=fopen((const char *)cfg_usersfile, "r");
  char *return_value_fgets$1;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    os_logwrite((unsigned char *)"(%s) Can't read users file %s", (const void *)var->clientid, cfg_usersfile);
    return 0;
  }

  else
  {
    do
    {
      return_value_fgets$1=fgets((char *)s, 999, fp);
      if(return_value_fgets$1 == ((char *)NULL))
        break;

      strip(s);
      pos = (unsigned long int)0;
      if(!((signed int)s[0l] == 0))
      {
        if(!((signed int)s[0l] == 35))
        {
          res1=getcfgword(s, &pos, cfguser, (unsigned long int)100);
          res2=getcfgword(s, &pos, cfgpass, (unsigned long int)100);
          res3=getcfgword(s, &pos, cfgreadgroups, (unsigned long int)50);
          res4=getcfgword(s, &pos, cfgpostgroups, (unsigned long int)50);
          res5=getcfgword(s, &pos, realnames, (unsigned long int)100);
          if(!(res1 == 0) && !(res2 == 0) && !(res3 == 0) && !(res4 == 0))
          {
            signed int return_value_strcasecmp$3;
            return_value_strcasecmp$3=strcasecmp((const char *)cfguser, (const char *)user);
            if(return_value_strcasecmp$3 == 0)
            {
              signed int return_value_strcmp$2;
              return_value_strcmp$2=strcmp((const char *)cfgpass, (const char *)pass);
              if(!(return_value_strcmp$2 == 0))
              {
                os_logwrite((unsigned char *)"(%s) Wrong password for %s", (const void *)var->clientid, user);
                fclose(fp);
                return 0;
              }

              os_logwrite((unsigned char *)"(%s) Logged in as %s", (const void *)var->clientid, user);
              strcpy((char *)var->readgroups, (const char *)cfgreadgroups);
              strcpy((char *)var->postgroups, (const char *)cfgpostgroups);
              if(!(res5 == 0))
                strcpy((char *)var->realnames, (const char *)realnames);

              var->login = 1;
              fclose(fp);
              return 1;
            }

          }

          else
            os_logwrite((unsigned char *)"(%s) Syntax error on line %lu in %s, skipping line", (const void *)var->clientid, line, cfg_usersfile);
        }

      }

    }
    while((_Bool)1);
    os_logwrite((unsigned char *)"(%s) Unknown user %s", (const void *)var->clientid, user);
    fclose(fp);
    return 0;
  }
}

// main
// file main.c line 362
signed int main(signed int argc, char **argv)
{
  signed int sock;
  signed int error;
  signed int res;
  struct sockaddr_in local;
  struct anonymous$1 fds;
  struct timeval tv;
  struct _IO_FILE *fp;
  signed int return_value_strcasecmp$1;
  _Bool tmp_if_expr$3;
  signed int return_value_strcasecmp$2;
  _Bool tmp_if_expr$5;
  signed int return_value_strcasecmp$4;
  signed int return_value_get_server_quit$15;
  signed int return_value_get_server_openconnections$19;
  if(argc == 2)
  {
    return_value_strcasecmp$1=strcasecmp(argv[(signed long int)1], "?");
    if(return_value_strcasecmp$1 == 0)
      tmp_if_expr$3 = (_Bool)1;

    else
    {
      return_value_strcasecmp$2=strcasecmp(argv[(signed long int)1], "-h");
      tmp_if_expr$3 = return_value_strcasecmp$2 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$3)
      tmp_if_expr$5 = (_Bool)1;

    else
    {
      return_value_strcasecmp$4=strcasecmp(argv[(signed long int)1], "--help");
      tmp_if_expr$5 = return_value_strcasecmp$4 == 0 ? (_Bool)1 : (_Bool)0;
    }
    if(!tmp_if_expr$5)
      goto __CPROVER_DUMP_L5;

    printf("\nUsage: jamnntpd [<options>]\n\n General options:\n\n -p[ort] <port>         Port number for JamNNTPd (default: 5000)\n -m[ax] <maxconn>       Maximum number of simultaneous connections (default: 5)\n -g[roups] <groupsfile> Read this file instead of /etc/jamnntpd.groups\n -a[llow] <allowfile>   Read this file instead of /etc/jamnntpd.allow\n -u[sers] <usersfile>   Read this file instead of /etc/jamnntpd.users\n -x[lat] <xlatfile>     Read this file instead of /etc/jamnntpd.xlat\n -l[ogfile] <logfile>   Log to this file instead of /var/log/jamnntpd.log\n -noecholog             Do not write log messages to console\n -debug                 Write all network communication to console\n\n Options for displaying messages:\n\n -readorigin           Get addresses from the origin line instead of JAM header\n -noencode             Do not MIME encode headers with 8-bit characters\n -strictnetmail        Use strict article counters in netmail areas\n -def_flowed on/off    Default setting for format=flowed (RFC 2646)\n -def_showto on/off    Default setting for the display of recipient on from line\n\n Options for posting messages:\n\n -nostripre            Do not remove \"Re:\" from subject line\n -notearline           Do not put X-Newsreader/User-Agent string on tearline\n -noreplyaddr          Do not create REPLYADDR kludges\n -notzutc              Do not create TZUTC kludges\n -nocancel             Do not allow cancelling of messages\n -smartquote           Reformat quoted text to fidonet style\n -origin <origin>      Origin to use instead of contents of Organization line\n -guestsuffix <suffix> Suffix added to from name of unauthenticated users\n -echomailjam <file>   Create echomail.jam file for CrashMail and other tossers\n\n Options for configuration files:\n\n -config <file>        Read options from this file\n -create <file>        Create a configuration file with the default options\n\nIf no options are specified on the commandline, JamNNTPd will attempt to read\noptions from /etc/jamnntpd.config (if it exists).\n\n");
    return 0;
  }

  else
  {

  __CPROVER_DUMP_L5:
    ;
    if(argc == 1)
    {
      fp=fopen("/etc/jamnntpd.config", "r");
      if(!(fp == ((struct _IO_FILE *)NULL)))
      {
        fclose(fp);
        signed int return_value_readargs$6;
        return_value_readargs$6=readargs((unsigned char *)"/etc/jamnntpd.config");
        if(return_value_readargs$6 == 0)
        {
          freeargs();
          exit(0);
        }

      }

    }

    else
    {
      signed int return_value_parseargs$7;
      return_value_parseargs$7=parseargs(argc - 1, &argv[(signed long int)1], (unsigned char *)(void *)0, (unsigned long int)0);
      if(return_value_parseargs$7 == 0)
      {
        freeargs();
        exit(0);
      }

    }
    signed int return_value_os_init$8;
    return_value_os_init$8=os_init();
    if(return_value_os_init$8 == 0)
    {
      freeargs();
      exit(10);
    }

    sock=socket(2, 1, 6);
    if(sock == -1)
    {
      unsigned char err[200l];
      signed int return_value_os_errno$9;
      return_value_os_errno$9=os_errno();
      unsigned char *return_value_os_strerr$10;
      return_value_os_strerr$10=os_strerr(return_value_os_errno$9, err, (unsigned long int)200);
      os_showerror((unsigned char *)"Failed to create socket: %s", return_value_os_strerr$10);
      os_free();
      freeargs();
      exit(10);
    }

    memset((void *)&local, 0, sizeof(struct sockaddr_in) /*16ul*/ );
    local.sin_family = (unsigned short int)2;
    local.sin_addr.s_addr = (unsigned int)0x00000000;
    local.sin_port=htons((unsigned short int)cfg_port);
    error=bind(sock, (struct sockaddr *)&local, (unsigned int)sizeof(struct sockaddr_in) /*16ul*/ );
    if(error == -1)
    {
      unsigned char main$$1$$6$$err[200l];
      signed int return_value_os_errno$11;
      return_value_os_errno$11=os_errno();
      unsigned char *return_value_os_strerr$12;
      return_value_os_strerr$12=os_strerr(return_value_os_errno$11, main$$1$$6$$err, (unsigned long int)200);
      os_showerror((unsigned char *)"Could not bind to port (server already running?): %s", return_value_os_strerr$12);
      close(sock);
      os_free();
      freeargs();
      exit(10);
    }

    error=listen(sock, 5);
    if(error == -1)
    {
      unsigned char main$$1$$7$$err[200l];
      signed int return_value_os_errno$13;
      return_value_os_errno$13=os_errno();
      unsigned char *return_value_os_strerr$14;
      return_value_os_strerr$14=os_strerr(return_value_os_errno$13, main$$1$$7$$err, (unsigned long int)200);
      os_showerror((unsigned char *)"Could not listen to socket: %s", return_value_os_strerr$14);
      close(sock);
      os_free();
      freeargs();
      exit(10);
    }

    os_logwrite((unsigned char *)"JamNNTPd/Linux 1.2 is running on port %d", cfg_port);
    if(!(cfg_debug == 0))
      os_logwrite((unsigned char *)"Compiled Jan 24 2016 20:18:10");

    do
    {
      return_value_get_server_quit$15=get_server_quit();
      if(!(return_value_get_server_quit$15 == 0))
        break;

      do
      {
        signed int __d0;
        signed int __d1;
        asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fds)->__fds_bits[(signed long int)0]) : "memory");
      }
      while((_Bool)0);
      (&fds)->__fds_bits[(signed long int)(sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&fds)->__fds_bits[(signed long int)(sock / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sock % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
      tv.tv_sec = (signed long int)1;
      tv.tv_usec = (signed long int)0;
      res=select(sock + 1, &fds, (struct anonymous$1 *)(void *)0, (struct anonymous$1 *)(void *)0, &tv);
      if(!(res == 0) && !(res == -1))
      {
        signed int active_sock;
        struct sockaddr_in from;
        signed int fromlen = (signed int)sizeof(struct sockaddr_in) /*16ul*/ ;
        active_sock=accept(sock, (struct sockaddr *)&from, (unsigned int *)&fromlen);
        if(active_sock == -1)
        {
          unsigned char main$$1$$8$$2$$1$$err[200l];
          signed int return_value_os_errno$16;
          return_value_os_errno$16=os_errno();
          unsigned char *return_value_os_strerr$17;
          return_value_os_strerr$17=os_strerr(return_value_os_errno$16, main$$1$$8$$2$$1$$err, (unsigned long int)200);
          os_showerror((unsigned char *)"Failed to accept incoming connection: %s", return_value_os_strerr$17);
          break;
        }

        os_startserver(server, active_sock);
      }

    }
    while((_Bool)1);
    signed int return_value_get_server_openconnections$20;
    return_value_get_server_openconnections$20=get_server_openconnections();
    if(!(return_value_get_server_openconnections$20 == 0))
    {
      signed int return_value_get_server_openconnections$18;
      return_value_get_server_openconnections$18=get_server_openconnections();
      os_logwrite((unsigned char *)"Exiting. %ld connection(s) are active, waiting for them to quit", return_value_get_server_openconnections$18);
      do
      {
        return_value_get_server_openconnections$19=get_server_openconnections();
        if(return_value_get_server_openconnections$19 == 0)
          break;

        os_sleep(1);
      }
      while((_Bool)1);
    }

    close(sock);
    os_logwrite((unsigned char *)"JamNNTPd/Linux exited");
    os_free();
    freeargs();
    exit(0);
  }
}

// makedate
// file misc.h line 3
void makedate(signed long int t, unsigned char *dest, unsigned char *tz)
{
  signed long int t1;
  signed long int t2;
  struct tm *tp;
  unsigned long int jam_utcoffset;
  unsigned char rfctz[6l];
  unsigned char *monthnames[12l] = { (unsigned char *)"Jan", (unsigned char *)"Feb", (unsigned char *)"Mar", (unsigned char *)"Apr", (unsigned char *)"May", (unsigned char *)"Jun", (unsigned char *)"Jul", (unsigned char *)"Aug", (unsigned char *)"Sep", (unsigned char *)"Oct", (unsigned char *)"Nov", (unsigned char *)"Dec" };
  unsigned char *daynames[7l] = { (unsigned char *)"Sun", (unsigned char *)"Mon", (unsigned char *)"Tue", (unsigned char *)"Wed", (unsigned char *)"Thu", (unsigned char *)"Fri", (unsigned char *)"Sat" };
  t1=time((signed long int *)(void *)0);
  tp=gmtime(&t1);
  tp->tm_isdst = -1;
  t2=mktime(tp);
  jam_utcoffset = (unsigned long int)(t2 - t1);
  t1 = (signed long int)((unsigned long int)t + jam_utcoffset);
  if(!(*tz == 0))
  {
    if((signed int)*tz == 45)
      mystrncpy(rfctz, tz, (signed long int)6);

    else
      sprintf((char *)rfctz, "+%.4s", tz);
  }

  else
  {
    strcpy((char *)rfctz, "GMT");
    t1 = (signed long int)((unsigned long int)t1 + jam_utcoffset);
  }
  tp=localtime(&t1);
  sprintf((char *)dest, "%s, %d %s %d %02d:%02d:%02d %s", daynames[(signed long int)tp->tm_wday], tp->tm_mday, monthnames[(signed long int)tp->tm_mon], 1900 + tp->tm_year, tp->tm_hour, tp->tm_min, tp->tm_sec, (const void *)rfctz);
}

// matchcharset
// file xlat.c line 272
signed int matchcharset(unsigned char *pat, unsigned char *chrs, unsigned char *codepage)
{
  unsigned char buf[20l];
  unsigned char buf2[20l];
  char *return_value_strchr$7;
  return_value_strchr$7=strchr((const char *)pat, 44);
  char *return_value_strchr$1;
  signed int return_value_matchpattern$4;
  if(!(return_value_strchr$7 == ((char *)NULL)))
  {
    mystrncpy(buf, pat, (signed long int)20);
    char *return_value_strchr$2;
    return_value_strchr$2=strchr((const char *)buf, 44);
    if(!(return_value_strchr$2 == ((char *)NULL)))
    {
      return_value_strchr$1=strchr((const char *)buf, 44);
      *return_value_strchr$1 = (char)0;
    }

    char *return_value_strchr$3;
    return_value_strchr$3=strchr((const char *)pat, 44);
    mystrncpy(buf2, (unsigned char *)(return_value_strchr$3 + (signed long int)1), (signed long int)20);
    signed int return_value_matchpattern$5;
    return_value_matchpattern$5=matchpattern(buf, chrs);
    if(!(return_value_matchpattern$5 == 0))
    {
      return_value_matchpattern$4=matchpattern(buf2, codepage);
      if(!(return_value_matchpattern$4 == 0))
        return 1;

    }

    return 0;
  }

  else
  {
    signed int return_value_matchpattern$6;
    return_value_matchpattern$6=matchpattern(pat, chrs);
    return return_value_matchpattern$6;
  }
}

// matchgroup
// file misc.h line 6
signed int matchgroup(unsigned char *groups, unsigned char group)
{
  signed int c;
  signed int return_value_strcmp$1;
  return_value_strcmp$1=strcmp((const char *)groups, "*");
  signed int return_value_tolower$3;
  signed int return_value_tolower$4;
  if(return_value_strcmp$1 == 0)
    return 1;

  else
  {
    signed int return_value_strcmp$2;
    return_value_strcmp$2=strcmp((const char *)groups, "-");
    if(return_value_strcmp$2 == 0)
      return 0;

    else
    {
      c = 0;
      for( ; !(groups[(signed long int)c] == 0); c = c + 1)
      {
        return_value_tolower$3=tolower((signed int)groups[(signed long int)c]);
        return_value_tolower$4=tolower((signed int)group);
        if(return_value_tolower$3 == return_value_tolower$4)
          return 1;

      }
      return 0;
    }
  }
}

// matchname
// file misc.h line 13
signed int matchname(unsigned char *namelist, unsigned char *name)
{
  unsigned char namepat[100l];
  unsigned long int count = (unsigned long int)0;
  signed int return_value_getcomma$1;
  signed int return_value_matchpattern$2;
  do
  {
    return_value_getcomma$1=getcomma(namelist, &count, namepat, (unsigned long int)100);
    if(return_value_getcomma$1 == 0)
      break;

    return_value_matchpattern$2=matchpattern(namepat, name);
    if(!(return_value_matchpattern$2 == 0))
      return 1;

  }
  while((_Bool)1);
  return 0;
}

// matchpattern
// file misc.c line 174
signed int matchpattern(unsigned char *pat, unsigned char *str)
{
  signed int c = 0;
  for( ; !(pat[(signed long int)c] == 0); c = c + 1)
  {
    if((signed int)pat[(signed long int)c] == 42)
      return 1;

    if(!((signed int)pat[(signed long int)c] == 63))
    {
      signed int return_value_tolower$1;
      return_value_tolower$1=tolower((signed int)str[(signed long int)c]);
      signed int return_value_tolower$2;
      return_value_tolower$2=tolower((signed int)pat[(signed long int)c]);
      if(!(return_value_tolower$1 == return_value_tolower$2))
        return 0;

    }

  }
  if(!(str[(signed long int)c] == 0))
    return 0;

  else
    return 1;
}

// mimemakeheaderline
// file mime.h line 7
void mimemakeheaderline(unsigned char *dest, unsigned long int destlen, unsigned char *keyword, unsigned char *data, unsigned char *chrs, unsigned char *fromaddr, signed int noencode)
{
  unsigned char *specials;
  unsigned char *mimespecials = (unsigned char *)"_=?\t";
  unsigned char *fromspecials = (unsigned char *)"_=?\t()<>@,;:\\\".[]";
  signed int mime;
  unsigned long int c;
  unsigned long int d;
  unsigned long int num8bit;
  unsigned char prefix[50l];
  unsigned char line[350l];
  unsigned char quoted[200l];
  unsigned char method;
  dest[(signed long int)0] = (unsigned char)0;
  num8bit=count8bit(data);
  if(!(num8bit == 0ul))
    mime = 1;

  else
    mime = 0;
  _Bool tmp_if_expr$2;
  unsigned long int return_value_strlen$1;
  if(num8bit >= 6ul)
  {
    return_value_strlen$1=strlen((const char *)data);
    tmp_if_expr$2 = num8bit > return_value_strlen$1 / (unsigned long int)2 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
    method = (unsigned char)98;

  else
    method = (unsigned char)113;
  char *return_value_strchr$3;
  unsigned long int tmp_post$4;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  unsigned long int tmp_post$5;
  unsigned long int tmp_post$8;
  unsigned long int tmp_post$9;
  if(mime == 0 || !(noencode == 0))
  {
    if(!(fromaddr == ((unsigned char *)NULL)))
    {
      c = (unsigned long int)0;
      for( ; !(data[(signed long int)c] == 0); c = c + 1ul)
      {
        return_value_strchr$3=strchr((const char *)fromspecials, (signed int)data[(signed long int)c]);
        if(!(return_value_strchr$3 == ((char *)NULL)))
          break;

      }
      if(!(data[(signed long int)c] == 0))
      {
        d = (unsigned long int)0;
        tmp_post$4 = d;
        d = d + 1ul;
        quoted[(signed long int)tmp_post$4] = (unsigned char)34;
        c = (unsigned long int)0;
        for( ; !(data[(signed long int)c] == 0); c = c + 1ul)
        {
          if((signed int)data[(signed long int)c] == 34)
            tmp_if_expr$6 = (_Bool)1;

          else
            tmp_if_expr$6 = (signed int)data[(signed long int)c] == 92 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$6)
            tmp_if_expr$7 = (_Bool)1;

          else
            tmp_if_expr$7 = (signed int)data[(signed long int)c] == 13 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$7)
          {
            tmp_post$5 = d;
            d = d + 1ul;
            quoted[(signed long int)tmp_post$5] = (unsigned char)92;
          }

          tmp_post$8 = d;
          d = d + 1ul;
          quoted[(signed long int)tmp_post$8] = data[(signed long int)c];
        }
        tmp_post$9 = d;
        d = d + 1ul;
        quoted[(signed long int)tmp_post$9] = (unsigned char)34;
        quoted[(signed long int)d] = (unsigned char)0;
      }

      else
        strcpy((char *)quoted, (const char *)data);
      sprintf((char *)line, "%s: %s <%s>\r\n", keyword, (const void *)quoted, fromaddr);
    }

    else
      sprintf((char *)line, "%s: %s\r\n", keyword, data);
    unsigned long int return_value_strlen$10;
    return_value_strlen$10=strlen((const char *)line);
    if(!(return_value_strlen$10 >= destlen))
      strcpy((char *)dest, (const char *)line);

    goto __CPROVER_DUMP_L37;
  }

  if(!(fromaddr == ((unsigned char *)NULL)))
    specials = fromspecials;

  else
    specials = mimespecials;
  sprintf((char *)prefix, "=?%s?%c?", chrs, method);
  c = (unsigned long int)0;
  sprintf((char *)line, "%s: %s", keyword, (const void *)prefix);
  d=strlen((const char *)line);
  signed int return_value_encodeb64$11;
  signed int return_value_encodeqp$12;
  while(!(data[(signed long int)c] == 0))
  {
    if((signed int)method == 98)
    {
      return_value_encodeb64$11=encodeb64(&data[(signed long int)c], &line[(signed long int)d], specials, (signed int)(((unsigned long int)76 - d) - (unsigned long int)2));
      c = c + (unsigned long int)return_value_encodeb64$11;
    }

    if((signed int)method == 113)
    {
      return_value_encodeqp$12=encodeqp(&data[(signed long int)c], &line[(signed long int)d], specials, (signed int)(((unsigned long int)76 - d) - (unsigned long int)2));
      c = c + (unsigned long int)return_value_encodeqp$12;
    }

    if(!(data[(signed long int)c] == 0))
    {
      strcat((char *)line, "?=\r\n");
      unsigned long int return_value_strlen$13;
      return_value_strlen$13=strlen((const char *)dest);
      unsigned long int return_value_strlen$14;
      return_value_strlen$14=strlen((const char *)line);
      if(!(return_value_strlen$13 + return_value_strlen$14 >= destlen))
        strcat((char *)dest, (const char *)line);

      else
        goto __CPROVER_DUMP_L37;
      sprintf((char *)line, " %s", (const void *)prefix);
      d=strlen((const char *)line);
    }

  }
  strcat((char *)line, "?=");
  if(!(fromaddr == ((unsigned char *)NULL)))
  {
    unsigned long int return_value_strlen$17;
    return_value_strlen$17=strlen((const char *)line);
    unsigned long int return_value_strlen$18;
    return_value_strlen$18=strlen((const char *)fromaddr);
    if(3ul + return_value_strlen$17 + return_value_strlen$18 >= 77ul)
    {
      strcat((char *)line, "\r\n");
      unsigned long int return_value_strlen$15;
      return_value_strlen$15=strlen((const char *)dest);
      unsigned long int return_value_strlen$16;
      return_value_strlen$16=strlen((const char *)line);
      if(!(return_value_strlen$15 + return_value_strlen$16 >= destlen))
        strcat((char *)dest, (const char *)line);

      else
        goto __CPROVER_DUMP_L37;
      strcpy((char *)line, " ");
      d=strlen((const char *)line);
    }

    else
      strcat((char *)line, " ");
    strcat((char *)line, "<");
    strcat((char *)line, (const char *)fromaddr);
    strcat((char *)line, ">");
  }

  strcat((char *)line, "\r\n");
  unsigned long int return_value_strlen$19;
  return_value_strlen$19=strlen((const char *)dest);
  unsigned long int return_value_strlen$20;
  return_value_strlen$20=strlen((const char *)line);
  if(!(return_value_strlen$19 + return_value_strlen$20 >= destlen))
    strcat((char *)dest, (const char *)line);


__CPROVER_DUMP_L37:
  ;
}

// mimesendheaderline
// file mime.h line 6
void mimesendheaderline(struct var *var, unsigned char *keyword, unsigned char *data, unsigned char *chrs, unsigned char *fromaddr, signed int noencode)
{
  unsigned char destbuf[1000l];
  unsigned long int c;
  unsigned long int lastline;
  unsigned char bak;
  mimemakeheaderline(destbuf, (unsigned long int)1000, keyword, data, chrs, fromaddr, noencode);
  c = (unsigned long int)0;
  lastline = (unsigned long int)0;
  _Bool tmp_if_expr$1;
  while(!(destbuf[(signed long int)c] == 0))
  {
    if((signed int)destbuf[(signed long int)c] == 13)
      tmp_if_expr$1 = (signed int)destbuf[(signed long int)(c + (unsigned long int)1)] == 10 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$1 = (_Bool)0;
    if(tmp_if_expr$1)
    {
      bak = destbuf[(signed long int)(c + (unsigned long int)2)];
      destbuf[(signed long int)(c + (unsigned long int)2)] = (unsigned char)0;
      socksendtext(var, &destbuf[(signed long int)lastline]);
      destbuf[(signed long int)(c + (unsigned long int)2)] = bak;
      lastline = c + (unsigned long int)2;
      c = c + (unsigned long int)2;
    }

    else
      c = c + 1ul;
  }
}

// mystrncpy
// file misc.h line 1
void mystrncpy(unsigned char *dest, unsigned char *src, signed long int len)
{
  if(!(len == 0l))
  {
    strncpy((char *)dest, (const char *)src, (unsigned long int)len - (unsigned long int)1);
    dest[len - (signed long int)1] = (unsigned char)0;
  }

}

// os_errno
// file os.h line 21
signed int os_errno(void)
{
  signed int *return_value___errno_location$1;
  return_value___errno_location$1=__errno_location();
  return *return_value___errno_location$1;
}

// os_free
// file os.h line 14
void os_free(void)
{
  pthread_mutex_destroy(&linux_mutex);
}

// os_getexclusive
// file os.h line 17
void os_getexclusive(void)
{
  pthread_mutex_lock(&linux_mutex);
}

// os_init
// file os.h line 13
signed int os_init(void)
{
  signal(2, sighandler);
  signal(13, (void (*)(signed int))1);
  return 1;
}

// os_logwrite
// file os.h line 19
void os_logwrite(unsigned char *fmt, ...)
{
  struct _IO_FILE *logfp;
  signed long int t;
  struct tm *tp;
  unsigned char *monthnames[13l] = { (unsigned char *)"Jan", (unsigned char *)"Feb", (unsigned char *)"Mar", (unsigned char *)"Apr", (unsigned char *)"May", (unsigned char *)"Jun", (unsigned char *)"Jul", (unsigned char *)"Aug", (unsigned char *)"Sep", (unsigned char *)"Oct", (unsigned char *)"Nov", (unsigned char *)"Dec", (unsigned char *)"???" };
  unsigned char logline[500l];
  void **args;
  time(&t);
  tp=localtime(&t);
  sprintf((char *)logline, "%02d-%s-%02d %02d:%02d:%02d ", tp->tm_mday, monthnames[(signed long int)tp->tm_mon], tp->tm_year % 100, tp->tm_hour, tp->tm_min, tp->tm_sec);
  args = (void **)&fmt;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen((const char *)logline);
  vsprintf((char *)&logline[(signed long int)return_value_strlen$1], (const char *)fmt, args);
  args = ((void **)NULL);
  if(cfg_noecholog == 0)
    puts((const char *)logline);

  strcat((char *)logline, "\n");
  logfp=fopen((const char *)cfg_logfile, "a");
  if(logfp == ((struct _IO_FILE *)NULL))
    os_showerror((unsigned char *)"Failed to open logfile %s", cfg_logfile);

  else
  {
    fputs((const char *)logline, logfp);
    fclose(logfp);
  }
}

// os_showerror
// file os.h line 20
void os_showerror(unsigned char *fmt, ...)
{
  void **args = (void **)&fmt;
  vprintf((const char *)fmt, args);
  printf("\n");
  args = ((void **)NULL);
}

// os_sleep
// file os.h line 16
void os_sleep(signed int x)
{
  sleep((unsigned int)x);
}

// os_startserver
// file os.h line 15
void os_startserver(void (*srv)(signed int), signed int sock)
{
  unsigned long int thr;
  union pthread_attr_t attr;
  linux_srv = srv;
  pthread_attr_init(&attr);
  pthread_attr_setdetachstate(&attr, 1);
  pthread_create(&thr, &attr, linux_serverstub, (void *)sock);
}

// os_stopexclusive
// file os.h line 18
void os_stopexclusive(void)
{
  pthread_mutex_unlock(&linux_mutex);
}

// os_strerr
// file os.h line 22
unsigned char * os_strerr(signed int err, unsigned char *str, unsigned long int len)
{
  char *return_value_strerror$1;
  return_value_strerror$1=strerror(err);
  mystrncpy(str, (unsigned char *)return_value_strerror$1, (signed long int)len);
  return str;
}

// parseargs
// file main.c line 11
signed int parseargs(signed int argc, char **argv, unsigned char *filename, unsigned long int line)
{
  unsigned char *arg;
  unsigned char src[100l];
  unsigned char tmp[200l];
  signed int c;
  src[(signed long int)0] = (unsigned char)0;
  if(!(filename == ((unsigned char *)NULL)))
    sprintf((char *)src, " (%.95s line %ld)", filename, line);

  c = 0;
  signed int return_value_strcasecmp$43;
  signed int return_value_strcasecmp$42;
  signed int return_value_strcasecmp$41;
  signed int return_value_strcasecmp$40;
  signed int return_value_strcasecmp$39;
  signed int return_value_strcasecmp$38;
  signed int return_value_strcasecmp$37;
  signed int return_value_strcasecmp$36;
  signed int return_value_strcasecmp$35;
  signed int return_value_strcasecmp$34;
  signed int return_value_strcasecmp$31;
  _Bool tmp_if_expr$33;
  signed int return_value_strcasecmp$32;
  signed int return_value_strcasecmp$28;
  _Bool tmp_if_expr$30;
  signed int return_value_strcasecmp$29;
  signed int return_value_strcasecmp$27;
  signed int return_value_strcasecmp$26;
  signed int return_value_strcasecmp$25;
  signed int return_value_strcasecmp$24;
  signed int return_value_strcasecmp$23;
  signed int return_value_strcasecmp$20;
  _Bool tmp_if_expr$22;
  signed int return_value_strcasecmp$21;
  signed int return_value_strcasecmp$17;
  _Bool tmp_if_expr$19;
  signed int return_value_strcasecmp$18;
  signed int return_value_strcasecmp$14;
  _Bool tmp_if_expr$16;
  signed int return_value_strcasecmp$15;
  signed int return_value_strcasecmp$11;
  _Bool tmp_if_expr$13;
  signed int return_value_strcasecmp$12;
  signed int return_value_strcasecmp$8;
  _Bool tmp_if_expr$10;
  signed int return_value_strcasecmp$9;
  signed int return_value_strcasecmp$7;
  signed int return_value_strcasecmp$6;
  for( ; !(c >= argc); c = c + 1)
  {
    arg = (unsigned char *)argv[(signed long int)c];
    if((signed int)*arg == 45)
    {
      if((signed int)arg[1l] == 45)
        arg = &arg[(signed long int)1];

    }

    if(!(filename == ((unsigned char *)NULL)))
    {
      if(!(*arg == 0))
      {
        if(!((signed int)*arg == 45))
        {
          strcpy((char *)tmp, "-");
          mystrncpy(&tmp[(signed long int)1], arg, (signed long int)199);
          arg = tmp;
        }

      }

    }

    signed int return_value_strcasecmp$44;
    return_value_strcasecmp$44=strcasecmp((const char *)arg, "-debug");
    if(return_value_strcasecmp$44 == 0)
      cfg_debug = 1;

    else
    {
      return_value_strcasecmp$43=strcasecmp((const char *)arg, "-noecholog");
      if(return_value_strcasecmp$43 == 0)
        cfg_noecholog = 1;

      else
      {
        return_value_strcasecmp$42=strcasecmp((const char *)arg, "-nostripre");
        if(return_value_strcasecmp$42 == 0)
          cfg_nostripre = 1;

        else
        {
          return_value_strcasecmp$41=strcasecmp((const char *)arg, "-notearline");
          if(return_value_strcasecmp$41 == 0)
            cfg_notearline = 1;

          else
          {
            return_value_strcasecmp$40=strcasecmp((const char *)arg, "-nocancel");
            if(return_value_strcasecmp$40 == 0)
              cfg_nocancel = 1;

            else
            {
              return_value_strcasecmp$39=strcasecmp((const char *)arg, "-strictnetmail");
              if(return_value_strcasecmp$39 == 0)
                cfg_strictnetmail = 1;

              else
              {
                return_value_strcasecmp$38=strcasecmp((const char *)arg, "-readorigin");
                if(return_value_strcasecmp$38 == 0)
                  cfg_readorigin = 1;

                else
                {
                  return_value_strcasecmp$37=strcasecmp((const char *)arg, "-noreplyaddr");
                  if(return_value_strcasecmp$37 == 0)
                    cfg_noreplyaddr = 1;

                  else
                  {
                    return_value_strcasecmp$36=strcasecmp((const char *)arg, "-smartquote");
                    if(return_value_strcasecmp$36 == 0)
                      cfg_smartquote = 1;

                    else
                    {
                      return_value_strcasecmp$35=strcasecmp((const char *)arg, "-noencode");
                      if(return_value_strcasecmp$35 == 0)
                        cfg_noencode = 1;

                      else
                      {
                        return_value_strcasecmp$34=strcasecmp((const char *)arg, "-notzutc");
                        if(return_value_strcasecmp$34 == 0)
                          cfg_notzutc = 1;

                        else
                        {
                          return_value_strcasecmp$31=strcasecmp((const char *)arg, "-p");
                          if(return_value_strcasecmp$31 == 0)
                            tmp_if_expr$33 = (_Bool)1;

                          else
                          {
                            return_value_strcasecmp$32=strcasecmp((const char *)arg, "-port");
                            tmp_if_expr$33 = return_value_strcasecmp$32 == 0 ? (_Bool)1 : (_Bool)0;
                          }
                          if(tmp_if_expr$33)
                          {
                            if(1 + c == argc)
                            {
                              printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                              return 0;
                            }

                            c = c + 1;
                            signed int return_value_atoi$1;
                            return_value_atoi$1=atoi(argv[(signed long int)c]);
                            cfg_port = (unsigned long int)return_value_atoi$1;
                          }

                          else
                          {
                            return_value_strcasecmp$28=strcasecmp((const char *)arg, "-m");
                            if(return_value_strcasecmp$28 == 0)
                              tmp_if_expr$30 = (_Bool)1;

                            else
                            {
                              return_value_strcasecmp$29=strcasecmp((const char *)arg, "-max");
                              tmp_if_expr$30 = return_value_strcasecmp$29 == 0 ? (_Bool)1 : (_Bool)0;
                            }
                            if(tmp_if_expr$30)
                            {
                              if(1 + c == argc)
                              {
                                printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                return 0;
                              }

                              c = c + 1;
                              signed int return_value_atoi$2;
                              return_value_atoi$2=atoi(argv[(signed long int)c]);
                              cfg_maxconn = (unsigned long int)return_value_atoi$2;
                            }

                            else
                            {
                              return_value_strcasecmp$27=strcasecmp((const char *)arg, "-def_flowed");
                              if(return_value_strcasecmp$27 == 0)
                              {
                                if(1 + c == argc)
                                {
                                  printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                  return 0;
                                }

                                signed int return_value_setboolonoff$3;
                                return_value_setboolonoff$3=setboolonoff((unsigned char *)argv[(signed long int)(c + 1)], &cfg_def_flowed);
                                if(return_value_setboolonoff$3 == 0)
                                {
                                  printf("Invalid setting %s for %s, must be on or off%s\n", argv[(signed long int)(c + 1)], argv[(signed long int)c], (const void *)src);
                                  return 0;
                                }

                                c = c + 1;
                              }

                              else
                              {
                                return_value_strcasecmp$26=strcasecmp((const char *)arg, "-def_showto");
                                if(return_value_strcasecmp$26 == 0)
                                {
                                  if(1 + c == argc)
                                  {
                                    printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                    return 0;
                                  }

                                  signed int return_value_setboolonoff$4;
                                  return_value_setboolonoff$4=setboolonoff((unsigned char *)argv[(signed long int)(c + 1)], &cfg_def_showto);
                                  if(return_value_setboolonoff$4 == 0)
                                  {
                                    printf("Invalid setting %s for %s, must be on or off%s\n", argv[(signed long int)(c + 1)], argv[(signed long int)c], (const void *)src);
                                    return 0;
                                  }

                                  c = c + 1;
                                }

                                else
                                {
                                  return_value_strcasecmp$25=strcasecmp((const char *)arg, "-origin");
                                  if(return_value_strcasecmp$25 == 0)
                                  {
                                    if(1 + c == argc)
                                    {
                                      printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                      return 0;
                                    }

                                    c = c + 1;
                                    cfg_origin = (unsigned char *)argv[(signed long int)c];
                                  }

                                  else
                                  {
                                    return_value_strcasecmp$24=strcasecmp((const char *)arg, "-guestsuffix");
                                    if(return_value_strcasecmp$24 == 0)
                                    {
                                      if(1 + c == argc)
                                      {
                                        printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                        return 0;
                                      }

                                      c = c + 1;
                                      cfg_guestsuffix = (unsigned char *)argv[(signed long int)c];
                                    }

                                    else
                                    {
                                      return_value_strcasecmp$23=strcasecmp((const char *)arg, "-echomailjam");
                                      if(return_value_strcasecmp$23 == 0)
                                      {
                                        if(1 + c == argc)
                                        {
                                          printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                          return 0;
                                        }

                                        c = c + 1;
                                        cfg_echomailjam = (unsigned char *)argv[(signed long int)c];
                                      }

                                      else
                                      {
                                        return_value_strcasecmp$20=strcasecmp((const char *)arg, "-g");
                                        if(return_value_strcasecmp$20 == 0)
                                          tmp_if_expr$22 = (_Bool)1;

                                        else
                                        {
                                          return_value_strcasecmp$21=strcasecmp((const char *)arg, "-groups");
                                          tmp_if_expr$22 = return_value_strcasecmp$21 == 0 ? (_Bool)1 : (_Bool)0;
                                        }
                                        if(tmp_if_expr$22)
                                        {
                                          if(1 + c == argc)
                                          {
                                            printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                            return 0;
                                          }

                                          c = c + 1;
                                          cfg_groupsfile = (unsigned char *)argv[(signed long int)c];
                                        }

                                        else
                                        {
                                          return_value_strcasecmp$17=strcasecmp((const char *)arg, "-a");
                                          if(return_value_strcasecmp$17 == 0)
                                            tmp_if_expr$19 = (_Bool)1;

                                          else
                                          {
                                            return_value_strcasecmp$18=strcasecmp((const char *)arg, "-allow");
                                            tmp_if_expr$19 = return_value_strcasecmp$18 == 0 ? (_Bool)1 : (_Bool)0;
                                          }
                                          if(tmp_if_expr$19)
                                          {
                                            if(1 + c == argc)
                                            {
                                              printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                              return 0;
                                            }

                                            c = c + 1;
                                            cfg_allowfile = (unsigned char *)argv[(signed long int)c];
                                          }

                                          else
                                          {
                                            return_value_strcasecmp$14=strcasecmp((const char *)arg, "-u");
                                            if(return_value_strcasecmp$14 == 0)
                                              tmp_if_expr$16 = (_Bool)1;

                                            else
                                            {
                                              return_value_strcasecmp$15=strcasecmp((const char *)arg, "-users");
                                              tmp_if_expr$16 = return_value_strcasecmp$15 == 0 ? (_Bool)1 : (_Bool)0;
                                            }
                                            if(tmp_if_expr$16)
                                            {
                                              if(1 + c == argc)
                                              {
                                                printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                                return 0;
                                              }

                                              c = c + 1;
                                              cfg_usersfile = (unsigned char *)argv[(signed long int)c];
                                            }

                                            else
                                            {
                                              return_value_strcasecmp$11=strcasecmp((const char *)arg, "-x");
                                              if(return_value_strcasecmp$11 == 0)
                                                tmp_if_expr$13 = (_Bool)1;

                                              else
                                              {
                                                return_value_strcasecmp$12=strcasecmp((const char *)arg, "-xlat");
                                                tmp_if_expr$13 = return_value_strcasecmp$12 == 0 ? (_Bool)1 : (_Bool)0;
                                              }
                                              if(tmp_if_expr$13)
                                              {
                                                if(1 + c == argc)
                                                {
                                                  printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                                  return 0;
                                                }

                                                c = c + 1;
                                                cfg_xlatfile = (unsigned char *)argv[(signed long int)c];
                                              }

                                              else
                                              {
                                                return_value_strcasecmp$8=strcasecmp((const char *)arg, "-l");
                                                if(return_value_strcasecmp$8 == 0)
                                                  tmp_if_expr$10 = (_Bool)1;

                                                else
                                                {
                                                  return_value_strcasecmp$9=strcasecmp((const char *)arg, "-logfile");
                                                  tmp_if_expr$10 = return_value_strcasecmp$9 == 0 ? (_Bool)1 : (_Bool)0;
                                                }
                                                if(tmp_if_expr$10)
                                                {
                                                  if(1 + c == argc)
                                                  {
                                                    printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                                    return 0;
                                                  }

                                                  c = c + 1;
                                                  cfg_logfile = (unsigned char *)argv[(signed long int)c];
                                                }

                                                else
                                                {
                                                  return_value_strcasecmp$7=strcasecmp((const char *)arg, "-config");
                                                  if(return_value_strcasecmp$7 == 0)
                                                  {
                                                    if(!(filename == ((unsigned char *)NULL)))
                                                    {
                                                      printf("%s may only be used on commandline%s\n", argv[(signed long int)c], (const void *)src);
                                                      return 0;
                                                    }

                                                    else
                                                      if(1 + c == argc)
                                                      {
                                                        printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                                        return 0;
                                                      }

                                                    c = c + 1;
                                                    signed int return_value_readargs$5;
                                                    return_value_readargs$5=readargs((unsigned char *)argv[(signed long int)c]);
                                                    if(return_value_readargs$5 == 0)
                                                      return 0;

                                                  }

                                                  else
                                                  {
                                                    return_value_strcasecmp$6=strcasecmp((const char *)arg, "-create");
                                                    if(return_value_strcasecmp$6 == 0)
                                                    {
                                                      if(!(filename == ((unsigned char *)NULL)))
                                                      {
                                                        printf("%s may only be used on commandline%s\n", argv[(signed long int)c], (const void *)src);
                                                        return 0;
                                                      }

                                                      else
                                                        if(1 + c == argc)
                                                        {
                                                          printf("Missing argument for %s%s\n", argv[(signed long int)c], (const void *)src);
                                                          return 0;
                                                        }

                                                      c = c + 1;
                                                      createconfig((unsigned char *)argv[(signed long int)c]);
                                                      return 0;
                                                    }

                                                    else
                                                    {
                                                      printf("Unknown switch %s%s\n", argv[(signed long int)c], (const void *)src);
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
        }
      }
    }
  }
  return 1;
}

// parseinput
// file nntpserv.c line 76
unsigned char * parseinput(struct var *var)
{
  signed long int s;
  for( ; (signed int)var->input[(signed long int)var->inputpos] == 32; var->inputpos = var->inputpos + 1ul)
    ;
  s = (signed long int)var->inputpos;
  unsigned long int tmp_post$1;
  if((signed int)var->input[(signed long int)var->inputpos] == 0)
    return (unsigned char *)(void *)0;

  else
  {
    for( ; !((signed int)var->input[(signed long int)var->inputpos] == 32); var->inputpos = var->inputpos + 1ul)
      if((signed int)var->input[(signed long int)var->inputpos] == 0)
        break;

    if((signed int)var->input[(signed long int)var->inputpos] == 32)
    {
      tmp_post$1 = var->inputpos;
      var->inputpos = var->inputpos + 1ul;
      var->input[(signed long int)tmp_post$1] = (unsigned char)0;
    }

    return &var->input[s];
  }
}

// readargs
// file main.c line 255
signed int readargs(unsigned char *file)
{
  struct _IO_FILE *fp;
  unsigned long int line;
  unsigned long int firstarg;
  unsigned long int newargs;
  unsigned long int pos;
  unsigned char s[1000l];
  unsigned char w[200l];
  fp=fopen((const char *)file, "r");
  char *return_value_fgets$1;
  signed int return_value_getcfgword$2;
  signed int tmp_post$3;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    printf("Failed to open %s\n", file);
    return 0;
  }

  else
  {
    line = (unsigned long int)0;
    do
    {
      return_value_fgets$1=fgets((char *)s, 999, fp);
      if(return_value_fgets$1 == ((char *)NULL))
        break;

      line = line + 1ul;
      strip(s);
      if(!((signed int)s[0l] == 35))
      {
        firstarg = (unsigned long int)fileargc;
        newargs = (unsigned long int)0;
        pos = (unsigned long int)0;
        do
        {
          return_value_getcfgword$2=getcfgword(s, &pos, w, (unsigned long int)200);
          if(return_value_getcfgword$2 == 0)
            break;

          if(fileargc == 100)
          {
            printf("Too many options in %s, max is %d\n", file, 100);
            fclose(fp);
            return 0;
          }

          tmp_post$3 = fileargc;
          fileargc = fileargc + 1;
          fileargv[(signed long int)tmp_post$3]=strdup((const char *)w);
          if(fileargv[(signed long int)tmp_post$3] == ((char *)NULL))
          {
            fclose(fp);
            return 0;
          }

          newargs = newargs + 1ul;
        }
        while((_Bool)1);
        if(!(newargs == 0ul))
        {
          signed int return_value_parseargs$4;
          return_value_parseargs$4=parseargs((signed int)newargs, &fileargv[(signed long int)firstarg], file, line);
          if(return_value_parseargs$4 == 0)
            return 0;

        }

      }

    }
    while((_Bool)1);
    fclose(fp);
    return 1;
  }
}

// readchs
// file xlat.c line 115
struct xlattab * readchs(struct var *var, unsigned char *filename)
{
  struct _IO_FILE *fp;
  unsigned char buf[100l];
  signed int level;
  signed int c;
  signed int basenum;
  signed int readnum;
  unsigned long int pos;
  struct xlattab *newxlattab;
  struct xlattab *lastxlattab;
  signed int extended;
  unsigned char buf1[20l];
  unsigned char buf2[20l];
  unsigned char buf3[20l];
  unsigned char buf4[20l];
  unsigned char buf5[20l];
  unsigned char ch1;
  unsigned char ch2;
  unsigned char ch3;
  unsigned char ch4;
  signed int res1;
  signed int res2;
  signed int res3;
  signed int res4;
  signed int res5;
  unsigned char table[1024l];
  fp=fopen((const char *)filename, "r");
  char *return_value_strchr$8;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    os_logwrite((unsigned char *)"(%s) Warning: Could not open charset file %s, translation disabled", (const void *)var->clientid, filename);
    return (struct xlattab *)(void *)0;
  }

  else
  {
    signed int return_value_chsgetline$1;
    return_value_chsgetline$1=chsgetline(fp, buf, (unsigned long int)100);
    if(return_value_chsgetline$1 == 0)
    {
      os_logwrite((unsigned char *)"(%s) Warning: Unexpected EOF in %s when reading ID number, translation disabled", (const void *)var->clientid, filename);
      fclose(fp);
      return (struct xlattab *)(void *)0;
    }

    else
    {
      signed int return_value_atoi$2;
      return_value_atoi$2=atoi((const char *)buf);
      if(return_value_atoi$2 >= 65536)
        extended = 1;

      else
        extended = 0;
      signed int return_value_chsgetline$3;
      return_value_chsgetline$3=chsgetline(fp, buf, (unsigned long int)100);
      if(return_value_chsgetline$3 == 0)
      {
        os_logwrite((unsigned char *)"(%s) Warning: Unexpected EOF in %s when reading version number, translation disabled", (const void *)var->clientid, filename);
        fclose(fp);
        return (struct xlattab *)(void *)0;
      }

      else
      {
        signed int return_value_chsgetline$4;
        return_value_chsgetline$4=chsgetline(fp, buf, (unsigned long int)100);
        if(return_value_chsgetline$4 == 0)
        {
          os_logwrite((unsigned char *)"(%s) Warning: Unexpected EOF in %s when reading level number, translation disabled", (const void *)var->clientid, filename);
          fclose(fp);
          return (struct xlattab *)(void *)0;
        }

        else
        {
          level=atoi((const char *)buf);
          signed int return_value_chsgetline$5;
          return_value_chsgetline$5=chsgetline(fp, buf, (unsigned long int)100);
          if(return_value_chsgetline$5 == 0)
          {
            os_logwrite((unsigned char *)"(%s) Warning: Unexpected EOF in %s when reading source charset, translation disabled", (const void *)var->clientid, filename);
            fclose(fp);
            return (struct xlattab *)(void *)0;
          }

          else
          {
            signed int return_value_chsgetline$6;
            return_value_chsgetline$6=chsgetline(fp, buf, (unsigned long int)100);
            if(return_value_chsgetline$6 == 0)
            {
              os_logwrite((unsigned char *)"(%s) Warning: Unexpected EOF in %s when reading destination charset, translation disabled", (const void *)var->clientid, filename);
              fclose(fp);
              return (struct xlattab *)(void *)0;
            }

            else
              if(!(level == 1) && !(level == 2))
              {
                os_logwrite((unsigned char *)"(%s) Warning: %s is for level %d, translation disabled (only 1 and 2 are supported)", (const void *)var->clientid, filename);
                fclose(fp);
                return (struct xlattab *)(void *)0;
              }

              else
              {
                c = 0;
                for( ; !(c >= 256); c = c + 1)
                {
                  table[(signed long int)(c * 4)] = (unsigned char)c;
                  table[(signed long int)(c * 4 + 1)] = (unsigned char)0;
                  table[(signed long int)(c * 4 + 2)] = (unsigned char)0;
                  table[(signed long int)(c * 4 + 3)] = (unsigned char)0;
                }
                if(!(extended == 0))
                {
                  basenum = 0;
                  readnum = 256;
                }

                else
                {
                  readnum = 128;
                  if(level == 1)
                    basenum = 0;

                  if(level == 2)
                    basenum = 128;

                }
                c = 0;
                for( ; !(c >= readnum); c = c + 1)
                {
                  signed int return_value_chsgetline$7;
                  return_value_chsgetline$7=chsgetline(fp, buf, (unsigned long int)100);
                  if(return_value_chsgetline$7 == 0)
                  {
                    os_logwrite((unsigned char *)"(%s) Warning: Unexpected EOF in %s when reading translation for %d, translation disabled", (const void *)var->clientid, filename, basenum + c);
                    fclose(fp);
                    return (struct xlattab *)(void *)0;
                  }

                  char *return_value_strchr$9;
                  return_value_strchr$9=strchr((const char *)buf, 59);
                  if(!(return_value_strchr$9 == ((char *)NULL)))
                  {
                    return_value_strchr$8=strchr((const char *)buf, 59);
                    *return_value_strchr$8 = (char)0;
                  }

                  strip(buf);
                  pos = (unsigned long int)0;
                  res1=chsgetword(buf, &pos, buf1, (unsigned long int)20);
                  res2=chsgetword(buf, &pos, buf2, (unsigned long int)20);
                  res3=chsgetword(buf, &pos, buf3, (unsigned long int)20);
                  res4=chsgetword(buf, &pos, buf4, (unsigned long int)20);
                  res5=chsgetword(buf, &pos, buf5, (unsigned long int)20);
                  ch1 = (unsigned char)0;
                  ch2 = (unsigned char)0;
                  ch3 = (unsigned char)0;
                  ch4 = (unsigned char)0;
                  if(!(res1 == 0))
                    ch1=chsgetbyte(var, filename, buf1);

                  if(!(res2 == 0))
                    ch2=chsgetbyte(var, filename, buf2);

                  if(!(res3 == 0))
                    ch3=chsgetbyte(var, filename, buf3);

                  if(!(res4 == 0))
                    ch4=chsgetbyte(var, filename, buf4);

                  if(!(res5 == 0))
                    os_logwrite((unsigned char *)"(%s) Warning: %s has translations longer than four chars (char %d)", (const void *)var->clientid, filename, c);

                  table[(signed long int)((basenum + c) * 4)] = ch1;
                  table[(signed long int)((basenum + c) * 4 + 1)] = ch2;
                  table[(signed long int)((basenum + c) * 4 + 2)] = ch3;
                  table[(signed long int)((basenum + c) * 4 + 3)] = ch4;
                }
                fclose(fp);
                void *return_value_malloc$10;
                return_value_malloc$10=malloc(sizeof(struct xlattab) /*1136ul*/ );
                newxlattab = (struct xlattab *)return_value_malloc$10;
                if(newxlattab == ((struct xlattab *)NULL))
                  return ((struct xlattab *)NULL);

                else
                {
                  lastxlattab = var->firstxlattab;
                  if(!(lastxlattab == ((struct xlattab *)NULL)))
                    for( ; !(lastxlattab->next == ((struct xlattab *)NULL)); lastxlattab = lastxlattab->next)
                      ;

                  newxlattab->next = (struct xlattab *)(void *)0;
                  if(var->firstxlattab == ((struct xlattab *)NULL))
                    var->firstxlattab = newxlattab;

                  if(!(lastxlattab == ((struct xlattab *)NULL)))
                    lastxlattab->next = newxlattab;

                  mystrncpy(newxlattab->filename, filename, (signed long int)100);
                  memcpy((void *)newxlattab->table, (const void *)table, sizeof(unsigned char [1024l]) /*1024ul*/ );
                  return newxlattab;
                }
              }
          }
        }
      }
    }
  }
}

// readgroups
// file groups.h line 14
signed int readgroups(struct var *var)
{
  struct _IO_FILE *fp;
  unsigned char s[1000l];
  unsigned char tagname[100l];
  unsigned char group[2l];
  unsigned char aka[40l];
  unsigned char jampath[100l];
  unsigned char option[100l];
  signed int res1;
  signed int res2;
  signed int res3;
  signed int res4;
  unsigned long int pos;
  unsigned long int line;
  struct group *newgroup;
  struct group *lastgroup;
  fp=fopen((const char *)cfg_groupsfile, "r");
  char *return_value_fgets$1;
  signed int return_value_getcfgword$3;
  _Bool tmp_if_expr$4;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    os_logwrite((unsigned char *)"(%s) Failed to read group configuration file %s", (const void *)var->clientid, cfg_groupsfile);
    return 0;
  }

  else
  {
    lastgroup = (struct group *)(void *)0;
    var->firstgroup = (struct group *)(void *)0;
    line = (unsigned long int)0;
    do
    {
      return_value_fgets$1=fgets((char *)s, 999, fp);
      if(return_value_fgets$1 == ((char *)NULL))
        break;

      line = line + 1ul;
      strip(s);
      pos = (unsigned long int)0;
      if(!((signed int)s[0l] == 0))
      {
        if(!((signed int)s[0l] == 35))
        {
          res1=getcfgword(s, &pos, tagname, (unsigned long int)100);
          res2=getcfgword(s, &pos, group, (unsigned long int)2);
          res3=getcfgword(s, &pos, aka, (unsigned long int)40);
          res4=getcfgword(s, &pos, jampath, (unsigned long int)100);
          if(!(res1 == 0) && !(res2 == 0) && !(res3 == 0) && !(res4 == 0))
          {
            void *return_value_malloc$2;
            return_value_malloc$2=malloc(sizeof(struct group) /*288ul*/ );
            newgroup = (struct group *)return_value_malloc$2;
            if(newgroup == ((struct group *)NULL))
            {
              fclose(fp);
              return 0;
            }

            newgroup->next = (struct group *)(void *)0;
            if(var->firstgroup == ((struct group *)NULL))
              var->firstgroup = newgroup;

            if(!(lastgroup == ((struct group *)NULL)))
              lastgroup->next = newgroup;

            lastgroup = newgroup;
            newgroup->netmail = 0;
            newgroup->local = 0;
            if((signed int)tagname[0l] == 33)
            {
              newgroup->netmail = 1;
              strcpy((char *)newgroup->tagname, (const char *)&tagname[(signed long int)1]);
            }

            else
              if((signed int)tagname[0l] == 36)
              {
                newgroup->local = 1;
                strcpy((char *)newgroup->tagname, (const char *)&tagname[(signed long int)1]);
              }

              else
                strcpy((char *)newgroup->tagname, (const char *)tagname);
            newgroup->group = group[(signed long int)0];
            strcpy((char *)newgroup->aka, (const char *)aka);
            strcpy((char *)newgroup->jampath, (const char *)jampath);
            newgroup->nochrs = 0;
            newgroup->defaultchrs[(signed long int)0] = (unsigned char)0;
            do
            {
              return_value_getcfgword$3=getcfgword(s, &pos, option, (unsigned long int)100);
              if(return_value_getcfgword$3 == 0)
                break;

              signed int return_value_strcasecmp$5;
              return_value_strcasecmp$5=strcasecmp((const char *)option, "-nochrs");
              if(return_value_strcasecmp$5 == 0)
                newgroup->nochrs = 1;

              else
              {
                if(!((signed int)option[0l] == 45))
                  tmp_if_expr$4 = (signed int)newgroup->defaultchrs[(signed long int)0] == 0 ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$4 = (_Bool)0;
                if(tmp_if_expr$4)
                  mystrncpy(newgroup->defaultchrs, option, (signed long int)20);

                else
                  os_logwrite((unsigned char *)"(%s) Warning: Unknown option %s on line %lu in %s", (const void *)var->clientid, (const void *)option, line, cfg_groupsfile);
              }
            }
            while((_Bool)1);
          }

          else
            os_logwrite((unsigned char *)"(%s) Syntax error on line %lu in %s, skipping line", (const void *)var->clientid, line, cfg_groupsfile);
        }

      }

    }
    while((_Bool)1);
    fclose(fp);
    if(var->firstgroup == ((struct group *)NULL))
    {
      os_logwrite((unsigned char *)"(%s) No groups configured", (const void *)var->clientid);
      return 0;
    }

    else
      return 1;
  }
}

// readoriginaddr
// file nntpserv.c line 256
void readoriginaddr(struct anonymous$7 *mb, unsigned long int offset, unsigned long int len, unsigned char *addr)
{
  unsigned long int d;
  unsigned long int textpos;
  unsigned char originbuf[100l];
  unsigned char *text;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(len + (unsigned long int)1);
  text = (unsigned char *)return_value_malloc$1;
  signed int return_value_strncmp$3;
  char *return_value_strchr$4;
  if(!(text == ((unsigned char *)NULL)))
  {
    signed int return_value_JAM_ReadMsgText$2;
    return_value_JAM_ReadMsgText$2=JAM_ReadMsgText(mb, offset, len, text);
    if(return_value_JAM_ReadMsgText$2 == 0)
    {
      text[(signed long int)len] = (unsigned char)0;
      textpos = (unsigned long int)0;
      originbuf[(signed long int)0] = (unsigned char)0;
      while(!(text[(signed long int)textpos] == 0))
      {
        d = textpos;
        for( ; !((signed int)text[(signed long int)d] == 13); d = d + 1ul)
          if((signed int)text[(signed long int)d] == 0)
            break;

        if((signed int)text[(signed long int)d] == 13)
          d = d + 1ul;

        if(d + -textpos >= 12ul)
        {
          return_value_strncmp$3=strncmp((const char *)&text[(signed long int)textpos], " * Origin: ", (unsigned long int)11);
          if(return_value_strncmp$3 == 0)
            mystrncpy(originbuf, &text[(signed long int)textpos], (signed long int)(d - textpos < (unsigned long int)100 ? d - textpos : (unsigned long int)100));

        }

        textpos = d;
      }
      if(!(originbuf[0l] == 0))
      {
        d=strlen((const char *)originbuf);
        for( ; d >= 1ul; d = d - 1ul)
          if((signed int)originbuf[(signed long int)d] == 40)
            break;

        if((signed int)originbuf[(signed long int)d] == 40)
        {
          strcpy((char *)addr, (const char *)&originbuf[(signed long int)(d + (unsigned long int)1)]);
          char *return_value_strchr$5;
          return_value_strchr$5=strchr((const char *)addr, 41);
          if(!(return_value_strchr$5 == ((char *)NULL)))
          {
            return_value_strchr$4=strchr((const char *)addr, 41);
            *return_value_strchr$4 = (char)0;
          }

        }

      }

      free((void *)text);
    }

  }

}

// readxlat
// file xlat.h line 25
signed int readxlat(struct var *var)
{
  struct _IO_FILE *fp;
  unsigned char s[1000l];
  unsigned char type[20l];
  unsigned char fromchrs[100l];
  unsigned char tochrs[100l];
  unsigned char option[100l];
  unsigned char basename[100l];
  unsigned char fullfilename[250l];
  signed int res1;
  signed int res2;
  signed int res3;
  unsigned long int pos;
  unsigned long int line;
  struct xlat *newxlat;
  struct xlat *lastreadxlat;
  struct xlat *lastpostxlat;
  struct xlatalias *newxlatalias;
  struct xlatalias *lastreadalias;
  struct xlatalias *lastpostalias;
  struct xlattab *xlattab;
  fp=fopen((const char *)cfg_xlatfile, "r");
  char *return_value_fgets$1;
  signed int return_value_strcasecmp$19;
  signed int return_value_strcasecmp$18;
  signed int return_value_strcasecmp$17;
  signed int return_value_strcasecmp$16;
  signed int return_value_strcasecmp$13;
  _Bool tmp_if_expr$15;
  signed int return_value_strcasecmp$14;
  signed int return_value_getcfgword$6;
  _Bool tmp_if_expr$11;
  unsigned long int return_value_strlen$7;
  signed int return_value_strcmp$10;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    os_logwrite((unsigned char *)"(%s) Can't read xlat configuration file %s", (const void *)var->clientid, cfg_xlatfile);
    return 0;
  }

  else
  {
    lastreadxlat = (struct xlat *)(void *)0;
    lastpostxlat = (struct xlat *)(void *)0;
    lastreadalias = (struct xlatalias *)(void *)0;
    lastpostalias = (struct xlatalias *)(void *)0;
    var->firstreadxlat = (struct xlat *)(void *)0;
    var->firstpostxlat = (struct xlat *)(void *)0;
    var->firstreadalias = (struct xlatalias *)(void *)0;
    var->firstpostalias = (struct xlatalias *)(void *)0;
    var->firstxlattab = (struct xlattab *)(void *)0;
    basename[(signed long int)0] = (unsigned char)0;
    line = (unsigned long int)0;
    do
    {
      return_value_fgets$1=fgets((char *)s, 999, fp);
      if(return_value_fgets$1 == ((char *)NULL))
        break;

      line = line + 1ul;
      strip(s);
      pos = (unsigned long int)0;
      if(!((signed int)s[0l] == 0))
      {
        if(!((signed int)s[0l] == 35))
        {
          res1=getcfgword(s, &pos, type, (unsigned long int)20);
          res2=getcfgword(s, &pos, fromchrs, (unsigned long int)100);
          res3=getcfgword(s, &pos, tochrs, (unsigned long int)100);
          signed int return_value_strcasecmp$20;
          return_value_strcasecmp$20=strcasecmp((const char *)type, "chsdir");
          if(return_value_strcasecmp$20 == 0 && !(res2 == 0))
            mystrncpy(basename, fromchrs, (signed long int)100);

          else
          {
            return_value_strcasecmp$19=strcasecmp((const char *)type, "defaultpost");
            if(return_value_strcasecmp$19 == 0 && !(res2 == 0))
              mystrncpy(var->defaultpostchrs, fromchrs, (signed long int)20);

            else
            {
              return_value_strcasecmp$18=strcasecmp((const char *)type, "defaultread");
              if(return_value_strcasecmp$18 == 0 && !(res2 == 0))
                mystrncpy(var->defaultreadchrs, fromchrs, (signed long int)20);

              else
              {
                return_value_strcasecmp$17=strcasecmp((const char *)type, "readalias");
                if(return_value_strcasecmp$17 == 0 && !(res2 == 0) && !(res3 == 0))
                {
                  void *return_value_malloc$2;
                  return_value_malloc$2=malloc(sizeof(struct xlatalias) /*48ul*/ );
                  newxlatalias = (struct xlatalias *)return_value_malloc$2;
                  if(newxlatalias == ((struct xlatalias *)NULL))
                  {
                    fclose(fp);
                    return 0;
                  }

                  newxlatalias->next = (struct xlatalias *)(void *)0;
                  if(var->firstreadalias == ((struct xlatalias *)NULL))
                    var->firstreadalias = newxlatalias;

                  if(!(lastreadalias == ((struct xlatalias *)NULL)))
                    lastreadalias->next = newxlatalias;

                  lastreadalias = newxlatalias;
                  mystrncpy(newxlatalias->pattern, fromchrs, (signed long int)20);
                  mystrncpy(newxlatalias->replace, tochrs, (signed long int)20);
                }

                else
                {
                  return_value_strcasecmp$16=strcasecmp((const char *)type, "postalias");
                  if(return_value_strcasecmp$16 == 0 && !(res2 == 0) && !(res3 == 0))
                  {
                    void *return_value_malloc$3;
                    return_value_malloc$3=malloc(sizeof(struct xlatalias) /*48ul*/ );
                    newxlatalias = (struct xlatalias *)return_value_malloc$3;
                    if(newxlatalias == ((struct xlatalias *)NULL))
                    {
                      fclose(fp);
                      return 0;
                    }

                    newxlatalias->next = (struct xlatalias *)(void *)0;
                    if(var->firstpostalias == ((struct xlatalias *)NULL))
                      var->firstpostalias = newxlatalias;

                    if(!(lastpostalias == ((struct xlatalias *)NULL)))
                      lastpostalias->next = newxlatalias;

                    lastpostalias = newxlatalias;
                    mystrncpy(newxlatalias->pattern, fromchrs, (signed long int)20);
                    mystrncpy(newxlatalias->replace, tochrs, (signed long int)20);
                  }

                  else
                  {
                    return_value_strcasecmp$13=strcasecmp((const char *)type, "post");
                    if(return_value_strcasecmp$13 == 0)
                      tmp_if_expr$15 = (_Bool)1;

                    else
                    {
                      return_value_strcasecmp$14=strcasecmp((const char *)type, "read");
                      tmp_if_expr$15 = return_value_strcasecmp$14 == 0 ? (_Bool)1 : (_Bool)0;
                    }
                    if(tmp_if_expr$15)
                    {
                      void *return_value_malloc$4;
                      return_value_malloc$4=malloc(sizeof(struct xlat) /*64ul*/ );
                      newxlat = (struct xlat *)return_value_malloc$4;
                      if(newxlat == ((struct xlat *)NULL))
                      {
                        fclose(fp);
                        return 0;
                      }

                      newxlat->next = (struct xlat *)(void *)0;
                      signed int return_value_strcasecmp$5;
                      return_value_strcasecmp$5=strcasecmp((const char *)type, "post");
                      if(return_value_strcasecmp$5 == 0)
                      {
                        if(var->firstpostxlat == ((struct xlat *)NULL))
                          var->firstpostxlat = newxlat;

                        if(!(lastpostxlat == ((struct xlat *)NULL)))
                          lastpostxlat->next = newxlat;

                        lastpostxlat = newxlat;
                      }

                      else
                      {
                        if(var->firstreadxlat == ((struct xlat *)NULL))
                          var->firstreadxlat = newxlat;

                        if(!(lastreadxlat == ((struct xlat *)NULL)))
                          lastreadxlat->next = newxlat;

                        lastreadxlat = newxlat;
                      }
                      mystrncpy(newxlat->fromchrs, fromchrs, (signed long int)20);
                      mystrncpy(newxlat->tochrs, tochrs, (signed long int)20);
                      newxlat->xlattab = (struct xlattab *)(void *)0;
                      newxlat->keepsoftcr = 0;
                      do
                      {
                        return_value_getcfgword$6=getcfgword(s, &pos, option, (unsigned long int)100);
                        if(return_value_getcfgword$6 == 0)
                          break;

                        signed int return_value_strcasecmp$12;
                        return_value_strcasecmp$12=strcasecmp((const char *)option, "-keepsoftcr");
                        if(return_value_strcasecmp$12 == 0)
                          newxlat->keepsoftcr = 1;

                        else
                        {
                          if(!((signed int)option[0l] == 45))
                            tmp_if_expr$11 = !(newxlat->xlattab != ((struct xlattab *)NULL)) ? (_Bool)1 : (_Bool)0;

                          else
                            tmp_if_expr$11 = (_Bool)0;
                          if(tmp_if_expr$11)
                          {
                            strcpy((char *)fullfilename, (const char *)basename);
                            unsigned long int return_value_strlen$9;
                            return_value_strlen$9=strlen((const char *)fullfilename);
                            if(!(return_value_strlen$9 == 0ul))
                            {
                              unsigned long int return_value_strlen$8;
                              return_value_strlen$8=strlen((const char *)fullfilename);
                              if(!((signed int)fullfilename[-1l + (signed long int)return_value_strlen$8] == 47))
                              {
                                return_value_strlen$7=strlen((const char *)fullfilename);
                                if(!((signed int)fullfilename[-1l + (signed long int)return_value_strlen$7] == 92))
                                  strcat((char *)fullfilename, "/");

                              }

                            }

                            strcat((char *)fullfilename, (const char *)option);
                            xlattab = var->firstxlattab;
                            for( ; !(xlattab == ((struct xlattab *)NULL)); xlattab = xlattab->next)
                            {
                              return_value_strcmp$10=strcmp((const char *)xlattab->filename, (const char *)fullfilename);
                              if(return_value_strcmp$10 == 0)
                                break;

                            }
                            if(!(xlattab == ((struct xlattab *)NULL)))
                              newxlat->xlattab = xlattab;

                            else
                              newxlat->xlattab=readchs(var, fullfilename);
                          }

                          else
                            os_logwrite((unsigned char *)"(%s) Warning: Unknown option %s on line %lu in %s", (const void *)var->clientid, (const void *)option, line, cfg_xlatfile);
                        }
                      }
                      while((_Bool)1);
                    }

                    else
                      os_logwrite((unsigned char *)"(%s) Syntax error on line %lu in %s, skipping line", (const void *)var->clientid, line, cfg_xlatfile);
                  }
                }
              }
            }
          }
        }

      }

    }
    while((_Bool)1);
    fclose(fp);
    if(var->firstpostxlat == ((struct xlat *)NULL))
    {
      os_logwrite((unsigned char *)"(%s) No charsets for posting configured", (const void *)var->clientid);
      return 0;
    }

    else
      return 1;
  }
}

// sendtextblock
// file nntpserv.c line 542
void sendtextblock(struct var *var, unsigned char *text, struct xlat *xlat)
{
  signed long int c;
  signed long int d;
  signed long int textpos;
  signed long int lastspace;
  unsigned char buf[1000l];
  unsigned char buf2[1000l];
  unsigned char *xlatres;
  signed int wrapped;
  textpos = (signed long int)0;
  signed int return_value_get_server_quit$1;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  signed int return_value_strcmp$7;
  _Bool tmp_if_expr$6;
  signed int return_value_strncmp$5;
  _Bool tmp_if_expr$9;
  while(!((signed int)text[textpos] == 0))
  {
    if(!(var->disconnect == 0))
      break;

    return_value_get_server_quit$1=get_server_quit();
    if(!(return_value_get_server_quit$1 == 0))
      break;

    lastspace = (signed long int)0;
    c = (signed long int)0;
    wrapped = 0;
    for( ; !(c >= 73l); c = c + 1l)
    {
      if((signed int)text[c + textpos] == 0)
        break;

      if((signed int)text[c + textpos] == 13)
        break;

      if((signed int)text[c + textpos] == 32)
        lastspace = c;

    }
    if(!((signed int)text[c + textpos] == 13))
    {
      if(!((signed int)text[c + textpos] == 0))
      {
        d = c + (signed long int)1;
        for( ; !((signed int)text[d + textpos] == 0); d = d + 1l)
        {
          if((signed int)text[d + textpos] == 13)
            break;

          if(d >= 79l)
            break;

        }
        if((signed int)text[d + textpos] == 13)
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = (signed int)text[textpos + d] == 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$2)
          c = d;

      }

    }

    if((signed int)text[c + textpos] == 13)
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = (signed int)text[textpos + c] == 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
    {
      copyline(buf, &text[textpos], c);
      if((signed int)text[c + textpos] == 13)
        c = c + 1l;

      textpos = textpos + c;
    }

    else
      if(!(lastspace == 0l))
      {
        copyline(buf, &text[textpos], lastspace);
        textpos = textpos + lastspace + (signed long int)1;
        wrapped = 1;
      }

      else
      {
        for( ; !((signed int)text[c + textpos] == 0); c = c + 1l)
        {
          if((signed int)text[c + textpos] == 13)
            break;

          if((signed int)text[c + textpos] == 32)
            break;

          if(c >= 997l)
            break;

        }
        copyline(buf, &text[textpos], c);
        if((signed int)text[c + textpos] == 32)
          wrapped = 1;

        if((signed int)text[c + textpos] == 32)
          tmp_if_expr$3 = (_Bool)1;

        else
          tmp_if_expr$3 = (signed int)text[textpos + c] == 13 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$3)
          c = c + 1l;

        textpos = textpos + c;
      }
    if(!(var->opt_flowed == 0))
    {
      return_value_strcmp$7=strcmp((const char *)buf, "-- ");
      if(!(return_value_strcmp$7 == 0))
      {
        if(!(wrapped == 0))
          strcat((char *)buf, " ");

        else
          strip(buf);
        if((signed int)buf[0l] == 32)
          tmp_if_expr$6 = (_Bool)1;

        else
        {
          return_value_strncmp$5=strncmp((const char *)buf, "From ", (unsigned long int)5);
          tmp_if_expr$6 = return_value_strncmp$5 == 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$6)
        {
          strcpy((char *)buf2, (const char *)buf);
          strcpy((char *)buf, " ");
          strcat((char *)buf, (const char *)buf2);
        }

      }

    }

    signed int return_value_strcasecmp$8;
    return_value_strcasecmp$8=strcasecmp((const char *)buf, ".");
    if(return_value_strcasecmp$8 == 0)
      strcpy((char *)buf, "..");

    strcat((char *)buf, "\r\n");
    if(!(xlat == ((struct xlat *)NULL)))
      tmp_if_expr$9 = xlat->xlattab != ((struct xlattab *)NULL) ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$9 = (_Bool)0;
    if(tmp_if_expr$9)
    {
      xlatres=xlatstr(buf, xlat->xlattab);
      if(!(xlatres == ((unsigned char *)NULL)))
      {
        socksendtext(var, xlatres);
        free((void *)xlatres);
      }

    }

    else
      socksendtext(var, buf);
  }
}

// server
// file nntpserv.h line 84
void server(signed int s)
{
  unsigned char line[1000l];
  unsigned char lookup[200l];
  unsigned char *cmd;
  struct var var;
  struct hostent *hostent;
  struct sockaddr_in fromsa;
  signed int fromsa_len = (signed int)sizeof(struct sockaddr_in) /*16ul*/ ;
  os_getexclusive();
  server_openconnections = server_openconnections + 1;
  os_stopexclusive();
  var.disconnect = 0;
  var.currentgroup = (struct group *)(void *)0;
  var.currentarticle = (unsigned long int)0;
  var.openmb = (struct anonymous$7 *)(void *)0;
  var.opengroup = (struct group *)(void *)0;
  var.firstgroup = (struct group *)(void *)0;
  var.firstreadxlat = (struct xlat *)(void *)0;
  var.firstpostxlat = (struct xlat *)(void *)0;
  var.firstreadalias = (struct xlatalias *)(void *)0;
  var.firstpostalias = (struct xlatalias *)(void *)0;
  var.firstxlattab = (struct xlattab *)(void *)0;
  var.readgroups[(signed long int)0] = (unsigned char)0;
  var.postgroups[(signed long int)0] = (unsigned char)0;
  var.loginname[(signed long int)0] = (unsigned char)0;
  var.password[(signed long int)0] = (unsigned char)0;
  var.realnames[(signed long int)0] = (unsigned char)0;
  var.opt_flowed = cfg_def_flowed;
  var.opt_showto = cfg_def_showto;
  signed int return_value_getpeername$1;
  return_value_getpeername$1=getpeername(s, (struct sockaddr *)&fromsa, (unsigned int *)&fromsa_len);
  signed int return_value_get_server_quit$10;
  signed int return_value_sockreadline$11;
  signed int return_value_strcasecmp$27;
  signed int return_value_strcasecmp$26;
  signed int return_value_strcasecmp$25;
  signed int return_value_strcasecmp$24;
  signed int return_value_strcasecmp$23;
  signed int return_value_strcasecmp$22;
  signed int return_value_strcasecmp$21;
  signed int return_value_strcasecmp$20;
  signed int return_value_strcasecmp$19;
  signed int return_value_strcasecmp$18;
  signed int return_value_strcasecmp$17;
  signed int return_value_strcasecmp$16;
  signed int return_value_strcasecmp$15;
  signed int return_value_strcasecmp$14;
  signed int return_value_strcasecmp$13;
  signed int return_value_strcasecmp$12;
  if(return_value_getpeername$1 == -1)
  {
    os_showerror((unsigned char *)"getpeername() failed");
    shutdown(s, 2);
    close(s);
    os_getexclusive();
    server_openconnections = server_openconnections - 1;
    os_stopexclusive();
  }

  else
  {
    var.sio=allocsockio(s);
    if(var.sio == ((struct sockio *)NULL))
    {
      os_showerror((unsigned char *)"allocsockio() failed");
      shutdown(s, 2);
      close(s);
      os_getexclusive();
      server_openconnections = server_openconnections - 1;
      os_stopexclusive();
    }

    else
    {
      char *return_value_inet_ntoa$2;
      return_value_inet_ntoa$2=inet_ntoa(fromsa.sin_addr);
      unsigned short int return_value_ntohs$3;
      return_value_ntohs$3=ntohs(fromsa.sin_port);
      sprintf((char *)var.clientid, "%s:%u", return_value_inet_ntoa$2, return_value_ntohs$3);
      char *return_value_inet_ntoa$4;
      return_value_inet_ntoa$4=inet_ntoa(fromsa.sin_addr);
      mystrncpy(lookup, (unsigned char *)return_value_inet_ntoa$4, (signed long int)200);
      hostent=gethostbyaddr((const void *)(char *)&fromsa.sin_addr, (unsigned int)sizeof(struct in_addr) /*4ul*/ , 2);
      if(!(hostent == ((struct hostent *)NULL)))
        mystrncpy(lookup, (unsigned char *)hostent->h_name, (signed long int)200);

      os_logwrite((unsigned char *)"(%s) Connection established to %s", (const void *)var.clientid, (const void *)lookup);
      char *return_value_inet_ntoa$5;
      return_value_inet_ntoa$5=inet_ntoa(fromsa.sin_addr);
      signed int return_value_checkallow$6;
      return_value_checkallow$6=checkallow(&var, (unsigned char *)return_value_inet_ntoa$5);
      if(return_value_checkallow$6 == 0)
      {
        socksendtext(&var, (unsigned char *)"502 Access denied.\r\n");
        os_logwrite((unsigned char *)"(%s) Access denied (not in allow list)", (const void *)var.clientid);
        shutdown(s, 2);
        close(s);
        freesockio(var.sio);
        os_getexclusive();
        server_openconnections = server_openconnections - 1;
        os_stopexclusive();
      }

      else
      {
        signed int return_value_get_server_openconnections$7;
        return_value_get_server_openconnections$7=get_server_openconnections();
        if(!(cfg_maxconn >= (unsigned long int)return_value_get_server_openconnections$7))
        {
          os_logwrite((unsigned char *)"(%s) Access denied (server full)", (const void *)var.clientid);
          socksendtext(&var, (unsigned char *)"502 Maximum number of connections reached, please try again later\r\n");
          shutdown(s, 2);
          close(s);
          freesockio(var.sio);
          os_getexclusive();
          server_openconnections = server_openconnections - 1;
          os_stopexclusive();
        }

        else
        {
          signed int return_value_readgroups$8;
          return_value_readgroups$8=readgroups(&var);
          if(return_value_readgroups$8 == 0)
          {
            socksendtext(&var, (unsigned char *)"503 Failed to read group configuration file\r\n");
            shutdown(s, 2);
            close(s);
            freesockio(var.sio);
            os_getexclusive();
            server_openconnections = server_openconnections - 1;
            os_stopexclusive();
          }

          else
          {
            signed int return_value_readxlat$9;
            return_value_readxlat$9=readxlat(&var);
            if(return_value_readxlat$9 == 0)
            {
              socksendtext(&var, (unsigned char *)"503 Failed to read xlat configuration file\r\n");
              shutdown(s, 2);
              close(s);
              freesockio(var.sio);
              freegroups(&var);
              os_getexclusive();
              server_openconnections = server_openconnections - 1;
              os_stopexclusive();
            }

            else
            {
              socksendtext(&var, (unsigned char *)"200 Welcome to JamNNTPd/Linux 1.2 (posting may or may not be allowed, try your luck)\r\n");
              while(var.disconnect == 0)
              {
                return_value_get_server_quit$10=get_server_quit();
                if(!(return_value_get_server_quit$10 == 0))
                  break;

                return_value_sockreadline$11=sockreadline(&var, line, 1000);
                if(return_value_sockreadline$11 == 0)
                  break;

                strip(line);
                var.input = line;
                var.inputpos = (unsigned long int)0;
                if(!(line[0l] == 0))
                {
                  if(!(cfg_debug == 0))
                    printf("(%s) < %s\n", (const void *)var.clientid, (const void *)line);

                }

                cmd=parseinput(&var);
                if(!(cmd == ((unsigned char *)NULL)))
                {
                  signed int return_value_strcasecmp$28;
                  return_value_strcasecmp$28=strcasecmp((const char *)cmd, "ARTICLE");
                  if(return_value_strcasecmp$28 == 0)
                    command_abhs(&var, cmd);

                  else
                  {
                    return_value_strcasecmp$27=strcasecmp((const char *)cmd, "AUTHINFO");
                    if(return_value_strcasecmp$27 == 0)
                      command_authinfo(&var);

                    else
                    {
                      return_value_strcasecmp$26=strcasecmp((const char *)cmd, "BODY");
                      if(return_value_strcasecmp$26 == 0)
                        command_abhs(&var, cmd);

                      else
                      {
                        return_value_strcasecmp$25=strcasecmp((const char *)cmd, "HEAD");
                        if(return_value_strcasecmp$25 == 0)
                          command_abhs(&var, cmd);

                        else
                        {
                          return_value_strcasecmp$24=strcasecmp((const char *)cmd, "STAT");
                          if(return_value_strcasecmp$24 == 0)
                            command_abhs(&var, cmd);

                          else
                          {
                            return_value_strcasecmp$23=strcasecmp((const char *)cmd, "GROUP");
                            if(return_value_strcasecmp$23 == 0)
                              command_group(&var);

                            else
                            {
                              return_value_strcasecmp$22=strcasecmp((const char *)cmd, "HELP");
                              if(return_value_strcasecmp$22 == 0)
                              {
                                socksendtext(&var, (unsigned char *)"100 Help text follows\r\n");
                                socksendtext(&var, (unsigned char *)"Recognized commands:\r\n");
                                socksendtext(&var, (unsigned char *)"\r\n");
                                socksendtext(&var, (unsigned char *)"ARTICLE\r\n");
                                socksendtext(&var, (unsigned char *)"AUTHINFO\r\n");
                                socksendtext(&var, (unsigned char *)"BODY\r\n");
                                socksendtext(&var, (unsigned char *)"GROUP\r\n");
                                socksendtext(&var, (unsigned char *)"HEAD\r\n");
                                socksendtext(&var, (unsigned char *)"HELP\r\n");
                                socksendtext(&var, (unsigned char *)"IHAVE (not implemented, messages are always rejected)\r\n");
                                socksendtext(&var, (unsigned char *)"LAST\r\n");
                                socksendtext(&var, (unsigned char *)"LIST\r\n");
                                socksendtext(&var, (unsigned char *)"NEWGROUPS (not implemented, always returns an empty list)\r\n");
                                socksendtext(&var, (unsigned char *)"NEWNEWS (not implemented, always returns an empty list)\r\n");
                                socksendtext(&var, (unsigned char *)"NEXT\r\n");
                                socksendtext(&var, (unsigned char *)"QUIT\r\n");
                                socksendtext(&var, (unsigned char *)"SLAVE (has no effect)\r\n");
                                socksendtext(&var, (unsigned char *)"STAT\r\n");
                                socksendtext(&var, (unsigned char *)"XOVER (partially implemented, byte count and line count are always empty)\r\n");
                                socksendtext(&var, (unsigned char *)"\r\n");
                                socksendtext(&var, (unsigned char *)"JamNNTPd supports most of RFC-977 and also has support for AUTHINFO and\r\n");
                                socksendtext(&var, (unsigned char *)"limited XOVER support (RFC-2980)\r\n");
                                socksendtext(&var, (unsigned char *)".\r\n");
                              }

                              else
                              {
                                return_value_strcasecmp$21=strcasecmp((const char *)cmd, "IHAVE");
                                if(return_value_strcasecmp$21 == 0)
                                  socksendtext(&var, (unsigned char *)"435 Article not wanted - do not send it\r\n");

                                else
                                {
                                  return_value_strcasecmp$20=strcasecmp((const char *)cmd, "LAST");
                                  if(return_value_strcasecmp$20 == 0)
                                    command_last(&var);

                                  else
                                  {
                                    return_value_strcasecmp$19=strcasecmp((const char *)cmd, "LIST");
                                    if(return_value_strcasecmp$19 == 0)
                                      command_list(&var);

                                    else
                                    {
                                      return_value_strcasecmp$18=strcasecmp((const char *)cmd, "NEWGROUPS");
                                      if(return_value_strcasecmp$18 == 0)
                                      {
                                        socksendtext(&var, (unsigned char *)"231 Warning: NEWGROUPS not implemented, returning empty list\r\n");
                                        socksendtext(&var, (unsigned char *)".\r\n");
                                      }

                                      else
                                      {
                                        return_value_strcasecmp$17=strcasecmp((const char *)cmd, "NEWNEWS");
                                        if(return_value_strcasecmp$17 == 0)
                                        {
                                          socksendtext(&var, (unsigned char *)"230 Warning: NEWNEWS not implemented, returning empty list\r\n");
                                          socksendtext(&var, (unsigned char *)".\r\n");
                                        }

                                        else
                                        {
                                          return_value_strcasecmp$16=strcasecmp((const char *)cmd, "NEXT");
                                          if(return_value_strcasecmp$16 == 0)
                                            command_next(&var);

                                          else
                                          {
                                            return_value_strcasecmp$15=strcasecmp((const char *)cmd, "POST");
                                            if(return_value_strcasecmp$15 == 0)
                                              command_post(&var);

                                            else
                                            {
                                              return_value_strcasecmp$14=strcasecmp((const char *)cmd, "SLAVE");
                                              if(return_value_strcasecmp$14 == 0)
                                                socksendtext(&var, (unsigned char *)"202 Slave status noted (but ignored)\r\n");

                                              else
                                              {
                                                return_value_strcasecmp$13=strcasecmp((const char *)cmd, "QUIT");
                                                if(return_value_strcasecmp$13 == 0)
                                                {
                                                  socksendtext(&var, (unsigned char *)"205 Goodbye\r\n");
                                                  var.disconnect = 1;
                                                }

                                                else
                                                {
                                                  return_value_strcasecmp$12=strcasecmp((const char *)cmd, "XOVER");
                                                  if(return_value_strcasecmp$12 == 0)
                                                    command_xover(&var);

                                                  else
                                                    socksendtext(&var, (unsigned char *)"500 Unknown command\r\n");
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
                        }
                      }
                    }
                  }
                }

              }
              os_logwrite((unsigned char *)"(%s) Connection closed", (const void *)var.clientid);
              if(!(var.openmb == ((struct anonymous$7 *)NULL)))
              {
                JAM_CloseMB(var.openmb);
                free((void *)var.openmb);
              }

              freegroups(&var);
              freexlat(&var);
              freesockio(var.sio);
              os_getexclusive();
              server_openconnections = server_openconnections - 1;
              os_stopexclusive();
              shutdown(s, 2);
              close(s);
            }
          }
        }
      }
    }
  }
}

// setboolonoff
// file misc.h line 4
signed int setboolonoff(unsigned char *opt, signed int *var)
{
  signed int return_value_strcasecmp$1;
  return_value_strcasecmp$1=strcasecmp((const char *)opt, "on");
  if(return_value_strcasecmp$1 == 0)
  {
    *var = 1;
    return 1;
  }

  else
  {
    signed int return_value_strcasecmp$2;
    return_value_strcasecmp$2=strcasecmp((const char *)opt, "off");
    if(return_value_strcasecmp$2 == 0)
    {
      *var = 0;
      return 1;
    }

    else
      return 0;
  }
}

// setcharset
// file mime.h line 2
void setcharset(unsigned char *newchrs, unsigned char *chrs, unsigned char *chrs2, unsigned long int chrslen)
{
  signed int return_value_strcasecmp$3;
  signed int return_value_strcasecmp$2;
  signed int return_value_strcasecmp$1;
  if(!((signed int)*newchrs == 0))
  {
    return_value_strcasecmp$3=strcasecmp((const char *)chrs, (const char *)newchrs);
    if(!(return_value_strcasecmp$3 == 0))
    {
      if((signed int)*chrs == 0)
        mystrncpy(chrs, newchrs, (signed long int)chrslen);

      else
      {
        return_value_strcasecmp$2=strcasecmp((const char *)chrs, "us-ascii");
        if(return_value_strcasecmp$2 == 0)
          mystrncpy(chrs, newchrs, (signed long int)chrslen);

        else
        {
          return_value_strcasecmp$1=strcasecmp((const char *)newchrs, "us-ascii");
          if(!(return_value_strcasecmp$1 == 0))
            mystrncpy(chrs2, newchrs, (signed long int)chrslen);

        }
      }
    }

  }

}

// setchrscodepage
// file xlat.h line 28
void setchrscodepage(unsigned char *chrs, unsigned char *codepage, unsigned char *str)
{
  char *return_value_strchr$4;
  return_value_strchr$4=strchr((const char *)str, 44);
  char *return_value_strchr$1;
  if(!(return_value_strchr$4 == ((char *)NULL)))
  {
    mystrncpy(chrs, str, (signed long int)20);
    char *return_value_strchr$2;
    return_value_strchr$2=strchr((const char *)chrs, 44);
    if(!(return_value_strchr$2 == ((char *)NULL)))
    {
      return_value_strchr$1=strchr((const char *)chrs, 44);
      *return_value_strchr$1 = (char)0;
    }

    char *return_value_strchr$3;
    return_value_strchr$3=strchr((const char *)str, 44);
    mystrncpy(codepage, (unsigned char *)(return_value_strchr$3 + (signed long int)1), (signed long int)20);
  }

  else
  {
    mystrncpy(chrs, str, (signed long int)20);
    codepage[(signed long int)0] = (unsigned char)0;
  }
}

// setreply
// file nntpserv.c line 1984
void setreply(struct var *var, unsigned long int parentmsg, unsigned long int newmsg)
{
  struct anonymous$4 baseheader;
  struct anonymous$5 header;
  signed int res;
  unsigned long int nextreply;
  unsigned long int msg;
  signed int return_value_JAM_ReadMBHeader$1;
  return_value_JAM_ReadMBHeader$1=JAM_ReadMBHeader(var->openmb, &baseheader);
  if(!(return_value_JAM_ReadMBHeader$1 == 0))
    os_logwrite((unsigned char *)"(%s) Could not read messagebase header of \"%s\"", (const void *)var->clientid, (const void *)var->opengroup->jampath);

  else
  {
    res=JAM_ReadMsgHeader(var->openmb, parentmsg - baseheader.BaseMsgNum, &header, (struct anonymous$8 **)(void *)0);
    if(res == 0)
    {
      if(header.Reply1st == 0ul)
      {
        header.Reply1st = newmsg;
        JAM_ChangeMsgHeader(var->openmb, parentmsg - baseheader.BaseMsgNum, &header);
      }

      else
      {
        nextreply = header.Reply1st;
        msg = (unsigned long int)0;
        for( ; !(nextreply == 0ul); nextreply = header.ReplyNext)
        {
          res=JAM_ReadMsgHeader(var->openmb, nextreply - baseheader.BaseMsgNum, &header, (struct anonymous$8 **)(void *)0);
          if(!(res == 0))
            goto __CPROVER_DUMP_L7;

          msg = nextreply;
        }
        header.ReplyNext = newmsg;
        JAM_ChangeMsgHeader(var->openmb, msg - baseheader.BaseMsgNum, &header);
      }
    }

  }

__CPROVER_DUMP_L7:
  ;
}

// sighandler
// file os_linux.c line 7
void sighandler(signed int sig)
{
  os_getexclusive();
  server_quit = 1;
  os_stopexclusive();
}

// smartquote
// file nntpserv.c line 1916
unsigned char * smartquote(unsigned char *oldtext, unsigned long int maxlen, unsigned char *fromname)
{
  unsigned char *newtext;
  unsigned char line[300l];
  unsigned char mark[100l];
  signed int c;
  signed int d;
  signed int linebegins;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc(maxlen);
  newtext = (unsigned char *)return_value_malloc$1;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  signed int tmp_post$2;
  if(newtext == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    d = 0;
    c = 0;
    for( ; !(fromname[(signed long int)c] == 0); c = c + 1)
    {
      if(c == 0)
        tmp_if_expr$4 = (_Bool)1;

      else
      {
        if(!(c == 0))
          tmp_if_expr$3 = (signed int)fromname[(signed long int)(c - 1)] == 32 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$3 = (_Bool)0;
        tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$4)
      {
        tmp_post$2 = d;
        d = d + 1;
        mark[(signed long int)tmp_post$2] = fromname[(signed long int)c];
      }

    }
    mark[(signed long int)d] = (unsigned char)0;
    c = 0;
    d = 0;
    while(!(oldtext[(signed long int)c] == 0))
    {
      linebegins = c;
      for( ; !((signed int)oldtext[(signed long int)c] == 13); c = c + 1)
        if((signed int)oldtext[(signed long int)c] == 0)
          break;

      if((signed int)oldtext[(signed long int)c] == 13)
        c = c + 1;

      if((signed int)oldtext[(signed long int)linebegins] == 62 && !(c + -linebegins >= 200))
      {
        strcpy((char *)line, (const char *)mark);
        strcat((char *)line, ">");
        if((signed int)oldtext[(signed long int)(1 + linebegins)] == 62)
          strcat((char *)line, " ");

        strncat((char *)line, (const char *)&oldtext[(signed long int)(linebegins + 1)], (unsigned long int)((c - linebegins) - 1));
        tidyquote((char *)line);
        unsigned long int return_value_strlen$5;
        return_value_strlen$5=strlen((const char *)line);
        if(!(maxlen >= 1ul + return_value_strlen$5 + (unsigned long int)d))
        {
          free((void *)newtext);
          return (unsigned char *)(void *)0;
        }

        strcpy((char *)&newtext[(signed long int)d], (const char *)line);
        unsigned long int return_value_strlen$6;
        return_value_strlen$6=strlen((const char *)line);
        d = d + (signed int)return_value_strlen$6;
      }

      else
      {
        if(!(maxlen >= (unsigned long int)(1 + c + d + -linebegins)))
        {
          free((void *)newtext);
          return (unsigned char *)(void *)0;
        }

        strncpy((char *)&newtext[(signed long int)d], (const char *)&oldtext[(signed long int)linebegins], (unsigned long int)(c - linebegins));
        d = d + (c - linebegins);
      }
    }
    newtext[(signed long int)d] = (unsigned char)0;
    return newtext;
  }
}

// sockprintf
// file sockio.h line 15
void sockprintf(struct var *var, unsigned char *fmt, ...)
{
  void **args;
  unsigned char buf[1000l];
  args = (void **)&fmt;
  vsprintf((char *)buf, (const char *)fmt, args);
  args = ((void **)NULL);
  socksendtext(var, buf);
}

// sockreadchar
// file sockio.c line 23
signed int sockreadchar(struct sockio *sio)
{
  struct anonymous$1 fds;
  struct timeval tv;
  signed int res;
  signed int num;
  signed int return_value_get_server_quit$1;
  return_value_get_server_quit$1=get_server_quit();
  signed int tmp_post$2;
  signed int tmp_post$4;
  _Bool tmp_if_expr$6;
  signed int return_value_get_server_quit$5;
  if(!(return_value_get_server_quit$1 == 0))
    return -1;

  else
    if(!(sio->bufpos >= sio->buflen))
    {
      tmp_post$2 = sio->bufpos;
      sio->bufpos = sio->bufpos + 1;
      return (signed int)sio->buf[(signed long int)tmp_post$2];
    }

    else
    {
      num = 0;
      do
      {

      __CPROVER_DUMP_L3:
        ;
        signed int __d0;
        signed int __d1;
        asm("cld; rep; stosq" : "=c"(__d0), "=D"(__d1) : "a"(0), "0"(sizeof(struct anonymous$1) /*128ul*/  / sizeof(signed long int) /*8ul*/ ), "1"(&(&fds)->__fds_bits[(signed long int)0]) : "memory");
        (&fds)->__fds_bits[(signed long int)(sio->socket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] = (&fds)->__fds_bits[(signed long int)(sio->socket / (8 * (signed int)sizeof(signed long int) /*8ul*/ ))] | (signed long int)(1UL << sio->socket % (8 * (signed int)sizeof(signed long int) /*8ul*/ ));
        tv.tv_sec = (signed long int)1;
        tv.tv_usec = (signed long int)0;
        num = num + 1;
        res=select(sio->socket + 1, &fds, (struct anonymous$1 *)(void *)0, (struct anonymous$1 *)(void *)0, &tv);
        if(res == -1)
          return -1;

        else
          if(!(res == 0))
          {
            signed long int return_value_recv$3;
            return_value_recv$3=recv(sio->socket, (void *)sio->buf, (unsigned long int)1024, 0);
            res = (signed int)return_value_recv$3;
            if(!(res >= 1))
              return -1;

            sio->buflen = res;
            sio->bufpos = 0;
            tmp_post$4 = sio->bufpos;
            sio->bufpos = sio->bufpos + 1;
            return (signed int)sio->buf[(signed long int)tmp_post$4];
          }

        if(num == 5)
          tmp_if_expr$6 = (_Bool)1;

        else
        {
          return_value_get_server_quit$5=get_server_quit();
          tmp_if_expr$6 = return_value_get_server_quit$5 != 0 ? (_Bool)1 : (_Bool)0;
        }
        if(tmp_if_expr$6)
          return -1;

      }
      while((_Bool)1);
    }
}

// sockreadline
// file sockio.h line 13
signed int sockreadline(struct var *var, unsigned char *buf, signed int len)
{
  signed int ch;
  signed int d = 0;
  signed int tmp_post$1;
  do
  {
    ch=sockreadchar(var->sio);
    if(ch == -1)
    {
      var->disconnect = 1;
      return 0;
    }

    tmp_post$1 = d;
    d = d + 1;
    buf[(signed long int)tmp_post$1] = (unsigned char)ch;
    if(ch == 10 || d == len + -1)
    {
      buf[(signed long int)d] = (unsigned char)0;
      return 1;
    }

  }
  while((_Bool)1);
}

// socksendtext
// file sockio.h line 14
void socksendtext(struct var *var, unsigned char *buf)
{
  if(var->disconnect == 0)
  {
    if(!(cfg_debug == 0))
      printf("(%s) > %s", (const void *)var->clientid, buf);

    unsigned long int return_value_strlen$3;
    return_value_strlen$3=strlen((const char *)buf);
    signed long int return_value_send$4;
    return_value_send$4=send(var->sio->socket, (const void *)buf, return_value_strlen$3, 0);
    if(return_value_send$4 == -1l)
    {
      unsigned char err[200l];
      signed int return_value_os_errno$1;
      return_value_os_errno$1=os_errno();
      os_strerr(return_value_os_errno$1, err, (unsigned long int)200);
      signed int return_value_os_errno$2;
      return_value_os_errno$2=os_errno();
      os_logwrite((unsigned char *)"(%s) Socket error \"%s\" (%lu), disconnecting", (const void *)var->clientid, (const void *)err, return_value_os_errno$2);
      var->disconnect = 1;
    }

  }

}

// strip
// file misc.h line 2
void strip(unsigned char *str)
{
  signed int c;
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen((const char *)str);
  c = (signed int)(return_value_strlen$1 - (unsigned long int)1);
  for( ; c >= 0 && !((signed int)str[(signed long int)c] >= 33); c = c - 1)
    str[(signed long int)c] = (unsigned char)0;
}

// stripctrl
// file misc.h line 8
void stripctrl(unsigned char *str)
{
  signed int c;
  signed int d;
  c = 0;
  d = 0;
  signed int tmp_post$1;
  for( ; !(str[(signed long int)c] == 0); c = c + 1)
    if((signed int)str[(signed long int)c] >= 32)
    {
      tmp_post$1 = d;
      d = d + 1;
      str[(signed long int)tmp_post$1] = str[(signed long int)c];
    }

  str[(signed long int)d] = (unsigned char)0;
}

// stripreplyaddr
// file nntpserv.c line 649
void stripreplyaddr(unsigned char *str)
{
  unsigned char *ch;
  char *return_value_strchr$2;
  return_value_strchr$2=strchr((const char *)str, 60);
  ch = (unsigned char *)return_value_strchr$2;
  if(!(ch == ((unsigned char *)NULL)))
  {
    strcpy((char *)str, (const char *)(ch + (signed long int)1));
    char *return_value_strchr$1;
    return_value_strchr$1=strchr((const char *)str, 62);
    ch = (unsigned char *)return_value_strchr$1;
    if(!(ch == ((unsigned char *)NULL)))
      *ch = (unsigned char)0;

  }

}

// tidyquote
// file nntpserv.c line 1836
void tidyquote(char *line)
{
  signed int lastquote;
  signed int numquotes;
  signed int c;
  char *input;
  char *initials;
  input=strdup(line);
  _Bool tmp_if_expr$1;
  if(!(input == ((char *)NULL)))
  {
    strip((unsigned char *)input);
    numquotes = 0;
    lastquote = 0;
    c = 0;
    for( ; !((signed int)input[(signed long int)c] == 0); c = c + 1)
      if((signed int)input[(signed long int)c] == 62)
      {
        lastquote = c;
        numquotes = numquotes + 1;
      }

      else
        if((signed int)input[(signed long int)c] == 60)
          break;

        else
          if(!((signed int)input[(signed long int)c] == 32))
          {
            if((signed int)input[(signed long int)(1 + c)] == 32)
              break;

          }

    if(!(numquotes == 0))
    {
      initials = "";
      c = lastquote;
      for( ; c >= 1; c = c - 1)
        if(!((signed int)input[(signed long int)c] == 62))
          break;

      if(!((signed int)input[(signed long int)c] == 62))
      {
        input[(signed long int)(c + 1)] = (char)0;
        for( ; c >= 1; c = c - 1)
        {
          if((signed int)input[(signed long int)c] == 32)
            break;

          if((signed int)input[(signed long int)c] == 62)
            break;

        }
        if((signed int)input[(signed long int)c] == 32)
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = (signed int)input[(signed long int)c] == 62 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
          initials = &input[(signed long int)(c + 1)];

        else
          initials = &input[(signed long int)c];
      }

      if((signed int)input[(signed long int)(1 + lastquote)] == 0)
        strcpy(line, "\r");

      else
      {
        strcpy(line, " ");
        strcat(line, initials);
        c = 0;
        for( ; !(c >= numquotes); c = c + 1)
          strcat(line, ">");
        strcat(line, " ");
        if((signed int)input[(signed long int)(1 + lastquote)] == 32)
          strcat(line, &input[(signed long int)(lastquote + 2)]);

        else
          strcat(line, &input[(signed long int)(lastquote + 1)]);
        strcat(line, "\r");
      }
    }

    free((void *)input);
  }

}

// unbackslashquote
// file nntpserv.c line 1450
void unbackslashquote(unsigned char *text)
{
  signed int c;
  signed int d = 0;
  c = 0;
  signed int tmp_post$1;
  for( ; !(text[(signed long int)c] == 0); c = c + 1)
  {
    if((signed int)text[(signed long int)c] == 92)
    {
      if(!((signed int)text[(signed long int)(1 + c)] == 0))
        c = c + 1;

    }

    tmp_post$1 = d;
    d = d + 1;
    text[(signed long int)tmp_post$1] = text[(signed long int)c];
  }
  text[(signed long int)d] = (unsigned char)0;
}

// unmime
// file mime.h line 1
void unmime(unsigned char *text, unsigned char *chrs, unsigned char *chrs2, unsigned long int chrslen)
{
  signed int c;
  signed int d;
  signed int begin;
  signed int end;
  unsigned char *encoding;
  c = 0;
  d = 0;
  _Bool tmp_if_expr$10;
  signed int return_value_strcasecmp$4;
  signed int tmp_post$6;
  signed int tmp_post$7;
  signed int tmp_post$8;
  signed int tmp_post$9;
  while(!(text[(signed long int)c] == 0))
  {
    if((signed int)text[(signed long int)c] == 61)
      tmp_if_expr$10 = (signed int)text[(signed long int)(c + 1)] == 63 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$10 = (_Bool)0;
    if(tmp_if_expr$10)
    {
      begin = c + 2;
      end = begin;
      for( ; !((signed int)text[(signed long int)end] == 63); end = end + 1)
        if((signed int)text[(signed long int)end] == 0)
          break;

      if((signed int)text[(signed long int)end] == 0)
      {
        text[(signed long int)d] = (unsigned char)0;
        goto __CPROVER_DUMP_L26;
      }

      text[(signed long int)end] = (unsigned char)0;
      setcharset(&text[(signed long int)begin], chrs, chrs2, chrslen);
      begin = end + 1;
      end = begin;
      for( ; !((signed int)text[(signed long int)end] == 63); end = end + 1)
        if((signed int)text[(signed long int)end] == 0)
          break;

      if((signed int)text[(signed long int)end] == 0)
      {
        text[(signed long int)d] = (unsigned char)0;
        goto __CPROVER_DUMP_L26;
      }

      text[(signed long int)end] = (unsigned char)0;
      encoding = &text[(signed long int)begin];
      begin = end + 1;
      end = begin;
      for( ; !((signed int)text[(signed long int)end] == 63); end = end + 1)
        if((signed int)text[(signed long int)end] == 0)
          break;

      if((signed int)text[(signed long int)end] == 0)
      {
        text[(signed long int)d] = (unsigned char)0;
        goto __CPROVER_DUMP_L26;
      }

      text[(signed long int)end] = (unsigned char)0;
      signed int return_value_strcasecmp$5;
      return_value_strcasecmp$5=strcasecmp((const char *)encoding, "q");
      if(return_value_strcasecmp$5 == 0)
      {
        decodeqpheader(&text[(signed long int)begin], &text[(signed long int)d]);
        unsigned long int return_value_strlen$1;
        return_value_strlen$1=strlen((const char *)text);
        d = (signed int)return_value_strlen$1;
      }

      else
      {
        return_value_strcasecmp$4=strcasecmp((const char *)encoding, "b");
        if(return_value_strcasecmp$4 == 0)
        {
          decodeb64(&text[(signed long int)begin], &text[(signed long int)d]);
          unsigned long int return_value_strlen$2;
          return_value_strlen$2=strlen((const char *)text);
          d = (signed int)return_value_strlen$2;
        }

        else
        {
          strcpy((char *)&text[(signed long int)d], (const char *)&text[(signed long int)begin]);
          unsigned long int return_value_strlen$3;
          return_value_strlen$3=strlen((const char *)text);
          d = (signed int)return_value_strlen$3;
        }
      }
      if((signed int)text[(signed long int)(1 + end)] == 61)
        c = end + 2;

      else
        c = end + 1;
      end = c;
      for( ; !((signed int)text[(signed long int)end] == 0); end = end + 1)
        if(!((signed int)text[(signed long int)end] == 32))
        {
          if(!((signed int)text[(signed long int)end] == 9))
            break;

        }

      if((signed int)text[(signed long int)end] == 61)
      {
        if((signed int)text[(signed long int)(1 + end)] == 63)
          c = end;

      }

    }

    else
    {
      for( ; !((signed int)text[(signed long int)c] == 0); text[(signed long int)tmp_post$6] = text[(signed long int)tmp_post$7])
      {
        if((signed int)text[(signed long int)c] == 32)
          break;

        if((signed int)text[(signed long int)c] == 9)
          break;

        tmp_post$6 = d;
        d = d + 1;
        tmp_post$7 = c;
        c = c + 1;
      }
      if(!((signed int)text[(signed long int)c] == 0))
      {
        tmp_post$8 = d;
        d = d + 1;
        tmp_post$9 = c;
        c = c + 1;
        text[(signed long int)tmp_post$8] = text[(signed long int)tmp_post$9];
      }

    }
  }
  text[(signed long int)d] = (unsigned char)0;

__CPROVER_DUMP_L26:
  ;
}

// unmimecpy
// file nntpserv.c line 1444
void unmimecpy(unsigned char *dest, unsigned char *src, unsigned long int destlen, unsigned char *chrs, unsigned char *chrs2, unsigned long int chrslen)
{
  unmime(src, chrs, chrs2, chrslen);
  mystrncpy(dest, src, (signed long int)destlen);
}

// validateaddr
// file nntpserv.c line 2035
signed int validateaddr(unsigned char *str)
{
  unsigned int zone;
  unsigned int net;
  unsigned int node;
  unsigned int point;
  char ch;
  char *return_value_strchr$2;
  return_value_strchr$2=strchr((const char *)str, 64);
  char *return_value_strchr$1;
  if(!(return_value_strchr$2 == ((char *)NULL)))
  {
    return_value_strchr$1=strchr((const char *)str, 64);
    *return_value_strchr$1 = (char)0;
  }

  signed int return_value_sscanf$4;
  return_value_sscanf$4=sscanf((const char *)str, "%u:%u/%u.%u%c", &zone, &net, &node, &point, &ch);
  if(!(return_value_sscanf$4 == 4))
  {
    point = (unsigned int)0;
    signed int return_value_sscanf$3;
    return_value_sscanf$3=sscanf((const char *)str, "%u:%u/%u%c", &zone, &net, &node, &ch);
    if(!(return_value_sscanf$3 == 3))
      return 0;

  }

  if(!(point == 0u))
    sprintf((char *)str, "%u:%u/%u.%u", zone, net, node, point);

  else
    sprintf((char *)str, "%u:%u/%u", zone, net, node);
  return 1;
}

// xlatstr
// file xlat.h line 24
unsigned char * xlatstr(unsigned char *text, struct xlattab *xlattab)
{
  unsigned char *newtext;
  signed long int c;
  signed long int d;
  signed long int newlen = (signed long int)0;
  c = (signed long int)0;
  for( ; !(text[c] == 0); c = c + 1l)
  {
    if(!(xlattab->table[(signed long int)(4 * (signed int)text[c])] == 0))
      newlen = newlen + 1l;

    if(!(xlattab->table[(signed long int)(4 * (signed int)text[c] + 1)] == 0))
      newlen = newlen + 1l;

    if(!(xlattab->table[(signed long int)(4 * (signed int)text[c] + 2)] == 0))
      newlen = newlen + 1l;

    if(!(xlattab->table[(signed long int)(4 * (signed int)text[c] + 3)] == 0))
      newlen = newlen + 1l;

  }
  newlen = newlen + 1l;
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)newlen);
  newtext = (unsigned char *)return_value_malloc$1;
  signed long int tmp_post$2;
  signed long int tmp_post$3;
  signed long int tmp_post$4;
  signed long int tmp_post$5;
  if(newtext == ((unsigned char *)NULL))
    return (unsigned char *)(void *)0;

  else
  {
    d = (signed long int)0;
    c = (signed long int)0;
    for( ; !(text[c] == 0); c = c + 1l)
    {
      if(!(xlattab->table[(signed long int)(4 * (signed int)text[c])] == 0))
      {
        tmp_post$2 = d;
        d = d + 1l;
        newtext[tmp_post$2] = xlattab->table[(signed long int)((signed int)text[c] * 4)];
      }

      if(!(xlattab->table[(signed long int)(4 * (signed int)text[c] + 1)] == 0))
      {
        tmp_post$3 = d;
        d = d + 1l;
        newtext[tmp_post$3] = xlattab->table[(signed long int)((signed int)text[c] * 4 + 1)];
      }

      if(!(xlattab->table[(signed long int)(4 * (signed int)text[c] + 2)] == 0))
      {
        tmp_post$4 = d;
        d = d + 1l;
        newtext[tmp_post$4] = xlattab->table[(signed long int)((signed int)text[c] * 4 + 2)];
      }

      if(!(xlattab->table[(signed long int)(4 * (signed int)text[c] + 3)] == 0))
      {
        tmp_post$5 = d;
        d = d + 1l;
        newtext[tmp_post$5] = xlattab->table[(signed long int)((signed int)text[c] * 4 + 3)];
      }

    }
    newtext[d] = (unsigned char)0;
    return newtext;
  }
}

