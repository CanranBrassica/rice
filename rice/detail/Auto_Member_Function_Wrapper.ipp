#ifndef Rice__detail__Auto_Member_Function_Wrapper__ipp_
#define Rice__detail__Auto_Member_Function_Wrapper__ipp_

// This is a generated file.  DO NOT EDIT!!


// This causes problems with certain C++ libraries
#undef TYPE

#include "method_data.hpp"
#include "../ruby_try_catch.hpp"
#include "../to_from_ruby.hpp"
#include <typeinfo>
namespace Rice
{

namespace detail
{

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T, typename Arg15_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T, typename Arg15_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); Arg13_T arg13(from_ruby<Arg13_T>(args[13])); Arg14_T arg14(from_ruby<Arg14_T>(args[14])); Arg15_T arg15(from_ruby<Arg15_T>(args[15])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T, typename Arg15_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T, typename Arg15_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T, Arg15_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); Arg13_T arg13(from_ruby<Arg13_T>(args[13])); Arg14_T arg14(from_ruby<Arg14_T>(args[14])); Arg15_T arg15(from_ruby<Arg15_T>(args[15])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14, arg15);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); Arg13_T arg13(from_ruby<Arg13_T>(args[13])); Arg14_T arg14(from_ruby<Arg14_T>(args[14])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T, typename Arg14_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T, Arg14_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); Arg13_T arg13(from_ruby<Arg13_T>(args[13])); Arg14_T arg14(from_ruby<Arg14_T>(args[14])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13, arg14);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); Arg13_T arg13(from_ruby<Arg13_T>(args[13])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T, typename Arg13_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T, Arg13_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); Arg13_T arg13(from_ruby<Arg13_T>(args[13])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12, arg13);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T, typename Arg12_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T, Arg12_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); Arg12_T arg12(from_ruby<Arg12_T>(args[12])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11, arg12);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T, typename Arg11_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T, Arg11_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); Arg11_T arg11(from_ruby<Arg11_T>(args[11])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T, typename Arg10_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T, Arg10_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); Arg10_T arg10(from_ruby<Arg10_T>(args[10])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9, arg10);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T, typename Arg9_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T, Arg9_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); Arg9_T arg9(from_ruby<Arg9_T>(args[9])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T, typename Arg8_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T, Arg8_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); Arg8_T arg8(from_ruby<Arg8_T>(args[8])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T, typename Arg7_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T, Arg7_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); Arg7_T arg7(from_ruby<Arg7_T>(args[7])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6, arg7);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T, typename Arg6_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T, Arg6_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); Arg6_T arg6(from_ruby<Arg6_T>(args[6])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5, arg6);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T, typename Arg5_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T, Arg5_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); Arg5_T arg5(from_ruby<Arg5_T>(args[5])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4, arg5);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3, arg4));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T, typename Arg4_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T, Arg4_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); Arg4_T arg4(from_ruby<Arg4_T>(args[4])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3, arg4);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2, arg3));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T, typename Arg3_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T, Arg3_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); Arg3_T arg3(from_ruby<Arg3_T>(args[3])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2, arg3);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T, Arg2_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1, arg2));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T, typename Arg2_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T, Arg2_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); Arg2_T arg2(from_ruby<Arg2_T>(args[2])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1, arg2);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T, typename Arg1_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T, Arg1_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0, arg1));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T, typename Arg1_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T, Arg1_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); Arg1_T arg1(from_ruby<Arg1_T>(args[1])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0, arg1);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T, typename Arg0_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T, Arg0_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); 
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)(arg0));
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T, typename Arg0_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T, typename Arg0_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T, Arg0_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Arg0_T arg0(from_ruby<Arg0_T>(args[0])); 
    Func func = wrapper->func_;
    (*obj.*func)(arg0);
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------
template<typename Func_T, typename Ret_T, typename Self_T>
Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Ret_T, typename Self_T>
VALUE Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, Ret_T, Self_T> *)data;

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Self_T * obj = from_ruby<Self_T *>(self);
    Func func = wrapper->func_;
    return to_ruby((*obj.*func)());
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

template<typename Func_T, typename Self_T>
Auto_Member_Function_Wrapper<Func_T, void, Self_T>::
Auto_Member_Function_Wrapper(
    Func func,
    Exception_Handler const * handler)
  : Wrapped_Function(RUBY_METHOD_FUNC(call), Num_Args)
  , func_(func)
  , handler_(handler ? handler : new Default_Exception_Handler)
{
}

template<typename Func_T, typename Self_T>
VALUE Auto_Member_Function_Wrapper<Func_T, void, Self_T>::
call(int argc, VALUE* args, VALUE self)
{
  Auto_Member_Function_Wrapper<Func_T, void, Self_T> * wrapper = 0;
  try
  {
    void * data = detail::method_data();
    wrapper =
      (Auto_Member_Function_Wrapper<Func_T, void, Self_T> *)data;
    Self_T * obj = from_ruby<Self_T *>(self);

    if(argc != Num_Args) {
      rb_raise(rb_eArgError, "wrong number of arguments (%d for %d)", argc, Num_Args);
    }

    Func func = wrapper->func_;
    (*obj.*func)();
    return Qnil;
  }
  catch(...)
  {
    RUBY_TRY
    {
      if(wrapper)
      {
        return wrapper->handler_->handle_exception();
      }
      else
      {
        throw;
      }
    }
    RUBY_CATCH
  }
}

// ---------------------------------------------------------------------

} // namespace detail

} // namespace Rice


#endif // Rice__detail__Auto_Member_Function_Wrapper__ipp_

