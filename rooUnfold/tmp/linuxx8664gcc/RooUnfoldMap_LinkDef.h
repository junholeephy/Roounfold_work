# 1 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx"
# 1 "/home/junho/Downloads/root/include/TObject.h" 1
# 31 "/home/junho/Downloads/root/include/TObject.h"
# 1 "/home/junho/Downloads/root/include/Rtypes.h" 1
# 24 "/home/junho/Downloads/root/include/Rtypes.h"
# 1 "/home/junho/Downloads/root/include/RConfig.h" 1
# 23 "/home/junho/Downloads/root/include/RConfig.h"
# 1 "/home/junho/Downloads/root/include/RVersion.h" 1
# 24 "/home/junho/Downloads/root/include/RConfig.h" 2
# 186 "/home/junho/Downloads/root/include/RConfig.h"
# 1 "/usr/include/features.h" 1 3 4
# 367 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 1 3 4
# 410 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 411 "/usr/include/x86_64-linux-gnu/sys/cdefs.h" 2 3 4
# 368 "/usr/include/features.h" 2 3 4
# 391 "/usr/include/features.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 1 3 4
# 10 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/gnu/stubs-64.h" 1 3 4
# 11 "/usr/include/x86_64-linux-gnu/gnu/stubs.h" 2 3 4
# 392 "/usr/include/features.h" 2 3 4
# 187 "/home/junho/Downloads/root/include/RConfig.h" 2
# 25 "/home/junho/Downloads/root/include/Rtypes.h" 2


# 1 "/home/junho/Downloads/root/include/DllImport.h" 1
# 28 "/home/junho/Downloads/root/include/Rtypes.h" 2


# 1 "/home/junho/Downloads/root/include/Rtypeinfo.h" 1
# 32 "/home/junho/Downloads/root/include/Rtypeinfo.h"
# 1 "/usr/include/c++/5/typeinfo" 1 3
# 32 "/usr/include/c++/5/typeinfo" 3
       
# 33 "/usr/include/c++/5/typeinfo" 3

# 1 "/usr/include/c++/5/exception" 1 3
# 33 "/usr/include/c++/5/exception" 3
       
# 34 "/usr/include/c++/5/exception" 3

#pragma GCC visibility push(default)

# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 1 3
# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3

# 194 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
namespace std
{
  typedef long unsigned int size_t;
  typedef long int ptrdiff_t;




}
# 216 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 482 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/os_defines.h" 1 3
# 483 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 2 3


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/cpu_defines.h" 1 3
# 486 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++config.h" 2 3
# 38 "/usr/include/c++/5/exception" 2 3
# 1 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 1 3
# 33 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 3
       
# 34 "/usr/include/c++/5/bits/atomic_lockfree_defines.h" 3
# 39 "/usr/include/c++/5/exception" 2 3

extern "C++" {

namespace std
{
# 60 "/usr/include/c++/5/exception" 3
  class exception
  {
  public:
    exception() throw() { }
    virtual ~exception() throw();



    virtual const char* what() const throw();
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() throw() { }



    virtual ~bad_exception() throw();


    virtual const char* what() const throw();
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) throw();
# 102 "/usr/include/c++/5/exception" 3
  void terminate() throw() __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) throw();
# 114 "/usr/include/c++/5/exception" 3
  void unexpected() __attribute__ ((__noreturn__));
# 127 "/usr/include/c++/5/exception" 3
  bool uncaught_exception() throw() __attribute__ ((__pure__));


}

namespace __gnu_cxx
{

# 152 "/usr/include/c++/5/exception" 3
  void __verbose_terminate_handler();


}

}

#pragma GCC visibility pop
# 35 "/usr/include/c++/5/typeinfo" 2 3




#pragma GCC visibility push(default)

extern "C++" {

namespace __cxxabiv1
{
  class __class_type_info;
}
# 80 "/usr/include/c++/5/typeinfo" 3
namespace std
{






  class type_info
  {
  public:




    virtual ~type_info();



    const char* name() const
    { return __name[0] == '*' ? __name + 1 : __name; }
# 115 "/usr/include/c++/5/typeinfo" 3
    bool before(const type_info& __arg) const
    { return (__name[0] == '*' && __arg.__name[0] == '*')
 ? __name < __arg.__name
 : __builtin_strcmp (__name, __arg.__name) < 0; }

    bool operator==(const type_info& __arg) const
    {
      return ((__name == __arg.__name)
       || (__name[0] != '*' &&
    __builtin_strcmp (__name, __arg.__name) == 0));
    }
# 136 "/usr/include/c++/5/typeinfo" 3
    bool operator!=(const type_info& __arg) const
    { return !operator==(__arg); }
# 152 "/usr/include/c++/5/typeinfo" 3
    virtual bool __is_pointer_p() const;


    virtual bool __is_function_p() const;







    virtual bool __do_catch(const type_info *__thr_type, void **__thr_obj,
       unsigned __outer) const;


    virtual bool __do_upcast(const __cxxabiv1::__class_type_info *__target,
        void **__obj_ptr) const;

  protected:
    const char *__name;

    explicit type_info(const char *__n): __name(__n) { }

  private:

    type_info& operator=(const type_info&);
    type_info(const type_info&);
  };







  class bad_cast : public exception
  {
  public:
    bad_cast() throw() { }



    virtual ~bad_cast() throw();


    virtual const char* what() const throw();
  };





  class bad_typeid : public exception
  {
  public:
    bad_typeid () throw() { }



    virtual ~bad_typeid() throw();


    virtual const char* what() const throw();
  };
}

}

#pragma GCC visibility pop
# 33 "/home/junho/Downloads/root/include/Rtypeinfo.h" 2

# 33 "/home/junho/Downloads/root/include/Rtypeinfo.h"
using std::type_info;
# 31 "/home/junho/Downloads/root/include/Rtypes.h" 2


# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4

# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef long unsigned int size_t;
# 34 "/usr/include/stdio.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 121 "/usr/include/x86_64-linux-gnu/bits/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/typesizes.h" 1 3 4
# 122 "/usr/include/x86_64-linux-gnu/bits/types.h" 2 3 4


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 36 "/usr/include/stdio.h" 2 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 521 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3 4
typedef __off_t off_t;






typedef __off64_t off64_t;




typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 164 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/stdio_lim.h" 1 3 4
# 165 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();








extern FILE *tmpfile (void) ;
# 205 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 227 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 252 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 262 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 295 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 463 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 522 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 550 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 594 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3 4
extern char *gets (char *__s) __attribute__ ((__deprecated__));


# 649 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 665 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 726 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 737 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 773 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 792 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 815 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;








extern void perror (const char *__s);






# 1 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 854 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 872 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 942 "/usr/include/stdio.h" 3 4
}
# 34 "/home/junho/Downloads/root/include/Rtypes.h" 2
# 1 "/usr/include/string.h" 1 3 4
# 27 "/usr/include/string.h" 3 4
extern "C" {




# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/string.h" 2 3 4









extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern void *memchr (void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const void *memchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 90 "/usr/include/string.h" 3 4
}










extern "C++" void *rawmemchr (void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *rawmemchr (const void *__s, int __c)
     throw () __asm ("rawmemchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));







extern "C++" void *memrchr (void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const void *memrchr (const void *__s, int __c, size_t __n)
      throw () __asm ("memrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (2)));






# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 160 "/usr/include/string.h" 2 3 4


extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) throw () __attribute__ ((__nonnull__ (2, 4)));




extern char *strdup (const char *__s)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 206 "/usr/include/string.h" 3 4



extern "C++"
{
extern char *strchr (char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strchr (const char *__s, int __c)
     throw () __asm ("strchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 229 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strrchr (char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *strrchr (const char *__s, int __c)
     throw () __asm ("strrchr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 256 "/usr/include/string.h" 3 4
}










extern "C++" char *strchrnul (char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern "C++" const char *strchrnul (const char *__s, int __c)
     throw () __asm ("strchrnul") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));









extern size_t strcspn (const char *__s, const char *__reject)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern "C++"
{
extern char *strpbrk (char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strpbrk (const char *__s, const char *__accept)
     throw () __asm ("strpbrk") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 308 "/usr/include/string.h" 3 4
}






extern "C++"
{
extern char *strstr (char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern const char *strstr (const char *__haystack, const char *__needle)
     throw () __asm ("strstr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 335 "/usr/include/string.h" 3 4
}







extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char **__restrict __save_ptr)
     throw () __attribute__ ((__nonnull__ (2, 3)));





extern "C++" char *strcasestr (char *__haystack, const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
extern "C++" const char *strcasestr (const char *__haystack,
         const char *__needle)
     throw () __asm ("strcasestr") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 377 "/usr/include/string.h" 3 4
extern void *memmem (const void *__haystack, size_t __haystacklen,
       const void *__needle, size_t __needlelen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 3)));



extern void *__mempcpy (void *__restrict __dest,
   const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern void *mempcpy (void *__restrict __dest,
        const void *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));





extern size_t strlen (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) throw ();

# 433 "/usr/include/string.h" 3 4
extern char *strerror_r (int __errnum, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2))) ;





extern char *strerror_l (int __errnum, __locale_t __l) throw ();





extern void __bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



extern "C++"
{
extern char *index (char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *index (const char *__s, int __c)
     throw () __asm ("index") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 482 "/usr/include/string.h" 3 4
}







extern "C++"
{
extern char *rindex (char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
extern const char *rindex (const char *__s, int __c)
     throw () __asm ("rindex") __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 510 "/usr/include/string.h" 3 4
}







extern int ffs (int __i) throw () __attribute__ ((__const__));




extern int ffsl (long int __l) throw () __attribute__ ((__const__));
__extension__ extern int ffsll (long long int __ll)
     throw () __attribute__ ((__const__));



extern int strcasecmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));





extern int strcasecmp_l (const char *__s1, const char *__s2,
    __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern int strncasecmp_l (const char *__s1, const char *__s2,
     size_t __n, __locale_t __loc)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 4)));





extern char *strsep (char **__restrict __stringp,
       const char *__restrict __delim)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) throw ();


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int strverscmp (const char *__s1, const char *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strfry (char *__string) throw () __attribute__ ((__nonnull__ (1)));


extern void *memfrob (void *__s, size_t __n) throw () __attribute__ ((__nonnull__ (1)));







extern "C++" char *basename (char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
extern "C++" const char *basename (const char *__filename)
     throw () __asm ("basename") __attribute__ ((__nonnull__ (1)));
# 658 "/usr/include/string.h" 3 4
}
# 35 "/home/junho/Downloads/root/include/Rtypes.h" 2
# 1 "/home/junho/Downloads/root/include/snprintf.h" 1
# 50 "/home/junho/Downloads/root/include/snprintf.h"

# 50 "/home/junho/Downloads/root/include/snprintf.h"
int snprintf(char *string, size_t length, const char *format, ...);
# 36 "/home/junho/Downloads/root/include/Rtypes.h" 2
# 1 "/home/junho/Downloads/root/include/strlcpy.h" 1
# 41 "/home/junho/Downloads/root/include/strlcpy.h"
size_t strlcpy(char *dst, const char *src, size_t siz);
size_t strlcat(char *dst, const char *src, size_t siz);
# 37 "/home/junho/Downloads/root/include/Rtypes.h" 2







class TClass;
class TBuffer;
class TDirectory;
class TMemberInspector;
class TObject;
class TNamed;
class TRootIOCtor;
class TCollection;
class TFileMergeInfo;
class TString;



typedef char Char_t;
typedef unsigned char UChar_t;
typedef short Short_t;
typedef unsigned short UShort_t;




typedef int Int_t;
typedef unsigned int UInt_t;


typedef int Seek_t;
typedef long Long_t;
typedef unsigned long ULong_t;





typedef float Float_t;
typedef float Float16_t;
typedef double Double_t;
typedef double Double32_t;
typedef long double LongDouble_t;
typedef char Text_t;
typedef bool Bool_t;
typedef unsigned char Byte_t;
typedef short Version_t;
typedef const char Option_t;
typedef int Ssiz_t;
typedef float Real_t;




typedef long long Long64_t;
typedef unsigned long long ULong64_t;

typedef double Axis_t;
typedef double Stat_t;

typedef short Font_t;
typedef short Style_t;
typedef short Marker_t;
typedef short Width_t;
typedef short Color_t;
typedef short SCoord_t;
typedef double Coord_t;
typedef float Angle_t;
typedef float Size_t;

enum EColor { kWhite =0, kBlack =1, kGray=920,
              kRed =632, kGreen =416, kBlue=600, kYellow=400, kMagenta=616, kCyan=432,
              kOrange=800, kSpring=820, kTeal=840, kAzure =860, kViolet =880, kPink=900 };


class TClassStreamer;
class TMemberStreamer;
typedef void (*ClassStreamerFunc_t)(TBuffer&, void*);
typedef void (*MemberStreamerFunc_t)(TBuffer&, void*, Int_t);


class TVirtualCollectionProxy;

typedef void (*VoidFuncPtr_t)();
# 137 "/home/junho/Downloads/root/include/Rtypes.h"
const Bool_t kTRUE = true;
const Bool_t kFALSE = false;

const Int_t kMaxUChar = 256;
const Int_t kMaxChar = kMaxUChar >> 1;
const Int_t kMinChar = -kMaxChar - 1;

const Int_t kMaxUShort = 65534;
const Int_t kMaxShort = kMaxUShort >> 1;
const Int_t kMinShort = -kMaxShort - 1;

const UInt_t kMaxUInt = UInt_t(~0);
const Int_t kMaxInt = Int_t(kMaxUInt >> 1);
const Int_t kMinInt = -kMaxInt - 1;

const ULong_t kMaxULong = ULong_t(~0);
const Long_t kMaxLong = Long_t(kMaxULong >> 1);
const Long_t kMinLong = -kMaxLong - 1;

const ULong64_t kMaxULong64 = ULong64_t(~0LL);
const Long64_t kMaxLong64 = Long64_t(kMaxULong64 >> 1);
const Long64_t kMinLong64 = -kMaxLong64 - 1;

const size_t kBitsPerByte = 8;
const Ssiz_t kNPOS = ~(Ssiz_t)0;
# 174 "/home/junho/Downloads/root/include/Rtypes.h"
extern Int_t gDebug;




typedef void (*ShowMembersFunc_t)(void *obj, TMemberInspector &R__insp);
class TVirtualIsAProxy;
typedef TClass *(*IsAGlobalFunc_t)(const TClass*, const void *obj);


template <class Tmpl> TBuffer &operator>>(TBuffer &buf, Tmpl *&obj);
template <class Tmpl> TBuffer &operator<<(TBuffer &buf, const Tmpl *obj);




namespace ROOT {

   class TGenericClassInfo;
   typedef void *(*NewFunc_t)(void *);
   typedef void *(*NewArrFunc_t)(Long_t size, void *arena);
   typedef void (*DelFunc_t)(void *);
   typedef void (*DelArrFunc_t)(void *);
   typedef void (*DesFunc_t)(void *);
   typedef void (*DirAutoAdd_t)(void *, TDirectory *);
   typedef Long64_t (*MergeFunc_t)(void *, TCollection *, TFileMergeInfo *);
   typedef void (*ResetAfterMergeFunc_t)(void *, TFileMergeInfo *);

   template <class RootClass> Short_t SetClassVersion(RootClass *);

   extern TClass *CreateClass(const char *cname, Version_t id,
                              const type_info &info, TVirtualIsAProxy *isa,
                              ShowMembersFunc_t show,
                              const char *dfil, const char *ifil,
                              Int_t dl, Int_t il);
   extern void AddClass(const char *cname, Version_t id, const type_info &info,
                        VoidFuncPtr_t dict, Int_t pragmabits);
   extern void RemoveClass(const char *cname);
   extern void ResetClassVersion(TClass*, const char*, Short_t);

   extern TNamed *RegisterClassTemplate(const char *name,
                                        const char *file, Int_t line);
# 228 "/home/junho/Downloads/root/include/Rtypes.h"
   class TInitBehavior {




   public:
      virtual ~TInitBehavior() { }
      virtual void Register(const char *cname, Version_t id, const type_info &info,
                            VoidFuncPtr_t dict, Int_t pragmabits) const = 0;
      virtual void Unregister(const char *classname) const = 0;
      virtual TClass *CreateClass(const char *cname, Version_t id,
                                  const type_info &info, TVirtualIsAProxy *isa,
                                  ShowMembersFunc_t show,
                                  const char *dfil, const char *ifil,
                                  Int_t dl, Int_t il) const = 0;
   };

   class TDefaultInitBehavior : public TInitBehavior {
   public:
      virtual void Register(const char *cname, Version_t id, const type_info &info,
                            VoidFuncPtr_t dict, Int_t pragmabits) const {
         ROOT::AddClass(cname, id, info, dict, pragmabits);
      }
      virtual void Unregister(const char *classname) const {
         ROOT::RemoveClass(classname);
      }
      virtual TClass *CreateClass(const char *cname, Version_t id,
                                  const type_info &info, TVirtualIsAProxy *isa,
                                  ShowMembersFunc_t show,
                                  const char *dfil, const char *ifil,
                                  Int_t dl, Int_t il) const {
         return ROOT::CreateClass(cname, id, info, isa, show, dfil, ifil, dl, il);
      }
   };

   const TInitBehavior *DefineBehavior(void * ,
                                       void * );

}



# 1 "/home/junho/Downloads/root/include/TGenericClassInfo.h" 1
# 15 "/home/junho/Downloads/root/include/TGenericClassInfo.h"
# 1 "/usr/include/c++/5/vector" 1 3
# 58 "/usr/include/c++/5/vector" 3
       
# 59 "/usr/include/c++/5/vector" 3

# 1 "/usr/include/c++/5/bits/stl_algobase.h" 1 3
# 60 "/usr/include/c++/5/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/5/bits/functexcept.h" 1 3
# 40 "/usr/include/c++/5/bits/functexcept.h" 3
# 1 "/usr/include/c++/5/bits/exception_defines.h" 1 3
# 41 "/usr/include/c++/5/bits/functexcept.h" 2 3


# 42 "/usr/include/c++/5/bits/functexcept.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__))
    __attribute__((__format__(__gnu_printf__, 1, 2)));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));


}
# 61 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/cpp_type_traits.h" 1 3
# 35 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
       
# 36 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
# 68 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  template<typename _Iterator, typename _Container>
    class __normal_iterator;


}

namespace std __attribute__ ((__visibility__ ("default")))
{


  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };





  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 199 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 270 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
template<> struct __is_integer<__int128> { enum { __value = 1 }; typedef __true_type __type; }; template<> struct __is_integer<unsigned __int128> { enum { __value = 1 }; typedef __true_type __type; };
# 287 "/usr/include/c++/5/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_normal_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Iterator, typename _Container>
    struct __is_normal_iterator< __gnu_cxx::__normal_iterator<_Iterator,
             _Container> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };
# 443 "/usr/include/c++/5/bits/cpp_type_traits.h" 3

}
# 62 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/ext/type_traits.h" 1 3
# 32 "/usr/include/c++/5/ext/type_traits.h" 3
       
# 33 "/usr/include/c++/5/ext/type_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }
# 165 "/usr/include/c++/5/ext/type_traits.h" 3
  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };




  template<typename _Tp>
    struct __promote<_Tp, false>
    { };

  template<>
    struct __promote<long double>
    { typedef long double __type; };

  template<>
    struct __promote<double>
    { typedef double __type; };

  template<>
    struct __promote<float>
    { typedef float __type; };

  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };


}
# 63 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/ext/numeric_traits.h" 1 3
# 32 "/usr/include/c++/5/ext/numeric_traits.h" 3
       
# 33 "/usr/include/c++/5/ext/numeric_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 54 "/usr/include/c++/5/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 99 "/usr/include/c++/5/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 64) * 643L / 2136);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 18);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 4932);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };


}
# 64 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_pair.h" 1 3
# 59 "/usr/include/c++/5/bits/stl_pair.h" 3
# 1 "/usr/include/c++/5/bits/move.h" 1 3
# 34 "/usr/include/c++/5/bits/move.h" 3
# 1 "/usr/include/c++/5/bits/concept_check.h" 1 3
# 33 "/usr/include/c++/5/bits/concept_check.h" 3
       
# 34 "/usr/include/c++/5/bits/concept_check.h" 3
# 35 "/usr/include/c++/5/bits/move.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{







  template<typename _Tp>
    inline _Tp*
    __addressof(_Tp& __r)
    {
      return reinterpret_cast<_Tp*>
 (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));
    }


}
# 159 "/usr/include/c++/5/bits/move.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 174 "/usr/include/c++/5/bits/move.h" 3
  template<typename _Tp>
    inline void
    swap(_Tp& __a, _Tp& __b)




    {

     

      _Tp __tmp = (__a);
      __a = (__b);
      __b = (__tmp);
    }




  template<typename _Tp, size_t _Nm>
    inline void
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])



    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }



}
# 60 "/usr/include/c++/5/bits/stl_pair.h" 2 3





namespace std __attribute__ ((__visibility__ ("default")))
{

# 95 "/usr/include/c++/5/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;





      pair()
      : first(), second() { }


      pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }



      template<class _U1, class _U2>
 pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }
# 209 "/usr/include/c++/5/bits/stl_pair.h" 3
    };


  template<class _T1, class _T2>
    inline bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<class _T1, class _T2>
    inline bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<class _T1, class _T2>
    inline bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<class _T1, class _T2>
    inline bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<class _T1, class _T2>
    inline bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<class _T1, class _T2>
    inline bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }
# 284 "/usr/include/c++/5/bits/stl_pair.h" 3
  template<class _T1, class _T2>
    inline pair<_T1, _T2>
    make_pair(_T1 __x, _T2 __y)
    { return pair<_T1, _T2>(__x, __y); }





}
# 65 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 1 3
# 62 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
       
# 63 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3







namespace std __attribute__ ((__visibility__ ("default")))
{

# 89 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 116 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 165 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3
  template<typename _Iterator>
    struct iterator_traits
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };



  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }





  template<typename _Iterator, bool _HasBase>
    struct _Iter_base
    {
      typedef _Iterator iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it; }
    };

  template<typename _Iterator>
    struct _Iter_base<_Iterator, true>
    {
      typedef typename _Iterator::iterator_type iterator_type;
      static iterator_type _S_base(_Iterator __it)
      { return __it.base(); }
    };
# 235 "/usr/include/c++/5/bits/stl_iterator_base_types.h" 3

}
# 66 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 1 3
# 62 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
       
# 63 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3


# 1 "/usr/include/c++/5/debug/debug.h" 1 3
# 46 "/usr/include/c++/5/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 66 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }
# 112 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      ;
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      __i += __n;
    }
# 171 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }
# 202 "/usr/include/c++/5/bits/stl_iterator_base_funcs.h" 3

}
# 67 "/usr/include/c++/5/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/5/bits/stl_iterator.h" 1 3
# 66 "/usr/include/c++/5/bits/stl_iterator.h" 3
# 1 "/usr/include/c++/5/bits/ptr_traits.h" 1 3
# 67 "/usr/include/c++/5/bits/stl_iterator.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 96 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }
# 160 "/usr/include/c++/5/bits/stl_iterator.h" 3
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }







      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }







      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 290 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline typename reverse_iterator<_Iterator>::difference_type
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>







    inline typename reverse_iterator<_IteratorL>::difference_type
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)

    { return __y.base() - __x.base(); }
# 414 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x) : container(&__x) { }
# 441 "/usr/include/c++/5/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_back(__value);
 return *this;
      }
# 464 "/usr/include/c++/5/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 490 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 505 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x) : container(&__x) { }
# 531 "/usr/include/c++/5/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 container->push_front(__value);
 return *this;
      }
# 554 "/usr/include/c++/5/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 580 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 599 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(&__x), iter(__i) {}
# 642 "/usr/include/c++/5/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(typename _Container::const_reference __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }
# 668 "/usr/include/c++/5/bits/stl_iterator.h" 3
      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 694 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }




}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 718 "/usr/include/c++/5/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      __normal_iterator()
      : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i)
      : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i)
        : _M_current(__i.base()) { }


      reference
      operator*() const
      { return *_M_current; }

      pointer
      operator->() const
      { return _M_current; }

      __normal_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int)
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int)
      { return __normal_iterator(_M_current--); }


      reference
      operator[](difference_type __n) const
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(difference_type __n)
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(difference_type __n) const
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(difference_type __n)
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(difference_type __n) const
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const
      { return _M_current; }
    };
# 818 "/usr/include/c++/5/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
   
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>







    inline typename __normal_iterator<_IteratorL, _Container>::difference_type
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)

    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
   
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
   
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }


}
# 68 "/usr/include/c++/5/bits/stl_algobase.h" 2 3



# 1 "/usr/include/c++/5/bits/predefined_ops.h" 1 3
# 33 "/usr/include/c++/5/bits/predefined_ops.h" 3
namespace __gnu_cxx
{
namespace __ops
{
  struct _Iter_less_iter
  {
    template<typename _Iterator1, typename _Iterator2>
     
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 < *__it2; }
  };
 
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }

  struct _Iter_less_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it < __val; }
    };

  inline _Iter_less_val
  __iter_less_val()
  { return _Iter_less_val(); }

  inline _Iter_less_val
  __iter_comp_val(_Iter_less_iter)
  { return _Iter_less_val(); }

  struct _Val_less_iter
  {
    template<typename _Value, typename _Iterator>
      bool
      operator()(_Value& __val, _Iterator __it) const
      { return __val < *__it; }
    };

  inline _Val_less_iter
  __val_less_iter()
  { return _Val_less_iter(); }

  inline _Val_less_iter
  __val_comp_iter(_Iter_less_iter)
  { return _Val_less_iter(); }

  struct _Iter_equal_to_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 == *__it2; }
    };

  inline _Iter_equal_to_iter
  __iter_equal_to_iter()
  { return _Iter_equal_to_iter(); }

  struct _Iter_equal_to_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it == __val; }
    };

  inline _Iter_equal_to_val
  __iter_equal_to_val()
  { return _Iter_equal_to_val(); }

  inline _Iter_equal_to_val
  __iter_comp_val(_Iter_equal_to_iter)
  { return _Iter_equal_to_val(); }

  template<typename _Compare>
    struct _Iter_comp_iter
    {
      _Compare _M_comp;
     
      _Iter_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator1, typename _Iterator2>
       
        bool
        operator()(_Iterator1 __it1, _Iterator2 __it2)
        { return bool(_M_comp(*__it1, *__it2)); }
    };

  template<typename _Compare>
   
    inline _Iter_comp_iter<_Compare>
    __iter_comp_iter(_Compare __comp)
    { return _Iter_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    struct _Iter_comp_val
    {
      _Compare _M_comp;

      _Iter_comp_val(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator, typename _Value>
 bool
 operator()(_Iterator __it, _Value& __val)
 { return bool(_M_comp(*__it, __val)); }
    };

  template<typename _Compare>
   inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Compare __comp)
    { return _Iter_comp_val<_Compare>(__comp); }

  template<typename _Compare>
    inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Iter_comp_iter<_Compare> __comp)
    { return _Iter_comp_val<_Compare>(__comp._M_comp); }

  template<typename _Compare>
    struct _Val_comp_iter
    {
      _Compare _M_comp;

      _Val_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Value, typename _Iterator>
 bool
 operator()(_Value& __val, _Iterator __it)
 { return bool(_M_comp(__val, *__it)); }
    };

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Compare __comp)
    { return _Val_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Iter_comp_iter<_Compare> __comp)
    { return _Val_comp_iter<_Compare>(__comp._M_comp); }

  template<typename _Value>
    struct _Iter_equals_val
    {
      _Value& _M_value;

      _Iter_equals_val(_Value& __value)
 : _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return *__it == _M_value; }
    };

  template<typename _Value>
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

  template<typename _Iterator1>
    struct _Iter_equals_iter
    {
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_equals_iter(_Iterator1 __it1)
 : _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return *__it2 == _M_ref; }
    };

  template<typename _Iterator>
    inline _Iter_equals_iter<_Iterator>
    __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)
    { return _Iter_equals_iter<_Iterator>(__it); }

  template<typename _Predicate>
    struct _Iter_pred
    {
      _Predicate _M_pred;

      _Iter_pred(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_pred<_Predicate>
    __pred_iter(_Predicate __pred)
    { return _Iter_pred<_Predicate>(__pred); }

  template<typename _Compare, typename _Value>
    struct _Iter_comp_to_val
    {
      _Compare _M_comp;
      _Value& _M_value;

      _Iter_comp_to_val(_Compare __comp, _Value& __value)
 : _M_comp(__comp), _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_comp(*__it, _M_value)); }
    };

  template<typename _Compare, typename _Value>
    _Iter_comp_to_val<_Compare, _Value>
    __iter_comp_val(_Compare __comp, _Value &__val)
    { return _Iter_comp_to_val<_Compare, _Value>(__comp, __val); }

  template<typename _Compare, typename _Iterator1>
    struct _Iter_comp_to_iter
    {
      _Compare _M_comp;
      typename std::iterator_traits<_Iterator1>::reference _M_ref;

      _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1)
 : _M_comp(__comp), _M_ref(*__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return bool(_M_comp(*__it2, _M_ref)); }
    };

  template<typename _Compare, typename _Iterator>
    inline _Iter_comp_to_iter<_Compare, _Iterator>
    __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)
    { return _Iter_comp_to_iter<_Compare, _Iterator>(__comp._M_comp, __it); }

  template<typename _Predicate>
    struct _Iter_negate
    {
      _Predicate _M_pred;

      _Iter_negate(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return !bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_negate<_Predicate>
    __negate(_Iter_pred<_Predicate> __pred)
    { return _Iter_negate<_Predicate>(__pred._M_pred); }

}
}
# 72 "/usr/include/c++/5/bits/stl_algobase.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{






  template<bool _BoolType>
    struct __iter_swap
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          typedef typename iterator_traits<_ForwardIterator1>::value_type
            _ValueType1;
          _ValueType1 __tmp = (*__a);
          *__a = (*__b);
          *__b = (__tmp);
 }
    };

  template<>
    struct __iter_swap<true>
    {
      template<typename _ForwardIterator1, typename _ForwardIterator2>
        static void
        iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
        {
          swap(*__a, *__b);
        }
    };
# 118 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {

     

     



      typedef typename iterator_traits<_ForwardIterator1>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator2>::value_type
 _ValueType2;

     

     


      typedef typename iterator_traits<_ForwardIterator1>::reference
 _ReferenceType1;
      typedef typename iterator_traits<_ForwardIterator2>::reference
 _ReferenceType2;
      std::__iter_swap<__are_same<_ValueType1, _ValueType2>::__value
 && __are_same<_ValueType1&, _ReferenceType1>::__value
 && __are_same<_ValueType2&, _ReferenceType2>::__value>::
 iter_swap(__a, __b);



    }
# 164 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 192 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp>
   
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
# 216 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp>
   
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
# 240 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
   
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 262 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
   
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }



  template<typename _Iterator>
    struct _Niter_base
    : _Iter_base<_Iterator, __is_normal_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Niter_base<_Iterator>::iterator_type
    __niter_base(_Iterator __it)
    { return std::_Niter_base<_Iterator>::_S_base(__it); }


  template<typename _Iterator>
    struct _Miter_base
    : _Iter_base<_Iterator, __is_move_iterator<_Iterator>::__value>
    { };

  template<typename _Iterator>
    inline typename _Miter_base<_Iterator>::iterator_type
    __miter_base(_Iterator __it)
    { return std::_Miter_base<_Iterator>::_S_base(__it); }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, ++__first)
     *__result = *__first;
   return __result;
 }
    };
# 330 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };
# 368 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {







   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 460 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 512 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };
# 540 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };
# 570 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {







   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 636 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 694 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      if (const size_t __len = __last - __first)
 __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
    }
# 738 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 798 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {

     

      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, ++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   if (const size_t __len = (__last1 - __first1))
     return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
   return true;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = ((__is_integer<_ValueType1>::__value
         || __is_pointer<_ValueType1>::__value)
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }

  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<typename _II1, typename _II2, typename _Compare>
    bool
    __lexicographical_compare_impl(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2,
       _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, ++__first2)
 {
   if (__comp(__first1, __first2))
     return true;
   if (__comp(__first2, __first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 return std::__lexicographical_compare_impl(__first1, __last1,
         __first2, __last2,
     __gnu_cxx::__ops::__iter_less_iter());
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   if (const size_t __len = std::min(__len1, __len2))
     if (int __result = __builtin_memcmp(__first1, __first2, __len))
       return __result < 0;
   return __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    __lower_bound(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;

      _DistanceType __len = std::distance(__first, __last);

      while (__len > 0)
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 998 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {

     
     

      ;

      return std::__lower_bound(__first, __last, __val,
    __gnu_cxx::__ops::__iter_less_val());
    }



  inline int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline unsigned
  __lg(unsigned __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline unsigned long
  __lg(unsigned long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

  inline unsigned long long
  __lg(unsigned long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }




# 1055 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {

     
     
     


      ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1087 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for (; __first1 != __last1; ++__first1, ++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1215 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {





     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1251 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {

     
     
      ;
      ;

      return std::__lexicographical_compare_impl
 (__first1, __last1, __first2, __last2,
  __gnu_cxx::__ops::__iter_comp_iter(__comp));
    }

  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1294 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      return std::__mismatch(__first1, __last1, __first2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }
# 1327 "/usr/include/c++/5/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      return std::__mismatch(__first1, __last1, __first2,
 __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }
# 1427 "/usr/include/c++/5/bits/stl_algobase.h" 3

}
# 61 "/usr/include/c++/5/vector" 2 3
# 1 "/usr/include/c++/5/bits/allocator.h" 1 3
# 46 "/usr/include/c++/5/bits/allocator.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 1 3
# 33 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 3
# 1 "/usr/include/c++/5/ext/new_allocator.h" 1 3
# 33 "/usr/include/c++/5/ext/new_allocator.h" 3
# 1 "/usr/include/c++/5/new" 1 3
# 37 "/usr/include/c++/5/new" 3
       
# 38 "/usr/include/c++/5/new" 3




#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };
# 82 "/usr/include/c++/5/new" 3
  struct nothrow_t { };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();





}
# 111 "/usr/include/c++/5/new" 3
void* operator new(std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
void* operator new[](std::size_t) throw(std::bad_alloc)
  __attribute__((__externally_visible__));
void operator delete(void*) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*) throw()
  __attribute__((__externally_visible__));
void* operator new(std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void* operator new[](std::size_t, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void operator delete(void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) throw()
  __attribute__((__externally_visible__));


inline void* operator new(std::size_t, void* __p) throw()
{ return __p; }
inline void* operator new[](std::size_t, void* __p) throw()
{ return __p; }


inline void operator delete (void*, void*) throw() { }
inline void operator delete[](void*, void*) throw() { }

}

#pragma GCC visibility pop
# 34 "/usr/include/c++/5/ext/new_allocator.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  using std::size_t;
  using std::ptrdiff_t;
# 57 "/usr/include/c++/5/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };







      new_allocator() throw() { }

      new_allocator(const new_allocator&) throw() { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) throw() { }

      ~new_allocator() throw() { }

      pointer
      address(reference __x) const
      { return std::__addressof(__x); }

      const_pointer
      address(const_reference __x) const
      { return std::__addressof(__x); }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const throw()
      { return size_t(-1) / sizeof(_Tp); }
# 128 "/usr/include/c++/5/ext/new_allocator.h" 3
      void
      construct(pointer __p, const _Tp& __val)
      { ::new((void *)__p) _Tp(__val); }

      void
      destroy(pointer __p) { __p->~_Tp(); }

    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }


}
# 34 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++allocator.h" 2 3
# 47 "/usr/include/c++/5/bits/allocator.h" 2 3
# 1 "/usr/include/c++/5/bits/memoryfwd.h" 1 3
# 46 "/usr/include/c++/5/bits/memoryfwd.h" 3
       
# 47 "/usr/include/c++/5/bits/memoryfwd.h" 3



namespace std __attribute__ ((__visibility__ ("default")))
{

# 63 "/usr/include/c++/5/bits/memoryfwd.h" 3
  template<typename>
    class allocator;

  template<>
    class allocator<void>;


  template<typename, typename>
    struct uses_allocator;




}
# 48 "/usr/include/c++/5/bits/allocator.h" 2 3




namespace std __attribute__ ((__visibility__ ("default")))
{








  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };






    };
# 91 "/usr/include/c++/5/bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __gnu_cxx::new_allocator<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };







      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __gnu_cxx::new_allocator<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    throw()
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    throw()
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    throw()
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    throw()
    { return false; }






  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two)
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };
# 226 "/usr/include/c++/5/bits/allocator.h" 3

}
# 62 "/usr/include/c++/5/vector" 2 3
# 1 "/usr/include/c++/5/bits/stl_construct.h" 1 3
# 61 "/usr/include/c++/5/bits/stl_construct.h" 3
# 1 "/usr/include/c++/5/ext/alloc_traits.h" 1 3
# 32 "/usr/include/c++/5/ext/alloc_traits.h" 3
       
# 33 "/usr/include/c++/5/ext/alloc_traits.h" 3
# 41 "/usr/include/c++/5/ext/alloc_traits.h" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 94 "/usr/include/c++/5/ext/alloc_traits.h" 3
template<typename _Alloc>
  struct __alloc_traits



  {
    typedef _Alloc allocator_type;
# 172 "/usr/include/c++/5/ext/alloc_traits.h" 3
    typedef typename _Alloc::pointer pointer;
    typedef typename _Alloc::const_pointer const_pointer;
    typedef typename _Alloc::value_type value_type;
    typedef typename _Alloc::reference reference;
    typedef typename _Alloc::const_reference const_reference;
    typedef typename _Alloc::size_type size_type;
    typedef typename _Alloc::difference_type difference_type;

    static pointer
    allocate(_Alloc& __a, size_type __n)
    { return __a.allocate(__n); }

    static void deallocate(_Alloc& __a, pointer __p, size_type __n)
    { __a.deallocate(__p, __n); }

    template<typename _Tp>
      static void construct(_Alloc& __a, pointer __p, const _Tp& __arg)
      { __a.construct(__p, __arg); }

    static void destroy(_Alloc& __a, pointer __p)
    { __a.destroy(__p); }

    static size_type max_size(const _Alloc& __a)
    { return __a.max_size(); }

    static const _Alloc& _S_select_on_copy(const _Alloc& __a) { return __a; }

    static void _S_on_swap(_Alloc& __a, _Alloc& __b)
    {


      std::__alloc_swap<_Alloc>::_S_do_it(__a, __b);
    }

    template<typename _Tp>
      struct rebind
      { typedef typename _Alloc::template rebind<_Tp>::other other; };

  };


}
# 62 "/usr/include/c++/5/bits/stl_construct.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 77 "/usr/include/c++/5/bits/stl_construct.h" 3
  template<typename _T1, typename _T2>
    inline void
    _Construct(_T1* __p, const _T2& __value)
    {


      ::new(static_cast<void*>(__p)) _T1(__value);
    }





  template<typename _Tp>
    inline void
    _Destroy(_Tp* __pointer)
    { __pointer->~_Tp(); }

  template<bool>
    struct _Destroy_aux
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator __first, _ForwardIterator __last)
 {
   for (; __first != __last; ++__first)
     std::_Destroy(std::__addressof(*__first));
 }
    };

  template<>
    struct _Destroy_aux<true>
    {
      template<typename _ForwardIterator>
        static void
        __destroy(_ForwardIterator, _ForwardIterator) { }
    };






  template<typename _ForwardIterator>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
                       _Value_type;
      std::_Destroy_aux<__has_trivial_destructor(_Value_type)>::
 __destroy(__first, __last);
    }







  template<typename _ForwardIterator, typename _Allocator>
    void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      _Allocator& __alloc)
    {
      typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
      for (; __first != __last; ++__first)
 __traits::destroy(__alloc, std::__addressof(*__first));
    }

  template<typename _ForwardIterator, typename _Tp>
    inline void
    _Destroy(_ForwardIterator __first, _ForwardIterator __last,
      allocator<_Tp>&)
    {
      _Destroy(__first, __last);
    }


}
# 63 "/usr/include/c++/5/vector" 2 3
# 1 "/usr/include/c++/5/bits/stl_uninitialized.h" 1 3
# 59 "/usr/include/c++/5/bits/stl_uninitialized.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  template<bool _TrivialValueTypes>
    struct __uninitialized_copy
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        __uninit_copy(_InputIterator __first, _InputIterator __last,
        _ForwardIterator __result)
        {
   _ForwardIterator __cur = __result;
   try
     {
       for (; __first != __last; ++__first, ++__cur)
  std::_Construct(std::__addressof(*__cur), *__first);
       return __cur;
     }
   catch(...)
     {
       std::_Destroy(__result, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_copy<true>
    {
      template<typename _InputIterator, typename _ForwardIterator>
        static _ForwardIterator
        __uninit_copy(_InputIterator __first, _InputIterator __last,
        _ForwardIterator __result)
        { return std::copy(__first, __last, __result); }
    };
# 105 "/usr/include/c++/5/bits/stl_uninitialized.h" 3
  template<typename _InputIterator, typename _ForwardIterator>
    inline _ForwardIterator
    uninitialized_copy(_InputIterator __first, _InputIterator __last,
         _ForwardIterator __result)
    {
      typedef typename iterator_traits<_InputIterator>::value_type
 _ValueType1;
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType2;

      const bool __assignable = true;







      return std::__uninitialized_copy<__is_trivial(_ValueType1)
           && __is_trivial(_ValueType2)
           && __assignable>::
 __uninit_copy(__first, __last, __result);
    }


  template<bool _TrivialValueType>
    struct __uninitialized_fill
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        __uninit_fill(_ForwardIterator __first, _ForwardIterator __last,
        const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __cur != __last; ++__cur)
  std::_Construct(std::__addressof(*__cur), __x);
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill<true>
    {
      template<typename _ForwardIterator, typename _Tp>
        static void
        __uninit_fill(_ForwardIterator __first, _ForwardIterator __last,
        const _Tp& __x)
        { std::fill(__first, __last, __x); }
    };
# 171 "/usr/include/c++/5/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    uninitialized_fill(_ForwardIterator __first, _ForwardIterator __last,
         const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      const bool __assignable = true;





      std::__uninitialized_fill<__is_trivial(_ValueType) && __assignable>::
 __uninit_fill(__first, __last, __x);
    }


  template<bool _TrivialValueType>
    struct __uninitialized_fill_n
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static _ForwardIterator
        __uninit_fill_n(_ForwardIterator __first, _Size __n,
   const _Tp& __x)
        {
   _ForwardIterator __cur = __first;
   try
     {
       for (; __n > 0; --__n, ++__cur)
  std::_Construct(std::__addressof(*__cur), __x);
       return __cur;
     }
   catch(...)
     {
       std::_Destroy(__first, __cur);
       throw;
     }
 }
    };

  template<>
    struct __uninitialized_fill_n<true>
    {
      template<typename _ForwardIterator, typename _Size, typename _Tp>
        static _ForwardIterator
        __uninit_fill_n(_ForwardIterator __first, _Size __n,
   const _Tp& __x)
        { return std::fill_n(__first, __n, __x); }
    };
# 234 "/usr/include/c++/5/bits/stl_uninitialized.h" 3
  template<typename _ForwardIterator, typename _Size, typename _Tp>
    inline _ForwardIterator
    uninitialized_fill_n(_ForwardIterator __first, _Size __n, const _Tp& __x)
    {
      typedef typename iterator_traits<_ForwardIterator>::value_type
 _ValueType;

      const bool __assignable = true;




      return __uninitialized_fill_n<__is_trivial(_ValueType) && __assignable>::
 __uninit_fill_n(__first, __n, __x);
    }







  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __result;
      try
 {
   typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
   for (; __first != __last; ++__first, ++__cur)
     __traits::construct(__alloc, std::__addressof(*__cur), *__first);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__result, __cur, __alloc);
   throw;
 }
    }

  template<typename _InputIterator, typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    __uninitialized_copy_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, allocator<_Tp>&)
    { return std::uninitialized_copy(__first, __last, __result); }

  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_a(_InputIterator __first, _InputIterator __last,
      _ForwardIterator __result, _Allocator& __alloc)
    {
      return std::__uninitialized_copy_a((__first),
      (__last),
      __result, __alloc);
    }

  template<typename _InputIterator, typename _ForwardIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_if_noexcept_a(_InputIterator __first,
           _InputIterator __last,
           _ForwardIterator __result,
           _Allocator& __alloc)
    {
      return std::__uninitialized_copy_a
 ((__first),
  (__last), __result, __alloc);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Allocator>
    void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
   for (; __cur != __last; ++__cur)
     __traits::construct(__alloc, std::__addressof(*__cur), __x);
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Tp, typename _Tp2>
    inline void
    __uninitialized_fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __x, allocator<_Tp2>&)
    { std::uninitialized_fill(__first, __last, __x); }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Allocator>
    _ForwardIterator
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, _Allocator& __alloc)
    {
      _ForwardIterator __cur = __first;
      try
 {
   typedef __gnu_cxx::__alloc_traits<_Allocator> __traits;
   for (; __n > 0; --__n, ++__cur)
     __traits::construct(__alloc, std::__addressof(*__cur), __x);
   return __cur;
 }
      catch(...)
 {
   std::_Destroy(__first, __cur, __alloc);
   throw;
 }
    }

  template<typename _ForwardIterator, typename _Size, typename _Tp,
    typename _Tp2>
    inline _ForwardIterator
    __uninitialized_fill_n_a(_ForwardIterator __first, _Size __n,
        const _Tp& __x, allocator<_Tp2>&)
    { return std::uninitialized_fill_n(__first, __n, __x); }
# 370 "/usr/include/c++/5/bits/stl_uninitialized.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_copy_move(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_copy_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_move_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }





  template<typename _InputIterator1, typename _InputIterator2,
    typename _ForwardIterator, typename _Allocator>
    inline _ForwardIterator
    __uninitialized_move_copy(_InputIterator1 __first1,
         _InputIterator1 __last1,
         _InputIterator2 __first2,
         _InputIterator2 __last2,
         _ForwardIterator __result,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid = std::__uninitialized_move_a(__first1, __last1,
          __result,
          __alloc);
      try
 {
   return std::__uninitialized_copy_a(__first2, __last2, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _ForwardIterator, typename _Tp, typename _InputIterator,
    typename _Allocator>
    inline _ForwardIterator
    __uninitialized_fill_move(_ForwardIterator __result, _ForwardIterator __mid,
         const _Tp& __x, _InputIterator __first,
         _InputIterator __last, _Allocator& __alloc)
    {
      std::__uninitialized_fill_a(__result, __mid, __x, __alloc);
      try
 {
   return std::__uninitialized_move_a(__first, __last, __mid, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__result, __mid, __alloc);
   throw;
 }
    }




  template<typename _InputIterator, typename _ForwardIterator, typename _Tp,
    typename _Allocator>
    inline void
    __uninitialized_move_fill(_InputIterator __first1, _InputIterator __last1,
         _ForwardIterator __first2,
         _ForwardIterator __last2, const _Tp& __x,
         _Allocator& __alloc)
    {
      _ForwardIterator __mid2 = std::__uninitialized_move_a(__first1, __last1,
           __first2,
           __alloc);
      try
 {
   std::__uninitialized_fill_a(__mid2, __last2, __x, __alloc);
 }
      catch(...)
 {
   std::_Destroy(__first2, __mid2, __alloc);
   throw;
 }
    }
# 685 "/usr/include/c++/5/bits/stl_uninitialized.h" 3

}
# 64 "/usr/include/c++/5/vector" 2 3
# 1 "/usr/include/c++/5/bits/stl_vector.h" 1 3
# 66 "/usr/include/c++/5/bits/stl_vector.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



  template<typename _Tp, typename _Alloc>
    struct _Vector_base
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
        rebind<_Tp>::other _Tp_alloc_type;
      typedef typename __gnu_cxx::__alloc_traits<_Tp_alloc_type>::pointer
        pointer;

      struct _Vector_impl
      : public _Tp_alloc_type
      {
 pointer _M_start;
 pointer _M_finish;
 pointer _M_end_of_storage;

 _Vector_impl()
 : _Tp_alloc_type(), _M_start(), _M_finish(), _M_end_of_storage()
 { }

 _Vector_impl(_Tp_alloc_type const& __a)
 : _Tp_alloc_type(__a), _M_start(), _M_finish(), _M_end_of_storage()
 { }
# 101 "/usr/include/c++/5/bits/stl_vector.h" 3
 void _M_swap_data(_Vector_impl& __x)
 {
   std::swap(_M_start, __x._M_start);
   std::swap(_M_finish, __x._M_finish);
   std::swap(_M_end_of_storage, __x._M_end_of_storage);
 }
      };

    public:
      typedef _Alloc allocator_type;

      _Tp_alloc_type&
      _M_get_Tp_allocator()
      { return *static_cast<_Tp_alloc_type*>(&this->_M_impl); }

      const _Tp_alloc_type&
      _M_get_Tp_allocator() const
      { return *static_cast<const _Tp_alloc_type*>(&this->_M_impl); }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Tp_allocator()); }

      _Vector_base()
      : _M_impl() { }

      _Vector_base(const allocator_type& __a)
      : _M_impl(__a) { }

      _Vector_base(size_t __n)
      : _M_impl()
      { _M_create_storage(__n); }

      _Vector_base(size_t __n, const allocator_type& __a)
      : _M_impl(__a)
      { _M_create_storage(__n); }
# 159 "/usr/include/c++/5/bits/stl_vector.h" 3
      ~_Vector_base()
      { _M_deallocate(this->_M_impl._M_start, this->_M_impl._M_end_of_storage
        - this->_M_impl._M_start); }

    public:
      _Vector_impl _M_impl;

      pointer
      _M_allocate(size_t __n)
      {
 typedef __gnu_cxx::__alloc_traits<_Tp_alloc_type> _Tr;
 return __n != 0 ? _Tr::allocate(_M_impl, __n) : pointer();
      }

      void
      _M_deallocate(pointer __p, size_t __n)
      {
 typedef __gnu_cxx::__alloc_traits<_Tp_alloc_type> _Tr;
 if (__p)
   _Tr::deallocate(_M_impl, __p, __n);
      }

    private:
      void
      _M_create_storage(size_t __n)
      {
 this->_M_impl._M_start = this->_M_allocate(__n);
 this->_M_impl._M_finish = this->_M_impl._M_start;
 this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
      }
    };
# 213 "/usr/include/c++/5/bits/stl_vector.h" 3
  template<typename _Tp, typename _Alloc = std::allocator<_Tp> >
    class vector : protected _Vector_base<_Tp, _Alloc>
    {

      typedef typename _Alloc::value_type _Alloc_value_type;
     
     

      typedef _Vector_base<_Tp, _Alloc> _Base;
      typedef typename _Base::_Tp_alloc_type _Tp_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Tp_alloc_type> _Alloc_traits;

    public:
      typedef _Tp value_type;
      typedef typename _Base::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef __gnu_cxx::__normal_iterator<pointer, vector> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, vector>
      const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Alloc allocator_type;

    protected:
      using _Base::_M_allocate;
      using _Base::_M_deallocate;
      using _Base::_M_impl;
      using _Base::_M_get_Tp_allocator;

    public:






      vector()



      : _Base() { }





      explicit
      vector(const allocator_type& __a)
      : _Base(__a) { }
# 302 "/usr/include/c++/5/bits/stl_vector.h" 3
      explicit
      vector(size_type __n, const value_type& __value = value_type(),
      const allocator_type& __a = allocator_type())
      : _Base(__n, __a)
      { _M_fill_initialize(__n, __value); }
# 318 "/usr/include/c++/5/bits/stl_vector.h" 3
      vector(const vector& __x)
      : _Base(__x.size(),
        _Alloc_traits::_S_select_on_copy(__x._M_get_Tp_allocator()))
      { this->_M_impl._M_finish =
   std::__uninitialized_copy_a(__x.begin(), __x.end(),
          this->_M_impl._M_start,
          _M_get_Tp_allocator());
      }
# 406 "/usr/include/c++/5/bits/stl_vector.h" 3
      template<typename _InputIterator>
        vector(_InputIterator __first, _InputIterator __last,
        const allocator_type& __a = allocator_type())
 : _Base(__a)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_initialize_dispatch(__first, __last, _Integral());
 }
# 423 "/usr/include/c++/5/bits/stl_vector.h" 3
      ~vector()
      { std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
        _M_get_Tp_allocator()); }
# 435 "/usr/include/c++/5/bits/stl_vector.h" 3
      vector&
      operator=(const vector& __x);
# 487 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      assign(size_type __n, const value_type& __val)
      { _M_fill_assign(__n, __val); }
# 510 "/usr/include/c++/5/bits/stl_vector.h" 3
      template<typename _InputIterator>
        void
        assign(_InputIterator __first, _InputIterator __last)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_assign_dispatch(__first, __last, _Integral());
 }
# 538 "/usr/include/c++/5/bits/stl_vector.h" 3
      using _Base::get_allocator;







      iterator
      begin()
      { return iterator(this->_M_impl._M_start); }






      const_iterator
      begin() const
      { return const_iterator(this->_M_impl._M_start); }






      iterator
      end()
      { return iterator(this->_M_impl._M_finish); }






      const_iterator
      end() const
      { return const_iterator(this->_M_impl._M_finish); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(begin()); }
# 653 "/usr/include/c++/5/bits/stl_vector.h" 3
      size_type
      size() const
      { return size_type(this->_M_impl._M_finish - this->_M_impl._M_start); }


      size_type
      max_size() const
      { return _Alloc_traits::max_size(_M_get_Tp_allocator()); }
# 712 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      resize(size_type __new_size, value_type __x = value_type())
      {
 if (__new_size > size())
   insert(end(), __new_size - size(), __x);
 else if (__new_size < size())
   _M_erase_at_end(this->_M_impl._M_start + __new_size);
      }
# 733 "/usr/include/c++/5/bits/stl_vector.h" 3
      size_type
      capacity() const
      { return size_type(this->_M_impl._M_end_of_storage
    - this->_M_impl._M_start); }





      bool
      empty() const
      { return begin() == end(); }
# 763 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      reserve(size_type __n);
# 778 "/usr/include/c++/5/bits/stl_vector.h" 3
      reference
      operator[](size_type __n)
      { return *(this->_M_impl._M_start + __n); }
# 793 "/usr/include/c++/5/bits/stl_vector.h" 3
      const_reference
      operator[](size_type __n) const
      { return *(this->_M_impl._M_start + __n); }

    protected:

      void
      _M_range_check(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range_fmt(("vector::_M_range_check: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
      }

    public:
# 821 "/usr/include/c++/5/bits/stl_vector.h" 3
      reference
      at(size_type __n)
      {
 _M_range_check(__n);
 return (*this)[__n];
      }
# 839 "/usr/include/c++/5/bits/stl_vector.h" 3
      const_reference
      at(size_type __n) const
      {
 _M_range_check(__n);
 return (*this)[__n];
      }





      reference
      front()
      { return *begin(); }





      const_reference
      front() const
      { return *begin(); }





      reference
      back()
      { return *(end() - 1); }





      const_reference
      back() const
      { return *(end() - 1); }
# 888 "/usr/include/c++/5/bits/stl_vector.h" 3
      pointer

      data()
      { return _M_data_ptr(this->_M_impl._M_start); }




      const_pointer

      data() const
      { return _M_data_ptr(this->_M_impl._M_start); }
# 912 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      push_back(const value_type& __x)
      {
 if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
   {
     _Alloc_traits::construct(this->_M_impl, this->_M_impl._M_finish,
                              __x);
     ++this->_M_impl._M_finish;
   }
 else



   _M_insert_aux(end(), __x);

      }
# 948 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      pop_back()
      {
 --this->_M_impl._M_finish;
 _Alloc_traits::destroy(this->_M_impl, this->_M_impl._M_finish);
      }
# 997 "/usr/include/c++/5/bits/stl_vector.h" 3
      iterator
      insert(iterator __position, const value_type& __x);
# 1071 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      insert(iterator __position, size_type __n, const value_type& __x)
      { _M_fill_insert(__position, __n, __x); }
# 1118 "/usr/include/c++/5/bits/stl_vector.h" 3
      template<typename _InputIterator>
        void
        insert(iterator __position, _InputIterator __first,
        _InputIterator __last)
        {

   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   _M_insert_dispatch(__position, __first, __last, _Integral());
 }
# 1144 "/usr/include/c++/5/bits/stl_vector.h" 3
      iterator




      erase(iterator __position)
      { return _M_erase(__position); }
# 1171 "/usr/include/c++/5/bits/stl_vector.h" 3
      iterator
# 1180 "/usr/include/c++/5/bits/stl_vector.h" 3
      erase(iterator __first, iterator __last)
      { return _M_erase(__first, __last); }
# 1193 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      swap(vector& __x)



      {
 this->_M_impl._M_swap_data(__x._M_impl);
 _Alloc_traits::_S_on_swap(_M_get_Tp_allocator(),
                           __x._M_get_Tp_allocator());
      }







      void
      clear()
      { _M_erase_at_end(this->_M_impl._M_start); }

    protected:




      template<typename _ForwardIterator>
        pointer
        _M_allocate_and_copy(size_type __n,
        _ForwardIterator __first, _ForwardIterator __last)
        {
   pointer __result = this->_M_allocate(__n);
   try
     {
       std::__uninitialized_copy_a(__first, __last, __result,
       _M_get_Tp_allocator());
       return __result;
     }
   catch(...)
     {
       _M_deallocate(__result, __n);
       throw;
     }
 }
# 1245 "/usr/include/c++/5/bits/stl_vector.h" 3
      template<typename _Integer>
        void
        _M_initialize_dispatch(_Integer __n, _Integer __value, __true_type)
        {
   this->_M_impl._M_start = _M_allocate(static_cast<size_type>(__n));
   this->_M_impl._M_end_of_storage =
     this->_M_impl._M_start + static_cast<size_type>(__n);
   _M_fill_initialize(static_cast<size_type>(__n), __value);
 }


      template<typename _InputIterator>
        void
        _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
          __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_range_initialize(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_initialize(_InputIterator __first,
       _InputIterator __last, std::input_iterator_tag)
        {
   for (; __first != __last; ++__first)



     push_back(*__first);

 }


      template<typename _ForwardIterator>
        void
        _M_range_initialize(_ForwardIterator __first,
       _ForwardIterator __last, std::forward_iterator_tag)
        {
   const size_type __n = std::distance(__first, __last);
   this->_M_impl._M_start = this->_M_allocate(__n);
   this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
   this->_M_impl._M_finish =
     std::__uninitialized_copy_a(__first, __last,
     this->_M_impl._M_start,
     _M_get_Tp_allocator());
 }



      void
      _M_fill_initialize(size_type __n, const value_type& __value)
      {
 this->_M_impl._M_finish =
   std::__uninitialized_fill_n_a(this->_M_impl._M_start, __n, __value,
     _M_get_Tp_allocator());
      }
# 1323 "/usr/include/c++/5/bits/stl_vector.h" 3
      template<typename _Integer>
        void
        _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
        { _M_fill_assign(__n, __val); }


      template<typename _InputIterator>
        void
        _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
      __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_assign_aux(__first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_assign_aux(_InputIterator __first, _InputIterator __last,
        std::input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
        std::forward_iterator_tag);



      void
      _M_fill_assign(size_type __n, const value_type& __val);
# 1363 "/usr/include/c++/5/bits/stl_vector.h" 3
      template<typename _Integer>
        void
        _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __val,
      __true_type)
        { _M_fill_insert(__pos, __n, __val); }


      template<typename _InputIterator>
        void
        _M_insert_dispatch(iterator __pos, _InputIterator __first,
      _InputIterator __last, __false_type)
        {
   typedef typename std::iterator_traits<_InputIterator>::
     iterator_category _IterCategory;
   _M_range_insert(__pos, __first, __last, _IterCategory());
 }


      template<typename _InputIterator>
        void
        _M_range_insert(iterator __pos, _InputIterator __first,
   _InputIterator __last, std::input_iterator_tag);


      template<typename _ForwardIterator>
        void
        _M_range_insert(iterator __pos, _ForwardIterator __first,
   _ForwardIterator __last, std::forward_iterator_tag);



      void
      _M_fill_insert(iterator __pos, size_type __n, const value_type& __x);
# 1408 "/usr/include/c++/5/bits/stl_vector.h" 3
      void
      _M_insert_aux(iterator __position, const value_type& __x);
# 1421 "/usr/include/c++/5/bits/stl_vector.h" 3
      size_type
      _M_check_len(size_type __n, const char* __s) const
      {
 if (max_size() - size() < __n)
   __throw_length_error((__s));

 const size_type __len = size() + std::max(size(), __n);
 return (__len < size() || __len > max_size()) ? max_size() : __len;
      }





      void
      _M_erase_at_end(pointer __pos)
      {
 std::_Destroy(__pos, this->_M_impl._M_finish, _M_get_Tp_allocator());
 this->_M_impl._M_finish = __pos;
      }

      iterator
      _M_erase(iterator __position);

      iterator
      _M_erase(iterator __first, iterator __last);
# 1491 "/usr/include/c++/5/bits/stl_vector.h" 3
      template<typename _Ptr>
 _Ptr
 _M_data_ptr(_Ptr __ptr) const
 { return __ptr; }

    };
# 1509 "/usr/include/c++/5/bits/stl_vector.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator==(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return (__x.size() == __y.size()
       && std::equal(__x.begin(), __x.end(), __y.begin())); }
# 1526 "/usr/include/c++/5/bits/stl_vector.h" 3
  template<typename _Tp, typename _Alloc>
    inline bool
    operator<(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return std::lexicographical_compare(__x.begin(), __x.end(),
       __y.begin(), __y.end()); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator!=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__x == __y); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return __y < __x; }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator<=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__y < __x); }


  template<typename _Tp, typename _Alloc>
    inline bool
    operator>=(const vector<_Tp, _Alloc>& __x, const vector<_Tp, _Alloc>& __y)
    { return !(__x < __y); }


  template<typename _Tp, typename _Alloc>
    inline void
    swap(vector<_Tp, _Alloc>& __x, vector<_Tp, _Alloc>& __y)
    { __x.swap(__y); }


}
# 65 "/usr/include/c++/5/vector" 2 3
# 1 "/usr/include/c++/5/bits/stl_bvector.h" 1 3
# 63 "/usr/include/c++/5/bits/stl_bvector.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  typedef unsigned long _Bit_type;
  enum { _S_word_bit = int(8 * sizeof(_Bit_type)) };

  struct _Bit_reference
  {
    _Bit_type * _M_p;
    _Bit_type _M_mask;

    _Bit_reference(_Bit_type * __x, _Bit_type __y)
    : _M_p(__x), _M_mask(__y) { }

    _Bit_reference() : _M_p(0), _M_mask(0) { }

    operator bool() const
    { return !!(*_M_p & _M_mask); }

    _Bit_reference&
    operator=(bool __x)
    {
      if (__x)
 *_M_p |= _M_mask;
      else
 *_M_p &= ~_M_mask;
      return *this;
    }

    _Bit_reference&
    operator=(const _Bit_reference& __x)
    { return *this = bool(__x); }

    bool
    operator==(const _Bit_reference& __x) const
    { return bool(*this) == bool(__x); }

    bool
    operator<(const _Bit_reference& __x) const
    { return !bool(*this) && bool(__x); }

    void
    flip()
    { *_M_p ^= _M_mask; }
  };
# 136 "/usr/include/c++/5/bits/stl_bvector.h" 3
  struct _Bit_iterator_base
  : public std::iterator<std::random_access_iterator_tag, bool>
  {
    _Bit_type * _M_p;
    unsigned int _M_offset;

    _Bit_iterator_base(_Bit_type * __x, unsigned int __y)
    : _M_p(__x), _M_offset(__y) { }

    void
    _M_bump_up()
    {
      if (_M_offset++ == int(_S_word_bit) - 1)
 {
   _M_offset = 0;
   ++_M_p;
 }
    }

    void
    _M_bump_down()
    {
      if (_M_offset-- == 0)
 {
   _M_offset = int(_S_word_bit) - 1;
   --_M_p;
 }
    }

    void
    _M_incr(ptrdiff_t __i)
    {
      difference_type __n = __i + _M_offset;
      _M_p += __n / int(_S_word_bit);
      __n = __n % int(_S_word_bit);
      if (__n < 0)
 {
   __n += int(_S_word_bit);
   --_M_p;
 }
      _M_offset = static_cast<unsigned int>(__n);
    }

    bool
    operator==(const _Bit_iterator_base& __i) const
    { return _M_p == __i._M_p && _M_offset == __i._M_offset; }

    bool
    operator<(const _Bit_iterator_base& __i) const
    {
      return _M_p < __i._M_p
      || (_M_p == __i._M_p && _M_offset < __i._M_offset);
    }

    bool
    operator!=(const _Bit_iterator_base& __i) const
    { return !(*this == __i); }

    bool
    operator>(const _Bit_iterator_base& __i) const
    { return __i < *this; }

    bool
    operator<=(const _Bit_iterator_base& __i) const
    { return !(__i < *this); }

    bool
    operator>=(const _Bit_iterator_base& __i) const
    { return !(*this < __i); }
  };

  inline ptrdiff_t
  operator-(const _Bit_iterator_base& __x, const _Bit_iterator_base& __y)
  {
    return (int(_S_word_bit) * (__x._M_p - __y._M_p)
     + __x._M_offset - __y._M_offset);
  }

  struct _Bit_iterator : public _Bit_iterator_base
  {
    typedef _Bit_reference reference;
    typedef _Bit_reference* pointer;
    typedef _Bit_iterator iterator;

    _Bit_iterator() : _Bit_iterator_base(0, 0) { }

    _Bit_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }

    iterator
    _M_const_cast() const
    { return *this; }

    reference
    operator*() const
    { return reference(_M_p, 1UL << _M_offset); }

    iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    iterator
    operator++(int)
    {
      iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    iterator
    operator--(int)
    {
      iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    iterator
    operator+(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp += __i;
    }

    iterator
    operator-(difference_type __i) const
    {
      iterator __tmp = *this;
      return __tmp -= __i;
    }

    reference
    operator[](difference_type __i) const
    { return *(*this + __i); }
  };

  inline _Bit_iterator
  operator+(ptrdiff_t __n, const _Bit_iterator& __x)
  { return __x + __n; }

  struct _Bit_const_iterator : public _Bit_iterator_base
  {
    typedef bool reference;
    typedef bool const_reference;
    typedef const bool* pointer;
    typedef _Bit_const_iterator const_iterator;

    _Bit_const_iterator() : _Bit_iterator_base(0, 0) { }

    _Bit_const_iterator(_Bit_type * __x, unsigned int __y)
    : _Bit_iterator_base(__x, __y) { }

    _Bit_const_iterator(const _Bit_iterator& __x)
    : _Bit_iterator_base(__x._M_p, __x._M_offset) { }

    _Bit_iterator
    _M_const_cast() const
    { return _Bit_iterator(_M_p, _M_offset); }

    const_reference
    operator*() const
    { return _Bit_reference(_M_p, 1UL << _M_offset); }

    const_iterator&
    operator++()
    {
      _M_bump_up();
      return *this;
    }

    const_iterator
    operator++(int)
    {
      const_iterator __tmp = *this;
      _M_bump_up();
      return __tmp;
    }

    const_iterator&
    operator--()
    {
      _M_bump_down();
      return *this;
    }

    const_iterator
    operator--(int)
    {
      const_iterator __tmp = *this;
      _M_bump_down();
      return __tmp;
    }

    const_iterator&
    operator+=(difference_type __i)
    {
      _M_incr(__i);
      return *this;
    }

    const_iterator&
    operator-=(difference_type __i)
    {
      *this += -__i;
      return *this;
    }

    const_iterator
    operator+(difference_type __i) const
    {
      const_iterator __tmp = *this;
      return __tmp += __i;
    }

    const_iterator
    operator-(difference_type __i) const
    {
      const_iterator __tmp = *this;
      return __tmp -= __i;
    }

    const_reference
    operator[](difference_type __i) const
    { return *(*this + __i); }
  };

  inline _Bit_const_iterator
  operator+(ptrdiff_t __n, const _Bit_const_iterator& __x)
  { return __x + __n; }

  inline void
  __fill_bvector(_Bit_iterator __first, _Bit_iterator __last, bool __x)
  {
    for (; __first != __last; ++__first)
      *__first = __x;
  }

  inline void
  fill(_Bit_iterator __first, _Bit_iterator __last, const bool& __x)
  {
    if (__first._M_p != __last._M_p)
      {
 std::fill(__first._M_p + 1, __last._M_p, __x ? ~0 : 0);
 __fill_bvector(__first, _Bit_iterator(__first._M_p + 1, 0), __x);
 __fill_bvector(_Bit_iterator(__last._M_p, 0), __last, __x);
      }
    else
      __fill_bvector(__first, __last, __x);
  }

  template<typename _Alloc>
    struct _Bvector_base
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
        rebind<_Bit_type>::other _Bit_alloc_type;
      typedef typename __gnu_cxx::__alloc_traits<_Bit_alloc_type>
 _Bit_alloc_traits;
      typedef typename _Bit_alloc_traits::pointer _Bit_pointer;

      struct _Bvector_impl
      : public _Bit_alloc_type
      {
 _Bit_iterator _M_start;
 _Bit_iterator _M_finish;
 _Bit_pointer _M_end_of_storage;

 _Bvector_impl()
 : _Bit_alloc_type(), _M_start(), _M_finish(), _M_end_of_storage()
 { }

 _Bvector_impl(const _Bit_alloc_type& __a)
 : _Bit_alloc_type(__a), _M_start(), _M_finish(), _M_end_of_storage()
 { }
# 441 "/usr/include/c++/5/bits/stl_bvector.h" 3
 _Bit_type*
 _M_end_addr() const
 {
   if (_M_end_of_storage)
     return std::__addressof(_M_end_of_storage[-1]) + 1;
   return 0;
 }
      };

    public:
      typedef _Alloc allocator_type;

      _Bit_alloc_type&
      _M_get_Bit_allocator()
      { return *static_cast<_Bit_alloc_type*>(&this->_M_impl); }

      const _Bit_alloc_type&
      _M_get_Bit_allocator() const
      { return *static_cast<const _Bit_alloc_type*>(&this->_M_impl); }

      allocator_type
      get_allocator() const
      { return allocator_type(_M_get_Bit_allocator()); }

      _Bvector_base()
      : _M_impl() { }

      _Bvector_base(const allocator_type& __a)
      : _M_impl(__a) { }
# 484 "/usr/include/c++/5/bits/stl_bvector.h" 3
      ~_Bvector_base()
      { this->_M_deallocate(); }

    protected:
      _Bvector_impl _M_impl;

      _Bit_pointer
      _M_allocate(size_t __n)
      { return _Bit_alloc_traits::allocate(_M_impl, _S_nword(__n)); }

      void
      _M_deallocate()
      {
 if (_M_impl._M_start._M_p)
   {
     const size_t __n = _M_impl._M_end_addr() - _M_impl._M_start._M_p;
     _Bit_alloc_traits::deallocate(_M_impl,
       _M_impl._M_end_of_storage - __n,
       __n);
   }
      }

      static size_t
      _S_nword(size_t __n)
      { return (__n + int(_S_word_bit) - 1) / int(_S_word_bit); }
    };


}




namespace std __attribute__ ((__visibility__ ("default")))
{

# 540 "/usr/include/c++/5/bits/stl_bvector.h" 3
template<typename _Alloc>
  class vector<bool, _Alloc> : protected _Bvector_base<_Alloc>
  {
    typedef _Bvector_base<_Alloc> _Base;
    typedef typename _Base::_Bit_pointer _Bit_pointer;
    typedef typename _Base::_Bit_alloc_traits _Bit_alloc_traits;





  public:
    typedef bool value_type;
    typedef size_t size_type;
    typedef ptrdiff_t difference_type;
    typedef _Bit_reference reference;
    typedef bool const_reference;
    typedef _Bit_reference* pointer;
    typedef const bool* const_pointer;
    typedef _Bit_iterator iterator;
    typedef _Bit_const_iterator const_iterator;
    typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
    typedef std::reverse_iterator<iterator> reverse_iterator;
    typedef _Alloc allocator_type;

    allocator_type get_allocator() const
    { return _Base::get_allocator(); }

  protected:
    using _Base::_M_allocate;
    using _Base::_M_deallocate;
    using _Base::_S_nword;
    using _Base::_M_get_Bit_allocator;

  public:
    vector()



    : _Base() { }

    explicit
    vector(const allocator_type& __a)
    : _Base(__a) { }
# 600 "/usr/include/c++/5/bits/stl_bvector.h" 3
    explicit
    vector(size_type __n, const bool& __value = bool(),
    const allocator_type& __a = allocator_type())
    : _Base(__a)
    {
      _M_initialize(__n);
      std::fill(this->_M_impl._M_start._M_p, this->_M_impl._M_end_addr(),
  __value ? ~0 : 0);
    }


    vector(const vector& __x)
    : _Base(_Bit_alloc_traits::_S_select_on_copy(__x._M_get_Bit_allocator()))
    {
      _M_initialize(__x.size());
      _M_copy_aligned(__x.begin(), __x.end(), this->_M_impl._M_start);
    }
# 667 "/usr/include/c++/5/bits/stl_bvector.h" 3
    template<typename _InputIterator>
      vector(_InputIterator __first, _InputIterator __last,
      const allocator_type& __a = allocator_type())
      : _Base(__a)
      {
 typedef typename std::__is_integer<_InputIterator>::__type _Integral;
 _M_initialize_dispatch(__first, __last, _Integral());
      }


    ~vector() { }

    vector&
    operator=(const vector& __x)
    {
      if (&__x == this)
 return *this;
# 699 "/usr/include/c++/5/bits/stl_bvector.h" 3
      if (__x.size() > capacity())
 {
   this->_M_deallocate();
   _M_initialize(__x.size());
 }
      this->_M_impl._M_finish = _M_copy_aligned(__x.begin(), __x.end(),
      begin());
      return *this;
    }
# 752 "/usr/include/c++/5/bits/stl_bvector.h" 3
    void
    assign(size_type __n, const bool& __x)
    { _M_fill_assign(__n, __x); }
# 763 "/usr/include/c++/5/bits/stl_bvector.h" 3
    template<typename _InputIterator>
      void
      assign(_InputIterator __first, _InputIterator __last)
      {
 typedef typename std::__is_integer<_InputIterator>::__type _Integral;
 _M_assign_dispatch(__first, __last, _Integral());
      }
# 778 "/usr/include/c++/5/bits/stl_bvector.h" 3
    iterator
    begin()
    { return this->_M_impl._M_start; }

    const_iterator
    begin() const
    { return this->_M_impl._M_start; }

    iterator
    end()
    { return this->_M_impl._M_finish; }

    const_iterator
    end() const
    { return this->_M_impl._M_finish; }

    reverse_iterator
    rbegin()
    { return reverse_iterator(end()); }

    const_reverse_iterator
    rbegin() const
    { return const_reverse_iterator(end()); }

    reverse_iterator
    rend()
    { return reverse_iterator(begin()); }

    const_reverse_iterator
    rend() const
    { return const_reverse_iterator(begin()); }
# 828 "/usr/include/c++/5/bits/stl_bvector.h" 3
    size_type
    size() const
    { return size_type(end() - begin()); }

    size_type
    max_size() const
    {
      const size_type __isize =
 __gnu_cxx::__numeric_traits<difference_type>::__max
 - int(_S_word_bit) + 1;
      const size_type __asize
 = _Bit_alloc_traits::max_size(_M_get_Bit_allocator());
      return (__asize <= __isize / int(_S_word_bit)
       ? __asize * int(_S_word_bit) : __isize);
    }

    size_type
    capacity() const
    { return size_type(const_iterator(this->_M_impl._M_end_addr(), 0)
         - begin()); }

    bool
    empty() const
    { return begin() == end(); }

    reference
    operator[](size_type __n)
    {
      return *iterator(this->_M_impl._M_start._M_p
         + __n / int(_S_word_bit), __n % int(_S_word_bit));
    }

    const_reference
    operator[](size_type __n) const
    {
      return *const_iterator(this->_M_impl._M_start._M_p
        + __n / int(_S_word_bit), __n % int(_S_word_bit));
    }

  protected:
    void
    _M_range_check(size_type __n) const
    {
      if (__n >= this->size())
 __throw_out_of_range_fmt(("vector<bool>::_M_range_check: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                          ,
     __n, this->size());
    }

  public:
    reference
    at(size_type __n)
    { _M_range_check(__n); return (*this)[__n]; }

    const_reference
    at(size_type __n) const
    { _M_range_check(__n); return (*this)[__n]; }

    void
    reserve(size_type __n)
    {
      if (__n > max_size())
 __throw_length_error(("vector::reserve"));
      if (capacity() < __n)
 _M_reallocate(__n);
    }

    reference
    front()
    { return *begin(); }

    const_reference
    front() const
    { return *begin(); }

    reference
    back()
    { return *(end() - 1); }

    const_reference
    back() const
    { return *(end() - 1); }






    void
    data() { }

    void
    push_back(bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_addr())
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(end(), __x);
    }

    void
    swap(vector& __x)



    {
      std::swap(this->_M_impl._M_start, __x._M_impl._M_start);
      std::swap(this->_M_impl._M_finish, __x._M_impl._M_finish);
      std::swap(this->_M_impl._M_end_of_storage,
  __x._M_impl._M_end_of_storage);
      _Bit_alloc_traits::_S_on_swap(_M_get_Bit_allocator(),
        __x._M_get_Bit_allocator());
    }


    static void
    swap(reference __x, reference __y)
    {
      bool __tmp = __x;
      __x = __y;
      __y = __tmp;
    }

    iterator



    insert(iterator __position, const bool& __x = bool())

    {
      const difference_type __n = __position - begin();
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_addr()
   && __position == end())
        *this->_M_impl._M_finish++ = __x;
      else
        _M_insert_aux(__position._M_const_cast(), __x);
      return begin() + __n;
    }
# 981 "/usr/include/c++/5/bits/stl_bvector.h" 3
    template<typename _InputIterator>
      void
      insert(iterator __position,
      _InputIterator __first, _InputIterator __last)
      {
 typedef typename std::__is_integer<_InputIterator>::__type _Integral;
 _M_insert_dispatch(__position, __first, __last, _Integral());
      }
# 1000 "/usr/include/c++/5/bits/stl_bvector.h" 3
    void
    insert(iterator __position, size_type __n, const bool& __x)
    { _M_fill_insert(__position, __n, __x); }
# 1011 "/usr/include/c++/5/bits/stl_bvector.h" 3
    void
    pop_back()
    { --this->_M_impl._M_finish; }

    iterator



    erase(iterator __position)

    { return _M_erase(__position._M_const_cast()); }

    iterator



    erase(iterator __first, iterator __last)

    { return _M_erase(__first._M_const_cast(), __last._M_const_cast()); }

    void
    resize(size_type __new_size, bool __x = bool())
    {
      if (__new_size < size())
        _M_erase_at_end(begin() + difference_type(__new_size));
      else
        insert(end(), __new_size - size(), __x);
    }







    void
    flip()
    {
      _Bit_type * const __end = this->_M_impl._M_end_addr();
      for (_Bit_type * __p = this->_M_impl._M_start._M_p; __p != __end; ++__p)
        *__p = ~*__p;
    }

    void
    clear()
    { _M_erase_at_end(begin()); }
# 1070 "/usr/include/c++/5/bits/stl_bvector.h" 3
  protected:

    iterator
    _M_copy_aligned(const_iterator __first, const_iterator __last,
      iterator __result)
    {
      _Bit_type* __q = std::copy(__first._M_p, __last._M_p, __result._M_p);
      return std::copy(const_iterator(__last._M_p, 0), __last,
         iterator(__q, 0));
    }

    void
    _M_initialize(size_type __n)
    {
      _Bit_pointer __q = this->_M_allocate(__n);
      this->_M_impl._M_end_of_storage = __q + _S_nword(__n);
      this->_M_impl._M_start = iterator(std::__addressof(*__q), 0);
      this->_M_impl._M_finish = this->_M_impl._M_start + difference_type(__n);
    }

    void
    _M_reallocate(size_type __n);
# 1102 "/usr/include/c++/5/bits/stl_bvector.h" 3
    template<typename _Integer>
      void
      _M_initialize_dispatch(_Integer __n, _Integer __x, __true_type)
      {
 _M_initialize(static_cast<size_type>(__n));
 std::fill(this->_M_impl._M_start._M_p,
    this->_M_impl._M_end_addr(), __x ? ~0 : 0);
      }

    template<typename _InputIterator>
      void
      _M_initialize_dispatch(_InputIterator __first, _InputIterator __last,
        __false_type)
      { _M_initialize_range(__first, __last,
       std::__iterator_category(__first)); }

    template<typename _InputIterator>
      void
      _M_initialize_range(_InputIterator __first, _InputIterator __last,
     std::input_iterator_tag)
      {
 for (; __first != __last; ++__first)
   push_back(*__first);
      }

    template<typename _ForwardIterator>
      void
      _M_initialize_range(_ForwardIterator __first, _ForwardIterator __last,
     std::forward_iterator_tag)
      {
 const size_type __n = std::distance(__first, __last);
 _M_initialize(__n);
 std::copy(__first, __last, this->_M_impl._M_start);
      }



    template<typename _Integer>
      void
      _M_assign_dispatch(_Integer __n, _Integer __val, __true_type)
      { _M_fill_assign(__n, __val); }

    template<class _InputIterator>
      void
      _M_assign_dispatch(_InputIterator __first, _InputIterator __last,
    __false_type)
      { _M_assign_aux(__first, __last, std::__iterator_category(__first)); }

    void
    _M_fill_assign(size_t __n, bool __x)
    {
      if (__n > size())
 {
   std::fill(this->_M_impl._M_start._M_p,
      this->_M_impl._M_end_addr(), __x ? ~0 : 0);
   insert(end(), __n - size(), __x);
 }
      else
 {
   _M_erase_at_end(begin() + __n);
   std::fill(this->_M_impl._M_start._M_p,
      this->_M_impl._M_end_addr(), __x ? ~0 : 0);
 }
    }

    template<typename _InputIterator>
      void
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
      std::input_iterator_tag)
      {
 iterator __cur = begin();
 for (; __first != __last && __cur != end(); ++__cur, ++__first)
   *__cur = *__first;
 if (__first == __last)
   _M_erase_at_end(__cur);
 else
   insert(end(), __first, __last);
      }

    template<typename _ForwardIterator>
      void
      _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
      std::forward_iterator_tag)
      {
 const size_type __len = std::distance(__first, __last);
 if (__len < size())
   _M_erase_at_end(std::copy(__first, __last, begin()));
 else
   {
     _ForwardIterator __mid = __first;
     std::advance(__mid, size());
     std::copy(__first, __mid, begin());
     insert(end(), __mid, __last);
   }
      }





    template<typename _Integer>
      void
      _M_insert_dispatch(iterator __pos, _Integer __n, _Integer __x,
    __true_type)
      { _M_fill_insert(__pos, __n, __x); }

    template<typename _InputIterator>
      void
      _M_insert_dispatch(iterator __pos,
    _InputIterator __first, _InputIterator __last,
    __false_type)
      { _M_insert_range(__pos, __first, __last,
   std::__iterator_category(__first)); }

    void
    _M_fill_insert(iterator __position, size_type __n, bool __x);

    template<typename _InputIterator>
      void
      _M_insert_range(iterator __pos, _InputIterator __first,
        _InputIterator __last, std::input_iterator_tag)
      {
 for (; __first != __last; ++__first)
   {
     __pos = insert(__pos, *__first);
     ++__pos;
   }
      }

    template<typename _ForwardIterator>
      void
      _M_insert_range(iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std::forward_iterator_tag);

    void
    _M_insert_aux(iterator __position, bool __x);

    size_type
    _M_check_len(size_type __n, const char* __s) const
    {
      if (max_size() - size() < __n)
 __throw_length_error((__s));

      const size_type __len = size() + std::max(size(), __n);
      return (__len < size() || __len > max_size()) ? max_size() : __len;
    }

    void
    _M_erase_at_end(iterator __pos)
    { this->_M_impl._M_finish = __pos; }

    iterator
    _M_erase(iterator __pos);

    iterator
    _M_erase(iterator __first, iterator __last);
  };


}
# 66 "/usr/include/c++/5/vector" 2 3
# 1 "/usr/include/c++/5/bits/range_access.h" 1 3
# 33 "/usr/include/c++/5/bits/range_access.h" 3
       
# 34 "/usr/include/c++/5/bits/range_access.h" 3
# 67 "/usr/include/c++/5/vector" 2 3


# 1 "/usr/include/c++/5/bits/vector.tcc" 1 3
# 59 "/usr/include/c++/5/bits/vector.tcc" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    reserve(size_type __n)
    {
      if (__n > this->max_size())
 __throw_length_error(("vector::reserve"));
      if (this->capacity() < __n)
 {
   const size_type __old_size = size();
   pointer __tmp = _M_allocate_and_copy(__n,
     (this->_M_impl._M_start),
     (this->_M_impl._M_finish));
   std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
   _M_get_Tp_allocator());
   _M_deallocate(this->_M_impl._M_start,
   this->_M_impl._M_end_of_storage
   - this->_M_impl._M_start);
   this->_M_impl._M_start = __tmp;
   this->_M_impl._M_finish = __tmp + __old_size;
   this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __n;
 }
    }
# 105 "/usr/include/c++/5/bits/vector.tcc" 3
  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::



    insert(iterator __position, const value_type& __x)

    {
      const size_type __n = __position - begin();
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage
   && __position == end())
 {
   _Alloc_traits::construct(this->_M_impl, this->_M_impl._M_finish, __x);
   ++this->_M_impl._M_finish;
 }
      else
 {
# 133 "/usr/include/c++/5/bits/vector.tcc" 3
     _M_insert_aux(__position, __x);

 }
      return iterator(this->_M_impl._M_start + __n);
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    _M_erase(iterator __position)
    {
      if (__position + 1 != end())
 std::copy(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      _Alloc_traits::destroy(this->_M_impl, this->_M_impl._M_finish);
      return __position;
    }

  template<typename _Tp, typename _Alloc>
    typename vector<_Tp, _Alloc>::iterator
    vector<_Tp, _Alloc>::
    _M_erase(iterator __first, iterator __last)
    {
      if (__first != __last)
 {
   if (__last != end())
     std::copy(__last, end(), __first);
   _M_erase_at_end(__first.base() + (end() - __last));
 }
      return __first;
    }

  template<typename _Tp, typename _Alloc>
    vector<_Tp, _Alloc>&
    vector<_Tp, _Alloc>::
    operator=(const vector<_Tp, _Alloc>& __x)
    {
      if (&__x != this)
 {
# 191 "/usr/include/c++/5/bits/vector.tcc" 3
   const size_type __xlen = __x.size();
   if (__xlen > capacity())
     {
       pointer __tmp = _M_allocate_and_copy(__xlen, __x.begin(),
         __x.end());
       std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
       _M_get_Tp_allocator());
       _M_deallocate(this->_M_impl._M_start,
       this->_M_impl._M_end_of_storage
       - this->_M_impl._M_start);
       this->_M_impl._M_start = __tmp;
       this->_M_impl._M_end_of_storage = this->_M_impl._M_start + __xlen;
     }
   else if (size() >= __xlen)
     {
       std::_Destroy(std::copy(__x.begin(), __x.end(), begin()),
       end(), _M_get_Tp_allocator());
     }
   else
     {
       std::copy(__x._M_impl._M_start, __x._M_impl._M_start + size(),
   this->_M_impl._M_start);
       std::__uninitialized_copy_a(__x._M_impl._M_start + size(),
       __x._M_impl._M_finish,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
     }
   this->_M_impl._M_finish = this->_M_impl._M_start + __xlen;
 }
      return *this;
    }

  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_fill_assign(size_t __n, const value_type& __val)
    {
      if (__n > capacity())
 {
   vector __tmp(__n, __val, _M_get_Tp_allocator());
   __tmp._M_impl._M_swap_data(this->_M_impl);
 }
      else if (__n > size())
 {
   std::fill(begin(), end(), __val);
   this->_M_impl._M_finish =
     std::__uninitialized_fill_n_a(this->_M_impl._M_finish,
       __n - size(), __val,
       _M_get_Tp_allocator());
 }
      else
        _M_erase_at_end(std::fill_n(this->_M_impl._M_start, __n, __val));
    }

  template<typename _Tp, typename _Alloc>
    template<typename _InputIterator>
      void
      vector<_Tp, _Alloc>::
      _M_assign_aux(_InputIterator __first, _InputIterator __last,
      std::input_iterator_tag)
      {
 pointer __cur(this->_M_impl._M_start);
 for (; __first != __last && __cur != this->_M_impl._M_finish;
      ++__cur, ++__first)
   *__cur = *__first;
 if (__first == __last)
   _M_erase_at_end(__cur);
 else
   insert(end(), __first, __last);
      }

  template<typename _Tp, typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<_Tp, _Alloc>::
      _M_assign_aux(_ForwardIterator __first, _ForwardIterator __last,
      std::forward_iterator_tag)
      {
 const size_type __len = std::distance(__first, __last);

 if (__len > capacity())
   {
     pointer __tmp(_M_allocate_and_copy(__len, __first, __last));
     std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
     _M_get_Tp_allocator());
     _M_deallocate(this->_M_impl._M_start,
     this->_M_impl._M_end_of_storage
     - this->_M_impl._M_start);
     this->_M_impl._M_start = __tmp;
     this->_M_impl._M_finish = this->_M_impl._M_start + __len;
     this->_M_impl._M_end_of_storage = this->_M_impl._M_finish;
   }
 else if (size() >= __len)
   _M_erase_at_end(std::copy(__first, __last, this->_M_impl._M_start));
 else
   {
     _ForwardIterator __mid = __first;
     std::advance(__mid, size());
     std::copy(__first, __mid, this->_M_impl._M_start);
     this->_M_impl._M_finish =
       std::__uninitialized_copy_a(__mid, __last,
       this->_M_impl._M_finish,
       _M_get_Tp_allocator());
   }
      }
# 324 "/usr/include/c++/5/bits/vector.tcc" 3
  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_insert_aux(iterator __position, const _Tp& __x)

    {
      if (this->_M_impl._M_finish != this->_M_impl._M_end_of_storage)
 {
   _Alloc_traits::construct(this->_M_impl, this->_M_impl._M_finish,
              (*(this->_M_impl._M_finish - 1))
                            );
   ++this->_M_impl._M_finish;

   _Tp __x_copy = __x;

   std::copy_backward(__position.base(), this->_M_impl._M_finish - 2, this->_M_impl._M_finish - 1)

                                  ;

   *__position = __x_copy;



 }
      else
 {
   const size_type __len =
     _M_check_len(size_type(1), "vector::_M_insert_aux");
   const size_type __elems_before = __position - begin();
   pointer __new_start(this->_M_allocate(__len));
   pointer __new_finish(__new_start);
   try
     {




       _Alloc_traits::construct(this->_M_impl,
                         __new_start + __elems_before,



                                __x);

       __new_finish = pointer();

       __new_finish
  = std::__uninitialized_move_if_noexcept_a
  (this->_M_impl._M_start, __position.base(),
   __new_start, _M_get_Tp_allocator());

       ++__new_finish;

       __new_finish
  = std::__uninitialized_move_if_noexcept_a
  (__position.base(), this->_M_impl._M_finish,
   __new_finish, _M_get_Tp_allocator());
     }
          catch(...)
     {
       if (!__new_finish)
  _Alloc_traits::destroy(this->_M_impl,
                         __new_start + __elems_before);
       else
  std::_Destroy(__new_start, __new_finish, _M_get_Tp_allocator());
       _M_deallocate(__new_start, __len);
       throw;
     }
   std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
   _M_get_Tp_allocator());
   _M_deallocate(this->_M_impl._M_start,
   this->_M_impl._M_end_of_storage
   - this->_M_impl._M_start);
   this->_M_impl._M_start = __new_start;
   this->_M_impl._M_finish = __new_finish;
   this->_M_impl._M_end_of_storage = __new_start + __len;
 }
    }
# 447 "/usr/include/c++/5/bits/vector.tcc" 3
  template<typename _Tp, typename _Alloc>
    void
    vector<_Tp, _Alloc>::
    _M_fill_insert(iterator __position, size_type __n, const value_type& __x)
    {
      if (__n != 0)
 {
   if (size_type(this->_M_impl._M_end_of_storage
   - this->_M_impl._M_finish) >= __n)
     {
       value_type __x_copy = __x;
       const size_type __elems_after = end() - __position;
       pointer __old_finish(this->_M_impl._M_finish);
       if (__elems_after > __n)
  {
    std::__uninitialized_move_a(this->_M_impl._M_finish - __n,
           this->_M_impl._M_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish += __n;
    std::copy_backward(__position.base(), __old_finish - __n, __old_finish)
                                        ;
    std::fill(__position.base(), __position.base() + __n,
       __x_copy);
  }
       else
  {
    this->_M_impl._M_finish =
      std::__uninitialized_fill_n_a(this->_M_impl._M_finish,
        __n - __elems_after,
        __x_copy,
        _M_get_Tp_allocator());
    std::__uninitialized_move_a(__position.base(), __old_finish,
           this->_M_impl._M_finish,
           _M_get_Tp_allocator());
    this->_M_impl._M_finish += __elems_after;
    std::fill(__position.base(), __old_finish, __x_copy);
  }
     }
   else
     {
       const size_type __len =
  _M_check_len(__n, "vector::_M_fill_insert");
       const size_type __elems_before = __position - begin();
       pointer __new_start(this->_M_allocate(__len));
       pointer __new_finish(__new_start);
       try
  {

    std::__uninitialized_fill_n_a(__new_start + __elems_before,
      __n, __x,
      _M_get_Tp_allocator());
    __new_finish = pointer();

    __new_finish
      = std::__uninitialized_move_if_noexcept_a
      (this->_M_impl._M_start, __position.base(),
       __new_start, _M_get_Tp_allocator());

    __new_finish += __n;

    __new_finish
      = std::__uninitialized_move_if_noexcept_a
      (__position.base(), this->_M_impl._M_finish,
       __new_finish, _M_get_Tp_allocator());
  }
       catch(...)
  {
    if (!__new_finish)
      std::_Destroy(__new_start + __elems_before,
      __new_start + __elems_before + __n,
      _M_get_Tp_allocator());
    else
      std::_Destroy(__new_start, __new_finish,
      _M_get_Tp_allocator());
    _M_deallocate(__new_start, __len);
    throw;
  }
       std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
       _M_get_Tp_allocator());
       _M_deallocate(this->_M_impl._M_start,
       this->_M_impl._M_end_of_storage
       - this->_M_impl._M_start);
       this->_M_impl._M_start = __new_start;
       this->_M_impl._M_finish = __new_finish;
       this->_M_impl._M_end_of_storage = __new_start + __len;
     }
 }
    }
# 599 "/usr/include/c++/5/bits/vector.tcc" 3
  template<typename _Tp, typename _Alloc>
    template<typename _InputIterator>
      void
      vector<_Tp, _Alloc>::
      _M_range_insert(iterator __pos, _InputIterator __first,
        _InputIterator __last, std::input_iterator_tag)
      {
 for (; __first != __last; ++__first)
   {
     __pos = insert(__pos, *__first);
     ++__pos;
   }
      }

  template<typename _Tp, typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<_Tp, _Alloc>::
      _M_range_insert(iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std::forward_iterator_tag)
      {
 if (__first != __last)
   {
     const size_type __n = std::distance(__first, __last);
     if (size_type(this->_M_impl._M_end_of_storage
     - this->_M_impl._M_finish) >= __n)
       {
  const size_type __elems_after = end() - __position;
  pointer __old_finish(this->_M_impl._M_finish);
  if (__elems_after > __n)
    {
      std::__uninitialized_move_a(this->_M_impl._M_finish - __n,
      this->_M_impl._M_finish,
      this->_M_impl._M_finish,
      _M_get_Tp_allocator());
      this->_M_impl._M_finish += __n;
      std::copy_backward(__position.base(), __old_finish - __n, __old_finish)
                                          ;
      std::copy(__first, __last, __position);
    }
  else
    {
      _ForwardIterator __mid = __first;
      std::advance(__mid, __elems_after);
      std::__uninitialized_copy_a(__mid, __last,
      this->_M_impl._M_finish,
      _M_get_Tp_allocator());
      this->_M_impl._M_finish += __n - __elems_after;
      std::__uninitialized_move_a(__position.base(),
      __old_finish,
      this->_M_impl._M_finish,
      _M_get_Tp_allocator());
      this->_M_impl._M_finish += __elems_after;
      std::copy(__first, __mid, __position);
    }
       }
     else
       {
  const size_type __len =
    _M_check_len(__n, "vector::_M_range_insert");
  pointer __new_start(this->_M_allocate(__len));
  pointer __new_finish(__new_start);
  try
    {
      __new_finish
        = std::__uninitialized_move_if_noexcept_a
        (this->_M_impl._M_start, __position.base(),
         __new_start, _M_get_Tp_allocator());
      __new_finish
        = std::__uninitialized_copy_a(__first, __last,
          __new_finish,
          _M_get_Tp_allocator());
      __new_finish
        = std::__uninitialized_move_if_noexcept_a
        (__position.base(), this->_M_impl._M_finish,
         __new_finish, _M_get_Tp_allocator());
    }
  catch(...)
    {
      std::_Destroy(__new_start, __new_finish,
      _M_get_Tp_allocator());
      _M_deallocate(__new_start, __len);
      throw;
    }
  std::_Destroy(this->_M_impl._M_start, this->_M_impl._M_finish,
         _M_get_Tp_allocator());
  _M_deallocate(this->_M_impl._M_start,
         this->_M_impl._M_end_of_storage
         - this->_M_impl._M_start);
  this->_M_impl._M_start = __new_start;
  this->_M_impl._M_finish = __new_finish;
  this->_M_impl._M_end_of_storage = __new_start + __len;
       }
   }
      }



  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    _M_reallocate(size_type __n)
    {
      _Bit_pointer __q = this->_M_allocate(__n);
      iterator __start(std::__addressof(*__q), 0);
      this->_M_impl._M_finish = _M_copy_aligned(begin(), end(), __start);
      this->_M_deallocate();
      this->_M_impl._M_start = __start;
      this->_M_impl._M_end_of_storage = __q + _S_nword(__n);
    }

  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    _M_fill_insert(iterator __position, size_type __n, bool __x)
    {
      if (__n == 0)
 return;
      if (capacity() - size() >= __n)
 {
   std::copy_backward(__position, end(),
        this->_M_impl._M_finish + difference_type(__n));
   std::fill(__position, __position + difference_type(__n), __x);
   this->_M_impl._M_finish += difference_type(__n);
 }
      else
 {
   const size_type __len =
     _M_check_len(__n, "vector<bool>::_M_fill_insert");
   _Bit_pointer __q = this->_M_allocate(__len);
   iterator __start(std::__addressof(*__q), 0);
   iterator __i = _M_copy_aligned(begin(), __position, __start);
   std::fill(__i, __i + difference_type(__n), __x);
   this->_M_impl._M_finish = std::copy(__position, end(),
           __i + difference_type(__n));
   this->_M_deallocate();
   this->_M_impl._M_end_of_storage = __q + _S_nword(__len);
   this->_M_impl._M_start = __start;
 }
    }

  template<typename _Alloc>
    template<typename _ForwardIterator>
      void
      vector<bool, _Alloc>::
      _M_insert_range(iterator __position, _ForwardIterator __first,
        _ForwardIterator __last, std::forward_iterator_tag)
      {
 if (__first != __last)
   {
     size_type __n = std::distance(__first, __last);
     if (capacity() - size() >= __n)
       {
  std::copy_backward(__position, end(),
       this->_M_impl._M_finish
       + difference_type(__n));
  std::copy(__first, __last, __position);
  this->_M_impl._M_finish += difference_type(__n);
       }
     else
       {
  const size_type __len =
    _M_check_len(__n, "vector<bool>::_M_insert_range");
  _Bit_pointer __q = this->_M_allocate(__len);
  iterator __start(std::__addressof(*__q), 0);
  iterator __i = _M_copy_aligned(begin(), __position, __start);
  __i = std::copy(__first, __last, __i);
  this->_M_impl._M_finish = std::copy(__position, end(), __i);
  this->_M_deallocate();
  this->_M_impl._M_end_of_storage = __q + _S_nword(__len);
  this->_M_impl._M_start = __start;
       }
   }
      }

  template<typename _Alloc>
    void
    vector<bool, _Alloc>::
    _M_insert_aux(iterator __position, bool __x)
    {
      if (this->_M_impl._M_finish._M_p != this->_M_impl._M_end_addr())
 {
   std::copy_backward(__position, this->_M_impl._M_finish,
        this->_M_impl._M_finish + 1);
   *__position = __x;
   ++this->_M_impl._M_finish;
 }
      else
 {
   const size_type __len =
     _M_check_len(size_type(1), "vector<bool>::_M_insert_aux");
   _Bit_pointer __q = this->_M_allocate(__len);
   iterator __start(std::__addressof(*__q), 0);
   iterator __i = _M_copy_aligned(begin(), __position, __start);
   *__i++ = __x;
   this->_M_impl._M_finish = std::copy(__position, end(), __i);
   this->_M_deallocate();
   this->_M_impl._M_end_of_storage = __q + _S_nword(__len);
   this->_M_impl._M_start = __start;
 }
    }

  template<typename _Alloc>
    typename vector<bool, _Alloc>::iterator
    vector<bool, _Alloc>::
    _M_erase(iterator __position)
    {
      if (__position + 1 != end())
        std::copy(__position + 1, end(), __position);
      --this->_M_impl._M_finish;
      return __position;
    }

  template<typename _Alloc>
    typename vector<bool, _Alloc>::iterator
    vector<bool, _Alloc>::
    _M_erase(iterator __first, iterator __last)
    {
      if (__first != __last)
 _M_erase_at_end(std::copy(__last, end(), __first));
      return __first;
    }
# 840 "/usr/include/c++/5/bits/vector.tcc" 3

}
# 70 "/usr/include/c++/5/vector" 2 3
# 16 "/home/junho/Downloads/root/include/TGenericClassInfo.h" 2

# 1 "/home/junho/Downloads/root/include/TSchemaHelper.h" 1
# 25 "/home/junho/Downloads/root/include/TSchemaHelper.h"
# 1 "/usr/include/c++/5/string" 1 3
# 36 "/usr/include/c++/5/string" 3
       
# 37 "/usr/include/c++/5/string" 3


# 1 "/usr/include/c++/5/bits/stringfwd.h" 1 3
# 37 "/usr/include/c++/5/bits/stringfwd.h" 3
       
# 38 "/usr/include/c++/5/bits/stringfwd.h" 3




namespace std __attribute__ ((__visibility__ ("default")))
{








  template<class _CharT>
    struct char_traits;

  template<> struct char_traits<char>;


  template<> struct char_traits<wchar_t>;
# 67 "/usr/include/c++/5/bits/stringfwd.h" 3
namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;


  typedef basic_string<char> string;



  typedef basic_string<wchar_t> wstring;
# 90 "/usr/include/c++/5/bits/stringfwd.h" 3
}




}
# 40 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/char_traits.h" 1 3
# 37 "/usr/include/c++/5/bits/char_traits.h" 3
       
# 38 "/usr/include/c++/5/bits/char_traits.h" 3


# 1 "/usr/include/c++/5/bits/postypes.h" 1 3
# 38 "/usr/include/c++/5/bits/postypes.h" 3
       
# 39 "/usr/include/c++/5/bits/postypes.h" 3

# 1 "/usr/include/c++/5/cwchar" 1 3
# 39 "/usr/include/c++/5/cwchar" 3
       
# 40 "/usr/include/c++/5/cwchar" 3




# 1 "/usr/include/wchar.h" 1 3 4
# 39 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 40 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/wchar.h" 1 3 4
# 42 "/usr/include/wchar.h" 2 3 4
# 51 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 357 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 52 "/usr/include/wchar.h" 2 3 4
# 104 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;






# 132 "/usr/include/wchar.h" 3 4
extern "C" {




struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) throw ();


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) throw ();





extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) throw ();

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) throw ();





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) throw ();



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) throw ();








extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) throw ();




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) throw ();


extern wchar_t *wcsdup (const wchar_t *__s) throw () __attribute__ ((__malloc__));





extern "C++" wchar_t *wcschr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsrchr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));









extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
     throw () __attribute__ ((__pure__));





extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     throw () __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     throw () __attribute__ ((__pure__));


extern "C++" wchar_t *wcspbrk (wchar_t *__wcs, const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcspbrk (const wchar_t *__wcs,
         const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsstr (wchar_t *__haystack, const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcsstr (const wchar_t *__haystack,
        const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));






extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) throw ();


extern size_t wcslen (const wchar_t *__s) throw () __attribute__ ((__pure__));





extern "C++" wchar_t *wcswcs (wchar_t *__haystack, const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcswcs (const wchar_t *__haystack,
        const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
# 309 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     throw () __attribute__ ((__pure__));






extern "C++" wchar_t *wmemchr (wchar_t *__s, wchar_t __c, size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wmemchr (const wchar_t *__s, wchar_t __c,
         size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));






extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) throw ();



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw ();


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();





extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     const wchar_t *__restrict __s2, size_t __n)
     throw ();






extern wint_t btowc (int __c) throw ();



extern int wctob (wint_t __c) throw ();



extern int mbsinit (const mbstate_t *__ps) throw () __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) throw ();


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) throw ();


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) throw ();
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) throw ();

# 408 "/usr/include/wchar.h" 3 4



extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) throw ();



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) throw ();






extern int wcwidth (wchar_t __c) throw ();



extern int wcswidth (const wchar_t *__s, size_t __n) throw ();






extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) throw ();





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) throw ();



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) throw ();






__extension__
extern long long int wcstoq (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) throw ();
# 533 "/usr/include/wchar.h" 3 4
extern long int wcstol_l (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     __locale_t __loc) throw ();

extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, __locale_t __loc) throw ();

__extension__
extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, __locale_t __loc) throw ();

__extension__
extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, __locale_t __loc)
     throw ();

extern double wcstod_l (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern float wcstof_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern long double wcstold_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         __locale_t __loc) throw ();






extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) throw ();



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw ();






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) throw ();






extern int fwide (__FILE *__fp, int __mode) throw ();






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     throw () ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     throw () ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     throw () ;
# 683 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;
# 739 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 804 "/usr/include/wchar.h" 3 4
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
# 830 "/usr/include/wchar.h" 3 4
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
# 840 "/usr/include/wchar.h" 3 4
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);







extern int fputws_unlocked (const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);







extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) throw ();







extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     const wchar_t *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();
# 894 "/usr/include/wchar.h" 3 4
}
# 45 "/usr/include/c++/5/cwchar" 2 3
# 62 "/usr/include/c++/5/cwchar" 3
namespace std
{
  using ::mbstate_t;
}
# 135 "/usr/include/c++/5/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;

  using ::swprintf;

  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;


  using ::vswprintf;


  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;
# 232 "/usr/include/c++/5/cwchar" 3

}







namespace __gnu_cxx
{





  using ::wcstold;
# 257 "/usr/include/c++/5/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;

}

namespace std
{
  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;
}
# 41 "/usr/include/c++/5/bits/postypes.h" 2 3
# 68 "/usr/include/c++/5/bits/postypes.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 88 "/usr/include/c++/5/bits/postypes.h" 3
  typedef long streamoff;
# 98 "/usr/include/c++/5/bits/postypes.h" 3
  typedef ptrdiff_t streamsize;
# 111 "/usr/include/c++/5/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 133 "/usr/include/c++/5/bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;
# 239 "/usr/include/c++/5/bits/postypes.h" 3

}
# 41 "/usr/include/c++/5/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/5/cwchar" 1 3
# 39 "/usr/include/c++/5/cwchar" 3
       
# 40 "/usr/include/c++/5/cwchar" 3




# 1 "/usr/include/wchar.h" 1 3 4
# 45 "/usr/include/c++/5/cwchar" 2 3
# 42 "/usr/include/c++/5/bits/char_traits.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 57 "/usr/include/c++/5/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 82 "/usr/include/c++/5/bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }


}

namespace std __attribute__ ((__visibility__ ("default")))
{

# 226 "/usr/include/c++/5/bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      {

 return (static_cast<unsigned char>(__c1)
  < static_cast<unsigned char>(__c2));
      }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return __builtin_memcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n));
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return static_cast<char_type*>(__builtin_memset(__s, __a, __n));
      }

      static char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }



      static int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>(-1); }

      static int_type
      not_eof(const int_type& __c)
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return wmemcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return wmemchr(__s, __a, __n);
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemmove(__s1, __s2, __n);
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemcpy(__s1, __s2, __n);
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return wmemset(__s, __a, __n);
      }

      static char_type
      to_char_type(const int_type& __c)
      { return char_type(__c); }

      static int_type
      to_int_type(const char_type& __c)
      { return int_type(__c); }

      static bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static int_type
      eof()
      { return static_cast<int_type>((0xffffffffu)); }

      static int_type
      not_eof(const int_type& __c)
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };



}
# 41 "/usr/include/c++/5/string" 2 3


# 1 "/usr/include/c++/5/bits/localefwd.h" 1 3
# 37 "/usr/include/c++/5/bits/localefwd.h" 3
       
# 38 "/usr/include/c++/5/bits/localefwd.h" 3


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 1 3
# 39 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3
       
# 40 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3

# 1 "/usr/include/c++/5/clocale" 1 3
# 39 "/usr/include/c++/5/clocale" 3
       
# 40 "/usr/include/c++/5/clocale" 3


# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4

extern "C" {
# 50 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) throw ();


extern struct lconv *localeconv (void) throw ();


# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) throw ();
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) throw ();



extern void freelocale (__locale_t __dataset) throw ();






extern __locale_t uselocale (__locale_t __dataset) throw ();







}
# 43 "/usr/include/c++/5/clocale" 2 3
# 51 "/usr/include/c++/5/clocale" 3
namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}
# 42 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  extern "C" __typeof(uselocale) __uselocale;


}


namespace std __attribute__ ((__visibility__ ("default")))
{


  typedef __locale_t __c_locale;





  inline int
  __convert_from_v(const __c_locale& __cloc __attribute__ ((__unused__)),
     char* __out,
     const int __size __attribute__ ((__unused__)),
     const char* __fmt, ...)
  {

    __c_locale __old = __gnu_cxx::__uselocale(__cloc);
# 88 "/usr/include/x86_64-linux-gnu/c++/5/bits/c++locale.h" 3
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);


    __gnu_cxx::__uselocale(__old);







    return __ret;
  }


}
# 41 "/usr/include/c++/5/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/5/iosfwd" 1 3
# 36 "/usr/include/c++/5/iosfwd" 3
       
# 37 "/usr/include/c++/5/iosfwd" 3





namespace std __attribute__ ((__visibility__ ("default")))
{

# 74 "/usr/include/c++/5/iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

}

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  typedef basic_ios<char> ios;


  typedef basic_streambuf<char> streambuf;


  typedef basic_istream<char> istream;


  typedef basic_ostream<char> ostream;


  typedef basic_iostream<char> iostream;


  typedef basic_stringbuf<char> stringbuf;


  typedef basic_istringstream<char> istringstream;


  typedef basic_ostringstream<char> ostringstream;


  typedef basic_stringstream<char> stringstream;


  typedef basic_filebuf<char> filebuf;


  typedef basic_ifstream<char> ifstream;


  typedef basic_ofstream<char> ofstream;


  typedef basic_fstream<char> fstream;



  typedef basic_ios<wchar_t> wios;


  typedef basic_streambuf<wchar_t> wstreambuf;


  typedef basic_istream<wchar_t> wistream;


  typedef basic_ostream<wchar_t> wostream;


  typedef basic_iostream<wchar_t> wiostream;


  typedef basic_stringbuf<wchar_t> wstringbuf;


  typedef basic_istringstream<wchar_t> wistringstream;


  typedef basic_ostringstream<wchar_t> wostringstream;


  typedef basic_stringstream<wchar_t> wstringstream;


  typedef basic_filebuf<wchar_t> wfilebuf;


  typedef basic_ifstream<wchar_t> wifstream;


  typedef basic_ofstream<wchar_t> wofstream;


  typedef basic_fstream<wchar_t> wfstream;




}
# 42 "/usr/include/c++/5/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/5/cctype" 1 3
# 39 "/usr/include/c++/5/cctype" 3
       
# 40 "/usr/include/c++/5/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 28 "/usr/include/ctype.h" 3 4
extern "C" {
# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4






# 1 "/usr/include/x86_64-linux-gnu/bits/byteswap-16.h" 1 3 4
# 36 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 2 3 4
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 347 "/usr/include/ctype.h" 3 4
}
# 43 "/usr/include/c++/5/cctype" 2 3
# 62 "/usr/include/c++/5/cctype" 3
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}
# 43 "/usr/include/c++/5/bits/localefwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 55 "/usr/include/c++/5/bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);







  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

namespace __cxx11 {
  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;
}

namespace __cxx11 {

  template<typename _CharT>
    class collate;
  template<typename _CharT>
    class collate_byname;
}


  class time_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
}
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;
}
namespace __cxx11 {
  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;
}


  class messages_base;
namespace __cxx11 {
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;
}


}
# 44 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/ostream_insert.h" 1 3
# 33 "/usr/include/c++/5/bits/ostream_insert.h" 3
       
# 34 "/usr/include/c++/5/bits/ostream_insert.h" 3


# 1 "/usr/include/c++/5/bits/cxxabi_forced.h" 1 3
# 34 "/usr/include/c++/5/bits/cxxabi_forced.h" 3
       
# 35 "/usr/include/c++/5/bits/cxxabi_forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 37 "/usr/include/c++/5/bits/ostream_insert.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }




  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);




}
# 45 "/usr/include/c++/5/string" 2 3



# 1 "/usr/include/c++/5/bits/stl_function.h" 1 3
# 63 "/usr/include/c++/5/bits/stl_function.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 104 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {

      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {

      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;


      typedef _Result result_type;
    };
# 166 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };
# 351 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };
# 524 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
     
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };
# 617 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
     
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };

  template<typename _Tp>
    struct bit_not : public unary_function<_Tp, _Tp>
    {
   
      _Tp
      operator()(const _Tp& __x) const
      { return ~__x; }
    };
# 741 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
     
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

     
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
   
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
     
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

     
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
   
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 818 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity
    : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st
    : public unary_function<_Pair, typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }
# 905 "/usr/include/c++/5/bits/stl_function.h" 3
    };

  template<typename _Pair>
    struct _Select2nd
    : public unary_function<_Pair, typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 938 "/usr/include/c++/5/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }




}


# 1 "/usr/include/c++/5/backward/binders.h" 1 3
# 60 "/usr/include/c++/5/backward/binders.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

namespace std __attribute__ ((__visibility__ ("default")))
{

# 107 "/usr/include/c++/5/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } ;


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }



}

#pragma GCC diagnostic pop
# 1129 "/usr/include/c++/5/bits/stl_function.h" 2 3
# 49 "/usr/include/c++/5/string" 2 3



# 1 "/usr/include/c++/5/bits/basic_string.h" 1 3
# 37 "/usr/include/c++/5/bits/basic_string.h" 3
       
# 38 "/usr/include/c++/5/bits/basic_string.h" 3

# 1 "/usr/include/c++/5/ext/atomicity.h" 1 3
# 32 "/usr/include/c++/5/ext/atomicity.h" 3
       
# 33 "/usr/include/c++/5/ext/atomicity.h" 3


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 1 3
# 30 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3
#pragma GCC visibility push(default)
# 148 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 1 3
# 35 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4





# 1 "/usr/include/time.h" 1 3 4
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 35 "/usr/include/sched.h" 2 3 4


typedef __pid_t pid_t;





# 1 "/usr/include/x86_64-linux-gnu/bits/sched.h" 1 3 4
# 72 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };

extern "C" {



extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) throw ();


extern int unshare (int __flags) throw ();


extern int sched_getcpu (void) throw ();


extern int setns (int __fd, int __nstype) throw ();



}







struct __sched_param
  {
    int __sched_priority;
  };
# 118 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 201 "/usr/include/x86_64-linux-gnu/bits/sched.h" 3 4
extern "C" {

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  throw ();
extern cpu_set_t *__sched_cpualloc (size_t __count) throw () ;
extern void __sched_cpufree (cpu_set_t *__set) throw ();

}
# 44 "/usr/include/sched.h" 2 3 4




extern "C" {


extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     throw ();


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) throw ();


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) throw ();


extern int sched_getscheduler (__pid_t __pid) throw ();


extern int sched_yield (void) throw ();


extern int sched_get_priority_max (int __algorithm) throw ();


extern int sched_get_priority_min (int __algorithm) throw ();


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) throw ();
# 118 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) throw ();


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) throw ();


}
# 24 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 88 "/usr/include/x86_64-linux-gnu/bits/time.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/timex.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 89 "/usr/include/x86_64-linux-gnu/bits/time.h" 2 3 4

extern "C" {


extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) throw ();

}
# 42 "/usr/include/time.h" 2 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) throw ();





extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (const time_t *__timer) throw ();



extern struct tm *localtime (const time_t *__timer) throw ();





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (const struct tm *__tp) throw ();


extern char *ctime (const time_t *__timer) throw ();







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) throw ();
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();





extern int timespec_get (struct timespec *__ts, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 403 "/usr/include/time.h" 3 4
extern int getdate_err;
# 412 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 426 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 25 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 1 3 4
# 21 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 2 3 4
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    short __spins;
    short __elision;
    __pthread_list_t __list;
# 125 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    signed char __rwelision;




    unsigned char __pad1[7];


    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 220 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3 4
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 27 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/bits/setjmp.h" 2 3 4




typedef long int __jmp_buf[8];
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 114 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 155 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 190 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 228 "/usr/include/pthread.h" 3 4
extern "C" {




extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) throw () __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) throw ();







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) throw ();



extern pthread_t pthread_self (void) throw () __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  throw () __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     throw ();




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     throw () __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) throw ();


extern int pthread_setconcurrency (int __level) throw ();







extern int pthread_yield (void) throw ();




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));
# 494 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 506 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 540 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};




class __pthread_cleanup_class
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;

 public:
  __pthread_cleanup_class (void (*__fct) (void *), void *__arg)
    : __cancel_routine (__fct), __cancel_arg (__arg), __do_it (1) { }
  ~__pthread_cleanup_class () { if (__do_it) __cancel_routine (__cancel_arg); }
  void __setdoit (int __newval) { __do_it = __newval; }
  void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
        &__cancel_type); }
  void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
};
# 742 "/usr/include/pthread.h" 3 4
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) throw ();





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     throw () __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));
# 806 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));
# 888 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) throw () __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1000 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     throw () __attribute__ ((__nonnull__ (1)));
# 1044 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));
# 1111 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) throw ();


extern void *pthread_getspecific (pthread_key_t __key) throw ();


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) throw () ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     throw () __attribute__ ((__nonnull__ (2)));
# 1145 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) throw ();
# 1159 "/usr/include/pthread.h" 3 4
}
# 36 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 2 3
# 47 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
typedef pthread_t __gthread_t;
typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
typedef pthread_mutex_t __gthread_recursive_mutex_t;
typedef pthread_cond_t __gthread_cond_t;
typedef struct timespec __gthread_time_t;
# 101 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static __typeof(pthread_once) __gthrw_pthread_once __attribute__ ((__weakref__("pthread_once")));
static __typeof(pthread_getspecific) __gthrw_pthread_getspecific __attribute__ ((__weakref__("pthread_getspecific")));
static __typeof(pthread_setspecific) __gthrw_pthread_setspecific __attribute__ ((__weakref__("pthread_setspecific")));

static __typeof(pthread_create) __gthrw_pthread_create __attribute__ ((__weakref__("pthread_create")));
static __typeof(pthread_join) __gthrw_pthread_join __attribute__ ((__weakref__("pthread_join")));
static __typeof(pthread_equal) __gthrw_pthread_equal __attribute__ ((__weakref__("pthread_equal")));
static __typeof(pthread_self) __gthrw_pthread_self __attribute__ ((__weakref__("pthread_self")));
static __typeof(pthread_detach) __gthrw_pthread_detach __attribute__ ((__weakref__("pthread_detach")));

static __typeof(pthread_cancel) __gthrw_pthread_cancel __attribute__ ((__weakref__("pthread_cancel")));

static __typeof(sched_yield) __gthrw_sched_yield __attribute__ ((__weakref__("sched_yield")));

static __typeof(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute__ ((__weakref__("pthread_mutex_lock")));
static __typeof(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute__ ((__weakref__("pthread_mutex_trylock")));

static __typeof(pthread_mutex_timedlock) __gthrw_pthread_mutex_timedlock __attribute__ ((__weakref__("pthread_mutex_timedlock")));

static __typeof(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute__ ((__weakref__("pthread_mutex_unlock")));
static __typeof(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute__ ((__weakref__("pthread_mutex_init")));
static __typeof(pthread_mutex_destroy) __gthrw_pthread_mutex_destroy __attribute__ ((__weakref__("pthread_mutex_destroy")));

static __typeof(pthread_cond_init) __gthrw_pthread_cond_init __attribute__ ((__weakref__("pthread_cond_init")));
static __typeof(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute__ ((__weakref__("pthread_cond_broadcast")));
static __typeof(pthread_cond_signal) __gthrw_pthread_cond_signal __attribute__ ((__weakref__("pthread_cond_signal")));
static __typeof(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute__ ((__weakref__("pthread_cond_wait")));
static __typeof(pthread_cond_timedwait) __gthrw_pthread_cond_timedwait __attribute__ ((__weakref__("pthread_cond_timedwait")));
static __typeof(pthread_cond_destroy) __gthrw_pthread_cond_destroy __attribute__ ((__weakref__("pthread_cond_destroy")));

static __typeof(pthread_key_create) __gthrw_pthread_key_create __attribute__ ((__weakref__("pthread_key_create")));
static __typeof(pthread_key_delete) __gthrw_pthread_key_delete __attribute__ ((__weakref__("pthread_key_delete")));
static __typeof(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute__ ((__weakref__("pthread_mutexattr_init")));
static __typeof(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute__ ((__weakref__("pthread_mutexattr_settype")));
static __typeof(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute__ ((__weakref__("pthread_mutexattr_destroy")));
# 236 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static __typeof(pthread_key_create) __gthrw___pthread_key_create __attribute__ ((__weakref__("__pthread_key_create")));
# 246 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr
    = __extension__ (void *) &__gthrw___pthread_key_create;
  return __gthread_active_ptr != 0;
}
# 658 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_create (__gthread_t *__threadid, void *(*__func) (void*),
    void *__args)
{
  return __gthrw_pthread_create (__threadid, __null, __func, __args);
}

static inline int
__gthread_join (__gthread_t __threadid, void **__value_ptr)
{
  return __gthrw_pthread_join (__threadid, __value_ptr);
}

static inline int
__gthread_detach (__gthread_t __threadid)
{
  return __gthrw_pthread_detach (__threadid);
}

static inline int
__gthread_equal (__gthread_t __t1, __gthread_t __t2)
{
  return __gthrw_pthread_equal (__t1, __t2);
}

static inline __gthread_t
__gthread_self (void)
{
  return __gthrw_pthread_self ();
}

static inline int
__gthread_yield (void)
{
  return __gthrw_sched_yield ();
}

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthrw_pthread_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthrw_pthread_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthrw_pthread_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthrw_pthread_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthrw_pthread_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    __gthrw_pthread_mutex_init (__mutex, __null);
}

static inline int
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_destroy (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_trylock (__mutex);
  else
    return 0;
}


static inline int
__gthread_mutex_timedlock (__gthread_mutex_t *__mutex,
      const __gthread_time_t *__abs_timeout)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_timedlock (__mutex, __abs_timeout);
  else
    return 0;
}


static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_unlock (__mutex);
  else
    return 0;
}
# 807 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_lock (__mutex);
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_trylock (__mutex);
}


static inline int
__gthread_recursive_mutex_timedlock (__gthread_recursive_mutex_t *__mutex,
         const __gthread_time_t *__abs_timeout)
{
  return __gthread_mutex_timedlock (__mutex, __abs_timeout);
}


static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_unlock (__mutex);
}

static inline int
__gthread_recursive_mutex_destroy (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_destroy (__mutex);
}
# 849 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr-default.h" 3
static inline int
__gthread_cond_broadcast (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_broadcast (__cond);
}

static inline int
__gthread_cond_signal (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_signal (__cond);
}

static inline int
__gthread_cond_wait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex)
{
  return __gthrw_pthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex,
     const __gthread_time_t *__abs_timeout)
{
  return __gthrw_pthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_wait_recursive (__gthread_cond_t *__cond,
          __gthread_recursive_mutex_t *__mutex)
{
  return __gthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_destroy (__gthread_cond_t* __cond)
{
  return __gthrw_pthread_cond_destroy (__cond);
}
# 149 "/usr/include/x86_64-linux-gnu/c++/5/bits/gthr.h" 2 3


#pragma GCC visibility pop
# 36 "/usr/include/c++/5/ext/atomicity.h" 2 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h" 1 3
# 32 "/usr/include/x86_64-linux-gnu/c++/5/bits/atomic_word.h" 3
typedef int _Atomic_word;
# 37 "/usr/include/c++/5/ext/atomicity.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{







  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __atomic_fetch_add(__mem, __val, 4); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __atomic_fetch_add(__mem, __val, 4); }
# 64 "/usr/include/c++/5/ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }


}
# 40 "/usr/include/c++/5/bits/basic_string.h" 2 3






namespace std __attribute__ ((__visibility__ ("default")))
{



namespace __cxx11 {
# 70 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<_CharT>::other _Char_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Char_alloc_type> _Alloc_traits;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Char_alloc_type allocator_type;
      typedef typename _Alloc_traits::size_type size_type;
      typedef typename _Alloc_traits::difference_type difference_type;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
       const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;


      static const size_type npos = static_cast<size_type>(-1);

    private:


      typedef iterator __const_iterator;





      struct _Alloc_hider : allocator_type
      {
 _Alloc_hider(pointer __dat, const _Alloc& __a = _Alloc())
 : allocator_type(__a), _M_p(__dat) { }

 pointer _M_p;
      };

      _Alloc_hider _M_dataplus;
      size_type _M_string_length;

      enum { _S_local_capacity = 15 / sizeof(_CharT) };

      union
      {
 _CharT _M_local_buf[_S_local_capacity + 1];
 size_type _M_allocated_capacity;
      };

      void
      _M_data(pointer __p)
      { _M_dataplus._M_p = __p; }

      void
      _M_length(size_type __length)
      { _M_string_length = __length; }

      pointer
      _M_data() const
      { return _M_dataplus._M_p; }

      pointer
      _M_local_data()
      {



 return pointer(_M_local_buf);

      }

      const_pointer
      _M_local_data() const
      {



 return const_pointer(_M_local_buf);

      }

      void
      _M_capacity(size_type __capacity)
      { _M_allocated_capacity = __capacity; }

      void
      _M_set_length(size_type __n)
      {
 _M_length(__n);
 traits_type::assign(_M_data()[__n], _CharT());
      }

      bool
      _M_is_local() const
      { return _M_data() == _M_local_data(); }


      pointer
      _M_create(size_type&, size_type);

      void
      _M_dispose()
      {
 if (!_M_is_local())
   _M_destroy(_M_allocated_capacity);
      }

      void
      _M_destroy(size_type __size) throw()
      { _Alloc_traits::deallocate(_M_get_allocator(), _M_data(), __size + 1); }



      template<typename _InIterator>
        void
        _M_construct_aux(_InIterator __beg, _InIterator __end,
    std::__false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          _M_construct(__beg, __end, _Tag());
 }



      template<typename _Integer>
        void
        _M_construct_aux(_Integer __beg, _Integer __end, std::__true_type)
 { _M_construct_aux_2(static_cast<size_type>(__beg), __end); }

      void
      _M_construct_aux_2(size_type __req, _CharT __c)
      { _M_construct(__req, __c); }

      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   _M_construct_aux(__beg, __end, _Integral());
        }


      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end,
       std::input_iterator_tag);



      template<typename _FwdIterator>
        void
        _M_construct(_FwdIterator __beg, _FwdIterator __end,
       std::forward_iterator_tag);

      void
      _M_construct(size_type __req, _CharT __c);

      allocator_type&
      _M_get_allocator()
      { return _M_dataplus; }

      const allocator_type&
      _M_get_allocator() const
      { return _M_dataplus; }

    private:
# 257 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range_fmt(("%s: __pos (which is %zu) > " "this->size() (which is %zu)")
                                         ,
       __s, __pos, this->size());
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }



      size_type
      _M_limit(size_type __pos, size_type __off) const
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _S_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _S_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _S_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, ++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2)
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
     
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2)
      { _S_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
     
      { _S_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2)
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_assign(const basic_string& __rcs);

      void
      _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
  size_type __len2);

      void
      _M_erase(size_type __pos, size_type __n);

    public:







      basic_string()



      : _M_dataplus(_M_local_data())
      { _M_set_length(0); }




      explicit
      basic_string(const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      { _M_set_length(0); }





      basic_string(const basic_string& __str)
      : _M_dataplus(_M_local_data(), __str._M_get_allocator())
      { _M_construct(__str._M_data(), __str._M_data() + __str.length()); }
# 410 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos)
      : _M_dataplus(_M_local_data())
      {
 const _CharT* __start = __str._M_data()
   + __str._M_check(__pos, "basic_string::basic_string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 426 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      {
 const _CharT* __start
   = __str._M_data() + __str._M_check(__pos, "string::string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 444 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s + __n); }






      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s ? __s + traits_type::length(__s) : __s+npos); }







      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__n, __c); }
# 532 "/usr/include/c++/5/bits/basic_string.h" 3
      template<typename _InputIterator>

        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc())
 : _M_dataplus(_M_local_data(), __a)
 { _M_construct(__beg, __end); }




      ~basic_string()
      { _M_dispose(); }





      basic_string&
      operator=(const basic_string& __str)
      { return this->assign(__str); }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 568 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 610 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      begin()
      { return iterator(_M_data()); }





      const_iterator
      begin() const
      { return const_iterator(_M_data()); }





      iterator
      end()
      { return iterator(_M_data() + this->size()); }





      const_iterator
      end() const
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin()
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend()
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const
      { return const_reverse_iterator(this->begin()); }
# 710 "/usr/include/c++/5/bits/basic_string.h" 3
    public:



      size_type
      size() const
      { return _M_string_length; }



      size_type
      length() const
      { return _M_string_length; }


      size_type
      max_size() const
      { return (_Alloc_traits::max_size(_M_get_allocator()) - 1) / 2; }
# 739 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 752 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }
# 777 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      capacity() const
      {
 return _M_is_local() ? size_type(_S_local_capacity)
                      : _M_allocated_capacity;
      }
# 801 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear()
      { _M_set_length(0); }





      bool
      empty() const
      { return this->size() == 0; }
# 830 "/usr/include/c++/5/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const
      {
 ;
 return _M_data()[__pos];
      }
# 847 "/usr/include/c++/5/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {


 ;

 ;
 return _M_data()[__pos];
      }
# 868 "/usr/include/c++/5/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }
# 889 "/usr/include/c++/5/bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }
# 940 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }
# 981 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str)
      { return _M_append(__str._M_data(), __str.size()); }
# 998 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_append(__str._M_data()
    + __str._M_check(__pos, "basic_string::append"),
    __str._M_limit(__pos, __n)); }







      basic_string&
      append(const _CharT* __s, size_type __n)
      {
 ;
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }






      basic_string&
      append(const _CharT* __s)
      {
 ;
 const size_type __n = traits_type::length(__s);
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }
# 1040 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c)
      { return _M_replace_aux(this->size(), size_type(0), __n, __c); }
# 1067 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>

        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(end(), end(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __size = this->size();
 if (__size + 1 > this->capacity())
   this->_M_mutate(__size, size_type(0), 0, size_type(1));
 traits_type::assign(this->_M_data()[__size], __c);
 this->_M_set_length(__size + 1);
      }






      basic_string&
      assign(const basic_string& __str)
      {
 this->_M_assign(__str);
 return *this;
      }
# 1130 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_replace(size_type(0), this->size(), __str._M_data()
     + __str._M_check(__pos, "basic_string::assign"),
     __str._M_limit(__pos, __n)); }
# 1146 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s, __n);
      }
# 1162 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s,
     traits_type::length(__s));
      }
# 1179 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1195 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>

        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(begin(), end(), __first, __last); }
# 1250 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      insert(iterator __p, size_type __n, _CharT __c)
      { this->replace(__p, __p, __n, __c); }
# 1293 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>
        void
        insert(iterator __p, _InputIterator __beg, _InputIterator __end)
        { this->replace(__p, __p, __beg, __end); }
# 1326 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->replace(__pos1, size_type(0),
        __str._M_data(), __str.size()); }
# 1349 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->replace(__pos1, size_type(0), __str._M_data()
        + __str._M_check(__pos2, "basic_string::insert"),
        __str._M_limit(__pos2, __n)); }
# 1372 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n)
      { return this->replace(__pos, size_type(0), __s, __n); }
# 1391 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->replace(__pos, size_type(0), __s,
        traits_type::length(__s));
      }
# 1415 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1433 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      insert(__const_iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - begin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 return iterator(_M_data() + __pos);
      }
# 1457 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 this->_M_erase(_M_check(__pos, "basic_string::erase"),
         _M_limit(__pos, __n));
 return *this;
      }
# 1473 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      erase(__const_iterator __position)
      {

                           ;
 const size_type __pos = __position - begin();
 this->_M_erase(__pos, size_type(1));
 return iterator(_M_data() + __pos);
      }
# 1492 "/usr/include/c++/5/bits/basic_string.h" 3
      iterator
      erase(__const_iterator __first, __const_iterator __last)
      {

                        ;
        const size_type __pos = __first - begin();
 this->_M_erase(__pos, __last - __first);
 return iterator(this->_M_data() + __pos);
      }
# 1530 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1552 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1577 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2)
      {
 ;
 return _M_replace(_M_check(__pos, "basic_string::replace"),
     _M_limit(__pos, __n1), __s, __n2);
      }
# 1602 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1626 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1644 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1664 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __s, size_type __n)
      {

                      ;
 return this->replace(__i1 - begin(), __i2 - __i1, __s, __n);
      }
# 1686 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1707 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, size_type __n,
       _CharT __c)
      {

                      ;
 return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __c);
      }
# 1745 "/usr/include/c++/5/bits/basic_string.h" 3
      template<class _InputIterator>



        basic_string&

        replace(iterator __i1, iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
  
                        ;
   ;
   typedef typename std::__is_integer<_InputIterator>::__type _Integral;
   return _M_replace_dispatch(__i1, __i2, __k1, __k2, _Integral());
 }




      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       _CharT* __k1, _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       iterator __k1, iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1828 "/usr/include/c++/5/bits/basic_string.h" 3
    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _Integer __n, _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _InputIterator __k1, _InputIterator __k2,
       __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
   const size_type __len2);

      basic_string&
      _M_append(const _CharT* __s, size_type __n);

    public:
# 1866 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1876 "/usr/include/c++/5/bits/basic_string.h" 3
      void
      swap(basic_string& __s) ;
# 1886 "/usr/include/c++/5/bits/basic_string.h" 3
      const _CharT*
      c_str() const
      { return _M_data(); }







      const _CharT*
      data() const
      { return _M_data(); }




      allocator_type
      get_allocator() const
      { return _M_get_allocator(); }
# 1919 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 1932 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const

      { return this->find(__str.data(), __pos, __str.size()); }
# 1947 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 1964 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const ;
# 1977 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const

      { return this->rfind(__str.data(), __pos, __str.size()); }
# 1994 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 2007 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 2024 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const ;
# 2038 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const

      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 2055 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2068 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 2087 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const
      { return this->find(__c, __pos); }
# 2102 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const

      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 2119 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2132 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 2151 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const
      { return this->rfind(__c, __pos); }
# 2165 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const

      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2182 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2196 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2213 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const
 ;
# 2228 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const

      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2245 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2259 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2276 "/usr/include/c++/5/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const
 ;
# 2292 "/usr/include/c++/5/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2311 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2343 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2369 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2387 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2411 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2438 "/usr/include/c++/5/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
}
# 4781 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }
# 4902 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs)
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 4948 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 4985 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 5022 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 5059 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 5096 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 5133 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { __lhs.swap(__rhs); }
# 5152 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 5170 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 5193 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 5210 "/usr/include/c++/5/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str, __is.widen('\n')); }
# 5232 "/usr/include/c++/5/bits/basic_string.h" 3
  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);



}
# 53 "/usr/include/c++/5/string" 2 3
# 1 "/usr/include/c++/5/bits/basic_string.tcc" 1 3
# 42 "/usr/include/c++/5/bits/basic_string.tcc" 3
       
# 43 "/usr/include/c++/5/bits/basic_string.tcc" 3



namespace std __attribute__ ((__visibility__ ("default")))
{




  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s)
    {
      if (this == &__s)
 return;




      std::__alloc_swap<allocator_type>::_S_do_it(_M_get_allocator(),
        __s._M_get_allocator());

      if (_M_is_local())
 if (__s._M_is_local())
   {
     if (length() && __s.length())
       {
  _CharT __tmp_data[_S_local_capacity + 1];
  traits_type::copy(__tmp_data, __s._M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(_M_local_buf, __tmp_data,
      _S_local_capacity + 1);
       }
     else if (__s.length())
       {
  traits_type::copy(_M_local_buf, __s._M_local_buf,
      _S_local_capacity + 1);
  _M_length(__s.length());
  __s._M_set_length(0);
  return;
       }
     else if (length())
       {
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  __s._M_length(length());
  _M_set_length(0);
  return;
       }
   }
 else
   {
     const size_type __tmp_capacity = __s._M_allocated_capacity;
     traits_type::copy(__s._M_local_buf, _M_local_buf,
         _S_local_capacity + 1);
     _M_data(__s._M_data());
     __s._M_data(__s._M_local_buf);
     _M_capacity(__tmp_capacity);
   }
      else
 {
   const size_type __tmp_capacity = _M_allocated_capacity;
   if (__s._M_is_local())
     {
       traits_type::copy(_M_local_buf, __s._M_local_buf,
    _S_local_capacity + 1);
       __s._M_data(_M_data());
       _M_data(_M_local_buf);
     }
   else
     {
       pointer __tmp_ptr = _M_data();
       _M_data(__s._M_data());
       __s._M_data(__tmp_ptr);
       _M_capacity(__s._M_allocated_capacity);
     }
   __s._M_capacity(__tmp_capacity);
 }

      const size_type __tmp_length = length();
      _M_length(__s.length());
      __s._M_length(__tmp_length);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::pointer
    basic_string<_CharT, _Traits, _Alloc>::
    _M_create(size_type& __capacity, size_type __old_capacity)
    {


      if (__capacity > max_size())
 std::__throw_length_error(("basic_string::_M_create"));




      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 {
   __capacity = 2 * __old_capacity;

   if (__capacity > max_size())
     __capacity = max_size();
 }



      return _Alloc_traits::allocate(_M_get_allocator(), __capacity + 1);
    }





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::input_iterator_tag)
      {
 size_type __len = 0;
 size_type __capacity = size_type(_S_local_capacity);

 while (__beg != __end && __len < __capacity)
   {
     _M_data()[__len++] = *__beg;
     ++__beg;
   }

 try
   {
     while (__beg != __end)
       {
  if (__len == __capacity)
    {

      __capacity = __len + 1;
      pointer __another = _M_create(__capacity, __len);
      this->_S_copy(__another, _M_data(), __len);
      _M_dispose();
      _M_data(__another);
      _M_capacity(__capacity);
    }
  _M_data()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__len);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::forward_iterator_tag)
      {

 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   std::__throw_logic_error(("basic_string::" "_M_construct null not valid")
                                         );

 size_type __dnew = static_cast<size_type>(std::distance(__beg, __end));

 if (__dnew > size_type(_S_local_capacity))
   {
     _M_data(_M_create(__dnew, size_type(0)));
     _M_capacity(__dnew);
   }


 try
   { this->_S_copy_chars(_M_data(), __beg, __end); }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__dnew);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_construct(size_type __n, _CharT __c)
    {
      if (__n > size_type(_S_local_capacity))
 {
   _M_data(_M_create(__n, size_type(0)));
   _M_capacity(__n);
 }

      if (__n)
 this->_S_assign(_M_data(), __n, __c);

      _M_set_length(__n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_assign(const basic_string& __str)
    {
      if (this != &__str)
 {
   const size_type __rsize = __str.length();
   const size_type __capacity = capacity();

   if (__rsize > __capacity)
     {
       size_type __new_capacity = __rsize;
       pointer __tmp = _M_create(__new_capacity, __capacity);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__new_capacity);
     }

   if (__rsize)
     this->_S_copy(_M_data(), __str._M_data(), __rsize);

   _M_set_length(__rsize);
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {

      if (__res < length())
 __res = length();

      const size_type __capacity = capacity();
      if (__res != __capacity)
 {
   if (__res > __capacity
       || __res > size_type(_S_local_capacity))
     {
       pointer __tmp = _M_create(__res, __capacity);
       this->_S_copy(__tmp, _M_data(), length() + 1);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__res);
     }
   else if (!_M_is_local())
     {
       this->_S_copy(_M_local_data(), _M_data(), length() + 1);
       _M_destroy(__capacity);
       _M_data(_M_local_data());
     }
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
       size_type __len2)
    {
      const size_type __how_much = length() - __pos - __len1;

      size_type __new_capacity = length() + __len2 - __len1;
      pointer __r = _M_create(__new_capacity, capacity());

      if (__pos)
 this->_S_copy(__r, _M_data(), __pos);
      if (__s && __len2)
 this->_S_copy(__r + __pos, __s, __len2);
      if (__how_much)
 this->_S_copy(__r + __pos + __len2,
        _M_data() + __pos + __len1, __how_much);

      _M_dispose();
      _M_data(__r);
      _M_capacity(__new_capacity);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_erase(size_type __pos, size_type __n)
    {
      const size_type __how_much = length() - __pos - __n;

      if (__how_much && __n)
 this->_S_move(_M_data() + __pos, _M_data() + __pos + __n, __how_much);

      _M_set_length(length() - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->_M_erase(__n, __size - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_append(const _CharT* __s, size_type __n)
    {
      const size_type __len = __n + this->size();

      if (__len <= this->capacity())
 {
   if (__n)
     this->_S_copy(this->_M_data() + this->size(), __s, __n);
 }
      else
 this->_M_mutate(this->size(), size_type(0), __s, __n);

      this->_M_set_length(__len);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
     _InputIterator __k1, _InputIterator __k2,
     std::__false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 return _M_replace(__i1 - begin(), __n1, __s._M_data(),
     __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __n2 - __n1;

      if (__new_size <= this->capacity())
 {
   _CharT* __p = this->_M_data() + __pos1;

   const size_type __how_much = __old_size - __pos1 - __n1;
   if (__how_much && __n1 != __n2)
     this->_S_move(__p + __n2, __p + __n1, __how_much);
 }
      else
 this->_M_mutate(__pos1, __n1, 0, __n2);

      if (__n2)
 this->_S_assign(this->_M_data() + __pos1, __n2, __c);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
        const size_type __len2)
    {
      _M_check_length(__len1, __len2, "basic_string::_M_replace");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;

      if (__new_size <= this->capacity())
 {
   _CharT* __p = this->_M_data() + __pos;

   const size_type __how_much = __old_size - __pos - __len1;
   if (_M_disjunct(__s))
     {
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2)
  this->_S_copy(__p, __s, __len2);
     }
   else
     {

       if (__len2 && __len2 <= __len1)
  this->_S_move(__p, __s, __len2);
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2 > __len1)
  {
    if (__s + __len2 <= __p + __len1)
      this->_S_move(__p, __s, __len2);
    else if (__s >= __p + __len1)
      this->_S_copy(__p, __s + __len2 - __len1, __len2);
    else
      {
        const size_type __nleft = (__p + __len1) - __s;
        this->_S_move(__p, __s, __nleft);
        this->_S_copy(__p + __nleft, __p + __len2,
        __len2 - __nleft);
      }
  }
     }
 }
      else
 this->_M_mutate(__pos, __len1, __s, __len2);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 _S_copy(__s, _M_data() + __pos, __n);

      return __n;
    }
# 1149 "/usr/include/c++/5/bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }




  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);




}
# 54 "/usr/include/c++/5/string" 2 3
# 26 "/home/junho/Downloads/root/include/TSchemaHelper.h" 2


# 27 "/home/junho/Downloads/root/include/TSchemaHelper.h"
namespace ROOT
{
   struct TSchemaHelper
   {
      TSchemaHelper(): fTarget(), fSourceClass(),
       fSource(), fCode(), fVersion(), fChecksum(),
       fInclude(), fEmbed(kTRUE), fFunctionPtr( 0 ),
       fAttributes() {}
      std::string fTarget;
      std::string fSourceClass;
      std::string fSource;
      std::string fCode;
      std::string fVersion;
      std::string fChecksum;
      std::string fInclude;
      Bool_t fEmbed;
      void* fFunctionPtr;
      std::string fAttributes;

      TSchemaHelper(const TSchemaHelper &tsh) :
       fTarget(tsh.fTarget), fSourceClass(tsh.fSourceClass),
       fSource(tsh.fSource), fCode(tsh.fCode), fVersion(tsh.fVersion),fChecksum(tsh.fChecksum),
       fInclude(tsh.fInclude), fEmbed(tsh.fEmbed), fFunctionPtr(tsh.fFunctionPtr),
       fAttributes(tsh.fAttributes) {}

      TSchemaHelper& operator=(const TSchemaHelper &) {return *this;}
   };
}
# 18 "/home/junho/Downloads/root/include/TGenericClassInfo.h" 2






class TVirtualIsAProxy;






namespace ROOT {

   class TCollectionProxyInfo;

   class TGenericClassInfo {




      const TInitBehavior *fAction;
      TClass *fClass;
      const char *fClassName;
      const char *fDeclFileName;
      Int_t fDeclFileLine;
      VoidFuncPtr_t fDictionary;
      const type_info &fInfo;
      const char *fImplFileName;
      Int_t fImplFileLine;
      TVirtualIsAProxy *fIsA;
      ShowMembersFunc_t fShowMembers;
      Int_t fVersion;
      MergeFunc_t fMerge;
      ResetAfterMergeFunc_t fResetAfterMerge;
      NewFunc_t fNew;
      NewArrFunc_t fNewArray;
      DelFunc_t fDelete;
      DelArrFunc_t fDeleteArray;
      DesFunc_t fDestructor;
      DirAutoAdd_t fDirAutoAdd;
      TClassStreamer *fStreamer;
      ClassStreamerFunc_t fStreamerFunc;
      TVirtualCollectionProxy *fCollectionProxy;
      Int_t fSizeof;
      TCollectionProxyInfo *fCollectionProxyInfo;
      TCollectionProxyInfo *fCollectionStreamerInfo;
      std::vector<ROOT::TSchemaHelper> fReadRules;
      std::vector<ROOT::TSchemaHelper> fReadRawRules;

   public:
      TGenericClassInfo(const char *fullClassname,
                       const char *declFileName, Int_t declFileLine,
                       const type_info &info, const TInitBehavior *action,
                       ShowMembersFunc_t showmembers, VoidFuncPtr_t dictionary,
                       TVirtualIsAProxy *isa, Int_t pragmabits, Int_t sizof);

      TGenericClassInfo(const char *fullClassname, Int_t version,
                       const char *declFileName, Int_t declFileLine,
                       const type_info &info, const TInitBehavior *action,
                       ShowMembersFunc_t showmembers, VoidFuncPtr_t dictionary,
                       TVirtualIsAProxy *isa, Int_t pragmabits, Int_t sizof);

      TGenericClassInfo(const char *fullClassname, Int_t version,
                       const char *declFileName, Int_t declFileLine,
                       const type_info &info, const TInitBehavior *action,
                       VoidFuncPtr_t dictionary,
                       TVirtualIsAProxy *isa, Int_t pragmabits, Int_t sizof);

      TGenericClassInfo(const char *fullClassname, Int_t version,
                        const char *declFileName, Int_t declFileLine,
                        const TInitBehavior *action,
                        VoidFuncPtr_t dictionary, Int_t pragmabits);

      void Init(Int_t pragmabits);
      ~TGenericClassInfo();

      const TInitBehavior &GetAction() const;
      TClass *GetClass();
      const char *GetClassName() const;
      TCollectionProxyInfo *GetCollectionProxyInfo() const;
      TCollectionProxyInfo *GetCollectionStreamerInfo() const;
      const char *GetDeclFileName() const;
      Int_t GetDeclFileLine() const;
      DelFunc_t GetDelete() const;
      DelArrFunc_t GetDeleteArray() const;
      DesFunc_t GetDestructor() const;
      DirAutoAdd_t GetDirectoryAutoAdd() const;
      const char *GetImplFileName();
      Int_t GetImplFileLine();
      const type_info &GetInfo() const;
      TVirtualIsAProxy *GetIsA() const;
      NewFunc_t GetNew() const;
      NewArrFunc_t GetNewArray() const;
      const std::vector<ROOT::TSchemaHelper> &GetReadRawRules() const;
      const std::vector<ROOT::TSchemaHelper> &GetReadRules() const;
      ShowMembersFunc_t GetShowMembers() const;
      Int_t GetVersion() const;

      TClass *IsA(const void *obj);

      Short_t AdoptStreamer(TClassStreamer*);
      Short_t AdoptCollectionProxy(TVirtualCollectionProxy*);
      void AdoptCollectionProxyInfo(TCollectionProxyInfo*);
      void AdoptCollectionStreamerInfo(TCollectionProxyInfo*);
      Int_t SetDeclFile(const char *file, Int_t line);
      void SetDelete(DelFunc_t deleteFunc);
      void SetDeleteArray(DelArrFunc_t deleteArrayFunc);
      void SetDestructor(DesFunc_t destructorFunc);
      void SetDirectoryAutoAdd(DirAutoAdd_t dirAutoAdd);
      void SetFromTemplate();
      Int_t SetImplFile(const char *file, Int_t line);
      void SetMerge(MergeFunc_t);
      void SetResetAfterMerge(ResetAfterMergeFunc_t);
      void SetNew(NewFunc_t newFunc);
      void SetNewArray(NewArrFunc_t newArrayFunc);
      void SetReadRawRules( const std::vector<ROOT::TSchemaHelper>& rules );
      void SetReadRules( const std::vector<ROOT::TSchemaHelper>& rules );
      Short_t SetStreamer(ClassStreamerFunc_t);
      void SetStreamerFunc(ClassStreamerFunc_t);
      Short_t SetVersion(Short_t version);


   private:
      void CreateRuleSet( std::vector<ROOT::TSchemaHelper>& vect, Bool_t ProcessReadRules );
      TGenericClassInfo(const TGenericClassInfo&);
      TGenericClassInfo& operator=(const TGenericClassInfo&);

   private:
      TGenericClassInfo();

   };

}
# 271 "/home/junho/Downloads/root/include/Rtypes.h" 2





typedef TClass* atomic_TClass_ptr;
# 32 "/home/junho/Downloads/root/include/TObject.h" 2


# 1 "/home/junho/Downloads/root/include/TStorage.h" 1
# 28 "/home/junho/Downloads/root/include/TStorage.h"
typedef void (*FreeHookFun_t)(void*, void *addr, size_t);
typedef void *(*ReAllocFun_t)(void*, size_t);
typedef void *(*ReAllocCFun_t)(void*, size_t, size_t);
typedef char *(*ReAllocCharFun_t)(char*, size_t, size_t);


class TStorage {

private:
   static size_t fgMaxBlockSize;
   static FreeHookFun_t fgFreeHook;
   static void *fgFreeHookData;
   static ReAllocFun_t fgReAllocHook;
   static ReAllocCFun_t fgReAllocCHook;
   static Bool_t fgHasCustomNewDelete;
   static const UInt_t kObjectAllocMemValue = 0x99999999;


public:
   virtual ~TStorage() { }

   static ULong_t GetHeapBegin();
   static ULong_t GetHeapEnd();
   static FreeHookFun_t GetFreeHook();
   static void *GetFreeHookData();
   static size_t GetMaxBlockSize();
   static void *Alloc(size_t size);
   static void Dealloc(void *ptr);
   static void *ReAlloc(void *vp, size_t size);
   static void *ReAlloc(void *vp, size_t size, size_t oldsize);
   static char *ReAllocChar(char *vp, size_t size, size_t oldsize);
   static Int_t *ReAllocInt(Int_t *vp, size_t size, size_t oldsize);
   static void *ObjectAlloc(size_t size);
   static void *ObjectAllocArray(size_t size);
   static void *ObjectAlloc(size_t size, void *vp);
   static void ObjectDealloc(void *vp);
   static void ObjectDealloc(void *vp, void *ptr);

   static void EnterStat(size_t size, void *p);
   static void RemoveStat(void *p);
   static void PrintStatistics();
   static void SetMaxBlockSize(size_t size);
   static void SetFreeHook(FreeHookFun_t func, void *data);
   static void SetReAllocHooks(ReAllocFun_t func1, ReAllocCFun_t func2);
   static void SetCustomNewDelete();
   static void EnableStatistics(int size= -1, int ix= -1);

   static Bool_t HasCustomNewDelete();


   static void AddToHeap(ULong_t begin, ULong_t end);
   static Bool_t IsOnHeap(void *p);

   static Bool_t FilledByObjectAlloc(UInt_t* member);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TStorage::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TStorage::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TStorage.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 83; }
};


inline Bool_t TStorage::FilledByObjectAlloc(UInt_t *member) { return *member == kObjectAllocMemValue; }

inline size_t TStorage::GetMaxBlockSize() { return fgMaxBlockSize; }

inline void TStorage::SetMaxBlockSize(size_t size) { fgMaxBlockSize = size; }

inline FreeHookFun_t TStorage::GetFreeHook() { return fgFreeHook; }
# 35 "/home/junho/Downloads/root/include/TObject.h" 2


# 1 "/home/junho/Downloads/root/include/TVersionCheck.h" 1
# 28 "/home/junho/Downloads/root/include/TVersionCheck.h"
class TVersionCheck {
public:
   TVersionCheck(int versionCode);
};
# 38 "/home/junho/Downloads/root/include/TObject.h" 2


# 1 "/home/junho/Downloads/root/include/Riosfwd.h" 1
# 35 "/home/junho/Downloads/root/include/Riosfwd.h"
using std::istream;
using std::ostream;
using std::fstream;
using std::ifstream;
using std::ofstream;
# 41 "/home/junho/Downloads/root/include/TObject.h" 2

# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stdarg.h" 1 3 4
# 43 "/home/junho/Downloads/root/include/TObject.h" 2





class TList;
class TBrowser;
class TBuffer;
class TObjArray;
class TMethod;
class TTimer;


class TObject {

private:
   UInt_t fUniqueID;
   UInt_t fBits;

   static Long_t fgDtorOnly;
   static Bool_t fgObjectStat;

protected:
   void MakeZombie() { fBits |= kZombie; }
   virtual void DoError(int level, const char *location, const char *fmt, va_list va) const;

public:




   enum EStatusBits {
      kCanDelete = (1ULL << (0)),
      kMustCleanup = (1ULL << (3)),
      kObjInCanvas = (1ULL << (3)),
      kIsReferenced = (1ULL << (4)),
      kHasUUID = (1ULL << (5)),
      kCannotPick = (1ULL << (6)),
      kNoContextMenu = (1ULL << (8)),
      kInvalidObject = (1ULL << (13))
   };


   enum {
      kIsOnHeap = 0x01000000,
      kNotDeleted = 0x02000000,
      kZombie = 0x04000000,
      kBitMask = 0x00ffffff
   };


   enum {
      kSingleKey = (1ULL << (0)),
      kOverwrite = (1ULL << (1)),
      kWriteDelete = (1ULL << (2))
   };

   TObject();
   TObject(const TObject &object);
   TObject &operator=(const TObject &rhs);
   virtual ~TObject();

   virtual void AppendPad(Option_t *option="");
   virtual void Browse(TBrowser *b);
   virtual const char *ClassName() const;
   virtual void Clear(Option_t * ="") { }
   virtual TObject *Clone(const char *newname="") const;
   virtual Int_t Compare(const TObject *obj) const;
   virtual void Copy(TObject &object) const;
   virtual void Delete(Option_t *option="");
   virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
   virtual void Draw(Option_t *option="");
   virtual void DrawClass() const;
   virtual TObject *DrawClone(Option_t *option="") const;
   virtual void Dump() const;
   virtual void Execute(const char *method, const char *params, Int_t *error=0);
   virtual void Execute(TMethod *method, TObjArray *params, Int_t *error=0);
   virtual void ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual TObject *FindObject(const char *name) const;
   virtual TObject *FindObject(const TObject *obj) const;
   virtual Option_t *GetDrawOption() const;
   virtual UInt_t GetUniqueID() const;
   virtual const char *GetName() const;
   virtual const char *GetIconName() const;
   virtual Option_t *GetOption() const { return ""; }
   virtual char *GetObjectInfo(Int_t px, Int_t py) const;
   virtual const char *GetTitle() const;
   virtual Bool_t HandleTimer(TTimer *timer);
   virtual ULong_t Hash() const;
   virtual Bool_t InheritsFrom(const char *classname) const;
   virtual Bool_t InheritsFrom(const TClass *cl) const;
   virtual void Inspect() const;
   virtual Bool_t IsFolder() const;
   virtual Bool_t IsEqual(const TObject *obj) const;
   virtual Bool_t IsSortable() const { return kFALSE; }
           Bool_t IsOnHeap() const { return TestBit(kIsOnHeap); }
           Bool_t IsZombie() const { return TestBit(kZombie); }
   virtual Bool_t Notify();
   virtual void ls(Option_t *option="") const;
   virtual void Paint(Option_t *option="");
   virtual void Pop();
   virtual void Print(Option_t *option="") const;
   virtual Int_t Read(const char *name);
   virtual void RecursiveRemove(TObject *obj);
   virtual void SaveAs(const char *filename="",Option_t *option="") const;
   virtual void SavePrimitive(ostream &out, Option_t *option = "");
   virtual void SetDrawOption(Option_t *option="");
   virtual void SetUniqueID(UInt_t uid);
   virtual void UseCurrentStyle();
   virtual Int_t Write(const char *name=0, Int_t option=0, Int_t bufsize=0);
   virtual Int_t Write(const char *name=0, Int_t option=0, Int_t bufsize=0) const;


   void *operator new(size_t sz) { return TStorage::ObjectAlloc(sz); }
   void *operator new[](size_t sz) { return TStorage::ObjectAllocArray(sz); }
   void *operator new(size_t sz, void *vp) { return TStorage::ObjectAlloc(sz, vp); }
   void *operator new[](size_t sz, void *vp) { return TStorage::ObjectAlloc(sz, vp); }
   void operator delete(void *ptr);
   void operator delete[](void *ptr);

   void operator delete(void *ptr, void *vp);
   void operator delete[](void *ptr, void *vp);



   void SetBit(UInt_t f, Bool_t set);
   void SetBit(UInt_t f) { fBits |= f & kBitMask; }
   void ResetBit(UInt_t f) { fBits &= ~(f & kBitMask); }
   Bool_t TestBit(UInt_t f) const { return (Bool_t) ((fBits & f) != 0); }
   Int_t TestBits(UInt_t f) const { return (Int_t) (fBits & f); }
   void InvertBit(UInt_t f) { fBits ^= f & kBitMask; }


   virtual void Info(const char *method, const char *msgfmt, ...) const



   ;
   virtual void Warning(const char *method, const char *msgfmt, ...) const



   ;
   virtual void Error(const char *method, const char *msgfmt, ...) const



   ;
   virtual void SysError(const char *method, const char *msgfmt, ...) const



   ;
   virtual void Fatal(const char *method, const char *msgfmt, ...) const



   ;

   void AbstractMethod(const char *method) const;
   void MayNotUse(const char *method) const;
   void Obsolete(const char *method, const char *asOfVers, const char *removedFromVers) const;


   static Long_t GetDtorOnly();
   static void SetDtorOnly(void *obj);
   static Bool_t GetObjectStat();
   static void SetObjectStat(Bool_t stat);

   friend class TClonesArray;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TObject::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TObject::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TObject.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 214; }
};




enum EObjBits {
   kCanDelete = TObject::kCanDelete,
   kMustCleanup = TObject::kMustCleanup,
   kObjInCanvas = TObject::kObjInCanvas,
   kIsReferenced = TObject::kIsReferenced,
   kHasUUID = TObject::kHasUUID,
   kCannotPick = TObject::kCannotPick,
   kNoContextMenu = TObject::kNoContextMenu,
   kInvalidObject = TObject::kInvalidObject
};


# 1 "/home/junho/Downloads/root/include/TBuffer.h" 1
# 28 "/home/junho/Downloads/root/include/TBuffer.h"
class TVirtualStreamerInfo;
class TStreamerElement;
class TClass;
class TString;
class TProcessID;
class TClonesArray;
class TRefTable;
class TVirtualArray;
namespace TStreamerInfoActions {
   class TActionSequence;
}

class TBuffer : public TObject {

protected:
   typedef std::vector<TVirtualArray*> CacheList_t;

   Bool_t fMode;
   Int_t fVersion;
   Int_t fBufSize;
   char *fBuffer;
   char *fBufCur;
   char *fBufMax;
   TObject *fParent;
   ReAllocCharFun_t fReAllocFunc;
   CacheList_t fCacheStack;


   TBuffer() : TObject(), fMode(0), fVersion(0), fBufSize(0), fBuffer(0),
     fBufCur(0), fBufMax(0), fParent(0), fReAllocFunc(0), fCacheStack(0,(TVirtualArray*)0) {}


   TBuffer(const TBuffer &);
   void operator=(const TBuffer &);

   Int_t Read(const char *name) { return TObject::Read(name); }
   Int_t Write(const char *name, Int_t opt, Int_t bufs)
                              { return TObject::Write(name, opt, bufs); }
   Int_t Write(const char *name, Int_t opt, Int_t bufs) const
                              { return TObject::Write(name, opt, bufs); }

public:
   enum EMode { kRead = 0, kWrite = 1 };
   enum { kIsOwner = (1ULL << (16)) };
   enum { kCannotHandleMemberWiseStreaming = (1ULL << (17))};
   enum { kInitialSize = 1024, kMinimalSize = 128 };

   TBuffer(EMode mode);
   TBuffer(EMode mode, Int_t bufsiz);
   TBuffer(EMode mode, Int_t bufsiz, void *buf, Bool_t adopt = kTRUE, ReAllocCharFun_t reallocfunc = 0);
   virtual ~TBuffer();

   Int_t GetBufferVersion() const { return fVersion; }
   Bool_t IsReading() const { return (fMode & kWrite) == 0; }
   Bool_t IsWriting() const { return (fMode & kWrite) != 0; }
   void SetReadMode();
   void SetWriteMode();
   void SetBuffer(void *buf, UInt_t bufsiz = 0, Bool_t adopt = kTRUE, ReAllocCharFun_t reallocfunc = 0);
   ReAllocCharFun_t GetReAllocFunc() const;
   void SetReAllocFunc(ReAllocCharFun_t reallocfunc = 0);
   void SetBufferOffset(Int_t offset = 0) { fBufCur = fBuffer+offset; }
   void SetParent(TObject *parent);
   TObject *GetParent() const;
   char *Buffer() const { return fBuffer; }
   Int_t BufferSize() const { return fBufSize; }
   void DetachBuffer() { fBuffer = 0; }
   Int_t Length() const { return (Int_t)(fBufCur - fBuffer); }
   void Expand(Int_t newsize, Bool_t copy = kTRUE);
   void AutoExpand(Int_t size_needed);

   virtual Bool_t CheckObject(const TObject *obj) = 0;
   virtual Bool_t CheckObject(const void *obj, const TClass *ptrClass) = 0;

   virtual Int_t ReadBuf(void *buf, Int_t max) = 0;
   virtual void WriteBuf(const void *buf, Int_t max) = 0;

   virtual char *ReadString(char *s, Int_t max) = 0;
   virtual void WriteString(const char *s) = 0;

   virtual Int_t GetVersionOwner() const = 0;
   virtual Int_t GetMapCount() const = 0;
   virtual void GetMappedObject(UInt_t tag, void* &ptr, TClass* &ClassPtr) const = 0;
   virtual void MapObject(const TObject *obj, UInt_t offset = 1) = 0;
   virtual void MapObject(const void *obj, const TClass *cl, UInt_t offset = 1) = 0;
   virtual void Reset() = 0;
   virtual void InitMap() = 0;
   virtual void ResetMap() = 0;
   virtual void SetReadParam(Int_t mapsize) = 0;
   virtual void SetWriteParam(Int_t mapsize) = 0;

   virtual Int_t CheckByteCount(UInt_t startpos, UInt_t bcnt, const TClass *clss) = 0;
   virtual Int_t CheckByteCount(UInt_t startpos, UInt_t bcnt, const char *classname) = 0;
   virtual void SetByteCount(UInt_t cntpos, Bool_t packInVersion = kFALSE)= 0;

   virtual void SkipVersion(const TClass *cl = 0) = 0;
   virtual Version_t ReadVersion(UInt_t *start = 0, UInt_t *bcnt = 0, const TClass *cl = 0) = 0;
   virtual Version_t ReadVersionNoCheckSum(UInt_t *start = 0, UInt_t *bcnt = 0) = 0;
   virtual Version_t ReadVersionForMemberWise(const TClass *cl = 0) = 0;
   virtual UInt_t WriteVersion(const TClass *cl, Bool_t useBcnt = kFALSE) = 0;
   virtual UInt_t WriteVersionMemberWise(const TClass *cl, Bool_t useBcnt = kFALSE) = 0;

   virtual void *ReadObjectAny(const TClass* cast) = 0;
   virtual void SkipObjectAny() = 0;

   virtual void TagStreamerInfo(TVirtualStreamerInfo* info) = 0;
   virtual void IncrementLevel(TVirtualStreamerInfo* info) = 0;
   virtual void SetStreamerElementNumber(TStreamerElement *elem, Int_t comp_type) = 0;
   virtual void DecrementLevel(TVirtualStreamerInfo*) = 0;

   virtual void ClassBegin(const TClass*, Version_t = -1) = 0;
   virtual void ClassEnd(const TClass*) = 0;
   virtual void ClassMember(const char*, const char* = 0, Int_t = -1, Int_t = -1) = 0;
   virtual TVirtualStreamerInfo *GetInfo() = 0;

   virtual TVirtualArray *PeekDataCache() const;
   virtual TVirtualArray *PopDataCache();
   virtual void PushDataCache(TVirtualArray *);

   virtual TClass *ReadClass(const TClass *cl = 0, UInt_t *objTag = 0) = 0;
   virtual void WriteClass(const TClass *cl) = 0;

   virtual TObject *ReadObject(const TClass *cl) = 0;
   virtual void WriteObject(const TObject *obj) = 0;

   virtual Int_t WriteObjectAny(const void *obj, const TClass *ptrClass) = 0;

   virtual UShort_t GetPidOffset() const = 0;
   virtual void SetPidOffset(UShort_t offset) = 0;
   virtual Int_t GetBufferDisplacement() const = 0;
   virtual void SetBufferDisplacement() = 0;
   virtual void SetBufferDisplacement(Int_t skipped) = 0;


   virtual void ReadFloat16 (Float_t *f, TStreamerElement *ele=0) = 0;
   virtual void WriteFloat16(Float_t *f, TStreamerElement *ele=0) = 0;
   virtual void ReadDouble32 (Double_t *d, TStreamerElement *ele=0) = 0;
   virtual void WriteDouble32(Double_t *d, TStreamerElement *ele=0) = 0;
   virtual void ReadWithFactor(Float_t *ptr, Double_t factor, Double_t minvalue) = 0;
   virtual void ReadWithNbits(Float_t *ptr, Int_t nbits) = 0;
   virtual void ReadWithFactor(Double_t *ptr, Double_t factor, Double_t minvalue) = 0;
   virtual void ReadWithNbits(Double_t *ptr, Int_t nbits) = 0;

   virtual Int_t ReadArray(Bool_t *&b) = 0;
   virtual Int_t ReadArray(Char_t *&c) = 0;
   virtual Int_t ReadArray(UChar_t *&c) = 0;
   virtual Int_t ReadArray(Short_t *&h) = 0;
   virtual Int_t ReadArray(UShort_t *&h) = 0;
   virtual Int_t ReadArray(Int_t *&i) = 0;
   virtual Int_t ReadArray(UInt_t *&i) = 0;
   virtual Int_t ReadArray(Long_t *&l) = 0;
   virtual Int_t ReadArray(ULong_t *&l) = 0;
   virtual Int_t ReadArray(Long64_t *&l) = 0;
   virtual Int_t ReadArray(ULong64_t *&l) = 0;
   virtual Int_t ReadArray(Float_t *&f) = 0;
   virtual Int_t ReadArray(Double_t *&d) = 0;
   virtual Int_t ReadArrayFloat16(Float_t *&f, TStreamerElement *ele=0) = 0;
   virtual Int_t ReadArrayDouble32(Double_t *&d, TStreamerElement *ele=0) = 0;

   virtual Int_t ReadStaticArray(Bool_t *b) = 0;
   virtual Int_t ReadStaticArray(Char_t *c) = 0;
   virtual Int_t ReadStaticArray(UChar_t *c) = 0;
   virtual Int_t ReadStaticArray(Short_t *h) = 0;
   virtual Int_t ReadStaticArray(UShort_t *h) = 0;
   virtual Int_t ReadStaticArray(Int_t *i) = 0;
   virtual Int_t ReadStaticArray(UInt_t *i) = 0;
   virtual Int_t ReadStaticArray(Long_t *l) = 0;
   virtual Int_t ReadStaticArray(ULong_t *l) = 0;
   virtual Int_t ReadStaticArray(Long64_t *l) = 0;
   virtual Int_t ReadStaticArray(ULong64_t *l) = 0;
   virtual Int_t ReadStaticArray(Float_t *f) = 0;
   virtual Int_t ReadStaticArray(Double_t *d) = 0;
   virtual Int_t ReadStaticArrayFloat16(Float_t *f, TStreamerElement *ele=0) = 0;
   virtual Int_t ReadStaticArrayDouble32(Double_t *d, TStreamerElement *ele=0) = 0;

   virtual void ReadFastArray(Bool_t *b, Int_t n) = 0;
   virtual void ReadFastArray(Char_t *c, Int_t n) = 0;
   virtual void ReadFastArrayString(Char_t *c, Int_t n) = 0;
   virtual void ReadFastArray(UChar_t *c, Int_t n) = 0;
   virtual void ReadFastArray(Short_t *h, Int_t n) = 0;
   virtual void ReadFastArray(UShort_t *h, Int_t n) = 0;
   virtual void ReadFastArray(Int_t *i, Int_t n) = 0;
   virtual void ReadFastArray(UInt_t *i, Int_t n) = 0;
   virtual void ReadFastArray(Long_t *l, Int_t n) = 0;
   virtual void ReadFastArray(ULong_t *l, Int_t n) = 0;
   virtual void ReadFastArray(Long64_t *l, Int_t n) = 0;
   virtual void ReadFastArray(ULong64_t *l, Int_t n) = 0;
   virtual void ReadFastArray(Float_t *f, Int_t n) = 0;
   virtual void ReadFastArray(Double_t *d, Int_t n) = 0;
   virtual void ReadFastArrayFloat16(Float_t *f, Int_t n, TStreamerElement *ele=0) = 0;
   virtual void ReadFastArrayDouble32(Double_t *d, Int_t n, TStreamerElement *ele=0) = 0;
   virtual void ReadFastArrayWithFactor(Float_t *ptr, Int_t n, Double_t factor, Double_t minvalue) = 0;
   virtual void ReadFastArrayWithNbits(Float_t *ptr, Int_t n, Int_t nbits) = 0;
   virtual void ReadFastArrayWithFactor(Double_t *ptr, Int_t n, Double_t factor, Double_t minvalue) = 0;
   virtual void ReadFastArrayWithNbits(Double_t *ptr, Int_t n, Int_t nbits) = 0;
   virtual void ReadFastArray(void *start , const TClass *cl, Int_t n=1, TMemberStreamer *s=0, const TClass *onFileClass=0) = 0;
   virtual void ReadFastArray(void **startp, const TClass *cl, Int_t n=1, Bool_t isPreAlloc=kFALSE, TMemberStreamer *s=0, const TClass *onFileClass=0) = 0;

   virtual void WriteArray(const Bool_t *b, Int_t n) = 0;
   virtual void WriteArray(const Char_t *c, Int_t n) = 0;
   virtual void WriteArray(const UChar_t *c, Int_t n) = 0;
   virtual void WriteArray(const Short_t *h, Int_t n) = 0;
   virtual void WriteArray(const UShort_t *h, Int_t n) = 0;
   virtual void WriteArray(const Int_t *i, Int_t n) = 0;
   virtual void WriteArray(const UInt_t *i, Int_t n) = 0;
   virtual void WriteArray(const Long_t *l, Int_t n) = 0;
   virtual void WriteArray(const ULong_t *l, Int_t n) = 0;
   virtual void WriteArray(const Long64_t *l, Int_t n) = 0;
   virtual void WriteArray(const ULong64_t *l, Int_t n) = 0;
   virtual void WriteArray(const Float_t *f, Int_t n) = 0;
   virtual void WriteArray(const Double_t *d, Int_t n) = 0;
   virtual void WriteArrayFloat16(const Float_t *f, Int_t n, TStreamerElement *ele=0) = 0;
   virtual void WriteArrayDouble32(const Double_t *d, Int_t n, TStreamerElement *ele=0) = 0;

   virtual void WriteFastArray(const Bool_t *b, Int_t n) = 0;
   virtual void WriteFastArray(const Char_t *c, Int_t n) = 0;
   virtual void WriteFastArrayString(const Char_t *c, Int_t n) = 0;
   virtual void WriteFastArray(const UChar_t *c, Int_t n) = 0;
   virtual void WriteFastArray(const Short_t *h, Int_t n) = 0;
   virtual void WriteFastArray(const UShort_t *h, Int_t n) = 0;
   virtual void WriteFastArray(const Int_t *i, Int_t n) = 0;
   virtual void WriteFastArray(const UInt_t *i, Int_t n) = 0;
   virtual void WriteFastArray(const Long_t *l, Int_t n) = 0;
   virtual void WriteFastArray(const ULong_t *l, Int_t n) = 0;
   virtual void WriteFastArray(const Long64_t *l, Int_t n) = 0;
   virtual void WriteFastArray(const ULong64_t *l, Int_t n) = 0;
   virtual void WriteFastArray(const Float_t *f, Int_t n) = 0;
   virtual void WriteFastArray(const Double_t *d, Int_t n) = 0;
   virtual void WriteFastArrayFloat16(const Float_t *f, Int_t n, TStreamerElement *ele=0) = 0;
   virtual void WriteFastArrayDouble32(const Double_t *d, Int_t n, TStreamerElement *ele=0) = 0;
   virtual void WriteFastArray(void *start, const TClass *cl, Int_t n=1, TMemberStreamer *s=0) = 0;
   virtual Int_t WriteFastArray(void **startp, const TClass *cl, Int_t n=1, Bool_t isPreAlloc=kFALSE, TMemberStreamer *s=0) = 0;

   virtual void StreamObject(void *obj, const type_info &typeinfo, const TClass* onFileClass = 0 ) = 0;
   virtual void StreamObject(void *obj, const char *className, const TClass* onFileClass = 0 ) = 0;
   virtual void StreamObject(void *obj, const TClass *cl, const TClass* onFileClass = 0 ) = 0;
   virtual void StreamObject(TObject *obj) = 0;

   virtual void ReadBool(Bool_t &b) = 0;
   virtual void ReadChar(Char_t &c) = 0;
   virtual void ReadUChar(UChar_t &c) = 0;
   virtual void ReadShort(Short_t &s) = 0;
   virtual void ReadUShort(UShort_t &s) = 0;
   virtual void ReadInt(Int_t &i) = 0;
   virtual void ReadUInt(UInt_t &i) = 0;
   virtual void ReadLong(Long_t &l) = 0;
   virtual void ReadULong(ULong_t &l) = 0;
   virtual void ReadLong64(Long64_t &l) = 0;
   virtual void ReadULong64(ULong64_t &l) = 0;
   virtual void ReadFloat(Float_t &f) = 0;
   virtual void ReadDouble(Double_t &d) = 0;
   virtual void ReadCharP(Char_t *c) = 0;
   virtual void ReadTString(TString &s) = 0;
   virtual void ReadStdString(std::string &s) = 0;

   virtual void WriteBool(Bool_t b) = 0;
   virtual void WriteChar(Char_t c) = 0;
   virtual void WriteUChar(UChar_t c) = 0;
   virtual void WriteShort(Short_t s) = 0;
   virtual void WriteUShort(UShort_t s) = 0;
   virtual void WriteInt(Int_t i) = 0;
   virtual void WriteUInt(UInt_t i) = 0;
   virtual void WriteLong(Long_t l) = 0;
   virtual void WriteULong(ULong_t l) = 0;
   virtual void WriteLong64(Long64_t l) = 0;
   virtual void WriteULong64(ULong64_t l) = 0;
   virtual void WriteFloat(Float_t f) = 0;
   virtual void WriteDouble(Double_t d) = 0;
   virtual void WriteCharP(const Char_t *c) = 0;
   virtual void WriteTString(const TString &s) = 0;
   virtual void WriteStdString(const std::string &s) = 0;


   virtual TProcessID *GetLastProcessID(TRefTable *reftable) const = 0;
   virtual UInt_t GetTRefExecId() = 0;
   virtual TProcessID *ReadProcessID(UShort_t pidf) = 0;
   virtual UShort_t WriteProcessID(TProcessID *pid) = 0;


   virtual void ForceWriteInfo(TVirtualStreamerInfo *info, Bool_t force) = 0;
   virtual void ForceWriteInfoClones(TClonesArray *a) = 0;
   virtual Int_t ReadClones (TClonesArray *a, Int_t nobjects, Version_t objvers) = 0;
   virtual Int_t WriteClones(TClonesArray *a, Int_t nobjects) = 0;


   virtual Int_t ReadClassEmulated(const TClass *cl, void *object, const TClass *onfile_class = 0) = 0;
   virtual Int_t ReadClassBuffer(const TClass *cl, void *pointer, const TClass *onfile_class = 0) = 0;
   virtual Int_t ReadClassBuffer(const TClass *cl, void *pointer, Int_t version, UInt_t start, UInt_t count, const TClass *onfile_class = 0) = 0;
   virtual Int_t WriteClassBuffer(const TClass *cl, void *pointer) = 0;


   virtual Int_t ApplySequence(const TStreamerInfoActions::TActionSequence &sequence, void *object) = 0;
   virtual Int_t ApplySequenceVecPtr(const TStreamerInfoActions::TActionSequence &sequence, void *start_collection, void *end_collection) = 0;
   virtual Int_t ApplySequence(const TStreamerInfoActions::TActionSequence &sequence, void *start_collection, void *end_collection) = 0;

   static TClass *GetClass(const type_info &typeinfo);
   static TClass *GetClass(const char *className);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TBuffer::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TBuffer::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TBuffer.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 325; }
};



inline TBuffer &operator>>(TBuffer &buf, Bool_t &b) { buf.ReadBool(b); return buf; }
inline TBuffer &operator>>(TBuffer &buf, Char_t &c) { buf.ReadChar(c); return buf; }
inline TBuffer &operator>>(TBuffer &buf, UChar_t &c) { buf.ReadUChar(c); return buf; }
inline TBuffer &operator>>(TBuffer &buf, Short_t &s) { buf.ReadShort(s); return buf; }
inline TBuffer &operator>>(TBuffer &buf, UShort_t &s) { buf.ReadUShort(s); return buf; }
inline TBuffer &operator>>(TBuffer &buf, Int_t &i) { buf.ReadInt(i); return buf; }
inline TBuffer &operator>>(TBuffer &buf, UInt_t &i) { buf.ReadUInt(i); return buf; }
inline TBuffer &operator>>(TBuffer &buf, Long_t &l) { buf.ReadLong(l); return buf; }
inline TBuffer &operator>>(TBuffer &buf, ULong_t &l) { buf.ReadULong(l); return buf; }
inline TBuffer &operator>>(TBuffer &buf, Long64_t &l) { buf.ReadLong64(l); return buf; }
inline TBuffer &operator>>(TBuffer &buf, ULong64_t &l){ buf.ReadULong64(l);return buf; }
inline TBuffer &operator>>(TBuffer &buf, Float_t &f) { buf.ReadFloat(f); return buf; }
inline TBuffer &operator>>(TBuffer &buf, Double_t &d) { buf.ReadDouble(d); return buf; }
inline TBuffer &operator>>(TBuffer &buf, Char_t *c) { buf.ReadCharP(c); return buf; }
inline TBuffer &operator>>(TBuffer &buf, TString &s) { buf.ReadTString(s);return buf; }

inline TBuffer &operator<<(TBuffer &buf, Bool_t b) { buf.WriteBool(b); return buf; }
inline TBuffer &operator<<(TBuffer &buf, Char_t c) { buf.WriteChar(c); return buf; }
inline TBuffer &operator<<(TBuffer &buf, UChar_t c) { buf.WriteUChar(c); return buf; }
inline TBuffer &operator<<(TBuffer &buf, Short_t s) { buf.WriteShort(s); return buf; }
inline TBuffer &operator<<(TBuffer &buf, UShort_t s) { buf.WriteUShort(s); return buf; }
inline TBuffer &operator<<(TBuffer &buf, Int_t i) { buf.WriteInt(i); return buf; }
inline TBuffer &operator<<(TBuffer &buf, UInt_t i) { buf.WriteUInt(i); return buf; }
inline TBuffer &operator<<(TBuffer &buf, Long_t l) { buf.WriteLong(l); return buf; }
inline TBuffer &operator<<(TBuffer &buf, ULong_t l) { buf.WriteULong(l); return buf; }
inline TBuffer &operator<<(TBuffer &buf, Long64_t l) { buf.WriteLong64(l); return buf; }
inline TBuffer &operator<<(TBuffer &buf, ULong64_t l){ buf.WriteULong64(l);return buf; }
inline TBuffer &operator<<(TBuffer &buf, Float_t f) { buf.WriteFloat(f); return buf; }
inline TBuffer &operator<<(TBuffer &buf, Double_t d) { buf.WriteDouble(d); return buf; }
inline TBuffer &operator<<(TBuffer &buf, const Char_t *c) { buf.WriteCharP(c); return buf; }
inline TBuffer &operator<<(TBuffer &buf, const TString &s) { buf.WriteTString(s);return buf; }
# 392 "/home/junho/Downloads/root/include/TBuffer.h"
template <class Tmpl> TBuffer &operator>>(TBuffer &buf, Tmpl *&obj);
template <class Tmpl> TBuffer &operator<<(TBuffer &buf, Tmpl *&obj);






inline TBuffer &operator<<(TBuffer &buf, const TObject *obj)
   { buf.WriteObjectAny(obj, TObject::Class()); return buf; }
# 233 "/home/junho/Downloads/root/include/TObject.h" 2
# 2 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/root/include/TMemberInspector.h" 1
# 28 "/home/junho/Downloads/root/include/TMemberInspector.h"
class TObject;
class TClass;

class TMemberInspector {
private:
   class TParentBuf;
   TParentBuf* fParent;

   TMemberInspector(const TMemberInspector&);
   TMemberInspector &operator=(const TMemberInspector&);

public:
   TMemberInspector();
   virtual ~TMemberInspector();

   virtual void Inspect(TClass *cl, const char *parent, const char *name, const void *addr) = 0;

   const char* GetParent() const;
   Ssiz_t GetParentLen() const;
   void AddToParent(const char* name);
   void RemoveFromParent(Ssiz_t startingAt);

   template <class T>
   void InspectMember(T& obj, const char* name) {
      Ssiz_t len = GetParentLen();
      AddToParent(name);
      obj.ShowMembers(*this);
      RemoveFromParent(len);
   }

   void InspectMember(TObject& obj, const char* name);
   void InspectMember(const char* topclassname, void* pobj, const char* name,
                      Bool_t transient);
   void InspectMember(TClass* cl, void* pobj, const char* name);

   void GenericShowMembers(const char *topClassName, void *obj,
                           Bool_t transientMember);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMemberInspector::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMemberInspector::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMemberInspector.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 66; }
};
# 3 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldParms.h" 1
# 15 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldParms.h"
# 1 "/home/junho/Downloads/root/include/TNamed.h" 1
# 29 "/home/junho/Downloads/root/include/TNamed.h"
# 1 "/home/junho/Downloads/root/include/TString.h" 1
# 36 "/home/junho/Downloads/root/include/TString.h"
# 1 "/home/junho/Downloads/root/include/TMathBase.h" 1
# 33 "/home/junho/Downloads/root/include/TMathBase.h"
# 1 "/usr/include/c++/5/cstdlib" 1 3
# 39 "/usr/include/c++/5/cstdlib" 3
       
# 40 "/usr/include/c++/5/cstdlib" 3
# 72 "/usr/include/c++/5/cstdlib" 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4


# 34 "/usr/include/stdlib.h" 3 4
extern "C" {






# 1 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 1 3 4
# 50 "/usr/include/x86_64-linux-gnu/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 1 3 4
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3 4
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 43 "/usr/include/stdlib.h" 2 3 4
# 95 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 139 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

# 239 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
# 305 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/x86_64-linux-gnu/sys/types.h" 1 3 4
# 27 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 104 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 136 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 147 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/sys/select.h" 1 3 4
# 30 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/select.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/select.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/wordsize.h" 1 3 4
# 23 "/usr/include/x86_64-linux-gnu/bits/select.h" 2 3 4
# 31 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 1 3 4
# 22 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;







# 1 "/usr/include/x86_64-linux-gnu/bits/time.h" 1 3 4
# 46 "/usr/include/x86_64-linux-gnu/sys/select.h" 2 3 4
# 54 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 96 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern "C" {
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 131 "/usr/include/x86_64-linux-gnu/sys/select.h" 3 4
}
# 220 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));
# 58 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3 4
}
# 223 "/usr/include/x86_64-linux-gnu/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
# 273 "/usr/include/x86_64-linux-gnu/sys/types.h" 3 4
}
# 315 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 493 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 606 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 629 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 651 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 673 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 683 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 693 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 705 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 733 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

# 811 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 898 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));


# 1 "/usr/include/x86_64-linux-gnu/bits/stdlib-float.h" 1 3 4
# 955 "/usr/include/stdlib.h" 2 3 4
# 967 "/usr/include/stdlib.h" 3 4
}
# 73 "/usr/include/c++/5/cstdlib" 2 3
# 114 "/usr/include/c++/5/cstdlib" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;





  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;





  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;



  inline long
  abs(long __i) { return __builtin_labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }



  inline long long
  abs(long long __x) { return __builtin_llabs (__x); }



  inline __int128
  abs(__int128 __x) { return __x >= 0 ? __x : -__x; }
# 195 "/usr/include/c++/5/cstdlib" 3

}
# 209 "/usr/include/c++/5/cstdlib" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  using ::lldiv_t;





  using ::_Exit;



  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 241 "/usr/include/c++/5/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;


}

namespace std
{

  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
}
# 34 "/home/junho/Downloads/root/include/TMathBase.h" 2
# 1 "/usr/include/c++/5/cmath" 1 3
# 39 "/usr/include/c++/5/cmath" 3
       
# 40 "/usr/include/c++/5/cmath" 3




# 1 "/usr/include/math.h" 1 3 4
# 28 "/usr/include/math.h" 3 4
extern "C" {


# 1 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 1 3 4
# 25 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/libm-simd-decl-stubs.h" 1 3 4
# 26 "/usr/include/x86_64-linux-gnu/bits/math-vector.h" 2 3 4
# 32 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/huge_val.h" 1 3 4
# 36 "/usr/include/math.h" 2 3 4

# 1 "/usr/include/x86_64-linux-gnu/bits/huge_valf.h" 1 3 4
# 38 "/usr/include/math.h" 2 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/huge_vall.h" 1 3 4
# 39 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/inf.h" 1 3 4
# 42 "/usr/include/math.h" 2 3 4


# 1 "/usr/include/x86_64-linux-gnu/bits/nan.h" 1 3 4
# 45 "/usr/include/math.h" 2 3 4



# 1 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 1 3 4
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3 4
typedef float float_t;
typedef double double_t;
# 49 "/usr/include/math.h" 2 3 4
# 83 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern double acos (double __x) throw (); extern double __acos (double __x) throw ();

extern double asin (double __x) throw (); extern double __asin (double __x) throw ();

extern double atan (double __x) throw (); extern double __atan (double __x) throw ();

extern double atan2 (double __y, double __x) throw (); extern double __atan2 (double __y, double __x) throw ();


 extern double cos (double __x) throw (); extern double __cos (double __x) throw ();

 extern double sin (double __x) throw (); extern double __sin (double __x) throw ();

extern double tan (double __x) throw (); extern double __tan (double __x) throw ();




extern double cosh (double __x) throw (); extern double __cosh (double __x) throw ();

extern double sinh (double __x) throw (); extern double __sinh (double __x) throw ();

extern double tanh (double __x) throw (); extern double __tanh (double __x) throw ();




 extern void sincos (double __x, double *__sinx, double *__cosx) throw (); extern void __sincos (double __x, double *__sinx, double *__cosx) throw ()
                                                        ;





extern double acosh (double __x) throw (); extern double __acosh (double __x) throw ();

extern double asinh (double __x) throw (); extern double __asinh (double __x) throw ();

extern double atanh (double __x) throw (); extern double __atanh (double __x) throw ();







 extern double exp (double __x) throw (); extern double __exp (double __x) throw ();


extern double frexp (double __x, int *__exponent) throw (); extern double __frexp (double __x, int *__exponent) throw ();


extern double ldexp (double __x, int __exponent) throw (); extern double __ldexp (double __x, int __exponent) throw ();


 extern double log (double __x) throw (); extern double __log (double __x) throw ();


extern double log10 (double __x) throw (); extern double __log10 (double __x) throw ();


extern double modf (double __x, double *__iptr) throw (); extern double __modf (double __x, double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern double exp10 (double __x) throw (); extern double __exp10 (double __x) throw ();

extern double pow10 (double __x) throw (); extern double __pow10 (double __x) throw ();





extern double expm1 (double __x) throw (); extern double __expm1 (double __x) throw ();


extern double log1p (double __x) throw (); extern double __log1p (double __x) throw ();


extern double logb (double __x) throw (); extern double __logb (double __x) throw ();






extern double exp2 (double __x) throw (); extern double __exp2 (double __x) throw ();


extern double log2 (double __x) throw (); extern double __log2 (double __x) throw ();








 extern double pow (double __x, double __y) throw (); extern double __pow (double __x, double __y) throw ();


extern double sqrt (double __x) throw (); extern double __sqrt (double __x) throw ();





extern double hypot (double __x, double __y) throw (); extern double __hypot (double __x, double __y) throw ();






extern double cbrt (double __x) throw (); extern double __cbrt (double __x) throw ();








extern double ceil (double __x) throw () __attribute__ ((__const__)); extern double __ceil (double __x) throw () __attribute__ ((__const__));


extern double fabs (double __x) throw () __attribute__ ((__const__)); extern double __fabs (double __x) throw () __attribute__ ((__const__));


extern double floor (double __x) throw () __attribute__ ((__const__)); extern double __floor (double __x) throw () __attribute__ ((__const__));


extern double fmod (double __x, double __y) throw (); extern double __fmod (double __x, double __y) throw ();




extern int __isinf (double __value) throw () __attribute__ ((__const__));


extern int __finite (double __value) throw () __attribute__ ((__const__));








extern int isinf (double __value) throw () __attribute__ ((__const__));



extern int finite (double __value) throw () __attribute__ ((__const__));


extern double drem (double __x, double __y) throw (); extern double __drem (double __x, double __y) throw ();



extern double significand (double __x) throw (); extern double __significand (double __x) throw ();





extern double copysign (double __x, double __y) throw () __attribute__ ((__const__)); extern double __copysign (double __x, double __y) throw () __attribute__ ((__const__));






extern double nan (const char *__tagb) throw () __attribute__ ((__const__)); extern double __nan (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnan (double __value) throw () __attribute__ ((__const__));






extern int isnan (double __value) throw () __attribute__ ((__const__));





extern double j0 (double) throw (); extern double __j0 (double) throw ();
extern double j1 (double) throw (); extern double __j1 (double) throw ();
extern double jn (int, double) throw (); extern double __jn (int, double) throw ();
extern double y0 (double) throw (); extern double __y0 (double) throw ();
extern double y1 (double) throw (); extern double __y1 (double) throw ();
extern double yn (int, double) throw (); extern double __yn (int, double) throw ();






extern double erf (double) throw (); extern double __erf (double) throw ();
extern double erfc (double) throw (); extern double __erfc (double) throw ();
extern double lgamma (double) throw (); extern double __lgamma (double) throw ();






extern double tgamma (double) throw (); extern double __tgamma (double) throw ();





extern double gamma (double) throw (); extern double __gamma (double) throw ();






extern double lgamma_r (double, int *__signgamp) throw (); extern double __lgamma_r (double, int *__signgamp) throw ();







extern double rint (double __x) throw (); extern double __rint (double __x) throw ();


extern double nextafter (double __x, double __y) throw () __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) throw () __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) throw () __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) throw () __attribute__ ((__const__));



extern double remainder (double __x, double __y) throw (); extern double __remainder (double __x, double __y) throw ();



extern double scalbn (double __x, int __n) throw (); extern double __scalbn (double __x, int __n) throw ();



extern int ilogb (double __x) throw (); extern int __ilogb (double __x) throw ();




extern double scalbln (double __x, long int __n) throw (); extern double __scalbln (double __x, long int __n) throw ();



extern double nearbyint (double __x) throw (); extern double __nearbyint (double __x) throw ();



extern double round (double __x) throw () __attribute__ ((__const__)); extern double __round (double __x) throw () __attribute__ ((__const__));



extern double trunc (double __x) throw () __attribute__ ((__const__)); extern double __trunc (double __x) throw () __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) throw (); extern double __remquo (double __x, double __y, int *__quo) throw ();






extern long int lrint (double __x) throw (); extern long int __lrint (double __x) throw ();
__extension__
extern long long int llrint (double __x) throw (); extern long long int __llrint (double __x) throw ();



extern long int lround (double __x) throw (); extern long int __lround (double __x) throw ();
__extension__
extern long long int llround (double __x) throw (); extern long long int __llround (double __x) throw ();



extern double fdim (double __x, double __y) throw (); extern double __fdim (double __x, double __y) throw ();


extern double fmax (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmax (double __x, double __y) throw () __attribute__ ((__const__));


extern double fmin (double __x, double __y) throw () __attribute__ ((__const__)); extern double __fmin (double __x, double __y) throw () __attribute__ ((__const__));



extern int __fpclassify (double __value) throw ()
     __attribute__ ((__const__));


extern int __signbit (double __value) throw ()
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) throw (); extern double __fma (double __x, double __y, double __z) throw ();








extern int __issignaling (double __value) throw ()
     __attribute__ ((__const__));






extern double scalb (double __x, double __n) throw (); extern double __scalb (double __x, double __n) throw ();
# 84 "/usr/include/math.h" 2 3 4
# 104 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern float acosf (float __x) throw (); extern float __acosf (float __x) throw ();

extern float asinf (float __x) throw (); extern float __asinf (float __x) throw ();

extern float atanf (float __x) throw (); extern float __atanf (float __x) throw ();

extern float atan2f (float __y, float __x) throw (); extern float __atan2f (float __y, float __x) throw ();


 extern float cosf (float __x) throw (); extern float __cosf (float __x) throw ();

 extern float sinf (float __x) throw (); extern float __sinf (float __x) throw ();

extern float tanf (float __x) throw (); extern float __tanf (float __x) throw ();




extern float coshf (float __x) throw (); extern float __coshf (float __x) throw ();

extern float sinhf (float __x) throw (); extern float __sinhf (float __x) throw ();

extern float tanhf (float __x) throw (); extern float __tanhf (float __x) throw ();




 extern void sincosf (float __x, float *__sinx, float *__cosx) throw (); extern void __sincosf (float __x, float *__sinx, float *__cosx) throw ()
                                                        ;





extern float acoshf (float __x) throw (); extern float __acoshf (float __x) throw ();

extern float asinhf (float __x) throw (); extern float __asinhf (float __x) throw ();

extern float atanhf (float __x) throw (); extern float __atanhf (float __x) throw ();







 extern float expf (float __x) throw (); extern float __expf (float __x) throw ();


extern float frexpf (float __x, int *__exponent) throw (); extern float __frexpf (float __x, int *__exponent) throw ();


extern float ldexpf (float __x, int __exponent) throw (); extern float __ldexpf (float __x, int __exponent) throw ();


 extern float logf (float __x) throw (); extern float __logf (float __x) throw ();


extern float log10f (float __x) throw (); extern float __log10f (float __x) throw ();


extern float modff (float __x, float *__iptr) throw (); extern float __modff (float __x, float *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern float exp10f (float __x) throw (); extern float __exp10f (float __x) throw ();

extern float pow10f (float __x) throw (); extern float __pow10f (float __x) throw ();





extern float expm1f (float __x) throw (); extern float __expm1f (float __x) throw ();


extern float log1pf (float __x) throw (); extern float __log1pf (float __x) throw ();


extern float logbf (float __x) throw (); extern float __logbf (float __x) throw ();






extern float exp2f (float __x) throw (); extern float __exp2f (float __x) throw ();


extern float log2f (float __x) throw (); extern float __log2f (float __x) throw ();








 extern float powf (float __x, float __y) throw (); extern float __powf (float __x, float __y) throw ();


extern float sqrtf (float __x) throw (); extern float __sqrtf (float __x) throw ();





extern float hypotf (float __x, float __y) throw (); extern float __hypotf (float __x, float __y) throw ();






extern float cbrtf (float __x) throw (); extern float __cbrtf (float __x) throw ();








extern float ceilf (float __x) throw () __attribute__ ((__const__)); extern float __ceilf (float __x) throw () __attribute__ ((__const__));


extern float fabsf (float __x) throw () __attribute__ ((__const__)); extern float __fabsf (float __x) throw () __attribute__ ((__const__));


extern float floorf (float __x) throw () __attribute__ ((__const__)); extern float __floorf (float __x) throw () __attribute__ ((__const__));


extern float fmodf (float __x, float __y) throw (); extern float __fmodf (float __x, float __y) throw ();




extern int __isinff (float __value) throw () __attribute__ ((__const__));


extern int __finitef (float __value) throw () __attribute__ ((__const__));








extern int isinff (float __value) throw () __attribute__ ((__const__));



extern int finitef (float __value) throw () __attribute__ ((__const__));


extern float dremf (float __x, float __y) throw (); extern float __dremf (float __x, float __y) throw ();



extern float significandf (float __x) throw (); extern float __significandf (float __x) throw ();





extern float copysignf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) throw () __attribute__ ((__const__));






extern float nanf (const char *__tagb) throw () __attribute__ ((__const__)); extern float __nanf (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanf (float __value) throw () __attribute__ ((__const__));






extern int isnanf (float __value) throw () __attribute__ ((__const__));





extern float j0f (float) throw (); extern float __j0f (float) throw ();
extern float j1f (float) throw (); extern float __j1f (float) throw ();
extern float jnf (int, float) throw (); extern float __jnf (int, float) throw ();
extern float y0f (float) throw (); extern float __y0f (float) throw ();
extern float y1f (float) throw (); extern float __y1f (float) throw ();
extern float ynf (int, float) throw (); extern float __ynf (int, float) throw ();






extern float erff (float) throw (); extern float __erff (float) throw ();
extern float erfcf (float) throw (); extern float __erfcf (float) throw ();
extern float lgammaf (float) throw (); extern float __lgammaf (float) throw ();






extern float tgammaf (float) throw (); extern float __tgammaf (float) throw ();





extern float gammaf (float) throw (); extern float __gammaf (float) throw ();






extern float lgammaf_r (float, int *__signgamp) throw (); extern float __lgammaf_r (float, int *__signgamp) throw ();







extern float rintf (float __x) throw (); extern float __rintf (float __x) throw ();


extern float nextafterf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) throw () __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) throw () __attribute__ ((__const__));



extern float remainderf (float __x, float __y) throw (); extern float __remainderf (float __x, float __y) throw ();



extern float scalbnf (float __x, int __n) throw (); extern float __scalbnf (float __x, int __n) throw ();



extern int ilogbf (float __x) throw (); extern int __ilogbf (float __x) throw ();




extern float scalblnf (float __x, long int __n) throw (); extern float __scalblnf (float __x, long int __n) throw ();



extern float nearbyintf (float __x) throw (); extern float __nearbyintf (float __x) throw ();



extern float roundf (float __x) throw () __attribute__ ((__const__)); extern float __roundf (float __x) throw () __attribute__ ((__const__));



extern float truncf (float __x) throw () __attribute__ ((__const__)); extern float __truncf (float __x) throw () __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) throw (); extern float __remquof (float __x, float __y, int *__quo) throw ();






extern long int lrintf (float __x) throw (); extern long int __lrintf (float __x) throw ();
__extension__
extern long long int llrintf (float __x) throw (); extern long long int __llrintf (float __x) throw ();



extern long int lroundf (float __x) throw (); extern long int __lroundf (float __x) throw ();
__extension__
extern long long int llroundf (float __x) throw (); extern long long int __llroundf (float __x) throw ();



extern float fdimf (float __x, float __y) throw (); extern float __fdimf (float __x, float __y) throw ();


extern float fmaxf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) throw () __attribute__ ((__const__));


extern float fminf (float __x, float __y) throw () __attribute__ ((__const__)); extern float __fminf (float __x, float __y) throw () __attribute__ ((__const__));



extern int __fpclassifyf (float __value) throw ()
     __attribute__ ((__const__));


extern int __signbitf (float __value) throw ()
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) throw (); extern float __fmaf (float __x, float __y, float __z) throw ();








extern int __issignalingf (float __value) throw ()
     __attribute__ ((__const__));






extern float scalbf (float __x, float __n) throw (); extern float __scalbf (float __x, float __n) throw ();
# 105 "/usr/include/math.h" 2 3 4
# 151 "/usr/include/math.h" 3 4
# 1 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 1 3 4
# 52 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3 4


extern long double acosl (long double __x) throw (); extern long double __acosl (long double __x) throw ();

extern long double asinl (long double __x) throw (); extern long double __asinl (long double __x) throw ();

extern long double atanl (long double __x) throw (); extern long double __atanl (long double __x) throw ();

extern long double atan2l (long double __y, long double __x) throw (); extern long double __atan2l (long double __y, long double __x) throw ();


 extern long double cosl (long double __x) throw (); extern long double __cosl (long double __x) throw ();

 extern long double sinl (long double __x) throw (); extern long double __sinl (long double __x) throw ();

extern long double tanl (long double __x) throw (); extern long double __tanl (long double __x) throw ();




extern long double coshl (long double __x) throw (); extern long double __coshl (long double __x) throw ();

extern long double sinhl (long double __x) throw (); extern long double __sinhl (long double __x) throw ();

extern long double tanhl (long double __x) throw (); extern long double __tanhl (long double __x) throw ();




 extern void sincosl (long double __x, long double *__sinx, long double *__cosx) throw (); extern void __sincosl (long double __x, long double *__sinx, long double *__cosx) throw ()
                                                        ;





extern long double acoshl (long double __x) throw (); extern long double __acoshl (long double __x) throw ();

extern long double asinhl (long double __x) throw (); extern long double __asinhl (long double __x) throw ();

extern long double atanhl (long double __x) throw (); extern long double __atanhl (long double __x) throw ();







 extern long double expl (long double __x) throw (); extern long double __expl (long double __x) throw ();


extern long double frexpl (long double __x, int *__exponent) throw (); extern long double __frexpl (long double __x, int *__exponent) throw ();


extern long double ldexpl (long double __x, int __exponent) throw (); extern long double __ldexpl (long double __x, int __exponent) throw ();


 extern long double logl (long double __x) throw (); extern long double __logl (long double __x) throw ();


extern long double log10l (long double __x) throw (); extern long double __log10l (long double __x) throw ();


extern long double modfl (long double __x, long double *__iptr) throw (); extern long double __modfl (long double __x, long double *__iptr) throw () __attribute__ ((__nonnull__ (2)));




extern long double exp10l (long double __x) throw (); extern long double __exp10l (long double __x) throw ();

extern long double pow10l (long double __x) throw (); extern long double __pow10l (long double __x) throw ();





extern long double expm1l (long double __x) throw (); extern long double __expm1l (long double __x) throw ();


extern long double log1pl (long double __x) throw (); extern long double __log1pl (long double __x) throw ();


extern long double logbl (long double __x) throw (); extern long double __logbl (long double __x) throw ();






extern long double exp2l (long double __x) throw (); extern long double __exp2l (long double __x) throw ();


extern long double log2l (long double __x) throw (); extern long double __log2l (long double __x) throw ();








 extern long double powl (long double __x, long double __y) throw (); extern long double __powl (long double __x, long double __y) throw ();


extern long double sqrtl (long double __x) throw (); extern long double __sqrtl (long double __x) throw ();





extern long double hypotl (long double __x, long double __y) throw (); extern long double __hypotl (long double __x, long double __y) throw ();






extern long double cbrtl (long double __x) throw (); extern long double __cbrtl (long double __x) throw ();








extern long double ceill (long double __x) throw () __attribute__ ((__const__)); extern long double __ceill (long double __x) throw () __attribute__ ((__const__));


extern long double fabsl (long double __x) throw () __attribute__ ((__const__)); extern long double __fabsl (long double __x) throw () __attribute__ ((__const__));


extern long double floorl (long double __x) throw () __attribute__ ((__const__)); extern long double __floorl (long double __x) throw () __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) throw (); extern long double __fmodl (long double __x, long double __y) throw ();




extern int __isinfl (long double __value) throw () __attribute__ ((__const__));


extern int __finitel (long double __value) throw () __attribute__ ((__const__));








extern int isinfl (long double __value) throw () __attribute__ ((__const__));



extern int finitel (long double __value) throw () __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) throw (); extern long double __dreml (long double __x, long double __y) throw ();



extern long double significandl (long double __x) throw (); extern long double __significandl (long double __x) throw ();





extern long double copysignl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) throw () __attribute__ ((__const__));






extern long double nanl (const char *__tagb) throw () __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) throw () __attribute__ ((__const__));





extern int __isnanl (long double __value) throw () __attribute__ ((__const__));






extern int isnanl (long double __value) throw () __attribute__ ((__const__));





extern long double j0l (long double) throw (); extern long double __j0l (long double) throw ();
extern long double j1l (long double) throw (); extern long double __j1l (long double) throw ();
extern long double jnl (int, long double) throw (); extern long double __jnl (int, long double) throw ();
extern long double y0l (long double) throw (); extern long double __y0l (long double) throw ();
extern long double y1l (long double) throw (); extern long double __y1l (long double) throw ();
extern long double ynl (int, long double) throw (); extern long double __ynl (int, long double) throw ();






extern long double erfl (long double) throw (); extern long double __erfl (long double) throw ();
extern long double erfcl (long double) throw (); extern long double __erfcl (long double) throw ();
extern long double lgammal (long double) throw (); extern long double __lgammal (long double) throw ();






extern long double tgammal (long double) throw (); extern long double __tgammal (long double) throw ();





extern long double gammal (long double) throw (); extern long double __gammal (long double) throw ();






extern long double lgammal_r (long double, int *__signgamp) throw (); extern long double __lgammal_r (long double, int *__signgamp) throw ();







extern long double rintl (long double __x) throw (); extern long double __rintl (long double __x) throw ();


extern long double nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) throw () __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) throw (); extern long double __remainderl (long double __x, long double __y) throw ();



extern long double scalbnl (long double __x, int __n) throw (); extern long double __scalbnl (long double __x, int __n) throw ();



extern int ilogbl (long double __x) throw (); extern int __ilogbl (long double __x) throw ();




extern long double scalblnl (long double __x, long int __n) throw (); extern long double __scalblnl (long double __x, long int __n) throw ();



extern long double nearbyintl (long double __x) throw (); extern long double __nearbyintl (long double __x) throw ();



extern long double roundl (long double __x) throw () __attribute__ ((__const__)); extern long double __roundl (long double __x) throw () __attribute__ ((__const__));



extern long double truncl (long double __x) throw () __attribute__ ((__const__)); extern long double __truncl (long double __x) throw () __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) throw (); extern long double __remquol (long double __x, long double __y, int *__quo) throw ();






extern long int lrintl (long double __x) throw (); extern long int __lrintl (long double __x) throw ();
__extension__
extern long long int llrintl (long double __x) throw (); extern long long int __llrintl (long double __x) throw ();



extern long int lroundl (long double __x) throw (); extern long int __lroundl (long double __x) throw ();
__extension__
extern long long int llroundl (long double __x) throw (); extern long long int __llroundl (long double __x) throw ();



extern long double fdiml (long double __x, long double __y) throw (); extern long double __fdiml (long double __x, long double __y) throw ();


extern long double fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) throw () __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) throw () __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) throw () __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) throw ()
     __attribute__ ((__const__));


extern int __signbitl (long double __value) throw ()
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) throw (); extern long double __fmal (long double __x, long double __y, long double __z) throw ();








extern int __issignalingl (long double __value) throw ()
     __attribute__ ((__const__));






extern long double scalbl (long double __x, long double __n) throw (); extern long double __scalbl (long double __x, long double __n) throw ();
# 152 "/usr/include/math.h" 2 3 4
# 168 "/usr/include/math.h" 3 4
extern int signgam;
# 209 "/usr/include/math.h" 3 4
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 347 "/usr/include/math.h" 3 4
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 370 "/usr/include/math.h" 3 4
struct __exception



  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };


extern int matherr (struct __exception *__exc) throw ();
# 534 "/usr/include/math.h" 3 4
}
# 45 "/usr/include/c++/5/cmath" 2 3
# 75 "/usr/include/c++/5/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



  inline double
  abs(double __x)
  { return __builtin_fabs(__x); }



  inline float
  abs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  abs(long double __x)
  { return __builtin_fabsl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    abs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::acos;


  inline float
  acos(float __x)
  { return __builtin_acosf(__x); }

  inline long double
  acos(long double __x)
  { return __builtin_acosl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    acos(_Tp __x)
    { return __builtin_acos(__x); }

  using ::asin;


  inline float
  asin(float __x)
  { return __builtin_asinf(__x); }

  inline long double
  asin(long double __x)
  { return __builtin_asinl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    asin(_Tp __x)
    { return __builtin_asin(__x); }

  using ::atan;


  inline float
  atan(float __x)
  { return __builtin_atanf(__x); }

  inline long double
  atan(long double __x)
  { return __builtin_atanl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    atan(_Tp __x)
    { return __builtin_atan(__x); }

  using ::atan2;


  inline float
  atan2(float __y, float __x)
  { return __builtin_atan2f(__y, __x); }

  inline long double
  atan2(long double __y, long double __x)
  { return __builtin_atan2l(__y, __x); }


  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    atan2(_Tp __y, _Up __x)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return atan2(__type(__y), __type(__x));
    }

  using ::ceil;


  inline float
  ceil(float __x)
  { return __builtin_ceilf(__x); }

  inline long double
  ceil(long double __x)
  { return __builtin_ceill(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ceil(_Tp __x)
    { return __builtin_ceil(__x); }

  using ::cos;


  inline float
  cos(float __x)
  { return __builtin_cosf(__x); }

  inline long double
  cos(long double __x)
  { return __builtin_cosl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cos(_Tp __x)
    { return __builtin_cos(__x); }

  using ::cosh;


  inline float
  cosh(float __x)
  { return __builtin_coshf(__x); }

  inline long double
  cosh(long double __x)
  { return __builtin_coshl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    cosh(_Tp __x)
    { return __builtin_cosh(__x); }

  using ::exp;


  inline float
  exp(float __x)
  { return __builtin_expf(__x); }

  inline long double
  exp(long double __x)
  { return __builtin_expl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    exp(_Tp __x)
    { return __builtin_exp(__x); }

  using ::fabs;


  inline float
  fabs(float __x)
  { return __builtin_fabsf(__x); }

  inline long double
  fabs(long double __x)
  { return __builtin_fabsl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    fabs(_Tp __x)
    { return __builtin_fabs(__x); }

  using ::floor;


  inline float
  floor(float __x)
  { return __builtin_floorf(__x); }

  inline long double
  floor(long double __x)
  { return __builtin_floorl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    floor(_Tp __x)
    { return __builtin_floor(__x); }

  using ::fmod;


  inline float
  fmod(float __x, float __y)
  { return __builtin_fmodf(__x, __y); }

  inline long double
  fmod(long double __x, long double __y)
  { return __builtin_fmodl(__x, __y); }


  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    fmod(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return fmod(__type(__x), __type(__y));
    }

  using ::frexp;


  inline float
  frexp(float __x, int* __exp)
  { return __builtin_frexpf(__x, __exp); }

  inline long double
  frexp(long double __x, int* __exp)
  { return __builtin_frexpl(__x, __exp); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    frexp(_Tp __x, int* __exp)
    { return __builtin_frexp(__x, __exp); }

  using ::ldexp;


  inline float
  ldexp(float __x, int __exp)
  { return __builtin_ldexpf(__x, __exp); }

  inline long double
  ldexp(long double __x, int __exp)
  { return __builtin_ldexpl(__x, __exp); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    ldexp(_Tp __x, int __exp)
    { return __builtin_ldexp(__x, __exp); }

  using ::log;


  inline float
  log(float __x)
  { return __builtin_logf(__x); }

  inline long double
  log(long double __x)
  { return __builtin_logl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log(_Tp __x)
    { return __builtin_log(__x); }

  using ::log10;


  inline float
  log10(float __x)
  { return __builtin_log10f(__x); }

  inline long double
  log10(long double __x)
  { return __builtin_log10l(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    log10(_Tp __x)
    { return __builtin_log10(__x); }

  using ::modf;


  inline float
  modf(float __x, float* __iptr)
  { return __builtin_modff(__x, __iptr); }

  inline long double
  modf(long double __x, long double* __iptr)
  { return __builtin_modfl(__x, __iptr); }


  using ::pow;


  inline float
  pow(float __x, float __y)
  { return __builtin_powf(__x, __y); }

  inline long double
  pow(long double __x, long double __y)
  { return __builtin_powl(__x, __y); }




  inline double
  pow(double __x, int __i)
  { return __builtin_powi(__x, __i); }

  inline float
  pow(float __x, int __n)
  { return __builtin_powif(__x, __n); }

  inline long double
  pow(long double __x, int __n)
  { return __builtin_powil(__x, __n); }



  template<typename _Tp, typename _Up>
    inline
    typename __gnu_cxx::__promote_2<_Tp, _Up>::__type
    pow(_Tp __x, _Up __y)
    {
      typedef typename __gnu_cxx::__promote_2<_Tp, _Up>::__type __type;
      return pow(__type(__x), __type(__y));
    }

  using ::sin;


  inline float
  sin(float __x)
  { return __builtin_sinf(__x); }

  inline long double
  sin(long double __x)
  { return __builtin_sinl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sin(_Tp __x)
    { return __builtin_sin(__x); }

  using ::sinh;


  inline float
  sinh(float __x)
  { return __builtin_sinhf(__x); }

  inline long double
  sinh(long double __x)
  { return __builtin_sinhl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sinh(_Tp __x)
    { return __builtin_sinh(__x); }

  using ::sqrt;


  inline float
  sqrt(float __x)
  { return __builtin_sqrtf(__x); }

  inline long double
  sqrt(long double __x)
  { return __builtin_sqrtl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    sqrt(_Tp __x)
    { return __builtin_sqrt(__x); }

  using ::tan;


  inline float
  tan(float __x)
  { return __builtin_tanf(__x); }

  inline long double
  tan(long double __x)
  { return __builtin_tanl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tan(_Tp __x)
    { return __builtin_tan(__x); }

  using ::tanh;


  inline float
  tanh(float __x)
  { return __builtin_tanhf(__x); }

  inline long double
  tanh(long double __x)
  { return __builtin_tanhl(__x); }


  template<typename _Tp>
    inline
    typename __gnu_cxx::__enable_if<__is_integer<_Tp>::__value,
                                    double>::__type
    tanh(_Tp __x)
    { return __builtin_tanh(__x); }


}
# 555 "/usr/include/c++/5/cmath" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 831 "/usr/include/c++/5/cmath" 3
  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    fpclassify(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_fpclassify(0, 1, 4,
      3, 2, __type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isfinite(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isfinite(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isinf(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isinf(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnan(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnan(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isnormal(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isnormal(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    signbit(_Tp __f)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return sizeof(__type) == sizeof(float)
 ? __builtin_signbitf(__type(__f))
 : sizeof(__type) == sizeof(double)
 ? __builtin_signbit(__type(__f))
 : __builtin_signbitl(__type(__f));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isgreaterequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isgreaterequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isless(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isless(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessequal(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessequal(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    islessgreater(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_islessgreater(__type(__f1), __type(__f2));
    }

  template<typename _Tp>
    inline typename __gnu_cxx::__enable_if<__is_arithmetic<_Tp>::__value,
        int>::__type
    isunordered(_Tp __f1, _Tp __f2)
    {
      typedef typename __gnu_cxx::__promote<_Tp>::__type __type;
      return __builtin_isunordered(__type(__f1), __type(__f2));
    }




}
# 35 "/home/junho/Downloads/root/include/TMathBase.h" 2


# 36 "/home/junho/Downloads/root/include/TMathBase.h"
namespace TMath {


   inline Short_t Abs(Short_t d);
   inline Int_t Abs(Int_t d);
   inline Long_t Abs(Long_t d);
   inline Long64_t Abs(Long64_t d);
   inline Float_t Abs(Float_t d);
   inline Double_t Abs(Double_t d);
   inline LongDouble_t Abs(LongDouble_t d);


   inline Bool_t Even(Long_t a);
   inline Bool_t Odd(Long_t a);


   inline Short_t Sign(Short_t a, Short_t b);
   inline Int_t Sign(Int_t a, Int_t b);
   inline Long_t Sign(Long_t a, Long_t b);
   inline Long64_t Sign(Long64_t a, Long64_t b);
   inline Float_t Sign(Float_t a, Float_t b);
   inline Double_t Sign(Double_t a, Double_t b);


   inline Short_t Min(Short_t a, Short_t b);
   inline UShort_t Min(UShort_t a, UShort_t b);
   inline Int_t Min(Int_t a, Int_t b);
   inline UInt_t Min(UInt_t a, UInt_t b);
   inline Long_t Min(Long_t a, Long_t b);
   inline ULong_t Min(ULong_t a, ULong_t b);
   inline Long64_t Min(Long64_t a, Long64_t b);
   inline ULong64_t Min(ULong64_t a, ULong64_t b);
   inline Float_t Min(Float_t a, Float_t b);
   inline Double_t Min(Double_t a, Double_t b);

   inline Short_t Max(Short_t a, Short_t b);
   inline UShort_t Max(UShort_t a, UShort_t b);
   inline Int_t Max(Int_t a, Int_t b);
   inline UInt_t Max(UInt_t a, UInt_t b);
   inline Long_t Max(Long_t a, Long_t b);
   inline ULong_t Max(ULong_t a, ULong_t b);
   inline Long64_t Max(Long64_t a, Long64_t b);
   inline ULong64_t Max(ULong64_t a, ULong64_t b);
   inline Float_t Max(Float_t a, Float_t b);
   inline Double_t Max(Double_t a, Double_t b);


   inline Short_t Range(Short_t lb, Short_t ub, Short_t x);
   inline Int_t Range(Int_t lb, Int_t ub, Int_t x);
   inline Long_t Range(Long_t lb, Long_t ub, Long_t x);
   inline ULong_t Range(ULong_t lb, ULong_t ub, ULong_t x);
   inline Double_t Range(Double_t lb, Double_t ub, Double_t x);


   Long_t NextPrime(Long_t x);
}




inline Bool_t TMath::Even(Long_t a)
   { return ! (a & 1); }

inline Bool_t TMath::Odd(Long_t a)
   { return (a & 1); }



inline Short_t TMath::Abs(Short_t d)
{ return (d >= 0) ? d : Short_t(-d); }

inline Int_t TMath::Abs(Int_t d)
{ return std::abs(d); }

inline Long_t TMath::Abs(Long_t d)
{ return std::labs(d); }

inline Long64_t TMath::Abs(Long64_t d)



{ return (d >= 0) ? d : -d; }


inline Float_t TMath::Abs(Float_t d)
{ return std::abs(d); }

inline Double_t TMath::Abs(Double_t d)
{ return std::abs(d); }

inline LongDouble_t TMath::Abs(LongDouble_t d)
{ return std::abs(d); }



inline Short_t TMath::Sign(Short_t a, Short_t b)
{ return (b >= 0) ? Abs(a) : Short_t(-Abs(a)); }

inline Int_t TMath::Sign(Int_t a, Int_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

inline Long_t TMath::Sign(Long_t a, Long_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

inline Long64_t TMath::Sign(Long64_t a, Long64_t b)
   { return (b >= 0) ? Abs(a) : -Abs(a); }

inline Float_t TMath::Sign(Float_t a, Float_t b)



  { return (b >= 0) ? Abs(a) : -Abs(a); }


inline Double_t TMath::Sign(Double_t a, Double_t b)



  { return (b >= 0) ? Abs(a) : -Abs(a); }




inline Short_t TMath::Min(Short_t a, Short_t b)
   { return a <= b ? a : b; }

inline UShort_t TMath::Min(UShort_t a, UShort_t b)
   { return a <= b ? a : b; }

inline Int_t TMath::Min(Int_t a, Int_t b)
   { return a <= b ? a : b; }

inline UInt_t TMath::Min(UInt_t a, UInt_t b)
   { return a <= b ? a : b; }

inline Long_t TMath::Min(Long_t a, Long_t b)
   { return a <= b ? a : b; }

inline ULong_t TMath::Min(ULong_t a, ULong_t b)
   { return a <= b ? a : b; }

inline Long64_t TMath::Min(Long64_t a, Long64_t b)
   { return a <= b ? a : b; }

inline ULong64_t TMath::Min(ULong64_t a, ULong64_t b)
   { return a <= b ? a : b; }

inline Float_t TMath::Min(Float_t a, Float_t b)
   { return a <= b ? a : b; }

inline Double_t TMath::Min(Double_t a, Double_t b)
   { return a <= b ? a : b; }



inline Short_t TMath::Max(Short_t a, Short_t b)
   { return a >= b ? a : b; }

inline UShort_t TMath::Max(UShort_t a, UShort_t b)
   { return a >= b ? a : b; }

inline Int_t TMath::Max(Int_t a, Int_t b)
   { return a >= b ? a : b; }

inline UInt_t TMath::Max(UInt_t a, UInt_t b)
   { return a >= b ? a : b; }

inline Long_t TMath::Max(Long_t a, Long_t b)
   { return a >= b ? a : b; }

inline ULong_t TMath::Max(ULong_t a, ULong_t b)
   { return a >= b ? a : b; }

inline Long64_t TMath::Max(Long64_t a, Long64_t b)
   { return a >= b ? a : b; }

inline ULong64_t TMath::Max(ULong64_t a, ULong64_t b)
   { return a >= b ? a : b; }

inline Float_t TMath::Max(Float_t a, Float_t b)
   { return a >= b ? a : b; }

inline Double_t TMath::Max(Double_t a, Double_t b)
   { return a >= b ? a : b; }



inline Short_t TMath::Range(Short_t lb, Short_t ub, Short_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline Int_t TMath::Range(Int_t lb, Int_t ub, Int_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline Long_t TMath::Range(Long_t lb, Long_t ub, Long_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline ULong_t TMath::Range(ULong_t lb, ULong_t ub, ULong_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }

inline Double_t TMath::Range(Double_t lb, Double_t ub, Double_t x)
   { return x < lb ? lb : (x > ub ? ub : x); }
# 37 "/home/junho/Downloads/root/include/TString.h" 2
# 46 "/home/junho/Downloads/root/include/TString.h"
class TRegexp;
class TPRegexp;
class TString;
class TSubString;
class TObjArray;
class TVirtualMutex;
class TBufferFile;

extern TVirtualMutex *gStringMutex;

TString operator+(const TString &s1, const TString &s2);
TString operator+(const TString &s, const char *cs);
TString operator+(const char *cs, const TString &s);
TString operator+(const TString &s, char c);
TString operator+(const TString &s, Long_t i);
TString operator+(const TString &s, ULong_t i);
TString operator+(const TString &s, Long64_t i);
TString operator+(const TString &s, ULong64_t i);
TString operator+(char c, const TString &s);
TString operator+(Long_t i, const TString &s);
TString operator+(ULong_t i, const TString &s);
TString operator+(Long64_t i, const TString &s);
TString operator+(ULong64_t i, const TString &s);
Bool_t operator==(const TString &s1, const TString &s2);
Bool_t operator==(const TString &s1, const char *s2);
Bool_t operator==(const TSubString &s1, const TSubString &s2);
Bool_t operator==(const TSubString &s1, const TString &s2);
Bool_t operator==(const TSubString &s1, const char *s2);
# 84 "/home/junho/Downloads/root/include/TString.h"
class TSubString {

friend class TStringLong;
friend class TString;

friend Bool_t operator==(const TSubString &s1, const TSubString &s2);
friend Bool_t operator==(const TSubString &s1, const TString &s2);
friend Bool_t operator==(const TSubString &s1, const char *s2);

private:
   TString &fStr;
   Ssiz_t fBegin;
   Ssiz_t fExtent;


   TSubString(const TString &s, Ssiz_t start, Ssiz_t len);

protected:
   void SubStringError(Ssiz_t, Ssiz_t, Ssiz_t) const;
   void AssertElement(Ssiz_t i) const;

public:
   TSubString(const TSubString &s)
     : fStr(s.fStr), fBegin(s.fBegin), fExtent(s.fExtent) { }

   TSubString &operator=(const char *s);
   TSubString &operator=(const TString &s);
   TSubString &operator=(const TSubString &s);
   char &operator()(Ssiz_t i);
   char &operator[](Ssiz_t i);
   char operator()(Ssiz_t i) const;
   char operator[](Ssiz_t i) const;

   const char *Data() const;
   Ssiz_t Length() const { return fExtent; }
   Ssiz_t Start() const { return fBegin; }
   TString& String() { return fStr; }
   void ToLower();
   void ToUpper();


   Bool_t IsNull() const { return fBegin == kNPOS; }
   int operator!() const { return fBegin == kNPOS; }
};







class TString {

friend class TStringLong;
friend class TSubString;
friend class TBufferFile;

friend TString operator+(const TString &s1, const TString &s2);
friend TString operator+(const TString &s, const char *cs);
friend TString operator+(const char *cs, const TString &s);
friend TString operator+(const TString &s, char c);
friend TString operator+(const TString &s, Long_t i);
friend TString operator+(const TString &s, ULong_t i);
friend TString operator+(const TString &s, Long64_t i);
friend TString operator+(const TString &s, ULong64_t i);
friend TString operator+(char c, const TString &s);
friend TString operator+(Long_t i, const TString &s);
friend TString operator+(ULong_t i, const TString &s);
friend TString operator+(Long64_t i, const TString &s);
friend TString operator+(ULong64_t i, const TString &s);
friend Bool_t operator==(const TString &s1, const TString &s2);
friend Bool_t operator==(const TString &s1, const char *s2);

private:

   enum { kShortMask = 0x01, kLongMask = 0x1 };




   struct LongStr_t
   {
      Ssiz_t fCap;
      Ssiz_t fSize;
      char *fData;
   };

   enum { kMinCap = (sizeof(LongStr_t) - 1)/sizeof(char) > 2 ?
                    (sizeof(LongStr_t) - 1)/sizeof(char) : 2 };

   struct ShortStr_t
   {
      unsigned char fSize;
      char fData[kMinCap];
   };

   union UStr_t { LongStr_t fL; ShortStr_t fS; };

   enum { kNwords = sizeof(UStr_t) / sizeof(Ssiz_t)};

   struct RawStr_t
   {
      Ssiz_t fWords[kNwords];
   };

   struct Rep_t
   {
      union
      {
         LongStr_t fLong;
         ShortStr_t fShort;
         RawStr_t fRaw;
      };
   };

protected:





   TString(const char *a1, Ssiz_t n1, const char *a2, Ssiz_t n2);
   void AssertElement(Ssiz_t nc) const;
   void Clobber(Ssiz_t nc);
   void InitChar(char c);

   enum { kAlignment = 16 };
   static Ssiz_t Align(Ssiz_t s) { return (s + (kAlignment-1)) & ~(kAlignment-1); }
   static Ssiz_t Recommend(Ssiz_t s) { return (s < kMinCap ? kMinCap : Align(s+1)) - 1; }
   static Ssiz_t AdjustCapacity(Ssiz_t oldCap, Ssiz_t newCap);

private:
   Bool_t IsLong() const { return Bool_t(fRep.fShort.fSize & kShortMask); }

   void SetShortSize(Ssiz_t s) { fRep.fShort.fSize = (unsigned char)(s << 1); }
   Ssiz_t GetShortSize() const { return fRep.fShort.fSize >> 1; }




   void SetLongSize(Ssiz_t s) { fRep.fLong.fSize = s; }
   Ssiz_t GetLongSize() const { return fRep.fLong.fSize; }
   void SetSize(Ssiz_t s) { IsLong() ? SetLongSize(s) : SetShortSize(s); }
   void SetLongCap(Ssiz_t s) { fRep.fLong.fCap = kLongMask | s; }
   Ssiz_t GetLongCap() const { return fRep.fLong.fCap & ~kLongMask; }
   void SetLongPointer(char *p) { fRep.fLong.fData = p; }
   char *GetLongPointer() { return fRep.fLong.fData; }
   const char *GetLongPointer() const { return fRep.fLong.fData; }
   char *GetShortPointer() { return fRep.fShort.fData; }
   const char *GetShortPointer() const { return fRep.fShort.fData; }
   char *GetPointer() { return IsLong() ? GetLongPointer() : GetShortPointer(); }
   const char *GetPointer() const { return IsLong() ? GetLongPointer() : GetShortPointer(); }

   static Ssiz_t MaxSize() { return kMaxInt - 1; }



   void UnLink() const { if (IsLong()) delete [] fRep.fLong.fData; }
   void Zero() {
      Ssiz_t (&a)[kNwords] = fRep.fRaw.fWords;
      for (UInt_t i = 0; i < kNwords; ++i)
         a[i] = 0;
   }
   char *Init(Ssiz_t capacity, Ssiz_t nchar);
   void Clone(Ssiz_t nc);
   void FormImp(const char *fmt, va_list ap);
   UInt_t HashCase() const;
   UInt_t HashFoldCase() const;

public:
   enum EStripType { kLeading = 0x1, kTrailing = 0x2, kBoth = 0x3 };
   enum ECaseCompare { kExact, kIgnoreCase };

   TString();
   explicit TString(Ssiz_t ic);
   TString(const TString &s);
   TString(const char *s);
   TString(const char *s, Ssiz_t n);
   TString(const std::string &s);
   TString(char c);
   TString(char c, Ssiz_t s);
   TString(const TSubString &sub);

   virtual ~TString();


   virtual void FillBuffer(char *&buffer) const;
   virtual void ReadBuffer(char *&buffer);
   virtual Int_t Sizeof() const;

   static TString *ReadString(TBuffer &b, const TClass *clReq);
   static void WriteString(TBuffer &b, const TString *a);

   friend TBuffer &operator<<(TBuffer &b, const TString *obj);


   Bool_t Gets(FILE *fp, Bool_t chop=kTRUE);
   void Puts(FILE *fp);


   operator const char*() const { return GetPointer(); }


   TString &operator=(char s);
   TString &operator=(const char *s);
   TString &operator=(const TString &s);
   TString &operator=(const std::string &s);
   TString &operator=(const TSubString &s);
   TString &operator+=(const char *s);
   TString &operator+=(const TString &s);
   TString &operator+=(char c);
   TString &operator+=(Short_t i);
   TString &operator+=(UShort_t i);
   TString &operator+=(Int_t i);
   TString &operator+=(UInt_t i);
   TString &operator+=(Long_t i);
   TString &operator+=(ULong_t i);
   TString &operator+=(Float_t f);
   TString &operator+=(Double_t f);
   TString &operator+=(Long64_t i);
   TString &operator+=(ULong64_t i);


   char &operator[](Ssiz_t i);
   char &operator()(Ssiz_t i);
   char operator[](Ssiz_t i) const;
   char operator()(Ssiz_t i) const;
   TSubString operator()(Ssiz_t start, Ssiz_t len) const;
   TSubString operator()(const TRegexp &re) const;
   TSubString operator()(const TRegexp &re, Ssiz_t start) const;
   TSubString operator()(TPRegexp &re) const;
   TSubString operator()(TPRegexp &re, Ssiz_t start) const;
   TSubString SubString(const char *pat, Ssiz_t start = 0,
                           ECaseCompare cmp = kExact) const;


   TString &Append(const char *cs);
   TString &Append(const char *cs, Ssiz_t n);
   TString &Append(const TString &s);
   TString &Append(const TString &s, Ssiz_t n);
   TString &Append(char c, Ssiz_t rep = 1);
   Int_t Atoi() const;
   Long64_t Atoll() const;
   Double_t Atof() const;
   Bool_t BeginsWith(const char *s, ECaseCompare cmp = kExact) const;
   Bool_t BeginsWith(const TString &pat, ECaseCompare cmp = kExact) const;
   Ssiz_t Capacity() const { return (IsLong() ? GetLongCap() : kMinCap) - 1; }
   Ssiz_t Capacity(Ssiz_t n);
   TString &Chop();
   void Clear();
   int CompareTo(const char *cs, ECaseCompare cmp = kExact) const;
   int CompareTo(const TString &st, ECaseCompare cmp = kExact) const;
   Bool_t Contains(const char *pat, ECaseCompare cmp = kExact) const;
   Bool_t Contains(const TString &pat, ECaseCompare cmp = kExact) const;
   Bool_t Contains(const TRegexp &pat) const;
   Bool_t Contains(TPRegexp &pat) const;
   Int_t CountChar(Int_t c) const;
   TString Copy() const;
   const char *Data() const { return GetPointer(); }
   Bool_t EndsWith(const char *pat, ECaseCompare cmp = kExact) const;
   Bool_t EqualTo(const char *cs, ECaseCompare cmp = kExact) const;
   Bool_t EqualTo(const TString &st, ECaseCompare cmp = kExact) const;
   Ssiz_t First(char c) const;
   Ssiz_t First(const char *cs) const;
   void Form(const char *fmt, ...)



   ;
   UInt_t Hash(ECaseCompare cmp = kExact) const;
   Ssiz_t Index(const char *pat, Ssiz_t i = 0,
                      ECaseCompare cmp = kExact) const;
   Ssiz_t Index(const TString &s, Ssiz_t i = 0,
                      ECaseCompare cmp = kExact) const;
   Ssiz_t Index(const char *pat, Ssiz_t patlen, Ssiz_t i,
                      ECaseCompare cmp) const;
   Ssiz_t Index(const TString &s, Ssiz_t patlen, Ssiz_t i,
                      ECaseCompare cmp) const;
   Ssiz_t Index(const TRegexp &pat, Ssiz_t i = 0) const;
   Ssiz_t Index(const TRegexp &pat, Ssiz_t *ext, Ssiz_t i = 0) const;
   Ssiz_t Index(TPRegexp &pat, Ssiz_t i = 0) const;
   Ssiz_t Index(TPRegexp &pat, Ssiz_t *ext, Ssiz_t i = 0) const;
   TString &Insert(Ssiz_t pos, const char *s);
   TString &Insert(Ssiz_t pos, const char *s, Ssiz_t extent);
   TString &Insert(Ssiz_t pos, const TString &s);
   TString &Insert(Ssiz_t pos, const TString &s, Ssiz_t extent);
   Bool_t IsAscii() const;
   Bool_t IsAlpha() const;
   Bool_t IsAlnum() const;
   Bool_t IsDigit() const;
   Bool_t IsFloat() const;
   Bool_t IsHex() const;
   Bool_t IsBin() const;
   Bool_t IsOct() const;
   Bool_t IsDec() const;
   Bool_t IsInBaseN(Int_t base) const;
   Bool_t IsNull() const { return Length() == 0; }
   Bool_t IsWhitespace() const { return (Length() == CountChar(' ')); }
   Ssiz_t Last(char c) const;
   Ssiz_t Length() const { return IsLong() ? GetLongSize() : GetShortSize(); }
   Bool_t MaybeRegexp() const;
   Bool_t MaybeWildcard() const;
   TString MD5() const;
   TString &Prepend(const char *cs);
   TString &Prepend(const char *cs, Ssiz_t n);
   TString &Prepend(const TString &s);
   TString &Prepend(const TString &s, Ssiz_t n);
   TString &Prepend(char c, Ssiz_t rep = 1);
   istream &ReadFile(istream &str);
   istream &ReadLine(istream &str,
                         Bool_t skipWhite = kTRUE);
   istream &ReadString(istream &str);
   istream &ReadToDelim(istream &str, char delim = '\n');
   istream &ReadToken(istream &str);
   TString &Remove(Ssiz_t pos);
   TString &Remove(Ssiz_t pos, Ssiz_t n);
   TString &Remove(EStripType s, char c);
   TString &Replace(Ssiz_t pos, Ssiz_t n, const char *s);
   TString &Replace(Ssiz_t pos, Ssiz_t n, const char *s, Ssiz_t ns);
   TString &Replace(Ssiz_t pos, Ssiz_t n, const TString &s);
   TString &Replace(Ssiz_t pos, Ssiz_t n1, const TString &s, Ssiz_t n2);
   TString &ReplaceAll(const TString &s1, const TString &s2);
   TString &ReplaceAll(const TString &s1, const char *s2);
   TString &ReplaceAll(const char *s1, const TString &s2);
   TString &ReplaceAll(const char *s1, const char *s2);
   TString &ReplaceAll(const char *s1, Ssiz_t ls1, const char *s2, Ssiz_t ls2);
   void Resize(Ssiz_t n);
   TSubString Strip(EStripType s = kTrailing, char c = ' ') const;
   void ToLower();
   void ToUpper();
   TObjArray *Tokenize(const TString &delim) const;
   Bool_t Tokenize(TString &tok, Ssiz_t &from, const char *delim = " ") const;


   static UInt_t Hash(const void *txt, Int_t ntxt);
   static Ssiz_t InitialCapacity(Ssiz_t ic = 15);
   static Ssiz_t MaxWaste(Ssiz_t mw = 15);
   static Ssiz_t ResizeIncrement(Ssiz_t ri = 16);
   static Ssiz_t GetInitialCapacity();
   static Ssiz_t GetResizeIncrement();
   static Ssiz_t GetMaxWaste();
   static TString Itoa ( Int_t value, Int_t base);
   static TString UItoa ( UInt_t value, Int_t base);
   static TString LLtoa ( Long64_t value, Int_t base);
   static TString ULLtoa (ULong64_t value, Int_t base);
   static TString BaseConvert(const TString& s_in, Int_t base_in, Int_t base_out);
   static TString Format(const char *fmt, ...)



   ;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TString::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TString::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TString.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 436; }
};


istream &operator>>(istream &str, TString &s);
ostream &operator<<(ostream &str, const TString &s);



TBuffer &operator>>(TBuffer &buf, TString *&sp);

TString ToLower(const TString &s);
TString ToUpper(const TString &s);

inline UInt_t Hash(const TString &s) { return s.Hash(); }
inline UInt_t Hash(const TString *s) { return s->Hash(); }
       UInt_t Hash(const char *s);

extern char *Form(const char *fmt, ...)



;
extern void Printf(const char *fmt, ...)



;
extern char *Strip(const char *str, char c = ' ');
extern char *StrDup(const char *str);
extern char *Compress(const char *str);
extern int EscChar(const char *src, char *dst, int dstlen, char *specchars,
                     char escchar);
extern int UnEscChar(const char *src, char *dst, int dstlen, char *specchars,
                       char escchar);
# 483 "/home/junho/Downloads/root/include/TString.h"
inline TString &TString::Append(const char *cs)
{ return Replace(Length(), 0, cs, cs ? strlen(cs) : 0); }

inline TString &TString::Append(const char *cs, Ssiz_t n)
{ return Replace(Length(), 0, cs, n); }

inline TString &TString::Append(const TString &s)
{ return Replace(Length(), 0, s.Data(), s.Length()); }

inline TString &TString::Append(const TString &s, Ssiz_t n)
{ return Replace(Length(), 0, s.Data(), TMath::Min(n, s.Length())); }

inline TString &TString::operator+=(const char *cs)
{ return Append(cs, cs ? strlen(cs) : 0); }

inline TString &TString::operator+=(const TString &s)
{ return Append(s.Data(), s.Length()); }

inline TString &TString::operator+=(char c)
{ return Append(c); }

inline TString &TString::operator+=(Long_t i)
{ char s[32]; sprintf(s, "%ld", i); return operator+=(s); }

inline TString &TString::operator+=(ULong_t i)
{ char s[32]; sprintf(s, "%lu", i); return operator+=(s); }

inline TString &TString::operator+=(Short_t i)
{ return operator+=((Long_t) i); }

inline TString &TString::operator+=(UShort_t i)
{ return operator+=((ULong_t) i); }

inline TString &TString::operator+=(Int_t i)
{ return operator+=((Long_t) i); }

inline TString &TString::operator+=(UInt_t i)
{ return operator+=((ULong_t) i); }

inline TString &TString::operator+=(Double_t f)
{
   char s[32];

   sprintf(s, "%.17g", f);
   return operator+=(s);
}

inline TString &TString::operator+=(Float_t f)
{ return operator+=((Double_t) f); }

inline TString &TString::operator+=(Long64_t l)
{
   char s[32];

   sprintf(s, "%lld", l);
   return operator+=(s);
}

inline TString &TString::operator+=(ULong64_t ul)
{
   char s[32];

   sprintf(s, "%llu", ul);
   return operator+=(s);
}

inline Bool_t TString::BeginsWith(const char *s, ECaseCompare cmp) const
{ return Index(s, s ? strlen(s) : (Ssiz_t)0, (Ssiz_t)0, cmp) == 0; }

inline Bool_t TString::BeginsWith(const TString &pat, ECaseCompare cmp) const
{ return Index(pat.Data(), pat.Length(), (Ssiz_t)0, cmp) == 0; }

inline Bool_t TString::Contains(const TString &pat, ECaseCompare cmp) const
{ return Index(pat.Data(), pat.Length(), (Ssiz_t)0, cmp) != kNPOS; }

inline Bool_t TString::Contains(const char *s, ECaseCompare cmp) const
{ return Index(s, s ? strlen(s) : 0, (Ssiz_t)0, cmp) != kNPOS; }

inline Bool_t TString::Contains(const TRegexp &pat) const
{ return Index(pat, (Ssiz_t)0) != kNPOS; }

inline Bool_t TString::Contains(TPRegexp &pat) const
{ return Index(pat, (Ssiz_t)0) != kNPOS; }

inline Bool_t TString::EqualTo(const char *cs, ECaseCompare cmp) const
{ return (CompareTo(cs, cmp) == 0) ? kTRUE : kFALSE; }

inline Bool_t TString::EqualTo(const TString &st, ECaseCompare cmp) const
{ return (CompareTo(st, cmp) == 0) ? kTRUE : kFALSE; }

inline Ssiz_t TString::Index(const char *s, Ssiz_t i, ECaseCompare cmp) const
{ return Index(s, s ? strlen(s) : 0, i, cmp); }

inline Ssiz_t TString::Index(const TString &s, Ssiz_t i, ECaseCompare cmp) const
{ return Index(s.Data(), s.Length(), i, cmp); }

inline Ssiz_t TString::Index(const TString &pat, Ssiz_t patlen, Ssiz_t i,
                             ECaseCompare cmp) const
{ return Index(pat.Data(), patlen, i, cmp); }

inline TString &TString::Insert(Ssiz_t pos, const char *cs)
{ return Replace(pos, 0, cs, cs ? strlen(cs) : 0); }

inline TString &TString::Insert(Ssiz_t pos, const char *cs, Ssiz_t n)
{ return Replace(pos, 0, cs, n); }

inline TString &TString::Insert(Ssiz_t pos, const TString &s)
{ return Replace(pos, 0, s.Data(), s.Length()); }

inline TString &TString::Insert(Ssiz_t pos, const TString &s, Ssiz_t n)
{ return Replace(pos, 0, s.Data(), TMath::Min(n, s.Length())); }

inline TString &TString::Prepend(const char *cs)
{ return Replace(0, 0, cs, cs ? strlen(cs) : 0); }

inline TString &TString::Prepend(const char *cs, Ssiz_t n)
{ return Replace(0, 0, cs, n); }

inline TString &TString::Prepend(const TString &s)
{ return Replace(0, 0, s.Data(), s.Length()); }

inline TString &TString::Prepend(const TString &s, Ssiz_t n)
{ return Replace(0, 0, s.Data(), TMath::Min(n, s.Length())); }

inline TString &TString::Remove(Ssiz_t pos)
{ return Replace(pos, TMath::Max(0, Length()-pos), 0, 0); }

inline TString &TString::Remove(Ssiz_t pos, Ssiz_t n)
{ return Replace(pos, n, 0, 0); }

inline TString &TString::Chop()
{ return Remove(TMath::Max(0, Length()-1)); }

inline TString &TString::Replace(Ssiz_t pos, Ssiz_t n, const char *cs)
{ return Replace(pos, n, cs, cs ? strlen(cs) : 0); }

inline TString &TString::Replace(Ssiz_t pos, Ssiz_t n, const TString& s)
{ return Replace(pos, n, s.Data(), s.Length()); }

inline TString &TString::Replace(Ssiz_t pos, Ssiz_t n1, const TString &s,
                                 Ssiz_t n2)
{ return Replace(pos, n1, s.Data(), TMath::Min(s.Length(), n2)); }

inline TString &TString::ReplaceAll(const TString &s1, const TString &s2)
{ return ReplaceAll(s1.Data(), s1.Length(), s2.Data(), s2.Length()) ; }

inline TString &TString::ReplaceAll(const TString &s1, const char *s2)
{ return ReplaceAll(s1.Data(), s1.Length(), s2, s2 ? strlen(s2) : 0); }

inline TString &TString::ReplaceAll(const char *s1, const TString &s2)
{ return ReplaceAll(s1, s1 ? strlen(s1) : 0, s2.Data(), s2.Length()); }

inline TString &TString::ReplaceAll(const char *s1,const char *s2)
{ return ReplaceAll(s1, s1 ? strlen(s1) : 0, s2, s2 ? strlen(s2) : 0); }

inline char &TString::operator()(Ssiz_t i)
{ return GetPointer()[i]; }

inline char TString::operator()(Ssiz_t i) const
{ return GetPointer()[i]; }

inline char &TString::operator[](Ssiz_t i)
{ AssertElement(i); return GetPointer()[i]; }

inline char TString::operator[](Ssiz_t i) const
{ AssertElement(i); return GetPointer()[i]; }

inline const char *TSubString::Data() const
{
# 666 "/home/junho/Downloads/root/include/TString.h"
   return fStr.Data() + fBegin;
}


inline char TSubString::operator[](Ssiz_t i) const
{ AssertElement(i); return fStr.GetPointer()[fBegin+i]; }

inline char TSubString::operator()(Ssiz_t i) const
{ return fStr.GetPointer()[fBegin+i]; }

inline TSubString &TSubString::operator=(const TSubString &s)
{ fStr = s.fStr; fBegin = s.fBegin; fExtent = s.fExtent; return *this; }



inline Bool_t operator==(const TString &s1, const TString &s2)
{
   return ((s1.Length() == s2.Length()) &&
            !memcmp(s1.Data(), s2.Data(), s1.Length()));
}

inline Bool_t operator!=(const TString &s1, const TString &s2)
{ return !(s1 == s2); }

inline Bool_t operator<(const TString &s1, const TString &s2)
{ return s1.CompareTo(s2) < 0; }

inline Bool_t operator>(const TString &s1, const TString &s2)
{ return s1.CompareTo(s2) > 0; }

inline Bool_t operator<=(const TString &s1, const TString &s2)
{ return s1.CompareTo(s2) <= 0; }

inline Bool_t operator>=(const TString &s1, const TString &s2)
{ return s1.CompareTo(s2) >= 0; }


inline Bool_t operator!=(const TString &s1, const char *s2)
{ return !(s1 == s2); }

inline Bool_t operator<(const TString &s1, const char *s2)
{ return s1.CompareTo(s2) < 0; }

inline Bool_t operator>(const TString &s1, const char *s2)
{ return s1.CompareTo(s2) > 0; }

inline Bool_t operator<=(const TString &s1, const char *s2)
{ return s1.CompareTo(s2) <= 0; }

inline Bool_t operator>=(const TString &s1, const char *s2)
{ return s1.CompareTo(s2) >= 0; }

inline Bool_t operator==(const char *s1, const TString &s2)
{ return (s2 == s1); }

inline Bool_t operator!=(const char *s1, const TString &s2)
{ return !(s2 == s1); }

inline Bool_t operator<(const char *s1, const TString &s2)
{ return s2.CompareTo(s1) > 0; }

inline Bool_t operator>(const char *s1, const TString &s2)
{ return s2.CompareTo(s1) < 0; }

inline Bool_t operator<=(const char *s1, const TString &s2)
{ return s2.CompareTo(s1) >= 0; }

inline Bool_t operator>=(const char *s1, const TString &s2)
{ return s2.CompareTo(s1) <= 0; }





inline Bool_t operator==(const TString &s1, const TSubString &s2)
{ return (s2 == s1); }

inline Bool_t operator==(const char *s1, const TSubString &s2)
{ return (s2 == s1); }

inline Bool_t operator!=(const TSubString &s1, const char *s2)
{ return !(s1 == s2); }

inline Bool_t operator!=(const TSubString &s1, const TString &s2)
{ return !(s1 == s2); }

inline Bool_t operator!=(const TSubString &s1, const TSubString &s2)
{ return !(s1 == s2); }

inline Bool_t operator!=(const TString &s1, const TSubString &s2)
{ return !(s2 == s1); }

inline Bool_t operator!=(const char *s1, const TSubString &s2)
{ return !(s2 == s1); }
# 30 "/home/junho/Downloads/root/include/TNamed.h" 2



class TNamed : public TObject {

protected:
   TString fName;
   TString fTitle;

public:
   TNamed(): fName(), fTitle() { }
   TNamed(const char *name, const char *title) : fName(name), fTitle(title) { }
   TNamed(const TString &name, const TString &title) : fName(name), fTitle(title) { }
   TNamed(const TNamed &named);
   TNamed& operator=(const TNamed& rhs);
   virtual ~TNamed() { }
   virtual void Clear(Option_t *option ="");
   virtual TObject *Clone(const char *newname="") const;
   virtual Int_t Compare(const TObject *obj) const;
   virtual void Copy(TObject &named) const;
   virtual void FillBuffer(char *&buffer);
   virtual const char *GetName() const { return fName; }
   virtual const char *GetTitle() const { return fTitle; }
   virtual ULong_t Hash() const { return fName.Hash(); }
   virtual Bool_t IsSortable() const { return kTRUE; }
   virtual void SetName(const char *name);
   virtual void SetNameTitle(const char *name, const char *title);
   virtual void SetTitle(const char *title="");
   virtual void ls(Option_t *option="") const;
   virtual void Print(Option_t *option="") const;
   virtual Int_t Sizeof() const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TNamed::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TNamed::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TNamed.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 62; }
};
# 16 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldParms.h" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfold.h" 1
# 16 "/home/junho/Downloads/roounflod_trunk/src/RooUnfold.h"
# 1 "/home/junho/Downloads/root/include/TVectorD.h" 1
# 21 "/home/junho/Downloads/root/include/TVectorD.h"
# 1 "/home/junho/Downloads/root/include/TVectorT.h" 1
# 24 "/home/junho/Downloads/root/include/TVectorT.h"
# 1 "/home/junho/Downloads/root/include/TMatrixT.h" 1
# 24 "/home/junho/Downloads/root/include/TMatrixT.h"
# 1 "/home/junho/Downloads/root/include/TMatrixTBase.h" 1
# 68 "/home/junho/Downloads/root/include/TMatrixTBase.h"
# 1 "/usr/include/c++/5/limits" 1 3
# 40 "/usr/include/c++/5/limits" 3
       
# 41 "/usr/include/c++/5/limits" 3
# 158 "/usr/include/c++/5/limits" 3

# 158 "/usr/include/c++/5/limits" 3
namespace std __attribute__ ((__visibility__ ("default")))
{







  enum float_round_style
  {
    round_indeterminate = -1,
    round_toward_zero = 0,
    round_to_nearest = 1,
    round_toward_infinity = 2,
    round_toward_neg_infinity = 3
  };







  enum float_denorm_style
  {

    denorm_indeterminate = -1,

    denorm_absent = 0,

    denorm_present = 1
  };
# 202 "/usr/include/c++/5/limits" 3
  struct __numeric_limits_base
  {


    static const bool is_specialized = false;




    static const int digits = 0;


    static const int digits10 = 0;
# 223 "/usr/include/c++/5/limits" 3
    static const bool is_signed = false;


    static const bool is_integer = false;




    static const bool is_exact = false;



    static const int radix = 0;



    static const int min_exponent = 0;



    static const int min_exponent10 = 0;




    static const int max_exponent = 0;



    static const int max_exponent10 = 0;


    static const bool has_infinity = false;



    static const bool has_quiet_NaN = false;



    static const bool has_signaling_NaN = false;


    static const float_denorm_style has_denorm = denorm_absent;



    static const bool has_denorm_loss = false;



    static const bool is_iec559 = false;




    static const bool is_bounded = false;
# 288 "/usr/include/c++/5/limits" 3
    static const bool is_modulo = false;


    static const bool traps = false;


    static const bool tinyness_before = false;




    static const float_round_style round_style =
          round_toward_zero;
  };
# 314 "/usr/include/c++/5/limits" 3
  template<typename _Tp>
    struct numeric_limits : public __numeric_limits_base
    {


      static _Tp
      min() throw() { return _Tp(); }


      static _Tp
      max() throw() { return _Tp(); }
# 335 "/usr/include/c++/5/limits" 3
      static _Tp
      epsilon() throw() { return _Tp(); }


      static _Tp
      round_error() throw() { return _Tp(); }


      static _Tp
      infinity() throw() { return _Tp(); }



      static _Tp
      quiet_NaN() throw() { return _Tp(); }



      static _Tp
      signaling_NaN() throw() { return _Tp(); }




      static _Tp
      denorm_min() throw() { return _Tp(); }
    };
# 381 "/usr/include/c++/5/limits" 3
  template<>
    struct numeric_limits<bool>
    {
      static const bool is_specialized = true;

      static bool
      min() throw() { return false; }

      static bool
      max() throw() { return true; }





      static const int digits = 1;
      static const int digits10 = 0;



      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static bool
      epsilon() throw() { return false; }

      static bool
      round_error() throw() { return false; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static bool
      infinity() throw() { return false; }

      static bool
      quiet_NaN() throw() { return false; }

      static bool
      signaling_NaN() throw() { return false; }

      static bool
      denorm_min() throw() { return false; }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;




      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<char>
    {
      static const bool is_specialized = true;

      static char
      min() throw() { return (((char)(-1) < 0) ? -(((char)(-1) < 0) ? (((((char)1 << ((sizeof(char) * 8 - ((char)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char)0) - 1 : (char)0); }

      static char
      max() throw() { return (((char)(-1) < 0) ? (((((char)1 << ((sizeof(char) * 8 - ((char)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(char)0); }






      static const int digits = (sizeof(char) * 8 - ((char)(-1) < 0));
      static const int digits10 = ((sizeof(char) * 8 - ((char)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = ((char)(-1) < 0);
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static char
      epsilon() throw() { return 0; }

      static char
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static
      char infinity() throw() { return char(); }

      static char
      quiet_NaN() throw() { return char(); }

      static char
      signaling_NaN() throw() { return char(); }

      static char
      denorm_min() throw() { return static_cast<char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = !is_signed;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<signed char>
    {
      static const bool is_specialized = true;

      static signed char
      min() throw() { return -0x7f - 1; }

      static signed char
      max() throw() { return 0x7f; }






      static const int digits = (sizeof(signed char) * 8 - ((signed char)(-1) < 0));
      static const int digits10
       = ((sizeof(signed char) * 8 - ((signed char)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static signed char
      epsilon() throw() { return 0; }

      static signed char
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static signed char
      infinity() throw() { return static_cast<signed char>(0); }

      static signed char
      quiet_NaN() throw() { return static_cast<signed char>(0); }

      static signed char
      signaling_NaN() throw()
      { return static_cast<signed char>(0); }

      static signed char
      denorm_min() throw()
      { return static_cast<signed char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned char>
    {
      static const bool is_specialized = true;

      static unsigned char
      min() throw() { return 0; }

      static unsigned char
      max() throw() { return 0x7f * 2U + 1; }






      static const int digits
       = (sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0));
      static const int digits10
       = ((sizeof(unsigned char) * 8 - ((unsigned char)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static unsigned char
      epsilon() throw() { return 0; }

      static unsigned char
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned char
      infinity() throw()
      { return static_cast<unsigned char>(0); }

      static unsigned char
      quiet_NaN() throw()
      { return static_cast<unsigned char>(0); }

      static unsigned char
      signaling_NaN() throw()
      { return static_cast<unsigned char>(0); }

      static unsigned char
      denorm_min() throw()
      { return static_cast<unsigned char>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<wchar_t>
    {
      static const bool is_specialized = true;

      static wchar_t
      min() throw() { return (((wchar_t)(-1) < 0) ? -(((wchar_t)(-1) < 0) ? (((((wchar_t)1 << ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(wchar_t)0) - 1 : (wchar_t)0); }

      static wchar_t
      max() throw() { return (((wchar_t)(-1) < 0) ? (((((wchar_t)1 << ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(wchar_t)0); }






      static const int digits = (sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0));
      static const int digits10
       = ((sizeof(wchar_t) * 8 - ((wchar_t)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = ((wchar_t)(-1) < 0);
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static wchar_t
      epsilon() throw() { return 0; }

      static wchar_t
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static wchar_t
      infinity() throw() { return wchar_t(); }

      static wchar_t
      quiet_NaN() throw() { return wchar_t(); }

      static wchar_t
      signaling_NaN() throw() { return wchar_t(); }

      static wchar_t
      denorm_min() throw() { return wchar_t(); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = !is_signed;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };
# 852 "/usr/include/c++/5/limits" 3
  template<>
    struct numeric_limits<short>
    {
      static const bool is_specialized = true;

      static short
      min() throw() { return -0x7fff - 1; }

      static short
      max() throw() { return 0x7fff; }






      static const int digits = (sizeof(short) * 8 - ((short)(-1) < 0));
      static const int digits10 = ((sizeof(short) * 8 - ((short)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static short
      epsilon() throw() { return 0; }

      static short
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static short
      infinity() throw() { return short(); }

      static short
      quiet_NaN() throw() { return short(); }

      static short
      signaling_NaN() throw() { return short(); }

      static short
      denorm_min() throw() { return short(); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned short>
    {
      static const bool is_specialized = true;

      static unsigned short
      min() throw() { return 0; }

      static unsigned short
      max() throw() { return 0x7fff * 2U + 1; }






      static const int digits
       = (sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0));
      static const int digits10
       = ((sizeof(unsigned short) * 8 - ((unsigned short)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static unsigned short
      epsilon() throw() { return 0; }

      static unsigned short
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned short
      infinity() throw()
      { return static_cast<unsigned short>(0); }

      static unsigned short
      quiet_NaN() throw()
      { return static_cast<unsigned short>(0); }

      static unsigned short
      signaling_NaN() throw()
      { return static_cast<unsigned short>(0); }

      static unsigned short
      denorm_min() throw()
      { return static_cast<unsigned short>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<int>
    {
      static const bool is_specialized = true;

      static int
      min() throw() { return -0x7fffffff - 1; }

      static int
      max() throw() { return 0x7fffffff; }






      static const int digits = (sizeof(int) * 8 - ((int)(-1) < 0));
      static const int digits10 = ((sizeof(int) * 8 - ((int)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static int
      epsilon() throw() { return 0; }

      static int
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static int
      infinity() throw() { return static_cast<int>(0); }

      static int
      quiet_NaN() throw() { return static_cast<int>(0); }

      static int
      signaling_NaN() throw() { return static_cast<int>(0); }

      static int
      denorm_min() throw() { return static_cast<int>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned int>
    {
      static const bool is_specialized = true;

      static unsigned int
      min() throw() { return 0; }

      static unsigned int
      max() throw() { return 0x7fffffff * 2U + 1; }






      static const int digits
       = (sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0));
      static const int digits10
       = ((sizeof(unsigned int) * 8 - ((unsigned int)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static unsigned int
      epsilon() throw() { return 0; }

      static unsigned int
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned int
      infinity() throw() { return static_cast<unsigned int>(0); }

      static unsigned int
      quiet_NaN() throw()
      { return static_cast<unsigned int>(0); }

      static unsigned int
      signaling_NaN() throw()
      { return static_cast<unsigned int>(0); }

      static unsigned int
      denorm_min() throw()
      { return static_cast<unsigned int>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<long>
    {
      static const bool is_specialized = true;

      static long
      min() throw() { return -0x7fffffffffffffffL - 1; }

      static long
      max() throw() { return 0x7fffffffffffffffL; }






      static const int digits = (sizeof(long) * 8 - ((long)(-1) < 0));
      static const int digits10 = ((sizeof(long) * 8 - ((long)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static long
      epsilon() throw() { return 0; }

      static long
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static long
      infinity() throw() { return static_cast<long>(0); }

      static long
      quiet_NaN() throw() { return static_cast<long>(0); }

      static long
      signaling_NaN() throw() { return static_cast<long>(0); }

      static long
      denorm_min() throw() { return static_cast<long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned long>
    {
      static const bool is_specialized = true;

      static unsigned long
      min() throw() { return 0; }

      static unsigned long
      max() throw() { return 0x7fffffffffffffffL * 2UL + 1; }






      static const int digits
       = (sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0));
      static const int digits10
       = ((sizeof(unsigned long) * 8 - ((unsigned long)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static unsigned long
      epsilon() throw() { return 0; }

      static unsigned long
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned long
      infinity() throw()
      { return static_cast<unsigned long>(0); }

      static unsigned long
      quiet_NaN() throw()
      { return static_cast<unsigned long>(0); }

      static unsigned long
      signaling_NaN() throw()
      { return static_cast<unsigned long>(0); }

      static unsigned long
      denorm_min() throw()
      { return static_cast<unsigned long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<long long>
    {
      static const bool is_specialized = true;

      static long long
      min() throw() { return -0x7fffffffffffffffLL - 1; }

      static long long
      max() throw() { return 0x7fffffffffffffffLL; }






      static const int digits
       = (sizeof(long long) * 8 - ((long long)(-1) < 0));
      static const int digits10
       = ((sizeof(long long) * 8 - ((long long)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = true;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static long long
      epsilon() throw() { return 0; }

      static long long
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static long long
      infinity() throw() { return static_cast<long long>(0); }

      static long long
      quiet_NaN() throw() { return static_cast<long long>(0); }

      static long long
      signaling_NaN() throw()
      { return static_cast<long long>(0); }

      static long long
      denorm_min() throw() { return static_cast<long long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };


  template<>
    struct numeric_limits<unsigned long long>
    {
      static const bool is_specialized = true;

      static unsigned long long
      min() throw() { return 0; }

      static unsigned long long
      max() throw() { return 0x7fffffffffffffffLL * 2ULL + 1; }






      static const int digits
       = (sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0));
      static const int digits10
       = ((sizeof(unsigned long long) * 8 - ((unsigned long long)(-1) < 0)) * 643L / 2136);



      static const bool is_signed = false;
      static const bool is_integer = true;
      static const bool is_exact = true;
      static const int radix = 2;

      static unsigned long long
      epsilon() throw() { return 0; }

      static unsigned long long
      round_error() throw() { return 0; }

      static const int min_exponent = 0;
      static const int min_exponent10 = 0;
      static const int max_exponent = 0;
      static const int max_exponent10 = 0;

      static const bool has_infinity = false;
      static const bool has_quiet_NaN = false;
      static const bool has_signaling_NaN = false;
      static const float_denorm_style has_denorm
       = denorm_absent;
      static const bool has_denorm_loss = false;

      static unsigned long long
      infinity() throw()
      { return static_cast<unsigned long long>(0); }

      static unsigned long long
      quiet_NaN() throw()
      { return static_cast<unsigned long long>(0); }

      static unsigned long long
      signaling_NaN() throw()
      { return static_cast<unsigned long long>(0); }

      static unsigned long long
      denorm_min() throw()
      { return static_cast<unsigned long long>(0); }

      static const bool is_iec559 = false;
      static const bool is_bounded = true;
      static const bool is_modulo = true;

      static const bool traps = true;
      static const bool tinyness_before = false;
      static const float_round_style round_style
       = round_toward_zero;
    };
# 1569 "/usr/include/c++/5/limits" 3
  template<> struct numeric_limits<__int128> { static const bool is_specialized = true; static __int128 min() throw() { return (((__int128)(-1) < 0) ? -(((__int128)(-1) < 0) ? (((((__int128)1 << ((128 - ((__int128)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(__int128)0) - 1 : (__int128)0); } static __int128 max() throw() { return (((__int128)(-1) < 0) ? (((((__int128)1 << ((128 - ((__int128)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(__int128)0); } static const int digits = 128 - 1; static const int digits10 = (128 - 1) * 643L / 2136; static const bool is_signed = true; static const bool is_integer = true; static const bool is_exact = true; static const int radix = 2; static __int128 epsilon() throw() { return 0; } static __int128 round_error() throw() { return 0; } static const int min_exponent = 0; static const int min_exponent10 = 0; static const int max_exponent = 0; static const int max_exponent10 = 0; static const bool has_infinity = false; static const bool has_quiet_NaN = false; static const bool has_signaling_NaN = false; static const float_denorm_style has_denorm = denorm_absent; static const bool has_denorm_loss = false; static __int128 infinity() throw() { return static_cast<__int128>(0); } static __int128 quiet_NaN() throw() { return static_cast<__int128>(0); } static __int128 signaling_NaN() throw() { return static_cast<__int128>(0); } static __int128 denorm_min() throw() { return static_cast<__int128>(0); } static const bool is_iec559 = false; static const bool is_bounded = true; static const bool is_modulo = false; static const bool traps = true; static const bool tinyness_before = false; static const float_round_style round_style = round_toward_zero; }; template<> struct numeric_limits<unsigned __int128> { static const bool is_specialized = true; static unsigned __int128 min() throw() { return 0; } static unsigned __int128 max() throw() { return (((unsigned __int128)(-1) < 0) ? (((((unsigned __int128)1 << ((128 - ((unsigned __int128)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(unsigned __int128)0); } static const int digits = 128; static const int digits10 = 128 * 643L / 2136; static const bool is_signed = false; static const bool is_integer = true; static const bool is_exact = true; static const int radix = 2; static unsigned __int128 epsilon() throw() { return 0; } static unsigned __int128 round_error() throw() { return 0; } static const int min_exponent = 0; static const int min_exponent10 = 0; static const int max_exponent = 0; static const int max_exponent10 = 0; static const bool has_infinity = false; static const bool has_quiet_NaN = false; static const bool has_signaling_NaN = false; static const float_denorm_style has_denorm = denorm_absent; static const bool has_denorm_loss = false; static unsigned __int128 infinity() throw() { return static_cast<unsigned __int128>(0); } static unsigned __int128 quiet_NaN() throw() { return static_cast<unsigned __int128>(0); } static unsigned __int128 signaling_NaN() throw() { return static_cast<unsigned __int128>(0); } static unsigned __int128 denorm_min() throw() { return static_cast<unsigned __int128>(0); } static const bool is_iec559 = false; static const bool is_bounded = true; static const bool is_modulo = true; static const bool traps = true; static const bool tinyness_before = false; static const float_round_style round_style = round_toward_zero; };
# 1592 "/usr/include/c++/5/limits" 3
  template<>
    struct numeric_limits<float>
    {
      static const bool is_specialized = true;

      static float
      min() throw() { return 1.17549435082228750797e-38F; }

      static float
      max() throw() { return 3.40282346638528859812e+38F; }






      static const int digits = 24;
      static const int digits10 = 6;




      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;

      static float
      epsilon() throw() { return 1.19209289550781250000e-7F; }

      static float
      round_error() throw() { return 0.5F; }

      static const int min_exponent = (-125);
      static const int min_exponent10 = (-37);
      static const int max_exponent = 128;
      static const int max_exponent10 = 38;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static const bool has_denorm_loss
       = false;

      static float
      infinity() throw() { return __builtin_huge_valf(); }

      static float
      quiet_NaN() throw() { return __builtin_nanf(""); }

      static float
      signaling_NaN() throw() { return __builtin_nansf(""); }

      static float
      denorm_min() throw() { return 1.40129846432481707092e-45F; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before
       = false;
      static const float_round_style round_style
       = round_to_nearest;
    };






  template<>
    struct numeric_limits<double>
    {
      static const bool is_specialized = true;

      static double
      min() throw() { return double(2.22507385850720138309e-308L); }

      static double
      max() throw() { return double(1.79769313486231570815e+308L); }






      static const int digits = 53;
      static const int digits10 = 15;




      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;

      static double
      epsilon() throw() { return double(2.22044604925031308085e-16L); }

      static double
      round_error() throw() { return 0.5; }

      static const int min_exponent = (-1021);
      static const int min_exponent10 = (-307);
      static const int max_exponent = 1024;
      static const int max_exponent10 = 308;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static const bool has_denorm_loss
        = false;

      static double
      infinity() throw() { return __builtin_huge_val(); }

      static double
      quiet_NaN() throw() { return __builtin_nan(""); }

      static double
      signaling_NaN() throw() { return __builtin_nans(""); }

      static double
      denorm_min() throw() { return double(4.94065645841246544177e-324L); }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before
       = false;
      static const float_round_style round_style
       = round_to_nearest;
    };






  template<>
    struct numeric_limits<long double>
    {
      static const bool is_specialized = true;

      static long double
      min() throw() { return 3.36210314311209350626e-4932L; }

      static long double
      max() throw() { return 1.18973149535723176502e+4932L; }






      static const int digits = 64;
      static const int digits10 = 18;




      static const bool is_signed = true;
      static const bool is_integer = false;
      static const bool is_exact = false;
      static const int radix = 2;

      static long double
      epsilon() throw() { return 1.08420217248550443401e-19L; }

      static long double
      round_error() throw() { return 0.5L; }

      static const int min_exponent = (-16381);
      static const int min_exponent10 = (-4931);
      static const int max_exponent = 16384;
      static const int max_exponent10 = 4932;

      static const bool has_infinity = 1;
      static const bool has_quiet_NaN = 1;
      static const bool has_signaling_NaN = has_quiet_NaN;
      static const float_denorm_style has_denorm
 = bool(1) ? denorm_present : denorm_absent;
      static const bool has_denorm_loss
 = false;

      static long double
      infinity() throw() { return __builtin_huge_vall(); }

      static long double
      quiet_NaN() throw() { return __builtin_nanl(""); }

      static long double
      signaling_NaN() throw() { return __builtin_nansl(""); }

      static long double
      denorm_min() throw() { return 3.64519953188247460253e-4951L; }

      static const bool is_iec559
 = has_infinity && has_quiet_NaN && has_denorm == denorm_present;
      static const bool is_bounded = true;
      static const bool is_modulo = false;

      static const bool traps = false;
      static const bool tinyness_before =
      false;
      static const float_round_style round_style =
            round_to_nearest;
    };






}
# 69 "/home/junho/Downloads/root/include/TMatrixTBase.h" 2





# 1 "/home/junho/Downloads/root/include/TMatrixFBasefwd.h" 1
# 27 "/home/junho/Downloads/root/include/TMatrixFBasefwd.h"

# 27 "/home/junho/Downloads/root/include/TMatrixFBasefwd.h"
template<class Element> class TMatrixTBase;
typedef TMatrixTBase<Float_t> TMatrixFBase;
# 75 "/home/junho/Downloads/root/include/TMatrixTBase.h" 2


# 1 "/home/junho/Downloads/root/include/TMatrixDBasefwd.h" 1
# 27 "/home/junho/Downloads/root/include/TMatrixDBasefwd.h"
template<class Element> class TMatrixTBase;
typedef TMatrixTBase<Double_t> TMatrixDBase;
# 78 "/home/junho/Downloads/root/include/TMatrixTBase.h" 2


# 1 "/home/junho/Downloads/root/include/TVectorFfwd.h" 1
# 24 "/home/junho/Downloads/root/include/TVectorFfwd.h"
template<class Element> class TVectorT;
typedef TVectorT<Float_t> TVectorF;
# 81 "/home/junho/Downloads/root/include/TMatrixTBase.h" 2


# 1 "/home/junho/Downloads/root/include/TVectorDfwd.h" 1
# 24 "/home/junho/Downloads/root/include/TVectorDfwd.h"
template<class Element> class TVectorT;
typedef TVectorT<Double_t> TVectorD;
# 84 "/home/junho/Downloads/root/include/TMatrixTBase.h" 2


# 1 "/home/junho/Downloads/root/include/TError.h" 1
# 35 "/home/junho/Downloads/root/include/TError.h"
class TVirtualMutex;

const Int_t kUnset = -1;
const Int_t kPrint = 0;
const Int_t kInfo = 1000;
const Int_t kWarning = 2000;
const Int_t kError = 3000;
const Int_t kBreak = 4000;
const Int_t kSysError = 5000;
const Int_t kFatal = 6000;

extern TVirtualMutex *gErrorMutex;

typedef void (*ErrorHandlerFunc_t)(int level, Bool_t abort, const char *location,
              const char *msg);

extern "C" void ErrorHandler(int level, const char *location, const char *fmt,
                             va_list va);

extern void DefaultErrorHandler(int level, Bool_t abort, const char *location,
                                const char *msg);

extern ErrorHandlerFunc_t SetErrorHandler(ErrorHandlerFunc_t newhandler);
extern ErrorHandlerFunc_t GetErrorHandler();

extern void Info(const char *location, const char *msgfmt, ...)



;
extern void Warning(const char *location, const char *msgfmt, ...)



;
extern void Error(const char *location, const char *msgfmt, ...)



;
extern void Break(const char *location, const char *msgfmt, ...)



;
extern void SysError(const char *location, const char *msgfmt, ...)



;
extern void Fatal(const char *location, const char *msgfmt, ...)



;

extern void AbstractMethod(const char *method);
extern void MayNotUse(const char *method);
extern void Obsolete(const char *function, const char *asOfVers, const char *removedFromVers);

extern const char *kAssertMsg;
extern const char *kCheckMsg;
# 107 "/home/junho/Downloads/root/include/TError.h"
extern Int_t gErrorIgnoreLevel;
extern Int_t gErrorAbortLevel;
extern Bool_t gPrintViaErrorHandler;
# 87 "/home/junho/Downloads/root/include/TMatrixTBase.h" 2


template<class Element> class TVectorT;
template<class Element> class TElementActionT;
template<class Element> class TElementPosActionT;

extern Int_t gMatrixCheck;

template<class Element> class TMatrixTBase : public TObject {

private:
   Element *GetElements();

protected:
   Int_t fNrows;
   Int_t fNcols;
   Int_t fRowLwb;
   Int_t fColLwb;
   Int_t fNelems;
   Int_t fNrowIndex;

   Element fTol;


   Bool_t fIsOwner;

   static void DoubleLexSort (Int_t n,Int_t *first,Int_t *second,Element *data);
   static void IndexedLexSort(Int_t n,Int_t *first,Int_t swapFirst,
                               Int_t *second,Int_t swapSecond,Int_t *index);

   enum {kSizeMax = 25};
   enum {kWorkMax = 100};

   enum EMatrixStatusBits {
     kStatus = (1ULL << (14))
   };

public:

   TMatrixTBase():
     fNrows(0), fNcols(0), fRowLwb(0), fColLwb(0), fNelems(0), fNrowIndex(0),
     fTol(0), fIsOwner(kTRUE) { }

   virtual ~TMatrixTBase() {}

           inline Int_t GetRowLwb () const { return fRowLwb; }
           inline Int_t GetRowUpb () const { return fNrows+fRowLwb-1; }
           inline Int_t GetNrows () const { return fNrows; }
           inline Int_t GetColLwb () const { return fColLwb; }
           inline Int_t GetColUpb () const { return fNcols+fColLwb-1; }
           inline Int_t GetNcols () const { return fNcols; }
           inline Int_t GetNoElements () const { return fNelems; }
           inline Element GetTol () const { return fTol; }

   virtual const Element *GetMatrixArray () const = 0;
   virtual Element *GetMatrixArray () = 0;
   virtual const Int_t *GetRowIndexArray() const = 0;
   virtual Int_t *GetRowIndexArray() = 0;
   virtual const Int_t *GetColIndexArray() const = 0;
   virtual Int_t *GetColIndexArray() = 0;

   virtual TMatrixTBase<Element> &SetRowIndexArray(Int_t *data) = 0;
   virtual TMatrixTBase<Element> &SetColIndexArray(Int_t *data) = 0;
   virtual TMatrixTBase<Element> &SetMatrixArray (const Element *data,Option_t *option="");
           inline Element SetTol (Element tol);

   virtual void Clear (Option_t *option="") = 0;

   inline void Invalidate () { SetBit(kStatus); }
   inline void MakeValid () { ResetBit(kStatus); }
   inline Bool_t IsValid () const { return !TestBit(kStatus); }
   inline Bool_t IsOwner () const { return fIsOwner; }
   virtual Bool_t IsSymmetric() const;

   virtual TMatrixTBase<Element> &GetSub(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,
                                         TMatrixTBase<Element> &target,Option_t *option="S") const = 0;
   virtual TMatrixTBase<Element> &SetSub(Int_t row_lwb,Int_t col_lwb,const TMatrixTBase<Element> &source) = 0;

   virtual void GetMatrix2Array(Element *data,Option_t *option="") const;
   virtual TMatrixTBase<Element> &InsertRow (Int_t row,Int_t col,const Element *v,Int_t n = -1);
   virtual void ExtractRow (Int_t row,Int_t col, Element *v,Int_t n = -1) const;

   virtual TMatrixTBase<Element> &Shift (Int_t row_shift,Int_t col_shift);
   virtual TMatrixTBase<Element> &ResizeTo (Int_t nrows,Int_t ncols,Int_t nr_nonzeros=-1) = 0;
   virtual TMatrixTBase<Element> &ResizeTo (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Int_t nr_nonzeros=-1) = 0;

   virtual Double_t Determinant() const { AbstractMethod("Determinant()"); return 0.; }
   virtual void Determinant(Double_t &d1,Double_t &d2) const { AbstractMethod("Determinant()"); d1 = 0.; d2 = 0.; }

   virtual TMatrixTBase<Element> &Zero ();
   virtual TMatrixTBase<Element> &Abs ();
   virtual TMatrixTBase<Element> &Sqr ();
   virtual TMatrixTBase<Element> &Sqrt ();
   virtual TMatrixTBase<Element> &UnitMatrix ();

   virtual TMatrixTBase<Element> &NormByDiag (const TVectorT<Element> &v,Option_t *option="D");

   virtual Element RowNorm () const;
   virtual Element ColNorm () const;
   virtual Element E2Norm () const;
   inline Element NormInf () const { return RowNorm(); }
   inline Element Norm1 () const { return ColNorm(); }
   virtual Int_t NonZeros () const;
   virtual Element Sum () const;
   virtual Element Min () const;
   virtual Element Max () const;

   void Draw (Option_t *option="");
   void Print(Option_t *name ="") const;

   virtual Element operator()(Int_t rown,Int_t coln) const = 0;
   virtual Element &operator()(Int_t rown,Int_t coln) = 0;

   Bool_t operator==(Element val) const;
   Bool_t operator!=(Element val) const;
   Bool_t operator< (Element val) const;
   Bool_t operator<=(Element val) const;
   Bool_t operator> (Element val) const;
   Bool_t operator>=(Element val) const;

   virtual TMatrixTBase<Element> &Apply(const TElementActionT<Element> &action);
   virtual TMatrixTBase<Element> &Apply(const TElementPosActionT<Element> &action);

   virtual TMatrixTBase<Element> &Randomize(Element alpha,Element beta,Double_t &seed);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 5; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTBase::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTBase::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTBase.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 212; }
};

template<class Element> Element TMatrixTBase<Element>::SetTol(Element newTol)
{
   const Element oldTol = fTol;
   if (newTol >= 0.0)
      fTol = newTol;
   return oldTol;
}

template<class Element> Bool_t operator== (const TMatrixTBase<Element> &m1,const TMatrixTBase<Element> &m2);
template<class Element> Element E2Norm (const TMatrixTBase<Element> &m1,const TMatrixTBase<Element> &m2);
template<class Element1,class Element2>
                        Bool_t AreCompatible(const TMatrixTBase<Element1> &m1,const TMatrixTBase<Element2> &m2,Int_t verbose=0);
template<class Element> void Compare (const TMatrixTBase<Element> &m1,const TMatrixTBase<Element> &m2);




template<class Element> Bool_t VerifyMatrixValue (const TMatrixTBase<Element> &m,Element val,
                                                    Int_t verbose,Element maxDevAllow);
template<class Element> Bool_t VerifyMatrixValue (const TMatrixTBase<Element> &m,Element val,Int_t verbose)
                                                                           { return VerifyMatrixValue(m,val,verbose,Element(0.)); }
template<class Element> Bool_t VerifyMatrixValue (const TMatrixTBase<Element> &m,Element val)
                                                                           { return VerifyMatrixValue(m,val,1,Element(0.)); }
template<class Element> Bool_t VerifyMatrixIdentity(const TMatrixTBase<Element> &m1,const TMatrixTBase<Element> &m2,
                                                    Int_t verbose,Element maxDevAllow);
template<class Element> Bool_t VerifyMatrixIdentity(const TMatrixTBase<Element> &m1,const TMatrixTBase<Element> &m2,Int_t verbose)
                                                                           { return VerifyMatrixIdentity(m1,m2,verbose,Element(0.)); }
template<class Element> Bool_t VerifyMatrixIdentity(const TMatrixTBase<Element> &m1,const TMatrixTBase<Element> &m2)
                                                                           { return VerifyMatrixIdentity(m1,m2,1,Element(0.)); }
# 25 "/home/junho/Downloads/root/include/TMatrixT.h" 2


# 1 "/home/junho/Downloads/root/include/TMatrixTUtils.h" 1
# 40 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TVectorT;
template<class Element> class TMatrixT;
template<class Element> class TMatrixTSym;
template<class Element> class TMatrixTSparse;
# 56 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TElementActionT {
# 66 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
protected:
   virtual ~TElementActionT() { }
   virtual void Operation(Element &element) const = 0;

private:
   TElementActionT& operator=(const TElementActionT<Element> &) {return *this;}
};
# 86 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TElementPosActionT {
# 96 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
protected:
   mutable Int_t fI;
   mutable Int_t fJ;
   virtual ~TElementPosActionT() { }
   virtual void Operation(Element &element) const = 0;

private:
   TElementPosActionT<Element>& operator=(const TElementPosActionT<Element> &) {return *this;}
};
# 114 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TMatrixTRow_const {

protected:
   const TMatrixTBase<Element> *fMatrix;
         Int_t fRowInd;
         Int_t fInc;
   const Element *fPtr;

public:
   TMatrixTRow_const() { fMatrix = 0; fRowInd = 0; fInc = 0; fPtr = 0; }
   TMatrixTRow_const(const TMatrixT <Element> &matrix,Int_t row);
   TMatrixTRow_const(const TMatrixTSym<Element> &matrix,Int_t row);
  TMatrixTRow_const(const TMatrixTRow_const<Element>& trc):
    fMatrix(trc.fMatrix), fRowInd(trc.fRowInd), fInc(trc.fInc), fPtr(trc.fPtr) { }
  TMatrixTRow_const<Element>& operator=(const TMatrixTRow_const<Element>& trc) {
    if(this != &trc) { fMatrix=trc.fMatrix; fRowInd=trc.fRowInd; fInc=trc.fInc; fPtr=trc.fPtr; } return *this;}
   virtual ~TMatrixTRow_const() { }

   inline const TMatrixTBase<Element> *GetMatrix () const { return fMatrix; }
   inline Int_t GetRowIndex() const { return fRowInd; }
   inline Int_t GetInc () const { return fInc; }
   inline const Element *GetPtr () const { return fPtr; }
   inline const Element &operator ()(Int_t i) const {
      do { if (!(fMatrix->IsValid())) ::Fatal("", kAssertMsg, "fMatrix->IsValid()", 137, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      const Int_t acoln = i-fMatrix->GetColLwb();
      if (acoln < fMatrix->GetNcols() && acoln >= 0)
         return fPtr[acoln];
      else {
         Error("operator()","Request col(%d) outside matrix range of %d - %d",
                            i,fMatrix->GetColLwb(),fMatrix->GetColLwb()+fMatrix->GetNcols());
         return fPtr[0];
      }
   }
   inline const Element &operator [](Int_t i) const { return (*(const TMatrixTRow_const<Element> *)this)(i); }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTRow_const::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTRow_const::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 149; }
};

template<class Element> class TMatrixTRow : public TMatrixTRow_const<Element> {

public:
   TMatrixTRow() {}
   TMatrixTRow(TMatrixT <Element> &matrix,Int_t row);
   TMatrixTRow(TMatrixTSym<Element> &matrix,Int_t row);
   TMatrixTRow(const TMatrixTRow<Element> &mr);

   inline Element *GetPtr() const { return const_cast<Element *>(this->fPtr); }

   inline const Element &operator()(Int_t i) const {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 163, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      const Int_t acoln = i-this->fMatrix->GetColLwb();
      if (acoln < this->fMatrix->GetNcols() || acoln >= 0)
         return (this->fPtr)[acoln];
      else {
         Error("operator()","Request col(%d) outside matrix range of %d - %d",
                            i,this->fMatrix->GetColLwb(),this->fMatrix->GetColLwb()+this->fMatrix->GetNcols());
         return (this->fPtr)[0];
     }
   }
   inline Element &operator()(Int_t i) {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 174, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      const Int_t acoln = i-this->fMatrix->GetColLwb();
      if (acoln < this->fMatrix->GetNcols() && acoln >= 0)
         return (const_cast<Element *>(this->fPtr))[acoln];
      else {
         Error("operator()","Request col(%d) outside matrix range of %d - %d",
                            i,this->fMatrix->GetColLwb(),this->fMatrix->GetColLwb()+this->fMatrix->GetNcols());
         return (const_cast<Element *>(this->fPtr))[0];
      }
   }
   inline const Element &operator[](Int_t i) const { return (*(const TMatrixTRow<Element> *)this)(i); }
   inline Element &operator[](Int_t i) { return (*( TMatrixTRow<Element> *)this)(i); }

   void operator= (Element val);
   void operator+=(Element val);
   void operator*=(Element val);

   void operator=(const TMatrixTRow_const<Element> &r);
   TMatrixTRow<Element>& operator=(const TMatrixTRow <Element> &r) { operator=((TMatrixTRow_const<Element> &)r); return *this;}
   void operator=(const TVectorT <Element> &vec);

   void operator+=(const TMatrixTRow_const<Element> &r);
   void operator*=(const TMatrixTRow_const<Element> &r);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTRow::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTRow::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 198; }
};
# 209 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TMatrixTColumn_const {

protected:
   const TMatrixTBase<Element> *fMatrix;
         Int_t fColInd;
         Int_t fInc;
   const Element *fPtr;

public:
   TMatrixTColumn_const() { fMatrix = 0; fColInd = 0; fInc = 0; fPtr = 0; }
   TMatrixTColumn_const(const TMatrixT <Element> &matrix,Int_t col);
   TMatrixTColumn_const(const TMatrixTSym<Element> &matrix,Int_t col);
   TMatrixTColumn_const(const TMatrixTColumn_const<Element>& trc):
     fMatrix(trc.fMatrix), fColInd(trc.fColInd), fInc(trc.fInc), fPtr(trc.fPtr) { }
   TMatrixTColumn_const<Element>& operator=(const TMatrixTColumn_const<Element>& trc) {
     if(this != &trc) { fMatrix=trc.fMatrix; fColInd=trc.fColInd; fInc=trc.fInc; fPtr=trc.fPtr; } return *this;}
   virtual ~TMatrixTColumn_const() { }

   inline const TMatrixTBase <Element> *GetMatrix () const { return fMatrix; }
   inline Int_t GetColIndex() const { return fColInd; }
   inline Int_t GetInc () const { return fInc; }
   inline const Element *GetPtr () const { return fPtr; }
   inline const Element &operator ()(Int_t i) const {
      do { if (!(fMatrix->IsValid())) ::Fatal("", kAssertMsg, "fMatrix->IsValid()", 232, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      const Int_t arown = i-fMatrix->GetRowLwb();
      if (arown < fMatrix->GetNrows() && arown >= 0)
         return fPtr[arown*fInc];
      else {
         Error("operator()","Request row(%d) outside matrix range of %d - %d",
                            i,fMatrix->GetRowLwb(),fMatrix->GetRowLwb()+fMatrix->GetNrows());
         return fPtr[0];
      }
   }
   inline const Element &operator [](Int_t i) const { return (*(const TMatrixTColumn_const<Element> *)this)(i); }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTColumn_const::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTColumn_const::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 244; }
};

template<class Element> class TMatrixTColumn : public TMatrixTColumn_const<Element> {

public:
   TMatrixTColumn() {}
   TMatrixTColumn(TMatrixT <Element>&matrix,Int_t col);
   TMatrixTColumn(TMatrixTSym<Element>&matrix,Int_t col);
   TMatrixTColumn(const TMatrixTColumn <Element>&mc);

   inline Element *GetPtr() const { return const_cast<Element *>(this->fPtr); }

   inline const Element &operator()(Int_t i) const {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 258, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      const Int_t arown = i-this->fMatrix->GetRowLwb();
      if (arown < this->fMatrix->GetNrows() && arown >= 0)
         return (this->fPtr)[arown*this->fInc];
      else {
         Error("operator()","Request row(%d) outside matrix range of %d - %d",
                            i,this->fMatrix->GetRowLwb(),this->fMatrix->GetRowLwb()+this->fMatrix->GetNrows());
         return (this->fPtr)[0];
      }
   }
   inline Element &operator()(Int_t i) {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 269, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      const Int_t arown = i-this->fMatrix->GetRowLwb();

      if (arown < this->fMatrix->GetNrows() && arown >= 0)
         return (const_cast<Element *>(this->fPtr))[arown*this->fInc];
      else {
         Error("operator()","Request row(%d) outside matrix range of %d - %d",
                            i,this->fMatrix->GetRowLwb(),this->fMatrix->GetRowLwb()+this->fMatrix->GetNrows());
         return (const_cast<Element *>(this->fPtr))[0];
      }
   }
   inline const Element &operator[](Int_t i) const { return (*(const TMatrixTColumn<Element> *)this)(i); }
   inline Element &operator[](Int_t i) { return (*( TMatrixTColumn<Element> *)this)(i); }

   void operator= (Element val);
   void operator+=(Element val);
   void operator*=(Element val);

   void operator=(const TMatrixTColumn_const<Element> &c);
   TMatrixTColumn<Element>& operator=(const TMatrixTColumn <Element> &c) { operator=((TMatrixTColumn_const<Element> &)c); return *this;}
   void operator=(const TVectorT <Element> &vec);

   void operator+=(const TMatrixTColumn_const<Element> &c);
   void operator*=(const TMatrixTColumn_const<Element> &c);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTColumn::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTColumn::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 294; }
};
# 305 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TMatrixTDiag_const {

protected:
   const TMatrixTBase<Element> *fMatrix;
         Int_t fInc;
         Int_t fNdiag;
   const Element *fPtr;

public:
   TMatrixTDiag_const() { fMatrix = 0; fInc = 0; fNdiag = 0; fPtr = 0; }
   TMatrixTDiag_const(const TMatrixT <Element> &matrix);
   TMatrixTDiag_const(const TMatrixTSym<Element> &matrix);
   TMatrixTDiag_const(const TMatrixTDiag_const<Element>& trc):
    fMatrix(trc.fMatrix), fInc(trc.fInc), fNdiag(trc.fNdiag), fPtr(trc.fPtr) { }
   TMatrixTDiag_const<Element>& operator=(const TMatrixTDiag_const<Element>& trc) {
      if(this != &trc) { fMatrix=trc.fMatrix; fInc=trc.fInc; fNdiag=trc.fNdiag; fPtr=trc.fPtr; } return *this;}
   virtual ~TMatrixTDiag_const() { }

   inline const TMatrixTBase<Element> *GetMatrix() const { return fMatrix; }
   inline const Element *GetPtr () const { return fPtr; }
   inline Int_t GetInc () const { return fInc; }
   inline const Element &operator ()(Int_t i) const {
      do { if (!(fMatrix->IsValid())) ::Fatal("", kAssertMsg, "fMatrix->IsValid()", 327, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      if (i < fNdiag && i >= 0)
         return fPtr[i*fInc];
      else {
         Error("operator()","Request diagonal(%d) outside matrix range of 0 - %d",i,fNdiag);
         return fPtr[0];
      }
   }
   inline const Element &operator [](Int_t i) const { return (*(const TMatrixTDiag_const<Element> *)this)(i); }

   Int_t GetNdiags() const { return fNdiag; }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTDiag_const::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTDiag_const::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 339; }
};

template<class Element> class TMatrixTDiag : public TMatrixTDiag_const<Element> {

public:
   TMatrixTDiag() {}
   TMatrixTDiag(TMatrixT <Element>&matrix);
   TMatrixTDiag(TMatrixTSym<Element>&matrix);
   TMatrixTDiag(const TMatrixTDiag<Element> &md);

   inline Element *GetPtr() const { return const_cast<Element *>(this->fPtr); }

   inline const Element &operator()(Int_t i) const {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 353, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      if (i < this->fNdiag && i >= 0)
         return (this->fPtr)[i*this->fInc];
      else {
         Error("operator()","Request diagonal(%d) outside matrix range of 0 - %d",i,this->fNdiag);
         return (this->fPtr)[0];
      }
   }
   inline Element &operator()(Int_t i) {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 362, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      if (i < this->fNdiag && i >= 0)
         return (const_cast<Element *>(this->fPtr))[i*this->fInc];
      else {
         Error("operator()","Request diagonal(%d) outside matrix range of 0 - %d",i,this->fNdiag);
         return (const_cast<Element *>(this->fPtr))[0];
      }
   }
   inline const Element &operator[](Int_t i) const { return (*(const TMatrixTDiag<Element> *)this)(i); }
   inline Element &operator[](Int_t i) { return (*( TMatrixTDiag *)this)(i); }

   void operator= (Element val);
   void operator+=(Element val);
   void operator*=(Element val);

   void operator=(const TMatrixTDiag_const<Element> &d);
   TMatrixTDiag<Element>& operator=(const TMatrixTDiag <Element> &d) { operator=((TMatrixTDiag_const<Element> &)d); return *this;}
   void operator=(const TVectorT <Element> &vec);

   void operator+=(const TMatrixTDiag_const<Element> &d);
   void operator*=(const TMatrixTDiag_const<Element> &d);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTDiag::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTDiag::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 384; }
};
# 395 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TMatrixTFlat_const {

protected:
   const TMatrixTBase<Element> *fMatrix;
         Int_t fNelems;
   const Element *fPtr;

public:
   TMatrixTFlat_const() { fMatrix = 0; fNelems = 0; fPtr = 0; }
   TMatrixTFlat_const(const TMatrixT <Element> &matrix);
   TMatrixTFlat_const(const TMatrixTSym<Element> &matrix);
   TMatrixTFlat_const(const TMatrixTFlat_const<Element>& trc):
     fMatrix(trc.fMatrix), fNelems(trc.fNelems), fPtr(trc.fPtr) { }
   TMatrixTFlat_const<Element>& operator=(const TMatrixTFlat_const<Element>& trc) {
      if(this != &trc) { fMatrix=trc.fMatrix; fNelems=trc.fNelems; fPtr=trc.fPtr; } return *this;}
   virtual ~TMatrixTFlat_const() { }

   inline const TMatrixTBase<Element> *GetMatrix() const { return fMatrix; }
   inline const Element *GetPtr () const { return fPtr; }
   inline const Element &operator ()(Int_t i) const {
      do { if (!(fMatrix->IsValid())) ::Fatal("", kAssertMsg, "fMatrix->IsValid()", 415, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      if (i < fNelems && i >= 0)
         return fPtr[i];
      else {
         Error("operator()","Request element(%d) outside matrix range of 0 - %d",i,fNelems);
         return fPtr[0];
      }
   }
   inline const Element &operator [](Int_t i) const { return (*(const TMatrixTFlat_const<Element> *)this)(i); }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTFlat_const::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTFlat_const::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 425; }
};

template<class Element> class TMatrixTFlat : public TMatrixTFlat_const<Element> {

public:
   TMatrixTFlat() {}
   TMatrixTFlat(TMatrixT <Element> &matrix);
   TMatrixTFlat(TMatrixTSym<Element> &matrix);
   TMatrixTFlat(const TMatrixTFlat<Element> &mf);

   inline Element *GetPtr() const { return const_cast<Element *>(this->fPtr); }

   inline const Element &operator()(Int_t i) const {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 439, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      if (i < this->fNelems && i >= 0)
         return (this->fPtr)[i];
      else {
         Error("operator()","Request element(%d) outside matrix range of 0 - %d",i,this->fNelems);
         return (this->fPtr)[0];
      }
   }
   inline Element &operator()(Int_t i) {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 448, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);
      if (i < this->fNelems && i >= 0)
         return (const_cast<Element *>(this->fPtr))[i];
      else {
         Error("operator()","Request element(%d) outside matrix range of 0 - %d",i,this->fNelems);
         return (const_cast<Element *>(this->fPtr))[0];
      }
   }
   inline const Element &operator[](Int_t i) const { return (*(const TMatrixTFlat<Element> *)this)(i); }
   inline Element &operator[](Int_t i) { return (*( TMatrixTFlat<Element> *)this)(i); }

   void operator= (Element val);
   void operator+=(Element val);
   void operator*=(Element val);

   void operator=(const TMatrixTFlat_const<Element> &f);
   TMatrixTFlat<Element>& operator=(const TMatrixTFlat <Element> &f) { operator=((TMatrixTFlat_const<Element> &)f); return *this;}
   void operator=(const TVectorT <Element> &vec);

   void operator+=(const TMatrixTFlat_const<Element> &f);
   void operator*=(const TMatrixTFlat_const<Element> &f);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTFlat::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTFlat::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 470; }
};
# 481 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TMatrixTSub_const {

protected:
   const TMatrixTBase<Element> *fMatrix;
         Int_t fRowOff;
         Int_t fColOff;
         Int_t fNrowsSub;
         Int_t fNcolsSub;

public:
   TMatrixTSub_const() { fRowOff = fColOff = fNrowsSub = fNcolsSub = 0; fMatrix = 0; }
   TMatrixTSub_const(const TMatrixT <Element> &matrix,Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb);
   TMatrixTSub_const(const TMatrixTSym<Element> &matrix,Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb);
   virtual ~TMatrixTSub_const() { }

   inline const TMatrixTBase<Element> *GetMatrix() const { return fMatrix; }
   inline Int_t GetRowOff() const { return fRowOff; }
   inline Int_t GetColOff() const { return fColOff; }
   inline Int_t GetNrows () const { return fNrowsSub; }
   inline Int_t GetNcols () const { return fNcolsSub; }
   inline const Element &operator ()(Int_t rown,Int_t coln) const {
      do { if (!(fMatrix->IsValid())) ::Fatal("", kAssertMsg, "fMatrix->IsValid()", 502, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);

      const Element *ptr = fMatrix->GetMatrixArray();
      if (rown >= fNrowsSub || rown < 0) {
         Error("operator()","Request row(%d) outside matrix range of 0 - %d",rown,fNrowsSub);
         return ptr[0];
      }
      if (coln >= fNcolsSub || coln < 0) {
         Error("operator()","Request column(%d) outside matrix range of 0 - %d",coln,fNcolsSub);
         return ptr[0];
      }
      const Int_t index = (rown+fRowOff)*fMatrix->GetNcols()+coln+fColOff;
      return ptr[index];
   }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSub_const::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSub_const::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 517; }
};

template<class Element> class TMatrixTSub : public TMatrixTSub_const<Element> {

public:

   enum {kWorkMax = 100};

   TMatrixTSub() {}
   TMatrixTSub(TMatrixT <Element> &matrix,Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb);
   TMatrixTSub(TMatrixTSym<Element> &matrix,Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb);
   TMatrixTSub(const TMatrixTSub<Element> &ms);

   inline Element &operator()(Int_t rown,Int_t coln) {
      do { if (!(this->fMatrix->IsValid())) ::Fatal("", kAssertMsg, "this->fMatrix->IsValid()", 532, "/home/junho/Downloads/root/include/TMatrixTUtils.h"); } while (0);

      const Element *ptr = this->fMatrix->GetMatrixArray();
      if (rown >= this->fNrowsSub || rown < 0) {
         Error("operator()","Request row(%d) outside matrix range of 0 - %d",rown,this->fNrowsSub);
         return (const_cast<Element *>(ptr))[0];
      }
      if (coln >= this->fNcolsSub || coln < 0) {
         Error("operator()","Request column(%d) outside matrix range of 0 - %d",coln,this->fNcolsSub);
         return (const_cast<Element *>(ptr))[0];
      }
      const Int_t index = (rown+this->fRowOff)*this->fMatrix->GetNcols()+coln+this->fColOff;
      return (const_cast<Element *>(ptr))[index];
   }

   void Rank1Update(const TVectorT<Element> &vec,Element alpha=1.0);

   void operator= (Element val);
   void operator+=(Element val);
   void operator*=(Element val);

   void operator=(const TMatrixTSub_const<Element> &s);
   TMatrixTSub<Element>& operator=(const TMatrixTSub <Element> &s) { operator=((TMatrixTSub_const<Element> &)s); return *this;}
   void operator=(const TMatrixTBase <Element> &m);

   void operator+=(const TMatrixTSub_const<Element> &s);
   void operator*=(const TMatrixTSub_const<Element> &s);
   void operator+=(const TMatrixTBase <Element> &m);
   void operator*=(const TMatrixT <Element> &m);
   void operator*=(const TMatrixTSym <Element> &m);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSub::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSub::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 563; }
};
# 574 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TMatrixTSparseRow_const {

protected:
   const TMatrixTSparse<Element> *fMatrix;
         Int_t fRowInd;
         Int_t fNindex;
   const Int_t *fColPtr;
   const Element *fDataPtr;

public:
   TMatrixTSparseRow_const() { fMatrix = 0; fRowInd = 0; fNindex = 0; fColPtr = 0; fDataPtr = 0; }
   TMatrixTSparseRow_const(const TMatrixTSparse<Element> &matrix,Int_t row);
   TMatrixTSparseRow_const(const TMatrixTSparseRow_const<Element>& trc):
     fMatrix(trc.fMatrix), fRowInd(trc.fRowInd), fNindex(trc.fNindex), fColPtr(trc.fColPtr), fDataPtr(trc.fDataPtr) { }
   TMatrixTSparseRow_const<Element>& operator=(const TMatrixTSparseRow_const<Element>& trc) {
     if(this != &trc) { fMatrix=trc.fMatrix; fRowInd=trc.fRowInd; fNindex=trc.fNindex; fColPtr=trc.fColPtr; fDataPtr=trc.fDataPtr; } return *this;}
   virtual ~TMatrixTSparseRow_const() { }

   inline const TMatrixTBase<Element> *GetMatrix () const { return fMatrix; }
   inline const Element *GetDataPtr () const { return fDataPtr; }
   inline const Int_t *GetColPtr () const { return fColPtr; }
   inline Int_t GetRowIndex() const { return fRowInd; }
   inline Int_t GetNindex () const { return fNindex; }

          Element operator()(Int_t i) const;
   inline Element operator[](Int_t i) const { return (*(const TMatrixTSparseRow_const<Element> *)this)(i); }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSparseRow_const::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSparseRow_const::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 601; }
};

template<class Element> class TMatrixTSparseRow : public TMatrixTSparseRow_const<Element> {

public:
   TMatrixTSparseRow() {}
   TMatrixTSparseRow(TMatrixTSparse<Element> &matrix,Int_t row);
   TMatrixTSparseRow(const TMatrixTSparseRow<Element> &mr);

   inline Element *GetDataPtr() const { return const_cast<Element *>(this->fDataPtr); }

          Element operator()(Int_t i) const;
          Element &operator()(Int_t i);
   inline Element operator[](Int_t i) const { return (*(const TMatrixTSparseRow<Element> *)this)(i); }
   inline Element &operator[](Int_t i) { return (*(TMatrixTSparseRow<Element> *)this)(i); }

   void operator= (Element val);
   void operator+=(Element val);
   void operator*=(Element val);

   void operator=(const TMatrixTSparseRow_const<Element> &r);
   TMatrixTSparseRow<Element>& operator=(const TMatrixTSparseRow <Element> &r) { operator=((TMatrixTSparseRow_const<Element> &)r); return *this;}
   void operator=(const TVectorT <Element> &vec);

   void operator+=(const TMatrixTSparseRow_const<Element> &r);
   void operator*=(const TMatrixTSparseRow_const<Element> &r);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSparseRow::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSparseRow::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 629; }
};
# 640 "/home/junho/Downloads/root/include/TMatrixTUtils.h"
template<class Element> class TMatrixTSparseDiag_const {

protected:
   const TMatrixTSparse<Element> *fMatrix;
         Int_t fNdiag;
   const Element *fDataPtr;

public:
   TMatrixTSparseDiag_const() { fMatrix = 0; fNdiag = 0; fDataPtr = 0; }
   TMatrixTSparseDiag_const(const TMatrixTSparse<Element> &matrix);
   TMatrixTSparseDiag_const(const TMatrixTSparseDiag_const<Element>& trc):
     fMatrix(trc.fMatrix), fNdiag(trc.fNdiag), fDataPtr(trc.fDataPtr) { }
   TMatrixTSparseDiag_const<Element>& operator=(const TMatrixTSparseDiag_const<Element>& trc) {
      if(this != &trc) { fMatrix=trc.fMatrix; fNdiag=trc.fNdiag; fDataPtr=trc.fDataPtr; } return *this;}
   virtual ~TMatrixTSparseDiag_const() { }

   inline const TMatrixTBase<Element> *GetMatrix () const { return fMatrix; }
   inline const Element *GetDataPtr() const { return fDataPtr; }
   inline Int_t GetNdiags () const { return fNdiag; }

          Element operator ()(Int_t i) const;
   inline Element operator [](Int_t i) const { return (*(const TMatrixTSparseRow_const<Element> *)this)(i); }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSparseDiag_const::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSparseDiag_const::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 663; }
};

template<class Element> class TMatrixTSparseDiag : public TMatrixTSparseDiag_const<Element> {

public:
   TMatrixTSparseDiag() {}
   TMatrixTSparseDiag(TMatrixTSparse<Element> &matrix);
   TMatrixTSparseDiag(const TMatrixTSparseDiag<Element> &md);

   inline Element *GetDataPtr() const { return const_cast<Element *>(this->fDataPtr); }

                Element operator()(Int_t i) const;
                Element &operator()(Int_t i);
   inline Element operator[](Int_t i) const { return (*(const TMatrixTSparseDiag<Element> *)this)(i); }
   inline Element &operator[](Int_t i) { return (*(TMatrixTSparseDiag<Element> *)this)(i); }

   void operator= (Element val);
   void operator+=(Element val);
   void operator*=(Element val);

   void operator=(const TMatrixTSparseDiag_const<Element> &d);
   TMatrixTSparseDiag<Element>& operator=(const TMatrixTSparseDiag <Element> &d) { operator=((TMatrixTSparseDiag_const<Element> &)d); return *this;}
   void operator=(const TVectorT <Element> &vec);

   void operator+=(const TMatrixTSparseDiag_const<Element> &d);
   void operator*=(const TMatrixTSparseDiag_const<Element> &d);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSparseDiag::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSparseDiag::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTUtils.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 691; }
};

Double_t Drand(Double_t &ix);
# 28 "/home/junho/Downloads/root/include/TMatrixT.h" 2
# 36 "/home/junho/Downloads/root/include/TMatrixT.h"
template<class Element> class TMatrixTSym;
template<class Element> class TMatrixTSparse;
template<class Element> class TMatrixTLazy;

template<class Element> class TMatrixT : public TMatrixTBase<Element> {

protected:

   Element fDataStack[TMatrixTBase<Element>::kSizeMax];
   Element *fElements;

   Element *New_m (Int_t size);
   void Delete_m(Int_t size,Element*&);
   Int_t Memcpy_m(Element *newp,const Element *oldp,Int_t copySize,
                      Int_t newSize,Int_t oldSize);
   void Allocate(Int_t nrows,Int_t ncols,Int_t row_lwb = 0,Int_t col_lwb = 0,Int_t init = 0,
                     Int_t = -1);

   static Element & NaNValue();

public:

   enum {kWorkMax = 100};
   enum EMatrixCreatorsOp1 { kZero,kUnit,kTransposed,kInverted,kAtA };
   enum EMatrixCreatorsOp2 { kMult,kTransposeMult,kInvMult,kMultTranspose,kPlus,kMinus };

   TMatrixT(): fDataStack(), fElements(0) { }
   TMatrixT(Int_t nrows,Int_t ncols);
   TMatrixT(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb);
   TMatrixT(Int_t nrows,Int_t ncols,const Element *data,Option_t *option="");
   TMatrixT(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,const Element *data,Option_t *option="");
   TMatrixT(const TMatrixT <Element> &another);
   TMatrixT(const TMatrixTSym <Element> &another);
   TMatrixT(const TMatrixTSparse<Element> &another);
   template <class Element2> TMatrixT(const TMatrixT<Element2> &another): fElements(0)
   {
      do { if (!(another.IsValid())) ::Fatal("", kAssertMsg, "another.IsValid()", 72, "/home/junho/Downloads/root/include/TMatrixT.h"); } while (0);
      Allocate(another.GetNrows(),another.GetNcols(),another.GetRowLwb(),another.GetColLwb());
      *this = another;
   }

   TMatrixT(EMatrixCreatorsOp1 op,const TMatrixT<Element> &prototype);
   TMatrixT(const TMatrixT <Element> &a,EMatrixCreatorsOp2 op,const TMatrixT <Element> &b);
   TMatrixT(const TMatrixT <Element> &a,EMatrixCreatorsOp2 op,const TMatrixTSym<Element> &b);
   TMatrixT(const TMatrixTSym <Element> &a,EMatrixCreatorsOp2 op,const TMatrixT <Element> &b);
   TMatrixT(const TMatrixTSym <Element> &a,EMatrixCreatorsOp2 op,const TMatrixTSym<Element> &b);
   TMatrixT(const TMatrixTLazy<Element> &lazy_constructor);

   virtual ~TMatrixT() { Clear(); }



   void Plus (const TMatrixT <Element> &a,const TMatrixT <Element> &b);
   void Plus (const TMatrixT <Element> &a,const TMatrixTSym<Element> &b);
   void Plus (const TMatrixTSym<Element> &a,const TMatrixT <Element> &b) { Plus(b,a); }

   void Minus(const TMatrixT <Element> &a,const TMatrixT <Element> &b);
   void Minus(const TMatrixT <Element> &a,const TMatrixTSym<Element> &b);
   void Minus(const TMatrixTSym<Element> &a,const TMatrixT <Element> &b) { Minus(b,a); }

   void Mult (const TMatrixT <Element> &a,const TMatrixT <Element> &b);
   void Mult (const TMatrixT <Element> &a,const TMatrixTSym<Element> &b);
   void Mult (const TMatrixTSym<Element> &a,const TMatrixT <Element> &b);
   void Mult (const TMatrixTSym<Element> &a,const TMatrixTSym<Element> &b);

   void TMult(const TMatrixT <Element> &a,const TMatrixT <Element> &b);
   void TMult(const TMatrixT <Element> &a,const TMatrixTSym<Element> &b);
   void TMult(const TMatrixTSym<Element> &a,const TMatrixT <Element> &b) { Mult(a,b); }
   void TMult(const TMatrixTSym<Element> &a,const TMatrixTSym<Element> &b) { Mult(a,b); }

   void MultT(const TMatrixT <Element> &a,const TMatrixT <Element> &b);
   void MultT(const TMatrixT <Element> &a,const TMatrixTSym<Element> &b) { Mult(a,b); }
   void MultT(const TMatrixTSym<Element> &a,const TMatrixT <Element> &b);
   void MultT(const TMatrixTSym<Element> &a,const TMatrixTSym<Element> &b) { Mult(a,b); }

   virtual const Element *GetMatrixArray () const;
   virtual Element *GetMatrixArray ();
   virtual const Int_t *GetRowIndexArray() const { return 0; }
   virtual Int_t *GetRowIndexArray() { return 0; }
   virtual const Int_t *GetColIndexArray() const { return 0; }
   virtual Int_t *GetColIndexArray() { return 0; }

   virtual TMatrixTBase<Element> &SetRowIndexArray(Int_t * ) { MayNotUse("SetRowIndexArray(Int_t *)"); return *this; }
   virtual TMatrixTBase<Element> &SetColIndexArray(Int_t * ) { MayNotUse("SetColIndexArray(Int_t *)"); return *this; }

   virtual void Clear(Option_t * ="") { if (this->fIsOwner) Delete_m(this->fNelems,fElements);
                                                   else fElements = 0; this->fNelems = 0; }

           TMatrixT <Element> &Use (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Element *data);
   const TMatrixT <Element> &Use (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,const Element *data) const
                                            { return (const TMatrixT<Element>&)
                                                     ((const_cast<TMatrixT<Element> *>(this))->Use(row_lwb,row_upb,col_lwb,col_upb, const_cast<Element *>(data))); }
           TMatrixT <Element> &Use (Int_t nrows,Int_t ncols,Element *data);
   const TMatrixT <Element> &Use (Int_t nrows,Int_t ncols,const Element *data) const;
           TMatrixT <Element> &Use (TMatrixT<Element> &a);
   const TMatrixT <Element> &Use (const TMatrixT<Element> &a) const;

   virtual TMatrixTBase<Element> &GetSub (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,
                                           TMatrixTBase<Element> &target,Option_t *option="S") const;
           TMatrixT <Element> GetSub (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Option_t *option="S") const;
   virtual TMatrixTBase<Element> &SetSub (Int_t row_lwb,Int_t col_lwb,const TMatrixTBase<Element> &source);

   virtual TMatrixTBase<Element> &ResizeTo(Int_t nrows,Int_t ncols,Int_t =-1);
   virtual TMatrixTBase<Element> &ResizeTo(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Int_t =-1);
   inline TMatrixTBase<Element> &ResizeTo(const TMatrixT<Element> &m) {
                                            return ResizeTo(m.GetRowLwb(),m.GetRowUpb(),m.GetColLwb(),m.GetColUpb());
                                 }

   virtual Double_t Determinant () const;
   virtual void Determinant (Double_t &d1,Double_t &d2) const;

           TMatrixT<Element> &Invert (Double_t *det=0);
           TMatrixT<Element> &InvertFast (Double_t *det=0);
           TMatrixT<Element> &Transpose (const TMatrixT<Element> &source);
   inline TMatrixT<Element> &T () { return this->Transpose(*this); }
           TMatrixT<Element> &Rank1Update (const TVectorT<Element> &v,Element alpha=1.0);
           TMatrixT<Element> &Rank1Update (const TVectorT<Element> &v1,const TVectorT<Element> &v2,Element alpha=1.0);
           Element Similarity (const TVectorT<Element> &v) const;

   TMatrixT<Element> &NormByColumn(const TVectorT<Element> &v,Option_t *option="D");
   TMatrixT<Element> &NormByRow (const TVectorT<Element> &v,Option_t *option="D");


   inline Element operator()(Int_t rown,Int_t coln) const;
   inline Element &operator()(Int_t rown,Int_t coln);


   inline const TMatrixTRow_const<Element> operator[](Int_t rown) const { return TMatrixTRow_const<Element>(*this,rown); }
   inline TMatrixTRow <Element> operator[](Int_t rown) { return TMatrixTRow <Element>(*this,rown); }

   TMatrixT<Element> &operator= (const TMatrixT <Element> &source);
   TMatrixT<Element> &operator= (const TMatrixTSym <Element> &source);
   TMatrixT<Element> &operator= (const TMatrixTSparse<Element> &source);
   TMatrixT<Element> &operator= (const TMatrixTLazy <Element> &source);
   template <class Element2> TMatrixT<Element> &operator= (const TMatrixT<Element2> &source)
   {
      if (!AreCompatible(*this,source)) {
         Error("operator=(const TMatrixT2 &)","matrices not compatible");
         return *this;
      }

     TObject::operator=(source);
     const Element2 * const ps = source.GetMatrixArray();
           Element * const pt = this->GetMatrixArray();
     for (Int_t i = 0; i < this->fNelems; i++)
        pt[i] = ps[i];
     this->fTol = source.GetTol();
     return *this;
   }

   TMatrixT<Element> &operator= (Element val);
   TMatrixT<Element> &operator-=(Element val);
   TMatrixT<Element> &operator+=(Element val);
   TMatrixT<Element> &operator*=(Element val);

   TMatrixT<Element> &operator+=(const TMatrixT <Element> &source);
   TMatrixT<Element> &operator+=(const TMatrixTSym<Element> &source);
   TMatrixT<Element> &operator-=(const TMatrixT <Element> &source);
   TMatrixT<Element> &operator-=(const TMatrixTSym<Element> &source);

   TMatrixT<Element> &operator*=(const TMatrixT <Element> &source);
   TMatrixT<Element> &operator*=(const TMatrixTSym <Element> &source);
   TMatrixT<Element> &operator*=(const TMatrixTDiag_const <Element> &diag);
   TMatrixT<Element> &operator/=(const TMatrixTDiag_const <Element> &diag);
   TMatrixT<Element> &operator*=(const TMatrixTRow_const <Element> &row);
   TMatrixT<Element> &operator/=(const TMatrixTRow_const <Element> &row);
   TMatrixT<Element> &operator*=(const TMatrixTColumn_const<Element> &col);
   TMatrixT<Element> &operator/=(const TMatrixTColumn_const<Element> &col);

   const TMatrixT<Element> EigenVectors(TVectorT<Element> &eigenValues) const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 4; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixT::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixT::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixT.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 207; }
};

template <class Element> inline const Element *TMatrixT<Element>::GetMatrixArray() const { return fElements; }
template <class Element> inline Element *TMatrixT<Element>::GetMatrixArray() { return fElements; }

template <class Element> inline TMatrixT<Element> &TMatrixT<Element>::Use (Int_t nrows,Int_t ncols,Element *data)
                                                                                          { return Use(0,nrows-1,0,ncols-1,data); }
template <class Element> inline const TMatrixT<Element> &TMatrixT<Element>::Use (Int_t nrows,Int_t ncols,const Element *data) const
                                                                                          { return Use(0,nrows-1,0,ncols-1,data); }
template <class Element> inline TMatrixT<Element> &TMatrixT<Element>::Use (TMatrixT &a)
                                                                                          {
                                                                                            do { if (!(a.IsValid())) ::Fatal("", kAssertMsg, "a.IsValid()", 219, "/home/junho/Downloads/root/include/TMatrixT.h"); } while (0);
                                                                                            return Use(a.GetRowLwb(),a.GetRowUpb(),
                                                                                                       a.GetColLwb(),a.GetColUpb(),a.GetMatrixArray());
                                                                                          }
template <class Element> inline const TMatrixT<Element> &TMatrixT<Element>::Use (const TMatrixT &a) const
                                                                                          {
                                                                                            do { if (!(a.IsValid())) ::Fatal("", kAssertMsg, "a.IsValid()", 225, "/home/junho/Downloads/root/include/TMatrixT.h"); } while (0);
                                                                                            return Use(a.GetRowLwb(),a.GetRowUpb(),
                                                                                                       a.GetColLwb(),a.GetColUpb(),a.GetMatrixArray());
                                                                                          }

template <class Element> inline TMatrixT<Element> TMatrixT<Element>::GetSub (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,
                                                                                           Option_t *option) const
                                                                                          {
                                                                                            TMatrixT tmp;
                                                                                            this->GetSub(row_lwb,row_upb,col_lwb,col_upb,tmp,option);
                                                                                            return tmp;
                                                                                          }

template <class Element> inline Element TMatrixT<Element>::operator()(Int_t rown,Int_t coln) const
{
   do { if (!(this->IsValid())) ::Fatal("", kAssertMsg, "this->IsValid()", 240, "/home/junho/Downloads/root/include/TMatrixT.h"); } while (0);
   const Int_t arown = rown-this->fRowLwb;
   const Int_t acoln = coln-this->fColLwb;
   if (arown >= this->fNrows || arown < 0) {
      Error("operator()","Request row(%d) outside matrix range of %d - %d",rown,this->fRowLwb,this->fRowLwb+this->fNrows);
      return NaNValue();
   }
   if (acoln >= this->fNcols || acoln < 0) {
      Error("operator()","Request column(%d) outside matrix range of %d - %d",coln,this->fColLwb,this->fColLwb+this->fNcols);
      return NaNValue();

   }
   return (fElements[arown*this->fNcols+acoln]);
}

template <class Element> inline Element &TMatrixT<Element>::operator()(Int_t rown,Int_t coln)
{
   do { if (!(this->IsValid())) ::Fatal("", kAssertMsg, "this->IsValid()", 257, "/home/junho/Downloads/root/include/TMatrixT.h"); } while (0);
   const Int_t arown = rown-this->fRowLwb;
   const Int_t acoln = coln-this->fColLwb;
   if (arown >= this->fNrows || arown < 0) {
      Error("operator()","Request row(%d) outside matrix range of %d - %d",rown,this->fRowLwb,this->fRowLwb+this->fNrows);
      return NaNValue();

   }
   if (acoln >= this->fNcols || acoln < 0) {
      Error("operator()","Request column(%d) outside matrix range of %d - %d",coln,this->fColLwb,this->fColLwb+this->fNcols);
      return NaNValue();
   }
   return (fElements[arown*this->fNcols+acoln]);
}

template <class Element> TMatrixT<Element> operator+ (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator+ (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator+ (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator+ (const TMatrixT <Element> &source , Element val );
template <class Element> TMatrixT<Element> operator+ ( Element val ,const TMatrixT <Element> &source );
template <class Element> TMatrixT<Element> operator- (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator- (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator- (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator- (const TMatrixT <Element> &source , Element val );
template <class Element> TMatrixT<Element> operator- ( Element val ,const TMatrixT <Element> &source );
template <class Element> TMatrixT<Element> operator* ( Element val ,const TMatrixT <Element> &source );
template <class Element> TMatrixT<Element> operator* (const TMatrixT <Element> &source , Element val );
template <class Element> TMatrixT<Element> operator* (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator* (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator* (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator* (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"

template <class Element> TMatrixT<Element> operator&& (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator&& (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator&& (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator|| (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator|| (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator|| (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);

#pragma GCC diagnostic pop

template <class Element> TMatrixT<Element> operator> (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator> (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator> (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator>= (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator>= (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator>= (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator<= (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator<= (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator<= (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator< (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator< (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator< (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator!= (const TMatrixT <Element> &source1,const TMatrixT <Element> &source2);
template <class Element> TMatrixT<Element> operator!= (const TMatrixT <Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixT<Element> operator!= (const TMatrixTSym<Element> &source1,const TMatrixT <Element> &source2);

template <class Element> TMatrixT<Element> &Add (TMatrixT<Element> &target, Element scalar,const TMatrixT <Element> &source);
template <class Element> TMatrixT<Element> &Add (TMatrixT<Element> &target, Element scalar,const TMatrixTSym<Element> &source);
template <class Element> TMatrixT<Element> &ElementMult(TMatrixT<Element> &target,const TMatrixT <Element> &source);
template <class Element> TMatrixT<Element> &ElementMult(TMatrixT<Element> &target,const TMatrixTSym<Element> &source);
template <class Element> TMatrixT<Element> &ElementDiv (TMatrixT<Element> &target,const TMatrixT <Element> &source);
template <class Element> TMatrixT<Element> &ElementDiv (TMatrixT<Element> &target,const TMatrixTSym<Element> &source);

template <class Element> void AMultB (const Element * const ap,Int_t na,Int_t ncolsa,
                                      const Element * const bp,Int_t nb,Int_t ncolsb,Element *cp);
template <class Element> void AtMultB(const Element * const ap,Int_t ncolsa,
                                      const Element * const bp,Int_t nb,Int_t ncolsb,Element *cp);
template <class Element> void AMultBt(const Element * const ap,Int_t na,Int_t ncolsa,
                                      const Element * const bp,Int_t nb,Int_t ncolsb,Element *cp);
# 25 "/home/junho/Downloads/root/include/TVectorT.h" 2


# 1 "/home/junho/Downloads/root/include/TMatrixTSym.h" 1
# 34 "/home/junho/Downloads/root/include/TMatrixTSym.h"
template<class Element>class TMatrixT;
template<class Element>class TMatrixTSymLazy;
template<class Element>class TVectorT;

template<class Element> class TMatrixTSym : public TMatrixTBase<Element> {

protected:

   Element fDataStack[TMatrixTBase<Element>::kSizeMax];
   Element *fElements;

   Element *New_m (Int_t size);
   void Delete_m(Int_t size,Element*&);
   Int_t Memcpy_m(Element *newp,const Element *oldp,Int_t copySize,
                     Int_t newSize,Int_t oldSize);
   void Allocate(Int_t nrows,Int_t ncols,Int_t row_lwb = 0,Int_t col_lwb = 0,Int_t init = 0,
                     Int_t = -1);

public:

   enum {kWorkMax = 100};
   enum EMatrixCreatorsOp1 { kZero,kUnit,kTransposed,kInverted,kAtA };
   enum EMatrixCreatorsOp2 { kPlus,kMinus };

   TMatrixTSym() { fElements = 0; }
   explicit TMatrixTSym(Int_t nrows);
   TMatrixTSym(Int_t row_lwb,Int_t row_upb);
   TMatrixTSym(Int_t nrows,const Element *data,Option_t *option="");
   TMatrixTSym(Int_t row_lwb,Int_t row_upb,const Element *data,Option_t *option="");
   TMatrixTSym(const TMatrixTSym<Element> &another);
   template <class Element2> TMatrixTSym(const TMatrixTSym<Element2> &another)
   {
      do { if (!(another.IsValid())) ::Fatal("", kAssertMsg, "another.IsValid()", 66, "/home/junho/Downloads/root/include/TMatrixTSym.h"); } while (0);
      Allocate(another.GetNrows(),another.GetNcols(),another.GetRowLwb(),another.GetColLwb());
      *this = another;
   }

   TMatrixTSym(EMatrixCreatorsOp1 op,const TMatrixTSym<Element> &prototype);
   TMatrixTSym(EMatrixCreatorsOp1 op,const TMatrixT <Element> &prototype);
   TMatrixTSym(const TMatrixTSym<Element> &a,EMatrixCreatorsOp2 op,const TMatrixTSym<Element> &b);
   TMatrixTSym(const TMatrixTSymLazy<Element> &lazy_constructor);

   virtual ~TMatrixTSym() { Clear(); }


   void TMult(const TMatrixT <Element> &a);
   void TMult(const TMatrixTSym<Element> &a);
   void Mult (const TMatrixTSym<Element> &a) { TMult(a); }

   void Plus (const TMatrixTSym<Element> &a,const TMatrixTSym<Element> &b);
   void Minus(const TMatrixTSym<Element> &a,const TMatrixTSym<Element> &b);

   virtual const Element *GetMatrixArray () const;
   virtual Element *GetMatrixArray ();
   virtual const Int_t *GetRowIndexArray() const { return 0; }
   virtual Int_t *GetRowIndexArray() { return 0; }
   virtual const Int_t *GetColIndexArray() const { return 0; }
   virtual Int_t *GetColIndexArray() { return 0; }

   virtual TMatrixTBase<Element> &SetRowIndexArray(Int_t * ) { MayNotUse("SetRowIndexArray(Int_t *)"); return *this; }
   virtual TMatrixTBase<Element> &SetColIndexArray(Int_t * ) { MayNotUse("SetColIndexArray(Int_t *)"); return *this; }

   virtual void Clear (Option_t * ="") { if (this->fIsOwner) Delete_m(this->fNelems,fElements);
                                                           else fElements = 0; this->fNelems = 0; }
   virtual Bool_t IsSymmetric() const { return kTRUE; }

           TMatrixTSym <Element> &Use (Int_t row_lwb,Int_t row_upb,Element *data);
   const TMatrixTSym <Element> &Use (Int_t row_lwb,Int_t row_upb,const Element *data) const
                                                  { return (const TMatrixTSym<Element>&)
                                                           ((const_cast<TMatrixTSym<Element> *>(this))->Use(row_lwb,row_upb,const_cast<Element *>(data))); }
           TMatrixTSym <Element> &Use (Int_t nrows,Element *data);
   const TMatrixTSym <Element> &Use (Int_t nrows,const Element *data) const;
           TMatrixTSym <Element> &Use (TMatrixTSym<Element> &a);
   const TMatrixTSym <Element> &Use (const TMatrixTSym<Element> &a) const;

           TMatrixTSym <Element> &GetSub (Int_t row_lwb,Int_t row_upb,TMatrixTSym<Element> &target,Option_t *option="S") const;
   virtual TMatrixTBase<Element> &GetSub (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,
                                                TMatrixTBase<Element> &target,Option_t *option="S") const;
           TMatrixTSym <Element> GetSub (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Option_t *option="S") const;
           TMatrixTSym <Element> &SetSub (Int_t row_lwb,const TMatrixTBase<Element> &source);
   virtual TMatrixTBase<Element> &SetSub (Int_t row_lwb,Int_t col_lwb,const TMatrixTBase<Element> &source);

   virtual TMatrixTBase<Element> &SetMatrixArray(const Element *data, Option_t *option="");

   virtual TMatrixTBase<Element> &Shift (Int_t row_shift,Int_t col_shift);
   virtual TMatrixTBase<Element> &ResizeTo (Int_t nrows,Int_t ncols,Int_t =-1);
   virtual TMatrixTBase<Element> &ResizeTo (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Int_t =-1);
   inline TMatrixTBase<Element> &ResizeTo (const TMatrixTSym<Element> &m) {
                                                return ResizeTo(m.GetRowLwb(),m.GetRowUpb(),m.GetColLwb(),m.GetColUpb()); }

   virtual Double_t Determinant () const;
   virtual void Determinant (Double_t &d1,Double_t &d2) const;

           TMatrixTSym<Element> &Invert (Double_t *det=0);
           TMatrixTSym<Element> &InvertFast (Double_t *det=0);
           TMatrixTSym<Element> &Transpose (const TMatrixTSym<Element> &source);
   inline TMatrixTSym<Element> &T () { return this->Transpose(*this); }
           TMatrixTSym<Element> &Rank1Update (const TVectorT <Element> &v,Element alpha=1.0);
           TMatrixTSym<Element> &Similarity (const TMatrixT <Element> &n);
           TMatrixTSym<Element> &Similarity (const TMatrixTSym<Element> &n);
           Element Similarity (const TVectorT <Element> &v) const;
           TMatrixTSym<Element> &SimilarityT (const TMatrixT <Element> &n);


   inline Element operator()(Int_t rown,Int_t coln) const;
   inline Element &operator()(Int_t rown,Int_t coln);


   inline const TMatrixTRow_const<Element> operator[](Int_t rown) const { return TMatrixTRow_const<Element>(*this,rown); }
   inline TMatrixTRow <Element> operator[](Int_t rown) { return TMatrixTRow <Element>(*this,rown); }

   TMatrixTSym<Element> &operator= (const TMatrixTSym <Element> &source);
   TMatrixTSym<Element> &operator= (const TMatrixTSymLazy<Element> &source);
   template <class Element2> TMatrixTSym<Element> &operator= (const TMatrixTSym<Element2> &source)
   {
      if (!AreCompatible(*this,source)) {
         Error("operator=(const TMatrixTSym2 &)","matrices not compatible");
         return *this;
      }

      TObject::operator=(source);
      const Element2 * const ps = source.GetMatrixArray();
            Element * const pt = this->GetMatrixArray();
      for (Int_t i = 0; i < this->fNelems; i++)
         pt[i] = ps[i];
      this->fTol = source.GetTol();
      return *this;
   }

   TMatrixTSym<Element> &operator= (Element val);
   TMatrixTSym<Element> &operator-=(Element val);
   TMatrixTSym<Element> &operator+=(Element val);
   TMatrixTSym<Element> &operator*=(Element val);

   TMatrixTSym &operator+=(const TMatrixTSym &source);
   TMatrixTSym &operator-=(const TMatrixTSym &source);

   TMatrixTBase<Element> &Apply(const TElementActionT <Element> &action);
   TMatrixTBase<Element> &Apply(const TElementPosActionT<Element> &action);

   virtual TMatrixTBase<Element> &Randomize (Element alpha,Element beta,Double_t &seed);
   virtual TMatrixTSym <Element> &RandomizePD(Element alpha,Element beta,Double_t &seed);

   const TMatrixT<Element> EigenVectors(TVectorT<Element> &eigenValues) const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSym::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSym::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTSym.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 179; }
};

template <class Element> inline const Element *TMatrixTSym<Element>::GetMatrixArray() const { return fElements; }
template <class Element> inline Element *TMatrixTSym<Element>::GetMatrixArray() { return fElements; }

template <class Element> inline TMatrixTSym<Element> &TMatrixTSym<Element>::Use (Int_t nrows,Element *data) { return Use(0,nrows-1,data); }
template <class Element> inline const TMatrixTSym<Element> &TMatrixTSym<Element>::Use (Int_t nrows,const Element *data) const
                                                                                                   { return Use(0,nrows-1,data); }
template <class Element> inline TMatrixTSym<Element> &TMatrixTSym<Element>::Use (TMatrixTSym<Element> &a)
                                                                                                 { return Use(a.GetRowLwb(),a.GetRowUpb(),a.GetMatrixArray()); }
template <class Element> inline const TMatrixTSym<Element> &TMatrixTSym<Element>::Use (const TMatrixTSym<Element> &a) const
                                                                                                 { return Use(a.GetRowLwb(),a.GetRowUpb(),a.GetMatrixArray()); }

template <class Element> inline TMatrixTSym<Element> TMatrixTSym<Element>::GetSub (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,
                                                                                                  Option_t *option) const
                                                                                                 {
                                                                                                   TMatrixTSym<Element> tmp;
                                                                                                   this->GetSub(row_lwb,row_upb,col_lwb,col_upb,tmp,option);
                                                                                                   return tmp;
                                                                                                 }

template <class Element> inline Element TMatrixTSym<Element>::operator()(Int_t rown,Int_t coln) const
{
   do { if (!(this->IsValid())) ::Fatal("", kAssertMsg, "this->IsValid()", 203, "/home/junho/Downloads/root/include/TMatrixTSym.h"); } while (0);
   const Int_t arown = rown-this->fRowLwb;
   const Int_t acoln = coln-this->fColLwb;
   if (arown >= this->fNrows || arown < 0) {
      Error("operator()","Request row(%d) outside matrix range of %d - %d",rown,this->fRowLwb,this->fRowLwb+this->fNrows);
      return 0.0;
   }
   if (acoln >= this->fNcols || acoln < 0) {
      Error("operator()","Request column(%d) outside matrix range of %d - %d",coln,this->fColLwb,this->fColLwb+this->fNcols);
      return 0.0;
   }
   return (fElements[arown*this->fNcols+acoln]);
}

template <class Element> inline Element &TMatrixTSym<Element>::operator()(Int_t rown,Int_t coln)
{
   do { if (!(this->IsValid())) ::Fatal("", kAssertMsg, "this->IsValid()", 219, "/home/junho/Downloads/root/include/TMatrixTSym.h"); } while (0);
   const Int_t arown = rown-this->fRowLwb;
   const Int_t acoln = coln-this->fColLwb;
   if (arown >= this->fNrows || arown < 0) {
      Error("operator()","Request row(%d) outside matrix range of %d - %d",rown,this->fRowLwb,this->fRowLwb+this->fNrows);
      return fElements[0];
   }
   if (acoln >= this->fNcols || acoln < 0) {
      Error("operator()","Request column(%d) outside matrix range of %d - %d",coln,this->fColLwb,this->fColLwb+this->fNcols);
      return fElements[0];
   }
   return (fElements[arown*this->fNcols+acoln]);
}

template <class Element> Bool_t operator== (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator+ (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator+ (const TMatrixTSym<Element> &source1, Element val);
template <class Element> TMatrixTSym<Element> operator+ ( Element val ,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator- (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator- (const TMatrixTSym<Element> &source1, Element val);
template <class Element> TMatrixTSym<Element> operator- ( Element val ,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator* (const TMatrixTSym<Element> &source, Element val );
template <class Element> TMatrixTSym<Element> operator* ( Element val, const TMatrixTSym<Element> &source );


#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"

template <class Element> TMatrixTSym<Element> operator&& (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator|| (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);

#pragma GCC diagnostic pop

template <class Element> TMatrixTSym<Element> operator> (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator>= (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator<= (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);
template <class Element> TMatrixTSym<Element> operator< (const TMatrixTSym<Element> &source1,const TMatrixTSym<Element> &source2);

template <class Element> TMatrixTSym<Element> &Add (TMatrixTSym<Element> &target, Element scalar,const TMatrixTSym<Element> &source);
template <class Element> TMatrixTSym<Element> &ElementMult(TMatrixTSym<Element> &target,const TMatrixTSym<Element> &source);
template <class Element> TMatrixTSym<Element> &ElementDiv (TMatrixTSym<Element> &target,const TMatrixTSym<Element> &source);
# 28 "/home/junho/Downloads/root/include/TVectorT.h" 2


# 1 "/home/junho/Downloads/root/include/TMatrixTSparse.h" 1
# 37 "/home/junho/Downloads/root/include/TMatrixTSparse.h"
template<class Element> class TMatrixT;

template<class Element> class TMatrixTSparse : public TMatrixTBase<Element> {

protected:

   Int_t *fRowIndex;
   Int_t *fColIndex;
   Element *fElements;

   void Allocate(Int_t nrows,Int_t ncols,Int_t row_lwb = 0,Int_t col_lwb = 0,
                 Int_t init = 0,Int_t nr_nonzeros = 0);


   void AMultB (const TMatrixTSparse<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0) {
                const TMatrixTSparse<Element> bt(TMatrixTSparse::kTransposed,b); AMultBt(a,bt,constr); }
   void AMultB (const TMatrixTSparse<Element> &a,const TMatrixT<Element> &b,Int_t constr=0) {
                const TMatrixTSparse<Element> bsp = b;
                const TMatrixTSparse<Element> bt(TMatrixTSparse::kTransposed,bsp); AMultBt(a,bt,constr); }
   void AMultB (const TMatrixT<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0) {
                const TMatrixTSparse<Element> bt(TMatrixTSparse::kTransposed,b); AMultBt(a,bt,constr); }

   void AMultBt(const TMatrixTSparse<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0);
   void AMultBt(const TMatrixTSparse<Element> &a,const TMatrixT<Element> &b,Int_t constr=0);
   void AMultBt(const TMatrixT<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0);

   void APlusB (const TMatrixTSparse<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0);
   void APlusB (const TMatrixTSparse<Element> &a,const TMatrixT<Element> &b,Int_t constr=0);
   void APlusB (const TMatrixT<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0) { APlusB(b,a,constr); }

   void AMinusB(const TMatrixTSparse<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0);
   void AMinusB(const TMatrixTSparse<Element> &a,const TMatrixT<Element> &b,Int_t constr=0);
   void AMinusB(const TMatrixT<Element> &a,const TMatrixTSparse<Element> &b,Int_t constr=0);

public:

   enum EMatrixCreatorsOp1 { kZero,kUnit,kTransposed,kAtA };
   enum EMatrixCreatorsOp2 { kMult,kMultTranspose,kPlus,kMinus };

   TMatrixTSparse() { fElements = 0; fRowIndex = 0; fColIndex = 0; }
   TMatrixTSparse(Int_t nrows,Int_t ncols);
   TMatrixTSparse(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb);
   TMatrixTSparse(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Int_t nr_nonzeros,
                  Int_t *row, Int_t *col,Element *data);
   TMatrixTSparse(const TMatrixTSparse<Element> &another);
   TMatrixTSparse(const TMatrixT<Element> &another);

   TMatrixTSparse(EMatrixCreatorsOp1 op,const TMatrixTSparse<Element> &prototype);
   TMatrixTSparse(const TMatrixTSparse<Element> &a,EMatrixCreatorsOp2 op,const TMatrixTSparse<Element> &b);
   TMatrixTSparse(const TMatrixTSparse<Element> &a,EMatrixCreatorsOp2 op,const TMatrixT <Element> &b);
   TMatrixTSparse(const TMatrixT <Element> &a,EMatrixCreatorsOp2 op,const TMatrixTSparse<Element> &b);

   virtual ~TMatrixTSparse() { Clear(); }

   virtual const Element *GetMatrixArray () const;
   virtual Element *GetMatrixArray ();
   virtual const Int_t *GetRowIndexArray() const;
   virtual Int_t *GetRowIndexArray();
   virtual const Int_t *GetColIndexArray() const;
   virtual Int_t *GetColIndexArray();

   virtual TMatrixTBase<Element> &SetRowIndexArray(Int_t *data) { memmove(fRowIndex,data,(this->fNrows+1)*sizeof(Int_t)); return *this; }
   virtual TMatrixTBase<Element> &SetColIndexArray(Int_t *data) { memmove(fColIndex,data,this->fNelems*sizeof(Int_t)); return *this; }

           TMatrixTSparse<Element> &SetSparseIndex (Int_t nelem_new);
           TMatrixTSparse<Element> &SetSparseIndex (const TMatrixTBase<Element> &another);
           TMatrixTSparse<Element> &SetSparseIndexAB(const TMatrixTSparse<Element> &a,const TMatrixTSparse<Element> &b);
           TMatrixTSparse<Element> &SetSparseIndexAB(const TMatrixT <Element> &a,const TMatrixTSparse<Element> &b);
           TMatrixTSparse<Element> &SetSparseIndexAB(const TMatrixTSparse<Element> &a,const TMatrixT <Element> &b)
                                              { return SetSparseIndexAB(b,a); }

   virtual void GetMatrix2Array (Element *data,Option_t * ="") const;
   virtual TMatrixTBase<Element> &SetMatrixArray (const Element *data,Option_t * ="")
                                                    { memcpy(fElements,data,this->fNelems*sizeof(Element)); return *this; }
   virtual TMatrixTBase<Element> &SetMatrixArray (Int_t nr_nonzeros,Int_t *irow,Int_t *icol,Element *data);
   virtual TMatrixTBase<Element> &InsertRow (Int_t row,Int_t col,const Element *v,Int_t n=-1);
   virtual void ExtractRow (Int_t row,Int_t col, Element *v,Int_t n=-1) const;

   virtual TMatrixTBase<Element> &ResizeTo(Int_t nrows,Int_t ncols,Int_t nr_nonzeros=-1);
   virtual TMatrixTBase<Element> &ResizeTo(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Int_t nr_nonzeros=-1);
   inline TMatrixTBase<Element> &ResizeTo(const TMatrixTSparse<Element> &m) {return ResizeTo(m.GetRowLwb(),m.GetRowUpb(),m.GetColLwb(),
                                                                                                m.GetColUpb(),m.GetNoElements()); }

   virtual void Clear(Option_t * ="") { if (this->fIsOwner) {
                                                     if (fElements) delete [] fElements; fElements = 0;
                                                     if (fRowIndex) delete [] fRowIndex; fRowIndex = 0;
                                                     if (fColIndex) delete [] fColIndex; fColIndex = 0;
                                                   }
                                                   this->fNelems = 0;
                                                   this->fNrowIndex = 0;
                                                 }

           TMatrixTSparse<Element> &Use (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Int_t nr_nonzeros,
                                           Int_t *pRowIndex,Int_t *pColIndex,Element *pData);
   const TMatrixTSparse<Element> &Use (Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Int_t nr_nonzeros,
                                           const Int_t *pRowIndex,const Int_t *pColIndex,const Element *pData) const
                                            { return (const TMatrixTSparse<Element>&)
                                                     ((const_cast<TMatrixTSparse<Element> *>(this))->Use(row_lwb,row_upb,col_lwb,col_upb,nr_nonzeros,
                                                                                             const_cast<Int_t *>(pRowIndex),
                                                                                             const_cast<Int_t *>(pColIndex),
                                                                                             const_cast<Element *>(pData))); }
           TMatrixTSparse<Element> &Use (Int_t nrows,Int_t ncols,Int_t nr_nonzeros,
                                           Int_t *pRowIndex,Int_t *pColIndex,Element *pData);
   const TMatrixTSparse<Element> &Use (Int_t nrows,Int_t ncols,Int_t nr_nonzeros,
                                           const Int_t *pRowIndex,const Int_t *pColIndex,const Element *pData) const;
           TMatrixTSparse<Element> &Use (TMatrixTSparse<Element> &a);
   const TMatrixTSparse<Element> &Use (const TMatrixTSparse<Element> &a) const;

   virtual TMatrixTBase<Element> &GetSub(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,
                                            TMatrixTBase<Element> &target,Option_t *option="S") const;
           TMatrixTSparse<Element> GetSub(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,Option_t *option="S") const;
   virtual TMatrixTBase<Element> &SetSub(Int_t row_lwb,Int_t col_lwb,const TMatrixTBase<Element> &source);

   virtual Bool_t IsSymmetric() const { return (*this == TMatrixTSparse<Element>(kTransposed,*this)); }
   TMatrixTSparse<Element> &Transpose (const TMatrixTSparse<Element> &source);
   inline TMatrixTSparse<Element> &T () { return this->Transpose(*this); }

   inline void Mult(const TMatrixTSparse<Element> &a,const TMatrixTSparse<Element> &b) { AMultB(a,b,0); }

   virtual TMatrixTBase<Element> &Zero ();
   virtual TMatrixTBase<Element> &UnitMatrix ();

   virtual Element RowNorm () const;
   virtual Element ColNorm () const;
   virtual Int_t NonZeros() const { return this->fNelems; }

   virtual TMatrixTBase<Element> &NormByDiag(const TVectorT<Element> & ,Option_t * )
                                              { MayNotUse("NormByDiag"); return *this; }


   Element operator()(Int_t rown,Int_t coln) const;
   Element &operator()(Int_t rown,Int_t coln);


   inline const TMatrixTSparseRow_const<Element> operator[](Int_t rown) const { return TMatrixTSparseRow_const<Element>(*this,rown); }
   inline TMatrixTSparseRow <Element> operator[](Int_t rown) { return TMatrixTSparseRow <Element>(*this,rown); }

   TMatrixTSparse<Element> &operator=(const TMatrixT<Element> &source);
   TMatrixTSparse<Element> &operator=(const TMatrixTSparse<Element> &source);

   TMatrixTSparse<Element> &operator= (Element val);
   TMatrixTSparse<Element> &operator-=(Element val);
   TMatrixTSparse<Element> &operator+=(Element val);
   TMatrixTSparse<Element> &operator*=(Element val);

   TMatrixTSparse<Element> &operator+=(const TMatrixTSparse<Element> &source) { TMatrixTSparse<Element> tmp(*this); Clear();
                                                                                if (this == &source) APlusB (tmp,tmp,1);
                                                                                else APlusB (tmp,source,1); return *this; }
   TMatrixTSparse<Element> &operator+=(const TMatrixT<Element> &source) { TMatrixTSparse<Element> tmp(*this); Clear();
                                                                                APlusB(tmp,source,1); return *this; }
   TMatrixTSparse<Element> &operator-=(const TMatrixTSparse<Element> &source) { TMatrixTSparse<Element> tmp(*this); Clear();
                                                                                if (this == &source) AMinusB (tmp,tmp,1);
                                                                                else AMinusB(tmp,source,1); return *this; }
   TMatrixTSparse<Element> &operator-=(const TMatrixT<Element> &source) { TMatrixTSparse<Element> tmp(*this); Clear();
                                                                                AMinusB(tmp,source,1); return *this; }
   TMatrixTSparse<Element> &operator*=(const TMatrixTSparse<Element> &source) { TMatrixTSparse<Element> tmp(*this); Clear();
                                                                                if (this == &source) AMultB (tmp,tmp,1);
                                                                                else AMultB (tmp,source,1); return *this; }
   TMatrixTSparse<Element> &operator*=(const TMatrixT<Element> &source) { TMatrixTSparse<Element> tmp(*this); Clear();
                                                                                AMultB(tmp,source,1); return *this; }

   virtual TMatrixTBase <Element> &Randomize (Element alpha,Element beta,Double_t &seed);
   virtual TMatrixTSparse<Element> &RandomizePD(Element alpha,Element beta,Double_t &seed);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 3; } static void Dictionary(); virtual TClass *IsA() const { return TMatrixTSparse::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TMatrixTSparse::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TMatrixTSparse.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 201; }
};

template <class Element> inline const Element *TMatrixTSparse<Element>::GetMatrixArray () const { return fElements; }
template <class Element> inline Element *TMatrixTSparse<Element>::GetMatrixArray () { return fElements; }
template <class Element> inline const Int_t *TMatrixTSparse<Element>::GetRowIndexArray() const { return fRowIndex; }
template <class Element> inline Int_t *TMatrixTSparse<Element>::GetRowIndexArray() { return fRowIndex; }
template <class Element> inline const Int_t *TMatrixTSparse<Element>::GetColIndexArray() const { return fColIndex; }
template <class Element> inline Int_t *TMatrixTSparse<Element>::GetColIndexArray() { return fColIndex; }

template <class Element>
inline TMatrixTSparse<Element> &TMatrixTSparse<Element>::Use (Int_t nrows,Int_t ncols,Int_t nr_nonzeros,
                                                                      Int_t *pRowIndex,Int_t *pColIndex,Element *pData)
                                                                        { return Use(0,nrows-1,0,ncols-1,nr_nonzeros,pRowIndex,pColIndex,pData); }
template <class Element>
inline const TMatrixTSparse<Element> &TMatrixTSparse<Element>::Use (Int_t nrows,Int_t ncols,Int_t nr_nonzeros,
                                                                      const Int_t *pRowIndex,const Int_t *pColIndex,const Element *pData) const
                                                                        { return Use(0,nrows-1,0,ncols-1,nr_nonzeros,pRowIndex,pColIndex,pData); }
template <class Element>
inline TMatrixTSparse<Element> &TMatrixTSparse<Element>::Use (TMatrixTSparse<Element> &a)
                                                                        { do { if (!(a.IsValid())) ::Fatal("", kAssertMsg, "a.IsValid()", 221, "/home/junho/Downloads/root/include/TMatrixTSparse.h"); } while (0);
                                                                           return Use(a.GetRowLwb(),a.GetRowUpb(),a.GetColLwb(),a.GetColUpb(),
                                                                                      a.GetNoElements(),a.GetRowIndexArray(),
                                                                                      a.GetColIndexArray(),a.GetMatrixArray()); }
template <class Element>
inline const TMatrixTSparse<Element> &TMatrixTSparse<Element>::Use (const TMatrixTSparse<Element> &a) const
                                                                        { do { if (!(a.IsValid())) ::Fatal("", kAssertMsg, "a.IsValid()", 227, "/home/junho/Downloads/root/include/TMatrixTSparse.h"); } while (0);
                                                                           return Use(a.GetRowLwb(),a.GetRowUpb(),a.GetColLwb(),a.GetColUpb(),
                                                                                      a.GetNoElements(),a.GetRowIndexArray(),
                                                                                      a.GetColIndexArray(),a.GetMatrixArray()); }

template <class Element>
inline TMatrixTSparse<Element> TMatrixTSparse<Element>::GetSub(Int_t row_lwb,Int_t row_upb,Int_t col_lwb,Int_t col_upb,
                                                                      Option_t *option) const
                                                                        {
                                                                          TMatrixTSparse<Element> tmp;
                                                                          this->GetSub(row_lwb,row_upb,col_lwb,col_upb,tmp,option);
                                                                          return tmp;
                                                                        }

template <class Element> TMatrixTSparse<Element> operator+ (const TMatrixTSparse<Element> &source1,const TMatrixTSparse<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator+ (const TMatrixTSparse<Element> &source1,const TMatrixT<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator+ (const TMatrixT<Element> &source1,const TMatrixTSparse<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator+ (const TMatrixTSparse<Element> &source , Element val );
template <class Element> TMatrixTSparse<Element> operator+ ( Element val ,const TMatrixTSparse<Element> &source );
template <class Element> TMatrixTSparse<Element> operator- (const TMatrixTSparse<Element> &source1,const TMatrixTSparse<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator- (const TMatrixTSparse<Element> &source1,const TMatrixT<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator- (const TMatrixT<Element> &source1,const TMatrixTSparse<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator- (const TMatrixTSparse<Element> &source , Element val );
template <class Element> TMatrixTSparse<Element> operator- ( Element val ,const TMatrixTSparse<Element> &source );
template <class Element> TMatrixTSparse<Element> operator* (const TMatrixTSparse<Element> &source1,const TMatrixTSparse<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator* (const TMatrixTSparse<Element> &source1,const TMatrixT<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator* (const TMatrixT<Element> &source1,const TMatrixTSparse<Element> &source2);
template <class Element> TMatrixTSparse<Element> operator* ( Element val ,const TMatrixTSparse<Element> &source );
template <class Element> TMatrixTSparse<Element> operator* (const TMatrixTSparse<Element> &source, Element val );

template <class Element> TMatrixTSparse<Element> &Add (TMatrixTSparse<Element> &target, Element scalar,
                                                              const TMatrixTSparse<Element> &source);
template <class Element> TMatrixTSparse<Element> &ElementMult(TMatrixTSparse<Element> &target,const TMatrixTSparse<Element> &source);
template <class Element> TMatrixTSparse<Element> &ElementDiv (TMatrixTSparse<Element> &target,const TMatrixTSparse<Element> &source);

template <class Element> Bool_t AreCompatible(const TMatrixTSparse<Element> &m1,const TMatrixTSparse<Element> &m2,Int_t verbose=0);
# 31 "/home/junho/Downloads/root/include/TVectorT.h" 2


template<class Element> class TVectorT : public TObject {

protected:
   Int_t fNrows;
   Int_t fRowLwb;
   Element *fElements;

   enum {kSizeMax = 5};
   enum {kWorkMax = 100};

   Element fDataStack[kSizeMax];
   Bool_t fIsOwner;

   Element* New_m (Int_t size);
   void Delete_m(Int_t size,Element*&);
   Int_t Memcpy_m(Element *newp,const Element *oldp,Int_t copySize,
                     Int_t newSize,Int_t oldSize);

   void Allocate(Int_t nrows,Int_t row_lwb = 0,Int_t init = 0);

   enum EVectorStatusBits {
     kStatus = (1ULL << (14))
   };

public:

   TVectorT() : fNrows(0), fRowLwb(0), fElements(0), fDataStack (), fIsOwner(kTRUE) { }
   explicit TVectorT(Int_t n);
   TVectorT(Int_t lwb,Int_t upb);
   TVectorT(Int_t n,const Element *elements);
   TVectorT(Int_t lwb,Int_t upb,const Element *elements);
   TVectorT(const TVectorT <Element> &another);
   TVectorT(const TMatrixTRow_const <Element> &mr);
   TVectorT(const TMatrixTColumn_const<Element> &mc);
   TVectorT(const TMatrixTDiag_const <Element> &md);
   template <class Element2> TVectorT(const TVectorT<Element2> &another)
   {
      do { if (!(another.IsValid())) ::Fatal("", kAssertMsg, "another.IsValid()", 70, "/home/junho/Downloads/root/include/TVectorT.h"); } while (0);
      Allocate(another.GetUpb()-another.GetLwb()+1,another.GetLwb());
      *this = another;
   }



   virtual ~TVectorT() { Clear(); }

   inline Int_t GetLwb () const { return fRowLwb; }
   inline Int_t GetUpb () const { return fNrows+fRowLwb-1; }
   inline Int_t GetNrows () const { return fNrows; }
   inline Int_t GetNoElements() const { return fNrows; }

   inline Element *GetMatrixArray () { return fElements; }
   inline const Element *GetMatrixArray () const { return fElements; }

   inline void Invalidate () { SetBit(kStatus); }
   inline void MakeValid () { ResetBit(kStatus); }
   inline Bool_t IsValid () const { return !TestBit(kStatus); }
   inline Bool_t IsOwner () const { return fIsOwner; }
   inline void SetElements(const Element *elements) { do { if (!(IsValid())) ::Fatal("", kAssertMsg, "IsValid()", 91, "/home/junho/Downloads/root/include/TVectorT.h"); } while (0);
                                                          memcpy(fElements,elements,fNrows*sizeof(Element)); }
   inline TVectorT<Element> &Shift (Int_t row_shift) { fRowLwb += row_shift; return *this; }
          TVectorT<Element> &ResizeTo (Int_t lwb,Int_t upb);
   inline TVectorT<Element> &ResizeTo (Int_t n) { return ResizeTo(0,n-1); }
   inline TVectorT<Element> &ResizeTo (const TVectorT<Element> &v) { return ResizeTo(v.GetLwb(),v.GetUpb()); }

          TVectorT<Element> &Use (Int_t lwb,Int_t upb,Element *data);
   const TVectorT<Element> &Use (Int_t lwb,Int_t upb,const Element *data) const
          { return (const TVectorT<Element>&)(const_cast<TVectorT<Element> *>(this))->Use(lwb,upb,const_cast<Element *>(data)); }
          TVectorT<Element> &Use (Int_t n,Element *data);
   const TVectorT<Element> &Use (Int_t n,const Element *data) const ;
          TVectorT<Element> &Use (TVectorT<Element> &v);
   const TVectorT<Element> &Use (const TVectorT<Element> &v) const ;

          TVectorT<Element> &GetSub (Int_t row_lwb,Int_t row_upb,TVectorT<Element> &target,Option_t *option="S") const;
          TVectorT<Element> GetSub (Int_t row_lwb,Int_t row_upb,Option_t *option="S") const;
          TVectorT<Element> &SetSub (Int_t row_lwb,const TVectorT<Element> &source);

   TVectorT<Element> &Zero();
   TVectorT<Element> &Abs ();
   TVectorT<Element> &Sqr ();
   TVectorT<Element> &Sqrt();
   TVectorT<Element> &Invert();
   TVectorT<Element> &SelectNonZeros(const TVectorT<Element> &select);

   Element Norm1 () const;
   Element Norm2Sqr() const;
   Element NormInf () const;
   Int_t NonZeros() const;
   Element Sum () const;
   Element Min () const;
   Element Max () const;

   inline const Element &operator()(Int_t index) const;
   inline Element &operator()(Int_t index);
   inline const Element &operator[](Int_t index) const { return (*this)(index); }
   inline Element &operator[](Int_t index) { return (*this)(index); }

   TVectorT<Element> &operator= (const TVectorT <Element> &source);
   TVectorT<Element> &operator= (const TMatrixTRow_const <Element> &mr);
   TVectorT<Element> &operator= (const TMatrixTColumn_const <Element> &mc);
   TVectorT<Element> &operator= (const TMatrixTDiag_const <Element> &md);
   TVectorT<Element> &operator= (const TMatrixTSparseRow_const <Element> &md);
   TVectorT<Element> &operator= (const TMatrixTSparseDiag_const<Element> &md);
   template <class Element2> TVectorT<Element> &operator= (const TVectorT<Element2> &source)
   {
      if (!AreCompatible(*this,source)) {
         Error("operator=(const TVectorT2 &)","vectors not compatible");
         return *this;
      }

     TObject::operator=(source);
     const Element2 * const ps = source.GetMatrixArray();
           Element * const pt = GetMatrixArray();
     for (Int_t i = 0; i < this->fNrows; i++)
        pt[i] = ps[i];
     return *this;
   }

   TVectorT<Element> &operator= (Element val);
   TVectorT<Element> &operator+=(Element val);
   TVectorT<Element> &operator-=(Element val);
   TVectorT<Element> &operator*=(Element val);

   TVectorT<Element> &operator+=(const TVectorT <Element> &source);
   TVectorT<Element> &operator-=(const TVectorT <Element> &source);
   TVectorT<Element> &operator*=(const TMatrixT <Element> &a);
   TVectorT<Element> &operator*=(const TMatrixTSym <Element> &a);
   TVectorT<Element> &operator*=(const TMatrixTSparse<Element> &a);

   Bool_t operator==(Element val) const;
   Bool_t operator!=(Element val) const;
   Bool_t operator< (Element val) const;
   Bool_t operator<=(Element val) const;
   Bool_t operator> (Element val) const;
   Bool_t operator>=(Element val) const;

   Bool_t MatchesNonZeroPattern(const TVectorT<Element> &select);
   Bool_t SomePositive (const TVectorT<Element> &select);
   void AddSomeConstant (Element val,const TVectorT<Element> &select);

   void Randomize (Element alpha,Element beta,Double_t &seed);

   TVectorT<Element> &Apply(const TElementActionT <Element> &action);
   TVectorT<Element> &Apply(const TElementPosActionT<Element> &action);

   void Add(const TVectorT<Element> &v);
   void Add(const TVectorT<Element> &v1, const TVectorT<Element> &v2);
   void Clear(Option_t * ="") { if (fIsOwner) Delete_m(fNrows,fElements);
                                           else fElements = 0; fNrows = 0; }
   void Draw (Option_t *option="");
   void Print(Option_t *option="") const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 4; } static void Dictionary(); virtual TClass *IsA() const { return TVectorT::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TVectorT::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TVectorT.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 185; }
};

template<class Element> inline TVectorT<Element> &TVectorT<Element>::Use (Int_t n,Element *data) { return Use(0,n-1,data); }
template<class Element> inline const TVectorT<Element> &TVectorT<Element>::Use (Int_t n,const Element *data) const { return Use(0,n-1,data); }
template<class Element> inline TVectorT<Element> &TVectorT<Element>::Use (TVectorT &v)
                                                                                   {
                                                                                     do { if (!(v.IsValid())) ::Fatal("", kAssertMsg, "v.IsValid()", 192, "/home/junho/Downloads/root/include/TVectorT.h"); } while (0);
                                                                                     return Use(v.GetLwb(),v.GetUpb(),v.GetMatrixArray());
                                                                                   }
template<class Element> inline const TVectorT<Element> &TVectorT<Element>::Use (const TVectorT &v) const
                                                                                   {
                                                                                     do { if (!(v.IsValid())) ::Fatal("", kAssertMsg, "v.IsValid()", 197, "/home/junho/Downloads/root/include/TVectorT.h"); } while (0);
                                                                                     return Use(v.GetLwb(),v.GetUpb(),v.GetMatrixArray());
                                                                                   }
template<class Element> inline TVectorT<Element> TVectorT<Element>::GetSub (Int_t row_lwb,Int_t row_upb,Option_t *option) const
                                                                                   {
                                                                                     TVectorT tmp;
                                                                                     this->GetSub(row_lwb,row_upb,tmp,option);
                                                                                     return tmp;
                                                                                   }

template<class Element> inline const Element &TVectorT<Element>::operator()(Int_t ind) const
{


   do { if (!(IsValid())) ::Fatal("", kAssertMsg, "IsValid()", 211, "/home/junho/Downloads/root/include/TVectorT.h"); } while (0);
   const Int_t aind = ind-fRowLwb;
   if (aind >= fNrows || aind < 0) {
      Error("operator()","Request index(%d) outside vector range of %d - %d",ind,fRowLwb,fRowLwb+fNrows);
      return fElements[0];
   }

   return fElements[aind];
}
template<class Element> inline Element &TVectorT<Element>::operator()(Int_t ind)
{


   do { if (!(IsValid())) ::Fatal("", kAssertMsg, "IsValid()", 224, "/home/junho/Downloads/root/include/TVectorT.h"); } while (0);
   const Int_t aind = ind-fRowLwb;
   if (aind >= fNrows || aind < 0) {
      Error("operator()","Request index(%d) outside vector range of %d - %d",ind,fRowLwb,fRowLwb+fNrows);
      return fElements[0];
   }

   return fElements[aind];
}

template<class Element> Bool_t operator== (const TVectorT <Element> &source1,const TVectorT <Element> &source2);
template<class Element> TVectorT<Element> operator+ (const TVectorT <Element> &source1,const TVectorT <Element> &source2);
template<class Element> TVectorT<Element> operator- (const TVectorT <Element> &source1,const TVectorT <Element> &source2);
template<class Element> Element operator* (const TVectorT <Element> &source1,const TVectorT <Element> &source2);
template<class Element> TVectorT<Element> operator* (const TMatrixT <Element> &a, const TVectorT <Element> &source);
template<class Element> TVectorT<Element> operator* (const TMatrixTSym <Element> &a, const TVectorT <Element> &source);
template<class Element> TVectorT<Element> operator* (const TMatrixTSparse<Element> &a, const TVectorT <Element> &source);
template<class Element> TVectorT<Element> operator* ( Element val, const TVectorT <Element> &source);

template<class Element> Element Dot (const TVectorT <Element> &source1,const TVectorT <Element> &source2);
template <class Element1,class Element2>
                        TMatrixT<Element1> OuterProduct(const TVectorT <Element1> &v1, const TVectorT <Element2> &v2);
template <class Element1,class Element2,class Element3>
                        TMatrixT<Element1> &OuterProduct( TMatrixT <Element1> &target, const TVectorT <Element2> &v1, const TVectorT <Element3> &v2);
template <class Element1,class Element2,class Element3>
                        Element1 Mult (const TVectorT <Element1> &v1, const TMatrixT <Element2> &m, const TVectorT <Element3> &v2);

template<class Element> TVectorT<Element> &Add ( TVectorT <Element> &target, Element scalar, const TVectorT <Element> &source);
template<class Element> TVectorT<Element> &Add ( TVectorT <Element> &target, Element scalar, const TMatrixT <Element> &a,
                                                         const TVectorT<Element> &source);
template<class Element> TVectorT<Element> &Add ( TVectorT <Element> &target, Element scalar, const TMatrixTSym <Element> &a,
                                                         const TVectorT<Element> &source);
template<class Element> TVectorT<Element> &Add ( TVectorT <Element> &target, Element scalar, const TMatrixTSparse<Element> &a,
                                                         const TVectorT<Element> &source);
template<class Element> TVectorT<Element> &AddElemMult ( TVectorT <Element> &target, Element scalar, const TVectorT <Element> &source1,
                                                         const TVectorT <Element> &source2);
template<class Element> TVectorT<Element> &AddElemMult ( TVectorT <Element> &target, Element scalar, const TVectorT <Element> &source1,
                                                         const TVectorT <Element> &source2,const TVectorT <Element> &select);
template<class Element> TVectorT<Element> &AddElemDiv ( TVectorT <Element> &target, Element scalar, const TVectorT <Element> &source1,
                                                         const TVectorT <Element> &source2);
template<class Element> TVectorT<Element> &AddElemDiv ( TVectorT <Element> &target, Element scalar, const TVectorT <Element> &source1,
                                                         const TVectorT <Element> &source2,const TVectorT <Element> &select);
template<class Element> TVectorT<Element> &ElementMult ( TVectorT <Element> &target, const TVectorT <Element> &source);
template<class Element> TVectorT<Element> &ElementMult ( TVectorT <Element> &target, const TVectorT <Element> &source, const TVectorT <Element> &select);
template<class Element> TVectorT<Element> &ElementDiv ( TVectorT <Element> &target, const TVectorT <Element> &source);
template<class Element> TVectorT<Element> &ElementDiv ( TVectorT <Element> &target, const TVectorT <Element> &source, const TVectorT <Element> &select);

template<class Element1,class Element2> Bool_t AreCompatible(const TVectorT<Element1> &v1,const TVectorT<Element2> &v2,Int_t verbose=0);

template<class Element1,class Element2> Bool_t AreCompatible(const TMatrixT<Element1> &m, const TVectorT<Element2> &v, Int_t verbose=0);
template<class Element1,class Element2> Bool_t AreCompatible(const TVectorT<Element1> &v, const TMatrixT<Element2> &m, Int_t verbose=0);

template<class Element> void Compare (const TVectorT <Element> &source1,const TVectorT <Element> &source2);
template<class Element> Bool_t VerifyVectorValue (const TVectorT <Element> &m, Element val,Int_t verbose, Element maxDevAllow);
template<class Element> Bool_t VerifyVectorValue (const TVectorT <Element> &m, Element val,Int_t verbose)
                                                     { return VerifyVectorValue(m,val,verbose,Element(0.0)); }
template<class Element> Bool_t VerifyVectorValue (const TVectorT <Element> &m, Element val)
                                                     { return VerifyVectorValue(m,val,1,Element(0.0)); }
template<class Element> Bool_t VerifyVectorIdentity (const TVectorT <Element> &m1,const TVectorT <Element> &m2, Int_t verbose, Element maxDevAllow);
template<class Element> Bool_t VerifyVectorIdentity (const TVectorT <Element> &m1,const TVectorT <Element> &m2, Int_t verbose)
                                                     { return VerifyVectorIdentity(m1,m2,verbose,Element(0.0)); }
template<class Element> Bool_t VerifyVectorIdentity (const TVectorT <Element> &m1,const TVectorT <Element> &m2)
                                                     { return VerifyVectorIdentity(m1,m2,1,Element(0.0)); }
# 22 "/home/junho/Downloads/root/include/TVectorD.h" 2





# 1 "/home/junho/Downloads/root/include/TMatrixD.h" 1
# 24 "/home/junho/Downloads/root/include/TMatrixD.h"
# 1 "/home/junho/Downloads/root/include/TMatrixDfwd.h" 1
# 24 "/home/junho/Downloads/root/include/TMatrixDfwd.h"
template<class Element> class TMatrixT;
typedef TMatrixT<Double_t> TMatrixD;
# 25 "/home/junho/Downloads/root/include/TMatrixD.h" 2


# 1 "/home/junho/Downloads/root/include/TMatrixDUtils.h" 1
# 37 "/home/junho/Downloads/root/include/TMatrixDUtils.h"
# 1 "/home/junho/Downloads/root/include/TMatrixDUtilsfwd.h" 1
# 37 "/home/junho/Downloads/root/include/TMatrixDUtilsfwd.h"
template<class Element> class TMatrixTRow_const;
template<class Element> class TMatrixTColumn_const;
template<class Element> class TMatrixTDiag_const;
template<class Element> class TMatrixTFlat_const;
template<class Element> class TMatrixTSub_const;
template<class Element> class TMatrixTSparseRow_const;
template<class Element> class TMatrixTSparseDiag_const;

template<class Element> class TMatrixTRow;
template<class Element> class TMatrixTColumn;
template<class Element> class TMatrixTDiag;
template<class Element> class TMatrixTFlat;
template<class Element> class TMatrixTSub;
template<class Element> class TMatrixTSparseRow;
template<class Element> class TMatrixTSparseDiag;

template<class Element> class TElementActionT;
template<class Element> class TElementPosActionT;

typedef TMatrixTRow_const <Double_t> TMatrixDRow_const;
typedef TMatrixTColumn_const <Double_t> TMatrixDColumn_const;
typedef TMatrixTDiag_const <Double_t> TMatrixDDiag_const;
typedef TMatrixTFlat_const <Double_t> TMatrixDFlat_const;
typedef TMatrixTSub_const <Double_t> TMatrixDSub_const;
typedef TMatrixTSparseRow_const <Double_t> TMatrixDSparseRow_const;
typedef TMatrixTSparseDiag_const<Double_t> TMatrixDSparseDiag_const;

typedef TMatrixTRow <Double_t> TMatrixDRow;
typedef TMatrixTColumn <Double_t> TMatrixDColumn;
typedef TMatrixTDiag <Double_t> TMatrixDDiag;
typedef TMatrixTFlat <Double_t> TMatrixDFlat;
typedef TMatrixTSub <Double_t> TMatrixDSub;
typedef TMatrixTSparseRow <Double_t> TMatrixDSparseRow;
typedef TMatrixTSparseDiag <Double_t> TMatrixDSparseDiag;

typedef TElementActionT <Double_t> TElementActionD;
typedef TElementPosActionT <Double_t> TElementPosActionD;
# 38 "/home/junho/Downloads/root/include/TMatrixDUtils.h" 2
# 28 "/home/junho/Downloads/root/include/TMatrixD.h" 2
# 28 "/home/junho/Downloads/root/include/TVectorD.h" 2


# 1 "/home/junho/Downloads/root/include/TMatrixDSym.h" 1
# 27 "/home/junho/Downloads/root/include/TMatrixDSym.h"
# 1 "/home/junho/Downloads/root/include/TMatrixDSymfwd.h" 1
# 24 "/home/junho/Downloads/root/include/TMatrixDSymfwd.h"
template<class Element> class TMatrixTSym;
typedef TMatrixTSym<Double_t> TMatrixDSym;
# 28 "/home/junho/Downloads/root/include/TMatrixDSym.h" 2
# 31 "/home/junho/Downloads/root/include/TVectorD.h" 2


# 1 "/home/junho/Downloads/root/include/TMatrixDSparse.h" 1
# 27 "/home/junho/Downloads/root/include/TMatrixDSparse.h"
# 1 "/home/junho/Downloads/root/include/TMatrixDSparsefwd.h" 1
# 24 "/home/junho/Downloads/root/include/TMatrixDSparsefwd.h"
template<class Element> class TMatrixTSparse;
typedef TMatrixTSparse<Double_t> TMatrixDSparse;
# 28 "/home/junho/Downloads/root/include/TMatrixDSparse.h" 2
# 34 "/home/junho/Downloads/root/include/TVectorD.h" 2
# 17 "/home/junho/Downloads/roounflod_trunk/src/RooUnfold.h" 2
# 1 "/home/junho/Downloads/root/include/TMatrixD.h" 1
# 18 "/home/junho/Downloads/roounflod_trunk/src/RooUnfold.h" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldResponse.h" 1
# 17 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldResponse.h"
# 1 "/home/junho/Downloads/root/include/TH1.h" 1
# 25 "/home/junho/Downloads/root/include/TH1.h"
# 1 "/home/junho/Downloads/root/include/TAxis.h" 1
# 28 "/home/junho/Downloads/root/include/TAxis.h"
# 1 "/home/junho/Downloads/root/include/TAttAxis.h" 1
# 32 "/home/junho/Downloads/root/include/TAttAxis.h"
class TAttAxis {
protected:
   Int_t fNdivisions;
   Color_t fAxisColor;
   Color_t fLabelColor;
   Style_t fLabelFont;
   Float_t fLabelOffset;
   Float_t fLabelSize;
   Float_t fTickLength;
   Float_t fTitleOffset;
   Float_t fTitleSize;
   Color_t fTitleColor;
   Style_t fTitleFont;

public:
   TAttAxis();
   virtual ~TAttAxis();
   void Copy(TAttAxis &attaxis) const;
   virtual Int_t GetNdivisions() const {return fNdivisions;}
   virtual Color_t GetAxisColor() const {return fAxisColor;}
   virtual Color_t GetLabelColor() const {return fLabelColor;}
   virtual Style_t GetLabelFont() const {return fLabelFont;}
   virtual Float_t GetLabelOffset() const {return fLabelOffset;}
   virtual Float_t GetLabelSize() const {return fLabelSize;}
   virtual Float_t GetTitleOffset() const {return fTitleOffset;}
   virtual Float_t GetTitleSize() const {return fTitleSize;}
   virtual Float_t GetTickLength() const {return fTickLength;}
   virtual Color_t GetTitleColor() const {return fTitleColor;}
   virtual Style_t GetTitleFont() const {return fTitleFont;}
   virtual void ResetAttAxis(Option_t *option="");
   virtual void SaveAttributes(ostream &out, const char *name, const char *subname);
   virtual void SetNdivisions(Int_t n=510, Bool_t optim=kTRUE);
   virtual void SetNdivisions(Int_t n1, Int_t n2, Int_t n3, Bool_t optim=kTRUE);
   virtual void SetAxisColor(Color_t color=1, Float_t alpha=1.);
   virtual void SetLabelColor(Color_t color=1, Float_t alpha=1.);
   virtual void SetLabelFont(Style_t font=62);
   virtual void SetLabelOffset(Float_t offset=0.005);
   virtual void SetLabelSize(Float_t size=0.04);
   virtual void SetTickLength(Float_t length=0.03);
   virtual void SetTickSize(Float_t size=0.03) {SetTickLength(size);}
   virtual void SetTitleOffset(Float_t offset=1);
   virtual void SetTitleSize(Float_t size=0.04);
   virtual void SetTitleColor(Color_t color=1);
   virtual void SetTitleFont(Style_t font=62);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 4; } static void Dictionary(); virtual TClass *IsA() const { return TAttAxis::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TAttAxis::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TAttAxis.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 77; };
};
# 29 "/home/junho/Downloads/root/include/TAxis.h" 2


# 1 "/home/junho/Downloads/root/include/TArrayD.h" 1
# 25 "/home/junho/Downloads/root/include/TArrayD.h"
# 1 "/home/junho/Downloads/root/include/TArray.h" 1
# 31 "/home/junho/Downloads/root/include/TArray.h"
class TBuffer;

class TArray {

protected:
   Bool_t BoundsOk(const char *where, Int_t at) const;
   Bool_t OutOfBoundsError(const char *where, Int_t i) const;

public:
   Int_t fN;

   TArray(): fN(0) { }
   TArray(Int_t n): fN(n) { }
   TArray(const TArray &a): fN(a.fN) { }
   TArray &operator=(const TArray &rhs)
     {if(this!=&rhs) fN = rhs.fN; return *this; }
   virtual ~TArray() { fN = 0; }

   Int_t GetSize() const { return fN; }
   virtual void Set(Int_t n) = 0;

   virtual Double_t GetAt(Int_t i) const = 0;
   virtual void SetAt(Double_t v, Int_t i) = 0;

   static TArray *ReadArray(TBuffer &b, const TClass *clReq);
   static void WriteArray(TBuffer &b, const TArray *a);

   friend TBuffer &operator<<(TBuffer &b, const TArray *obj);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TArray::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TArray::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TArray.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 60; }
};




inline TBuffer &operator>>(TBuffer &buf, TArray *&obj)
{


   obj = (TArray *) TArray::ReadArray(buf, TArray::Class());
   return buf;
}




TBuffer &operator<<(TBuffer &b, const TArray *obj);

inline Bool_t TArray::BoundsOk(const char *where, Int_t at) const
{
   return (at < 0 || at >= fN)
                  ? OutOfBoundsError(where, at)
                  : kTRUE;
}
# 26 "/home/junho/Downloads/root/include/TArrayD.h" 2



class TArrayD : public TArray {

public:
   Double_t *fArray;

   TArrayD();
   TArrayD(Int_t n);
   TArrayD(Int_t n, const Double_t *array);
   TArrayD(const TArrayD &array);
   TArrayD &operator=(const TArrayD &rhs);
   virtual ~TArrayD();

   void Adopt(Int_t n, Double_t *array);
   void AddAt(Double_t c, Int_t i);
   Double_t At(Int_t i) const ;
   void Copy(TArrayD &array) const {array.Set(fN,fArray);}
   const Double_t *GetArray() const { return fArray; }
   Double_t *GetArray() { return fArray; }
   Double_t GetAt(Int_t i) const { return At(i); }
   Stat_t GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void Reset() {memset(fArray, 0, fN*sizeof(Double_t));}
   void Reset(Double_t val) {for (Int_t i=0;i<fN;i++) fArray[i] = val;}
   void Set(Int_t n);
   void Set(Int_t n, const Double_t *array);
   void SetAt(Double_t v, Int_t i) { AddAt(v, i); }
   Double_t &operator[](Int_t i);
   Double_t operator[](Int_t i) const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TArrayD::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TArrayD::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TArrayD.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 57; }
};





inline TBuffer &operator>>(TBuffer &buf, TArrayD *&obj)
{


   obj = (TArrayD *) TArray::ReadArray(buf, TArrayD::Class());
   return buf;
}




inline TBuffer &operator<<(TBuffer &buf, const TArrayD *obj)
{

   return buf << (const TArray*)obj;
}

inline Double_t TArrayD::At(Int_t i) const
{
   if (!BoundsOk("TArrayD::At", i)) return 0;
   return fArray[i];
}

inline Double_t &TArrayD::operator[](Int_t i)
{
   if (!BoundsOk("TArrayD::operator[]", i))
      i = 0;
   return fArray[i];
}

inline Double_t TArrayD::operator[](Int_t i) const
{
   if (!BoundsOk("TArrayD::operator[]", i)) return 0;
   return fArray[i];
}
# 32 "/home/junho/Downloads/root/include/TAxis.h" 2


class THashList;

class TAxis : public TNamed, public TAttAxis {

private:
   Int_t fNbins;
   Double_t fXmin;
   Double_t fXmax;
   TArrayD fXbins;
   Int_t fFirst;
   Int_t fLast;
   UShort_t fBits2;
   Bool_t fTimeDisplay;
   TString fTimeFormat;
   TObject *fParent;
   THashList *fLabels;

public:

   enum { kTickPlus = (1ULL << (9)),
          kTickMinus = (1ULL << (10)),
          kAxisRange = (1ULL << (11)),
          kCenterTitle = (1ULL << (12)),
          kCenterLabels = (1ULL << (14)),
          kRotateTitle = (1ULL << (15)),
          kPalette = (1ULL << (16)),
          kNoExponent = (1ULL << (17)),
          kLabelsHori = (1ULL << (18)),
          kLabelsVert = (1ULL << (19)),
          kLabelsDown = (1ULL << (20)),
          kLabelsUp = (1ULL << (21)),
          kIsInteger = (1ULL << (22)),
          kMoreLogLabels = (1ULL << (23)),
          kDecimals = (1ULL << (11))};

   TAxis();
   TAxis(Int_t nbins, Double_t xmin, Double_t xmax);
   TAxis(Int_t nbins, const Double_t *xbins);
   TAxis(const TAxis &axis);
   virtual ~TAxis();
   TAxis& operator=(const TAxis&);

   virtual void CenterLabels(Bool_t center=kTRUE);
   virtual void CenterTitle(Bool_t center=kTRUE);
   const char *ChooseTimeFormat(Double_t axislength=0);
   virtual void Copy(TObject &axis) const;
   virtual void Delete(Option_t * ="") { }
   virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
   virtual TObject *DrawClone(Option_t * ="") const {return 0;}
   virtual void ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual Int_t FindBin(Double_t x);
   virtual Int_t FindBin(const char *label);
   virtual Int_t FindFixBin(Double_t x) const;
   virtual Double_t GetBinCenter(Int_t bin) const;
   virtual Double_t GetBinCenterLog(Int_t bin) const;
   const char *GetBinLabel(Int_t bin) const;
   virtual Double_t GetBinLowEdge(Int_t bin) const;
   virtual Double_t GetBinUpEdge(Int_t bin) const;
   virtual Double_t GetBinWidth(Int_t bin) const;
   virtual void GetCenter(Double_t *center) const;
           Bool_t GetCenterLabels() const;
           Bool_t GetCenterTitle() const;
   THashList *GetLabels() {return fLabels;}
   virtual void GetLowEdge(Double_t *edge) const;
           Bool_t GetMoreLogLabels() const;
           Int_t GetNbins() const { return fNbins; }
           Bool_t GetNoExponent() const;
           Bool_t GetDecimals() const;
   virtual TObject *GetParent() const {return fParent;}
           Bool_t GetRotateTitle() const;
   virtual const char *GetTicks() const;
   virtual Bool_t GetTimeDisplay() const {return fTimeDisplay;}
   virtual const char *GetTimeFormat() const {return fTimeFormat.Data();}
   virtual const char *GetTimeFormatOnly() const;
   const char *GetTitle() const {return fTitle.Data();}
   const TArrayD *GetXbins() const {return &fXbins;}
           Int_t GetFirst() const;
           Int_t GetLast() const;
           Double_t GetXmin() const {return fXmin;}
           Double_t GetXmax() const {return fXmax;}
   virtual void ImportAttributes(const TAxis *axis);
   Bool_t IsVariableBinSize() const {

                         return (fXbins.GetSize() != 0);
                      }
   virtual void LabelsOption(Option_t *option="h");
   virtual void RotateTitle(Bool_t rotate=kTRUE);
   virtual void SaveAttributes(std::ostream &out, const char *name, const char *subname);
   virtual void Set(Int_t nbins, Double_t xmin, Double_t xmax);
   virtual void Set(Int_t nbins, const Float_t *xbins);
   virtual void Set(Int_t nbins, const Double_t *xbins);
   virtual void SetBinLabel(Int_t bin, const char *label);
   virtual void SetDefaults();
   virtual void SetDrawOption(Option_t * ="") { }
   virtual void SetLimits(Double_t xmin, Double_t xmax);
   virtual void SetMoreLogLabels(Bool_t more=kTRUE);
   virtual void SetNoExponent(Bool_t noExponent=kTRUE);
   virtual void SetDecimals(Bool_t dot=kTRUE);
   virtual void SetParent(TObject *obj) {fParent = obj;}
   virtual void SetRange(Int_t first=0, Int_t last=0);
   virtual void SetRangeUser(Double_t ufirst, Double_t ulast);
   virtual void SetTicks(Option_t *option="+");
   virtual void SetTimeDisplay(Int_t value) {fTimeDisplay = (value != 0);}
   virtual void SetTimeFormat(const char *format="");
   virtual void SetTimeOffset(Double_t toffset, Option_t *option="local");
   virtual void UnZoom();
   virtual void ZoomOut(Double_t factor=0, Double_t offset=0);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 9; } static void Dictionary(); virtual TClass *IsA() const { return TAxis::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TAxis::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TAxis.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 142; }
};
# 26 "/home/junho/Downloads/root/include/TH1.h" 2



# 1 "/home/junho/Downloads/root/include/TAttLine.h" 1
# 32 "/home/junho/Downloads/root/include/TAttLine.h"
class TAttLine {

protected:
   Color_t fLineColor;
   Style_t fLineStyle;
   Width_t fLineWidth;

public:

   TAttLine();
   TAttLine(Color_t lcolor,Style_t lstyle, Width_t lwidth);
   virtual ~TAttLine();

   void Copy(TAttLine &attline) const;
   Int_t DistancetoLine(Int_t px, Int_t py, Double_t xp1, Double_t yp1, Double_t xp2, Double_t yp2 );
   virtual Color_t GetLineColor() const {return fLineColor;}
   virtual Style_t GetLineStyle() const {return fLineStyle;}
   virtual Width_t GetLineWidth() const {return fLineWidth;}
   virtual void Modify();
   virtual void ResetAttLine(Option_t *option="");
   virtual void SaveLineAttributes(ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1, Int_t widdef=1);
   virtual void SetLineAttributes();
   virtual void SetLineColor(Color_t lcolor) { fLineColor = lcolor;}
   virtual void SetLineColorAlpha(Color_t lcolor, Float_t lalpha);
   virtual void SetLineStyle(Style_t lstyle) { fLineStyle = lstyle;}
   virtual void SetLineWidth(Width_t lwidth) { fLineWidth = lwidth;}

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TAttLine::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TAttLine::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TAttLine.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 59; };
};

   enum ELineStyle { kSolid = 1, kDashed, kDotted, kDashDotted };
# 30 "/home/junho/Downloads/root/include/TH1.h" 2



# 1 "/home/junho/Downloads/root/include/TAttFill.h" 1
# 32 "/home/junho/Downloads/root/include/TAttFill.h"
class TAttFill {

protected:
   Color_t fFillColor;
   Style_t fFillStyle;

public:
   TAttFill();
   TAttFill(Color_t fcolor,Style_t fstyle);
   virtual ~TAttFill();
   void Copy(TAttFill &attfill) const;
   virtual Color_t GetFillColor() const { return fFillColor; }
   virtual Style_t GetFillStyle() const { return fFillStyle; }
   virtual Bool_t IsTransparent() const;
   virtual void Modify();
   virtual void ResetAttFill(Option_t *option="");
   virtual void SaveFillAttributes(ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1001);
   virtual void SetFillAttributes();
   virtual void SetFillColor(Color_t fcolor) { fFillColor = fcolor; }
   virtual void SetFillColorAlpha(Color_t fcolor, Float_t falpha);
   virtual void SetFillStyle(Style_t fstyle) { fFillStyle = fstyle; }

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TAttFill::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TAttFill::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TAttFill.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 54; }
};

inline Bool_t TAttFill::IsTransparent() const
{ return fFillStyle >= 4000 && fFillStyle <= 4100 ? kTRUE : kFALSE; }

   enum EFillStyle {kFDotted1 = 3001, kFDotted2 = 3002, kFDotted3 = 3003,
                    kFHatched1 = 3004, kHatched2 = 3005, kFHatched3 = 3006,
                    kFHatched4 = 3007, kFWicker = 3008, kFScales = 3009,
                    kFBricks = 3010, kFSnowflakes = 3011, kFCircles = 3012,
                    kFTiles = 3013, kFMondrian = 3014, kFDiamonds = 3015,
                    kFWaves1 = 3016, kFDashed1 = 3017, kFDashed2 = 3018,
                    kFAlhambra = 3019, kFWaves2 = 3020, kFStars1 = 3021,
                    kFStars2 = 3022, kFPyramids = 3023, kFFrieze = 3024,
                    kFMetopes = 3025, kFEmpty = 0 , kFSolid = 1};
# 34 "/home/junho/Downloads/root/include/TH1.h" 2



# 1 "/home/junho/Downloads/root/include/TAttMarker.h" 1
# 32 "/home/junho/Downloads/root/include/TAttMarker.h"
class TAttMarker {

protected:
   Color_t fMarkerColor;
   Style_t fMarkerStyle;
   Size_t fMarkerSize;

public:
   TAttMarker();
   TAttMarker(Color_t color, Style_t style, Size_t msize);
   virtual ~TAttMarker();
           void Copy(TAttMarker &attmarker) const;
   virtual Color_t GetMarkerColor() const {return fMarkerColor;}
   virtual Style_t GetMarkerStyle() const {return fMarkerStyle;}
   virtual Size_t GetMarkerSize() const {return fMarkerSize;}
   virtual void Modify();
   virtual void ResetAttMarker(Option_t *toption="");
   virtual void SaveMarkerAttributes(ostream &out, const char *name, Int_t coldef=1, Int_t stydef=1, Int_t sizdef=1);
   virtual void SetMarkerAttributes();
   virtual void SetMarkerColor(Color_t mcolor=1) { fMarkerColor = mcolor;}
   virtual void SetMarkerColorAlpha(Color_t mcolor, Float_t malpha);
   virtual void SetMarkerStyle(Style_t mstyle=1) { fMarkerStyle = mstyle;}
   virtual void SetMarkerSize(Size_t msize=1) { fMarkerSize = msize;}

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TAttMarker::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TAttMarker::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TAttMarker.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 56; };
};

   enum EMarkerStyle {kDot=1, kPlus, kStar, kCircle=4, kMultiply=5,
                      kFullDotSmall=6, kFullDotMedium=7, kFullDotLarge=8,
                      kFullCircle=20, kFullSquare=21, kFullTriangleUp=22,
                      kFullTriangleDown=23, kOpenCircle=24, kOpenSquare=25,
                      kOpenTriangleUp=26, kOpenDiamond=27, kOpenCross=28,
                      kFullStar=29, kOpenStar=30, kOpenTriangleDown=32,
                      kFullDiamond=33, kFullCross=34};
# 38 "/home/junho/Downloads/root/include/TH1.h" 2



# 1 "/home/junho/Downloads/root/include/TArrayC.h" 1
# 29 "/home/junho/Downloads/root/include/TArrayC.h"
class TArrayC : public TArray {

public:
   Char_t *fArray;

   TArrayC();
   TArrayC(Int_t n);
   TArrayC(Int_t n, const Char_t *array);
   TArrayC(const TArrayC &array);
   TArrayC &operator=(const TArrayC &rhs);
   virtual ~TArrayC();

   void Adopt(Int_t n, Char_t *array);
   void AddAt(Char_t c, Int_t i);
   Char_t At(Int_t i) const ;
   void Copy(TArrayC &array) const {array.Set(fN,fArray);}
   const Char_t *GetArray() const { return fArray; }
   Char_t *GetArray() { return fArray; }
   Double_t GetAt(Int_t i) const { return At(i); }
   Stat_t GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void Reset(Char_t val=0) {memset(fArray,val,fN*sizeof(Char_t));}
   void Set(Int_t n);
   void Set(Int_t n, const Char_t *array);
   void SetAt(Double_t v, Int_t i) { AddAt((Char_t)v, i); }
   Char_t &operator[](Int_t i);
   Char_t operator[](Int_t i) const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TArrayC::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TArrayC::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TArrayC.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 56; }
};





inline TBuffer &operator>>(TBuffer &buf, TArrayC *&obj)
{


   obj = (TArrayC *) TArray::ReadArray(buf, TArrayC::Class());
   return buf;
}




inline TBuffer &operator<<(TBuffer &buf, const TArrayC *obj)
{

   return buf << (const TArray*)obj;
}

inline Char_t TArrayC::At(Int_t i) const
{
   if (!BoundsOk("TArrayC::At", i)) return 0;
   return fArray[i];
}

inline Char_t &TArrayC::operator[](Int_t i)
{
   if (!BoundsOk("TArrayC::operator[]", i))
      i = 0;
   return fArray[i];
}

inline Char_t TArrayC::operator[](Int_t i) const
{
   if (!BoundsOk("TArrayC::operator[]", i)) return 0;
   return fArray[i];
}
# 42 "/home/junho/Downloads/root/include/TH1.h" 2


# 1 "/home/junho/Downloads/root/include/TArrayS.h" 1
# 29 "/home/junho/Downloads/root/include/TArrayS.h"
class TArrayS : public TArray {

public:
   Short_t *fArray;

   TArrayS();
   TArrayS(Int_t n);
   TArrayS(Int_t n, const Short_t *array);
   TArrayS(const TArrayS &array);
   TArrayS &operator=(const TArrayS &rhs);
   virtual ~TArrayS();

   void Adopt(Int_t n, Short_t *array);
   void AddAt(Short_t c, Int_t i);
   Short_t At(Int_t i) const ;
   void Copy(TArrayS &array) const {array.Set(fN,fArray);}
   const Short_t *GetArray() const { return fArray; }
   Short_t *GetArray() { return fArray; }
   Double_t GetAt(Int_t i) const { return At(i); }
   Stat_t GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void Reset() {memset(fArray, 0,fN*sizeof(Short_t));}
   void Reset(Short_t val) {for (Int_t i=0;i<fN;i++) fArray[i] = val;}
   void Set(Int_t n);
   void Set(Int_t n, const Short_t *array);
   void SetAt(Double_t v, Int_t i) { AddAt((Short_t)v, i); }
   Short_t &operator[](Int_t i);
   Short_t operator[](Int_t i) const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TArrayS::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TArrayS::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TArrayS.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 57; }
};




inline TBuffer &operator>>(TBuffer &buf, TArrayS *&obj)
{


   obj = (TArrayS *) TArray::ReadArray(buf, TArrayS::Class());
   return buf;
}




inline TBuffer &operator<<(TBuffer &buf, const TArrayS *obj)
{

   return buf << (const TArray*)obj;
}

inline Short_t TArrayS::At(Int_t i) const
{
   if (!BoundsOk("TArrayS::At", i)) return 0;
   return fArray[i];
}

inline Short_t &TArrayS::operator[](Int_t i)
{
   if (!BoundsOk("TArrayS::operator[]", i))
      i = 0;
   return fArray[i];
}

inline Short_t TArrayS::operator[](Int_t i) const
{
   if (!BoundsOk("TArrayS::operator[]", i)) return 0;
   return fArray[i];
}
# 45 "/home/junho/Downloads/root/include/TH1.h" 2


# 1 "/home/junho/Downloads/root/include/TArrayI.h" 1
# 29 "/home/junho/Downloads/root/include/TArrayI.h"
class TArrayI : public TArray {

public:
   Int_t *fArray;

   TArrayI();
   TArrayI(Int_t n);
   TArrayI(Int_t n, const Int_t *array);
   TArrayI(const TArrayI &array);
   TArrayI &operator=(const TArrayI &rhs);
   virtual ~TArrayI();

   void Adopt(Int_t n, Int_t *array);
   void AddAt(Int_t c, Int_t i);
   Int_t At(Int_t i) const ;
   void Copy(TArrayI &array) const {array.Set(fN,fArray);}
   const Int_t *GetArray() const { return fArray; }
   Int_t *GetArray() { return fArray; }
   Double_t GetAt(Int_t i) const { return At(i); }
   Stat_t GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void Reset() {memset(fArray, 0, fN*sizeof(Int_t));}
   void Reset(Int_t val) {for (Int_t i=0;i<fN;i++) fArray[i] = val;}
   void Set(Int_t n);
   void Set(Int_t n, const Int_t *array);
   void SetAt(Double_t v, Int_t i) { AddAt((Int_t)v, i); }
   Int_t &operator[](Int_t i);
   Int_t operator[](Int_t i) const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TArrayI::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TArrayI::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TArrayI.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 57; }
};





inline TBuffer &operator>>(TBuffer &buf, TArrayI *&obj)
{


   obj = (TArrayI *) TArray::ReadArray(buf, TArrayI::Class());
   return buf;
}




inline TBuffer &operator<<(TBuffer &buf, const TArrayI *obj)
{

   return buf << (const TArray*)obj;
}

inline Int_t TArrayI::At(Int_t i) const
{
   if (!BoundsOk("TArrayI::At", i)) return 0;
   return fArray[i];
}

inline Int_t &TArrayI::operator[](Int_t i)
{
   if (!BoundsOk("TArrayI::operator[]", i))
      i = 0;
   return fArray[i];
}

inline Int_t TArrayI::operator[](Int_t i) const
{
   if (!BoundsOk("TArrayI::operator[]", i)) return 0;
   return fArray[i];
}
# 48 "/home/junho/Downloads/root/include/TH1.h" 2


# 1 "/home/junho/Downloads/root/include/TArrayF.h" 1
# 29 "/home/junho/Downloads/root/include/TArrayF.h"
class TArrayF : public TArray {

public:
   Float_t *fArray;

   TArrayF();
   TArrayF(Int_t n);
   TArrayF(Int_t n, const Float_t *array);
   TArrayF(const TArrayF &array);
   TArrayF &operator=(const TArrayF &rhs);
   virtual ~TArrayF();

   void Adopt(Int_t n, Float_t *array);
   void AddAt(Float_t c, Int_t i);
   Float_t At(Int_t i) const ;
   void Copy(TArrayF &array) const {array.Set(fN,fArray);}
   const Float_t *GetArray() const { return fArray; }
   Float_t *GetArray() { return fArray; }
   Double_t GetAt(Int_t i) const { return At(i); }
   Stat_t GetSum() const {Stat_t sum=0; for (Int_t i=0;i<fN;i++) sum+=fArray[i]; return sum;}
   void Reset() {memset(fArray, 0, fN*sizeof(Float_t));}
   void Reset(Float_t val) {for (Int_t i=0;i<fN;i++) fArray[i] = val;}
   void Set(Int_t n);
   void Set(Int_t n, const Float_t *array);
   void SetAt(Double_t v, Int_t i) { AddAt((Float_t)v, i); }
   Float_t &operator[](Int_t i);
   Float_t operator[](Int_t i) const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TArrayF::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TArrayF::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TArrayF.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 57; }
};




inline TBuffer &operator>>(TBuffer &buf, TArrayF *&obj)
{


   obj = (TArrayF *) TArray::ReadArray(buf, TArrayF::Class());
   return buf;
}




inline TBuffer &operator<<(TBuffer &buf, const TArrayF *obj)
{

   return buf << (const TArray*)obj;
}

inline Float_t TArrayF::At(Int_t i) const
{
   if (!BoundsOk("TArrayF::At", i)) return 0;
   return fArray[i];
}

inline Float_t &TArrayF::operator[](Int_t i)
{
   if (!BoundsOk("TArrayF::operator[]", i))
      i = 0;
   return fArray[i];
}

inline Float_t TArrayF::operator[](Int_t i) const
{
   if (!BoundsOk("TArrayF::operator[]", i)) return 0;
   return fArray[i];
}
# 51 "/home/junho/Downloads/root/include/TH1.h" 2




# 1 "/home/junho/Downloads/root/include/Foption.h" 1
# 24 "/home/junho/Downloads/root/include/Foption.h"
struct Foption_t {




   int Quiet;
   int Verbose;
   int Bound;
   int Chi2;
   int Like;
   int User;
   int W1;
   int Errors;
   int More;
   int Range;
   int Gradient;
   int Nostore;
   int Nograph;
   int Plus;
   int Integral;
   int Nochisq;
   int Minuit;
   int NoErrX;
   int Robust;
   int StoreResult;
   double hRobust;

  Foption_t() :
      Quiet (0),
      Verbose (0),
      Bound (0),
      Chi2 (0),
      Like (0),
      User (0),
      W1 (0),
      Errors (0),
      More (0),
      Range (0),
      Gradient (0),
      Nostore (0),
      Nograph (0),
      Plus (0),
      Integral (0),
      Nochisq (0),
      Minuit (0),
      NoErrX (0),
      Robust (0),
      StoreResult (0),
      hRobust (0)
   {}
};
# 56 "/home/junho/Downloads/root/include/TH1.h" 2
# 64 "/home/junho/Downloads/root/include/TH1.h"
# 1 "/usr/lib/gcc/x86_64-linux-gnu/5/include/float.h" 1 3 4
# 65 "/home/junho/Downloads/root/include/TH1.h" 2

class TF1;
class TH1D;
class TBrowser;
class TDirectory;
class TList;
class TCollection;
class TVirtualFFT;
class TVirtualHistPainter;

# 1 "/home/junho/Downloads/root/include/TFitResultPtr.h" 1
# 29 "/home/junho/Downloads/root/include/TFitResultPtr.h"
class TFitResult;

class TFitResultPtr {
public:

   TFitResultPtr(int status = -1): fStatus(status), fPointer(0) {};

   TFitResultPtr(TFitResult* p);

   TFitResultPtr(const TFitResultPtr& rhs);

   operator int() const { return fStatus; }

   TFitResult& operator*() const;

   TFitResult* operator->() const;

   TFitResult* Get() const { return fPointer; }

   TFitResultPtr& operator= (const TFitResultPtr& rhs);

   virtual ~TFitResultPtr();

private:

   int fStatus;
   TFitResult* fPointer;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TFitResultPtr::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TFitResultPtr::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TFitResultPtr.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 57; }
};
# 76 "/home/junho/Downloads/root/include/TH1.h" 2

class TH1 : public TNamed, public TAttLine, public TAttFill, public TAttMarker {

public:


   enum EBinErrorOpt {
         kNormal = 0,
         kPoisson = 1 ,
         kPoisson2 = 2
   };

protected:
    Int_t fNcells;
    TAxis fXaxis;
    TAxis fYaxis;
    TAxis fZaxis;
    Short_t fBarOffset;
    Short_t fBarWidth;
    Double_t fEntries;
    Double_t fTsumw;
    Double_t fTsumw2;
    Double_t fTsumwx;
    Double_t fTsumwx2;
    Double_t fMaximum;
    Double_t fMinimum;
    Double_t fNormFactor;
    TArrayD fContour;
    TArrayD fSumw2;
    TString fOption;
    TList *fFunctions;
    Int_t fBufferSize;
    Double_t *fBuffer;
    TDirectory *fDirectory;
    Int_t fDimension;
    Double_t *fIntegral;
    TVirtualHistPainter *fPainter;
    EBinErrorOpt fBinStatErrOpt;
    static Int_t fgBufferSize;
    static Bool_t fgAddDirectory;
    static Bool_t fgStatOverflows;
    static Bool_t fgDefaultSumw2;

public:
   static Int_t FitOptionsMake(Option_t *option, Foption_t &Foption);

private:
   Int_t AxisChoice(Option_t *axis) const;
   void Build();

   TH1& operator=(const TH1&);


protected:
   TH1();
   TH1(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup);
   TH1(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins);
   TH1(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins);
   virtual Int_t BufferFill(Double_t x, Double_t w);
   virtual Bool_t FindNewAxisLimits(const TAxis* axis, const Double_t point, Double_t& newMin, Double_t &newMax);
   virtual void SavePrimitiveHelp(ostream &out, const char *hname, Option_t *option = "");
   static Bool_t RecomputeAxisLimits(TAxis& destAxis, const TAxis& anAxis);
   static Bool_t SameLimitsAndNBins(const TAxis& axis1, const TAxis& axis2);

   virtual Double_t DoIntegral(Int_t ix1, Int_t ix2, Int_t iy1, Int_t iy2, Int_t iz1, Int_t iz2, Double_t & err,
                               Option_t * opt, Bool_t doerr = kFALSE) const;

   virtual void DoFillN(Int_t ntimes, const Double_t *x, const Double_t *w, Int_t stride=1);

   static bool CheckAxisLimits(const TAxis* a1, const TAxis* a2);
   static bool CheckBinLimits(const TAxis* a1, const TAxis* a2);
   static bool CheckBinLabels(const TAxis* a1, const TAxis* a2);
   static bool CheckEqualAxes(const TAxis* a1, const TAxis* a2);
   static bool CheckConsistentSubAxes(const TAxis *a1, Int_t firstBin1, Int_t lastBin1, const TAxis *a2, Int_t firstBin2=0, Int_t lastBin2=0);
   static bool CheckConsistency(const TH1* h1, const TH1* h2);

public:

   enum {
      kNoStats = (1ULL << (9)),
      kUserContour = (1ULL << (10)),
      kCanRebin = (1ULL << (11)),
      kLogX = (1ULL << (15)),
      kIsZoomed = (1ULL << (16)),
      kNoTitle = (1ULL << (17)),
      kIsAverage = (1ULL << (18))
   };






   enum {
      kNstat = 13
   };



   TH1(const TH1&);
   virtual ~TH1();

   virtual Bool_t Add(TF1 *h1, Double_t c1=1, Option_t *option="");
   virtual Bool_t Add(const TH1 *h1, Double_t c1=1);
   virtual Bool_t Add(const TH1 *h, const TH1 *h2, Double_t c1=1, Double_t c2=1);
   virtual void AddBinContent(Int_t bin);
   virtual void AddBinContent(Int_t bin, Double_t w);
   static void AddDirectory(Bool_t add=kTRUE);
   static Bool_t AddDirectoryStatus();
   virtual void Browse(TBrowser *b);
   virtual Double_t Chi2Test(const TH1* h2, Option_t *option = "UU", Double_t *res = 0) const;
   virtual Double_t Chi2TestX(const TH1* h2, Double_t &chi2, Int_t &ndf, Int_t &igood,Option_t *option = "UU", Double_t *res = 0) const;

   virtual Double_t Chisquare(TF1 * f1, Option_t *option = "") const;
   virtual Double_t ComputeIntegral(Bool_t onlyPositive = false);
   virtual void Copy(TObject &hnew) const;
   virtual void DirectoryAutoAdd(TDirectory *);
   virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
   virtual Bool_t Divide(TF1 *f1, Double_t c1=1);
   virtual Bool_t Divide(const TH1 *h1);
   virtual Bool_t Divide(const TH1 *h1, const TH1 *h2, Double_t c1=1, Double_t c2=1, Option_t *option="");
   virtual void Draw(Option_t *option="");
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual TH1 *DrawNormalized(Option_t *option="", Double_t norm=1) const;
   virtual void DrawPanel();
   virtual Int_t BufferEmpty(Int_t action=0);
   virtual void Eval(TF1 *f1, Option_t *option="");
   virtual void ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual TH1 *FFT(TH1* h_output, Option_t *option);
   virtual Int_t Fill(Double_t x);
   virtual Int_t Fill(Double_t x, Double_t w);
   virtual Int_t Fill(const char *name, Double_t w);
   virtual void FillN(Int_t ntimes, const Double_t *x, const Double_t *w, Int_t stride=1);
   virtual void FillN(Int_t, const Double_t *, const Double_t *, const Double_t *, Int_t) {;}
   virtual void FillRandom(const char *fname, Int_t ntimes=5000);
   virtual void FillRandom(TH1 *h, Int_t ntimes=5000);
   virtual Int_t FindBin(Double_t x, Double_t y=0, Double_t z=0);
   virtual Int_t FindFixBin(Double_t x, Double_t y=0, Double_t z=0) const;
   virtual Int_t FindFirstBinAbove(Double_t threshold=0, Int_t axis=1) const;
   virtual Int_t FindLastBinAbove (Double_t threshold=0, Int_t axis=1) const;
   virtual TObject *FindObject(const char *name) const;
   virtual TObject *FindObject(const TObject *obj) const;
   virtual TFitResultPtr Fit(const char *formula ,Option_t *option="" ,Option_t *goption="", Double_t xmin=0, Double_t xmax=0);
   virtual TFitResultPtr Fit(TF1 *f1 ,Option_t *option="" ,Option_t *goption="", Double_t xmin=0, Double_t xmax=0);
   virtual void FitPanel();
   TH1 *GetAsymmetry(TH1* h2, Double_t c2=1, Double_t dc2=0);
   Int_t GetBufferLength() const {return fBuffer ? (Int_t)fBuffer[0] : 0;}
   Int_t GetBufferSize () const {return fBufferSize;}
   const Double_t *GetBuffer() const {return fBuffer;}
   static Int_t GetDefaultBufferSize();
   virtual Double_t *GetIntegral();
   TH1 *GetCumulative(Bool_t forward = kTRUE, const char* suffix = "_cumulative") const;

   TList *GetListOfFunctions() const { return fFunctions; }

   virtual Int_t GetNdivisions(Option_t *axis="X") const;
   virtual Color_t GetAxisColor(Option_t *axis="X") const;
   virtual Color_t GetLabelColor(Option_t *axis="X") const;
   virtual Style_t GetLabelFont(Option_t *axis="X") const;
   virtual Float_t GetLabelOffset(Option_t *axis="X") const;
   virtual Float_t GetLabelSize(Option_t *axis="X") const;
   virtual Style_t GetTitleFont(Option_t *axis="X") const;
   virtual Float_t GetTitleOffset(Option_t *axis="X") const;
   virtual Float_t GetTitleSize(Option_t *axis="X") const;
   virtual Float_t GetTickLength(Option_t *axis="X") const;
   virtual Float_t GetBarOffset() const {return Float_t(0.001*Float_t(fBarOffset));}
   virtual Float_t GetBarWidth() const {return Float_t(0.001*Float_t(fBarWidth));}
   virtual Int_t GetContour(Double_t *levels=0);
   virtual Double_t GetContourLevel(Int_t level) const;
   virtual Double_t GetContourLevelPad(Int_t level) const;

   virtual Int_t GetBin(Int_t binx, Int_t biny=0, Int_t binz=0) const;
   virtual void GetBinXYZ(Int_t binglobal, Int_t &binx, Int_t &biny, Int_t &binz) const;
   virtual Double_t GetBinCenter(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t binx, Int_t biny) const;
   virtual Double_t GetBinContent(Int_t binx, Int_t biny, Int_t binz) const;
   virtual Double_t GetBinError(Int_t bin) const;
   virtual Double_t GetBinError(Int_t binx, Int_t biny) const;
   virtual Double_t GetBinError(Int_t binx, Int_t biny, Int_t binz) const;
   virtual Double_t GetBinErrorLow(Int_t bin) const;
   virtual Double_t GetBinErrorUp(Int_t bin) const;
   virtual EBinErrorOpt GetBinErrorOption() const { return fBinStatErrOpt; }
   virtual Double_t GetBinLowEdge(Int_t bin) const;
   virtual Double_t GetBinWidth(Int_t bin) const;
   virtual Double_t GetBinWithContent(Double_t c, Int_t &binx, Int_t firstx=0, Int_t lastx=0,Double_t maxdiff=0) const;
   virtual Double_t GetCellContent(Int_t binx, Int_t biny) const;
   virtual Double_t GetCellError(Int_t binx, Int_t biny) const;
   virtual void GetCenter(Double_t *center) const;
   static Bool_t GetDefaultSumw2();
   TDirectory *GetDirectory() const {return fDirectory;}
   virtual Double_t GetEntries() const;
   virtual Double_t GetEffectiveEntries() const;
   virtual TF1 *GetFunction(const char *name) const;
   virtual Int_t GetDimension() const { return fDimension; }
   virtual Double_t GetKurtosis(Int_t axis=1) const;
   virtual void GetLowEdge(Double_t *edge) const;
   virtual Double_t GetMaximum(Double_t maxval=3.40282346638528859812e+38F) const;
   virtual Int_t GetMaximumBin() const;
   virtual Int_t GetMaximumBin(Int_t &locmax, Int_t &locmay, Int_t &locmaz) const;
   virtual Double_t GetMaximumStored() const {return fMaximum;}
   virtual Double_t GetMinimum(Double_t minval=-3.40282346638528859812e+38F) const;
   virtual Int_t GetMinimumBin() const;
   virtual Int_t GetMinimumBin(Int_t &locmix, Int_t &locmiy, Int_t &locmiz) const;
   virtual Double_t GetMinimumStored() const {return fMinimum;}
   virtual Double_t GetMean(Int_t axis=1) const;
   virtual Double_t GetMeanError(Int_t axis=1) const;
   virtual Int_t GetNbinsX() const {return fXaxis.GetNbins();}
   virtual Int_t GetNbinsY() const {return fYaxis.GetNbins();}
   virtual Int_t GetNbinsZ() const {return fZaxis.GetNbins();}
   virtual Double_t GetNormFactor() const {return fNormFactor;}
   virtual char *GetObjectInfo(Int_t px, Int_t py) const;
   Option_t *GetOption() const {return fOption.Data();}

   TVirtualHistPainter *GetPainter(Option_t *option="");

   virtual Int_t GetQuantiles(Int_t nprobSum, Double_t *q, const Double_t *probSum=0);
   virtual Double_t GetRandom() const;
   virtual void GetStats(Double_t *stats) const;
           Double_t GetStdDev(Int_t axis=1) const { return GetRMS(axis); }
           Double_t GetStdDevError(Int_t axis=1) const { return GetRMSError(axis); }
   virtual Double_t GetSumOfWeights() const;
   virtual TArrayD *GetSumw2() {return &fSumw2;}
   virtual const TArrayD *GetSumw2() const {return &fSumw2;}
   virtual Int_t GetSumw2N() const {return fSumw2.fN;}
   virtual Double_t GetRMS(Int_t axis=1) const;
   virtual Double_t GetRMSError(Int_t axis=1) const;
   virtual Double_t GetSkewness(Int_t axis=1) const;
           TAxis *GetXaxis() const;
           TAxis *GetYaxis() const;
           TAxis *GetZaxis() const;
   virtual Double_t Integral(Option_t *option="") const;
   virtual Double_t Integral(Int_t binx1, Int_t binx2, Option_t *option="") const;
   virtual Double_t IntegralAndError(Int_t binx1, Int_t binx2, Double_t & err, Option_t *option="") const;
   virtual Double_t Interpolate(Double_t x);
   virtual Double_t Interpolate(Double_t x, Double_t y);
   virtual Double_t Interpolate(Double_t x, Double_t y, Double_t z);
           Bool_t IsBinOverflow(Int_t bin) const;
           Bool_t IsBinUnderflow(Int_t bin) const;
   virtual Double_t AndersonDarlingTest(const TH1 *h2, Option_t *option="") const;
   virtual Double_t AndersonDarlingTest(const TH1 *h2, Double_t &advalue) const;
   virtual Double_t KolmogorovTest(const TH1 *h2, Option_t *option="") const;
   virtual void LabelsDeflate(Option_t *axis="X");
   virtual void LabelsInflate(Option_t *axis="X");
   virtual void LabelsOption(Option_t *option="h", Option_t *axis="X");
   virtual Long64_t Merge(TCollection *list);
   virtual Bool_t Multiply(TF1 *h1, Double_t c1=1);
   virtual Bool_t Multiply(const TH1 *h1);
   virtual Bool_t Multiply(const TH1 *h1, const TH1 *h2, Double_t c1=1, Double_t c2=1, Option_t *option="");
   virtual void Paint(Option_t *option="");
   virtual void Print(Option_t *option="") const;
   virtual void PutStats(Double_t *stats);
   virtual TH1 *Rebin(Int_t ngroup=2, const char*newname="", const Double_t *xbins=0);
   virtual TH1 *RebinX(Int_t ngroup=2, const char*newname="") { return Rebin(ngroup,newname, (Double_t*) 0); }
   virtual void RebinAxis(Double_t x, TAxis *axis);
   virtual void Rebuild(Option_t *option="");
   virtual void RecursiveRemove(TObject *obj);
   virtual void Reset(Option_t *option="");
   virtual void ResetStats();
   virtual void SavePrimitive(ostream &out, Option_t *option = "");
   virtual void Scale(Double_t c1=1, Option_t *option="");
   virtual void SetAxisColor(Color_t color=1, Option_t *axis="X");
   virtual void SetAxisRange(Double_t xmin, Double_t xmax, Option_t *axis="X");
   virtual void SetBarOffset(Float_t offset=0.25) {fBarOffset = Short_t(1000*offset);}
   virtual void SetBarWidth(Float_t width=0.5) {fBarWidth = Short_t(1000*width);}
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t binx, Int_t biny, Double_t content);
   virtual void SetBinContent(Int_t binx, Int_t biny, Int_t binz, Double_t content);
   virtual void SetBinError(Int_t bin, Double_t error);
   virtual void SetBinError(Int_t binx, Int_t biny, Double_t error);
   virtual void SetBinError(Int_t binx, Int_t biny, Int_t binz, Double_t error);
   virtual void SetBins(Int_t nx, Double_t xmin, Double_t xmax);
   virtual void SetBins(Int_t nx, const Double_t *xBins);
   virtual void SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax);
   virtual void SetBins(Int_t nx, const Double_t *xBins, Int_t ny, const Double_t *yBins);
   virtual void SetBins(Int_t nx, Double_t xmin, Double_t xmax, Int_t ny, Double_t ymin, Double_t ymax,
                            Int_t nz, Double_t zmin, Double_t zmax);
   virtual void SetBins(Int_t nx, const Double_t *xBins, Int_t ny, const Double_t * yBins, Int_t nz,
                            const Double_t *zBins);
   virtual void SetBinsLength(Int_t = -1) { }
   virtual void SetBinErrorOption(EBinErrorOpt type) { fBinStatErrOpt = type; }
   virtual void SetBuffer(Int_t buffersize, Option_t *option="");
   virtual void SetCellContent(Int_t binx, Int_t biny, Double_t content);
   virtual void SetCellError(Int_t binx, Int_t biny, Double_t content);
   virtual void SetContent(const Double_t *content);
   virtual void SetContour(Int_t nlevels, const Double_t *levels=0);
   virtual void SetContourLevel(Int_t level, Double_t value);
   static void SetDefaultBufferSize(Int_t buffersize=1000);
   static void SetDefaultSumw2(Bool_t sumw2=kTRUE);
   virtual void SetDirectory(TDirectory *dir);
   virtual void SetEntries(Double_t n) {fEntries = n;};
   virtual void SetError(const Double_t *error);
   virtual void SetLabelColor(Color_t color=1, Option_t *axis="X");
   virtual void SetLabelFont(Style_t font=62, Option_t *axis="X");
   virtual void SetLabelOffset(Float_t offset=0.005, Option_t *axis="X");
   virtual void SetLabelSize(Float_t size=0.02, Option_t *axis="X");

   virtual void SetMaximum(Double_t maximum=-1111);
   virtual void SetMinimum(Double_t minimum=-1111);
   virtual void SetName(const char *name);
   virtual void SetNameTitle(const char *name, const char *title);
   virtual void SetNdivisions(Int_t n=510, Option_t *axis="X");
   virtual void SetNormFactor(Double_t factor=1) {fNormFactor = factor;}
   virtual void SetStats(Bool_t stats=kTRUE);
   virtual void SetOption(Option_t *option=" ") {fOption = option;}
   virtual void SetTickLength(Float_t length=0.02, Option_t *axis="X");
   virtual void SetTitleFont(Style_t font=62, Option_t *axis="X");
   virtual void SetTitleOffset(Float_t offset=1, Option_t *axis="X");
   virtual void SetTitleSize(Float_t size=0.02, Option_t *axis="X");
   virtual void SetTitle(const char *title);
   virtual void SetXTitle(const char *title) {fXaxis.SetTitle(title);}
   virtual void SetYTitle(const char *title) {fYaxis.SetTitle(title);}
   virtual void SetZTitle(const char *title) {fZaxis.SetTitle(title);}
   virtual TH1 *ShowBackground(Int_t niter=20, Option_t *option="same");
   virtual Int_t ShowPeaks(Double_t sigma=2, Option_t *option="", Double_t threshold=0.05);
   virtual void Smooth(Int_t ntimes=1, Option_t *option="");
   static void SmoothArray(Int_t NN, Double_t *XX, Int_t ntimes=1);
   static void StatOverflows(Bool_t flag=kTRUE);
   virtual void Sumw2(Bool_t flag = kTRUE);
   void UseCurrentStyle();
   static TH1 *TransformHisto(TVirtualFFT *fft, TH1* h_output, Option_t *option);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 7; } static void Dictionary(); virtual TClass *IsA() const { return TH1::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH1::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH1.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 398; }
};



class TH1C : public TH1, public TArrayC {

public:
   TH1C();
   TH1C(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup);
   TH1C(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins);
   TH1C(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins);
   TH1C(const TH1C &h1c);
   virtual ~TH1C();

   virtual void AddBinContent(Int_t bin);
   virtual void AddBinContent(Int_t bin, Double_t w);
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t bin, Int_t) const {return GetBinContent(bin);}
   virtual Double_t GetBinContent(Int_t bin, Int_t, Int_t) const {return GetBinContent(bin);}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t bin, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinContent(Int_t bin, Int_t, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH1C& operator=(const TH1C &h1);
   friend TH1C operator*(Double_t c1, const TH1C &h1);
   friend TH1C operator*(const TH1C &h1, Double_t c1);
   friend TH1C operator+(const TH1C &h1, const TH1C &h2);
   friend TH1C operator-(const TH1C &h1, const TH1C &h2);
   friend TH1C operator*(const TH1C &h1, const TH1C &h2);
   friend TH1C operator/(const TH1C &h1, const TH1C &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TH1C::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH1C::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH1.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 433; }
};

TH1C operator*(Double_t c1, const TH1C &h1);
inline
TH1C operator*(const TH1C &h1, Double_t c1) {return operator*(c1,h1);}
TH1C operator+(const TH1C &h1, const TH1C &h2);
TH1C operator-(const TH1C &h1, const TH1C &h2);
TH1C operator*(const TH1C &h1, const TH1C &h2);
TH1C operator/(const TH1C &h1, const TH1C &h2);



class TH1S : public TH1, public TArrayS {

public:
   TH1S();
   TH1S(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup);
   TH1S(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins);
   TH1S(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins);
   TH1S(const TH1S &h1s);
   virtual ~TH1S();

   virtual void AddBinContent(Int_t bin);
   virtual void AddBinContent(Int_t bin, Double_t w);
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t bin, Int_t) const {return GetBinContent(bin);}
   virtual Double_t GetBinContent(Int_t bin, Int_t, Int_t) const {return GetBinContent(bin);}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t bin, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinContent(Int_t bin, Int_t, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH1S& operator=(const TH1S &h1);
   friend TH1S operator*(Double_t c1, const TH1S &h1);
   friend TH1S operator*(const TH1S &h1, Double_t c1);
   friend TH1S operator+(const TH1S &h1, const TH1S &h2);
   friend TH1S operator-(const TH1S &h1, const TH1S &h2);
   friend TH1S operator*(const TH1S &h1, const TH1S &h2);
   friend TH1S operator/(const TH1S &h1, const TH1S &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TH1S::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH1S::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH1.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 476; }
};

TH1S operator*(Double_t c1, const TH1S &h1);
inline
TH1S operator*(const TH1S &h1, Double_t c1) {return operator*(c1,h1);}
TH1S operator+(const TH1S &h1, const TH1S &h2);
TH1S operator-(const TH1S &h1, const TH1S &h2);
TH1S operator*(const TH1S &h1, const TH1S &h2);
TH1S operator/(const TH1S &h1, const TH1S &h2);



class TH1I: public TH1, public TArrayI {

public:
   TH1I();
   TH1I(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup);
   TH1I(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins);
   TH1I(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins);
   TH1I(const TH1I &h1i);
   virtual ~TH1I();

   virtual void AddBinContent(Int_t bin);
   virtual void AddBinContent(Int_t bin, Double_t w);
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t bin, Int_t) const {return GetBinContent(bin);}
   virtual Double_t GetBinContent(Int_t bin, Int_t, Int_t) const {return GetBinContent(bin);}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t bin, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinContent(Int_t bin, Int_t, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH1I& operator=(const TH1I &h1);
   friend TH1I operator*(Double_t c1, const TH1I &h1);
   friend TH1I operator*(const TH1I &h1, Double_t c1);
   friend TH1I operator+(const TH1I &h1, const TH1I &h2);
   friend TH1I operator-(const TH1I &h1, const TH1I &h2);
   friend TH1I operator*(const TH1I &h1, const TH1I &h2);
   friend TH1I operator/(const TH1I &h1, const TH1I &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TH1I::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH1I::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH1.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 519; }
};

TH1I operator*(Double_t c1, const TH1I &h1);
inline
TH1I operator*(const TH1I &h1, Double_t c1) {return operator*(c1,h1);}
TH1I operator+(const TH1I &h1, const TH1I &h2);
TH1I operator-(const TH1I &h1, const TH1I &h2);
TH1I operator*(const TH1I &h1, const TH1I &h2);
TH1I operator/(const TH1I &h1, const TH1I &h2);



class TH1F : public TH1, public TArrayF {

public:
   TH1F();
   TH1F(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup);
   TH1F(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins);
   TH1F(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins);
   TH1F(const TVectorF &v);
   TH1F(const TH1F &h1f);
   virtual ~TH1F();

   virtual void AddBinContent(Int_t bin) {++fArray[bin];}
   virtual void AddBinContent(Int_t bin, Double_t w)
                                 {fArray[bin] += Float_t (w);}
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t bin, Int_t) const {return GetBinContent(bin);}
   virtual Double_t GetBinContent(Int_t bin, Int_t, Int_t) const {return GetBinContent(bin);}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t bin, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinContent(Int_t bin, Int_t, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH1F& operator=(const TH1F &h1);
   friend TH1F operator*(Double_t c1, const TH1F &h1);
   friend TH1F operator*(const TH1F &h1, Double_t c1);
   friend TH1F operator+(const TH1F &h1, const TH1F &h2);
   friend TH1F operator-(const TH1F &h1, const TH1F &h2);
   friend TH1F operator*(const TH1F &h1, const TH1F &h2);
   friend TH1F operator/(const TH1F &h1, const TH1F &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TH1F::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH1F::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH1.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 564; }
};

TH1F operator*(Double_t c1, const TH1F &h1);
inline
TH1F operator*(const TH1F &h1, Double_t c1) {return operator*(c1,h1);}
TH1F operator+(const TH1F &h1, const TH1F &h2);
TH1F operator-(const TH1F &h1, const TH1F &h2);
TH1F operator*(const TH1F &h1, const TH1F &h2);
TH1F operator/(const TH1F &h1, const TH1F &h2);



class TH1D : public TH1, public TArrayD {

public:
   TH1D();
   TH1D(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup);
   TH1D(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins);
   TH1D(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins);
   TH1D(const TVectorD &v);
   TH1D(const TH1D &h1d);
   virtual ~TH1D();

   virtual void AddBinContent(Int_t bin) {++fArray[bin];}
   virtual void AddBinContent(Int_t bin, Double_t w)
                                 {fArray[bin] += Double_t (w);}
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t bin, Int_t) const {return GetBinContent(bin);}
   virtual Double_t GetBinContent(Int_t bin, Int_t, Int_t) const {return GetBinContent(bin);}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t bin, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinContent(Int_t bin, Int_t, Int_t, Double_t content) {SetBinContent(bin,content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH1D& operator=(const TH1D &h1);
   friend TH1D operator*(Double_t c1, const TH1D &h1);
   friend TH1D operator*(const TH1D &h1, Double_t c1);
   friend TH1D operator+(const TH1D &h1, const TH1D &h2);
   friend TH1D operator-(const TH1D &h1, const TH1D &h2);
   friend TH1D operator*(const TH1D &h1, const TH1D &h2);
   friend TH1D operator/(const TH1D &h1, const TH1D &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TH1D::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH1D::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH1.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 609; }
};

TH1D operator*(Double_t c1, const TH1D &h1);
inline
TH1D operator*(const TH1D &h1, Double_t c1) {return operator*(c1,h1);}
TH1D operator+(const TH1D &h1, const TH1D &h2);
TH1D operator-(const TH1D &h1, const TH1D &h2);
TH1D operator*(const TH1D &h1, const TH1D &h2);
TH1D operator/(const TH1D &h1, const TH1D &h2);

   extern TH1 *R__H(Int_t hid);
   extern TH1 *R__H(const char *hname);
# 18 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldResponse.h" 2

# 1 "/home/junho/Downloads/root/include/TVectorDfwd.h" 1
# 20 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldResponse.h" 2



class TF1;
class TH2;
class TH2D;
class TAxis;
class TCollection;

class RooUnfoldResponse : public TNamed {

public:



  RooUnfoldResponse();
  RooUnfoldResponse (const char* name, const char* title);
  RooUnfoldResponse (const TString& name, const TString& title);
  RooUnfoldResponse (const RooUnfoldResponse& rhs);
  virtual ~RooUnfoldResponse();
  virtual RooUnfoldResponse& operator= (const RooUnfoldResponse& rhs);



  RooUnfoldResponse (Int_t nb, Double_t xlo, Double_t xhi, const char* name= 0, const char* title= 0);
  RooUnfoldResponse (Int_t nm, Double_t mlo, Double_t mhi, Int_t nt, Double_t tlo, Double_t thi, const char* name= 0, const char* title= 0);
  RooUnfoldResponse (const TH1* measured, const TH1* truth, const char* name= 0, const char* title= 0);
  RooUnfoldResponse (const TH1* measured, const TH1* truth, const TH2* response, const char* name= 0, const char* title= 0);



  virtual RooUnfoldResponse& Reset ();
  virtual RooUnfoldResponse& Setup (const RooUnfoldResponse& rhs);
  virtual RooUnfoldResponse& Setup (Int_t nb, Double_t xlo, Double_t xhi);
  virtual RooUnfoldResponse& Setup (Int_t nm, Double_t mlo, Double_t mhi, Int_t nt, Double_t tlo, Double_t thi);
  virtual RooUnfoldResponse& Setup (const TH1* measured, const TH1* truth);
  virtual RooUnfoldResponse& Setup (const TH1* measured, const TH1* truth, const TH2* response);



  virtual Int_t Fill (Double_t xr, Double_t xt, Double_t w= 1.0);
  virtual Int_t Fill (Double_t xr, Double_t yr, Double_t xt, Double_t yt, Double_t w= 1.0);
  virtual Int_t Fill (Double_t xr, Double_t yr, Double_t zr, Double_t xt, Double_t yt, Double_t zt, Double_t w= 1.0);

          Int_t Miss (Double_t xt);
          Int_t Miss (Double_t xt, Double_t w);
          Int_t Miss (Double_t xt, Double_t yt, Double_t w);
  virtual Int_t Miss (Double_t xt, Double_t yt, Double_t zt, Double_t w);

          Int_t Fake (Double_t xr);
          Int_t Fake (Double_t xr, Double_t w);
          Int_t Fake (Double_t xr, Double_t yr, Double_t w);
  virtual Int_t Fake (Double_t xr, Double_t yr, Double_t zr, Double_t w);

  virtual void Add (const RooUnfoldResponse& rhs);
  virtual Long64_t Merge (TCollection* others);



  Int_t GetDimensionMeasured() const;
  Int_t GetDimensionTruth() const;
  Int_t GetNbinsMeasured() const;
  Int_t GetNbinsTruth() const;

  const TH1* Hmeasured() const;
  TH1* Hmeasured();
  const TH1* Hfakes() const;
  TH1* Hfakes();
  const TH1* Htruth() const;
  TH1* Htruth();
  const TH2* Hresponse() const;
  TH2* Hresponse();
  TH2D* HresponseNoOverflow() const;

  const TVectorD& Vmeasured() const;
  const TVectorD& Emeasured() const;
  const TVectorD& Vfakes() const;
  const TVectorD& Vtruth() const;
  const TVectorD& Etruth() const;
  const TMatrixD& Mresponse() const;
  const TMatrixD& Eresponse() const;

  Double_t operator() (Int_t r, Int_t t) const;

  void UseOverflow (Bool_t set= kTRUE);
  Bool_t UseOverflowStatus() const;
  Double_t FakeEntries() const;
  virtual void Print (Option_t* option="") const;

  static TH1D* H2H1D(const TH1* h, Int_t nb);
  static TVectorD* H2V (const TH1* h, Int_t nb, Bool_t overflow= kFALSE);
  static TVectorD* H2VE (const TH1* h, Int_t nb, Bool_t overflow= kFALSE);
  static TMatrixD* H2M (const TH2* h, Int_t nx, Int_t ny, const TH1* norm= 0, Bool_t overflow= kFALSE);
  static TMatrixD* H2ME (const TH2* h, Int_t nx, Int_t ny, const TH1* norm= 0, Bool_t overflow= kFALSE);
  static void V2H (const TVectorD& v, TH1* h, Int_t nb, Bool_t overflow= kFALSE);
  static Int_t FindBin(const TH1* h, Double_t x);
  static Int_t FindBin(const TH1* h, Double_t x, Double_t y);
  static Int_t FindBin(const TH1* h, Double_t x, Double_t y, Double_t z);
  static Int_t GetBin (const TH1* h, Int_t i, Bool_t overflow= kFALSE);
  static Double_t GetBinContent (const TH1* h, Int_t i, Bool_t overflow= kFALSE);
  static Double_t GetBinError (const TH1* h, Int_t i, Bool_t overflow= kFALSE);
  static void PrintMatrix (const TMatrixD& m, const char* name="matrix", const char* format=0, Int_t cols_per_sheet=10);

  TH1* ApplyToTruth (const TH1* truth= 0, const char* name= "AppliedResponse") const;
  TF1* MakeFoldingFunction (TF1* func, Double_t eps=1e-12, Bool_t verbose=false) const;

  RooUnfoldResponse* RunToy() const;

private:

  virtual RooUnfoldResponse& Init();
  virtual RooUnfoldResponse& Setup();
  virtual void ClearCache();
  virtual void SetNameTitleDefault (const char* defname= 0, const char* deftitle= 0);
  virtual Int_t Miss1D (Double_t xt, Double_t w= 1.0);
  virtual Int_t Miss2D (Double_t xt, Double_t yt, Double_t w= 1.0);
  virtual Int_t Fake1D (Double_t xr, Double_t w= 1.0);
  virtual Int_t Fake2D (Double_t xr, Double_t yr, Double_t w= 1.0);

  static Int_t GetBinDim (const TH1* h, Int_t i);
  static void ReplaceAxis(TAxis* axis, const TAxis* source);



  Int_t _mdim;
  Int_t _tdim;
  Int_t _nm;
  Int_t _nt;
  TH1* _mes;
  TH1* _fak;
  TH1* _tru;
  TH2* _res;
  Int_t _overflow;

  mutable TVectorD* _vMes;
  mutable TVectorD* _eMes;
  mutable TVectorD* _vFak;
  mutable TVectorD* _vTru;
  mutable TVectorD* _eTru;
  mutable TMatrixD* _mRes;
  mutable TMatrixD* _eRes;
  mutable Bool_t _cached;

public:

  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldResponse::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldResponse::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldResponse.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 165; }
};



inline
RooUnfoldResponse::RooUnfoldResponse()
  : TNamed()
{

  Init();
}

inline
RooUnfoldResponse::RooUnfoldResponse (const char* name, const char* title)
  : TNamed(name,title)
{

  Init();
}

inline
RooUnfoldResponse::RooUnfoldResponse (const TString& name, const TString& title)
  : TNamed(name,title)
{

  Init();
}

inline
RooUnfoldResponse::~RooUnfoldResponse()
{

  Reset();
}


inline
RooUnfoldResponse& RooUnfoldResponse::Setup (Int_t nb, Double_t xlo, Double_t xhi)
{

  return Setup (nb, xlo, xhi, nb, xlo, xhi);
}


inline
Int_t RooUnfoldResponse::GetDimensionMeasured() const
{

  return _mdim;
}

inline
Int_t RooUnfoldResponse::GetDimensionTruth() const
{

  return _tdim;
}

inline
Int_t RooUnfoldResponse::GetNbinsMeasured() const
{

  return _nm;
}

inline
Int_t RooUnfoldResponse::GetNbinsTruth() const
{

  return _nt;
}


inline
const TH1* RooUnfoldResponse::Hmeasured() const
{

  return _mes;
}


inline
TH1* RooUnfoldResponse::Hmeasured()
{
  return _mes;
}


inline
const TH1* RooUnfoldResponse::Hfakes() const
{

  return _fak;
}


inline
TH1* RooUnfoldResponse::Hfakes()
{
  return _fak;
}

inline
const TH1* RooUnfoldResponse::Htruth() const
{

  return _tru;
}

inline
TH1* RooUnfoldResponse::Htruth()
{
  return _tru;
}

inline
const TH2* RooUnfoldResponse::Hresponse() const
{

  return _res;
}

inline
TH2* RooUnfoldResponse::Hresponse()
{
  return _res;
}


inline
const TVectorD& RooUnfoldResponse::Vmeasured() const
{

  if (!_vMes) _cached= (_vMes= H2V (_mes, _nm, _overflow));
  return *_vMes;
}

inline
const TVectorD& RooUnfoldResponse::Vfakes() const
{

  if (!_vFak) _cached= (_vFak= H2V (_fak, _nm, _overflow));
  return *_vFak;
}

inline
const TVectorD& RooUnfoldResponse::Emeasured() const
{

  if (!_eMes) _cached= (_eMes= H2VE (_mes, _nm, _overflow));
  return *_eMes;
}

inline
const TVectorD& RooUnfoldResponse::Vtruth() const
{

  if (!_vTru) _cached= (_vTru= H2V (_tru, _nt, _overflow));
  return *_vTru;
}

inline
const TVectorD& RooUnfoldResponse::Etruth() const
{

  if (!_eTru) _cached= (_eTru= H2VE (_tru, _nt, _overflow));
  return *_eTru;
}

inline
const TMatrixD& RooUnfoldResponse::Mresponse() const
{

  if (!_mRes) _cached= (_mRes= H2M (_res, _nm, _nt, _tru, _overflow));
  return *_mRes;
}

inline
const TMatrixD& RooUnfoldResponse::Eresponse() const
{

  if (!_eRes) _cached= (_eRes= H2ME (_res, _nm, _nt, _tru, _overflow));
  return *_eRes;
}


inline
Double_t RooUnfoldResponse::operator() (Int_t r, Int_t t) const
{

  return Mresponse()(r,t);
}

inline
Int_t RooUnfoldResponse::GetBin (const TH1* h, Int_t i, Bool_t overflow)
{


  return (h->GetDimension()<2) ? i+(overflow ? 0 : 1) : GetBinDim(h,i);
}

inline
Double_t RooUnfoldResponse::GetBinContent (const TH1* h, Int_t i, Bool_t overflow)
{

  return h->GetBinContent (GetBin (h, i, overflow));
}

inline
Double_t RooUnfoldResponse::GetBinError (const TH1* h, Int_t i, Bool_t overflow)
{

  return h->GetBinError (GetBin (h, i, overflow));
}


inline
Int_t RooUnfoldResponse::Miss (Double_t xt)
{

  return Miss1D(xt);
}

inline
Int_t RooUnfoldResponse::Miss (Double_t xt, Double_t w)
{

  return _tdim==2 ? Miss2D(xt,w) : Miss1D(xt,w);
}

inline
Int_t RooUnfoldResponse::Miss (Double_t xt, Double_t yt, Double_t w)
{

  return _tdim==3 ? Miss(xt,yt,w,1.0) : Miss2D(xt,yt,w);
}


inline
Int_t RooUnfoldResponse::Fake (Double_t xr)
{

  return Fake1D(xr);
}

inline
Int_t RooUnfoldResponse::Fake (Double_t xr, Double_t w)
{

  return _mdim==2 ? Fake2D(xr,w) : Fake1D(xr,w);
}

inline
Int_t RooUnfoldResponse::Fake (Double_t xr, Double_t yr, Double_t w)
{

  return _mdim==3 ? Fake(xr,yr,w,1.0) : Fake2D(xr,yr,w);
}


inline
void RooUnfoldResponse::UseOverflow (Bool_t set)
{

  _overflow= (set ? 1 : 0);
}

inline
Bool_t RooUnfoldResponse::UseOverflowStatus() const
{

  return _overflow;
}

inline
Double_t RooUnfoldResponse::FakeEntries() const
{

  return _fak ? _fak->GetEntries() : 0.0;
}

inline
Int_t RooUnfoldResponse::FindBin (const TH1* h, Double_t x)
{

  return h->GetXaxis()->FindBin(x) - 1;
}
# 19 "/home/junho/Downloads/roounflod_trunk/src/RooUnfold.h" 2

class TH1;
class TH1D;

class RooUnfold : public TNamed {

public:

  enum Algorithm {
    kNone,
    kBayes,
    kSVD,
    kBinByBin,
    kTUnfold,
    kInvert,
    kDagostini,
    kIDS
  };

  enum ErrorTreatment {
    kNoError,
    kErrors,
    kCovariance,
    kCovToy,
    kDefault=-1
  };

  static RooUnfold* New (Algorithm alg, const RooUnfoldResponse* res, const TH1* meas, Double_t regparm= -1e30,
                         const char* name= 0, const char* title= 0);



  RooUnfold();
  RooUnfold (const char* name, const char* title);
  RooUnfold (const TString& name, const TString& title);
  RooUnfold (const RooUnfold& rhs);
  virtual ~RooUnfold();
  RooUnfold& operator= (const RooUnfold& rhs);
  virtual RooUnfold* Clone (const char* newname= 0) const;



  RooUnfold (const RooUnfoldResponse* res, const TH1* meas, const char* name= 0, const char* title= 0);



  virtual RooUnfold& Setup (const RooUnfoldResponse* res, const TH1* meas);
  virtual void SetMeasured (const TH1* meas);
  virtual void SetMeasured (const TVectorD& meas, const TMatrixD& cov);
  virtual void SetMeasured (const TVectorD& meas, const TVectorD& err);
  virtual void SetMeasuredCov (const TMatrixD& cov);
  virtual void SetResponse (const RooUnfoldResponse* res);
  virtual void SetResponse (RooUnfoldResponse* res, Bool_t takeOwnership);

  virtual void Reset ();



  virtual const RooUnfoldResponse* response() const;
  virtual const TH1* Hmeasured() const;
  virtual TH1* Hreco (ErrorTreatment withError=kErrors);
  const TVectorD& Vmeasured() const;
  const TVectorD& Emeasured() const;
  const TMatrixD& GetMeasuredCov() const;

  virtual TVectorD& Vreco();
  virtual TMatrixD Ereco (ErrorTreatment witherror=kCovariance);
  virtual TVectorD ErecoV (ErrorTreatment witherror=kErrors);
  virtual TMatrixD Wreco (ErrorTreatment witherror=kCovariance);

  virtual Int_t verbose() const;
  virtual void SetVerbose (Int_t level);
  virtual void IncludeSystematics (Int_t dosys= 1);
  virtual Int_t SystematicsIncluded() const;
  virtual Int_t NToys() const;
  virtual void SetNToys (Int_t toys);
  virtual Int_t Overflow() const;
  virtual void PrintTable (std::ostream& o, const TH1* hTrue= 0, ErrorTreatment withError=kDefault);
  virtual void SetRegParm (Double_t parm);
  virtual Double_t GetRegParm() const;
  Double_t Chi2 (const TH1* hTrue,ErrorTreatment DoChi2=kCovariance);
  Double_t GetMinParm() const;
  Double_t GetMaxParm() const;
  Double_t GetStepSizeParm() const;
  Double_t GetDefaultParm() const;
  RooUnfold* RunToy() const;
  void Print(Option_t* opt="") const;

  static void PrintTable (std::ostream& o, const TH1* hTrainTrue, const TH1* hTrain,
                          const TH1* hTrue, const TH1* hMeas, const TH1* hReco,
                          Int_t _nm=0, Int_t _nt=0, Bool_t _overflow=kFALSE,
                          ErrorTreatment withError=kDefault, Double_t chi_squ=-999.0);

  static void PrintTable (std::ostream& o, const TVectorD& vTrainTrue, const TVectorD& vTrain,
                          const TVectorD& vMeas, const TVectorD& vReco, Int_t nm, Int_t nt);

protected:
  void Assign (const RooUnfold& rhs);
  virtual void SetNameTitleDefault();
  virtual void Unfold();
  virtual void GetErrors();
  virtual void GetCov();
  virtual void GetErrMat();
  virtual void GetWgt();
  virtual void GetSettings();
  virtual Bool_t UnfoldWithErrors (ErrorTreatment withError, bool getWeights=false);

  static TMatrixD CutZeros (const TMatrixD& ereco);
  static TH1D* HistNoOverflow (const TH1* h, Bool_t overflow);
  static TMatrixD& ABAT (const TMatrixD& a, const TMatrixD& b, TMatrixD& c);
  static TMatrixD& ABAT (const TMatrixD& a, const TVectorD& b, TMatrixD& c);
  static TH1* Resize (TH1* h, Int_t nx, Int_t ny=-1, Int_t nz=-1);
  static Int_t InvertMatrix (const TMatrixD& mat, TMatrixD& inv, const char* name="matrix", Int_t verbose=1);

private:
  void Init();
  void Destroy();
  void CopyData (const RooUnfold& rhs);

protected:

  Double_t _minparm;
  Double_t _maxparm;
  Double_t _stepsizeparm;
  Double_t _defaultparm;
  Int_t _verbose;
  Int_t _nm;
  Int_t _nt;
  Int_t _overflow;
  Int_t _NToys;
  Bool_t _unfolded;
  Bool_t _haveCov;
  Bool_t _haveWgt;
  Bool_t _have_err_mat;
  Bool_t _fail;
  Bool_t _haveErrors;
  Bool_t _haveCovMes;
  Int_t _dosys;
  const RooUnfoldResponse* _res;
  RooUnfoldResponse* _resmine;
  const TH1* _meas;
  TH1* _measmine;
  TVectorD _rec;
  TMatrixD _cov;
  TMatrixD _wgt;
  TVectorD _variances;
  TMatrixD _err_mat;
  mutable TVectorD* _vMes;
  mutable TVectorD* _eMes;
  mutable TMatrixD* _covMes;
  mutable TMatrixD* _covL;
  ErrorTreatment _withError;

public:

  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfold::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfold::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfold.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 174; }
};





inline
RooUnfold::RooUnfold()
  : TNamed()
{

  Init();
}

inline
RooUnfold::RooUnfold (const char* name, const char* title)
  : TNamed(name,title)
{

  Init();
}

inline
RooUnfold::RooUnfold (const TString& name, const TString& title)
  : TNamed(name,title)
{

  Init();
}

inline
RooUnfold::~RooUnfold()
{
  Destroy();
}

inline
RooUnfold& RooUnfold::operator= (const RooUnfold& rhs)
{

  Assign(rhs);
  return *this;
}

inline
Int_t RooUnfold::verbose() const
{

  return _verbose;
}

inline
Int_t RooUnfold::NToys() const
{

  return _NToys;
}

inline
Int_t RooUnfold::Overflow() const
{

  return _overflow;
}

inline
const RooUnfoldResponse* RooUnfold::response() const
{

  return _res;
}

inline
const TH1* RooUnfold::Hmeasured() const
{

  return _meas;
}

inline
TVectorD& RooUnfold::Vreco()
{

  if (!_unfolded) {
    if (!_fail) Unfold();
    if (!_unfolded) {
      _fail= true;
      if (_nt > 0 && _rec.GetNrows() == 0) _rec.ResizeTo(_nt);
    }
  }
  return _rec;
}

inline
const TVectorD& RooUnfold::Vmeasured() const
{

  if (!_vMes)
    _vMes= RooUnfoldResponse::H2V (_meas, _res->GetNbinsMeasured(), _overflow);
  return *_vMes;
}

inline
const TVectorD& RooUnfold::Emeasured() const
{

  if (!_eMes)
    _eMes= RooUnfoldResponse::H2VE (_meas, _res->GetNbinsMeasured(), _overflow);
  return *_eMes;
}

inline
void RooUnfold::SetVerbose (Int_t level)
{

  _verbose= level;
}

inline
void RooUnfold::SetNToys (Int_t toys)
{

  _NToys= toys;
}

inline
void RooUnfold::SetRegParm (Double_t)
{

}

inline
Double_t RooUnfold::GetRegParm() const
{

  return -1;
}

inline
void RooUnfold::IncludeSystematics (Int_t dosys)
{


  if (dosys!=_dosys) _haveWgt= _haveErrors= _haveCov= _have_err_mat= kFALSE;
  _dosys= dosys;
}

inline
Int_t RooUnfold::SystematicsIncluded() const
{

  return _dosys;
}
# 17 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldParms.h" 2

class TH1;
class RooUnfold;
class TProfile;

class RooUnfoldParms : public TNamed {
    public:
    RooUnfoldParms(const RooUnfold* unfold_in=0,RooUnfold::ErrorTreatment err=RooUnfold::kCovariance,const TH1* truth=0);
    virtual ~RooUnfoldParms();
    TProfile* GetChi2();
    TProfile* GetRMSError();
    TProfile* GetMeanResiduals();
    TH1* GetRMSResiduals();
    const RooUnfold* unfold;
    RooUnfold::ErrorTreatment doerror;
    const TH1* hTrue;
    void SetMinParm(double min);
    void SetMaxParm(double max);
    void SetStepSizeParm(double size);

    private:
    bool _done_math;
    TH1* hrms;
    TProfile* hch2;
    TProfile* herr;
    TProfile* hres;
    void DoMath();
    void Init();
    Double_t _maxparm;
    Double_t _minparm;
    Double_t _stepsizeparm;
public:
    private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldParms::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldParms::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldParms.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 49; }
};
# 4 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldSvd.h" 1
# 20 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldSvd.h"
class RooUnfoldResponse;
class TH1;
class TH1D;
class TH2D;
class TSVDUnfold_130729;

class RooUnfoldSvd : public RooUnfold {

public:



  RooUnfoldSvd();
  RooUnfoldSvd (const char* name, const char* title);
  RooUnfoldSvd (const TString& name, const TString& title);
  RooUnfoldSvd (const RooUnfoldSvd& rhs);
  virtual ~RooUnfoldSvd();
  RooUnfoldSvd& operator= (const RooUnfoldSvd& rhs);
  virtual RooUnfoldSvd* Clone (const char* newname= 0) const;



  RooUnfoldSvd (const RooUnfoldResponse* res, const TH1* meas, Int_t kreg= 0,
                const char* name= 0, const char* title= 0);

  RooUnfoldSvd (const RooUnfoldResponse* res, const TH1* meas, Int_t kreg, Int_t ntoyssvd,
                const char* name= 0, const char* title= 0);

  void SetKterm (Int_t kreg);
  Int_t GetKterm() const;
  virtual void SetRegParm (Double_t parm);
  virtual Double_t GetRegParm() const;
  virtual void Reset();
  TSVDUnfold_130729* Impl();

  void SetNtoysSVD (Int_t ntoyssvd);
  Int_t GetNtoysSVD() const;

protected:
  void Assign (const RooUnfoldSvd& rhs);
  virtual void Unfold();
  virtual void GetCov();
  virtual void GetWgt();
  virtual void GetSettings();

private:
  void Init();
  void Destroy();
  void CopyData (const RooUnfoldSvd& rhs);

protected:

  TSVDUnfold_130729* _svd;
  Int_t _kreg;
  Int_t _nb;

  TH1D *_meas1d, *_train1d, *_truth1d;
  TH2D *_reshist, *_meascov;

public:
  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldSvd::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldSvd::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldSvd.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 80; }
};



inline
RooUnfoldSvd::RooUnfoldSvd()
  : RooUnfold()
{

  Init();
}

inline
RooUnfoldSvd::RooUnfoldSvd (const char* name, const char* title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldSvd::RooUnfoldSvd (const TString& name, const TString& title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldSvd& RooUnfoldSvd::operator= (const RooUnfoldSvd& rhs)
{

  Assign(rhs);
  return *this;
}

inline
RooUnfoldSvd::~RooUnfoldSvd()
{
  Destroy();
}


inline
void RooUnfoldSvd::SetKterm (Int_t kreg)
{

  _kreg= kreg;
}


inline
Int_t RooUnfoldSvd::GetKterm() const
{

  return _kreg;
}

inline void RooUnfoldSvd::SetNtoysSVD (Int_t ntoyssvd) {_NToys=ntoyssvd;}
inline Int_t RooUnfoldSvd::GetNtoysSVD() const { return _NToys; }

inline
void RooUnfoldSvd::SetRegParm (Double_t parm)
{

  SetKterm(Int_t(parm+0.5));
}

inline
Double_t RooUnfoldSvd::GetRegParm() const
{

  return GetKterm();
}
# 5 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldBinByBin.h" 1
# 18 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldBinByBin.h"
class RooUnfoldResponse;
class TH1;
class TH1D;
class TH2D;

class RooUnfoldBinByBin : public RooUnfold {

public:
  RooUnfoldBinByBin();
  RooUnfoldBinByBin (const char* name, const char* title);
  RooUnfoldBinByBin (const TString& name, const TString& title);
  RooUnfoldBinByBin (const RooUnfoldBinByBin& rhs);
  virtual ~RooUnfoldBinByBin();
  RooUnfoldBinByBin& operator= (const RooUnfoldBinByBin& rhs);
  virtual RooUnfoldBinByBin* Clone (const char* newname= 0) const;
  RooUnfoldBinByBin (const RooUnfoldResponse* res, const TH1* meas, const char* name=0, const char* title=0);

  TVectorD* Impl();

protected:
  virtual void Unfold();
  virtual void GetCov();
  virtual void GetSettings();

protected:

  TVectorD _factors;

public:
  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldBinByBin::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldBinByBin::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldBinByBin.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 47; }
};


inline
RooUnfoldBinByBin::RooUnfoldBinByBin()
  : RooUnfold()
{

  GetSettings();
}

inline
RooUnfoldBinByBin::RooUnfoldBinByBin (const char* name, const char* title)
  : RooUnfold(name,title)
{

  GetSettings();
}

inline
RooUnfoldBinByBin::RooUnfoldBinByBin (const TString& name, const TString& title)
  : RooUnfold(name,title)
{

  GetSettings();
}

inline
RooUnfoldBinByBin& RooUnfoldBinByBin::operator= (const RooUnfoldBinByBin& rhs)
{

  Assign(rhs);
  return *this;
}
# 6 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldTUnfold.h" 1
# 16 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldTUnfold.h"
# 1 "/home/junho/Downloads/root/include/TUnfold.h" 1
# 85 "/home/junho/Downloads/root/include/TUnfold.h"
# 1 "/home/junho/Downloads/root/include/TH1D.h" 1
# 86 "/home/junho/Downloads/root/include/TUnfold.h" 2
# 1 "/home/junho/Downloads/root/include/TH2D.h" 1
# 25 "/home/junho/Downloads/root/include/TH2D.h"
# 1 "/home/junho/Downloads/root/include/TH2.h" 1
# 34 "/home/junho/Downloads/root/include/TH2.h"
class TProfile;

class TH2 : public TH1 {

protected:
   Double_t fScalefactor;
   Double_t fTsumwy;
   Double_t fTsumwy2;
   Double_t fTsumwxy;

   TH2();
   TH2(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                         ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                         ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                         ,Int_t nbinsy,const Double_t *ybins);
   TH2(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                         ,Int_t nbinsy,const Double_t *ybins);
   TH2(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins
                                         ,Int_t nbinsy,const Float_t *ybins);

   virtual Int_t BufferFill(Double_t x, Double_t y, Double_t w);
   virtual TH1D *DoProjection(bool onX, const char *name, Int_t firstbin, Int_t lastbin, Option_t *option) const;
   virtual TProfile *DoProfile(bool onX, const char *name, Int_t firstbin, Int_t lastbin, Option_t *option) const;
   virtual void DoFitSlices(bool onX, TF1 *f1, Int_t firstbin, Int_t lastbin, Int_t cut, Option_t *option, TObjArray* arr);

   Int_t BufferFill(Double_t, Double_t) {return -2;}
   Int_t Fill(Double_t);
   Int_t Fill(const char*, Double_t) { return Fill(0);}

public:
   TH2(const TH2&);
   virtual ~TH2();
   virtual Int_t BufferEmpty(Int_t action=0);
   virtual void Copy(TObject &hnew) const;
   virtual Int_t Fill(Double_t x, Double_t y);
   virtual Int_t Fill(Double_t x, Double_t y, Double_t w);
   virtual Int_t Fill(Double_t x, const char *namey, Double_t w);
   virtual Int_t Fill(const char *namex, Double_t y, Double_t w);
   virtual Int_t Fill(const char *namex, const char *namey, Double_t w);
   virtual void FillN(Int_t, const Double_t *, const Double_t *, Int_t) {;}
   virtual void FillN(Int_t ntimes, const Double_t *x, const Double_t *y, const Double_t *w, Int_t stride=1);
   virtual void FillRandom(const char *fname, Int_t ntimes=5000);
   virtual void FillRandom(TH1 *h, Int_t ntimes=5000);
   virtual Int_t FindFirstBinAbove(Double_t threshold=0, Int_t axis=1) const;
   virtual Int_t FindLastBinAbove (Double_t threshold=0, Int_t axis=1) const;
   virtual void FitSlicesX(TF1 *f1=0,Int_t firstybin=0, Int_t lastybin=-1, Int_t cut=0, Option_t *option="QNR", TObjArray* arr = 0);
   virtual void FitSlicesY(TF1 *f1=0,Int_t firstxbin=0, Int_t lastxbin=-1, Int_t cut=0, Option_t *option="QNR", TObjArray* arr = 0);
   virtual Double_t GetBinWithContent2(Double_t c, Int_t &binx, Int_t &biny, Int_t firstxbin=1, Int_t lastxbin=-1,Int_t firstybin=1, Int_t lastybin=-1, Double_t maxdiff=0) const;
   using TH1::GetBinErrorLow;
   using TH1::GetBinErrorUp;
   virtual Double_t GetBinErrorLow(Int_t binx, Int_t biny) { return TH1::GetBinErrorLow( GetBin(binx, biny) ); }
   virtual Double_t GetBinErrorUp(Int_t binx, Int_t biny) { return TH1::GetBinErrorUp( GetBin(binx, biny) ); }
   virtual Double_t GetCorrelationFactor(Int_t axis1=1,Int_t axis2=2) const;
   virtual Double_t GetCovariance(Int_t axis1=1,Int_t axis2=2) const;
   virtual void GetRandom2(Double_t &x, Double_t &y);
   virtual void GetStats(Double_t *stats) const;
   virtual Double_t Integral(Option_t *option="") const;

   using TH1::Integral;
   virtual Double_t Integral(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Option_t *option="") const;
   virtual Double_t Integral(Int_t, Int_t, Int_t, Int_t, Int_t, Int_t, Option_t * ="") const {return 0;}
   using TH1::IntegralAndError;
   virtual Double_t IntegralAndError(Int_t binx1, Int_t binx2, Int_t biny1, Int_t biny2, Double_t & err, Option_t *option="") const;
   virtual Double_t Interpolate(Double_t x);
   virtual Double_t Interpolate(Double_t x, Double_t y);
   virtual Double_t Interpolate(Double_t x, Double_t y, Double_t z);
   virtual Double_t KolmogorovTest(const TH1 *h2, Option_t *option="") const;
   virtual Long64_t Merge(TCollection *list);
   virtual TH2 *RebinX(Int_t ngroup=2, const char *newname="");
   virtual TH2 *RebinY(Int_t ngroup=2, const char *newname="");
   virtual TH2 *Rebin2D(Int_t nxgroup=2, Int_t nygroup=2, const char *newname="");
      TProfile *ProfileX(const char *name="_pfx", Int_t firstybin=1, Int_t lastybin=-1, Option_t *option="") const;
      TProfile *ProfileY(const char *name="_pfy", Int_t firstxbin=1, Int_t lastxbin=-1, Option_t *option="") const;
         TH1D *ProjectionX(const char *name="_px", Int_t firstybin=0, Int_t lastybin=-1, Option_t *option="") const;
         TH1D *ProjectionY(const char *name="_py", Int_t firstxbin=0, Int_t lastxbin=-1, Option_t *option="") const;
   virtual void PutStats(Double_t *stats);
   virtual void Reset(Option_t *option="");
   virtual void SetShowProjectionX(Int_t nbins=1);
   virtual void SetShowProjectionY(Int_t nbins=1);
   virtual TH1 *ShowBackground(Int_t niter=20, Option_t *option="same");
   virtual Int_t ShowPeaks(Double_t sigma=2, Option_t *option="", Double_t threshold=0.05);
   virtual void Smooth(Int_t ntimes=1, Option_t *option="");

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 4; } static void Dictionary(); virtual TClass *IsA() const { return TH2::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH2::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH2.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 119; }
};




class TH2C : public TH2, public TArrayC {

public:
   TH2C();
   TH2C(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2C(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2C(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2C(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2C(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins
                                          ,Int_t nbinsy,const Float_t *ybins);
   TH2C(const TH2C &h2c);
   virtual ~TH2C();
   virtual void AddBinContent(Int_t bin);
   virtual void AddBinContent(Int_t bin, Double_t w);
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t binx, Int_t biny) const {return GetBinContent(GetBin(binx,biny));}
   virtual Double_t GetBinContent(Int_t binx, Int_t biny, Int_t) const {return GetBinContent(GetBin(binx,biny));}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t binx, Int_t biny, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinContent(Int_t binx, Int_t biny, Int_t, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH2C& operator=(const TH2C &h1);
   friend TH2C operator*(Float_t c1, TH2C &h1);
   friend TH2C operator*(TH2C &h1, Float_t c1) {return operator*(c1,h1);}
   friend TH2C operator+(TH2C &h1, TH2C &h2);
   friend TH2C operator-(TH2C &h1, TH2C &h2);
   friend TH2C operator*(TH2C &h1, TH2C &h2);
   friend TH2C operator/(TH2C &h1, TH2C &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 3; } static void Dictionary(); virtual TClass *IsA() const { return TH2C::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH2C::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH2.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 161; }
};




class TH2S : public TH2, public TArrayS {

public:
   TH2S();
   TH2S(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2S(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2S(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2S(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2S(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins
                                          ,Int_t nbinsy,const Float_t *ybins);
   TH2S(const TH2S &h2s);
   virtual ~TH2S();
   virtual void AddBinContent(Int_t bin);
   virtual void AddBinContent(Int_t bin, Double_t w);
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t binx, Int_t biny) const {return GetBinContent(GetBin(binx,biny));}
   virtual Double_t GetBinContent(Int_t binx, Int_t biny, Int_t) const {return GetBinContent(GetBin(binx,biny));}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t binx, Int_t biny, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinContent(Int_t binx, Int_t biny, Int_t, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH2S& operator=(const TH2S &h1);
   friend TH2S operator*(Float_t c1, TH2S &h1);
   friend TH2S operator*(TH2S &h1, Float_t c1) {return operator*(c1,h1);}
   friend TH2S operator+(TH2S &h1, TH2S &h2);
   friend TH2S operator-(TH2S &h1, TH2S &h2);
   friend TH2S operator*(TH2S &h1, TH2S &h2);
   friend TH2S operator/(TH2S &h1, TH2S &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 3; } static void Dictionary(); virtual TClass *IsA() const { return TH2S::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH2S::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH2.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 203; }
};




class TH2I : public TH2, public TArrayI {

public:
   TH2I();
   TH2I(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2I(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2I(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2I(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2I(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins
                                          ,Int_t nbinsy,const Float_t *ybins);
   TH2I(const TH2I &h2i);
   virtual ~TH2I();
   virtual void AddBinContent(Int_t bin);
   virtual void AddBinContent(Int_t bin, Double_t w);
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t binx, Int_t biny) const {return GetBinContent(GetBin(binx,biny));}
   virtual Double_t GetBinContent(Int_t binx, Int_t biny, Int_t) const {return GetBinContent(GetBin(binx,biny));}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t binx, Int_t biny, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinContent(Int_t binx, Int_t biny, Int_t, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH2I& operator=(const TH2I &h1);
   friend TH2I operator*(Float_t c1, TH2I &h1);
   friend TH2I operator*(TH2I &h1, Float_t c1) {return operator*(c1,h1);}
   friend TH2I operator+(TH2I &h1, TH2I &h2);
   friend TH2I operator-(TH2I &h1, TH2I &h2);
   friend TH2I operator*(TH2I &h1, TH2I &h2);
   friend TH2I operator/(TH2I &h1, TH2I &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 3; } static void Dictionary(); virtual TClass *IsA() const { return TH2I::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH2I::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH2.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 245; }
};




class TH2F : public TH2, public TArrayF {

public:
   TH2F();
   TH2F(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2F(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2F(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2F(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2F(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins
                                          ,Int_t nbinsy,const Float_t *ybins);
   TH2F(const TMatrixFBase &m);
   TH2F(const TH2F &h2f);
   virtual ~TH2F();
   virtual void AddBinContent(Int_t bin) {++fArray[bin];}
   virtual void AddBinContent(Int_t bin, Double_t w)
                                 {fArray[bin] += Float_t (w);}
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t binx, Int_t biny) const {return GetBinContent(GetBin(binx,biny));}
   virtual Double_t GetBinContent(Int_t binx, Int_t biny, Int_t) const {return GetBinContent(GetBin(binx,biny));}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t binx, Int_t biny, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinContent(Int_t binx, Int_t biny, Int_t, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH2F& operator=(const TH2F &h1);
   friend TH2F operator*(Float_t c1, TH2F &h1);
   friend TH2F operator*(TH2F &h1, Float_t c1);
   friend TH2F operator+(TH2F &h1, TH2F &h2);
   friend TH2F operator-(TH2F &h1, TH2F &h2);
   friend TH2F operator*(TH2F &h1, TH2F &h2);
   friend TH2F operator/(TH2F &h1, TH2F &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 3; } static void Dictionary(); virtual TClass *IsA() const { return TH2F::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH2F::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH2.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 289; }
};




class TH2D : public TH2, public TArrayD {

public:
   TH2D();
   TH2D(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2D(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,Double_t ylow,Double_t yup);
   TH2D(const char *name,const char *title,Int_t nbinsx,Double_t xlow,Double_t xup
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2D(const char *name,const char *title,Int_t nbinsx,const Double_t *xbins
                                          ,Int_t nbinsy,const Double_t *ybins);
   TH2D(const char *name,const char *title,Int_t nbinsx,const Float_t *xbins
                                          ,Int_t nbinsy,const Float_t *ybins);
   TH2D(const TMatrixDBase &m);
   TH2D(const TH2D &h2d);
   virtual ~TH2D();
   virtual void AddBinContent(Int_t bin) {++fArray[bin];}
   virtual void AddBinContent(Int_t bin, Double_t w)
                                 {fArray[bin] += Double_t (w);}
   virtual void Copy(TObject &hnew) const;
   virtual TH1 *DrawCopy(Option_t *option="") const;
   virtual Double_t GetBinContent(Int_t bin) const;
   virtual Double_t GetBinContent(Int_t binx, Int_t biny) const {return GetBinContent(GetBin(binx,biny));}
   virtual Double_t GetBinContent(Int_t binx, Int_t biny, Int_t) const {return GetBinContent(GetBin(binx,biny));}
   virtual void Reset(Option_t *option="");
   virtual void SetBinContent(Int_t bin, Double_t content);
   virtual void SetBinContent(Int_t binx, Int_t biny, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinContent(Int_t binx, Int_t biny, Int_t, Double_t content) {SetBinContent(GetBin(binx,biny),content);}
   virtual void SetBinsLength(Int_t n=-1);
           TH2D& operator=(const TH2D &h1);
   friend TH2D operator*(Float_t c1, TH2D &h1);
   friend TH2D operator*(TH2D &h1, Float_t c1) {return operator*(c1,h1);}
   friend TH2D operator+(TH2D &h1, TH2D &h2);
   friend TH2D operator-(TH2D &h1, TH2D &h2);
   friend TH2D operator*(TH2D &h1, TH2D &h2);
   friend TH2D operator/(TH2D &h1, TH2D &h2);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 3; } static void Dictionary(); virtual TClass *IsA() const { return TH2D::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TH2D::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TH2.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 333; }
};
# 26 "/home/junho/Downloads/root/include/TH2D.h" 2
# 87 "/home/junho/Downloads/root/include/TUnfold.h" 2

# 1 "/home/junho/Downloads/root/include/TArrayI.h" 1
# 89 "/home/junho/Downloads/root/include/TUnfold.h" 2
# 1 "/home/junho/Downloads/root/include/TSpline.h" 1
# 16 "/home/junho/Downloads/root/include/TSpline.h"
# 1 "/home/junho/Downloads/root/include/TGraph.h" 1
# 43 "/home/junho/Downloads/root/include/TGraph.h"
class TBrowser;
class TAxis;
class TH1;
class TH1F;
class TCollection;
class TF1;
class TSpline;



class TGraph : public TNamed, public TAttLine, public TAttFill, public TAttMarker {

protected:

   Int_t fMaxSize;
   Int_t fNpoints;
   Double_t *fX;
   Double_t *fY;
   TList *fFunctions;
   TH1F *fHistogram;
   Double_t fMinimum;
   Double_t fMaximum;

   static void SwapValues(Double_t* arr, Int_t pos1, Int_t pos2);
   virtual void SwapPoints(Int_t pos1, Int_t pos2);

   virtual Double_t **Allocate(Int_t newsize);
   Double_t **AllocateArrays(Int_t Narrays, Int_t arraySize);
   virtual Bool_t CopyPoints(Double_t **newarrays, Int_t ibegin, Int_t iend, Int_t obegin);
   virtual void CopyAndRelease(Double_t **newarrays, Int_t ibegin, Int_t iend, Int_t obegin);
   Bool_t CtorAllocate();
   Double_t **ExpandAndCopy(Int_t size, Int_t iend);
   virtual void FillZero(Int_t begin, Int_t end, Bool_t from_ctor = kTRUE);
   Double_t **ShrinkAndCopy(Int_t size, Int_t iend);
   virtual Bool_t DoMerge(const TGraph * g);

public:

   enum {
      kClipFrame = (1ULL << (10)),
      kNotEditable = (1ULL << (18))
   };

   TGraph();
   TGraph(Int_t n);
   TGraph(Int_t n, const Int_t *x, const Int_t *y);
   TGraph(Int_t n, const Float_t *x, const Float_t *y);
   TGraph(Int_t n, const Double_t *x, const Double_t *y);
   TGraph(const TGraph &gr);
   TGraph& operator=(const TGraph&);
   TGraph(const TVectorF &vx, const TVectorF &vy);
   TGraph(const TVectorD &vx, const TVectorD &vy);
   TGraph(const TH1 *h);
   TGraph(const TF1 *f, Option_t *option="");
   TGraph(const char *filename, const char *format="%lg %lg", Option_t *option="");
   virtual ~TGraph();

   virtual void Apply(TF1 *f);
   virtual void Browse(TBrowser *b);
   virtual Double_t Chisquare(const TF1 *f1, Option_t *option="") const;
   static Bool_t CompareArg(const TGraph* gr, Int_t left, Int_t right);
   static Bool_t CompareX(const TGraph* gr, Int_t left, Int_t right);
   static Bool_t CompareY(const TGraph* gr, Int_t left, Int_t right);
   static Bool_t CompareRadius(const TGraph* gr, Int_t left, Int_t right);
   virtual void ComputeRange(Double_t &xmin, Double_t &ymin, Double_t &xmax, Double_t &ymax) const;
   virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
   virtual void Draw(Option_t *chopt="");
   virtual void DrawGraph(Int_t n, const Int_t *x, const Int_t *y, Option_t *option="");
   virtual void DrawGraph(Int_t n, const Float_t *x, const Float_t *y, Option_t *option="");
   virtual void DrawGraph(Int_t n, const Double_t *x=0, const Double_t *y=0, Option_t *option="");
   virtual void DrawPanel();
   virtual Double_t Eval(Double_t x, TSpline *spline=0, Option_t *option="") const;
   virtual void ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual void Expand(Int_t newsize);
   virtual void Expand(Int_t newsize, Int_t step);
   virtual TObject *FindObject(const char *name) const;
   virtual TObject *FindObject(const TObject *obj) const;
   virtual TFitResultPtr Fit(const char *formula ,Option_t *option="" ,Option_t *goption="", Axis_t xmin=0, Axis_t xmax=0);
   virtual TFitResultPtr Fit(TF1 *f1 ,Option_t *option="" ,Option_t *goption="", Axis_t xmin=0, Axis_t xmax=0);
   virtual void FitPanel();
   Bool_t GetEditable() const;
   TF1 *GetFunction(const char *name) const;
   TH1F *GetHistogram() const;
   TList *GetListOfFunctions() const { return fFunctions; }
   virtual Double_t GetCorrelationFactor() const;
   virtual Double_t GetCovariance() const;
   virtual Double_t GetMean(Int_t axis=1) const;
   virtual Double_t GetRMS(Int_t axis=1) const;
   Int_t GetMaxSize() const {return fMaxSize;}
   Int_t GetN() const {return fNpoints;}
   virtual Double_t GetErrorX(Int_t bin) const;
   virtual Double_t GetErrorY(Int_t bin) const;
   virtual Double_t GetErrorXhigh(Int_t bin) const;
   virtual Double_t GetErrorXlow(Int_t bin) const;
   virtual Double_t GetErrorYhigh(Int_t bin) const;
   virtual Double_t GetErrorYlow(Int_t bin) const;
   Double_t *GetX() const {return fX;}
   Double_t *GetY() const {return fY;}
   virtual Double_t *GetEX() const {return 0;}
   virtual Double_t *GetEY() const {return 0;}
   virtual Double_t *GetEXhigh() const {return 0;}
   virtual Double_t *GetEXlow() const {return 0;}
   virtual Double_t *GetEYhigh() const {return 0;}
   virtual Double_t *GetEYlow() const {return 0;}
   virtual Double_t *GetEXlowd() const {return 0;}
   virtual Double_t *GetEXhighd() const {return 0;}
   virtual Double_t *GetEYlowd() const {return 0;}
   virtual Double_t *GetEYhighd() const {return 0;}
   Double_t GetMaximum() const {return fMaximum;}
   Double_t GetMinimum() const {return fMinimum;}
   TAxis *GetXaxis() const ;
   TAxis *GetYaxis() const ;
   virtual Int_t GetPoint(Int_t i, Double_t &x, Double_t &y) const;

   virtual void InitExpo(Double_t xmin=0, Double_t xmax=0);
   virtual void InitGaus(Double_t xmin=0, Double_t xmax=0);
   virtual void InitPolynom(Double_t xmin=0, Double_t xmax=0);
   virtual Int_t InsertPoint();
   virtual Double_t Integral(Int_t first=0, Int_t last=-1) const;
   virtual Bool_t IsEditable() const {return !TestBit(kNotEditable);}
   virtual Int_t IsInside(Double_t x, Double_t y) const;
   virtual void LeastSquareFit(Int_t m, Double_t *a, Double_t xmin=0, Double_t xmax=0);
   virtual void LeastSquareLinearFit(Int_t n, Double_t &a0, Double_t &a1, Int_t &ifail, Double_t xmin=0, Double_t xmax=0);
   virtual Int_t Merge(TCollection* list);
   virtual void Paint(Option_t *chopt="");
   void PaintGraph(Int_t npoints, const Double_t *x, const Double_t *y, Option_t *chopt);
   void PaintGrapHist(Int_t npoints, const Double_t *x, const Double_t *y, Option_t *chopt);
   virtual void PaintStats(TF1 *fit);
   virtual void Print(Option_t *chopt="") const;
   virtual void RecursiveRemove(TObject *obj);
   virtual Int_t RemovePoint();
   virtual Int_t RemovePoint(Int_t ipoint);
   virtual void SavePrimitive(ostream &out, Option_t *option = "");
   virtual void SetEditable(Bool_t editable=kTRUE);
   virtual void SetHistogram(TH1F *h) {fHistogram = h;}
   virtual void SetMaximum(Double_t maximum=-1111);
   virtual void SetMinimum(Double_t minimum=-1111);
   virtual void Set(Int_t n);
   virtual void SetPoint(Int_t i, Double_t x, Double_t y);
   virtual void SetTitle(const char *title="");
   virtual void Sort(Bool_t (*greater)(const TGraph*, Int_t, Int_t)=&TGraph::CompareX,
                              Bool_t ascending=kTRUE, Int_t low=0, Int_t high=-1111);
   virtual void UseCurrentStyle();
   void Zero(Int_t &k,Double_t AZ,Double_t BZ,Double_t E2,Double_t &X,Double_t &Y,Int_t maxiterations);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 4; } static void Dictionary(); virtual TClass *IsA() const { return TGraph::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TGraph::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TGraph.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 188; }
};

inline Double_t **TGraph::Allocate(Int_t newsize) {
   return AllocateArrays(2, newsize);
}
# 17 "/home/junho/Downloads/root/include/TSpline.h" 2


class TH1;
class TF1;

class TSpline : public TNamed, public TAttLine,
                public TAttFill, public TAttMarker
{
protected:
   Double_t fDelta;
   Double_t fXmin;
   Double_t fXmax;
   Int_t fNp;
   Bool_t fKstep;
   TH1F *fHistogram;
   TGraph *fGraph;
   Int_t fNpx;

   TSpline(const TSpline&);
   TSpline& operator=(const TSpline&);
   virtual void BuildCoeff()=0;

public:
   TSpline() : fDelta(-1), fXmin(0), fXmax(0),
      fNp(0), fKstep(kFALSE), fHistogram(0), fGraph(0), fNpx(100) {}
   TSpline(const char *title, Double_t delta, Double_t xmin,
      Double_t xmax, Int_t np, Bool_t step) :
      TNamed("Spline",title), TAttFill(0,1),
      fDelta(delta), fXmin(xmin),
      fXmax(xmax), fNp(np), fKstep(step),
      fHistogram(0), fGraph(0), fNpx(100) {}
   virtual ~TSpline();

   virtual void GetKnot(Int_t i, Double_t &x, Double_t &y) const =0;
   virtual Int_t DistancetoPrimitive(Int_t px, Int_t py);
   virtual void Draw(Option_t *option="");
   virtual void ExecuteEvent(Int_t event, Int_t px, Int_t py);
   virtual Double_t GetDelta() const {return fDelta;}
   TH1F *GetHistogram() const {return fHistogram;}
   virtual Int_t GetNp() const {return fNp;}
   virtual Int_t GetNpx() const {return fNpx;}
   virtual Double_t GetXmin() const {return fXmin;}
   virtual Double_t GetXmax() const {return fXmax;}
   virtual void Paint(Option_t *option="");
   virtual Double_t Eval(Double_t x) const=0;
   virtual void SaveAs(const char * ,Option_t * ) const {;}
   void SetNpx(Int_t n) {fNpx=n;}

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TSpline::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSpline::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TSpline.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 65; }
};



class TSplinePoly : public TObject
{
protected:
   Double_t fX;
   Double_t fY;

public:
   TSplinePoly() :
      fX(0), fY(0) {}
   TSplinePoly(Double_t x, Double_t y) :
      fX(x), fY(y) {}
   TSplinePoly(TSplinePoly const &other);
   TSplinePoly &operator=(TSplinePoly const &other);

   Double_t &X() {return fX;}
   Double_t &Y() {return fY;}
   void GetKnot(Double_t &x, Double_t &y) const {x=fX; y=fY;}

   virtual Double_t Eval(Double_t) const {return fY;}

   private:
   void CopyPoly(TSplinePoly const &other);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TSplinePoly::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSplinePoly::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TSpline.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 93; }
};

inline TSplinePoly::TSplinePoly(TSplinePoly const &other)
:
   TObject(other), fX(0), fY(0)
{
  CopyPoly(other);
}



class TSplinePoly3 : public TSplinePoly
{
private:
   Double_t fB;
   Double_t fC;
   Double_t fD;

public:
   TSplinePoly3() :
      fB(0), fC(0), fD(0) {}
   TSplinePoly3(Double_t x, Double_t y, Double_t b, Double_t c, Double_t d) :
      TSplinePoly(x,y), fB(b), fC(c), fD(d) {}
   TSplinePoly3(TSplinePoly3 const &other);
   TSplinePoly3 &operator=(TSplinePoly3 const &other);

   Double_t &B() {return fB;}
   Double_t &C() {return fC;}
   Double_t &D() {return fD;}
   Double_t Eval(Double_t x) const {
      Double_t dx=x-fX;
      return (fY+dx*(fB+dx*(fC+dx*fD)));
   }
   Double_t Derivative(Double_t x) const {
      Double_t dx=x-fX;
      return (fB+dx*(2*fC+3*fD*dx));
   }

private:
   void CopyPoly(TSplinePoly3 const &other);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TSplinePoly3::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSplinePoly3::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TSpline.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 135; }
};

inline TSplinePoly3::TSplinePoly3(TSplinePoly3 const &other)
   :
  TSplinePoly(other), fB(0), fC(0), fD(0)
{
   CopyPoly(other);
}


class TSplinePoly5 : public TSplinePoly
{
private:
   Double_t fB;
   Double_t fC;
   Double_t fD;
   Double_t fE;
   Double_t fF;

public:
   TSplinePoly5() :
      fB(0), fC(0), fD(0), fE(0), fF(0) {}
   TSplinePoly5(Double_t x, Double_t y, Double_t b, Double_t c,
      Double_t d, Double_t e, Double_t f) :
      TSplinePoly(x,y), fB(b), fC(c), fD(d), fE(e), fF(f) {}
   TSplinePoly5(TSplinePoly5 const &other);
   TSplinePoly5 &operator=(TSplinePoly5 const &other);

   Double_t &B() {return fB;}
   Double_t &C() {return fC;}
   Double_t &D() {return fD;}
   Double_t &E() {return fE;}
   Double_t &F() {return fF;}
   Double_t Eval(Double_t x) const {
      Double_t dx=x-fX;
      return (fY+dx*(fB+dx*(fC+dx*(fD+dx*(fE+dx*fF)))));
   }
   Double_t Derivative(Double_t x) const{
      Double_t dx=x-fX;
      return (fB+dx*(2*fC+dx*(3*fD+dx*(4*fE+dx*(5*fF)))));
   }

private:
   void CopyPoly(TSplinePoly5 const &other);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return TSplinePoly5::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSplinePoly5::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TSpline.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 181; }
};

inline TSplinePoly5::TSplinePoly5(TSplinePoly5 const &other)
:
    TSplinePoly(other), fB(0), fC(0), fD(0), fE(0), fF(0)
{
  CopyPoly(other);
}



class TSpline3 : public TSpline
{
protected:
   TSplinePoly3 *fPoly;
   Double_t fValBeg;
   Double_t fValEnd;
   Int_t fBegCond;
   Int_t fEndCond;

   void BuildCoeff();
   void SetCond(const char *opt);

public:
   TSpline3() : TSpline() , fPoly(0), fValBeg(0), fValEnd(0),
      fBegCond(-1), fEndCond(-1) {}
   TSpline3(const char *title,
            Double_t x[], Double_t y[], Int_t n, const char *opt=0,
            Double_t valbeg=0, Double_t valend=0);
   TSpline3(const char *title,
            Double_t xmin, Double_t xmax,
            Double_t y[], Int_t n, const char *opt=0,
            Double_t valbeg=0, Double_t valend=0);
   TSpline3(const char *title,
            Double_t x[], const TF1 *func, Int_t n, const char *opt=0,
            Double_t valbeg=0, Double_t valend=0);
   TSpline3(const char *title,
            Double_t xmin, Double_t xmax,
            const TF1 *func, Int_t n, const char *opt=0,
            Double_t valbeg=0, Double_t valend=0);
   TSpline3(const char *title,
            const TGraph *g, const char *opt=0,
            Double_t valbeg=0, Double_t valend=0);
   TSpline3(const TH1 *h, const char *opt=0,
            Double_t valbeg=0, Double_t valend=0);
   TSpline3(const TSpline3&);
   TSpline3& operator=(const TSpline3&);
   Int_t FindX(Double_t x) const;
   Double_t Eval(Double_t x) const;
   Double_t Derivative(Double_t x) const;
   virtual ~TSpline3() {if (fPoly) delete [] fPoly;}
   void GetCoeff(Int_t i, Double_t &x, Double_t &y, Double_t &b,
                 Double_t &c, Double_t &d) {x=fPoly[i].X();y=fPoly[i].Y();
                  b=fPoly[i].B();c=fPoly[i].C();d=fPoly[i].D();}
   void GetKnot(Int_t i, Double_t &x, Double_t &y) const
      {x=fPoly[i].X(); y=fPoly[i].Y();}
   virtual void SaveAs(const char *filename,Option_t *option="") const;
   virtual void SavePrimitive(ostream &out, Option_t *option = "");
   virtual void SetPoint(Int_t i, Double_t x, Double_t y);
   virtual void SetPointCoeff(Int_t i, Double_t b, Double_t c, Double_t d);
   static void Test();

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TSpline3::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSpline3::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TSpline.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 244; }
};



class TSpline5 : public TSpline
{
protected:
   TSplinePoly5 *fPoly;

   void BuildCoeff();
   void BoundaryConditions(const char *opt, Int_t &beg, Int_t &end,
                           const char *&cb1, const char *&ce1, const char *&cb2,
                           const char *&ce2);
   void SetBoundaries(Double_t b1, Double_t e1, Double_t b2, Double_t e2,
                      const char *cb1, const char *ce1, const char *cb2,
                      const char *ce2);
public:
   TSpline5() : TSpline() , fPoly(0) {}
   TSpline5(const char *title,
            Double_t x[], Double_t y[], Int_t n,
            const char *opt=0, Double_t b1=0, Double_t e1=0,
            Double_t b2=0, Double_t e2=0);
   TSpline5(const char *title,
            Double_t xmin, Double_t xmax,
            Double_t y[], Int_t n,
            const char *opt=0, Double_t b1=0, Double_t e1=0,
            Double_t b2=0, Double_t e2=0);
   TSpline5(const char *title,
            Double_t x[], const TF1 *func, Int_t n,
            const char *opt=0, Double_t b1=0, Double_t e1=0,
            Double_t b2=0, Double_t e2=0);
   TSpline5(const char *title,
            Double_t xmin, Double_t xmax,
            const TF1 *func, Int_t n,
            const char *opt=0, Double_t b1=0, Double_t e1=0,
            Double_t b2=0, Double_t e2=0);
   TSpline5(const char *title,
            const TGraph *g,
            const char *opt=0, Double_t b1=0, Double_t e1=0,
            Double_t b2=0, Double_t e2=0);
   TSpline5(const TH1 *h,
            const char *opt=0, Double_t b1=0, Double_t e1=0,
            Double_t b2=0, Double_t e2=0);
   TSpline5(const TSpline5&);
   TSpline5& operator=(const TSpline5&);
   Int_t FindX(Double_t x) const;
   Double_t Eval(Double_t x) const;
   Double_t Derivative(Double_t x) const;
   virtual ~TSpline5() {if (fPoly) delete [] fPoly;}
   void GetCoeff(Int_t i, Double_t &x, Double_t &y, Double_t &b,
                 Double_t &c, Double_t &d, Double_t &e, Double_t &f)
      {x=fPoly[i].X();y=fPoly[i].Y();b=fPoly[i].B();
      c=fPoly[i].C();d=fPoly[i].D();
      e=fPoly[i].E();f=fPoly[i].F();}
   void GetKnot(Int_t i, Double_t &x, Double_t &y) const
      {x=fPoly[i].X(); y=fPoly[i].Y();}
   virtual void SaveAs(const char *filename,Option_t *option="") const;
   virtual void SavePrimitive(ostream &out, Option_t *option = "");
   virtual void SetPoint(Int_t i, Double_t x, Double_t y);
   virtual void SetPointCoeff(Int_t i, Double_t b, Double_t c, Double_t d,
                                   Double_t e, Double_t f);
   static void Test();

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 2; } static void Dictionary(); virtual TClass *IsA() const { return TSpline5::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSpline5::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TSpline.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 308; }
};
# 90 "/home/junho/Downloads/root/include/TUnfold.h" 2
# 1 "/home/junho/Downloads/root/include/TMatrixDSparse.h" 1
# 91 "/home/junho/Downloads/root/include/TUnfold.h" 2

# 1 "/home/junho/Downloads/root/include/TObjArray.h" 1
# 26 "/home/junho/Downloads/root/include/TObjArray.h"
# 1 "/home/junho/Downloads/root/include/TSeqCollection.h" 1
# 26 "/home/junho/Downloads/root/include/TSeqCollection.h"
# 1 "/home/junho/Downloads/root/include/TCollection.h" 1
# 30 "/home/junho/Downloads/root/include/TCollection.h"
# 1 "/home/junho/Downloads/root/include/TIterator.h" 1
# 29 "/home/junho/Downloads/root/include/TIterator.h"
class TCollection;
class TObject;

class TIterator {

protected:
   TIterator() { }
   TIterator(const TIterator &) { }

public:
   virtual TIterator &operator=(const TIterator &) { return *this; }
   virtual ~TIterator() { }
   virtual const TCollection *GetCollection() const = 0;
   virtual Option_t *GetOption() const { return ""; }
   virtual TObject *Next() = 0;
   virtual void Reset() = 0;
   TObject *operator()() { return Next(); }
   virtual Bool_t operator!=(const TIterator &) const;
   Bool_t operator==(const TIterator & other) const { return !(*this != other); }
   virtual TObject *operator*() const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TIterator::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TIterator::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TIterator.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 50; }
};
# 31 "/home/junho/Downloads/root/include/TCollection.h" 2







class TClass;
class TObjectTable;
class TVirtualMutex;
class TIter;

const Bool_t kIterForward = kTRUE;
const Bool_t kIterBackward = !kIterForward;

extern TVirtualMutex *gCollectionMutex;

class TCollection : public TObject {

private:
   static TCollection *fgCurrentCollection;
   static TObjectTable *fgGarbageCollection;
   static Bool_t fgEmptyingGarbage;
   static Int_t fgGarbageStack;

   TCollection(const TCollection &);
   void operator=(const TCollection &);

protected:
   enum { kIsOwner = (1ULL << (14)) };

   TString fName;
   Int_t fSize;

   TCollection() : fName(), fSize(0) { }

   virtual void PrintCollectionHeader(Option_t* option) const;
   virtual const char* GetCollectionEntryName(TObject* entry) const;
   virtual void PrintCollectionEntry(TObject* entry, Option_t* option, Int_t recurse) const;

public:
   enum { kInitCapacity = 16, kInitHashTableCapacity = 17 };

   virtual ~TCollection() { }
   virtual void Add(TObject *obj) = 0;
   void AddVector(TObject *obj1, ...);
   virtual void AddAll(const TCollection *col);
   Bool_t AssertClass(TClass *cl) const;
   void Browse(TBrowser *b);
   Int_t Capacity() const { return fSize; }
   virtual void Clear(Option_t *option="") = 0;
   virtual TObject *Clone(const char *newname="") const;
   Int_t Compare(const TObject *obj) const;
   Bool_t Contains(const char *name) const { return FindObject(name) != 0; }
   Bool_t Contains(const TObject *obj) const { return FindObject(obj) != 0; }
   virtual void Delete(Option_t *option="") = 0;
   virtual void Draw(Option_t *option="");
   virtual void Dump() const ;
   virtual TObject *FindObject(const char *name) const;
   TObject *operator()(const char *name) const;
   virtual TObject *FindObject(const TObject *obj) const;
   virtual Int_t GetEntries() const { return GetSize(); }
   virtual const char *GetName() const;
   virtual TObject **GetObjectRef(const TObject *obj) const = 0;
   virtual Int_t GetSize() const { return fSize; }
   virtual Int_t GrowBy(Int_t delta) const;
   ULong_t Hash() const { return fName.Hash(); }
   Bool_t IsArgNull(const char *where, const TObject *obj) const;
   virtual Bool_t IsEmpty() const { return GetSize() <= 0; }
   virtual Bool_t IsFolder() const { return kTRUE; }
   Bool_t IsOwner() const { return TestBit(kIsOwner); }
   Bool_t IsSortable() const { return kTRUE; }
   virtual void ls(Option_t *option="") const ;
   virtual TIterator *MakeIterator(Bool_t dir = kIterForward) const = 0;
   virtual TIterator *MakeReverseIterator() const { return MakeIterator(kIterBackward); }
   virtual void Paint(Option_t *option="");
   virtual void Print(Option_t *option="") const;
   virtual void Print(Option_t *option, Int_t recurse) const;
   virtual void Print(Option_t *option, const char* wildcard, Int_t recurse=1) const;
   virtual void Print(Option_t *option, TPRegexp& regexp, Int_t recurse=1) const;
   virtual void RecursiveRemove(TObject *obj);
   virtual TObject *Remove(TObject *obj) = 0;
   virtual void RemoveAll(TCollection *col);
   void RemoveAll() { Clear(); }
   void SetCurrentCollection();
   void SetName(const char *name) { fName = name; }
   virtual void SetOwner(Bool_t enable = kTRUE);
   virtual Int_t Write(const char *name=0, Int_t option=0, Int_t bufsize=0);
   virtual Int_t Write(const char *name=0, Int_t option=0, Int_t bufsize=0) const;

   static TCollection *GetCurrentCollection();
   static void StartGarbageCollection();
   static void GarbageCollect(TObject *obj);
   static void EmptyGarbageCollection();

   TIter begin() const;
   TIter end() const;

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 3; } static void Dictionary(); virtual TClass *IsA() const { return TCollection::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TCollection::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TCollection.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 129; }
};
# 142 "/home/junho/Downloads/root/include/TCollection.h"
class TIter {

private:
   TIterator *fIterator;

protected:
   TIter() : fIterator(0) { }

public:
   TIter(const TCollection *col, Bool_t dir = kIterForward)
         : fIterator(col ? col->MakeIterator(dir) : 0) { }
   TIter(TIterator *it) : fIterator(it) { }
   TIter(const TIter &iter);
   TIter &operator=(const TIter &rhs);
   virtual ~TIter() { { if (fIterator) { delete fIterator; fIterator = 0; } }; }
   TObject *operator()() { return Next(); }
   TObject *Next() { return fIterator ? fIterator->Next() : 0; }
   const TCollection *GetCollection() const { return fIterator ? fIterator->GetCollection() : 0; }
   Option_t *GetOption() const { return fIterator ? fIterator->GetOption() : ""; }
   void Reset() { if (fIterator) fIterator->Reset(); }
   TIter &operator++() { Next(); return *this; }
   Bool_t operator==(const TIter &aIter) const {
      if (fIterator == 0)
         return aIter.fIterator == 0 || **aIter.fIterator == 0;
      if (aIter.fIterator == 0)
         return fIterator == 0 || **fIterator == 0;
      return *fIterator == *aIter.fIterator;
   }
   Bool_t operator!=(const TIter &aIter) const {
      return !(*this == aIter);
   }
   TObject *operator*() const { return fIterator ? *(*fIterator): 0; }
   TIter &Begin();
   static TIter End();

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TIter::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TIter::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TCollection.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 177; }
};

template <class T>
class TIterCategory: public TIter, public std::iterator_traits<typename T::Iterator_t> {

public:
   TIterCategory(const TCollection *col, Bool_t dir = kIterForward) : TIter(col, dir) { }
   TIterCategory(TIterator *it) : TIter(it) { }
   virtual ~TIterCategory() { }
   TIterCategory &Begin() { TIter::Begin(); return *this; }
   static TIterCategory End() { return TIterCategory(static_cast<TIterator*>(0)); }
};


inline TIter TCollection::begin() const { return ++(TIter(this)); }
inline TIter TCollection::end() const { return TIter::End(); }
# 27 "/home/junho/Downloads/root/include/TSeqCollection.h" 2



class TSeqCollection : public TCollection {

protected:
   Bool_t fSorted;

   TSeqCollection() : fSorted(kFALSE) { }
   virtual void Changed() { fSorted = kFALSE; }

public:
   virtual ~TSeqCollection() { }
   virtual void Add(TObject *obj) { AddLast(obj); }
   virtual void AddFirst(TObject *obj) = 0;
   virtual void AddLast(TObject *obj) = 0;
   virtual void AddAt(TObject *obj, Int_t idx) = 0;
   virtual void AddAfter(const TObject *after, TObject *obj) = 0;
   virtual void AddBefore(const TObject *before, TObject *obj) = 0;
   virtual void RemoveFirst() { Remove(First()); }
   virtual void RemoveLast() { Remove(Last()); }
   virtual TObject *RemoveAt(Int_t idx) { return Remove(At(idx)); }
   virtual void RemoveAfter(TObject *after) { Remove(After(after)); }
   virtual void RemoveBefore(TObject *before) { Remove(Before(before)); }

   virtual TObject *At(Int_t idx) const = 0;
   virtual TObject *Before(const TObject *obj) const = 0;
   virtual TObject *After(const TObject *obj) const = 0;
   virtual TObject *First() const = 0;
   virtual TObject *Last() const = 0;
   Int_t LastIndex() const { return GetSize() - 1; }
   virtual Int_t GetLast() const;
   virtual Int_t IndexOf(const TObject *obj) const;
   virtual Bool_t IsSorted() const { return fSorted; }
   void UnSort() { fSorted = kFALSE; }
   Long64_t Merge(TCollection *list);

   static Int_t ObjCompare(TObject *a, TObject *b);
   static void QSort(TObject **a, Int_t first, Int_t last);
   static inline void QSort(TObject **a, TObject **b, Int_t first, Int_t last) { QSort(a, 1, &b, first, last); }
   static void QSort(TObject **a, Int_t nBs, TObject ***b, Int_t first, Int_t last);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TSeqCollection::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSeqCollection::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TSeqCollection.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 69; }
};
# 27 "/home/junho/Downloads/root/include/TObjArray.h" 2


# 1 "/usr/include/c++/5/iterator" 1 3
# 58 "/usr/include/c++/5/iterator" 3
       
# 59 "/usr/include/c++/5/iterator" 3





# 1 "/usr/include/c++/5/ostream" 1 3
# 36 "/usr/include/c++/5/ostream" 3
       
# 37 "/usr/include/c++/5/ostream" 3

# 1 "/usr/include/c++/5/ios" 1 3
# 36 "/usr/include/c++/5/ios" 3
       
# 37 "/usr/include/c++/5/ios" 3





# 1 "/usr/include/c++/5/bits/ios_base.h" 1 3
# 37 "/usr/include/c++/5/bits/ios_base.h" 3
       
# 38 "/usr/include/c++/5/bits/ios_base.h" 3



# 1 "/usr/include/c++/5/bits/locale_classes.h" 1 3
# 37 "/usr/include/c++/5/bits/locale_classes.h" 3
       
# 38 "/usr/include/c++/5/bits/locale_classes.h" 3






# 43 "/usr/include/c++/5/bits/locale_classes.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 62 "/usr/include/c++/5/bits/locale_classes.h" 3
  class locale
  {
  public:


    typedef int category;


    class facet;
    class id;
    class _Impl;

    friend class facet;
    friend class _Impl;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;
# 98 "/usr/include/c++/5/bits/locale_classes.h" 3
    static const category none = 0;
    static const category ctype = 1L << 0;
    static const category numeric = 1L << 1;
    static const category collate = 1L << 2;
    static const category time = 1L << 3;
    static const category monetary = 1L << 4;
    static const category messages = 1L << 5;
    static const category all = (ctype | numeric | collate |
        time | monetary | messages);
# 117 "/usr/include/c++/5/bits/locale_classes.h" 3
    locale() throw();
# 126 "/usr/include/c++/5/bits/locale_classes.h" 3
    locale(const locale& __other) throw();
# 136 "/usr/include/c++/5/bits/locale_classes.h" 3
    explicit
    locale(const char* __s);
# 151 "/usr/include/c++/5/bits/locale_classes.h" 3
    locale(const locale& __base, const char* __s, category __cat);
# 192 "/usr/include/c++/5/bits/locale_classes.h" 3
    locale(const locale& __base, const locale& __add, category __cat);
# 205 "/usr/include/c++/5/bits/locale_classes.h" 3
    template<typename _Facet>
      locale(const locale& __other, _Facet* __f);


    ~locale() throw();
# 219 "/usr/include/c++/5/bits/locale_classes.h" 3
    const locale&
    operator=(const locale& __other) throw();
# 234 "/usr/include/c++/5/bits/locale_classes.h" 3
    template<typename _Facet>
      locale
      combine(const locale& __other) const;






    __attribute ((__abi_tag__ ("cxx11")))
    string
    name() const;
# 254 "/usr/include/c++/5/bits/locale_classes.h" 3
    bool
    operator==(const locale& __other) const throw();







    bool
    operator!=(const locale& __other) const throw()
    { return !(this->operator==(__other)); }
# 282 "/usr/include/c++/5/bits/locale_classes.h" 3
    template<typename _Char, typename _Traits, typename _Alloc>
      bool
      operator()(const basic_string<_Char, _Traits, _Alloc>& __s1,
   const basic_string<_Char, _Traits, _Alloc>& __s2) const;
# 298 "/usr/include/c++/5/bits/locale_classes.h" 3
    static locale
    global(const locale& __loc);




    static const locale&
    classic();

  private:

    _Impl* _M_impl;


    static _Impl* _S_classic;


    static _Impl* _S_global;





    static const char* const* const _S_categories;
# 333 "/usr/include/c++/5/bits/locale_classes.h" 3
    enum { _S_categories_size = 6 + 6 };


    static __gthread_once_t _S_once;


    explicit
    locale(_Impl*) throw();

    static void
    _S_initialize();

    static void
    _S_initialize_once() throw();

    static category
    _S_normalize_category(category);

    void
    _M_coalesce(const locale& __base, const locale& __add, category __cat);


    static const id* const _S_twinned_facets[];

  };
# 371 "/usr/include/c++/5/bits/locale_classes.h" 3
  class locale::facet
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    mutable _Atomic_word _M_refcount;


    static __c_locale _S_c_locale;


    static const char _S_c_name[2];


    static __gthread_once_t _S_once;


    static void
    _S_initialize_once();

  protected:
# 402 "/usr/include/c++/5/bits/locale_classes.h" 3
    explicit
    facet(size_t __refs = 0) throw() : _M_refcount(__refs ? 1 : 0)
    { }


    virtual
    ~facet();

    static void
    _S_create_c_locale(__c_locale& __cloc, const char* __s,
         __c_locale __old = 0);

    static __c_locale
    _S_clone_c_locale(__c_locale& __cloc) throw();

    static void
    _S_destroy_c_locale(__c_locale& __cloc);

    static __c_locale
    _S_lc_ctype_c_locale(__c_locale __cloc, const char* __s);



    static __c_locale
    _S_get_c_locale();

    __attribute__ ((__const__)) static const char*
    _S_get_c_name() throw();

  private:
    void
    _M_add_reference() const throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() const throw()
    {

      ;
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
          ;
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    facet(const facet&);

    facet&
    operator=(const facet&);

    class __shim;

    const facet* _M_sso_shim(const id*) const;
    const facet* _M_cow_shim(const id*) const;
  };
# 474 "/usr/include/c++/5/bits/locale_classes.h" 3
  class locale::id
  {
  private:
    friend class locale;
    friend class locale::_Impl;

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();




    mutable size_t _M_index;


    static _Atomic_word _S_refcount;

    void
    operator=(const id&);

    id(const id&);

  public:



    id() { }

    size_t
    _M_id() const throw();
  };



  class locale::_Impl
  {
  public:

    friend class locale;
    friend class locale::facet;

    template<typename _Facet>
      friend bool
      has_facet(const locale&) throw();

    template<typename _Facet>
      friend const _Facet&
      use_facet(const locale&);

    template<typename _Cache>
      friend struct __use_cache;

  private:

    _Atomic_word _M_refcount;
    const facet** _M_facets;
    size_t _M_facets_size;
    const facet** _M_caches;
    char** _M_names;
    static const locale::id* const _S_id_ctype[];
    static const locale::id* const _S_id_numeric[];
    static const locale::id* const _S_id_collate[];
    static const locale::id* const _S_id_time[];
    static const locale::id* const _S_id_monetary[];
    static const locale::id* const _S_id_messages[];
    static const locale::id* const* const _S_facet_categories[];

    void
    _M_add_reference() throw()
    { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }

    void
    _M_remove_reference() throw()
    {

      ;
      if (__gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1) == 1)
 {
          ;
   try
     { delete this; }
   catch(...)
     { }
 }
    }

    _Impl(const _Impl&, size_t);
    _Impl(const char*, size_t);
    _Impl(size_t) throw();

   ~_Impl() throw();

    _Impl(const _Impl&);

    void
    operator=(const _Impl&);

    bool
    _M_check_same_name()
    {
      bool __ret = true;
      if (_M_names[1])

 for (size_t __i = 0; __ret && __i < _S_categories_size - 1; ++__i)
   __ret = __builtin_strcmp(_M_names[__i], _M_names[__i + 1]) == 0;
      return __ret;
    }

    void
    _M_replace_categories(const _Impl*, category);

    void
    _M_replace_category(const _Impl*, const locale::id* const*);

    void
    _M_replace_facet(const _Impl*, const locale::id*);

    void
    _M_install_facet(const locale::id*, const facet*);

    template<typename _Facet>
      void
      _M_init_facet(_Facet* __facet)
      { _M_install_facet(&_Facet::id, __facet); }

    template<typename _Facet>
      void
      _M_init_facet_unchecked(_Facet* __facet)
      {
 __facet->_M_add_reference();
 _M_facets[_Facet::id._M_id()] = __facet;
      }

    void
    _M_install_cache(const facet*, size_t);

    void _M_init_extra(facet**);
    void _M_init_extra(void*, void*, const char*, const char*);
  };
# 632 "/usr/include/c++/5/bits/locale_classes.h" 3
  template<typename _CharT>
    class __cxx11:: collate : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


    protected:


      __c_locale _M_c_locale_collate;

    public:

      static locale::id id;
# 659 "/usr/include/c++/5/bits/locale_classes.h" 3
      explicit
      collate(size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_get_c_locale())
      { }
# 673 "/usr/include/c++/5/bits/locale_classes.h" 3
      explicit
      collate(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_c_locale_collate(_S_clone_c_locale(__cloc))
      { }
# 690 "/usr/include/c++/5/bits/locale_classes.h" 3
      int
      compare(const _CharT* __lo1, const _CharT* __hi1,
       const _CharT* __lo2, const _CharT* __hi2) const
      { return this->do_compare(__lo1, __hi1, __lo2, __hi2); }
# 709 "/usr/include/c++/5/bits/locale_classes.h" 3
      string_type
      transform(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_transform(__lo, __hi); }
# 723 "/usr/include/c++/5/bits/locale_classes.h" 3
      long
      hash(const _CharT* __lo, const _CharT* __hi) const
      { return this->do_hash(__lo, __hi); }


      int
      _M_compare(const _CharT*, const _CharT*) const throw();

      size_t
      _M_transform(_CharT*, const _CharT*, size_t) const throw();

  protected:

      virtual
      ~collate()
      { _S_destroy_c_locale(_M_c_locale_collate); }
# 752 "/usr/include/c++/5/bits/locale_classes.h" 3
      virtual int
      do_compare(const _CharT* __lo1, const _CharT* __hi1,
   const _CharT* __lo2, const _CharT* __hi2) const;
# 766 "/usr/include/c++/5/bits/locale_classes.h" 3
      virtual string_type
      do_transform(const _CharT* __lo, const _CharT* __hi) const;
# 779 "/usr/include/c++/5/bits/locale_classes.h" 3
      virtual long
      do_hash(const _CharT* __lo, const _CharT* __hi) const;
    };

  template<typename _CharT>
    locale::id collate<_CharT>::id;


  template<>
    int
    collate<char>::_M_compare(const char*, const char*) const throw();

  template<>
    size_t
    collate<char>::_M_transform(char*, const char*, size_t) const throw();


  template<>
    int
    collate<wchar_t>::_M_compare(const wchar_t*, const wchar_t*) const throw();

  template<>
    size_t
    collate<wchar_t>::_M_transform(wchar_t*, const wchar_t*, size_t) const throw();



  template<typename _CharT>
    class __cxx11:: collate_byname : public collate<_CharT>
    {
    public:


      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;


      explicit
      collate_byname(const char* __s, size_t __refs = 0)
      : collate<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     this->_S_destroy_c_locale(this->_M_c_locale_collate);
     this->_S_create_c_locale(this->_M_c_locale_collate, __s);
   }
      }







    protected:
      virtual
      ~collate_byname() { }
    };


}

# 1 "/usr/include/c++/5/bits/locale_classes.tcc" 1 3
# 37 "/usr/include/c++/5/bits/locale_classes.tcc" 3
       
# 38 "/usr/include/c++/5/bits/locale_classes.tcc" 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _Facet>
    locale::
    locale(const locale& __other, _Facet* __f)
    {
      _M_impl = new _Impl(*__other._M_impl, 1);

      try
 { _M_impl->_M_install_facet(&_Facet::id, __f); }
      catch(...)
 {
   _M_impl->_M_remove_reference();
   throw;
 }
      delete [] _M_impl->_M_names[0];
      _M_impl->_M_names[0] = 0;
    }

  template<typename _Facet>
    locale
    locale::
    combine(const locale& __other) const
    {
      _Impl* __tmp = new _Impl(*_M_impl, 1);
      try
 {
   __tmp->_M_replace_facet(__other._M_impl, &_Facet::id);
 }
      catch(...)
 {
   __tmp->_M_remove_reference();
   throw;
 }
      return locale(__tmp);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    bool
    locale::
    operator()(const basic_string<_CharT, _Traits, _Alloc>& __s1,
        const basic_string<_CharT, _Traits, _Alloc>& __s2) const
    {
      typedef std::collate<_CharT> __collate_type;
      const __collate_type& __collate = use_facet<__collate_type>(*this);
      return (__collate.compare(__s1.data(), __s1.data() + __s1.length(),
    __s2.data(), __s2.data() + __s2.length()) < 0);
    }
# 102 "/usr/include/c++/5/bits/locale_classes.tcc" 3
  template<typename _Facet>
    bool
    has_facet(const locale& __loc) throw()
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      return (__i < __loc._M_impl->_M_facets_size

       && dynamic_cast<const _Facet*>(__facets[__i]));



    }
# 130 "/usr/include/c++/5/bits/locale_classes.tcc" 3
  template<typename _Facet>
    const _Facet&
    use_facet(const locale& __loc)
    {
      const size_t __i = _Facet::id._M_id();
      const locale::facet** __facets = __loc._M_impl->_M_facets;
      if (__i >= __loc._M_impl->_M_facets_size || !__facets[__i])
        __throw_bad_cast();

      return dynamic_cast<const _Facet&>(*__facets[__i]);



    }



  template<typename _CharT>
    int
    collate<_CharT>::_M_compare(const _CharT*, const _CharT*) const throw ()
    { return 0; }


  template<typename _CharT>
    size_t
    collate<_CharT>::_M_transform(_CharT*, const _CharT*, size_t) const throw ()
    { return 0; }

  template<typename _CharT>
    int
    collate<_CharT>::
    do_compare(const _CharT* __lo1, const _CharT* __hi1,
        const _CharT* __lo2, const _CharT* __hi2) const
    {


      const string_type __one(__lo1, __hi1);
      const string_type __two(__lo2, __hi2);

      const _CharT* __p = __one.c_str();
      const _CharT* __pend = __one.data() + __one.length();
      const _CharT* __q = __two.c_str();
      const _CharT* __qend = __two.data() + __two.length();




      for (;;)
 {
   const int __res = _M_compare(__p, __q);
   if (__res)
     return __res;

   __p += char_traits<_CharT>::length(__p);
   __q += char_traits<_CharT>::length(__q);
   if (__p == __pend && __q == __qend)
     return 0;
   else if (__p == __pend)
     return -1;
   else if (__q == __qend)
     return 1;

   __p++;
   __q++;
 }
    }

  template<typename _CharT>
    typename collate<_CharT>::string_type
    collate<_CharT>::
    do_transform(const _CharT* __lo, const _CharT* __hi) const
    {
      string_type __ret;


      const string_type __str(__lo, __hi);

      const _CharT* __p = __str.c_str();
      const _CharT* __pend = __str.data() + __str.length();

      size_t __len = (__hi - __lo) * 2;

      _CharT* __c = new _CharT[__len];

      try
 {



   for (;;)
     {

       size_t __res = _M_transform(__c, __p, __len);


       if (__res >= __len)
  {
    __len = __res + 1;
    delete [] __c, __c = 0;
    __c = new _CharT[__len];
    __res = _M_transform(__c, __p, __len);
  }

       __ret.append(__c, __res);
       __p += char_traits<_CharT>::length(__p);
       if (__p == __pend)
  break;

       __p++;
       __ret.push_back(_CharT());
     }
 }
      catch(...)
 {
   delete [] __c;
   throw;
 }

      delete [] __c;

      return __ret;
    }

  template<typename _CharT>
    long
    collate<_CharT>::
    do_hash(const _CharT* __lo, const _CharT* __hi) const
    {
      unsigned long __val = 0;
      for (; __lo < __hi; ++__lo)
 __val =
   *__lo + ((__val << 7)
     | (__val >> (__gnu_cxx::__numeric_traits<unsigned long>::
    __digits - 7)));
      return static_cast<long>(__val);
    }




  extern template class collate<char>;
  extern template class collate_byname<char>;

  extern template
    const collate<char>&
    use_facet<collate<char> >(const locale&);

  extern template
    bool
    has_facet<collate<char> >(const locale&);


  extern template class collate<wchar_t>;
  extern template class collate_byname<wchar_t>;

  extern template
    const collate<wchar_t>&
    use_facet<collate<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<collate<wchar_t> >(const locale&);




}
# 843 "/usr/include/c++/5/bits/locale_classes.h" 2 3
# 42 "/usr/include/c++/5/bits/ios_base.h" 2 3


# 1 "/usr/include/c++/5/stdexcept" 1 3
# 36 "/usr/include/c++/5/stdexcept" 3
       
# 37 "/usr/include/c++/5/stdexcept" 3




namespace std __attribute__ ((__visibility__ ("default")))
{





  struct __cow_string
  {
    union {
      const char* _M_p;
      char _M_bytes[sizeof(const char*)];
    };

    __cow_string();
    __cow_string(const std::string&);
    __cow_string(const char*, size_t);
    __cow_string(const __cow_string&) throw();
    __cow_string& operator=(const __cow_string&) throw();
    ~__cow_string();




  };

  typedef basic_string<char> __sso_string;
# 113 "/usr/include/c++/5/stdexcept" 3
  class logic_error : public exception
  {
    __cow_string _M_msg;

  public:

    explicit
    logic_error(const string& __arg);







    logic_error(const logic_error&) throw();
    logic_error& operator=(const logic_error&) throw();


    virtual ~logic_error() throw();



    virtual const char*
    what() const throw();
  };



  class domain_error : public logic_error
  {
  public:
    explicit domain_error(const string& __arg);



    virtual ~domain_error() throw();
  };


  class invalid_argument : public logic_error
  {
  public:
    explicit invalid_argument(const string& __arg);



    virtual ~invalid_argument() throw();
  };



  class length_error : public logic_error
  {
  public:
    explicit length_error(const string& __arg);



    virtual ~length_error() throw();
  };



  class out_of_range : public logic_error
  {
  public:
    explicit out_of_range(const string& __arg);



    virtual ~out_of_range() throw();
  };






  class runtime_error : public exception
  {
    __cow_string _M_msg;

  public:

    explicit
    runtime_error(const string& __arg);







    runtime_error(const runtime_error&) throw();
    runtime_error& operator=(const runtime_error&) throw();


    virtual ~runtime_error() throw();



    virtual const char*
    what() const throw();
  };


  class range_error : public runtime_error
  {
  public:
    explicit range_error(const string& __arg);



    virtual ~range_error() throw();
  };


  class overflow_error : public runtime_error
  {
  public:
    explicit overflow_error(const string& __arg);



    virtual ~overflow_error() throw();
  };


  class underflow_error : public runtime_error
  {
  public:
    explicit underflow_error(const string& __arg);



    virtual ~underflow_error() throw();
  };




}
# 45 "/usr/include/c++/5/bits/ios_base.h" 2 3




namespace std __attribute__ ((__visibility__ ("default")))
{






  enum _Ios_Fmtflags
    {
      _S_boolalpha = 1L << 0,
      _S_dec = 1L << 1,
      _S_fixed = 1L << 2,
      _S_hex = 1L << 3,
      _S_internal = 1L << 4,
      _S_left = 1L << 5,
      _S_oct = 1L << 6,
      _S_right = 1L << 7,
      _S_scientific = 1L << 8,
      _S_showbase = 1L << 9,
      _S_showpoint = 1L << 10,
      _S_showpos = 1L << 11,
      _S_skipws = 1L << 12,
      _S_unitbuf = 1L << 13,
      _S_uppercase = 1L << 14,
      _S_adjustfield = _S_left | _S_right | _S_internal,
      _S_basefield = _S_dec | _S_oct | _S_hex,
      _S_floatfield = _S_scientific | _S_fixed,
      _S_ios_fmtflags_end = 1L << 16,
      _S_ios_fmtflags_max = 0x7fffffff,
      _S_ios_fmtflags_min = ~0x7fffffff
    };

  inline _Ios_Fmtflags
  operator&(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator|(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator^(_Ios_Fmtflags __a, _Ios_Fmtflags __b)
  { return _Ios_Fmtflags(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Fmtflags
  operator~(_Ios_Fmtflags __a)
  { return _Ios_Fmtflags(~static_cast<int>(__a)); }

  inline const _Ios_Fmtflags&
  operator|=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a | __b; }

  inline const _Ios_Fmtflags&
  operator&=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a & __b; }

  inline const _Ios_Fmtflags&
  operator^=(_Ios_Fmtflags& __a, _Ios_Fmtflags __b)
  { return __a = __a ^ __b; }


  enum _Ios_Openmode
    {
      _S_app = 1L << 0,
      _S_ate = 1L << 1,
      _S_bin = 1L << 2,
      _S_in = 1L << 3,
      _S_out = 1L << 4,
      _S_trunc = 1L << 5,
      _S_ios_openmode_end = 1L << 16,
      _S_ios_openmode_max = 0x7fffffff,
      _S_ios_openmode_min = ~0x7fffffff
    };

  inline _Ios_Openmode
  operator&(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator|(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator^(_Ios_Openmode __a, _Ios_Openmode __b)
  { return _Ios_Openmode(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Openmode
  operator~(_Ios_Openmode __a)
  { return _Ios_Openmode(~static_cast<int>(__a)); }

  inline const _Ios_Openmode&
  operator|=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a | __b; }

  inline const _Ios_Openmode&
  operator&=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a & __b; }

  inline const _Ios_Openmode&
  operator^=(_Ios_Openmode& __a, _Ios_Openmode __b)
  { return __a = __a ^ __b; }


  enum _Ios_Iostate
    {
      _S_goodbit = 0,
      _S_badbit = 1L << 0,
      _S_eofbit = 1L << 1,
      _S_failbit = 1L << 2,
      _S_ios_iostate_end = 1L << 16,
      _S_ios_iostate_max = 0x7fffffff,
      _S_ios_iostate_min = ~0x7fffffff
    };

  inline _Ios_Iostate
  operator&(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) & static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator|(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) | static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator^(_Ios_Iostate __a, _Ios_Iostate __b)
  { return _Ios_Iostate(static_cast<int>(__a) ^ static_cast<int>(__b)); }

  inline _Ios_Iostate
  operator~(_Ios_Iostate __a)
  { return _Ios_Iostate(~static_cast<int>(__a)); }

  inline const _Ios_Iostate&
  operator|=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a | __b; }

  inline const _Ios_Iostate&
  operator&=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a & __b; }

  inline const _Ios_Iostate&
  operator^=(_Ios_Iostate& __a, _Ios_Iostate __b)
  { return __a = __a ^ __b; }


  enum _Ios_Seekdir
    {
      _S_beg = 0,
      _S_cur = 1,
      _S_end = 2,
      _S_ios_seekdir_end = 1L << 16
    };
# 228 "/usr/include/c++/5/bits/ios_base.h" 3
  class ios_base
  {



    struct system_error : std::runtime_error
    {

      struct error_code
      {
 error_code() { }
      private:
 int _M_value;
 const void* _M_cat;
      } _M_code;
    };


  public:
# 255 "/usr/include/c++/5/bits/ios_base.h" 3
    class __attribute ((__abi_tag__ ("cxx11"))) failure : public system_error
    {
    public:
      explicit
      failure(const string& __str);
# 269 "/usr/include/c++/5/bits/ios_base.h" 3
      virtual
      ~failure() throw();

      virtual const char*
      what() const throw();
    };
# 323 "/usr/include/c++/5/bits/ios_base.h" 3
    typedef _Ios_Fmtflags fmtflags;


    static const fmtflags boolalpha = _S_boolalpha;


    static const fmtflags dec = _S_dec;


    static const fmtflags fixed = _S_fixed;


    static const fmtflags hex = _S_hex;




    static const fmtflags internal = _S_internal;



    static const fmtflags left = _S_left;


    static const fmtflags oct = _S_oct;



    static const fmtflags right = _S_right;


    static const fmtflags scientific = _S_scientific;



    static const fmtflags showbase = _S_showbase;



    static const fmtflags showpoint = _S_showpoint;


    static const fmtflags showpos = _S_showpos;


    static const fmtflags skipws = _S_skipws;


    static const fmtflags unitbuf = _S_unitbuf;



    static const fmtflags uppercase = _S_uppercase;


    static const fmtflags adjustfield = _S_adjustfield;


    static const fmtflags basefield = _S_basefield;


    static const fmtflags floatfield = _S_floatfield;
# 398 "/usr/include/c++/5/bits/ios_base.h" 3
    typedef _Ios_Iostate iostate;



    static const iostate badbit = _S_badbit;


    static const iostate eofbit = _S_eofbit;




    static const iostate failbit = _S_failbit;


    static const iostate goodbit = _S_goodbit;
# 429 "/usr/include/c++/5/bits/ios_base.h" 3
    typedef _Ios_Openmode openmode;


    static const openmode app = _S_app;


    static const openmode ate = _S_ate;




    static const openmode binary = _S_bin;


    static const openmode in = _S_in;


    static const openmode out = _S_out;


    static const openmode trunc = _S_trunc;
# 461 "/usr/include/c++/5/bits/ios_base.h" 3
    typedef _Ios_Seekdir seekdir;


    static const seekdir beg = _S_beg;


    static const seekdir cur = _S_cur;


    static const seekdir end = _S_end;


    typedef int io_state;
    typedef int open_mode;
    typedef int seek_dir;

    typedef std::streampos streampos;
    typedef std::streamoff streamoff;
# 487 "/usr/include/c++/5/bits/ios_base.h" 3
    enum event
    {
      erase_event,
      imbue_event,
      copyfmt_event
    };
# 504 "/usr/include/c++/5/bits/ios_base.h" 3
    typedef void (*event_callback) (event __e, ios_base& __b, int __i);
# 516 "/usr/include/c++/5/bits/ios_base.h" 3
    void
    register_callback(event_callback __fn, int __index);

  protected:
    streamsize _M_precision;
    streamsize _M_width;
    fmtflags _M_flags;
    iostate _M_exception;
    iostate _M_streambuf_state;



    struct _Callback_list
    {

      _Callback_list* _M_next;
      ios_base::event_callback _M_fn;
      int _M_index;
      _Atomic_word _M_refcount;

      _Callback_list(ios_base::event_callback __fn, int __index,
       _Callback_list* __cb)
      : _M_next(__cb), _M_fn(__fn), _M_index(__index), _M_refcount(0) { }

      void
      _M_add_reference() { __gnu_cxx::__atomic_add_dispatch(&_M_refcount, 1); }


      int
      _M_remove_reference()
      {

        ;
        int __res = __gnu_cxx::__exchange_and_add_dispatch(&_M_refcount, -1);
        if (__res == 0)
          {
            ;
          }
        return __res;
      }
    };

     _Callback_list* _M_callbacks;

    void
    _M_call_callbacks(event __ev) throw();

    void
    _M_dispose_callbacks(void) throw();


    struct _Words
    {
      void* _M_pword;
      long _M_iword;
      _Words() : _M_pword(0), _M_iword(0) { }
    };


    _Words _M_word_zero;



    enum { _S_local_word_size = 8 };
    _Words _M_local_word[_S_local_word_size];


    int _M_word_size;
    _Words* _M_word;

    _Words&
    _M_grow_words(int __index, bool __iword);


    locale _M_ios_locale;

    void
    _M_init() throw();

  public:





    class Init
    {
      friend class ios_base;
    public:
      Init();
      ~Init();

    private:
      static _Atomic_word _S_refcount;
      static bool _S_synced_with_stdio;
    };






    fmtflags
    flags() const
    { return _M_flags; }
# 629 "/usr/include/c++/5/bits/ios_base.h" 3
    fmtflags
    flags(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags = __fmtfl;
      return __old;
    }
# 645 "/usr/include/c++/5/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl)
    {
      fmtflags __old = _M_flags;
      _M_flags |= __fmtfl;
      return __old;
    }
# 662 "/usr/include/c++/5/bits/ios_base.h" 3
    fmtflags
    setf(fmtflags __fmtfl, fmtflags __mask)
    {
      fmtflags __old = _M_flags;
      _M_flags &= ~__mask;
      _M_flags |= (__fmtfl & __mask);
      return __old;
    }







    void
    unsetf(fmtflags __mask)
    { _M_flags &= ~__mask; }
# 688 "/usr/include/c++/5/bits/ios_base.h" 3
    streamsize
    precision() const
    { return _M_precision; }






    streamsize
    precision(streamsize __prec)
    {
      streamsize __old = _M_precision;
      _M_precision = __prec;
      return __old;
    }







    streamsize
    width() const
    { return _M_width; }






    streamsize
    width(streamsize __wide)
    {
      streamsize __old = _M_width;
      _M_width = __wide;
      return __old;
    }
# 739 "/usr/include/c++/5/bits/ios_base.h" 3
    static bool
    sync_with_stdio(bool __sync = true);
# 751 "/usr/include/c++/5/bits/ios_base.h" 3
    locale
    imbue(const locale& __loc) throw();
# 762 "/usr/include/c++/5/bits/ios_base.h" 3
    locale
    getloc() const
    { return _M_ios_locale; }
# 773 "/usr/include/c++/5/bits/ios_base.h" 3
    const locale&
    _M_getloc() const
    { return _M_ios_locale; }
# 792 "/usr/include/c++/5/bits/ios_base.h" 3
    static int
    xalloc() throw();
# 808 "/usr/include/c++/5/bits/ios_base.h" 3
    long&
    iword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, true);
      return __word._M_iword;
    }
# 829 "/usr/include/c++/5/bits/ios_base.h" 3
    void*&
    pword(int __ix)
    {
      _Words& __word = (__ix < _M_word_size)
   ? _M_word[__ix] : _M_grow_words(__ix, false);
      return __word._M_pword;
    }
# 846 "/usr/include/c++/5/bits/ios_base.h" 3
    virtual ~ios_base();

  protected:
    ios_base() throw ();




  private:
    ios_base(const ios_base&);

    ios_base&
    operator=(const ios_base&);
# 873 "/usr/include/c++/5/bits/ios_base.h" 3
  };



  inline ios_base&
  boolalpha(ios_base& __base)
  {
    __base.setf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  noboolalpha(ios_base& __base)
  {
    __base.unsetf(ios_base::boolalpha);
    return __base;
  }


  inline ios_base&
  showbase(ios_base& __base)
  {
    __base.setf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  noshowbase(ios_base& __base)
  {
    __base.unsetf(ios_base::showbase);
    return __base;
  }


  inline ios_base&
  showpoint(ios_base& __base)
  {
    __base.setf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  noshowpoint(ios_base& __base)
  {
    __base.unsetf(ios_base::showpoint);
    return __base;
  }


  inline ios_base&
  showpos(ios_base& __base)
  {
    __base.setf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  noshowpos(ios_base& __base)
  {
    __base.unsetf(ios_base::showpos);
    return __base;
  }


  inline ios_base&
  skipws(ios_base& __base)
  {
    __base.setf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  noskipws(ios_base& __base)
  {
    __base.unsetf(ios_base::skipws);
    return __base;
  }


  inline ios_base&
  uppercase(ios_base& __base)
  {
    __base.setf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  nouppercase(ios_base& __base)
  {
    __base.unsetf(ios_base::uppercase);
    return __base;
  }


  inline ios_base&
  unitbuf(ios_base& __base)
  {
     __base.setf(ios_base::unitbuf);
     return __base;
  }


  inline ios_base&
  nounitbuf(ios_base& __base)
  {
     __base.unsetf(ios_base::unitbuf);
     return __base;
  }



  inline ios_base&
  internal(ios_base& __base)
  {
     __base.setf(ios_base::internal, ios_base::adjustfield);
     return __base;
  }


  inline ios_base&
  left(ios_base& __base)
  {
    __base.setf(ios_base::left, ios_base::adjustfield);
    return __base;
  }


  inline ios_base&
  right(ios_base& __base)
  {
    __base.setf(ios_base::right, ios_base::adjustfield);
    return __base;
  }



  inline ios_base&
  dec(ios_base& __base)
  {
    __base.setf(ios_base::dec, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  hex(ios_base& __base)
  {
    __base.setf(ios_base::hex, ios_base::basefield);
    return __base;
  }


  inline ios_base&
  oct(ios_base& __base)
  {
    __base.setf(ios_base::oct, ios_base::basefield);
    return __base;
  }



  inline ios_base&
  fixed(ios_base& __base)
  {
    __base.setf(ios_base::fixed, ios_base::floatfield);
    return __base;
  }


  inline ios_base&
  scientific(ios_base& __base)
  {
    __base.setf(ios_base::scientific, ios_base::floatfield);
    return __base;
  }
# 1076 "/usr/include/c++/5/bits/ios_base.h" 3

}
# 43 "/usr/include/c++/5/ios" 2 3
# 1 "/usr/include/c++/5/streambuf" 1 3
# 36 "/usr/include/c++/5/streambuf" 3
       
# 37 "/usr/include/c++/5/streambuf" 3
# 45 "/usr/include/c++/5/streambuf" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>*,
     basic_streambuf<_CharT, _Traits>*, bool&);
# 119 "/usr/include/c++/5/streambuf" 3
  template<typename _CharT, typename _Traits>
    class basic_streambuf
    {
    public:






      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename traits_type::int_type int_type;
      typedef typename traits_type::pos_type pos_type;
      typedef typename traits_type::off_type off_type;




      typedef basic_streambuf<char_type, traits_type> __streambuf_type;


      friend class basic_ios<char_type, traits_type>;
      friend class basic_istream<char_type, traits_type>;
      friend class basic_ostream<char_type, traits_type>;
      friend class istreambuf_iterator<char_type, traits_type>;
      friend class ostreambuf_iterator<char_type, traits_type>;

      friend streamsize
      __copy_streambufs_eof<>(basic_streambuf*, basic_streambuf*, bool&);

      template<bool _IsMove, typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
        __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
        friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
      istreambuf_iterator<_CharT2> >::__type
        find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

      template<typename _CharT2, typename _Traits2>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&, _CharT2*);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        operator>>(basic_istream<_CharT2, _Traits2>&,
     basic_string<_CharT2, _Traits2, _Alloc>&);

      template<typename _CharT2, typename _Traits2, typename _Alloc>
        friend basic_istream<_CharT2, _Traits2>&
        getline(basic_istream<_CharT2, _Traits2>&,
  basic_string<_CharT2, _Traits2, _Alloc>&, _CharT2);

    protected:







      char_type* _M_in_beg;
      char_type* _M_in_cur;
      char_type* _M_in_end;
      char_type* _M_out_beg;
      char_type* _M_out_cur;
      char_type* _M_out_end;


      locale _M_buf_locale;

  public:

      virtual
      ~basic_streambuf()
      { }
# 208 "/usr/include/c++/5/streambuf" 3
      locale
      pubimbue(const locale& __loc)
      {
 locale __tmp(this->getloc());
 this->imbue(__loc);
 _M_buf_locale = __loc;
 return __tmp;
      }
# 225 "/usr/include/c++/5/streambuf" 3
      locale
      getloc() const
      { return _M_buf_locale; }
# 238 "/usr/include/c++/5/streambuf" 3
      basic_streambuf*
      pubsetbuf(char_type* __s, streamsize __n)
      { return this->setbuf(__s, __n); }
# 250 "/usr/include/c++/5/streambuf" 3
      pos_type
      pubseekoff(off_type __off, ios_base::seekdir __way,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekoff(__off, __way, __mode); }
# 262 "/usr/include/c++/5/streambuf" 3
      pos_type
      pubseekpos(pos_type __sp,
   ios_base::openmode __mode = ios_base::in | ios_base::out)
      { return this->seekpos(__sp, __mode); }




      int
      pubsync() { return this->sync(); }
# 283 "/usr/include/c++/5/streambuf" 3
      streamsize
      in_avail()
      {
 const streamsize __ret = this->egptr() - this->gptr();
 return __ret ? __ret : this->showmanyc();
      }
# 297 "/usr/include/c++/5/streambuf" 3
      int_type
      snextc()
      {
 int_type __ret = traits_type::eof();
 if (__builtin_expect(!traits_type::eq_int_type(this->sbumpc(),
             __ret), true))
   __ret = this->sgetc();
 return __ret;
      }
# 315 "/usr/include/c++/5/streambuf" 3
      int_type
      sbumpc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 else
   __ret = this->uflow();
 return __ret;
      }
# 337 "/usr/include/c++/5/streambuf" 3
      int_type
      sgetc()
      {
 int_type __ret;
 if (__builtin_expect(this->gptr() < this->egptr(), true))
   __ret = traits_type::to_int_type(*this->gptr());
 else
   __ret = this->underflow();
 return __ret;
      }
# 356 "/usr/include/c++/5/streambuf" 3
      streamsize
      sgetn(char_type* __s, streamsize __n)
      { return this->xsgetn(__s, __n); }
# 371 "/usr/include/c++/5/streambuf" 3
      int_type
      sputbackc(char_type __c)
      {
 int_type __ret;
 const bool __testpos = this->eback() < this->gptr();
 if (__builtin_expect(!__testpos ||
        !traits_type::eq(__c, this->gptr()[-1]), false))
   __ret = this->pbackfail(traits_type::to_int_type(__c));
 else
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 return __ret;
      }
# 396 "/usr/include/c++/5/streambuf" 3
      int_type
      sungetc()
      {
 int_type __ret;
 if (__builtin_expect(this->eback() < this->gptr(), true))
   {
     this->gbump(-1);
     __ret = traits_type::to_int_type(*this->gptr());
   }
 else
   __ret = this->pbackfail();
 return __ret;
      }
# 423 "/usr/include/c++/5/streambuf" 3
      int_type
      sputc(char_type __c)
      {
 int_type __ret;
 if (__builtin_expect(this->pptr() < this->epptr(), true))
   {
     *this->pptr() = __c;
     this->pbump(1);
     __ret = traits_type::to_int_type(__c);
   }
 else
   __ret = this->overflow(traits_type::to_int_type(__c));
 return __ret;
      }
# 449 "/usr/include/c++/5/streambuf" 3
      streamsize
      sputn(const char_type* __s, streamsize __n)
      { return this->xsputn(__s, __n); }

    protected:
# 463 "/usr/include/c++/5/streambuf" 3
      basic_streambuf()
      : _M_in_beg(0), _M_in_cur(0), _M_in_end(0),
      _M_out_beg(0), _M_out_cur(0), _M_out_end(0),
      _M_buf_locale(locale())
      { }
# 481 "/usr/include/c++/5/streambuf" 3
      char_type*
      eback() const { return _M_in_beg; }

      char_type*
      gptr() const { return _M_in_cur; }

      char_type*
      egptr() const { return _M_in_end; }
# 497 "/usr/include/c++/5/streambuf" 3
      void
      gbump(int __n) { _M_in_cur += __n; }
# 508 "/usr/include/c++/5/streambuf" 3
      void
      setg(char_type* __gbeg, char_type* __gnext, char_type* __gend)
      {
 _M_in_beg = __gbeg;
 _M_in_cur = __gnext;
 _M_in_end = __gend;
      }
# 528 "/usr/include/c++/5/streambuf" 3
      char_type*
      pbase() const { return _M_out_beg; }

      char_type*
      pptr() const { return _M_out_cur; }

      char_type*
      epptr() const { return _M_out_end; }
# 544 "/usr/include/c++/5/streambuf" 3
      void
      pbump(int __n) { _M_out_cur += __n; }
# 554 "/usr/include/c++/5/streambuf" 3
      void
      setp(char_type* __pbeg, char_type* __pend)
      {
 _M_out_beg = _M_out_cur = __pbeg;
 _M_out_end = __pend;
      }
# 575 "/usr/include/c++/5/streambuf" 3
      virtual void
      imbue(const locale& __loc)
      { }
# 590 "/usr/include/c++/5/streambuf" 3
      virtual basic_streambuf<char_type,_Traits>*
      setbuf(char_type*, streamsize)
      { return this; }
# 601 "/usr/include/c++/5/streambuf" 3
      virtual pos_type
      seekoff(off_type, ios_base::seekdir,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 613 "/usr/include/c++/5/streambuf" 3
      virtual pos_type
      seekpos(pos_type,
       ios_base::openmode = ios_base::in | ios_base::out)
      { return pos_type(off_type(-1)); }
# 626 "/usr/include/c++/5/streambuf" 3
      virtual int
      sync() { return 0; }
# 648 "/usr/include/c++/5/streambuf" 3
      virtual streamsize
      showmanyc() { return 0; }
# 664 "/usr/include/c++/5/streambuf" 3
      virtual streamsize
      xsgetn(char_type* __s, streamsize __n);
# 686 "/usr/include/c++/5/streambuf" 3
      virtual int_type
      underflow()
      { return traits_type::eof(); }
# 699 "/usr/include/c++/5/streambuf" 3
      virtual int_type
      uflow()
      {
 int_type __ret = traits_type::eof();
 const bool __testeof = traits_type::eq_int_type(this->underflow(),
       __ret);
 if (!__testeof)
   {
     __ret = traits_type::to_int_type(*this->gptr());
     this->gbump(1);
   }
 return __ret;
      }
# 723 "/usr/include/c++/5/streambuf" 3
      virtual int_type
      pbackfail(int_type __c = traits_type::eof())
      { return traits_type::eof(); }
# 741 "/usr/include/c++/5/streambuf" 3
      virtual streamsize
      xsputn(const char_type* __s, streamsize __n);
# 767 "/usr/include/c++/5/streambuf" 3
      virtual int_type
      overflow(int_type __c = traits_type::eof())
      { return traits_type::eof(); }



    public:
# 782 "/usr/include/c++/5/streambuf" 3
      void
      stossc()
      {
 if (this->gptr() < this->egptr())
   this->gbump(1);
 else
   this->uflow();
      }



      void
      __safe_gbump(streamsize __n) { _M_in_cur += __n; }

      void
      __safe_pbump(streamsize __n) { _M_out_cur += __n; }


    private:



      basic_streambuf(const basic_streambuf&);

      basic_streambuf&
      operator=(const basic_streambuf&);
# 822 "/usr/include/c++/5/streambuf" 3
    };
# 836 "/usr/include/c++/5/streambuf" 3
  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>* __sbin,
     basic_streambuf<char>* __sbout, bool& __ineof);

  template<>
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>* __sbin,
     basic_streambuf<wchar_t>* __sbout, bool& __ineof);



}

# 1 "/usr/include/c++/5/bits/streambuf.tcc" 1 3
# 37 "/usr/include/c++/5/bits/streambuf.tcc" 3
       
# 38 "/usr/include/c++/5/bits/streambuf.tcc" 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsgetn(char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->egptr() - this->gptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(__s, this->gptr(), __len);
       __ret += __len;
       __s += __len;
       this->__safe_gbump(__len);
     }

   if (__ret < __n)
     {
       const int_type __c = this->uflow();
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    traits_type::assign(*__s++, traits_type::to_char_type(__c));
    ++__ret;
  }
       else
  break;
     }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_streambuf<_CharT, _Traits>::
    xsputn(const char_type* __s, streamsize __n)
    {
      streamsize __ret = 0;
      while (__ret < __n)
 {
   const streamsize __buf_len = this->epptr() - this->pptr();
   if (__buf_len)
     {
       const streamsize __remaining = __n - __ret;
       const streamsize __len = std::min(__buf_len, __remaining);
       traits_type::copy(this->pptr(), __s, __len);
       __ret += __len;
       __s += __len;
       this->__safe_pbump(__len);
     }

   if (__ret < __n)
     {
       int_type __c = this->overflow(traits_type::to_int_type(*__s));
       if (!traits_type::eq_int_type(__c, traits_type::eof()))
  {
    ++__ret;
    ++__s;
  }
       else
  break;
     }
 }
      return __ret;
    }




  template<typename _CharT, typename _Traits>
    streamsize
    __copy_streambufs_eof(basic_streambuf<_CharT, _Traits>* __sbin,
     basic_streambuf<_CharT, _Traits>* __sbout,
     bool& __ineof)
    {
      streamsize __ret = 0;
      __ineof = true;
      typename _Traits::int_type __c = __sbin->sgetc();
      while (!_Traits::eq_int_type(__c, _Traits::eof()))
 {
   __c = __sbout->sputc(_Traits::to_char_type(__c));
   if (_Traits::eq_int_type(__c, _Traits::eof()))
     {
       __ineof = false;
       break;
     }
   ++__ret;
   __c = __sbin->snextc();
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    inline streamsize
    __copy_streambufs(basic_streambuf<_CharT, _Traits>* __sbin,
        basic_streambuf<_CharT, _Traits>* __sbout)
    {
      bool __ineof;
      return __copy_streambufs_eof(__sbin, __sbout, __ineof);
    }




  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*,
        basic_streambuf<char>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<char>*,
     basic_streambuf<char>*, bool&);


  extern template class basic_streambuf<wchar_t>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<wchar_t>*,
        basic_streambuf<wchar_t>*);
  extern template
    streamsize
    __copy_streambufs_eof(basic_streambuf<wchar_t>*,
     basic_streambuf<wchar_t>*, bool&);




}
# 851 "/usr/include/c++/5/streambuf" 2 3
# 44 "/usr/include/c++/5/ios" 2 3
# 1 "/usr/include/c++/5/bits/basic_ios.h" 1 3
# 33 "/usr/include/c++/5/bits/basic_ios.h" 3
       
# 34 "/usr/include/c++/5/bits/basic_ios.h" 3



# 1 "/usr/include/c++/5/bits/locale_facets.h" 1 3
# 37 "/usr/include/c++/5/bits/locale_facets.h" 3
       
# 38 "/usr/include/c++/5/bits/locale_facets.h" 3

# 1 "/usr/include/c++/5/cwctype" 1 3
# 39 "/usr/include/c++/5/cwctype" 3
       
# 40 "/usr/include/c++/5/cwctype" 3
# 50 "/usr/include/c++/5/cwctype" 3
# 1 "/usr/include/wctype.h" 1 3 4
# 33 "/usr/include/wctype.h" 3 4
# 1 "/usr/include/wchar.h" 1 3 4
# 34 "/usr/include/wctype.h" 2 3 4
# 49 "/usr/include/wctype.h" 3 4



typedef unsigned long int wctype_t;

# 71 "/usr/include/wctype.h" 3 4
enum
{
  __ISwupper = 0,
  __ISwlower = 1,
  __ISwalpha = 2,
  __ISwdigit = 3,
  __ISwxdigit = 4,
  __ISwspace = 5,
  __ISwprint = 6,
  __ISwgraph = 7,
  __ISwblank = 8,
  __ISwcntrl = 9,
  __ISwpunct = 10,
  __ISwalnum = 11,

  _ISwupper = ((__ISwupper) < 8 ? (int) ((1UL << (__ISwupper)) << 24) : ((__ISwupper) < 16 ? (int) ((1UL << (__ISwupper)) << 8) : ((__ISwupper) < 24 ? (int) ((1UL << (__ISwupper)) >> 8) : (int) ((1UL << (__ISwupper)) >> 24)))),
  _ISwlower = ((__ISwlower) < 8 ? (int) ((1UL << (__ISwlower)) << 24) : ((__ISwlower) < 16 ? (int) ((1UL << (__ISwlower)) << 8) : ((__ISwlower) < 24 ? (int) ((1UL << (__ISwlower)) >> 8) : (int) ((1UL << (__ISwlower)) >> 24)))),
  _ISwalpha = ((__ISwalpha) < 8 ? (int) ((1UL << (__ISwalpha)) << 24) : ((__ISwalpha) < 16 ? (int) ((1UL << (__ISwalpha)) << 8) : ((__ISwalpha) < 24 ? (int) ((1UL << (__ISwalpha)) >> 8) : (int) ((1UL << (__ISwalpha)) >> 24)))),
  _ISwdigit = ((__ISwdigit) < 8 ? (int) ((1UL << (__ISwdigit)) << 24) : ((__ISwdigit) < 16 ? (int) ((1UL << (__ISwdigit)) << 8) : ((__ISwdigit) < 24 ? (int) ((1UL << (__ISwdigit)) >> 8) : (int) ((1UL << (__ISwdigit)) >> 24)))),
  _ISwxdigit = ((__ISwxdigit) < 8 ? (int) ((1UL << (__ISwxdigit)) << 24) : ((__ISwxdigit) < 16 ? (int) ((1UL << (__ISwxdigit)) << 8) : ((__ISwxdigit) < 24 ? (int) ((1UL << (__ISwxdigit)) >> 8) : (int) ((1UL << (__ISwxdigit)) >> 24)))),
  _ISwspace = ((__ISwspace) < 8 ? (int) ((1UL << (__ISwspace)) << 24) : ((__ISwspace) < 16 ? (int) ((1UL << (__ISwspace)) << 8) : ((__ISwspace) < 24 ? (int) ((1UL << (__ISwspace)) >> 8) : (int) ((1UL << (__ISwspace)) >> 24)))),
  _ISwprint = ((__ISwprint) < 8 ? (int) ((1UL << (__ISwprint)) << 24) : ((__ISwprint) < 16 ? (int) ((1UL << (__ISwprint)) << 8) : ((__ISwprint) < 24 ? (int) ((1UL << (__ISwprint)) >> 8) : (int) ((1UL << (__ISwprint)) >> 24)))),
  _ISwgraph = ((__ISwgraph) < 8 ? (int) ((1UL << (__ISwgraph)) << 24) : ((__ISwgraph) < 16 ? (int) ((1UL << (__ISwgraph)) << 8) : ((__ISwgraph) < 24 ? (int) ((1UL << (__ISwgraph)) >> 8) : (int) ((1UL << (__ISwgraph)) >> 24)))),
  _ISwblank = ((__ISwblank) < 8 ? (int) ((1UL << (__ISwblank)) << 24) : ((__ISwblank) < 16 ? (int) ((1UL << (__ISwblank)) << 8) : ((__ISwblank) < 24 ? (int) ((1UL << (__ISwblank)) >> 8) : (int) ((1UL << (__ISwblank)) >> 24)))),
  _ISwcntrl = ((__ISwcntrl) < 8 ? (int) ((1UL << (__ISwcntrl)) << 24) : ((__ISwcntrl) < 16 ? (int) ((1UL << (__ISwcntrl)) << 8) : ((__ISwcntrl) < 24 ? (int) ((1UL << (__ISwcntrl)) >> 8) : (int) ((1UL << (__ISwcntrl)) >> 24)))),
  _ISwpunct = ((__ISwpunct) < 8 ? (int) ((1UL << (__ISwpunct)) << 24) : ((__ISwpunct) < 16 ? (int) ((1UL << (__ISwpunct)) << 8) : ((__ISwpunct) < 24 ? (int) ((1UL << (__ISwpunct)) >> 8) : (int) ((1UL << (__ISwpunct)) >> 24)))),
  _ISwalnum = ((__ISwalnum) < 8 ? (int) ((1UL << (__ISwalnum)) << 24) : ((__ISwalnum) < 16 ? (int) ((1UL << (__ISwalnum)) << 8) : ((__ISwalnum) < 24 ? (int) ((1UL << (__ISwalnum)) >> 8) : (int) ((1UL << (__ISwalnum)) >> 24))))
};



extern "C" {








extern int iswalnum (wint_t __wc) throw ();





extern int iswalpha (wint_t __wc) throw ();


extern int iswcntrl (wint_t __wc) throw ();



extern int iswdigit (wint_t __wc) throw ();



extern int iswgraph (wint_t __wc) throw ();




extern int iswlower (wint_t __wc) throw ();


extern int iswprint (wint_t __wc) throw ();




extern int iswpunct (wint_t __wc) throw ();




extern int iswspace (wint_t __wc) throw ();




extern int iswupper (wint_t __wc) throw ();




extern int iswxdigit (wint_t __wc) throw ();





extern int iswblank (wint_t __wc) throw ();
# 171 "/usr/include/wctype.h" 3 4
extern wctype_t wctype (const char *__property) throw ();



extern int iswctype (wint_t __wc, wctype_t __desc) throw ();










typedef const __int32_t *wctrans_t;







extern wint_t towlower (wint_t __wc) throw ();


extern wint_t towupper (wint_t __wc) throw ();


}
# 213 "/usr/include/wctype.h" 3 4
extern "C" {




extern wctrans_t wctrans (const char *__property) throw ();


extern wint_t towctrans (wint_t __wc, wctrans_t __desc) throw ();








extern int iswalnum_l (wint_t __wc, __locale_t __locale) throw ();





extern int iswalpha_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswcntrl_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswdigit_l (wint_t __wc, __locale_t __locale) throw ();



extern int iswgraph_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswlower_l (wint_t __wc, __locale_t __locale) throw ();


extern int iswprint_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswpunct_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswspace_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswupper_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswxdigit_l (wint_t __wc, __locale_t __locale) throw ();




extern int iswblank_l (wint_t __wc, __locale_t __locale) throw ();



extern wctype_t wctype_l (const char *__property, __locale_t __locale)
     throw ();



extern int iswctype_l (wint_t __wc, wctype_t __desc, __locale_t __locale)
     throw ();







extern wint_t towlower_l (wint_t __wc, __locale_t __locale) throw ();


extern wint_t towupper_l (wint_t __wc, __locale_t __locale) throw ();



extern wctrans_t wctrans_l (const char *__property, __locale_t __locale)
     throw ();


extern wint_t towctrans_l (wint_t __wc, wctrans_t __desc,
      __locale_t __locale) throw ();



}
# 51 "/usr/include/c++/5/cwctype" 2 3
# 80 "/usr/include/c++/5/cwctype" 3
namespace std
{
  using ::wctrans_t;
  using ::wctype_t;
  using ::wint_t;

  using ::iswalnum;
  using ::iswalpha;

  using ::iswblank;

  using ::iswcntrl;
  using ::iswctype;
  using ::iswdigit;
  using ::iswgraph;
  using ::iswlower;
  using ::iswprint;
  using ::iswpunct;
  using ::iswspace;
  using ::iswupper;
  using ::iswxdigit;
  using ::towctrans;
  using ::towlower;
  using ::towupper;
  using ::wctrans;
  using ::wctype;
}
# 40 "/usr/include/c++/5/bits/locale_facets.h" 2 3
# 1 "/usr/include/c++/5/cctype" 1 3
# 39 "/usr/include/c++/5/cctype" 3
       
# 40 "/usr/include/c++/5/cctype" 3
# 41 "/usr/include/c++/5/bits/locale_facets.h" 2 3
# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_base.h" 1 3
# 36 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_base.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{



  struct ctype_base
  {

    typedef const int* __to_type;



    typedef unsigned short mask;
    static const mask upper = _ISupper;
    static const mask lower = _ISlower;
    static const mask alpha = _ISalpha;
    static const mask digit = _ISdigit;
    static const mask xdigit = _ISxdigit;
    static const mask space = _ISspace;
    static const mask print = _ISprint;
    static const mask graph = _ISalpha | _ISdigit | _ISpunct;
    static const mask cntrl = _IScntrl;
    static const mask punct = _ISpunct;
    static const mask alnum = _ISalpha | _ISdigit;



  };


}
# 42 "/usr/include/c++/5/bits/locale_facets.h" 2 3






# 1 "/usr/include/c++/5/bits/streambuf_iterator.h" 1 3
# 33 "/usr/include/c++/5/bits/streambuf_iterator.h" 3
       
# 34 "/usr/include/c++/5/bits/streambuf_iterator.h" 3




namespace std __attribute__ ((__visibility__ ("default")))
{

# 49 "/usr/include/c++/5/bits/streambuf_iterator.h" 3
  template<typename _CharT, typename _Traits>
    class istreambuf_iterator
    : public iterator<input_iterator_tag, _CharT, typename _Traits::off_type,
                      _CharT*,




        _CharT&>

    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef typename _Traits::int_type int_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_istream<_CharT, _Traits> istream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

      template<bool _IsMove, typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
            _CharT2*>::__type
 __copy_move_a2(istreambuf_iterator<_CharT2>,
         istreambuf_iterator<_CharT2>, _CharT2*);

      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
               istreambuf_iterator<_CharT2> >::__type
 find(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      const _CharT2&);

    private:







      mutable streambuf_type* _M_sbuf;
      mutable int_type _M_c;

    public:

      istreambuf_iterator() throw()
      : _M_sbuf(0), _M_c(traits_type::eof()) { }
# 112 "/usr/include/c++/5/bits/streambuf_iterator.h" 3
      istreambuf_iterator(istream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_c(traits_type::eof()) { }


      istreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_c(traits_type::eof()) { }




      char_type
      operator*() const
      {







 return traits_type::to_char_type(_M_get());
      }


      istreambuf_iterator&
      operator++()
      {


                        ;
 if (_M_sbuf)
   {
     _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return *this;
      }


      istreambuf_iterator
      operator++(int)
      {


                        ;

 istreambuf_iterator __old = *this;
 if (_M_sbuf)
   {
     __old._M_c = _M_sbuf->sbumpc();
     _M_c = traits_type::eof();
   }
 return __old;
      }





      bool
      equal(const istreambuf_iterator& __b) const
      { return _M_at_eof() == __b._M_at_eof(); }

    private:
      int_type
      _M_get() const
      {
 const int_type __eof = traits_type::eof();
 int_type __ret = __eof;
 if (_M_sbuf)
   {
     if (!traits_type::eq_int_type(_M_c, __eof))
       __ret = _M_c;
     else if (!traits_type::eq_int_type((__ret = _M_sbuf->sgetc()),
            __eof))
       _M_c = __ret;
     else
       _M_sbuf = 0;
   }
 return __ret;
      }

      bool
      _M_at_eof() const
      {
 const int_type __eof = traits_type::eof();
 return traits_type::eq_int_type(_M_get(), __eof);
      }
    };

  template<typename _CharT, typename _Traits>
    inline bool
    operator==(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return __a.equal(__b); }

  template<typename _CharT, typename _Traits>
    inline bool
    operator!=(const istreambuf_iterator<_CharT, _Traits>& __a,
        const istreambuf_iterator<_CharT, _Traits>& __b)
    { return !__a.equal(__b); }


  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:



      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> streambuf_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


      template<typename _CharT2>
 friend typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value,
                      ostreambuf_iterator<_CharT2> >::__type
 copy(istreambuf_iterator<_CharT2>, istreambuf_iterator<_CharT2>,
      ostreambuf_iterator<_CharT2>);

    private:
      streambuf_type* _M_sbuf;
      bool _M_failed;

    public:

      ostreambuf_iterator(ostream_type& __s) throw()
      : _M_sbuf(__s.rdbuf()), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator(streambuf_type* __s) throw()
      : _M_sbuf(__s), _M_failed(!_M_sbuf) { }


      ostreambuf_iterator&
      operator=(_CharT __c)
      {
 if (!_M_failed &&
     _Traits::eq_int_type(_M_sbuf->sputc(__c), _Traits::eof()))
   _M_failed = true;
 return *this;
      }


      ostreambuf_iterator&
      operator*()
      { return *this; }


      ostreambuf_iterator&
      operator++(int)
      { return *this; }


      ostreambuf_iterator&
      operator++()
      { return *this; }


      bool
      failed() const throw()
      { return _M_failed; }

      ostreambuf_iterator&
      _M_put(const _CharT* __ws, streamsize __len)
      {
 if (__builtin_expect(!_M_failed, true)
     && __builtin_expect(this->_M_sbuf->sputn(__ws, __len) != __len,
    false))
   _M_failed = true;
 return *this;
      }
    };


  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
                           ostreambuf_iterator<_CharT> >::__type
    copy(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last,
  ostreambuf_iterator<_CharT> __result)
    {
      if (__first._M_sbuf && !__last._M_sbuf && !__result._M_failed)
 {
   bool __ineof;
   __copy_streambufs_eof(__first._M_sbuf, __result._M_sbuf, __ineof);
   if (!__ineof)
     __result._M_failed = true;
 }
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(_CharT* __first, _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        ostreambuf_iterator<_CharT> >::__type
    __copy_move_a2(const _CharT* __first, const _CharT* __last,
     ostreambuf_iterator<_CharT> __result)
    {
      const streamsize __num = __last - __first;
      if (__num > 0)
 __result._M_put(__first, __num);
      return __result;
    }

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
            _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT> __first,
     istreambuf_iterator<_CharT> __last, _CharT* __result)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof()))
     {
       const streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    traits_type::copy(__result, __sb->gptr(), __n);
    __sb->__safe_gbump(__n);
    __result += __n;
    __c = __sb->underflow();
  }
       else
  {
    *__result++ = traits_type::to_char_type(__c);
    __c = __sb->snextc();
  }
     }
 }
      return __result;
    }

  template<typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
          istreambuf_iterator<_CharT> >::__type
    find(istreambuf_iterator<_CharT> __first,
  istreambuf_iterator<_CharT> __last, const _CharT& __val)
    {
      typedef istreambuf_iterator<_CharT> __is_iterator_type;
      typedef typename __is_iterator_type::traits_type traits_type;
      typedef typename __is_iterator_type::streambuf_type streambuf_type;
      typedef typename traits_type::int_type int_type;

      if (__first._M_sbuf && !__last._M_sbuf)
 {
   const int_type __ival = traits_type::to_int_type(__val);
   streambuf_type* __sb = __first._M_sbuf;
   int_type __c = __sb->sgetc();
   while (!traits_type::eq_int_type(__c, traits_type::eof())
   && !traits_type::eq_int_type(__c, __ival))
     {
       streamsize __n = __sb->egptr() - __sb->gptr();
       if (__n > 1)
  {
    const _CharT* __p = traits_type::find(__sb->gptr(),
       __n, __val);
    if (__p)
      __n = __p - __sb->gptr();
    __sb->__safe_gbump(__n);
    __c = __sb->sgetc();
  }
       else
  __c = __sb->snextc();
     }

   if (!traits_type::eq_int_type(__c, traits_type::eof()))
     __first._M_c = __c;
   else
     __first._M_sbuf = 0;
 }
      return __first;
    }




}
# 49 "/usr/include/c++/5/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 71 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<typename _Tp>
    void
    __convert_to_v(const char*, _Tp&, ios_base::iostate&,
     const __c_locale&) throw();


  template<>
    void
    __convert_to_v(const char*, float&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, double&, ios_base::iostate&,
     const __c_locale&) throw();

  template<>
    void
    __convert_to_v(const char*, long double&, ios_base::iostate&,
     const __c_locale&) throw();



  template<typename _CharT, typename _Traits>
    struct __pad
    {
      static void
      _S_pad(ios_base& __io, _CharT __fill, _CharT* __news,
      const _CharT* __olds, streamsize __newlen, streamsize __oldlen);
    };






  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last);




  template<typename _CharT>
    inline
    ostreambuf_iterator<_CharT>
    __write(ostreambuf_iterator<_CharT> __s, const _CharT* __ws, int __len)
    {
      __s._M_put(__ws, __len);
      return __s;
    }


  template<typename _CharT, typename _OutIter>
    inline
    _OutIter
    __write(_OutIter __s, const _CharT* __ws, int __len)
    {
      for (int __j = 0; __j < __len; __j++, ++__s)
 *__s = __ws[__j];
      return __s;
    }
# 149 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<typename _CharT>
    class __ctype_abstract_base : public locale::facet, public ctype_base
    {
    public:


      typedef _CharT char_type;
# 168 "/usr/include/c++/5/bits/locale_facets.h" 3
      bool
      is(mask __m, char_type __c) const
      { return this->do_is(__m, __c); }
# 185 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      is(const char_type *__lo, const char_type *__hi, mask *__vec) const
      { return this->do_is(__lo, __hi, __vec); }
# 201 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      scan_is(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_is(__m, __lo, __hi); }
# 217 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      scan_not(mask __m, const char_type* __lo, const char_type* __hi) const
      { return this->do_scan_not(__m, __lo, __hi); }
# 231 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 246 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 260 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 275 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 292 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      { return this->do_widen(__c); }
# 311 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      { return this->do_widen(__lo, __hi, __to); }
# 330 "/usr/include/c++/5/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return this->do_narrow(__c, __dfault); }
# 352 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
       char __dfault, char* __to) const
      { return this->do_narrow(__lo, __hi, __dfault, __to); }

    protected:
      explicit
      __ctype_abstract_base(size_t __refs = 0): facet(__refs) { }

      virtual
      ~__ctype_abstract_base() { }
# 377 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const = 0;
# 396 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi,
     mask* __vec) const = 0;
# 415 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo,
   const char_type* __hi) const = 0;
# 434 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const = 0;
# 452 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type __c) const = 0;
# 469 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const = 0;
# 485 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type __c) const = 0;
# 502 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const = 0;
# 521 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const = 0;
# 542 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __to) const = 0;
# 563 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char __dfault) const = 0;
# 588 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __to) const = 0;
    };
# 611 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<typename _CharT>
    class ctype : public __ctype_abstract_base<_CharT>
    {
    public:

      typedef _CharT char_type;
      typedef typename __ctype_abstract_base<_CharT>::mask mask;


      static locale::id id;

      explicit
      ctype(size_t __refs = 0) : __ctype_abstract_base<_CharT>(__refs) { }

   protected:
      virtual
      ~ctype();

      virtual bool
      do_is(mask __m, char_type __c) const;

      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;

      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;

      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;

      virtual char_type
      do_toupper(char_type __c) const;

      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_tolower(char_type __c) const;

      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;

      virtual char_type
      do_widen(char __c) const;

      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __dest) const;

      virtual char
      do_narrow(char_type, char __dfault) const;

      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __to) const;
    };

  template<typename _CharT>
    locale::id ctype<_CharT>::id;
# 680 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<>
    class ctype<char> : public locale::facet, public ctype_base
    {
    public:


      typedef char char_type;

    protected:

      __c_locale _M_c_locale_ctype;
      bool _M_del;
      __to_type _M_toupper;
      __to_type _M_tolower;
      const mask* _M_table;
      mutable char _M_widen_ok;
      mutable char _M_widen[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow[1 + static_cast<unsigned char>(-1)];
      mutable char _M_narrow_ok;


    public:

      static locale::id id;

      static const size_t table_size = 1 + static_cast<unsigned char>(-1);
# 717 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      ctype(const mask* __table = 0, bool __del = false, size_t __refs = 0);
# 730 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, const mask* __table = 0, bool __del = false,
     size_t __refs = 0);
# 743 "/usr/include/c++/5/bits/locale_facets.h" 3
      inline bool
      is(mask __m, char __c) const;
# 758 "/usr/include/c++/5/bits/locale_facets.h" 3
      inline const char*
      is(const char* __lo, const char* __hi, mask* __vec) const;
# 772 "/usr/include/c++/5/bits/locale_facets.h" 3
      inline const char*
      scan_is(mask __m, const char* __lo, const char* __hi) const;
# 786 "/usr/include/c++/5/bits/locale_facets.h" 3
      inline const char*
      scan_not(mask __m, const char* __lo, const char* __hi) const;
# 801 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      toupper(char_type __c) const
      { return this->do_toupper(__c); }
# 818 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      toupper(char_type *__lo, const char_type* __hi) const
      { return this->do_toupper(__lo, __hi); }
# 834 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      tolower(char_type __c) const
      { return this->do_tolower(__c); }
# 851 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      tolower(char_type* __lo, const char_type* __hi) const
      { return this->do_tolower(__lo, __hi); }
# 871 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      widen(char __c) const
      {
 if (_M_widen_ok)
   return _M_widen[static_cast<unsigned char>(__c)];
 this->_M_widen_init();
 return this->do_widen(__c);
      }
# 898 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char*
      widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 if (_M_widen_ok == 1)
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_widen_ok)
   _M_widen_init();
 return this->do_widen(__lo, __hi, __to);
      }
# 929 "/usr/include/c++/5/bits/locale_facets.h" 3
      char
      narrow(char_type __c, char __dfault) const
      {
 if (_M_narrow[static_cast<unsigned char>(__c)])
   return _M_narrow[static_cast<unsigned char>(__c)];
 const char __t = do_narrow(__c, __dfault);
 if (__t != __dfault)
   _M_narrow[static_cast<unsigned char>(__c)] = __t;
 return __t;
      }
# 962 "/usr/include/c++/5/bits/locale_facets.h" 3
      const char_type*
      narrow(const char_type* __lo, const char_type* __hi,
      char __dfault, char* __to) const
      {
 if (__builtin_expect(_M_narrow_ok == 1, true))
   {
     __builtin_memcpy(__to, __lo, __hi - __lo);
     return __hi;
   }
 if (!_M_narrow_ok)
   _M_narrow_init();
 return this->do_narrow(__lo, __hi, __dfault, __to);
      }





      const mask*
      table() const throw()
      { return _M_table; }


      static const mask*
      classic_table() throw();
    protected:







      virtual
      ~ctype();
# 1011 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type __c) const;
# 1028 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1044 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type __c) const;
# 1061 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1081 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const
      { return __c; }
# 1104 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __to) const
      {
 __builtin_memcpy(__to, __lo, __hi - __lo);
 return __hi;
      }
# 1130 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char __dfault) const
      { return __c; }
# 1156 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __to) const
      {
 __builtin_memcpy(__to, __lo, __hi - __lo);
 return __hi;
      }

    private:
      void _M_narrow_init() const;
      void _M_widen_init() const;
    };
# 1181 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<>
    class ctype<wchar_t> : public __ctype_abstract_base<wchar_t>
    {
    public:


      typedef wchar_t char_type;
      typedef wctype_t __wmask_type;

    protected:
      __c_locale _M_c_locale_ctype;


      bool _M_narrow_ok;
      char _M_narrow[128];
      wint_t _M_widen[1 + static_cast<unsigned char>(-1)];


      mask _M_bit[16];
      __wmask_type _M_wmask[16];

    public:


      static locale::id id;
# 1214 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      ctype(size_t __refs = 0);
# 1225 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      ctype(__c_locale __cloc, size_t __refs = 0);

    protected:
      __wmask_type
      _M_convert_to_wmask(const mask __m) const throw();


      virtual
      ~ctype();
# 1249 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual bool
      do_is(mask __m, char_type __c) const;
# 1268 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_is(const char_type* __lo, const char_type* __hi, mask* __vec) const;
# 1286 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_is(mask __m, const char_type* __lo, const char_type* __hi) const;
# 1304 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_scan_not(mask __m, const char_type* __lo,
    const char_type* __hi) const;
# 1321 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_toupper(char_type __c) const;
# 1338 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_toupper(char_type* __lo, const char_type* __hi) const;
# 1354 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_tolower(char_type __c) const;
# 1371 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_tolower(char_type* __lo, const char_type* __hi) const;
# 1391 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_widen(char __c) const;
# 1413 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char*
      do_widen(const char* __lo, const char* __hi, char_type* __to) const;
# 1436 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char
      do_narrow(char_type __c, char __dfault) const;
# 1462 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual const char_type*
      do_narrow(const char_type* __lo, const char_type* __hi,
  char __dfault, char* __to) const;


      void
      _M_initialize_ctype() throw();
    };



  template<typename _CharT>
    class ctype_byname : public ctype<_CharT>
    {
    public:
      typedef typename ctype<_CharT>::mask mask;

      explicit
      ctype_byname(const char* __s, size_t __refs = 0);







    protected:
      virtual
      ~ctype_byname() { };
    };


  template<>
    class ctype_byname<char> : public ctype<char>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);






    protected:
      virtual
      ~ctype_byname();
    };


  template<>
    class ctype_byname<wchar_t> : public ctype<wchar_t>
    {
    public:
      explicit
      ctype_byname(const char* __s, size_t __refs = 0);






    protected:
      virtual
      ~ctype_byname();
    };



}


# 1 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_inline.h" 1 3
# 37 "/usr/include/x86_64-linux-gnu/c++/5/bits/ctype_inline.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  bool
  ctype<char>::
  is(mask __m, char __c) const
  { return _M_table[static_cast<unsigned char>(__c)] & __m; }

  const char*
  ctype<char>::
  is(const char* __low, const char* __high, mask* __vec) const
  {
    while (__low < __high)
      *__vec++ = _M_table[static_cast<unsigned char>(*__low++)];
    return __high;
  }

  const char*
  ctype<char>::
  scan_is(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && !(_M_table[static_cast<unsigned char>(*__low)] & __m))
      ++__low;
    return __low;
  }

  const char*
  ctype<char>::
  scan_not(mask __m, const char* __low, const char* __high) const
  {
    while (__low < __high
    && (_M_table[static_cast<unsigned char>(*__low)] & __m) != 0)
      ++__low;
    return __low;
  }


}
# 1535 "/usr/include/c++/5/bits/locale_facets.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{



  class __num_base
  {
  public:


    enum
      {
 _S_ominus,
 _S_oplus,
 _S_ox,
 _S_oX,
 _S_odigits,
 _S_odigits_end = _S_odigits + 16,
 _S_oudigits = _S_odigits_end,
 _S_oudigits_end = _S_oudigits + 16,
 _S_oe = _S_odigits + 14,
 _S_oE = _S_oudigits + 14,
 _S_oend = _S_oudigits_end
      };






    static const char* _S_atoms_out;



    static const char* _S_atoms_in;

    enum
    {
      _S_iminus,
      _S_iplus,
      _S_ix,
      _S_iX,
      _S_izero,
      _S_ie = _S_izero + 14,
      _S_iE = _S_izero + 20,
      _S_iend = 26
    };



    static void
    _S_format_float(const ios_base& __io, char* __fptr, char __mod) throw();
  };

  template<typename _CharT>
    struct __numpunct_cache : public locale::facet
    {
      const char* _M_grouping;
      size_t _M_grouping_size;
      bool _M_use_grouping;
      const _CharT* _M_truename;
      size_t _M_truename_size;
      const _CharT* _M_falsename;
      size_t _M_falsename_size;
      _CharT _M_decimal_point;
      _CharT _M_thousands_sep;





      _CharT _M_atoms_out[__num_base::_S_oend];





      _CharT _M_atoms_in[__num_base::_S_iend];

      bool _M_allocated;

      __numpunct_cache(size_t __refs = 0)
      : facet(__refs), _M_grouping(0), _M_grouping_size(0),
 _M_use_grouping(false),
 _M_truename(0), _M_truename_size(0), _M_falsename(0),
 _M_falsename_size(0), _M_decimal_point(_CharT()),
 _M_thousands_sep(_CharT()), _M_allocated(false)
 { }

      ~__numpunct_cache();

      void
      _M_cache(const locale& __loc);

    private:
      __numpunct_cache&
      operator=(const __numpunct_cache&);

      explicit
      __numpunct_cache(const __numpunct_cache&);
    };

  template<typename _CharT>
    __numpunct_cache<_CharT>::~__numpunct_cache()
    {
      if (_M_allocated)
 {
   delete [] _M_grouping;
   delete [] _M_truename;
   delete [] _M_falsename;
 }
    }

namespace __cxx11 {
# 1665 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<typename _CharT>
    class numpunct : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      typedef __numpunct_cache<_CharT> __cache_type;

    protected:
      __cache_type* _M_data;

    public:

      static locale::id id;






      explicit
      numpunct(size_t __refs = 0)
      : facet(__refs), _M_data(0)
      { _M_initialize_numpunct(); }
# 1703 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      numpunct(__cache_type* __cache, size_t __refs = 0)
      : facet(__refs), _M_data(__cache)
      { _M_initialize_numpunct(); }
# 1717 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      numpunct(__c_locale __cloc, size_t __refs = 0)
      : facet(__refs), _M_data(0)
      { _M_initialize_numpunct(__cloc); }
# 1731 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      decimal_point() const
      { return this->do_decimal_point(); }
# 1744 "/usr/include/c++/5/bits/locale_facets.h" 3
      char_type
      thousands_sep() const
      { return this->do_thousands_sep(); }
# 1775 "/usr/include/c++/5/bits/locale_facets.h" 3
      string
      grouping() const
      { return this->do_grouping(); }
# 1788 "/usr/include/c++/5/bits/locale_facets.h" 3
      string_type
      truename() const
      { return this->do_truename(); }
# 1801 "/usr/include/c++/5/bits/locale_facets.h" 3
      string_type
      falsename() const
      { return this->do_falsename(); }

    protected:

      virtual
      ~numpunct();
# 1818 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_decimal_point() const
      { return _M_data->_M_decimal_point; }
# 1830 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual char_type
      do_thousands_sep() const
      { return _M_data->_M_thousands_sep; }
# 1843 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual string
      do_grouping() const
      { return _M_data->_M_grouping; }
# 1856 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual string_type
      do_truename() const
      { return _M_data->_M_truename; }
# 1869 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual string_type
      do_falsename() const
      { return _M_data->_M_falsename; }


      void
      _M_initialize_numpunct(__c_locale __cloc = 0);
    };

  template<typename _CharT>
    locale::id numpunct<_CharT>::id;

  template<>
    numpunct<char>::~numpunct();

  template<>
    void
    numpunct<char>::_M_initialize_numpunct(__c_locale __cloc);


  template<>
    numpunct<wchar_t>::~numpunct();

  template<>
    void
    numpunct<wchar_t>::_M_initialize_numpunct(__c_locale __cloc);



  template<typename _CharT>
    class numpunct_byname : public numpunct<_CharT>
    {
    public:
      typedef _CharT char_type;
      typedef basic_string<_CharT> string_type;

      explicit
      numpunct_byname(const char* __s, size_t __refs = 0)
      : numpunct<_CharT>(__refs)
      {
 if (__builtin_strcmp(__s, "C") != 0
     && __builtin_strcmp(__s, "POSIX") != 0)
   {
     __c_locale __tmp;
     this->_S_create_c_locale(__tmp, __s);
     this->_M_initialize_numpunct(__tmp);
     this->_S_destroy_c_locale(__tmp);
   }
      }







    protected:
      virtual
      ~numpunct_byname() { }
    };

}


# 1947 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<typename _CharT, typename _InIter>
    class num_get : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _InIter iter_type;



      static locale::id id;
# 1968 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      num_get(size_t __refs = 0) : facet(__refs) { }
# 1994 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, bool& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2031 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned short& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned int& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }


      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, unsigned long long& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2091 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, float& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, long double& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }
# 2134 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      get(iter_type __in, iter_type __end, ios_base& __io,
   ios_base::iostate& __err, void*& __v) const
      { return this->do_get(__in, __end, __io, __err, __v); }

    protected:

      virtual ~num_get() { }

      __attribute ((__abi_tag__ ("cxx11")))
      iter_type
      _M_extract_float(iter_type, iter_type, ios_base&, ios_base::iostate&,
         string&) const;

      template<typename _ValueT>
 __attribute ((__abi_tag__ ("cxx11")))
 iter_type
 _M_extract_int(iter_type, iter_type, ios_base&, ios_base::iostate&,
         _ValueT&) const;

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<__is_char<_CharT2>::__value, int>::__type
 _M_find(const _CharT2*, size_t __len, _CharT2 __c) const
 {
   int __ret = -1;
   if (__len <= 10)
     {
       if (__c >= _CharT2('0') && __c < _CharT2(_CharT2('0') + __len))
  __ret = __c - _CharT2('0');
     }
   else
     {
       if (__c >= _CharT2('0') && __c <= _CharT2('9'))
  __ret = __c - _CharT2('0');
       else if (__c >= _CharT2('a') && __c <= _CharT2('f'))
  __ret = 10 + (__c - _CharT2('a'));
       else if (__c >= _CharT2('A') && __c <= _CharT2('F'))
  __ret = 10 + (__c - _CharT2('A'));
     }
   return __ret;
 }

      template<typename _CharT2>
      typename __gnu_cxx::__enable_if<!__is_char<_CharT2>::__value,
          int>::__type
 _M_find(const _CharT2* __zero, size_t __len, _CharT2 __c) const
 {
   int __ret = -1;
   const char_type* __q = char_traits<_CharT2>::find(__zero, __len, __c);
   if (__q)
     {
       __ret = __q - __zero;
       if (__ret > 15)
  __ret -= 6;
     }
   return __ret;
 }
# 2207 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, bool&) const;

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned short& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned int& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }

      virtual iter_type
      do_get(iter_type __beg, iter_type __end, ios_base& __io,
      ios_base::iostate& __err, unsigned long long& __v) const
      { return _M_extract_int(__beg, __end, __io, __err, __v); }


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, float&) const;

      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&,
      double&) const;







      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&,
      long double&) const;


      virtual iter_type
      do_get(iter_type, iter_type, ios_base&, ios_base::iostate&, void*&) const;
# 2270 "/usr/include/c++/5/bits/locale_facets.h" 3
    };

  template<typename _CharT, typename _InIter>
    locale::id num_get<_CharT, _InIter>::id;
# 2288 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<typename _CharT, typename _OutIter>
    class num_put : public locale::facet
    {
    public:



      typedef _CharT char_type;
      typedef _OutIter iter_type;



      static locale::id id;
# 2309 "/usr/include/c++/5/bits/locale_facets.h" 3
      explicit
      num_put(size_t __refs = 0) : facet(__refs) { }
# 2327 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
      { return this->do_put(__s, __io, __fill, __v); }
# 2369 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return this->do_put(__s, __io, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill,
   unsigned long __v) const
      { return this->do_put(__s, __io, __fill, __v); }


      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill, long long __v) const
      { return this->do_put(__s, __io, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill,
   unsigned long long __v) const
      { return this->do_put(__s, __io, __fill, __v); }
# 2432 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
      { return this->do_put(__s, __io, __fill, __v); }

      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill,
   long double __v) const
      { return this->do_put(__s, __io, __fill, __v); }
# 2457 "/usr/include/c++/5/bits/locale_facets.h" 3
      iter_type
      put(iter_type __s, ios_base& __io, char_type __fill,
   const void* __v) const
      { return this->do_put(__s, __io, __fill, __v); }

    protected:
      template<typename _ValueT>
 iter_type
 _M_insert_float(iter_type, ios_base& __io, char_type __fill,
   char __mod, _ValueT __v) const;

      void
      _M_group_float(const char* __grouping, size_t __grouping_size,
       char_type __sep, const char_type* __p, char_type* __new,
       char_type* __cs, int& __len) const;

      template<typename _ValueT>
 iter_type
 _M_insert_int(iter_type, ios_base& __io, char_type __fill,
        _ValueT __v) const;

      void
      _M_group_int(const char* __grouping, size_t __grouping_size,
     char_type __sep, ios_base& __io, char_type* __new,
     char_type* __cs, int& __len) const;

      void
      _M_pad(char_type __fill, streamsize __w, ios_base& __io,
      char_type* __new, const char_type* __cs, int& __len) const;


      virtual
      ~num_put() { };
# 2505 "/usr/include/c++/5/bits/locale_facets.h" 3
      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const;

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill, long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }

      virtual iter_type
      do_put(iter_type __s, ios_base& __io, char_type __fill,
      unsigned long long __v) const
      { return _M_insert_int(__s, __io, __fill, __v); }


      virtual iter_type
      do_put(iter_type, ios_base&, char_type, double) const;






      virtual iter_type
      do_put(iter_type, ios_base&, char_type, long double) const;


      virtual iter_type
      do_put(iter_type, ios_base&, char_type, const void*) const;







    };

  template <typename _CharT, typename _OutIter>
    locale::id num_put<_CharT, _OutIter>::id;









  template<typename _CharT>
    inline bool
    isspace(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::space, __c); }


  template<typename _CharT>
    inline bool
    isprint(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::print, __c); }


  template<typename _CharT>
    inline bool
    iscntrl(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::cntrl, __c); }


  template<typename _CharT>
    inline bool
    isupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::upper, __c); }


  template<typename _CharT>
    inline bool
    islower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::lower, __c); }


  template<typename _CharT>
    inline bool
    isalpha(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alpha, __c); }


  template<typename _CharT>
    inline bool
    isdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::digit, __c); }


  template<typename _CharT>
    inline bool
    ispunct(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::punct, __c); }


  template<typename _CharT>
    inline bool
    isxdigit(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::xdigit, __c); }


  template<typename _CharT>
    inline bool
    isalnum(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::alnum, __c); }


  template<typename _CharT>
    inline bool
    isgraph(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).is(ctype_base::graph, __c); }
# 2637 "/usr/include/c++/5/bits/locale_facets.h" 3
  template<typename _CharT>
    inline _CharT
    toupper(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).toupper(__c); }


  template<typename _CharT>
    inline _CharT
    tolower(_CharT __c, const locale& __loc)
    { return use_facet<ctype<_CharT> >(__loc).tolower(__c); }


}

# 1 "/usr/include/c++/5/bits/locale_facets.tcc" 1 3
# 33 "/usr/include/c++/5/bits/locale_facets.tcc" 3
       
# 34 "/usr/include/c++/5/bits/locale_facets.tcc" 3

namespace std __attribute__ ((__visibility__ ("default")))
{




  template<typename _Facet>
    struct __use_cache
    {
      const _Facet*
      operator() (const locale& __loc) const;
    };


  template<typename _CharT>
    struct __use_cache<__numpunct_cache<_CharT> >
    {
      const __numpunct_cache<_CharT>*
      operator() (const locale& __loc) const
      {
 const size_t __i = numpunct<_CharT>::id._M_id();
 const locale::facet** __caches = __loc._M_impl->_M_caches;
 if (!__caches[__i])
   {
     __numpunct_cache<_CharT>* __tmp = 0;
     try
       {
  __tmp = new __numpunct_cache<_CharT>;
  __tmp->_M_cache(__loc);
       }
     catch(...)
       {
  delete __tmp;
  throw;
       }
     __loc._M_impl->_M_install_cache(__tmp, __i);
   }
 return static_cast<const __numpunct_cache<_CharT>*>(__caches[__i]);
      }
    };

  template<typename _CharT>
    void
    __numpunct_cache<_CharT>::_M_cache(const locale& __loc)
    {
      const numpunct<_CharT>& __np = use_facet<numpunct<_CharT> >(__loc);

      char* __grouping = 0;
      _CharT* __truename = 0;
      _CharT* __falsename = 0;
      try
 {
   const string& __g = __np.grouping();
   _M_grouping_size = __g.size();
   __grouping = new char[_M_grouping_size];
   __g.copy(__grouping, _M_grouping_size);
   _M_use_grouping = (_M_grouping_size
        && static_cast<signed char>(__grouping[0]) > 0
        && (__grouping[0]
     != __gnu_cxx::__numeric_traits<char>::__max));

   const basic_string<_CharT>& __tn = __np.truename();
   _M_truename_size = __tn.size();
   __truename = new _CharT[_M_truename_size];
   __tn.copy(__truename, _M_truename_size);

   const basic_string<_CharT>& __fn = __np.falsename();
   _M_falsename_size = __fn.size();
   __falsename = new _CharT[_M_falsename_size];
   __fn.copy(__falsename, _M_falsename_size);

   _M_decimal_point = __np.decimal_point();
   _M_thousands_sep = __np.thousands_sep();

   const ctype<_CharT>& __ct = use_facet<ctype<_CharT> >(__loc);
   __ct.widen(__num_base::_S_atoms_out,
       __num_base::_S_atoms_out
       + __num_base::_S_oend, _M_atoms_out);
   __ct.widen(__num_base::_S_atoms_in,
       __num_base::_S_atoms_in
       + __num_base::_S_iend, _M_atoms_in);

   _M_grouping = __grouping;
   _M_truename = __truename;
   _M_falsename = __falsename;
   _M_allocated = true;
 }
      catch(...)
 {
   delete [] __grouping;
   delete [] __truename;
   delete [] __falsename;
   throw;
 }
    }
# 139 "/usr/include/c++/5/bits/locale_facets.tcc" 3
  __attribute__ ((__pure__)) bool
  __verify_grouping(const char* __grouping, size_t __grouping_size,
      const string& __grouping_tmp) throw ();



  template<typename _CharT, typename _InIter>
    __attribute ((__abi_tag__ ("cxx11")))
    _InIter
    num_get<_CharT, _InIter>::
    _M_extract_float(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, string& __xtrc) const
    {
      typedef char_traits<_CharT> __traits_type;
      typedef __numpunct_cache<_CharT> __cache_type;
      __use_cache<__cache_type> __uc;
      const locale& __loc = __io._M_getloc();
      const __cache_type* __lc = __uc(__loc);
      const _CharT* __lit = __lc->_M_atoms_in;
      char_type __c = char_type();


      bool __testeof = __beg == __end;


      if (!__testeof)
 {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
     {
       __xtrc += __plus ? '+' : '-';
       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 }


      bool __found_mantissa = false;
      int __sep_pos = 0;
      while (!__testeof)
 {
   if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       || __c == __lc->_M_decimal_point)
     break;
   else if (__c == __lit[__num_base::_S_izero])
     {
       if (!__found_mantissa)
  {
    __xtrc += '0';
    __found_mantissa = true;
  }
       ++__sep_pos;

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
   else
     break;
 }


      bool __found_dec = false;
      bool __found_sci = false;
      string __found_grouping;
      if (__lc->_M_use_grouping)
 __found_grouping.reserve(32);
      const char_type* __lit_zero = __lit + __num_base::_S_izero;

      if (!__lc->_M_allocated)

 while (!__testeof)
   {
     const int __digit = _M_find(__lit_zero, 10, __c);
     if (__digit != -1)
       {
  __xtrc += '0' + __digit;
  __found_mantissa = true;
       }
     else if (__c == __lc->_M_decimal_point
       && !__found_dec && !__found_sci)
       {
  __xtrc += '.';
  __found_dec = true;
       }
     else if ((__c == __lit[__num_base::_S_ie]
        || __c == __lit[__num_base::_S_iE])
       && !__found_sci && __found_mantissa)
       {

  __xtrc += 'e';
  __found_sci = true;


  if (++__beg != __end)
    {
      __c = *__beg;
      const bool __plus = __c == __lit[__num_base::_S_iplus];
      if (__plus || __c == __lit[__num_base::_S_iminus])
        __xtrc += __plus ? '+' : '-';
      else
        continue;
    }
  else
    {
      __testeof = true;
      break;
    }
       }
     else
       break;

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }
      else
 while (!__testeof)
   {


     if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
       {
  if (!__found_dec && !__found_sci)
    {


      if (__sep_pos)
        {
   __found_grouping += static_cast<char>(__sep_pos);
   __sep_pos = 0;
        }
      else
        {


   __xtrc.clear();
   break;
        }
    }
  else
    break;
       }
     else if (__c == __lc->_M_decimal_point)
       {
  if (!__found_dec && !__found_sci)
    {



      if (__found_grouping.size())
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += '.';
      __found_dec = true;
    }
  else
    break;
       }
     else
       {
  const char_type* __q =
    __traits_type::find(__lit_zero, 10, __c);
  if (__q)
    {
      __xtrc += '0' + (__q - __lit_zero);
      __found_mantissa = true;
      ++__sep_pos;
    }
  else if ((__c == __lit[__num_base::_S_ie]
     || __c == __lit[__num_base::_S_iE])
    && !__found_sci && __found_mantissa)
    {

      if (__found_grouping.size() && !__found_dec)
        __found_grouping += static_cast<char>(__sep_pos);
      __xtrc += 'e';
      __found_sci = true;


      if (++__beg != __end)
        {
   __c = *__beg;
   const bool __plus = __c == __lit[__num_base::_S_iplus];
   if ((__plus || __c == __lit[__num_base::_S_iminus])
       && !(__lc->_M_use_grouping
     && __c == __lc->_M_thousands_sep)
       && !(__c == __lc->_M_decimal_point))
        __xtrc += __plus ? '+' : '-';
   else
     continue;
        }
      else
        {
   __testeof = true;
   break;
        }
    }
  else
    break;
       }

     if (++__beg != __end)
       __c = *__beg;
     else
       __testeof = true;
   }



      if (__found_grouping.size())
        {

   if (!__found_dec && !__found_sci)
     __found_grouping += static_cast<char>(__sep_pos);

          if (!std::__verify_grouping(__lc->_M_grouping,
          __lc->_M_grouping_size,
          __found_grouping))
     __err = ios_base::failbit;
        }

      return __beg;
    }

  template<typename _CharT, typename _InIter>
    template<typename _ValueT>
      __attribute ((__abi_tag__ ("cxx11")))
      _InIter
      num_get<_CharT, _InIter>::
      _M_extract_int(_InIter __beg, _InIter __end, ios_base& __io,
       ios_base::iostate& __err, _ValueT& __v) const
      {
        typedef char_traits<_CharT> __traits_type;
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_in;
 char_type __c = char_type();


 const ios_base::fmtflags __basefield = __io.flags()
                                        & ios_base::basefield;
 const bool __oct = __basefield == ios_base::oct;
 int __base = __oct ? 8 : (__basefield == ios_base::hex ? 16 : 10);


 bool __testeof = __beg == __end;


 bool __negative = false;
 if (!__testeof)
   {
     __c = *__beg;
     __negative = __c == __lit[__num_base::_S_iminus];
     if ((__negative || __c == __lit[__num_base::_S_iplus])
  && !(__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  && !(__c == __lc->_M_decimal_point))
       {
  if (++__beg != __end)
    __c = *__beg;
  else
    __testeof = true;
       }
   }



 bool __found_zero = false;
 int __sep_pos = 0;
 while (!__testeof)
   {
     if ((__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  || __c == __lc->_M_decimal_point)
       break;
     else if (__c == __lit[__num_base::_S_izero]
       && (!__found_zero || __base == 10))
       {
  __found_zero = true;
  ++__sep_pos;
  if (__basefield == 0)
    __base = 8;
  if (__base == 8)
    __sep_pos = 0;
       }
     else if (__found_zero
       && (__c == __lit[__num_base::_S_ix]
    || __c == __lit[__num_base::_S_iX]))
       {
  if (__basefield == 0)
    __base = 16;
  if (__base == 16)
    {
      __found_zero = false;
      __sep_pos = 0;
    }
  else
    break;
       }
     else
       break;

     if (++__beg != __end)
       {
  __c = *__beg;
  if (!__found_zero)
    break;
       }
     else
       __testeof = true;
   }



 const size_t __len = (__base == 16 ? __num_base::_S_iend
         - __num_base::_S_izero : __base);


 string __found_grouping;
 if (__lc->_M_use_grouping)
   __found_grouping.reserve(32);
 bool __testfail = false;
 bool __testoverflow = false;
 const __unsigned_type __max =
   (__negative && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
   ? -__gnu_cxx::__numeric_traits<_ValueT>::__min
   : __gnu_cxx::__numeric_traits<_ValueT>::__max;
 const __unsigned_type __smax = __max / __base;
 __unsigned_type __result = 0;
 int __digit = 0;
 const char_type* __lit_zero = __lit + __num_base::_S_izero;

 if (!__lc->_M_allocated)

   while (!__testeof)
     {
       __digit = _M_find(__lit_zero, __len, __c);
       if (__digit == -1)
  break;

       if (__result > __smax)
  __testoverflow = true;
       else
  {
    __result *= __base;
    __testoverflow |= __result > __max - __digit;
    __result += __digit;
    ++__sep_pos;
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }
 else
   while (!__testeof)
     {


       if (__lc->_M_use_grouping && __c == __lc->_M_thousands_sep)
  {


    if (__sep_pos)
      {
        __found_grouping += static_cast<char>(__sep_pos);
        __sep_pos = 0;
      }
    else
      {
        __testfail = true;
        break;
      }
  }
       else if (__c == __lc->_M_decimal_point)
  break;
       else
  {
    const char_type* __q =
      __traits_type::find(__lit_zero, __len, __c);
    if (!__q)
      break;

    __digit = __q - __lit_zero;
    if (__digit > 15)
      __digit -= 6;
    if (__result > __smax)
      __testoverflow = true;
    else
      {
        __result *= __base;
        __testoverflow |= __result > __max - __digit;
        __result += __digit;
        ++__sep_pos;
      }
  }

       if (++__beg != __end)
  __c = *__beg;
       else
  __testeof = true;
     }



 if (__found_grouping.size())
   {

     __found_grouping += static_cast<char>(__sep_pos);

     if (!std::__verify_grouping(__lc->_M_grouping,
     __lc->_M_grouping_size,
     __found_grouping))
       __err = ios_base::failbit;
   }



 if ((!__sep_pos && !__found_zero && !__found_grouping.size())
     || __testfail)
   {
     __v = 0;
     __err = ios_base::failbit;
   }
 else if (__testoverflow)
   {
     if (__negative
  && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__min;
     else
       __v = __gnu_cxx::__numeric_traits<_ValueT>::__max;
     __err = ios_base::failbit;
   }
 else
   __v = __negative ? -__result : __result;

 if (__testeof)
   __err |= ios_base::eofbit;
 return __beg;
      }



  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, bool& __v) const
    {
      if (!(__io.flags() & ios_base::boolalpha))
        {



   long __l = -1;
          __beg = _M_extract_int(__beg, __end, __io, __err, __l);
   if (__l == 0 || __l == 1)
     __v = bool(__l);
   else
     {


       __v = true;
       __err = ios_base::failbit;
       if (__beg == __end)
  __err |= ios_base::eofbit;
     }
        }
      else
        {

   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   bool __testf = true;
   bool __testt = true;
   bool __donef = __lc->_M_falsename_size == 0;
   bool __donet = __lc->_M_truename_size == 0;
   bool __testeof = false;
   size_t __n = 0;
   while (!__donef || !__donet)
     {
       if (__beg == __end)
  {
    __testeof = true;
    break;
  }

       const char_type __c = *__beg;

       if (!__donef)
  __testf = __c == __lc->_M_falsename[__n];

       if (!__testf && __donet)
  break;

       if (!__donet)
  __testt = __c == __lc->_M_truename[__n];

       if (!__testt && __donef)
  break;

       if (!__testt && !__testf)
  break;

       ++__n;
       ++__beg;

       __donef = !__testf || __n >= __lc->_M_falsename_size;
       __donet = !__testt || __n >= __lc->_M_truename_size;
     }
   if (__testf && __n == __lc->_M_falsename_size && __n)
     {
       __v = false;
       if (__testt && __n == __lc->_M_truename_size)
  __err = ios_base::failbit;
       else
  __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else if (__testt && __n == __lc->_M_truename_size && __n)
     {
       __v = true;
       __err = __testeof ? ios_base::eofbit : ios_base::goodbit;
     }
   else
     {


       __v = false;
       __err = ios_base::failbit;
       if (__testeof)
  __err |= ios_base::eofbit;
     }
 }
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
    ios_base::iostate& __err, float& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }
# 735 "/usr/include/c++/5/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, long double& __v) const
    {
      string __xtrc;
      __xtrc.reserve(32);
      __beg = _M_extract_float(__beg, __end, __io, __err, __xtrc);
      std::__convert_to_v(__xtrc.c_str(), __v, __err, _S_get_c_locale());
      if (__beg == __end)
 __err |= ios_base::eofbit;
      return __beg;
    }

  template<typename _CharT, typename _InIter>
    _InIter
    num_get<_CharT, _InIter>::
    do_get(iter_type __beg, iter_type __end, ios_base& __io,
           ios_base::iostate& __err, void*& __v) const
    {

      typedef ios_base::fmtflags fmtflags;
      const fmtflags __fmt = __io.flags();
      __io.flags((__fmt & ~ios_base::basefield) | ios_base::hex);

      typedef __gnu_cxx::__conditional_type<(sizeof(void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      _UIntPtrType __ul;
      __beg = _M_extract_int(__beg, __end, __io, __err, __ul);


      __io.flags(__fmt);

      __v = reinterpret_cast<void*>(__ul);
      return __beg;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_pad(_CharT __fill, streamsize __w, ios_base& __io,
    _CharT* __new, const _CharT* __cs, int& __len) const
    {


      __pad<_CharT, char_traits<_CharT> >::_S_pad(__io, __fill, __new,
        __cs, __w, __len);
      __len = static_cast<int>(__w);
    }



  template<typename _CharT, typename _ValueT>
    int
    __int_to_char(_CharT* __bufend, _ValueT __v, const _CharT* __lit,
    ios_base::fmtflags __flags, bool __dec)
    {
      _CharT* __buf = __bufend;
      if (__builtin_expect(__dec, true))
 {

   do
     {
       *--__buf = __lit[(__v % 10) + __num_base::_S_odigits];
       __v /= 10;
     }
   while (__v != 0);
 }
      else if ((__flags & ios_base::basefield) == ios_base::oct)
 {

   do
     {
       *--__buf = __lit[(__v & 0x7) + __num_base::_S_odigits];
       __v >>= 3;
     }
   while (__v != 0);
 }
      else
 {

   const bool __uppercase = __flags & ios_base::uppercase;
   const int __case_offset = __uppercase ? __num_base::_S_oudigits
                                         : __num_base::_S_odigits;
   do
     {
       *--__buf = __lit[(__v & 0xf) + __case_offset];
       __v >>= 4;
     }
   while (__v != 0);
 }
      return __bufend - __buf;
    }



  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_int(const char* __grouping, size_t __grouping_size, _CharT __sep,
   ios_base&, _CharT* __new, _CharT* __cs, int& __len) const
    {
      _CharT* __p = std::__add_grouping(__new, __sep, __grouping,
     __grouping_size, __cs, __cs + __len);
      __len = __p - __new;
    }

  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_int(_OutIter __s, ios_base& __io, _CharT __fill,
      _ValueT __v) const
      {
 using __gnu_cxx::__add_unsigned;
 typedef typename __add_unsigned<_ValueT>::__type __unsigned_type;
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);
 const _CharT* __lit = __lc->_M_atoms_out;
 const ios_base::fmtflags __flags = __io.flags();


 const int __ilen = 5 * sizeof(_ValueT);
 _CharT* __cs = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __ilen));



 const ios_base::fmtflags __basefield = __flags & ios_base::basefield;
 const bool __dec = (__basefield != ios_base::oct
       && __basefield != ios_base::hex);
 const __unsigned_type __u = ((__v > 0 || !__dec)
         ? __unsigned_type(__v)
         : -__unsigned_type(__v));
  int __len = __int_to_char(__cs + __ilen, __u, __lit, __flags, __dec);
 __cs += __ilen - __len;


 if (__lc->_M_use_grouping)
   {


     _CharT* __cs2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * (__len + 1)
          * 2));
     _M_group_int(__lc->_M_grouping, __lc->_M_grouping_size,
    __lc->_M_thousands_sep, __io, __cs2 + 2, __cs, __len);
     __cs = __cs2 + 2;
   }


 if (__builtin_expect(__dec, true))
   {

     if (__v >= 0)
       {
  if (bool(__flags & ios_base::showpos)
      && __gnu_cxx::__numeric_traits<_ValueT>::__is_signed)
    *--__cs = __lit[__num_base::_S_oplus], ++__len;
       }
     else
       *--__cs = __lit[__num_base::_S_ominus], ++__len;
   }
 else if (bool(__flags & ios_base::showbase) && __v)
   {
     if (__basefield == ios_base::oct)
       *--__cs = __lit[__num_base::_S_odigits], ++__len;
     else
       {

  const bool __uppercase = __flags & ios_base::uppercase;
  *--__cs = __lit[__num_base::_S_ox + __uppercase];

  *--__cs = __lit[__num_base::_S_odigits];
  __len += 2;
       }
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __cs3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __cs3, __cs, __len);
     __cs = __cs3;
   }
 __io.width(0);



 return std::__write(__s, __cs, __len);
      }

  template<typename _CharT, typename _OutIter>
    void
    num_put<_CharT, _OutIter>::
    _M_group_float(const char* __grouping, size_t __grouping_size,
     _CharT __sep, const _CharT* __p, _CharT* __new,
     _CharT* __cs, int& __len) const
    {



      const int __declen = __p ? __p - __cs : __len;
      _CharT* __p2 = std::__add_grouping(__new, __sep, __grouping,
      __grouping_size,
      __cs, __cs + __declen);


      int __newlen = __p2 - __new;
      if (__p)
 {
   char_traits<_CharT>::copy(__p2, __p, __len - __declen);
   __newlen += __len - __declen;
 }
      __len = __newlen;
    }
# 971 "/usr/include/c++/5/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    template<typename _ValueT>
      _OutIter
      num_put<_CharT, _OutIter>::
      _M_insert_float(_OutIter __s, ios_base& __io, _CharT __fill, char __mod,
         _ValueT __v) const
      {
 typedef __numpunct_cache<_CharT> __cache_type;
 __use_cache<__cache_type> __uc;
 const locale& __loc = __io._M_getloc();
 const __cache_type* __lc = __uc(__loc);


 const streamsize __prec = __io.precision() < 0 ? 6 : __io.precision();

 const int __max_digits =
   __gnu_cxx::__numeric_traits<_ValueT>::__digits10;


 int __len;

 char __fbuf[16];
 __num_base::_S_format_float(__io, __fbuf, __mod);



 const bool __use_prec =
   (__io.flags() & ios_base::floatfield) != ios_base::floatfield;



 int __cs_size = __max_digits * 3;
 char* __cs = static_cast<char*>(__builtin_alloca(__cs_size));
 if (__use_prec)
   __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
     __fbuf, __prec, __v);
 else
   __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
     __fbuf, __v);


 if (__len >= __cs_size)
   {
     __cs_size = __len + 1;
     __cs = static_cast<char*>(__builtin_alloca(__cs_size));
     if (__use_prec)
       __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
         __fbuf, __prec, __v);
     else
       __len = std::__convert_from_v(_S_get_c_locale(), __cs, __cs_size,
         __fbuf, __v);
   }
# 1044 "/usr/include/c++/5/bits/locale_facets.tcc" 3
 const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

 _CharT* __ws = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
            * __len));
 __ctype.widen(__cs, __cs + __len, __ws);


 _CharT* __wp = 0;
 const char* __p = char_traits<char>::find(__cs, __len, '.');
 if (__p)
   {
     __wp = __ws + (__p - __cs);
     *__wp = __lc->_M_decimal_point;
   }




 if (__lc->_M_use_grouping
     && (__wp || __len < 3 || (__cs[1] <= '9' && __cs[2] <= '9'
          && __cs[1] >= '0' && __cs[2] >= '0')))
   {


     _CharT* __ws2 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __len * 2));

     streamsize __off = 0;
     if (__cs[0] == '-' || __cs[0] == '+')
       {
  __off = 1;
  __ws2[0] = __ws[0];
  __len -= 1;
       }

     _M_group_float(__lc->_M_grouping, __lc->_M_grouping_size,
      __lc->_M_thousands_sep, __wp, __ws2 + __off,
      __ws + __off, __len);
     __len += __off;

     __ws = __ws2;
   }


 const streamsize __w = __io.width();
 if (__w > static_cast<streamsize>(__len))
   {
     _CharT* __ws3 = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
          * __w));
     _M_pad(__fill, __w, __io, __ws3, __ws, __len);
     __ws = __ws3;
   }
 __io.width(0);



 return std::__write(__s, __ws, __len);
      }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, bool __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      if ((__flags & ios_base::boolalpha) == 0)
        {
          const long __l = __v;
          __s = _M_insert_int(__s, __io, __fill, __l);
        }
      else
        {
   typedef __numpunct_cache<_CharT> __cache_type;
   __use_cache<__cache_type> __uc;
   const locale& __loc = __io._M_getloc();
   const __cache_type* __lc = __uc(__loc);

   const _CharT* __name = __v ? __lc->_M_truename
                              : __lc->_M_falsename;
   int __len = __v ? __lc->_M_truename_size
                   : __lc->_M_falsename_size;

   const streamsize __w = __io.width();
   if (__w > static_cast<streamsize>(__len))
     {
       const streamsize __plen = __w - __len;
       _CharT* __ps
  = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
       * __plen));

       char_traits<_CharT>::assign(__ps, __plen, __fill);
       __io.width(0);

       if ((__flags & ios_base::adjustfield) == ios_base::left)
  {
    __s = std::__write(__s, __name, __len);
    __s = std::__write(__s, __ps, __plen);
  }
       else
  {
    __s = std::__write(__s, __ps, __plen);
    __s = std::__write(__s, __name, __len);
  }
       return __s;
     }
   __io.width(0);
   __s = std::__write(__s, __name, __len);
 }
      return __s;
    }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill, double __v) const
    { return _M_insert_float(__s, __io, __fill, char(), __v); }
# 1169 "/usr/include/c++/5/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
    long double __v) const
    { return _M_insert_float(__s, __io, __fill, 'L', __v); }

  template<typename _CharT, typename _OutIter>
    _OutIter
    num_put<_CharT, _OutIter>::
    do_put(iter_type __s, ios_base& __io, char_type __fill,
           const void* __v) const
    {
      const ios_base::fmtflags __flags = __io.flags();
      const ios_base::fmtflags __fmt = ~(ios_base::basefield
      | ios_base::uppercase);
      __io.flags((__flags & __fmt) | (ios_base::hex | ios_base::showbase));

      typedef __gnu_cxx::__conditional_type<(sizeof(const void*)
          <= sizeof(unsigned long)),
 unsigned long, unsigned long long>::__type _UIntPtrType;

      __s = _M_insert_int(__s, __io, __fill,
     reinterpret_cast<_UIntPtrType>(__v));
      __io.flags(__flags);
      return __s;
    }


# 1206 "/usr/include/c++/5/bits/locale_facets.tcc" 3
  template<typename _CharT, typename _Traits>
    void
    __pad<_CharT, _Traits>::_S_pad(ios_base& __io, _CharT __fill,
       _CharT* __news, const _CharT* __olds,
       streamsize __newlen, streamsize __oldlen)
    {
      const size_t __plen = static_cast<size_t>(__newlen - __oldlen);
      const ios_base::fmtflags __adjust = __io.flags() & ios_base::adjustfield;


      if (__adjust == ios_base::left)
 {
   _Traits::copy(__news, __olds, __oldlen);
   _Traits::assign(__news + __oldlen, __plen, __fill);
   return;
 }

      size_t __mod = 0;
      if (__adjust == ios_base::internal)
 {



          const locale& __loc = __io._M_getloc();
   const ctype<_CharT>& __ctype = use_facet<ctype<_CharT> >(__loc);

   if (__ctype.widen('-') == __olds[0]
       || __ctype.widen('+') == __olds[0])
     {
       __news[0] = __olds[0];
       __mod = 1;
       ++__news;
     }
   else if (__ctype.widen('0') == __olds[0]
     && __oldlen > 1
     && (__ctype.widen('x') == __olds[1]
         || __ctype.widen('X') == __olds[1]))
     {
       __news[0] = __olds[0];
       __news[1] = __olds[1];
       __mod = 2;
       __news += 2;
     }

 }
      _Traits::assign(__news, __plen, __fill);
      _Traits::copy(__news + __plen, __olds + __mod, __oldlen - __mod);
    }

  template<typename _CharT>
    _CharT*
    __add_grouping(_CharT* __s, _CharT __sep,
     const char* __gbeg, size_t __gsize,
     const _CharT* __first, const _CharT* __last)
    {
      size_t __idx = 0;
      size_t __ctr = 0;

      while (__last - __first > __gbeg[__idx]
      && static_cast<signed char>(__gbeg[__idx]) > 0
      && __gbeg[__idx] != __gnu_cxx::__numeric_traits<char>::__max)
 {
   __last -= __gbeg[__idx];
   __idx < __gsize - 1 ? ++__idx : ++__ctr;
 }

      while (__first != __last)
 *__s++ = *__first++;

      while (__ctr--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      while (__idx--)
 {
   *__s++ = __sep;
   for (char __i = __gbeg[__idx]; __i > 0; --__i)
     *__s++ = *__first++;
 }

      return __s;
    }




  extern template class __cxx11:: numpunct<char>;
  extern template class __cxx11:: numpunct_byname<char>;
  extern template class num_get<char>;
  extern template class num_put<char>;
  extern template class ctype_byname<char>;

  extern template
    const ctype<char>&
    use_facet<ctype<char> >(const locale&);

  extern template
    const numpunct<char>&
    use_facet<numpunct<char> >(const locale&);

  extern template
    const num_put<char>&
    use_facet<num_put<char> >(const locale&);

  extern template
    const num_get<char>&
    use_facet<num_get<char> >(const locale&);

  extern template
    bool
    has_facet<ctype<char> >(const locale&);

  extern template
    bool
    has_facet<numpunct<char> >(const locale&);

  extern template
    bool
    has_facet<num_put<char> >(const locale&);

  extern template
    bool
    has_facet<num_get<char> >(const locale&);


  extern template class __cxx11:: numpunct<wchar_t>;
  extern template class __cxx11:: numpunct_byname<wchar_t>;
  extern template class num_get<wchar_t>;
  extern template class num_put<wchar_t>;
  extern template class ctype_byname<wchar_t>;

  extern template
    const ctype<wchar_t>&
    use_facet<ctype<wchar_t> >(const locale&);

  extern template
    const numpunct<wchar_t>&
    use_facet<numpunct<wchar_t> >(const locale&);

  extern template
    const num_put<wchar_t>&
    use_facet<num_put<wchar_t> >(const locale&);

  extern template
    const num_get<wchar_t>&
    use_facet<num_get<wchar_t> >(const locale&);

 extern template
    bool
    has_facet<ctype<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<numpunct<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_put<wchar_t> >(const locale&);

  extern template
    bool
    has_facet<num_get<wchar_t> >(const locale&);




}
# 2652 "/usr/include/c++/5/bits/locale_facets.h" 2 3
# 38 "/usr/include/c++/5/bits/basic_ios.h" 2 3



namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _Facet>
    inline const _Facet&
    __check_facet(const _Facet* __f)
    {
      if (!__f)
 __throw_bad_cast();
      return *__f;
    }
# 66 "/usr/include/c++/5/bits/basic_ios.h" 3
  template<typename _CharT, typename _Traits>
    class basic_ios : public ios_base
    {
    public:






      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;






      typedef ctype<_CharT> __ctype_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
           __num_put_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
           __num_get_type;



    protected:
      basic_ostream<_CharT, _Traits>* _M_tie;
      mutable char_type _M_fill;
      mutable bool _M_fill_init;
      basic_streambuf<_CharT, _Traits>* _M_streambuf;


      const __ctype_type* _M_ctype;

      const __num_put_type* _M_num_put;

      const __num_get_type* _M_num_get;

    public:
# 120 "/usr/include/c++/5/bits/basic_ios.h" 3
      operator void*() const
      { return this->fail() ? 0 : const_cast<basic_ios*>(this); }


      bool
      operator!() const
      { return this->fail(); }
# 136 "/usr/include/c++/5/bits/basic_ios.h" 3
      iostate
      rdstate() const
      { return _M_streambuf_state; }
# 147 "/usr/include/c++/5/bits/basic_ios.h" 3
      void
      clear(iostate __state = goodbit);







      void
      setstate(iostate __state)
      { this->clear(this->rdstate() | __state); }




      void
      _M_setstate(iostate __state)
      {


 _M_streambuf_state |= __state;
 if (this->exceptions() & __state)
   throw;
      }







      bool
      good() const
      { return this->rdstate() == 0; }







      bool
      eof() const
      { return (this->rdstate() & eofbit) != 0; }
# 200 "/usr/include/c++/5/bits/basic_ios.h" 3
      bool
      fail() const
      { return (this->rdstate() & (badbit | failbit)) != 0; }







      bool
      bad() const
      { return (this->rdstate() & badbit) != 0; }
# 221 "/usr/include/c++/5/bits/basic_ios.h" 3
      iostate
      exceptions() const
      { return _M_exception; }
# 256 "/usr/include/c++/5/bits/basic_ios.h" 3
      void
      exceptions(iostate __except)
      {
        _M_exception = __except;
        this->clear(_M_streambuf_state);
      }







      explicit
      basic_ios(basic_streambuf<_CharT, _Traits>* __sb)
      : ios_base(), _M_tie(0), _M_fill(), _M_fill_init(false), _M_streambuf(0),
 _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { this->init(__sb); }







      virtual
      ~basic_ios() { }
# 294 "/usr/include/c++/5/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie() const
      { return _M_tie; }
# 306 "/usr/include/c++/5/bits/basic_ios.h" 3
      basic_ostream<_CharT, _Traits>*
      tie(basic_ostream<_CharT, _Traits>* __tiestr)
      {
        basic_ostream<_CharT, _Traits>* __old = _M_tie;
        _M_tie = __tiestr;
        return __old;
      }







      basic_streambuf<_CharT, _Traits>*
      rdbuf() const
      { return _M_streambuf; }
# 346 "/usr/include/c++/5/bits/basic_ios.h" 3
      basic_streambuf<_CharT, _Traits>*
      rdbuf(basic_streambuf<_CharT, _Traits>* __sb);
# 360 "/usr/include/c++/5/bits/basic_ios.h" 3
      basic_ios&
      copyfmt(const basic_ios& __rhs);







      char_type
      fill() const
      {
 if (!_M_fill_init)
   {
     _M_fill = this->widen(' ');
     _M_fill_init = true;
   }
 return _M_fill;
      }
# 389 "/usr/include/c++/5/bits/basic_ios.h" 3
      char_type
      fill(char_type __ch)
      {
 char_type __old = this->fill();
 _M_fill = __ch;
 return __old;
      }
# 409 "/usr/include/c++/5/bits/basic_ios.h" 3
      locale
      imbue(const locale& __loc);
# 429 "/usr/include/c++/5/bits/basic_ios.h" 3
      char
      narrow(char_type __c, char __dfault) const
      { return __check_facet(_M_ctype).narrow(__c, __dfault); }
# 448 "/usr/include/c++/5/bits/basic_ios.h" 3
      char_type
      widen(char __c) const
      { return __check_facet(_M_ctype).widen(__c); }

    protected:







      basic_ios()
      : ios_base(), _M_tie(0), _M_fill(char_type()), _M_fill_init(false),
 _M_streambuf(0), _M_ctype(0), _M_num_put(0), _M_num_get(0)
      { }







      void
      init(basic_streambuf<_CharT, _Traits>* __sb);
# 509 "/usr/include/c++/5/bits/basic_ios.h" 3
      void
      _M_cache_locale(const locale& __loc);
    };


}

# 1 "/usr/include/c++/5/bits/basic_ios.tcc" 1 3
# 33 "/usr/include/c++/5/bits/basic_ios.tcc" 3
       
# 34 "/usr/include/c++/5/bits/basic_ios.tcc" 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::clear(iostate __state)
    {
      if (this->rdbuf())
 _M_streambuf_state = __state;
      else
   _M_streambuf_state = __state | badbit;
      if (this->exceptions() & this->rdstate())
 __throw_ios_failure(("basic_ios::clear"));
    }

  template<typename _CharT, typename _Traits>
    basic_streambuf<_CharT, _Traits>*
    basic_ios<_CharT, _Traits>::rdbuf(basic_streambuf<_CharT, _Traits>* __sb)
    {
      basic_streambuf<_CharT, _Traits>* __old = _M_streambuf;
      _M_streambuf = __sb;
      this->clear();
      return __old;
    }

  template<typename _CharT, typename _Traits>
    basic_ios<_CharT, _Traits>&
    basic_ios<_CharT, _Traits>::copyfmt(const basic_ios& __rhs)
    {


      if (this != &__rhs)
 {




   _Words* __words = (__rhs._M_word_size <= _S_local_word_size) ?
                      _M_local_word : new _Words[__rhs._M_word_size];


   _Callback_list* __cb = __rhs._M_callbacks;
   if (__cb)
     __cb->_M_add_reference();
   _M_call_callbacks(erase_event);
   if (_M_word != _M_local_word)
     {
       delete [] _M_word;
       _M_word = 0;
     }
   _M_dispose_callbacks();


   _M_callbacks = __cb;
   for (int __i = 0; __i < __rhs._M_word_size; ++__i)
     __words[__i] = __rhs._M_word[__i];
   _M_word = __words;
   _M_word_size = __rhs._M_word_size;

   this->flags(__rhs.flags());
   this->width(__rhs.width());
   this->precision(__rhs.precision());
   this->tie(__rhs.tie());
   this->fill(__rhs.fill());
   _M_ios_locale = __rhs.getloc();
   _M_cache_locale(_M_ios_locale);

   _M_call_callbacks(copyfmt_event);


   this->exceptions(__rhs.exceptions());
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    locale
    basic_ios<_CharT, _Traits>::imbue(const locale& __loc)
    {
      locale __old(this->getloc());
      ios_base::imbue(__loc);
      _M_cache_locale(__loc);
      if (this->rdbuf() != 0)
 this->rdbuf()->pubimbue(__loc);
      return __old;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::init(basic_streambuf<_CharT, _Traits>* __sb)
    {

      ios_base::_M_init();


      _M_cache_locale(_M_ios_locale);
# 146 "/usr/include/c++/5/bits/basic_ios.tcc" 3
      _M_fill = _CharT();
      _M_fill_init = false;

      _M_tie = 0;
      _M_exception = goodbit;
      _M_streambuf = __sb;
      _M_streambuf_state = __sb ? goodbit : badbit;
    }

  template<typename _CharT, typename _Traits>
    void
    basic_ios<_CharT, _Traits>::_M_cache_locale(const locale& __loc)
    {
      if (__builtin_expect(has_facet<__ctype_type>(__loc), true))
 _M_ctype = &use_facet<__ctype_type>(__loc);
      else
 _M_ctype = 0;

      if (__builtin_expect(has_facet<__num_put_type>(__loc), true))
 _M_num_put = &use_facet<__num_put_type>(__loc);
      else
 _M_num_put = 0;

      if (__builtin_expect(has_facet<__num_get_type>(__loc), true))
 _M_num_get = &use_facet<__num_get_type>(__loc);
      else
 _M_num_get = 0;
    }




  extern template class basic_ios<char>;


  extern template class basic_ios<wchar_t>;




}
# 517 "/usr/include/c++/5/bits/basic_ios.h" 2 3
# 45 "/usr/include/c++/5/ios" 2 3
# 39 "/usr/include/c++/5/ostream" 2 3


namespace std __attribute__ ((__visibility__ ("default")))
{

# 57 "/usr/include/c++/5/ostream" 3
  template<typename _CharT, typename _Traits>
    class basic_ostream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef num_put<_CharT, ostreambuf_iterator<_CharT, _Traits> >
             __num_put_type;
      typedef ctype<_CharT> __ctype_type;
# 83 "/usr/include/c++/5/ostream" 3
      explicit
      basic_ostream(__streambuf_type* __sb)
      { this->init(__sb); }






      virtual
      ~basic_ostream() { }


      class sentry;
      friend class sentry;
# 107 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      operator<<(__ostream_type& (*__pf)(__ostream_type&))
      {



 return __pf(*this);
      }

      __ostream_type&
      operator<<(__ios_type& (*__pf)(__ios_type&))
      {



 __pf(*this);
 return *this;
      }

      __ostream_type&
      operator<<(ios_base& (*__pf) (ios_base&))
      {



 __pf(*this);
 return *this;
      }
# 165 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      operator<<(long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(bool __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(short __n);

      __ostream_type&
      operator<<(unsigned short __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }

      __ostream_type&
      operator<<(int __n);

      __ostream_type&
      operator<<(unsigned int __n)
      {


 return _M_insert(static_cast<unsigned long>(__n));
      }


      __ostream_type&
      operator<<(long long __n)
      { return _M_insert(__n); }

      __ostream_type&
      operator<<(unsigned long long __n)
      { return _M_insert(__n); }
# 219 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      operator<<(double __f)
      { return _M_insert(__f); }

      __ostream_type&
      operator<<(float __f)
      {


 return _M_insert(static_cast<double>(__f));
      }

      __ostream_type&
      operator<<(long double __f)
      { return _M_insert(__f); }
# 244 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      operator<<(const void* __p)
      { return _M_insert(__p); }
# 269 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      operator<<(__streambuf_type* __sb);
# 302 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      put(char_type __c);






      void
      _M_write(const char_type* __s, streamsize __n)
      {
 const streamsize __put = this->rdbuf()->sputn(__s, __n);
 if (__put != __n)
   this->setstate(ios_base::badbit);
      }
# 334 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      write(const char_type* __s, streamsize __n);
# 347 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      flush();
# 357 "/usr/include/c++/5/ostream" 3
      pos_type
      tellp();
# 368 "/usr/include/c++/5/ostream" 3
      __ostream_type&
      seekp(pos_type);
# 380 "/usr/include/c++/5/ostream" 3
       __ostream_type&
      seekp(off_type, ios_base::seekdir);

    protected:
      basic_ostream()
      { this->init(0); }
# 413 "/usr/include/c++/5/ostream" 3
      template<typename _ValueT>
 __ostream_type&
 _M_insert(_ValueT __v);
    };
# 425 "/usr/include/c++/5/ostream" 3
  template <typename _CharT, typename _Traits>
    class basic_ostream<_CharT, _Traits>::sentry
    {

      bool _M_ok;
      basic_ostream<_CharT, _Traits>& _M_os;

    public:
# 444 "/usr/include/c++/5/ostream" 3
      explicit
      sentry(basic_ostream<_CharT, _Traits>& __os);
# 454 "/usr/include/c++/5/ostream" 3
      ~sentry()
      {

 if (bool(_M_os.flags() & ios_base::unitbuf) && !uncaught_exception())
   {

     if (_M_os.rdbuf() && _M_os.rdbuf()->pubsync() == -1)
       _M_os.setstate(ios_base::badbit);
   }
      }
# 475 "/usr/include/c++/5/ostream" 3
      operator bool() const
      { return _M_ok; }
    };
# 495 "/usr/include/c++/5/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, _CharT __c)
    { return __ostream_insert(__out, &__c, 1); }

  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, char __c)
    { return (__out << __out.widen(__c)); }


  template <class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, char __c)
    { return __ostream_insert(__out, &__c, 1); }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, signed char __c)
    { return (__out << static_cast<char>(__c)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, unsigned char __c)
    { return (__out << static_cast<char>(__c)); }
# 537 "/usr/include/c++/5/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const _CharT* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits> &
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s);


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 __ostream_insert(__out, __s,
    static_cast<streamsize>(_Traits::length(__s)));
      return __out;
    }


  template<class _Traits>
    inline basic_ostream<char, _Traits>&
    operator<<(basic_ostream<char, _Traits>& __out, const signed char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }

  template<class _Traits>
    inline basic_ostream<char, _Traits> &
    operator<<(basic_ostream<char, _Traits>& __out, const unsigned char* __s)
    { return (__out << reinterpret_cast<const char*>(__s)); }
# 588 "/usr/include/c++/5/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    endl(basic_ostream<_CharT, _Traits>& __os)
    { return flush(__os.put(__os.widen('\n'))); }
# 600 "/usr/include/c++/5/ostream" 3
  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    ends(basic_ostream<_CharT, _Traits>& __os)
    { return __os.put(_CharT()); }






  template<typename _CharT, typename _Traits>
    inline basic_ostream<_CharT, _Traits>&
    flush(basic_ostream<_CharT, _Traits>& __os)
    { return __os.flush(); }
# 635 "/usr/include/c++/5/ostream" 3

}

# 1 "/usr/include/c++/5/bits/ostream.tcc" 1 3
# 37 "/usr/include/c++/5/bits/ostream.tcc" 3
       
# 38 "/usr/include/c++/5/bits/ostream.tcc" 3



namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>::sentry::
    sentry(basic_ostream<_CharT, _Traits>& __os)
    : _M_ok(false), _M_os(__os)
    {

      if (__os.tie() && __os.good())
 __os.tie()->flush();

      if (__os.good())
 _M_ok = true;
      else
 __os.setstate(ios_base::failbit);
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_ostream<_CharT, _Traits>&
      basic_ostream<_CharT, _Traits>::
      _M_insert(_ValueT __v)
      {
 sentry __cerb(*this);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     try
       {
  const __num_put_type& __np = __check_facet(this->_M_num_put);
  if (__np.put(*this, *this, this->fill(), __v).failed())
    __err |= ios_base::badbit;
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(short __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned short>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(int __n)
    {


      const ios_base::fmtflags __fmt = this->flags() & ios_base::basefield;
      if (__fmt == ios_base::oct || __fmt == ios_base::hex)
 return _M_insert(static_cast<long>(static_cast<unsigned int>(__n)));
      else
 return _M_insert(static_cast<long>(__n));
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    operator<<(__streambuf_type* __sbin)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this);
      if (__cerb && __sbin)
 {
   try
     {
       if (!__copy_streambufs(__sbin, this->rdbuf()))
  __err |= ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbin)
 __err |= ios_base::badbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    put(char_type __c)
    {






      sentry __cerb(*this);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __put = this->rdbuf()->sputc(__c);
       if (traits_type::eq_int_type(__put, traits_type::eof()))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    write(const _CharT* __s, streamsize __n)
    {







      sentry __cerb(*this);
      if (__cerb)
 {
   try
     { _M_write(__s, __n); }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    flush()
    {



      ios_base::iostate __err = ios_base::goodbit;
      try
 {
   if (this->rdbuf() && this->rdbuf()->pubsync() == -1)
     __err |= ios_base::badbit;
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_ostream<_CharT, _Traits>::pos_type
    basic_ostream<_CharT, _Traits>::
    tellp()
    {
      pos_type __ret = pos_type(-1);
      try
 {
   if (!this->fail())
     __ret = this->rdbuf()->pubseekoff(0, ios_base::cur, ios_base::out);
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(pos_type __pos)
    {
      ios_base::iostate __err = ios_base::goodbit;
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekpos(__pos,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    basic_ostream<_CharT, _Traits>::
    seekp(off_type __off, ios_base::seekdir __dir)
    {
      ios_base::iostate __err = ios_base::goodbit;
      try
 {
   if (!this->fail())
     {


       const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
            ios_base::out);


       if (__p == pos_type(off_type(-1)))
  __err |= ios_base::failbit;
     }
 }
      catch(__cxxabiv1::__forced_unwind&)
 {
   this->_M_setstate(ios_base::badbit);
   throw;
 }
      catch(...)
 { this->_M_setstate(ios_base::badbit); }
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __out, const char* __s)
    {
      if (!__s)
 __out.setstate(ios_base::badbit);
      else
 {


   const size_t __clen = char_traits<char>::length(__s);
   try
     {
       struct __ptr_guard
       {
  _CharT *__p;
  __ptr_guard (_CharT *__ip): __p(__ip) { }
  ~__ptr_guard() { delete[] __p; }
  _CharT* __get() { return __p; }
       } __pg (new _CharT[__clen]);

       _CharT *__ws = __pg.__get();
       for (size_t __i = 0; __i < __clen; ++__i)
  __ws[__i] = __out.widen(__s[__i]);
       __ostream_insert(__out, __ws, __clen);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(ios_base::badbit); }
 }
      return __out;
    }




  extern template class basic_ostream<char>;
  extern template ostream& endl(ostream&);
  extern template ostream& ends(ostream&);
  extern template ostream& flush(ostream&);
  extern template ostream& operator<<(ostream&, char);
  extern template ostream& operator<<(ostream&, unsigned char);
  extern template ostream& operator<<(ostream&, signed char);
  extern template ostream& operator<<(ostream&, const char*);
  extern template ostream& operator<<(ostream&, const unsigned char*);
  extern template ostream& operator<<(ostream&, const signed char*);

  extern template ostream& ostream::_M_insert(long);
  extern template ostream& ostream::_M_insert(unsigned long);
  extern template ostream& ostream::_M_insert(bool);

  extern template ostream& ostream::_M_insert(long long);
  extern template ostream& ostream::_M_insert(unsigned long long);

  extern template ostream& ostream::_M_insert(double);
  extern template ostream& ostream::_M_insert(long double);
  extern template ostream& ostream::_M_insert(const void*);


  extern template class basic_ostream<wchar_t>;
  extern template wostream& endl(wostream&);
  extern template wostream& ends(wostream&);
  extern template wostream& flush(wostream&);
  extern template wostream& operator<<(wostream&, wchar_t);
  extern template wostream& operator<<(wostream&, char);
  extern template wostream& operator<<(wostream&, const wchar_t*);
  extern template wostream& operator<<(wostream&, const char*);

  extern template wostream& wostream::_M_insert(long);
  extern template wostream& wostream::_M_insert(unsigned long);
  extern template wostream& wostream::_M_insert(bool);

  extern template wostream& wostream::_M_insert(long long);
  extern template wostream& wostream::_M_insert(unsigned long long);

  extern template wostream& wostream::_M_insert(double);
  extern template wostream& wostream::_M_insert(long double);
  extern template wostream& wostream::_M_insert(const void*);




}
# 639 "/usr/include/c++/5/ostream" 2 3
# 65 "/usr/include/c++/5/iterator" 2 3
# 1 "/usr/include/c++/5/istream" 1 3
# 36 "/usr/include/c++/5/istream" 3
       
# 37 "/usr/include/c++/5/istream" 3




namespace std __attribute__ ((__visibility__ ("default")))
{

# 57 "/usr/include/c++/5/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream : virtual public basic_ios<_CharT, _Traits>
    {
    public:

      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_ios<_CharT, _Traits> __ios_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef num_get<_CharT, istreambuf_iterator<_CharT, _Traits> >
        __num_get_type;
      typedef ctype<_CharT> __ctype_type;

    protected:





      streamsize _M_gcount;

    public:







      explicit
      basic_istream(__streambuf_type* __sb)
      : _M_gcount(streamsize(0))
      { this->init(__sb); }






      virtual
      ~basic_istream()
      { _M_gcount = streamsize(0); }


      class sentry;
      friend class sentry;
# 119 "/usr/include/c++/5/istream" 3
      __istream_type&
      operator>>(__istream_type& (*__pf)(__istream_type&))
      { return __pf(*this); }

      __istream_type&
      operator>>(__ios_type& (*__pf)(__ios_type&))
      {
 __pf(*this);
 return *this;
      }

      __istream_type&
      operator>>(ios_base& (*__pf)(ios_base&))
      {
 __pf(*this);
 return *this;
      }
# 167 "/usr/include/c++/5/istream" 3
      __istream_type&
      operator>>(bool& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(short& __n);

      __istream_type&
      operator>>(unsigned short& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(int& __n);

      __istream_type&
      operator>>(unsigned int& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long& __n)
      { return _M_extract(__n); }


      __istream_type&
      operator>>(long long& __n)
      { return _M_extract(__n); }

      __istream_type&
      operator>>(unsigned long long& __n)
      { return _M_extract(__n); }
# 213 "/usr/include/c++/5/istream" 3
      __istream_type&
      operator>>(float& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(double& __f)
      { return _M_extract(__f); }

      __istream_type&
      operator>>(long double& __f)
      { return _M_extract(__f); }
# 234 "/usr/include/c++/5/istream" 3
      __istream_type&
      operator>>(void*& __p)
      { return _M_extract(__p); }
# 258 "/usr/include/c++/5/istream" 3
      __istream_type&
      operator>>(__streambuf_type* __sb);
# 268 "/usr/include/c++/5/istream" 3
      streamsize
      gcount() const
      { return _M_gcount; }
# 301 "/usr/include/c++/5/istream" 3
      int_type
      get();
# 315 "/usr/include/c++/5/istream" 3
      __istream_type&
      get(char_type& __c);
# 342 "/usr/include/c++/5/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n, char_type __delim);
# 353 "/usr/include/c++/5/istream" 3
      __istream_type&
      get(char_type* __s, streamsize __n)
      { return this->get(__s, __n, this->widen('\n')); }
# 376 "/usr/include/c++/5/istream" 3
      __istream_type&
      get(__streambuf_type& __sb, char_type __delim);
# 386 "/usr/include/c++/5/istream" 3
      __istream_type&
      get(__streambuf_type& __sb)
      { return this->get(__sb, this->widen('\n')); }
# 415 "/usr/include/c++/5/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n, char_type __delim);
# 426 "/usr/include/c++/5/istream" 3
      __istream_type&
      getline(char_type* __s, streamsize __n)
      { return this->getline(__s, __n, this->widen('\n')); }
# 450 "/usr/include/c++/5/istream" 3
      __istream_type&
      ignore(streamsize __n, int_type __delim);

      __istream_type&
      ignore(streamsize __n);

      __istream_type&
      ignore();
# 467 "/usr/include/c++/5/istream" 3
      int_type
      peek();
# 485 "/usr/include/c++/5/istream" 3
      __istream_type&
      read(char_type* __s, streamsize __n);
# 504 "/usr/include/c++/5/istream" 3
      streamsize
      readsome(char_type* __s, streamsize __n);
# 521 "/usr/include/c++/5/istream" 3
      __istream_type&
      putback(char_type __c);
# 537 "/usr/include/c++/5/istream" 3
      __istream_type&
      unget();
# 555 "/usr/include/c++/5/istream" 3
      int
      sync();
# 570 "/usr/include/c++/5/istream" 3
      pos_type
      tellg();
# 585 "/usr/include/c++/5/istream" 3
      __istream_type&
      seekg(pos_type);
# 601 "/usr/include/c++/5/istream" 3
      __istream_type&
      seekg(off_type, ios_base::seekdir);


    protected:
      basic_istream()
      : _M_gcount(streamsize(0))
      { this->init(0); }
# 639 "/usr/include/c++/5/istream" 3
      template<typename _ValueT>
 __istream_type&
 _M_extract(_ValueT& __v);
    };


  template<>
    basic_istream<char>&
    basic_istream<char>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n);

  template<>
    basic_istream<char>&
    basic_istream<char>::
    ignore(streamsize __n, int_type __delim);


  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    getline(char_type* __s, streamsize __n, char_type __delim);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n);

  template<>
    basic_istream<wchar_t>&
    basic_istream<wchar_t>::
    ignore(streamsize __n, int_type __delim);
# 685 "/usr/include/c++/5/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_istream<_CharT, _Traits>::sentry
    {

      bool _M_ok;

    public:

      typedef _Traits traits_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::__ctype_type __ctype_type;
      typedef typename _Traits::int_type __int_type;
# 721 "/usr/include/c++/5/istream" 3
      explicit
      sentry(basic_istream<_CharT, _Traits>& __is, bool __noskipws = false);
# 734 "/usr/include/c++/5/istream" 3
      operator bool() const
      { return _M_ok; }
    };
# 750 "/usr/include/c++/5/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char& __c)
    { return (__in >> reinterpret_cast<char&>(__c)); }
# 792 "/usr/include/c++/5/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s);


  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __in, char* __s);

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, unsigned char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }

  template<class _Traits>
    inline basic_istream<char, _Traits>&
    operator>>(basic_istream<char, _Traits>& __in, signed char* __s)
    { return (__in >> reinterpret_cast<char*>(__s)); }
# 823 "/usr/include/c++/5/istream" 3
  template<typename _CharT, typename _Traits>
    class basic_iostream
    : public basic_istream<_CharT, _Traits>,
      public basic_ostream<_CharT, _Traits>
    {
    public:



      typedef _CharT char_type;
      typedef typename _Traits::int_type int_type;
      typedef typename _Traits::pos_type pos_type;
      typedef typename _Traits::off_type off_type;
      typedef _Traits traits_type;


      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_ostream<_CharT, _Traits> __ostream_type;







      explicit
      basic_iostream(basic_streambuf<_CharT, _Traits>* __sb)
      : __istream_type(__sb), __ostream_type(__sb) { }




      virtual
      ~basic_iostream() { }

    protected:
      basic_iostream()
      : __istream_type(), __ostream_type() { }
# 884 "/usr/include/c++/5/istream" 3
    };
# 906 "/usr/include/c++/5/istream" 3
  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __is);
# 931 "/usr/include/c++/5/istream" 3

}

# 1 "/usr/include/c++/5/bits/istream.tcc" 1 3
# 37 "/usr/include/c++/5/bits/istream.tcc" 3
       
# 38 "/usr/include/c++/5/bits/istream.tcc" 3



namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>::sentry::
    sentry(basic_istream<_CharT, _Traits>& __in, bool __noskip) : _M_ok(false)
    {
      ios_base::iostate __err = ios_base::goodbit;
      if (__in.good())
 {
   if (__in.tie())
     __in.tie()->flush();
   if (!__noskip && bool(__in.flags() & ios_base::skipws))
     {
       const __int_type __eof = traits_type::eof();
       __streambuf_type* __sb = __in.rdbuf();
       __int_type __c = __sb->sgetc();

       const __ctype_type& __ct = __check_facet(__in._M_ctype);
       while (!traits_type::eq_int_type(__c, __eof)
       && __ct.is(ctype_base::space,
    traits_type::to_char_type(__c)))
  __c = __sb->snextc();




       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
 }

      if (__in.good() && __err == ios_base::goodbit)
 _M_ok = true;
      else
 {
   __err |= ios_base::failbit;
   __in.setstate(__err);
 }
    }

  template<typename _CharT, typename _Traits>
    template<typename _ValueT>
      basic_istream<_CharT, _Traits>&
      basic_istream<_CharT, _Traits>::
      _M_extract(_ValueT& __v)
      {
 sentry __cerb(*this, false);
 if (__cerb)
   {
     ios_base::iostate __err = ios_base::goodbit;
     try
       {
  const __num_get_type& __ng = __check_facet(this->_M_num_get);
  __ng.get(*this, 0, *this, __err, __v);
       }
     catch(__cxxabiv1::__forced_unwind&)
       {
  this->_M_setstate(ios_base::badbit);
  throw;
       }
     catch(...)
       { this->_M_setstate(ios_base::badbit); }
     if (__err)
       this->setstate(__err);
   }
 return *this;
      }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(short& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<short>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<short>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<short>::__max;
  }
       else
  __n = short(__l);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(int& __n)
    {


      sentry __cerb(*this, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       long __l;
       const __num_get_type& __ng = __check_facet(this->_M_num_get);
       __ng.get(*this, 0, *this, __err, __l);



       if (__l < __gnu_cxx::__numeric_traits<int>::__min)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__min;
  }
       else if (__l > __gnu_cxx::__numeric_traits<int>::__max)
  {
    __err |= ios_base::failbit;
    __n = __gnu_cxx::__numeric_traits<int>::__max;
  }
       else
  __n = int(__l);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    operator>>(__streambuf_type* __sbout)
    {
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, false);
      if (__cerb && __sbout)
 {
   try
     {
       bool __ineof;
       if (!__copy_streambufs_eof(this->rdbuf(), __sbout, __ineof))
  __err |= ios_base::failbit;
       if (__ineof)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::failbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::failbit); }
 }
      else if (!__sbout)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    get(void)
    {
      const int_type __eof = traits_type::eof();
      int_type __c = __eof;
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       __c = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__c, __eof))
  _M_gcount = 1;
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type& __c)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __cb = this->rdbuf()->sbumpc();

       if (!traits_type::eq_int_type(__cb, traits_type::eof()))
  {
    _M_gcount = 1;
    __c = traits_type::to_char_type(__cb);
  }
       else
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       int_type __c = __sb->sgetc();

       while (_M_gcount + 1 < __n
       && !traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim))
  {
    *__s++ = traits_type::to_char_type(__c);
    ++_M_gcount;
    __c = __sb->snextc();
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    get(__streambuf_type& __sb, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       const int_type __idelim = traits_type::to_int_type(__delim);
       const int_type __eof = traits_type::eof();
       __streambuf_type* __this_sb = this->rdbuf();
       int_type __c = __this_sb->sgetc();
       char_type __c2 = traits_type::to_char_type(__c);

       while (!traits_type::eq_int_type(__c, __eof)
       && !traits_type::eq_int_type(__c, __idelim)
       && !traits_type::eq_int_type(__sb.sputc(__c2), __eof))
  {
    ++_M_gcount;
    __c = __this_sb->snextc();
    __c2 = traits_type::to_char_type(__c);
  }
       if (traits_type::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      if (!_M_gcount)
 __err |= ios_base::failbit;
      if (__err)
 this->setstate(__err);
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    getline(char_type* __s, streamsize __n, char_type __delim)
    {
      _M_gcount = 0;
      ios_base::iostate __err = ios_base::goodbit;
      sentry __cerb(*this, true);
      if (__cerb)
        {
          try
            {
              const int_type __idelim = traits_type::to_int_type(__delim);
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();

              while (_M_gcount + 1 < __n
                     && !traits_type::eq_int_type(__c, __eof)
                     && !traits_type::eq_int_type(__c, __idelim))
                {
                  *__s++ = traits_type::to_char_type(__c);
                  __c = __sb->snextc();
                  ++_M_gcount;
                }
              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
              else
                {
                  if (traits_type::eq_int_type(__c, __idelim))
                    {
                      __sb->sbumpc();
                      ++_M_gcount;
                    }
                  else
                    __err |= ios_base::failbit;
                }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
        }


      if (__n > 0)
 *__s = char_type();
      if (!_M_gcount)
        __err |= ios_base::failbit;
      if (__err)
        this->setstate(__err);
      return *this;
    }




  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(void)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();

       if (traits_type::eq_int_type(__sb->sbumpc(), __eof))
  __err |= ios_base::eofbit;
       else
  _M_gcount = 1;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();
# 513 "/usr/include/c++/5/bits/istream.tcc" 3
       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

       if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    ignore(streamsize __n, int_type __delim)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb && __n > 0)
        {
          ios_base::iostate __err = ios_base::goodbit;
          try
            {
              const int_type __eof = traits_type::eof();
              __streambuf_type* __sb = this->rdbuf();
              int_type __c = __sb->sgetc();


       bool __large_ignore = false;
       while (true)
  {
    while (_M_gcount < __n
    && !traits_type::eq_int_type(__c, __eof)
    && !traits_type::eq_int_type(__c, __delim))
      {
        ++_M_gcount;
        __c = __sb->snextc();
      }
    if (__n == __gnu_cxx::__numeric_traits<streamsize>::__max
        && !traits_type::eq_int_type(__c, __eof)
        && !traits_type::eq_int_type(__c, __delim))
      {
        _M_gcount =
   __gnu_cxx::__numeric_traits<streamsize>::__min;
        __large_ignore = true;
      }
    else
      break;
  }

       if (__large_ignore)
  _M_gcount = __gnu_cxx::__numeric_traits<streamsize>::__max;

              if (traits_type::eq_int_type(__c, __eof))
                __err |= ios_base::eofbit;
       else if (traits_type::eq_int_type(__c, __delim))
  {
    if (_M_gcount
        < __gnu_cxx::__numeric_traits<streamsize>::__max)
      ++_M_gcount;
    __sb->sbumpc();
  }
            }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
          catch(...)
            { this->_M_setstate(ios_base::badbit); }
          if (__err)
            this->setstate(__err);
        }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::int_type
    basic_istream<_CharT, _Traits>::
    peek(void)
    {
      int_type __c = traits_type::eof();
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       __c = this->rdbuf()->sgetc();
       if (traits_type::eq_int_type(__c, traits_type::eof()))
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __c;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    read(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       _M_gcount = this->rdbuf()->sgetn(__s, __n);
       if (_M_gcount != __n)
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    streamsize
    basic_istream<_CharT, _Traits>::
    readsome(char_type* __s, streamsize __n)
    {
      _M_gcount = 0;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {

       const streamsize __num = this->rdbuf()->in_avail();
       if (__num > 0)
  _M_gcount = this->rdbuf()->sgetn(__s, std::min(__num, __n));
       else if (__num == -1)
  __err |= ios_base::eofbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return _M_gcount;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    putback(char_type __c)
    {


      _M_gcount = 0;

      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sputbackc(__c), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    unget(void)
    {


      _M_gcount = 0;

      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const int_type __eof = traits_type::eof();
       __streambuf_type* __sb = this->rdbuf();
       if (!__sb
    || traits_type::eq_int_type(__sb->sungetc(), __eof))
  __err |= ios_base::badbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    int
    basic_istream<_CharT, _Traits>::
    sync(void)
    {


      int __ret = -1;
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       __streambuf_type* __sb = this->rdbuf();
       if (__sb)
  {
    if (__sb->pubsync() == -1)
      __err |= ios_base::badbit;
    else
      __ret = 0;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    typename basic_istream<_CharT, _Traits>::pos_type
    basic_istream<_CharT, _Traits>::
    tellg(void)
    {


      pos_type __ret = pos_type(-1);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   try
     {
       if (!this->fail())
  __ret = this->rdbuf()->pubseekoff(0, ios_base::cur,
        ios_base::in);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(pos_type __pos)
    {



      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       if (!this->fail())
  {

    const pos_type __p = this->rdbuf()->pubseekpos(__pos,
         ios_base::in);


    if (__p == pos_type(off_type(-1)))
      __err |= ios_base::failbit;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    basic_istream<_CharT, _Traits>::
    seekg(off_type __off, ios_base::seekdir __dir)
    {



      this->clear(this->rdstate() & ~ios_base::eofbit);
      sentry __cerb(*this, true);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       if (!this->fail())
  {

    const pos_type __p = this->rdbuf()->pubseekoff(__off, __dir,
         ios_base::in);


    if (__p == pos_type(off_type(-1)))
      __err |= ios_base::failbit;
  }
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       this->_M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { this->_M_setstate(ios_base::badbit); }
   if (__err)
     this->setstate(__err);
 }
      return *this;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT& __c)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef typename __istream_type::int_type __int_type;

      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   ios_base::iostate __err = ios_base::goodbit;
   try
     {
       const __int_type __cb = __in.rdbuf()->sbumpc();
       if (!_Traits::eq_int_type(__cb, _Traits::eof()))
  __c = _Traits::to_char_type(__cb);
       else
  __err |= (ios_base::eofbit | ios_base::failbit);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
   if (__err)
     __in.setstate(__err);
 }
      return __in;
    }

  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in, _CharT* __s)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename _Traits::int_type int_type;
      typedef _CharT char_type;
      typedef ctype<_CharT> __ctype_type;

      streamsize __extracted = 0;
      ios_base::iostate __err = ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       streamsize __num = __in.width();
       if (__num <= 0)
  __num = __gnu_cxx::__numeric_traits<streamsize>::__max;

       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());

       const int_type __eof = _Traits::eof();
       __streambuf_type* __sb = __in.rdbuf();
       int_type __c = __sb->sgetc();

       while (__extracted < __num - 1
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    *__s++ = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __sb->snextc();
  }
       if (_Traits::eq_int_type(__c, __eof))
  __err |= ios_base::eofbit;



       *__s = char_type();
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(ios_base::badbit);
       throw;
     }
   catch(...)
     { __in._M_setstate(ios_base::badbit); }
 }
      if (!__extracted)
 __err |= ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }


  template<typename _CharT, typename _Traits>
    basic_istream<_CharT, _Traits>&
    ws(basic_istream<_CharT, _Traits>& __in)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_streambuf<_CharT, _Traits> __streambuf_type;
      typedef typename __istream_type::int_type __int_type;
      typedef ctype<_CharT> __ctype_type;

      const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
      const __int_type __eof = _Traits::eof();
      __streambuf_type* __sb = __in.rdbuf();
      __int_type __c = __sb->sgetc();

      while (!_Traits::eq_int_type(__c, __eof)
      && __ct.is(ctype_base::space, _Traits::to_char_type(__c)))
 __c = __sb->snextc();

       if (_Traits::eq_int_type(__c, __eof))
  __in.setstate(ios_base::eofbit);
      return __in;
    }




  extern template class basic_istream<char>;
  extern template istream& ws(istream&);
  extern template istream& operator>>(istream&, char&);
  extern template istream& operator>>(istream&, char*);
  extern template istream& operator>>(istream&, unsigned char&);
  extern template istream& operator>>(istream&, signed char&);
  extern template istream& operator>>(istream&, unsigned char*);
  extern template istream& operator>>(istream&, signed char*);

  extern template istream& istream::_M_extract(unsigned short&);
  extern template istream& istream::_M_extract(unsigned int&);
  extern template istream& istream::_M_extract(long&);
  extern template istream& istream::_M_extract(unsigned long&);
  extern template istream& istream::_M_extract(bool&);

  extern template istream& istream::_M_extract(long long&);
  extern template istream& istream::_M_extract(unsigned long long&);

  extern template istream& istream::_M_extract(float&);
  extern template istream& istream::_M_extract(double&);
  extern template istream& istream::_M_extract(long double&);
  extern template istream& istream::_M_extract(void*&);

  extern template class basic_iostream<char>;


  extern template class basic_istream<wchar_t>;
  extern template wistream& ws(wistream&);
  extern template wistream& operator>>(wistream&, wchar_t&);
  extern template wistream& operator>>(wistream&, wchar_t*);

  extern template wistream& wistream::_M_extract(unsigned short&);
  extern template wistream& wistream::_M_extract(unsigned int&);
  extern template wistream& wistream::_M_extract(long&);
  extern template wistream& wistream::_M_extract(unsigned long&);
  extern template wistream& wistream::_M_extract(bool&);

  extern template wistream& wistream::_M_extract(long long&);
  extern template wistream& wistream::_M_extract(unsigned long long&);

  extern template wistream& wistream::_M_extract(float&);
  extern template wistream& wistream::_M_extract(double&);
  extern template wistream& wistream::_M_extract(long double&);
  extern template wistream& wistream::_M_extract(void*&);

  extern template class basic_iostream<wchar_t>;




}
# 935 "/usr/include/c++/5/istream" 2 3
# 66 "/usr/include/c++/5/iterator" 2 3
# 1 "/usr/include/c++/5/bits/stream_iterator.h" 1 3
# 33 "/usr/include/c++/5/bits/stream_iterator.h" 3
       
# 34 "/usr/include/c++/5/bits/stream_iterator.h" 3



namespace std __attribute__ ((__visibility__ ("default")))
{








  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT>, typename _Dist = ptrdiff_t>
    class istream_iterator
    : public iterator<input_iterator_tag, _Tp, _Dist, const _Tp*, const _Tp&>
    {
    public:
      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_istream<_CharT, _Traits> istream_type;

    private:
      istream_type* _M_stream;
      _Tp _M_value;
      bool _M_ok;

    public:

      istream_iterator()
      : _M_stream(0), _M_value(), _M_ok(false) {}


      istream_iterator(istream_type& __s)
      : _M_stream(&__s)
      { _M_read(); }

      istream_iterator(const istream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_value(__obj._M_value),
        _M_ok(__obj._M_ok)
      { }

      const _Tp&
      operator*() const
      {


                        ;
 return _M_value;
      }

      const _Tp*
      operator->() const { return &(operator*()); }

      istream_iterator&
      operator++()
      {


                        ;
 _M_read();
 return *this;
      }

      istream_iterator
      operator++(int)
      {


                        ;
 istream_iterator __tmp = *this;
 _M_read();
 return __tmp;
      }

      bool
      _M_equal(const istream_iterator& __x) const
      { return (_M_ok == __x._M_ok) && (!_M_ok || _M_stream == __x._M_stream); }

    private:
      void
      _M_read()
      {
 _M_ok = (_M_stream && *_M_stream) ? true : false;
 if (_M_ok)
   {
     *_M_stream >> _M_value;
     _M_ok = *_M_stream ? true : false;
   }
      }
    };


  template<typename _Tp, typename _CharT, typename _Traits, typename _Dist>
    inline bool
    operator==(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return __x._M_equal(__y); }


  template <class _Tp, class _CharT, class _Traits, class _Dist>
    inline bool
    operator!=(const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __x,
        const istream_iterator<_Tp, _CharT, _Traits, _Dist>& __y)
    { return !__x._M_equal(__y); }
# 152 "/usr/include/c++/5/bits/stream_iterator.h" 3
  template<typename _Tp, typename _CharT = char,
           typename _Traits = char_traits<_CharT> >
    class ostream_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    public:


      typedef _CharT char_type;
      typedef _Traits traits_type;
      typedef basic_ostream<_CharT, _Traits> ostream_type;


    private:
      ostream_type* _M_stream;
      const _CharT* _M_string;

    public:

      ostream_iterator(ostream_type& __s) : _M_stream(&__s), _M_string(0) {}
# 183 "/usr/include/c++/5/bits/stream_iterator.h" 3
      ostream_iterator(ostream_type& __s, const _CharT* __c)
      : _M_stream(&__s), _M_string(__c) { }


      ostream_iterator(const ostream_iterator& __obj)
      : _M_stream(__obj._M_stream), _M_string(__obj._M_string) { }



      ostream_iterator&
      operator=(const _Tp& __value)
      {


                        ;
 *_M_stream << __value;
 if (_M_string) *_M_stream << _M_string;
 return *this;
      }

      ostream_iterator&
      operator*()
      { return *this; }

      ostream_iterator&
      operator++()
      { return *this; }

      ostream_iterator&
      operator++(int)
      { return *this; }
    };




}
# 67 "/usr/include/c++/5/iterator" 2 3
# 30 "/home/junho/Downloads/root/include/TObjArray.h" 2




       
# 35 "/home/junho/Downloads/root/include/TObjArray.h" 3


class TObjArrayIter;

class TObjArray : public TSeqCollection {

friend class TObjArrayIter;
friend class TClonesArray;

protected:
   TObject **fCont;
   Int_t fLowerBound;
   Int_t fLast;

   Bool_t BoundsOk(const char *where, Int_t at) const;
   void Init(Int_t s, Int_t lowerBound);
   Bool_t OutOfBoundsError(const char *where, Int_t i) const;
   Int_t GetAbsLast() const;

public:
   typedef TObjArrayIter Iterator_t;

   TObjArray(Int_t s = TCollection::kInitCapacity, Int_t lowerBound = 0);
   TObjArray(const TObjArray &a);
   virtual ~TObjArray();
   TObjArray& operator=(const TObjArray&);
   virtual void Clear(Option_t *option="");
   virtual void Compress();
   virtual void Delete(Option_t *option="");
   virtual void Expand(Int_t newSize);
   Int_t GetEntries() const;
   Int_t GetEntriesFast() const {
      return GetAbsLast() + 1;
   }
   Int_t GetLast() const;
   TObject **GetObjectRef() const { return fCont; };
   TObject **GetObjectRef(const TObject *obj) const;
   Bool_t IsEmpty() const { return GetAbsLast() == -1; }
   TIterator *MakeIterator(Bool_t dir = kIterForward) const;

   void Add(TObject *obj) { AddLast(obj); }
   virtual void AddFirst(TObject *obj);
   virtual void AddLast(TObject *obj);
   virtual void AddAt(TObject *obj, Int_t idx);
   virtual void AddAtAndExpand(TObject *obj, Int_t idx);
   virtual Int_t AddAtFree(TObject *obj);
   virtual void AddAfter(const TObject *after, TObject *obj);
   virtual void AddBefore(const TObject *before, TObject *obj);
   virtual TObject *FindObject(const char *name) const;
   virtual TObject *FindObject(const TObject *obj) const;
   virtual TObject *RemoveAt(Int_t idx);
   virtual TObject *Remove(TObject *obj);
   virtual void RemoveRange(Int_t idx1, Int_t idx2);
   virtual void RecursiveRemove(TObject *obj);

   TObject *At(Int_t idx) const;
   TObject *UncheckedAt(Int_t i) const { return fCont[i-fLowerBound]; }
   TObject *Before(const TObject *obj) const;
   TObject *After(const TObject *obj) const;
   TObject *First() const;
   TObject *Last() const;
   virtual TObject *&operator[](Int_t i);
   virtual TObject *operator[](Int_t i) const;
   Int_t LowerBound() const { return fLowerBound; }
   Int_t IndexOf(const TObject *obj) const;
   void SetLast(Int_t last);

   virtual void Randomize(Int_t ntimes=1);
   virtual void Sort(Int_t upto = kMaxInt);
   virtual Int_t BinarySearch(TObject *obj, Int_t upto = kMaxInt);

   
# 106 "/home/junho/Downloads/root/include/TObjArray.h"
  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 
# 106 "/home/junho/Downloads/root/include/TObjArray.h" 3
  3
# 106 "/home/junho/Downloads/root/include/TObjArray.h"
  ; } static void Dictionary(); virtual TClass *IsA() const { return 
# 106 "/home/junho/Downloads/root/include/TObjArray.h" 3
  TObjArray
# 106 "/home/junho/Downloads/root/include/TObjArray.h"
  ::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { 
# 106 "/home/junho/Downloads/root/include/TObjArray.h" 3
  TObjArray
# 106 "/home/junho/Downloads/root/include/TObjArray.h"
  ::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TObjArray.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 106; }

# 107 "/home/junho/Downloads/root/include/TObjArray.h" 3
};




#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Weffc++"
# 124 "/home/junho/Downloads/root/include/TObjArray.h" 3
class TObjArrayIter : public TIterator,
                      public std::iterator<std::bidirectional_iterator_tag,
                                           TObject*, std::ptrdiff_t,
                                           const TObject**, const TObject*&> {

private:
   const TObjArray *fArray;
   Int_t fCurCursor;
   Int_t fCursor;
   Bool_t fDirection;

   TObjArrayIter() : fArray(0), fCurCursor(0), fCursor(0), fDirection(kIterForward) { }

public:
   TObjArrayIter(const TObjArray *arr, Bool_t dir = kIterForward);
   TObjArrayIter(const TObjArrayIter &iter);
   ~TObjArrayIter() { }
   TIterator &operator=(const TIterator &rhs);
   TObjArrayIter &operator=(const TObjArrayIter &rhs);

   const TCollection *GetCollection() const { return fArray; }
   TObject *Next();
   void Reset();
   Bool_t operator!=(const TIterator &aIter) const;
   Bool_t operator!=(const TObjArrayIter &aIter) const;
   TObject *operator*() const;

   
# 151 "/home/junho/Downloads/root/include/TObjArray.h"
  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 
# 151 "/home/junho/Downloads/root/include/TObjArray.h" 3
  0
# 151 "/home/junho/Downloads/root/include/TObjArray.h"
  ; } static void Dictionary(); virtual TClass *IsA() const { return 
# 151 "/home/junho/Downloads/root/include/TObjArray.h" 3
  TObjArrayIter
# 151 "/home/junho/Downloads/root/include/TObjArray.h"
  ::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { 
# 151 "/home/junho/Downloads/root/include/TObjArray.h" 3
  TObjArrayIter
# 151 "/home/junho/Downloads/root/include/TObjArray.h"
  ::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TObjArray.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 151; }

# 152 "/home/junho/Downloads/root/include/TObjArray.h" 3
};


#pragma GCC diagnostic pop




inline Bool_t TObjArray::BoundsOk(const char *where, Int_t at) const
{
   return (at < fLowerBound || at-fLowerBound >= fSize)
                  ? OutOfBoundsError(where, at)
                  : kTRUE;
}

inline TObject *TObjArray::At(Int_t i) const
{

   int j = i-fLowerBound;
   if (j >= 0 && j < fSize) return fCont[j];
   BoundsOk("At", i);
   return 0;
}
# 93 "/home/junho/Downloads/root/include/TUnfold.h" 2
# 1 "/home/junho/Downloads/root/include/TString.h" 1
# 94 "/home/junho/Downloads/root/include/TUnfold.h" 2






# 99 "/home/junho/Downloads/root/include/TUnfold.h"
class TUnfold : public TObject {
 private:
   void InitTUnfold(void);
 public:
   enum EConstraint {
      kEConstraintNone =0,
      kEConstraintArea =1
   };
   enum ERegMode {
      kRegModeNone = 0,
      kRegModeSize = 1,
      kRegModeDerivative = 2,
      kRegModeCurvature = 3,
      kRegModeMixed = 4
   };
 protected:
   TMatrixDSparse * fA;
   TMatrixDSparse *fL;
   TMatrixDSparse *fVyy;
   TMatrixD *fY;
   TMatrixD *fX0;
   Double_t fTauSquared;
   Double_t fBiasScale;
   TArrayI fXToHist;
   TArrayI fHistToX;
   TArrayD fSumOverY;
   EConstraint fConstraint;
   ERegMode fRegMode;
 private:
   Int_t fIgnoredBins;
   Double_t fEpsMatrix;
   TMatrixD *fX;
   TMatrixDSparse *fVyyInv;
   TMatrixDSparse *fVxx;
   TMatrixDSparse *fVxxInv;
   TMatrixDSparse *fAx;
   Double_t fChi2A;
   Double_t fLXsquared;
   Double_t fRhoMax;
   Double_t fRhoAvg;
   Int_t fNdf;
   TMatrixDSparse *fDXDAM[2];
   TMatrixDSparse *fDXDAZ[2];
   TMatrixDSparse *fDXDtauSquared;
   TMatrixDSparse *fDXDY;
   TMatrixDSparse *fEinv;
   TMatrixDSparse *fE;
 protected:
   TUnfold(void);

   virtual Double_t DoUnfold(void);
   virtual void ClearResults(void);
   void ClearHistogram(TH1 *h,Double_t x=0.) const;
   virtual TString GetOutputBinName(Int_t iBinX) const;
   TMatrixDSparse *MultiplyMSparseM(const TMatrixDSparse *a,const TMatrixD *b) const;
   TMatrixDSparse *MultiplyMSparseMSparse(const TMatrixDSparse *a,const TMatrixDSparse *b) const;
   TMatrixDSparse *MultiplyMSparseTranspMSparse(const TMatrixDSparse *a,const TMatrixDSparse *b) const;
   TMatrixDSparse *MultiplyMSparseMSparseTranspVector
      (const TMatrixDSparse *m1,const TMatrixDSparse *m2,
       const TMatrixTBase<Double_t> *v) const;
   TMatrixDSparse *InvertMSparseSymmPos(const TMatrixDSparse *A,Int_t *rank) const;
   void AddMSparse(TMatrixDSparse *dest,Double_t f,const TMatrixDSparse *src) const;
   TMatrixDSparse *CreateSparseMatrix(Int_t nrow,Int_t ncol,Int_t nele,Int_t *row,Int_t *col,Double_t *data) const;
   inline Int_t GetNx(void) const {
      return fA->GetNcols();
   }
   inline Int_t GetNy(void) const {
      return fA->GetNrows();
   }
   void ErrorMatrixToHist(TH2 *ematrix,const TMatrixDSparse *emat,const Int_t *binMap,Bool_t doClear) const;
   Double_t GetRhoIFromMatrix(TH1 *rhoi,const TMatrixDSparse *eOrig,const Int_t *binMap,TH2 *invEmat) const;
   inline const TMatrixDSparse *GetDXDY(void) const { return fDXDY; }
   inline const TMatrixDSparse *GetDXDAM(int i) const { return fDXDAM[i]; }
   inline const TMatrixDSparse *GetDXDAZ(int i) const { return fDXDAZ[i]; }
   inline const TMatrixDSparse *GetDXDtauSquared(void) const { return fDXDtauSquared; }
   inline const TMatrixDSparse *GetAx(void) const { return fAx; }
   inline const TMatrixDSparse *GetEinv(void) const { return fEinv; }
   inline const TMatrixDSparse *GetE(void) const { return fE; }
   inline const TMatrixDSparse *GetVxx(void) const { return fVxx; }
   inline const TMatrixDSparse *GetVxxInv(void) const { return fVxxInv; }
   inline const TMatrixDSparse *GetVyyInv(void) const { return fVyyInv; }
   inline const TMatrixD *GetX(void) const { return fX; }
   inline Int_t GetRowFromBin(int ix) const { return fHistToX[ix]; }
   inline Int_t GetBinFromRow(int ix) const { return fXToHist[ix]; }
   static void DeleteMatrix(TMatrixD **m);
   static void DeleteMatrix(TMatrixDSparse **m);
   Bool_t AddRegularisationCondition(Int_t i0,Double_t f0,Int_t i1=-1,Double_t f1=0.,Int_t i2=-1,Double_t f2=0.);
   Bool_t AddRegularisationCondition(Int_t nEle,const Int_t *indices,const Double_t *rowData);
public:
   enum EHistMap {
      kHistMapOutputHoriz = 0,
      kHistMapOutputVert = 1
   };

   TUnfold(const TH2 *hist_A, EHistMap histmap,
           ERegMode regmode = kRegModeSize,
           EConstraint constraint=kEConstraintArea);
   virtual ~TUnfold(void);
   static const char*GetTUnfoldVersion(void);
   void SetBias(const TH1 *bias);
   void SetConstraint(EConstraint constraint);
   Int_t RegularizeSize(int bin, Double_t scale = 1.0);
   Int_t RegularizeDerivative(int left_bin, int right_bin, Double_t scale = 1.0);
   Int_t RegularizeCurvature(int left_bin, int center_bin, int right_bin, Double_t scale_left = 1.0, Double_t scale_right = 1.0);
   Int_t RegularizeBins(int start, int step, int nbin, ERegMode regmode);
   Int_t RegularizeBins2D(int start_bin, int step1, int nbin1, int step2, int nbin2, ERegMode regmode);
   Double_t DoUnfold(Double_t tau,
                     const TH1 *hist_y, Double_t scaleBias=0.0);
   virtual Int_t SetInput(const TH1 *hist_y, Double_t scaleBias=0.0,Double_t oneOverZeroError=0.0,const TH2 *hist_vyy=0,const TH2 *hist_vyy_inv=0);
   virtual Double_t DoUnfold(Double_t tau);
   virtual Int_t ScanLcurve(Int_t nPoint,Double_t tauMin,
                            Double_t tauMax,TGraph **lCurve,
                            TSpline **logTauX=0,TSpline **logTauY=0);
   void GetProbabilityMatrix(TH2 *A,EHistMap histmap) const;
   void GetNormalisationVector(TH1 *s,const Int_t *binMap=0) const;

   void GetOutput(TH1 *output,const Int_t *binMap=0) const;

   void GetBias(TH1 *bias,const Int_t *binMap=0) const;

   void GetFoldedOutput(TH1 *folded,const Int_t *binMap=0) const;

   void GetInput(TH1 *inputData,const Int_t *binMap=0) const;

   void GetRhoIJ(TH2 *rhoij,const Int_t *binMap=0) const;

   void GetEmatrix(TH2 *ematrix,const Int_t *binMap=0) const;

   Double_t GetRhoI(TH1 *rhoi,const Int_t *binMap=0,TH2 *invEmat=0) const;

   void GetLsquared(TH2 *lsquared) const;

   inline Int_t GetNr(void) const { return fL->GetNrows(); }
   void GetL(TH2 *l) const;

   void GetInputInverseEmatrix(TH2 *ematrix);

   Double_t GetTau(void) const;
   inline Double_t GetRhoMax(void) const { return fRhoMax; }
   inline Double_t GetRhoAvg(void) const { return fRhoAvg; }
   inline Double_t GetChi2A(void) const { return fChi2A; }
   Double_t GetChi2L(void) const;
   virtual Double_t GetLcurveX(void) const;
   virtual Double_t GetLcurveY(void) const;
   inline Int_t GetNdf(void) const { return fNdf; }
   Int_t GetNpar(void) const;

   inline Double_t GetEpsMatrix(void) const { return fEpsMatrix; }
   void SetEpsMatrix(Double_t eps);

   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 17; } static void Dictionary(); virtual TClass *IsA() const { return TUnfold::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TUnfold::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/root/include/TUnfold.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 249; }
};
# 17 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldTUnfold.h" 2

class RooUnfoldResponse;
class TH1;
class TH1D;
class TH2D;
class TGraph;
class TSpline;

class RooUnfoldTUnfold : public RooUnfold {

public:

  RooUnfoldTUnfold();
  RooUnfoldTUnfold (const char* name, const char* title);
  RooUnfoldTUnfold (const TString& name, const TString& title);
  RooUnfoldTUnfold (const RooUnfoldTUnfold& rhs);
  virtual ~RooUnfoldTUnfold();
  RooUnfoldTUnfold& operator= (const RooUnfoldTUnfold& rhs);
  virtual RooUnfoldTUnfold* Clone (const char* newname= 0) const;
  RooUnfoldTUnfold (const RooUnfoldResponse* res, const TH1* meas,TUnfold::ERegMode reg=TUnfold::kRegModeDerivative,
                    const char* name= 0, const char* title= 0);
  RooUnfoldTUnfold (const RooUnfoldResponse* res, const TH1* meas,Double_t tau,TUnfold::ERegMode reg=TUnfold::kRegModeDerivative,
                    const char* name= 0, const char* title= 0);

  void Reset();
  TUnfold* Impl();
  void FixTau(Double_t tau);
  void OptimiseTau();
  virtual void SetRegParm(Double_t parm);
  Double_t GetTau() const;
  const TGraph* GetLCurve() const;
  const TSpline* GetLogTauX() const;
  const TSpline* GetLogTauY() const;
  virtual Double_t GetRegParm() const;
  void SetRegMethod (TUnfold::ERegMode regmethod);
  TUnfold::ERegMode GetRegMethod() const;

protected:
  void Init();
  void Destroy();
  virtual void Unfold();
  virtual void GetCov();
  virtual void GetSettings();
  void Assign (const RooUnfoldTUnfold& rhs);
  void CopyData (const RooUnfoldTUnfold& rhs);

private:
  TUnfold::ERegMode _reg_method;
  TUnfold* _unf;
  Bool_t tau_set;
  Double_t _tau;
  TSpline* _logTauX;
  TSpline* _logTauY;
  TGraph* _lCurve;

public:

  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldTUnfold::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldTUnfold::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldTUnfold.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 74; }
};



inline
RooUnfoldTUnfold::RooUnfoldTUnfold()
: RooUnfold()
{

  Init();
}

inline
RooUnfoldTUnfold::RooUnfoldTUnfold (const char* name, const char* title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldTUnfold::RooUnfoldTUnfold (const TString& name, const TString& title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldTUnfold& RooUnfoldTUnfold::operator= (const RooUnfoldTUnfold& rhs)
{

  Assign(rhs);
  return *this;
}

inline
RooUnfoldTUnfold::~RooUnfoldTUnfold()
{
  Destroy();
}


inline
void RooUnfoldTUnfold::SetRegParm(Double_t parm)
{

  FixTau(parm);
}

inline
Double_t RooUnfoldTUnfold::GetTau() const
{

  return _tau;
}

inline
Double_t RooUnfoldTUnfold::GetRegParm() const
{

  return _tau;
}

inline
TUnfold::ERegMode RooUnfoldTUnfold::GetRegMethod() const
{
  return _reg_method;
}
# 7 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldInvert.h" 1
# 19 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldInvert.h"
class RooUnfoldResponse;
class TH1;
class TH1D;
class TH2D;
class TDecompSVD;

class RooUnfoldInvert : public RooUnfold {

public:
  RooUnfoldInvert();
  RooUnfoldInvert (const char* name, const char* title);
  RooUnfoldInvert (const TString& name, const TString& title);
  RooUnfoldInvert (const RooUnfoldInvert& rhs);
  virtual ~RooUnfoldInvert();
  RooUnfoldInvert& operator= (const RooUnfoldInvert& rhs);
  virtual RooUnfoldInvert* Clone (const char* newname= 0) const;
  RooUnfoldInvert (const RooUnfoldResponse* res, const TH1* meas, const char* name=0, const char* title=0);

  virtual void Reset();
  TDecompSVD* Impl();

protected:
  virtual void Unfold();
  virtual void GetCov();
  virtual void GetSettings();

private:
  void Init();
  Bool_t InvertResponse();

protected:

  TDecompSVD* _svd;
  TMatrixD* _resinv;

public:
  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldInvert::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldInvert::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldInvert.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 55; }
};



inline
RooUnfoldInvert::RooUnfoldInvert()
  : RooUnfold()
{

  Init();
}

inline
RooUnfoldInvert::RooUnfoldInvert (const char* name, const char* title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldInvert::RooUnfoldInvert (const TString& name, const TString& title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldInvert& RooUnfoldInvert::operator= (const RooUnfoldInvert& rhs)
{

  Assign(rhs);
  return *this;
}
# 8 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldErrors.h" 1
# 17 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldErrors.h"
class TH1;
class RooUnfold;
class TNtuple;

class RooUnfoldErrors : public TNamed {

public:

  int toys;
  RooUnfold* unfold;
  const TH1* hTrue;
  RooUnfoldErrors (int NToys,RooUnfold* unfold,const TH1* Truth=0);
  virtual ~RooUnfoldErrors();
  TNtuple* Chi2();

  TH1* RMSResiduals();
  TH1* UnfoldingError();

private:
  void CreatePlots();
  void CreatePlotsWithChi2();
  TH1* h_err;
  TH1* h_err_res;
  TNtuple* hchi2;
  void GraphParameters();
  double xlo;
  double xhi;
  int ntx;

public:

  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldErrors::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldErrors::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldErrors.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 48; }
};
# 9 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldBayes.h" 1
# 20 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldBayes.h"
class TH1;
class TH2;
class RooUnfoldResponse;

class RooUnfoldBayes : public RooUnfold {

public:



  RooUnfoldBayes();
  RooUnfoldBayes (const char* name, const char* title);
  RooUnfoldBayes (const TString& name, const TString& title);
  RooUnfoldBayes (const RooUnfoldBayes& rhs);
  RooUnfoldBayes& operator= (const RooUnfoldBayes& rhs);
  virtual RooUnfoldBayes* Clone (const char* newname= 0) const;



  RooUnfoldBayes (const RooUnfoldResponse* res, const TH1* meas, Int_t niter= 4, Bool_t smoothit= false,
                  const char* name= 0, const char* title= 0);

  void SetIterations (Int_t niter= 4);
  void SetSmoothing (Bool_t smoothit= false);
  Int_t GetIterations() const;
  Int_t GetSmoothing() const;
  const TMatrixD& UnfoldingMatrix() const;

  virtual void SetRegParm (Double_t parm);
  virtual Double_t GetRegParm() const;
  virtual void Reset();
  virtual void Print (Option_t* option= "") const;

  static TMatrixD& H2M (const TH2* h, TMatrixD& m, Bool_t overflow);

protected:
  void Assign (const RooUnfoldBayes& rhs);
  virtual void Unfold();
  virtual void GetCov();
  virtual void GetSettings();

  void setup();
  void unfold();
  void getCovariance();

  void smooth(TVectorD& PbarCi) const;
  Double_t getChi2(const TVectorD& prob1,
                   const TVectorD& prob2,
                   Double_t nevents) const;

private:
  void Init();
  void CopyData (const RooUnfoldBayes& rhs);

protected:

  Int_t _niter;
  Int_t _smoothit;

  Int_t _nc;
  Int_t _ne;
  Double_t _N0C;
  Double_t _nbartrue;

  TVectorD _nEstj;
  TVectorD _nCi;
  TVectorD _nbarCi;
  TVectorD _efficiencyCi;
  TVectorD _P0C;
  TVectorD _UjInv;

  TMatrixD _Nji;
  TMatrixD _Mij;
  TMatrixD _Vij;
  TMatrixD _VnEstij;
  TMatrixD _dnCidnEj;
  TMatrixD _dnCidPjk;

public:
  private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldBayes::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldBayes::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldBayes.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 99; }
};



inline
RooUnfoldBayes::RooUnfoldBayes()
  : RooUnfold()
{

  Init();
}

inline
RooUnfoldBayes::RooUnfoldBayes (const char* name, const char* title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldBayes::RooUnfoldBayes (const TString& name, const TString& title)
  : RooUnfold(name,title)
{

  Init();
}

inline
RooUnfoldBayes& RooUnfoldBayes::operator= (const RooUnfoldBayes& rhs)
{

  Assign(rhs);
  return *this;
}


inline
void RooUnfoldBayes::SetIterations (Int_t niter)
{

  _niter= niter;
}

inline
void RooUnfoldBayes::SetSmoothing (Bool_t smoothit)
{

  _smoothit= smoothit;
}

inline
Int_t RooUnfoldBayes::GetIterations() const
{

  return _niter;
}

inline
Int_t RooUnfoldBayes::GetSmoothing() const
{

  return _smoothit;
}

inline
const TMatrixD& RooUnfoldBayes::UnfoldingMatrix() const
{

  return _Mij;
}

inline
void RooUnfoldBayes::SetRegParm (Double_t parm)
{

  SetIterations(Int_t(parm+0.5));
}

inline
Double_t RooUnfoldBayes::GetRegParm() const
{

  return GetIterations();
}
# 10 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/TSVDUnfold_local.h" 1
# 55 "/home/junho/Downloads/roounflod_trunk/src/TSVDUnfold_local.h"
class TH1D;
class TH2D;

class TSVDUnfold_130729 : public TObject {

public:
# 69 "/home/junho/Downloads/roounflod_trunk/src/TSVDUnfold_local.h"
   TSVDUnfold_130729( const TH1D* bdat, const TH1D* bini, const TH1D* xini, const TH2D* Adet );
   TSVDUnfold_130729( const TH1D* bdat, TH2D* Bcov, const TH1D* bini, const TH1D* xini, const TH2D* Adet );
   TSVDUnfold_130729( const TSVDUnfold_130729& other );


   virtual ~TSVDUnfold_130729();



   void SetNormalize ( Bool_t normalize ) { fNormalize = normalize; }



   TH1D* Unfold ( Int_t kreg );






   TH2D* GetUnfoldCovMatrix( const TH2D* cov, Int_t ntoys, Int_t seed = 1 );






   TH2D* GetAdetCovMatrix( Int_t ntoys, Int_t seed=1, const TH2D* uncmat=0 );


   Int_t GetKReg() const { return fKReg; }


   TH1D* GetD() const;


   TH1D* GetSV() const;


   TH2D* GetXtau() const;


   TH2D* GetXinv() const;


   TH2D* GetBCov() const;


   Double_t ComputeChiSquared( const TH1D& truspec, const TH1D& unfspec );

private:


   void FillCurvatureMatrix( TMatrixD& tCurv, TMatrixD& tC ) const;
   static Double_t GetCurvature ( const TVectorD& vec, const TMatrixD& curv );

   void InitHistos ( );


   static void H2V ( const TH1D* histo, TVectorD& vec );
   static void H2Verr ( const TH1D* histo, TVectorD& vec );
   static void V2H ( const TVectorD& vec, TH1D& histo );
   static void H2M ( const TH2D* histo, TMatrixD& mat );
   static void M2H ( const TMatrixD& mat, TH2D& histo );
   static TMatrixD MatDivVec( const TMatrixD& mat, const TVectorD& vec, Int_t zero=0 );
   static TVectorD CompProd ( const TVectorD& vec1, const TVectorD& vec2 );

   static TVectorD VecDiv ( const TVectorD& vec1, const TVectorD& vec2, Int_t zero = 0 );
   static void RegularisedSymMatInvert( TMatrixDSym& mat, Double_t eps = 1e-3 );


   Int_t fNdim;
   Int_t fDdim;
   Bool_t fNormalize;
   Int_t fKReg;
   TH1D* fDHist;
   TH1D* fSVHist;
   TH2D* fXtau;
   TH2D* fXinv;


   const TH1D* fBdat;
   TH2D* fBcov;
   const TH1D* fBini;
   const TH1D* fXini;
   const TH2D* fAdet;


   TH1D* fToyhisto;
   TH2D* fToymat;
   Bool_t fToyMode;
   Bool_t fMatToyMode;


   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 0; } static void Dictionary(); virtual TClass *IsA() const { return TSVDUnfold_130729::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { TSVDUnfold_130729::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/TSVDUnfold_local.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 163; }
};
# 11 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfold.h" 1
# 12 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldResponse.h" 1
# 13 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldIds.h" 1
# 12 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldIds.h"
class RooUnfoldResponse;
class TH1;
class TH1D;
class TH2D;
class TRandom3;

class RooUnfoldIds : public RooUnfold {

public:
   RooUnfoldIds();
   RooUnfoldIds(const char *name, const char *title);
   RooUnfoldIds(const TString &name, const TString &title);
   RooUnfoldIds(const RooUnfoldIds &rhs);
   virtual ~RooUnfoldIds();
   RooUnfoldIds &operator=(const RooUnfoldIds &rhs);
   virtual RooUnfoldIds* Clone(const char *newname = 
# 27 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldIds.h" 3 4
                                                    __null
# 27 "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldIds.h"
                                                        ) const;



   RooUnfoldIds(const RooUnfoldResponse *res, const TH1 *meas, Int_t niter = 1);


   virtual void SetRegParm (Double_t parm);
   virtual Double_t GetRegParm() const;

   void SetNIter(Int_t niter);
   Int_t GetNIter() const;

   void SetLambdaM(Double_t lambdaM);
   Double_t GetLambdaM() const;

   void SetLambdaU(Double_t lambdaU);
   Double_t GetLambdaU() const;

   void SetLambdaL(Double_t lambdaL);
   Double_t GetLambdaL() const;

   void SetLambdaS(Double_t lambdaS);
   Double_t GetLambdaS() const;

   virtual void Reset();

   TH2D* GetUnfoldCovMatrix(const TH2D *cov, Int_t ntoys, Int_t seed = 1);
   TH2D* GetAdetCovMatrix(Int_t ntoys, Int_t seed = 1);

protected:
   void Assign(const RooUnfoldIds &rhs);
   virtual void Unfold();
   virtual void GetCov();
   virtual void GetSettings();

private:
   void Init();
   void Destroy();
   void CopyData(const RooUnfoldIds &rhs);

   TH1* GetIDSUnfoldedSpectrum(const TH1 *h_RecoMC, const TH1 *h_TruthMC, const TH2 *h_2DSmear, const TH1 *h_RecoData, Int_t iter);
   Double_t Probability(Double_t deviation, Double_t sigma, Double_t lambda);
   Double_t MCnormalizationCoeff(const TVectorD *vd, const TVectorD *errvd, const TVectorD *vRecmc, const Int_t dim, const Double_t estNknownd, const Double_t Nmc, const Double_t lambda, const TVectorD *soustr_ );
   Double_t MCnormalizationCoeffIter(const TVectorD *vd, const TVectorD *errvd, const TVectorD *vRecmc, const Int_t dim, const Double_t estNknownd, const Double_t Nmc, const TVectorD *soustr_, Double_t lambdaN = 0., Int_t NiterMax = 5, Int_t messAct = 1);
   void IdsUnfold(const TVectorD &b, const TVectorD &errb, const TMatrixD &A, const Int_t dim, const Double_t lambda, TVectorD *soustr_, TVectorD *unf);
   void ComputeSoustrTrue(const TMatrixD *A, const TVectorD *unfres, const TVectorD *unfresErr, Int_t N, TVectorD *soustr_, Double_t lambdaS);
   void ModifyMatrix(TMatrixD *Am, const TMatrixD *A, const TVectorD *unfres, const TVectorD *unfresErr, Int_t N, const Double_t lambdaM_, TVectorD *soustr_, const Double_t lambdaS_);
   void PerformIterations(const TVectorD &data, const TVectorD &dataErr, const TMatrixD &A_, const Int_t &N_, Double_t lambdaL_, Int_t NstepsOptMin_, Double_t lambdaU_, Double_t lambdaM_, Double_t lambdaS_, TVectorD* unfres1IDS_, TVectorD* unfres2IDS_);
   TMatrixD* GetSqrtMatrix(const TMatrixD& covMat);
   void GenGaussRnd(TArrayD& v, const TMatrixD& sqrtMat, TRandom3& R);

protected:
   Int_t _niter;
   Int_t _nb;

   Double_t _lambdaL;
   Double_t _lambdaUmin;
   Double_t _lambdaMmin;
   Double_t _lambdaS;

   TH1D *_meas1d, *_train1d, *_truth1d;
   TH2D *_reshist;

public:
   private: static atomic_TClass_ptr fgIsA; public: static TClass *Class(); static const char *Class_Name(); static Version_t Class_Version() { return 1; } static void Dictionary(); virtual TClass *IsA() const { return RooUnfoldIds::Class(); } virtual void ShowMembers(TMemberInspector&); virtual void Streamer(TBuffer&); void StreamerNVirtual(TBuffer&ClassDef_StreamerNVirtual_b) { RooUnfoldIds::Streamer(ClassDef_StreamerNVirtual_b); } static const char *DeclFileName() { return "/home/junho/Downloads/roounflod_trunk/src/RooUnfoldIds.h"; } static int ImplFileLine(); static const char *ImplFileName(); static int DeclFileLine() { return 92; }
};



inline
RooUnfoldIds::RooUnfoldIds()
: RooUnfold()
{

   Init();
}

inline
RooUnfoldIds::RooUnfoldIds(const char *name, const char *title)
: RooUnfold(name, title)
{

   Init();
}

inline
RooUnfoldIds::RooUnfoldIds(const TString &name, const TString &title)
: RooUnfold(name, title)
{

   Init();
}

inline
RooUnfoldIds& RooUnfoldIds::operator=(const RooUnfoldIds &rhs)
{

   Assign(rhs);
   return *this;
}

inline
RooUnfoldIds::~RooUnfoldIds()
{
   Destroy();
}

inline
void RooUnfoldIds::SetRegParm (Double_t parm)
{

  SetNIter(Int_t(parm+0.5));
}

inline
Double_t RooUnfoldIds::GetRegParm() const
{

  return GetNIter();
}

inline
void RooUnfoldIds::SetNIter(Int_t niter)
{

   _niter = niter;
}

inline
Int_t RooUnfoldIds::GetNIter() const
{

   return _niter;
}

inline
void RooUnfoldIds::SetLambdaM(Double_t lambdaM)
{

   _lambdaMmin = lambdaM;
}

inline
Double_t RooUnfoldIds::GetLambdaM() const
{

   return _lambdaMmin;
}

inline
void RooUnfoldIds::SetLambdaU(Double_t lambdaU)
{

   _lambdaUmin = lambdaU;
}

inline
Double_t RooUnfoldIds::GetLambdaU() const
{

   return _lambdaUmin;
}

inline
void RooUnfoldIds::SetLambdaL(Double_t lambdaL)
{

   _lambdaL = lambdaL;
}

inline
Double_t RooUnfoldIds::GetLambdaL() const
{

   return _lambdaL;
}

inline
void RooUnfoldIds::SetLambdaS(Double_t lambdaS)
{

   _lambdaS = lambdaS;
}

inline
Double_t RooUnfoldIds::GetLambdaS() const
{

   return _lambdaS;
}
# 14 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
# 1 "/home/junho/Downloads/roounflod_trunk/src/RooUnfold_LinkDef.h" 1


#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class RooUnfold-;
#pragma link C++ class RooUnfoldBayes+;
#pragma link C++ class RooUnfoldSvd-;
#pragma link C++ class RooUnfoldBinByBin+;
#pragma link C++ class RooUnfoldResponse-;
#pragma link C++ class RooUnfoldErrors+;
#pragma link C++ class RooUnfoldParms+;
#pragma link C++ class RooUnfoldInvert+;

#pragma link C++ class RooUnfoldTUnfold+;




#pragma link C++ class RooUnfoldIds-;

#pragma link C++ class TSVDUnfold_130729+;
# 14 "/home/junho/Downloads/roounflod_trunk/tmp/linuxx8664gcc/RooUnfoldMap_LinkDef.cxx" 2
