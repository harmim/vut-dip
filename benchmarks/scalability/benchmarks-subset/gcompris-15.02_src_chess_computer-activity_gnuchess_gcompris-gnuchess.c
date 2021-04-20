// tag-#anon#ST[ARR2{ARR7{U64}$U64$}$ARR7{U64}$U64$$'b'||ARR2{U64}$U64$'friends'||U64'blocker'||U64'blockerr90'||U64'blockerr45'||U64'blockerr315'||S16'ep'||S16'flag'||S16'side'||ARR2{S16}$S16$'material'||ARR2{S16}$S16$'pmaterial'||ARR2{S16}$S16$'castled'||ARR2{S16}$S16$'king'||U16'$pad0'|]
// file common.h line 78
struct anonymous$5;

// tag-#anon#ST[ARR50{S8}$S8$'player'||U16'$pad0'||S32'wins'||S32'losses'||S32'draws'|]
// file players.c line 40
struct anonymous$7;

// tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 141
struct anonymous$2;

// tag-#anon#ST[S32'move'||S16'epsq'||S16'bflag'||S16'Game50'||S16'mvboard'||F32'et'||U64'hashkey'||U64'phashkey'||ARR8{S8}$S8$'SANmv'||*{S8}$S8$'comments'|]
// file common.h line 113
struct anonymous$6;

// tag-#anon#ST[S32'move'||S32'score'|]
// file common.h line 100
struct anonymous;

// tag-#anon#ST[U32'pkey'||U32'$pad0'||U64'passed'||U64'weaked'||S32'score'||S32'phase'|]
// file common.h line 137
struct anonymous$4;

// tag-#anon#ST[U64'key'||S32'move'||S32'score'||U8'flag'||U8'depth'||U48'$pad0'|]
// file common.h line 128
struct anonymous$0;

// tag-#anon#UN[SYM#tag-#anon#ST[S32'__lock'||U32'__futex'||U64'__total_seq'||U64'__wakeup_seq'||U64'__woken_seq'||*{V}$V$'__mutex'||U32'__nwaiters'||U32'__broadcast_seq'|]#'__data'||ARR48{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 139
union anonymous$3;

// tag-#anon#UN[SYM#tag-__pthread_mutex_s#'__data'||ARR40{S8}$S8$'__size'||S64'__align'|]
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 90
union anonymous$1;

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

// tag-data_destination_t
// file lexpgn.h line 12
enum data_destination_t { DEST_TRASH=0, DEST_GAME=1, DEST_BOOK=2 };

// tag-hashtype
// file book.c line 145
struct hashtype;

// tag-methodtable
// file cmd.c line 873
struct methodtable;

// tag-option
// file ./getopt.h line 92
struct option;

// tag-pthread_attr_t
// file /usr/include/x86_64-linux-gnu/bits/pthreadtypes.h line 63
union pthread_attr_t;

// tag-tagtype
// file lexpgn.l line 46
enum tagtype { NO_TAG=0, EVENT_TAG=1, SITE_TAG=2, DATE_TAG=3, ROUND_TAG=4, WHITE_TAG=5, BLACK_TAG=6, RESULT_TAG=7, WHITE_ELO_TAG=8, BLACK_ELO_TAG=9, WHITETITLE_TAG=10, BLACKTITLE_TAG=11, FEN_TAG=12, OTHER_TAG=13 };

// tag-timeval
// file /usr/include/x86_64-linux-gnu/bits/time.h line 30
struct timeval;

// tag-timezone
// file /usr/include/x86_64-linux-gnu/sys/time.h line 55
struct timezone;

// tag-tm
// file /usr/include/time.h line 133
struct tm;

// tag-yy_buffer_state
// file lexpgn.c line 99
struct yy_buffer_state;

#ifndef NULL
#define NULL ((void*)0)
#endif

#ifndef IEEE_FLOAT_EQUAL
#define IEEE_FLOAT_EQUAL(x,y) ((x)==(y))
#endif
#ifndef IEEE_FLOAT_NOTEQUAL
#define IEEE_FLOAT_NOTEQUAL(x,y) ((x)!=(y))
#endif

// AddXrayPiece
// file swap.c line 143
void AddXrayPiece(signed int t, signed int sq, signed int side, unsigned long int *b, unsigned long int *c);
// AlgbrMove
// file common.h line 582
char * AlgbrMove(signed int move);
// AttackFrom
// file atak.c line 281
unsigned long int AttackFrom(signed int sq, signed int piece, signed int side);
// AttackTo
// file atak.c line 178
unsigned long int AttackTo(signed int sq, signed int side);
// AttackXFrom
// file atak.c line 307
unsigned long int AttackXFrom(signed int sq, signed int side);
// AttackXTo
// file atak.c line 227
unsigned long int AttackXTo(signed int sq, signed int side);
// BishopTrapped
// file eval.c line 533
signed int BishopTrapped(signed short int side);
// BitToMove
// file genmove.c line 51
static inline void BitToMove(signed short int f, unsigned long int b);
// BookBuilder
// file book.c line 378
signed int BookBuilder(signed short int result, unsigned char side);
// BookBuilderClose
// file book.c line 421
signed int BookBuilderClose(void);
// BookBuilderOpen
// file book.c line 304
signed int BookBuilderOpen(void);
// BookPGNReadFromFile
// file common.h line 620
void BookPGNReadFromFile(const char *file);
// BookQuery
// file book.c line 482
signed int BookQuery(signed int BKquery);
// CTL
// file eval.c line 356
static inline signed int CTL(signed short int sq, signed short int piece, signed short int side);
// CalcHashKey
// file common.h line 625
void CalcHashKey(void);
// CalcHashSize
// file common.h line 537
void CalcHashSize(signed int tablesize);
// CleanupInput
// file input.c line 190
void CleanupInput(void);
// DBListPlayer
// file common.h line 709
void DBListPlayer(const char *style);
// DBReadPlayer
// file players.c line 129
void DBReadPlayer(void);
// DBSearchPlayer
// file players.c line 147
signed int DBSearchPlayer(const char *player);
// DBSortPlayer
// file players.c line 83
void DBSortPlayer(const char *style);
// DBUpdatePlayer
// file common.h line 713
void DBUpdatePlayer(const char *player, const char *resultstr);
// DBWritePlayer
// file players.c line 112
void DBWritePlayer(void);
// DoubleQR7
// file eval.c line 643
signed int DoubleQR7(signed short int side);
// EndSearch
// file common.h line 614
void EndSearch(signed int sig);
// EvalHung
// file common.h line 640
signed int EvalHung(signed int side);
// Evaluate
// file common.h line 636
signed int Evaluate(signed int alpha, signed int beta);
// EvaluateDraw
// file common.h line 637
signed short int EvaluateDraw(void);
// FilterIllegalMoves
// file common.h line 571
void FilterIllegalMoves(signed short int ply);
// FindPins
// file atak.c line 416
void FindPins(unsigned long int *pin);
// GenAtaks
// file atak.c line 87
void GenAtaks(void);
// GenCaptures
// file common.h line 568
void GenCaptures(signed short int ply);
// GenCheckEscapes
// file common.h line 570
void GenCheckEscapes(signed short int ply);
// GenMoves
// file common.h line 567
void GenMoves(signed short int ply);
// GenNonCaptures
// file common.h line 569
void GenNonCaptures(signed short int ply);
// GetElapsed
// file iterate.c line 363
double GetElapsed(struct timeval start);
// InitBitCount
// file init.c line 418
void InitBitCount(void);
// InitBitPosArray
// file init.c line 100
void InitBitPosArray(void);
// InitDistance
// file init.c line 539
void InitDistance(void);
// InitFICS
// file init.c line 66
void InitFICS(void);
// InitFromToRay
// file init.c line 231
void InitFromToRay(void);
// InitHashCode
// file init.c line 696
void InitHashCode(void);
// InitHashTable
// file common.h line 536
void InitHashTable(void);
// InitInput
// file common.h line 540
void InitInput(void);
// InitIsolaniMask
// file init.c line 351
void InitIsolaniMask(void);
// InitLzArray
// file init.c line 77
void InitLzArray(void);
// InitMoveArray
// file init.c line 156
void InitMoveArray(void);
// InitPassedPawnMask
// file init.c line 314
void InitPassedPawnMask(void);
// InitRandomMasks
// file init.c line 298
void InitRandomMasks(void);
// InitRankFileBit
// file init.c line 269
void InitRankFileBit(void);
// InitRay
// file init.c line 189
void InitRay(void);
// InitRotAtak
// file init.c line 441
void InitRotAtak(void);
// InitSquarePawnMask
// file init.c line 373
void InitSquarePawnMask(void);
// InitVars
// file common.h line 534
void InitVars(void);
// Initialize
// file init.c line 38
void Initialize(void);
// IsInMoveList
// file move.c line 780
struct anonymous * IsInMoveList(signed int ply, signed int f, signed int t, char piece);
// IsLegalMove
// file common.h line 581
signed int IsLegalMove(signed int move);
// IsTrustedPlayer
// file pgn.c line 303
signed int IsTrustedPlayer(const char *name);
// Iterate
// file iterate.c line 37
void Iterate(void);
// KPK
// file eval.c line 1017
signed int KPK(signed int side);
// LoadEPD
// file common.h line 602
void LoadEPD(char *p);
// LoneKing
// file eval.c line 989
signed int LoneKing(signed int side, signed int loser);
// MakeMove
// file common.h line 574
void MakeMove(signed int side, signed int *move);
// MakeNullMove
// file null.c line 34
void MakeNullMove(signed int side);
// MateScan
// file atak.c line 500
signed int MateScan(signed int side);
// NewPosition
// file common.h line 538
void NewPosition(void);
// PGNReadFromFile
// file common.h line 619
void PGNReadFromFile(const char *file);
// PGNSaveToFile
// file common.h line 618
void PGNSaveToFile(const char *file, const char *resultstr);
// PTClear
// file common.h line 670
void PTClear(void);
// ParseEPD
// file common.h line 601
signed int ParseEPD(char *p);
// PhasePick
// file common.h line 676
signed int PhasePick(struct anonymous **p1, signed int ply);
// PhasePick1
// file common.h line 677
signed int PhasePick1(struct anonymous **p1, signed int ply);
// PinnedOnKing
// file atak.c line 372
signed int PinnedOnKing(signed int sq, signed int side);
// Quiesce
// file quiesce.c line 34
signed int Quiesce(unsigned char ply, signed int alpha, signed int beta);
// Rand32
// file random.c line 34
unsigned int Rand32(void);
// Rand64
// file common.h line 692
unsigned long int Rand64(void);
// ReadEPDFile
// file epd.c line 37
signed short int ReadEPDFile(const char *file, signed short int op);
// Repeat
// file common.h line 648
signed short int Repeat(void);
// SANMove
// file common.h line 578
void SANMove(signed int move, signed int ply);
// SaveEPD
// file common.h line 603
void SaveEPD(char *p);
// ScoreB
// file common.h line 631
signed int ScoreB(signed short int side);
// ScoreDev
// file common.h line 635
signed int ScoreDev(signed short int side);
// ScoreK
// file common.h line 634
signed int ScoreK(signed short int side);
// ScoreKBNK
// file eval.c line 1166
signed int ScoreKBNK(signed int side, signed int loser);
// ScoreN
// file common.h line 630
signed int ScoreN(signed short int side);
// ScoreP
// file common.h line 629
signed int ScoreP(signed short int side);
// ScoreQ
// file common.h line 633
signed int ScoreQ(signed short int side);
// ScoreR
// file common.h line 632
signed int ScoreR(signed short int side);
// Search
// file search.c line 194
signed int Search(unsigned char ply, signed short int depth, signed int alpha, signed int beta, signed short int nodetype);
// SearchRoot
// file common.h line 645
signed int SearchRoot(signed short int depth, signed int alpha, signed int beta);
// ShowBitBoard
// file common.h line 683
void ShowBitBoard(unsigned long int *b);
// ShowBoard
// file common.h line 682
void ShowBoard(void);
// ShowCBoard
// file output.c line 226
void ShowCBoard(void);
// ShowGame
// file common.h line 687
void ShowGame(void);
// ShowHashKey
// file hash.c line 81
void ShowHashKey(unsigned long int HashKey);
// ShowLine
// file common.h line 649
void ShowLine(signed int move, signed int score, char c);
// ShowMoveList
// file common.h line 680
void ShowMoveList(signed int ply);
// ShowMvboard
// file output.c line 247
void ShowMvboard(void);
// ShowSmallBoard
// file output.c line 67
void ShowSmallBoard(void);
// ShowThinking
// file search.c line 39
static inline void ShowThinking(struct anonymous *p, unsigned char ply);
// ShowTime
// file common.h line 688
void ShowTime(void);
// Solve
// file common.h line 695
void Solve(char *file);
// SortCaptures
// file common.h line 673
void SortCaptures(signed int ply);
// SortMoves
// file common.h line 674
void SortMoves(signed int ply);
// SortRoot
// file common.h line 675
void SortRoot(void);
// SqAtakd
// file atak.c line 33
signed short int SqAtakd(signed short int sq, signed short int side);
// StartTiming
// file iterate.c line 370
struct timeval StartTiming(void);
// SwapOff
// file common.h line 596
signed int SwapOff(signed int move);
// TTClear
// file common.h line 669
void TTClear(void);
// TTGet
// file common.h line 666
unsigned char TTGet(unsigned char side, unsigned char depth, unsigned char ply, signed int *score, signed int *move);
// TTGetPV
// file common.h line 668
signed short int TTGetPV(unsigned char side, unsigned char ply, signed int score, signed int *move);
// TTPut
// file common.h line 663
void TTPut(unsigned char side, unsigned char depth, unsigned char ply, signed int alpha, signed int beta, signed int score, signed int move);
// TestCaptureGenSpeed
// file common.h line 700
void TestCaptureGenSpeed(void);
// TestCaptureList
// file common.h line 703
void TestCaptureList(void);
// TestEval
// file common.h line 705
void TestEval(void);
// TestEvalSpeed
// file common.h line 704
void TestEvalSpeed(void);
// TestMoveGenSpeed
// file common.h line 698
void TestMoveGenSpeed(void);
// TestMoveList
// file common.h line 701
void TestMoveList(void);
// TestNonCaptureGenSpeed
// file test.c line 72
void TestNonCaptureGenSpeed(void);
// TestNonCaptureList
// file test.c line 163
void TestNonCaptureList(void);
// UnmakeMove
// file common.h line 575
void UnmakeMove(signed int side, signed int *move);
// UnmakeNullMove
// file null.c line 60
void UnmakeNullMove(signed int side);
// UpdateCBoard
// file common.h line 612
void UpdateCBoard(void);
// UpdateFriends
// file common.h line 611
void UpdateFriends(void);
// UpdateMvboard
// file common.h line 613
void UpdateMvboard(void);
// ValidateBoard
// file common.h line 615
signed short int ValidateBoard(void);
// ValidateMove
// file common.h line 579
struct anonymous * ValidateMove(char *s);
// _IO_getc
// file /usr/include/libio.h line 434
extern signed int _IO_getc(struct _IO_FILE *);
// _IO_putc
// file /usr/include/libio.h line 435
extern signed int _IO_putc(signed int, struct _IO_FILE *);
// __ctype_b_loc
// file /usr/include/ctype.h line 79
extern const unsigned short int ** __ctype_b_loc(void);
// __ctype_tolower_loc
// file /usr/include/ctype.h line 81
extern const signed int ** __ctype_tolower_loc(void);
// __ctype_toupper_loc
// file /usr/include/ctype.h line 83
extern const signed int ** __ctype_toupper_loc(void);
// __errno_location
// file /usr/include/x86_64-linux-gnu/bits/errno.h line 50
extern signed int * __errno_location(void);
// __strcspn_c1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1(const char *__s, signed int __reject);
// __strcspn_c1$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link1(const char *__s$link1, signed int __reject$link1);
// __strcspn_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2(const char *__s, signed int __reject1, signed int __reject2);
// __strcspn_c2$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1);
// __strcspn_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3(const char *__s, signed int __reject1, signed int __reject2, signed int __reject3);
// __strcspn_c3$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1, signed int __reject3$link1);
// __strdup
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 1278
extern char * __strdup(const char *);
// abort
// file /usr/include/stdlib.h line 515
extern void abort(void);
// abs
// file /usr/include/stdlib.h line 774
extern signed int abs(signed int);
// access
// file /usr/include/unistd.h line 287
extern signed int access(const char *, signed int);
// append_comment
// file lexpgn.l line 96
void append_comment(const char *t);
// append_str
// file lexpgn.l line 89
void append_str(char **dest, const char *s);
// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr);
// book_to_buf
// file book.c line 249
static void book_to_buf(unsigned int index);
// buf_to_book
// file book.c line 220
static void buf_to_book(void);
// calloc
// file /usr/include/stdlib.h line 468
extern void * calloc(unsigned long int, unsigned long int);
// check_magic
// file book.c line 78
static signed int check_magic(struct _IO_FILE *f);
// cmd_accepted
// file cmd.c line 89
void cmd_accepted(void);
// cmd_activate
// file cmd.c line 91
void cmd_activate(void);
// cmd_analyze
// file cmd.c line 97
void cmd_analyze(void);
// cmd_bk
// file cmd.c line 119
void cmd_bk(void);
// cmd_black
// file cmd.c line 129
void cmd_black(void);
// cmd_book
// file cmd.c line 146
void cmd_book(void);
// cmd_computer
// file cmd.c line 173
void cmd_computer(void);
// cmd_depth
// file cmd.c line 175
void cmd_depth(void);
// cmd_draw
// file cmd.c line 182
void cmd_draw(void);
// cmd_easy
// file cmd.c line 184
void cmd_easy(void);
// cmd_edit
// file cmd.c line 187
void cmd_edit(void);
// cmd_epd
// file cmd.c line 195
void cmd_epd(void);
// cmd_exit
// file cmd.c line 203
void cmd_exit(void);
// cmd_force
// file cmd.c line 219
void cmd_force(void);
// cmd_go
// file cmd.c line 221
void cmd_go(void);
// cmd_hard
// file cmd.c line 230
void cmd_hard(void);
// cmd_hash
// file cmd.c line 232
void cmd_hash(void);
// cmd_hashsize
// file cmd.c line 241
void cmd_hashsize(void);
// cmd_help
// file cmd.c line 831
void cmd_help(void);
// cmd_hint
// file cmd.c line 261
void cmd_hint(void);
// cmd_level
// file cmd.c line 279
void cmd_level(void);
// cmd_list
// file cmd.c line 305
void cmd_list(void);
// cmd_load
// file cmd.c line 317
void cmd_load(void);
// cmd_manual
// file cmd.c line 326
void cmd_manual(void);
// cmd_movenow
// file cmd.c line 329
void cmd_movenow(void);
// cmd_name
// file cmd.c line 336
void cmd_name(void);
// cmd_new
// file cmd.c line 363
void cmd_new(void);
// cmd_nopost
// file cmd.c line 374
void cmd_nopost(void);
// cmd_null
// file cmd.c line 376
void cmd_null(void);
// cmd_otim
// file cmd.c line 385
void cmd_otim(void);
// cmd_pgnload
// file cmd.c line 387
void cmd_pgnload(void);
// cmd_pgnsave
// file cmd.c line 394
void cmd_pgnsave(void);
// cmd_ping
// file cmd.c line 402
void cmd_ping(void);
// cmd_post
// file cmd.c line 412
void cmd_post(void);
// cmd_protover
// file cmd.c line 414
void cmd_protover(void);
// cmd_quit
// file cmd.c line 425
void cmd_quit(void);
// cmd_random
// file cmd.c line 427
void cmd_random(void);
// cmd_rating
// file cmd.c line 429
void cmd_rating(void);
// cmd_rejected
// file cmd.c line 441
void cmd_rejected(void);
// cmd_remove
// file cmd.c line 443
void cmd_remove(void);
// cmd_result
// file cmd.c line 459
void cmd_result(void);
// cmd_save
// file cmd.c line 471
void cmd_save(void);
// cmd_setboard
// file cmd.c line 479
void cmd_setboard(void);
// cmd_show
// file cmd.c line 589
void cmd_show(void);
// cmd_solve
// file cmd.c line 486
void cmd_solve(void);
// cmd_st
// file cmd.c line 489
void cmd_st(void);
// cmd_switch
// file cmd.c line 499
void cmd_switch(void);
// cmd_test
// file cmd.c line 679
void cmd_test(void);
// cmd_time
// file cmd.c line 506
void cmd_time(void);
// cmd_undo
// file cmd.c line 511
void cmd_undo(void);
// cmd_usage
// file cmd.c line 522
void cmd_usage(void);
// cmd_variant
// file cmd.c line 546
void cmd_variant(void);
// cmd_version
// file cmd.c line 548
void cmd_version(void);
// cmd_white
// file cmd.c line 556
void cmd_white(void);
// cmd_xboard
// file cmd.c line 573
void cmd_xboard(void);
// compare
// file book.c line 263
static signed int compare(const void *aa, const void *bb);
// dbg_close
// file debug.c line 73
signed int dbg_close(void);
// dbg_open
// file debug.c line 71
signed int dbg_open(const char *name);
// dbg_printf
// file common.h line 848
signed int dbg_printf(const char *fmt, ...);
// difftime
// file /usr/include/time.h line 195
extern double difftime(signed long int, signed long int);
// exit
// file /usr/include/stdlib.h line 543
extern void exit(signed int);
// fclose
// file /usr/include/stdio.h line 237
extern signed int fclose(struct _IO_FILE *);
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
// fopen
// file /usr/include/stdio.h line 272
extern struct _IO_FILE * fopen(const char *, const char *);
// fprintf
// file /usr/include/stdio.h line 356
extern signed int fprintf(struct _IO_FILE *, const char *, ...);
// fputc
// file /usr/include/stdio.h line 573
extern signed int fputc(signed int, struct _IO_FILE *);
// fputs
// file /usr/include/stdio.h line 689
extern signed int fputs(const char *, struct _IO_FILE *);
// fread
// file /usr/include/stdio.h line 709
extern unsigned long int fread(void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// free
// file /usr/include/stdlib.h line 483
extern void free(void *);
// fscanf
// file /usr/include/stdio.h line 425
extern signed int fscanf(struct _IO_FILE *, const char *, ...);
// fwrite
// file /usr/include/stdio.h line 715
extern unsigned long int fwrite(const void *, unsigned long int, unsigned long int, struct _IO_FILE *);
// getchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar(void);
// getline_intrl$object
// 
void getline_intrl$object(char *);
// getline_standard
// file input.c line 87
void getline_standard(char *p);
// getopt_long
// file ./getopt.h line 149
extern signed int getopt_long(signed int, char * const *, const char *, struct option *, signed int *);
// gettimeofday
// file /usr/include/x86_64-linux-gnu/sys/time.h line 71
extern signed int gettimeofday(struct timeval *, struct timezone *);
// input_func
// file input.c line 121
void * input_func(void *arg);
// input_wakeup
// file input.c line 152
void input_wakeup(void);
// is_empty
// file book.c line 152
static inline signed int is_empty(unsigned int index);
// isatty
// file /usr/include/unistd.h line 779
extern signed int isatty(signed int);
// leadz
// file inlines.h line 35
static inline unsigned char leadz(unsigned long int b);
// leadz$link1
// file inlines.h line 35
static inline unsigned char leadz$link1(unsigned long int b$link1);
// leadz$link2
// file inlines.h line 35
static inline unsigned char leadz$link2(unsigned long int b$link2);
// leadz$link3
// file inlines.h line 35
static inline unsigned char leadz$link3(unsigned long int b$link3);
// leadz$link4
// file inlines.h line 35
static inline unsigned char leadz$link4(unsigned long int b$link4);
// leadz$link5
// file inlines.h line 35
static inline unsigned char leadz$link5(unsigned long int b$link5);
// leadz$link6
// file inlines.h line 35
static inline unsigned char leadz$link6(unsigned long int b$link6);
// leadz$link7
// file inlines.h line 35
static inline unsigned char leadz$link7(unsigned long int b$link7);
// localtime
// file /usr/include/time.h line 243
extern struct tm * localtime(const signed long int *);
// malloc
// file /usr/include/stdlib.h line 466
extern void * malloc(unsigned long int);
// memcmp
// file /usr/include/string.h line 69
extern signed int memcmp(const void *, const void *, unsigned long int);
// memcpy
// file /usr/include/string.h line 46
extern void * memcpy(void *, const void *, unsigned long int);
// memset
// file /usr/include/string.h line 66
extern void * memset(void *, signed int, unsigned long int);
// namecompare
// file players.c line 74
static signed int namecompare(const void *aa, const void *bb);
// nbits
// file inlines.h line 50
static inline unsigned char nbits(unsigned long int b);
// nbits$link1
// file inlines.h line 50
static inline unsigned char nbits$link1(unsigned long int b$link1);
// nbits$link2
// file inlines.h line 50
static inline unsigned char nbits$link2(unsigned long int b$link2);
// nbits$link3
// file inlines.h line 50
static inline unsigned char nbits$link3(unsigned long int b$link3);
// nbits$link4
// file inlines.h line 50
static inline unsigned char nbits$link4(unsigned long int b$link4);
// nbits$link5
// file inlines.h line 50
static inline unsigned char nbits$link5(unsigned long int b$link5);
// nbits$link6
// file inlines.h line 50
static inline unsigned char nbits$link6(unsigned long int b$link6);
// nbits$link7
// file inlines.h line 50
static inline unsigned char nbits$link7(unsigned long int b$link7);
// parse_input
// file cmd.c line 944
void parse_input(void);
// perror
// file /usr/include/stdio.h line 846
extern void perror(const char *);
// pick
// file common.h line 647
void pick(struct anonymous *head, signed short int ply);
// piece_id
// file move.c line 503
static inline signed int piece_id(const char c);
// ponder
// file common.h line 756
void ponder(void);
// printf
// file /usr/include/stdio.h line 362
extern signed int printf(const char *, ...);
// pthread_cond_signal
// file /usr/include/pthread.h line 979
extern signed int pthread_cond_signal(union anonymous$3 *);
// pthread_cond_wait
// file /usr/include/pthread.h line 991
extern signed int pthread_cond_wait(union anonymous$3 *, union anonymous$1 *);
// pthread_create
// file /usr/include/pthread.h line 235
extern signed int pthread_create(unsigned long int *, const union pthread_attr_t *, void * (*)(void *), void *);
// pthread_join
// file /usr/include/pthread.h line 252
extern signed int pthread_join(unsigned long int, void **);
// pthread_mutex_lock
// file /usr/include/pthread.h line 764
extern signed int pthread_mutex_lock(union anonymous$1 *);
// pthread_mutex_unlock
// file /usr/include/pthread.h line 775
extern signed int pthread_mutex_unlock(union anonymous$1 *);
// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c);
// putchar$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar$link1(signed int __c$link1);
// puts
// file /usr/include/stdio.h line 695
extern signed int puts(const char *);
// qsort
// file /usr/include/stdlib.h line 764
extern void qsort(void *, unsigned long int, unsigned long int, signed int (*)(const void *, const void *));
// rand
// file /usr/include/stdlib.h line 374
extern signed int rand(void);
// read
// file /usr/include/unistd.h line 360
extern signed long int read(signed int, void *, unsigned long int);
// read_book
// file book.c line 280
static signed int read_book(struct _IO_FILE *f);
// read_size
// file book.c line 116
static unsigned int read_size(struct _IO_FILE *f);
// realloc
// file /usr/include/stdlib.h line 480
extern void * realloc(void *, unsigned long int);
// return_append_str
// file lexpgn.l line 70
char * return_append_str(char *dest, const char *s);
// rscorecompare
// file players.c line 50
static signed int rscorecompare(const void *aa, const void *bb);
// scorecompare
// file players.c line 62
static signed int scorecompare(const void *aa, const void *bb);
// signal
// file /usr/include/signal.h line 102
extern void (*signal(signed int, void (*)(signed int)))(signed int);
// split_input
// file cmd.c line 57
static void split_input(void);
// sprintf
// file /usr/include/stdio.h line 364
extern signed int sprintf(char *, const char *, ...);
// srand
// file /usr/include/stdlib.h line 376
extern void srand(unsigned int);
// sscanf
// file /usr/include/stdio.h line 433
extern signed int sscanf(const char *, const char *, ...);
// strcat
// file /usr/include/string.h line 137
extern char * strcat(char *, const char *);
// strcpy
// file /usr/include/string.h line 129
extern char * strcpy(char *, const char *);
// strerror
// file /usr/include/string.h line 412
extern char * strerror(signed int);
// strlen
// file /usr/include/string.h line 398
extern unsigned long int strlen(const char *);
// strncmp
// file /usr/include/string.h line 147
extern signed int strncmp(const char *, const char *, unsigned long int);
// strstr
// file /usr/include/string.h line 341
extern char * strstr(const char *, const char *);
// strtol
// file /usr/include/stdlib.h line 183
extern signed long int strtol(const char *, char ** restrict , signed int);
// time
// file /usr/include/time.h line 192
extern signed long int time(signed long int *);
// tokeneq
// file cmd.c line 81
static signed int tokeneq(const char *s, const char *t);
// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c);
// toupper
// file /usr/include/ctype.h line 221
static inline signed int toupper(signed int __c);
// wait_for_input
// file input.c line 163
void wait_for_input(void);
// write_magic
// file book.c line 88
static signed int write_magic(struct _IO_FILE *f);
// write_size
// file book.c line 99
static signed int write_size(struct _IO_FILE *f, unsigned int size);
// yy_create_buffer
// file lexpgn.c line 2982
struct yy_buffer_state * yy_create_buffer(struct _IO_FILE *file, signed int size);
// yy_delete_buffer
// file lexpgn.c line 3013
void yy_delete_buffer(struct yy_buffer_state *b);
// yy_fatal_error
// file lexpgn.c line 3241
static void yy_fatal_error(const char *msg);
// yy_flex_alloc
// file lexpgn.c line 3305
static void * yy_flex_alloc(unsigned int size);
// yy_flex_free
// file lexpgn.c line 3333
static void yy_flex_free(void *ptr);
// yy_flex_realloc
// file lexpgn.c line 3315
static void * yy_flex_realloc(void *ptr, unsigned int size);
// yy_flush_buffer
// file lexpgn.c line 3061
void yy_flush_buffer(struct yy_buffer_state *b);
// yy_get_next_buffer
// file lexpgn.c line 2661
static signed int yy_get_next_buffer(void);
// yy_get_previous_state
// file lexpgn.c line 2793
static signed int yy_get_previous_state(void);
// yy_init_buffer
// file lexpgn.c line 3034
void yy_init_buffer(struct yy_buffer_state *b, struct _IO_FILE *file);
// yy_load_buffer_state
// file lexpgn.c line 2969
void yy_load_buffer_state(void);
// yy_scan_buffer
// file lexpgn.c line 3092
struct yy_buffer_state * yy_scan_buffer(char *base, unsigned int size);
// yy_scan_bytes
// file lexpgn.c line 3147
struct yy_buffer_state * yy_scan_bytes(const char *bytes, signed int len);
// yy_scan_string
// file lexpgn.c line 3130
struct yy_buffer_state * yy_scan_string(const char *yy_str);
// yy_switch_to_buffer
// file lexpgn.c line 2939
void yy_switch_to_buffer(struct yy_buffer_state *new_buffer);
// yy_try_NUL_trans
// file lexpgn.c line 2822
static signed int yy_try_NUL_trans(signed int yy_current_state);
// yylex
// file pgn.c line 44
signed int yylex(void);
// yyrestart
// file lexpgn.c line 2924
void yyrestart(struct _IO_FILE *input_file);

struct anonymous$5
{
  // b
  unsigned long int b[2l][7l];
  // friends
  unsigned long int friends[2l];
  // blocker
  unsigned long int blocker;
  // blockerr90
  unsigned long int blockerr90;
  // blockerr45
  unsigned long int blockerr45;
  // blockerr315
  unsigned long int blockerr315;
  // ep
  signed short int ep;
  // flag
  signed short int flag;
  // side
  signed short int side;
  // material
  signed short int material[2l];
  // pmaterial
  signed short int pmaterial[2l];
  // castled
  signed short int castled[2l];
  // king
  signed short int king[2l];
};

struct anonymous$7
{
  // player
  char player[50l];
  // wins
  signed int wins;
  // losses
  signed int losses;
  // draws
  signed int draws;
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

struct anonymous$6
{
  // move
  signed int move;
  // epsq
  signed short int epsq;
  // bflag
  signed short int bflag;
  // Game50
  signed short int Game50;
  // mvboard
  signed short int mvboard;
  // et
  float et;
  // hashkey
  unsigned long int hashkey;
  // phashkey
  unsigned long int phashkey;
  // SANmv
  char SANmv[8l];
  // comments
  char *comments;
};

struct anonymous
{
  // move
  signed int move;
  // score
  signed int score;
};

struct anonymous$4
{
  // pkey
  unsigned int pkey;
  // passed
  unsigned long int passed;
  // weaked
  unsigned long int weaked;
  // score
  signed int score;
  // phase
  signed int phase;
};

struct anonymous$0
{
  // key
  unsigned long int key;
  // move
  signed int move;
  // score
  signed int score;
  // flag
  unsigned char flag;
  // depth
  unsigned char depth;
};

union anonymous$3
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

union anonymous$1
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

struct hashtype
{
  // wins
  unsigned short int wins;
  // losses
  unsigned short int losses;
  // draws
  unsigned short int draws;
  // key
  unsigned long int key;
};

struct methodtable
{
  // name
  const char *name;
  // method
  void (*method)(void);
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

struct yy_buffer_state
{
  // yy_input_file
  struct _IO_FILE *yy_input_file;
  // yy_ch_buf
  char *yy_ch_buf;
  // yy_buf_pos
  char *yy_buf_pos;
  // yy_buf_size
  unsigned int yy_buf_size;
  // yy_n_chars
  signed int yy_n_chars;
  // yy_is_our_buffer
  signed int yy_is_our_buffer;
  // yy_is_interactive
  signed int yy_is_interactive;
  // yy_at_bol
  signed int yy_at_bol;
  // yy_fill_buffer
  signed int yy_fill_buffer;
  // yy_buffer_status
  signed int yy_buffer_status;
};


// Ataks
// file main.c line 49
unsigned long int Ataks[2l][7l];
// BKCastlehash
// file main.c line 87
unsigned long int BKCastlehash;
// BQCastlehash
// file main.c line 88
unsigned long int BQCastlehash;
// Bishop315Atak
// file main.c line 56
unsigned long int Bishop315Atak[64l][256l];
// Bishop45Atak
// file main.c line 55
unsigned long int Bishop45Atak[64l][256l];
// BitCount
// file main.c line 69
unsigned char BitCount[65536l];
// BitPosArray
// file main.c line 42
unsigned long int BitPosArray[64l];
// ChkCnt
// file main.c line 130
signed int ChkCnt[65l];
// ChkExtCnt
// file main.c line 106
unsigned long int ChkExtCnt;
// CollHashCnt
// file main.c line 119
unsigned long int CollHashCnt;
// DistMap
// file main.c line 41
unsigned long int DistMap[64l][8l];
// ElapsedTime
// file main.c line 134
double ElapsedTime;
// EndingKing
// file eval.c line 730
static const signed int EndingKing[64l] = { 0, 6, 12, 18, 18, 12, 6, 0, 6, 12, 18, 24, 24, 18, 12, 6, 12, 18, 24, 32, 32, 24, 18, 12, 18, 24, 32, 48, 48, 32, 24, 18, 18, 24, 32, 48, 48, 32, 24, 18, 12, 18, 24, 32, 32, 24, 18, 12, 6, 12, 18, 24, 24, 18, 12, 6, 0, 6, 12, 18, 18, 12, 6, 0 };
// EvalCall
// file main.c line 105
unsigned long int EvalCall;
// EvalCnt
// file main.c line 104
unsigned long int EvalCnt;
// ExchCnt
// file main.c line 172
signed int ExchCnt[2l];
// FileBit
// file main.c line 48
unsigned long int FileBit[8l];
// FromToRay
// file main.c line 46
unsigned long int FromToRay[64l][64l];
// FutlCutCnt
// file main.c line 114
unsigned long int FutlCutCnt;
// Game
// file main.c line 73
struct anonymous$6 Game[600l];
// Game50
// file main.c line 96
signed int Game50;
// GameCnt
// file main.c line 74
signed int GameCnt;
// GenCnt
// file main.c line 101
unsigned long int GenCnt;
// GoodGetHashCnt
// file main.c line 117
unsigned long int GoodGetHashCnt;
// GoodPawnHashCnt
// file main.c line 121
unsigned long int GoodPawnHashCnt;
// HashKey
// file main.c line 90
unsigned long int HashKey;
// HashSize
// file main.c line 123
unsigned int HashSize;
// HashTab
// file main.c line 92
struct anonymous$0 *HashTab[2l];
// Hashmv
// file main.c line 146
signed int Hashmv[65l];
// HorzExtCnt
// file main.c line 110
unsigned long int HorzExtCnt;
// Idepth
// file main.c line 94
signed int Idepth;
// InChk
// file main.c line 153
signed short int InChk[65l];
// InChkDummy
// file iterate.c line 35
signed short int InChkDummy;
// IsolaniMask
// file main.c line 51
unsigned long int IsolaniMask[8l];
// KBNK
// file eval.c line 1154
signed int KBNK[64l] = { 0, 10, 20, 30, 40, 50, 60, 70, 10, 20, 30, 40, 50, 60, 70, 60, 20, 30, 40, 50, 60, 70, 60, 50, 30, 40, 50, 60, 70, 60, 50, 40, 40, 50, 60, 70, 60, 50, 40, 30, 50, 60, 70, 60, 50, 40, 30, 20, 60, 70, 60, 50, 40, 30, 20, 10, 70, 60, 50, 40, 30, 20, 10, 0 };
// KingExtCnt
// file main.c line 112
unsigned long int KingExtCnt;
// KingSafety
// file main.c line 157
signed short int KingSafety[2l];
// KingSq
// file eval.c line 718
static const signed int KingSq[64l] = { 24, 24, 24, 16, 16, 0, 32, 32, 24, 20, 16, 12, 12, 16, 20, 24, 16, 12, 8, 4, 4, 8, 12, 16, 12, 8, 4, 0, 0, 4, 8, 12, 12, 8, 4, 0, 0, 4, 8, 12, 16, 12, 8, 4, 4, 8, 12, 16, 24, 20, 16, 12, 12, 16, 20, 24, 24, 24, 24, 16, 16, 0, 32, 32 };
// KingThrt
// file main.c line 154
signed short int KingThrt[2l][65l];
// Mask315
// file main.c line 277
signed int Mask315[64l] = { 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01 };
// Mask45
// file main.c line 247
signed int Mask45[64l] = { 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x01, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x03, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x07, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x0F, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x1F, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x3F, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF, 0x7F, 0x01, 0x03, 0x07, 0x0F, 0x1F, 0x3F, 0x7F, 0xFF };
// MoveArray
// file main.c line 44
unsigned long int MoveArray[8l][64l];
// MoveLimit
// file main.c line 138
signed int MoveLimit[2l];
// Mvboard
// file main.c line 81
signed int Mvboard[64l];
// NodeCnt
// file main.c line 102
unsigned long int NodeCnt;
// NotBitPosArray
// file main.c line 43
unsigned long int NotBitPosArray[64l];
// NullCutCnt
// file main.c line 113
unsigned long int NullCutCnt;
// OneRepCnt
// file main.c line 107
unsigned long int OneRepCnt;
// OrigCboard
// file util.c line 117
static const signed int OrigCboard[64l] = { 4, 2, 3, 5, 6, 3, 2, 4, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 4, 2, 3, 5, 6, 3, 2, 4 };
// Outpost
// file eval.c line 335
static const signed int Outpost[2l][64l] = { { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } };
// PHashMask
// file main.c line 125
unsigned long int PHashMask;
// Passed
// file eval.c line 70
static const signed int Passed[2l][8l] = { { 0, 48, 48, 120, 144, 192, 240, 0 }, { 0, 240, 192, 144, 120, 48, 48, 0 } };
// PassedPawnMask
// file main.c line 50
unsigned long int PassedPawnMask[2l][64l];
// PawnExtCnt
// file main.c line 109
unsigned long int PawnExtCnt;
// PawnHashKey
// file main.c line 91
unsigned long int PawnHashKey;
// PawnSq
// file eval.c line 50
static signed int PawnSq[2l][64l] = { { 0, 0, 0, 0, 0, 0, 0, 0, 5, 5, 5, -10, -10, 5, 5, 5, -2, -2, -2, 6, 6, -2, -2, -2, 0, 0, 0, 25, 25, 0, 0, 0, 2, 2, 12, 16, 16, 12, 2, 2, 4, 8, 12, 16, 16, 12, 4, 4, 4, 8, 12, 16, 16, 12, 4, 4, 0, 0, 0, 0, 0, 0, 0, 0 }, 
    { 0, 0, 0, 0, 0, 0, 0, 0, 4, 8, 12, 16, 16, 12, 4, 4, 4, 8, 12, 16, 16, 12, 4, 4, 2, 2, 12, 16, 16, 12, 2, 2, 0, 0, 0, 25, 25, 0, 0, 0, -2, -2, -2, 6, 6, -2, -2, -2, 5, 5, 5, -10, -10, 5, 5, 5, 0, 0, 0, 0, 0, 0, 0, 0 } };
// PawnTab
// file main.c line 93
struct anonymous$4 *PawnTab[2l];
// QuiesCnt
// file main.c line 103
unsigned long int QuiesCnt;
// RankBit
// file main.c line 47
unsigned long int RankBit[8l];
// Ray
// file main.c line 45
unsigned long int Ray[64l][8l];
// RazrCutCnt
// file main.c line 115
unsigned long int RazrCutCnt;
// RcpExtCnt
// file main.c line 108
unsigned long int RcpExtCnt;
// RealGameCnt
// file main.c line 75
signed int RealGameCnt;
// RealSide
// file main.c line 76
signed short int RealSide;
// RepeatCnt
// file main.c line 122
unsigned long int RepeatCnt;
// Rook00Atak
// file main.c line 53
unsigned long int Rook00Atak[64l][256l];
// Rook90Atak
// file main.c line 54
unsigned long int Rook90Atak[64l][256l];
// RootAlpha
// file main.c line 150
signed short int RootAlpha;
// RootBeta
// file main.c line 151
signed short int RootBeta;
// RootMaterial
// file main.c line 149
signed short int RootMaterial;
// RootPV
// file main.c line 72
signed int RootPV;
// RootPawns
// file main.c line 148
signed short int RootPawns;
// RootPieces
// file main.c line 147
signed short int RootPieces;
// SANmv
// file main.c line 126
char SANmv[8l];
// ScorePiece
// file eval.c line 1283
static signed int (*ScorePiece[7l])(signed short int);
// ScorePiece
// file eval.c line 1283
static signed int (*ScorePiece[7l])(signed short int) = { (signed int (*)(signed short int))(void *)0, 
    ScoreP, ScoreN, ScoreB, ScoreR, ScoreQ, ScoreK };
// SearchDepth
// file main.c line 137
signed int SearchDepth;
// SearchTime
// file main.c line 136
float SearchTime;
// Shift00
// file main.c line 195
signed short int Shift00[64l] = { (signed short int)56, (signed short int)56, (signed short int)56, (signed short int)56, (signed short int)56, (signed short int)56, (signed short int)56, (signed short int)56, (signed short int)48, (signed short int)48, (signed short int)48, (signed short int)48, (signed short int)48, (signed short int)48, (signed short int)48, (signed short int)48, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)40, (signed short int)32, (signed short int)32, (signed short int)32, (signed short int)32, (signed short int)32, (signed short int)32, (signed short int)32, (signed short int)32, (signed short int)24, (signed short int)24, (signed short int)24, (signed short int)24, (signed short int)24, (signed short int)24, (signed short int)24, (signed short int)24, (signed short int)16, (signed short int)16, (signed short int)16, (signed short int)16, (signed short int)16, (signed short int)16, (signed short int)16, (signed short int)16, (signed short int)8, (signed short int)8, (signed short int)8, (signed short int)8, (signed short int)8, (signed short int)8, (signed short int)8, (signed short int)8, (signed short int)0, (signed short int)0, (signed short int)0, (signed short int)0, (signed short int)0, (signed short int)0, (signed short int)0, (signed short int)0 };
// Shift315
// file main.c line 267
signed short int Shift315[64l] = { (signed short int)63, (signed short int)61, (signed short int)58, (signed short int)54, (signed short int)49, (signed short int)43, (signed short int)36, (signed short int)28, (signed short int)61, (signed short int)58, (signed short int)54, (signed short int)49, (signed short int)43, (signed short int)36, (signed short int)28, (signed short int)21, (signed short int)58, (signed short int)54, (signed short int)49, (signed short int)43, (signed short int)36, (signed short int)28, (signed short int)21, (signed short int)15, (signed short int)54, (signed short int)49, (signed short int)43, (signed short int)36, (signed short int)28, (signed short int)21, (signed short int)15, (signed short int)10, (signed short int)49, (signed short int)43, (signed short int)36, (signed short int)28, (signed short int)21, (signed short int)15, (signed short int)10, (signed short int)6, (signed short int)43, (signed short int)36, (signed short int)28, (signed short int)21, (signed short int)15, (signed short int)10, (signed short int)6, (signed short int)3, (signed short int)36, (signed short int)28, (signed short int)21, (signed short int)15, (signed short int)10, (signed short int)6, (signed short int)3, (signed short int)1, (signed short int)28, (signed short int)21, (signed short int)15, (signed short int)10, (signed short int)6, (signed short int)3, (signed short int)1, (signed short int)0 };
// Shift45
// file main.c line 237
signed short int Shift45[64l] = { (signed short int)28, (signed short int)36, (signed short int)43, (signed short int)49, (signed short int)54, (signed short int)58, (signed short int)61, (signed short int)63, (signed short int)21, (signed short int)28, (signed short int)36, (signed short int)43, (signed short int)49, (signed short int)54, (signed short int)58, (signed short int)61, (signed short int)15, (signed short int)21, (signed short int)28, (signed short int)36, (signed short int)43, (signed short int)49, (signed short int)54, (signed short int)58, (signed short int)10, (signed short int)15, (signed short int)21, (signed short int)28, (signed short int)36, (signed short int)43, (signed short int)49, (signed short int)54, (signed short int)6, (signed short int)10, (signed short int)15, (signed short int)21, (signed short int)28, (signed short int)36, (signed short int)43, (signed short int)49, (signed short int)3, (signed short int)6, (signed short int)10, (signed short int)15, (signed short int)21, (signed short int)28, (signed short int)36, (signed short int)43, (signed short int)1, (signed short int)3, (signed short int)6, (signed short int)10, (signed short int)15, (signed short int)21, (signed short int)28, (signed short int)36, (signed short int)0, (signed short int)1, (signed short int)3, (signed short int)6, (signed short int)10, (signed short int)15, (signed short int)21, (signed short int)28 };
// Shift90
// file main.c line 216
signed short int Shift90[64l] = { (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56, (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56, (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56, (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56, (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56, (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56, (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56, (signed short int)0, (signed short int)8, (signed short int)16, (signed short int)24, (signed short int)32, (signed short int)40, (signed short int)48, (signed short int)56 };
// Sidehash
// file main.c line 89
unsigned long int Sidehash;
// SquarePawnMask
// file main.c line 52
unsigned long int SquarePawnMask[2l][64l];
// StartTime
// file main.c line 135
struct timeval StartTime;
// SxDec
// file main.c line 95
signed int SxDec;
// TCMove
// file main.c line 140
signed int TCMove;
// TCTime
// file main.c line 142
float TCTime;
// TCinc
// file main.c line 141
signed int TCinc;
// TCionc
// file main.c line 164
signed int TCionc;
// TTHashMask
// file main.c line 124
unsigned long int TTHashMask;
// ThrtCnt
// file main.c line 131
signed int ThrtCnt[65l];
// ThrtExtCnt
// file main.c line 111
unsigned long int ThrtExtCnt;
// TimeLimit
// file main.c line 139
float TimeLimit[2l];
// TotalGetHashCnt
// file main.c line 116
unsigned long int TotalGetHashCnt;
// TotalPawnHashCnt
// file main.c line 120
unsigned long int TotalPawnHashCnt;
// TotalPutHashCnt
// file main.c line 118
unsigned long int TotalPutHashCnt;
// Tree
// file main.c line 70
struct anonymous Tree[2000l];
// TreePtr
// file main.c line 71
struct anonymous *TreePtr[65l];
// Value
// file main.c line 176
signed int Value[7l] = { 0, 100, 350, 350, 550, 1100, 2000 };
// WKCastlehash
// file main.c line 85
unsigned long int WKCastlehash;
// WQCastlehash
// file main.c line 86
unsigned long int WQCastlehash;
// algbr
// file main.c line 179
char algbr[64l][3l] = { { 'a', '1', 0 }, { 'b', '1', 0 }, { 'c', '1', 0 }, { 'd', '1', 0 }, { 'e', '1', 0 }, { 'f', '1', 0 }, { 'g', '1', 0 }, { 'h', '1', 0 }, { 'a', '2', 0 }, { 'b', '2', 0 }, { 'c', '2', 0 }, { 'd', '2', 0 }, { 'e', '2', 0 }, { 'f', '2', 0 }, { 'g', '2', 0 }, { 'h', '2', 0 }, { 'a', '3', 0 }, { 'b', '3', 0 }, { 'c', '3', 0 }, { 'd', '3', 0 }, { 'e', '3', 0 }, { 'f', '3', 0 }, { 'g', '3', 0 }, { 'h', '3', 0 }, { 'a', '4', 0 }, { 'b', '4', 0 }, { 'c', '4', 0 }, { 'd', '4', 0 }, { 'e', '4', 0 }, { 'f', '4', 0 }, { 'g', '4', 0 }, { 'h', '4', 0 }, { 'a', '5', 0 }, { 'b', '5', 0 }, { 'c', '5', 0 }, { 'd', '5', 0 }, { 'e', '5', 0 }, { 'f', '5', 0 }, { 'g', '5', 0 }, { 'h', '5', 0 }, { 'a', '6', 0 }, { 'b', '6', 0 }, { 'c', '6', 0 }, { 'd', '6', 0 }, { 'e', '6', 0 }, { 'f', '6', 0 }, { 'g', '6', 0 }, { 'h', '6', 0 }, { 'a', '7', 0 }, { 'b', '7', 0 }, { 'c', '7', 0 }, { 'd', '7', 0 }, { 'e', '7', 0 }, { 'f', '7', 0 }, { 'g', '7', 0 }, { 'h', '7', 0 }, { 'a', '8', 0 }, { 'b', '8', 0 }, { 'c', '8', 0 }, { 'd', '8', 0 }, { 'e', '8', 0 }, { 'f', '8', 0 }, { 'g', '8', 0 }, { 'h', '8', 0 } };
// algbrfile
// file main.c line 189
char algbrfile[9l] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 0 };
// algbrrank
// file main.c line 190
char algbrrank[9l] = { '1', '2', '3', '4', '5', '6', '7', '8', 0 };
// bb
// file eval.c line 1199
static const unsigned long int bb[2l] = { 0x2400000000000000ULL, 0x0000000000000024ULL };
// board
// file main.c line 82
struct anonymous$5 board;
// boardhalf
// file main.c line 66
unsigned long int boardhalf[2l];
// boardside
// file main.c line 67
unsigned long int boardside[2l];
// book_allocated
// file book.c line 60
static signed int book_allocated = 0;
// bookbin
// file book.c line 45
static const char *bookbin[4l] = { "book.dat", "/usr/share/games/gnuchess/book.dat", "/usr/lib/games/gnuchess/book.dat", (const char *)(void *)0 };
// bookcnt
// file book.c line 52
static signed int bookcnt;
// bookfirstlast
// file main.c line 160
signed short int bookfirstlast;
// bookhashcollisions
// file book.c line 196
static signed int bookhashcollisions = 0;
// bookloaded
// file main.c line 173
signed int bookloaded = 0;
// bookmode
// file main.c line 159
signed short int bookmode;
// bookpos
// file book.c line 150
static struct hashtype *bookpos;
// boxes
// file main.c line 59
unsigned long int boxes[2l];
// brank58
// file eval.c line 89
static const unsigned long int brank58[2l] = { 0x00000000FFFFFFFFULL, 0xFFFFFFFF00000000ULL };
// brank67
// file eval.c line 87
static const unsigned long int brank67[2l] = { 0x0000000000FFFF00ULL, 0x00FFFF0000000000ULL };
// brank7
// file eval.c line 83
static const unsigned long int brank7[2l] = { 0x000000000000FF00ULL, 0x00FF000000000000ULL };
// brank8
// file eval.c line 85
static const unsigned long int brank8[2l] = { 0x00000000000000FFULL, 0xFF00000000000000ULL };
// buf
// file book.c line 212
static unsigned char buf[14l];
// castled
// file main.c line 143
signed int castled[2l];
// cboard
// file main.c line 80
signed int cboard[64l];
// commands
// file cmd.c line 882
struct methodtable commands[59l];
// commands
// file cmd.c line 882
struct methodtable commands[59l] = { { .name="?", .method=cmd_movenow }, { .name="accepted", .method=cmd_accepted }, 
    { .name="activate", .method=cmd_activate }, 
    { .name="analyze", .method=cmd_analyze }, 
    { .name="bk", .method=cmd_bk }, { .name="black", .method=cmd_black }, { .name="book", .method=cmd_book }, { .name="computer", .method=cmd_computer }, 
    { .name="depth", .method=cmd_depth }, { .name="draw", .method=cmd_draw }, { .name="easy", .method=cmd_easy }, { .name="edit", .method=cmd_edit }, { .name="epd", .method=cmd_epd }, { .name="epdload", .method=cmd_load }, { .name="epdsave", .method=cmd_save }, { .name="exit", .method=cmd_exit }, { .name="force", .method=cmd_force }, { .name="go", .method=cmd_go }, { .name="hard", .method=cmd_hard }, { .name="hash", .method=cmd_hash }, { .name="hashsize", .method=cmd_hashsize }, 
    { .name="help", .method=cmd_help }, { .name="hint", .method=cmd_hint }, { .name="level", .method=cmd_level }, { .name="list", .method=cmd_list }, { .name="load", .method=cmd_load }, { .name="manual", .method=cmd_manual }, { .name="name", .method=cmd_name }, { .name="new", .method=cmd_new }, { .name="nopost", .method=cmd_nopost }, { .name="null", .method=cmd_null }, { .name="otim", .method=cmd_otim }, { .name="pgnload", .method=cmd_pgnload }, 
    { .name="pgnsave", .method=cmd_pgnsave }, 
    { .name="ping", .method=cmd_ping }, { .name="post", .method=cmd_post }, { .name="protover", .method=cmd_protover }, 
    { .name="quit", .method=cmd_quit }, { .name="random", .method=cmd_random }, { .name="rating", .method=cmd_rating }, { .name="rejected", .method=cmd_rejected }, 
    { .name="remove", .method=cmd_remove }, { .name="result", .method=cmd_result }, { .name="save", .method=cmd_save }, { .name="setboard", .method=cmd_setboard }, 
    { .name="show", .method=cmd_show }, { .name="solve", .method=cmd_solve }, { .name="solveepd", .method=cmd_solve }, 
    { .name="st", .method=cmd_st }, { .name="switch", .method=cmd_switch }, { .name="test", .method=cmd_test }, { .name="time", .method=cmd_time }, { .name="undo", .method=cmd_undo }, { .name="usage", .method=cmd_usage }, { .name="variant", .method=cmd_variant }, 
    { .name="version", .method=cmd_version }, 
    { .name="white", .method=cmd_white }, { .name="xboard", .method=cmd_xboard }, { .name=(const char *)(void *)0, .method=(void (*)(void))(void *)0 } };
// computer
// file main.c line 77
signed int computer;
// computerplays
// file main.c line 166
signed int computerplays;
// d2e2
// file eval.c line 81
static const unsigned long int d2e2[2l] = { 0x0018000000000000ULL, 0x0000000000001800ULL };
// data_dest
// file lexpgn.l line 52
enum data_destination_t data_dest;
// digest_bits
// file book.c line 140
static signed int digest_bits;
// dir
// file init.c line 125
static const signed int dir[8l][8l] = { { 0, 0, 0, 0, 0, 0, 0, 0 }, { 9, 11, 0, 0, 0, 0, 0, 0 }, { -21, -19, -12, -8, 8, 12, 19, 21 }, { -11, -9, 9, 11, 0, 0, 0, 0 }, { -10, -1, 1, 10, 0, 0, 0, 0 }, { -11, -10, -9, -1, 1, 9, 10, 11 }, { -11, -10, -9, -1, 1, 9, 10, 11 }, { -9, -11, 0, 0, 0, 0, 0, 0 } };
// directions
// file main.c line 68
signed short int directions[64l][64l];
// distance
// file main.c line 38
signed short int distance[64l][64l];
// draws_off
// file book.c line 217
static const signed int draws_off = 4;
// endptr
// file cmd.c line 55
char *endptr;
// ephash
// file main.c line 84
unsigned long int ephash[64l];
// existpos
// file main.c line 169
signed int existpos;
// factor
// file eval.c line 743
static const signed int factor[9l] = { 7, 8, 8, 7, 6, 5, 4, 2, 0 };
// flags
// file main.c line 78
unsigned int flags;
// gamefile
// file cmd.c line 40
static char gamefile[128l];
// getline_intrl
// file common.h line 747
void (*getline_intrl)(char *);
// hashcode
// file main.c line 83
unsigned long int hashcode[2l][7l][64l];
// helpstr
// file cmd.c line 713
static const char * const helpstr[115l] = { "^C", " Typically the interrupt key stops a search in progress,", 
    " makes the move last considered best and returns to the", 
    " command prompt", "quit", " quit the program.", "exit", " In analysis mode this stops analysis, otherwise it quits the program.", 
    "help", " Produces a help blurb corresponding to this list of commands.", 
    "book", " add - compiles book.dat from book.pgn", 
    " on - enables use of book", " off - disables use of book", " worst - play worst move from book", " best - play best move from book", " prefer - default, same as 'book on'", " random - play any move from book", "version", " prints out the version of this program", 
    "pgnsave FILENAME", " saves the game so far to the file from memory", 
    "pgnload FILENAME", " loads the game in the file into memory", 
    "force", "manual", " Makes the program stop moving. You may now enter moves", 
    " to reach some position in the future.", 
    " ", "white", " Program plays white", "black", " Program plays black", "go", " Computer takes whichever side is on move and begins its", 
    " thinking immediately", "post", " Arranges for verbose thinking output showing variation, score,", 
    " time, depth, etc.", "nopost", " Turns off verbose thinking output", "name NAME", " Lets you input your name. Also writes the log.nnn and a", 
    " corresponding game.nnn file. For details please see", 
    " auxillary file format sections.", "result", " Mostly used by Internet Chess server.", 
    "activate", " This command reactivates a game that has been terminated automatically", 
    " due to checkmate or no more time on the clock. However, it does not", 
    " alter those conditions. You would have to undo a move or two or", 
    " add time to the clock with level or time in that case.", 
    "rating COMPUTERRATING OPPONENTRATING", " Inputs the estimated rating for computer and for its opponent", 
    "new", " Sets up new game (i.e. positions in original positions)", 
    "time", " Inputs time left in game for computer in hundredths of a second.", 
    " Mostly used by Internet Chess server.", 
    "hash", " on - enables using the memory hash table to speed search", 
    " off - disables the memory hash table", 
    "hashsize N", " Sets the hash table to permit storage of N positions", 
    "null", " on - enables using the null move heuristic to speed search", 
    " off - disables using the null move heuristic", 
    "xboard", " on - enables use of xboard/winboard", " off - disables use of xboard/winboard", 
    "depth N", " Sets the program to look N ply (half-moves) deep for every", 
    " search it performs. If there is a checkmate or other condition", 
    " that does not allow that depth, then it will not be ", 
    "level MOVES MINUTES INCREMENT", " Sets time control to be MOVES in MINUTES with each move giving", 
    " an INCREMENT (in seconds, i.e. Fischer-style clock).", 
    "load", "epdload", " Loads a position in EPD format from disk into memory.", 
    "save", "epdsave", " Saves game position into EPD format from memory to disk.", 
    "switch", " Switches side to move", "solve FILENAME", "solveepd FILENAME", " Solves the positions in FILENAME", "remove", " Backs up two moves in game history", "undo", " Backs up one move in game history", "usage", " Display command line syntax", "show", " board - displays the current board", " time - displays the time settings", " moves - shows all moves using one call to routine", 
    " escape - shows moves that escape from check using one call to routine", 
    " noncapture - shows non-capture moves", 
    " capture - shows capture moves", " eval [or score] - shows the evaluation per piece and overall", 
    " game - shows moves in game history", " pin - shows pinned pieces", "test", " movelist - reads in an epd file and shows legal moves for its entries", 
    " capture - reads in an epd file and shows legal captures for its entries", 
    " movegenspeed - tests speed of move generator", 
    " capturespeed - tests speed of capture move generator", 
    " eval - reads in an epd file and shows evaluation for its entries", 
    " evalspeed tests speed of the evaluator", 
    "bk", " show moves from opening book.", (const char *)(void *)0, (const char *)(void *)0 };
// history
// file main.c line 127
unsigned long int history[2l][4096l];
// hunged
// file main.c line 144
signed int hunged[2l];
// id
// file main.c line 132
char id[32l];
// initial_comments
// file lexpgn.l line 68
char *initial_comments;
// input_cond
// file input.c line 102
static union anonymous$3 input_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// input_mutex
// file input.c line 101
static union anonymous$1 input_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// input_status
// file input.c line 56
volatile signed int input_status = 0;
// input_thread
// file input.c line 97
unsigned long int input_thread;
// inputstr
// file input.c line 58
char inputstr[128l];
// isolani_normal
// file eval.c line 73
static const signed int isolani_normal[8l] = { -8, -10, -12, -14, -14, -12, -10, -8 };
// isolani_weaker
// file eval.c line 77
static const signed int isolani_weaker[8l] = { -22, -24, -26, -28, -28, -26, -24, -22 };
// key_off
// file book.c line 218
static const signed int key_off = 6;
// killer1
// file main.c line 128
signed int killer1[65l];
// killer2
// file main.c line 129
signed int killer2[65l];
// lastrootscore
// file main.c line 100
signed int lastrootscore;
// lazyscore
// file main.c line 97
signed int lazyscore[2l];
// lname
// file players.c line 48
static char lname[50l];
// lnotation
// file main.c line 193
char lnotation[8l] = { ' ', 'p', 'n', 'b', 'r', 'q', 'k', 0 };
// logfile
// file cmd.c line 39
static char logfile[128l];
// losses_off
// file book.c line 216
static const signed int losses_off = 2;
// lzArray
// file main.c line 40
unsigned char lzArray[65536l];
// magic_str
// file book.c line 76
static const char magic_str[6l] = { 'B', '#', 8, 21, 3, 0 };
// map
// file init.c line 139
static const signed int map[120l] = { -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 1, 2, 3, 4, 5, 6, 7, -1, -1, 8, 9, 10, 11, 12, 13, 14, 15, -1, -1, 16, 17, 18, 19, 20, 21, 22, 23, -1, -1, 24, 25, 26, 27, 28, 29, 30, 31, -1, -1, 32, 33, 34, 35, 36, 37, 38, 39, -1, -1, 40, 41, 42, 43, 44, 45, 46, 47, -1, -1, 48, 49, 50, 51, 52, 53, 54, 55, -1, -1, 56, 57, 58, 59, 60, 61, 62, 63, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 };
// mask_kr_trapped_b
// file main.c line 63
unsigned long int mask_kr_trapped_b[3l];
// mask_kr_trapped_w
// file main.c line 62
unsigned long int mask_kr_trapped_w[3l];
// mask_qr_trapped_b
// file main.c line 65
unsigned long int mask_qr_trapped_b[3l];
// mask_qr_trapped_w
// file main.c line 64
unsigned long int mask_qr_trapped_w[3l];
// maxposnscore
// file main.c line 98
signed int maxposnscore[2l];
// maxtime
// file main.c line 170
float maxtime;
// myrating
// file main.c line 164
signed int myrating;
// n
// file main.c line 171
signed int n;
// name
// file main.c line 165
char name[50l];
// ndir
// file init.c line 136
static const signed int ndir[8l] = { 0, 2, 8, 4, 4, 8, 8, 2 };
// newpos
// file main.c line 169
signed int newpos;
// nmovesfrombook
// file main.c line 168
signed int nmovesfrombook;
// nn
// file eval.c line 1198
static const unsigned long int nn[2l] = { 0x4200000000000000ULL, 0x0000000000000042ULL };
// node
// file genmove.c line 35
static struct anonymous *node;
// notation
// file main.c line 192
char notation[8l] = { ' ', 'P', 'N', 'B', 'R', 'Q', 'K', 0 };
// ofp
// file main.c line 163
struct _IO_FILE *ofp;
// opprating
// file main.c line 164
signed int opprating;
// optarg
// file ./getopt.h line 45
extern char *optarg;
// passed
// file eval.c line 47
unsigned long int passed[2l];
// pawncover
// file eval.c line 742
static const signed int pawncover[9l] = { -60, -30, 0, 5, 30, 30, 30, 30, 30 };
// pgn_black
// file lexpgn.l line 63
char *pgn_black;
// pgn_blackELO
// file lexpgn.l line 66
char *pgn_blackELO;
// pgn_date
// file lexpgn.l line 60
char *pgn_date;
// pgn_event
// file lexpgn.l line 58
char *pgn_event;
// pgn_othertags
// file lexpgn.l line 67
char *pgn_othertags;
// pgn_result
// file lexpgn.l line 64
char *pgn_result;
// pgn_round
// file lexpgn.l line 61
char *pgn_round;
// pgn_site
// file lexpgn.l line 59
char *pgn_site;
// pgn_white
// file lexpgn.l line 62
char *pgn_white;
// pgn_whiteELO
// file lexpgn.l line 65
char *pgn_whiteELO;
// phase
// file main.c line 145
signed int phase;
// pickphase
// file main.c line 152
signed short int pickphase[65l];
// pieces
// file main.c line 61
unsigned long int pieces[2l];
// pinned
// file main.c line 57
unsigned long int pinned;
// playerdb
// file players.c line 47
struct anonymous$7 playerdb[500l];
// ply1score
// file search.c line 54
static signed int ply1score;
// posshash
// file book.c line 53
static unsigned long int posshash[200l];
// preanalyze_flags
// file main.c line 79
unsigned int preanalyze_flags;
// progname
// file main.c line 162
char *progname;
// pscore
// file main.c line 158
signed short int pscore[64l];
// ptype
// file main.c line 178
signed int ptype[2l] = { 1, 7 };
// r315
// file main.c line 257
signed int r315[64l] = { 0, 2, 5, 9, 14, 20, 27, 35, 1, 4, 8, 13, 19, 26, 34, 42, 3, 7, 12, 18, 25, 33, 41, 48, 6, 11, 17, 24, 32, 40, 47, 53, 10, 16, 23, 31, 39, 46, 52, 57, 15, 22, 30, 38, 45, 51, 56, 60, 21, 29, 37, 44, 50, 55, 59, 62, 28, 36, 43, 49, 54, 58, 61, 63 };
// r45
// file main.c line 227
signed int r45[64l] = { 28, 21, 15, 10, 6, 3, 1, 0, 36, 29, 22, 16, 11, 7, 4, 2, 43, 37, 30, 23, 17, 12, 8, 5, 49, 44, 38, 31, 24, 18, 13, 9, 54, 50, 45, 39, 32, 25, 19, 14, 58, 55, 51, 46, 40, 33, 26, 20, 61, 59, 56, 52, 47, 41, 34, 27, 63, 62, 60, 57, 53, 48, 42, 35 };
// r90
// file main.c line 206
signed int r90[64l] = { 56, 48, 40, 32, 24, 16, 8, 0, 57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18, 10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36, 28, 20, 12, 4, 61, 53, 45, 37, 29, 21, 13, 5, 62, 54, 46, 38, 30, 22, 14, 6, 63, 55, 47, 39, 31, 23, 15, 7 };
// range
// file main.c line 177
signed int range[8l] = { 0, 0, 0, 1, 1, 1, 0, 0 };
// rank6
// file main.c line 287
signed int rank6[2l] = { 5, 2 };
// rank7
// file main.c line 288
signed int rank7[2l] = { 6, 1 };
// rank8
// file main.c line 289
signed int rank8[2l] = { 7, 0 };
// raybeg
// file genmove.c line 32
const signed short int raybeg[7l] = { (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)4, (const signed short int)0, (const signed short int)0 };
// rayend
// file genmove.c line 33
const signed short int rayend[7l] = { (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)4, (const signed short int)8, (const signed short int)8, (const signed short int)0 };
// rings
// file main.c line 58
unsigned long int rings[4l];
// rootscore
// file main.c line 99
signed int rootscore;
// slider
// file main.c line 175
signed int slider[8l] = { 0, 0, 0, 1, 1, 1, 0, 0 };
// solution
// file main.c line 133
char solution[64l];
// stderr
// file /usr/include/stdio.h line 170
extern struct _IO_FILE *stderr;
// stdin
// file /usr/include/stdio.h line 168
extern struct _IO_FILE *stdin;
// stdout
// file /usr/include/stdio.h line 169
extern struct _IO_FILE *stdout;
// stonewall
// file main.c line 60
unsigned long int stonewall[2l];
// suddendeath
// file main.c line 164
signed int suddendeath;
// taxicab
// file main.c line 39
signed short int taxicab[64l][64l];
// terminal
// file iterate.c line 35
signed short int terminal;
// threatmv
// file main.c line 155
signed short int threatmv;
// threatply
// file main.c line 156
unsigned char threatply;
// token
// file cmd.c line 54
static char *token[3l];
// totalplayers
// file players.c line 36
signed int totalplayers = 0;
// trusted_players
// file pgn.c line 196
static const char * const trusted_players[103l] = { "Alekhine", "Adams", "Anand", "Anderssen", "Andersson", "Aronin", "Averbakh", "Balashov", "Beliavsky", "Benko", "Bernstein", "Bird", "Bogoljubow", "Bolbochan", "Boleslavsky", "Byrne", "Botvinnik", "Bronstein", "Browne", "Capablanca", "Chigorin", "Christiansen", "De Firmian", "Deep Blue", "Deep Thought", "Donner", "Dreev", "Duras", "Euwe", "Evans", "Filip", "Fine", "Fischer", "Flohr", "Furman", "Gelfand", "Geller", "Gereben", "Glek", "Gligoric", "GNU", "Golombek", "Gruenfeld", "Guimard", "Hodgson", "Ivanchuk", "Ivkov", "Janowsky", "Kamsky", "Kan", "Karpov", "Kasparov", "Keres", "Korchnoi", "Kortschnoj", "Kotov", "Kramnik", "Kupreich", "Lasker", "Lautier", "Letelier", "Lilienthal", "Ljubojevic", "Marshall", "Maroczy", "Mieses", "Miles", "Morphy", "Mueller", "Nimzowitsch", "Nunn", "Opocensky", "Pachman", "Petrosian", "Piket", "Pilnik", "Pirc", "Polgar", "Portisch", "Psakhis", "Ragozin", "Reshevsky", "Reti", "Romanish", "Rubinstein", "Saemisch", "Seirawan", "Shirov", "Short", "Silman", "Smyslov", "Sokolsky", "Spassky", "Sveshnikov", "Stahlberg", "Steinitz", "Tal", "Tarjan", "Tartakower", "Timman", "Topalov", "Torre", "Vidmar" };
// wakeup_cond
// file input.c line 104
static union anonymous$3 wakeup_cond = { .__data={ .__lock=0, .__futex=(unsigned int)0, .__total_seq=(unsigned long long int)0, .__wakeup_seq=(unsigned long long int)0,
    .__woken_seq=(unsigned long long int)0,
    .__mutex=(void *)0,
    .__nwaiters=(unsigned int)0, .__broadcast_seq=(unsigned int)0 } };
// wakeup_mutex
// file input.c line 103
static union anonymous$1 wakeup_mutex = { .__data={ .__lock=0, .__count=(unsigned int)0, .__owner=0, .__nusers=(unsigned int)0,
    .__kind=0, .__spins=(signed short int)0,
    .__elision=(signed short int)0, .__list={ .__prev=((struct __pthread_internal_list *)NULL), .__next=((struct __pthread_internal_list *)NULL) } } };
// wasbookmove
// file main.c line 167
signed int wasbookmove;
// weaked
// file eval.c line 48
unsigned long int weaked[2l];
// wins_off
// file book.c line 215
static const signed int wins_off = 0;
// xray
// file swap.c line 33
static const signed int xray[7l] = { 0, 1, 0, 1, 1, 1, 0 };
// yy_accept
// file lexpgn.c line 1637
static const signed short int yy_accept[157l] = { (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)4, (const signed short int)4, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)23, (const signed short int)23, (const signed short int)27, (const signed short int)27, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)52, (const signed short int)50, (const signed short int)1, (const signed short int)1, (const signed short int)36, (const signed short int)2, (const signed short int)44, (const signed short int)37, (const signed short int)50, (const signed short int)43, (const signed short int)41, (const signed short int)41, (const signed short int)28, (const signed short int)3, (const signed short int)43, (const signed short int)29, (const signed short int)4, (const signed short int)51, (const signed short int)20, (const signed short int)20, (const signed short int)19, (const signed short int)19, (const signed short int)17, (const signed short int)18, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)22, (const signed short int)21, (const signed short int)23, (const signed short int)26, (const signed short int)26, (const signed short int)25, (const signed short int)23, (const signed short int)27, (const signed short int)30, (const signed short int)35, (const signed short int)34, (const signed short int)31, (const signed short int)47, (const signed short int)45, (const signed short int)46, (const signed short int)49, (const signed short int)49, (const signed short int)1, (const signed short int)36, (const signed short int)2, (const signed short int)37, (const signed short int)42, (const signed short int)43, (const signed short int)43, (const signed short int)0, (const signed short int)41, (const signed short int)0, (const signed short int)41, (const signed short int)28, (const signed short int)3, (const signed short int)4, (const signed short int)0, (const signed short int)18, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)21, (const signed short int)21, (const signed short int)23, (const signed short int)23, (const signed short int)25, (const signed short int)25, (const signed short int)24, (const signed short int)27, (const signed short int)30, (const signed short int)30, (const signed short int)32, (const signed short int)33, (const signed short int)47, (const signed short int)0, (const signed short int)39, (const signed short int)40, (const signed short int)0, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)10, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)24, (const signed short int)30, (const signed short int)0, (const signed short int)39, (const signed short int)40, (const signed short int)0, (const signed short int)17, (const signed short int)13, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)12, (const signed short int)17, (const signed short int)0, (const signed short int)0, (const signed short int)6, (const signed short int)11, (const signed short int)17, (const signed short int)14, (const signed short int)5, (const signed short int)0, (const signed short int)0, (const signed short int)17, (const signed short int)17, (const signed short int)7, (const signed short int)17, (const signed short int)17, (const signed short int)48, (const signed short int)38, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)38, (const signed short int)16, (const signed short int)17, (const signed short int)15, (const signed short int)17, (const signed short int)17, (const signed short int)17, (const signed short int)9, (const signed short int)8 };
// yy_c_buf_p
// file lexpgn.c line 228
static char *yy_c_buf_p = (char *)0;
// yy_current_buffer
// file lexpgn.c line 210
static struct yy_buffer_state *yy_current_buffer = ((struct yy_buffer_state *)NULL);
// yy_did_buffer_switch_on_eof
// file lexpgn.c line 235
static signed int yy_did_buffer_switch_on_eof;
// yy_ec
// file lexpgn.c line 1658
static const signed int yy_ec[256l] = { 0, 1, 1, 1, 1, 1, 1, 1, 1, 2, 3, 1, 4, 5, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 6, 7, 6, 8, 9, 1, 1, 10, 11, 12, 6, 6, 13, 14, 15, 16, 17, 18, 19, 19, 19, 19, 19, 19, 19, 1, 20, 1, 6, 1, 6, 1, 25, 26, 27, 28, 29, 30, 31, 32, 33, 31, 34, 35, 31, 36, 37, 31, 31, 38, 39, 40, 41, 42, 43, 31, 31, 31, 21, 22, 23, 1, 24, 1, 25, 26, 27, 28, 29, 30, 31, 32, 33, 31, 34, 35, 31, 36, 37, 31, 31, 38, 39, 40, 41, 42, 43, 31, 31, 31, 44, 1, 45, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 };
// yy_hold_char
// file lexpgn.c line 220
static char yy_hold_char;
// yy_init
// file lexpgn.c line 229
static signed int yy_init = 1;
// yy_last_accepting_cpos
// file lexpgn.c line 1691
static char *yy_last_accepting_cpos;
// yy_last_accepting_state
// file lexpgn.c line 1690
static signed int yy_last_accepting_state;
// yy_n_chars
// file lexpgn.c line 222
static signed int yy_n_chars;
// yy_nxt
// file lexpgn.c line 281
static const signed short int yy_nxt[157l][46l] = { { (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0, (const signed short int)0 }, 
    { (const signed short int)17, (const signed short int)18, (const signed short int)19, (const signed short int)20, (const signed short int)19, (const signed short int)19, (const signed short int)18, (const signed short int)18, (const signed short int)21, (const signed short int)22, (const signed short int)23, (const signed short int)18, (const signed short int)24, (const signed short int)18, (const signed short int)25, (const signed short int)18, (const signed short int)26, (const signed short int)27, (const signed short int)28, (const signed short int)28, (const signed short int)29, (const signed short int)30, (const signed short int)18, (const signed short int)18, (const signed short int)18, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)32, (const signed short int)18 }, 
    { (const signed short int)17, (const signed short int)18, (const signed short int)19, (const signed short int)20, (const signed short int)19, (const signed short int)19, (const signed short int)18, (const signed short int)18, (const signed short int)21, (const signed short int)22, (const signed short int)23, (const signed short int)18, (const signed short int)24, (const signed short int)18, (const signed short int)25, (const signed short int)18, (const signed short int)26, (const signed short int)27, (const signed short int)28, (const signed short int)28, (const signed short int)29, (const signed short int)30, (const signed short int)18, (const signed short int)18, (const signed short int)18, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)31, (const signed short int)32, (const signed short int)18 }, 
    { (const signed short int)17, (const signed short int)33, (const signed short int)33, (const signed short int)34, (const signed short int)33, (const signed short int)34, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33 }, 
    { (const signed short int)17, (const signed short int)33, (const signed short int)33, (const signed short int)34, (const signed short int)33, (const signed short int)34, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33, (const signed short int)33 }, 
    { (const signed short int)17, (const signed short int)35, (const signed short int)36, (const signed short int)37, (const signed short int)35, (const signed short int)38, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)40, (const signed short int)39, (const signed short int)39, (const signed short int)41, (const signed short int)39, (const signed short int)42, (const signed short int)43, (const signed short int)44, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)45, (const signed short int)46, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)47, (const signed short int)35, (const signed short int)35 }, 
    { (const signed short int)17, (const signed short int)35, (const signed short int)36, (const signed short int)37, (const signed short int)35, (const signed short int)38, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)35, (const signed short int)35, (const signed short int)35, (const signed short int)40, (const signed short int)39, (const signed short int)39, (const signed short int)41, (const signed short int)39, (const signed short int)42, (const signed short int)43, (const signed short int)44, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)45, (const signed short int)46, (const signed short int)39, (const signed short int)39, (const signed short int)39, (const signed short int)47, (const signed short int)35, (const signed short int)35 }, 
    { (const signed short int)17, (const signed short int)48, (const signed short int)49, (const signed short int)34, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48 }, 
    { (const signed short int)17, (const signed short int)48, (const signed short int)49, (const signed short int)34, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48, (const signed short int)48 }, 
    { (const signed short int)17, (const signed short int)50, (const signed short int)50, (const signed short int)51, (const signed short int)50, (const signed short int)52, (const signed short int)50, (const signed short int)53, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)54, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50 }, 
    { (const signed short int)17, (const signed short int)50, (const signed short int)50, (const signed short int)51, (const signed short int)50, (const signed short int)52, (const signed short int)50, (const signed short int)53, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)54, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50, (const signed short int)50 }, 
    { (const signed short int)17, (const signed short int)55, (const signed short int)55, (const signed short int)34, (const signed short int)55, (const signed short int)34, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55 }, 
    { (const signed short int)17, (const signed short int)55, (const signed short int)55, (const signed short int)34, (const signed short int)55, (const signed short int)34, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55, (const signed short int)55 }, 
    { (const signed short int)17, (const signed short int)56, (const signed short int)56, (const signed short int)57, (const signed short int)56, (const signed short int)58, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)59 }, 
    { (const signed short int)17, (const signed short int)56, (const signed short int)56, (const signed short int)57, (const signed short int)56, (const signed short int)58, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)56, (const signed short int)59 }, 
    { (const signed short int)17, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)61, (const signed short int)62, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)63, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60 }, 
    { (const signed short int)17, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)61, (const signed short int)62, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)64, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60, (const signed short int)60 }, 
    { (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17, (const signed short int)-17 }, 
    { (const signed short int)17, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18, (const signed short int)-18 }, 
    { (const signed short int)17, (const signed short int)-19, (const signed short int)65, (const signed short int)65, (const signed short int)65, (const signed short int)65, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19, (const signed short int)-19 }, 
    { (const signed short int)17, (const signed short int)-20, (const signed short int)65, (const signed short int)65, (const signed short int)65, (const signed short int)65, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20, (const signed short int)-20 }, 
    { (const signed short int)17, (const signed short int)66, (const signed short int)-21, (const signed short int)-21, (const signed short int)-21, (const signed short int)-21, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66 }, 
    { (const signed short int)17, (const signed short int)67, (const signed short int)67, (const signed short int)-22, (const signed short int)67, (const signed short int)-22, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67 }, 
    { (const signed short int)17, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23, (const signed short int)-23 }, 
    { (const signed short int)17, (const signed short int)-24, (const signed short int)68, (const signed short int)68, (const signed short int)68, (const signed short int)68, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24, (const signed short int)-24 }, 
    { (const signed short int)17, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)69, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25, (const signed short int)-25 }, 
    { (const signed short int)17, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)70, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)71, (const signed short int)-26, (const signed short int)-26, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)-26, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-26, (const signed short int)-26 }, 
    { (const signed short int)17, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)72, (const signed short int)73, (const signed short int)74, (const signed short int)75, (const signed short int)75, (const signed short int)75, (const signed short int)75, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27, (const signed short int)-27 }, 
    { (const signed short int)17, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)73, (const signed short int)-28, (const signed short int)75, (const signed short int)75, (const signed short int)75, (const signed short int)75, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28, (const signed short int)-28 }, 
    { (const signed short int)17, (const signed short int)76, (const signed short int)76, (const signed short int)-29, (const signed short int)76, (const signed short int)-29, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76 }, 
    { (const signed short int)17, (const signed short int)-30, (const signed short int)77, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30, (const signed short int)-30 }, 
    { (const signed short int)17, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)70, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)70, (const signed short int)-31, (const signed short int)-31, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)-31, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-31, (const signed short int)-31 }, 
    { (const signed short int)17, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32, (const signed short int)-32 }, 
    { (const signed short int)17, (const signed short int)78, (const signed short int)78, (const signed short int)-33, (const signed short int)78, (const signed short int)-33, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78 }, 
    { (const signed short int)17, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34, (const signed short int)-34 }, 
    { (const signed short int)17, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35, (const signed short int)-35 }, 
    { (const signed short int)17, (const signed short int)-36, (const signed short int)79, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)80, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36, (const signed short int)-36 }, 
    { (const signed short int)17, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37, (const signed short int)-37 }, 
    { (const signed short int)17, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38, (const signed short int)-38 }, 
    { (const signed short int)17, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)-39, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-39, (const signed short int)-39 }, 
    { (const signed short int)17, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40, (const signed short int)-40 }, 
    { (const signed short int)17, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)-41, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)82, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-41, (const signed short int)-41 }, 
    { (const signed short int)17, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)-42, (const signed short int)81, (const signed short int)83, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-42, (const signed short int)-42 }, 
    { (const signed short int)17, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)-43, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)84, (const signed short int)81, (const signed short int)-43, (const signed short int)-43 }, 
    { (const signed short int)17, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)-44, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)85, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-44, (const signed short int)-44 }, 
    { (const signed short int)17, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)-45, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)86, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)87, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-45, (const signed short int)-45 }, 
    { (const signed short int)17, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)-46, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)88, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-46, (const signed short int)-46 }, 
    { (const signed short int)17, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)-47, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)89, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-47, (const signed short int)-47 }, 
    { (const signed short int)17, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48, (const signed short int)-48 }, 
    { (const signed short int)17, (const signed short int)-49, (const signed short int)90, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)91, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49, (const signed short int)-49 }, 
    { (const signed short int)17, (const signed short int)92, (const signed short int)92, (const signed short int)-50, (const signed short int)92, (const signed short int)-50, (const signed short int)92, (const signed short int)-50, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)93, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92 }, 
    { (const signed short int)17, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51, (const signed short int)-51 }, 
    { (const signed short int)17, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52, (const signed short int)-52 }, 
    { (const signed short int)17, (const signed short int)94, (const signed short int)95, (const signed short int)-53, (const signed short int)94, (const signed short int)-53, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)96, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94 }, 
    { (const signed short int)17, (const signed short int)92, (const signed short int)92, (const signed short int)-54, (const signed short int)92, (const signed short int)-54, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)93, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92 }, 
    { (const signed short int)17, (const signed short int)97, (const signed short int)97, (const signed short int)-55, (const signed short int)97, (const signed short int)-55, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97 }, 
    { (const signed short int)17, (const signed short int)98, (const signed short int)98, (const signed short int)99, (const signed short int)98, (const signed short int)-56, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)-56 }, 
    { (const signed short int)17, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)100, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57, (const signed short int)-57 }, 
    { (const signed short int)17, (const signed short int)-58, (const signed short int)-58, (const signed short int)101, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58, (const signed short int)-58 }, 
    { (const signed short int)17, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59, (const signed short int)-59 }, 
    { (const signed short int)17, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)-60, (const signed short int)-60, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)-60, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102 }, 
    { (const signed short int)17, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61, (const signed short int)-61 }, 
    { (const signed short int)17, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62, (const signed short int)-62 }, 
    { (const signed short int)17, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63, (const signed short int)-63 }, 
    { (const signed short int)17, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)-64, (const signed short int)103, (const signed short int)-64, (const signed short int)-64 }, 
    { (const signed short int)17, (const signed short int)-65, (const signed short int)65, (const signed short int)65, (const signed short int)65, (const signed short int)65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65, (const signed short int)-65 }, 
    { (const signed short int)17, (const signed short int)66, (const signed short int)-66, (const signed short int)-66, (const signed short int)-66, (const signed short int)-66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66, (const signed short int)66 }, 
    { (const signed short int)17, (const signed short int)67, (const signed short int)67, (const signed short int)-67, (const signed short int)67, (const signed short int)-67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67, (const signed short int)67 }, 
    { (const signed short int)17, (const signed short int)-68, (const signed short int)68, (const signed short int)68, (const signed short int)68, (const signed short int)68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68, (const signed short int)-68 }, 
    { (const signed short int)17, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69, (const signed short int)-69 }, 
    { (const signed short int)17, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)70, (const signed short int)-70, (const signed short int)-70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)-70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-70, (const signed short int)-70 }, 
    { (const signed short int)17, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)70, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)70, (const signed short int)-71, (const signed short int)-71, (const signed short int)70, (const signed short int)104, (const signed short int)70, (const signed short int)70, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)-71, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-71, (const signed short int)-71 }, 
    { (const signed short int)17, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)105, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72, (const signed short int)-72 }, 
    { (const signed short int)17, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73, (const signed short int)-73 }, 
    { (const signed short int)17, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)106, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74, (const signed short int)-74 }, 
    { (const signed short int)17, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)73, (const signed short int)-75, (const signed short int)75, (const signed short int)75, (const signed short int)75, (const signed short int)75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75, (const signed short int)-75 }, 
    { (const signed short int)17, (const signed short int)76, (const signed short int)76, (const signed short int)-76, (const signed short int)76, (const signed short int)-76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76, (const signed short int)76 }, 
    { (const signed short int)17, (const signed short int)-77, (const signed short int)77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77, (const signed short int)-77 }, 
    { (const signed short int)17, (const signed short int)78, (const signed short int)78, (const signed short int)-78, (const signed short int)78, (const signed short int)-78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78, (const signed short int)78 }, 
    { (const signed short int)17, (const signed short int)-79, (const signed short int)79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)80, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79, (const signed short int)-79 }, 
    { (const signed short int)17, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80, (const signed short int)-80 }, 
    { (const signed short int)17, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)-81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-81, (const signed short int)-81 }, 
    { (const signed short int)17, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)-82, (const signed short int)81, (const signed short int)107, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-82, (const signed short int)-82 }, 
    { (const signed short int)17, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)-83, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)108, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-83, (const signed short int)-83 }, 
    { (const signed short int)17, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)-84, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)109, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-84, (const signed short int)-84 }, 
    { (const signed short int)17, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)-85, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)110, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-85, (const signed short int)-85 }, 
    { (const signed short int)17, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)-86, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)111, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-86, (const signed short int)-86 }, 
    { (const signed short int)17, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)-87, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)112, (const signed short int)81, (const signed short int)81, (const signed short int)-87, (const signed short int)-87 }, 
    { (const signed short int)17, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)-88, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)113, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-88, (const signed short int)-88 }, 
    { (const signed short int)17, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)-89, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)114, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-89, (const signed short int)-89 }, 
    { (const signed short int)17, (const signed short int)-90, (const signed short int)90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)91, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90, (const signed short int)-90 }, 
    { (const signed short int)17, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91, (const signed short int)-91 }, 
    { (const signed short int)17, (const signed short int)92, (const signed short int)92, (const signed short int)-92, (const signed short int)92, (const signed short int)-92, (const signed short int)92, (const signed short int)-92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)93, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92 }, 
    { (const signed short int)17, (const signed short int)92, (const signed short int)92, (const signed short int)-93, (const signed short int)92, (const signed short int)-93, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)93, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92, (const signed short int)92 }, 
    { (const signed short int)17, (const signed short int)94, (const signed short int)94, (const signed short int)-94, (const signed short int)94, (const signed short int)-94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94 }, 
    { (const signed short int)17, (const signed short int)94, (const signed short int)95, (const signed short int)-95, (const signed short int)94, (const signed short int)-95, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)96, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94 }, 
    { (const signed short int)17, (const signed short int)94, (const signed short int)94, (const signed short int)115, (const signed short int)94, (const signed short int)115, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94, (const signed short int)94 }, 
    { (const signed short int)17, (const signed short int)97, (const signed short int)97, (const signed short int)-97, (const signed short int)97, (const signed short int)-97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97, (const signed short int)97 }, 
    { (const signed short int)17, (const signed short int)98, (const signed short int)98, (const signed short int)99, (const signed short int)98, (const signed short int)-98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)98, (const signed short int)-98 }, 
    { (const signed short int)17, (const signed short int)116, (const signed short int)116, (const signed short int)99, (const signed short int)116, (const signed short int)-99, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)-99 }, 
    { (const signed short int)17, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100, (const signed short int)-100 }, 
    { (const signed short int)17, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101, (const signed short int)-101 }, 
    { (const signed short int)17, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)-102, (const signed short int)-102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)-102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102, (const signed short int)102 }, 
    { (const signed short int)17, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)117, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103, (const signed short int)-103 }, 
    { (const signed short int)17, (const signed short int)-104, (const signed short int)118, (const signed short int)118, (const signed short int)118, (const signed short int)118, (const signed short int)70, (const signed short int)-104, (const signed short int)-104, (const signed short int)-104, (const signed short int)-104, (const signed short int)-104, (const signed short int)-104, (const signed short int)70, (const signed short int)-104, (const signed short int)-104, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-104, (const signed short int)-104, (const signed short int)-104, (const signed short int)-104, (const signed short int)-104, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)70, (const signed short int)-104, (const signed short int)-104 }, 
    { (const signed short int)17, (const signed short int)-105, (const signed short int)119, (const signed short int)119, (const signed short int)119, (const signed short int)119, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105, (const signed short int)-105 }, 
    { (const signed short int)17, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)120, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106, (const signed short int)-106 }, 
    { (const signed short int)17, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)-107, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)121, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-107, (const signed short int)-107 }, 
    { (const signed short int)17, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)-108, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)122, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-108, (const signed short int)-108 }, 
    { (const signed short int)17, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)-109, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)123, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-109, (const signed short int)-109 }, 
    { (const signed short int)17, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)-110, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-110, (const signed short int)-110 }, 
    { (const signed short int)17, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)-111, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)124, (const signed short int)81, (const signed short int)81, (const signed short int)-111, (const signed short int)-111 }, 
    { (const signed short int)17, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)-112, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)125, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-112, (const signed short int)-112 }, 
    { (const signed short int)17, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)-113, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)126, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-113, (const signed short int)-113 }, 
    { (const signed short int)17, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)-114, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)127, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-114, (const signed short int)-114 }, 
    { (const signed short int)17, (const signed short int)-115, (const signed short int)-115, (const signed short int)115, (const signed short int)-115, (const signed short int)115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115, (const signed short int)-115 }, 
    { (const signed short int)17, (const signed short int)116, (const signed short int)116, (const signed short int)99, (const signed short int)116, (const signed short int)-116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)116, (const signed short int)-116 }, 
    { (const signed short int)17, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)128, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117, (const signed short int)-117 }, 
    { (const signed short int)17, (const signed short int)-118, (const signed short int)118, (const signed short int)118, (const signed short int)118, (const signed short int)118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118, (const signed short int)-118 }, 
    { (const signed short int)17, (const signed short int)-119, (const signed short int)119, (const signed short int)119, (const signed short int)119, (const signed short int)119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119, (const signed short int)-119 }, 
    { (const signed short int)17, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)129, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120, (const signed short int)-120 }, 
    { (const signed short int)17, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)-121, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)130, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-121, (const signed short int)-121 }, 
    { (const signed short int)17, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)-122, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-122, (const signed short int)-122 }, 
    { (const signed short int)17, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)-123, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)131, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-123, (const signed short int)-123 }, 
    { (const signed short int)17, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)-124, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)132, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-124, (const signed short int)-124 }, 
    { (const signed short int)17, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)-125, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)133, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-125, (const signed short int)-125 }, 
    { (const signed short int)17, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)-126, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-126, (const signed short int)-126 }, 
    { (const signed short int)17, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)-127, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)134, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-127, (const signed short int)-127 }, 
    { (const signed short int)17, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)135, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128, (const signed short int)-128 }, 
    { (const signed short int)17, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)136, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129, (const signed short int)-129 }, 
    { (const signed short int)17, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)-130, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)137, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)138, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-130, (const signed short int)-130 }, 
    { (const signed short int)17, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)-131, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-131, (const signed short int)-131 }, 
    { (const signed short int)17, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)-132, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)139, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-132, (const signed short int)-132 }, 
    { (const signed short int)17, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)-133, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-133, (const signed short int)-133 }, 
    { (const signed short int)17, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)-134, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)140, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)141, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-134, (const signed short int)-134 }, 
    { (const signed short int)17, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)142, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135, (const signed short int)-135 }, 
    { (const signed short int)17, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)143, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136, (const signed short int)-136 }, 
    { (const signed short int)17, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)-137, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)144, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-137, (const signed short int)-137 }, 
    { (const signed short int)17, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)-138, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)145, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-138, (const signed short int)-138 }, 
    { (const signed short int)17, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)-139, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-139, (const signed short int)-139 }, 
    { (const signed short int)17, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)-140, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)146, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-140, (const signed short int)-140 }, 
    { (const signed short int)17, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)-141, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)147, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-141, (const signed short int)-141 }, 
    { (const signed short int)17, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142, (const signed short int)-142 }, 
    { (const signed short int)17, (const signed short int)-143, (const signed short int)148, (const signed short int)148, (const signed short int)148, (const signed short int)148, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143, (const signed short int)-143 }, 
    { (const signed short int)17, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)-144, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)149, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-144, (const signed short int)-144 }, 
    { (const signed short int)17, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)-145, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)150, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-145, (const signed short int)-145 }, 
    { (const signed short int)17, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)-146, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)151, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-146, (const signed short int)-146 }, 
    { (const signed short int)17, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)-147, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)152, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-147, (const signed short int)-147 }, 
    { (const signed short int)17, (const signed short int)-148, (const signed short int)148, (const signed short int)148, (const signed short int)148, (const signed short int)148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148, (const signed short int)-148 }, 
    { (const signed short int)17, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)-149, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-149, (const signed short int)-149 }, 
    { (const signed short int)17, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)-150, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)153, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-150, (const signed short int)-150 }, 
    { (const signed short int)17, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)-151, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-151, (const signed short int)-151 }, 
    { (const signed short int)17, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)-152, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)154, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-152, (const signed short int)-152 }, 
    { (const signed short int)17, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)-153, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)155, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-153, (const signed short int)-153 }, 
    { (const signed short int)17, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)-154, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)156, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-154, (const signed short int)-154 }, 
    { (const signed short int)17, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)-155, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-155, (const signed short int)-155 }, 
    { (const signed short int)17, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)-156, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)81, (const signed short int)-156, (const signed short int)-156 } };
// yy_start
// file lexpgn.c line 230
static signed int yy_start = 0;
// yyin
// file lexpgn.c line 277
struct _IO_FILE *yyin = (struct _IO_FILE *)0;
// yyleng
// file lexpgn.c line 225
signed int yyleng;
// yyout
// file lexpgn.c line 277
struct _IO_FILE *yyout = (struct _IO_FILE *)0;
// yytext
// file lexpgn.c line 1700
char *yytext;

// AddXrayPiece
// file swap.c line 143
void AddXrayPiece(signed int t, signed int sq, signed int side, unsigned long int *b, unsigned long int *c)
{
  signed int AddXrayPiece$$1$$dir;
  signed int nsq;
  signed int piece;
  unsigned long int a;
  AddXrayPiece$$1$$dir = (signed int)directions[(signed long int)t][(signed long int)sq];
  a = Ray[(signed long int)sq][(signed long int)AddXrayPiece$$1$$dir] & board.blocker;
  signed int tmp_if_expr$3;
  unsigned char return_value_leadz$1;
  unsigned char return_value_leadz$2;
  if(!(a == 0x0000000000000000ULL))
  {
    if(!(t >= sq))
    {
      return_value_leadz$1=leadz$link6(a);
      tmp_if_expr$3 = (signed int)return_value_leadz$1;
    }

    else
    {
      return_value_leadz$2=leadz$link6(a & ~a + (unsigned long int)1);
      tmp_if_expr$3 = (signed int)return_value_leadz$2;
    }
    nsq = tmp_if_expr$3;
    piece = cboard[(signed long int)nsq];
    if(piece == 5 || piece == 3 && !(AddXrayPiece$$1$$dir >= 4) || piece == 4 && AddXrayPiece$$1$$dir >= 4)
    {
      if(!((board.friends[(signed long int)side] & BitPosArray[(signed long int)nsq]) == 0ul))
        *b = *b | BitPosArray[(signed long int)nsq];

      else
        *c = *c | BitPosArray[(signed long int)nsq];
    }

    goto __CPROVER_DUMP_L6;
  }


__CPROVER_DUMP_L6:
  ;
}

// AlgbrMove
// file common.h line 582
char * AlgbrMove(signed int move)
{
  signed int f;
  signed int t;
  f = move >> 6 & 0x003F;
  t = move & 0x003F;
  static char s[6l];
  strcpy(s, algbr[(signed long int)f]);
  strcpy(s + (signed long int)2, algbr[(signed long int)t]);
  if(!((0x00007000 & move) == 0))
  {
    if(!((1024u & flags) == 0u))
      s[(signed long int)4] = lnotation[(signed long int)(move >> 12 & 0x0007)];

    else
      s[(signed long int)4] = notation[(signed long int)(move >> 12 & 0x0007)];
    s[(signed long int)5] = (char)0;
  }

  else
    s[(signed long int)4] = (char)0;
  return s;
}

// AttackFrom
// file atak.c line 281
unsigned long int AttackFrom(signed int sq, signed int piece, signed int side)
{
  switch(piece)
  {
    case 1:
      return MoveArray[(signed long int)ptype[(signed long int)side]][(signed long int)sq];
    case 2:
      return MoveArray[(signed long int)2][(signed long int)sq];
    case 3:
      return Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])];
    case 4:
      return Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    case 5:
      return Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])] | Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    case 6:
      return MoveArray[(signed long int)6][(signed long int)sq];
    default:
      return (unsigned long int)0;
  }
}

// AttackTo
// file atak.c line 178
unsigned long int AttackTo(signed int sq, signed int side)
{
  unsigned long int *a;
  unsigned long int b;
  unsigned long int *c;
  unsigned long int e;
  unsigned long int blocker;
  signed int t;
  a = board.b[(signed long int)side];
  e = a[(signed long int)2] & MoveArray[(signed long int)2][(signed long int)sq];
  e = e | a[(signed long int)6] & MoveArray[(signed long int)6][(signed long int)sq];
  e = e | a[(signed long int)1] & MoveArray[(signed long int)ptype[(signed long int)(1 ^ side)]][(signed long int)sq];
  c = FromToRay[(signed long int)sq];
  blocker = board.blocker;
  b = (a[(signed long int)3] | a[(signed long int)5]) & MoveArray[(signed long int)3][(signed long int)sq];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$1;
    return_value_leadz$1=leadz(b);
    t = (signed int)return_value_leadz$1;
    b = b & NotBitPosArray[(signed long int)t];
    if((c[(signed long int)t] & NotBitPosArray[(signed long int)t] & blocker) == 0ul)
      e = e | BitPosArray[(signed long int)t];

  }
  b = (a[(signed long int)4] | a[(signed long int)5]) & MoveArray[(signed long int)4][(signed long int)sq];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$2;
    return_value_leadz$2=leadz(b);
    t = (signed int)return_value_leadz$2;
    b = b & NotBitPosArray[(signed long int)t];
    if((c[(signed long int)t] & NotBitPosArray[(signed long int)t] & blocker) == 0ul)
      e = e | BitPosArray[(signed long int)t];

  }
  return e;
}

// AttackXFrom
// file atak.c line 307
unsigned long int AttackXFrom(signed int sq, signed int side)
{
  unsigned long int *a;
  unsigned long int b;
  unsigned long int c;
  unsigned long int blocker;
  signed int piece;
  signed int AttackXFrom$$1$$dir;
  signed int blocksq;
  a = board.b[(signed long int)side];
  piece = cboard[(signed long int)sq];
  blocker = board.blocker;
  b = (unsigned long int)0;
  signed int tmp_if_expr$3;
  unsigned char return_value_leadz$1;
  unsigned char return_value_leadz$2;
  signed int tmp_if_expr$6;
  unsigned char return_value_leadz$4;
  unsigned char return_value_leadz$5;
  switch(piece)
  {
    case 1:
    {
      b = MoveArray[(signed long int)ptype[(signed long int)side]][(signed long int)sq];
      break;
    }
    case 2:
    {
      b = MoveArray[(signed long int)2][(signed long int)sq];
      break;
    }
    case 3:

    case 5:
    {
      blocker = blocker & ~(a[(signed long int)3] | a[(signed long int)5]);
      AttackXFrom$$1$$dir = (signed int)raybeg[(signed long int)3];
      for( ; !(AttackXFrom$$1$$dir >= (signed int)rayend[3l]); AttackXFrom$$1$$dir = AttackXFrom$$1$$dir + 1)
      {
        c = Ray[(signed long int)sq][(signed long int)AttackXFrom$$1$$dir] & blocker;
        if(c == 0x0000000000000000ULL)
          c = Ray[(signed long int)sq][(signed long int)AttackXFrom$$1$$dir];

        else
        {
          if(!(c >= BitPosArray[(signed long int)sq]))
          {
            return_value_leadz$1=leadz(c);
            tmp_if_expr$3 = (signed int)return_value_leadz$1;
          }

          else
          {
            return_value_leadz$2=leadz(c & ~c + (unsigned long int)1);
            tmp_if_expr$3 = (signed int)return_value_leadz$2;
          }
          blocksq = tmp_if_expr$3;
          c = FromToRay[(signed long int)sq][(signed long int)blocksq];
        }
        b = b | c;
      }
      if(piece == 3)
        break;

      blocker = board.blocker;
    }
    case 4:
    {
      blocker = blocker & ~(a[(signed long int)4] | a[(signed long int)5]);
      AttackXFrom$$1$$dir = (signed int)raybeg[(signed long int)4];
      for( ; !(AttackXFrom$$1$$dir >= (signed int)rayend[4l]); AttackXFrom$$1$$dir = AttackXFrom$$1$$dir + 1)
      {
        c = Ray[(signed long int)sq][(signed long int)AttackXFrom$$1$$dir] & blocker;
        if(c == 0x0000000000000000ULL)
          c = Ray[(signed long int)sq][(signed long int)AttackXFrom$$1$$dir];

        else
        {
          if(!(c >= BitPosArray[(signed long int)sq]))
          {
            return_value_leadz$4=leadz(c);
            tmp_if_expr$6 = (signed int)return_value_leadz$4;
          }

          else
          {
            return_value_leadz$5=leadz(c & ~c + (unsigned long int)1);
            tmp_if_expr$6 = (signed int)return_value_leadz$5;
          }
          blocksq = tmp_if_expr$6;
          c = FromToRay[(signed long int)sq][(signed long int)blocksq];
        }
        b = b | c;
      }
      break;
    }
    case 6:
      b = MoveArray[(signed long int)6][(signed long int)sq];
  }
  return b;
}

// AttackXTo
// file atak.c line 227
unsigned long int AttackXTo(signed int sq, signed int side)
{
  unsigned long int *a;
  unsigned long int b;
  unsigned long int *c;
  unsigned long int *d;
  unsigned long int e;
  unsigned long int blocker;
  signed int t;
  a = board.b[(signed long int)side];
  d = board.b[(signed long int)(1 ^ side)];
  e = a[(signed long int)2] & MoveArray[(signed long int)2][(signed long int)sq];
  e = e | a[(signed long int)6] & MoveArray[(signed long int)6][(signed long int)sq];
  c = FromToRay[(signed long int)sq];
  b = a[(signed long int)1] & MoveArray[(signed long int)ptype[(signed long int)(1 ^ side)]][(signed long int)sq];
  blocker = board.blocker;
  blocker = blocker & ~(a[(signed long int)3] | a[(signed long int)5] | d[(signed long int)3] | d[(signed long int)5] | b);
  b = b | (a[(signed long int)3] | a[(signed long int)5]) & MoveArray[(signed long int)3][(signed long int)sq];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$1;
    return_value_leadz$1=leadz(b);
    t = (signed int)return_value_leadz$1;
    b = b & NotBitPosArray[(signed long int)t];
    if((c[(signed long int)t] & NotBitPosArray[(signed long int)t] & blocker) == 0ul)
      e = e | BitPosArray[(signed long int)t];

  }
  b = (a[(signed long int)4] | a[(signed long int)5]) & MoveArray[(signed long int)4][(signed long int)sq];
  blocker = board.blocker;
  blocker = blocker & ~(a[(signed long int)4] | a[(signed long int)5] | d[(signed long int)4] | d[(signed long int)5]);
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$2;
    return_value_leadz$2=leadz(b);
    t = (signed int)return_value_leadz$2;
    b = b & NotBitPosArray[(signed long int)t];
    if((c[(signed long int)t] & NotBitPosArray[(signed long int)t] & blocker) == 0ul)
      e = e | BitPosArray[(signed long int)t];

  }
  return e;
}

// BishopTrapped
// file eval.c line 533
signed int BishopTrapped(signed short int side)
{
  signed int s = 0;
  signed int return_value_SwapOff$1;
  signed int return_value_SwapOff$2;
  signed int return_value_SwapOff$3;
  signed int return_value_SwapOff$4;
  if(board.b[(signed long int)side][3l] == 0x0000000000000000ULL)
    return 0;

  else
  {
    if((signed int)side == 0)
    {
      if(!((board.b[0l][3l] & BitPosArray[48l]) == 0ul))
      {
        if(!((board.b[1l][1l] & BitPosArray[41l]) == 0ul))
        {
          return_value_SwapOff$1=SwapOff(48 << 6 | 41);
          if(!(return_value_SwapOff$1 >= 0))
            s = s + -250;

        }

      }

      if(!((board.b[0l][3l] & BitPosArray[55l]) == 0ul))
      {
        if(!((board.b[1l][1l] & BitPosArray[46l]) == 0ul))
        {
          return_value_SwapOff$2=SwapOff(55 << 6 | 46);
          if(!(return_value_SwapOff$2 >= 0))
            s = s + -250;

        }

      }

    }

    else
    {
      if(!((board.b[1l][3l] & BitPosArray[8l]) == 0ul))
      {
        if(!((board.b[0l][1l] & BitPosArray[17l]) == 0ul))
        {
          return_value_SwapOff$3=SwapOff(8 << 6 | 17);
          if(!(return_value_SwapOff$3 >= 0))
            s = s + -250;

        }

      }

      if(!((board.b[1l][3l] & BitPosArray[15l]) == 0ul))
      {
        if(!((board.b[0l][1l] & BitPosArray[22l]) == 0ul))
        {
          return_value_SwapOff$4=SwapOff(15 << 6 | 22);
          if(!(return_value_SwapOff$4 >= 0))
            s = s + -250;

        }

      }

    }
    return s;
  }
}

// BitToMove
// file genmove.c line 51
static inline void BitToMove(signed short int f, unsigned long int b)
{
  signed int t;
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$1;
    return_value_leadz$1=leadz$link3(b);
    t = (signed int)return_value_leadz$1;
    b = b & NotBitPosArray[(signed long int)t];
    do
    {
      node->move = (signed int)f << 6 | t | 0;
      node = node + 1l;
    }
    while((_Bool)0);
  }
}

// BookBuilder
// file book.c line 378
signed int BookBuilder(signed short int result, unsigned char side)
{
  unsigned int i;
  signed int return_value_is_empty$1;
  if(GameCnt >= 21)
    return 2;

  else
  {
    CalcHashKey();
    i = (unsigned int)(HashKey & (1UL << digest_bits) - (unsigned long int)1);
    for( ; (_Bool)1; i = (unsigned int)((unsigned long int)i + (HashKey >> digest_bits | (unsigned long int)1) & (1UL << digest_bits) - (unsigned long int)1))
      if(HashKey == (bookpos + (signed long int)i)->key)
      {
        existpos = existpos + 1;
        goto __CPROVER_DUMP_L7;
      }

      else
      {
        return_value_is_empty$1=is_empty(i);
        if(!(return_value_is_empty$1 == 0))
        {
          if((double)bookcnt > 0.95 * (double)(1UL << digest_bits))
            return 4;

          (bookpos + (signed long int)i)->key = HashKey;
          newpos = newpos + 1;
          bookcnt = bookcnt + 1;
          goto __CPROVER_DUMP_L7;
        }

        else
          bookhashcollisions = bookhashcollisions + 1;
      }

  __CPROVER_DUMP_L7:
    ;
    if((signed int)side == 0)
    {
      if((signed int)result == 1)
        (bookpos + (signed long int)i)->wins = (bookpos + (signed long int)i)->wins + 1;

      else
        if((signed int)result == 2)
          (bookpos + (signed long int)i)->losses = (bookpos + (signed long int)i)->losses + 1;

        else
          if((signed int)result == 3)
            (bookpos + (signed long int)i)->draws = (bookpos + (signed long int)i)->draws + 1;

    }

    else
      if((signed int)result == 1)
        (bookpos + (signed long int)i)->losses = (bookpos + (signed long int)i)->losses + 1;

      else
        if((signed int)result == 2)
          (bookpos + (signed long int)i)->wins = (bookpos + (signed long int)i)->wins + 1;

        else
          if((signed int)result == 3)
            (bookpos + (signed long int)i)->draws = (bookpos + (signed long int)i)->draws + 1;

    return 0;
  }
}

// BookBuilderClose
// file book.c line 421
signed int BookBuilderClose(void)
{
  struct _IO_FILE *wfp;
  unsigned int i;
  signed int errcode = 0;
  wfp=fopen("book.dat", "wb");
  signed int return_value_write_magic$1;
  signed int return_value_write_size$2;
  signed int return_value_fclose$5;
  if(wfp == ((struct _IO_FILE *)NULL))
    errcode = 3;

  else
  {
    return_value_write_magic$1=write_magic(wfp);
    if(!(return_value_write_magic$1 == 0))
      errcode = 3;

    else
    {
      return_value_write_size$2=write_size(wfp, (unsigned int)bookcnt);
      if(!(return_value_write_size$2 == 0))
        errcode = 3;

      else
      {
        i = (unsigned int)0;
        for( ; !((unsigned long int)i >= 1UL << digest_bits); i = i + 1u)
        {
          signed int return_value_is_empty$4;
          return_value_is_empty$4=is_empty(i);
          if(return_value_is_empty$4 == 0)
          {
            book_to_buf(i);
            unsigned long int return_value_fwrite$3;
            return_value_fwrite$3=fwrite((const void *)&buf, sizeof(unsigned char [14l]) /*14ul*/ , (unsigned long int)1, wfp);
            if(!(return_value_fwrite$3 == 1ul))
            {
              errcode = 3;
              goto bailout;
            }

          }

        }
        printf("Got %d hash collisions\n", bookhashcollisions);
      }
    }

  bailout:
    ;
    return_value_fclose$5=fclose(wfp);
    if(!(return_value_fclose$5 == 0))
      errcode = 3;

  }

bailout_noclose:
  ;
  free((void *)bookpos);
  book_allocated = 0;
  bookloaded = 0;
  return errcode;
}

// BookBuilderOpen
// file book.c line 304
signed int BookBuilderOpen(void)
{
  struct _IO_FILE *rfp;
  struct _IO_FILE *wfp;
  signed int res;
  rfp=fopen("book.dat", "rb");
  if(!(rfp == ((struct _IO_FILE *)NULL)))
  {
    printf("Opened existing book!\n");
    signed int return_value_check_magic$1;
    return_value_check_magic$1=check_magic(rfp);
    if(return_value_check_magic$1 == 0)
    {
      fprintf(stderr, "File %s does not conform to the current format.\nConsider rebuilding your book.\n", (const void *)"book.dat");
      return 1;
    }

    digest_bits = 20;
    read_size(rfp);
    res=read_book(rfp);
    fclose(rfp);
    if(!(res == 0))
    {
      fclose(rfp);
      return res;
    }

    printf("Read %d book positions\n", bookcnt);
    printf("Got %d hash collisions\n", bookhashcollisions);
  }

  else
  {
    wfp=fopen("book.dat", "w+b");
    if(wfp == ((struct _IO_FILE *)NULL))
    {
      signed int *return_value___errno_location$2;
      return_value___errno_location$2=__errno_location();
      char *return_value_strerror$3;
      return_value_strerror$3=strerror(*return_value___errno_location$2);
      fprintf(stderr, "Could not create %s file: %s\n", (const void *)"book.dat", return_value_strerror$3);
      return 3;
    }

    signed int return_value_write_magic$6;
    return_value_write_magic$6=write_magic(wfp);
    if(!(return_value_write_magic$6 == 0))
    {
      signed int *return_value___errno_location$4;
      return_value___errno_location$4=__errno_location();
      char *return_value_strerror$5;
      return_value_strerror$5=strerror(*return_value___errno_location$4);
      fprintf(stderr, "Could not write to %s: %s\n", (const void *)"book.dat", return_value_strerror$5);
      return 3;
    }

    signed int return_value_fclose$9;
    return_value_fclose$9=fclose(wfp);
    if(!(return_value_fclose$9 == 0))
    {
      signed int *return_value___errno_location$7;
      return_value___errno_location$7=__errno_location();
      char *return_value_strerror$8;
      return_value_strerror$8=strerror(*return_value___errno_location$7);
      fprintf(stderr, "Could not write to %s: %s\n", (const void *)"book.dat", return_value_strerror$8);
      return 3;
    }

    printf("Created new book %s!\n", (const void *)"book.dat");
    rfp=fopen("book.dat", "rb");
    if(rfp == ((struct _IO_FILE *)NULL))
    {
      signed int *return_value___errno_location$10;
      return_value___errno_location$10=__errno_location();
      char *return_value_strerror$11;
      return_value_strerror$11=strerror(*return_value___errno_location$10);
      fprintf(stderr, "Could not open %s for reading: %s\n", (const void *)"book.dat", return_value_strerror$11);
      return 3;
    }

    digest_bits = 20;
    signed int return_value_read_book$12;
    return_value_read_book$12=read_book(wfp);
    if(return_value_read_book$12 == 7)
      return 7;

  }
  return 0;
}

// BookPGNReadFromFile
// file common.h line 620
void BookPGNReadFromFile(const char *file)
{
  struct _IO_FILE *fp;
  signed int ngames = 0;
  signed long int t1;
  signed long int t2;
  double et;
  signed int error;
  et = 0.0;
  t1=time((signed long int *)(void *)0);
  fp=fopen(file, "r");
  if(fp == ((struct _IO_FILE *)NULL))
  {
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    char *return_value_strerror$2;
    return_value_strerror$2=strerror(*return_value___errno_location$1);
    fprintf(stderr, "Cannot open file %s: %s\n", file, return_value_strerror$2);
    goto __CPROVER_DUMP_L12;
  }

  yyin = fp;
  signed int return_value_BookBuilderOpen$3;
  return_value_BookBuilderOpen$3=BookBuilderOpen();
  if(return_value_BookBuilderOpen$3 == 0)
  {
    existpos = 0;
    newpos = existpos;
    data_dest = (enum data_destination_t)DEST_BOOK;
    while((_Bool)1)
    {
      InitVars();
      NewPosition();
      do
      {
        flags = flags & (unsigned int)~0x0008;
        dbg_printf("Clear 0x%x\n", 0x0008);
      }
      while((_Bool)0);
      do
      {
        flags = flags & (unsigned int)~0x0004;
        dbg_printf("Clear 0x%x\n", 0x0004);
      }
      while((_Bool)0);
      opprating = 0;
      myrating = opprating;
      error=yylex();
      if(!(error == 0))
        break;

      ngames = ngames + 1;
      if(ngames % 10 == 0)
        printf("Games processed: %d\r", ngames);

      fflush(stdout);
    }
    fclose(fp);
    signed int return_value_BookBuilderClose$4;
    return_value_BookBuilderClose$4=BookBuilderClose();
    if(!(return_value_BookBuilderClose$4 == 0))
      perror("Error writing opening book during BookBuilderClose");

    InitVars();
    NewPosition();
    do
    {
      flags = flags & (unsigned int)~0x0008;
      dbg_printf("Clear 0x%x\n", 0x0008);
    }
    while((_Bool)0);
    do
    {
      flags = flags & (unsigned int)~0x0004;
      dbg_printf("Clear 0x%x\n", 0x0004);
    }
    while((_Bool)0);
    opprating = 0;
    myrating = opprating;
    t2=time((signed long int *)(void *)0);
    double return_value_difftime$5;
    return_value_difftime$5=difftime(t2, t1);
    et = et + return_value_difftime$5;
    putchar$link1(10);
    if(et < 0.5)
      et = 1.0;

    printf("Time = %.0f seconds\n", et);
    printf("Games compiled: %d\n", ngames);
    printf("Games per second: %f\n", (double)ngames / et);
    printf("Positions scanned: %d\n", newpos + existpos);
    printf("Positions per second: %f\n", (double)(newpos + existpos) / et);
    printf("New & unique added: %d positions\n", newpos);
    printf("Duplicates not added: %d positions\n", existpos);
  }


__CPROVER_DUMP_L12:
  ;
}

// BookQuery
// file book.c line 482
signed int BookQuery(signed int BKquery)
{
  signed int i;
  signed int j;
  signed int k;
  signed int icnt = 0;
  signed int mcnt;
  signed int found;
  signed int tot;
  signed int maxdistribution;
  signed int matches[100l];
  struct anonymous m[200l];
  struct anonymous pref[200l];
  /* tag-#anon#lST[U16'wins'||U16'losses'||U16'draws'|] */
struct anonymous$8
{
  // wins
  unsigned short int wins;
  // losses
  unsigned short int losses;
  // draws
  unsigned short int draws;
};

/* */
  ;
  struct anonymous$8 r[200l];
  struct _IO_FILE *rfp = (struct _IO_FILE *)(void *)0;
  struct anonymous *p;
  signed short int side;
  signed short int xside;
  signed short int temp;
  unsigned int booksize;
  signed int res;
  signed int return_value_is_empty$3;
  signed int tmp_if_expr$4;
  if(book_allocated == 0 && !(bookloaded == 0))
    return 5;

  else
  {
    if(bookloaded == 0)
    {
      const char * const *booktry;
      bookloaded = 1;
      booktry = bookbin;
      for( ; !(*booktry == ((const char *)NULL)); booktry = booktry + 1l)
      {
        if((1024u & flags) == 0u)
          fprintf(ofp, "Looking for opening book in %s...\n", *booktry);

        rfp=fopen(*booktry, "rb");
        if(!(rfp == ((struct _IO_FILE *)NULL)))
        {
          if((1024u & flags) == 0u)
            fprintf(ofp, "Read opening book (%s)...\n", *booktry);

          signed int return_value_check_magic$1;
          return_value_check_magic$1=check_magic(rfp);
          if(return_value_check_magic$1 == 0)
          {
            fprintf(stderr, " File %s does not conform to the current format.\n Consider rebuilding it.\n\n", *booktry);
            fclose(rfp);
            rfp = (struct _IO_FILE *)(void *)0;
          }

          else
            break;
        }

      }
      if(rfp == ((struct _IO_FILE *)NULL))
      {
        if((1024u & flags) == 0u || BKquery == 1)
          fprintf(ofp, " No book found.\n\n");

        return 5;
      }

      if((1024u & flags) == 0u)
        fprintf(ofp, "Loading book from %s.\n", *booktry);

      unsigned int return_value_read_size$2;
      return_value_read_size$2=read_size(rfp);
      booksize = (unsigned int)((double)return_value_read_size$2 * 1.06);
      digest_bits = 1;
      for( ; !(booksize == 0u); booksize = booksize >> 1)
        digest_bits = digest_bits + 1;
      res=read_book(rfp);
      if(!(res == 0))
        return res;

      if((1024u & flags) == 0u)
        fprintf(ofp, "%d hash collisions... ", bookhashcollisions);

    }

    mcnt = -1;
    side = board.side;
    xside = (signed short int)(1 ^ (signed int)side);
    TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
    GenMoves((signed short int)1);
    FilterIllegalMoves((signed short int)1);
    p = TreePtr[(signed long int)1];
    for( ; !(p >= TreePtr[2l]); p = p + 1l)
    {
      MakeMove((signed int)side, &p->move);
      m[(signed long int)icnt].move = p->move;
      posshash[(signed long int)icnt] = HashKey;
      icnt = icnt + 1;
      UnmakeMove((signed int)xside, &p->move);
    }
    i = 0;
    for( ; !(i >= icnt); i = i + 1)
    {
      j = (signed int)(posshash[(signed long int)i] & (1UL << digest_bits) - (unsigned long int)1);
      do
      {
        return_value_is_empty$3=is_empty((unsigned int)j);
        if(!(return_value_is_empty$3 == 0))
          break;

        if(posshash[(signed long int)i] == (bookpos + (signed long int)j)->key)
        {
          found = 0;
          k = 0;
          for( ; !(k >= mcnt); k = k + 1)
            if(matches[(signed long int)k] == i)
            {
              found = 1;
              break;
            }

          if(found == 0)
          {
            mcnt = mcnt + 1;
            matches[(signed long int)mcnt] = i;
            pref[(signed long int)mcnt].move = m[(signed long int)matches[(signed long int)mcnt]].move;
            r[(signed long int)i].losses = (bookpos + (signed long int)j)->losses;
            r[(signed long int)i].wins = (bookpos + (signed long int)j)->wins;
            r[(signed long int)i].draws = (bookpos + (signed long int)j)->draws;
            if((signed int)r[(signed long int)i].draws + (signed int)r[(signed long int)i].losses + (signed int)r[(signed long int)i].wins >= 2)
              tmp_if_expr$4 = (signed int)r[(signed long int)i].wins + (signed int)r[(signed long int)i].losses + (signed int)r[(signed long int)i].draws;

            else
              tmp_if_expr$4 = 1;
            m[(signed long int)i].score = (100 * ((signed int)r[(signed long int)i].wins + (signed int)r[(signed long int)i].draws / 2)) / tmp_if_expr$4 + (signed int)r[(signed long int)i].wins / 2;
            pref[(signed long int)mcnt].score = m[(signed long int)i].score;
          }

          if(mcnt >= 100)
          {
            fprintf(ofp, " Too many matches in book.\n\n");
            goto fini;
          }

          break;
        }

        j = (signed int)((unsigned long int)j + (posshash[(signed long int)i] >> digest_bits | (unsigned long int)1) & (1UL << digest_bits) - (unsigned long int)1);
      }
      while((_Bool)1);
    }

  fini:
    ;
    if((1024u & flags) == 0u || BKquery == 1)
    {
      fprintf(ofp, " Opening database: %d book positions.\n", bookcnt);
      if(mcnt == -1)
        fprintf(ofp, " In this position, there is no book move.\n\n");

      else
        if(mcnt == 0)
          fprintf(ofp, " In this position, there is one book move:\n");

        else
          fprintf(ofp, " In this position, there are %d book moves:\n", mcnt + 1);
    }

    if(mcnt == -1)
      return 6;

    else
    {
      k = 0;
      if(!(mcnt == -1))
      {
        if((1024u & flags) == 0u || BKquery == 1)
        {
          i = 0;
          for( ; mcnt >= i; i = i + 1)
            if((1024u & flags) == 0u || BKquery == 1)
            {
              SANMove(m[(signed long int)matches[(signed long int)i]].move, 1);
              tot = (signed int)r[(signed long int)matches[(signed long int)i]].wins + (signed int)r[(signed long int)matches[(signed long int)i]].draws + (signed int)r[(signed long int)matches[(signed long int)i]].losses;
              fprintf(ofp, " %s(%2.0f/%d/%d/%d) ", (const void *)SANmv, (100.0 * ((double)r[(signed long int)matches[(signed long int)i]].wins + (double)r[(signed long int)matches[(signed long int)i]].draws / 2.0)) / (double)tot, r[(signed long int)matches[(signed long int)i]].wins, r[(signed long int)matches[(signed long int)i]].losses, r[(signed long int)matches[(signed long int)i]].draws);
              if((1 + i) % 4 == 0)
                fputc(10, ofp);

            }

          if((1024u & flags) == 0u || BKquery == 1)
          {
            if(!(i % 4 == 0))
              fprintf(ofp, " \n \n");

          }

        }

        if((signed int)bookmode == 1)
        {
          k=rand();
          k = k % (mcnt + 1);
          RootPV = m[(signed long int)matches[(signed long int)k]].move;
          if((1024u & flags) == 0u)
          {
            printf("\n(Random picked move #%d %s%s from above list)\n", k, (const void *)algbr[(signed long int)(RootPV >> 6 & 0x003F)], (const void *)algbr[(signed long int)(RootPV & 0x003F)]);
            tot = (signed int)r[(signed long int)matches[(signed long int)k]].wins + (signed int)r[(signed long int)matches[(signed long int)k]].draws + (signed int)r[(signed long int)matches[(signed long int)k]].losses;
            if(!(tot == 0))
              printf("B p=%2.0f\n", (100.0 * (double)((signed int)r[(signed long int)matches[(signed long int)k]].wins + (signed int)r[(signed long int)matches[(signed long int)k]].draws)) / (double)tot);

            else
              printf("p=NO EXPERIENCES\n");
          }

        }

        else
          if((signed int)bookmode == 2)
          {
            qsort((void *)&pref, (unsigned long int)(mcnt + 1), sizeof(struct anonymous) /*8ul*/ , compare);
            RootPV = pref[(signed long int)0].move;
          }

          else
            if((signed int)bookmode == 3)
            {
              qsort((void *)&pref, (unsigned long int)(mcnt + 1), sizeof(struct anonymous) /*8ul*/ , compare);
              RootPV = pref[(signed long int)mcnt].move;
            }

            else
              if((signed int)bookmode == 4)
              {
                qsort((void *)&pref, (unsigned long int)(mcnt + 1), sizeof(struct anonymous) /*8ul*/ , compare);
                i = 0;
                for( ; mcnt >= i; i = i + 1)
                {
                  if((1024u & flags) == 0u || BKquery == 1)
                  {
                    SANMove(pref[(signed long int)i].move, 1);
                    printf(" %s(%d) ", (const void *)SANmv, pref[(signed long int)i].score);
                  }

                  m[(signed long int)i].move = pref[(signed long int)i].move;
                  if((1024u & flags) == 0u || BKquery == 1)
                  {
                    if((1 + i) % 8 == 0)
                      fputc(10, ofp);

                  }

                }
                if((1024u & flags) == 0u || BKquery == 1)
                {
                  if(!(i % 8 == 0))
                    fprintf(ofp, " \n \n");

                }

                temp = (signed short int)((signed int)bookfirstlast > mcnt + 1 ? mcnt + 1 : (signed int)bookfirstlast);
                maxdistribution = 0;
                i = 0;
                for( ; !(i >= (signed int)temp); i = i + 1)
                  maxdistribution = maxdistribution + pref[(signed long int)i].score;
                if(maxdistribution == 0)
                  return 6;

                signed int return_value_rand$5;
                return_value_rand$5=rand();
                k = return_value_rand$5 % maxdistribution;
                maxdistribution = 0;
                i = 0;
                for( ; !(i >= (signed int)temp); i = i + 1)
                {
                  maxdistribution = maxdistribution + pref[(signed long int)i].score;
                  if(k >= maxdistribution + -pref[(signed long int)i].score)
                  {
                    if(!(k >= maxdistribution))
                    {
                      k = i;
                      RootPV = m[(signed long int)k].move;
                      break;
                    }

                  }

                }
              }

      }

      return 0;
    }
  }
}

// CTL
// file eval.c line 356
static inline signed int CTL(signed short int sq, signed short int piece, signed short int side)
{
  signed int s;
  signed int CTL$$1$$n;
  signed int EnemyKing;
  signed int FriendlyKing;
  unsigned long int controlled;
  s = 0;
  EnemyKing = (signed int)board.king[(signed long int)(1 ^ (signed int)side)];
  FriendlyKing = (signed int)board.king[(signed long int)side];
  controlled=AttackXFrom((signed int)sq, (signed int)side);
  unsigned char return_value_nbits$1;
  return_value_nbits$1=nbits$link2(controlled & boxes[(signed long int)0]);
  CTL$$1$$n = (signed int)return_value_nbits$1;
  s = s + 4 * CTL$$1$$n;
  unsigned char return_value_nbits$2;
  return_value_nbits$2=nbits$link2(controlled & DistMap[(signed long int)EnemyKing][(signed long int)2]);
  CTL$$1$$n = (signed int)return_value_nbits$2;
  s = s + CTL$$1$$n;
  unsigned char return_value_nbits$3;
  return_value_nbits$3=nbits$link2(controlled & DistMap[(signed long int)FriendlyKing][(signed long int)2]);
  CTL$$1$$n = (signed int)return_value_nbits$3;
  s = s + CTL$$1$$n;
  unsigned char return_value_nbits$4;
  return_value_nbits$4=nbits$link2(controlled);
  CTL$$1$$n = (signed int)return_value_nbits$4;
  s = s + 4 * CTL$$1$$n;
  return s;
}

// CalcHashKey
// file common.h line 625
void CalcHashKey(void)
{
  signed int sq;
  signed int piece;
  signed int color;
  unsigned long int b;
  HashKey = (unsigned long int)0;
  PawnHashKey = HashKey;
  color = 0;
  for( ; !(color >= 2); color = color + 1)
  {
    piece = 1;
    for( ; !(piece >= 7); piece = piece + 1)
    {
      b = board.b[(signed long int)color][(signed long int)piece];
      while(!(b == 0ul))
      {
        unsigned char return_value_leadz$1;
        return_value_leadz$1=leadz$link4(b);
        sq = (signed int)return_value_leadz$1;
        b = b & NotBitPosArray[(signed long int)sq];
        HashKey = HashKey ^ hashcode[(signed long int)color][(signed long int)piece][(signed long int)sq];
        if(piece == 1)
          PawnHashKey = PawnHashKey ^ hashcode[(signed long int)color][(signed long int)piece][(signed long int)sq];

      }
    }
  }
  if((signed int)board.ep >= 0)
    HashKey = HashKey ^ ephash[(signed long int)board.ep];

  if(!((0x0001 & (signed int)board.flag) == 0))
    HashKey = HashKey ^ WKCastlehash;

  if(!((0x0002 & (signed int)board.flag) == 0))
    HashKey = HashKey ^ WQCastlehash;

  if(!((0x0004 & (signed int)board.flag) == 0))
    HashKey = HashKey ^ BKCastlehash;

  if(!((0x0008 & (signed int)board.flag) == 0))
    HashKey = HashKey ^ BQCastlehash;

  if((signed int)board.side == 1)
    HashKey = HashKey ^ Sidehash;

}

// CalcHashSize
// file common.h line 537
void CalcHashSize(signed int tablesize)
{
  signed int i = tablesize < 1024 ? 1024 : tablesize;
  if(i >= 1073741824)
  {
    printf("Max hashsize exceeded\n");
    i = 107374183;
  }

  TTHashMask = (unsigned long int)0;
  do
  {
    i = i >> 1;
    if(!(i >= 1))
      break;

    TTHashMask = TTHashMask << 1;
    TTHashMask = TTHashMask | (unsigned long int)1;
  }
  while((_Bool)1);
  HashSize = (unsigned int)(TTHashMask + (unsigned long int)1);
  printf("Adjusting HashSize to %d slots\n", HashSize);
  i = 512;
  PHashMask = (unsigned long int)0;
  do
  {
    i = i >> 1;
    if(!(i >= 1))
      break;

    PHashMask = PHashMask << 1;
    PHashMask = PHashMask | (unsigned long int)1;
  }
  while((_Bool)1);
}

// CleanupInput
// file input.c line 190
void CleanupInput(void)
{
  pthread_join(input_thread, (void **)(void *)0);
}

// DBListPlayer
// file common.h line 709
void DBListPlayer(const char *style)
{
  signed int i;
  DBReadPlayer();
  DBSortPlayer(style);
  i = 0;
  for( ; !(i >= totalplayers); i = i + 1)
  {
    printf("%s %2.0f%% %d %d %d\n", (const void *)playerdb[(signed long int)i].player, (100.0 * (double)((float)playerdb[(signed long int)i].wins + (float)playerdb[(signed long int)i].draws / (float)2)) / (double)(playerdb[(signed long int)i].wins + playerdb[(signed long int)i].draws + playerdb[(signed long int)i].losses), playerdb[(signed long int)i].wins, playerdb[(signed long int)i].losses, playerdb[(signed long int)i].draws);
    if((1 + i) % 10 == 0)
    {
      printf("[Type a character to continue.]\n");
      getchar();
    }

  }
}

// DBReadPlayer
// file players.c line 129
void DBReadPlayer(void)
{
  struct _IO_FILE *rfp;
  signed int DBReadPlayer$$1$$n;
  totalplayers = 0;
  rfp=fopen("players.dat", "r");
  signed int return_value_feof$1;
  if(!(rfp == ((struct _IO_FILE *)NULL)))
  {
    do
    {
      return_value_feof$1=feof(rfp);
      if(!(return_value_feof$1 == 0))
        break;

      DBReadPlayer$$1$$n=fscanf(rfp, "%49s %d %d %d\n", (const void *)playerdb[(signed long int)totalplayers].player, &playerdb[(signed long int)totalplayers].wins, &playerdb[(signed long int)totalplayers].losses, &playerdb[(signed long int)totalplayers].draws);
      if(DBReadPlayer$$1$$n == 4)
        totalplayers = totalplayers + 1;

    }
    while((_Bool)1);
    fclose(rfp);
  }

}

// DBSearchPlayer
// file players.c line 147
signed int DBSearchPlayer(const char *player)
{
  signed int index = -1;
  signed int i = 0;
  unsigned long int return_value_strlen$1;
  signed int return_value_strncmp$2;
  for( ; !(i >= totalplayers); i = i + 1)
  {
    return_value_strlen$1=strlen(playerdb[(signed long int)i].player);
    return_value_strncmp$2=strncmp(playerdb[(signed long int)i].player, player, return_value_strlen$1);
    if(return_value_strncmp$2 == 0)
    {
      index = i;
      break;
    }

  }
  return index;
}

// DBSortPlayer
// file players.c line 83
void DBSortPlayer(const char *style)
{
  signed int return_value_strncmp$3;
  return_value_strncmp$3=strncmp(style, "score", (unsigned long int)5);
  signed int return_value_strncmp$2;
  signed int return_value_strncmp$1;
  if(return_value_strncmp$3 == 0)
    qsort((void *)&playerdb, (unsigned long int)totalplayers, sizeof(struct anonymous$7) /*64ul*/ , scorecompare);

  else
  {
    return_value_strncmp$2=strncmp(style, "name", (unsigned long int)4);
    if(return_value_strncmp$2 == 0)
      qsort((void *)&playerdb, (unsigned long int)totalplayers, sizeof(struct anonymous$7) /*64ul*/ , namecompare);

    else
    {
      return_value_strncmp$1=strncmp(style, "reverse", (unsigned long int)7);
      if(return_value_strncmp$1 == 0)
        qsort((void *)&playerdb, (unsigned long int)totalplayers, sizeof(struct anonymous$7) /*64ul*/ , rscorecompare);

    }
  }
}

// DBUpdatePlayer
// file common.h line 713
void DBUpdatePlayer(const char *player, const char *resultstr)
{
  const char *p;
  char *x;
  signed int index;
  signed int result = 4;
  p = player;
  x = lname;
  strcpy(lname, player);
  char *tmp_post$1;
  const char *tmp_post$2;
  while((_Bool)1)
  {
    if(!((signed int)*p == 32))
    {
      tmp_post$1 = x;
      x = x + 1l;
      tmp_post$2 = p;
      p = p + 1l;
      *tmp_post$1 = *tmp_post$2;
    }

    else
      p = p + 1l;
    if((signed int)*p == 0)
      break;

  }
  *x = (char)0;
  memset((void *)playerdb, 0, sizeof(struct anonymous$7 [500l]) /*32000ul*/ );
  DBReadPlayer();
  index=DBSearchPlayer(lname);
  if(index == -1)
  {
    strcpy(playerdb[(signed long int)totalplayers].player, lname);
    playerdb[(signed long int)totalplayers].wins = 0;
    playerdb[(signed long int)totalplayers].losses = 0;
    playerdb[(signed long int)totalplayers].draws = 0;
    index = totalplayers;
    totalplayers = totalplayers + 1;
  }

  signed int return_value_strncmp$5;
  return_value_strncmp$5=strncmp(resultstr, "1-0", (unsigned long int)3);
  signed int return_value_strncmp$4;
  signed int return_value_strncmp$3;
  if(return_value_strncmp$5 == 0)
    result = 1;

  else
  {
    return_value_strncmp$4=strncmp(resultstr, "0-1", (unsigned long int)3);
    if(return_value_strncmp$4 == 0)
      result = 2;

    else
    {
      return_value_strncmp$3=strncmp(resultstr, "1/2-1/2", (unsigned long int)7);
      if(return_value_strncmp$3 == 0)
        result = 3;

    }
  }
  if(result == 1 && computerplays == 0 || result == 2 && computerplays == 1)
    playerdb[(signed long int)index].wins = playerdb[(signed long int)index].wins + 1;

  else
    if(result == 1 && computerplays == 1 || result == 2 && computerplays == 0)
      playerdb[(signed long int)index].losses = playerdb[(signed long int)index].losses + 1;

    else
      playerdb[(signed long int)index].draws = playerdb[(signed long int)index].draws + 1;
  DBWritePlayer();
}

// DBWritePlayer
// file players.c line 112
void DBWritePlayer(void)
{
  signed int i;
  struct _IO_FILE *wfp;
  DBSortPlayer("reverse");
  wfp=fopen("players.dat", "w");
  if(!(wfp == ((struct _IO_FILE *)NULL)))
  {
    i = 0;
    for( ; !(i >= totalplayers); i = i + 1)
      fprintf(wfp, "%s %d %d %d\n", (const void *)playerdb[(signed long int)i].player, playerdb[(signed long int)i].wins, playerdb[(signed long int)i].losses, playerdb[(signed long int)i].draws);
  }

  fclose(wfp);
}

// DoubleQR7
// file eval.c line 643
signed int DoubleQR7(signed short int side)
{
  signed int xside = 1 ^ (signed int)side;
  unsigned char return_value_nbits$1;
  return_value_nbits$1=nbits$link2((board.b[(signed long int)side][(signed long int)5] | board.b[(signed long int)side][(signed long int)4]) & brank7[(signed long int)side]);
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  if((signed int)return_value_nbits$1 >= 2)
  {
    if(!((board.b[(signed long int)xside][6l] & brank8[(signed long int)side]) == 0ul))
      tmp_if_expr$2 = (_Bool)1;

    else
      tmp_if_expr$2 = (board.b[(signed long int)xside][(signed long int)1] & brank7[(signed long int)side]) != 0ul ? (_Bool)1 : (_Bool)0;
    tmp_if_expr$3 = tmp_if_expr$2 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  if(tmp_if_expr$3)
    return 30;

  else
    return 0;
}

// EndSearch
// file common.h line 614
void EndSearch(signed int sig)
{
  do
  {
    flags = flags | (unsigned int)0x0010;
    dbg_printf("Set   0x%x\n", 0x0010);
  }
  while((_Bool)0);
  signal(2, EndSearch);
}

// EvalHung
// file common.h line 640
signed int EvalHung(signed int side)
{
  unsigned long int c;
  unsigned long int EvalHung$$1$$n;
  unsigned long int b;
  unsigned long int r;
  unsigned long int q;
  signed int xside = 1 ^ side;
  hunged[(signed long int)side] = 0;
  EvalHung$$1$$n = Ataks[(signed long int)xside][(signed long int)1] & board.b[(signed long int)side][(signed long int)2];
  EvalHung$$1$$n = EvalHung$$1$$n | Ataks[(signed long int)xside][(signed long int)0] & board.b[(signed long int)side][(signed long int)2] & ~Ataks[(signed long int)side][(signed long int)0];
  b = Ataks[(signed long int)xside][(signed long int)1] & board.b[(signed long int)side][(signed long int)3];
  b = b | Ataks[(signed long int)xside][(signed long int)0] & board.b[(signed long int)side][(signed long int)3] & ~Ataks[(signed long int)side][(signed long int)0];
  r = Ataks[(signed long int)xside][(signed long int)1] | Ataks[(signed long int)xside][(signed long int)2] | Ataks[(signed long int)xside][(signed long int)3];
  r = r & board.b[(signed long int)side][(signed long int)4];
  r = r | Ataks[(signed long int)xside][(signed long int)0] & board.b[(signed long int)side][(signed long int)4] & ~Ataks[(signed long int)side][(signed long int)0];
  q = Ataks[(signed long int)xside][(signed long int)1] | Ataks[(signed long int)xside][(signed long int)2] | Ataks[(signed long int)xside][(signed long int)3] | Ataks[(signed long int)xside][(signed long int)4];
  q = q & board.b[(signed long int)side][(signed long int)5];
  q = q | Ataks[(signed long int)xside][(signed long int)0] & board.b[(signed long int)side][(signed long int)5] & ~Ataks[(signed long int)side][(signed long int)0];
  c = EvalHung$$1$$n | b | r | q;
  unsigned char return_value_nbits$1;
  if(!(c == 0ul))
  {
    return_value_nbits$1=nbits$link4(c);
    hunged[(signed long int)side] = hunged[(signed long int)side] + (signed int)return_value_nbits$1;
  }

  if(!((board.b[(signed long int)side][6l] & Ataks[(signed long int)xside][0l]) == 0ul))
    hunged[(signed long int)side] = hunged[(signed long int)side] + 1;

  return hunged[(signed long int)side];
}

// Evaluate
// file common.h line 636
signed int Evaluate(signed int alpha, signed int beta)
{
  signed int side;
  signed int xside;
  signed int piece;
  signed int s;
  signed int s1;
  signed int score;
  unsigned long int *b;
  side = (signed int)board.side;
  xside = 1 ^ side;
  signed int return_value_KPK$1;
  signed int return_value_LoneKing$2;
  signed int return_value_LoneKing$3;
  _Bool tmp_if_expr$4;
  signed int return_value_ScoreDev$5;
  signed int return_value_ScoreDev$6;
  signed int return_value_ScoreP$7;
  signed int return_value_ScoreP$8;
  signed int return_value_ScoreK$9;
  signed int return_value_ScoreK$10;
  signed int return_value_BishopTrapped$11;
  signed int return_value_BishopTrapped$12;
  signed int return_value_DoubleQR7$13;
  signed int return_value_DoubleQR7$14;
  _Bool tmp_if_expr$19;
  signed int tmp_if_expr$17;
  signed int tmp_if_expr$18;
  _Bool tmp_if_expr$24;
  _Bool tmp_if_expr$26;
  _Bool tmp_if_expr$25;
  _Bool tmp_if_expr$27;
  _Bool tmp_if_expr$28;
  if(alpha >= 32513 || !(beta >= 255))
    return (signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)];

  else
    if((signed int)board.material[0l] + (signed int)board.material[1l] == 100)
    {
      return_value_KPK$1=KPK(side);
      return return_value_KPK$1;
    }

    else
      if((signed int)board.material[(signed long int)xside] == 0)
      {
        if(!(board.b[(signed long int)side][1l] == 0x0000000000000000ULL))
          goto __CPROVER_DUMP_L3;

        return_value_LoneKing$2=LoneKing(side, xside);
        return return_value_LoneKing$2;
      }

      else
      {

      __CPROVER_DUMP_L3:
        ;
        if((signed int)board.material[(signed long int)side] == 0)
        {
          if(!(board.b[(signed long int)xside][1l] == 0x0000000000000000ULL))
            goto __CPROVER_DUMP_L4;

          return_value_LoneKing$3=LoneKing(side, side);
          return return_value_LoneKing$3;
        }

        else
        {

        __CPROVER_DUMP_L4:
          ;
          EvalCall = EvalCall + 1ul;
          phase = 8 - ((signed int)board.material[(signed long int)0] + (signed int)board.material[(signed long int)1]) / 1150;
          b = board.b[(signed long int)0];
          pieces[(signed long int)0] = b[(signed long int)2] | b[(signed long int)3] | b[(signed long int)4] | b[(signed long int)5];
          b = board.b[(signed long int)1];
          pieces[(signed long int)1] = b[(signed long int)2] | b[(signed long int)3] | b[(signed long int)4] | b[(signed long int)5];
          s1 = (signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)];
          if(!(maxposnscore[(signed long int)side] + s1 >= alpha))
            tmp_if_expr$4 = (_Bool)1;

          else
            tmp_if_expr$4 = s1 - maxposnscore[(signed long int)xside] > beta ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$4)
          {
            if(phase >= 7)
              goto __CPROVER_DUMP_L7;

            score = s1;
          }

          else
          {

          __CPROVER_DUMP_L7:
            ;
            s = 0;
            return_value_ScoreDev$5=ScoreDev((signed short int)side);
            return_value_ScoreDev$6=ScoreDev((signed short int)xside);
            s = s + (return_value_ScoreDev$5 - return_value_ScoreDev$6);
            return_value_ScoreP$7=ScoreP((signed short int)side);
            return_value_ScoreP$8=ScoreP((signed short int)xside);
            s = s + (return_value_ScoreP$7 - return_value_ScoreP$8);
            return_value_ScoreK$9=ScoreK((signed short int)side);
            return_value_ScoreK$10=ScoreK((signed short int)xside);
            s = s + (return_value_ScoreK$9 - return_value_ScoreK$10);
            return_value_BishopTrapped$11=BishopTrapped((signed short int)side);
            return_value_BishopTrapped$12=BishopTrapped((signed short int)xside);
            s = s + (return_value_BishopTrapped$11 - return_value_BishopTrapped$12);
            return_value_DoubleQR7$13=DoubleQR7((signed short int)side);
            return_value_DoubleQR7$14=DoubleQR7((signed short int)xside);
            s = s + (return_value_DoubleQR7$13 - return_value_DoubleQR7$14);
            s1 = s + ((signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)]);
            if(!(lazyscore[(signed long int)side] + s1 >= alpha))
              tmp_if_expr$19 = (_Bool)1;

            else
              tmp_if_expr$19 = s1 - lazyscore[(signed long int)side] > beta ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$19)
              score = s1;

            else
            {
              EvalCnt = EvalCnt + 1ul;
              GenAtaks();
              signed int return_value_EvalHung$15;
              return_value_EvalHung$15=EvalHung(side);
              signed int return_value_EvalHung$16;
              return_value_EvalHung$16=EvalHung(xside);
              s1 = -20 * (return_value_EvalHung$15 - return_value_EvalHung$16);
              FindPins(&pinned);
              piece = 2;
              if(!(piece >= 6))
              {
                signed int return_value;
                return_value=ScorePiece[(signed long int)piece]((signed short int)side);
                signed int return_value_1;
                return_value_1=ScorePiece[(signed long int)piece]((signed short int)xside);
                s1 = s1 + (return_value - return_value_1);
                piece = piece + 1;
              }

              if(!(lazyscore[(signed long int)side] >= s1))
                tmp_if_expr$17 = s1;

              else
                tmp_if_expr$17 = lazyscore[(signed long int)side];
              lazyscore[(signed long int)side] = tmp_if_expr$17;
              if(!(s + s1 >= maxposnscore[(signed long int)side]))
                tmp_if_expr$18 = maxposnscore[(signed long int)side];

              else
                tmp_if_expr$18 = s + s1;
              maxposnscore[(signed long int)side] = tmp_if_expr$18;
              score = s + s1 + ((signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)]);
            }
          }

        next:
          ;
          if((signed int)board.material[(signed long int)side] + -((signed int)board.material[(signed long int)(1 ^ side)]) >= 200)
          {
            unsigned char return_value_nbits$20;
            return_value_nbits$20=nbits$link2(pieces[(signed long int)0] | pieces[(signed long int)1]);
            score = score + ((signed int)RootPieces - (signed int)return_value_nbits$20) * 4;
            unsigned char return_value_nbits$21;
            return_value_nbits$21=nbits$link2(board.b[(signed long int)0][(signed long int)1] | board.b[(signed long int)1][(signed long int)1]);
            score = score - ((signed int)RootPawns - (signed int)return_value_nbits$21) * 8;
          }

          else
            if(!((signed int)board.material[(signed long int)side] + -((signed int)board.material[(signed long int)(1 ^ side)]) >= -199))
            {
              unsigned char return_value_nbits$22;
              return_value_nbits$22=nbits$link2(pieces[(signed long int)0] | pieces[(signed long int)1]);
              score = score - ((signed int)RootPieces - (signed int)return_value_nbits$22) * 4;
              unsigned char return_value_nbits$23;
              return_value_nbits$23=nbits$link2(board.b[(signed long int)0][(signed long int)1] | board.b[(signed long int)1][(signed long int)1]);
              score = score + ((signed int)RootPawns - (signed int)return_value_nbits$23) * 8;
            }

          if(phase >= 6)
          {
            if(pieces[0l] == board.b[0l][3l])
            {
              if(pieces[1l] == board.b[1l][3l])
              {
                if(!((0x55AA55AA55AA55AAULL & pieces[0l]) == 0ul))
                  tmp_if_expr$24 = (pieces[(signed long int)1] & 0xAA55AA55AA55AA55ULL) != 0ul ? (_Bool)1 : (_Bool)0;

                else
                  tmp_if_expr$24 = (_Bool)0;
                if(tmp_if_expr$24)
                  tmp_if_expr$26 = (_Bool)1;

                else
                {
                  if(!((0xAA55AA55AA55AA55ULL & pieces[0l]) == 0ul))
                    tmp_if_expr$25 = (pieces[(signed long int)1] & 0x55AA55AA55AA55AAULL) != 0ul ? (_Bool)1 : (_Bool)0;

                  else
                    tmp_if_expr$25 = (_Bool)0;
                  tmp_if_expr$26 = tmp_if_expr$25 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$26)
                  score = score / 2;

              }

            }

          }

          if(score >= 1)
          {
            if(board.b[(signed long int)side][1l] == 0ul)
            {
              if(!((signed int)board.material[(signed long int)side] >= 550))
                tmp_if_expr$27 = (_Bool)1;

              else
                tmp_if_expr$27 = pieces[(signed long int)side] == board.b[(signed long int)side][(signed long int)2] ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$27)
                score = 0;

            }

          }

          if(!(score >= 0))
          {
            if(board.b[(signed long int)xside][1l] == 0ul)
            {
              if(!((signed int)board.material[(signed long int)xside] >= 550))
                tmp_if_expr$28 = (_Bool)1;

              else
                tmp_if_expr$28 = pieces[(signed long int)xside] == board.b[(signed long int)xside][(signed long int)2] ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$28)
                score = 0;

            }

          }

          return score;
        }
      }
}

// EvaluateDraw
// file common.h line 637
signed short int EvaluateDraw(void)
{
  unsigned long int *w;
  unsigned long int *b;
  signed int wm;
  signed int bm;
  signed int wn;
  signed int bn;
  _Bool tmp_if_expr$1;
  unsigned char return_value_nbits$4;
  _Bool tmp_if_expr$6;
  unsigned char return_value_nbits$5;
  unsigned char return_value_nbits$7;
  _Bool tmp_if_expr$9;
  unsigned char return_value_nbits$8;
  if(!(GameCnt + -Game50 >= 5))
    return (signed short int)0;

  else
    if(GameCnt + -Game50 >= 101)
      return (signed short int)1;

    else
    {
      w = board.b[(signed long int)0];
      b = board.b[(signed long int)1];
      if(!(w[1l] == 0ul))
        tmp_if_expr$1 = (_Bool)1;

      else
        tmp_if_expr$1 = b[(signed long int)1] != (unsigned long int)0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$1)
        return (signed short int)0;

      else
      {
        wm = (signed int)board.material[(signed long int)0];
        bm = (signed int)board.material[(signed long int)1];
        unsigned char return_value_nbits$2;
        return_value_nbits$2=nbits$link2(w[(signed long int)2]);
        wn = (signed int)return_value_nbits$2;
        unsigned char return_value_nbits$3;
        return_value_nbits$3=nbits$link2(b[(signed long int)2]);
        bn = (signed int)return_value_nbits$3;
        if((bm == 2 && bn == 2 || !(bm >= 550)) && (wm == 2 && wn == 2 || !(wm >= 550)))
          return (signed short int)1;

        else
        {
          if(!(wm >= 550))
          {
            if(bm == 2)
            {
              return_value_nbits$4=nbits$link2(board.b[(signed long int)1][(signed long int)3] & 0x55AA55AA55AA55AAULL);
              if((signed int)return_value_nbits$4 == 2)
                tmp_if_expr$6 = (_Bool)1;

              else
              {
                return_value_nbits$5=nbits$link2(board.b[(signed long int)1][(signed long int)3] & 0xAA55AA55AA55AA55ULL);
                tmp_if_expr$6 = (signed int)return_value_nbits$5 == 2 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$6)
                return (signed short int)1;

            }

          }

          if(!(bm >= 550))
          {
            if(wm == 2)
            {
              return_value_nbits$7=nbits$link2(board.b[(signed long int)0][(signed long int)3] & 0x55AA55AA55AA55AAULL);
              if((signed int)return_value_nbits$7 == 2)
                tmp_if_expr$9 = (_Bool)1;

              else
              {
                return_value_nbits$8=nbits$link2(board.b[(signed long int)0][(signed long int)3] & 0xAA55AA55AA55AA55ULL);
                tmp_if_expr$9 = (signed int)return_value_nbits$8 == 2 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$9)
                return (signed short int)1;

            }

          }

          return (signed short int)0;
        }
      }
    }
}

// FilterIllegalMoves
// file common.h line 571
void FilterIllegalMoves(signed short int ply)
{
  struct anonymous *p;
  signed int side;
  signed int xside;
  signed int check;
  signed int sq;
  side = (signed int)board.side;
  xside = 1 ^ side;
  sq = (signed int)board.king[(signed long int)side];
  p = TreePtr[(signed long int)ply];
  signed short int return_value_SqAtakd$1;
  signed short int return_value_SqAtakd$2;
  for( ; !(p >= TreePtr[(signed long int)(1 + (signed int)ply)]); p = p + 1l)
  {
    MakeMove(side, &p->move);
    if(!(cboard[(signed long int)(0x003F & p->move)] == 6))
    {
      return_value_SqAtakd$1=SqAtakd((signed short int)sq, (signed short int)xside);
      check = (signed int)return_value_SqAtakd$1;
    }

    else
    {
      return_value_SqAtakd$2=SqAtakd((signed short int)(p->move & 0x003F), (signed short int)xside);
      check = (signed int)return_value_SqAtakd$2;
    }
    UnmakeMove(xside, &p->move);
    if(!(check == 0))
    {
      TreePtr[(signed long int)((signed int)ply + 1)] = TreePtr[(signed long int)((signed int)ply + 1)] - 1l;
      *p = *TreePtr[(signed long int)((signed int)ply + 1)];
      p = p - 1l;
      GenCnt = GenCnt - 1ul;
    }

  }
}

// FindPins
// file atak.c line 416
void FindPins(unsigned long int *pin)
{
  signed int side;
  signed int xside;
  signed int sq;
  signed int sq1;
  unsigned long int b;
  unsigned long int c;
  unsigned long int e;
  unsigned long int f;
  unsigned long int t;
  unsigned long int *p;
  *pin = 0x0000000000000000ULL;
  t = board.friends[(signed long int)0] | board.friends[(signed long int)1];
  side = 0;
  unsigned char return_value_nbits$3;
  unsigned char return_value_nbits$6;
  unsigned char return_value_nbits$9;
  for( ; !(side >= 2); side = side + 1)
  {
    xside = 1 ^ side;
    p = board.b[(signed long int)xside];
    e = p[(signed long int)4] | p[(signed long int)5] | p[(signed long int)6];
    e = e | (p[(signed long int)3] | p[(signed long int)2]) & ~Ataks[(signed long int)xside][(signed long int)0];
    b = board.b[(signed long int)side][(signed long int)3];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$1;
      return_value_leadz$1=leadz(b);
      sq = (signed int)return_value_leadz$1;
      b = b & NotBitPosArray[(signed long int)sq];
      c = MoveArray[(signed long int)3][(signed long int)sq] & e;
      while(!(c == 0ul))
      {
        unsigned char return_value_leadz$2;
        return_value_leadz$2=leadz(c);
        sq1 = (signed int)return_value_leadz$2;
        c = c & NotBitPosArray[(signed long int)sq1];
        f = t & NotBitPosArray[(signed long int)sq] & FromToRay[(signed long int)sq1][(signed long int)sq];
        if(!((board.friends[(signed long int)xside] & f) == 0ul))
        {
          return_value_nbits$3=nbits(f);
          if((signed int)return_value_nbits$3 == 1)
            *pin = *pin | f;

        }

      }
    }
    e = p[(signed long int)5] | p[(signed long int)6];
    e = e | (p[(signed long int)4] | p[(signed long int)3] | p[(signed long int)2]) & ~Ataks[(signed long int)xside][(signed long int)0];
    b = board.b[(signed long int)side][(signed long int)4];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$4;
      return_value_leadz$4=leadz(b);
      sq = (signed int)return_value_leadz$4;
      b = b & NotBitPosArray[(signed long int)sq];
      c = MoveArray[(signed long int)4][(signed long int)sq] & e;
      while(!(c == 0ul))
      {
        unsigned char return_value_leadz$5;
        return_value_leadz$5=leadz(c);
        sq1 = (signed int)return_value_leadz$5;
        c = c & NotBitPosArray[(signed long int)sq1];
        f = t & NotBitPosArray[(signed long int)sq] & FromToRay[(signed long int)sq1][(signed long int)sq];
        if(!((board.friends[(signed long int)xside] & f) == 0ul))
        {
          return_value_nbits$6=nbits(f);
          if((signed int)return_value_nbits$6 == 1)
            *pin = *pin | f;

        }

      }
    }
    e = board.b[(signed long int)xside][(signed long int)6];
    e = e | (p[(signed long int)5] | p[(signed long int)4] | p[(signed long int)3] | p[(signed long int)2]) & ~Ataks[(signed long int)xside][(signed long int)0];
    b = board.b[(signed long int)side][(signed long int)5];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$7;
      return_value_leadz$7=leadz(b);
      sq = (signed int)return_value_leadz$7;
      b = b & NotBitPosArray[(signed long int)sq];
      c = MoveArray[(signed long int)5][(signed long int)sq] & e;
      while(!(c == 0ul))
      {
        unsigned char return_value_leadz$8;
        return_value_leadz$8=leadz(c);
        sq1 = (signed int)return_value_leadz$8;
        c = c & NotBitPosArray[(signed long int)sq1];
        f = t & NotBitPosArray[(signed long int)sq] & FromToRay[(signed long int)sq1][(signed long int)sq];
        if(!((board.friends[(signed long int)xside] & f) == 0ul))
        {
          return_value_nbits$9=nbits(f);
          if((signed int)return_value_nbits$9 == 1)
            *pin = *pin | f;

        }

      }
    }
  }
  goto __CPROVER_DUMP_L18;

__CPROVER_DUMP_L18:
  ;
}

// GenAtaks
// file atak.c line 87
void GenAtaks(void)
{
  signed int side;
  signed int sq;
  unsigned long int *a;
  unsigned long int b;
  unsigned long int *t;
  unsigned long int *a0;
  memset((void *)Ataks, 0, sizeof(unsigned long int [2l][7l]) /*112ul*/ );
  side = 0;
  for( ; !(side >= 2); side = side + 1)
  {
    a = board.b[(signed long int)side];
    t = &Ataks[(signed long int)side][(signed long int)2];
    b = a[(signed long int)2];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$1;
      return_value_leadz$1=leadz(b);
      sq = (signed int)return_value_leadz$1;
      b = b & NotBitPosArray[(signed long int)sq];
      *t = *t | MoveArray[(signed long int)2][(signed long int)sq];
    }
    t = &Ataks[(signed long int)side][(signed long int)3];
    b = a[(signed long int)3];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$2;
      return_value_leadz$2=leadz(b);
      sq = (signed int)return_value_leadz$2;
      b = b & NotBitPosArray[(signed long int)sq];
      *t = *t | Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])];
    }
    t = &Ataks[(signed long int)side][(signed long int)4];
    b = a[(signed long int)4];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$3;
      return_value_leadz$3=leadz(b);
      sq = (signed int)return_value_leadz$3;
      b = b & NotBitPosArray[(signed long int)sq];
      *t = *t | Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    }
    t = &Ataks[(signed long int)side][(signed long int)5];
    b = a[(signed long int)5];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$4;
      return_value_leadz$4=leadz(b);
      sq = (signed int)return_value_leadz$4;
      b = b & NotBitPosArray[(signed long int)sq];
      *t = *t | Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])] | Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    }
    t = &Ataks[(signed long int)side][(signed long int)6];
    b = a[(signed long int)6];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$5;
      return_value_leadz$5=leadz(b);
      sq = (signed int)return_value_leadz$5;
      b = b & NotBitPosArray[(signed long int)sq];
      *t = *t | MoveArray[(signed long int)6][(signed long int)sq];
    }
    t = &Ataks[(signed long int)side][(signed long int)1];
    if(side == 0)
    {
      b = board.b[(signed long int)0][(signed long int)1] & ~FileBit[(signed long int)0];
      *t = *t | b >> 7;
      b = board.b[(signed long int)0][(signed long int)1] & ~FileBit[(signed long int)7];
      *t = *t | b >> 9;
    }

    else
    {
      b = board.b[(signed long int)1][(signed long int)1] & ~FileBit[(signed long int)0];
      *t = *t | b << 9;
      b = board.b[(signed long int)1][(signed long int)1] & ~FileBit[(signed long int)7];
      *t = *t | b << 7;
    }
    a0 = Ataks[(signed long int)side];
    a0[(signed long int)0] = a0[(signed long int)1] | a0[(signed long int)2] | a0[(signed long int)3] | a0[(signed long int)4] | a0[(signed long int)5] | a0[(signed long int)6];
  }
}

// GenCaptures
// file common.h line 568
void GenCaptures(signed short int ply)
{
  signed int side;
  signed int piece;
  signed int sq;
  signed int t;
  signed int ep;
  unsigned long int b;
  unsigned long int c;
  unsigned long int enemy;
  unsigned long int blocker;
  unsigned long int *a;
  side = (signed int)board.side;
  a = board.b[(signed long int)side];
  enemy = board.friends[(signed long int)(1 ^ side)];
  blocker = board.blocker;
  node = TreePtr[(signed long int)((signed int)ply + 1)];
  ep = (signed int)board.ep;
  piece = 2;
  for( ; !(piece >= 7); piece = piece + 4)
  {
    b = a[(signed long int)piece];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$1;
      return_value_leadz$1=leadz$link3(b);
      sq = (signed int)return_value_leadz$1;
      b = b & NotBitPosArray[(signed long int)sq];
      BitToMove((signed short int)sq, MoveArray[(signed long int)piece][(signed long int)sq] & enemy);
    }
  }
  b = a[(signed long int)3];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$2;
    return_value_leadz$2=leadz$link3(b);
    sq = (signed int)return_value_leadz$2;
    b = b & NotBitPosArray[(signed long int)sq];
    c = Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])];
    BitToMove((signed short int)sq, c & enemy);
  }
  b = a[(signed long int)4];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$3;
    return_value_leadz$3=leadz$link3(b);
    sq = (signed int)return_value_leadz$3;
    b = b & NotBitPosArray[(signed long int)sq];
    c = Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    BitToMove((signed short int)sq, c & enemy);
  }
  b = a[(signed long int)5];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$4;
    return_value_leadz$4=leadz$link3(b);
    sq = (signed int)return_value_leadz$4;
    b = b & NotBitPosArray[(signed long int)sq];
    c = Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])] | Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    BitToMove((signed short int)sq, c & enemy);
  }
  unsigned long int tmp_if_expr$6;
  unsigned long int tmp_if_expr$8;
  if(side == 0)
  {
    b = a[(signed long int)1] & RankBit[(signed long int)6];
    c = b >> 8 & ~blocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$5;
      return_value_leadz$5=leadz$link3(c);
      t = (signed int)return_value_leadz$5;
      c = c & NotBitPosArray[(signed long int)t];
      do
      {

      __CPROVER_DUMP_L12:
        ;
        node->move = t - 8 << 6 | t | 0x00005000;
        node = node + 1l;
        do
        {
          node->move = t - 8 << 6 | t | 0x00002000;
          node = node + 1l;
        }
        while((_Bool)0);
        do
        {
          node->move = t - 8 << 6 | t | 0x00004000;
          node = node + 1l;
        }
        while((_Bool)0);
        do
        {
          node->move = t - 8 << 6 | t | 0x00003000;
          node = node + 1l;
        }
        while((_Bool)0);
      }
      while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)0];
    if(ep >= 0)
      tmp_if_expr$6 = BitPosArray[(signed long int)ep];

    else
      tmp_if_expr$6 = 0ULL;
    c = b >> 7 & (board.friends[(signed long int)(1 ^ side)] | tmp_if_expr$6);
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$7;
      return_value_leadz$7=leadz$link3(c);
      t = (signed int)return_value_leadz$7;
      c = c & NotBitPosArray[(signed long int)t];
      if(t >= 56)
        do
        {

        __CPROVER_DUMP_L20:
          ;
          node->move = t - 7 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t - 7 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 7 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 7 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t - 7 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t - 7 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)7];
    if(ep >= 0)
      tmp_if_expr$8 = BitPosArray[(signed long int)ep];

    else
      tmp_if_expr$8 = 0ULL;
    c = b >> 9 & (board.friends[(signed long int)(1 ^ side)] | tmp_if_expr$8);
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$9;
      return_value_leadz$9=leadz$link3(c);
      t = (signed int)return_value_leadz$9;
      c = c & NotBitPosArray[(signed long int)t];
      if(t >= 56)
        do
        {

        __CPROVER_DUMP_L32:
          ;
          node->move = t - 9 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t - 9 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 9 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 9 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t - 9 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t - 9 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
  }

  unsigned long int tmp_if_expr$11;
  unsigned long int tmp_if_expr$13;
  if(side == 1)
  {
    b = a[(signed long int)1] & RankBit[(signed long int)1];
    c = b << 8 & ~blocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$10;
      return_value_leadz$10=leadz$link3(c);
      t = (signed int)return_value_leadz$10;
      c = c & NotBitPosArray[(signed long int)t];
      do
      {

      __CPROVER_DUMP_L42:
        ;
        node->move = t + 8 << 6 | t | 0x00005000;
        node = node + 1l;
        do
        {
          node->move = t + 8 << 6 | t | 0x00002000;
          node = node + 1l;
        }
        while((_Bool)0);
        do
        {
          node->move = t + 8 << 6 | t | 0x00004000;
          node = node + 1l;
        }
        while((_Bool)0);
        do
        {
          node->move = t + 8 << 6 | t | 0x00003000;
          node = node + 1l;
        }
        while((_Bool)0);
      }
      while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)7];
    if(ep >= 0)
      tmp_if_expr$11 = BitPosArray[(signed long int)ep];

    else
      tmp_if_expr$11 = 0ULL;
    c = b << 7 & (board.friends[(signed long int)(1 ^ side)] | tmp_if_expr$11);
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$12;
      return_value_leadz$12=leadz$link3(c);
      t = (signed int)return_value_leadz$12;
      c = c & NotBitPosArray[(signed long int)t];
      if(!(t >= 8))
        do
        {

        __CPROVER_DUMP_L50:
          ;
          node->move = t + 7 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t + 7 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 7 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 7 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t + 7 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t + 7 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)0];
    if(ep >= 0)
      tmp_if_expr$13 = BitPosArray[(signed long int)ep];

    else
      tmp_if_expr$13 = 0ULL;
    c = b << 9 & (board.friends[(signed long int)(1 ^ side)] | tmp_if_expr$13);
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$14;
      return_value_leadz$14=leadz$link3(c);
      t = (signed int)return_value_leadz$14;
      c = c & NotBitPosArray[(signed long int)t];
      if(!(t >= 8))
        do
        {

        __CPROVER_DUMP_L62:
          ;
          node->move = t + 9 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t + 9 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 9 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 9 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t + 9 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t + 9 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
  }

  TreePtr[(signed long int)((signed int)ply + 1)] = node;
  GenCnt = GenCnt + (unsigned long int)(TreePtr[(signed long int)((signed int)ply + 1)] - TreePtr[(signed long int)ply]);
}

// GenCheckEscapes
// file common.h line 570
void GenCheckEscapes(signed short int ply)
{
  signed int side;
  signed int xside;
  signed int kingsq;
  signed int chksq;
  signed int sq;
  signed int sq1;
  signed int epsq;
  signed int GenCheckEscapes$$1$$dir;
  unsigned long int checkers;
  unsigned long int b;
  unsigned long int c;
  unsigned long int p;
  unsigned long int escapes = 0x0000000000000000ULL;
  side = (signed int)board.side;
  xside = 1 ^ side;
  node = TreePtr[(signed long int)((signed int)ply + 1)];
  kingsq = (signed int)board.king[(signed long int)side];
  checkers=AttackTo(kingsq, xside);
  p = board.b[(signed long int)side][(signed long int)1];
  unsigned char return_value_nbits$9;
  return_value_nbits$9=nbits$link3(checkers);
  if((signed int)return_value_nbits$9 == 1)
  {
    unsigned char return_value_leadz$1;
    return_value_leadz$1=leadz$link3(checkers);
    chksq = (signed int)return_value_leadz$1;
    b=AttackTo(chksq, side);
    b = b & ~board.b[(signed long int)side][(signed long int)6];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$2;
      return_value_leadz$2=leadz$link3(b);
      sq = (signed int)return_value_leadz$2;
      b = b & NotBitPosArray[(signed long int)sq];
      signed int return_value_PinnedOnKing$3;
      return_value_PinnedOnKing$3=PinnedOnKing(sq, side);
      if(return_value_PinnedOnKing$3 == 0)
      {
        if((!(chksq >= 8) || chksq >= 56) && cboard[(signed long int)sq] == 1)
        {
          do
          {

          __CPROVER_DUMP_L2:
            ;
            node->move = sq << 6 | chksq | 0x00005000;
            node = node + 1l;
            do
            {
              node->move = sq << 6 | chksq | 0x00002000;
              node = node + 1l;
            }
            while((_Bool)0);
            do
            {
              node->move = sq << 6 | chksq | 0x00004000;
              node = node + 1l;
            }
            while((_Bool)0);
            do
            {
              node->move = sq << 6 | chksq | 0x00003000;
              node = node + 1l;
            }
            while((_Bool)0);
          }
          while((_Bool)0);
          goto __CPROVER_DUMP_L7;
        }

        do
        {
          node->move = sq << 6 | chksq | 0;
          node = node + 1l;
        }
        while((_Bool)0);
      }


    __CPROVER_DUMP_L7:
      ;
    }
    if((signed int)board.ep >= 0)
    {
      epsq = (signed int)board.ep;
      if((side == 0 ? -8 : 8) + epsq == chksq)
      {
        b = MoveArray[(signed long int)ptype[(signed long int)(1 ^ side)]][(signed long int)epsq] & p;
        while(!(b == 0ul))
        {
          unsigned char return_value_leadz$4;
          return_value_leadz$4=leadz$link3(b);
          sq = (signed int)return_value_leadz$4;
          b = b & NotBitPosArray[(signed long int)sq];
          signed int return_value_PinnedOnKing$5;
          return_value_PinnedOnKing$5=PinnedOnKing(sq, side);
          if(return_value_PinnedOnKing$5 == 0)
            do
            {
              node->move = sq << 6 | epsq | 0x00400000;
              node = node + 1l;
            }
            while((_Bool)0);

        }
      }

    }

    if(!(slider[(signed long int)cboard[(signed long int)chksq]] == 0))
    {
      c = FromToRay[(signed long int)kingsq][(signed long int)chksq] & NotBitPosArray[(signed long int)chksq];
      while(!(c == 0ul))
      {
        unsigned char return_value_leadz$6;
        return_value_leadz$6=leadz$link3(c);
        sq = (signed int)return_value_leadz$6;
        c = c & NotBitPosArray[(signed long int)sq];
        b=AttackTo(sq, side);
        b = b & ~(board.b[(signed long int)side][(signed long int)6] | p);
        if(side == 0 && sq >= 16)
        {
          if(!((BitPosArray[(signed long int)(sq + -8)] & p) == 0ul))
            b = b | BitPosArray[(signed long int)(sq - 8)];

          if(sq >> 3 == 3)
          {
            if(cboard[(signed long int)(sq + -8)] == 0)
            {
              if(!((BitPosArray[(signed long int)(sq + -16)] & p) == 0ul))
                b = b | BitPosArray[(signed long int)(sq - 16)];

            }

          }

        }

        if(side == 1 && !(sq >= 55))
        {
          if(!((BitPosArray[(signed long int)(8 + sq)] & p) == 0ul))
            b = b | BitPosArray[(signed long int)(sq + 8)];

          if(sq >> 3 == 4)
          {
            if(cboard[(signed long int)(8 + sq)] == 0)
            {
              if(!((BitPosArray[(signed long int)(16 + sq)] & p) == 0ul))
                b = b | BitPosArray[(signed long int)(sq + 16)];

            }

          }

        }

        while(!(b == 0ul))
        {
          unsigned char return_value_leadz$7;
          return_value_leadz$7=leadz$link3(b);
          sq1 = (signed int)return_value_leadz$7;
          b = b & NotBitPosArray[(signed long int)sq1];
          signed int return_value_PinnedOnKing$8;
          return_value_PinnedOnKing$8=PinnedOnKing(sq1, side);
          if(return_value_PinnedOnKing$8 == 0)
          {
            if((!(sq >= 8) || sq >= 56) && cboard[(signed long int)sq1] == 1)
            {
              do
              {

              __CPROVER_DUMP_L18:
                ;
                node->move = sq1 << 6 | sq | 0x00005000;
                node = node + 1l;
                do
                {
                  node->move = sq1 << 6 | sq | 0x00002000;
                  node = node + 1l;
                }
                while((_Bool)0);
                do
                {
                  node->move = sq1 << 6 | sq | 0x00004000;
                  node = node + 1l;
                }
                while((_Bool)0);
                do
                {
                  node->move = sq1 << 6 | sq | 0x00003000;
                  node = node + 1l;
                }
                while((_Bool)0);
              }
              while((_Bool)0);
              goto __CPROVER_DUMP_L23;
            }

            do
            {
              node->move = sq1 << 6 | sq | 0;
              node = node + 1l;
            }
            while((_Bool)0);
          }


        __CPROVER_DUMP_L23:
          ;
        }
      }
    }

  }

  if(!(checkers == 0ul))
    escapes = MoveArray[(signed long int)6][(signed long int)kingsq] & ~board.friends[(signed long int)side];

  while(!(checkers == 0ul))
  {
    unsigned char return_value_leadz$10;
    return_value_leadz$10=leadz$link3(checkers);
    chksq = (signed int)return_value_leadz$10;
    checkers = checkers & NotBitPosArray[(signed long int)chksq];
    GenCheckEscapes$$1$$dir = (signed int)directions[(signed long int)chksq][(signed long int)kingsq];
    if(!(slider[(signed long int)cboard[(signed long int)chksq]] == 0))
      escapes = escapes & ~Ray[(signed long int)chksq][(signed long int)GenCheckEscapes$$1$$dir];

  }
  while(!(escapes == 0ul))
  {
    unsigned char return_value_leadz$11;
    return_value_leadz$11=leadz$link3(escapes);
    sq = (signed int)return_value_leadz$11;
    escapes = escapes & NotBitPosArray[(signed long int)sq];
    signed short int return_value_SqAtakd$12;
    return_value_SqAtakd$12=SqAtakd((signed short int)sq, (signed short int)xside);
    if(return_value_SqAtakd$12 == 0)
      do
      {
        node->move = kingsq << 6 | sq | 0;
        node = node + 1l;
      }
      while((_Bool)0);

  }
  TreePtr[(signed long int)((signed int)ply + 1)] = node;
  GenCnt = GenCnt + (unsigned long int)(TreePtr[(signed long int)((signed int)ply + 1)] - TreePtr[(signed long int)ply]);
  goto __CPROVER_DUMP_L33;

__CPROVER_DUMP_L33:
  ;
}

// GenMoves
// file common.h line 567
void GenMoves(signed short int ply)
{
  signed int side;
  signed int piece;
  signed int sq;
  signed int t;
  signed int ep;
  unsigned long int b;
  unsigned long int c;
  unsigned long int d;
  unsigned long int e;
  unsigned long int friends;
  unsigned long int notfriends;
  unsigned long int blocker;
  unsigned long int notblocker;
  unsigned long int *a;
  side = (signed int)board.side;
  a = board.b[(signed long int)side];
  friends = board.friends[(signed long int)side];
  notfriends = ~friends;
  blocker = board.blocker;
  notblocker = ~blocker;
  node = TreePtr[(signed long int)((signed int)ply + 1)];
  ep = (signed int)board.ep;
  piece = 2;
  for( ; !(piece >= 7); piece = piece + 4)
  {
    b = a[(signed long int)piece];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$1;
      return_value_leadz$1=leadz$link3(b);
      sq = (signed int)return_value_leadz$1;
      b = b & NotBitPosArray[(signed long int)sq];
      BitToMove((signed short int)sq, MoveArray[(signed long int)piece][(signed long int)sq] & notfriends);
    }
  }
  b = a[(signed long int)3];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$2;
    return_value_leadz$2=leadz$link3(b);
    sq = (signed int)return_value_leadz$2;
    b = b & NotBitPosArray[(signed long int)sq];
    d = Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])];
    BitToMove((signed short int)sq, d & notfriends);
  }
  b = a[(signed long int)4];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$3;
    return_value_leadz$3=leadz$link3(b);
    sq = (signed int)return_value_leadz$3;
    b = b & NotBitPosArray[(signed long int)sq];
    d = Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    BitToMove((signed short int)sq, d & notfriends);
  }
  b = a[(signed long int)5];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$4;
    return_value_leadz$4=leadz$link3(b);
    sq = (signed int)return_value_leadz$4;
    b = b & NotBitPosArray[(signed long int)sq];
    d = Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])] | Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    BitToMove((signed short int)sq, d & notfriends);
  }
  unsigned long int tmp_if_expr$5;
  if(ep >= 0)
    tmp_if_expr$5 = BitPosArray[(signed long int)ep];

  else
    tmp_if_expr$5 = 0x0000000000000000ULL;
  e = board.friends[(signed long int)(1 ^ side)] | tmp_if_expr$5;
  if(side == 0)
  {
    c = a[(signed long int)1] >> 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$6;
      return_value_leadz$6=leadz$link3(c);
      t = (signed int)return_value_leadz$6;
      c = c & NotBitPosArray[(signed long int)t];
      if(t >= 56)
        do
        {

        __CPROVER_DUMP_L14:
          ;
          node->move = t - 8 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t - 8 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 8 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 8 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        do
        {
          node->move = t - 8 << 6 | t | 0;
          node = node + 1l;
        }
        while((_Bool)0);
    }
    b = a[(signed long int)1] & RankBit[(signed long int)1];
    c = b >> 8 & notblocker;
    c = c >> 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$7;
      return_value_leadz$7=leadz$link3(c);
      t = (signed int)return_value_leadz$7;
      c = c & NotBitPosArray[(signed long int)t];
      do
      {
        node->move = t - 16 << 6 | t | 0;
        node = node + 1l;
      }
      while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)0];
    c = b >> 7 & e;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$8;
      return_value_leadz$8=leadz$link3(c);
      t = (signed int)return_value_leadz$8;
      c = c & NotBitPosArray[(signed long int)t];
      if(t >= 56)
        do
        {

        __CPROVER_DUMP_L25:
          ;
          node->move = t - 7 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t - 7 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 7 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 7 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t - 7 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t - 7 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)7];
    c = b >> 9 & e;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$9;
      return_value_leadz$9=leadz$link3(c);
      t = (signed int)return_value_leadz$9;
      c = c & NotBitPosArray[(signed long int)t];
      if(t >= 56)
        do
        {

        __CPROVER_DUMP_L35:
          ;
          node->move = t - 9 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t - 9 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 9 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t - 9 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t - 9 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t - 9 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
  }

  if(side == 1)
  {
    c = a[(signed long int)1] << 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$10;
      return_value_leadz$10=leadz$link3(c);
      t = (signed int)return_value_leadz$10;
      c = c & NotBitPosArray[(signed long int)t];
      if(!(t >= 8))
        do
        {

        __CPROVER_DUMP_L45:
          ;
          node->move = t + 8 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t + 8 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 8 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 8 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        do
        {
          node->move = t + 8 << 6 | t | 0;
          node = node + 1l;
        }
        while((_Bool)0);
    }
    b = a[(signed long int)1] & RankBit[(signed long int)6];
    c = b << 8 & notblocker;
    c = c << 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$11;
      return_value_leadz$11=leadz$link3(c);
      t = (signed int)return_value_leadz$11;
      c = c & NotBitPosArray[(signed long int)t];
      do
      {
        node->move = t + 16 << 6 | t | 0;
        node = node + 1l;
      }
      while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)7];
    c = b << 7 & e;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$12;
      return_value_leadz$12=leadz$link3(c);
      t = (signed int)return_value_leadz$12;
      c = c & NotBitPosArray[(signed long int)t];
      if(!(t >= 8))
        do
        {

        __CPROVER_DUMP_L56:
          ;
          node->move = t + 7 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t + 7 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 7 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 7 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t + 7 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t + 7 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
    b = a[(signed long int)1] & ~FileBit[(signed long int)0];
    c = b << 9 & e;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$13;
      return_value_leadz$13=leadz$link3(c);
      t = (signed int)return_value_leadz$13;
      c = c & NotBitPosArray[(signed long int)t];
      if(!(t >= 8))
        do
        {

        __CPROVER_DUMP_L66:
          ;
          node->move = t + 9 << 6 | t | 0x00005000;
          node = node + 1l;
          do
          {
            node->move = t + 9 << 6 | t | 0x00002000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 9 << 6 | t | 0x00004000;
            node = node + 1l;
          }
          while((_Bool)0);
          do
          {
            node->move = t + 9 << 6 | t | 0x00003000;
            node = node + 1l;
          }
          while((_Bool)0);
        }
        while((_Bool)0);

      else
        if(ep == t)
          do
          {
            node->move = t + 9 << 6 | t | 0x00400000;
            node = node + 1l;
          }
          while((_Bool)0);

        else
          do
          {
            node->move = t + 9 << 6 | t | 0;
            node = node + 1l;
          }
          while((_Bool)0);
    }
  }

  b = board.b[(signed long int)side][(signed long int)4];
  signed short int return_value_SqAtakd$16;
  signed short int return_value_SqAtakd$15;
  signed short int return_value_SqAtakd$14;
  if(side == 0 && !((0x0001 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[7l] & b) == 0ul))
    {
      if((FromToRay[4l][6l] & blocker) == 0ul)
      {
        return_value_SqAtakd$16=SqAtakd((signed short int)4, (signed short int)1);
        if(return_value_SqAtakd$16 == 0)
        {
          return_value_SqAtakd$15=SqAtakd((signed short int)5, (signed short int)1);
          if(return_value_SqAtakd$15 == 0)
          {
            return_value_SqAtakd$14=SqAtakd((signed short int)6, (signed short int)1);
            if(return_value_SqAtakd$14 == 0)
              do
              {
                node->move = 4 << 6 | 6 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  signed short int return_value_SqAtakd$19;
  signed short int return_value_SqAtakd$18;
  signed short int return_value_SqAtakd$17;
  if(side == 0 && !((0x0002 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[0l] & b) == 0ul))
    {
      if((FromToRay[4l][1l] & blocker) == 0ul)
      {
        return_value_SqAtakd$19=SqAtakd((signed short int)4, (signed short int)1);
        if(return_value_SqAtakd$19 == 0)
        {
          return_value_SqAtakd$18=SqAtakd((signed short int)3, (signed short int)1);
          if(return_value_SqAtakd$18 == 0)
          {
            return_value_SqAtakd$17=SqAtakd((signed short int)2, (signed short int)1);
            if(return_value_SqAtakd$17 == 0)
              do
              {
                node->move = 4 << 6 | 2 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  signed short int return_value_SqAtakd$22;
  signed short int return_value_SqAtakd$21;
  signed short int return_value_SqAtakd$20;
  if(side == 1 && !((0x0004 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[63l] & b) == 0ul))
    {
      if((FromToRay[60l][62l] & blocker) == 0ul)
      {
        return_value_SqAtakd$22=SqAtakd((signed short int)60, (signed short int)0);
        if(return_value_SqAtakd$22 == 0)
        {
          return_value_SqAtakd$21=SqAtakd((signed short int)61, (signed short int)0);
          if(return_value_SqAtakd$21 == 0)
          {
            return_value_SqAtakd$20=SqAtakd((signed short int)62, (signed short int)0);
            if(return_value_SqAtakd$20 == 0)
              do
              {
                node->move = 60 << 6 | 62 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  signed short int return_value_SqAtakd$25;
  signed short int return_value_SqAtakd$24;
  signed short int return_value_SqAtakd$23;
  if(side == 1 && !((0x0008 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[56l] & b) == 0ul))
    {
      if((FromToRay[60l][57l] & blocker) == 0ul)
      {
        return_value_SqAtakd$25=SqAtakd((signed short int)60, (signed short int)0);
        if(return_value_SqAtakd$25 == 0)
        {
          return_value_SqAtakd$24=SqAtakd((signed short int)59, (signed short int)0);
          if(return_value_SqAtakd$24 == 0)
          {
            return_value_SqAtakd$23=SqAtakd((signed short int)58, (signed short int)0);
            if(return_value_SqAtakd$23 == 0)
              do
              {
                node->move = 60 << 6 | 58 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  TreePtr[(signed long int)((signed int)ply + 1)] = node;
  GenCnt = GenCnt + (unsigned long int)(TreePtr[(signed long int)((signed int)ply + 1)] - TreePtr[(signed long int)ply]);
}

// GenNonCaptures
// file common.h line 569
void GenNonCaptures(signed short int ply)
{
  signed int side;
  signed int piece;
  signed int sq;
  signed int t;
  unsigned long int b;
  unsigned long int c;
  unsigned long int d;
  unsigned long int blocker;
  unsigned long int notblocker;
  unsigned long int *a;
  side = (signed int)board.side;
  a = board.b[(signed long int)side];
  blocker = board.blocker;
  notblocker = ~blocker;
  node = TreePtr[(signed long int)((signed int)ply + 1)];
  piece = 2;
  for( ; !(piece >= 7); piece = piece + 4)
  {
    b = a[(signed long int)piece];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$1;
      return_value_leadz$1=leadz$link3(b);
      sq = (signed int)return_value_leadz$1;
      b = b & NotBitPosArray[(signed long int)sq];
      BitToMove((signed short int)sq, MoveArray[(signed long int)piece][(signed long int)sq] & notblocker);
    }
  }
  b = a[(signed long int)3];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$2;
    return_value_leadz$2=leadz$link3(b);
    sq = (signed int)return_value_leadz$2;
    b = b & NotBitPosArray[(signed long int)sq];
    d = Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])];
    BitToMove((signed short int)sq, d & notblocker);
  }
  b = a[(signed long int)4];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$3;
    return_value_leadz$3=leadz$link3(b);
    sq = (signed int)return_value_leadz$3;
    b = b & NotBitPosArray[(signed long int)sq];
    d = Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    BitToMove((signed short int)sq, d & notblocker);
  }
  b = a[(signed long int)5];
  while(!(b == 0ul))
  {
    unsigned char return_value_leadz$4;
    return_value_leadz$4=leadz$link3(b);
    sq = (signed int)return_value_leadz$4;
    b = b & NotBitPosArray[(signed long int)sq];
    d = Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq] & (unsigned long int)Mask45[(signed long int)sq])] | Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq] & (unsigned long int)Mask315[(signed long int)sq])] | Rook00Atak[(signed long int)sq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)sq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq] & (unsigned long int)0xFF)];
    BitToMove((signed short int)sq, d & notblocker);
  }
  if(side == 0)
  {
    c = a[(signed long int)1] >> 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$5;
      return_value_leadz$5=leadz$link3(c);
      t = (signed int)return_value_leadz$5;
      c = c & NotBitPosArray[(signed long int)t];
      if(!(t >= 56))
        do
        {
          node->move = t - 8 << 6 | t | 0;
          node = node + 1l;
        }
        while((_Bool)0);

    }
    b = a[(signed long int)1] & RankBit[(signed long int)1];
    c = b >> 8 & notblocker;
    c = c >> 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$6;
      return_value_leadz$6=leadz$link3(c);
      t = (signed int)return_value_leadz$6;
      c = c & NotBitPosArray[(signed long int)t];
      do
      {
        node->move = t - 16 << 6 | t | 0;
        node = node + 1l;
      }
      while((_Bool)0);
    }
  }

  if(side == 1)
  {
    c = a[(signed long int)1] << 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$7;
      return_value_leadz$7=leadz$link3(c);
      t = (signed int)return_value_leadz$7;
      c = c & NotBitPosArray[(signed long int)t];
      if(t >= 8)
        do
        {
          node->move = t + 8 << 6 | t | 0;
          node = node + 1l;
        }
        while((_Bool)0);

    }
    b = a[(signed long int)1] & RankBit[(signed long int)6];
    c = b << 8 & notblocker;
    c = c << 8 & notblocker;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$8;
      return_value_leadz$8=leadz$link3(c);
      t = (signed int)return_value_leadz$8;
      c = c & NotBitPosArray[(signed long int)t];
      do
      {
        node->move = t + 16 << 6 | t | 0;
        node = node + 1l;
      }
      while((_Bool)0);
    }
  }

  b = board.b[(signed long int)side][(signed long int)4];
  signed short int return_value_SqAtakd$11;
  signed short int return_value_SqAtakd$10;
  signed short int return_value_SqAtakd$9;
  if(side == 0 && !((0x0001 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[7l] & b) == 0ul))
    {
      if((FromToRay[4l][6l] & blocker) == 0ul)
      {
        return_value_SqAtakd$11=SqAtakd((signed short int)4, (signed short int)1);
        if(return_value_SqAtakd$11 == 0)
        {
          return_value_SqAtakd$10=SqAtakd((signed short int)5, (signed short int)1);
          if(return_value_SqAtakd$10 == 0)
          {
            return_value_SqAtakd$9=SqAtakd((signed short int)6, (signed short int)1);
            if(return_value_SqAtakd$9 == 0)
              do
              {
                node->move = 4 << 6 | 6 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  signed short int return_value_SqAtakd$14;
  signed short int return_value_SqAtakd$13;
  signed short int return_value_SqAtakd$12;
  if(side == 0 && !((0x0002 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[0l] & b) == 0ul))
    {
      if((FromToRay[4l][1l] & blocker) == 0ul)
      {
        return_value_SqAtakd$14=SqAtakd((signed short int)4, (signed short int)1);
        if(return_value_SqAtakd$14 == 0)
        {
          return_value_SqAtakd$13=SqAtakd((signed short int)3, (signed short int)1);
          if(return_value_SqAtakd$13 == 0)
          {
            return_value_SqAtakd$12=SqAtakd((signed short int)2, (signed short int)1);
            if(return_value_SqAtakd$12 == 0)
              do
              {
                node->move = 4 << 6 | 2 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  signed short int return_value_SqAtakd$17;
  signed short int return_value_SqAtakd$16;
  signed short int return_value_SqAtakd$15;
  if(side == 1 && !((0x0004 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[63l] & b) == 0ul))
    {
      if((FromToRay[60l][62l] & blocker) == 0ul)
      {
        return_value_SqAtakd$17=SqAtakd((signed short int)60, (signed short int)0);
        if(return_value_SqAtakd$17 == 0)
        {
          return_value_SqAtakd$16=SqAtakd((signed short int)61, (signed short int)0);
          if(return_value_SqAtakd$16 == 0)
          {
            return_value_SqAtakd$15=SqAtakd((signed short int)62, (signed short int)0);
            if(return_value_SqAtakd$15 == 0)
              do
              {
                node->move = 60 << 6 | 62 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  signed short int return_value_SqAtakd$20;
  signed short int return_value_SqAtakd$19;
  signed short int return_value_SqAtakd$18;
  if(side == 1 && !((0x0008 & (signed int)board.flag) == 0))
  {
    if(!((BitPosArray[56l] & b) == 0ul))
    {
      if((FromToRay[60l][57l] & blocker) == 0ul)
      {
        return_value_SqAtakd$20=SqAtakd((signed short int)60, (signed short int)0);
        if(return_value_SqAtakd$20 == 0)
        {
          return_value_SqAtakd$19=SqAtakd((signed short int)59, (signed short int)0);
          if(return_value_SqAtakd$19 == 0)
          {
            return_value_SqAtakd$18=SqAtakd((signed short int)58, (signed short int)0);
            if(return_value_SqAtakd$18 == 0)
              do
              {
                node->move = 60 << 6 | 58 | 0x00200000;
                node = node + 1l;
              }
              while((_Bool)0);

          }

        }

      }

    }

  }

  TreePtr[(signed long int)((signed int)ply + 1)] = node;
  GenCnt = GenCnt + (unsigned long int)(TreePtr[(signed long int)((signed int)ply + 1)] - TreePtr[(signed long int)ply]);
}

// GetElapsed
// file iterate.c line 363
double GetElapsed(struct timeval start)
{
  struct timeval t;
  gettimeofday(&t, (struct timezone *)(void *)0);
  return (double)(t.tv_sec - start.tv_sec) + (double)(t.tv_usec - start.tv_usec) / 1e6;
}

// InitBitCount
// file init.c line 418
void InitBitCount(void)
{
  signed int i;
  signed int j;
  signed int InitBitCount$$1$$n;
  BitCount[(signed long int)0] = (unsigned char)0;
  BitCount[(signed long int)1] = (unsigned char)1;
  i = 1;
  InitBitCount$$1$$n = 2;
  for( ; !(InitBitCount$$1$$n >= 17); InitBitCount$$1$$n = InitBitCount$$1$$n + 1)
  {
    i = i << 1;
    j = i;
    for( ; -1 + i + i >= j; j = j + 1)
      BitCount[(signed long int)j] = (unsigned char)(1 + (signed int)BitCount[(signed long int)(j - i)]);
  }
}

// InitBitPosArray
// file init.c line 100
void InitBitPosArray(void)
{
  unsigned long int b;
  signed int i;
  b = (unsigned long int)1;
  i = 63;
  for( ; i >= 0; b = b << 1)
  {
    BitPosArray[(signed long int)i] = b;
    NotBitPosArray[(signed long int)i] = ~b;
    i = i - 1;
  }
}

// InitDistance
// file init.c line 539
void InitDistance(void)
{
  signed int f;
  signed int t;
  signed int j;
  signed int d1;
  signed int d2;
  f = 0;
  for( ; !(f >= 64); f = f + 1)
  {
    t = 0;
    for( ; !(t >= 8); t = t + 1)
      DistMap[(signed long int)f][(signed long int)t] = 0ULL;
  }
  f = 0;
  for( ; !(f >= 64); f = f + 1)
  {
    t = f;
    for( ; !(t >= 64); t = t + 1)
    {
      d1 = (t & 0x07) - (f & 0x07);
      if(!(d1 >= 0))
        d1 = -d1;

      d2 = (t >> 3) - (f >> 3);
      if(!(d2 >= 0))
        d2 = -d2;

      distance[(signed long int)f][(signed long int)t] = (signed short int)(d1 > d2 ? d1 : d2);
      distance[(signed long int)t][(signed long int)f] = (signed short int)(d1 > d2 ? d1 : d2);
      taxicab[(signed long int)f][(signed long int)t] = (signed short int)(d1 + d2);
      taxicab[(signed long int)t][(signed long int)f] = (signed short int)(d1 + d2);
    }
  }
  f = 0;
  for( ; !(f >= 64); f = f + 1)
  {
    t = 0;
    for( ; !(t >= 64); t = t + 1)
      DistMap[(signed long int)f][(signed long int)distance[(signed long int)t][(signed long int)f]] = DistMap[(signed long int)f][(signed long int)distance[(signed long int)t][(signed long int)f]] | BitPosArray[(signed long int)t];
  }
  f = 0;
  for( ; !(f >= 64); f = f + 1)
  {
    t = 0;
    for( ; !(t >= 8); t = t + 1)
    {
      j = 0;
      for( ; !(j >= t); j = j + 1)
        DistMap[(signed long int)f][(signed long int)t] = DistMap[(signed long int)f][(signed long int)t] | DistMap[(signed long int)f][(signed long int)j];
    }
  }
}

// InitFICS
// file init.c line 66
void InitFICS(void)
{
  if(!((1024u & flags) == 0u))
  {
    printf("tellics shout Greetings from %s %s. Ready for a game.\n", (const void *)"GNU Chess for GNOME", (const void *)"15.02");
    printf("tellics set 1 %s %s.\n", (const void *)"GNU Chess for GNOME", (const void *)"15.02");
  }

}

// InitFromToRay
// file init.c line 231
void InitFromToRay(void)
{
  signed int piece;
  signed int fsq;
  signed int tsq;
  signed int f;
  signed int t;
  signed int InitFromToRay$$1$$n;
  unsigned long int *b;
  memset((void *)FromToRay, 0, sizeof(unsigned long int [64l][64l]) /*32768ul*/ );
  piece = 3;
  for( ; !(piece >= 5); piece = piece + 1)
  {
    fsq = 0;
    for( ; !(fsq >= 120); fsq = fsq + 1)
    {
      f = map[(signed long int)fsq];
      if(!(f == -1))
      {
        InitFromToRay$$1$$n = 0;
        for( ; !(InitFromToRay$$1$$n >= ndir[(signed long int)piece]); InitFromToRay$$1$$n = InitFromToRay$$1$$n + 1)
        {
          tsq = fsq;
          t = map[(signed long int)tsq];
          do
          {
            b = &FromToRay[(signed long int)f][(signed long int)t];
            tsq = tsq + dir[(signed long int)piece][(signed long int)InitFromToRay$$1$$n];
            t = map[(signed long int)tsq];
            if(!(t == -1))
            {
              FromToRay[(signed long int)f][(signed long int)t] = FromToRay[(signed long int)f][(signed long int)t] | BitPosArray[(signed long int)t];
              FromToRay[(signed long int)f][(signed long int)t] = FromToRay[(signed long int)f][(signed long int)t] | *b;
            }

          }
          while(!(t == -1));
        }
      }

    }
  }
}

// InitHashCode
// file init.c line 696
void InitHashCode(void)
{
  signed int color;
  signed int piece;
  signed int sq;
  color = 0;
  for( ; !(color >= 2); color = color + 1)
  {
    piece = 1;
    for( ; !(piece >= 7); piece = piece + 1)
    {
      sq = 0;
      for( ; !(sq >= 64); sq = sq + 1)
        hashcode[(signed long int)color][(signed long int)piece][(signed long int)sq]=Rand64();
    }
  }
  sq = 0;
  for( ; !(sq >= 64); sq = sq + 1)
    ephash[(signed long int)sq]=Rand64();
  WKCastlehash=Rand64();
  WQCastlehash=Rand64();
  BKCastlehash=Rand64();
  BQCastlehash=Rand64();
  Sidehash=Rand64();
}

// InitHashTable
// file common.h line 536
void InitHashTable(void)
{
  unsigned int size;
  unsigned int allocating = (unsigned int)1;
  _Bool tmp_if_expr$3;
  do
  {
    free((void *)HashTab[(signed long int)0]);
    free((void *)HashTab[(signed long int)1]);
    void *return_value_malloc$1;
    return_value_malloc$1=malloc((unsigned long int)HashSize * sizeof(struct anonymous$0) /*24ul*/ );
    HashTab[(signed long int)0] = (struct anonymous$0 *)return_value_malloc$1;
    void *return_value_malloc$2;
    return_value_malloc$2=malloc((unsigned long int)HashSize * sizeof(struct anonymous$0) /*24ul*/ );
    HashTab[(signed long int)1] = (struct anonymous$0 *)return_value_malloc$2;
    if(HashTab[0l] == ((struct anonymous$0 *)NULL))
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = HashTab[(signed long int)1] == (struct anonymous$0 *)(void *)0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
    {
      printf("Not enough memory for transposition table, trying again.\n");
      if(HashSize == 1024u)
      {
        fprintf(stderr, "Memory exhausted, goodbye, my friend.\n");
        exit(1);
      }

      CalcHashSize((signed int)(HashSize >> 1));
    }

    else
      allocating = (unsigned int)0;
  }
  while(!(allocating == 0u));
  size = (unsigned int)((unsigned long int)(HashSize * (unsigned int)2) * sizeof(struct anonymous$0) /*24ul*/  >> 10);
  if((1024u & flags) == 0u)
    printf("Transposition table:  Entries=%dK Size=%dK\n", HashSize >> 10, size);

  void *return_value_realloc$4;
  return_value_realloc$4=realloc((void *)PawnTab[(signed long int)0], (unsigned long int)512 * sizeof(struct anonymous$4) /*32ul*/ );
  PawnTab[(signed long int)0] = (struct anonymous$4 *)return_value_realloc$4;
  void *return_value_realloc$5;
  return_value_realloc$5=realloc((void *)PawnTab[(signed long int)1], (unsigned long int)512 * sizeof(struct anonymous$4) /*32ul*/ );
  PawnTab[(signed long int)1] = (struct anonymous$4 *)return_value_realloc$5;
  _Bool tmp_if_expr$6;
  if(PawnTab[0l] == ((struct anonymous$4 *)NULL))
    tmp_if_expr$6 = (_Bool)1;

  else
    tmp_if_expr$6 = PawnTab[(signed long int)1] == (struct anonymous$4 *)(void *)0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$6)
  {
    printf("Not enough memory for pawn table, goodbye.\n");
    exit(1);
  }

  else
  {
    size = (unsigned int)((unsigned long int)(512 * 2) * sizeof(struct anonymous$4) /*32ul*/  >> 10);
    if((1024u & flags) == 0u)
      printf("Pawn hash table: Entries=%dK Size=%dK\n", 512 >> 10, size);

  }
}

// InitInput
// file common.h line 540
void InitInput(void)
{
  getline_intrl = getline_standard;
  pthread_create(&input_thread, (const union pthread_attr_t *)(void *)0, input_func, (void *)0);
}

// InitIsolaniMask
// file init.c line 351
void InitIsolaniMask(void)
{
  signed int i;
  IsolaniMask[(signed long int)0] = FileBit[(signed long int)1];
  IsolaniMask[(signed long int)7] = FileBit[(signed long int)6];
  i = 1;
  for( ; !(i >= 7); i = i + 1)
    IsolaniMask[(signed long int)i] = FileBit[(signed long int)(i - 1)] | FileBit[(signed long int)(i + 1)];
}

// InitLzArray
// file init.c line 77
void InitLzArray(void)
{
  signed int i;
  signed int j;
  signed int s;
  signed int InitLzArray$$1$$n = 1;
  s = InitLzArray$$1$$n;
  i = 0;
  for( ; !(i >= 16); i = i + 1)
  {
    j = s;
    for( ; !(j >= InitLzArray$$1$$n + s); j = j + 1)
      lzArray[(signed long int)j] = (unsigned char)((16 - 1) - i);
    s = s + InitLzArray$$1$$n;
    InitLzArray$$1$$n = InitLzArray$$1$$n + InitLzArray$$1$$n;
  }
}

// InitMoveArray
// file init.c line 156
void InitMoveArray(void)
{
  signed int piece;
  signed int fsq;
  signed int tsq;
  signed int f;
  signed int t;
  signed int InitMoveArray$$1$$n;
  unsigned long int *b;
  piece = 1;
  for( ; !(piece >= 8); piece = piece + 1)
  {
    fsq = 0;
    for( ; !(fsq >= 120); fsq = fsq + 1)
    {
      f = map[(signed long int)fsq];
      if(!(f == -1))
      {
        b = &MoveArray[(signed long int)piece][(signed long int)f];
        *b = 0x0000000000000000ULL;
        InitMoveArray$$1$$n = 0;
        for( ; !(InitMoveArray$$1$$n >= ndir[(signed long int)piece]); InitMoveArray$$1$$n = InitMoveArray$$1$$n + 1)
        {
          tsq = fsq;
          do
          {
            tsq = tsq + dir[(signed long int)piece][(signed long int)InitMoveArray$$1$$n];
            t = map[(signed long int)tsq];
            if(!(t == -1))
              *b = *b | BitPosArray[(signed long int)t];

          }
          while(!(range[(signed long int)piece] == 0) && !(t == -1));
        }
      }

    }
  }
}

// InitPassedPawnMask
// file init.c line 314
void InitPassedPawnMask(void)
{
  unsigned int sq;
  memset((void *)PassedPawnMask, 0, sizeof(unsigned long int [2l][64l]) /*1024ul*/ );
  sq = (unsigned int)0;
  for( ; !(sq >= 64u); sq = sq + 1u)
  {
    PassedPawnMask[(signed long int)0][(signed long int)sq] = Ray[(signed long int)sq][(signed long int)7];
    if(!((7u & sq) == 0u))
      PassedPawnMask[(signed long int)0][(signed long int)sq] = PassedPawnMask[(signed long int)0][(signed long int)sq] | Ray[(signed long int)(sq - (unsigned int)1)][(signed long int)7];

    if(!((7u & sq) == 7u))
      PassedPawnMask[(signed long int)0][(signed long int)sq] = PassedPawnMask[(signed long int)0][(signed long int)sq] | Ray[(signed long int)(sq + (unsigned int)1)][(signed long int)7];

  }
  sq = (unsigned int)0;
  for( ; !(sq >= 64u); sq = sq + 1u)
  {
    PassedPawnMask[(signed long int)1][(signed long int)sq] = Ray[(signed long int)sq][(signed long int)4];
    if(!((7u & sq) == 0u))
      PassedPawnMask[(signed long int)1][(signed long int)sq] = PassedPawnMask[(signed long int)1][(signed long int)sq] | Ray[(signed long int)(sq - (unsigned int)1)][(signed long int)4];

    if(!((7u & sq) == 7u))
      PassedPawnMask[(signed long int)1][(signed long int)sq] = PassedPawnMask[(signed long int)1][(signed long int)sq] | Ray[(signed long int)(sq + (unsigned int)1)][(signed long int)4];

  }
}

// InitRandomMasks
// file init.c line 298
void InitRandomMasks(void)
{
  mask_kr_trapped_w[(signed long int)0] = BitPosArray[(signed long int)15];
  mask_kr_trapped_w[(signed long int)1] = BitPosArray[(signed long int)7] | BitPosArray[(signed long int)15];
  mask_kr_trapped_w[(signed long int)2] = BitPosArray[(signed long int)6] | BitPosArray[(signed long int)7] | BitPosArray[(signed long int)15];
  mask_qr_trapped_w[(signed long int)0] = BitPosArray[(signed long int)8];
  mask_qr_trapped_w[(signed long int)1] = BitPosArray[(signed long int)0] | BitPosArray[(signed long int)8];
  mask_qr_trapped_w[(signed long int)2] = BitPosArray[(signed long int)0] | BitPosArray[(signed long int)1] | BitPosArray[(signed long int)8];
  mask_kr_trapped_b[(signed long int)0] = BitPosArray[(signed long int)55];
  mask_kr_trapped_b[(signed long int)1] = BitPosArray[(signed long int)63] | BitPosArray[(signed long int)55];
  mask_kr_trapped_b[(signed long int)2] = BitPosArray[(signed long int)63] | BitPosArray[(signed long int)62] | BitPosArray[(signed long int)55];
  mask_qr_trapped_b[(signed long int)0] = BitPosArray[(signed long int)48];
  mask_qr_trapped_b[(signed long int)1] = BitPosArray[(signed long int)56] | BitPosArray[(signed long int)48];
  mask_qr_trapped_b[(signed long int)2] = BitPosArray[(signed long int)56] | BitPosArray[(signed long int)57] | BitPosArray[(signed long int)48];
}

// InitRankFileBit
// file init.c line 269
void InitRankFileBit(void)
{
  unsigned long int b;
  signed int i = 8;
  b = (unsigned long int)255;
  signed int tmp_post$1;
  do
  {
    tmp_post$1 = i;
    i = i - 1;
    if(tmp_post$1 == 0)
      break;

    RankBit[(signed long int)i] = b;
    b = b << 8;
  }
  while((_Bool)1);
  i = 8;
  b = 0x0101010101010101ULL;
  signed int tmp_post$2;
  do
  {
    tmp_post$2 = i;
    i = i - 1;
    if(tmp_post$2 == 0)
      break;

    FileBit[(signed long int)i] = b;
    b = b << 1;
  }
  while((_Bool)1);
}

// InitRay
// file init.c line 189
void InitRay(void)
{
  signed int piece;
  signed int fsq;
  signed int tsq;
  signed int f;
  signed int t;
  signed int InitRay$$1$$n;
  signed int ray;
  unsigned long int *b;
  memset((void *)directions, -1, sizeof(signed short int [64l][64l]) /*8192ul*/ );
  fsq = 0;
  for( ; !(fsq >= 120); fsq = fsq + 1)
  {
    f = map[(signed long int)fsq];
    if(!(f == -1))
    {
      ray = -1;
      piece = 3;
      for( ; !(piece >= 5); piece = piece + 1)
      {
        InitRay$$1$$n = 0;
        for( ; !(InitRay$$1$$n >= ndir[(signed long int)piece]); InitRay$$1$$n = InitRay$$1$$n + 1)
        {
          ray = ray + 1;
          b = &Ray[(signed long int)f][(signed long int)ray];
          *b = 0x0000000000000000ULL;
          tsq = fsq;
          do
          {
            tsq = tsq + dir[(signed long int)piece][(signed long int)InitRay$$1$$n];
            t = map[(signed long int)tsq];
            if(!(t == -1))
            {
              *b = *b | BitPosArray[(signed long int)t];
              directions[(signed long int)f][(signed long int)t] = (signed short int)ray;
            }

          }
          while(!(t == -1));
        }
      }
    }

  }
}

// InitRotAtak
// file init.c line 441
void InitRotAtak(void)
{
  signed int sq;
  signed int InitRotAtak$$1$$map;
  signed int sq1;
  signed int sq2;
  signed int cmap[8l] = { 128, 64, 32, 16, 8, 4, 2, 1 };
  signed int rot1[8l] = { 0, 8, 16, 24, 32, 40, 48, 56 };
  signed int rot2[8l] = { 0, 9, 18, 27, 36, 45, 54, 63 };
  signed int rot3[8l] = { 56, 49, 42, 35, 28, 21, 14, 7 };
  sq = 0;
  for( ; !(sq >= 8); sq = sq + 1)
  {
    InitRotAtak$$1$$map = 0;
    for( ; !(InitRotAtak$$1$$map >= 256); InitRotAtak$$1$$map = InitRotAtak$$1$$map + 1)
    {
      Rook00Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = (unsigned long int)0;
      Rook90Atak[(signed long int)rot1[(signed long int)sq]][(signed long int)InitRotAtak$$1$$map] = (unsigned long int)0;
      Bishop45Atak[(signed long int)rot2[(signed long int)sq]][(signed long int)InitRotAtak$$1$$map] = (unsigned long int)0;
      Bishop315Atak[(signed long int)rot3[(signed long int)sq]][(signed long int)InitRotAtak$$1$$map] = (unsigned long int)0;
      sq2 = sq;
      sq1 = sq2;
      while(sq1 >= 1)
      {
        sq1 = sq1 - 1;
        if(!((cmap[(signed long int)sq1] & InitRotAtak$$1$$map) == 0))
          break;

      }
      while(!(sq2 >= 7))
      {
        sq2 = sq2 + 1;
        if(!((cmap[(signed long int)sq2] & InitRotAtak$$1$$map) == 0))
          break;

      }
      Rook00Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = FromToRay[(signed long int)sq][(signed long int)sq1] | FromToRay[(signed long int)sq][(signed long int)sq2];
      Rook90Atak[(signed long int)rot1[(signed long int)sq]][(signed long int)InitRotAtak$$1$$map] = FromToRay[(signed long int)rot1[(signed long int)sq]][(signed long int)rot1[(signed long int)sq1]] | FromToRay[(signed long int)rot1[(signed long int)sq]][(signed long int)rot1[(signed long int)sq2]];
      Bishop45Atak[(signed long int)rot2[(signed long int)sq]][(signed long int)InitRotAtak$$1$$map] = FromToRay[(signed long int)rot2[(signed long int)sq]][(signed long int)rot2[(signed long int)sq1]] | FromToRay[(signed long int)rot2[(signed long int)sq]][(signed long int)rot2[(signed long int)sq2]];
      Bishop315Atak[(signed long int)rot3[(signed long int)sq]][(signed long int)InitRotAtak$$1$$map] = FromToRay[(signed long int)rot3[(signed long int)sq]][(signed long int)rot3[(signed long int)sq1]] | FromToRay[(signed long int)rot3[(signed long int)sq]][(signed long int)rot3[(signed long int)sq2]];
    }
  }
  InitRotAtak$$1$$map = 0;
  for( ; !(InitRotAtak$$1$$map >= 256); InitRotAtak$$1$$map = InitRotAtak$$1$$map + 1)
  {
    sq = 8;
    for( ; !(sq >= 64); sq = sq + 1)
      Rook00Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = Rook00Atak[(signed long int)(sq - 8)][(signed long int)InitRotAtak$$1$$map] >> 8;
    sq1 = 1;
    for( ; !(sq1 >= 8); sq1 = sq1 + 1)
    {
      sq2 = 0;
      for( ; !(sq2 >= 64); sq2 = sq2 + 8)
      {
        sq = sq2 + sq1;
        Rook90Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = Rook90Atak[(signed long int)(sq - 1)][(signed long int)InitRotAtak$$1$$map] >> 1;
      }
    }
    sq1 = 1;
    sq2 = 55;
    for( ; !(sq1 >= 8); sq2 = sq2 - 8)
    {
      sq = sq1;
      for( ; sq2 >= sq; sq = sq + 9)
        Bishop45Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = Bishop45Atak[(signed long int)(sq + 8)][(signed long int)InitRotAtak$$1$$map] << 8;
      sq1 = sq1 + 1;
    }
    sq1 = 8;
    sq2 = 62;
    for( ; !(sq1 >= 57); sq2 = sq2 - 1)
    {
      sq = sq1;
      for( ; sq2 >= sq; sq = sq + 9)
        Bishop45Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = (Bishop45Atak[(signed long int)(sq + 1)][(signed long int)InitRotAtak$$1$$map] & NotBitPosArray[(signed long int)(sq1 - 8)]) << 1;
      sq1 = sq1 + 8;
    }
    sq1 = 15;
    sq2 = 57;
    for( ; !(sq1 >= 64); sq2 = sq2 + 1)
    {
      sq = sq1;
      for( ; sq2 >= sq; sq = sq + 7)
        Bishop315Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = Bishop315Atak[(signed long int)(sq - 8)][(signed long int)InitRotAtak$$1$$map] >> 8;
      sq1 = sq1 + 8;
    }
    sq1 = 6;
    sq2 = 48;
    for( ; sq1 >= 0; sq2 = sq2 - 8)
    {
      sq = sq1;
      for( ; sq2 >= sq; sq = sq + 7)
        Bishop315Atak[(signed long int)sq][(signed long int)InitRotAtak$$1$$map] = (Bishop315Atak[(signed long int)(sq + 1)][(signed long int)InitRotAtak$$1$$map] & NotBitPosArray[(signed long int)(sq2 + 8)]) << 1;
      sq1 = sq1 - 1;
    }
  }
}

// InitSquarePawnMask
// file init.c line 373
void InitSquarePawnMask(void)
{
  unsigned int sq;
  signed int len;
  signed int i;
  signed int j;
  memset((void *)SquarePawnMask, 0, sizeof(unsigned long int [2l][64l]) /*1024ul*/ );
  sq = (unsigned int)0;
  for( ; !(sq >= 64u); sq = sq + 1u)
  {
    len = (signed int)((unsigned int)7 - (sq >> 3));
    i = (signed int)((sq & (unsigned int)56) > sq - (unsigned int)len ? sq & (unsigned int)56 : sq - (unsigned int)len);
    j = (signed int)((sq | (unsigned int)7) < sq + (unsigned int)len ? sq | (unsigned int)7 : sq + (unsigned int)len);
    for( ; j >= i; i = i + 1)
      SquarePawnMask[(signed long int)0][(signed long int)sq] = SquarePawnMask[(signed long int)0][(signed long int)sq] | BitPosArray[(signed long int)i] | FromToRay[(signed long int)i][(signed long int)(i | 56)];
    len = (signed int)(sq >> 3);
    i = (signed int)((sq & (unsigned int)56) > sq - (unsigned int)len ? sq & (unsigned int)56 : sq - (unsigned int)len);
    j = (signed int)((sq | (unsigned int)7) < sq + (unsigned int)len ? sq | (unsigned int)7 : sq + (unsigned int)len);
    for( ; j >= i; i = i + 1)
      SquarePawnMask[(signed long int)1][(signed long int)sq] = SquarePawnMask[(signed long int)1][(signed long int)sq] | BitPosArray[(signed long int)i] | FromToRay[(signed long int)i][(signed long int)(i & 7)];
  }
  sq = (unsigned int)8;
  for( ; !(sq >= 16u); sq = sq + 1u)
    SquarePawnMask[(signed long int)0][(signed long int)sq] = SquarePawnMask[(signed long int)0][(signed long int)(sq + (unsigned int)8)];
  sq = (unsigned int)48;
  for( ; !(sq >= 56u); sq = sq + 1u)
    SquarePawnMask[(signed long int)1][(signed long int)sq] = SquarePawnMask[(signed long int)1][(signed long int)(sq - (unsigned int)8)];
}

// InitVars
// file common.h line 534
void InitVars(void)
{
  signed int i;
  memset((void *)&board, 0, sizeof(struct anonymous$5) /*184ul*/ );
  i = 8;
  for( ; !(i >= 16); i = i + 1)
    board.b[(signed long int)0][(signed long int)1] = board.b[(signed long int)0][(signed long int)1] | BitPosArray[(signed long int)i];
  board.b[(signed long int)0][(signed long int)4] = board.b[(signed long int)0][(signed long int)4] | BitPosArray[(signed long int)0];
  board.b[(signed long int)0][(signed long int)2] = board.b[(signed long int)0][(signed long int)2] | BitPosArray[(signed long int)1];
  board.b[(signed long int)0][(signed long int)3] = board.b[(signed long int)0][(signed long int)3] | BitPosArray[(signed long int)2];
  board.b[(signed long int)0][(signed long int)5] = board.b[(signed long int)0][(signed long int)5] | BitPosArray[(signed long int)3];
  board.b[(signed long int)0][(signed long int)6] = board.b[(signed long int)0][(signed long int)6] | BitPosArray[(signed long int)4];
  board.b[(signed long int)0][(signed long int)3] = board.b[(signed long int)0][(signed long int)3] | BitPosArray[(signed long int)5];
  board.b[(signed long int)0][(signed long int)2] = board.b[(signed long int)0][(signed long int)2] | BitPosArray[(signed long int)6];
  board.b[(signed long int)0][(signed long int)4] = board.b[(signed long int)0][(signed long int)4] | BitPosArray[(signed long int)7];
  i = 48;
  for( ; !(i >= 56); i = i + 1)
    board.b[(signed long int)1][(signed long int)1] = board.b[(signed long int)1][(signed long int)1] | BitPosArray[(signed long int)i];
  board.b[(signed long int)1][(signed long int)4] = board.b[(signed long int)1][(signed long int)4] | BitPosArray[(signed long int)56];
  board.b[(signed long int)1][(signed long int)2] = board.b[(signed long int)1][(signed long int)2] | BitPosArray[(signed long int)57];
  board.b[(signed long int)1][(signed long int)3] = board.b[(signed long int)1][(signed long int)3] | BitPosArray[(signed long int)58];
  board.b[(signed long int)1][(signed long int)5] = board.b[(signed long int)1][(signed long int)5] | BitPosArray[(signed long int)59];
  board.b[(signed long int)1][(signed long int)6] = board.b[(signed long int)1][(signed long int)6] | BitPosArray[(signed long int)60];
  board.b[(signed long int)1][(signed long int)3] = board.b[(signed long int)1][(signed long int)3] | BitPosArray[(signed long int)61];
  board.b[(signed long int)1][(signed long int)2] = board.b[(signed long int)1][(signed long int)2] | BitPosArray[(signed long int)62];
  board.b[(signed long int)1][(signed long int)4] = board.b[(signed long int)1][(signed long int)4] | BitPosArray[(signed long int)63];
  stonewall[(signed long int)0] = stonewall[(signed long int)0] | BitPosArray[(signed long int)27];
  stonewall[(signed long int)0] = stonewall[(signed long int)0] | BitPosArray[(signed long int)20];
  stonewall[(signed long int)0] = stonewall[(signed long int)0] | BitPosArray[(signed long int)29];
  stonewall[(signed long int)1] = stonewall[(signed long int)1] | BitPosArray[(signed long int)35];
  stonewall[(signed long int)1] = stonewall[(signed long int)1] | BitPosArray[(signed long int)44];
  stonewall[(signed long int)1] = stonewall[(signed long int)1] | BitPosArray[(signed long int)37];
  rings[(signed long int)0] = 0x0000001818000000ULL;
  rings[(signed long int)1] = 0x00003C24243C0000ULL;
  rings[(signed long int)2] = 0x007E424242427E00ULL;
  rings[(signed long int)3] = 0xFF818181818181FFULL;
  boxes[(signed long int)0] = 0x00003C3C3C3C0000ULL;
  boxes[(signed long int)1] = 0x007E7E7E7E7E7E00ULL;
  boardhalf[(signed long int)0] = RankBit[(signed long int)0] | RankBit[(signed long int)1] | RankBit[(signed long int)2] | RankBit[(signed long int)3];
  boardhalf[(signed long int)1] = RankBit[(signed long int)4] | RankBit[(signed long int)5] | RankBit[(signed long int)6] | RankBit[(signed long int)7];
  boardside[(signed long int)0] = FileBit[(signed long int)4] | FileBit[(signed long int)5] | FileBit[(signed long int)6] | FileBit[(signed long int)7];
  boardside[(signed long int)1] = FileBit[(signed long int)0] | FileBit[(signed long int)1] | FileBit[(signed long int)2] | FileBit[(signed long int)3];
  board.flag = board.flag | (signed short int)(0x0001 | 0x0002 | 0x0004 | 0x0008);
  board.side = (signed short int)0;
  RealSide = board.side;
  board.ep = (signed short int)-1;
  board.king[(signed long int)0] = (signed short int)4;
  board.king[(signed long int)1] = (signed short int)60;
  GameCnt = -1;
  RealGameCnt = GameCnt;
  Game50 = 0;
  computer = 1;
  CalcHashKey();
  Game[(signed long int)0].hashkey = HashKey;
  board.pmaterial[(signed long int)1] = (signed short int)(2 * 550 + 2 * 350 + 2 * 350 + 1100);
  board.pmaterial[(signed long int)0] = board.pmaterial[(signed long int)1];
  board.material[(signed long int)1] = (signed short int)((signed int)board.pmaterial[(signed long int)0] + 8 * 100);
  board.material[(signed long int)0] = board.material[(signed long int)1];
  initial_comments = (char *)(void *)0;
  pgn_othertags = (char *)(void *)0;
  pgn_result = pgn_othertags;
  pgn_blackELO = pgn_result;
  pgn_whiteELO = pgn_blackELO;
  pgn_black = pgn_whiteELO;
  pgn_white = pgn_black;
  pgn_round = pgn_white;
  pgn_date = pgn_round;
  pgn_site = pgn_date;
  pgn_event = pgn_site;
  UpdateFriends();
  UpdateCBoard();
  UpdateMvboard();
  i = 0;
  for( ; !(i >= 64); i = i + 1)
    if(!(cboard[(signed long int)i] == 0))
    {
      board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)i]];
      board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)i]];
      board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)i]];
    }

  TreePtr[(signed long int)1] = Tree;
  TreePtr[(signed long int)0] = TreePtr[(signed long int)1];
  do
  {
    flags = flags | (unsigned int)0x0080;
    dbg_printf("Set   0x%x\n", 0x0080);
  }
  while((_Bool)0);
  do
  {
    flags = flags | (unsigned int)0x0200;
    dbg_printf("Set   0x%x\n", 0x0200);
  }
  while((_Bool)0);
  SearchTime = (float)5;
  SearchDepth = 0;
  board.castled[(signed long int)1] = (signed short int)0;
  board.castled[(signed long int)0] = board.castled[(signed long int)1];
  phase = 8 - ((signed int)board.material[(signed long int)0] + (signed int)board.material[(signed long int)1]) / 1150;
  if(HashSize == 0u)
    CalcHashSize((signed int)HashSize);

  signal(2, EndSearch);
  nmovesfrombook = 0;
}

// Initialize
// file init.c line 38
void Initialize(void)
{
  InitLzArray();
  InitBitPosArray();
  InitMoveArray();
  InitRay();
  InitFromToRay();
  InitRankFileBit();
  InitPassedPawnMask();
  InitIsolaniMask();
  InitSquarePawnMask();
  InitBitCount();
  InitRotAtak();
  InitRandomMasks();
  InitDistance();
  InitVars();
  InitHashCode();
  InitHashTable();
  CalcHashKey();
  InitInput();
}

// IsInMoveList
// file move.c line 780
struct anonymous * IsInMoveList(signed int ply, signed int f, signed int t, char piece)
{
  struct anonymous *IsInMoveList$$1$$node = TreePtr[(signed long int)ply];
  signed int tmp_statement_expression$1;
  signed int tmp_if_expr$3;
  const signed int **return_value___ctype_toupper_loc$2;
  const signed int **return_value___ctype_toupper_loc$4;
  for( ; !(IsInMoveList$$1$$node >= TreePtr[(signed long int)(1 + ply)]); IsInMoveList$$1$$node = IsInMoveList$$1$$node + 1l)
    if((0x0FFF & IsInMoveList$$1$$node->move) == (f << 6 | t))
    {
      signed int __res;
      return_value___ctype_toupper_loc$4=__ctype_toupper_loc();
      __res = (*return_value___ctype_toupper_loc$4)[(signed long int)(signed int)piece];
      tmp_statement_expression$1 = __res;
      if(tmp_statement_expression$1 == (signed int)notation[(signed long int)(IsInMoveList$$1$$node->move >> 12 & 0x0007)])
        return IsInMoveList$$1$$node;

    }

  return (struct anonymous *)(void *)0;
}

// IsLegalMove
// file common.h line 581
signed int IsLegalMove(signed int move)
{
  signed int side;
  signed int f;
  signed int t;
  signed int piece;
  unsigned long int blocker;
  unsigned long int enemy;
  f = move >> 6 & 0x003F;
  t = move & 0x003F;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$12;
  signed short int return_value_SqAtakd$11;
  _Bool tmp_if_expr$14;
  signed short int return_value_SqAtakd$13;
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$7;
  signed short int return_value_SqAtakd$6;
  _Bool tmp_if_expr$9;
  signed short int return_value_SqAtakd$8;
  _Bool tmp_if_expr$20;
  _Bool tmp_if_expr$22;
  signed short int return_value_SqAtakd$21;
  _Bool tmp_if_expr$24;
  signed short int return_value_SqAtakd$23;
  _Bool tmp_if_expr$15;
  _Bool tmp_if_expr$17;
  signed short int return_value_SqAtakd$16;
  _Bool tmp_if_expr$19;
  signed short int return_value_SqAtakd$18;
  if(cboard[(signed long int)f] == 0)
    return 0;

  else
  {
    side = (signed int)board.side;
    if((board.friends[(signed long int)side] & BitPosArray[(signed long int)f]) == 0ul)
      return 0;

    else
      if(!((board.friends[(signed long int)side] & BitPosArray[(signed long int)t]) == 0ul))
        return 0;

      else
      {
        piece = cboard[(signed long int)f];
        if(!((4222976 & move) == 0) && !(piece == 1))
          return 0;

        else
          if(!((0x00400000 & move) == 0) && !(t == (signed int)board.ep))
            return 0;

          else
            if(!((0x00200000 & move) == 0) && !(piece == 6))
              return 0;

            else
            {
              blocker = board.blocker;
              if(piece == 1)
              {
                if((signed int)board.ep >= 0 && !((0x00400000 & move) == 0))
                  enemy = board.friends[(signed long int)(1 ^ side)] | BitPosArray[(signed long int)board.ep];

                else
                  enemy = board.friends[(signed long int)(1 ^ side)];
                if(side == 0)
                {
                  if((MoveArray[1l][(signed long int)f] & BitPosArray[(signed long int)t] & enemy) == 0ul)
                  {
                    if(t + -f == 8)
                      tmp_if_expr$2 = cboard[(signed long int)t] == 0 ? (_Bool)1 : (_Bool)0;

                    else
                      tmp_if_expr$2 = (_Bool)0;
                    if(!tmp_if_expr$2)
                    {
                      if(t + -f == 16 && f >> 3 == 1)
                        tmp_if_expr$1 = !((FromToRay[(signed long int)f][(signed long int)t] & blocker) != 0ul) ? (_Bool)1 : (_Bool)0;

                      else
                        tmp_if_expr$1 = (_Bool)0;
                      if(!tmp_if_expr$1)
                        return 0;

                    }

                  }

                }

                else
                  if(side == 1)
                  {
                    if((MoveArray[7l][(signed long int)f] & BitPosArray[(signed long int)t] & enemy) == 0ul)
                    {
                      if(t + -f == -8)
                        tmp_if_expr$4 = cboard[(signed long int)t] == 0 ? (_Bool)1 : (_Bool)0;

                      else
                        tmp_if_expr$4 = (_Bool)0;
                      if(!tmp_if_expr$4)
                      {
                        if(t + -f == -16 && f >> 3 == 6)
                          tmp_if_expr$3 = !((FromToRay[(signed long int)f][(signed long int)t] & blocker) != 0ul) ? (_Bool)1 : (_Bool)0;

                        else
                          tmp_if_expr$3 = (_Bool)0;
                        if(!tmp_if_expr$3)
                          return 0;

                      }

                    }

                  }

              }

              else
                if(piece == 6)
                {
                  if(side == 0)
                  {
                    if((MoveArray[(signed long int)piece][(signed long int)f] & BitPosArray[(signed long int)t]) == 0ul)
                    {
                      if(f == 4 && t == 6 && !((0x0001 & (signed int)board.flag) == 0))
                        tmp_if_expr$10 = !((FromToRay[(signed long int)4][(signed long int)6] & blocker) != 0ul) ? (_Bool)1 : (_Bool)0;

                      else
                        tmp_if_expr$10 = (_Bool)0;
                      if(tmp_if_expr$10)
                      {
                        return_value_SqAtakd$11=SqAtakd((signed short int)4, (signed short int)1);
                        tmp_if_expr$12 = !(return_value_SqAtakd$11 != 0) ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr$12 = (_Bool)0;
                      if(tmp_if_expr$12)
                      {
                        return_value_SqAtakd$13=SqAtakd((signed short int)5, (signed short int)1);
                        tmp_if_expr$14 = !(return_value_SqAtakd$13 != 0) ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr$14 = (_Bool)0;
                      if(!tmp_if_expr$14)
                      {
                        if(f == 4 && t == 2 && !((0x0002 & (signed int)board.flag) == 0))
                          tmp_if_expr$5 = !((FromToRay[(signed long int)4][(signed long int)1] & blocker) != 0ul) ? (_Bool)1 : (_Bool)0;

                        else
                          tmp_if_expr$5 = (_Bool)0;
                        if(tmp_if_expr$5)
                        {
                          return_value_SqAtakd$6=SqAtakd((signed short int)4, (signed short int)1);
                          tmp_if_expr$7 = !(return_value_SqAtakd$6 != 0) ? (_Bool)1 : (_Bool)0;
                        }

                        else
                          tmp_if_expr$7 = (_Bool)0;
                        if(tmp_if_expr$7)
                        {
                          return_value_SqAtakd$8=SqAtakd((signed short int)3, (signed short int)1);
                          tmp_if_expr$9 = !(return_value_SqAtakd$8 != 0) ? (_Bool)1 : (_Bool)0;
                        }

                        else
                          tmp_if_expr$9 = (_Bool)0;
                        if(!tmp_if_expr$9)
                          return 0;

                      }

                    }

                  }

                  if(side == 1)
                  {
                    if((MoveArray[(signed long int)piece][(signed long int)f] & BitPosArray[(signed long int)t]) == 0ul)
                    {
                      if(f == 60 && t == 62 && !((0x0004 & (signed int)board.flag) == 0))
                        tmp_if_expr$20 = !((FromToRay[(signed long int)60][(signed long int)62] & blocker) != 0ul) ? (_Bool)1 : (_Bool)0;

                      else
                        tmp_if_expr$20 = (_Bool)0;
                      if(tmp_if_expr$20)
                      {
                        return_value_SqAtakd$21=SqAtakd((signed short int)60, (signed short int)0);
                        tmp_if_expr$22 = !(return_value_SqAtakd$21 != 0) ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr$22 = (_Bool)0;
                      if(tmp_if_expr$22)
                      {
                        return_value_SqAtakd$23=SqAtakd((signed short int)61, (signed short int)0);
                        tmp_if_expr$24 = !(return_value_SqAtakd$23 != 0) ? (_Bool)1 : (_Bool)0;
                      }

                      else
                        tmp_if_expr$24 = (_Bool)0;
                      if(!tmp_if_expr$24)
                      {
                        if(f == 60 && t == 58 && !((0x0008 & (signed int)board.flag) == 0))
                          tmp_if_expr$15 = !((FromToRay[(signed long int)60][(signed long int)57] & blocker) != 0ul) ? (_Bool)1 : (_Bool)0;

                        else
                          tmp_if_expr$15 = (_Bool)0;
                        if(tmp_if_expr$15)
                        {
                          return_value_SqAtakd$16=SqAtakd((signed short int)60, (signed short int)0);
                          tmp_if_expr$17 = !(return_value_SqAtakd$16 != 0) ? (_Bool)1 : (_Bool)0;
                        }

                        else
                          tmp_if_expr$17 = (_Bool)0;
                        if(tmp_if_expr$17)
                        {
                          return_value_SqAtakd$18=SqAtakd((signed short int)59, (signed short int)0);
                          tmp_if_expr$19 = !(return_value_SqAtakd$18 != 0) ? (_Bool)1 : (_Bool)0;
                        }

                        else
                          tmp_if_expr$19 = (_Bool)0;
                        if(!tmp_if_expr$19)
                          return 0;

                      }

                    }

                  }

                }

                else
                  if((MoveArray[(signed long int)piece][(signed long int)f] & BitPosArray[(signed long int)t]) == 0ul)
                    return 0;

              if(!(slider[(signed long int)piece] == 0))
              {
                if((FromToRay[(signed long int)f][(signed long int)t] & NotBitPosArray[(signed long int)t] & blocker) == 0ul)
                  goto __CPROVER_DUMP_L51;

                return 0;
              }

              else
              {

              __CPROVER_DUMP_L51:
                ;
                return 1;
              }
            }
      }
  }
}

// IsTrustedPlayer
// file pgn.c line 303
signed int IsTrustedPlayer(const char *name)
{
  signed int i = 0;
  for( ; !((unsigned long int)i >= 103ul); i = i + 1)
  {
    char *return_value_strstr$1;
    return_value_strstr$1=strstr(name, trusted_players[(signed long int)i]);
    if(!(return_value_strstr$1 == ((char *)NULL)))
      return 1;

  }
  return 0;
}

// Iterate
// file iterate.c line 37
void Iterate(void)
{
  unsigned char side;
  signed int score;
  signed int Iterate$$1$$RootAlpha;
  signed int Iterate$$1$$RootBeta;
  dbg_printf("Entered iterate().\n");
  side = (unsigned char)board.side;
  computerplays = (signed int)board.side;
  lazyscore[(signed long int)1] = 150;
  lazyscore[(signed long int)0] = lazyscore[(signed long int)1];
  maxposnscore[(signed long int)1] = 150;
  maxposnscore[(signed long int)0] = maxposnscore[(signed long int)1];
  GenCnt = (unsigned long int)0;
  QuiesCnt = (unsigned long int)0;
  NodeCnt = QuiesCnt;
  EvalCall = (unsigned long int)0;
  EvalCnt = EvalCall;
  ThrtExtCnt = (unsigned long int)0;
  HorzExtCnt = ThrtExtCnt;
  PawnExtCnt = HorzExtCnt;
  RcpExtCnt = PawnExtCnt;
  ChkExtCnt = RcpExtCnt;
  OneRepCnt = ChkExtCnt;
  KingExtCnt = (unsigned long int)0;
  FutlCutCnt = (unsigned long int)0;
  NullCutCnt = FutlCutCnt;
  GoodGetHashCnt = (unsigned long int)0;
  TotalGetHashCnt = GoodGetHashCnt;
  CollHashCnt = (unsigned long int)0;
  TotalPutHashCnt = CollHashCnt;
  GoodPawnHashCnt = (unsigned long int)0;
  TotalPawnHashCnt = GoodPawnHashCnt;
  unsigned char return_value_nbits$1;
  return_value_nbits$1=nbits$link5(board.b[(signed long int)0][(signed long int)1] | board.b[(signed long int)1][(signed long int)1]);
  RootPawns = (signed short int)return_value_nbits$1;
  unsigned char return_value_nbits$2;
  return_value_nbits$2=nbits$link5(board.friends[(signed long int)0] | board.friends[(signed long int)1]);
  RootPieces = (signed short int)((signed int)return_value_nbits$2 - (signed int)RootPawns);
  RootMaterial = (signed short int)((signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ (signed int)side)]);
  RepeatCnt = (unsigned long int)0;
  ElapsedTime = 0.0;
  StartTime=StartTiming();
  memset((void *)ChkCnt, 0, sizeof(signed int [65l]) /*260ul*/ );
  memset((void *)ThrtCnt, 0, sizeof(signed int [65l]) /*260ul*/ );
  memset((void *)history, 0, sizeof(unsigned long int [2l][4096l]) /*65536ul*/ );
  memset((void *)killer1, 0, sizeof(signed int [65l]) /*260ul*/ );
  memset((void *)killer2, 0, sizeof(signed int [65l]) /*260ul*/ );
  do
  {
    flags = flags & (unsigned int)~0x0010;
    dbg_printf("Clear 0x%x\n", 0x0010);
  }
  while((_Bool)0);
  if(!((2048u & flags) == 0u))
  {
    SearchTime = (TimeLimit[(signed long int)side] - (float)2) / (float)MoveLimit[(signed long int)side];
    SearchTime = ((float)95 * SearchTime) / (float)100;
    if(!(suddendeath == 0))
      SearchTime = ((float)92 * SearchTime) / (float)100;

    if(!(nmovesfrombook >= 4))
    {
      printf("Search time bonus near book\n");
      SearchTime = (float)(1.5 * (double)SearchTime);
    }

    if(!(TCinc == 0))
    {
      if(SearchTime < (float)TCinc)
      {
        printf("TimeLimit[%s] = %6.2f\n", (signed int)side == 0 ? "White" : "Black", TimeLimit[(signed long int)side]);
        if(TimeLimit[(signed long int)side] > 30.000000f)
          SearchTime = (float)TCinc;

      }

    }

    ShowTime();
  }

  Idepth = 0;
  TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
  GenMoves((signed short int)1);
  FilterIllegalMoves((signed short int)1);
  SortRoot();
  InChk[(signed long int)1]=SqAtakd(board.king[(signed long int)side], (signed short int)(1 ^ (signed int)side));
  if(GenCnt == 0ul)
  {
    if((64u & flags) == 0u)
    {
      if(!(InChk[1l] == 0))
      {
        if(computerplays == 1)
          printf("1-0 {computer loses as black}\n");

        else
          if(computerplays == 0)
            printf("0-1 {computer loses as white}\n");

      }

      else
        printf("1/2-1/2 {stalemate}\n");
      fflush(stdout);
    }

    do
    {
      flags = flags | (unsigned int)(0x0010 | 0x0040);
      dbg_printf("Set   0x%x\n", 0x0010 | 0x0040);
    }
    while((_Bool)0);
    goto __CPROVER_DUMP_L62;
  }

  else
    if(GenCnt == 1ul)
    {
      RootPV = TreePtr[(signed long int)1]->move;
      do
      {
        flags = flags | (unsigned int)0x0010;
        dbg_printf("Set   0x%x\n", 0x0010);
      }
      while((_Bool)0);
    }

  score=Evaluate(-32767, 32767);
  lastrootscore = score;
  wasbookmove = 0;
  if((256u & flags) == 0u && (8192u & flags) == 0u && !((signed int)bookmode == 0) && !(nmovesfrombook >= 4))
  {
    dbg_printf("Doing book lookup.\n");
    signed int return_value_BookQuery$3;
    return_value_BookQuery$3=BookQuery(0);
    if(return_value_BookQuery$3 == 0)
    {
      nmovesfrombook = 0;
      wasbookmove = 1;
      do
      {
        flags = flags | (unsigned int)0x0010;
        dbg_printf("Set   0x%x\n", 0x0010);
      }
      while((_Bool)0);
    }

    else
      nmovesfrombook = nmovesfrombook + 1;
  }

  else
    nmovesfrombook = nmovesfrombook + 1;
  maxtime = (float)4 * SearchTime;
  if(!((4096u & flags) == 0u))
  {
    printf("Root = %d, ", score);
    printf("Phase = %d ", phase);
  }

  if(!(ofp == stdout))
  {
    fprintf(ofp, "Entered Iterate() for %s.\n", (flags & (unsigned int)0x2000) != 0u ? "pondering" : "analyzing");
    fprintf(ofp, "Root = %d\t", score);
    fprintf(ofp, "Phase = %d\t", phase);
  }

  if(SearchDepth == 0)
  {
    if(!(ofp == stdout))
      fprintf(ofp, "\nTime = %.2f, Max = %.2f, Left = %.2f, Moves= %d\n", SearchTime, maxtime, TimeLimit[(signed long int)side], MoveLimit[(signed long int)side]);

    if(!((4096u & flags) == 0u))
      printf("\nTime = %.2f, Max = %.2f, Left = %.2f, Moves = %d\n", SearchTime, maxtime, TimeLimit[(signed long int)side], MoveLimit[(signed long int)side]);

  }

  else
  {
    if(!(ofp == stdout))
      fprintf(ofp, "Depth = %d\n", SearchDepth);

    if(!((4096u & flags) == 0u))
      printf("Depth = %d\n", SearchDepth);

  }
  if(!((4096u & flags) == 0u))
  {
    printf("Ply   Time     Eval      Nodes   Principal-Variation\n");
    if(!(ofp == stdout))
      fprintf(ofp, "Ply   Time     Eval      Nodes   Principal-Variation\n");

  }

  while((16u & flags) == 0u)
  {
    if(score >= 32513)
    {
      Iterate$$1$$RootAlpha = score - 1;
      Iterate$$1$$RootBeta = 32767;
    }

    else
      if(!(score >= 255))
      {
        Iterate$$1$$RootAlpha = -32767;
        Iterate$$1$$RootBeta = score + 1;
      }

      else
      {
        Iterate$$1$$RootAlpha = score - 75 > -32767 ? score - 75 : -32767;
        Iterate$$1$$RootBeta = score + 75 < 32767 ? score + 75 : 32767;
      }
    Idepth = Idepth + 1;
    rootscore = -32767 - 1;
    score=SearchRoot((signed short int)Idepth, Iterate$$1$$RootAlpha, Iterate$$1$$RootBeta);
    if((16u & flags) == 0u && score >= Iterate$$1$$RootBeta && !(score >= 32767))
    {
      ShowLine(RootPV, score, (char)43);
      rootscore = -32767 - 1;
      Iterate$$1$$RootAlpha = Iterate$$1$$RootBeta;
      Iterate$$1$$RootBeta = 32767;
      score=SearchRoot((signed short int)Idepth, Iterate$$1$$RootAlpha, Iterate$$1$$RootBeta);
    }

    else
      if((16u & flags) == 0u && Iterate$$1$$RootAlpha >= score)
      {
        ShowLine(RootPV, score, (char)45);
        rootscore = -32767 - 1;
        Iterate$$1$$RootBeta = Iterate$$1$$RootAlpha;
        Iterate$$1$$RootAlpha = -32767;
        score=SearchRoot((signed short int)Idepth, Iterate$$1$$RootAlpha, Iterate$$1$$RootBeta);
      }

    ShowLine(RootPV, score, (char)46);
    lastrootscore = score;
    if(SearchDepth == 0 && ElapsedTime >= (double)((2.000000f * SearchTime) / 3.000000f) && !((2048u & flags) == 0u))
      do
      {
        flags = flags | (unsigned int)0x0010;
        dbg_printf("Set   0x%x\n", 0x0010);
      }
      while((_Bool)0);

    signed int return_value_abs$4;
    return_value_abs$4=abs(score);
    if(Idepth + return_value_abs$4 >= 1)
      do
      {
        flags = flags | (unsigned int)0x0010;
        dbg_printf("Set   0x%x\n", 0x0010);
      }
      while((_Bool)0);

    if((8192u & flags) == 0u && Idepth == SearchDepth)
      break;

  }
  ElapsedTime=GetElapsed(StartTime);
  _Bool tmp_if_expr$5;
  _Bool tmp_if_expr$13;
  signed short int return_value_Repeat$12;
  if((8192u & flags) == 0u)
  {
    SANMove(RootPV, 1);
    strcpy(Game[(signed long int)(GameCnt + 1)].SANmv, SANmv);
    Game[(signed long int)(GameCnt + 1)].et = (float)ElapsedTime;
    MakeMove((signed int)side, &RootPV);
    if(!((2048u & flags) == 0u))
    {
      if(!(suddendeath == 0))
      {
        if(TimeLimit[(signed long int)side] > 0.000000f)
          tmp_if_expr$5 = TimeLimit[(signed long int)side] <= (float)60 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$5 = (_Bool)0;
        if(tmp_if_expr$5)
          MoveLimit[(signed long int)side] = 60;

        else
          MoveLimit[(signed long int)side] = 35;
        printf("MoveLimit is %d\n", MoveLimit[(signed long int)side]);
        printf("TimeLimit is %f\n", TimeLimit[(signed long int)side]);
      }

      else
        MoveLimit[(signed long int)side] = MoveLimit[(signed long int)side] - 1;
      TimeLimit[(signed long int)side] = TimeLimit[(signed long int)side] - (float)ElapsedTime;
      if(!(TCinc == 0))
        TimeLimit[(signed long int)side] = TimeLimit[(signed long int)side] + (float)TCinc;

      if(MoveLimit[(signed long int)side] == 0)
        MoveLimit[(signed long int)side] = TCMove;

    }

    if(!((1024u & flags) == 0u))
    {
      char *return_value_AlgbrMove$6;
      return_value_AlgbrMove$6=AlgbrMove(RootPV);
      printf("%d. ... %s\n", GameCnt / 2 + 1, return_value_AlgbrMove$6);
      char *return_value_AlgbrMove$7;
      return_value_AlgbrMove$7=AlgbrMove(RootPV);
      printf("My move is: %s\n", return_value_AlgbrMove$7);
      fflush(stdout);
      if(!(ofp == stdout))
      {
        char *return_value_AlgbrMove$8;
        return_value_AlgbrMove$8=AlgbrMove(RootPV);
        fprintf(ofp, "%d. ... %s\n", GameCnt / 2 + 1, return_value_AlgbrMove$8);
        char *return_value_AlgbrMove$9;
        return_value_AlgbrMove$9=AlgbrMove(RootPV);
        fprintf(ofp, "My move is: %s\n", return_value_AlgbrMove$9);
        fflush(ofp);
      }

    }

    else
    {
      if(wasbookmove == 0)
      {
        fprintf(ofp, "\nTime = %.1f Rate=%ld Nodes=[%ld/%ld/%ld] GenCnt=%ld\n", ElapsedTime, ElapsedTime > (double)0 ? (unsigned long int)((double)(NodeCnt + QuiesCnt) / ElapsedTime) : (unsigned long int)0, NodeCnt, QuiesCnt, NodeCnt + QuiesCnt, GenCnt);
        fprintf(ofp, "Eval=[%ld/%ld] RptCnt=%ld NullCut=%ld FutlCut=%ld\n", EvalCnt, EvalCall, RepeatCnt, NullCutCnt, FutlCutCnt);
        fprintf(ofp, "Ext: Chk=%ld Recap=%ld Pawn=%ld OneRep=%ld Horz=%ld Mate=%ld KThrt=%ld\n", ChkExtCnt, RcpExtCnt, PawnExtCnt, OneRepCnt, HorzExtCnt, ThrtExtCnt, KingExtCnt);
        fprintf(ofp, "Material=[%d/%d : %d/%d] ", board.pmaterial[(signed long int)0], board.pmaterial[(signed long int)1], board.material[(signed long int)0], board.material[(signed long int)1]);
        fprintf(ofp, "Lazy=[%d/%d] ", lazyscore[(signed long int)0], lazyscore[(signed long int)1]);
        fprintf(ofp, "MaxPosnScore=[%d/%d]\n", maxposnscore[(signed long int)0], maxposnscore[(signed long int)1]);
        fprintf(ofp, "Hash: Success=%ld%% Collision=%ld%% Pawn=%ld%%\n", (GoodGetHashCnt * (unsigned long int)100) / (TotalGetHashCnt + (unsigned long int)1), (CollHashCnt * (unsigned long int)100) / (TotalPutHashCnt + (unsigned long int)1), (GoodPawnHashCnt * (unsigned long int)100) / (TotalPawnHashCnt + (unsigned long int)1));
      }

      if((256u & flags) == 0u)
        ShowBoard();

      printf("\nMy move is : %s\n", (const void *)SANmv);
      fflush(stdout);
      if(!(ofp == stdout))
      {
        fprintf(ofp, "\nMy move is : %s\n", (const void *)SANmv);
        fflush(ofp);
      }

    }
    TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
    GenMoves((signed short int)1);
    FilterIllegalMoves((signed short int)1);
    if(TreePtr[1l] == TreePtr[2l])
    {
      signed short int return_value_SqAtakd$10;
      return_value_SqAtakd$10=SqAtakd(board.king[(signed long int)board.side], (signed short int)(1 ^ (signed int)board.side));
      if(!(return_value_SqAtakd$10 == 0))
      {
        if(computerplays == 1)
          printf("0-1 {computer wins as black}\n");

        else
          printf("1-0 {computer wins as white}\n");
      }

      else
        printf("1/2-1/2 {stalemate}\n");
      fflush(stdout);
      do
      {
        flags = flags | (unsigned int)0x0040;
        dbg_printf("Set   0x%x\n", 0x0040);
      }
      while((_Bool)0);
    }

    signed short int return_value_EvaluateDraw$11;
    return_value_EvaluateDraw$11=EvaluateDraw();
    if(!(return_value_EvaluateDraw$11 == 0))
      tmp_if_expr$13 = (_Bool)1;

    else
    {
      return_value_Repeat$12=Repeat();
      tmp_if_expr$13 = (signed int)return_value_Repeat$12 >= 2 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$13)
    {
      printf("1/2-1/2 {draw}\n");
      fflush(stdout);
      do
      {
        flags = flags | (unsigned int)0x0040;
        dbg_printf("Set   0x%x\n", 0x0040);
      }
      while((_Bool)0);
    }

  }


__CPROVER_DUMP_L62:
  ;
}

// KPK
// file eval.c line 1017
signed int KPK(signed int side)
{
  signed int winer;
  signed int loser;
  signed int sq;
  signed int sqw;
  signed int sql;
  signed int s;
  winer = board.b[(signed long int)0][(signed long int)1] != 0ul ? 0 : 1;
  loser = 1 ^ winer;
  unsigned char return_value_leadz$1;
  return_value_leadz$1=leadz$link2(board.b[(signed long int)winer][(signed long int)1]);
  sq = (signed int)return_value_leadz$1;
  sqw = (signed int)board.king[(signed long int)winer];
  sql = (signed int)board.king[(signed long int)loser];
  s = 100 + (1100 * Passed[(signed long int)winer][(signed long int)(sq >> 3)]) / 550 + 4 * (winer == 0 ? sqw >> 3 : 7 - (sqw >> 3));
  if(!((~SquarePawnMask[(signed long int)winer][(signed long int)sq] & board.b[(signed long int)loser][6l]) == 0ul))
  {
    if((SquarePawnMask[(signed long int)winer][(signed long int)sq] & MoveArray[6l][(signed long int)sql]) == 0ul)
      return winer == side ? s : -s;

    if(!(winer == side))
      goto __CPROVER_DUMP_L2;

    return s;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    if(!((7 & sq) == 0) && !((7 & sq) == 7))
    {
      if(((FileBit[(signed long int)(7 & sq)] | IsolaniMask[(signed long int)(7 & sq)]) & board.b[(signed long int)winer][6l]) == 0ul)
        goto __CPROVER_DUMP_L21;

      if(winer == 0)
      {
        if(sqw >> 3 == (sq >> 3) + 2)
          return winer == side ? s : -s;

        if(sqw >> 3 == (sq >> 3) + 1)
        {
          if(sqw >> 3 == 5)
            return winer == side ? s : -s;

          if(!(sqw >= 40))
          {
            if(16 + sqw == sql && winer == side)
              return 0;

            else
              return winer == side ? s : -s;
          }

        }

        if(sqw >> 3 == sq >> 3)
        {
          if(winer == side && ((sql >> 3) + -(sq >> 3) >= 5 || !((sql >> 3) + -(sq >> 3) >= 2)))
            return s;

          if(loser == side && ((sql >> 3) + -(sq >> 3) >= 6 || !((sql >> 3) + -(sq >> 3) >= 1)))
            return -s;

          if(sq >> 3 == 5 && !(16 + sqw == sql))
            return winer == side ? s : 0;

        }

        if(sq >> 3 == 6 && sqw >> 3 == 5)
        {
          if(!(sql == 8 + sq))
            return winer == side ? s : 0;

          if(sql == 8 + sq && sql == 16 + sqw)
            return winer == side ? s : 0;

        }

        goto __CPROVER_DUMP_L21;
      }

      if(sqw >> 3 == (sq >> 3) + -2)
        return winer == side ? s : -s;

      if(sqw >> 3 == (sq >> 3) + -1)
      {
        if(sqw >> 3 == 2)
          return winer == side ? s : -s;

        if(sqw >= 24)
        {
          if(sqw + -16 == sql && winer == side)
            return 0;

          else
            return winer == side ? s : -s;
        }

      }

      if(sqw >> 3 == sq >> 3)
      {
        if(winer == side && ((sq >> 3) + -(sql >> 3) >= 5 || !((sq >> 3) + -(sql >> 3) >= 2)))
          return s;

        if(loser == side && ((sq >> 3) + -(sql >> 3) >= 6 || !((sq >> 3) + -(sql >> 3) >= 1)))
          return -s;

        if(sq >> 3 == 5 && !(16 + sqw == sql))
          return winer == side ? s : 0;

      }

      if(!(sq >> 3 == 1) || !(sqw >> 3 == 2))
        goto __CPROVER_DUMP_L21;

      if(!(sql == sq + -8))
        return winer == side ? s : 0;

      if(!(sql == sq + -8) || !(sql == sqw + -16))
        goto __CPROVER_DUMP_L21;

      return winer == side ? s : 0;
    }

    else
    {

    __CPROVER_DUMP_L21:
      ;
      return 0;
    }
  }
}

// LoadEPD
// file common.h line 602
void LoadEPD(char *p)
{
  char file[128l];
  signed int N = 1;
  sscanf(p, "%31s %d ", (const void *)file, &N);
  signed int tmp_statement_expression$2;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$3;
  return_value___builtin_strcmp$3=__builtin_strcmp(file, "next");
  tmp_statement_expression$2 = return_value___builtin_strcmp$3;
  if(tmp_statement_expression$2 == 0)
    ReadEPDFile(file, (signed short int)0);

  else
  {
    ReadEPDFile(file, (signed short int)1);
    do
    {
      N = N - 1;
      if(N == 0)
        break;

      signed short int return_value_ReadEPDFile$1;
      return_value_ReadEPDFile$1=ReadEPDFile(file, (signed short int)2);
      if((signed int)return_value_ReadEPDFile$1 == 0)
      {
        printf("File position exceeded\n");
        goto __CPROVER_DUMP_L6;
      }

    }
    while((_Bool)1);
    ReadEPDFile(file, (signed short int)0);
  }
  ShowBoard();
  NewPosition();

__CPROVER_DUMP_L6:
  ;
}

// LoneKing
// file eval.c line 989
signed int LoneKing(signed int side, signed int loser)
{
  signed int s;
  signed int winer;
  signed int sq1;
  signed int sq2;
  winer = 1 ^ loser;
  unsigned char return_value_nbits$3;
  unsigned char return_value_nbits$2;
  signed int return_value_ScoreKBNK$1;
  if((signed int)board.material[(signed long int)winer] == 350)
  {
    return_value_nbits$3=nbits$link2(board.b[(signed long int)winer][(signed long int)3]);
    if(!((signed int)return_value_nbits$3 == 1))
      goto __CPROVER_DUMP_L1;

    return_value_nbits$2=nbits$link2(board.b[(signed long int)winer][(signed long int)2]);
    if(!((signed int)return_value_nbits$2 == 1))
      goto __CPROVER_DUMP_L1;

    return_value_ScoreKBNK$1=ScoreKBNK(side, loser);
    return return_value_ScoreKBNK$1;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    sq1 = (signed int)board.king[(signed long int)winer];
    sq2 = (signed int)board.king[(signed long int)loser];
    s = (150 - 6 * (signed int)taxicab[(signed long int)sq1][(signed long int)sq2]) - EndingKing[(signed long int)sq2];
    if(side == loser)
      s = -s;

    s = s + ((signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)]);
    return s;
  }
}

// MakeMove
// file common.h line 574
void MakeMove(signed int side, signed int *move)
{
  unsigned long int *a;
  signed int f;
  signed int t;
  signed int fpiece;
  signed int tpiece;
  signed int rookf;
  signed int rookt;
  signed int epsq;
  signed int sq;
  signed int xside;
  struct anonymous$6 *g;
  xside = 1 ^ side;
  f = *move >> 6 & 0x003F;
  t = *move & 0x003F;
  fpiece = cboard[(signed long int)f];
  tpiece = cboard[(signed long int)t];
  a = &board.b[(signed long int)side][(signed long int)fpiece];
  *a = *a & NotBitPosArray[(signed long int)f];
  *a = *a | BitPosArray[(signed long int)t];
  board.blockerr90 = board.blockerr90 & NotBitPosArray[(signed long int)r90[(signed long int)f]];
  board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)t]];
  board.blockerr45 = board.blockerr45 & NotBitPosArray[(signed long int)r45[(signed long int)f]];
  board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)t]];
  board.blockerr315 = board.blockerr315 & NotBitPosArray[(signed long int)r315[(signed long int)f]];
  board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)t]];
  cboard[(signed long int)f] = 0;
  cboard[(signed long int)t] = fpiece;
  GameCnt = GameCnt + 1;
  g = &Game[(signed long int)GameCnt];
  g->epsq = board.ep;
  g->bflag = board.flag;
  g->Game50 = (signed short int)Game50;
  g->hashkey = HashKey;
  g->phashkey = PawnHashKey;
  g->mvboard = (signed short int)Mvboard[(signed long int)t];
  g->comments = (char *)(void *)0;
  Mvboard[(signed long int)t] = Mvboard[(signed long int)f] + 1;
  Mvboard[(signed long int)f] = 0;
  if((signed int)board.ep >= 0)
    HashKey = HashKey ^ ephash[(signed long int)board.ep];

  HashKey = HashKey ^ hashcode[(signed long int)side][(signed long int)fpiece][(signed long int)f];
  HashKey = HashKey ^ hashcode[(signed long int)side][(signed long int)fpiece][(signed long int)t];
  if(fpiece == 6)
    board.king[(signed long int)side] = (signed short int)t;

  if(fpiece == 1)
  {
    PawnHashKey = PawnHashKey ^ hashcode[(signed long int)side][(signed long int)1][(signed long int)f];
    PawnHashKey = PawnHashKey ^ hashcode[(signed long int)side][(signed long int)1][(signed long int)t];
  }

  if(!(tpiece == 0))
  {
    ExchCnt[(signed long int)side] = ExchCnt[(signed long int)side] + 1;
    board.b[(signed long int)xside][(signed long int)tpiece] = board.b[(signed long int)xside][(signed long int)tpiece] & NotBitPosArray[(signed long int)t];
    *move = *move | tpiece << 15;
    HashKey = HashKey ^ hashcode[(signed long int)xside][(signed long int)tpiece][(signed long int)t];
    if(tpiece == 1)
      PawnHashKey = PawnHashKey ^ hashcode[(signed long int)xside][(signed long int)1][(signed long int)t];

    board.material[(signed long int)xside] = board.material[(signed long int)xside] - (signed short int)Value[(signed long int)tpiece];
    if(!(tpiece == 1))
      board.pmaterial[(signed long int)xside] = board.pmaterial[(signed long int)xside] - (signed short int)Value[(signed long int)tpiece];

  }

  if(!((0x00007000 & *move) == 0))
  {
    board.b[(signed long int)side][(signed long int)(*move >> 12 & 0x0007)] = board.b[(signed long int)side][(signed long int)(*move >> 12 & 0x0007)] | BitPosArray[(signed long int)t];
    *a = *a & NotBitPosArray[(signed long int)t];
    cboard[(signed long int)t] = *move >> 12 & 0x0007;
    HashKey = HashKey ^ hashcode[(signed long int)side][(signed long int)1][(signed long int)t];
    HashKey = HashKey ^ hashcode[(signed long int)side][(signed long int)cboard[(signed long int)t]][(signed long int)t];
    PawnHashKey = PawnHashKey ^ hashcode[(signed long int)side][(signed long int)1][(signed long int)t];
    board.material[(signed long int)side] = board.material[(signed long int)side] + (signed short int)(Value[(signed long int)cboard[(signed long int)t]] - 100);
    board.pmaterial[(signed long int)side] = board.pmaterial[(signed long int)side] + (signed short int)Value[(signed long int)cboard[(signed long int)t]];
  }

  if(!((0x00400000 & *move) == 0))
  {
    ExchCnt[(signed long int)side] = ExchCnt[(signed long int)side] + 1;
    epsq = (signed int)board.ep + (side == 0 ? -8 : 8);
    board.b[(signed long int)xside][(signed long int)1] = board.b[(signed long int)xside][(signed long int)1] & NotBitPosArray[(signed long int)epsq];
    board.blockerr90 = board.blockerr90 & NotBitPosArray[(signed long int)r90[(signed long int)epsq]];
    board.blockerr45 = board.blockerr45 & NotBitPosArray[(signed long int)r45[(signed long int)epsq]];
    board.blockerr315 = board.blockerr315 & NotBitPosArray[(signed long int)r315[(signed long int)epsq]];
    cboard[(signed long int)epsq] = 0;
    HashKey = HashKey ^ hashcode[(signed long int)xside][(signed long int)1][(signed long int)epsq];
    PawnHashKey = PawnHashKey ^ hashcode[(signed long int)xside][(signed long int)1][(signed long int)epsq];
    board.material[(signed long int)xside] = board.material[(signed long int)xside] - (signed short int)100;
  }

  if(fpiece == 1 || !((2326528 & *move) == 0))
    Game50 = GameCnt;

  if(!((0x00200000 & *move) == 0))
  {
    if(!((0x04 & t) == 0))
    {
      rookf = t + 1;
      rookt = t - 1;
    }

    else
    {
      rookf = t - 2;
      rookt = t + 1;
    }
    a = &board.b[(signed long int)side][(signed long int)4];
    *a = *a & NotBitPosArray[(signed long int)rookf];
    *a = *a | BitPosArray[(signed long int)rookt];
    board.blockerr90 = board.blockerr90 & NotBitPosArray[(signed long int)r90[(signed long int)rookf]];
    board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)rookt]];
    board.blockerr45 = board.blockerr45 & NotBitPosArray[(signed long int)r45[(signed long int)rookf]];
    board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)rookt]];
    board.blockerr315 = board.blockerr315 & NotBitPosArray[(signed long int)r315[(signed long int)rookf]];
    board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)rookt]];
    cboard[(signed long int)rookf] = 0;
    cboard[(signed long int)rookt] = 4;
    Mvboard[(signed long int)rookf] = 0;
    Mvboard[(signed long int)rookt] = 1;
    HashKey = HashKey ^ hashcode[(signed long int)side][(signed long int)4][(signed long int)rookf];
    HashKey = HashKey ^ hashcode[(signed long int)side][(signed long int)4][(signed long int)rookt];
    board.castled[(signed long int)side] = (signed short int)1;
  }

  if(side == 0)
  {
    if(fpiece == 6 && !((3 & (signed int)board.flag) == 0))
    {
      if(!((0x0001 & (signed int)board.flag) == 0))
        HashKey = HashKey ^ WKCastlehash;

      if(!((0x0002 & (signed int)board.flag) == 0))
        HashKey = HashKey ^ WQCastlehash;

      board.flag = board.flag & (signed short int)~(0x0001 | 0x0002);
    }

    else
      if(fpiece == 4)
      {
        if(f == 7)
        {
          if(!((0x0001 & (signed int)board.flag) == 0))
            HashKey = HashKey ^ WKCastlehash;

          board.flag = board.flag & (signed short int)~0x0001;
        }

        else
          if(f == 0)
          {
            if(!((0x0002 & (signed int)board.flag) == 0))
              HashKey = HashKey ^ WQCastlehash;

            board.flag = board.flag & (signed short int)~0x0002;
          }

      }

    if(tpiece == 4)
    {
      if(t == 63)
      {
        if(!((0x0004 & (signed int)board.flag) == 0))
          HashKey = HashKey ^ BKCastlehash;

        board.flag = board.flag & (signed short int)~0x0004;
      }

      else
        if(t == 56)
        {
          if(!((0x0008 & (signed int)board.flag) == 0))
            HashKey = HashKey ^ BQCastlehash;

          board.flag = board.flag & (signed short int)~0x0008;
        }

    }

  }

  else
  {
    if(fpiece == 6 && !((12 & (signed int)board.flag) == 0))
    {
      if(!((0x0004 & (signed int)board.flag) == 0))
        HashKey = HashKey ^ BKCastlehash;

      if(!((0x0008 & (signed int)board.flag) == 0))
        HashKey = HashKey ^ BQCastlehash;

      board.flag = board.flag & (signed short int)~(0x0004 | 0x0008);
    }

    else
      if(fpiece == 4)
      {
        if(f == 63)
        {
          if(!((0x0004 & (signed int)board.flag) == 0))
            HashKey = HashKey ^ BKCastlehash;

          board.flag = board.flag & (signed short int)~0x0004;
        }

        else
          if(f == 56)
          {
            if(!((0x0008 & (signed int)board.flag) == 0))
              HashKey = HashKey ^ BQCastlehash;

            board.flag = board.flag & (signed short int)~0x0008;
          }

      }

    if(tpiece == 4)
    {
      if(t == 7)
      {
        if(!((0x0001 & (signed int)board.flag) == 0))
          HashKey = HashKey ^ WKCastlehash;

        board.flag = board.flag & (signed short int)~0x0001;
      }

      else
        if(t == 0)
        {
          if(!((0x0002 & (signed int)board.flag) == 0))
            HashKey = HashKey ^ WQCastlehash;

          board.flag = board.flag & (signed short int)~0x0002;
        }

    }

  }
  _Bool tmp_if_expr$2;
  signed int return_value_abs$1;
  if(fpiece == 1)
  {
    return_value_abs$1=abs(f - t);
    tmp_if_expr$2 = return_value_abs$1 == 16 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$2 = (_Bool)0;
  if(tmp_if_expr$2)
  {
    sq = (f + t) / 2;
    board.ep = (signed short int)sq;
    HashKey = HashKey ^ ephash[(signed long int)sq];
  }

  else
    board.ep = (signed short int)-1;
  board.side = (signed short int)xside;
  HashKey = HashKey ^ Sidehash;
  UpdateFriends();
  g->move = *move;
  goto __CPROVER_DUMP_L39;

__CPROVER_DUMP_L39:
  ;
}

// MakeNullMove
// file null.c line 34
void MakeNullMove(signed int side)
{
  struct anonymous$6 *g;
  GameCnt = GameCnt + 1;
  g = &Game[(signed long int)GameCnt];
  g->epsq = board.ep;
  g->bflag = board.flag;
  g->hashkey = HashKey;
  if((signed int)board.ep >= 0)
    HashKey = HashKey ^ ephash[(signed long int)board.ep];

  HashKey = HashKey ^ Sidehash;
  board.ep = (signed short int)-1;
  board.side = (signed short int)(1 ^ side);
  g->move = 0x00100000;
  goto __CPROVER_DUMP_L2;

__CPROVER_DUMP_L2:
  ;
}

// MateScan
// file atak.c line 500
signed int MateScan(signed int side)
{
  signed int MateScan$$1$$KingSq;
  signed int QueenSq;
  signed int sq;
  signed int xside;
  unsigned long int b;
  xside = 1 ^ side;
  unsigned long int return_value_AttackXTo$3;
  if(board.b[(signed long int)xside][5l] == 0ul)
    return 0;

  else
  {
    MateScan$$1$$KingSq = (signed int)board.king[(signed long int)side];
    unsigned char return_value_leadz$1;
    return_value_leadz$1=leadz(board.b[(signed long int)xside][(signed long int)5]);
    QueenSq = (signed int)return_value_leadz$1;
    b = (Bishop45Atak[(signed long int)QueenSq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)QueenSq] & (unsigned long int)Mask45[(signed long int)QueenSq])] | Bishop315Atak[(signed long int)QueenSq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)QueenSq] & (unsigned long int)Mask315[(signed long int)QueenSq])] | Rook00Atak[(signed long int)QueenSq][(signed long int)(board.blocker >> (signed int)Shift00[(signed long int)QueenSq] & (unsigned long int)0xFF)] | Rook90Atak[(signed long int)QueenSq][(signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)QueenSq] & (unsigned long int)0xFF)]) & MoveArray[(signed long int)6][(signed long int)MateScan$$1$$KingSq];
    if(b == 0ul)
      return 0;

    else
    {
      while(!(b == 0ul))
      {
        unsigned char return_value_leadz$2;
        return_value_leadz$2=leadz(b);
        sq = (signed int)return_value_leadz$2;
        unsigned long int return_value_AttackTo$4;
        return_value_AttackTo$4=AttackTo(sq, side);
        if(return_value_AttackTo$4 == board.b[(signed long int)side][6l])
        {
          return_value_AttackXTo$3=AttackXTo(sq, xside);
          if(!(return_value_AttackXTo$3 == board.b[(signed long int)xside][5l]))
            return 1;

        }

        b = b & NotBitPosArray[(signed long int)sq];
      }
      return 0;
    }
  }
}

// NewPosition
// file common.h line 538
void NewPosition(void)
{
  do
  {
    flags = flags & (unsigned int)~0x0040;
    dbg_printf("Clear 0x%x\n", 0x0040);
  }
  while((_Bool)0);
  Game50 = 0;
  GameCnt = -1;
  RealGameCnt = GameCnt;
  Game[(signed long int)0].hashkey = HashKey;
  TTClear();
  PTClear();
  nmovesfrombook = 0;
  ExchCnt[(signed long int)1] = 0;
  ExchCnt[(signed long int)0] = ExchCnt[(signed long int)1];
}

// PGNReadFromFile
// file common.h line 619
void PGNReadFromFile(const char *file)
{
  struct _IO_FILE *fp;
  fp=fopen(file, "r");
  if(fp == ((struct _IO_FILE *)NULL))
    printf("Cannot open file %s\n", file);

  else
  {
    yyin = fp;
    InitVars();
    data_dest = (enum data_destination_t)DEST_GAME;
    yylex();
    fclose(fp);
    ShowBoard();
    TTClear();
  }
}

// PGNSaveToFile
// file common.h line 618
void PGNSaveToFile(const char *file, const char *resultstr)
{
  struct _IO_FILE *fp;
  char s[100l];
  signed int len;
  char *p;
  signed int i;
  signed long int secs;
  struct tm *timestruct;
  fp=fopen(file, "a");
  unsigned long int tmp_statement_expression$1;
  unsigned long int return_value_strlen$3;
  char *tmp_post$4;
  unsigned long int return_value_strlen$6;
  if(fp == ((struct _IO_FILE *)NULL))
    printf("Cannot write to file %s\n", file);

  else
  {
    fprintf(fp, "[Event \"%s\"]\n", pgn_event != ((char *)NULL) ? pgn_event : "");
    fprintf(fp, "[Site \"%s\"]\n", pgn_site != ((char *)NULL) ? pgn_site : "");
    secs=time(((signed long int *)NULL));
    if(!(pgn_date == ((char *)NULL)))
      fprintf(fp, "[Date \"%s\"]\n", pgn_date);

    else
    {
      timestruct=localtime((signed long int *)&secs);
      fprintf(fp, "[Date \"%4d.%02d.%02d\"]\n", timestruct->tm_year + 1900, timestruct->tm_mon + 1, timestruct->tm_mday);
    }
    fprintf(fp, "[Round \"%s\"]\n", pgn_round != ((char *)NULL) ? pgn_round : "");
    if(!(pgn_white == ((char *)NULL)))
      fprintf(fp, "[White \"%s\"]\n", pgn_white);

    else
      if(computer == 0)
        fprintf(fp, "[White \"%s %s\"]\n", (const void *)"GNU Chess for GNOME", (const void *)"15.02");

      else
        fprintf(fp, "[White \"%s\"]\n", (const void *)name);
    if(!(pgn_black == ((char *)NULL)))
      fprintf(fp, "[Black \"%s\"]\n", pgn_black);

    else
      if(computer == 1)
        fprintf(fp, "[Black \"%s %s\"]\n", (const void *)"GNU Chess for GNOME", (const void *)"15.02");

      else
        fprintf(fp, "[Black \"%s\"]\n", (const void *)name);
    if(!(pgn_whiteELO == ((char *)NULL)))
      fprintf(fp, "[WhiteELO \"%s\"]\n", pgn_white != ((char *)NULL) ? pgn_white : "");

    else
      fprintf(fp, "[WhiteELO \"%d\"]\n", computer == 0 ? myrating : opprating);
    if(!(pgn_blackELO == ((char *)NULL)))
      fprintf(fp, "[BlackELO \"%s\"]\n", pgn_black != ((char *)NULL) ? pgn_black : "");

    else
      fprintf(fp, "[BlackELO \"%d\"]\n", computer == 0 ? opprating : myrating);
    if(!(pgn_result == ((char *)NULL)))
      fprintf(fp, "[Result \"%s\"]\n", pgn_result);

    else
    {
      char __r0;
      char __r1;
      char __r2;
      unsigned long int return_value___builtin_strcspn$2;
      return_value___builtin_strcspn$2=__builtin_strcspn(resultstr, " {");
      tmp_statement_expression$1 = return_value___builtin_strcspn$2;
      len = (signed int)tmp_statement_expression$1;
      fprintf(fp, "[Result \"%.*s\"]\n", len, resultstr);
    }
    if(!(pgn_othertags == ((char *)NULL)))
      fprintf(fp, "%s", pgn_othertags);

    fprintf(fp, "\n");
    if(!(initial_comments == ((char *)NULL)))
    {
      fprintf(fp, "\n%s\n", initial_comments);
      if(!(*initial_comments == 0))
      {
        return_value_strlen$3=strlen(initial_comments);
        if(!((signed int)initial_comments[-1l + (signed long int)return_value_strlen$3] == 10))
          fprintf(fp, "\n");

      }

    }

    s[(signed long int)0] = (char)0;
    i = 0;
    for( ; GameCnt >= i; i = i + 1)
    {
      if(i % 2 == 0)
        sprintf(s, "%s%d. ", (const void *)s, i / 2 + 1);

      sprintf(s, "%s%s ", (const void *)s, (const void *)Game[(signed long int)i].SANmv);
      unsigned long int return_value_strlen$5;
      return_value_strlen$5=strlen(s);
      if(return_value_strlen$5 >= 81ul)
      {
        p = s + (signed long int)79;
        do
        {
          tmp_post$4 = p;
          p = p - 1l;
          if((signed int)*tmp_post$4 == 32)
            break;

        }
        while((_Bool)1);
        p = p + 1l;
        *p = (char)0;
        fprintf(fp, "%s\n", (const void *)s);
        strcpy(s, p + (signed long int)1);
      }

      if(!(Game[(signed long int)i].comments == ((char *)NULL)))
      {
        fprintf(fp, "%s\n", (const void *)s);
        fprintf(fp, "%s", Game[(signed long int)i].comments);
        if(!(*Game[(signed long int)i].comments == 0))
        {
          return_value_strlen$6=strlen(Game[(signed long int)i].comments);
          if(!((signed int)Game[(signed long int)i].comments[-1l + (signed long int)return_value_strlen$6] == 10))
            fprintf(fp, "\n");

        }

        s[(signed long int)0] = (char)0;
      }

    }
    fprintf(fp, "%s", (const void *)s);
    fprintf(fp, "%s", resultstr);
    fprintf(fp, "\n\n");
    fclose(fp);
  }
}

// PTClear
// file common.h line 670
void PTClear(void)
{
  memset((void *)PawnTab[(signed long int)0], 0, (unsigned long int)512 * sizeof(struct anonymous$4) /*32ul*/ );
  memset((void *)PawnTab[(signed long int)1], 0, (unsigned long int)512 * sizeof(struct anonymous$4) /*32ul*/ );
}

// ParseEPD
// file common.h line 601
signed int ParseEPD(char *p)
{
  signed int r;
  signed int c;
  signed int sq;
  char *str_p;
  r = 56;
  c = 0;
  memset((void *)&board, 0, sizeof(struct anonymous$5) /*184ul*/ );
  while(!(p == ((char *)NULL)))
  {
    if((signed int)*p == 32)
      break;

    sq = r + c;
    switch((signed int)*p)
    {
      case 80:
      {
        board.b[(signed long int)0][(signed long int)1] = board.b[(signed long int)0][(signed long int)1] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)0] = board.material[(signed long int)0] + (signed short int)100;
        break;
      }
      case 78:
      {
        board.b[(signed long int)0][(signed long int)2] = board.b[(signed long int)0][(signed long int)2] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)0] = board.material[(signed long int)0] + (signed short int)350;
        break;
      }
      case 66:
      {
        board.b[(signed long int)0][(signed long int)3] = board.b[(signed long int)0][(signed long int)3] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)0] = board.material[(signed long int)0] + (signed short int)350;
        break;
      }
      case 82:
      {
        board.b[(signed long int)0][(signed long int)4] = board.b[(signed long int)0][(signed long int)4] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)0] = board.material[(signed long int)0] + (signed short int)550;
        break;
      }
      case 81:
      {
        board.b[(signed long int)0][(signed long int)5] = board.b[(signed long int)0][(signed long int)5] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)0] = board.material[(signed long int)0] + (signed short int)1100;
        break;
      }
      case 75:
      {
        board.b[(signed long int)0][(signed long int)6] = board.b[(signed long int)0][(signed long int)6] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        break;
      }
      case 112:
      {
        board.b[(signed long int)1][(signed long int)1] = board.b[(signed long int)1][(signed long int)1] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)1] = board.material[(signed long int)1] + (signed short int)100;
        break;
      }
      case 110:
      {
        board.b[(signed long int)1][(signed long int)2] = board.b[(signed long int)1][(signed long int)2] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)1] = board.material[(signed long int)1] + (signed short int)350;
        break;
      }
      case 98:
      {
        board.b[(signed long int)1][(signed long int)3] = board.b[(signed long int)1][(signed long int)3] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)1] = board.material[(signed long int)1] + (signed short int)350;
        break;
      }
      case 114:
      {
        board.b[(signed long int)1][(signed long int)4] = board.b[(signed long int)1][(signed long int)4] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)1] = board.material[(signed long int)1] + (signed short int)550;
        break;
      }
      case 113:
      {
        board.b[(signed long int)1][(signed long int)5] = board.b[(signed long int)1][(signed long int)5] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        board.material[(signed long int)1] = board.material[(signed long int)1] + (signed short int)1100;
        break;
      }
      case 107:
      {
        board.b[(signed long int)1][(signed long int)6] = board.b[(signed long int)1][(signed long int)6] | BitPosArray[(signed long int)sq];
        board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)sq]];
        board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)sq]];
        board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)sq]];
        break;
      }
      case 47:
      {
        r = r - 8;
        c = -1;
      }
    }
    const unsigned short int **return_value___ctype_b_loc$1;
    return_value___ctype_b_loc$1=__ctype_b_loc();
    if(!((2048 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*p]) == 0))
      c = c + ((signed int)*p - 48);

    else
      c = c + 1;
    if(r == -8)
    {
      if((signed int)p[1l] == 32)
        r = 0;

    }

    if(c >= 9 || !(r >= 0))
      return 1;

    if(c == 8)
    {
      if(!((signed int)p[1l] == 47))
      {
        if(!((signed int)p[1l] == 32))
          return 1;

      }

    }

    p = p + 1l;
  }
  unsigned char return_value_nbits$2;
  return_value_nbits$2=nbits$link1(board.b[(signed long int)0][(signed long int)1]);
  board.pmaterial[(signed long int)0] = (signed short int)((signed int)board.material[(signed long int)0] - (signed int)return_value_nbits$2 * 100);
  unsigned char return_value_nbits$3;
  return_value_nbits$3=nbits$link1(board.b[(signed long int)1][(signed long int)1]);
  board.pmaterial[(signed long int)1] = (signed short int)((signed int)board.material[(signed long int)1] - (signed int)return_value_nbits$3 * 100);
  unsigned char return_value_leadz$4;
  return_value_leadz$4=leadz$link1(board.b[(signed long int)0][(signed long int)6]);
  board.king[(signed long int)0] = (signed short int)return_value_leadz$4;
  unsigned char return_value_leadz$5;
  return_value_leadz$5=leadz$link1(board.b[(signed long int)1][(signed long int)6]);
  board.king[(signed long int)1] = (signed short int)return_value_leadz$5;
  UpdateFriends();
  UpdateCBoard();
  UpdateMvboard();
  p = p + 1l;
  _Bool tmp_if_expr$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$12;
  if(p == ((char *)NULL))
    return 1;

  else
  {
    if((signed int)*p == 119)
      board.side = (signed short int)0;

    else
      if((signed int)*p == 98)
        board.side = (signed short int)1;

      else
        return 1;
    p = p + 1l;
    if(p == ((char *)NULL))
      tmp_if_expr$6 = (_Bool)1;

    else
      tmp_if_expr$6 = (signed int)*p != 32 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$6)
      tmp_if_expr$7 = (_Bool)1;

    else
    {
      p = p + 1l;
      tmp_if_expr$7 = !(p != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$7)
      return 1;

    else
    {
      for( ; !(p == ((char *)NULL)); p = p + 1l)
      {
        if((signed int)*p == 32)
          break;

        if((signed int)*p == 75)
          board.flag = board.flag | (signed short int)0x0001;

        else
          if((signed int)*p == 81)
            board.flag = board.flag | (signed short int)0x0002;

          else
            if((signed int)*p == 107)
              board.flag = board.flag | (signed short int)0x0004;

            else
              if((signed int)*p == 113)
                board.flag = board.flag | (signed short int)0x0008;

              else
                if((signed int)*p == 45)
                {
                  p = p + 1l;
                  break;
                }

                else
                  return 1;
      }
      if(p == ((char *)NULL))
        tmp_if_expr$8 = (_Bool)1;

      else
        tmp_if_expr$8 = (signed int)*p != 32 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$8)
        tmp_if_expr$9 = (_Bool)1;

      else
      {
        p = p + 1l;
        tmp_if_expr$9 = !(p != ((char *)NULL)) ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$9)
        return 1;

      else
      {
        if(!((signed int)*p == 45))
        {
          if(p[1l] == 0)
            tmp_if_expr$10 = (_Bool)1;

          else
            tmp_if_expr$10 = (signed int)*p < 97 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$10)
            tmp_if_expr$11 = (_Bool)1;

          else
            tmp_if_expr$11 = (signed int)*p > 104 ? (_Bool)1 : (_Bool)0;
          if(tmp_if_expr$11)
            tmp_if_expr$13 = (_Bool)1;

          else
          {
            if((signed int)p[1l] == 51)
              tmp_if_expr$12 = (_Bool)1;

            else
              tmp_if_expr$12 = (signed int)p[(signed long int)1] == 54 ? (_Bool)1 : (_Bool)0;
            tmp_if_expr$13 = !tmp_if_expr$12 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$13)
            return 1;

          board.ep = (signed short int)(((signed int)*p - 97) + ((signed int)p[(signed long int)1] - 49) * 8);
          p = p + 1l;
        }

        else
          board.ep = (signed short int)-1;
        solution[(signed long int)0] = (char)0;
        id[(signed long int)0] = (char)0;
        p = p + 1l;
        if(p == ((char *)NULL))
          return 0;

        else
        {
          str_p=strstr(p, "bm");
          if(!(str_p == ((char *)NULL)))
            sscanf(str_p, "bm %63[^;];", (const void *)solution);

          str_p=strstr(p, "id");
          if(!(str_p == ((char *)NULL)))
            sscanf(p, "id %31[^;];", (const void *)id);

          CalcHashKey();
          phase = 8 - ((signed int)board.material[(signed long int)0] + (signed int)board.material[(signed long int)1]) / 1150;
          return 0;
        }
      }
    }
  }
}

// PhasePick
// file common.h line 676
signed int PhasePick(struct anonymous **p1, signed int ply)
{
  struct anonymous *p2;
  signed int mv;
  signed int side = (signed int)board.side;
  signed int return_value_IsLegalMove$2;
  struct anonymous *tmp_post$1;
  signed int return_value_SwapOff$3;
  struct anonymous *tmp_post$4;
  signed int return_value_IsLegalMove$5;
  signed int return_value_IsLegalMove$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  struct anonymous *tmp_post$9;
  switch((signed int)pickphase[(signed long int)ply])
  {
    case 1:
    {
      TreePtr[(signed long int)(ply + 1)] = TreePtr[(signed long int)ply];
      pickphase[(signed long int)ply] = (signed short int)2;
      if(!(Hashmv[(signed long int)ply] == 0))
      {
        return_value_IsLegalMove$2=IsLegalMove(Hashmv[(signed long int)ply]);
        if(!(return_value_IsLegalMove$2 == 0))
        {
          TreePtr[(signed long int)(ply + 1)]->move = Hashmv[(signed long int)ply];
          tmp_post$1 = TreePtr[(signed long int)(ply + 1)];
          TreePtr[(signed long int)(ply + 1)] = TreePtr[(signed long int)(ply + 1)] + 1l;
          *p1 = tmp_post$1;
          return 1;
        }

      }

    }    static struct anonymous *p[65l];
    case 2:
    {
      pickphase[(signed long int)ply] = (signed short int)3;
      p[(signed long int)ply] = TreePtr[(signed long int)(ply + 1)];
      GenCaptures((signed short int)ply);
      p2 = p[(signed long int)ply];
      for( ; !(p2 >= TreePtr[(signed long int)(1 + ply)]); p2 = p2 + 1l)
      {
        return_value_SwapOff$3=SwapOff(p2->move);
        p2->score = return_value_SwapOff$3 * 12 + Value[(signed long int)cboard[(signed long int)(p2->move & 0x003F)]];
      }
    }
    case 3:
      while(!(p[(signed long int)ply] >= TreePtr[(signed long int)(1 + ply)]))
      {
        pick(p[(signed long int)ply], (signed short int)ply);
        if((6324223 & p[(signed long int)ply]->move) == Hashmv[(signed long int)ply])
          p[(signed long int)ply] = p[(signed long int)ply] + 1l;

        else
        {
          tmp_post$4 = p[(signed long int)ply];
          p[(signed long int)ply] = p[(signed long int)ply] + 1l;
          *p1 = tmp_post$4;
          return 1;
        }
      }
    case 4:
    {
      pickphase[(signed long int)ply] = (signed short int)5;
      if(!(killer1[(signed long int)ply] == 0))
      {
        if(!(killer1[(signed long int)ply] == Hashmv[(signed long int)ply]))
        {
          return_value_IsLegalMove$5=IsLegalMove(killer1[(signed long int)ply]);
          if(!(return_value_IsLegalMove$5 == 0))
          {
            TreePtr[(signed long int)(ply + 1)]->move = killer1[(signed long int)ply];
            *p1 = TreePtr[(signed long int)(ply + 1)];
            TreePtr[(signed long int)(ply + 1)] = TreePtr[(signed long int)(ply + 1)] + 1l;
            return 1;
          }

        }

      }

    }
    case 5:
    {
      pickphase[(signed long int)ply] = (signed short int)6;
      if(!(killer2[(signed long int)ply] == 0))
      {
        if(!(killer2[(signed long int)ply] == Hashmv[(signed long int)ply]))
        {
          return_value_IsLegalMove$6=IsLegalMove(killer2[(signed long int)ply]);
          if(!(return_value_IsLegalMove$6 == 0))
          {
            TreePtr[(signed long int)(ply + 1)]->move = killer2[(signed long int)ply];
            *p1 = TreePtr[(signed long int)(ply + 1)];
            TreePtr[(signed long int)(ply + 1)] = TreePtr[(signed long int)(ply + 1)] + 1l;
            return 1;
          }

        }

      }

    }
    case 6:
    {
      pickphase[(signed long int)ply] = (signed short int)8;
      p[(signed long int)ply] = TreePtr[(signed long int)(ply + 1)];
      GenNonCaptures((signed short int)ply);
      p2 = p[(signed long int)ply];
      for( ; !(p2 >= TreePtr[(signed long int)(1 + ply)]); p2 = p2 + 1l)
      {
        p2->score = (signed int)((history[(signed long int)side][(signed long int)(p2->move & 0x0FFF)] + (unsigned long int)taxicab[(signed long int)(p2->move >> 6 & 0x003F)][(signed long int)35]) - (unsigned long int)taxicab[(signed long int)(p2->move & 0x003F)][(signed long int)28]);
        if(!((0x00200000 & p2->move) == 0))
          p2->score = p2->score + 500;

      }
    }
    case 8:
      while(!(p[(signed long int)ply] >= TreePtr[(signed long int)(1 + ply)]))
      {
        pick(p[(signed long int)ply], (signed short int)ply);
        mv = p[(signed long int)ply]->move & (0x00200000 | 0x00400000 | 0x00007000 | 0x0FFF);
        if(mv == Hashmv[(signed long int)ply])
          tmp_if_expr$7 = (_Bool)1;

        else
          tmp_if_expr$7 = mv == killer1[(signed long int)ply] ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$7)
          tmp_if_expr$8 = (_Bool)1;

        else
          tmp_if_expr$8 = mv == killer2[(signed long int)ply] ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$8)
          p[(signed long int)ply] = p[(signed long int)ply] + 1l;

        else
        {
          tmp_post$9 = p[(signed long int)ply];
          p[(signed long int)ply] = p[(signed long int)ply] + 1l;
          *p1 = tmp_post$9;
          return 1;
        }
      }
    default:
      return 0;
  }
}

// PhasePick1
// file common.h line 677
signed int PhasePick1(struct anonymous **p1, signed int ply)
{
  struct anonymous *tmp_post$1;
  switch((signed int)pickphase[(signed long int)ply])
  {    static struct anonymous *p[65l];
    case 1:
    {
      pickphase[(signed long int)ply] = (signed short int)8;
      p[(signed long int)ply] = TreePtr[(signed long int)ply];
    }
    case 8:
    {
      if(p[(signed long int)ply] >= TreePtr[(signed long int)(1 + ply)])
        goto __CPROVER_DUMP_L3;

      pick(p[(signed long int)ply], (signed short int)ply);
      tmp_post$1 = p[(signed long int)ply];
      p[(signed long int)ply] = p[(signed long int)ply] + 1l;
      *p1 = tmp_post$1;
      return 1;
    }
    default:
    {

    __CPROVER_DUMP_L3:
      ;
      return 0;
    }
  }
}

// PinnedOnKing
// file atak.c line 372
signed int PinnedOnKing(signed int sq, signed int side)
{
  signed int xside;
  signed int PinnedOnKing$$1$$KingSq;
  signed int PinnedOnKing$$1$$dir;
  signed int sq1;
  unsigned long int b;
  unsigned long int blocker;
  PinnedOnKing$$1$$KingSq = (signed int)board.king[(signed long int)side];
  PinnedOnKing$$1$$dir = (signed int)directions[(signed long int)PinnedOnKing$$1$$KingSq][(signed long int)sq];
  signed int tmp_if_expr$3;
  unsigned char return_value_leadz$1;
  unsigned char return_value_leadz$2;
  if(PinnedOnKing$$1$$dir == -1)
    return 0;

  else
  {
    xside = 1 ^ side;
    blocker = board.blocker;
    if(!((FromToRay[(signed long int)PinnedOnKing$$1$$KingSq][(signed long int)sq] & NotBitPosArray[(signed long int)sq] & blocker) == 0ul))
      return 0;

    else
    {
      b = (Ray[(signed long int)PinnedOnKing$$1$$KingSq][(signed long int)PinnedOnKing$$1$$dir] ^ FromToRay[(signed long int)PinnedOnKing$$1$$KingSq][(signed long int)sq]) & blocker;
      if(b == 0x0000000000000000ULL)
        return 0;

      else
      {
        if(!(PinnedOnKing$$1$$KingSq >= sq))
        {
          return_value_leadz$1=leadz(b);
          tmp_if_expr$3 = (signed int)return_value_leadz$1;
        }

        else
        {
          return_value_leadz$2=leadz(b & ~b + (unsigned long int)1);
          tmp_if_expr$3 = (signed int)return_value_leadz$2;
        }
        sq1 = tmp_if_expr$3;
        if(!(PinnedOnKing$$1$$dir >= 4))
        {
          if(((board.b[(signed long int)xside][3l] | board.b[(signed long int)xside][5l]) & BitPosArray[(signed long int)sq1]) == 0ul)
            goto __CPROVER_DUMP_L6;

          return 1;
        }

        else
        {

        __CPROVER_DUMP_L6:
          ;
          if(PinnedOnKing$$1$$dir >= 4)
          {
            if(((board.b[(signed long int)xside][4l] | board.b[(signed long int)xside][5l]) & BitPosArray[(signed long int)sq1]) == 0ul)
              goto __CPROVER_DUMP_L7;

            return 1;
          }

          else
          {

          __CPROVER_DUMP_L7:
            ;
            return 0;
          }
        }
      }
    }
  }
}

// Quiesce
// file quiesce.c line 34
signed int Quiesce(unsigned char ply, signed int alpha, signed int beta)
{
  unsigned char side;
  unsigned char xside;
  signed int best;
  signed int delta;
  signed int score;
  signed int savealpha;
  struct anonymous *p;
  struct anonymous *pbest;
  signed short int return_value_EvaluateDraw$1;
  return_value_EvaluateDraw$1=EvaluateDraw();
  signed int return_value_SwapOff$2;
  if(!(return_value_EvaluateDraw$1 == 0))
    return 0;

  else
  {
    side = (unsigned char)board.side;
    xside = (unsigned char)(1 ^ (signed int)side);
    InChk[(signed long int)ply]=SqAtakd(board.king[(signed long int)side], (signed short int)xside);
    best=Evaluate(alpha, beta);
    if(best >= beta)
    {
      if(!(InChk[(signed long int)ply] == 0))
        goto __CPROVER_DUMP_L2;

      return best;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      TreePtr[(signed long int)((signed int)ply + 1)] = TreePtr[(signed long int)ply];
      if(!(InChk[(signed long int)ply] == 0))
      {
        GenCheckEscapes((signed short int)ply);
        if(TreePtr[(signed long int)ply] == TreePtr[(signed long int)(1 + (signed int)ply)])
          return (-32767 + (signed int)ply) - 2;

        if(best >= beta)
          return best;

        SortMoves((signed int)ply);
      }

      else
      {
        GenCaptures((signed short int)ply);
        if(TreePtr[(signed long int)ply] == TreePtr[(signed long int)(1 + (signed int)ply)])
          return best;

        SortCaptures((signed int)ply);
      }
      savealpha = alpha;
      pbest = (struct anonymous *)(void *)0;
      alpha = best > alpha ? best : alpha;
      delta = (alpha - 150) - best > 0 ? (alpha - 150) - best : 0;
      p = TreePtr[(signed long int)ply];
      for( ; !(p >= TreePtr[(signed long int)(1 + (signed int)ply)]); p = p + 1l)
      {
        pick(p, (signed short int)ply);
        if(InChk[(signed long int)ply] == 0)
        {
          return_value_SwapOff$2=SwapOff(p->move);
          if(!(return_value_SwapOff$2 >= delta))
            goto __CPROVER_DUMP_L13;

        }

        if(!(p->score == -32767))
        {
          MakeMove((signed int)side, &p->move);
          QuiesCnt = QuiesCnt + 1ul;
          signed short int return_value_SqAtakd$3;
          return_value_SqAtakd$3=SqAtakd(board.king[(signed long int)side], (signed short int)xside);
          if(!(return_value_SqAtakd$3 == 0))
            UnmakeMove((signed int)xside, &p->move);

          else
          {
            signed int return_value_Quiesce$4;
            return_value_Quiesce$4=Quiesce((unsigned char)((signed int)ply + 1), -beta, -alpha);
            score = -return_value_Quiesce$4;
            UnmakeMove((signed int)xside, &p->move);
            if(!(best >= score))
            {
              best = score;
              pbest = p;
              if(best >= beta)
                break;

              alpha = alpha > best ? alpha : best;
            }

          }
        }


      __CPROVER_DUMP_L13:
        ;
      }

    done:
      ;
      if(!((128u & flags) == 0u) && !(pbest == ((struct anonymous *)NULL)))
        TTPut(side, (unsigned char)0, ply, savealpha, beta, best, pbest->move);

      return best;
    }
  }
}

// Rand32
// file random.c line 34
unsigned int Rand32(void)
{
  unsigned int ul;
  static signed int k;
  static signed int j;
  static unsigned int y[55l];
  static signed int init = 1;
  if(!(init == 0))
  {
    signed int i;
    init = 0;
    i = 0;
    static unsigned int x[55l] = { (unsigned int)1410651636UL, (unsigned int)3012776752UL, (unsigned int)3497475623UL, (unsigned int)2892145026UL, (unsigned int)1571949714UL, (unsigned int)3253082284UL, (unsigned int)3489895018UL, (unsigned int)387949491UL, (unsigned int)2597396737UL, (unsigned int)1981903553UL, (unsigned int)3160251843UL, (unsigned int)129444464UL, (unsigned int)1851443344UL, (unsigned int)4156445905UL, (unsigned int)224604922UL, (unsigned int)1455067070UL, (unsigned int)3953493484UL, (unsigned int)1460937157UL, (unsigned int)2528362617UL, (unsigned int)317430674UL, (unsigned int)3229354360UL, (unsigned int)117491133UL, (unsigned int)832845075UL, (unsigned int)1961600170UL, (unsigned int)1321557429UL, (unsigned int)747750121UL, (unsigned int)545747446UL, (unsigned int)810476036UL, (unsigned int)503334515UL, (unsigned int)4088144633UL, (unsigned int)2824216555UL, (unsigned int)3738252341UL, (unsigned int)3493754131UL, (unsigned int)3672533954UL, (unsigned int)29494241UL, (unsigned int)1180928407UL, (unsigned int)4213624418UL, (unsigned int)33062851UL, (unsigned int)3221315737UL, (unsigned int)1145213552UL, (unsigned int)2957984897UL, (unsigned int)4078668503UL, (unsigned int)2262661702UL, (unsigned int)65478801UL, (unsigned int)2527208841UL, (unsigned int)1960622036UL, (unsigned int)315685891UL, (unsigned int)1196037864UL, (unsigned int)804614524UL, (unsigned int)1421733266UL, (unsigned int)2017105031UL, (unsigned int)3882325900UL, (unsigned int)810735053UL, (unsigned int)384606609UL, (unsigned int)2393861397UL };
    for( ; !(i >= 55); i = i + 1)
      y[(signed long int)i] = x[(signed long int)i];
    j = 24 - 1;
    k = 55 - 1;
  }

  y[(signed long int)k] = y[(signed long int)k] + y[(signed long int)j];
  ul = y[(signed long int)k];
  j = j - 1;
  if(!(j >= 0))
    j = 55 - 1;

  k = k - 1;
  if(!(k >= 0))
    k = 55 - 1;

  return ul;
}

// Rand64
// file common.h line 692
unsigned long int Rand64(void)
{
  unsigned long int b;
  unsigned int return_value_Rand32$1;
  return_value_Rand32$1=Rand32();
  b = (unsigned long int)return_value_Rand32$1;
  b = b << 32;
  unsigned int return_value_Rand32$2;
  return_value_Rand32$2=Rand32();
  b = b | (unsigned long int)return_value_Rand32$2;
  return b;
}

// ReadEPDFile
// file epd.c line 37
signed short int ReadEPDFile(const char *file, signed short int op)
{
  char line[128l];
  char *liner;
  signed int ret;
  static struct _IO_FILE *fp = (struct _IO_FILE *)(void *)0;
  if(fp == ((struct _IO_FILE *)NULL))
  {
    fp=fopen(file, "r");
    if(!(fp == ((struct _IO_FILE *)NULL)))
      goto __CPROVER_DUMP_L1;

    printf("Error opening file %s\n", file);
    return (signed short int)0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    if((signed int)op == 1)
    {
      fclose(fp);
      fp = (struct _IO_FILE *)(void *)0;
      return (signed short int)0;
    }

    else
    {
      do
      {

      next_line:
        ;
        liner=fgets(line, 128 - 1, fp);
        if(liner == ((char *)NULL))
          goto __CPROVER_DUMP_L4;

        ret=ParseEPD(liner);
      }
      while(!(ret == 0));
      if(!((signed int)op == 2))
        printf("\n%s : Best move = %s\n", (const void *)id, (const void *)solution);

      return (signed short int)1;

    __CPROVER_DUMP_L4:
      ;
      fclose(fp);
      fp = (struct _IO_FILE *)(void *)0;
      return (signed short int)0;
    }
  }
}

// Repeat
// file common.h line 648
signed short int Repeat(void)
{
  signed int i;
  signed int k = 0;
  i = GameCnt - 3;
  for( ; i >= Game50; i = i - 2)
    if(Game[(signed long int)i].hashkey == HashKey)
      k = k + 1;

  return (signed short int)k;
}

// SANMove
// file common.h line 578
void SANMove(signed int move, signed int ply)
{
  signed int side;
  signed int piece;
  signed int ambiguous;
  signed int f;
  signed int t;
  unsigned long int b;
  struct anonymous *node1;
  char *s;
  side = (signed int)board.side;
  s = SANmv;
  f = move >> 6 & 0x003F;
  t = move & 0x003F;
  char *tmp_post$2;
  char *tmp_post$3;
  char *tmp_post$4;
  char *tmp_post$5;
  char *tmp_post$6;
  char *tmp_post$7;
  char *tmp_post$8;
  char *tmp_post$9;
  char *tmp_post$10;
  char *tmp_post$11;
  if(!((0x00200000 & move) == 0))
  {
    if(t == 6 || t == 62)
      strcpy(s, "O-O");

    else
      strcpy(s, "O-O-O");
  }

  else
  {
    piece = cboard[(signed long int)f];
    side = (signed int)board.side;
    b = board.b[(signed long int)side][(signed long int)piece];
    ambiguous = 0;
    node1 = TreePtr[(signed long int)ply];
    unsigned char return_value_nbits$1;
    return_value_nbits$1=nbits$link6(b);
    if((signed int)return_value_nbits$1 >= 2)
    {
      node1 = TreePtr[(signed long int)ply];
      for( ; !(node1 >= TreePtr[(signed long int)(1 + ply)]); node1 = node1 + 1l)
        if(!((node1->move >> 6 & 0x003F) == f))
        {
          if((0x003F & node1->move) == t)
          {
            if(cboard[(signed long int)(node1->move >> 6 & 0x003F)] == piece)
            {
              ambiguous = 1;
              break;
            }

          }

        }

    }

    if(piece == 1)
    {
      if((signed int)board.ep == t || !(cboard[(signed long int)t] == 0))
      {
        tmp_post$2 = s;
        s = s + 1l;
        *tmp_post$2 = algbrfile[(signed long int)(f & 7)];
        tmp_post$3 = s;
        s = s + 1l;
        *tmp_post$3 = (char)120;
      }

      strcpy(s, algbr[(signed long int)t]);
      s = s + (signed long int)2;
      if(!((0x00007000 & move) == 0))
      {
        tmp_post$4 = s;
        s = s + 1l;
        *tmp_post$4 = (char)61;
        tmp_post$5 = s;
        s = s + 1l;
        *tmp_post$5 = notation[(signed long int)(move >> 12 & 0x0007)];
      }

    }

    else
    {
      tmp_post$6 = s;
      s = s + 1l;
      *tmp_post$6 = notation[(signed long int)piece];
      if(!(ambiguous == 0))
      {
        if((7 & f) == (node1->move >> 6 & 7 & 0x003F))
        {
          tmp_post$7 = s;
          s = s + 1l;
          *tmp_post$7 = algbrrank[(signed long int)(f >> 3)];
        }

        else
        {
          tmp_post$8 = s;
          s = s + 1l;
          *tmp_post$8 = algbrfile[(signed long int)(f & 7)];
        }
      }

      if(!(cboard[(signed long int)t] == 0))
      {
        tmp_post$9 = s;
        s = s + 1l;
        *tmp_post$9 = (char)120;
      }

      strcpy(s, algbr[(signed long int)t]);
      s = s + (signed long int)2;
    }
    MakeMove(side, &move);
    signed short int return_value_SqAtakd$12;
    return_value_SqAtakd$12=SqAtakd(board.king[(signed long int)(1 ^ side)], (signed short int)side);
    if(!(return_value_SqAtakd$12 == 0))
    {
      TreePtr[(signed long int)(ply + 2)] = TreePtr[(signed long int)(ply + 1)];
      GenCheckEscapes((signed short int)(ply + 1));
      if(TreePtr[(signed long int)(1 + ply)] == TreePtr[(signed long int)(2 + ply)])
      {
        tmp_post$10 = s;
        s = s + 1l;
        *tmp_post$10 = (char)35;
      }

      else
      {
        tmp_post$11 = s;
        s = s + 1l;
        *tmp_post$11 = (char)43;
      }
      GenCnt = GenCnt - (unsigned long int)(TreePtr[(signed long int)(ply + 2)] - TreePtr[(signed long int)(ply + 1)]);
    }

    UnmakeMove(1 ^ side, &move);
    *s = (char)0;
    goto __CPROVER_DUMP_L17;
  }

__CPROVER_DUMP_L17:
  ;
}

// SaveEPD
// file common.h line 603
void SaveEPD(char *p)
{
  char file[128l];
  struct _IO_FILE *fp;
  signed int r;
  signed int c;
  signed int sq;
  signed int k;
  char c1;
  sscanf(p, "%s ", (const void *)file);
  fp=fopen(file, "a");
  r = 56;
  signed int tmp_statement_expression$1;
  signed int tmp_if_expr$3;
  const signed int **return_value___ctype_tolower_loc$2;
  const signed int **return_value___ctype_tolower_loc$4;
  for( ; r >= 0; r = r - 8)
  {
    k = 0;
    c = 0;
    for( ; !(c >= 8); c = c + 1)
    {
      sq = r + c;
      if(cboard[(signed long int)sq] == 0)
        k = k + 1;

      else
      {
        if(!(k == 0))
          fprintf(fp, "%1d", k);

        k = 0;
        c1 = notation[(signed long int)cboard[(signed long int)sq]];
        if(!((board.friends[1l] & BitPosArray[(signed long int)sq]) == 0ul))
        {
          signed int __res;
          return_value___ctype_tolower_loc$4=__ctype_tolower_loc();
          __res = (*return_value___ctype_tolower_loc$4)[(signed long int)(signed int)c1];
          tmp_statement_expression$1 = __res;
          c1 = (char)tmp_statement_expression$1;
        }

        fprintf(fp, "%c", c1);
      }
    }
    if(!(k == 0))
      fprintf(fp, "%1d", k);

    if(r >= 1)
      fprintf(fp, "/");

  }
  fprintf(fp, (signed int)board.side == 0 ? " w " : " b ");
  if(!((0x0001 & (signed int)board.flag) == 0))
    fprintf(fp, "K");

  if(!((0x0002 & (signed int)board.flag) == 0))
    fprintf(fp, "Q");

  if(!((0x0004 & (signed int)board.flag) == 0))
    fprintf(fp, "k");

  if(!((0x0008 & (signed int)board.flag) == 0))
    fprintf(fp, "q");

  if((15 & (signed int)board.flag) == 0)
    fprintf(fp, "-");

  char *tmp_if_expr$5;
  if((signed int)board.ep >= 0)
    tmp_if_expr$5 = algbr[(signed long int)board.ep];

  else
    tmp_if_expr$5 = "-";
  fprintf(fp, " %s", tmp_if_expr$5);
  fprintf(fp, " bm 1; id 1;");
  fprintf(fp, "\n");
  fclose(fp);
}

// ScoreB
// file common.h line 631
signed int ScoreB(signed short int side)
{
  signed int xside;
  signed int s;
  signed int s1;
  signed int ScoreB$$1$$n;
  signed int sq;
  unsigned long int c;
  unsigned long int t;
  if(board.b[(signed long int)side][3l] == 0x0000000000000000ULL)
    return 0;

  else
  {
    s1 = 0;
    s = s1;
    c = board.b[(signed long int)side][(signed long int)3];
    xside = (signed int)side ^ 1;
    ScoreB$$1$$n = 0;
    t = board.b[(signed long int)xside][(signed long int)1];
    if(!((c & pinned) == 0ul))
    {
      unsigned char return_value_nbits$1;
      return_value_nbits$1=nbits$link2(c & pinned);
      s = s + -30 * (signed int)return_value_nbits$1;
    }

    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$2;
      return_value_leadz$2=leadz$link2(c);
      sq = (signed int)return_value_leadz$2;
      c = c & NotBitPosArray[(signed long int)sq];
      ScoreB$$1$$n = ScoreB$$1$$n + 1;
      s1=CTL((signed short int)sq, (signed short int)3, side);
      if(!(Outpost[(signed long int)side][(signed long int)sq] == 0))
      {
        if((PassedPawnMask[(signed long int)side][(signed long int)sq] & IsolaniMask[(signed long int)(7 & sq)] & t) == 0ul)
        {
          s1 = s1 + 8;
          if(!((board.b[(signed long int)side][1l] & MoveArray[(signed long int)ptype[(signed long int)xside]][(signed long int)sq]) == 0ul))
            s1 = s1 + 8;

        }

      }

      if((signed int)side == 0)
      {
        if((signed int)board.king[(signed long int)side] >= 5)
        {
          if(!((signed int)board.king[(signed long int)side] >= 8))
          {
            if(sq == 14)
              s1 = s1 + 8;

          }

        }

        if((signed int)board.king[(signed long int)side] >= 0)
        {
          if(!((signed int)board.king[(signed long int)side] >= 3))
          {
            if(sq == 9)
              s1 = s1 + 8;

          }

        }

      }

      else
        if((signed int)side == 1)
        {
          if((signed int)board.king[(signed long int)side] >= 61)
          {
            if(!((signed int)board.king[(signed long int)side] >= 64))
            {
              if(sq == 54)
                s1 = s1 + 8;

            }

          }

          if((signed int)board.king[(signed long int)side] >= 56)
          {
            if(!((signed int)board.king[(signed long int)side] >= 59))
            {
              if(sq == 49)
                s1 = s1 + 8;

            }

          }

        }

      if(!(((Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq]) & (signed long int)(unsigned long int)Mask315[(signed long int)sq]] | Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq]) & (signed long int)(unsigned long int)Mask45[(signed long int)sq]]) & weaked[(signed long int)xside]) == 0ul))
        s1 = s1 + 2;

      s = s + s1;
    }
    if(ScoreB$$1$$n >= 2)
      s = s + 18;

    return s;
  }
}

// ScoreDev
// file common.h line 635
signed int ScoreDev(signed short int side)
{
  signed int s;
  signed int sq;
  unsigned long int c = board.b[(signed long int)side][(signed long int)2] & nn[(signed long int)side] | board.b[(signed long int)side][(signed long int)3] & bb[(signed long int)side];
  unsigned char return_value_nbits$1;
  return_value_nbits$1=nbits$link2(c);
  s = (signed int)return_value_nbits$1 * -8;
  if(GameCnt >= 38 || !(board.castled[(signed long int)side] == 0))
    return s;

  else
  {
    s = s + -8;
    if(Mvboard[(signed long int)board.king[(signed long int)side]] >= 1)
      s = s + -20;

    c = board.b[(signed long int)side][(signed long int)4];
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$2;
      return_value_leadz$2=leadz$link2(c);
      sq = (signed int)return_value_leadz$2;
      c = c & NotBitPosArray[(signed long int)sq];
      if(Mvboard[(signed long int)sq] >= 1)
        s = s + -20;

    }
    if(!(board.b[(signed long int)side][5l] == 0ul))
    {
      unsigned char return_value_leadz$3;
      return_value_leadz$3=leadz$link2(board.b[(signed long int)side][(signed long int)5]);
      sq = (signed int)return_value_leadz$3;
      if(Mvboard[(signed long int)sq] >= 1)
        s = s + -40;

    }

    c = board.b[(signed long int)side][(signed long int)2] | board.b[(signed long int)side][(signed long int)3];
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$4;
      return_value_leadz$4=leadz$link2(c);
      sq = (signed int)return_value_leadz$4;
      c = c & NotBitPosArray[(signed long int)sq];
      if(Mvboard[(signed long int)sq] >= 2)
        s = s + -7;

    }
    c = board.b[(signed long int)side][(signed long int)1] & 0xc3c3c3c3c3c3c3c3ULL;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$5;
      return_value_leadz$5=leadz$link2(c);
      sq = (signed int)return_value_leadz$5;
      c = c & NotBitPosArray[(signed long int)sq];
      if(Mvboard[(signed long int)sq] >= 1)
        s = s + -6;

    }
    c = board.b[(signed long int)side][(signed long int)1] & 0x3c3c3c3c3c3c3c3cULL;
    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$6;
      return_value_leadz$6=leadz$link2(c);
      sq = (signed int)return_value_leadz$6;
      c = c & NotBitPosArray[(signed long int)sq];
      if(Mvboard[(signed long int)sq] >= 2)
        s = s + -6;

    }
    return s;
  }
}

// ScoreK
// file common.h line 634
signed int ScoreK(signed short int side)
{
  signed int xside;
  signed int s;
  signed int sq;
  signed int sq1;
  signed int ScoreK$$1$$n;
  signed int n1;
  signed int n2;
  signed int file;
  signed int fsq;
  signed int rank;
  unsigned long int b;
  unsigned long int x;
  s = 0;
  xside = 1 ^ (signed int)side;
  sq = (signed int)board.king[(signed long int)side];
  file = sq & 7;
  rank = sq >> 3;
  KingSafety[(signed long int)side] = (signed short int)0;
  unsigned char return_value_nbits$1;
  unsigned char return_value_nbits$2;
  unsigned char return_value_nbits$3;
  unsigned char return_value_nbits$4;
  unsigned char return_value_nbits$5;
  unsigned char return_value_nbits$6;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$10;
  _Bool tmp_if_expr$11;
  _Bool tmp_if_expr$12;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$15;
  if(!(phase >= 6))
  {
    s = s + ((6 - phase) * KingSq[(signed long int)sq] + phase * EndingKing[(signed long int)sq]) / 6;
    if((signed int)side == 0)
    {
      return_value_nbits$1=nbits$link2(MoveArray[(signed long int)6][(signed long int)sq] & board.b[(signed long int)side][(signed long int)1] & RankBit[(signed long int)(rank + 1)]);
      ScoreK$$1$$n = (signed int)return_value_nbits$1;
    }

    else
    {
      return_value_nbits$2=nbits$link2(MoveArray[(signed long int)6][(signed long int)sq] & board.b[(signed long int)side][(signed long int)1] & RankBit[(signed long int)(rank - 1)]);
      ScoreK$$1$$n = (signed int)return_value_nbits$2;
    }
    s = s + pawncover[(signed long int)ScoreK$$1$$n];
    if(board.castled[(signed long int)side] == 0)
    {
      ScoreK$$1$$n = -1;
      if((signed int)side == 0)
      {
        if(sq == 4)
        {
          if(Mvboard[(signed long int)sq] == 0)
          {
            if(!((board.b[(signed long int)side][4l] & BitPosArray[7l]) == 0x0000000000000000ULL))
            {
              if(Mvboard[7l] == 0)
              {
                return_value_nbits$3=nbits$link2(MoveArray[(signed long int)6][(signed long int)6] & board.b[(signed long int)side][(signed long int)1] & RankBit[(signed long int)(rank + 1)]);
                ScoreK$$1$$n = (signed int)return_value_nbits$3;
              }

            }

            if(!((board.b[(signed long int)side][4l] & BitPosArray[0l]) == 0x0000000000000000ULL))
            {
              if(Mvboard[0l] == 0)
              {
                return_value_nbits$4=nbits$link2(MoveArray[(signed long int)6][(signed long int)2] & board.b[(signed long int)side][(signed long int)1] & RankBit[(signed long int)(rank + 1)]);
                ScoreK$$1$$n = (signed int)return_value_nbits$4;
              }

            }

          }

        }

      }

      else
        if(sq == 60)
        {
          if(Mvboard[(signed long int)sq] == 0)
          {
            if(!((board.b[(signed long int)side][4l] & BitPosArray[63l]) == 0x0000000000000000ULL))
            {
              if(Mvboard[63l] == 0)
              {
                return_value_nbits$5=nbits$link2(MoveArray[(signed long int)6][(signed long int)62] & board.b[(signed long int)side][(signed long int)1] & RankBit[(signed long int)(rank - 1)]);
                ScoreK$$1$$n = (signed int)return_value_nbits$5;
              }

            }

            if(!((board.b[(signed long int)side][4l] & BitPosArray[56l]) == 0x0000000000000000ULL))
            {
              if(Mvboard[56l] == 0)
              {
                return_value_nbits$6=nbits$link2(MoveArray[(signed long int)6][(signed long int)58] & board.b[(signed long int)side][(signed long int)1] & RankBit[(signed long int)(rank - 1)]);
                ScoreK$$1$$n = (signed int)return_value_nbits$6;
              }

            }

          }

        }

      if(!(ScoreK$$1$$n == -1))
        s = s + pawncover[(signed long int)ScoreK$$1$$n];

    }

    if((signed int)side == computer && file >= 5)
    {
      if((board.b[(signed long int)side][1l] & FileBit[6l]) == 0ul)
      {
        if((signed int)side == 0)
          tmp_if_expr$7 = cboard[(signed long int)13] == 1 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$7 = (_Bool)0;
        if(tmp_if_expr$7)
          s = s + -30;

        else
          if((signed int)side == 1)
          {
            if(cboard[53l] == 1)
              s = s + -30;

          }

      }

    }

    if((board.b[(signed long int)side][1l] & FileBit[(signed long int)file]) == 0ul)
      s = s + -10;

    if((board.b[(signed long int)xside][1l] & FileBit[(signed long int)file]) == 0ul)
      s = s + -6;

    switch(file)
    {
      case 0:

      case 4:

      case 5:

      case 6:
      {
        if((board.b[(signed long int)side][1l] & FileBit[(signed long int)(1 + file)]) == 0ul)
          s = s + -10;

        if((board.b[(signed long int)xside][1l] & FileBit[(signed long int)(1 + file)]) == 0ul)
          s = s + -6;

        goto __CPROVER_DUMP_L22;
      }
      case 7:

      case 3:

      case 2:

      case 1:
      {
        if((board.b[(signed long int)side][1l] & FileBit[(signed long int)(file + -1)]) == 0ul)
          s = s + -10;

        if((board.b[(signed long int)xside][1l] & FileBit[(signed long int)(file + -1)]) == 0ul)
          s = s + -6;

      }
      default:
      {

      __CPROVER_DUMP_L22:
        ;
        if(!(board.castled[(signed long int)side] == 0))
        {
          if((signed int)side == 0)
          {
            if(file >= 5)
            {
              if((board.b[(signed long int)side][1l] & BitPosArray[13l]) == 0ul)
                tmp_if_expr$8 = (_Bool)1;

              else
                tmp_if_expr$8 = !((BitPosArray[(signed long int)14] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$8)
                tmp_if_expr$9 = (_Bool)1;

              else
                tmp_if_expr$9 = !((BitPosArray[(signed long int)15] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$9)
                s = s + -20;

            }

            else
              if(!(file >= 4))
              {
                if((board.b[(signed long int)side][1l] & BitPosArray[8l]) == 0ul)
                  tmp_if_expr$10 = (_Bool)1;

                else
                  tmp_if_expr$10 = !((BitPosArray[(signed long int)9] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr$10)
                  tmp_if_expr$11 = (_Bool)1;

                else
                  tmp_if_expr$11 = !((BitPosArray[(signed long int)10] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr$11)
                  s = s + -20;

              }

          }

          else
            if(file >= 5)
            {
              if((board.b[(signed long int)side][1l] & BitPosArray[53l]) == 0ul)
                tmp_if_expr$12 = (_Bool)1;

              else
                tmp_if_expr$12 = !((BitPosArray[(signed long int)54] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$12)
                tmp_if_expr$13 = (_Bool)1;

              else
                tmp_if_expr$13 = !((BitPosArray[(signed long int)55] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
              if(tmp_if_expr$13)
                s = s + -20;

            }

            else
              if(!(file >= 4))
              {
                if((board.b[(signed long int)side][1l] & BitPosArray[48l]) == 0ul)
                  tmp_if_expr$14 = (_Bool)1;

                else
                  tmp_if_expr$14 = !((BitPosArray[(signed long int)49] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr$14)
                  tmp_if_expr$15 = (_Bool)1;

                else
                  tmp_if_expr$15 = !((BitPosArray[(signed long int)50] & board.b[(signed long int)side][(signed long int)1]) != 0ul) ? (_Bool)1 : (_Bool)0;
                if(tmp_if_expr$15)
                  s = s + -20;

              }

        }

        if((signed int)side == computer)
        {
          if(file >= 4)
          {
            if(!(board.b[(signed long int)xside][5l] == 0ul))
            {
              if(!(board.b[(signed long int)xside][4l] == 0ul))
              {
                if(((board.b[(signed long int)side][1l] | board.b[(signed long int)xside][1l]) & FileBit[7l]) == 0ul)
                  s = s + -600;

              }

            }

          }

          if((signed int)side == 0)
          {
            if(file >= 5)
            {
              if(!((board.b[(signed long int)side][4l] & mask_kr_trapped_w[(signed long int)(7 + -file)]) == 0ul))
                s = s + -10;

            }

            else
              if(!(file >= 3))
              {
                if(!((board.b[(signed long int)side][4l] & mask_qr_trapped_w[(signed long int)file]) == 0ul))
                  s = s + -10;

              }

          }

          else
            if(file >= 5)
            {
              if(!((board.b[(signed long int)side][4l] & mask_kr_trapped_b[(signed long int)(7 + -file)]) == 0ul))
                s = s + -10;

            }

            else
              if(!(file >= 3))
              {
                if(!((board.b[(signed long int)side][4l] & mask_qr_trapped_b[(signed long int)file]) == 0ul))
                  s = s + -10;

              }

        }

        if(file >= 5)
        {
          if(!((7 & (signed int)board.king[(signed long int)xside]) >= 3))
          {
            if((signed int)side == 0)
              fsq = 22;

            else
              fsq = 46;
            if(!((board.b[(signed long int)side][1l] & BitPosArray[(signed long int)fsq]) == 0x0000000000000000ULL))
            {
              if(!(((BitPosArray[29l] | BitPosArray[31l] | BitPosArray[37l] | BitPosArray[39l]) & board.b[(signed long int)xside][1l]) == 0x0000000000000000ULL))
                s = s + -13;

            }

          }

        }

        if(!(file >= 4))
        {
          if((7 & (signed int)board.king[(signed long int)xside]) >= 5)
          {
            if((signed int)side == 0)
              fsq = 17;

            else
              fsq = 41;
            if(!((board.b[(signed long int)side][1l] & BitPosArray[(signed long int)fsq]) == 0x0000000000000000ULL))
            {
              if(!(((BitPosArray[24l] | BitPosArray[26l] | BitPosArray[32l] | BitPosArray[34l]) & board.b[(signed long int)xside][1l]) == 0x0000000000000000ULL))
                s = s + -13;

            }

          }

        }

        x = boardhalf[(signed long int)side] & boardside[(signed long int)(file <= 3)];
        unsigned char return_value_nbits$16;
        return_value_nbits$16=nbits$link2(x & board.friends[(signed long int)xside]);
        n1 = (signed int)return_value_nbits$16;
        if(n1 >= 1)
        {
          unsigned char return_value_nbits$17;
          return_value_nbits$17=nbits$link2(x & board.friends[(signed long int)side] & ~board.b[(signed long int)side][(signed long int)1] & ~board.b[(signed long int)side][(signed long int)6]);
          n2 = (signed int)return_value_nbits$17;
          if(!(n2 >= n1))
            s = s + (n1 - n2) * -50;

        }

        KingSafety[(signed long int)side] = (signed short int)s;
        s = (s * factor[(signed long int)phase]) / 8;
      }
    }
  }

  else
  {
    s = s + EndingKing[(signed long int)sq];
    signed int return_value_CTL$18;
    return_value_CTL$18=CTL((signed short int)sq, (signed short int)6, side);
    s = s + return_value_CTL$18;
    b = board.b[(signed long int)0][(signed long int)1] | board.b[(signed long int)1][(signed long int)1];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$19;
      return_value_leadz$19=leadz$link2(b);
      sq1 = (signed int)return_value_leadz$19;
      b = b & NotBitPosArray[(signed long int)sq1];
      if(!((board.b[0l][1l] & BitPosArray[(signed long int)sq1]) == 0ul))
        s = s - ((signed int)distance[(signed long int)sq][(signed long int)(sq1 + 8)] * 10 - 5);

      else
        if(!((board.b[0l][1l] & BitPosArray[(signed long int)sq1]) == 0ul))
          s = s - ((signed int)distance[(signed long int)sq][(signed long int)(sq1 - 8)] * 10 - 5);

        else
          s = s - ((signed int)distance[(signed long int)sq][(signed long int)sq1] - 5);
    }
    if(!((MoveArray[6l][(signed long int)sq] & weaked[(signed long int)xside]) == 0ul))
      s = s + 2 * 2;

  }
  if(phase >= 4)
  {
    if((signed int)side == 0)
    {
      if(!(sq >= 8))
      {
        if((~board.b[(signed long int)side][1l] & MoveArray[6l][(signed long int)sq] & RankBit[1l]) == 0ul)
          s = s + -40;

      }

    }

    else
      if(sq >= 56)
      {
        if((~board.b[(signed long int)side][1l] & MoveArray[6l][(signed long int)sq] & RankBit[6l]) == 0ul)
          s = s + -40;

      }

  }

  return s;
}

// ScoreKBNK
// file eval.c line 1166
signed int ScoreKBNK(signed int side, signed int loser)
{
  signed int s;
  signed int winer;
  signed int sq1;
  signed int sq2;
  signed int sqB;
  winer = 1 ^ loser;
  sqB = (signed int)board.king[(signed long int)loser];
  if(!((0x55AA55AA55AA55AAULL & board.b[(signed long int)winer][3l]) == 0ul))
    sqB = ((sqB >> 3) * 8 + 7) - (sqB & 7);

  sq1 = (signed int)board.king[(signed long int)winer];
  sq2 = (signed int)board.king[(signed long int)loser];
  s = 300 - 6 * (signed int)taxicab[(signed long int)sq1][(signed long int)sq2];
  s = s - KBNK[(signed long int)sqB];
  s = s - EndingKing[(signed long int)sq2];
  unsigned char return_value_leadz$1;
  return_value_leadz$1=leadz$link2(board.b[(signed long int)winer][(signed long int)2]);
  s = s - (signed int)taxicab[(signed long int)return_value_leadz$1][(signed long int)sq2];
  unsigned char return_value_leadz$2;
  return_value_leadz$2=leadz$link2(board.b[(signed long int)winer][(signed long int)3]);
  s = s - (signed int)taxicab[(signed long int)return_value_leadz$2][(signed long int)sq2];
  if(!((0x00003C3C3C3C0000ULL & board.b[(signed long int)winer][6l]) == 0ul))
    s = s + 20;

  if(side == loser)
    s = -s;

  s = s + ((signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)]);
  return s;
}

// ScoreN
// file common.h line 630
signed int ScoreN(signed short int side)
{
  signed int xside;
  signed int s;
  signed int s1;
  signed int sq;
  unsigned long int c;
  unsigned long int t;
  if(board.b[(signed long int)side][2l] == 0x0000000000000000ULL)
    return 0;

  else
  {
    xside = (signed int)side ^ 1;
    s1 = 0;
    s = s1;
    c = board.b[(signed long int)side][(signed long int)2];
    t = board.b[(signed long int)xside][(signed long int)1];
    if(!((c & pinned) == 0ul))
    {
      unsigned char return_value_nbits$1;
      return_value_nbits$1=nbits$link2(c & pinned);
      s = s + -30 * (signed int)return_value_nbits$1;
    }

    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$2;
      return_value_leadz$2=leadz$link2(c);
      sq = (signed int)return_value_leadz$2;
      c = c & NotBitPosArray[(signed long int)sq];
      s1=CTL((signed short int)sq, (signed short int)2, side);
      if(!((rings[3l] & BitPosArray[(signed long int)sq]) == 0x0000000000000000ULL))
        s1 = s1 + -13;

      if(!(Outpost[(signed long int)side][(signed long int)sq] == 0))
      {
        if((PassedPawnMask[(signed long int)side][(signed long int)sq] & IsolaniMask[(signed long int)(7 & sq)] & t) == 0ul)
        {
          s1 = s1 + 10;
          if(!((board.b[(signed long int)side][1l] & MoveArray[(signed long int)ptype[(signed long int)xside]][(signed long int)sq]) == 0ul))
            s1 = s1 + 10;

        }

      }

      if(!((MoveArray[2l][(signed long int)sq] & weaked[(signed long int)xside]) == 0ul))
        s1 = s1 + 2;

      s = s + s1;
    }
    return s;
  }
}

// ScoreP
// file common.h line 629
signed int ScoreP(signed short int side)
{
  signed int xside;
  signed int s;
  signed int sq;
  signed int i;
  signed int i1;
  signed int n1;
  signed int n2;
  signed int backward;
  signed int nfile[8l];
  unsigned long int c;
  unsigned long int t;
  unsigned long int p;
  unsigned long int blocker;
  struct anonymous$4 *ptable;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$4;
  _Bool tmp_if_expr$3;
  unsigned char return_value_nbits$11;
  unsigned char return_value_nbits$12;
  _Bool tmp_if_expr$13;
  _Bool tmp_if_expr$14;
  _Bool tmp_if_expr$16;
  _Bool tmp_if_expr$15;
  if(board.b[(signed long int)side][1l] == 0x0000000000000000ULL)
    return 0;

  else
  {
    xside = 1 ^ (signed int)side;
    p = board.b[(signed long int)xside][(signed long int)1];
    t = board.b[(signed long int)side][(signed long int)1];
    c = t;
    ptable = PawnTab[(signed long int)side] + (signed long int)(PawnHashKey & PHashMask);
    TotalPawnHashCnt = TotalPawnHashCnt + 1ul;
    if(ptable->phase == phase)
    {
      if(!((unsigned long int)ptable->pkey == PawnHashKey >> 32))
        goto __CPROVER_DUMP_L2;

      GoodPawnHashCnt = GoodPawnHashCnt + 1ul;
      s = ptable->score;
      passed[(signed long int)side] = ptable->passed;
      weaked[(signed long int)side] = ptable->weaked;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      s = 0;
      passed[(signed long int)side] = 0x0000000000000000ULL;
      weaked[(signed long int)side] = 0x0000000000000000ULL;
      memset((void *)nfile, 0, sizeof(signed int [8l]) /*32ul*/ );
      while(!(t == 0ul))
      {
        unsigned char return_value_leadz$1;
        return_value_leadz$1=leadz$link2(t);
        sq = (signed int)return_value_leadz$1;
        t = t & NotBitPosArray[(signed long int)sq];
        s = s + PawnSq[(signed long int)side][(signed long int)sq];
        if((PassedPawnMask[(signed long int)side][(signed long int)sq] & p) == 0x0000000000000000ULL)
        {
          if((signed int)side == 0)
            tmp_if_expr$2 = (FromToRay[(signed long int)sq][(signed long int)(sq | 56)] & c) == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$2 = (_Bool)0;
          if(tmp_if_expr$2)
            tmp_if_expr$4 = (_Bool)1;

          else
          {
            if((signed int)side == 1)
              tmp_if_expr$3 = (FromToRay[(signed long int)sq][(signed long int)(sq & 7)] & c) == (unsigned long int)0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$3 = (_Bool)0;
            tmp_if_expr$4 = tmp_if_expr$3 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$4)
          {
            passed[(signed long int)side] = passed[(signed long int)side] | BitPosArray[(signed long int)sq];
            s = s + (Passed[(signed long int)side][(signed long int)(sq >> 3)] * phase) / 12;
          }

        }

        backward = 0;
        if((signed int)side == 0)
          i = sq + 8;

        else
          i = sq - 8;
        if((~FileBit[(signed long int)(7 & sq)] & PassedPawnMask[(signed long int)xside][(signed long int)i] & c) == 0ul)
        {
          if(!(cboard[(signed long int)i] == 1))
          {
            unsigned char return_value_nbits$5;
            return_value_nbits$5=nbits$link2(c & MoveArray[(signed long int)ptype[(signed long int)xside]][(signed long int)i]);
            n1 = (signed int)return_value_nbits$5;
            unsigned char return_value_nbits$6;
            return_value_nbits$6=nbits$link2(p & MoveArray[(signed long int)ptype[(signed long int)side]][(signed long int)i]);
            n2 = (signed int)return_value_nbits$6;
            if(!(n1 >= n2))
              backward = 1;

          }

        }

        if(backward == 0)
        {
          if(!((brank7[(signed long int)xside] & BitPosArray[(signed long int)sq]) == 0ul))
          {
            i1 = 1;
            i = i + ((signed int)side == 0 ? 8 : -8);
            if((~FileBit[(signed long int)(7 & i1)] & PassedPawnMask[(signed long int)xside][(signed long int)i] & c) == 0ul)
            {
              unsigned char return_value_nbits$7;
              return_value_nbits$7=nbits$link2(c & MoveArray[(signed long int)ptype[(signed long int)xside]][(signed long int)i]);
              n1 = (signed int)return_value_nbits$7;
              unsigned char return_value_nbits$8;
              return_value_nbits$8=nbits$link2(p & MoveArray[(signed long int)ptype[(signed long int)side]][(signed long int)i]);
              n2 = (signed int)return_value_nbits$8;
              if(!(n1 >= n2))
                backward = 1;

            }

          }

        }

        if(!(backward == 0))
        {
          weaked[(signed long int)side] = weaked[(signed long int)side] | BitPosArray[(signed long int)sq];
          s = s + -(8 + phase);
        }

        if(!((MoveArray[(signed long int)ptype[(signed long int)side]][(signed long int)sq] & p) == 0ul))
        {
          if(!((MoveArray[(signed long int)ptype[(signed long int)side]][(signed long int)sq] & c) == 0ul))
            s = s + -18;

        }

        nfile[(signed long int)(sq & 7)] = nfile[(signed long int)(sq & 7)] + 1;
      }
      i = 0;
      for( ; !(i >= 8); i = i + 1)
      {
        if(nfile[(signed long int)i] >= 2)
          s = s + -(8 + phase);

        if(!(nfile[(signed long int)i] == 0))
        {
          if((IsolaniMask[(signed long int)i] & c) == 0ul)
          {
            if((board.b[(signed long int)xside][1l] & FileBit[(signed long int)i]) == 0ul)
              s = s + isolani_weaker[(signed long int)i] * nfile[(signed long int)i];

            else
              s = s + isolani_normal[(signed long int)i] * nfile[(signed long int)i];
            weaked[(signed long int)side] = weaked[(signed long int)side] | c & FileBit[(signed long int)i];
          }

        }

      }
      if(computerplays == (signed int)side)
      {
        unsigned char return_value_nbits$9;
        return_value_nbits$9=nbits$link2(board.b[(signed long int)computerplays][(signed long int)1]);
        if((signed int)return_value_nbits$9 == 8)
          s = s + -10;

        unsigned char return_value_nbits$10;
        return_value_nbits$10=nbits$link2(stonewall[(signed long int)xside] & board.b[(signed long int)xside][(signed long int)1]);
        if((signed int)return_value_nbits$10 == 3)
          s = s + -10;

        n = 0;
        if((signed int)side == 0)
        {
          return_value_nbits$11=nbits$link2(c >> 8 & board.b[(signed long int)xside][(signed long int)1] & boxes[(signed long int)1]);
          n = (signed int)return_value_nbits$11;
        }

        else
        {
          return_value_nbits$12=nbits$link2(c << 8 & board.b[(signed long int)xside][(signed long int)1] & boxes[(signed long int)1]);
          n = (signed int)return_value_nbits$12;
        }
        if(n >= 2)
          s = s + n * -10;

      }

      ptable->pkey = (unsigned int)(PawnHashKey >> 32);
      ptable->passed = passed[(signed long int)side];
      ptable->weaked = weaked[(signed long int)side];
      ptable->score = s;
      ptable->phase = phase;
    }

  phase2:
    ;
    c = board.b[(signed long int)side][(signed long int)1];
    sq = (signed int)board.king[(signed long int)xside];
    if((signed int)side == 0)
      tmp_if_expr$13 = board.b[(signed long int)side][(signed long int)5] != 0ul ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$13 = (_Bool)0;
    if(tmp_if_expr$13)
      tmp_if_expr$14 = ((BitPosArray[(signed long int)42] | BitPosArray[(signed long int)45]) & c) != 0ul ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$14 = (_Bool)0;
    if(tmp_if_expr$14)
    {
      if(!((BitPosArray[45l] & c) == 0ul))
      {
        if(sq >= 48)
        {
          if((signed int)distance[(signed long int)sq][54l] == 1)
            s = s + 40;

        }

      }

      if(!((BitPosArray[42l] & c) == 0ul))
      {
        if(sq >= 48)
        {
          if((signed int)distance[(signed long int)sq][49l] == 1)
            s = s + 40;

        }

      }

    }

    else
      if((signed int)side == 1)
      {
        if(!(board.b[(signed long int)side][5l] == 0ul))
        {
          if(!(((BitPosArray[18l] | BitPosArray[21l]) & c) == 0ul))
          {
            if(!((BitPosArray[21l] & c) == 0ul))
            {
              if(!(sq >= 16))
              {
                if((signed int)distance[(signed long int)sq][14l] == 1)
                  s = s + 40;

              }

            }

            if(!((BitPosArray[18l] & c) == 0ul))
            {
              if(!(sq >= 16))
              {
                if((signed int)distance[(signed long int)sq][9l] == 1)
                  s = s + 40;

              }

            }

          }

        }

      }

    t = passed[(signed long int)side] & brank67[(signed long int)side];
    if(!(t == 0ul))
    {
      if((signed int)board.pmaterial[(signed long int)xside] == 550)
        tmp_if_expr$16 = (_Bool)1;

      else
      {
        if((signed int)board.pmaterial[(signed long int)xside] == 350)
          tmp_if_expr$15 = pieces[(signed long int)xside] == board.b[(signed long int)xside][(signed long int)2] ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$15 = (_Bool)0;
        tmp_if_expr$16 = tmp_if_expr$15 ? (_Bool)1 : (_Bool)0;
      }
      if(tmp_if_expr$16)
      {
        n1 = (signed int)board.king[(signed long int)xside] & 7;
        n2 = (signed int)board.king[(signed long int)xside] >> 3;
        i = 0;
        for( ; !(i >= 7); i = i + 1)
          if(!((FileBit[(signed long int)i] & t) == 0ul))
          {
            if(!((FileBit[(signed long int)(1 + i)] & t) == 0ul))
            {
              if((signed int)side == 0 && !(n2 >= 4) || (signed int)side == 1 && n2 >= 4 || !(1 + i >= n1) || !(n1 >= i + -1))
                s = s + 50;

            }

          }

      }

    }

    blocker = board.friends[(signed long int)side] | board.friends[(signed long int)xside];
    if((signed int)side == 0)
    {
      if(!(((d2e2[0l] & c) >> 8 & blocker) == 0ul))
        s = s + -48;

    }

    if((signed int)side == 1)
    {
      if(!(((d2e2[1l] & c) << 8 & blocker) == 0ul))
        s = s + -48;

    }

    if(!(passed[(signed long int)side] == 0ul))
    {
      if((signed int)board.pmaterial[(signed long int)xside] == 0)
      {
        i1 = (signed int)board.king[(signed long int)xside];
        p = passed[(signed long int)side];
        while(!(p == 0ul))
        {
          unsigned char return_value_leadz$17;
          return_value_leadz$17=leadz$link2(p);
          sq = (signed int)return_value_leadz$17;
          p = p & NotBitPosArray[(signed long int)sq];
          if(board.side == side)
          {
            if((board.b[(signed long int)xside][6l] & SquarePawnMask[(signed long int)side][(signed long int)sq]) == 0ul)
              s = s + (1100 * Passed[(signed long int)side][(signed long int)(sq >> 3)]) / 550;

          }

          else
            if((SquarePawnMask[(signed long int)side][(signed long int)sq] & MoveArray[6l][(signed long int)i1]) == 0ul)
              s = s + (1100 * Passed[(signed long int)side][(signed long int)(sq >> 3)]) / 550;

        }
      }

    }

    c = board.b[(signed long int)side][(signed long int)1];
    signed int return_value_abs$19;
    return_value_abs$19=abs(((signed int)board.king[(signed long int)side] & 7) - ((signed int)board.king[(signed long int)xside] & 7));
    if(return_value_abs$19 >= 4)
    {
      if(!(8 + -(((signed int)board.material[0l] + (signed int)board.material[1l]) / 1150) >= 6))
      {
        n1 = (signed int)board.king[(signed long int)xside] & 7;
        p = (IsolaniMask[(signed long int)n1] | FileBit[(signed long int)n1]) & c;
        while(!(p == 0ul))
        {
          unsigned char return_value_leadz$18;
          return_value_leadz$18=leadz$link2(p);
          sq = (signed int)return_value_leadz$18;
          p = p & NotBitPosArray[(signed long int)sq];
          s = s + 10 * (5 - (signed int)distance[(signed long int)sq][(signed long int)board.king[(signed long int)xside]]);
        }
      }

    }

    return s;
  }
}

// ScoreQ
// file common.h line 633
signed int ScoreQ(signed short int side)
{
  signed int xside;
  signed int s;
  signed int s1;
  signed int sq;
  signed int EnemyKing;
  unsigned long int c;
  s1 = 0;
  s = s1;
  if(board.b[(signed long int)side][5l] == 0x0000000000000000ULL)
  {
    if((signed int)side == computer)
      s = s + -25;

    return s;
  }

  else
  {
    xside = 1 ^ (signed int)side;
    c = board.b[(signed long int)side][(signed long int)5];
    EnemyKing = (signed int)board.king[(signed long int)xside];
    if(!((c & pinned) == 0ul))
    {
      unsigned char return_value_nbits$1;
      return_value_nbits$1=nbits$link2(c & pinned);
      s = s + -90 * (signed int)return_value_nbits$1;
    }

    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$2;
      return_value_leadz$2=leadz$link2(c);
      sq = (signed int)return_value_leadz$2;
      c = c & NotBitPosArray[(signed long int)sq];
      s1=CTL((signed short int)sq, (signed short int)5, side);
      if(!((signed int)distance[(signed long int)sq][(signed long int)EnemyKing] >= 3))
        s1 = s1 + 12;

      if(!(((Bishop315Atak[(signed long int)sq][(signed long int)(board.blockerr315 >> (signed int)Shift315[(signed long int)sq]) & (signed long int)(unsigned long int)Mask315[(signed long int)sq]] | Bishop45Atak[(signed long int)sq][(signed long int)(board.blockerr45 >> (signed int)Shift45[(signed long int)sq]) & (signed long int)(unsigned long int)Mask45[(signed long int)sq]] | Rook00Atak[(signed long int)sq][255l & (signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq])] | Rook90Atak[(signed long int)sq][255l & (signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq])]) & weaked[(signed long int)xside]) == 0ul))
        s1 = s1 + 2;

      s = s + s1;
    }
    return s;
  }
}

// ScoreR
// file common.h line 632
signed int ScoreR(signed short int side)
{
  signed int s;
  signed int s1;
  signed int sq;
  signed int xside;
  signed int fyle;
  signed int EnemyKing;
  unsigned long int c;
  _Bool tmp_if_expr$5;
  if(board.b[(signed long int)side][4l] == 0x0000000000000000ULL)
    return 0;

  else
  {
    s1 = 0;
    s = s1;
    c = board.b[(signed long int)side][(signed long int)4];
    xside = (signed int)side ^ 1;
    EnemyKing = (signed int)board.king[(signed long int)xside];
    if(!((c & pinned) == 0ul))
    {
      unsigned char return_value_nbits$1;
      return_value_nbits$1=nbits$link2(c & pinned);
      s = s + -50 * (signed int)return_value_nbits$1;
    }

    while(!(c == 0ul))
    {
      unsigned char return_value_leadz$2;
      return_value_leadz$2=leadz$link2(c);
      sq = (signed int)return_value_leadz$2;
      c = c & NotBitPosArray[(signed long int)sq];
      s1=CTL((signed short int)sq, (signed short int)4, side);
      fyle = sq & 7;
      if(!(8 + -(((signed int)board.material[0l] + (signed int)board.material[1l]) / 1150) >= 7))
      {
        if((board.b[(signed long int)side][1l] & FileBit[(signed long int)fyle]) == 0ul)
        {
          if(fyle == 5)
          {
            if((7 & (signed int)board.king[(signed long int)xside]) >= 4)
              s1 = s1 + 40;

          }

          s1 = s1 + 5;
          if((board.b[(signed long int)xside][1l] & FileBit[(signed long int)fyle]) == 0ul)
            s1 = s1 + 6;

        }

      }

      if(phase >= 7)
      {
        if(!((brank58[0l] & passed[0l] & FileBit[(signed long int)fyle]) == 0ul))
        {
          unsigned char return_value_nbits$3;
          return_value_nbits$3=nbits$link2(Ray[(signed long int)sq][(signed long int)7] & passed[(signed long int)0]);
          if((signed int)return_value_nbits$3 == 1)
            s1 = s1 + 6;

          else
            if(!((Ray[(signed long int)sq][4l] & passed[0l]) == 0ul))
              s1 = s1 + -10;

        }

      }

      if(!((brank58[1l] & passed[1l] & FileBit[(signed long int)fyle]) == 0ul))
      {
        unsigned char return_value_nbits$4;
        return_value_nbits$4=nbits$link2(Ray[(signed long int)sq][(signed long int)4] & passed[(signed long int)1]);
        if((signed int)return_value_nbits$4 == 1)
          s1 = s1 + 6;

        else
          if(!((Ray[(signed long int)sq][7l] & passed[1l]) == 0ul))
            s1 = s1 + -10;

      }

      if(!(((Rook00Atak[(signed long int)sq][255l & (signed long int)(board.blocker >> (signed int)Shift00[(signed long int)sq])] | Rook90Atak[(signed long int)sq][255l & (signed long int)(board.blockerr90 >> (signed int)Shift90[(signed long int)sq])]) & weaked[(signed long int)xside]) == 0ul))
        s1 = s1 + 2;

      if(sq >> 3 == rank7[(signed long int)side])
      {
        if(EnemyKing >> 3 == rank8[(signed long int)side])
          tmp_if_expr$5 = (_Bool)1;

        else
          tmp_if_expr$5 = (board.b[(signed long int)xside][(signed long int)1] & RankBit[(signed long int)(sq >> 3)]) != 0ul ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$5)
          s1 = s1 + 30;

      }

      s = s + s1;
    }
    return s;
  }
}

// Search
// file search.c line 194
signed int Search(unsigned char ply, signed short int depth, signed int alpha, signed int beta, signed short int nodetype)
{
  signed int best;
  signed int score;
  signed int nullscore;
  signed int savealpha;
  signed int side;
  signed int xside;
  signed int rc;
  signed int t0;
  signed int t1;
  signed int firstmove;
  signed int fcut;
  signed int fdel;
  signed int donull;
  signed int savenode;
  signed int extend;
  struct anonymous *p;
  struct anonymous *pbest;
  signed int g0;
  signed int g1;
  signed short int return_value_EvaluateDraw$1;
  return_value_EvaluateDraw$1=EvaluateDraw();
  signed short int return_value_Repeat$2;
  signed int tmp_if_expr$3;
  _Bool tmp_if_expr$8;
  _Bool tmp_if_expr$7;
  _Bool tmp_if_expr$6;
  signed short int return_value_SqAtakd$9;
  signed int return_value_Quiesce$10;
  signed int tmp_if_expr$13;
  signed int tmp_if_expr$14;
  _Bool tmp_if_expr$15;
  signed int tmp_if_expr$16;
  _Bool tmp_if_expr$17;
  signed short int return_value_SqAtakd$18;
  signed short int return_value_SqAtakd$19;
  signed int return_value_MateScan$20;
  signed int tmp_if_expr$25;
  signed int return_value_PhasePick1$23;
  signed int return_value_PhasePick$24;
  signed int tmp_if_expr$22;
  signed int return_value_Evaluate$21;
  signed int tmp_if_expr$29;
  signed int return_value_PhasePick1$27;
  signed int return_value_PhasePick$28;
  signed short int return_value_SqAtakd$32;
  signed int return_value_MateScan$31;
  if(!(return_value_EvaluateDraw$1 == 0))
    return 0;

  else
    if(GameCnt >= 3 + Game50)
    {
      return_value_Repeat$2=Repeat();
      if(return_value_Repeat$2 == 0)
        goto __CPROVER_DUMP_L2;

      RepeatCnt = RepeatCnt + 1ul;
      return 0;
    }

    else
    {

    __CPROVER_DUMP_L2:
      ;
      side = (signed int)board.side;
      xside = 1 ^ side;
      donull = 1;
      extend = 0;
      InChk[(signed long int)ply]=SqAtakd(board.king[(signed long int)side], (signed short int)xside);
      if(!(InChk[(signed long int)ply] == 0))
      {
        TreePtr[(signed long int)((signed int)ply + 1)] = TreePtr[(signed long int)ply];
        GenCheckEscapes((signed short int)ply);
        if(TreePtr[(signed long int)ply] == TreePtr[(signed long int)(1 + (signed int)ply)])
          return (-32767 + (signed int)ply) - 2;

        if(TreePtr[(signed long int)ply] + 1l == TreePtr[(signed long int)(1 + (signed int)ply)])
        {
          depth = depth + (signed short int)1;
          extend = 1;
          OneRepCnt = OneRepCnt + 1ul;
        }

      }

      if(rootscore + (signed int)ply >= 32767)
        return (signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)];

      else
      {
        g0 = Game[(signed long int)GameCnt].move;
        if(GameCnt >= 1)
          tmp_if_expr$3 = Game[(signed long int)(GameCnt - 1)].move;

        else
          tmp_if_expr$3 = 0;
        g1 = tmp_if_expr$3;
        t0 = g0 & 0x003F;
        t1 = g1 & 0x003F;
        ChkCnt[(signed long int)((signed int)ply + 1)] = ChkCnt[(signed long int)ply];
        ThrtCnt[(signed long int)((signed int)ply + 1)] = ThrtCnt[(signed long int)ply];
        signed int return_value_MateScan$4;
        return_value_MateScan$4=MateScan(0);
        KingThrt[(signed long int)0][(signed long int)ply] = (signed short int)return_value_MateScan$4;
        signed int return_value_MateScan$5;
        return_value_MateScan$5=MateScan(1);
        KingThrt[(signed long int)1][(signed long int)ply] = (signed short int)return_value_MateScan$5;
        if(2 * Idepth >= (signed int)ply && !(InChk[(signed long int)ply] == 0))
        {
          ChkExtCnt = ChkExtCnt + 1ul;
          ChkCnt[(signed long int)((signed int)ply + 1)] = ChkCnt[(signed long int)((signed int)ply + 1)] + 1;
          depth = depth + (signed short int)1;
          extend = 1;
        }

        else
        {
          if(KingThrt[(signed long int)side][(signed long int)((signed int)ply + -1)] == 0)
            tmp_if_expr$8 = KingThrt[(signed long int)side][(signed long int)ply] != 0 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$8 = (_Bool)0;
          if(2 * Idepth >= (signed int)ply && tmp_if_expr$8)
          {
            KingExtCnt = KingExtCnt + 1ul;
            extend = 1;
            depth = depth + (signed short int)1;
            extend = 1;
            donull = 0;
          }

          else
            if(!((0x00007000 & g0) == 0))
            {
              PawnExtCnt = PawnExtCnt + 1ul;
              depth = depth + (signed short int)1;
              extend = 1;
            }

            else
            {
              if(!((0x00038000 & g0) == 0))
                tmp_if_expr$7 = (signed int)board.material[(signed long int)computer] - (signed int)board.material[(signed long int)(1 ^ computer)] == (signed int)RootMaterial ? (_Bool)1 : (_Bool)0;

              else
                tmp_if_expr$7 = (_Bool)0;
              if(tmp_if_expr$7)
              {
                RcpExtCnt = RcpExtCnt + 1ul;
                depth = depth + (signed short int)1;
                extend = 1;
              }

              else
                if(!((signed int)depth >= 2))
                {
                  if(cboard[(signed long int)t0] == 1)
                  {
                    if(t0 >> 3 == rank7[(signed long int)xside])
                      tmp_if_expr$6 = (_Bool)1;

                    else
                      tmp_if_expr$6 = t0 >> 3 == rank6[(signed long int)xside] ? (_Bool)1 : (_Bool)0;
                    if(tmp_if_expr$6)
                    {
                      PawnExtCnt = PawnExtCnt + 1ul;
                      depth = depth + (signed short int)1;
                      extend = 1;
                    }

                  }

                }

            }
        }
        if((signed int)ply >= 3)
        {
          if(!(InChk[(signed long int)((signed int)ply + -1)] == 0))
          {
            if(!(cboard[(signed long int)t0] == 6))
            {
              if(!(t0 == t1))
              {
                return_value_SqAtakd$9=SqAtakd((signed short int)t0, (signed short int)xside);
                if(return_value_SqAtakd$9 == 0)
                {
                  HorzExtCnt = HorzExtCnt + 1ul;
                  depth = depth + (signed short int)1;
                  extend = 1;
                }

              }

            }

          }

        }

        if(!((signed int)depth >= 1))
        {
          return_value_Quiesce$10=Quiesce(ply, alpha, beta);
          return return_value_Quiesce$10;
        }

        else
        {
          Hashmv[(signed long int)ply] = 0;
          if(!((128u & flags) == 0u))
          {
            unsigned char return_value_TTGet$11;
            return_value_TTGet$11=TTGet((unsigned char)side, (unsigned char)depth, ply, &score, &g1);
            rc = (signed int)return_value_TTGet$11;
            if(!(rc == 0))
            {
              Hashmv[(signed long int)ply] = g1 & (0x00200000 | 0x00400000 | 0x00007000 | 0x0FFF);
              switch(rc)
              {
                case 4:
                  goto __CPROVER_DUMP_L26;
                case 1:
                  return score;
                case 3:
                {
                  beta = beta < score ? beta : score;
                  donull = 0;
                  goto __CPROVER_DUMP_L26;
                }
                case 2:
                {
                  alpha = score;
                  goto __CPROVER_DUMP_L26;
                }
                case 5:
                  Hashmv[(signed long int)ply] = 0;
                default:
                {

                __CPROVER_DUMP_L26:
                  ;
                  if(alpha >= beta)
                    return score;

                }
              }
            }

          }

          if((signed int)ply >= 5)
          {
            if(!(InChk[(signed long int)((signed int)ply + -2)] == 0))
            {
              if(!(InChk[(signed long int)((signed int)ply + -4)] == 0))
                donull = 0;

            }

          }

          if((signed int)depth >= 2 && !((512u & flags) == 0u) && !(g0 == 0x00100000) && !((signed int)nodetype == 0))
          {
            if(InChk[(signed long int)ply] == 0)
            {
              if(!(beta >= 100 + (signed int)board.material[(signed long int)side] + -((signed int)board.material[(signed long int)(1 ^ side)])))
              {
                if(!(-32767 + (signed int)ply >= beta))
                {
                  if(!(donull == 0))
                  {
                    if((signed int)board.pmaterial[(signed long int)side] >= 351)
                    {
                      TreePtr[(signed long int)((signed int)ply + 1)] = TreePtr[(signed long int)ply];
                      MakeNullMove(side);
                      signed int return_value_Search$12;
                      return_value_Search$12=Search((unsigned char)((signed int)ply + 1), (signed short int)((signed int)depth - 3), -beta, -beta + 1, nodetype);
                      nullscore = -return_value_Search$12;
                      UnmakeNullMove(xside);
                      if(nullscore >= beta)
                      {
                        NullCutCnt = NullCutCnt + 1ul;
                        return nullscore;
                      }

                      if((signed int)depth + -3 >= 1)
                      {
                        if(!(beta >= (signed int)board.material[(signed long int)side] + -((signed int)board.material[(signed long int)(1 ^ side)])))
                        {
                          if(!(nullscore >= -32510))
                          {
                            depth = depth + (signed short int)1;
                            extend = 1;
                          }

                        }

                      }

                    }

                  }

                }

              }

            }

          }

          if(!(InChk[(signed long int)ply] == 0))
          {
            if(!(TreePtr[(signed long int)ply] + 1l >= TreePtr[(signed long int)(1 + (signed int)ply)]))
              SortMoves((signed int)ply);

          }

          pickphase[(signed long int)ply] = (signed short int)1;
          if(!(InChk[(signed long int)ply] == 0))
            PhasePick1(&p, (signed int)ply);

          else
            PhasePick(&p, (signed int)ply);
          fcut = 0;
          if(!(maxposnscore[(signed long int)side] >= 1100))
            tmp_if_expr$13 = 1100;

          else
            tmp_if_expr$13 = maxposnscore[(signed long int)side];
          fdel = tmp_if_expr$13;
          if(extend == 0 && (signed int)depth == 3 && !((signed int)nodetype == 0))
          {
            if(alpha >= fdel + (signed int)board.material[(signed long int)side] + -((signed int)board.material[(signed long int)(1 ^ side)]))
            {
              depth = (signed short int)2;
              RazrCutCnt = RazrCutCnt + 1ul;
            }

          }

          if(!(maxposnscore[(signed long int)side] >= 550))
            tmp_if_expr$14 = 550;

          else
            tmp_if_expr$14 = maxposnscore[(signed long int)side];
          fdel = tmp_if_expr$14;
          if(extend == 0 && (signed int)depth == 2 && !((signed int)nodetype == 0))
            tmp_if_expr$15 = ((signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)]) + fdel <= alpha ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$15 = (_Bool)0;
          fcut = (signed int)tmp_if_expr$15;
          if(fcut == 0)
          {
            if(!(maxposnscore[(signed long int)side] >= 3))
              tmp_if_expr$16 = 3 * 100;

            else
              tmp_if_expr$16 = maxposnscore[(signed long int)side];
            fdel = tmp_if_expr$16;
            if((signed int)depth == 1 && !((signed int)nodetype == 0))
              tmp_if_expr$17 = ((signed int)board.material[(signed long int)side] - (signed int)board.material[(signed long int)(1 ^ side)]) + fdel <= alpha ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$17 = (_Bool)0;
            fcut = (signed int)tmp_if_expr$17;
          }

          MakeMove(side, &p->move);
          NodeCnt = NodeCnt + 1ul;
          g1 = 0;
          g0 = g1;
          do
          {
            return_value_SqAtakd$18=SqAtakd(board.king[(signed long int)side], (signed short int)xside);
            g0 = (signed int)return_value_SqAtakd$18;
            if(!(g0 >= 1))
            {
              if(!(fcut == 0))
              {
                if(fdel + (signed int)board.material[(signed long int)side] + -((signed int)board.material[(signed long int)(1 ^ side)]) >= alpha)
                  goto __CPROVER_DUMP_L49;

                return_value_SqAtakd$19=SqAtakd(board.king[(signed long int)xside], (signed short int)side);
                if(!(return_value_SqAtakd$19 == 0))
                  goto __CPROVER_DUMP_L49;

                return_value_MateScan$20=MateScan(xside);
                if(!(return_value_MateScan$20 == 0))
                  goto __CPROVER_DUMP_L49;

              }

              else
              {

              __CPROVER_DUMP_L49:
                ;
                break;
              }
            }

            if(g0 == 0)
              g1 = g1 + 1;

            UnmakeMove(xside, &p->move);
            if(!(InChk[(signed long int)ply] == 0))
            {
              return_value_PhasePick1$23=PhasePick1(&p, (signed int)ply);
              tmp_if_expr$25 = return_value_PhasePick1$23;
            }

            else
            {
              return_value_PhasePick$24=PhasePick(&p, (signed int)ply);
              tmp_if_expr$25 = return_value_PhasePick$24;
            }
            if(tmp_if_expr$25 == 0)
            {
              if(!(g1 == 0))
              {
                return_value_Evaluate$21=Evaluate(alpha, beta);
                tmp_if_expr$22 = return_value_Evaluate$21;
              }

              else
                tmp_if_expr$22 = 0;
              return tmp_if_expr$22;
            }

            MakeMove(side, &p->move);
            NodeCnt = NodeCnt + 1ul;
          }
          while((_Bool)1);
          firstmove = 1;
          pbest = p;
          best = -32767;
          savealpha = alpha;
          nullscore = 32767;
          savenode = (signed int)nodetype;
          if(!((signed int)nodetype == 0))
            nodetype = (signed short int)((signed int)nodetype == 2 ? 1 : 2);

          while((_Bool)1)
          {
            if(!(firstmove == 0))
            {
              firstmove = 0;
              signed int return_value_Search$26;
              return_value_Search$26=Search((unsigned char)((signed int)ply + 1), (signed short int)((signed int)depth - 1), -beta, -alpha, nodetype);
              score = -return_value_Search$26;
            }

            else
            {
              if(!(InChk[(signed long int)ply] == 0))
              {
                return_value_PhasePick1$27=PhasePick1(&p, (signed int)ply);
                tmp_if_expr$29 = return_value_PhasePick1$27;
              }

              else
              {
                return_value_PhasePick$28=PhasePick(&p, (signed int)ply);
                tmp_if_expr$29 = return_value_PhasePick$28;
              }
              if(tmp_if_expr$29 == 0)
                break;

              MakeMove(side, &p->move);
              NodeCnt = NodeCnt + 1ul;
              signed short int return_value_SqAtakd$30;
              return_value_SqAtakd$30=SqAtakd(board.king[(signed long int)side], (signed short int)xside);
              if(!(return_value_SqAtakd$30 == 0))
              {
                UnmakeMove(xside, &p->move);
                continue;
              }

              if(!(fcut == 0))
              {
                if(alpha >= fdel + (signed int)board.material[(signed long int)side] + -((signed int)board.material[(signed long int)(1 ^ side)]))
                {
                  return_value_SqAtakd$32=SqAtakd(board.king[(signed long int)xside], (signed short int)side);
                  if(return_value_SqAtakd$32 == 0)
                  {
                    return_value_MateScan$31=MateScan(xside);
                    if(return_value_MateScan$31 == 0)
                    {
                      UnmakeMove(xside, &p->move);
                      FutlCutCnt = FutlCutCnt + 1ul;
                      NodeCnt = NodeCnt - 1ul;
                      continue;
                    }

                  }

                }

              }

              NodeCnt = NodeCnt + 1ul;
              if((signed int)nodetype == 0)
                nodetype = (signed short int)2;

              alpha = best > alpha ? best : alpha;
              signed int return_value_Search$33;
              return_value_Search$33=Search((unsigned char)((signed int)ply + 1), (signed short int)((signed int)depth - 1), -alpha - 1, -alpha, nodetype);
              score = -return_value_Search$33;
              if(!(best >= score))
              {
                if(savenode == 0)
                  nodetype = (signed short int)0;

                if(!(score >= beta) && !(alpha >= score))
                {
                  signed int return_value_Search$34;
                  return_value_Search$34=Search((unsigned char)((signed int)ply + 1), (signed short int)((signed int)depth - 1), -beta, -score, nodetype);
                  score = -return_value_Search$34;
                }

                if((signed int)nodetype == 0 && alpha >= score)
                {
                  if(Game[(signed long int)(1 + GameCnt)].move == 0x00100000)
                  {
                    signed int return_value_Search$35;
                    return_value_Search$35=Search((unsigned char)((signed int)ply + 1), (signed short int)((signed int)depth - 1), -alpha, 32767, nodetype);
                    score = -return_value_Search$35;
                  }

                }

              }

            }
            UnmakeMove(xside, &p->move);
            if(!(best >= score))
            {
              best = score;
              pbest = p;
              if(best >= beta)
                break;

            }

            if(!((16u & flags) == 0u))
            {
              best = ((signed int)ply & 1) != 0 ? rootscore : -rootscore;
              return best;
            }

            if((1023ul & NodeCnt) == 0ul && (SearchDepth == 0 || !((8192u & flags) == 0u)))
            {
              if(!((8192u & flags) == 0u))
              {
                if(!(input_status == 0))
                  do
                  {
                    flags = flags | (unsigned int)0x0010;
                    dbg_printf("Set   0x%x\n", 0x0010);
                  }
                  while((_Bool)0);

              }

              else
              {
                ElapsedTime=GetElapsed(StartTime);
                if(ElapsedTime >= (double)maxtime || ElapsedTime >= (double)SearchTime && (rootscore == -32768 || !((256u & flags) == 0u) || !(lastrootscore + -25 >= ply1score)))
                  do
                  {
                    flags = flags | (unsigned int)0x0010;
                    dbg_printf("Set   0x%x\n", 0x0010);
                  }
                  while((_Bool)0);

              }
            }

            if(best + (signed int)ply == 1)
              break;

          }

        done:
          ;
          if(!((128u & flags) == 0u))
          {
            if((16u & flags) == 0u)
              TTPut((unsigned char)side, (unsigned char)depth, ply, savealpha, beta, best, pbest->move);

          }

          if(!(savealpha >= best))
            history[(signed long int)side][(signed long int)(pbest->move & 0x0FFF)] = history[(signed long int)side][(signed long int)(pbest->move & 0x0FFF)] + (unsigned long int)((signed int)depth * (signed int)depth);

          if((258048 & pbest->move) == 0)
          {
            if(!(savealpha >= best))
            {
              if(killer1[(signed long int)ply] == 0)
                killer1[(signed long int)ply] = pbest->move & (0x00200000 | 0x00400000 | 0x00007000 | 0x0FFF);

              else
                if(!((6324223 & pbest->move) == killer1[(signed long int)ply]))
                  killer2[(signed long int)ply] = pbest->move & (0x00200000 | 0x00400000 | 0x00007000 | 0x0FFF);

            }

          }

          return best;
        }
      }
    }
}

// SearchRoot
// file common.h line 645
signed int SearchRoot(signed short int depth, signed int alpha, signed int beta)
{
  signed int best;
  signed int score;
  signed int savealpha;
  unsigned char side;
  unsigned char xside;
  unsigned char ply;
  signed short int nodetype;
  struct anonymous *p;
  struct anonymous *pbest;
  ply = (unsigned char)1;
  side = (unsigned char)board.side;
  xside = (unsigned char)(1 ^ (signed int)side);
  ChkCnt[(signed long int)2] = ChkCnt[(signed long int)1];
  ThrtCnt[(signed long int)2] = ThrtCnt[(signed long int)1];
  signed int return_value_MateScan$1;
  return_value_MateScan$1=MateScan(0);
  KingThrt[(signed long int)0][(signed long int)ply] = (signed short int)return_value_MateScan$1;
  signed int return_value_MateScan$2;
  return_value_MateScan$2=MateScan(1);
  KingThrt[(signed long int)1][(signed long int)ply] = (signed short int)return_value_MateScan$2;
  InChk[(signed long int)ply]=SqAtakd(board.king[(signed long int)side], (signed short int)xside);
  if(!(InChk[(signed long int)ply] == 0))
  {
    if(!(ChkCnt[(signed long int)ply] >= 3 * Idepth))
    {
      ChkExtCnt = ChkExtCnt + 1ul;
      ChkCnt[(signed long int)((signed int)ply + 1)] = ChkCnt[(signed long int)((signed int)ply + 1)] + 1;
      depth = depth + (signed short int)1;
    }

  }

  best = -32767;
  savealpha = alpha;
  nodetype = (signed short int)0;
  pbest = (struct anonymous *)(void *)0;
  p = TreePtr[(signed long int)1];
  for( ; !(p >= TreePtr[2l]); p = p + 1l)
  {
    pick(p, (signed short int)1);
    ShowThinking(p, ply);
    MakeMove((signed int)side, &p->move);
    NodeCnt = NodeCnt + 1ul;
    if(p == TreePtr[1l])
    {
      signed int return_value_Search$3;
      return_value_Search$3=Search((unsigned char)2, (signed short int)((signed int)depth - 1), -beta, -alpha, nodetype);
      score = -return_value_Search$3;
      if(beta == 32767 && alpha >= score)
      {
        alpha = -32767;
        signed int return_value_Search$4;
        return_value_Search$4=Search((unsigned char)2, (signed short int)((signed int)depth - 1), -beta, -alpha, nodetype);
        score = -return_value_Search$4;
      }

    }

    else
    {
      nodetype = (signed short int)2;
      alpha = best > alpha ? best : alpha;
      signed int return_value_Search$5;
      return_value_Search$5=Search((unsigned char)2, (signed short int)((signed int)depth - 1), -alpha - 1, -alpha, nodetype);
      score = -return_value_Search$5;
      if(!(best >= score))
      {
        if(!(score >= beta) && !(alpha >= score))
        {
          nodetype = (signed short int)0;
          signed int return_value_Search$6;
          return_value_Search$6=Search((unsigned char)2, (signed short int)((signed int)depth - 1), -beta, -score, nodetype);
          score = -return_value_Search$6;
        }

      }

    }
    UnmakeMove((signed int)xside, &p->move);
    p->score = score;
    ply1score = p->score;
    if(!(best >= score))
    {
      best = score;
      pbest = p;
      if(!(alpha >= best))
      {
        rootscore = best;
        RootPV = p->move;
        if(best >= beta)
          goto done;

        ShowLine(RootPV, best, (char)38);
      }

    }

    if(!((16u & flags) == 0u))
    {
      best = ((signed int)ply & 1) != 0 ? rootscore : -rootscore;
      return best;
    }

    if((1023ul & NodeCnt) == 0ul && (SearchDepth == 0 || !((8192u & flags) == 0u)))
    {
      if(!((8192u & flags) == 0u))
      {
        if(!(input_status == 0))
          do
          {
            flags = flags | (unsigned int)0x0010;
            dbg_printf("Set   0x%x\n", 0x0010);
          }
          while((_Bool)0);

      }

      else
      {
        ElapsedTime=GetElapsed(StartTime);
        if(ElapsedTime >= (double)maxtime || ElapsedTime >= (double)SearchTime && (rootscore == -32768 || !((256u & flags) == 0u) || !(lastrootscore + -25 >= ply1score)))
          do
          {
            flags = flags | (unsigned int)0x0010;
            dbg_printf("Set   0x%x\n", 0x0010);
          }
          while((_Bool)0);

      }
    }

    if(best == 32767)
      return best;

  }
  if(savealpha >= best)
    TreePtr[(signed long int)1]->score = savealpha;


done:
  ;
  if(!(savealpha >= best))
    history[(signed long int)side][(signed long int)(pbest->move & 0x0FFF)] = history[(signed long int)side][(signed long int)(pbest->move & 0x0FFF)] + (unsigned long int)((signed int)depth * (signed int)depth);

  rootscore = best;
  return best;
}

// ShowBitBoard
// file common.h line 683
void ShowBitBoard(unsigned long int *b)
{
  signed int r;
  signed int c;
  printf("\n");
  r = 56;
  for( ; r >= 0; r = r - 8)
  {
    c = 0;
    for( ; !(c >= 8); c = c + 1)
      if(!((*b & BitPosArray[(signed long int)(c + r)]) == 0ul))
        printf("1 ");

      else
        printf(". ");
    printf("\n");
  }
  printf("\n");
}

// ShowBoard
// file common.h line 682
void ShowBoard(void)
{
  signed int r;
  signed int c;
  signed int sq;
  fprintf(ofp, "\n");
  if((signed int)board.side == 0)
    fprintf(ofp, "white  ");

  else
    fprintf(ofp, "black  ");
  if(!((0x0001 & (signed int)board.flag) == 0))
    fprintf(ofp, "K");

  if(!((0x0002 & (signed int)board.flag) == 0))
    fprintf(ofp, "Q");

  if(!((0x0004 & (signed int)board.flag) == 0))
    fprintf(ofp, "k");

  if(!((0x0008 & (signed int)board.flag) == 0))
    fprintf(ofp, "q");

  if((signed int)board.ep >= 0)
    fprintf(ofp, "  %s", (const void *)algbr[(signed long int)board.ep]);

  fprintf(ofp, "\n");
  r = 56;
  for( ; r >= 0; r = r - 8)
  {
    c = 0;
    for( ; !(c >= 8); c = c + 1)
    {
      sq = r + c;
      if(!((board.b[0l][1l] & BitPosArray[(signed long int)sq]) == 0ul))
        fprintf(ofp, "P ");

      else
        if(!((board.b[0l][2l] & BitPosArray[(signed long int)sq]) == 0ul))
          fprintf(ofp, "N ");

        else
          if(!((board.b[0l][3l] & BitPosArray[(signed long int)sq]) == 0ul))
            fprintf(ofp, "B ");

          else
            if(!((board.b[0l][4l] & BitPosArray[(signed long int)sq]) == 0ul))
              fprintf(ofp, "R ");

            else
              if(!((board.b[0l][5l] & BitPosArray[(signed long int)sq]) == 0ul))
                fprintf(ofp, "Q ");

              else
                if(!((board.b[0l][6l] & BitPosArray[(signed long int)sq]) == 0ul))
                  fprintf(ofp, "K ");

                else
                  if(!((board.b[1l][1l] & BitPosArray[(signed long int)sq]) == 0ul))
                    fprintf(ofp, "p ");

                  else
                    if(!((board.b[1l][2l] & BitPosArray[(signed long int)sq]) == 0ul))
                      fprintf(ofp, "n ");

                    else
                      if(!((board.b[1l][3l] & BitPosArray[(signed long int)sq]) == 0ul))
                        fprintf(ofp, "b ");

                      else
                        if(!((board.b[1l][4l] & BitPosArray[(signed long int)sq]) == 0ul))
                          fprintf(ofp, "r ");

                        else
                          if(!((board.b[1l][5l] & BitPosArray[(signed long int)sq]) == 0ul))
                            fprintf(ofp, "q ");

                          else
                            if(!((board.b[1l][6l] & BitPosArray[(signed long int)sq]) == 0ul))
                              fprintf(ofp, "k ");

                            else
                              fprintf(ofp, ". ");
    }
    fprintf(ofp, "\n");
  }
  fprintf(ofp, "\n");
}

// ShowCBoard
// file output.c line 226
void ShowCBoard(void)
{
  signed int r;
  signed int c;
  r = 56;
  signed int tmp_if_expr$1;
  for( ; r >= 0; r = r - 8)
  {
    c = 0;
    for( ; !(c >= 8); c = c + 1)
    {
      if(!(cboard[(signed long int)(c + r)] == 0))
        tmp_if_expr$1 = (signed int)notation[(signed long int)cboard[(signed long int)(r + c)]];

      else
        tmp_if_expr$1 = 46;
      printf("%2c ", tmp_if_expr$1);
    }
    printf("\n");
  }
  printf("\n");
}

// ShowGame
// file common.h line 687
void ShowGame(void)
{
  signed int i;
  if(GameCnt >= 0)
  {
    printf("      White   Black\n");
    if(GameCnt % 2 == 0 && (signed int)board.side == 1 || GameCnt % 2 == 1 && (signed int)board.side == 0)
    {
      i = 0;
      for( ; GameCnt >= i; i = i + 2)
        printf("%3d.  %-7s %-7s\n", i / 2 + 1, (const void *)Game[(signed long int)i].SANmv, (const void *)Game[(signed long int)(i + 1)].SANmv);
    }

    else
    {
      printf("  1.          %-7s\n", (const void *)Game[(signed long int)0].SANmv);
      i = 1;
      for( ; GameCnt >= i; i = i + 2)
        printf("%3d.  %-7s %-7s\n", i / 2 + 2, (const void *)Game[(signed long int)i].SANmv, (const void *)Game[(signed long int)(i + 1)].SANmv);
    }
    printf("\n");
  }

}

// ShowHashKey
// file hash.c line 81
void ShowHashKey(unsigned long int HashKey)
{
  unsigned long int a1;
  unsigned long int a2;
  a1 = HashKey & (unsigned long int)0xFFFFFFFF;
  a2 = HashKey >> 32;
  printf("Hashkey = %lx%lx\n", a2, a1);
}

// ShowLine
// file common.h line 649
void ShowLine(signed int move, signed int score, char c)
{
  signed int i;
  signed int len;
  signed int pvar[65l];
  signed int return_value_abs$2;
  signed int return_value_abs$4;
  signed int return_value_abs$6;
  signed int return_value_abs$8;
  signed short int return_value_TTGetPV$10;
  _Bool tmp_if_expr$12;
  signed int return_value_abs$11;
  _Bool tmp_if_expr$14;
  signed short int return_value_Repeat$13;
  if(!((4096u & flags) == 0u))
  {
    if((256u & flags) == 0u || NodeCnt >= 500000ul)
    {
      if(!(Idepth == 1) || !((signed int)c == 38))
      {
        if(!((signed int)c == 38) || (1024u & flags) == 0u)
        {
          if(!(rootscore == -32768))
          {
            ElapsedTime=GetElapsed(StartTime);
            if(!((1024u & flags) == 0u))
            {
              if(score >= 32513)
              {
                signed int return_value_abs$1;
                return_value_abs$1=abs(score);
                printf("%d%c Mat%d %d %ld\t", Idepth, c, (signed int)((32767 + 2) - return_value_abs$1) / 2, (signed int)ElapsedTime, NodeCnt + QuiesCnt);
                if(!(ofp == stdout))
                {
                  return_value_abs$2=abs(score);
                  fprintf(ofp, "%2d%c%7.2f  Mat%02d%10ld\t", Idepth, c, ElapsedTime, ((32767 + 2) - return_value_abs$2) / 2, NodeCnt + QuiesCnt);
                }

              }

              else
                if(!(score >= 255))
                {
                  signed int return_value_abs$3;
                  return_value_abs$3=abs(score);
                  printf("%d%c -Mat%2d %d %ld\t", Idepth, c, (signed int)((32767 + 2) - return_value_abs$3) / 2, (signed int)ElapsedTime, NodeCnt + QuiesCnt);
                  if(!(ofp == stdout))
                  {
                    return_value_abs$4=abs(score);
                    fprintf(ofp, "%2d%c%7.2f -Mat%02d%10ld\t", Idepth, c, ElapsedTime, ((32767 + 2) - return_value_abs$4) / 2, NodeCnt + QuiesCnt);
                  }

                }

                else
                {
                  printf("%d%c %d %d %ld\t", Idepth, c, (signed int)score, (signed int)ElapsedTime, NodeCnt + QuiesCnt);
                  if(!(ofp == stdout))
                    fprintf(ofp, "%2d%c%7.2f%7d%10ld\t", Idepth, c, ElapsedTime, score, NodeCnt + QuiesCnt);

                }
            }

            else
              if(score >= 32513)
              {
                signed int return_value_abs$5;
                return_value_abs$5=abs(score);
                printf("\r%2d%c%7.2f  Mat%02d%10ld\t", Idepth, c, ElapsedTime, ((32767 + 2) - return_value_abs$5) / 2, NodeCnt + QuiesCnt);
                if(!(ofp == stdout))
                {
                  return_value_abs$6=abs(score);
                  fprintf(ofp, "\r%2d%c%7.2f  Mat%02d%10ld\t", Idepth, c, ElapsedTime, ((32767 + 2) - return_value_abs$6) / 2, NodeCnt + QuiesCnt);
                }

              }

              else
                if(!(score >= 255))
                {
                  signed int return_value_abs$7;
                  return_value_abs$7=abs(score);
                  printf("\r%2d%c%7.2f -Mat%02d%10ld\t", Idepth, c, ElapsedTime, ((32767 + 2) - return_value_abs$7) / 2, NodeCnt + QuiesCnt);
                  if(!(ofp == stdout))
                  {
                    return_value_abs$8=abs(score);
                    fprintf(ofp, "\r%2d%c%7.2f -Mat%02d%10ld\t", Idepth, c, ElapsedTime, ((32767 + 2) - return_value_abs$8) / 2, NodeCnt + QuiesCnt);
                  }

                }

                else
                {
                  printf("\r%2d%c%7.2f%7d%10ld\t", Idepth, c, ElapsedTime, score, NodeCnt + QuiesCnt);
                  if(!(ofp == stdout))
                    fprintf(ofp, "\r%2d%c%7.2f%7d%10ld\t", Idepth, c, ElapsedTime, score, NodeCnt + QuiesCnt);

                }
            if((signed int)c == 45)
            {
              printf("\n");
              if(!(ofp == stdout))
                fprintf(ofp, "\n");

              goto __CPROVER_DUMP_L36;
            }

            else
              if((signed int)c == 43)
              {
                SANMove(RootPV, 1);
                printf(" %s\n", (const void *)SANmv);
                if(!(ofp == stdout))
                  fprintf(ofp, " %s\n", (const void *)SANmv);

                goto __CPROVER_DUMP_L36;
              }

            SANMove(RootPV, 1);
            printf(" %s", (const void *)SANmv);
            if(!(ofp == stdout))
              fprintf(ofp, " %s", (const void *)SANmv);

            MakeMove((signed int)board.side, &RootPV);
            TreePtr[(signed long int)3] = TreePtr[(signed long int)2];
            GenMoves((signed short int)2);
            unsigned long int return_value_strlen$9;
            return_value_strlen$9=strlen(SANmv);
            len = (signed int)return_value_strlen$9;
            i = 2;
            pvar[(signed long int)1] = RootPV;
            if(!((128u & flags) == 0u))
              do
              {
                return_value_TTGetPV$10=TTGetPV((unsigned char)board.side, (unsigned char)i, rootscore, &pvar[(signed long int)i]);
                if(return_value_TTGetPV$10 == 0)
                  break;

                if(score >= 32513 || !(score >= 255))
                {
                  return_value_abs$11=abs(score);
                  tmp_if_expr$12 = return_value_abs$11 == (32767 + 2) - i ? (_Bool)1 : (_Bool)0;
                }

                else
                  tmp_if_expr$12 = (_Bool)0;
                if(tmp_if_expr$12)
                  tmp_if_expr$14 = (_Bool)1;

                else
                {
                  return_value_Repeat$13=Repeat();
                  tmp_if_expr$14 = return_value_Repeat$13 != 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$14)
                  break;

                if(len >= 32)
                {
                  printf("\n\t\t\t\t");
                  if(!(ofp == stdout))
                    fprintf(ofp, "\n\t\t\t\t");

                  len = 0;
                }

                SANMove(pvar[(signed long int)i], i);
                printf(" %s", (const void *)SANmv);
                if(!(ofp == stdout))
                  fprintf(ofp, " %s", (const void *)SANmv);

                MakeMove((signed int)board.side, &pvar[(signed long int)i]);
                TreePtr[(signed long int)(i + 2)] = TreePtr[(signed long int)(i + 1)];
                i = i + 1;
                GenMoves((signed short int)i);
                unsigned long int return_value_strlen$15;
                return_value_strlen$15=strlen(SANmv);
                len = len + (signed int)return_value_strlen$15;
              }
              while((_Bool)1);

            printf("\n");
            if(!(ofp == stdout))
              fprintf(ofp, "\n");

            i = i - 1;
            for( ; !(i == 0); i = i - 1)
              UnmakeMove((signed int)board.side, &pvar[(signed long int)i]);
            fflush(stdout);
            if(!(ofp == stdout))
              fflush(ofp);

          }

        }

      }

    }

  }


__CPROVER_DUMP_L36:
  ;
}

// ShowMoveList
// file common.h line 680
void ShowMoveList(signed int ply)
{
  struct anonymous *ShowMoveList$$1$$node;
  signed int i = 0;
  ShowMoveList$$1$$node = TreePtr[(signed long int)ply];
  for( ; !(ShowMoveList$$1$$node >= TreePtr[(signed long int)(1 + ply)]); ShowMoveList$$1$$node = ShowMoveList$$1$$node + 1l)
  {
    SANMove(ShowMoveList$$1$$node->move, ply);
    signed int return_value_SwapOff$1;
    return_value_SwapOff$1=SwapOff(ShowMoveList$$1$$node->move);
    printf("%5s %3d\t", (const void *)SANmv, return_value_SwapOff$1);
    i = i + 1;
    if(i == 5)
    {
      printf("\n");
      i = 0;
    }

  }
  printf("\n");
}

// ShowMvboard
// file output.c line 247
void ShowMvboard(void)
{
  signed int r;
  signed int c;
  r = 56;
  for( ; r >= 0; r = r - 8)
  {
    c = 0;
    for( ; !(c >= 8); c = c + 1)
      printf("%2d ", Mvboard[(signed long int)(r + c)]);
    printf("\n");
  }
  printf("\n");
}

// ShowSmallBoard
// file output.c line 67
void ShowSmallBoard(void)
{
  signed int r;
  signed int c;
  signed int sq;
  printf("\n");
  if((signed int)board.side == 0)
    printf("white  ");

  else
    printf("black  ");
  if(!((0x0001 & (signed int)board.flag) == 0))
    printf("K");

  if(!((0x0002 & (signed int)board.flag) == 0))
    printf("Q");

  if(!((0x0004 & (signed int)board.flag) == 0))
    printf("k");

  if(!((0x0008 & (signed int)board.flag) == 0))
    printf("q");

  if((signed int)board.ep >= 0)
    printf("  %s", (const void *)algbr[(signed long int)board.ep]);

  printf("\n");
  r = 56;
  for( ; r >= 0; r = r - 8)
  {
    c = 0;
    for( ; !(c >= 8); c = c + 1)
    {
      sq = r + c;
      if(!((board.b[0l][1l] & BitPosArray[(signed long int)sq]) == 0ul))
        printf("P ");

      else
        if(!((board.b[0l][2l] & BitPosArray[(signed long int)sq]) == 0ul))
          printf("N ");

        else
          if(!((board.b[0l][3l] & BitPosArray[(signed long int)sq]) == 0ul))
            printf("B ");

          else
            if(!((board.b[0l][4l] & BitPosArray[(signed long int)sq]) == 0ul))
              printf("R ");

            else
              if(!((board.b[0l][5l] & BitPosArray[(signed long int)sq]) == 0ul))
                printf("Q ");

              else
                if(!((board.b[0l][6l] & BitPosArray[(signed long int)sq]) == 0ul))
                  printf("K ");

                else
                  if(!((board.b[1l][1l] & BitPosArray[(signed long int)sq]) == 0ul))
                    printf("p ");

                  else
                    if(!((board.b[1l][2l] & BitPosArray[(signed long int)sq]) == 0ul))
                      printf("n ");

                    else
                      if(!((board.b[1l][3l] & BitPosArray[(signed long int)sq]) == 0ul))
                        printf("b ");

                      else
                        if(!((board.b[1l][4l] & BitPosArray[(signed long int)sq]) == 0ul))
                          printf("r ");

                        else
                          if(!((board.b[1l][5l] & BitPosArray[(signed long int)sq]) == 0ul))
                            printf("q ");

                          else
                            if(!((board.b[1l][6l] & BitPosArray[(signed long int)sq]) == 0ul))
                              printf("k ");

                            else
                              printf(". ");
    }
    printf("\n");
  }
  printf("\n");
}

// ShowThinking
// file search.c line 39
static inline void ShowThinking(struct anonymous *p, unsigned char ply)
{
  if((1024u & flags) == 0u)
  {
    if(!((4096u & flags) == 0u))
    {
      if((256u & flags) == 0u || NodeCnt >= 500000ul)
      {
        SANMove(p->move, (signed int)ply);
        printf("\r%2d.         %2d/%2d%10s    ", Idepth, (signed int)((p - TreePtr[(signed long int)ply]) + (signed long int)1), (signed int)(TreePtr[(signed long int)((signed int)ply + 1)] - TreePtr[(signed long int)ply]), (const void *)SANmv);
        fflush(stdout);
      }

    }

  }

}

// ShowTime
// file common.h line 688
void ShowTime(void)
{
  ;
}

// Solve
// file common.h line 695
void Solve(char *file)
{
  signed int total;
  signed int correct;
  signed int found;
  signed long int TotalNodes;
  char *p;
  correct = 0;
  total = correct;
  TotalNodes = (signed long int)0;
  do
  {
    flags = flags | (unsigned int)0x0100;
    dbg_printf("Set   0x%x\n", 0x0100);
  }
  while((_Bool)0);
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile(file, (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    NewPosition();
    total = total + 1;
    ShowBoard();
    Iterate();
    TotalNodes = TotalNodes + (signed long int)(NodeCnt + QuiesCnt);
    p = solution;
    found = 0;
    while(!((signed int)*p == 0))
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(SANmv);
      signed int return_value_strncmp$3;
      return_value_strncmp$3=strncmp(p, SANmv, return_value_strlen$2);
      if(return_value_strncmp$3 == 0)
      {
        correct = correct + 1;
        found = 1;
        break;
      }

      for( ; !((signed int)*p == 32); p = p + 1l)
        if((signed int)*p == 0)
          break;

      for( ; (signed int)*p == 32; p = p + 1l)
        if((signed int)*p == 0)
          break;

    }
    printf("%s : ", (const void *)id);
    printf(found != 0 ? "Correct:  " : "Incorrect:  ");
    printf("%s %s\n", (const void *)SANmv, (const void *)solution);
    printf("Correct=%d Total=%d\n", correct, total);
  }
  while((_Bool)1);
  printf("\nTotal nodes = %ld\n", TotalNodes);
  do
  {
    flags = flags & (unsigned int)~0x0100;
    dbg_printf("Clear 0x%x\n", 0x0100);
  }
  while((_Bool)0);
}

// SortCaptures
// file common.h line 673
void SortCaptures(signed int ply)
{
  struct anonymous *p;
  signed int temp;
  signed int f;
  signed int t;
  p = TreePtr[(signed long int)ply];
  for( ; !(p >= TreePtr[(signed long int)(1 + ply)]); p = p + 1l)
  {
    f = Value[(signed long int)cboard[(signed long int)(p->move >> 6 & 0x003F)]];
    t = Value[(signed long int)cboard[(signed long int)(p->move & 0x003F)]];
    if(!(f >= t))
      p->score = t - f;

    else
    {
      temp=SwapOff(p->move);
      p->score = temp < 0 ? -32767 : temp;
    }
  }
}

// SortMoves
// file common.h line 674
void SortMoves(signed int ply)
{
  struct anonymous *p;
  signed int f;
  signed int t;
  signed int m;
  signed int tovalue;
  signed int side;
  signed int xside;
  unsigned long int enemyP;
  side = (signed int)board.side;
  xside = 1 ^ side;
  enemyP = board.b[(signed long int)xside][(signed long int)1];
  p = TreePtr[(signed long int)ply];
  _Bool tmp_if_expr$3;
  _Bool tmp_if_expr$2;
  _Bool tmp_if_expr$1;
  for( ; !(p >= TreePtr[(signed long int)(1 + ply)]); p = p + 1l)
  {
    p->score = -32767;
    f = p->move >> 6 & 0x003F;
    t = p->move & 0x003F;
    m = p->move & (0x00200000 | 0x00400000 | 0x00007000 | 0x0FFF);
    if(m == Hashmv[(signed long int)ply])
      p->score = p->score + 32767;

    else
    {
      if(!(cboard[(signed long int)t] == 0))
        tmp_if_expr$3 = (_Bool)1;

      else
        tmp_if_expr$3 = (p->move & 0x00007000) != 0 ? (_Bool)1 : (_Bool)0;
      if(tmp_if_expr$3)
      {
        tovalue = Value[(signed long int)cboard[(signed long int)t]] + Value[(signed long int)(p->move >> 12 & 0x0007)];
        p->score = p->score + ((tovalue + 2000) - Value[(signed long int)cboard[(signed long int)f]]);
      }

      else
      {
        if(m == killer1[(signed long int)ply])
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = m == killer2[(signed long int)ply] ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$2)
          p->score = p->score + 1000;

        else
          if(ply >= 3)
          {
            if(m == killer1[(signed long int)(ply + -2)])
              tmp_if_expr$1 = (_Bool)1;

            else
              tmp_if_expr$1 = m == killer2[(signed long int)(ply - 2)] ? (_Bool)1 : (_Bool)0;
            if(tmp_if_expr$1)
              p->score = p->score + 1000;

          }

      }
    }
    p->score = p->score + (signed int)((history[(signed long int)side][(signed long int)(p->move & 0x0FFF)] + (unsigned long int)taxicab[(signed long int)f][(signed long int)35]) - (unsigned long int)taxicab[(signed long int)t][(signed long int)28]);
    if(cboard[(signed long int)f] == 1)
    {
      if((PassedPawnMask[(signed long int)side][(signed long int)t] & enemyP) == 0x0000000000000000ULL)
        p->score = p->score + 50;

    }

  }
}

// SortRoot
// file common.h line 675
void SortRoot(void)
{
  struct anonymous *p;
  signed int f;
  signed int t;
  signed int side;
  signed int xside;
  unsigned long int enemyP;
  side = (signed int)board.side;
  xside = 1 ^ side;
  enemyP = board.b[(signed long int)xside][(signed long int)1];
  p = TreePtr[(signed long int)1];
  _Bool tmp_if_expr$3;
  signed int return_value_SwapOff$1;
  signed int return_value_SwapOff$2;
  for( ; !(p >= TreePtr[2l]); p = p + 1l)
  {
    f = Value[(signed long int)cboard[(signed long int)(p->move >> 6 & 0x003F)]];
    if(!(cboard[(signed long int)(0x003F & p->move)] == 0))
      tmp_if_expr$3 = (_Bool)1;

    else
      tmp_if_expr$3 = (p->move & 0x00007000) != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$3)
    {
      t = Value[(signed long int)cboard[(signed long int)(p->move & 0x003F)]];
      if(!(f >= t))
        p->score = (-1000 + t) - f;

      else
      {
        return_value_SwapOff$1=SwapOff(p->move);
        p->score = -1000 + return_value_SwapOff$1;
      }
    }

    else
    {
      return_value_SwapOff$2=SwapOff(p->move);
      p->score = -3000 + return_value_SwapOff$2;
    }
    p->score = p->score + ((signed int)taxicab[(signed long int)(p->move >> 6 & 0x003F)][(signed long int)35] - (signed int)taxicab[(signed long int)(p->move & 0x003F)][(signed long int)28]);
    if(f == 100)
    {
      if((PassedPawnMask[(signed long int)side][(signed long int)(0x003F & p->move)] & enemyP) == 0x0000000000000000ULL)
        p->score = p->score + 50;

    }

  }
}

// SqAtakd
// file atak.c line 33
signed short int SqAtakd(signed short int sq, signed short int side)
{
  unsigned long int *a;
  unsigned long int b;
  unsigned long int *c;
  unsigned long int d;
  unsigned long int blocker;
  signed int t;
  a = board.b[(signed long int)side];
  if(!((a[2l] & MoveArray[2l][(signed long int)sq]) == 0ul))
    return (signed short int)1;

  else
    if(!((a[6l] & MoveArray[6l][(signed long int)sq]) == 0ul))
      return (signed short int)1;

    else
      if(!((a[1l] & MoveArray[(signed long int)ptype[(signed long int)(1 ^ (signed int)side)]][(signed long int)sq]) == 0ul))
        return (signed short int)1;

      else
      {
        c = FromToRay[(signed long int)sq];
        blocker = board.blocker;
        b = (a[(signed long int)3] | a[(signed long int)5]) & MoveArray[(signed long int)3][(signed long int)sq];
        d = ~b & blocker;
        while(!(b == 0ul))
        {
          unsigned char return_value_leadz$1;
          return_value_leadz$1=leadz(b);
          t = (signed int)return_value_leadz$1;
          if((c[(signed long int)t] & d) == 0ul)
            return (signed short int)1;

          b = b & NotBitPosArray[(signed long int)t];
        }
        b = (a[(signed long int)4] | a[(signed long int)5]) & MoveArray[(signed long int)4][(signed long int)sq];
        d = ~b & blocker;
        while(!(b == 0ul))
        {
          unsigned char return_value_leadz$2;
          return_value_leadz$2=leadz(b);
          t = (signed int)return_value_leadz$2;
          if((c[(signed long int)t] & d) == 0ul)
            return (signed short int)1;

          b = b & NotBitPosArray[(signed long int)t];
        }
        return (signed short int)0;
      }
}

// StartTiming
// file iterate.c line 370
struct timeval StartTiming(void)
{
  struct timeval t;
  gettimeofday(&t, (struct timezone *)(void *)0);
  return t;
}

// SwapOff
// file common.h line 596
signed int SwapOff(signed int move)
{
  signed int f;
  signed int t;
  signed int sq;
  signed int piece;
  signed int lastval;
  signed int side;
  signed int xside;
  signed int swaplist[65l];
  signed int SwapOff$$1$$n;
  unsigned long int b;
  unsigned long int c;
  unsigned long int *d;
  unsigned long int *e;
  unsigned long int r;
  f = move >> 6 & 0x003F;
  t = move & 0x003F;
  side = (board.friends[(signed long int)0] & BitPosArray[(signed long int)f]) != 0ul ? 0 : 1;
  xside = 1 ^ side;
  b=AttackTo(t, side);
  c=AttackTo(t, xside);
  b = b & NotBitPosArray[(signed long int)f];
  if(!(xray[(signed long int)cboard[(signed long int)f]] == 0))
    AddXrayPiece(t, f, side, &b, &c);

  d = board.b[(signed long int)side];
  e = board.b[(signed long int)xside];
  signed int tmp_if_expr$1;
  if(!((0x00007000 & move) == 0))
  {
    swaplist[(signed long int)0] = Value[(signed long int)(move >> 12 & 0x0007)] - 100;
    lastval = -Value[(signed long int)(move >> 12 & 0x0007)];
  }

  else
  {
    if(!((0x00400000 & move) == 0))
      tmp_if_expr$1 = 100;

    else
      tmp_if_expr$1 = Value[(signed long int)cboard[(signed long int)t]];
    swaplist[(signed long int)0] = tmp_if_expr$1;
    lastval = -Value[(signed long int)cboard[(signed long int)f]];
  }
  SwapOff$$1$$n = 1;
  while((_Bool)1)
  {
    if(c == 0x0000000000000000ULL)
      break;

    piece = 1;
    for( ; !(piece >= 7); piece = piece + 1)
    {
      r = c & e[(signed long int)piece];
      if(!(r == 0ul))
      {
        unsigned char return_value_leadz$2;
        return_value_leadz$2=leadz$link6(r);
        sq = (signed int)return_value_leadz$2;
        c = c & NotBitPosArray[(signed long int)sq];
        if(!(xray[(signed long int)piece] == 0))
          AddXrayPiece(t, sq, xside, &c, &b);

        swaplist[(signed long int)SwapOff$$1$$n] = swaplist[(signed long int)(SwapOff$$1$$n - 1)] + lastval;
        SwapOff$$1$$n = SwapOff$$1$$n + 1;
        lastval = Value[(signed long int)piece];
        break;
      }

    }
    if(b == 0x0000000000000000ULL)
      break;

    piece = 1;
    for( ; !(piece >= 7); piece = piece + 1)
    {
      r = b & d[(signed long int)piece];
      if(!(r == 0ul))
      {
        unsigned char return_value_leadz$3;
        return_value_leadz$3=leadz$link6(r);
        sq = (signed int)return_value_leadz$3;
        b = b & NotBitPosArray[(signed long int)sq];
        if(!(xray[(signed long int)piece] == 0))
          AddXrayPiece(t, sq, side, &b, &c);

        swaplist[(signed long int)SwapOff$$1$$n] = swaplist[(signed long int)(SwapOff$$1$$n - 1)] + lastval;
        SwapOff$$1$$n = SwapOff$$1$$n + 1;
        lastval = -Value[(signed long int)piece];
        break;
      }

    }
  }
  SwapOff$$1$$n = SwapOff$$1$$n - 1;
  for( ; !(SwapOff$$1$$n == 0); SwapOff$$1$$n = SwapOff$$1$$n - 1)
    if(!((1 & SwapOff$$1$$n) == 0))
    {
      if(swaplist[(signed long int)(SwapOff$$1$$n + -1)] >= swaplist[(signed long int)SwapOff$$1$$n])
        swaplist[(signed long int)(SwapOff$$1$$n - 1)] = swaplist[(signed long int)SwapOff$$1$$n];

    }

    else
      if(swaplist[(signed long int)SwapOff$$1$$n] >= swaplist[(signed long int)(SwapOff$$1$$n + -1)])
        swaplist[(signed long int)(SwapOff$$1$$n - 1)] = swaplist[(signed long int)SwapOff$$1$$n];

  return swaplist[(signed long int)0];
}

// TTClear
// file common.h line 669
void TTClear(void)
{
  memset((void *)HashTab[(signed long int)0], 0, (unsigned long int)HashSize * sizeof(struct anonymous$0) /*24ul*/ );
  memset((void *)HashTab[(signed long int)1], 0, (unsigned long int)HashSize * sizeof(struct anonymous$0) /*24ul*/ );
}

// TTGet
// file common.h line 666
unsigned char TTGet(unsigned char side, unsigned char depth, unsigned char ply, signed int *score, signed int *move)
{
  struct anonymous$0 *t;
  TotalGetHashCnt = TotalGetHashCnt + 1ul;
  t = HashTab[(signed long int)side] + (signed long int)(HashKey & TTHashMask & (unsigned long int)~1);
  _Bool tmp_if_expr$1;
  _Bool tmp_if_expr$2;
  if(!(HashKey == t->key))
  {
    t = t + 1l;
    if(HashKey == t->key)
      goto __CPROVER_DUMP_L1;

    return (unsigned char)0;
  }

  else
  {

  __CPROVER_DUMP_L1:
    ;
    GoodGetHashCnt = GoodGetHashCnt + 1ul;
    *move = t->move;
    *score = t->score;
    if((signed int)t->depth == 0)
      return (unsigned char)5;

    else
      if(!((signed int)t->depth >= (signed int)depth))
      {
        if(t->score >= 32513)
          tmp_if_expr$1 = (_Bool)1;

        else
          tmp_if_expr$1 = t->score < -32767 + 255 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$1)
          goto __CPROVER_DUMP_L5;

        return (unsigned char)4;
      }

      else
      {

      __CPROVER_DUMP_L5:
        ;
        if(*score >= 32513)
          tmp_if_expr$2 = (_Bool)1;

        else
          tmp_if_expr$2 = *score < -32767 + 255 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$2)
          *score = *score - (*score > 0 ? (signed int)ply : -((signed int)ply));

        return t->flag;
      }
  }
}

// TTGetPV
// file common.h line 668
signed short int TTGetPV(unsigned char side, unsigned char ply, signed int score, signed int *move)
{
  struct anonymous$0 *t;
  signed int s;
  t = HashTab[(signed long int)side] + (signed long int)(HashKey & TTHashMask & (unsigned long int)~1);
  s = t->score;
  if(s >= 32513 || !(s >= 255))
    s = s - (s > 0 ? (signed int)ply : -((signed int)ply));

  if(HashKey == t->key)
  {
    if((!((1 & (signed int)ply) == 0) || !(score == -s)) && (!(score == s) || (1 & (signed int)ply) == 0))
      goto __CPROVER_DUMP_L2;

    *move = t->move;
    return (signed short int)1;
  }

  else
  {

  __CPROVER_DUMP_L2:
    ;
    t = t + 1l;
    s = t->score;
    if(s >= 32513 || !(s >= 255))
      s = s - (s > 0 ? (signed int)ply : -((signed int)ply));

    if(HashKey == t->key)
    {
      if((!((1 & (signed int)ply) == 0) || !(score == -s)) && (!(score == s) || (1 & (signed int)ply) == 0))
        goto __CPROVER_DUMP_L4;

      *move = t->move;
      return (signed short int)1;
    }

    else
    {

    __CPROVER_DUMP_L4:
      ;
      return (signed short int)0;
    }
  }
}

// TTPut
// file common.h line 663
void TTPut(unsigned char side, unsigned char depth, unsigned char ply, signed int alpha, signed int beta, signed int score, signed int move)
{
  struct anonymous$0 *t = HashTab[(signed long int)side] + (signed long int)(HashKey & TTHashMask & (unsigned long int)~1);
  if(!((signed int)depth >= (signed int)t->depth))
    t = t + 1l;

  else
    if(!(t->flag == 0))
      t[(signed long int)1] = *t;

  if(!(t->flag == 0))
    CollHashCnt = CollHashCnt + 1ul;

  TotalPutHashCnt = TotalPutHashCnt + 1ul;
  t->move = move;
  t->key = HashKey;
  t->depth = depth;
  if((signed int)t->depth == 0)
    t->flag = (unsigned char)5;

  else
    if(score >= beta)
      t->flag = (unsigned char)2;

    else
      if(alpha >= score)
        t->flag = (unsigned char)3;

      else
        t->flag = (unsigned char)1;
  if(score >= 32513 || !(score >= 255))
    t->score = score + (score > 0 ? (signed int)ply : -((signed int)ply));

  else
    t->score = score;
}

// TestCaptureGenSpeed
// file common.h line 700
void TestCaptureGenSpeed(void)
{
  unsigned long int i;
  struct timeval t1;
  struct timeval t2;
  double et;
  GenCnt = (unsigned long int)0;
  et = (double)0;
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile("../test/wac.epd", (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    gettimeofday(&t1, (struct timezone *)(void *)0);
    i = (unsigned long int)0;
    for( ; !(i >= 200000ul); i = i + 1ul)
    {
      TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
      GenCaptures((signed short int)1);
    }
    gettimeofday(&t2, (struct timezone *)(void *)0);
    et = et + (double)(t2.tv_sec - t1.tv_sec) + (double)(t2.tv_usec - t1.tv_usec) / 1e6;
    printf("Time = %f\n", et);
  }
  while((_Bool)1);
  printf("No. of moves generated = %lu\n", GenCnt);
  printf("Time taken = %f\n", et);
  if(et > 0.000000)
    printf("Rate = %f\n", (double)GenCnt / et);

}

// TestCaptureList
// file common.h line 703
void TestCaptureList(void)
{
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile("TEST/GMG1.epd", (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    ShowBoard();
    GenCnt = (unsigned long int)0;
    TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
    GenCaptures((signed short int)1);
    FilterIllegalMoves((signed short int)1);
    ShowMoveList(1);
    printf("No. of moves generated = %lu\n\n", GenCnt);
  }
  while((_Bool)1);
}

// TestEval
// file common.h line 705
void TestEval(void)
{
  signed int score;
  do
  {
    flags = flags | (unsigned int)0x0002;
    dbg_printf("Set   0x%x\n", 0x0002);
  }
  while((_Bool)0);
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile("../test/wac.epd", (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    ShowBoard();
    score=Evaluate(-32767, 32767);
    printf((signed int)board.side == 0 ? "W : " : "B : ");
    printf("score = %d\n\n", score);
  }
  while((_Bool)1);
  do
  {
    flags = flags & (unsigned int)~0x0002;
    dbg_printf("Clear 0x%x\n", 0x0002);
  }
  while((_Bool)0);
}

// TestEvalSpeed
// file common.h line 704
void TestEvalSpeed(void)
{
  unsigned long int i;
  struct timeval t1;
  struct timeval t2;
  double et = (double)0;
  EvalCnt = (unsigned long int)0;
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile("../test/wac.epd", (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    gettimeofday(&t1, (struct timezone *)(void *)0);
    i = (unsigned long int)0;
    for( ; !(i >= 30000ul); i = i + 1ul)
      Evaluate(-32767, 32767);
    gettimeofday(&t2, (struct timezone *)(void *)0);
    et = et + (double)(t2.tv_sec - t1.tv_sec) + (double)(t2.tv_usec - t1.tv_usec) / 1e6;
    printf("Time = %f\n", et);
  }
  while((_Bool)1);
  printf("No. of positions evaluated = %lu\n", EvalCnt);
  printf("Time taken = %f\n", et);
  if(et > 0.000000)
    printf("Rate = %f\n", (double)EvalCnt / et);

}

// TestMoveGenSpeed
// file common.h line 698
void TestMoveGenSpeed(void)
{
  unsigned long int i;
  struct timeval t1;
  struct timeval t2;
  double et;
  GenCnt = (unsigned long int)0;
  et = (double)0;
  gettimeofday(&t1, (struct timezone *)(void *)0);
  i = (unsigned long int)0;
  for( ; !(i >= 2000000ul); i = i + 1ul)
  {
    TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
    GenMoves((signed short int)1);
  }
  gettimeofday(&t2, (struct timezone *)(void *)0);
  et = et + (double)(t2.tv_sec - t1.tv_sec) + (double)(t2.tv_usec - t1.tv_usec) / 1e6;
  printf("Time = %f\n", et);
  printf("No. of moves generated = %lu\n", GenCnt);
  printf("Time taken = %f secs\n", et);
  if(et > 0.000000)
    printf("Rate = %f moves/sec.\n", (double)GenCnt / et);

}

// TestMoveList
// file common.h line 701
void TestMoveList(void)
{
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile("TEST/GMG1.epd", (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    ShowBoard();
    GenCnt = (unsigned long int)0;
    TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
    GenMoves((signed short int)1);
    FilterIllegalMoves((signed short int)1);
    ShowMoveList(1);
    printf("No. of moves generated = %lu\n\n", GenCnt);
  }
  while((_Bool)1);
}

// TestNonCaptureGenSpeed
// file test.c line 72
void TestNonCaptureGenSpeed(void)
{
  unsigned long int i;
  struct timeval t1;
  struct timeval t2;
  double et;
  GenCnt = (unsigned long int)0;
  et = (double)0;
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile("../test/wac.epd", (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    gettimeofday(&t1, (struct timezone *)(void *)0);
    i = (unsigned long int)0;
    for( ; !(i >= 100000ul); i = i + 1ul)
    {
      TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
      GenNonCaptures((signed short int)1);
    }
    gettimeofday(&t2, (struct timezone *)(void *)0);
    et = et + (double)(t2.tv_sec - t1.tv_sec) + (double)(t2.tv_usec - t1.tv_usec) / 1e6;
    printf("Time = %f\n", et);
  }
  while((_Bool)1);
  printf("No. of moves generated = %lu\n", GenCnt);
  printf("Time taken = %f\n", et);
  if(et > 0.000000)
    printf("Rate = %f\n", (double)GenCnt / et);

}

// TestNonCaptureList
// file test.c line 163
void TestNonCaptureList(void)
{
  signed short int return_value_ReadEPDFile$1;
  do
  {
    return_value_ReadEPDFile$1=ReadEPDFile("TEST/GMG1.epd", (signed short int)0);
    if(return_value_ReadEPDFile$1 == 0)
      break;

    ShowBoard();
    GenCnt = (unsigned long int)0;
    TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
    GenNonCaptures((signed short int)1);
    FilterIllegalMoves((signed short int)1);
    ShowMoveList(1);
    printf("No. of moves generated = %lu\n\n", GenCnt);
  }
  while((_Bool)1);
}

// UnmakeMove
// file common.h line 575
void UnmakeMove(signed int side, signed int *move)
{
  unsigned long int *a;
  signed int f;
  signed int t;
  signed int fpiece;
  signed int cpiece;
  signed int rookf;
  signed int rookt;
  signed int epsq;
  signed int xside;
  struct anonymous$6 *g;
  side = 1 ^ side;
  xside = 1 ^ side;
  f = *move >> 6 & 0x003F;
  t = *move & 0x003F;
  fpiece = cboard[(signed long int)t];
  cpiece = *move >> 15 & 0x0007;
  a = &board.b[(signed long int)side][(signed long int)fpiece];
  *a = *a & NotBitPosArray[(signed long int)t];
  *a = *a | BitPosArray[(signed long int)f];
  board.blockerr90 = board.blockerr90 & NotBitPosArray[(signed long int)r90[(signed long int)t]];
  board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)f]];
  board.blockerr45 = board.blockerr45 & NotBitPosArray[(signed long int)r45[(signed long int)t]];
  board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)f]];
  board.blockerr315 = board.blockerr315 & NotBitPosArray[(signed long int)r315[(signed long int)t]];
  board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)f]];
  cboard[(signed long int)f] = cboard[(signed long int)t];
  cboard[(signed long int)t] = 0;
  g = &Game[(signed long int)GameCnt];
  Mvboard[(signed long int)f] = Mvboard[(signed long int)t] - 1;
  Mvboard[(signed long int)t] = (signed int)g->mvboard;
  if(fpiece == 6)
    board.king[(signed long int)side] = (signed short int)f;

  if(!((0x00038000 & *move) == 0))
  {
    ExchCnt[(signed long int)side] = ExchCnt[(signed long int)side] - 1;
    board.b[(signed long int)xside][(signed long int)cpiece] = board.b[(signed long int)xside][(signed long int)cpiece] | BitPosArray[(signed long int)t];
    board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)t]];
    board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)t]];
    board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)t]];
    cboard[(signed long int)t] = cpiece;
    board.material[(signed long int)xside] = board.material[(signed long int)xside] + (signed short int)Value[(signed long int)cpiece];
    if(!(cpiece == 1))
      board.pmaterial[(signed long int)xside] = board.pmaterial[(signed long int)xside] + (signed short int)Value[(signed long int)cpiece];

  }

  if(!((0x00007000 & *move) == 0))
  {
    *a = *a & NotBitPosArray[(signed long int)f];
    board.b[(signed long int)side][(signed long int)1] = board.b[(signed long int)side][(signed long int)1] | BitPosArray[(signed long int)f];
    cboard[(signed long int)f] = 1;
    board.material[(signed long int)side] = board.material[(signed long int)side] + (signed short int)(100 - Value[(signed long int)(*move >> 12 & 0x0007)]);
    board.pmaterial[(signed long int)side] = board.pmaterial[(signed long int)side] - (signed short int)Value[(signed long int)(*move >> 12 & 0x0007)];
  }

  signed int tmp_if_expr$1;
  if(!((0x00400000 & *move) == 0))
  {
    ExchCnt[(signed long int)side] = ExchCnt[(signed long int)side] - 1;
    if(side == 0)
      tmp_if_expr$1 = (signed int)g->epsq - 8;

    else
      tmp_if_expr$1 = (signed int)g->epsq + 8;
    epsq = tmp_if_expr$1;
    board.b[(signed long int)xside][(signed long int)1] = board.b[(signed long int)xside][(signed long int)1] | BitPosArray[(signed long int)epsq];
    board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)epsq]];
    board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)epsq]];
    board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)epsq]];
    cboard[(signed long int)epsq] = 1;
    board.material[(signed long int)xside] = board.material[(signed long int)xside] + (signed short int)100;
  }

  if(!((0x00200000 & *move) == 0))
  {
    if(!((0x04 & t) == 0))
    {
      rookf = t + 1;
      rookt = t - 1;
    }

    else
    {
      rookf = t - 2;
      rookt = t + 1;
    }
    a = &board.b[(signed long int)side][(signed long int)4];
    *a = *a & NotBitPosArray[(signed long int)rookt];
    *a = *a | BitPosArray[(signed long int)rookf];
    board.blockerr90 = board.blockerr90 & NotBitPosArray[(signed long int)r90[(signed long int)rookt]];
    board.blockerr90 = board.blockerr90 | BitPosArray[(signed long int)r90[(signed long int)rookf]];
    board.blockerr45 = board.blockerr45 & NotBitPosArray[(signed long int)r45[(signed long int)rookt]];
    board.blockerr45 = board.blockerr45 | BitPosArray[(signed long int)r45[(signed long int)rookf]];
    board.blockerr315 = board.blockerr315 & NotBitPosArray[(signed long int)r315[(signed long int)rookt]];
    board.blockerr315 = board.blockerr315 | BitPosArray[(signed long int)r315[(signed long int)rookf]];
    cboard[(signed long int)rookf] = 4;
    cboard[(signed long int)rookt] = 0;
    Mvboard[(signed long int)rookf] = 0;
    Mvboard[(signed long int)rookt] = 0;
    board.castled[(signed long int)side] = (signed short int)0;
  }

  UpdateFriends();
  board.side = (signed short int)side;
  board.ep = g->epsq;
  board.flag = g->bflag;
  HashKey = g->hashkey;
  PawnHashKey = g->phashkey;
  Game50 = (signed int)g->Game50;
  GameCnt = GameCnt - 1;
  goto __CPROVER_DUMP_L10;

__CPROVER_DUMP_L10:
  ;
}

// UnmakeNullMove
// file null.c line 60
void UnmakeNullMove(signed int side)
{
  struct anonymous$6 *g;
  side = 1 ^ side;
  board.side = (signed short int)side;
  g = &Game[(signed long int)GameCnt];
  board.ep = g->epsq;
  board.flag = g->bflag;
  HashKey = g->hashkey;
  GameCnt = GameCnt - 1;
  goto __CPROVER_DUMP_L1;

__CPROVER_DUMP_L1:
  ;
}

// UpdateCBoard
// file common.h line 612
void UpdateCBoard(void)
{
  unsigned long int b;
  signed int piece;
  signed int sq;
  memset((void *)cboard, 0, sizeof(signed int [64l]) /*256ul*/ );
  piece = 1;
  for( ; !(piece >= 7); piece = piece + 1)
  {
    b = board.b[(signed long int)0][(signed long int)piece] | board.b[(signed long int)1][(signed long int)piece];
    while(!(b == 0ul))
    {
      unsigned char return_value_leadz$1;
      return_value_leadz$1=leadz$link7(b);
      sq = (signed int)return_value_leadz$1;
      b = b & NotBitPosArray[(signed long int)sq];
      cboard[(signed long int)sq] = piece;
    }
  }
}

// UpdateFriends
// file common.h line 611
void UpdateFriends(void)
{
  unsigned long int *w;
  unsigned long int *b;
  w = board.b[(signed long int)0];
  b = board.b[(signed long int)1];
  board.friends[(signed long int)0] = w[(signed long int)1] | w[(signed long int)2] | w[(signed long int)3] | w[(signed long int)4] | w[(signed long int)5] | w[(signed long int)6];
  board.friends[(signed long int)1] = b[(signed long int)1] | b[(signed long int)2] | b[(signed long int)3] | b[(signed long int)4] | b[(signed long int)5] | b[(signed long int)6];
  board.blocker = board.friends[(signed long int)0] | board.friends[(signed long int)1];
}

// UpdateMvboard
// file common.h line 613
void UpdateMvboard(void)
{
  signed int sq = 0;
  _Bool tmp_if_expr$1;
  for( ; !(sq >= 64); sq = sq + 1)
  {
    if(cboard[(signed long int)sq] == 0)
      tmp_if_expr$1 = (_Bool)1;

    else
      tmp_if_expr$1 = cboard[(signed long int)sq] == OrigCboard[(signed long int)sq] ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$1)
      Mvboard[(signed long int)sq] = 0;

    else
      Mvboard[(signed long int)sq] = 1;
  }
}

// ValidateBoard
// file common.h line 615
signed short int ValidateBoard(void)
{
  signed int side;
  signed int xside;
  signed int sq;
  unsigned char return_value_nbits$1;
  return_value_nbits$1=nbits$link7(board.b[(signed long int)0][(signed long int)6]);
  if(!((signed int)return_value_nbits$1 == 1))
    return (signed short int)0;

  else
  {
    unsigned char return_value_nbits$2;
    return_value_nbits$2=nbits$link7(board.b[(signed long int)1][(signed long int)6]);
    if(!((signed int)return_value_nbits$2 == 1))
      return (signed short int)0;

    else
    {
      side = (signed int)board.side;
      xside = 1 ^ side;
      signed short int return_value_SqAtakd$3;
      return_value_SqAtakd$3=SqAtakd(board.king[(signed long int)xside], (signed short int)side);
      if(!(return_value_SqAtakd$3 == 0))
        return (signed short int)0;

      else
        if((signed int)board.ep >= 0)
        {
          sq = (signed int)board.ep + (xside == 0 ? 8 : -8);
          if(!((board.b[(signed long int)xside][1l] & BitPosArray[(signed long int)sq]) == 0ul))
            goto __CPROVER_DUMP_L4;

          return (signed short int)0;
        }

        else
        {

        __CPROVER_DUMP_L4:
          ;
          if(!((0x0001 & (signed int)board.flag) == 0))
          {
            if((board.b[0l][6l] & BitPosArray[4l]) == 0ul)
              return (signed short int)0;

            if(!((board.b[0l][4l] & BitPosArray[7l]) == 0ul))
              goto __CPROVER_DUMP_L6;

            return (signed short int)0;
          }

          else
          {

          __CPROVER_DUMP_L6:
            ;
            if(!((0x0002 & (signed int)board.flag) == 0))
            {
              if((board.b[0l][6l] & BitPosArray[4l]) == 0ul)
                return (signed short int)0;

              if(!((board.b[0l][4l] & BitPosArray[0l]) == 0ul))
                goto __CPROVER_DUMP_L8;

              return (signed short int)0;
            }

            else
            {

            __CPROVER_DUMP_L8:
              ;
              if(!((0x0004 & (signed int)board.flag) == 0))
              {
                if((board.b[1l][6l] & BitPosArray[60l]) == 0ul)
                  return (signed short int)0;

                if(!((board.b[1l][4l] & BitPosArray[63l]) == 0ul))
                  goto __CPROVER_DUMP_L10;

                return (signed short int)0;
              }

              else
              {

              __CPROVER_DUMP_L10:
                ;
                if(!((0x0008 & (signed int)board.flag) == 0))
                {
                  if((board.b[1l][6l] & BitPosArray[60l]) == 0ul)
                    return (signed short int)0;

                  if(!((board.b[1l][4l] & BitPosArray[56l]) == 0ul))
                    goto __CPROVER_DUMP_L12;

                  return (signed short int)0;
                }

                else
                {

                __CPROVER_DUMP_L12:
                  ;
                  return (signed short int)1;
                }
              }
            }
          }
        }
    }
  }
}

// ValidateMove
// file common.h line 579
struct anonymous * ValidateMove(char *s)
{
  signed short int f;
  signed short int t;
  signed short int side;
  signed short int rank;
  signed short int file;
  signed short int fileto;
  signed short int piece;
  signed short int piece2;
  signed short int kount;
  char promote;
  char mvstr[128l];
  char *p;
  unsigned long int b;
  unsigned long int b2;
  struct anonymous *n1;
  struct anonymous *n2;
  TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
  GenMoves((signed short int)1);
  FilterIllegalMoves((signed short int)1);
  side = board.side;
  p = mvstr;
  const unsigned short int **return_value___ctype_b_loc$3;
  char *tmp_post$2;
  char *tmp_post$1;
  while((_Bool)1)
  {
    if(!((signed int)*s == 120))
    {
      if(!((signed int)*s == 43))
      {
        if(!((signed int)*s == 61))
        {
          return_value___ctype_b_loc$3=__ctype_b_loc();
          if((8192 & (signed int)(*return_value___ctype_b_loc$3)[(signed long int)(signed int)*s]) == 0)
          {
            tmp_post$2 = p;
            p = p + 1l;
            *tmp_post$2 = *s;
          }

        }

      }

    }

    tmp_post$1 = s;
    s = s + 1l;
    if((signed int)*tmp_post$1 == 0)
      break;

  }
  unsigned long int return_value_strlen$5;
  return_value_strlen$5=strlen(mvstr);
  _Bool tmp_if_expr$7;
  unsigned long int return_value_strlen$6;
  if((signed int)mvstr[-1l + (signed long int)return_value_strlen$5] == 43)
    tmp_if_expr$7 = (_Bool)1;

  else
  {
    return_value_strlen$6=strlen(mvstr);
    tmp_if_expr$7 = (signed int)mvstr[(signed long int)(return_value_strlen$6 - (unsigned long int)1)] == 35 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$9;
  unsigned long int return_value_strlen$8;
  if(tmp_if_expr$7)
    tmp_if_expr$9 = (_Bool)1;

  else
  {
    return_value_strlen$8=strlen(mvstr);
    tmp_if_expr$9 = (signed int)mvstr[(signed long int)(return_value_strlen$8 - (unsigned long int)1)] == 61 ? (_Bool)1 : (_Bool)0;
  }
  unsigned long int return_value_strlen$4;
  if(tmp_if_expr$9)
  {
    return_value_strlen$4=strlen(mvstr);
    mvstr[(signed long int)(return_value_strlen$4 - (unsigned long int)1)] = (char)0;
  }

  signed int tmp_statement_expression$11;
  unsigned long int ValidateMove$$1$$2$$__s1_len;
  unsigned long int ValidateMove$$1$$2$$__s2_len;
  signed int return_value___builtin_strcmp$12;
  return_value___builtin_strcmp$12=__builtin_strcmp(mvstr, "O-O");
  tmp_statement_expression$11 = return_value___builtin_strcmp$12;
  _Bool tmp_if_expr$15;
  signed int tmp_statement_expression$13;
  if(tmp_statement_expression$11 == 0)
    tmp_if_expr$15 = (_Bool)1;

  else
  {
    unsigned long int ValidateMove$$1$$3$$__s1_len;
    unsigned long int ValidateMove$$1$$3$$__s2_len;
    signed int return_value___builtin_strcmp$14;
    return_value___builtin_strcmp$14=__builtin_strcmp(mvstr, "o-o");
    tmp_statement_expression$13 = return_value___builtin_strcmp$14;
    tmp_if_expr$15 = tmp_statement_expression$13 == 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$18;
  signed int tmp_statement_expression$16;
  if(tmp_if_expr$15)
    tmp_if_expr$18 = (_Bool)1;

  else
  {
    unsigned long int ValidateMove$$1$$4$$__s1_len;
    unsigned long int ValidateMove$$1$$4$$__s2_len;
    signed int return_value___builtin_strcmp$17;
    return_value___builtin_strcmp$17=__builtin_strcmp(mvstr, "0-0");
    tmp_statement_expression$16 = return_value___builtin_strcmp$17;
    tmp_if_expr$18 = tmp_statement_expression$16 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$18)
  {
    if((signed int)side == 0)
    {
      f = (signed short int)4;
      t = (signed short int)6;
    }

    else
    {
      f = (signed short int)60;
      t = (signed short int)62;
    }
    struct anonymous *return_value_IsInMoveList$10;
    return_value_IsInMoveList$10=IsInMoveList(1, (signed int)f, (signed int)t, (char)32);
    return return_value_IsInMoveList$10;
  }

  signed int tmp_statement_expression$20;
  unsigned long int ValidateMove$$1$$6$$__s1_len;
  unsigned long int ValidateMove$$1$$6$$__s2_len;
  signed int return_value___builtin_strcmp$21;
  return_value___builtin_strcmp$21=__builtin_strcmp(mvstr, "O-O-O");
  tmp_statement_expression$20 = return_value___builtin_strcmp$21;
  _Bool tmp_if_expr$24;
  signed int tmp_statement_expression$22;
  if(tmp_statement_expression$20 == 0)
    tmp_if_expr$24 = (_Bool)1;

  else
  {
    unsigned long int ValidateMove$$1$$7$$__s1_len;
    unsigned long int ValidateMove$$1$$7$$__s2_len;
    signed int return_value___builtin_strcmp$23;
    return_value___builtin_strcmp$23=__builtin_strcmp(mvstr, "o-o-o");
    tmp_statement_expression$22 = return_value___builtin_strcmp$23;
    tmp_if_expr$24 = tmp_statement_expression$22 == 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$27;
  signed int tmp_statement_expression$25;
  if(tmp_if_expr$24)
    tmp_if_expr$27 = (_Bool)1;

  else
  {
    unsigned long int __s1_len;
    unsigned long int __s2_len;
    signed int return_value___builtin_strcmp$26;
    return_value___builtin_strcmp$26=__builtin_strcmp(mvstr, "0-0-0");
    tmp_statement_expression$25 = return_value___builtin_strcmp$26;
    tmp_if_expr$27 = tmp_statement_expression$25 == 0 ? (_Bool)1 : (_Bool)0;
  }
  if(tmp_if_expr$27)
  {
    if((signed int)side == 0)
    {
      f = (signed short int)4;
      t = (signed short int)2;
    }

    else
    {
      f = (signed short int)60;
      t = (signed short int)58;
    }
    struct anonymous *return_value_IsInMoveList$19;
    return_value_IsInMoveList$19=IsInMoveList(1, (signed int)f, (signed int)t, (char)32);
    return return_value_IsInMoveList$19;
  }

  signed int tmp_if_expr$29;
  if((signed int)mvstr[0l] >= 97)
  {
    if(!((signed int)mvstr[0l] >= 105))
    {
      if((signed int)mvstr[1l] >= 49)
      {
        if(!((signed int)mvstr[1l] >= 57))
        {
          if((signed int)mvstr[2l] >= 97)
          {
            if(!((signed int)mvstr[2l] >= 105))
            {
              if((signed int)mvstr[3l] >= 49)
              {
                if(!((signed int)mvstr[3l] >= 57))
                {
                  f = (signed short int)(((signed int)mvstr[(signed long int)0] - 97) + ((signed int)mvstr[(signed long int)1] - 49) * 8);
                  t = (signed short int)(((signed int)mvstr[(signed long int)2] - 97) + ((signed int)mvstr[(signed long int)3] - 49) * 8);
                  unsigned long int return_value_strlen$28;
                  return_value_strlen$28=strlen(mvstr);
                  if(return_value_strlen$28 == 5ul)
                    tmp_if_expr$29 = (signed int)mvstr[(signed long int)4];

                  else
                    tmp_if_expr$29 = 32;
                  piece = (signed short int)tmp_if_expr$29;
                  struct anonymous *return_value_IsInMoveList$30;
                  return_value_IsInMoveList$30=IsInMoveList(1, (signed int)f, (signed int)t, (char)piece);
                  return return_value_IsInMoveList$30;
                }

              }

            }

          }

        }

      }

    }

  }

  _Bool tmp_if_expr$63;
  if((signed int)mvstr[0l] >= 97)
    tmp_if_expr$63 = (signed int)mvstr[(signed long int)0] <= 104 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$63 = (_Bool)0;
  _Bool tmp_if_expr$45;
  struct anonymous *return_value_IsInMoveList$31;
  struct anonymous *return_value_IsInMoveList$32;
  struct anonymous *return_value_IsInMoveList$33;
  _Bool tmp_if_expr$42;
  _Bool tmp_if_expr$44;
  _Bool tmp_if_expr$43;
  signed int tmp_if_expr$35;
  unsigned char return_value_leadz$38;
  unsigned long int return_value_strlen$39;
  signed int tmp_if_expr$40;
  struct anonymous *return_value_IsInMoveList$41;
  signed int return_value_piece_id$60;
  _Bool tmp_if_expr$62;
  signed int return_value_piece_id$61;
  _Bool tmp_if_expr$49;
  _Bool tmp_if_expr$46;
  _Bool tmp_if_expr$48;
  _Bool tmp_if_expr$47;
  signed int return_value_piece_id$59;
  signed int return_value_piece_id$58;
  _Bool tmp_if_expr$57;
  signed int return_value_piece_id$55;
  _Bool tmp_if_expr$56;
  if(tmp_if_expr$63)
  {
    if((signed int)mvstr[1l] >= 49)
      tmp_if_expr$45 = (signed int)mvstr[(signed long int)1] <= 56 ? (_Bool)1 : (_Bool)0;

    else
      tmp_if_expr$45 = (_Bool)0;
    if(tmp_if_expr$45)
    {
      t = (signed short int)(((signed int)mvstr[(signed long int)0] - 97) + ((signed int)mvstr[(signed long int)1] - 49) * 8);
      f = (signed short int)((signed int)t + ((signed int)side == 0 ? -8 : 8));
      if((signed int)f >= 1 && !((signed int)f >= 64))
      {
        if(!((board.b[(signed long int)side][1l] & BitPosArray[(signed long int)f]) == 0ul))
        {
          if(!((signed int)mvstr[2l] == 0))
          {
            return_value_IsInMoveList$31=IsInMoveList(1, (signed int)f, (signed int)t, mvstr[(signed long int)2]);
            return return_value_IsInMoveList$31;
          }

          else
          {
            return_value_IsInMoveList$32=IsInMoveList(1, (signed int)f, (signed int)t, (char)32);
            return return_value_IsInMoveList$32;
          }
        }

        f = (signed short int)((signed int)t + ((signed int)side == 0 ? -16 : 16));
        if((signed int)f >= 1 && !((signed int)f >= 64))
        {
          if(!((board.b[(signed long int)side][1l] & BitPosArray[(signed long int)f]) == 0ul))
          {
            return_value_IsInMoveList$33=IsInMoveList(1, (signed int)f, (signed int)t, (char)32);
            return return_value_IsInMoveList$33;
          }

        }

      }

    }

    else
    {
      if((signed int)mvstr[1l] >= 97)
        tmp_if_expr$42 = (signed int)mvstr[(signed long int)1] <= 104 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$42 = (_Bool)0;
      if(tmp_if_expr$42)
      {
        if((signed int)mvstr[2l] >= 49)
          tmp_if_expr$43 = (signed int)mvstr[(signed long int)2] <= 56 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$43 = (_Bool)0;
        tmp_if_expr$44 = tmp_if_expr$43 ? (_Bool)1 : (_Bool)0;
      }

      else
        tmp_if_expr$44 = (_Bool)0;
      if(tmp_if_expr$44)
      {
        t = (signed short int)(((signed int)mvstr[(signed long int)1] - 97) + ((signed int)mvstr[(signed long int)2] - 49) * 8);
        rank = (signed short int)(((signed int)mvstr[(signed long int)2] - 49) + ((signed int)side == 0 ? -1 : 1));
        f = (signed short int)((signed int)rank * 8 + ((signed int)mvstr[(signed long int)0] - 97));
        unsigned long int return_value_strlen$34;
        return_value_strlen$34=strlen(mvstr);
        if(return_value_strlen$34 == 4ul)
          tmp_if_expr$35 = (signed int)mvstr[(signed long int)3];

        else
          tmp_if_expr$35 = 32;
        piece = (signed short int)tmp_if_expr$35;
        struct anonymous *return_value_IsInMoveList$36;
        return_value_IsInMoveList$36=IsInMoveList(1, (signed int)f, (signed int)t, (char)piece);
        return return_value_IsInMoveList$36;
      }

      else
        if((signed int)mvstr[1l] >= 97)
        {
          if(!((signed int)mvstr[1l] >= 105))
          {
            file = (signed short int)((signed int)mvstr[(signed long int)0] - 97);
            fileto = (signed short int)((signed int)mvstr[(signed long int)1] - 97);
            b = board.b[(signed long int)side][(signed long int)1] & FileBit[(signed long int)file];
            if((signed int)side == 0)
              b = b >> ((signed int)fileto < (signed int)file ? 7 : 9);

            else
              b = b << ((signed int)fileto < (signed int)file ? 9 : 7);
            if((signed int)board.ep >= 0)
              b = b & (board.friends[(signed long int)(1 ^ (signed int)side)] | BitPosArray[(signed long int)board.ep]);

            else
              b = b & board.friends[(signed long int)(1 ^ (signed int)side)];
            unsigned char return_value_nbits$37;
            return_value_nbits$37=nbits$link6(b);
            switch((signed int)return_value_nbits$37)
            {
              case 0:
                return (struct anonymous *)(void *)0;
              case 1:
              {
                return_value_leadz$38=leadz$link5(b);
                t = (signed short int)return_value_leadz$38;
                f = (signed short int)(((signed int)t - ((signed int)side == 0 ? 8 : -8)) + ((signed int)file - (signed int)fileto));
                return_value_strlen$39=strlen(mvstr);
                if(return_value_strlen$39 == 3ul)
                  tmp_if_expr$40 = (signed int)mvstr[(signed long int)2];

                else
                  tmp_if_expr$40 = 32;
                piece = (signed short int)tmp_if_expr$40;
                return_value_IsInMoveList$41=IsInMoveList(1, (signed int)f, (signed int)t, (char)piece);
                return return_value_IsInMoveList$41;
              }
              default:
              {
                printf("Ambiguous move: %s %s\n", s, (const void *)mvstr);
                ShowBoard();
                return (struct anonymous *)(void *)0;
              }
            }
          }

        }

    }
  }

  else
  {
    return_value_piece_id$60=piece_id(mvstr[(signed long int)0]);
    piece = (signed short int)return_value_piece_id$60;
    if(!((signed int)piece == 0))
    {
      return_value_piece_id$61=piece_id(mvstr[(signed long int)1]);
      tmp_if_expr$62 = return_value_piece_id$61 == 0 ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$62 = (_Bool)0;
    if(tmp_if_expr$62)
    {
      b = board.b[(signed long int)side][(signed long int)piece];
      t = (signed short int)-1;
      if((signed int)mvstr[1l] >= 49)
        tmp_if_expr$49 = (signed int)mvstr[(signed long int)1] <= 56 ? (_Bool)1 : (_Bool)0;

      else
        tmp_if_expr$49 = (_Bool)0;
      if(tmp_if_expr$49)
      {
        rank = (signed short int)((signed int)mvstr[(signed long int)1] - 49);
        b = b & RankBit[(signed long int)rank];
        t = (signed short int)(((signed int)mvstr[(signed long int)2] - 97) + ((signed int)mvstr[(signed long int)3] - 49) * 8);
      }

      else
      {
        if((signed int)mvstr[1l] >= 97)
          tmp_if_expr$46 = (signed int)mvstr[(signed long int)1] <= 104 ? (_Bool)1 : (_Bool)0;

        else
          tmp_if_expr$46 = (_Bool)0;
        if(tmp_if_expr$46)
        {
          if((signed int)mvstr[2l] >= 97)
            tmp_if_expr$47 = (signed int)mvstr[(signed long int)2] <= 104 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$47 = (_Bool)0;
          tmp_if_expr$48 = tmp_if_expr$47 ? (_Bool)1 : (_Bool)0;
        }

        else
          tmp_if_expr$48 = (_Bool)0;
        if(tmp_if_expr$48)
        {
          file = (signed short int)((signed int)mvstr[(signed long int)1] - 97);
          b = b & FileBit[(signed long int)file];
          t = (signed short int)(((signed int)mvstr[(signed long int)2] - 97) + ((signed int)mvstr[(signed long int)3] - 49) * 8);
        }

        else
          if((signed int)mvstr[1l] >= 97)
          {
            if(!((signed int)mvstr[1l] >= 105))
            {
              if((signed int)mvstr[2l] >= 49)
              {
                if(!((signed int)mvstr[2l] >= 57))
                  t = (signed short int)(((signed int)mvstr[(signed long int)1] - 97) + ((signed int)mvstr[(signed long int)2] - 49) * 8);

              }

            }

          }

      }
      kount = (signed short int)0;
      n2 = (struct anonymous *)(void *)0;
      n1 = n2;
      while(!(b == 0ul))
      {
        unsigned char return_value_leadz$50;
        return_value_leadz$50=leadz$link5(b);
        f = (signed short int)return_value_leadz$50;
        b = b & NotBitPosArray[(signed long int)f];
        n1=IsInMoveList(1, (signed int)f, (signed int)t, (char)32);
        if(!(n1 == ((struct anonymous *)NULL)))
        {
          n2 = n1;
          kount = kount + 1;
        }

      }
      if((signed int)kount >= 2)
      {
        printf("Ambiguous move: %s %s\n", s, (const void *)mvstr);
        ShowBoard();
        return (struct anonymous *)(void *)0;
      }

      else
        if((signed int)kount == 0)
          return (struct anonymous *)(void *)0;

        else
          return n2;
    }

    else
    {
      return_value_piece_id$59=piece_id(mvstr[(signed long int)0]);
      piece = (signed short int)return_value_piece_id$59;
      if(!((signed int)piece == 0))
      {
        return_value_piece_id$58=piece_id(mvstr[(signed long int)1]);
        piece2 = (signed short int)return_value_piece_id$58;
        if(!((signed int)piece2 == 0))
        {
          if((signed int)mvstr[2l] == 0)
            tmp_if_expr$57 = (_Bool)1;

          else
          {
            return_value_piece_id$55=piece_id(mvstr[(signed long int)2]);
            if(!(return_value_piece_id$55 == 0))
              tmp_if_expr$56 = (signed int)mvstr[(signed long int)3] == 0 ? (_Bool)1 : (_Bool)0;

            else
              tmp_if_expr$56 = (_Bool)0;
            tmp_if_expr$57 = tmp_if_expr$56 ? (_Bool)1 : (_Bool)0;
          }
          if(tmp_if_expr$57)
          {
            promote = (char)32;
            signed int return_value_piece_id$51;
            return_value_piece_id$51=piece_id((const char)((signed int)mvstr[(signed long int)2] != 0));
            if(!(return_value_piece_id$51 == 0))
              promote = mvstr[(signed long int)2];

            kount = (signed short int)0;
            n2 = (struct anonymous *)(void *)0;
            n1 = n2;
            b = board.b[(signed long int)side][(signed long int)piece];
            while(!(b == 0ul))
            {
              unsigned char return_value_leadz$52;
              return_value_leadz$52=leadz$link5(b);
              f = (signed short int)return_value_leadz$52;
              b = b & NotBitPosArray[(signed long int)f];
              b2 = board.b[(signed long int)(1 ^ (signed int)side)][(signed long int)piece2];
              while(!(b2 == 0ul))
              {
                unsigned char return_value_leadz$53;
                return_value_leadz$53=leadz$link5(b2);
                t = (signed short int)return_value_leadz$53;
                b2 = b2 & NotBitPosArray[(signed long int)t];
                char *return_value_AlgbrMove$54;
                return_value_AlgbrMove$54=AlgbrMove((signed int)f << 6 | (signed int)t);
                printf("Trying %s: ", return_value_AlgbrMove$54);
                n1=IsInMoveList(1, (signed int)f, (signed int)t, promote);
                if(!(n1 == ((struct anonymous *)NULL)))
                {
                  n2 = n1;
                  kount = kount + 1;
                  printf("Y  ");
                }

                else
                  printf("N  ");
              }
            }
            if((signed int)kount >= 2)
            {
              printf("Ambiguous move: %s %s\n", s, (const void *)mvstr);
              ShowBoard();
              return (struct anonymous *)(void *)0;
            }

            else
              if((signed int)kount == 0)
                return (struct anonymous *)(void *)0;

              else
                return n2;
          }

        }

      }

    }
  }
  return (struct anonymous *)(void *)0;
}

// __strcspn_c1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1(const char *__s, signed int __reject)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
    if((signed int)__s[(signed long int)__result] == __reject)
      break;

  return __result;
}

// __strcspn_c1$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 947
static inline unsigned long int __strcspn_c1$link1(const char *__s$link1, signed int __reject$link1)
{
  unsigned long int __result$link1 = (unsigned long int)0;
  for( ; !((signed int)__s$link1[(signed long int)__result$link1] == 0); __result$link1 = __result$link1 + 1ul)
    if((signed int)__s$link1[(signed long int)__result$link1] == __reject$link1)
      break;

  return __result$link1;
}

// __strcspn_c2
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2(const char *__s, signed int __reject1, signed int __reject2)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
  {
    if((signed int)__s[(signed long int)__result] == __reject1)
      break;

    if((signed int)__s[(signed long int)__result] == __reject2)
      break;

  }
  return __result;
}

// __strcspn_c2$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 958
static inline unsigned long int __strcspn_c2$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1)
{
  unsigned long int __result$link1 = (unsigned long int)0;
  for( ; !((signed int)__s$link1[(signed long int)__result$link1] == 0); __result$link1 = __result$link1 + 1ul)
  {
    if((signed int)__s$link1[(signed long int)__result$link1] == __reject1$link1)
      break;

    if((signed int)__s$link1[(signed long int)__result$link1] == __reject2$link1)
      break;

  }
  return __result$link1;
}

// __strcspn_c3
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3(const char *__s, signed int __reject1, signed int __reject2, signed int __reject3)
{
  unsigned long int __result = (unsigned long int)0;
  for( ; !((signed int)__s[(signed long int)__result] == 0); __result = __result + 1ul)
  {
    if((signed int)__s[(signed long int)__result] == __reject1)
      break;

    if((signed int)__s[(signed long int)__result] == __reject2)
      break;

    if((signed int)__s[(signed long int)__result] == __reject3)
      break;

  }
  return __result;
}

// __strcspn_c3$link1
// file /usr/include/x86_64-linux-gnu/bits/string2.h line 970
static inline unsigned long int __strcspn_c3$link1(const char *__s$link1, signed int __reject1$link1, signed int __reject2$link1, signed int __reject3$link1)
{
  unsigned long int __result$link1 = (unsigned long int)0;
  for( ; !((signed int)__s$link1[(signed long int)__result$link1] == 0); __result$link1 = __result$link1 + 1ul)
  {
    if((signed int)__s$link1[(signed long int)__result$link1] == __reject1$link1)
      break;

    if((signed int)__s$link1[(signed long int)__result$link1] == __reject2$link1)
      break;

    if((signed int)__s$link1[(signed long int)__result$link1] == __reject3$link1)
      break;

  }
  return __result$link1;
}

// append_comment
// file lexpgn.l line 96
void append_comment(const char *t)
{
  if((signed int)data_dest == DEST_GAME)
  {
    if(!(GameCnt >= 1))
      append_str(&initial_comments, t);

    else
      append_str(&Game[(signed long int)GameCnt].comments, t);
  }

}

// append_str
// file lexpgn.l line 89
void append_str(char **dest, const char *s)
{
  char *temp;
  temp=return_append_str(*dest, s);
  *dest = temp;
}

// atoi
// file /usr/include/stdlib.h line 278
static inline signed int atoi(const char *__nptr)
{
  signed long int return_value_strtol$1;
  return_value_strtol$1=strtol(__nptr, (char **)(void *)0, 10);
  return (signed int)return_value_strtol$1;
}

// book_to_buf
// file book.c line 249
static void book_to_buf(unsigned int index)
{
  signed int k = 0;
  for( ; !(k >= 2); k = k + 1)
  {
    buf[(signed long int)(wins_off + k)] = (unsigned char)((signed int)(bookpos + (signed long int)index)->wins >> (1 - k) * 8 & 0xff);
    buf[(signed long int)(draws_off + k)] = (unsigned char)((signed int)(bookpos + (signed long int)index)->draws >> (1 - k) * 8 & 0xff);
    buf[(signed long int)(losses_off + k)] = (unsigned char)((signed int)(bookpos + (signed long int)index)->losses >> (1 - k) * 8 & 0xff);
  }
  k = 0;
  for( ; !(k >= 8); k = k + 1)
    buf[(signed long int)(key_off + k)] = (unsigned char)((bookpos + (signed long int)index)->key >> (7 - k) * 8 & (unsigned long int)0xff);
}

// buf_to_book
// file book.c line 220
static void buf_to_book(void)
{
  unsigned long int key;
  unsigned int i;
  key = (unsigned long int)buf[(signed long int)key_off] << 56 | (unsigned long int)buf[(signed long int)(key_off + 1)] << 48 | (unsigned long int)buf[(signed long int)(key_off + 2)] << 40 | (unsigned long int)buf[(signed long int)(key_off + 3)] << 32 | (unsigned long int)buf[(signed long int)(key_off + 4)] << 24 | (unsigned long int)buf[(signed long int)(key_off + 5)] << 16 | (unsigned long int)buf[(signed long int)(key_off + 6)] << 8 | (unsigned long int)buf[(signed long int)(key_off + 7)];
  i = (unsigned int)(key & (1UL << digest_bits) - (unsigned long int)1);
  _Bool tmp_if_expr$2;
  signed int return_value_is_empty$1;
  do
  {
    if(!(key == (bookpos + (signed long int)i)->key))
    {
      return_value_is_empty$1=is_empty(i);
      tmp_if_expr$2 = !(return_value_is_empty$1 != 0) ? (_Bool)1 : (_Bool)0;
    }

    else
      tmp_if_expr$2 = (_Bool)0;
    if(!tmp_if_expr$2)
      break;

    bookhashcollisions = bookhashcollisions + 1;
    i = (unsigned int)((unsigned long int)i + (key >> digest_bits | (unsigned long int)1) & (1UL << digest_bits) - (unsigned long int)1);
  }
  while((_Bool)1);
  (bookpos + (signed long int)i)->wins = (bookpos + (signed long int)i)->wins + (unsigned short int)((signed int)buf[(signed long int)wins_off] << 8 | (signed int)buf[(signed long int)(wins_off + 1)]);
  (bookpos + (signed long int)i)->draws = (bookpos + (signed long int)i)->draws + (unsigned short int)((signed int)buf[(signed long int)draws_off] << 8 | (signed int)buf[(signed long int)(draws_off + 1)]);
  (bookpos + (signed long int)i)->losses = (bookpos + (signed long int)i)->losses + (unsigned short int)((signed int)buf[(signed long int)losses_off] << 8 | (signed int)buf[(signed long int)(losses_off + 1)]);
  (bookpos + (signed long int)i)->key = key;
}

// check_magic
// file book.c line 78
static signed int check_magic(struct _IO_FILE *f)
{
  char check_magic$$1$$buf[5l];
  signed int r;
  unsigned long int return_value_fread$1;
  return_value_fread$1=fread((void *)&check_magic$$1$$buf, (unsigned long int)1, (unsigned long int)5, f);
  r = (signed int)return_value_fread$1;
  _Bool tmp_if_expr$3;
  signed int return_value_memcmp$2;
  if(r == 5)
  {
    return_value_memcmp$2=memcmp((const void *)check_magic$$1$$buf, (const void *)magic_str, (unsigned long int)5);
    tmp_if_expr$3 = return_value_memcmp$2 == 0 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$3 = (_Bool)0;
  return (signed int)tmp_if_expr$3;
}

// cmd_accepted
// file cmd.c line 89
void cmd_accepted(void)
{
  ;
}

// cmd_activate
// file cmd.c line 91
void cmd_activate(void)
{
  do
  {
    flags = flags & (unsigned int)~0x0010;
    dbg_printf("Clear 0x%x\n", 0x0010);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0040;
    dbg_printf("Clear 0x%x\n", 0x0040);
  }
  while((_Bool)0);
}

// cmd_analyze
// file cmd.c line 97
void cmd_analyze(void)
{
  if((32768u & flags) == 0u)
  {
    preanalyze_flags = flags;
    do
    {
      flags = flags | (unsigned int)0x8000;
      dbg_printf("Set   0x%x\n", 0x8000);
    }
    while((_Bool)0);
    cmd_post();
    cmd_force();
    cmd_hard();
  }

}

// cmd_bk
// file cmd.c line 119
void cmd_bk(void)
{
  BookQuery(1);
  printf("\n");
  fflush(stdout);
}

// cmd_black
// file cmd.c line 129
void cmd_black(void)
{
  NewPosition();
  do
  {
    flags = flags & (unsigned int)~0x0004;
    dbg_printf("Clear 0x%x\n", 0x0004);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0008;
    dbg_printf("Clear 0x%x\n", 0x0008);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0010;
    dbg_printf("Clear 0x%x\n", 0x0010);
  }
  while((_Bool)0);
  computer = 0;
  if((signed int)board.side == 0)
  {
    board.side = (signed short int)1;
    board.ep = (signed short int)-1;
  }

}

// cmd_book
// file cmd.c line 146
void cmd_book(void)
{
  signed int return_value_tokeneq$9;
  return_value_tokeneq$9=tokeneq(token[(signed long int)1], "add");
  signed int return_value_tokeneq$6;
  _Bool tmp_if_expr$8;
  signed int return_value_tokeneq$7;
  signed int return_value_tokeneq$5;
  signed int return_value_tokeneq$4;
  signed int return_value_tokeneq$3;
  signed int return_value_tokeneq$2;
  if(!(return_value_tokeneq$9 == 0))
  {
    signed int return_value_access$1;
    return_value_access$1=access(token[(signed long int)2], 0);
    if(!(return_value_access$1 >= 0))
      printf("The syntax to add a new book is:\n\n\tbook add file.pgn\n");

    else
      BookPGNReadFromFile(token[(signed long int)2]);
  }

  else
  {
    return_value_tokeneq$6=tokeneq(token[(signed long int)1], "on");
    if(!(return_value_tokeneq$6 == 0))
      tmp_if_expr$8 = (_Bool)1;

    else
    {
      return_value_tokeneq$7=tokeneq(token[(signed long int)1], "prefer");
      tmp_if_expr$8 = return_value_tokeneq$7 != 0 ? (_Bool)1 : (_Bool)0;
    }
    if(tmp_if_expr$8)
    {
      bookmode = (signed short int)4;
      printf("book now on.\n");
    }

    else
    {
      return_value_tokeneq$5=tokeneq(token[(signed long int)1], "off");
      if(!(return_value_tokeneq$5 == 0))
      {
        bookmode = (signed short int)0;
        printf("book now off.\n");
      }

      else
      {
        return_value_tokeneq$4=tokeneq(token[(signed long int)1], "best");
        if(!(return_value_tokeneq$4 == 0))
        {
          bookmode = (signed short int)2;
          printf("book now best.\n");
        }

        else
        {
          return_value_tokeneq$3=tokeneq(token[(signed long int)1], "worst");
          if(!(return_value_tokeneq$3 == 0))
          {
            bookmode = (signed short int)3;
            printf("book now worst.\n");
          }

          else
          {
            return_value_tokeneq$2=tokeneq(token[(signed long int)1], "random");
            if(!(return_value_tokeneq$2 == 0))
            {
              bookmode = (signed short int)1;
              printf("book now random.\n");
            }

          }
        }
      }
    }
  }
}

// cmd_computer
// file cmd.c line 173
void cmd_computer(void)
{
  ;
}

// cmd_depth
// file cmd.c line 175
void cmd_depth(void)
{
  SearchDepth=atoi(token[(signed long int)1]);
  printf("Search to a depth of %d\n", SearchDepth);
}

// cmd_draw
// file cmd.c line 182
void cmd_draw(void)
{
  ;
}

// cmd_easy
// file cmd.c line 184
void cmd_easy(void)
{
  do
  {
    flags = flags & (unsigned int)~0x4000;
    dbg_printf("Clear 0x%x\n", 0x4000);
  }
  while((_Bool)0);
}

// cmd_edit
// file cmd.c line 187
void cmd_edit(void)
{
  if(!((1024u & flags) == 0u))
  {
    printf("tellusererror command 'edit' not implemented\n");
    fflush(stdout);
  }

}

// cmd_epd
// file cmd.c line 195
void cmd_epd(void)
{
  ParseEPD(token[(signed long int)1]);
  NewPosition();
  ShowBoard();
  printf("\n%s : Best move = %s\n", (const void *)id, (const void *)solution);
}

// cmd_exit
// file cmd.c line 203
void cmd_exit(void)
{
  if(!((32768u & flags) == 0u))
    flags = preanalyze_flags;

  else
    cmd_quit();
}

// cmd_force
// file cmd.c line 219
void cmd_force(void)
{
  do
  {
    flags = flags | (unsigned int)0x0008;
    dbg_printf("Set   0x%x\n", 0x0008);
  }
  while((_Bool)0);
}

// cmd_go
// file cmd.c line 221
void cmd_go(void)
{
  do
  {
    flags = flags | (unsigned int)0x0004;
    dbg_printf("Set   0x%x\n", 0x0004);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0008;
    dbg_printf("Clear 0x%x\n", 0x0008);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0010;
    dbg_printf("Clear 0x%x\n", 0x0010);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0040;
    dbg_printf("Clear 0x%x\n", 0x0040);
  }
  while((_Bool)0);
  computer = (signed int)board.side;
}

// cmd_hard
// file cmd.c line 230
void cmd_hard(void)
{
  do
  {
    flags = flags | (unsigned int)0x4000;
    dbg_printf("Set   0x%x\n", 0x4000);
  }
  while((_Bool)0);
}

// cmd_hash
// file cmd.c line 232
void cmd_hash(void)
{
  signed int return_value_tokeneq$2;
  return_value_tokeneq$2=tokeneq(token[(signed long int)1], "off");
  signed int return_value_tokeneq$1;
  if(!(return_value_tokeneq$2 == 0))
    do
    {
      flags = flags & (unsigned int)~0x0080;
      dbg_printf("Clear 0x%x\n", 0x0080);
    }
    while((_Bool)0);

  else
  {
    return_value_tokeneq$1=tokeneq(token[(signed long int)1], "on");
    if(!(return_value_tokeneq$1 == 0))
      do
      {
        flags = flags | (unsigned int)0x0080;
        dbg_printf("Set   0x%x\n", 0x0080);
      }
      while((_Bool)0);

  }
  printf("Hashing %s\n", (flags & (unsigned int)0x0080) != 0u ? "on" : "off");
}

// cmd_hashsize
// file cmd.c line 241
void cmd_hashsize(void)
{
  _Bool tmp_if_expr$4;
  if((signed int)*token[1l] == 0)
    printf("Current HashSize is %d slots\n", HashSize);

  else
  {
    signed int i;
    signed int *return_value___errno_location$1;
    return_value___errno_location$1=__errno_location();
    *return_value___errno_location$1 = 0;
    signed long int return_value_strtol$2;
    return_value_strtol$2=strtol(token[(signed long int)1], &endptr, 10);
    i = (signed int)return_value_strtol$2;
    signed int *return_value___errno_location$3;
    return_value___errno_location$3=__errno_location();
    if(!(*return_value___errno_location$3 == 0))
      tmp_if_expr$4 = (_Bool)1;

    else
      tmp_if_expr$4 = (signed int)*endptr != 0 ? (_Bool)1 : (_Bool)0;
    if(tmp_if_expr$4)
      printf("Hashsize out of Range or Invalid\n");

    else
    {
      CalcHashSize(i);
      InitHashTable();
    }
  }
}

// cmd_help
// file cmd.c line 831
void cmd_help(void)
{
  const char * const *p;
  signed int count;
  signed int len;
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(token[(signed long int)1]);
  _Bool tmp_if_expr$1;
  if(return_value_strlen$4 >= 1ul)
  {
    p = helpstr;
    count = 0;
    for( ; !(*p == ((const char *)NULL)); p = p + 1l)
    {
      unsigned long int return_value_strlen$2;
      return_value_strlen$2=strlen(token[(signed long int)1]);
      signed int return_value_strncmp$3;
      return_value_strncmp$3=strncmp(*p, token[(signed long int)1], return_value_strlen$2);
      if(return_value_strncmp$3 == 0)
      {
        puts(*p);
        do
        {
          p = p + 1l;
          if(*p == ((const char *)NULL))
            break;

          if((signed int)*(*p) == 32)
            break;

        }
        while((_Bool)1);
        do
        {
          if(!(*p == ((const char *)NULL)))
            tmp_if_expr$1 = (signed int)*(*p) == 32 ? (_Bool)1 : (_Bool)0;

          else
            tmp_if_expr$1 = (_Bool)0;
          if(!tmp_if_expr$1)
            break;

          puts(*p);
          p = p + 1l;
        }
        while((_Bool)1);
        goto __CPROVER_DUMP_L14;
      }

    }
    printf("Help for command %s not found\n\n", token[(signed long int)1]);
  }

  printf("List of commands: (help COMMAND to get more help)\n");
  p = helpstr;
  count = 0;
  unsigned long int tmp_statement_expression$5;
  for( ; !(*p == ((const char *)NULL)); p = p + 1l)
  {
    char __r0;
    char __r1;
    char __r2;
    unsigned long int return_value___builtin_strcspn$6;
    return_value___builtin_strcspn$6=__builtin_strcspn(*p, " ");
    tmp_statement_expression$5 = return_value___builtin_strcspn$6;
    len = (signed int)tmp_statement_expression$5;
    if(len >= 1)
    {
      signed int return_value_printf$7 = printf("%.*s  ", len, *p);
      count = count + return_value_printf$7;
      if(count >= 61)
      {
        count = 0;
        puts("");
      }

    }

  }
  puts("");

__CPROVER_DUMP_L14:
  ;
}

// cmd_hint
// file cmd.c line 261
void cmd_hint(void)
{
  if(!((64u & flags) == 0u))
    printf("The game is over.\n");

  else
  {
    signed int HintMove = TreePtr[(signed long int)1]->move;
    signed int return_value_IsLegalMove$1;
    return_value_IsLegalMove$1=IsLegalMove(HintMove);
    if(!(return_value_IsLegalMove$1 == 0))
    {
      GenMoves((signed short int)1);
      SANMove(TreePtr[(signed long int)1]->move, 1);
      printf("Hint: %s\n", (const void *)SANmv);
    }

    else
      printf("No hint available at this time\n");
  }
  fflush(stdout);
}

// cmd_level
// file cmd.c line 279
void cmd_level(void)
{
  SearchDepth = 0;
  sscanf(token[(signed long int)1], "%d %f %d", &TCMove, &TCTime, &TCinc);
  if(TCMove == 0)
  {
    TCMove = 35;
    printf("TCMove = %d\n", TCMove);
    suddendeath = 1;
  }

  else
    suddendeath = 0;
  if(IEEE_FLOAT_EQUAL(TCTime, 0.000000f))
  {
    do
    {
      flags = flags | (unsigned int)0x0800;
      dbg_printf("Set   0x%x\n", 0x0800);
    }
    while((_Bool)0);
    SearchTime = (float)TCinc / 2.0f;
    printf("Fischer increment of %d seconds\n", TCinc);
  }

  else
  {
    do
    {
      flags = flags | (unsigned int)0x0800;
      dbg_printf("Set   0x%x\n", 0x0800);
    }
    while((_Bool)0);
    MoveLimit[(signed long int)1] = TCMove - (GameCnt + 1) / 2;
    MoveLimit[(signed long int)0] = MoveLimit[(signed long int)1];
    TimeLimit[(signed long int)1] = TCTime * (float)60;
    TimeLimit[(signed long int)0] = TimeLimit[(signed long int)1];
    if((1024u & flags) == 0u)
    {
      printf("Time Control: %d moves in %.2f secs\n", MoveLimit[(signed long int)0], TimeLimit[(signed long int)0]);
      printf("Fischer increment of %d seconds\n", TCinc);
    }

  }
}

// cmd_list
// file cmd.c line 305
void cmd_list(void)
{
  if((signed int)*token[1l] == 63)
  {
    printf("name    - list known players alphabetically\n");
    printf("score   - list by GNU best result first \n");
    printf("reverse - list by GNU worst result first\n");
  }

  else
    if((signed int)*token[1l] == 0)
      DBListPlayer("rscore");

    else
      DBListPlayer(token[(signed long int)1]);
}

// cmd_load
// file cmd.c line 317
void cmd_load(void)
{
  LoadEPD(token[(signed long int)1]);
  signed short int return_value_ValidateBoard$1;
  return_value_ValidateBoard$1=ValidateBoard();
  if(return_value_ValidateBoard$1 == 0)
  {
    do
    {
      flags = flags | (unsigned int)0x0040;
      dbg_printf("Set   0x%x\n", 0x0040);
    }
    while((_Bool)0);
    printf("Board is wrong!\n");
  }

}

// cmd_manual
// file cmd.c line 326
void cmd_manual(void)
{
  do
  {
    flags = flags | (unsigned int)0x0008;
    dbg_printf("Set   0x%x\n", 0x0008);
  }
  while((_Bool)0);
}

// cmd_movenow
// file cmd.c line 329
void cmd_movenow(void)
{
  ;
}

// cmd_name
// file cmd.c line 336
void cmd_name(void)
{
  signed int suffix = 0;
  __builtin_strncpy(name, token[(signed long int)1], sizeof(char [50l]) /*50ul*/  - (unsigned long int)1);
  suffix = 0;
  for( ; !(suffix >= 1000); suffix = suffix + 1)
  {
    sprintf(logfile, "log.%03d", suffix);
    sprintf(gamefile, "game.%03d", suffix);
    signed int return_value_access$3;
    return_value_access$3=access(logfile, 0);
    if(!(return_value_access$3 >= 0))
    {
      ofp=fopen(logfile, "w");
      if(ofp == ((struct _IO_FILE *)NULL))
      {
        ofp = stdout;
        signed int *return_value___errno_location$1;
        return_value___errno_location$1=__errno_location();
        char *return_value_strerror$2;
        return_value_strerror$2=strerror(*return_value___errno_location$1);
        fprintf(stderr, "Failed to open %s for writing: %s\n", (const void *)logfile, return_value_strerror$2);
      }

      goto __CPROVER_DUMP_L5;
    }

  }
  fprintf(stderr, "Could not create logfile, all slots occupied.\n");
  fprintf(stderr, "You may consider deleting or renaming your existing logfiles.\n");

__CPROVER_DUMP_L5:
  ;
}

// cmd_new
// file cmd.c line 363
void cmd_new(void)
{
  InitVars();
  NewPosition();
  if((32768u & flags) == 0u)
    do
    {
      flags = flags & (unsigned int)~0x0008;
      dbg_printf("Clear 0x%x\n", 0x0008);
    }
    while((_Bool)0);

  do
  {
    flags = flags & (unsigned int)~0x0004;
    dbg_printf("Clear 0x%x\n", 0x0004);
  }
  while((_Bool)0);
  opprating = 0;
  myrating = opprating;
}

// cmd_nopost
// file cmd.c line 374
void cmd_nopost(void)
{
  do
  {
    flags = flags & (unsigned int)~0x1000;
    dbg_printf("Clear 0x%x\n", 0x1000);
  }
  while((_Bool)0);
}

// cmd_null
// file cmd.c line 376
void cmd_null(void)
{
  signed int return_value_tokeneq$2;
  return_value_tokeneq$2=tokeneq(token[(signed long int)1], "off");
  signed int return_value_tokeneq$1;
  if(!(return_value_tokeneq$2 == 0))
    do
    {
      flags = flags & (unsigned int)~0x0200;
      dbg_printf("Clear 0x%x\n", 0x0200);
    }
    while((_Bool)0);

  else
  {
    return_value_tokeneq$1=tokeneq(token[(signed long int)1], "on");
    if(!(return_value_tokeneq$1 == 0))
      do
      {
        flags = flags | (unsigned int)0x0200;
        dbg_printf("Set   0x%x\n", 0x0200);
      }
      while((_Bool)0);

  }
  printf("Null moves %s\n", (flags & (unsigned int)0x0200) != 0u ? "on" : "off");
}

// cmd_otim
// file cmd.c line 385
void cmd_otim(void)
{
  ;
}

// cmd_pgnload
// file cmd.c line 387
void cmd_pgnload(void)
{
  PGNReadFromFile(token[(signed long int)1]);
}

// cmd_pgnsave
// file cmd.c line 394
void cmd_pgnsave(void)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(token[(signed long int)1]);
  if(return_value_strlen$1 >= 1ul)
    PGNSaveToFile(token[(signed long int)1], "");

  else
    printf("Invalid filename.\n");
}

// cmd_ping
// file cmd.c line 402
void cmd_ping(void)
{
  printf("pong %s\n", token[(signed long int)1]);
  fflush(stdout);
}

// cmd_post
// file cmd.c line 412
void cmd_post(void)
{
  do
  {
    flags = flags | (unsigned int)0x1000;
    dbg_printf("Set   0x%x\n", 0x1000);
  }
  while((_Bool)0);
}

// cmd_protover
// file cmd.c line 414
void cmd_protover(void)
{
  if(!((1024u & flags) == 0u))
  {
    printf("feature setboard=1 analyze=1 ping=1 draw=0 sigint=0 variants=\"normal\" myname=\"%s %s\" done=1\n", (const void *)"GNU Chess for GNOME", (const void *)"15.02");
    fflush(stdout);
  }

}

// cmd_quit
// file cmd.c line 425
void cmd_quit(void)
{
  do
  {
    flags = flags | (unsigned int)0x0001;
    dbg_printf("Set   0x%x\n", 0x0001);
  }
  while((_Bool)0);
}

// cmd_random
// file cmd.c line 427
void cmd_random(void)
{
  ;
}

// cmd_rating
// file cmd.c line 429
void cmd_rating(void)
{
  myrating=atoi(token[(signed long int)1]);
  opprating=atoi(token[(signed long int)2]);
  fprintf(ofp, "my rating = %d, opponent rating = %d\n", myrating, opprating);
  if(opprating >= 1700)
    bookfirstlast = (signed short int)2;

  else
    if(opprating >= 1700)
      bookfirstlast = (signed short int)2;

    else
      bookfirstlast = (signed short int)2;
}

// cmd_rejected
// file cmd.c line 441
void cmd_rejected(void)
{
  ;
}

// cmd_remove
// file cmd.c line 443
void cmd_remove(void)
{
  if(GameCnt >= 0)
  {
    do
    {
      flags = flags & (unsigned int)~0x0040;
      dbg_printf("Clear 0x%x\n", 0x0040);
    }
    while((_Bool)0);
    do
    {
      flags = flags & (unsigned int)~0x0010;
      dbg_printf("Clear 0x%x\n", 0x0010);
    }
    while((_Bool)0);
    UnmakeMove((signed int)board.side, &Game[(signed long int)GameCnt].move);
    if(GameCnt >= 0)
    {
      UnmakeMove((signed int)board.side, &Game[(signed long int)GameCnt].move);
      if((1024u & flags) == 0u)
        ShowBoard();

    }

    PGNSaveToFile("game.log", "");
  }

  else
    printf("No moves to undo! \n");
}

// cmd_result
// file cmd.c line 459
void cmd_result(void)
{
  if(!(ofp == stdout))
  {
    fprintf(ofp, "result: %s\n", token[(signed long int)1]);
    fclose(ofp);
    ofp = stdout;
    printf("Save to %s\n", (const void *)gamefile);
    PGNSaveToFile(gamefile, token[(signed long int)1]);
    DBUpdatePlayer(name, token[(signed long int)1]);
  }

}

// cmd_save
// file cmd.c line 471
void cmd_save(void)
{
  unsigned long int return_value_strlen$1;
  return_value_strlen$1=strlen(token[(signed long int)1]);
  if(return_value_strlen$1 >= 1ul)
    SaveEPD(token[(signed long int)1]);

  else
    printf("Invalid filename.\n");
}

// cmd_setboard
// file cmd.c line 479
void cmd_setboard(void)
{
  ParseEPD(token[(signed long int)1]);
  NewPosition();
}

// cmd_show
// file cmd.c line 589
void cmd_show(void)
{
  signed int return_value_tokeneq$25;
  return_value_tokeneq$25=tokeneq(token[(signed long int)1], "board");
  signed int return_value_tokeneq$24;
  signed int return_value_tokeneq$23;
  signed int return_value_tokeneq$22;
  signed int return_value_tokeneq$21;
  signed int return_value_tokeneq$20;
  signed int return_value_tokeneq$19;
  signed int return_value_tokeneq$16;
  _Bool tmp_if_expr$18;
  signed int return_value_tokeneq$17;
  signed int tmp_if_expr$13;
  signed int return_value_Evaluate$12;
  signed int return_value_tokeneq$15;
  signed int return_value_tokeneq$14;
  if(!(return_value_tokeneq$25 == 0))
    ShowBoard();

  else
  {
    return_value_tokeneq$24=tokeneq(token[(signed long int)1], "rating");
    if(!(return_value_tokeneq$24 == 0))
    {
      printf("My rating = %d\n", myrating);
      printf("Opponent rating = %d\n", opprating);
    }

    else
    {
      return_value_tokeneq$23=tokeneq(token[(signed long int)1], "time");
      if(!(return_value_tokeneq$23 == 0))
        ShowTime();

      else
      {
        return_value_tokeneq$22=tokeneq(token[(signed long int)1], "moves");
        if(!(return_value_tokeneq$22 == 0))
        {
          GenCnt = (unsigned long int)0;
          TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
          GenMoves((signed short int)1);
          ShowMoveList(1);
          printf("No. of moves generated = %ld\n", GenCnt);
        }

        else
        {
          return_value_tokeneq$21=tokeneq(token[(signed long int)1], "escape");
          if(!(return_value_tokeneq$21 == 0))
          {
            GenCnt = (unsigned long int)0;
            TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
            GenCheckEscapes((signed short int)1);
            ShowMoveList(1);
            printf("No. of moves generated = %ld\n", GenCnt);
          }

          else
          {
            return_value_tokeneq$20=tokeneq(token[(signed long int)1], "noncapture");
            if(!(return_value_tokeneq$20 == 0))
            {
              GenCnt = (unsigned long int)0;
              TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
              GenNonCaptures((signed short int)1);
              FilterIllegalMoves((signed short int)1);
              ShowMoveList(1);
              printf("No. of moves generated = %ld\n", GenCnt);
            }

            else
            {
              return_value_tokeneq$19=tokeneq(token[(signed long int)1], "capture");
              if(!(return_value_tokeneq$19 == 0))
              {
                GenCnt = (unsigned long int)0;
                TreePtr[(signed long int)2] = TreePtr[(signed long int)1];
                GenCaptures((signed short int)1);
                FilterIllegalMoves((signed short int)1);
                ShowMoveList(1);
                printf("No. of moves generated = %ld\n", GenCnt);
              }

              else
              {
                return_value_tokeneq$16=tokeneq(token[(signed long int)1], "eval");
                if(!(return_value_tokeneq$16 == 0))
                  tmp_if_expr$18 = (_Bool)1;

                else
                {
                  return_value_tokeneq$17=tokeneq(token[(signed long int)1], "score");
                  tmp_if_expr$18 = return_value_tokeneq$17 != 0 ? (_Bool)1 : (_Bool)0;
                }
                if(tmp_if_expr$18)
                {
                  signed int s;
                  signed int wp;
                  signed int bp;
                  signed int wk;
                  signed int bk;
                  unsigned long int *b;
                  phase = 8 - ((signed int)board.material[(signed long int)0] + (signed int)board.material[(signed long int)1]) / 1150;
                  GenAtaks();
                  FindPins(&pinned);
                  hunged[(signed long int)0]=EvalHung(0);
                  hunged[(signed long int)1]=EvalHung(1);
                  b = board.b[(signed long int)0];
                  pieces[(signed long int)0] = b[(signed long int)2] | b[(signed long int)3] | b[(signed long int)4] | b[(signed long int)5];
                  b = board.b[(signed long int)1];
                  pieces[(signed long int)1] = b[(signed long int)2] | b[(signed long int)3] | b[(signed long int)4] | b[(signed long int)5];
                  wp=ScoreP((signed short int)0);
                  bp=ScoreP((signed short int)1);
                  wk=ScoreK((signed short int)0);
                  bk=ScoreK((signed short int)1);
                  signed int return_value_ScoreN$1;
                  return_value_ScoreN$1=ScoreN((signed short int)0);
                  signed int return_value_ScoreB$2;
                  return_value_ScoreB$2=ScoreB((signed short int)0);
                  signed int return_value_ScoreR$3;
                  return_value_ScoreR$3=ScoreR((signed short int)0);
                  signed int return_value_ScoreQ$4;
                  return_value_ScoreQ$4=ScoreQ((signed short int)0);
                  signed int return_value_ScoreDev$5;
                  return_value_ScoreDev$5=ScoreDev((signed short int)0);
                  printf("White:  Mat:%4d/%4d  P:%d  N:%d  B:%d  R:%d  Q:%d  K:%d  Dev:%d  h:%d x:%d\n", board.pmaterial[(signed long int)0], board.material[(signed long int)0], wp, return_value_ScoreN$1, return_value_ScoreB$2, return_value_ScoreR$3, return_value_ScoreQ$4, wk, return_value_ScoreDev$5, hunged[(signed long int)0], ExchCnt[(signed long int)0]);
                  signed int return_value_ScoreN$6;
                  return_value_ScoreN$6=ScoreN((signed short int)1);
                  signed int return_value_ScoreB$7;
                  return_value_ScoreB$7=ScoreB((signed short int)1);
                  signed int return_value_ScoreR$8;
                  return_value_ScoreR$8=ScoreR((signed short int)1);
                  signed int return_value_ScoreQ$9;
                  return_value_ScoreQ$9=ScoreQ((signed short int)1);
                  signed int return_value_ScoreDev$10;
                  return_value_ScoreDev$10=ScoreDev((signed short int)1);
                  printf("Black:  Mat:%4d/%4d  P:%d  N:%d  B:%d  R:%d  Q:%d  K:%d  Dev:%d  h:%d x:%d\n", board.pmaterial[(signed long int)1], board.material[(signed long int)1], bp, return_value_ScoreN$6, return_value_ScoreB$7, return_value_ScoreR$8, return_value_ScoreQ$9, bk, return_value_ScoreDev$10, hunged[(signed long int)1], ExchCnt[(signed long int)1]);
                  printf("Phase: %d\t", 8 - ((signed int)board.material[(signed long int)0] + (signed int)board.material[(signed long int)1]) / 1150);
                  signed short int return_value_EvaluateDraw$11;
                  return_value_EvaluateDraw$11=EvaluateDraw();
                  if(!(return_value_EvaluateDraw$11 == 0))
                    tmp_if_expr$13 = 0;

                  else
                  {
                    return_value_Evaluate$12=Evaluate(-32767, 32767);
                    tmp_if_expr$13 = return_value_Evaluate$12;
                  }
                  s = tmp_if_expr$13;
                  printf("score = %d\n", s);
                  printf("\n");
                }

                else
                {
                  return_value_tokeneq$15=tokeneq(token[(signed long int)1], "game");
                  if(!(return_value_tokeneq$15 == 0))
                    ShowGame();

                  else
                  {
                    return_value_tokeneq$14=tokeneq(token[(signed long int)1], "pin");
                    if(!(return_value_tokeneq$14 == 0))
                    {
                      unsigned long int cmd_show$$1$$7$$b;
                      GenAtaks();
                      FindPins(&cmd_show$$1$$7$$b);
                      ShowBitBoard(&cmd_show$$1$$7$$b);
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

// cmd_solve
// file cmd.c line 486
void cmd_solve(void)
{
  Solve(token[(signed long int)1]);
}

// cmd_st
// file cmd.c line 489
void cmd_st(void)
{
  sscanf(token[(signed long int)1], "%d", &TCinc);
  suddendeath = 0;
  SearchTime = (float)TCinc * 0.90f;
  do
  {
    flags = flags & (unsigned int)~0x0800;
    dbg_printf("Clear 0x%x\n", 0x0800);
  }
  while((_Bool)0);
}

// cmd_switch
// file cmd.c line 499
void cmd_switch(void)
{
  board.side = (signed short int)(1 ^ (signed int)board.side);
  board.ep = (signed short int)-1;
  printf("%s to move\n", (signed int)board.side == 0 ? "White" : "Black");
}

// cmd_test
// file cmd.c line 679
void cmd_test(void)
{
  signed int return_value_tokeneq$6;
  return_value_tokeneq$6=tokeneq(token[(signed long int)1], "movelist");
  signed int return_value_tokeneq$5;
  signed int return_value_tokeneq$4;
  signed int return_value_tokeneq$3;
  signed int return_value_tokeneq$2;
  signed int return_value_tokeneq$1;
  if(!(return_value_tokeneq$6 == 0))
    TestMoveList();

  else
  {
    return_value_tokeneq$5=tokeneq(token[(signed long int)1], "capture");
    if(!(return_value_tokeneq$5 == 0))
      TestCaptureList();

    else
    {
      return_value_tokeneq$4=tokeneq(token[(signed long int)1], "movegenspeed");
      if(!(return_value_tokeneq$4 == 0))
        TestMoveGenSpeed();

      else
      {
        return_value_tokeneq$3=tokeneq(token[(signed long int)1], "capturespeed");
        if(!(return_value_tokeneq$3 == 0))
          TestCaptureGenSpeed();

        else
        {
          return_value_tokeneq$2=tokeneq(token[(signed long int)1], "eval");
          if(!(return_value_tokeneq$2 == 0))
            TestEval();

          else
          {
            return_value_tokeneq$1=tokeneq(token[(signed long int)1], "evalspeed");
            if(!(return_value_tokeneq$1 == 0))
              TestEvalSpeed();

          }
        }
      }
    }
  }
}

// cmd_time
// file cmd.c line 506
void cmd_time(void)
{
  signed int return_value_atoi$1;
  return_value_atoi$1=atoi(token[(signed long int)1]);
  TimeLimit[(signed long int)(1 ^ (signed int)board.side)] = (float)return_value_atoi$1 / 100.0f;
}

// cmd_undo
// file cmd.c line 511
void cmd_undo(void)
{
  if(GameCnt >= 0)
    UnmakeMove((signed int)board.side, &Game[(signed long int)GameCnt].move);

  else
    printf("No moves to undo! \n");
  MoveLimit[(signed long int)board.side] = MoveLimit[(signed long int)board.side] + 1;
  TimeLimit[(signed long int)board.side] = TimeLimit[(signed long int)board.side] + Game[(signed long int)(GameCnt + 1)].et;
  if((1024u & flags) == 0u)
    ShowBoard();

}

// cmd_usage
// file cmd.c line 522
void cmd_usage(void)
{
  printf("\n Usage: %s [OPTION]\n\n -h, --help         display this help and exit\n -v, --version      display version information and exit\n\n -x, --xboard       start in engine mode\n -p, --post   \t   start up showing thinking\n -e, --easy   \t   disable thinking in opponents time\n -m, --manual  \t   enable manual mode\n -s size, --hashsize=size   specify hashtable size in slots\n\n Options xboard and post are accepted without leading dashes\n for backward compatibility\n\nReport bugs to <bug-gnu-chess@gnu.org>.\n\n", progname);
}

// cmd_variant
// file cmd.c line 546
void cmd_variant(void)
{
  ;
}

// cmd_version
// file cmd.c line 548
void cmd_version(void)
{
  if((1024u & flags) == 0u)
    printf("%s %s\n", (const void *)"GNU Chess for GNOME", (const void *)"15.02");

  else
    printf("Chess\n");
}

// cmd_white
// file cmd.c line 556
void cmd_white(void)
{
  NewPosition();
  do
  {
    flags = flags & (unsigned int)~0x0004;
    dbg_printf("Clear 0x%x\n", 0x0004);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0008;
    dbg_printf("Clear 0x%x\n", 0x0008);
  }
  while((_Bool)0);
  do
  {
    flags = flags & (unsigned int)~0x0010;
    dbg_printf("Clear 0x%x\n", 0x0010);
  }
  while((_Bool)0);
  computer = 1;
  if((signed int)board.side == 1)
  {
    board.side = (signed short int)0;
    board.ep = (signed short int)-1;
  }

}

// cmd_xboard
// file cmd.c line 573
void cmd_xboard(void)
{
  signed int return_value_tokeneq$2;
  return_value_tokeneq$2=tokeneq(token[(signed long int)1], "off");
  signed int return_value_tokeneq$1;
  if(!(return_value_tokeneq$2 == 0))
    do
    {
      flags = flags & (unsigned int)~0x0400;
      dbg_printf("Clear 0x%x\n", 0x0400);
    }
    while((_Bool)0);

  else
  {
    return_value_tokeneq$1=tokeneq(token[(signed long int)1], "on");
    if(!(return_value_tokeneq$1 == 0))
      do
      {
        flags = flags | (unsigned int)0x0400;
        dbg_printf("Set   0x%x\n", 0x0400);
      }
      while((_Bool)0);

    else
      if((1024u & flags) == 0u)
        do
        {
          flags = flags | (unsigned int)0x0400;
          dbg_printf("Set   0x%x\n", 0x0400);
        }
        while((_Bool)0);

  }
}

// compare
// file book.c line 263
static signed int compare(const void *aa, const void *bb)
{
  const struct anonymous *a = (const struct anonymous *)aa;
  const struct anonymous *b = (const struct anonymous *)bb;
  if(!(a->score >= b->score))
    return 1;

  else
    if(!(b->score >= a->score))
      return -1;

    else
      return 0;
}

// dbg_close
// file debug.c line 73
signed int dbg_close(void)
{
  return 0;
}

// dbg_open
// file debug.c line 71
signed int dbg_open(const char *name)
{
  return 0;
}

// dbg_printf
// file common.h line 848
signed int dbg_printf(const char *fmt, ...)
{
  return 0;
}

// getchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 44
static inline signed int getchar(void)
{
  signed int return_value__IO_getc$1;
  return_value__IO_getc$1=_IO_getc(stdin);
  return return_value__IO_getc$1;
}

// getline_standard
// file input.c line 87
void getline_standard(char *p)
{
  if((1024u & flags) == 0u)
  {
    fputs(p, stdout);
    fflush(stdout);
  }

  char *resstr;
  resstr=fgets(inputstr, 128, stdin);
  (void)resstr;
}

// input_func
// file input.c line 121
void * input_func(void *arg)
{
  char prompt[128l] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
  if((1u & flags) == 0u)
  {
    if((1024u & flags) == 0u)
      sprintf(prompt, "%s (%d) : ", RealSide != 0 ? "Black" : "White", (RealGameCnt + 1) / 2 + 1);

    pthread_mutex_lock(&input_mutex);
    getline_intrl(prompt);
    input_status = 1;
    pthread_cond_signal(&input_cond);
    pthread_mutex_unlock(&input_mutex);
    pthread_mutex_lock(&wakeup_mutex);
    if(input_status == 1)
      pthread_cond_wait(&wakeup_cond, &wakeup_mutex);

    pthread_mutex_unlock(&wakeup_mutex);
  }

  return (void *)0;
}

// input_wakeup
// file input.c line 152
void input_wakeup(void)
{
  pthread_mutex_lock(&input_mutex);
  input_status = 0;
  pthread_mutex_unlock(&input_mutex);
  pthread_mutex_lock(&wakeup_mutex);
  pthread_cond_signal(&wakeup_cond);
  pthread_mutex_unlock(&wakeup_mutex);
}

// is_empty
// file book.c line 152
static inline signed int is_empty(unsigned int index)
{
  _Bool tmp_if_expr$1;
  if((bookpos + (signed long int)index)->key == 0ul)
    tmp_if_expr$1 = (signed int)(bookpos + (signed long int)index)->wins == 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$1 = (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (signed int)(bookpos + (signed long int)index)->draws == 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$2 = (_Bool)0;
  _Bool tmp_if_expr$3;
  if(tmp_if_expr$2)
    tmp_if_expr$3 = (signed int)(bookpos + (signed long int)index)->losses == 0 ? (_Bool)1 : (_Bool)0;

  else
    tmp_if_expr$3 = (_Bool)0;
  return (signed int)tmp_if_expr$3;
}

// leadz
// file inlines.h line 35
static inline unsigned char leadz(unsigned long int b)
{
  if(!(b >> 48 == 0ul))
    return lzArray[(signed long int)(b >> 48)];

  else
    if(!(b >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b >> 32)] + 16);

    else
      if(!(b >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b] + 48);
}

// leadz$link1
// file inlines.h line 35
static inline unsigned char leadz$link1(unsigned long int b$link1)
{
  if(!(b$link1 >> 48 == 0ul))
    return lzArray[(signed long int)(b$link1 >> 48)];

  else
    if(!(b$link1 >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b$link1 >> 32)] + 16);

    else
      if(!(b$link1 >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b$link1 >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b$link1] + 48);
}

// leadz$link2
// file inlines.h line 35
static inline unsigned char leadz$link2(unsigned long int b$link2)
{
  if(!(b$link2 >> 48 == 0ul))
    return lzArray[(signed long int)(b$link2 >> 48)];

  else
    if(!(b$link2 >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b$link2 >> 32)] + 16);

    else
      if(!(b$link2 >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b$link2 >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b$link2] + 48);
}

// leadz$link3
// file inlines.h line 35
static inline unsigned char leadz$link3(unsigned long int b$link3)
{
  if(!(b$link3 >> 48 == 0ul))
    return lzArray[(signed long int)(b$link3 >> 48)];

  else
    if(!(b$link3 >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b$link3 >> 32)] + 16);

    else
      if(!(b$link3 >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b$link3 >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b$link3] + 48);
}

// leadz$link4
// file inlines.h line 35
static inline unsigned char leadz$link4(unsigned long int b$link4)
{
  if(!(b$link4 >> 48 == 0ul))
    return lzArray[(signed long int)(b$link4 >> 48)];

  else
    if(!(b$link4 >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b$link4 >> 32)] + 16);

    else
      if(!(b$link4 >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b$link4 >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b$link4] + 48);
}

// leadz$link5
// file inlines.h line 35
static inline unsigned char leadz$link5(unsigned long int b$link5)
{
  if(!(b$link5 >> 48 == 0ul))
    return lzArray[(signed long int)(b$link5 >> 48)];

  else
    if(!(b$link5 >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b$link5 >> 32)] + 16);

    else
      if(!(b$link5 >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b$link5 >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b$link5] + 48);
}

// leadz$link6
// file inlines.h line 35
static inline unsigned char leadz$link6(unsigned long int b$link6)
{
  if(!(b$link6 >> 48 == 0ul))
    return lzArray[(signed long int)(b$link6 >> 48)];

  else
    if(!(b$link6 >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b$link6 >> 32)] + 16);

    else
      if(!(b$link6 >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b$link6 >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b$link6] + 48);
}

// leadz$link7
// file inlines.h line 35
static inline unsigned char leadz$link7(unsigned long int b$link7)
{
  if(!(b$link7 >> 48 == 0ul))
    return lzArray[(signed long int)(b$link7 >> 48)];

  else
    if(!(b$link7 >> 32 == 0ul))
      return (unsigned char)((signed int)lzArray[(signed long int)(b$link7 >> 32)] + 16);

    else
      if(!(b$link7 >> 16 == 0ul))
        return (unsigned char)((signed int)lzArray[(signed long int)(b$link7 >> 16)] + 32);

      else
        return (unsigned char)((signed int)lzArray[(signed long int)b$link7] + 48);
}

// main
// file main.c line 291
signed int main(signed int argc, char **argv)
{
  signed int i;
  signed int c;
  signed int opt_help = 0;
  signed int opt_version = 0;
  signed int opt_post = 0;
  signed int opt_xboard = 0;
  signed int opt_hash = 0;
  signed int opt_easy = 0;
  signed int opt_manual = 0;
  char *main$$1$$endptr;
  progname = argv[(signed long int)0];
  signed int *return_value___errno_location$1;
  signed long int return_value_strtol$2;
  signed int *return_value___errno_location$3;
  _Bool tmp_if_expr$4;
  while((_Bool)1)
  {
    signed int option_index = 0;
    static struct option long_options[8l] = { { .name="hashsize", .has_arg=1, .flag=((signed int *)NULL), .val=115 }, 
    { .name="version", .has_arg=0, .flag=((signed int *)NULL), .val=118 }, 
    { .name="help", .has_arg=0, .flag=((signed int *)NULL), .val=104 }, 
    { .name="xboard", .has_arg=0, .flag=((signed int *)NULL), .val=120 }, 
    { .name="post", .has_arg=0, .flag=((signed int *)NULL), .val=112 }, 
    { .name="easy", .has_arg=0, .flag=((signed int *)NULL), .val=101 }, 
    { .name="manual", .has_arg=0, .flag=((signed int *)NULL), .val=109 }, 
    { .name=((const char *)NULL), .has_arg=0, .flag=((signed int *)NULL),
    .val=0 } };
    c=getopt_long(argc, argv, "ehmpvxs:", long_options, &option_index);
    if(c == -1)
      break;

    switch(c)
    {
      case 118:
      {
        opt_version = 1;
        break;
      }
      case 104:
      {
        opt_help = 1;
        break;
      }
      case 120:
      {
        opt_xboard = 1;
        break;
      }
      case 112:
      {
        opt_post = 1;
        break;
      }
      case 101:
      {
        opt_easy = 1;
        break;
      }
      case 109:
      {
        opt_manual = 1;
        break;
      }
      case 115:
      {
        if(optarg == ((char *)NULL))
        {
          opt_help = 1;
          break;
        }

        return_value___errno_location$1=__errno_location();
        *return_value___errno_location$1 = 0;
        return_value_strtol$2=strtol(optarg, &main$$1$$endptr, 10);
        opt_hash = (signed int)return_value_strtol$2;
        return_value___errno_location$3=__errno_location();
        if(!(*return_value___errno_location$3 == 0))
          tmp_if_expr$4 = (_Bool)1;

        else
          tmp_if_expr$4 = (signed int)*main$$1$$endptr != 0 ? (_Bool)1 : (_Bool)0;
        if(tmp_if_expr$4)
        {
          printf("Hashsize out of Range or Invalid\n");
          return 1;
        }

        break;
      }
      case 63:
      {
        opt_help = 1;
        break;
      }
      default:
      {
        puts("Option Processing Failed\n");
        abort();
      }
    }
  }
  signed long int return_value_time$5;
  return_value_time$5=time((signed long int *)(void *)0);
  srand((unsigned int)return_value_time$5);
  flags = (unsigned int)0ULL;
  ofp = stdout;
  signed int tmp_statement_expression$8;
  signed int tmp_statement_expression$6;
  if(argc >= 2)
  {
    i = 0;
    for( ; !(i >= argc); i = i + 1)
    {
      unsigned long int main$$1$$2$$1$$1$$1$$__s1_len;
      unsigned long int main$$1$$2$$1$$1$$1$$__s2_len;
      signed int return_value___builtin_strcmp$9;
      return_value___builtin_strcmp$9=__builtin_strcmp(argv[(signed long int)i], "xboard");
      tmp_statement_expression$8 = return_value___builtin_strcmp$9;
      if(tmp_statement_expression$8 == 0)
        do
        {
          flags = flags | (unsigned int)0x0400;
          dbg_printf("Set   0x%x\n", 0x0400);
        }
        while((_Bool)0);

      else
      {
        unsigned long int __s1_len;
        unsigned long int __s2_len;
        signed int return_value___builtin_strcmp$7;
        return_value___builtin_strcmp$7=__builtin_strcmp(argv[(signed long int)i], "post");
        tmp_statement_expression$6 = return_value___builtin_strcmp$7;
        if(tmp_statement_expression$6 == 0)
          do
          {
            flags = flags | (unsigned int)0x1000;
            dbg_printf("Set   0x%x\n", 0x1000);
          }
          while((_Bool)0);

      }
    }
  }

  if(opt_xboard == 1)
    do
    {
      flags = flags | (unsigned int)0x0400;
      dbg_printf("Set   0x%x\n", 0x0400);
    }
    while((_Bool)0);

  if(opt_post == 1)
    do
    {
      flags = flags | (unsigned int)0x1000;
      dbg_printf("Set   0x%x\n", 0x1000);
    }
    while((_Bool)0);

  if(opt_manual == 1)
    do
    {
      flags = flags | (unsigned int)0x0008;
      dbg_printf("Set   0x%x\n", 0x0008);
    }
    while((_Bool)0);

  cmd_version();
  signed int tmp_statement_expression$12;
  signed int tmp_statement_expression$10;
  if(opt_version == 1)
    return 0;

  else
    if(opt_help == 1)
    {
      cmd_usage();
      return 1;
    }

    else
    {
      dbg_open((const char *)(void *)0);
      HashSize = (unsigned int)0;
      if(!(opt_hash == 0))
        CalcHashSize(opt_hash);

      Initialize();
      if(opt_easy == 0)
        do
        {
          flags = flags | (unsigned int)0x4000;
          dbg_printf("Set   0x%x\n", 0x4000);
        }
        while((_Bool)0);

      if(argc >= 2)
      {
        i = 0;
        for( ; !(i >= argc); i = i + 1)
        {
          unsigned long int main$$1$$8$$1$$1$$1$$__s1_len;
          unsigned long int main$$1$$8$$1$$1$$1$$__s2_len;
          signed int return_value___builtin_strcmp$13;
          return_value___builtin_strcmp$13=__builtin_strcmp(argv[(signed long int)i], "xboard");
          tmp_statement_expression$12 = return_value___builtin_strcmp$13;
          if(tmp_statement_expression$12 == 0)
            do
            {
              flags = flags | (unsigned int)0x0400;
              dbg_printf("Set   0x%x\n", 0x0400);
            }
            while((_Bool)0);

          else
          {
            unsigned long int main$$1$$8$$1$$1$$3$$__s1_len;
            unsigned long int main$$1$$8$$1$$1$$3$$__s2_len;
            signed int return_value___builtin_strcmp$11;
            return_value___builtin_strcmp$11=__builtin_strcmp(argv[(signed long int)i], "post");
            tmp_statement_expression$10 = return_value___builtin_strcmp$11;
            if(tmp_statement_expression$10 == 0)
              do
              {
                flags = flags | (unsigned int)0x1000;
                dbg_printf("Set   0x%x\n", 0x1000);
              }
              while((_Bool)0);

          }
        }
      }

      bookmode = (signed short int)4;
      bookfirstlast = (signed short int)3;
      while((1u & flags) == 0u)
      {
        dbg_printf("Waiting for input...\n");
        wait_for_input();
        dbg_printf("Parsing input...\n");
        parse_input();
        dbg_printf("input_status = %d\n", input_status);
        if((8u & flags) == 0u && (64u & flags) == 0u && !((4u & flags) == 0u))
        {
          if((1024u & flags) == 0u)
            printf("Thinking...\n");

          Iterate();
          do
          {
            flags = flags & (unsigned int)~0x0004;
            dbg_printf("Clear 0x%x\n", 0x0004);
          }
          while((_Bool)0);
        }

        RealGameCnt = GameCnt;
        RealSide = board.side;
        dbg_printf("Waking up input...\n");
        dbg_printf("input_status = %d\n", input_status);
        input_wakeup();
        dbg_printf("input_status = %d\n", input_status);
        if((1u & flags) == 0u && !((16384u & flags) == 0u))
          ponder();

      }
      CleanupInput();
      free((void *)HashTab[(signed long int)0]);
      free((void *)HashTab[(signed long int)1]);
      dbg_close();
      return 0;
    }
}

// namecompare
// file players.c line 74
static signed int namecompare(const void *aa, const void *bb)
{
  const struct anonymous$7 *a = (const struct anonymous$7 *)aa;
  const struct anonymous$7 *b = (const struct anonymous$7 *)bb;
  signed int tmp_statement_expression$3;
  unsigned long int __s1_len;
  unsigned long int __s2_len;
  signed int return_value___builtin_strcmp$4;
  return_value___builtin_strcmp$4=__builtin_strcmp(a->player, b->player);
  tmp_statement_expression$3 = return_value___builtin_strcmp$4;
  signed int tmp_statement_expression$1;
  if(tmp_statement_expression$3 >= 1)
    return 1;

  else
  {
    unsigned long int namecompare$$1$$2$$__s1_len;
    unsigned long int namecompare$$1$$2$$__s2_len;
    signed int return_value___builtin_strcmp$2;
    return_value___builtin_strcmp$2=__builtin_strcmp(a->player, b->player);
    tmp_statement_expression$1 = return_value___builtin_strcmp$2;
    if(!(tmp_statement_expression$1 >= 0))
      return -1;

    else
      return 0;
  }
}

// nbits
// file inlines.h line 50
static inline unsigned char nbits(unsigned long int b)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b >> 48)] + (signed int)BitCount[(signed long int)(b >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b & (unsigned long int)0xffff)]);
}

// nbits$link1
// file inlines.h line 50
static inline unsigned char nbits$link1(unsigned long int b$link1)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b$link1 >> 48)] + (signed int)BitCount[(signed long int)(b$link1 >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link1 >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link1 & (unsigned long int)0xffff)]);
}

// nbits$link2
// file inlines.h line 50
static inline unsigned char nbits$link2(unsigned long int b$link2)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b$link2 >> 48)] + (signed int)BitCount[(signed long int)(b$link2 >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link2 >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link2 & (unsigned long int)0xffff)]);
}

// nbits$link3
// file inlines.h line 50
static inline unsigned char nbits$link3(unsigned long int b$link3)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b$link3 >> 48)] + (signed int)BitCount[(signed long int)(b$link3 >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link3 >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link3 & (unsigned long int)0xffff)]);
}

// nbits$link4
// file inlines.h line 50
static inline unsigned char nbits$link4(unsigned long int b$link4)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b$link4 >> 48)] + (signed int)BitCount[(signed long int)(b$link4 >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link4 >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link4 & (unsigned long int)0xffff)]);
}

// nbits$link5
// file inlines.h line 50
static inline unsigned char nbits$link5(unsigned long int b$link5)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b$link5 >> 48)] + (signed int)BitCount[(signed long int)(b$link5 >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link5 >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link5 & (unsigned long int)0xffff)]);
}

// nbits$link6
// file inlines.h line 50
static inline unsigned char nbits$link6(unsigned long int b$link6)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b$link6 >> 48)] + (signed int)BitCount[(signed long int)(b$link6 >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link6 >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link6 & (unsigned long int)0xffff)]);
}

// nbits$link7
// file inlines.h line 50
static inline unsigned char nbits$link7(unsigned long int b$link7)
{
  return (unsigned char)((signed int)BitCount[(signed long int)(b$link7 >> 48)] + (signed int)BitCount[(signed long int)(b$link7 >> 32 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link7 >> 16 & (unsigned long int)0xffff)] + (signed int)BitCount[(signed long int)(b$link7 & (unsigned long int)0xffff)]);
}

// parse_input
// file cmd.c line 944
void parse_input(void)
{
  struct anonymous *ptr;
  struct methodtable *meth;
  dbg_printf("parse_input() called, inputstr = *%s*\n", (const void *)inputstr);
  split_input();
  meth = commands;
  for( ; !(meth->name == ((const char *)NULL)); meth = meth + 1l)
  {
    signed int return_value_tokeneq$1;
    return_value_tokeneq$1=tokeneq(token[(signed long int)0], meth->name);
    if(!(return_value_tokeneq$1 == 0))
      meth->method();

  }
  ptr=ValidateMove(token[(signed long int)0]);
  if(!(ptr == ((struct anonymous *)NULL)))
  {
    SANMove(ptr->move, 1);
    MakeMove((signed int)board.side, &ptr->move);
    strcpy(Game[(signed long int)GameCnt].SANmv, SANmv);
    printf("%d. ", GameCnt / 2 + 1);
    printf("%s", token[(signed long int)0]);
    if(!(ofp == stdout))
    {
      fprintf(ofp, "%d. ", GameCnt / 2 + 1);
      fprintf(ofp, "%s", token[(signed long int)0]);
    }

    putchar(10);
    fflush(stdout);
    if(!(ofp == stdout))
    {
      fputc(10, ofp);
      fflush(ofp);
    }

    if((1024u & flags) == 0u)
      ShowBoard();

    do
    {
      flags = flags | (unsigned int)0x0004;
      dbg_printf("Set   0x%x\n", 0x0004);
    }
    while((_Bool)0);
  }

  else
  {
    printf("Illegal move: %s\n", token[(signed long int)0]);
    fflush(stdout);
  }
}

// pick
// file common.h line 647
void pick(struct anonymous *head, signed short int ply)
{
  signed int best;
  struct anonymous *p;
  struct anonymous *pbest;
  struct anonymous tmp;
  best = head->score;
  pbest = head;
  p = head + (signed long int)1;
  for( ; !(p >= TreePtr[(signed long int)(1 + (signed int)ply)]); p = p + 1l)
    if(!(best >= p->score))
    {
      pbest = p;
      best = p->score;
    }

  tmp = *head;
  *head = *pbest;
  *pbest = tmp;
}

// piece_id
// file move.c line 503
static inline signed int piece_id(const char c)
{
  switch((signed int)c)
  {
    case 110:

    case 78:
      return 2;
    case 66:
      return 3;
    case 114:

    case 82:
      return 4;
    case 113:

    case 81:
      return 5;
    case 107:

    case 75:
      return 6;
    case 112:

    case 80:
      return 1;
    default:
      return 0;
  }
}

// ponder
// file common.h line 756
void ponder(void)
{
  const unsigned int saved_flags = flags;
  const signed int nmfb = nmovesfrombook;
  do
  {
    flags = flags & (unsigned int)~0x0800;
    dbg_printf("Clear 0x%x\n", 0x0800);
  }
  while((_Bool)0);
  do
  {
    flags = flags | (unsigned int)0x2000;
    dbg_printf("Set   0x%x\n", 0x2000);
  }
  while((_Bool)0);
  dbg_printf("Pondering, GameCnt = %d\n", GameCnt);
  Iterate();
  dbg_printf("Pondering ended, GameCnt = %d\n", GameCnt);
  flags = saved_flags;
  nmovesfrombook = nmfb;
}

// putchar
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar(signed int __c)
{
  signed int return_value__IO_putc$1;
  return_value__IO_putc$1=_IO_putc(__c, stdout);
  return return_value__IO_putc$1;
}

// putchar$link1
// file /usr/include/x86_64-linux-gnu/bits/stdio.h line 79
static inline signed int putchar$link1(signed int __c$link1)
{
  signed int return_value__IO_putc$1$link1;
  return_value__IO_putc$1$link1=_IO_putc(__c$link1, stdout);
  return return_value__IO_putc$1$link1;
}

// read_book
// file book.c line 280
static signed int read_book(struct _IO_FILE *f)
{
  if(!(book_allocated == 0))
  {
    free((void *)bookpos);
    book_allocated = 0;
  }

  void *return_value_calloc$1;
  return_value_calloc$1=calloc(1UL << digest_bits, sizeof(struct hashtype) /*16ul*/ );
  bookpos = (struct hashtype *)return_value_calloc$1;
  unsigned long int return_value_fread$2;
  if(bookpos == ((struct hashtype *)NULL))
    return 7;

  else
  {
    book_allocated = 1;
    bookcnt = 0;
    bookhashcollisions = 0;
    do
    {
      return_value_fread$2=fread((void *)&buf, sizeof(unsigned char [14l]) /*14ul*/ , (unsigned long int)1, f);
      if(!(return_value_fread$2 == 1ul))
        break;

      buf_to_book();
      bookcnt = bookcnt + 1;
    }
    while((_Bool)1);
    return 0;
  }
}

// read_size
// file book.c line 116
static unsigned int read_size(struct _IO_FILE *f)
{
  unsigned char sizebuf[4l];
  unsigned int size = (unsigned int)0;
  signed int k;
  unsigned long int return_value_fread$1;
  return_value_fread$1=fread((void *)&sizebuf, sizeof(unsigned char [4l]) /*4ul*/ , (unsigned long int)1, f);
  if(!(return_value_fread$1 == 1ul))
    return (unsigned int)0;

  else
  {
    k = 0;
    for( ; !(k >= 4); k = k + 1)
      size = size << 8 | (unsigned int)sizebuf[(signed long int)k];
    return size;
  }
}

// return_append_str
// file lexpgn.l line 70
char * return_append_str(char *dest, const char *s)
{
  char *newloc;
  unsigned long int newlen;
  if(dest == ((char *)NULL))
  {
    unsigned long int return_value_strlen$1;
    return_value_strlen$1=strlen(s);
    void *return_value_malloc$2;
    return_value_malloc$2=malloc(return_value_strlen$1);
    newloc = (char *)return_value_malloc$2 + (signed long int)1;
    strcpy(newloc, s);
    return newloc;
  }

  unsigned long int return_value_strlen$3;
  return_value_strlen$3=strlen(dest);
  unsigned long int return_value_strlen$4;
  return_value_strlen$4=strlen(s);
  newlen = return_value_strlen$3 + return_value_strlen$4 + (unsigned long int)1;
  void *return_value_malloc$5;
  return_value_malloc$5=malloc(newlen);
  newloc = (char *)return_value_malloc$5;
  strcpy(newloc, dest);
  if(newloc == ((char *)NULL))
    return dest;

  else
  {
    strcat(newloc, s);
    return newloc;
  }
}

// rscorecompare
// file players.c line 50
static signed int rscorecompare(const void *aa, const void *bb)
{
  const struct anonymous$7 *a = (const struct anonymous$7 *)aa;
  const struct anonymous$7 *b = (const struct anonymous$7 *)bb;
  float ascore;
  float bscore;
  ascore = (float)((a->wins + a->draws / 2) / (a->wins + a->draws + a->losses));
  bscore = (float)((b->wins + b->draws / 2) / (b->wins + b->draws + b->losses));
  if(ascore > bscore)
    return -1;

  else
    if(bscore > ascore)
      return 1;

    else
      return 0;
}

// scorecompare
// file players.c line 62
static signed int scorecompare(const void *aa, const void *bb)
{
  const struct anonymous$7 *a = (const struct anonymous$7 *)aa;
  const struct anonymous$7 *b = (const struct anonymous$7 *)bb;
  signed int ascore;
  signed int bscore;
  ascore = (100 * (a->wins + a->draws / 2)) / (a->wins + a->draws + a->losses);
  bscore = (100 * (b->wins + b->draws / 2)) / (b->wins + b->draws + b->losses);
  if(!(ascore >= bscore))
    return 1;

  else
    if(!(bscore >= ascore))
      return -1;

    else
      return 0;
}

// split_input
// file cmd.c line 57
static void split_input(void)
{
  char *s;
  char *r;
  signed int k = 0;
  r = inputstr;
  s = r;
  const unsigned short int **return_value___ctype_b_loc$1;
  const unsigned short int **return_value___ctype_b_loc$2;
  char *tmp_post$3;
  for( ; !(k >= 3); k = k + 1)
  {
    do
    {
      return_value___ctype_b_loc$1=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*s]) == 0)
        break;

      s = s + 1l;
    }
    while((_Bool)1);
    token[(signed long int)k] = s;
    for( ; !(*s == 0); r = tmp_post$3)
    {
      return_value___ctype_b_loc$2=__ctype_b_loc();
      if(!((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*s]) == 0))
        break;

      tmp_post$3 = s;
      s = s + 1l;
    }
  }
  const unsigned short int **return_value___ctype_b_loc$4;
  const unsigned short int **return_value___ctype_b_loc$5;
  char *tmp_post$6;
  while(!(*s == 0))
  {
    do
    {
      return_value___ctype_b_loc$4=__ctype_b_loc();
      if((8192 & (signed int)(*return_value___ctype_b_loc$4)[(signed long int)(signed int)*s]) == 0)
        break;

      s = s + 1l;
    }
    while((_Bool)1);
    for( ; !(*s == 0); r = tmp_post$6)
    {
      return_value___ctype_b_loc$5=__ctype_b_loc();
      if(!((8192 & (signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*s]) == 0))
        break;

      tmp_post$6 = s;
      s = s + 1l;
    }
  }
  r[(signed long int)1] = (char)0;
}

// tokeneq
// file cmd.c line 81
static signed int tokeneq(const char *s, const char *t)
{
  const unsigned short int **return_value___ctype_b_loc$1;
  const unsigned short int **return_value___ctype_b_loc$2;
  const char *tmp_post$3;
  const char *tmp_post$4;
  while(!(*s == 0))
  {
    if(*t == 0)
      break;

    return_value___ctype_b_loc$1=__ctype_b_loc();
    if(!((8192 & (signed int)(*return_value___ctype_b_loc$1)[(signed long int)(signed int)*s]) == 0))
      break;

    return_value___ctype_b_loc$2=__ctype_b_loc();
    if(!((8192 & (signed int)(*return_value___ctype_b_loc$2)[(signed long int)(signed int)*t]) == 0))
      break;

    tmp_post$3 = s;
    s = s + 1l;
    tmp_post$4 = t;
    t = t + 1l;
    if(!(*tmp_post$3 == *tmp_post$4))
      return 0;

  }
  _Bool tmp_if_expr$6;
  const unsigned short int **return_value___ctype_b_loc$5;
  if(*s == 0)
    tmp_if_expr$6 = (_Bool)1;

  else
  {
    return_value___ctype_b_loc$5=__ctype_b_loc();
    tmp_if_expr$6 = ((signed int)(*return_value___ctype_b_loc$5)[(signed long int)(signed int)*s] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
  }
  _Bool tmp_if_expr$9;
  _Bool tmp_if_expr$8;
  const unsigned short int **return_value___ctype_b_loc$7;
  if(tmp_if_expr$6)
  {
    if(*t == 0)
      tmp_if_expr$8 = (_Bool)1;

    else
    {
      return_value___ctype_b_loc$7=__ctype_b_loc();
      tmp_if_expr$8 = ((signed int)(*return_value___ctype_b_loc$7)[(signed long int)(signed int)*t] & (signed int)(unsigned short int)8192) != 0 ? (_Bool)1 : (_Bool)0;
    }
    tmp_if_expr$9 = tmp_if_expr$8 ? (_Bool)1 : (_Bool)0;
  }

  else
    tmp_if_expr$9 = (_Bool)0;
  return (signed int)tmp_if_expr$9;
}

// tolower
// file /usr/include/ctype.h line 215
static inline signed int tolower(signed int __c)
{
  signed int tmp_if_expr$2;
  const signed int **return_value___ctype_tolower_loc$1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_tolower_loc$1=__ctype_tolower_loc();
    tmp_if_expr$2 = (*return_value___ctype_tolower_loc$1)[(signed long int)__c];
  }

  else
    tmp_if_expr$2 = __c;
  return tmp_if_expr$2;
}

// toupper
// file /usr/include/ctype.h line 221
static inline signed int toupper(signed int __c)
{
  signed int tmp_if_expr$2;
  const signed int **return_value___ctype_toupper_loc$1;
  if(__c >= -128 && !(__c >= 256))
  {
    return_value___ctype_toupper_loc$1=__ctype_toupper_loc();
    tmp_if_expr$2 = (*return_value___ctype_toupper_loc$1)[(signed long int)__c];
  }

  else
    tmp_if_expr$2 = __c;
  return tmp_if_expr$2;
}

// wait_for_input
// file input.c line 163
void wait_for_input(void)
{
  while(input_status == 0)
  {
    pthread_mutex_lock(&input_mutex);
    if(input_status == 0)
      pthread_cond_wait(&input_cond, &input_mutex);

    pthread_mutex_unlock(&input_mutex);
  }
}

// write_magic
// file book.c line 88
static signed int write_magic(struct _IO_FILE *f)
{
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite((const void *)&magic_str, (unsigned long int)1, (unsigned long int)5, f);
  if(!(return_value_fwrite$1 == 5ul))
    return 3;

  else
    return 0;
}

// write_size
// file book.c line 99
static signed int write_size(struct _IO_FILE *f, unsigned int size)
{
  unsigned char sizebuf[4l];
  signed int k = 0;
  for( ; !(k >= 4); k = k + 1)
    sizebuf[(signed long int)k] = (unsigned char)(size >> (3 - k) * 8 & (unsigned int)0xff);
  unsigned long int return_value_fwrite$1;
  return_value_fwrite$1=fwrite((const void *)&sizebuf, sizeof(unsigned char [4l]) /*4ul*/ , (unsigned long int)1, f);
  if(return_value_fwrite$1 == 1ul)
    return 0;

  else
    return 3;
}

// yy_create_buffer
// file lexpgn.c line 2982
struct yy_buffer_state * yy_create_buffer(struct _IO_FILE *file, signed int size)
{
  struct yy_buffer_state *b;
  void *return_value_yy_flex_alloc$1;
  return_value_yy_flex_alloc$1=yy_flex_alloc((unsigned int)sizeof(struct yy_buffer_state) /*56ul*/ );
  b = (struct yy_buffer_state *)return_value_yy_flex_alloc$1;
  if(b == ((struct yy_buffer_state *)NULL))
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");

  b->yy_buf_size = (unsigned int)size;
  void *return_value_yy_flex_alloc$2;
  return_value_yy_flex_alloc$2=yy_flex_alloc(b->yy_buf_size + (unsigned int)2);
  b->yy_ch_buf = (char *)return_value_yy_flex_alloc$2;
  if(b->yy_ch_buf == ((char *)NULL))
    yy_fatal_error("out of dynamic memory in yy_create_buffer()");

  b->yy_is_our_buffer = 1;
  yy_init_buffer(b, file);
  return b;
}

// yy_delete_buffer
// file lexpgn.c line 3013
void yy_delete_buffer(struct yy_buffer_state *b)
{
  if(!(b == ((struct yy_buffer_state *)NULL)))
  {
    if(b == yy_current_buffer)
      yy_current_buffer = (struct yy_buffer_state *)0;

    if(!(b->yy_is_our_buffer == 0))
      yy_flex_free((void *)b->yy_ch_buf);

    yy_flex_free((void *)b);
  }

}

// yy_fatal_error
// file lexpgn.c line 3241
static void yy_fatal_error(const char *msg)
{
  fprintf(stderr, "%s\n", msg);
  exit(2);
}

// yy_flex_alloc
// file lexpgn.c line 3305
static void * yy_flex_alloc(unsigned int size)
{
  void *return_value_malloc$1;
  return_value_malloc$1=malloc((unsigned long int)size);
  return (void *)return_value_malloc$1;
}

// yy_flex_free
// file lexpgn.c line 3333
static void yy_flex_free(void *ptr)
{
  free(ptr);
}

// yy_flex_realloc
// file lexpgn.c line 3315
static void * yy_flex_realloc(void *ptr, unsigned int size)
{
  void *return_value_realloc$1;
  return_value_realloc$1=realloc((void *)(char *)ptr, (unsigned long int)size);
  return (void *)return_value_realloc$1;
}

// yy_flush_buffer
// file lexpgn.c line 3061
void yy_flush_buffer(struct yy_buffer_state *b)
{
  if(!(b == ((struct yy_buffer_state *)NULL)))
  {
    b->yy_n_chars = 0;
    b->yy_ch_buf[(signed long int)0] = (char)0;
    b->yy_ch_buf[(signed long int)1] = (char)0;
    b->yy_buf_pos = &b->yy_ch_buf[(signed long int)0];
    b->yy_at_bol = 1;
    b->yy_buffer_status = 0;
    if(b == yy_current_buffer)
      yy_load_buffer_state();

  }

}

// yy_get_next_buffer
// file lexpgn.c line 2661
static signed int yy_get_next_buffer(void)
{
  char *dest = yy_current_buffer->yy_ch_buf;
  char *source = yytext;
  signed int number_to_move;
  signed int i;
  signed int ret_val;
  if(!(yy_current_buffer->yy_ch_buf + (signed long int)(1 + yy_n_chars) >= yy_c_buf_p))
    yy_fatal_error("fatal flex scanner internal error--end of buffer missed");

  char *tmp_post$1;
  char *tmp_post$2;
  if(yy_current_buffer->yy_fill_buffer == 0)
  {
    if(yy_c_buf_p - yytext == 1l)
      return 1;

    return 2;
  }

  else
  {
    number_to_move = (signed int)(yy_c_buf_p - yytext) - 1;
    i = 0;
    for( ; !(i >= number_to_move); i = i + 1)
    {
      tmp_post$1 = dest;
      dest = dest + 1l;
      tmp_post$2 = source;
      source = source + 1l;
      *tmp_post$1 = *tmp_post$2;
    }
    if(yy_current_buffer->yy_buffer_status == 2)
    {
      yy_n_chars = 0;
      yy_current_buffer->yy_n_chars = yy_n_chars;
    }

    else
    {
      signed int num_to_read = (signed int)((yy_current_buffer->yy_buf_size - (unsigned int)number_to_move) - (unsigned int)1);
      while(!(num_to_read >= 1))
      {
        struct yy_buffer_state *b = yy_current_buffer;
        signed int yy_c_buf_p_offset = (signed int)(yy_c_buf_p - b->yy_ch_buf);
        if(!(b->yy_is_our_buffer == 0))
        {
          signed int new_size = (signed int)(b->yy_buf_size * (unsigned int)2);
          if(!(new_size >= 1))
            b->yy_buf_size = b->yy_buf_size + b->yy_buf_size / (unsigned int)8;

          else
            b->yy_buf_size = b->yy_buf_size * (unsigned int)2;
          void *return_value_yy_flex_realloc$3;
          return_value_yy_flex_realloc$3=yy_flex_realloc((void *)b->yy_ch_buf, b->yy_buf_size + (unsigned int)2);
          b->yy_ch_buf = (char *)return_value_yy_flex_realloc$3;
        }

        else
          b->yy_ch_buf = ((char *)NULL);
        if(b->yy_ch_buf == ((char *)NULL))
          yy_fatal_error("fatal error - scanner input buffer overflow");

        yy_c_buf_p = &b->yy_ch_buf[(signed long int)yy_c_buf_p_offset];
        num_to_read = (signed int)((yy_current_buffer->yy_buf_size - (unsigned int)number_to_move) - (unsigned int)1);
      }
      if(num_to_read >= 8193)
        num_to_read = 8192;

      signed int return_value_fileno$4;
      return_value_fileno$4=fileno(yyin);
      signed long int return_value_read$5;
      return_value_read$5=read(return_value_fileno$4, (void *)(char *)&yy_current_buffer->yy_ch_buf[(signed long int)number_to_move], (unsigned long int)num_to_read);
      yy_n_chars = (signed int)return_value_read$5;
      if(!(yy_n_chars >= 0))
        yy_fatal_error("input in flex scanner failed");

      yy_current_buffer->yy_n_chars = yy_n_chars;
    }
    if(yy_n_chars == 0)
    {
      if(number_to_move == 0)
      {
        ret_val = 1;
        yyrestart(yyin);
      }

      else
      {
        ret_val = 2;
        yy_current_buffer->yy_buffer_status = 2;
      }
    }

    else
      ret_val = 0;
    yy_n_chars = yy_n_chars + number_to_move;
    yy_current_buffer->yy_ch_buf[(signed long int)yy_n_chars] = (char)0;
    yy_current_buffer->yy_ch_buf[(signed long int)(yy_n_chars + 1)] = (char)0;
    yytext = &yy_current_buffer->yy_ch_buf[(signed long int)0];
    return ret_val;
  }
}

// yy_get_previous_state
// file lexpgn.c line 2793
static signed int yy_get_previous_state(void)
{
  signed int yy_current_state;
  char *yy_cp;
  yy_current_state = yy_start;
  yy_current_state = yy_current_state + yy_current_buffer->yy_at_bol;
  yy_cp = yytext + (signed long int)0;
  signed int tmp_if_expr$1;
  for( ; !(yy_cp >= yy_c_buf_p); yy_cp = yy_cp + 1l)
  {
    if(!(*yy_cp == 0))
      tmp_if_expr$1 = yy_ec[(signed long int)(unsigned int)(unsigned char)*yy_cp];

    else
      tmp_if_expr$1 = 1;
    yy_current_state = (signed int)yy_nxt[(signed long int)yy_current_state][(signed long int)tmp_if_expr$1];
    if(!(yy_accept[(signed long int)yy_current_state] == 0))
    {
      yy_last_accepting_state = yy_current_state;
      yy_last_accepting_cpos = yy_cp;
    }

  }
  return yy_current_state;
}

// yy_init_buffer
// file lexpgn.c line 3034
void yy_init_buffer(struct yy_buffer_state *b, struct _IO_FILE *file)
{
  yy_flush_buffer(b);
  b->yy_input_file = file;
  b->yy_fill_buffer = 1;
  signed int tmp_if_expr$3;
  signed int return_value_fileno$1;
  signed int return_value_isatty$2;
  if(!(file == ((struct _IO_FILE *)NULL)))
  {
    return_value_fileno$1=fileno(file);
    return_value_isatty$2=isatty(return_value_fileno$1);
    tmp_if_expr$3 = (signed int)(return_value_isatty$2 > 0);
  }

  else
    tmp_if_expr$3 = 0;
  b->yy_is_interactive = tmp_if_expr$3;
}

// yy_load_buffer_state
// file lexpgn.c line 2969
void yy_load_buffer_state(void)
{
  yy_n_chars = yy_current_buffer->yy_n_chars;
  yy_c_buf_p = yy_current_buffer->yy_buf_pos;
  yytext = yy_c_buf_p;
  yyin = yy_current_buffer->yy_input_file;
  yy_hold_char = *yy_c_buf_p;
}

// yy_scan_buffer
// file lexpgn.c line 3092
struct yy_buffer_state * yy_scan_buffer(char *base, unsigned int size)
{
  struct yy_buffer_state *b;
  _Bool tmp_if_expr$1;
  if(!(size >= 2u))
    tmp_if_expr$1 = (_Bool)1;

  else
    tmp_if_expr$1 = (signed int)base[(signed long int)(size - (unsigned int)2)] != 0 ? (_Bool)1 : (_Bool)0;
  _Bool tmp_if_expr$2;
  if(tmp_if_expr$1)
    tmp_if_expr$2 = (_Bool)1;

  else
    tmp_if_expr$2 = (signed int)base[(signed long int)(size - (unsigned int)1)] != 0 ? (_Bool)1 : (_Bool)0;
  if(tmp_if_expr$2)
    return ((struct yy_buffer_state *)NULL);

  else
  {
    void *return_value_yy_flex_alloc$3;
    return_value_yy_flex_alloc$3=yy_flex_alloc((unsigned int)sizeof(struct yy_buffer_state) /*56ul*/ );
    b = (struct yy_buffer_state *)return_value_yy_flex_alloc$3;
    if(b == ((struct yy_buffer_state *)NULL))
      yy_fatal_error("out of dynamic memory in yy_scan_buffer()");

    b->yy_buf_size = size - (unsigned int)2;
    b->yy_ch_buf = base;
    b->yy_buf_pos = b->yy_ch_buf;
    b->yy_is_our_buffer = 0;
    b->yy_input_file = ((struct _IO_FILE *)NULL);
    b->yy_n_chars = (signed int)b->yy_buf_size;
    b->yy_is_interactive = 0;
    b->yy_at_bol = 1;
    b->yy_fill_buffer = 0;
    b->yy_buffer_status = 0;
    yy_switch_to_buffer(b);
    return b;
  }
}

// yy_scan_bytes
// file lexpgn.c line 3147
struct yy_buffer_state * yy_scan_bytes(const char *bytes, signed int len)
{
  struct yy_buffer_state *b;
  char *yy_scan_bytes$$1$$buf;
  unsigned int yy_scan_bytes$$1$$n;
  signed int i;
  yy_scan_bytes$$1$$n = (unsigned int)(len + 2);
  void *return_value_yy_flex_alloc$1;
  return_value_yy_flex_alloc$1=yy_flex_alloc(yy_scan_bytes$$1$$n);
  yy_scan_bytes$$1$$buf = (char *)return_value_yy_flex_alloc$1;
  if(yy_scan_bytes$$1$$buf == ((char *)NULL))
    yy_fatal_error("out of dynamic memory in yy_scan_bytes()");

  i = 0;
  for( ; !(i >= len); i = i + 1)
    yy_scan_bytes$$1$$buf[(signed long int)i] = bytes[(signed long int)i];
  yy_scan_bytes$$1$$buf[(signed long int)(len + 1)] = (char)0;
  yy_scan_bytes$$1$$buf[(signed long int)len] = yy_scan_bytes$$1$$buf[(signed long int)(len + 1)];
  b=yy_scan_buffer(yy_scan_bytes$$1$$buf, yy_scan_bytes$$1$$n);
  if(b == ((struct yy_buffer_state *)NULL))
    yy_fatal_error("bad buffer in yy_scan_bytes()");

  b->yy_is_our_buffer = 1;
  return b;
}

// yy_scan_string
// file lexpgn.c line 3130
struct yy_buffer_state * yy_scan_string(const char *yy_str)
{
  signed int len = 0;
  for( ; !(yy_str[(signed long int)len] == 0); len = len + 1)
    ;
  struct yy_buffer_state *return_value_yy_scan_bytes$1;
  return_value_yy_scan_bytes$1=yy_scan_bytes(yy_str, len);
  return return_value_yy_scan_bytes$1;
}

// yy_switch_to_buffer
// file lexpgn.c line 2939
void yy_switch_to_buffer(struct yy_buffer_state *new_buffer)
{
  if(!(yy_current_buffer == new_buffer))
  {
    if(!(yy_current_buffer == ((struct yy_buffer_state *)NULL)))
    {
      *yy_c_buf_p = yy_hold_char;
      yy_current_buffer->yy_buf_pos = yy_c_buf_p;
      yy_current_buffer->yy_n_chars = yy_n_chars;
    }

    yy_current_buffer = new_buffer;
    yy_load_buffer_state();
    yy_did_buffer_switch_on_eof = 1;
  }

}

// yy_try_NUL_trans
// file lexpgn.c line 2822
static signed int yy_try_NUL_trans(signed int yy_current_state)
{
  signed int yy_is_jam;
  char *yy_cp = yy_c_buf_p;
  yy_current_state = (signed int)yy_nxt[(signed long int)yy_current_state][(signed long int)1];
  yy_is_jam = (signed int)(yy_current_state <= 0);
  if(yy_is_jam == 0)
  {
    if(!(yy_accept[(signed long int)yy_current_state] == 0))
    {
      yy_last_accepting_state = yy_current_state;
      yy_last_accepting_cpos = yy_cp;
    }

  }

  return yy_is_jam != 0 ? 0 : yy_current_state;
}

// yylex
// file pgn.c line 44
signed int yylex(void)
{
  signed int yy_current_state;
  char *yy_cp = (char *)(void *)0;
  char *yy_bp = (char *)(void *)0;
  signed int yy_act;
  signed int seen_tags = 0;
  signed int seen_moves = 0;
  enum tagtype ctag = (enum tagtype)NO_TAG;
  signed int firstmovenum = -1;
  signed int side = 0;
  signed int rav_count = 0;
  signed int result = 4;
  char tagname[80l];
  struct anonymous *p;
  signed int addtobook[2l];
  addtobook[(signed long int)0] = 0;
  addtobook[(signed long int)1] = 0;
  if(!(yy_init == 0))
  {
    yy_init = 0;
    if(yy_start == 0)
      yy_start = 1;

    if(yyin == ((struct _IO_FILE *)NULL))
      yyin = stdin;

    if(yyout == ((struct _IO_FILE *)NULL))
      yyout = stdout;

    if(yy_current_buffer == ((struct yy_buffer_state *)NULL))
      yy_current_buffer=yy_create_buffer(yyin, 16384);

    yy_load_buffer_state();
  }

  signed int return_value_IsTrustedPlayer$1;
  char *return_value___strdup$2;
  signed int return_value_IsTrustedPlayer$3;
  char *return_value___strdup$4;
  signed int tmp_statement_expression$9;
  signed int tmp_statement_expression$7;
  signed int tmp_statement_expression$5;
  char *return_value___strdup$11;
  signed int tmp_statement_expression$12;
  _Bool tmp_if_expr$16;
  signed int tmp_statement_expression$14;
  _Bool tmp_if_expr$19;
  signed int tmp_statement_expression$17;
  signed int tmp_statement_expression$20;
  _Bool tmp_if_expr$24;
  signed int tmp_statement_expression$22;
  _Bool tmp_if_expr$27;
  signed int tmp_statement_expression$25;
  char *return_value___strdup$28;
  char *return_value___strdup$29;
  char *return_value___strdup$30;
  char *return_value___strdup$31;
  char *return_value___strdup$32;
  char *return_value___strdup$33;
  signed int yy_amount_of_matched_text;
  signed int return_value_yy_get_next_buffer$35;
  while((_Bool)1)
  {
    yy_cp = yy_c_buf_p;
    *yy_cp = yy_hold_char;
    yy_bp = yy_cp;
    yy_current_state = yy_start;
    yy_current_state = yy_current_state + yy_current_buffer->yy_at_bol;
    do
    {

    yy_match:
      ;
      yy_current_state = (signed int)yy_nxt[(signed long int)yy_current_state][(signed long int)yy_ec[(signed long int)(unsigned int)(unsigned char)*yy_cp]];
      if(yy_current_state >= 1)
      {
        if(!(yy_accept[(signed long int)yy_current_state] == 0))
        {
          yy_last_accepting_state = yy_current_state;
          yy_last_accepting_cpos = yy_cp;
        }

        yy_cp = yy_cp + 1l;
        goto yy_match;
      }

      yy_current_state = -yy_current_state;

    yy_find_action:
      ;
      yy_act = (signed int)yy_accept[(signed long int)yy_current_state];
      yytext = yy_bp;
      yyleng = (signed int)(yy_cp - yy_bp);
      yy_hold_char = *yy_cp;
      *yy_cp = (char)0;
      yy_c_buf_p = yy_cp;

    do_action:
      ;
      for( ; (_Bool)1; yy_act = 52 + (yy_start - 1) / 2 + 1)
      {
        if(!(yy_act == 0))
        {
          if(yy_act == 1)
            goto __CPROVER_DUMP_L12;

          if(yy_act == 2)
            goto __CPROVER_DUMP_L14;

          if(yy_act == 3)
            goto __CPROVER_DUMP_L16;

          if(yy_act == 4)
            goto __CPROVER_DUMP_L22;

          if(yy_act == 5)
            goto __CPROVER_DUMP_L24;

          if(yy_act == 6)
            goto __CPROVER_DUMP_L26;

          if(yy_act == 7)
            goto __CPROVER_DUMP_L28;

          if(yy_act == 8)
            goto __CPROVER_DUMP_L30;

          if(yy_act == 9)
            goto __CPROVER_DUMP_L32;

          if(yy_act == 10)
            goto __CPROVER_DUMP_L34;

          if(yy_act == 11)
            goto __CPROVER_DUMP_L36;

          if(yy_act == 12)
            goto __CPROVER_DUMP_L38;

          if(yy_act == 13)
            goto __CPROVER_DUMP_L40;

          if(yy_act == 14)
            goto __CPROVER_DUMP_L42;

          if(yy_act == 15)
            goto __CPROVER_DUMP_L44;

          if(yy_act == 16)
            goto __CPROVER_DUMP_L46;

          if(yy_act == 17)
            goto __CPROVER_DUMP_L48;

          if(yy_act == 18)
            goto __CPROVER_DUMP_L51;

          if(yy_act == 19)
            goto __CPROVER_DUMP_L53;

          if(yy_act == 20)
            goto __CPROVER_DUMP_L55;

          if(yy_act == 21)
            goto __CPROVER_DUMP_L57;

          if(yy_act == 22)
            goto __CPROVER_DUMP_L59;

          if(yy_act == 23)
            goto __CPROVER_DUMP_L61;

          if(yy_act == 24)
            goto __CPROVER_DUMP_L106;

          if(yy_act == 25)
            goto __CPROVER_DUMP_L108;

          if(yy_act == 26)
            goto __CPROVER_DUMP_L110;

          if(yy_act == 27)
            goto __CPROVER_DUMP_L112;

          if(yy_act == 28)
            goto __CPROVER_DUMP_L114;

          if(yy_act == 29)
            goto __CPROVER_DUMP_L116;

          if(yy_act == 30)
            goto __CPROVER_DUMP_L118;

          if(yy_act == 31)
            goto __CPROVER_DUMP_L120;

          if(yy_act == 32)
            goto __CPROVER_DUMP_L122;

          if(yy_act == 33)
            goto __CPROVER_DUMP_L124;

          if(yy_act == 34)
            goto __CPROVER_DUMP_L126;

          if(yy_act == 35)
            goto __CPROVER_DUMP_L128;

          if(yy_act == 36)
            goto __CPROVER_DUMP_L130;

          if(yy_act == 37)
            goto __CPROVER_DUMP_L132;

          if(yy_act == 38)
            goto __CPROVER_DUMP_L134;

          if(yy_act == 39)
            goto __CPROVER_DUMP_L136;

          if(yy_act == 40)
            goto __CPROVER_DUMP_L138;

          if(yy_act == 41)
            goto __CPROVER_DUMP_L140;

          if(yy_act == 42)
            goto __CPROVER_DUMP_L143;

          if(yy_act == 43)
            goto __CPROVER_DUMP_L145;

          if(yy_act == 44)
            goto __CPROVER_DUMP_L152;

          if(yy_act == 45)
            goto __CPROVER_DUMP_L154;

          if(yy_act == 46)
            goto __CPROVER_DUMP_L156;

          if(yy_act == 47)
            goto __CPROVER_DUMP_L159;

          if(yy_act == 48)
            goto __CPROVER_DUMP_L161;

          if(yy_act == 49)
            goto __CPROVER_DUMP_L163;

          if(yy_act == 50)
            goto __CPROVER_DUMP_L165;

          if(yy_act == 51)
            goto __CPROVER_DUMP_L167;

          if(yy_act == 1 || yy_act == 1 || yy_act == 1 || yy_act == 1 || yy_act == 1 || yy_act == 1 || yy_act == 1 || yy_act == 1)
            goto __CPROVER_DUMP_L169;

          if(yy_act == 52)
            goto __CPROVER_DUMP_L171;

          goto __CPROVER_DUMP_L182;
        }

        *yy_cp = yy_hold_char;
        yy_cp = yy_last_accepting_cpos + (signed long int)1;
        yy_current_state = yy_last_accepting_state;
        goto yy_find_action;

      __CPROVER_DUMP_L12:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L14:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L16:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        seen_tags = 1;
        ctag = (enum tagtype)NO_TAG;
        if(!(seen_moves == 0))
        {
          yy_start = 1 + 2 * 0;
          do
          {
            *yy_cp = yy_hold_char;
            yy_cp = (yy_bp + (signed long int)0) - (signed long int)0;
            yy_c_buf_p = yy_cp;
            yytext = yy_bp;
            yyleng = (signed int)(yy_cp - yy_bp);
            yy_hold_char = *yy_cp;
            *yy_cp = (char)0;
            yy_c_buf_p = yy_cp;
          }
          while((_Bool)0);
          return 0;
        }

        if((signed int)data_dest == DEST_TRASH)
          yy_start = 1 + 2 * 1;

        else
          yy_start = 1 + 2 * 2;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L22:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L24:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)WHITE_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L26:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)BLACK_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L28:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)RESULT_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L30:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)WHITETITLE_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L32:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)BLACKTITLE_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L34:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)FEN_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L36:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)EVENT_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L38:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)SITE_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L40:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)DATE_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L42:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)ROUND_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L44:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)WHITE_ELO_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L46:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)BLACK_ELO_TAG;
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L48:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        ctag = (enum tagtype)OTHER_TAG;
        if((unsigned long int)yyleng >= 79ul)
        {
          printf("Error, tagname too long: %s", yytext);
          return 1;
        }

        __builtin_strncpy(tagname, yytext, sizeof(char [80l]) /*80ul*/  - (unsigned long int)1);
        yy_start = 1 + 2 * 3;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L51:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L53:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L55:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        printf("Bad character as tag name: %s\n", yytext);
        return 1;

      __CPROVER_DUMP_L57:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 4;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L59:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        printf("Bad character as tag separator: %s\n", yytext);
        return 1;

      __CPROVER_DUMP_L61:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 5;
        switch((signed int)ctag)
        {
          case WHITE_TAG:
          {
            if((signed int)data_dest == DEST_BOOK)
            {
              return_value_IsTrustedPlayer$1=IsTrustedPlayer(yytext);
              if(!(return_value_IsTrustedPlayer$1 == 0))
                addtobook[(signed long int)0] = 1;

            }

            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$2=__strdup(yytext);
              pgn_white = return_value___strdup$2;
            }

            goto __CPROVER_DUMP_L105;
          }
          case BLACK_TAG:
          {
            if((signed int)data_dest == DEST_BOOK)
            {
              return_value_IsTrustedPlayer$3=IsTrustedPlayer(yytext);
              if(!(return_value_IsTrustedPlayer$3 == 0))
                addtobook[(signed long int)1] = 1;

            }

            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$4=__strdup(yytext);
              pgn_black = return_value___strdup$4;
            }

            goto __CPROVER_DUMP_L105;
          }
          case RESULT_TAG:
          {
            unsigned long int yylex$$1$$2$$2$$23$$1$$3$$__s1_len;
            unsigned long int yylex$$1$$2$$2$$23$$1$$3$$__s2_len;
            signed int return_value___builtin_strcmp$10;
            return_value___builtin_strcmp$10=__builtin_strcmp(yytext, "1-0");
            tmp_statement_expression$9 = return_value___builtin_strcmp$10;
            if(tmp_statement_expression$9 == 0)
              result = 1;

            else
            {
              unsigned long int yylex$$1$$2$$2$$23$$1$$4$$__s1_len;
              unsigned long int yylex$$1$$2$$2$$23$$1$$4$$__s2_len;
              signed int return_value___builtin_strcmp$8;
              return_value___builtin_strcmp$8=__builtin_strcmp(yytext, "0-1");
              tmp_statement_expression$7 = return_value___builtin_strcmp$8;
              if(tmp_statement_expression$7 == 0)
                result = 2;

              else
              {
                unsigned long int yylex$$1$$2$$2$$23$$1$$5$$__s1_len;
                unsigned long int yylex$$1$$2$$2$$23$$1$$5$$__s2_len;
                signed int return_value___builtin_strcmp$6;
                return_value___builtin_strcmp$6=__builtin_strcmp(yytext, "1/2-1/2");
                tmp_statement_expression$5 = return_value___builtin_strcmp$6;
                if(tmp_statement_expression$5 == 0)
                  result = 3;

              }
            }
            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$11=__strdup(yytext);
              pgn_result = return_value___strdup$11;
            }

            goto __CPROVER_DUMP_L105;
          }
          case WHITETITLE_TAG:
          {
            if((signed int)data_dest == DEST_BOOK)
            {
              unsigned long int __s1_len;
              unsigned long int __s2_len;
              signed int return_value___builtin_strcmp$13;
              return_value___builtin_strcmp$13=__builtin_strcmp(yytext, "GM");
              tmp_statement_expression$12 = return_value___builtin_strcmp$13;
              if(tmp_statement_expression$12 == 0)
                tmp_if_expr$16 = (_Bool)1;

              else
              {
                unsigned long int yylex$$1$$2$$2$$23$$1$$8$$__s1_len;
                unsigned long int yylex$$1$$2$$2$$23$$1$$8$$__s2_len;
                signed int return_value___builtin_strcmp$15;
                return_value___builtin_strcmp$15=__builtin_strcmp(yytext, "IM");
                tmp_statement_expression$14 = return_value___builtin_strcmp$15;
                tmp_if_expr$16 = tmp_statement_expression$14 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$16)
                tmp_if_expr$19 = (_Bool)1;

              else
              {
                unsigned long int yylex$$1$$2$$2$$23$$1$$9$$__s1_len;
                unsigned long int yylex$$1$$2$$2$$23$$1$$9$$__s2_len;
                signed int return_value___builtin_strcmp$18;
                return_value___builtin_strcmp$18=__builtin_strcmp(yytext, "FM");
                tmp_statement_expression$17 = return_value___builtin_strcmp$18;
                tmp_if_expr$19 = tmp_statement_expression$17 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$19)
                addtobook[(signed long int)0] = 1;

            }

            if((signed int)data_dest == DEST_GAME)
            {
              append_str(&pgn_othertags, "[WhiteTitle \"");
              append_str(&pgn_othertags, yytext);
              append_str(&pgn_othertags, "\"]\n");
            }

            goto __CPROVER_DUMP_L105;
          }
          case BLACKTITLE_TAG:
          {
            if((signed int)data_dest == DEST_BOOK)
            {
              unsigned long int yylex$$1$$2$$2$$23$$1$$11$$__s1_len;
              unsigned long int yylex$$1$$2$$2$$23$$1$$11$$__s2_len;
              signed int return_value___builtin_strcmp$21;
              return_value___builtin_strcmp$21=__builtin_strcmp(yytext, "GM");
              tmp_statement_expression$20 = return_value___builtin_strcmp$21;
              if(tmp_statement_expression$20 == 0)
                tmp_if_expr$24 = (_Bool)1;

              else
              {
                unsigned long int yylex$$1$$2$$2$$23$$1$$12$$__s1_len;
                unsigned long int yylex$$1$$2$$2$$23$$1$$12$$__s2_len;
                signed int return_value___builtin_strcmp$23;
                return_value___builtin_strcmp$23=__builtin_strcmp(yytext, "IM");
                tmp_statement_expression$22 = return_value___builtin_strcmp$23;
                tmp_if_expr$24 = tmp_statement_expression$22 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$24)
                tmp_if_expr$27 = (_Bool)1;

              else
              {
                unsigned long int yylex$$1$$2$$2$$23$$1$$13$$__s1_len;
                unsigned long int yylex$$1$$2$$2$$23$$1$$13$$__s2_len;
                signed int return_value___builtin_strcmp$26;
                return_value___builtin_strcmp$26=__builtin_strcmp(yytext, "FM");
                tmp_statement_expression$25 = return_value___builtin_strcmp$26;
                tmp_if_expr$27 = tmp_statement_expression$25 == 0 ? (_Bool)1 : (_Bool)0;
              }
              if(tmp_if_expr$27)
                addtobook[(signed long int)1] = 1;

            }

            if((signed int)data_dest == DEST_GAME)
            {
              append_str(&pgn_othertags, "[BlackTitle \"");
              append_str(&pgn_othertags, yytext);
              append_str(&pgn_othertags, "\"]\n");
            }

            goto __CPROVER_DUMP_L105;
          }
          case FEN_TAG:
          {
            if(yyleng >= 83)
            {
              printf("Error: FEN too long: %s\n", yytext);
              return 1;
            }

            ParseEPD(yytext);
            side = (signed int)board.side;
            if((signed int)data_dest == DEST_GAME)
            {
              append_str(&pgn_othertags, "[FEN \"");
              append_str(&pgn_othertags, yytext);
              append_str(&pgn_othertags, "\"]\n");
            }

            goto __CPROVER_DUMP_L105;
          }
          case EVENT_TAG:
          {
            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$28=__strdup(yytext);
              pgn_event = return_value___strdup$28;
            }

            goto __CPROVER_DUMP_L105;
          }
          case SITE_TAG:
          {
            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$29=__strdup(yytext);
              pgn_site = return_value___strdup$29;
            }

            goto __CPROVER_DUMP_L105;
          }
          case DATE_TAG:
          {
            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$30=__strdup(yytext);
              pgn_date = return_value___strdup$30;
            }

            goto __CPROVER_DUMP_L105;
          }
          case ROUND_TAG:
          {
            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$31=__strdup(yytext);
              pgn_round = return_value___strdup$31;
            }

            goto __CPROVER_DUMP_L105;
          }
          case WHITE_ELO_TAG:
          {
            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$32=__strdup(yytext);
              pgn_whiteELO = return_value___strdup$32;
            }

            goto __CPROVER_DUMP_L105;
          }
          case BLACK_ELO_TAG:
          {
            if((signed int)data_dest == DEST_GAME)
            {
              return_value___strdup$33=__strdup(yytext);
              pgn_blackELO = return_value___strdup$33;
            }

            goto __CPROVER_DUMP_L105;
          }
          case NO_TAG:

          case OTHER_TAG:
            if((signed int)data_dest == DEST_GAME)
            {
              append_str(&pgn_othertags, "[");
              append_str(&pgn_othertags, tagname);
              append_str(&pgn_othertags, " \"");
              append_str(&pgn_othertags, yytext);
              append_str(&pgn_othertags, "\"]\n");
            }

          default:
          {

          __CPROVER_DUMP_L105:
            ;
            goto __CPROVER_DUMP_L183;
          }
        }

      __CPROVER_DUMP_L106:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L108:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L110:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L112:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L114:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        seen_moves = 1;
        append_comment(yytext);
        append_comment("\n");
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L116:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        seen_moves = 1;
        append_comment(yytext);
        yy_start = 1 + 2 * 6;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L118:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment(yytext);
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L120:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment(yytext);
        yy_start = 1 + 2 * 0;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L122:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment("\n");
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L124:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment("\n");
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L126:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment("\n");
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L128:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment("\n");
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L130:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        seen_moves = 1;
        append_comment(yytext);
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L132:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        return 0;

      __CPROVER_DUMP_L134:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        return 0;

      __CPROVER_DUMP_L136:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        return 0;

      __CPROVER_DUMP_L138:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        return 0;

      __CPROVER_DUMP_L140:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        seen_moves = 1;
        if(firstmovenum == -1)
        {
          sscanf(yytext, "%d", &firstmovenum);
          if(firstmovenum >= 32001 || !(firstmovenum >= 0))
            firstmovenum = -1;

        }

        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L143:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        seen_moves = 1;
        side = 1;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L145:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        seen_moves = 1;
        if(!((signed int)data_dest == DEST_TRASH))
        {
          if(yyleng >= 8)
          {
            printf("Error: move too long: %s\n", yytext);
            return 1;
          }

          p=ValidateMove(yytext);
          if(p == ((struct anonymous *)NULL))
          {
            printf("Illegal move: %s\n", yytext);
            return 1;
          }

          MakeMove(side, &p->move);
          if(!(addtobook[(signed long int)side] == 0))
          {
            signed int return_value_BookBuilder$34;
            return_value_BookBuilder$34=BookBuilder((signed short int)result, (unsigned char)side);
            if(return_value_BookBuilder$34 == 4)
            {
              printf("Book full - Failed to add move %s\n", yytext);
              ShowBoard();
              return 1;
            }

          }

          strcpy(Game[(signed long int)GameCnt].SANmv, yytext);
          side = 1 ^ side;
        }

        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L152:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        rav_count = 1;
        append_comment(yytext);
        yy_start = 1 + 2 * 7;
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L154:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        rav_count = rav_count + 1;
        append_comment(yytext);
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L156:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        rav_count = rav_count - 1;
        append_comment(yytext);
        if(!(rav_count >= 1))
          yy_start = 1 + 2 * 0;

        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L159:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment(yytext);
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L161:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        do
        {
          *yy_cp = yy_hold_char;
          yy_cp = (yy_bp + (signed long int)0) - (signed long int)0;
          yy_c_buf_p = yy_cp;
          yytext = yy_bp;
          yyleng = (signed int)(yy_cp - yy_bp);
          yy_hold_char = *yy_cp;
          *yy_cp = (char)0;
          yy_c_buf_p = yy_cp;
        }
        while((_Bool)0);
        yy_start = 1 + 2 * 0;
        return 0;

      __CPROVER_DUMP_L163:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        append_comment(yytext);
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L165:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        printf("Illegal character %c in input stream.\n", yytext[(signed long int)0]);
        return 1;

      __CPROVER_DUMP_L167:
        ;
        if(yyleng >= 1)
          yy_current_buffer->yy_at_bol = (signed int)((signed int)yytext[(signed long int)(yyleng - 1)] == 10);

        fwrite((const void *)yytext, (unsigned long int)yyleng, (unsigned long int)1, yyout);
        goto __CPROVER_DUMP_L183;

      __CPROVER_DUMP_L169:
        ;
        if(!(seen_moves == 0) || !(seen_tags == 0))
          return 1;

        return 2;

      __CPROVER_DUMP_L171:
        ;
        yy_amount_of_matched_text = (signed int)(yy_cp - yytext) - 1;
        *yy_cp = yy_hold_char;
        if(yy_current_buffer->yy_buffer_status == 0)
        {
          yy_n_chars = yy_current_buffer->yy_n_chars;
          yy_current_buffer->yy_input_file = yyin;
          yy_current_buffer->yy_buffer_status = 1;
        }

        if(yy_current_buffer->yy_ch_buf + (signed long int)yy_n_chars >= yy_c_buf_p)
        {
          signed int yy_next_state;
          yy_c_buf_p = yytext + (signed long int)yy_amount_of_matched_text;
          yy_current_state=yy_get_previous_state();
          yy_next_state=yy_try_NUL_trans(yy_current_state);
          yy_bp = yytext + (signed long int)0;
          if(!(yy_next_state == 0))
          {
            yy_c_buf_p = yy_c_buf_p + 1l;
            yy_cp = yy_c_buf_p;
            yy_current_state = yy_next_state;
            goto yy_match;
          }

          else
          {
            yy_cp = yy_c_buf_p;
            goto yy_find_action;
          }
        }

        return_value_yy_get_next_buffer$35=yy_get_next_buffer();
        if(!(return_value_yy_get_next_buffer$35 == 1))
        {
          if(return_value_yy_get_next_buffer$35 == 0)
            goto __CPROVER_DUMP_L179;

          if(return_value_yy_get_next_buffer$35 == 2)
            goto __CPROVER_DUMP_L180;

          goto __CPROVER_DUMP_L181;
        }

        yy_did_buffer_switch_on_eof = 0;
        yy_c_buf_p = yytext + (signed long int)0;
      }
      if(yy_did_buffer_switch_on_eof == 0)
        yyrestart(yyin);

      goto __CPROVER_DUMP_L181;

    __CPROVER_DUMP_L179:
      ;
      yy_c_buf_p = yytext + (signed long int)yy_amount_of_matched_text;
      yy_current_state=yy_get_previous_state();
      yy_cp = yy_c_buf_p;
      yy_bp = yytext + (signed long int)0;
    }
    while((_Bool)1);

  __CPROVER_DUMP_L180:
    ;
    yy_c_buf_p = &yy_current_buffer->yy_ch_buf[(signed long int)yy_n_chars];
    yy_current_state=yy_get_previous_state();
    yy_cp = yy_c_buf_p;
    yy_bp = yytext + (signed long int)0;
    goto yy_find_action;

  __CPROVER_DUMP_L181:
    ;
    continue;

  __CPROVER_DUMP_L182:
    ;
    yy_fatal_error("fatal flex scanner internal error--no action found");

  __CPROVER_DUMP_L183:
    ;
  }
}

// yyrestart
// file lexpgn.c line 2924
void yyrestart(struct _IO_FILE *input_file)
{
  if(yy_current_buffer == ((struct yy_buffer_state *)NULL))
    yy_current_buffer=yy_create_buffer(yyin, 16384);

  yy_init_buffer(yy_current_buffer, input_file);
  yy_load_buffer_state();
}

