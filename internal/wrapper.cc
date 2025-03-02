/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 4.0.2
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */

// source: internal/sat.i

#define SWIGMODULE internal
#define SWIG_DIRECTORS

#ifdef __cplusplus
/* SwigValueWrapper is described in swig.swg */
template<typename T> class SwigValueWrapper {
  struct SwigMovePointer {
    T *ptr;
    SwigMovePointer(T *p) : ptr(p) { }
    ~SwigMovePointer() { delete ptr; }
    SwigMovePointer& operator=(SwigMovePointer& rhs) { T* oldptr = ptr; ptr = 0; delete oldptr; ptr = rhs.ptr; rhs.ptr = 0; return *this; }
  } pointer;
  SwigValueWrapper& operator=(const SwigValueWrapper<T>& rhs);
  SwigValueWrapper(const SwigValueWrapper<T>& rhs);
public:
  SwigValueWrapper() : pointer(0) { }
  SwigValueWrapper& operator=(const T& t) { SwigMovePointer tmp(new T(t)); pointer = tmp; return *this; }
  operator T&() const { return *pointer.ptr; }
  T *operator&() { return pointer.ptr; }
};

template <typename T> T SwigValueInit() {
  return T();
}
#endif

/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if defined(__GNUC__)
#  if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#    ifndef GCC_HASCLASSVISIBILITY
#      define GCC_HASCLASSVISIBILITY
#    endif
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>



typedef long long intgo;
typedef unsigned long long uintgo;


# if !defined(__clang__) && (defined(__i386__) || defined(__x86_64__))
#   define SWIGSTRUCTPACKED __attribute__((__packed__, __gcc_struct__))
# else
#   define SWIGSTRUCTPACKED __attribute__((__packed__))
# endif



typedef struct { char *p; intgo n; } _gostring_;
typedef struct { void* array; intgo len; intgo cap; } _goslice_;




#define swiggo_size_assert_eq(x, y, name) typedef char name[(x-y)*(x-y)*-2+1];
#define swiggo_size_assert(t, n) swiggo_size_assert_eq(sizeof(t), n, swiggo_sizeof_##t##_is_not_##n)

swiggo_size_assert(char, 1)
swiggo_size_assert(short, 2)
swiggo_size_assert(int, 4)
typedef long long swiggo_long_long;
swiggo_size_assert(swiggo_long_long, 8)
swiggo_size_assert(float, 4)
swiggo_size_assert(double, 8)

#ifdef __cplusplus
extern "C" {
#endif
extern void crosscall2(void (*fn)(void *, int), void *, int);
extern char* _cgo_topofstack(void) __attribute__ ((weak));
extern void _cgo_allocate(void *, int);
extern void _cgo_panic(void *, int);
#ifdef __cplusplus
}
#endif

static char *_swig_topofstack() {
  if (_cgo_topofstack) {
    return _cgo_topofstack();
  } else {
    return 0;
  }
}

static void _swig_gopanic(const char *p) {
  struct {
    const char *p;
  } SWIGSTRUCTPACKED a;
  a.p = p;
  crosscall2(_cgo_panic, &a, (int) sizeof a);
}




#define SWIG_contract_assert(expr, msg) \
  if (!(expr)) { _swig_gopanic(msg); } else


static _gostring_ Swig_AllocateString(const char *p, size_t l) {
  _gostring_ ret;
  ret.p = (char*)malloc(l);
  memcpy(ret.p, p, l);
  ret.n = l;
  return ret;
}

/* -----------------------------------------------------------------------------
 * director_common.swg
 *
 * This file contains support for director classes which is common between
 * languages.
 * ----------------------------------------------------------------------------- */

/*
  Use -DSWIG_DIRECTOR_STATIC if you prefer to avoid the use of the
  'Swig' namespace. This could be useful for multi-modules projects.
*/
#ifdef SWIG_DIRECTOR_STATIC
/* Force anonymous (static) namespace */
#define Swig
#endif
/* -----------------------------------------------------------------------------
 * director.swg
 *
 * This file contains support for director classes so that Go proxy
 * methods can be called from C++.
 * ----------------------------------------------------------------------------- */

#include <exception>
#include <map>

namespace Swig {

  class DirectorException : public std::exception {
  };
}

/* Handle memory management for directors.  */

namespace {
  struct GCItem {
    virtual ~GCItem() {}
  };

  struct GCItem_var {
    GCItem_var(GCItem *item = 0) : _item(item) {
    }

    GCItem_var& operator=(GCItem *item) {
      GCItem *tmp = _item;
      _item = item;
      delete tmp;
      return *this;
    }

    ~GCItem_var() {
      delete _item;
    }

    GCItem* operator->() {
      return _item;
    }

    private:
      GCItem *_item;
  };

  template <typename Type>
  struct GCItem_T : GCItem {
    GCItem_T(Type *ptr) : _ptr(ptr) {
    }

    virtual ~GCItem_T() {
      delete _ptr;
    }

  private:
    Type *_ptr;
  };
}

class Swig_memory {
public:
  template <typename Type>
  void swig_acquire_pointer(Type* vptr) {
    if (vptr) {
      swig_owner[vptr] = new GCItem_T<Type>(vptr);
    }
  }
private:
  typedef std::map<void *, GCItem_var> swig_ownership_map;
  swig_ownership_map swig_owner;
};

template <typename Type>
static void swig_acquire_pointer(Swig_memory** pmem, Type* ptr) {
  if (!pmem) {
    *pmem = new Swig_memory;
  }
  (*pmem)->swig_acquire_pointer(ptr);
}

static void Swig_free(void* p) {
  free(p);
}

static void* Swig_malloc(int c) {
  return malloc(c);
}


#include <stdint.h>		// Use the C99 official header


#include <cstdint>
#include <string>
#include <vector>

#include "ortools/base/basictypes.h"


#include <string>


#include <vector>
#include "ortools/base/integral_types.h"


_goslice_ arrayIntToSlice(const int (&arr)[], size_t count) {
    _goslice_ slice;
    int *go_arr = (int*)malloc(sizeof(int[count]));
    slice.array = go_arr;
    slice.len = slice.cap = count;

    for (int i = 0; i < count; i++) {
        go_arr[i] = arr[i];
    }

    return slice;
}


std::vector<  int  > intSliceToVector (_goslice_ slice) {
    std::vector<  int  > v;
    for (int i = 0; i < slice.len; i++) {
         int  a = ((  int *  )slice.array)[i];
        v.push_back(a);
    }
    return v;
}

_goslice_ vectorTointSlice (const std::vector<  int  >& arr) {
    _goslice_ slice;
    size_t count = arr.size();
     int *  go_arr = (  int *  )malloc(sizeof(  int ) * count);
    slice.array = go_arr;
    slice.len = slice.cap = count;

    for (int i = 0; i < count; i++) {
        go_arr[i] = arr[i];
    }

    return slice;
}


std::vector<  int64_t  > int64_tSliceToVector (_goslice_ slice) {
    std::vector<  int64_t  > v;
    for (int i = 0; i < slice.len; i++) {
         int64_t  a = ((  int64_t *  )slice.array)[i];
        v.push_back(a);
    }
    return v;
}

_goslice_ vectorToint64_tSlice (const std::vector<  int64_t  >& arr) {
    _goslice_ slice;
    size_t count = arr.size();
     int64_t *  go_arr = (  int64_t *  )malloc(sizeof(  int64_t ) * count);
    slice.array = go_arr;
    slice.len = slice.cap = count;

    for (int i = 0; i < count; i++) {
        go_arr[i] = arr[i];
    }

    return slice;
}


#include <vector>
#include "ortools/base/integral_types.h"


#include "ortools/sat/cp_model.pb.h"
#include "ortools/sat/sat_parameters.pb.h"
#include "ortools/sat/swig_helper.h"
#include "ortools/util/sorted_interval_list.h"


// C++ director class methods.
#include "wrapper.h"

SwigDirector_SolutionCallback::SwigDirector_SolutionCallback(int swig_p)
    : operations_research::sat::SolutionCallback(),
      go_val(swig_p), swig_mem(0)
{ }

extern "C" void Swiggo_DeleteDirector_SolutionCallback_internal_77b2cf2003da077d(intgo);
SwigDirector_SolutionCallback::~SwigDirector_SolutionCallback()
{
  Swiggo_DeleteDirector_SolutionCallback_internal_77b2cf2003da077d(go_val);
  delete swig_mem;
}

extern "C" void Swig_DirectorSolutionCallback_callback_OnSolutionCallback_internal_77b2cf2003da077d(int);
void SwigDirector_SolutionCallback::OnSolutionCallback() const {
  Swig_DirectorSolutionCallback_callback_OnSolutionCallback_internal_77b2cf2003da077d(go_val);
}

#ifdef __cplusplus
extern "C" {
#endif

void _wrap_Swig_free_internal_77b2cf2003da077d(void *_swig_go_0) {
  void *arg1 = (void *) 0 ;
  
  arg1 = *(void **)&_swig_go_0; 
  
  Swig_free(arg1);
  
}


void *_wrap_Swig_malloc_internal_77b2cf2003da077d(intgo _swig_go_0) {
  int arg1 ;
  void *result = 0 ;
  void *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = (void *)Swig_malloc(arg1);
  *(void **)&_swig_go_result = (void *)result; 
  return _swig_go_result;
}


operations_research::sat::SolutionCallback *_wrap__swig_NewDirectorSolutionCallbackSolutionCallback_internal_77b2cf2003da077d(intgo _swig_go_0) {
  int arg1 ;
  operations_research::sat::SolutionCallback *result = 0 ;
  operations_research::sat::SolutionCallback *_swig_go_result;
  
  arg1 = (int)_swig_go_0; 
  
  result = new SwigDirector_SolutionCallback(arg1);
  *(operations_research::sat::SolutionCallback **)&_swig_go_result = (operations_research::sat::SolutionCallback *)result; 
  return _swig_go_result;
}


void _wrap_DeleteDirectorSolutionCallback_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  delete arg1;
  
}


void _wrap_delete_SolutionCallback_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  delete arg1;
  
}


void _wrap_SolutionCallback_OnSolutionCallback_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  ((operations_research::sat::SolutionCallback const *)arg1)->OnSolutionCallback();
  
}


long long _wrap_SolutionCallback_NumBooleans_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  int64 result;
  long long _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (int64)((operations_research::sat::SolutionCallback const *)arg1)->NumBooleans();
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_SolutionCallback_NumBranches_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  int64 result;
  long long _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (int64)((operations_research::sat::SolutionCallback const *)arg1)->NumBranches();
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_SolutionCallback_NumConflicts_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  int64 result;
  long long _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (int64)((operations_research::sat::SolutionCallback const *)arg1)->NumConflicts();
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_SolutionCallback_NumBinaryPropagations_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  int64 result;
  long long _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (int64)((operations_research::sat::SolutionCallback const *)arg1)->NumBinaryPropagations();
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_SolutionCallback_NumIntegerPropagations_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  int64 result;
  long long _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (int64)((operations_research::sat::SolutionCallback const *)arg1)->NumIntegerPropagations();
  _swig_go_result = result; 
  return _swig_go_result;
}


double _wrap_SolutionCallback_WallTime_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (double)((operations_research::sat::SolutionCallback const *)arg1)->WallTime();
  _swig_go_result = result; 
  return _swig_go_result;
}


double _wrap_SolutionCallback_UserTime_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (double)((operations_research::sat::SolutionCallback const *)arg1)->UserTime();
  _swig_go_result = result; 
  return _swig_go_result;
}


double _wrap_SolutionCallback_ObjectiveValue_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (double)((operations_research::sat::SolutionCallback const *)arg1)->ObjectiveValue();
  _swig_go_result = result; 
  return _swig_go_result;
}


double _wrap_SolutionCallback_BestObjectiveBound_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  double result;
  double _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (double)((operations_research::sat::SolutionCallback const *)arg1)->BestObjectiveBound();
  _swig_go_result = result; 
  return _swig_go_result;
}


long long _wrap_SolutionCallback_SolutionIntegerValue_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0, intgo _swig_go_1) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  int arg2 ;
  int64 result;
  long long _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  result = (int64)(arg1)->SolutionIntegerValue(arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


bool _wrap_SolutionCallback_SolutionBooleanValue_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0, intgo _swig_go_1) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  int arg2 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  arg2 = (int)_swig_go_1; 
  
  result = (bool)(arg1)->SolutionBooleanValue(arg2);
  _swig_go_result = result; 
  return _swig_go_result;
}


void _wrap_SolutionCallback_StopSearch_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  (arg1)->StopSearch();
  
}


_goslice_ _wrap_SolutionCallback_Response_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  operations_research::sat::CpSolverResponse result;
  _goslice_ _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = ((operations_research::sat::SolutionCallback const *)arg1)->Response();
  {
    uint8_t *go_arr = (uint8_t*)malloc((&result)->ByteSizeLong());
    (&result)->SerializeToArray(go_arr, (&result)->ByteSizeLong());
    
    _goslice_ slice;
    slice.array = go_arr;
    slice.len = slice.cap = (&result)->ByteSizeLong();
    _swig_go_result = slice;
  }
  return _swig_go_result;
}


bool _wrap_SolutionCallback_HasResponse_internal_77b2cf2003da077d(operations_research::sat::SolutionCallback *_swig_go_0) {
  operations_research::sat::SolutionCallback *arg1 = (operations_research::sat::SolutionCallback *) 0 ;
  bool result;
  bool _swig_go_result;
  
  arg1 = *(operations_research::sat::SolutionCallback **)&_swig_go_0; 
  
  result = (bool)((operations_research::sat::SolutionCallback const *)arg1)->HasResponse();
  _swig_go_result = result; 
  return _swig_go_result;
}


_goslice_ _wrap_SatHelper_Solve_internal_77b2cf2003da077d(_goslice_ _swig_go_0) {
  operations_research::sat::CpModelProto *arg1 = 0 ;
  operations_research::sat::CpModelProto temp1 ;
  operations_research::sat::CpSolverResponse result;
  _goslice_ _swig_go_result;
  
  {
    // c
    bool parsed_ok = temp1.ParseFromArray(_swig_go_0.array, _swig_go_0.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::CpModelProto protocol message.");
    }
    arg1 = &temp1;
  }
  
  result = operations_research::sat::SatHelper::Solve((operations_research::sat::CpModelProto const &)*arg1);
  {
    uint8_t *go_arr = (uint8_t*)malloc((&result)->ByteSizeLong());
    (&result)->SerializeToArray(go_arr, (&result)->ByteSizeLong());
    
    _goslice_ slice;
    slice.array = go_arr;
    slice.len = slice.cap = (&result)->ByteSizeLong();
    _swig_go_result = slice;
  }
  return _swig_go_result;
}


_goslice_ _wrap_SatHelper_SolveWithParameters_internal_77b2cf2003da077d(_goslice_ _swig_go_0, _goslice_ _swig_go_1) {
  operations_research::sat::CpModelProto *arg1 = 0 ;
  operations_research::sat::SatParameters *arg2 = 0 ;
  operations_research::sat::CpModelProto temp1 ;
  operations_research::sat::SatParameters temp2 ;
  operations_research::sat::CpSolverResponse result;
  _goslice_ _swig_go_result;
  
  {
    // c
    bool parsed_ok = temp1.ParseFromArray(_swig_go_0.array, _swig_go_0.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::CpModelProto protocol message.");
    }
    arg1 = &temp1;
  }
  {
    // c
    bool parsed_ok = temp2.ParseFromArray(_swig_go_1.array, _swig_go_1.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::SatParameters protocol message.");
    }
    arg2 = &temp2;
  }
  
  result = operations_research::sat::SatHelper::SolveWithParameters((operations_research::sat::CpModelProto const &)*arg1,(operations_research::sat::SatParameters const &)*arg2);
  {
    uint8_t *go_arr = (uint8_t*)malloc((&result)->ByteSizeLong());
    (&result)->SerializeToArray(go_arr, (&result)->ByteSizeLong());
    
    _goslice_ slice;
    slice.array = go_arr;
    slice.len = slice.cap = (&result)->ByteSizeLong();
    _swig_go_result = slice;
  }
  return _swig_go_result;
}


_goslice_ _wrap_SatHelper_SolveWithParametersAndSolutionCallback_internal_77b2cf2003da077d(_goslice_ _swig_go_0, _goslice_ _swig_go_1, operations_research::sat::SolutionCallback *_swig_go_2) {
  operations_research::sat::CpModelProto *arg1 = 0 ;
  operations_research::sat::SatParameters *arg2 = 0 ;
  operations_research::sat::SolutionCallback *arg3 = 0 ;
  operations_research::sat::CpModelProto temp1 ;
  operations_research::sat::SatParameters temp2 ;
  operations_research::sat::CpSolverResponse result;
  _goslice_ _swig_go_result;
  
  {
    // c
    bool parsed_ok = temp1.ParseFromArray(_swig_go_0.array, _swig_go_0.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::CpModelProto protocol message.");
    }
    arg1 = &temp1;
  }
  {
    // c
    bool parsed_ok = temp2.ParseFromArray(_swig_go_1.array, _swig_go_1.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::SatParameters protocol message.");
    }
    arg2 = &temp2;
  }
  arg3 = *(operations_research::sat::SolutionCallback **)&_swig_go_2; 
  
  result = operations_research::sat::SatHelper::SolveWithParametersAndSolutionCallback((operations_research::sat::CpModelProto const &)*arg1,(operations_research::sat::SatParameters const &)*arg2,(operations_research::sat::SolutionCallback const &)*arg3);
  {
    uint8_t *go_arr = (uint8_t*)malloc((&result)->ByteSizeLong());
    (&result)->SerializeToArray(go_arr, (&result)->ByteSizeLong());
    
    _goslice_ slice;
    slice.array = go_arr;
    slice.len = slice.cap = (&result)->ByteSizeLong();
    _swig_go_result = slice;
  }
  return _swig_go_result;
}


_gostring_ _wrap_SatHelper_ModelStats_internal_77b2cf2003da077d(_goslice_ _swig_go_0) {
  operations_research::sat::CpModelProto *arg1 = 0 ;
  operations_research::sat::CpModelProto temp1 ;
  std::string result;
  _gostring_ _swig_go_result;
  
  {
    // c
    bool parsed_ok = temp1.ParseFromArray(_swig_go_0.array, _swig_go_0.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::CpModelProto protocol message.");
    }
    arg1 = &temp1;
  }
  
  result = operations_research::sat::SatHelper::ModelStats((operations_research::sat::CpModelProto const &)*arg1);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_SatHelper_SolverResponseStats_internal_77b2cf2003da077d(_goslice_ _swig_go_0) {
  operations_research::sat::CpSolverResponse *arg1 = 0 ;
  operations_research::sat::CpSolverResponse temp1 ;
  std::string result;
  _gostring_ _swig_go_result;
  
  {
    // c
    bool parsed_ok = temp1.ParseFromArray(_swig_go_0.array, _swig_go_0.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::CpSolverResponse protocol message.");
    }
    arg1 = &temp1;
  }
  
  result = operations_research::sat::SatHelper::SolverResponseStats((operations_research::sat::CpSolverResponse const &)*arg1);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


_gostring_ _wrap_SatHelper_ValidateModel_internal_77b2cf2003da077d(_goslice_ _swig_go_0) {
  operations_research::sat::CpModelProto *arg1 = 0 ;
  operations_research::sat::CpModelProto temp1 ;
  std::string result;
  _gostring_ _swig_go_result;
  
  {
    // c
    bool parsed_ok = temp1.ParseFromArray(_swig_go_0.array, _swig_go_0.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::CpModelProto protocol message.");
    }
    arg1 = &temp1;
  }
  
  result = operations_research::sat::SatHelper::ValidateModel((operations_research::sat::CpModelProto const &)*arg1);
  _swig_go_result = Swig_AllocateString((&result)->data(), (&result)->length()); 
  return _swig_go_result;
}


operations_research::Domain *_wrap_SatHelper_VariableDomain_internal_77b2cf2003da077d(_goslice_ _swig_go_0) {
  operations_research::sat::IntegerVariableProto *arg1 = 0 ;
  operations_research::sat::IntegerVariableProto temp1 ;
  operations_research::Domain result;
  operations_research::Domain *_swig_go_result;
  
  {
    // c
    bool parsed_ok = temp1.ParseFromArray(_swig_go_0.array, _swig_go_0.len);
    if (!parsed_ok) {
      _swig_gopanic("Unable to parse operations_research::sat::IntegerVariableProto protocol message.");
    }
    arg1 = &temp1;
  }
  
  result = operations_research::sat::SatHelper::VariableDomain((operations_research::sat::IntegerVariableProto const &)*arg1);
  *(operations_research::Domain **)&_swig_go_result = new operations_research::Domain(result); 
  return _swig_go_result;
}


operations_research::sat::SatHelper *_wrap_new_SatHelper_internal_77b2cf2003da077d() {
  operations_research::sat::SatHelper *result = 0 ;
  operations_research::sat::SatHelper *_swig_go_result;
  
  
  result = (operations_research::sat::SatHelper *)new operations_research::sat::SatHelper();
  *(operations_research::sat::SatHelper **)&_swig_go_result = (operations_research::sat::SatHelper *)result; 
  return _swig_go_result;
}


void _wrap_delete_SatHelper_internal_77b2cf2003da077d(operations_research::sat::SatHelper *_swig_go_0) {
  operations_research::sat::SatHelper *arg1 = (operations_research::sat::SatHelper *) 0 ;
  
  arg1 = *(operations_research::sat::SatHelper **)&_swig_go_0; 
  
  delete arg1;
  
}


#ifdef __cplusplus
}
#endif

