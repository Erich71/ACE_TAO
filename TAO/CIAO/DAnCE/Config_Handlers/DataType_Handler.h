//================================================
/**
 *  @file  DataType_Handler.h
 *
 *  $Id$
 *
 *  @author Jules White <jules@dre.vanderbilt.edu>
 */
//================================================

#ifndef DATATYPE_HANDLER_H
#define DATATYPE_HANDLER_H

#include /**/ "ace/pre.h"
                                                                                
#include "ciao/DeploymentC.h"
#include "Basic_Deployment_Data.hpp"
             
                                                                                
#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */


namespace CIAO{
    
  namespace Config_Handlers{

  /*
   * @class DataType_Handler
   * 
   * @brief Handler class for <ComponentPortDescription> types.
   * 
   * This class defines handler methods to map values from 
   * XSC objects, parsed from the descriptor files, to the
   * corresponding CORBA IDL type for the schema element.
   * 
   */

   class DataType_Handler{
 
    public:
       
      DataType_Handler (void);
      virtual ~DataType_Handler (void);
              
      ////This method takes a <CIAO::Config_Handlers::DataType>
      ///and returns the corresponding CORBA::TypeCode.
      void
      get_DataType (CORBA::TypeCode_ptr& type,
                    DataType& desc);
    };

 }
}

#include /**/ "ace/post.h"
#endif /* DATATYPE_HANDLER_H */
