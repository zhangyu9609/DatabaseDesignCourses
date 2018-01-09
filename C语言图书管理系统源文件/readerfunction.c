/* ===== readerfunction.c =====*/


/* ===== NT doesn't need the following... */
#ifndef WIN32
#define WIN32
#endif
#define _loadds
#define _SQLPREP_
#include <sqlca.h>
#include <sqlda.h>
#include <string.h>
#define SQLLENMAX(x)      ( ((x) > 32767) ? 32767 : (x) )
short ESQLAPI _loadds sqlaaloc(
	unsigned short usSqlDaId,
	unsigned short sqld,
	unsigned short stmt_id,
	void far *spare);

short ESQLAPI _loadds sqlxcall(
	unsigned short usCallType,
	unsigned short usSection,
	unsigned short usSqldaInId,
	unsigned short usSqlDaOutId,
	unsigned short usSqlTextLen,
	char far *lpszSQLText);

short ESQLAPI _loadds sqlacall(
	unsigned short usCallType,
	unsigned short usSection,
	unsigned short usSqldaInId,
	unsigned short usSqlDaOutId,
	void far *spare);

short ESQLAPI _loadds sqladloc(
	unsigned short usSqldaInId,
	void far *spare);

short ESQLAPI _loadds sqlasets(
	unsigned short cbSqlText,
	void far *lpvSqlText,
	void far *spare);

short ESQLAPI _loadds sqlasetv(
	unsigned short usSqldaInId,
	unsigned short sqlvar_index,
	unsigned short sqltype,
	unsigned short sqllen,
	void far *sqldata,
	void far *sqlind,
	void far *spare);

short ESQLAPI _loadds sqlastop(
	void far *spare);

short ESQLAPI _loadds sqlastrt(
	void far *pid,
	void far *spare,
	void far *sqlca);

short ESQLAPI _loadds sqlausda(
	unsigned short sqldaId,
	void far *lpvSqlDa,
	void far *spare);

extern struct tag_sqlca far sql_sqlca;
extern struct tag_sqlca far *sqlca;
struct sqla_program_id2 { 
unsigned short length; 
unsigned short rp_rel_num; 
unsigned short db_rel_num; 
unsigned short bf_rel_num; 
unsigned char  sqluser[30]; 
unsigned char  sqlusername[30];
unsigned char  planname[256]; 
unsigned char  contoken[8]; 
unsigned char  buffer[8]; 
}; 
static struct sqla_program_id2 program_id = 
		{340,2,0,0,"                              ","","readerfunction","jjjgBRM5","        "};
static void far* pid = &program_id;
#line 1 "readerfunction.sqc"
#line 1 "Library.h"
#line 1 "D:\\VC98\\INCLUDE\\stdio.h"















#pragma once
#line 18 "D:\\VC98\\INCLUDE\\stdio.h"






#line 25 "D:\\VC98\\INCLUDE\\stdio.h"







#pragma pack(push,8)
#line 34 "D:\\VC98\\INCLUDE\\stdio.h"














#line 49 "D:\\VC98\\INCLUDE\\stdio.h"
#line 50 "D:\\VC98\\INCLUDE\\stdio.h"






#line 57 "D:\\VC98\\INCLUDE\\stdio.h"








#line 66 "D:\\VC98\\INCLUDE\\stdio.h"
#line 67 "D:\\VC98\\INCLUDE\\stdio.h"



typedef unsigned int size_t;

#line 73 "D:\\VC98\\INCLUDE\\stdio.h"




typedef unsigned short wchar_t;

#line 80 "D:\\VC98\\INCLUDE\\stdio.h"



typedef wchar_t wint_t;
typedef wchar_t wctype_t;

#line 87 "D:\\VC98\\INCLUDE\\stdio.h"
#line 88 "D:\\VC98\\INCLUDE\\stdio.h"









typedef char *  va_list;
#line 99 "D:\\VC98\\INCLUDE\\stdio.h"

#line 101 "D:\\VC98\\INCLUDE\\stdio.h"






#line 108 "D:\\VC98\\INCLUDE\\stdio.h"

#line 110 "D:\\VC98\\INCLUDE\\stdio.h"






























#line 141 "D:\\VC98\\INCLUDE\\stdio.h"





struct _iobuf {
        char *_ptr;
        int   _cnt;
        char *_base;
        int   _flag;
        int   _file;
        int   _charbuf;
        int   _bufsiz;
        char *_tmpfname;
        };
typedef struct _iobuf FILE;

#line 159 "D:\\VC98\\INCLUDE\\stdio.h"












#line 172 "D:\\VC98\\INCLUDE\\stdio.h"












#line 185 "D:\\VC98\\INCLUDE\\stdio.h"




























#line 214 "D:\\VC98\\INCLUDE\\stdio.h"
#line 215 "D:\\VC98\\INCLUDE\\stdio.h"





 extern FILE _iob[];
#line 222 "D:\\VC98\\INCLUDE\\stdio.h"









#line 232 "D:\\VC98\\INCLUDE\\stdio.h"


typedef __int64 fpos_t;







#line 243 "D:\\VC98\\INCLUDE\\stdio.h"
#line 244 "D:\\VC98\\INCLUDE\\stdio.h"


#line 247 "D:\\VC98\\INCLUDE\\stdio.h"




























 int __cdecl _filbuf(FILE *);
 int __cdecl _flsbuf(int, FILE *);




 FILE * __cdecl _fsopen(const char *, const char *, int);
#line 283 "D:\\VC98\\INCLUDE\\stdio.h"

 void __cdecl clearerr(FILE *);
 int __cdecl fclose(FILE *);
 int __cdecl _fcloseall(void);




 FILE * __cdecl _fdopen(int, const char *);
#line 293 "D:\\VC98\\INCLUDE\\stdio.h"

 int __cdecl feof(FILE *);
 int __cdecl ferror(FILE *);
 int __cdecl fflush(FILE *);
 int __cdecl fgetc(FILE *);
 int __cdecl _fgetchar(void);
 int __cdecl fgetpos(FILE *, fpos_t *);
 char * __cdecl fgets(char *, int, FILE *);




 int __cdecl _fileno(FILE *);
#line 307 "D:\\VC98\\INCLUDE\\stdio.h"

 int __cdecl _flushall(void);
 FILE * __cdecl fopen(const char *, const char *);
 int __cdecl fprintf(FILE *, const char *, ...);
 int __cdecl fputc(int, FILE *);
 int __cdecl _fputchar(int);
 int __cdecl fputs(const char *, FILE *);
 size_t __cdecl fread(void *, size_t, size_t, FILE *);
 FILE * __cdecl freopen(const char *, const char *, FILE *);
 int __cdecl fscanf(FILE *, const char *, ...);
 int __cdecl fsetpos(FILE *, const fpos_t *);
 int __cdecl fseek(FILE *, long, int);
 long __cdecl ftell(FILE *);
 size_t __cdecl fwrite(const void *, size_t, size_t, FILE *);
 int __cdecl getc(FILE *);
 int __cdecl getchar(void);
 int __cdecl _getmaxstdio(void);
 char * __cdecl gets(char *);
 int __cdecl _getw(FILE *);
 void __cdecl perror(const char *);
 int __cdecl _pclose(FILE *);
 FILE * __cdecl _popen(const char *, const char *);
 int __cdecl printf(const char *, ...);
 int __cdecl putc(int, FILE *);
 int __cdecl putchar(int);
 int __cdecl puts(const char *);
 int __cdecl _putw(int, FILE *);
 int __cdecl remove(const char *);
 int __cdecl rename(const char *, const char *);
 void __cdecl rewind(FILE *);
 int __cdecl _rmtmp(void);
 int __cdecl scanf(const char *, ...);
 void __cdecl setbuf(FILE *, char *);
 int __cdecl _setmaxstdio(int);
 int __cdecl setvbuf(FILE *, char *, int, size_t);
 int __cdecl _snprintf(char *, size_t, const char *, ...);
 int __cdecl sprintf(char *, const char *, ...);
 int __cdecl sscanf(const char *, const char *, ...);
 char * __cdecl _tempnam(const char *, const char *);
 FILE * __cdecl tmpfile(void);
 char * __cdecl tmpnam(char *);
 int __cdecl ungetc(int, FILE *);
 int __cdecl _unlink(const char *);
 int __cdecl vfprintf(FILE *, const char *, va_list);
 int __cdecl vprintf(const char *, va_list);
 int __cdecl _vsnprintf(char *, size_t, const char *, va_list);
 int __cdecl vsprintf(char *, const char *, va_list);








#line 363 "D:\\VC98\\INCLUDE\\stdio.h"




 FILE * __cdecl _wfsopen(const wchar_t *, const wchar_t *, int);
#line 369 "D:\\VC98\\INCLUDE\\stdio.h"

 wint_t __cdecl fgetwc(FILE *);
 wint_t __cdecl _fgetwchar(void);
 wint_t __cdecl fputwc(wint_t, FILE *);
 wint_t __cdecl _fputwchar(wint_t);
 wint_t __cdecl getwc(FILE *);
 wint_t __cdecl getwchar(void);
 wint_t __cdecl putwc(wint_t, FILE *);
 wint_t __cdecl putwchar(wint_t);
 wint_t __cdecl ungetwc(wint_t, FILE *);

 wchar_t * __cdecl fgetws(wchar_t *, int, FILE *);
 int __cdecl fputws(const wchar_t *, FILE *);
 wchar_t * __cdecl _getws(wchar_t *);
 int __cdecl _putws(const wchar_t *);

 int __cdecl fwprintf(FILE *, const wchar_t *, ...);
 int __cdecl wprintf(const wchar_t *, ...);
 int __cdecl _snwprintf(wchar_t *, size_t, const wchar_t *, ...);
 int __cdecl swprintf(wchar_t *, const wchar_t *, ...);
 int __cdecl vfwprintf(FILE *, const wchar_t *, va_list);
 int __cdecl vwprintf(const wchar_t *, va_list);
 int __cdecl _vsnwprintf(wchar_t *, size_t, const wchar_t *, va_list);
 int __cdecl vswprintf(wchar_t *, const wchar_t *, va_list);
 int __cdecl fwscanf(FILE *, const wchar_t *, ...);
 int __cdecl swscanf(const wchar_t *, const wchar_t *, ...);
 int __cdecl wscanf(const wchar_t *, ...);






 FILE * __cdecl _wfdopen(int, const wchar_t *);
 FILE * __cdecl _wfopen(const wchar_t *, const wchar_t *);
 FILE * __cdecl _wfreopen(const wchar_t *, const wchar_t *, FILE *);
 void __cdecl _wperror(const wchar_t *);
 FILE * __cdecl _wpopen(const wchar_t *, const wchar_t *);
 int __cdecl _wremove(const wchar_t *);
 wchar_t * __cdecl _wtempnam(const wchar_t *, const wchar_t *);
 wchar_t * __cdecl _wtmpnam(wchar_t *);



#line 414 "D:\\VC98\\INCLUDE\\stdio.h"
#line 415 "D:\\VC98\\INCLUDE\\stdio.h"


#line 418 "D:\\VC98\\INCLUDE\\stdio.h"
































 int __cdecl fcloseall(void);
 FILE * __cdecl fdopen(int, const char *);
 int __cdecl fgetchar(void);
 int __cdecl fileno(FILE *);
 int __cdecl flushall(void);
 int __cdecl fputchar(int);
 int __cdecl getw(FILE *);
 int __cdecl putw(int, FILE *);
 int __cdecl rmtmp(void);
 char * __cdecl tempnam(const char *, const char *);
 int __cdecl unlink(const char *);

#line 463 "D:\\VC98\\INCLUDE\\stdio.h"






#pragma pack(pop)
#line 471 "D:\\VC98\\INCLUDE\\stdio.h"

#line 473 "D:\\VC98\\INCLUDE\\stdio.h"
#line 2 "Library.h"
#line 1 "D:\\VC98\\INCLUDE\\stdlib.h"
















#pragma once
#line 19 "D:\\VC98\\INCLUDE\\stdlib.h"






#line 26 "D:\\VC98\\INCLUDE\\stdlib.h"







#pragma pack(push,8)
#line 35 "D:\\VC98\\INCLUDE\\stdlib.h"






















#line 58 "D:\\VC98\\INCLUDE\\stdlib.h"










































typedef int (__cdecl * _onexit_t)(void);



#line 105 "D:\\VC98\\INCLUDE\\stdlib.h"

#line 107 "D:\\VC98\\INCLUDE\\stdlib.h"






typedef struct _div_t {
        int quot;
        int rem;
} div_t;

typedef struct _ldiv_t {
        long quot;
        long rem;
} ldiv_t;


#line 125 "D:\\VC98\\INCLUDE\\stdlib.h"












 extern int __mb_cur_max;
#line 139 "D:\\VC98\\INCLUDE\\stdlib.h"





















#line 161 "D:\\VC98\\INCLUDE\\stdlib.h"

















#line 179 "D:\\VC98\\INCLUDE\\stdlib.h"
 extern int errno;               
 extern unsigned long _doserrno; 
#line 182 "D:\\VC98\\INCLUDE\\stdlib.h"







 extern char * _sys_errlist[];   
 extern int _sys_nerr;           





























#line 221 "D:\\VC98\\INCLUDE\\stdlib.h"

 extern int __argc;          
 extern char ** __argv;      

 extern wchar_t ** __wargv;  
#line 227 "D:\\VC98\\INCLUDE\\stdlib.h"




 extern char ** _environ;    

 extern wchar_t ** _wenviron;    
#line 235 "D:\\VC98\\INCLUDE\\stdlib.h"
#line 236 "D:\\VC98\\INCLUDE\\stdlib.h"

 extern char * _pgmptr;      

 extern wchar_t * _wpgmptr;  
#line 241 "D:\\VC98\\INCLUDE\\stdlib.h"

#line 243 "D:\\VC98\\INCLUDE\\stdlib.h"


 extern int _fmode;          
 extern int _fileinfo;       




 extern unsigned int _osver;
 extern unsigned int _winver;
 extern unsigned int _winmajor;
 extern unsigned int _winminor;





 __declspec(noreturn) void   __cdecl abort(void);
 __declspec(noreturn) void   __cdecl exit(int);



#line 266 "D:\\VC98\\INCLUDE\\stdlib.h"



#line 270 "D:\\VC98\\INCLUDE\\stdlib.h"
        int    __cdecl abs(int);
#line 272 "D:\\VC98\\INCLUDE\\stdlib.h"
        int    __cdecl atexit(void (__cdecl *)(void));
 double __cdecl atof(const char *);
 int    __cdecl atoi(const char *);
 long   __cdecl atol(const char *);



 void * __cdecl bsearch(const void *, const void *, size_t, size_t,
        int (__cdecl *)(const void *, const void *));
 void * __cdecl calloc(size_t, size_t);
 div_t  __cdecl div(int, int);
 void   __cdecl free(void *);
 char * __cdecl getenv(const char *);
 char * __cdecl _itoa(int, char *, int);

 char * __cdecl _i64toa(__int64, char *, int);
 char * __cdecl _ui64toa(unsigned __int64, char *, int);
 __int64 __cdecl _atoi64(const char *);
#line 291 "D:\\VC98\\INCLUDE\\stdlib.h"


#line 294 "D:\\VC98\\INCLUDE\\stdlib.h"
        long __cdecl labs(long);
#line 296 "D:\\VC98\\INCLUDE\\stdlib.h"
 ldiv_t __cdecl ldiv(long, long);
 char * __cdecl _ltoa(long, char *, int);
 void * __cdecl malloc(size_t);
 int    __cdecl mblen(const char *, size_t);
 size_t __cdecl _mbstrlen(const char *s);
 int    __cdecl mbtowc(wchar_t *, const char *, size_t);
 size_t __cdecl mbstowcs(wchar_t *, const char *, size_t);
 void   __cdecl qsort(void *, size_t, size_t, int (__cdecl *)
        (const void *, const void *));
 int    __cdecl rand(void);
 void * __cdecl realloc(void *, size_t);
 int    __cdecl _set_error_mode(int);
 void   __cdecl srand(unsigned int);
 double __cdecl strtod(const char *, char **);
 long   __cdecl strtol(const char *, char **, int);



 unsigned long __cdecl strtoul(const char *, char **, int);

 int    __cdecl system(const char *);
#line 318 "D:\\VC98\\INCLUDE\\stdlib.h"
 char * __cdecl _ultoa(unsigned long, char *, int);
 int    __cdecl wctomb(char *, wchar_t);
 size_t __cdecl wcstombs(char *, const wchar_t *, size_t);







 wchar_t * __cdecl _itow (int, wchar_t *, int);
 wchar_t * __cdecl _ltow (long, wchar_t *, int);
 wchar_t * __cdecl _ultow (unsigned long, wchar_t *, int);
 double __cdecl wcstod(const wchar_t *, wchar_t **);
 long   __cdecl wcstol(const wchar_t *, wchar_t **, int);
 unsigned long __cdecl wcstoul(const wchar_t *, wchar_t **, int);
 wchar_t * __cdecl _wgetenv(const wchar_t *);
 int    __cdecl _wsystem(const wchar_t *);
 int __cdecl _wtoi(const wchar_t *);
 long __cdecl _wtol(const wchar_t *);

 wchar_t * __cdecl _i64tow(__int64, wchar_t *, int);
 wchar_t * __cdecl _ui64tow(unsigned __int64, wchar_t *, int);
 __int64   __cdecl _wtoi64(const wchar_t *);
#line 343 "D:\\VC98\\INCLUDE\\stdlib.h"


#line 346 "D:\\VC98\\INCLUDE\\stdlib.h"
#line 347 "D:\\VC98\\INCLUDE\\stdlib.h"




 char * __cdecl _ecvt(double, int, int *, int *);

 __declspec(noreturn) void   __cdecl _exit(int);


#line 357 "D:\\VC98\\INCLUDE\\stdlib.h"
 char * __cdecl _fcvt(double, int, int *, int *);
 char * __cdecl _fullpath(char *, const char *, size_t);
 char * __cdecl _gcvt(double, int, char *);
        unsigned long __cdecl _lrotl(unsigned long, int);
        unsigned long __cdecl _lrotr(unsigned long, int);

 void   __cdecl _makepath(char *, const char *, const char *, const char *,
        const char *);
#line 366 "D:\\VC98\\INCLUDE\\stdlib.h"
        _onexit_t __cdecl _onexit(_onexit_t);
 void   __cdecl perror(const char *);
 int    __cdecl _putenv(const char *);
        unsigned int __cdecl _rotl(unsigned int, int);
        unsigned int __cdecl _rotr(unsigned int, int);
 void   __cdecl _searchenv(const char *, const char *, char *);

 void   __cdecl _splitpath(const char *, char *, char *, char *, char *);
#line 375 "D:\\VC98\\INCLUDE\\stdlib.h"
 void   __cdecl _swab(char *, char *, int);






 wchar_t * __cdecl _wfullpath(wchar_t *, const wchar_t *, size_t);
 void   __cdecl _wmakepath(wchar_t *, const wchar_t *, const wchar_t *, const wchar_t *,
        const wchar_t *);
 void   __cdecl _wperror(const wchar_t *);
 int    __cdecl _wputenv(const wchar_t *);
 void   __cdecl _wsearchenv(const wchar_t *, const wchar_t *, wchar_t *);
 void   __cdecl _wsplitpath(const wchar_t *, wchar_t *, wchar_t *, wchar_t *, wchar_t *);


#line 392 "D:\\VC98\\INCLUDE\\stdlib.h"
#line 393 "D:\\VC98\\INCLUDE\\stdlib.h"




 void __cdecl _seterrormode(int);
 void __cdecl _beep(unsigned, unsigned);
 void __cdecl _sleep(unsigned long);
#line 401 "D:\\VC98\\INCLUDE\\stdlib.h"


#line 404 "D:\\VC98\\INCLUDE\\stdlib.h"







 int __cdecl tolower(int);
#line 413 "D:\\VC98\\INCLUDE\\stdlib.h"

 int __cdecl toupper(int);
#line 416 "D:\\VC98\\INCLUDE\\stdlib.h"

#line 418 "D:\\VC98\\INCLUDE\\stdlib.h"











#line 430 "D:\\VC98\\INCLUDE\\stdlib.h"





 char * __cdecl ecvt(double, int, int *, int *);
 char * __cdecl fcvt(double, int, int *, int *);
 char * __cdecl gcvt(double, int, char *);
 char * __cdecl itoa(int, char *, int);
 char * __cdecl ltoa(long, char *, int);
        _onexit_t __cdecl onexit(_onexit_t);
 int    __cdecl putenv(const char *);
 void   __cdecl swab(char *, char *, int);
 char * __cdecl ultoa(unsigned long, char *, int);

#line 446 "D:\\VC98\\INCLUDE\\stdlib.h"

#line 448 "D:\\VC98\\INCLUDE\\stdlib.h"







#pragma pack(pop)
#line 457 "D:\\VC98\\INCLUDE\\stdlib.h"

#line 459 "D:\\VC98\\INCLUDE\\stdlib.h"
#line 3 "Library.h"
#line 1 "D:\\VC98\\INCLUDE\\string.h"















#pragma once
#line 18 "D:\\VC98\\INCLUDE\\string.h"






#line 25 "D:\\VC98\\INCLUDE\\string.h"






















#line 48 "D:\\VC98\\INCLUDE\\string.h"























#line 72 "D:\\VC98\\INCLUDE\\string.h"




#line 77 "D:\\VC98\\INCLUDE\\string.h"
























        void *  __cdecl memcpy(void *, const void *, size_t);
        int     __cdecl memcmp(const void *, const void *, size_t);
        void *  __cdecl memset(void *, int, size_t);
        char *  __cdecl _strset(char *, int);
        char *  __cdecl strcpy(char *, const char *);
        char *  __cdecl strcat(char *, const char *);
        int     __cdecl strcmp(const char *, const char *);
        size_t  __cdecl strlen(const char *);
#line 110 "D:\\VC98\\INCLUDE\\string.h"
 void *  __cdecl _memccpy(void *, const void *, int, unsigned int);
 void *  __cdecl memchr(const void *, int, size_t);
 int     __cdecl _memicmp(const void *, const void *, unsigned int);





 void *  __cdecl memmove(void *, const void *, size_t);
#line 120 "D:\\VC98\\INCLUDE\\string.h"


 char *  __cdecl strchr(const char *, int);
 int     __cdecl _strcmpi(const char *, const char *);
 int     __cdecl _stricmp(const char *, const char *);
 int     __cdecl strcoll(const char *, const char *);
 int     __cdecl _stricoll(const char *, const char *);
 int     __cdecl _strncoll(const char *, const char *, size_t);
 int     __cdecl _strnicoll(const char *, const char *, size_t);
 size_t  __cdecl strcspn(const char *, const char *);
 char *  __cdecl _strdup(const char *);
 char *  __cdecl _strerror(const char *);
 char *  __cdecl strerror(int);
 char *  __cdecl _strlwr(char *);
 char *  __cdecl strncat(char *, const char *, size_t);
 int     __cdecl strncmp(const char *, const char *, size_t);
 int     __cdecl _strnicmp(const char *, const char *, size_t);
 char *  __cdecl strncpy(char *, const char *, size_t);
 char *  __cdecl _strnset(char *, int, size_t);
 char *  __cdecl strpbrk(const char *, const char *);
 char *  __cdecl strrchr(const char *, int);
 char *  __cdecl _strrev(char *);
 size_t  __cdecl strspn(const char *, const char *);
 char *  __cdecl strstr(const char *, const char *);
 char *  __cdecl strtok(char *, const char *);
 char *  __cdecl _strupr(char *);
 size_t  __cdecl strxfrm (char *, const char *, size_t);














 void * __cdecl memccpy(void *, const void *, int, unsigned int);
 int __cdecl memicmp(const void *, const void *, unsigned int);
 int __cdecl strcmpi(const char *, const char *);
 int __cdecl stricmp(const char *, const char *);
 char * __cdecl strdup(const char *);
 char * __cdecl strlwr(char *);
 int __cdecl strnicmp(const char *, const char *, size_t);
 char * __cdecl strnset(char *, int, size_t);
 char * __cdecl strrev(char *);
        char * __cdecl strset(char *, int);
 char * __cdecl strupr(char *);

#line 174 "D:\\VC98\\INCLUDE\\string.h"







 wchar_t * __cdecl wcscat(wchar_t *, const wchar_t *);
 wchar_t * __cdecl wcschr(const wchar_t *, wchar_t);
 int __cdecl wcscmp(const wchar_t *, const wchar_t *);
 wchar_t * __cdecl wcscpy(wchar_t *, const wchar_t *);
 size_t __cdecl wcscspn(const wchar_t *, const wchar_t *);
 size_t __cdecl wcslen(const wchar_t *);
 wchar_t * __cdecl wcsncat(wchar_t *, const wchar_t *, size_t);
 int __cdecl wcsncmp(const wchar_t *, const wchar_t *, size_t);
 wchar_t * __cdecl wcsncpy(wchar_t *, const wchar_t *, size_t);
 wchar_t * __cdecl wcspbrk(const wchar_t *, const wchar_t *);
 wchar_t * __cdecl wcsrchr(const wchar_t *, wchar_t);
 size_t __cdecl wcsspn(const wchar_t *, const wchar_t *);
 wchar_t * __cdecl wcsstr(const wchar_t *, const wchar_t *);
 wchar_t * __cdecl wcstok(wchar_t *, const wchar_t *);

 wchar_t * __cdecl _wcsdup(const wchar_t *);
 int __cdecl _wcsicmp(const wchar_t *, const wchar_t *);
 int __cdecl _wcsnicmp(const wchar_t *, const wchar_t *, size_t);
 wchar_t * __cdecl _wcsnset(wchar_t *, wchar_t, size_t);
 wchar_t * __cdecl _wcsrev(wchar_t *);
 wchar_t * __cdecl _wcsset(wchar_t *, wchar_t);

 wchar_t * __cdecl _wcslwr(wchar_t *);
 wchar_t * __cdecl _wcsupr(wchar_t *);
 size_t __cdecl wcsxfrm(wchar_t *, const wchar_t *, size_t);
 int __cdecl wcscoll(const wchar_t *, const wchar_t *);
 int __cdecl _wcsicoll(const wchar_t *, const wchar_t *);
 int __cdecl _wcsncoll(const wchar_t *, const wchar_t *, size_t);
 int __cdecl _wcsnicoll(const wchar_t *, const wchar_t *, size_t);







 wchar_t * __cdecl wcsdup(const wchar_t *);
 int __cdecl wcsicmp(const wchar_t *, const wchar_t *);
 int __cdecl wcsnicmp(const wchar_t *, const wchar_t *, size_t);
 wchar_t * __cdecl wcsnset(wchar_t *, wchar_t, size_t);
 wchar_t * __cdecl wcsrev(wchar_t *);
 wchar_t * __cdecl wcsset(wchar_t *, wchar_t);
 wchar_t * __cdecl wcslwr(wchar_t *);
 wchar_t * __cdecl wcsupr(wchar_t *);
 int __cdecl wcsicoll(const wchar_t *, const wchar_t *);

#line 228 "D:\\VC98\\INCLUDE\\string.h"


#line 231 "D:\\VC98\\INCLUDE\\string.h"

#line 233 "D:\\VC98\\INCLUDE\\string.h"





#line 239 "D:\\VC98\\INCLUDE\\string.h"
#line 4 "Library.h"

char LReader_num[20];


int CONNECT();
int DISCONNECT();
void start_meun();   
void login_meun();   
int login (void);    
void admin_menu();   
void reader_meun();  
void admin();        
void reader();       
void admin_reader(); 
void admin_book();   
void allborrow();    
void overdue();      
void adminreader_menu();
void adminbook_menu();
void addreader();    
void deletereader(); 
void updatereader(); 
void addbook();      
void deletebook();   
void updatebook();   
void borrowbook();   
void returnbook();   
void searchpersonborrow();
void updateme();     
void allbook();      
void allreader();    


#line 2 "readerfunction.sqc"



#line 4
/*
EXEC SQL BEGIN DECLARE SECTION;
*/
#line 4
 
char admin_num[20];
char admin_pass[20];
char reader_num[20];
char reader_pass[20];

char LReader_id[10];
char LBook_id[10];
char LBorrow_time[15];
char LReturn_time[15];
char LLNull[15]="-1";
char LReader_name[15];
char LOver_time[15];
char LFine[15];
char LReader_password[10];
char LReader_sex[10];
int LReader_age;
char LReader_Company[15];
char LReader_work[10];

char LBook_name[20];
char LBook_writer[15];

char LBook_publisher[15];
int LBook_price;
char LBook_introduction[15];
char LBook_type[15];
int LBook_num;
int LBook_allnum;

char LBorrow_time[15];
char LReturn_time[15];

char LReader_num[20];


#line 39
/*
EXEC SQL END DECLARE SECTION;
*/
#line 39

long SQLCODE;

#line 41
/*
EXEC SQL INCLUDE sqlca;
*/
#line 41



void borrowbook()
{	
	char YN;
	allbook();
	printf("请输入你要借阅的图书的ID：");
	scanf("%s",&LBook_id);
	
#line 50
/*
EXEC SQL SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum INTO :LBook_id,:LBook_name,:LBook_writer:LLNull,:LBook_publisher:LLNull,:LBook_price:LLNull,:LBook_introduction:LLNull,:LBook_type,:LBook_num,:LBook_allnum
		FROM Book 
		WHERE Book_id=:LBook_id;
*/
#line 52

#line 50
{
#line 50
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 50
	sqlaaloc(1, 9, 1, (void far *)0);
#line 50
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 50
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_name)),(void far *)&LBook_name, (void far *)0,0L);
#line 50
	sqlasetv(1, 2, 463,(short) SQLLENMAX(sizeof(LBook_writer)),(void far *)&LBook_writer, (void far *)&LLNull,0L);
#line 50
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LBook_publisher)),(void far *)&LBook_publisher, (void far *)&LLNull,0L);
#line 50
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LBook_price)),(void far *)&LBook_price, (void far *)&LLNull,0L);
#line 50
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LBook_introduction)),(void far *)&LBook_introduction, (void far *)&LLNull,0L);
#line 50
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LBook_type)),(void far *)&LBook_type, (void far *)0,0L);
#line 50
	sqlasetv(1, 7, 496,(short) SQLLENMAX(sizeof(LBook_num)),(void far *)&LBook_num, (void far *)0,0L);
#line 50
	sqlasetv(1, 8, 496,(short) SQLLENMAX(sizeof(LBook_allnum)),(void far *)&LBook_allnum, (void far *)0,0L);
#line 50
	sqlaaloc(2, 1, 1, (void far *)0);
#line 50
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 50
	sqlxcall(24, 1, 2, 1, 149, (char far *)"  SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum FROM Book WHERE Book_id=@p1        ");
#line 50
	SQLCODE = sqlca->sqlcode;
#line 50
	sqlastop((void far *)0L);
#line 50
}
#line 53
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Book_id","Book_name","Book_writer","Book_publisher","Book_price","Book_intro...","Book_type","Book_num","Book_allnum");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\t%-10d\t%-10d\n",LBook_id,LBook_name,LBook_writer,LBook_publisher,LBook_price,LBook_introduction,LBook_type,LBook_num,LBook_allnum);
	printf("是否借阅该图书（Y/N）：");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		printf("输入借阅时间（2017-XX-XX）：");
		scanf("%s",&LBorrow_time);
		
#line 67
/*
EXEC SQL INSERT 
			INTO Borrow(Reader_id,Book_id,Borrow_time)
			VALUES(:LReader_num,:LBook_id,:LBorrow_time);
*/
#line 69

#line 67
{
#line 67
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 67
	sqlaaloc(2, 3, 2, (void far *)0);
#line 67
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 67
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 67
	sqlasetv(2, 2, 462, (short) SQLLENMAX(sizeof(LBorrow_time)), (void far *)LBorrow_time, (void far *)0, (void far *)0L);
#line 67
	sqlxcall(24, 2, 2, 0, 100, (char far *)"  INSERT INTO Borrow(Reader_id,Book_id,Borrow_time) VALUES(@p1          ,@p2       ,@p3           ) ");
#line 67
	SQLCODE = sqlca->sqlcode;
#line 67
	sqlastop((void far *)0L);
#line 67
}
#line 70
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		}
		printf("借阅成功！打印借阅信息!\n");
		
#line 76
/*
EXEC SQL SELECT Reader_id,Book_id,Borrow_time INTO :LReader_id,:LBook_id,:LBorrow_time
			FROM Borrow
			WHERE Reader_id=:LReader_num AND Book_id=:LBook_id;
*/
#line 78

#line 76
{
#line 76
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 76
	sqlaaloc(1, 3, 3, (void far *)0);
#line 76
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 76
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 76
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 76
	sqlaaloc(2, 2, 3, (void far *)0);
#line 76
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 76
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 76
	sqlxcall(24, 3, 2, 1, 104, (char far *)"  SELECT Reader_id,Book_id,Borrow_time FROM Borrow WHERE Reader_id=@p1           AND Book_id=@p2        ");
#line 76
	SQLCODE = sqlca->sqlcode;
#line 76
	sqlastop((void far *)0L);
#line 76
}
#line 79
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		}
		printf("\n%-10s %-10s %-15s\n","Reader_id","Book_id","Borrow_time");
		printf("%-10s %-10s %-15s\n",LReader_id,LBook_id,LBorrow_time);
		printf("操作完成！返回主菜单！\n");
	}
}


void returnbook()
{
	char YN;
	printf("请输入你要归还的图书的ID：");
	scanf("%s",&LBook_id);
	
#line 96
/*
EXEC SQL SELECT Reader_id,Book_id,Borrow_time INTO :LReader_id,:LBook_id,:LBorrow_time
		FROM Borrow
		WHERE Reader_id=:LReader_num AND Book_id=:LBook_id;
*/
#line 98

#line 96
{
#line 96
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 96
	sqlaaloc(1, 3, 4, (void far *)0);
#line 96
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 96
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 96
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 96
	sqlaaloc(2, 2, 4, (void far *)0);
#line 96
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 96
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 96
	sqlxcall(24, 4, 2, 1, 104, (char far *)"  SELECT Reader_id,Book_id,Borrow_time FROM Borrow WHERE Reader_id=@p1           AND Book_id=@p2        ");
#line 96
	SQLCODE = sqlca->sqlcode;
#line 96
	sqlastop((void far *)0L);
#line 96
}
#line 99
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
	}
	printf("\n%-10s %-10s %-15s\n","Reader_id","Book_id","Borrow_time");
	printf("%-10s %-10s %-15s\n",LReader_id,LBook_id,LBorrow_time);
	printf("是否归还该图书（Y/N）：");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		printf("输入归还时间（2017-XX-XX）：");
		scanf("%s",&LReturn_time);
		
#line 113
/*
EXEC SQL DELETE 
			FROM Borrow
			WHERE Reader_id=:LReader_num AND Book_id=:LBook_id;
*/
#line 115

#line 113
{
#line 113
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 113
	sqlaaloc(2, 2, 5, (void far *)0);
#line 113
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 113
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 113
	sqlxcall(24, 5, 2, 0, 74, (char far *)"  DELETE FROM Borrow WHERE Reader_id=@p1           AND Book_id=@p2        ");
#line 113
	SQLCODE = sqlca->sqlcode;
#line 113
	sqlastop((void far *)0L);
#line 113
}
#line 116
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		}
		
#line 121
/*
EXEC SQL UPDATE History
			SET Return_time=:LReturn_time
			WHERE Reader_id=:LReader_num AND Book_id=:LBook_id AND Borrow_time=:LBorrow_time;
*/
#line 123

#line 121
{
#line 121
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 121
	sqlaaloc(2, 4, 6, (void far *)0);
#line 121
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReturn_time)), (void far *)LReturn_time, (void far *)0, (void far *)0L);
#line 121
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 121
	sqlasetv(2, 2, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 121
	sqlasetv(2, 3, 462, (short) SQLLENMAX(sizeof(LBorrow_time)), (void far *)LBorrow_time, (void far *)0, (void far *)0L);
#line 121
	sqlxcall(24, 6, 2, 0, 132, (char far *)"  UPDATE History SET Return_time=@p1            WHERE Reader_id=@p2           AND Book_id=@p3        AND Borrow_time=@p4            ");
#line 121
	SQLCODE = sqlca->sqlcode;
#line 121
	sqlastop((void far *)0L);
#line 121
}
#line 124
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		}
		printf("归还成功！打印信息!\n");
		
#line 130
/*
EXEC SQL SELECT Reader_id,Book_id,Borrow_time,Return_time INTO :LReader_id,:LBook_id,:LBorrow_time,:LReturn_time:LLNull
			FROM History
			WHERE Reader_id=:LReader_num AND Book_id=:LBook_id AND Borrow_time=:LBorrow_time;
*/
#line 132

#line 130
{
#line 130
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 130
	sqlaaloc(1, 4, 7, (void far *)0);
#line 130
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 130
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 130
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 130
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LReturn_time)),(void far *)&LReturn_time, (void far *)&LLNull,0L);
#line 130
	sqlaaloc(2, 3, 7, (void far *)0);
#line 130
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 130
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 130
	sqlasetv(2, 2, 462, (short) SQLLENMAX(sizeof(LBorrow_time)), (void far *)LBorrow_time, (void far *)0, (void far *)0L);
#line 130
	sqlxcall(24, 7, 2, 1, 148, (char far *)"  SELECT Reader_id,Book_id,Borrow_time,Return_time FROM History WHERE Reader_id=@p1           AND Book_id=@p2        AND Borrow_time=@p3            ");
#line 130
	SQLCODE = sqlca->sqlcode;
#line 130
	sqlastop((void far *)0L);
#line 130
}
#line 133
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		}
		printf("\n%-10s %-10s %-15s %-15s\n","Reader_id","Book_id","Borrow_time","Return_time");
		printf("%-10s %-10s %-15s %-15s\n",LReader_id,LBook_id,LBorrow_time,LReturn_time);
		printf("操作完成！返回主菜单！\n");
	}
}


void searchpersonborrow()
{
	int  count=0;
	
#line 148
/*
EXEC SQL DECLARE SX CURSOR FOR
		SELECT Reader_id,Book_id,Borrow_time
		FROM Borrow
		WHERE Reader_id=:LReader_num;
*/
#line 151

	
#line 152
/*
EXEC SQL OPEN SX;
*/
#line 152

#line 152
{
#line 152
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 152
	sqlaaloc(2, 1, 8, (void far *)0);
#line 152
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 152
	sqlxcall(26, 8, 2, 0, 97, (char far *)"/* SX 8 nohold */ SELECT Reader_id,Book_id,Borrow_time FROM Borrow WHERE Reader_id=@p1           ");
#line 152
	SQLCODE = sqlca->sqlcode;
#line 152
	sqlastop((void far *)0L);
#line 152
}
#line 153
	for ( ; ; )
	{
		
#line 155
/*
EXEC SQL FETCH SX INTO :LReader_id,:LBook_id,:LBorrow_time;
*/
#line 155

#line 155
{
#line 155
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 155
	sqlaaloc(1, 3, 8, (void far *)0);
#line 155
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 155
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 155
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 155
	sqlxcall(25, 8, 0, 1, 55, (char far *)"  FETCH SX INTO :           ,:         ,:              ");
#line 155
	SQLCODE = sqlca->sqlcode;
#line 155
	sqlastop((void far *)0L);
#line 155
}
#line 156
		if (sqlca->sqlcode!=0)
		{
			break;
		}
		if(count++ == 0)
		{
			printf("借阅情况<未还>：");
			printf("\n%-10s %-10s %-15s\n","Reader_id","Book_id","Borrow_time");
		}
		printf("%-10s %-10s %-15s\n",LReader_id,LBook_id,LBorrow_time);
	}
	
#line 167
/*
EXEC SQL CLOSE SX;
*/
#line 167

#line 167
{
#line 167
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 167
	sqlxcall(20, 8, 0, 0, 11, (char far *)"  CLOSE SX ");
#line 167
	SQLCODE = sqlca->sqlcode;
#line 167
	sqlastop((void far *)0L);
#line 167
}
#line 168
	count=0;
	
#line 169
/*
EXEC SQL DECLARE DX CURSOR FOR
		SELECT Reader_id,Book_id,Borrow_time,Return_time
		FROM History
		WHERE Reader_id=:LReader_num;
*/
#line 172

	
#line 173
/*
EXEC SQL OPEN DX;
*/
#line 173

#line 173
{
#line 173
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 173
	sqlaaloc(2, 1, 9, (void far *)0);
#line 173
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 173
	sqlxcall(26, 9, 2, 0, 110, (char far *)"/* DX 9 nohold */ SELECT Reader_id,Book_id,Borrow_time,Return_time FROM History WHERE Reader_id=@p1           ");
#line 173
	SQLCODE = sqlca->sqlcode;
#line 173
	sqlastop((void far *)0L);
#line 173
}
#line 174
	for ( ; ; )
	{
		
#line 176
/*
EXEC SQL FETCH DX INTO :LReader_id,:LBook_id,:LBorrow_time,:LReturn_time :LNull;
*/
#line 176

#line 176
{
#line 176
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 176
	sqlaaloc(1, 4, 9, (void far *)0);
#line 176
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 176
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 176
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 176
	sqlasetv(1, 3, 462,(short) SQLLENMAX(sizeof(LReturn_time)),(void far *)&LReturn_time, (void far *)0,0L);
#line 176
	sqlxcall(25, 9, 0, 1, 72, (char far *)"  FETCH DX INTO :           ,:         ,:             ,:                ");
#line 176
	SQLCODE = sqlca->sqlcode;
#line 176
	sqlastop((void far *)0L);
#line 176
}
#line 177
		if (sqlca->sqlcode!=0)
		{
			printf("打印完成！返回主菜单！\n");
			break;
		}
		if(count++ == 0)
		{
			printf("借阅历史<已还>：");
			printf("\n%-10s %-10s %-15s %-15s\n","Reader_id","Book_id","Borrow_time","Return_time");
		}
		printf("%-10s %-10s %-15s %-15s\n",LReader_id,LBook_id,LBorrow_time,LReturn_time);
	}
	
#line 189
/*
EXEC SQL CLOSE DX;
*/
#line 189

#line 189
{
#line 189
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 189
	sqlxcall(20, 9, 0, 0, 11, (char far *)"  CLOSE DX ");
#line 189
	SQLCODE = sqlca->sqlcode;
#line 189
	sqlastop((void far *)0L);
#line 189
}
#line 190
}

void updateme()
{
	char YN;
	printf("你的个人信息：\n");
	
#line 196
/*
EXEC SQL SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work INTO :LReader_id,:LReader_password,:LReader_name,:LReader_sex:LNull,:LReader_age:LNull,:LReader_Company:LNull,:LReader_work:LNull
		FROM Reader 
		WHERE Reader_id=:LReader_num;
*/
#line 198

#line 196
{
#line 196
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 196
	sqlaaloc(1, 7, 10, (void far *)0);
#line 196
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 196
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LReader_password)),(void far *)&LReader_password, (void far *)0,0L);
#line 196
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LReader_name)),(void far *)&LReader_name, (void far *)0,0L);
#line 196
	sqlasetv(1, 3, 462,(short) SQLLENMAX(sizeof(LReader_sex)),(void far *)&LReader_sex, (void far *)0,0L);
#line 196
	sqlasetv(1, 4, 496,(short) SQLLENMAX(sizeof(LReader_age)),(void far *)&LReader_age, (void far *)0,0L);
#line 196
	sqlasetv(1, 5, 462,(short) SQLLENMAX(sizeof(LReader_Company)),(void far *)&LReader_Company, (void far *)0,0L);
#line 196
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LReader_work)),(void far *)&LReader_work, (void far *)0,0L);
#line 196
	sqlaaloc(2, 1, 10, (void far *)0);
#line 196
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 196
	sqlxcall(24, 10, 2, 1, 138, (char far *)"  SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work FROM Reader WHERE Reader_id=@p1           ");
#line 196
	SQLCODE = sqlca->sqlcode;
#line 196
	sqlastop((void far *)0L);
#line 196
}
#line 199
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","Reader_password","LReader_name","Reader_sex","Reader_age","Reader_Company","Reader_work");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\n",LReader_id,LReader_password,LReader_name,LReader_sex,LReader_age,LReader_Company,LReader_work);
	printf("是否修改（Y/N）：");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		printf("输入新的密码：");
		scanf("%s",&LReader_password);
		printf("输入新的名字：");
		scanf("%s",&LReader_name);
		printf("输入新的性别：");
		scanf("%s",&LReader_sex);
		printf("输入新的年龄：");
		scanf("%d",&LReader_age);
		printf("输入新的所在单位：");
		scanf("%s",&LReader_Company);
		printf("输入新的职业：");
		scanf("%s",&LReader_work);
		
#line 223
/*
EXEC SQL UPDATE Reader
			SET Reader_password=:LReader_password,Reader_name=:LReader_name,Reader_sex=:LReader_sex,Reader_age=:LReader_age,Reader_Company=:LReader_Company,Reader_work=:LReader_work
			WHERE Reader_id=:LReader_num;
*/
#line 225

#line 223
{
#line 223
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 223
	sqlaaloc(2, 7, 11, (void far *)0);
#line 223
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_password)), (void far *)LReader_password, (void far *)0, (void far *)0L);
#line 223
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LReader_name)), (void far *)LReader_name, (void far *)0, (void far *)0L);
#line 223
	sqlasetv(2, 2, 462, (short) SQLLENMAX(sizeof(LReader_sex)), (void far *)LReader_sex, (void far *)0, (void far *)0L);
#line 223
	sqlasetv(2, 3, 496, 4,  (void far *)&LReader_age, (void far *)0, (void far *)0L);
#line 223
	sqlasetv(2, 4, 462, (short) SQLLENMAX(sizeof(LReader_Company)), (void far *)LReader_Company, (void far *)0, (void far *)0L);
#line 223
	sqlasetv(2, 5, 462, (short) SQLLENMAX(sizeof(LReader_work)), (void far *)LReader_work, (void far *)0, (void far *)0L);
#line 223
	sqlasetv(2, 6, 462, (short) SQLLENMAX(sizeof(LReader_num)), (void far *)LReader_num, (void far *)0, (void far *)0L);
#line 223
	sqlxcall(24, 11, 2, 0, 222, (char far *)"  UPDATE Reader SET Reader_password=@p1               ,Reader_name=@p2           ,Reader_sex=@p3          ,Reader_age=@p4          ,Reader_Company=@p5              ,Reader_work=@p6            WHERE Reader_id=@p7           ");
#line 223
	SQLCODE = sqlca->sqlcode;
#line 223
	sqlastop((void far *)0L);
#line 223
}
#line 226
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		} 
		else
		{
			printf("修改成功！查看修改结果！\n");
			
#line 234
/*
EXEC SQL SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work INTO :LReader_id,:LReader_password,:LReader_name,:LReader_sex:LNull,:LReader_age:LNull,:LReader_Company:LNull,:LReader_work:LNull
				FROM Reader 
				WHERE Reader_id=:LReader_id;
*/
#line 236

#line 234
{
#line 234
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 234
	sqlaaloc(1, 7, 12, (void far *)0);
#line 234
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 234
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LReader_password)),(void far *)&LReader_password, (void far *)0,0L);
#line 234
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LReader_name)),(void far *)&LReader_name, (void far *)0,0L);
#line 234
	sqlasetv(1, 3, 462,(short) SQLLENMAX(sizeof(LReader_sex)),(void far *)&LReader_sex, (void far *)0,0L);
#line 234
	sqlasetv(1, 4, 496,(short) SQLLENMAX(sizeof(LReader_age)),(void far *)&LReader_age, (void far *)0,0L);
#line 234
	sqlasetv(1, 5, 462,(short) SQLLENMAX(sizeof(LReader_Company)),(void far *)&LReader_Company, (void far *)0,0L);
#line 234
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LReader_work)),(void far *)&LReader_work, (void far *)0,0L);
#line 234
	sqlaaloc(2, 1, 12, (void far *)0);
#line 234
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_id)), (void far *)LReader_id, (void far *)0, (void far *)0L);
#line 234
	sqlxcall(24, 12, 2, 1, 137, (char far *)"  SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work FROM Reader WHERE Reader_id=@p1          ");
#line 234
	SQLCODE = sqlca->sqlcode;
#line 234
	sqlastop((void far *)0L);
#line 234
}
#line 237
			printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","Reader_password","LReader_name","Reader_sex","Reader_age","Reader_Company","Reader_work");
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\n",LReader_id,LReader_password,LReader_name,LReader_sex,LReader_age,LReader_Company,LReader_work);	
		}
		printf("操作完成！返回主菜单！\n");
		return 1;
	}
	printf("操作完成！返回主菜单！\n");	
}
