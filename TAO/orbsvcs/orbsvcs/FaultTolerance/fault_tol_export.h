
// -*- C++ -*-
// $Id$
// Definition for Win32 Export directives.
// This file is generated automatically by generate_export_file.pl
// ------------------------------
#ifndef TAO_FT_EXPORT_H
#define TAO_FT_EXPORT_H

#include "ace/config-all.h"

#if defined (TAO_AS_STATIC_LIBS)
#  if !defined (TAO_FT_HAS_DLL)
#    define TAO_FT_HAS_DLL 0
#  endif /* ! TAO_FT_HAS_DLL */
#else
#  if !defined (TAO_FT_HAS_DLL)
#    define TAO_FT_HAS_DLL 1
#  endif /* ! TAO_FT_HAS_DLL */
#endif

#if defined (TAO_FT_HAS_DLL) && (TAO_FT_HAS_DLL == 1)
#  if defined (TAO_FT_BUILD_DLL)
#pragma message ("TAO_FT_EXPORT set to export.")
#    define TAO_FT_Export ACE_Proper_Export_Flag
#    define TAO_FT_SINGLETON_DECLARATION(T) ACE_EXPORT_SINGLETON_DECLARATION (T)
#    define TAO_FT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_EXPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  else /* TAO_FT_BUILD_DLL */
#pragma message ("TAO_FT_EXPORT set to import.")
#    define TAO_FT_Export ACE_Proper_Import_Flag
#    define TAO_FT_SINGLETON_DECLARATION(T) ACE_IMPORT_SINGLETON_DECLARATION (T)
#    define TAO_FT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK) ACE_IMPORT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#  endif /* TAO_FT_BUILD_DLL */
#else /* TAO_FT_HAS_DLL == 1 */
#pragma message ("TAO_FT_EXPORT set to null.")
#  define TAO_FT_Export
#  define TAO_FT_SINGLETON_DECLARATION(T)
#  define TAO_FT_SINGLETON_DECLARE(SINGLETON_TYPE, CLASS, LOCK)
#endif /* TAO_FT_HAS_DLL == 1 */

#endif /* TAO_FT_EXPORT_H */

// End of auto generated file.
