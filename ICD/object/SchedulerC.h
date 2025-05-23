// -*- C++ -*-
/**
 * Code generated by the The ACE ORB (TAO) IDL Compiler v3.1.3
 * TAO and the TAO IDL Compiler have been developed by:
 *       Center for Distributed Object Computing
 *       Washington University
 *       St. Louis, MO
 *       USA
 * and
 *       Distributed Object Computing Laboratory
 *       University of California at Irvine
 *       Irvine, CA
 *       USA
 * and
 *       Institute for Software Integrated Systems
 *       Vanderbilt University
 *       Nashville, TN
 *       USA
 *       https://www.isis.vanderbilt.edu/
 *
 * Information about TAO is available at:
 *     https://www.dre.vanderbilt.edu/~schmidt/TAO.html
 **/

// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_codegen.cpp:148

#ifndef _TAO_IDL__TMP__SCHEDULERC_H_
#define _TAO_IDL__TMP__SCHEDULERC_H_


#include /**/ "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


#include "tao/AnyTypeCode/AnyTypeCode_methods.h"
#include "tao/AnyTypeCode/Any.h"
#include "tao/ORB.h"
#include "tao/SystemException.h"
#include "tao/Basic_Types.h"
#include "tao/ORB_Constants.h"
#include "tao/Object.h"
#include "tao/String_Manager_T.h"
#include "tao/Objref_VarOut_T.h"
#include "tao/Arg_Traits_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/Any_Insert_Policy_T.h"
#include "tao/Fixed_Size_Argument_T.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Object_Argument_T.h"
#include /**/ "tao/Version.h"
#include /**/ "tao/Versioned_Namespace.h"

#include "acscomponentC.h"
#include "SYSTEMErrC.h"

#if TAO_MAJOR_VERSION != 3 || TAO_MINOR_VERSION != 1 || TAO_MICRO_VERSION != 3
#error This file should be regenerated with TAO_IDL
#endif
// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_root/root_ch.cpp:155


TAO_BEGIN_VERSIONED_NAMESPACE_DECL



namespace TAO
{
  template<typename T> class Narrow_Utils;
}
TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:34

namespace SCHEDULER_MODULE
{
  // TAO_IDL - Generated from
  // /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_interface.cpp:742

  

#if !defined (_SCHEDULER_MODULE_SCHEDULER__VAR_OUT_CH_)
#define _SCHEDULER_MODULE_SCHEDULER__VAR_OUT_CH_

  class Scheduler;
  using Scheduler_ptr = Scheduler*;
  using Scheduler_var = TAO_Objref_Var_T<Scheduler>;
  using Scheduler_out = TAO_Objref_Out_T<Scheduler>;

#endif /* end #if !defined */

  
  // TAO_IDL - Generated from
  // /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:39

  

  class  Scheduler
    : public virtual ::ACS::ACSComponent
  
  {
  public:
    friend class TAO::Narrow_Utils<Scheduler>;
    // TAO_IDL - Generated from
    // /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_type.cpp:297

    using _ptr_type = Scheduler_ptr;
    using _var_type = Scheduler_var;
    using _out_type = Scheduler_out;

    static void _tao_any_destructor (void *);

    // The static operations.
    static Scheduler_ptr _duplicate (Scheduler_ptr obj);

    static void _tao_release (Scheduler_ptr obj);

    static Scheduler_ptr _narrow (::CORBA::Object_ptr obj);
    static Scheduler_ptr _unchecked_narrow (::CORBA::Object_ptr obj);
    static Scheduler_ptr _nil ();

    virtual void start ();

    virtual void stop ();

    virtual ::CORBA::Long proposalUnderExecution ();

    
    // TAO_IDL - Generated from
    // /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_interface/interface_ch.cpp:135

    

    virtual ::CORBA::Boolean _is_a (const char *type_id);
    virtual const char* _interface_repository_id () const;
    virtual ::CORBA::Boolean marshal (TAO_OutputCDR &cdr);
  
  protected:
    // Concrete interface only.
    Scheduler ();

    // Concrete non-local interface only.
    Scheduler (::IOP::IOR *ior, TAO_ORB_Core *orb_core);
    
    // Non-local interface only.
    Scheduler (
        TAO_Stub *objref,
        ::CORBA::Boolean _tao_collocated = false,
        TAO_Abstract_ServantBase *servant = nullptr,
        TAO_ORB_Core *orb_core = nullptr);

    virtual ~Scheduler () = default;
  
  private:
    // Private and unimplemented for concrete interfaces.
    Scheduler (const Scheduler &) = delete;
    Scheduler (Scheduler &&) = delete;
    Scheduler &operator= (const Scheduler &) = delete;
    Scheduler &operator= (Scheduler &&) = delete;
  };
  // TAO_IDL - Generated from
  // /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_typecode/typecode_decl.cpp:33

  extern  ::CORBA::TypeCode_ptr const _tc_Scheduler;


// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_module/module_ch.cpp:62


} // module SCHEDULER_MODULE
// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:64



TAO_BEGIN_VERSIONED_NAMESPACE_DECL


// Arg traits specializations.
namespace TAO
{
  // TAO_IDL - Generated from
  // /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_arg_traits.cpp:142

  

#if !defined (_SCHEDULER_MODULE_SCHEDULER__ARG_TRAITS_)
#define _SCHEDULER_MODULE_SCHEDULER__ARG_TRAITS_

  template<>
  class  Arg_Traits< ::SCHEDULER_MODULE::Scheduler>
    : public Object_Arg_Traits_T<
        ::SCHEDULER_MODULE::Scheduler_ptr,
        ::SCHEDULER_MODULE::Scheduler_var,
        ::SCHEDULER_MODULE::Scheduler_out,
        TAO::Objref_Traits<SCHEDULER_MODULE::Scheduler>,
        TAO::Any_Insert_Policy_Stream>
  {
  };

#endif /* end #if !defined */
}

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_traits.cpp:58



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

// Traits specializations.
namespace TAO
{

#if !defined (_SCHEDULER_MODULE_SCHEDULER__TRAITS_)
#define _SCHEDULER_MODULE_SCHEDULER__TRAITS_

  template<>
  struct  Objref_Traits< ::SCHEDULER_MODULE::Scheduler>
  {
    static ::SCHEDULER_MODULE::Scheduler_ptr duplicate (::SCHEDULER_MODULE::Scheduler_ptr p);
    static void release (::SCHEDULER_MODULE::Scheduler_ptr p);
    static ::SCHEDULER_MODULE::Scheduler_ptr nil ();
    static ::CORBA::Boolean marshal (const ::SCHEDULER_MODULE::Scheduler_ptr p,TAO_OutputCDR & cdr);
  };

#endif /* end #if !defined */
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_interface/any_op_ch.cpp:40




TAO_BEGIN_VERSIONED_NAMESPACE_DECL
namespace CORBA {

 void operator<<= (::CORBA::Any &, SCHEDULER_MODULE::Scheduler_ptr); // copying
 void operator<<= (::CORBA::Any &, SCHEDULER_MODULE::Scheduler_ptr *); // non-copying
 ::CORBA::Boolean operator>>= (const ::CORBA::Any &, SCHEDULER_MODULE::Scheduler_ptr &);
}
TAO_END_VERSIONED_NAMESPACE_DECL




// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_visitor_interface/cdr_op_ch.cpp:40



TAO_BEGIN_VERSIONED_NAMESPACE_DECL

 ::CORBA::Boolean operator<< (TAO_OutputCDR &, const SCHEDULER_MODULE::Scheduler_ptr );
 ::CORBA::Boolean operator>> (TAO_InputCDR &, SCHEDULER_MODULE::Scheduler_ptr &);

TAO_END_VERSIONED_NAMESPACE_DECL


// TAO_IDL - Generated from
// /alma/ACS-2025APR/TAO/ACE_wrappers/build/linux/TAO/TAO_IDL/be/be_codegen.cpp:1648

#if defined (__ACE_INLINE__)
#include "SchedulerC.inl"
#endif /* defined INLINE */

#endif /* ifndef */

