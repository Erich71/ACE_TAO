// $Id$

#include <iostream.h>
#include <fstream.h>

#include "ace/SString.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "ace/Containers.h"
#include "ace/Singleton.h"
#include "ace/Get_Opt.h"

long GenObjectTable(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenMethodTable(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenClientHeader(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenClientStubs(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenClientCode(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenObjectCreateCode(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenServerHeader(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenServerSkels(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenServantHeader(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
long GenServantImpl(ACE_Unbounded_Queue<ACE_CString> &arr, int limit);
void GenGPERFCode();
void Usage();

