/* -*- C++ -*- $Id$ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "tao/TAOC.h"

#include "tao/TAOS.h"

#if !defined (__ACE_INLINE__)
#include "tao/TAOC.i"
#endif /* !defined INLINE */

#if (TAO_HAS_CORBA_MESSAGING == 1)

static const CORBA::Long _oc_TAO_PrioritySelectionMode[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  34, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x653a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/PrioritySelectionMode:1.0
  22, ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x65000000),  // name = PrioritySelectionMode
  CORBA::tk_short,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_PrioritySelectionMode (CORBA::tk_alias, sizeof (_oc_TAO_PrioritySelectionMode), (char *) &_oc_TAO_PrioritySelectionMode, 0, sizeof (TAO::PrioritySelectionMode));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_PrioritySelectionMode, &_tc_TAO_tc_TAO_PrioritySelectionMode)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, USE_NO_PRIORITY, 0)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, USE_THREAD_PRIORITY, 1)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, USE_PRIORITY_RANGE, 2)
TAO_NAMESPACE_END
static const CORBA::Long _oc_TAO_PrioritySpecification[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  34, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53706563), ACE_NTOHL (0x69666963), ACE_NTOHL (0x6174696f), ACE_NTOHL (0x6e3a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/PrioritySpecification:1.0
  22, ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53706563), ACE_NTOHL (0x69666963), ACE_NTOHL (0x6174696f), ACE_NTOHL (0x6e000000),  // name = PrioritySpecification
  3, // member count
  5, ACE_NTOHL (0x6d6f6465), ACE_NTOHL (0x0),  // name = mode
  CORBA::tk_alias, // typecode kind for typedefs
  76, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    34, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x653a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/PrioritySelectionMode:1.0
    22, ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x65000000),  // name = PrioritySelectionMode
    CORBA::tk_short,


  13, ACE_NTOHL (0x6d696e5f), ACE_NTOHL (0x7072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x0),  // name = min_priority
  CORBA::tk_short,

  13, ACE_NTOHL (0x6d61785f), ACE_NTOHL (0x7072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x0),  // name = max_priority
  CORBA::tk_short,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_PrioritySpecification (CORBA::tk_struct, sizeof (_oc_TAO_PrioritySpecification), (char *) &_oc_TAO_PrioritySpecification, 0, sizeof (TAO::PrioritySpecification));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_PrioritySpecification, &_tc_TAO_tc_TAO_PrioritySpecification)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::ULong)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::ULong, CLIENT_PRIORITY_POLICY_TYPE, 1413545984U)
TAO_NAMESPACE_END
TAO::ClientPriorityPolicy_ptr TAO::ClientPriorityPolicy::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (CORBA::is_nil (obj))
    return TAO::ClientPriorityPolicy::_nil ();
  CORBA::Boolean is_a = obj->_is_a ("IDL:TAO/ClientPriorityPolicy:1.0", ACE_TRY_ENV);
  ACE_CHECK_RETURN (TAO::ClientPriorityPolicy::_nil ());
  if (is_a == 0)
    return TAO::ClientPriorityPolicy::_nil ();
  return TAO::ClientPriorityPolicy::_unchecked_narrow (obj, ACE_TRY_ENV);
}

TAO::ClientPriorityPolicy_ptr TAO::ClientPriorityPolicy::_unchecked_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment & ACE_TRY_ENV
  )
{
  void *servant = 0;
  if (!obj->_is_collocated ()
        || !obj->_servant ()
        || (servant = obj->_servant()->_downcast ("IDL:TAO/ClientPriorityPolicy:1.0")) == 0
      )
    ACE_THROW_RETURN (CORBA::MARSHAL (), TAO::ClientPriorityPolicy::_nil ());
  TAO::ClientPriorityPolicy_ptr retval = 0;
  ACE_NEW_RETURN (
      retval,
      POA_TAO::_tao_direct_collocated_ClientPriorityPolicy (ACE_reinterpret_cast (POA_TAO::ClientPriorityPolicy_ptr, servant), 0),
      0
    );
  return retval;
}

TAO::ClientPriorityPolicy_ptr
TAO::ClientPriorityPolicy::_duplicate (TAO::ClientPriorityPolicy_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_incr_refcnt ();
  return obj;
}

CORBA::Boolean TAO::ClientPriorityPolicy::_is_a (const CORBA::Char *value, CORBA::Environment &ACE_TRY_ENV)
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:TAO/ClientPriorityPolicy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Object:1.0")))
  return 1; // success using local knowledge
  else
    return this->CORBA_Object::_is_a (value, ACE_TRY_ENV);
}

const char* TAO::ClientPriorityPolicy::_interface_repository_id (void) const
{
  return "IDL:TAO/ClientPriorityPolicy:1.0";
}

static const CORBA::Long _oc_TAO_ClientPriorityPolicy[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  33, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x436c6965), ACE_NTOHL (0x6e745072), ACE_NTOHL (0x696f7269), ACE_NTOHL (0x7479506f), ACE_NTOHL (0x6c696379), ACE_NTOHL (0x3a312e30), ACE_NTOHL (0x0),  // repository ID = IDL:TAO/ClientPriorityPolicy:1.0
  21, ACE_NTOHL (0x436c6965), ACE_NTOHL (0x6e745072), ACE_NTOHL (0x696f7269), ACE_NTOHL (0x7479506f), ACE_NTOHL (0x6c696379), ACE_NTOHL (0x0),  // name = ClientPriorityPolicy
};
static CORBA::TypeCode _tc_TAO_tc_TAO_ClientPriorityPolicy (CORBA::tk_objref, sizeof (_oc_TAO_ClientPriorityPolicy), (char *) &_oc_TAO_ClientPriorityPolicy, 0, sizeof (TAO::ClientPriorityPolicy));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_ClientPriorityPolicy, &_tc_TAO_tc_TAO_ClientPriorityPolicy)
TAO_NAMESPACE_END
void operator<<= (CORBA::Any &_tao_any, const TAO::PrioritySpecification &_tao_elem) // copying
{
  TAO::PrioritySpecification *_any_val = 0;
  ACE_NEW (_any_val, TAO::PrioritySpecification (_tao_elem));
  if (!_any_val) return;
  ACE_TRY_NEW_ENV
  {
    TAO_OutputCDR stream;
    stream << *_any_val;
    _tao_any._tao_replace (
        TAO::_tc_PrioritySpecification,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _any_val,
        ACE_TRY_ENV
      );
    ACE_TRY_CHECK;
  }
  ACE_CATCHANY
  {
    delete _any_val;
  }
  ACE_ENDTRY;
}

void operator<<= (CORBA::Any &_tao_any, TAO::PrioritySpecification *_tao_elem) // non copying
{
  ACE_TRY_NEW_ENV
  {
    TAO_OutputCDR stream;
    stream << *_tao_elem;
    _tao_any._tao_replace (
        TAO::_tc_PrioritySpecification,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _tao_elem,
        ACE_TRY_ENV
      );
    ACE_TRY_CHECK;
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
  }
  ACE_ENDTRY;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, TAO::PrioritySpecification *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_PrioritySpecification, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (TAO::PrioritySpecification *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, TAO::PrioritySpecification, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            TAO::_tc_PrioritySpecification,
            1,
            ACE_reinterpret_cast (void *, _tao_elem),
            ACE_TRY_ENV
          );
        ACE_TRY_CHECK;
        return 1;
      }
      else
      {
        delete _tao_elem;
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
    return 0; 
  }
  ACE_ENDTRY;
  return 0;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const TAO::PrioritySpecification *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_PrioritySpecification, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (TAO::PrioritySpecification *)_tao_any.value ();
      return 1;
      }
    else
    {
      ACE_NEW_RETURN (_tao_elem, TAO::PrioritySpecification, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *(TAO::PrioritySpecification *)_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            TAO::_tc_PrioritySpecification,
            1,
            ACE_reinterpret_cast (void *, ACE_const_cast (TAO::PrioritySpecification *&, _tao_elem)),
            ACE_TRY_ENV
          );
        ACE_TRY_CHECK;
        return 1;
      }
      else
      {
        delete ACE_const_cast (TAO::PrioritySpecification *&, _tao_elem);
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete ACE_const_cast (TAO::PrioritySpecification *&, _tao_elem);
    _tao_elem = 0;
    return 0; 
  }
  ACE_ENDTRY;
  return 0;
}

TAO::ClientPriorityPolicy_ptr (*_TAO_collocation_TAO_ClientPriorityPolicy_Stub_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;
void operator<<= (CORBA::Any &_tao_any, TAO::ClientPriorityPolicy_ptr _tao_elem)
{
  CORBA::Object_ptr *_tao_obj_ptr = 0;
  ACE_TRY_NEW_ENV
  {
    ACE_NEW (_tao_obj_ptr, CORBA::Object_ptr);
    *_tao_obj_ptr = TAO::ClientPriorityPolicy::_duplicate (_tao_elem);
    TAO_OutputCDR stream;
    if (stream << *_tao_obj_ptr)
    {
      _tao_any._tao_replace (
          TAO::_tc_ClientPriorityPolicy, 
          TAO_ENCAP_BYTE_ORDER,
          stream.begin (),
          1,
          _tao_obj_ptr,
          ACE_TRY_ENV
        );
      ACE_TRY_CHECK;
    }
    else
    {
      delete _tao_obj_ptr;
    }
  }
  ACE_CATCHANY
  {
    delete _tao_obj_ptr;
  }
  ACE_ENDTRY;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, TAO::ClientPriorityPolicy_ptr &_tao_elem)
{
  CORBA::Object_ptr *tmp = 0;
  ACE_NEW_RETURN (tmp, CORBA::Object_ptr, 0);
  ACE_TRY_NEW_ENV
  {
    _tao_elem = TAO::ClientPriorityPolicy::_nil ();
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_ClientPriorityPolicy, ACE_TRY_ENV)) // not equal
      {
        delete tmp;
        return 0;
      }
    ACE_TRY_CHECK;
    TAO_InputCDR stream (
        _tao_any._tao_get_cdr (),
        _tao_any._tao_byte_order ()
      );
    CORBA::Object_var _tao_obj_var;
    if (stream >> _tao_obj_var.out ())
    {
      _tao_elem = TAO::ClientPriorityPolicy::_narrow (_tao_obj_var.in (), ACE_TRY_ENV);
      ACE_TRY_CHECK;
      *tmp = (CORBA::Object_ptr) _tao_elem;  // any owns the object
      ((CORBA::Any *)&_tao_any)->_tao_replace (
          TAO::_tc_ClientPriorityPolicy,
          1,
          tmp,
          ACE_TRY_ENV
        );
      ACE_TRY_CHECK;
      return 1;
    }
    else    // failure
    {
      delete tmp;
    }
  }
  ACE_CATCHANY
  {
    delete tmp;
    _tao_elem = TAO::ClientPriorityPolicy::_nil ();
    return 0;
  }
  ACE_ENDTRY;
  _tao_elem = TAO::ClientPriorityPolicy::_nil ();
  return 0;
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
    template class TAO_Object_Field_T<TAO::ClientPriorityPolicy,TAO::ClientPriorityPolicy_var>;
  template class TAO_Object_Manager<TAO::ClientPriorityPolicy,TAO::ClientPriorityPolicy_var>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
#  pragma instantiate TAO_Object_Field_T<TAO::ClientPriorityPolicy,TAO::ClientPriorityPolicy_var>
#  pragma instantiate TAO_Object_Manager<TAO::ClientPriorityPolicy,TAO::ClientPriorityPolicy_var>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */
static const CORBA::Long _oc_TAO_BufferingConstraintMode[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  36, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f64653a), ACE_NTOHL (0x312e3000),  // repository ID = IDL:TAO/BufferingConstraintMode:1.0
  24, ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f646500),  // name = BufferingConstraintMode
  CORBA::tk_ushort,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_BufferingConstraintMode (CORBA::tk_alias, sizeof (_oc_TAO_BufferingConstraintMode), (char *) &_oc_TAO_BufferingConstraintMode, 0, sizeof (TAO::BufferingConstraintMode));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_BufferingConstraintMode, &_tc_TAO_tc_TAO_BufferingConstraintMode)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_FLUSH, 0U)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_TIMEOUT, 1U)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_MESSAGE_COUNT, 2U)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_MESSAGE_BYTES, 4U)
TAO_NAMESPACE_END
static const CORBA::Long _oc_TAO_BufferingConstraint[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  32, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e743a), ACE_NTOHL (0x312e3000),  // repository ID = IDL:TAO/BufferingConstraint:1.0
  20, ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e7400),  // name = BufferingConstraint
  4, // member count
  5, ACE_NTOHL (0x6d6f6465), ACE_NTOHL (0x0),  // name = mode
  CORBA::tk_alias, // typecode kind for typedefs
  76, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    36, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f64653a), ACE_NTOHL (0x312e3000),  // repository ID = IDL:TAO/BufferingConstraintMode:1.0
    24, ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f646500),  // name = BufferingConstraintMode
    CORBA::tk_ushort,


  8, ACE_NTOHL (0x74696d65), ACE_NTOHL (0x6f757400),  // name = timeout
  CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x54696d65), ACE_NTOHL (0x42617365), ACE_NTOHL (0x2f54696d), ACE_NTOHL (0x65543a31), ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
    6, ACE_NTOHL (0x54696d65), ACE_NTOHL (0x54000000),  // name = TimeT
    CORBA::tk_ulonglong,


  14, ACE_NTOHL (0x6d657373), ACE_NTOHL (0x6167655f), ACE_NTOHL (0x636f756e), ACE_NTOHL (0x74000000),  // name = message_count
  CORBA::tk_ulong,

  14, ACE_NTOHL (0x6d657373), ACE_NTOHL (0x6167655f), ACE_NTOHL (0x62797465), ACE_NTOHL (0x73000000),  // name = message_bytes
  CORBA::tk_ulong,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_BufferingConstraint (CORBA::tk_struct, sizeof (_oc_TAO_BufferingConstraint), (char *) &_oc_TAO_BufferingConstraint, 0, sizeof (TAO::BufferingConstraint));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_BufferingConstraint, &_tc_TAO_tc_TAO_BufferingConstraint)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::ULong)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::ULong, BUFFERING_CONSTRAINT_POLICY_TYPE, 1413545985U)
TAO_NAMESPACE_END
TAO::BufferingConstraintPolicy_ptr TAO::BufferingConstraintPolicy::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  if (CORBA::is_nil (obj))
    return TAO::BufferingConstraintPolicy::_nil ();
  CORBA::Boolean is_a = obj->_is_a ("IDL:TAO/BufferingConstraintPolicy:1.0", ACE_TRY_ENV);
  ACE_CHECK_RETURN (TAO::BufferingConstraintPolicy::_nil ());
  if (is_a == 0)
    return TAO::BufferingConstraintPolicy::_nil ();
  return TAO::BufferingConstraintPolicy::_unchecked_narrow (obj, ACE_TRY_ENV);
}

TAO::BufferingConstraintPolicy_ptr TAO::BufferingConstraintPolicy::_unchecked_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment & ACE_TRY_ENV
  )
{
  void *servant = 0;
  if (!obj->_is_collocated ()
        || !obj->_servant ()
        || (servant = obj->_servant()->_downcast ("IDL:TAO/BufferingConstraintPolicy:1.0")) == 0
      )
    ACE_THROW_RETURN (CORBA::MARSHAL (), TAO::BufferingConstraintPolicy::_nil ());
  TAO::BufferingConstraintPolicy_ptr retval = 0;
  ACE_NEW_RETURN (
      retval,
      POA_TAO::_tao_direct_collocated_BufferingConstraintPolicy (ACE_reinterpret_cast (POA_TAO::BufferingConstraintPolicy_ptr, servant), 0),
      0
    );
  return retval;
}

TAO::BufferingConstraintPolicy_ptr
TAO::BufferingConstraintPolicy::_duplicate (TAO::BufferingConstraintPolicy_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_incr_refcnt ();
  return obj;
}

CORBA::Boolean TAO::BufferingConstraintPolicy::_is_a (const CORBA::Char *value, CORBA::Environment &ACE_TRY_ENV)
{
  if (
    (!ACE_OS::strcmp ((char *)value, "IDL:TAO/BufferingConstraintPolicy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Policy:1.0")) ||
    (!ACE_OS::strcmp ((char *)value, "IDL:omg.org/CORBA/Object:1.0")))
  return 1; // success using local knowledge
  else
    return this->CORBA_Object::_is_a (value, ACE_TRY_ENV);
}

const char* TAO::BufferingConstraintPolicy::_interface_repository_id (void) const
{
  return "IDL:TAO/BufferingConstraintPolicy:1.0";
}

static const CORBA::Long _oc_TAO_BufferingConstraintPolicy[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  38, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e7450), ACE_NTOHL (0x6f6c6963), ACE_NTOHL (0x793a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/BufferingConstraintPolicy:1.0
  26, ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e7450), ACE_NTOHL (0x6f6c6963), ACE_NTOHL (0x79000000),  // name = BufferingConstraintPolicy
};
static CORBA::TypeCode _tc_TAO_tc_TAO_BufferingConstraintPolicy (CORBA::tk_objref, sizeof (_oc_TAO_BufferingConstraintPolicy), (char *) &_oc_TAO_BufferingConstraintPolicy, 0, sizeof (TAO::BufferingConstraintPolicy));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_BufferingConstraintPolicy, &_tc_TAO_tc_TAO_BufferingConstraintPolicy)
TAO_NAMESPACE_END
void operator<<= (CORBA::Any &_tao_any, const TAO::BufferingConstraint &_tao_elem) // copying
{
  TAO::BufferingConstraint *_any_val = 0;
  ACE_NEW (_any_val, TAO::BufferingConstraint (_tao_elem));
  if (!_any_val) return;
  ACE_TRY_NEW_ENV
  {
    TAO_OutputCDR stream;
    stream << *_any_val;
    _tao_any._tao_replace (
        TAO::_tc_BufferingConstraint,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _any_val,
        ACE_TRY_ENV
      );
    ACE_TRY_CHECK;
  }
  ACE_CATCHANY
  {
    delete _any_val;
  }
  ACE_ENDTRY;
}

void operator<<= (CORBA::Any &_tao_any, TAO::BufferingConstraint *_tao_elem) // non copying
{
  ACE_TRY_NEW_ENV
  {
    TAO_OutputCDR stream;
    stream << *_tao_elem;
    _tao_any._tao_replace (
        TAO::_tc_BufferingConstraint,
        TAO_ENCAP_BYTE_ORDER,
        stream.begin (),
        1,
        _tao_elem,
        ACE_TRY_ENV
      );
    ACE_TRY_CHECK;
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
  }
  ACE_ENDTRY;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, TAO::BufferingConstraint *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_BufferingConstraint, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (TAO::BufferingConstraint *)_tao_any.value ();
      return 1;
    }
    else
    {
      ACE_NEW_RETURN (_tao_elem, TAO::BufferingConstraint, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            TAO::_tc_BufferingConstraint,
            1,
            ACE_reinterpret_cast (void *, _tao_elem),
            ACE_TRY_ENV
          );
        ACE_TRY_CHECK;
        return 1;
      }
      else
      {
        delete _tao_elem;
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete _tao_elem;
    _tao_elem = 0;
    return 0; 
  }
  ACE_ENDTRY;
  return 0;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const TAO::BufferingConstraint *&_tao_elem)
{
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_BufferingConstraint, ACE_TRY_ENV)) // not equal
      {
        _tao_elem = 0;
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = (TAO::BufferingConstraint *)_tao_any.value ();
      return 1;
      }
    else
    {
      ACE_NEW_RETURN (_tao_elem, TAO::BufferingConstraint, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *(TAO::BufferingConstraint *)_tao_elem)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            TAO::_tc_BufferingConstraint,
            1,
            ACE_reinterpret_cast (void *, ACE_const_cast (TAO::BufferingConstraint *&, _tao_elem)),
            ACE_TRY_ENV
          );
        ACE_TRY_CHECK;
        return 1;
      }
      else
      {
        delete ACE_const_cast (TAO::BufferingConstraint *&, _tao_elem);
        _tao_elem = 0;
      }
    }
  }
  ACE_CATCHANY
  {
    delete ACE_const_cast (TAO::BufferingConstraint *&, _tao_elem);
    _tao_elem = 0;
    return 0; 
  }
  ACE_ENDTRY;
  return 0;
}

TAO::BufferingConstraintPolicy_ptr (*_TAO_collocation_TAO_BufferingConstraintPolicy_Stub_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;
void operator<<= (CORBA::Any &_tao_any, TAO::BufferingConstraintPolicy_ptr _tao_elem)
{
  CORBA::Object_ptr *_tao_obj_ptr = 0;
  ACE_TRY_NEW_ENV
  {
    ACE_NEW (_tao_obj_ptr, CORBA::Object_ptr);
    *_tao_obj_ptr = TAO::BufferingConstraintPolicy::_duplicate (_tao_elem);
    TAO_OutputCDR stream;
    if (stream << *_tao_obj_ptr)
    {
      _tao_any._tao_replace (
          TAO::_tc_BufferingConstraintPolicy, 
          TAO_ENCAP_BYTE_ORDER,
          stream.begin (),
          1,
          _tao_obj_ptr,
          ACE_TRY_ENV
        );
      ACE_TRY_CHECK;
    }
    else
    {
      delete _tao_obj_ptr;
    }
  }
  ACE_CATCHANY
  {
    delete _tao_obj_ptr;
  }
  ACE_ENDTRY;
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, TAO::BufferingConstraintPolicy_ptr &_tao_elem)
{
  CORBA::Object_ptr *tmp = 0;
  ACE_NEW_RETURN (tmp, CORBA::Object_ptr, 0);
  ACE_TRY_NEW_ENV
  {
    _tao_elem = TAO::BufferingConstraintPolicy::_nil ();
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_BufferingConstraintPolicy, ACE_TRY_ENV)) // not equal
      {
        delete tmp;
        return 0;
      }
    ACE_TRY_CHECK;
    TAO_InputCDR stream (
        _tao_any._tao_get_cdr (),
        _tao_any._tao_byte_order ()
      );
    CORBA::Object_var _tao_obj_var;
    if (stream >> _tao_obj_var.out ())
    {
      _tao_elem = TAO::BufferingConstraintPolicy::_narrow (_tao_obj_var.in (), ACE_TRY_ENV);
      ACE_TRY_CHECK;
      *tmp = (CORBA::Object_ptr) _tao_elem;  // any owns the object
      ((CORBA::Any *)&_tao_any)->_tao_replace (
          TAO::_tc_BufferingConstraintPolicy,
          1,
          tmp,
          ACE_TRY_ENV
        );
      ACE_TRY_CHECK;
      return 1;
    }
    else    // failure
    {
      delete tmp;
    }
  }
  ACE_CATCHANY
  {
    delete tmp;
    _tao_elem = TAO::BufferingConstraintPolicy::_nil ();
    return 0;
  }
  ACE_ENDTRY;
  _tao_elem = TAO::BufferingConstraintPolicy::_nil ();
  return 0;
}

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)  || \
    defined (ACE_HAS_GNU_REPO)
  template class TAO_Object_Field_T<TAO::BufferingConstraintPolicy,TAO::BufferingConstraintPolicy_var>;
  template class TAO_Object_Manager<TAO::BufferingConstraintPolicy,TAO::BufferingConstraintPolicy_var>;
#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)
#  pragma instantiate TAO_Object_Field_T<TAO::BufferingConstraintPolicy,TAO::BufferingConstraintPolicy_var>
#  pragma instantiate TAO_Object_Manager<TAO::BufferingConstraintPolicy,TAO::BufferingConstraintPolicy_var>
#endif /* ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

#endif /* TAO_HAS_CORBA_MESSAGING == 1 */

TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_NONE, 0)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_WITH_TRANSPORT, 1)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_WITH_SERVER, 2)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_WITH_TARGET, 3)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_EAGER_BUFFERING, 0)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_DELAYED_BUFFERING, -1)
TAO_NAMESPACE_END
