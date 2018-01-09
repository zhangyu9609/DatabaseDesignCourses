/* ===== adminfunction.c =====*/


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
		{340,2,0,0,"                              ","","adminfunction","1111XQM5","        "};
static void far* pid = &program_id;
#line 1 "adminfunction.sqc"
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
#line 2 "adminfunction.sqc"



#line 4
/*
EXEC SQL BEGIN DECLARE SECTION;
*/
#line 4
 
char LReader_id[10];
char LBook_id[10];
char LBorrow_time[15];
char LReturn_time[15];
char LNull[15]="-1";
char LReader_name[15];

int LOver_time;
double LFine;

char LReader_password[10];
char LReader_sex[10];
int LReader_age;
char LReader_Company[15];
char LReader_work[10];

char LBook_name[15];
char LBook_writer[15];

char LBook_publisher[15];
int LBook_price;
char LBook_introduction[15];
char LBook_type[15];
int LBook_num;
int LBook_allnum;


#line 31
/*
EXEC SQL END DECLARE SECTION;
*/
#line 31

long SQLCODE;

#line 33
/*
EXEC SQL INCLUDE sqlca;
*/
#line 33



void admin_reader()
{
	int select_num;
	adminreader_menu();
	while(1)
	{
		scanf("%d",&select_num);
		switch(select_num)
		{
		case 1:allreader();break;
		case 2:addreader();break;
		case 3:deletereader();break;
		case 4:updatereader();break;
		case 5:break;
		case 0:
			{
				system("cls");
				DISCONNECT();
				printf(" ------------------------------------------------------------\n");
				printf("                   -=  感谢使用，再见！ =-                   \n");
				printf(" ------------------------------------------------------------\n");
				system("pause");
				exit(0);
			}
		default:printf("输入错误，请重新输入:");continue;
		}
		break;
	}
	
}


void admin_book()
{
	int select_num;
	adminbook_menu();
	while(1)
	{
		scanf("%d",&select_num);
		switch(select_num)
		{
		case 1:allbook();break;
		case 2:addbook();break;
		case 3:deletebook();break;
		case 4:updatebook();break;
		case 5:break;
		case 0:
			{
				system("cls");
				DISCONNECT();
				printf(" ------------------------------------------------------------\n");
				printf("                   -=  感谢使用，再见！ =-                   \n");
				printf(" ------------------------------------------------------------\n");
				system("pause");
				exit(0);
			}
		default:printf("输入错误，请重新输入:");continue;
		}
		break;
	}
}

void allbook()
{
	int  count=0;
	
#line 101
/*
EXEC SQL DECLARE GX CURSOR FOR
		SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum
		FROM Book;
*/
#line 103

	
#line 104
/*
EXEC SQL OPEN GX;
*/
#line 104

#line 104
{
#line 104
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 104
	sqlxcall(26, 1, 0, 0, 140, (char far *)"/* GX 1 nohold */ SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum FROM Book ");
#line 104
	SQLCODE = sqlca->sqlcode;
#line 104
	sqlastop((void far *)0L);
#line 104
}
#line 105
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	for ( ; ; )
	{
		
#line 112
/*
EXEC SQL FETCH GX INTO :LBook_id,:LBook_name,:LBook_writer:LNull,:LBook_publisher:LNull,:LBook_price:LNull,:LBook_introduction:LNull,:LBook_type,:LBook_num,:LBook_allnum;
*/
#line 112

#line 112
{
#line 112
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 112
	sqlaaloc(1, 9, 1, (void far *)0);
#line 112
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 112
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_name)),(void far *)&LBook_name, (void far *)0,0L);
#line 112
	sqlasetv(1, 2, 463,(short) SQLLENMAX(sizeof(LBook_writer)),(void far *)&LBook_writer, (void far *)&LNull,0L);
#line 112
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LBook_publisher)),(void far *)&LBook_publisher, (void far *)&LNull,0L);
#line 112
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LBook_price)),(void far *)&LBook_price, (void far *)&LNull,0L);
#line 112
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LBook_introduction)),(void far *)&LBook_introduction, (void far *)&LNull,0L);
#line 112
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LBook_type)),(void far *)&LBook_type, (void far *)0,0L);
#line 112
	sqlasetv(1, 7, 496,(short) SQLLENMAX(sizeof(LBook_num)),(void far *)&LBook_num, (void far *)0,0L);
#line 112
	sqlasetv(1, 8, 496,(short) SQLLENMAX(sizeof(LBook_allnum)),(void far *)&LBook_allnum, (void far *)0,0L);
#line 112
	sqlxcall(25, 1, 0, 1, 176, (char far *)"  FETCH GX INTO :         ,:           ,:             :      ,:                :      ,:            :      ,:                   :      ,:           ,:          ,:              ");
#line 112
	SQLCODE = sqlca->sqlcode;
#line 112
	sqlastop((void far *)0L);
#line 112
}
#line 113
		if (sqlca->sqlcode!=0)
		{
			printf("打印完成！返回主菜单！\n");
			break;
		}
		if(count++ == 0)
		{
			printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Book_id","Book_name","Book_writer","Book_publisher","Book_price","Book_intro..","Book_type","Book_num","Book_allnum");
		}
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\t%-10d\t%-10d\n",LBook_id,LBook_name,LBook_writer,LBook_publisher,LBook_price,LBook_introduction,LBook_type,LBook_num,LBook_allnum);
		
	}
	
#line 125
/*
EXEC SQL CLOSE GX;
*/
#line 125

#line 125
{
#line 125
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 125
	sqlxcall(20, 1, 0, 0, 11, (char far *)"  CLOSE GX ");
#line 125
	SQLCODE = sqlca->sqlcode;
#line 125
	sqlastop((void far *)0L);
#line 125
}
#line 126	
}

void allreader()
{
	int  count=0;
	
#line 131
/*
EXEC SQL DECLARE FX CURSOR FOR
		SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work 
		FROM Reader;
*/
#line 133

	
#line 134
/*
EXEC SQL OPEN FX;
*/
#line 134

#line 134
{
#line 134
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 134
	sqlxcall(26, 2, 0, 0, 125, (char far *)"/* FX 2 nohold */ SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work  FROM Reader ");
#line 134
	SQLCODE = sqlca->sqlcode;
#line 134
	sqlastop((void far *)0L);
#line 134
}
#line 135
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	for ( ; ; )
	{
		
#line 142
/*
EXEC SQL FETCH FX INTO :LReader_id,:LReader_password,:LReader_name,:LReader_sex:LNull,:LReader_age:LNull,:LReader_Company:LNull,:LReader_work:LNull;
*/
#line 142

#line 142
{
#line 142
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 142
	sqlaaloc(1, 7, 2, (void far *)0);
#line 142
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 142
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LReader_password)),(void far *)&LReader_password, (void far *)0,0L);
#line 142
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LReader_name)),(void far *)&LReader_name, (void far *)0,0L);
#line 142
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LReader_sex)),(void far *)&LReader_sex, (void far *)&LNull,0L);
#line 142
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LReader_age)),(void far *)&LReader_age, (void far *)&LNull,0L);
#line 142
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LReader_Company)),(void far *)&LReader_Company, (void far *)&LNull,0L);
#line 142
	sqlasetv(1, 6, 463,(short) SQLLENMAX(sizeof(LReader_work)),(void far *)&LReader_work, (void far *)&LNull,0L);
#line 142
	sqlxcall(25, 2, 0, 1, 152, (char far *)"  FETCH FX INTO :           ,:                 ,:             ,:            :      ,:            :      ,:                :      ,:             :       ");
#line 142
	SQLCODE = sqlca->sqlcode;
#line 142
	sqlastop((void far *)0L);
#line 142
}
#line 143
		if (sqlca->sqlcode!=0)
		{
			printf("打印完成！返回主菜单！\n");
			break;
		}
		if(count++ == 0)
		{
			printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","Reader_password","LReader_name","Reader_sex","Reader_age","Reader_Company","Reader_work");
		}
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\n",LReader_id,LReader_password,LReader_name,LReader_sex,LReader_age,LReader_Company,LReader_work);
		
	}
	
#line 155
/*
EXEC SQL CLOSE FX;
*/
#line 155

#line 155
{
#line 155
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 155
	sqlxcall(20, 2, 0, 0, 11, (char far *)"  CLOSE FX ");
#line 155
	SQLCODE = sqlca->sqlcode;
#line 155
	sqlastop((void far *)0L);
#line 155
}
#line 156		
}

void allborrow()
{
	int  count=0;
	
#line 161
/*
EXEC SQL DECLARE AX CURSOR FOR
		SELECT Reader_id,Book_id,Borrow_time
		FROM Borrow;
*/
#line 163

	
#line 164
/*
EXEC SQL OPEN AX;
*/
#line 164

#line 164
{
#line 164
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 164
	sqlxcall(26, 3, 0, 0, 67, (char far *)"/* AX 3 nohold */ SELECT Reader_id,Book_id,Borrow_time FROM Borrow ");
#line 164
	SQLCODE = sqlca->sqlcode;
#line 164
	sqlastop((void far *)0L);
#line 164
}
#line 165
	for ( ; ; )
	{
		
#line 167
/*
EXEC SQL FETCH AX INTO :LReader_id,:LBook_id,:LBorrow_time;
*/
#line 167

#line 167
{
#line 167
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 167
	sqlaaloc(1, 3, 3, (void far *)0);
#line 167
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 167
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 167
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 167
	sqlxcall(25, 3, 0, 1, 55, (char far *)"  FETCH AX INTO :           ,:         ,:              ");
#line 167
	SQLCODE = sqlca->sqlcode;
#line 167
	sqlastop((void far *)0L);
#line 167
}
#line 168
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
	
#line 179
/*
EXEC SQL CLOSE AX;
*/
#line 179

#line 179
{
#line 179
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 179
	sqlxcall(20, 3, 0, 0, 11, (char far *)"  CLOSE AX ");
#line 179
	SQLCODE = sqlca->sqlcode;
#line 179
	sqlastop((void far *)0L);
#line 179
}
#line 180
	count=0;
	
#line 181
/*
EXEC SQL DECLARE BX CURSOR FOR
		SELECT Reader_id,Book_id,Borrow_time,Return_time
		FROM History;
*/
#line 183

	
#line 184
/*
EXEC SQL OPEN BX;
*/
#line 184

#line 184
{
#line 184
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 184
	sqlxcall(26, 4, 0, 0, 80, (char far *)"/* BX 4 nohold */ SELECT Reader_id,Book_id,Borrow_time,Return_time FROM History ");
#line 184
	SQLCODE = sqlca->sqlcode;
#line 184
	sqlastop((void far *)0L);
#line 184
}
#line 185
	for ( ; ; )
	{
		
#line 187
/*
EXEC SQL FETCH BX INTO :LReader_id,:LBook_id,:LBorrow_time,:LReturn_time :LNull;
*/
#line 187

#line 187
{
#line 187
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 187
	sqlaaloc(1, 4, 4, (void far *)0);
#line 187
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 187
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 187
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 187
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LReturn_time)),(void far *)&LReturn_time, (void far *)&LNull,0L);
#line 187
	sqlxcall(25, 4, 0, 1, 78, (char far *)"  FETCH BX INTO :           ,:         ,:             ,:              :       ");
#line 187
	SQLCODE = sqlca->sqlcode;
#line 187
	sqlastop((void far *)0L);
#line 187
}
#line 188
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
	
#line 200
/*
EXEC SQL CLOSE BX;
*/
#line 200

#line 200
{
#line 200
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 200
	sqlxcall(20, 4, 0, 0, 11, (char far *)"  CLOSE BX ");
#line 200
	SQLCODE = sqlca->sqlcode;
#line 200
	sqlastop((void far *)0L);
#line 200
}
#line 201
}


void overdue()
{
	int  count=0;
	
#line 207
/*
EXEC SQL DECLARE QX CURSOR FOR
		SELECT *
		FROM view_overdue;
*/
#line 209

	
#line 210
/*
EXEC SQL OPEN QX;
*/
#line 210

#line 210
{
#line 210
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 210
	sqlxcall(26, 5, 0, 0, 45, (char far *)"/* QX 5 nohold */ SELECT * FROM view_overdue ");
#line 210
	SQLCODE = sqlca->sqlcode;
#line 210
	sqlastop((void far *)0L);
#line 210
}
#line 211
	for ( ; ; )
	{
		
#line 213
/*
EXEC SQL FETCH QX INTO :LReader_id,:LReader_name,:LBook_name,:LBorrow_time,:LOver_time,:LFine;
*/
#line 213

#line 213
{
#line 213
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 213
	sqlaaloc(1, 6, 5, (void far *)0);
#line 213
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 213
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LReader_name)),(void far *)&LReader_name, (void far *)0,0L);
#line 213
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LBook_name)),(void far *)&LBook_name, (void far *)0,0L);
#line 213
	sqlasetv(1, 3, 462,(short) SQLLENMAX(sizeof(LBorrow_time)),(void far *)&LBorrow_time, (void far *)0,0L);
#line 213
	sqlasetv(1, 4, 496,(short) SQLLENMAX(sizeof(LOver_time)),(void far *)&LOver_time, (void far *)0,0L);
#line 213
	sqlasetv(1, 5, 480,(short) SQLLENMAX(sizeof(LFine)),(void far *)&LFine, (void far *)0,0L);
#line 213
	sqlxcall(25, 5, 0, 1, 93, (char far *)"  FETCH QX INTO :           ,:             ,:           ,:             ,:           ,:       ");
#line 213
	SQLCODE = sqlca->sqlcode;
#line 213
	sqlastop((void far *)0L);
#line 213
}
#line 214
		if (sqlca->sqlcode!=0)
		{
			printf("发生了错误%d\n",SQLCODE);
			printf("打印完成！返回主菜单！\n");
			break;
		}
		if(count++ == 0)
		{
			printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","LReader_name","Book_id","Borrow_time","超期[天]","罚款[元]");
		}
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10f\n",LReader_id,LReader_name,LBook_name,LBorrow_time,LOver_time,LFine);
	}
	
#line 226
/*
EXEC SQL CLOSE QX;
*/
#line 226

#line 226
{
#line 226
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 226
	sqlxcall(20, 5, 0, 0, 11, (char far *)"  CLOSE QX ");
#line 226
	SQLCODE = sqlca->sqlcode;
#line 226
	sqlastop((void far *)0L);
#line 226
}
#line 227
}

void addreader()
{
	char YN;
	printf("输入读者的ID：");
	scanf("%s",&LReader_id);
	printf("输入读者的密码：");
	scanf("%s",&LReader_password);
	printf("输入读者的名字：");
	scanf("%s",&LReader_name);
	printf("输入读者的性别：");
	scanf("%s",&LReader_sex);
	printf("输入读者的年龄：");
	scanf("%d",&LReader_age);
	printf("输入读者的所在单位：");
	scanf("%s",&LReader_Company);
	printf("输入读者的职业：");
	scanf("%s",&LReader_work);
	
#line 246
/*
EXEC SQL INSERT INTO Reader  
		VALUES(:LReader_id,:LReader_password,:LReader_name,:LReader_sex,:LReader_age,:LReader_Company,:LReader_work);
*/
#line 247

#line 246
{
#line 246
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 246
	sqlaaloc(2, 7, 6, (void far *)0);
#line 246
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_id)), (void far *)LReader_id, (void far *)0, (void far *)0L);
#line 246
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LReader_password)), (void far *)LReader_password, (void far *)0, (void far *)0L);
#line 246
	sqlasetv(2, 2, 462, (short) SQLLENMAX(sizeof(LReader_name)), (void far *)LReader_name, (void far *)0, (void far *)0L);
#line 246
	sqlasetv(2, 3, 462, (short) SQLLENMAX(sizeof(LReader_sex)), (void far *)LReader_sex, (void far *)0, (void far *)0L);
#line 246
	sqlasetv(2, 4, 496, 4,  (void far *)&LReader_age, (void far *)0, (void far *)0L);
#line 246
	sqlasetv(2, 5, 462, (short) SQLLENMAX(sizeof(LReader_Company)), (void far *)LReader_Company, (void far *)0, (void far *)0L);
#line 246
	sqlasetv(2, 6, 462, (short) SQLLENMAX(sizeof(LReader_work)), (void far *)LReader_work, (void far *)0, (void far *)0L);
#line 246
	sqlxcall(24, 6, 2, 0, 137, (char far *)"  INSERT INTO Reader VALUES(@p1         ,@p2               ,@p3           ,@p4          ,@p5          ,@p6              ,@p7           ) ");
#line 246
	SQLCODE = sqlca->sqlcode;
#line 246
	sqlastop((void far *)0L);
#line 246
}
#line 248
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
	} 
	else
	{
		printf("增加成功！");
	}
	printf("是否需要打印(Y/N):");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","Reader_password","LReader_name","Reader_sex","Reader_age","Reader_Company","Reader_work");
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\n",LReader_id,LReader_password,LReader_name,LReader_sex,LReader_age,LReader_Company,LReader_work);
		printf("打印完成！返回主菜单！\n");
		return 1;
	}
	printf("操作完成！返回主菜单！\n");
}

void deletereader()
{
	char YN;
	printf("请输入你要删除的读者的ID：");
	scanf("%s",&LReader_id);
	
#line 275
/*
EXEC SQL SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work INTO :LReader_id,:LReader_password,:LReader_name,:LReader_sex:LNull,:LReader_age:LNull,:LReader_Company:LNull,:LReader_work:LNull
		FROM Reader 
		WHERE Reader_id=:LReader_id;
*/
#line 277

#line 275
{
#line 275
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 275
	sqlaaloc(1, 7, 7, (void far *)0);
#line 275
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 275
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LReader_password)),(void far *)&LReader_password, (void far *)0,0L);
#line 275
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LReader_name)),(void far *)&LReader_name, (void far *)0,0L);
#line 275
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LReader_sex)),(void far *)&LReader_sex, (void far *)&LNull,0L);
#line 275
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LReader_age)),(void far *)&LReader_age, (void far *)&LNull,0L);
#line 275
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LReader_Company)),(void far *)&LReader_Company, (void far *)&LNull,0L);
#line 275
	sqlasetv(1, 6, 463,(short) SQLLENMAX(sizeof(LReader_work)),(void far *)&LReader_work, (void far *)&LNull,0L);
#line 275
	sqlaaloc(2, 1, 7, (void far *)0);
#line 275
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_id)), (void far *)LReader_id, (void far *)0, (void far *)0L);
#line 275
	sqlxcall(24, 7, 2, 1, 137, (char far *)"  SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work FROM Reader WHERE Reader_id=@p1          ");
#line 275
	SQLCODE = sqlca->sqlcode;
#line 275
	sqlastop((void far *)0L);
#line 275
}
#line 278
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","Reader_password","LReader_name","Reader_sex","Reader_age","Reader_Company","Reader_work");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\n",LReader_id,LReader_password,LReader_name,LReader_sex,LReader_age,LReader_Company,LReader_work);
	printf("是否删除该读者（Y/N）：");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		
#line 290
/*
EXEC SQL DELETE
			FROM Reader
			WHERE Reader_id=:LReader_id;
*/
#line 292

#line 290
{
#line 290
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 290
	sqlaaloc(2, 1, 8, (void far *)0);
#line 290
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_id)), (void far *)LReader_id, (void far *)0, (void far *)0L);
#line 290
	sqlxcall(24, 8, 2, 0, 50, (char far *)"  DELETE FROM Reader WHERE Reader_id=@p1          ");
#line 290
	SQLCODE = sqlca->sqlcode;
#line 290
	sqlastop((void far *)0L);
#line 290
}
#line 293
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		} 
		else
		{
			printf("删除成功！返回主菜单！\n");	
		}
	}
}

void updatereader()
{
	char YN;
	printf("请输入你要修改的读者的ID：");
	scanf("%s",&LReader_id);
	
#line 310
/*
EXEC SQL SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work INTO :LReader_id,:LReader_password,:LReader_name,:LReader_sex:LNull,:LReader_age:LNull,:LReader_Company:LNull,:LReader_work:LNull
		FROM Reader 
		WHERE Reader_id=:LReader_id;
*/
#line 312

#line 310
{
#line 310
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 310
	sqlaaloc(1, 7, 9, (void far *)0);
#line 310
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 310
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LReader_password)),(void far *)&LReader_password, (void far *)0,0L);
#line 310
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LReader_name)),(void far *)&LReader_name, (void far *)0,0L);
#line 310
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LReader_sex)),(void far *)&LReader_sex, (void far *)&LNull,0L);
#line 310
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LReader_age)),(void far *)&LReader_age, (void far *)&LNull,0L);
#line 310
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LReader_Company)),(void far *)&LReader_Company, (void far *)&LNull,0L);
#line 310
	sqlasetv(1, 6, 463,(short) SQLLENMAX(sizeof(LReader_work)),(void far *)&LReader_work, (void far *)&LNull,0L);
#line 310
	sqlaaloc(2, 1, 9, (void far *)0);
#line 310
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_id)), (void far *)LReader_id, (void far *)0, (void far *)0L);
#line 310
	sqlxcall(24, 9, 2, 1, 137, (char far *)"  SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work FROM Reader WHERE Reader_id=@p1          ");
#line 310
	SQLCODE = sqlca->sqlcode;
#line 310
	sqlastop((void far *)0L);
#line 310
}
#line 313
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","Reader_password","LReader_name","Reader_sex","Reader_age","Reader_Company","Reader_work");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\n",LReader_id,LReader_password,LReader_name,LReader_sex,LReader_age,LReader_Company,LReader_work);
	printf("是否修改该读者（Y/N）：");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		printf("输入读者的密码：");
		scanf("%s",&LReader_password);
		printf("输入读者的名字：");
		scanf("%s",&LReader_name);
		printf("输入读者的性别：");
		scanf("%s",&LReader_sex);
		printf("输入读者的年龄：");
		scanf("%d",&LReader_age);
		printf("输入读者的所在单位：");
		scanf("%s",&LReader_Company);
		printf("输入读者的职业：");
		scanf("%s",&LReader_work);
		
#line 337
/*
EXEC SQL UPDATE Reader
			SET Reader_password=:LReader_password,Reader_name=:LReader_name,Reader_sex=:LReader_sex,Reader_age=:LReader_age,Reader_Company=:LReader_Company,Reader_work=:LReader_work
			WHERE Reader_id=:LReader_id;
*/
#line 339

#line 337
{
#line 337
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 337
	sqlaaloc(2, 7, 10, (void far *)0);
#line 337
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_password)), (void far *)LReader_password, (void far *)0, (void far *)0L);
#line 337
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LReader_name)), (void far *)LReader_name, (void far *)0, (void far *)0L);
#line 337
	sqlasetv(2, 2, 462, (short) SQLLENMAX(sizeof(LReader_sex)), (void far *)LReader_sex, (void far *)0, (void far *)0L);
#line 337
	sqlasetv(2, 3, 496, 4,  (void far *)&LReader_age, (void far *)0, (void far *)0L);
#line 337
	sqlasetv(2, 4, 462, (short) SQLLENMAX(sizeof(LReader_Company)), (void far *)LReader_Company, (void far *)0, (void far *)0L);
#line 337
	sqlasetv(2, 5, 462, (short) SQLLENMAX(sizeof(LReader_work)), (void far *)LReader_work, (void far *)0, (void far *)0L);
#line 337
	sqlasetv(2, 6, 462, (short) SQLLENMAX(sizeof(LReader_id)), (void far *)LReader_id, (void far *)0, (void far *)0L);
#line 337
	sqlxcall(24, 10, 2, 0, 221, (char far *)"  UPDATE Reader SET Reader_password=@p1               ,Reader_name=@p2           ,Reader_sex=@p3          ,Reader_age=@p4          ,Reader_Company=@p5              ,Reader_work=@p6            WHERE Reader_id=@p7          ");
#line 337
	SQLCODE = sqlca->sqlcode;
#line 337
	sqlastop((void far *)0L);
#line 337
}
#line 340
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		} 
		else
		{
			printf("修改成功！查看修改结果！\n");
			
#line 348
/*
EXEC SQL SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work INTO :LReader_id,:LReader_password,:LReader_name,:LReader_sex:LNull,:LReader_age:LNull,:LReader_Company:LNull,:LReader_work:LNull
				FROM Reader 
				WHERE Reader_id=:LReader_id;
*/
#line 350

#line 348
{
#line 348
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 348
	sqlaaloc(1, 7, 11, (void far *)0);
#line 348
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LReader_id)),(void far *)&LReader_id, (void far *)0,0L);
#line 348
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LReader_password)),(void far *)&LReader_password, (void far *)0,0L);
#line 348
	sqlasetv(1, 2, 462,(short) SQLLENMAX(sizeof(LReader_name)),(void far *)&LReader_name, (void far *)0,0L);
#line 348
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LReader_sex)),(void far *)&LReader_sex, (void far *)&LNull,0L);
#line 348
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LReader_age)),(void far *)&LReader_age, (void far *)&LNull,0L);
#line 348
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LReader_Company)),(void far *)&LReader_Company, (void far *)&LNull,0L);
#line 348
	sqlasetv(1, 6, 463,(short) SQLLENMAX(sizeof(LReader_work)),(void far *)&LReader_work, (void far *)&LNull,0L);
#line 348
	sqlaaloc(2, 1, 11, (void far *)0);
#line 348
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LReader_id)), (void far *)LReader_id, (void far *)0, (void far *)0L);
#line 348
	sqlxcall(24, 11, 2, 1, 137, (char far *)"  SELECT Reader_id,Reader_password,Reader_name,Reader_sex,Reader_age,Reader_Company,Reader_work FROM Reader WHERE Reader_id=@p1          ");
#line 348
	SQLCODE = sqlca->sqlcode;
#line 348
	sqlastop((void far *)0L);
#line 348
}
#line 351
			printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Reader_id","Reader_password","LReader_name","Reader_sex","Reader_age","Reader_Company","Reader_work");
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\n",LReader_id,LReader_password,LReader_name,LReader_sex,LReader_age,LReader_Company,LReader_work);	
		}
		printf("操作完成！返回主菜单！\n");
		return 1;
	}
	printf("操作完成！返回主菜单！\n");
}	


void addbook()
{
	char YN;
	printf("输入图书的ID：");
	scanf("%s",&LBook_id);
	printf("输入图书名：");
	scanf("%s",&LBook_name);
	printf("输入图书作者：");
	scanf("%s",&LBook_writer);
	printf("输入图书的出版社：");
	scanf("%s",&LBook_publisher);
	printf("输入图书的单价：");
	scanf("%d",&LBook_price);
	printf("输入图书的描述：");
	scanf("%s",&LBook_introduction);
	printf("输入图书的类型：");
	scanf("%s",&LBook_type);
	printf("输入图书的库存：");
	scanf("%d",&LBook_num);
	printf("输入图书的总量：");
	scanf("%d",&LBook_allnum);
	
#line 382
/*
EXEC SQL INSERT INTO Book  
		VALUES(:LBook_id,:LBook_name,:LBook_writer:LNull,:LBook_publisher:LNull,:LBook_price:LNull,:LBook_introduction:LNull,:LBook_type,:LBook_num,:LBook_allnum);
*/
#line 383

#line 382
{
#line 382
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 382
	sqlaaloc(2, 9, 12, (void far *)0);
#line 382
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 382
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LBook_name)), (void far *)LBook_name, (void far *)0, (void far *)0L);
#line 382
	sqlasetv(2, 2, 463, (short) SQLLENMAX(sizeof(LBook_writer)), (void far *)LBook_writer, (void far *)&LNull, (void far *)0L);
#line 382
	sqlasetv(2, 3, 463, (short) SQLLENMAX(sizeof(LBook_publisher)), (void far *)LBook_publisher, (void far *)&LNull, (void far *)0L);
#line 382
	sqlasetv(2, 4, 497, 4,  (void far *)&LBook_price, (void far *)&LNull, (void far *)0L);
#line 382
	sqlasetv(2, 5, 463, (short) SQLLENMAX(sizeof(LBook_introduction)), (void far *)LBook_introduction, (void far *)&LNull, (void far *)0L);
#line 382
	sqlasetv(2, 6, 462, (short) SQLLENMAX(sizeof(LBook_type)), (void far *)LBook_type, (void far *)0, (void far *)0L);
#line 382
	sqlasetv(2, 7, 496, 4,  (void far *)&LBook_num, (void far *)0, (void far *)0L);
#line 382
	sqlasetv(2, 8, 496, 4,  (void far *)&LBook_allnum, (void far *)0, (void far *)0L);
#line 382
	sqlxcall(24, 12, 2, 0, 187, (char far *)"  INSERT INTO Book VALUES(@p1       ,@p2         ,@p3                  ,@p4                     ,@p5                 ,@p6                        ,@p7         ,@p8        ,@p9           ) ");
#line 382
	SQLCODE = sqlca->sqlcode;
#line 382
	sqlastop((void far *)0L);
#line 382
}
#line 384
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
	} 
	else
	{
		printf("增加成功！");
	}
	printf("是否需要打印(Y/N):");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		
#line 398
/*
EXEC SQL SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum INTO :LBook_id,:LBook_name,:LBook_writer:LNull,:LBook_publisher:LNull,:LBook_price:LNull,:LBook_introduction:LNull,:LBook_type,:LBook_num,:LBook_allnum
			FROM Book 
			WHERE Book_id=:LBook_id;
*/
#line 400

#line 398
{
#line 398
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 398
	sqlaaloc(1, 9, 13, (void far *)0);
#line 398
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 398
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_name)),(void far *)&LBook_name, (void far *)0,0L);
#line 398
	sqlasetv(1, 2, 463,(short) SQLLENMAX(sizeof(LBook_writer)),(void far *)&LBook_writer, (void far *)&LNull,0L);
#line 398
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LBook_publisher)),(void far *)&LBook_publisher, (void far *)&LNull,0L);
#line 398
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LBook_price)),(void far *)&LBook_price, (void far *)&LNull,0L);
#line 398
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LBook_introduction)),(void far *)&LBook_introduction, (void far *)&LNull,0L);
#line 398
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LBook_type)),(void far *)&LBook_type, (void far *)0,0L);
#line 398
	sqlasetv(1, 7, 496,(short) SQLLENMAX(sizeof(LBook_num)),(void far *)&LBook_num, (void far *)0,0L);
#line 398
	sqlasetv(1, 8, 496,(short) SQLLENMAX(sizeof(LBook_allnum)),(void far *)&LBook_allnum, (void far *)0,0L);
#line 398
	sqlaaloc(2, 1, 13, (void far *)0);
#line 398
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 398
	sqlxcall(24, 13, 2, 1, 149, (char far *)"  SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum FROM Book WHERE Book_id=@p1        ");
#line 398
	SQLCODE = sqlca->sqlcode;
#line 398
	sqlastop((void far *)0L);
#line 398
}
#line 401
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		} 
		printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Book_id","Book_name","Book_writer","Book_publisher","Book_price","Book_intro..","Book_type","Book_num","Book_allnum");
		printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\t%-10d\t%-10d\n",LBook_id,LBook_name,LBook_writer,LBook_publisher,LBook_price,LBook_introduction,LBook_type,LBook_num,LBook_allnum);
		printf("打印完成！返回主菜单！\n");
		return 1;
	}
	printf("操作完成！返回主菜单！\n");
}

void deletebook()
{
	char YN;
	printf("请输入你要删除的图书的ID：");
	scanf("%s",&LBook_id);
	
#line 419
/*
EXEC SQL SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum INTO :LBook_id,:LBook_name,:LBook_writer:LNull,:LBook_publisher:LNull,:LBook_price:LNull,:LBook_introduction:LNull,:LBook_type,:LBook_num,:LBook_allnum
		FROM Book 
		WHERE Book_id=:LBook_id;
*/
#line 421

#line 419
{
#line 419
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 419
	sqlaaloc(1, 9, 14, (void far *)0);
#line 419
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 419
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_name)),(void far *)&LBook_name, (void far *)0,0L);
#line 419
	sqlasetv(1, 2, 463,(short) SQLLENMAX(sizeof(LBook_writer)),(void far *)&LBook_writer, (void far *)&LNull,0L);
#line 419
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LBook_publisher)),(void far *)&LBook_publisher, (void far *)&LNull,0L);
#line 419
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LBook_price)),(void far *)&LBook_price, (void far *)&LNull,0L);
#line 419
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LBook_introduction)),(void far *)&LBook_introduction, (void far *)&LNull,0L);
#line 419
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LBook_type)),(void far *)&LBook_type, (void far *)0,0L);
#line 419
	sqlasetv(1, 7, 496,(short) SQLLENMAX(sizeof(LBook_num)),(void far *)&LBook_num, (void far *)0,0L);
#line 419
	sqlasetv(1, 8, 496,(short) SQLLENMAX(sizeof(LBook_allnum)),(void far *)&LBook_allnum, (void far *)0,0L);
#line 419
	sqlaaloc(2, 1, 14, (void far *)0);
#line 419
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 419
	sqlxcall(24, 14, 2, 1, 149, (char far *)"  SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum FROM Book WHERE Book_id=@p1        ");
#line 419
	SQLCODE = sqlca->sqlcode;
#line 419
	sqlastop((void far *)0L);
#line 419
}
#line 422
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Book_id","Book_name","Book_writer","Book_publisher","Book_price","Book_intro..","Book_type","Book_num","Book_allnum");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\t%-10d\t%-10d\n",LBook_id,LBook_name,LBook_writer,LBook_publisher,LBook_price,LBook_introduction,LBook_type,LBook_num,LBook_allnum);
	printf("是否删除该图书（Y/N）：");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		
#line 434
/*
EXEC SQL DELETE
			FROM Book
			WHERE Book_id=:LBook_id;
*/
#line 436

#line 434
{
#line 434
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 434
	sqlaaloc(2, 1, 15, (void far *)0);
#line 434
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 434
	sqlxcall(24, 15, 2, 0, 44, (char far *)"  DELETE FROM Book WHERE Book_id=@p1        ");
#line 434
	SQLCODE = sqlca->sqlcode;
#line 434
	sqlastop((void far *)0L);
#line 434
}
#line 437
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		} 
		else
		{
			printf("删除成功！返回主菜单！\n");	
		}
	}
}

void updatebook()
{
	char YN;
	printf("请输入你要修改的图书的ID：");
	scanf("%s",&LBook_id);
	
#line 454
/*
EXEC SQL SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum INTO :LBook_id,:LBook_name,:LBook_writer:LNull,:LBook_publisher:LNull,:LBook_price:LNull,:LBook_introduction:LNull,:LBook_type,:LBook_num,:LBook_allnum
		FROM Book 
		WHERE Book_id=:LBook_id;
*/
#line 456

#line 454
{
#line 454
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 454
	sqlaaloc(1, 9, 16, (void far *)0);
#line 454
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 454
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_name)),(void far *)&LBook_name, (void far *)0,0L);
#line 454
	sqlasetv(1, 2, 463,(short) SQLLENMAX(sizeof(LBook_writer)),(void far *)&LBook_writer, (void far *)&LNull,0L);
#line 454
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LBook_publisher)),(void far *)&LBook_publisher, (void far *)&LNull,0L);
#line 454
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LBook_price)),(void far *)&LBook_price, (void far *)&LNull,0L);
#line 454
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LBook_introduction)),(void far *)&LBook_introduction, (void far *)&LNull,0L);
#line 454
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LBook_type)),(void far *)&LBook_type, (void far *)0,0L);
#line 454
	sqlasetv(1, 7, 496,(short) SQLLENMAX(sizeof(LBook_num)),(void far *)&LBook_num, (void far *)0,0L);
#line 454
	sqlasetv(1, 8, 496,(short) SQLLENMAX(sizeof(LBook_allnum)),(void far *)&LBook_allnum, (void far *)0,0L);
#line 454
	sqlaaloc(2, 1, 16, (void far *)0);
#line 454
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 454
	sqlxcall(24, 16, 2, 1, 149, (char far *)"  SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum FROM Book WHERE Book_id=@p1        ");
#line 454
	SQLCODE = sqlca->sqlcode;
#line 454
	sqlastop((void far *)0L);
#line 454
}
#line 457
	if(sqlca->sqlcode!=0) 
	{
		printf("发生了错误%d\n",SQLCODE);
		return 1;   
    } 
	printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Book_id","Book_name","Book_writer","Book_publisher","Book_price","Book_intro..","Book_type","Book_num","Book_allnum");
	printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\t%-10d\t%-10d\n",LBook_id,LBook_name,LBook_writer,LBook_publisher,LBook_price,LBook_introduction,LBook_type,LBook_num,LBook_allnum);
	printf("是否修改该图书（Y/N）：");
	do{scanf("%s",&YN);}
	while(YN != 'N' && YN != 'n' && YN != 'Y' && YN != 'y');
	if (YN == 'y' || YN == 'Y')
	{
		printf("输入图书名：");
		scanf("%s",&LBook_name);
		printf("输入图书作者：");
		scanf("%s",&LBook_writer);
		printf("输入图书的出版社：");
		scanf("%s",&LBook_publisher);
		printf("输入图书的单价：");
		scanf("%d",&LBook_price);
		printf("输入图书的描述：");
		scanf("%s",&LBook_introduction);
		printf("输入图书的类型：");
		scanf("%s",&LBook_type);
		
#line 481
/*
EXEC SQL UPDATE Book
			SET Book_name=:LBook_name,Book_writer=:LBook_writer,Book_publisher=:LBook_publisher,Book_price=:LBook_price,Book_introduction=:LBook_introduction,Book_type=:LBook_type
			WHERE Book_id=:LBook_id;
*/
#line 483

#line 481
{
#line 481
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 481
	sqlaaloc(2, 7, 17, (void far *)0);
#line 481
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_name)), (void far *)LBook_name, (void far *)0, (void far *)0L);
#line 481
	sqlasetv(2, 1, 462, (short) SQLLENMAX(sizeof(LBook_writer)), (void far *)LBook_writer, (void far *)0, (void far *)0L);
#line 481
	sqlasetv(2, 2, 462, (short) SQLLENMAX(sizeof(LBook_publisher)), (void far *)LBook_publisher, (void far *)0, (void far *)0L);
#line 481
	sqlasetv(2, 3, 496, 4,  (void far *)&LBook_price, (void far *)0, (void far *)0L);
#line 481
	sqlasetv(2, 4, 462, (short) SQLLENMAX(sizeof(LBook_introduction)), (void far *)LBook_introduction, (void far *)0, (void far *)0L);
#line 481
	sqlasetv(2, 5, 462, (short) SQLLENMAX(sizeof(LBook_type)), (void far *)LBook_type, (void far *)0, (void far *)0L);
#line 481
	sqlasetv(2, 6, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 481
	sqlxcall(24, 17, 2, 0, 213, (char far *)"  UPDATE Book SET Book_name=@p1         ,Book_writer=@p2           ,Book_publisher=@p3              ,Book_price=@p4          ,Book_introduction=@p5                 ,Book_type=@p6          WHERE Book_id=@p7        ");
#line 481
	SQLCODE = sqlca->sqlcode;
#line 481
	sqlastop((void far *)0L);
#line 481
}
#line 484
		if(sqlca->sqlcode!=0) 
		{
			printf("发生了错误%d\n",SQLCODE);
			return 1;   
		} 
		else
		{
			printf("修改成功！查看修改结果！\n");
			
#line 492
/*
EXEC SQL SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum INTO :LBook_id,:LBook_name,:LBook_writer:LNull,:LBook_publisher:LNull,:LBook_price:LNull,:LBook_introduction:LNull,:LBook_type,:LBook_num,:LBook_allnum
				FROM Book 
				WHERE Book_id=:LBook_id;
*/
#line 494

#line 492
{
#line 492
	sqlastrt((void far *)pid, (void far *)0, (struct tag_sqlca far *)sqlca);
#line 492
	sqlaaloc(1, 9, 18, (void far *)0);
#line 492
	sqlasetv(1, 0, 462,(short) SQLLENMAX(sizeof(LBook_id)),(void far *)&LBook_id, (void far *)0,0L);
#line 492
	sqlasetv(1, 1, 462,(short) SQLLENMAX(sizeof(LBook_name)),(void far *)&LBook_name, (void far *)0,0L);
#line 492
	sqlasetv(1, 2, 463,(short) SQLLENMAX(sizeof(LBook_writer)),(void far *)&LBook_writer, (void far *)&LNull,0L);
#line 492
	sqlasetv(1, 3, 463,(short) SQLLENMAX(sizeof(LBook_publisher)),(void far *)&LBook_publisher, (void far *)&LNull,0L);
#line 492
	sqlasetv(1, 4, 497,(short) SQLLENMAX(sizeof(LBook_price)),(void far *)&LBook_price, (void far *)&LNull,0L);
#line 492
	sqlasetv(1, 5, 463,(short) SQLLENMAX(sizeof(LBook_introduction)),(void far *)&LBook_introduction, (void far *)&LNull,0L);
#line 492
	sqlasetv(1, 6, 462,(short) SQLLENMAX(sizeof(LBook_type)),(void far *)&LBook_type, (void far *)0,0L);
#line 492
	sqlasetv(1, 7, 496,(short) SQLLENMAX(sizeof(LBook_num)),(void far *)&LBook_num, (void far *)0,0L);
#line 492
	sqlasetv(1, 8, 496,(short) SQLLENMAX(sizeof(LBook_allnum)),(void far *)&LBook_allnum, (void far *)0,0L);
#line 492
	sqlaaloc(2, 1, 18, (void far *)0);
#line 492
	sqlasetv(2, 0, 462, (short) SQLLENMAX(sizeof(LBook_id)), (void far *)LBook_id, (void far *)0, (void far *)0L);
#line 492
	sqlxcall(24, 18, 2, 1, 149, (char far *)"  SELECT Book_id,Book_name,Book_writer,Book_publisher,Book_price,Book_introduction,Book_type,Book_num,Book_allnum FROM Book WHERE Book_id=@p1        ");
#line 492
	SQLCODE = sqlca->sqlcode;
#line 492
	sqlastop((void far *)0L);
#line 492
}
#line 495
			printf("\n%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\t%-10s\n","Book_id","Book_name","Book_writer","Book_publisher","Book_price","Book_intro..","Book_type","Book_num","Book_allnum");
			printf("%-10s\t%-10s\t%-10s\t%-10s\t%-10d\t%-10s\t%-10s\t%-10d\t%-10d\n",LBook_id,LBook_name,LBook_writer,LBook_publisher,LBook_price,LBook_introduction,LBook_type,LBook_num,LBook_allnum);
		}
		printf("操作完成！返回主菜单！\n");
		return 1;
	}
	printf("操作完成！返回主菜单！\n");
}
