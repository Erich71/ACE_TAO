// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html


// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:63

#if !defined (_EDF_SCHEDULING_SCHEDULINGPARAMETERPOLICY___CI_)
#define _EDF_SCHEDULING_SCHEDULINGPARAMETERPOLICY___CI_

template<>
ACE_INLINE
CORBA::Boolean
TAO::Any_Impl_T<EDF_Scheduling::SchedulingParameterPolicy>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
ACE_INLINE
CORBA::Boolean
TAO::Any_Impl_T<EDF_Scheduling::SchedulingParameterPolicy>::marshal_value (TAO_OutputCDR &)
{
  return 0;
}

template<>
ACE_INLINE
CORBA::Boolean
TAO::Any_Impl_T<EDF_Scheduling::SchedulingParameterPolicy>::demarshal_value (TAO_InputCDR &)
{
  return 0;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_ci.cpp:63

#if !defined (_EDF_SCHEDULING_SCHEDULER___CI_)
#define _EDF_SCHEDULING_SCHEDULER___CI_

template<>
ACE_INLINE
CORBA::Boolean
TAO::Any_Impl_T<EDF_Scheduling::Scheduler>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

template<>
ACE_INLINE
CORBA::Boolean
TAO::Any_Impl_T<EDF_Scheduling::Scheduler>::marshal_value (TAO_OutputCDR &)
{
  return 0;
}

template<>
ACE_INLINE
CORBA::Boolean
TAO::Any_Impl_T<EDF_Scheduling::Scheduler>::demarshal_value (TAO_InputCDR &)
{
  return 0;
}

#endif /* end #if !defined */

// TAO_IDL - Generated from
// be/be_visitor_structure/cdr_op_ci.cpp:70

ACE_INLINE
CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const EDF_Scheduling::SchedulingParameter &_tao_aggregate
  )
{
  return
    (strm << _tao_aggregate.deadline) &&
    (strm << _tao_aggregate.importance);
}

ACE_INLINE
CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    EDF_Scheduling::SchedulingParameter &_tao_aggregate
  )
{
  return
    (strm >> _tao_aggregate.deadline) &&
    (strm >> _tao_aggregate.importance);
}

