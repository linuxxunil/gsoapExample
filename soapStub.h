/* soapStub.h
   Generated by gSOAP 2.8.32 for soap.h

gSOAP XML Web services tools
Copyright (C) 2000-2016, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/


#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20832
# error "GSOAP VERSION 20832 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

class ResponseBase;	/* soap.h:8 */
class Data;	/* soap.h:17 */
class DataArray;	/* soap.h:22 */
class DataRep;	/* soap.h:27 */
struct ns2__getDataResponse;	/* soap.h:35 */
struct ns2__getData;	/* soap.h:35 */

/* soap.h:8 */
#ifndef SOAP_TYPE_ResponseBase
#define SOAP_TYPE_ResponseBase (7)
/* Type ResponseBase is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'ResponseBase': */
class SOAP_CMAC ResponseBase {
      public:
        /// Required element 'status' of XSD type 'xsd:boolean'
        bool status;
        /// Required element 'message' of XSD type 'xsd:string'
        std::string message;
        /// Required element 'dateTime' of XSD type 'xsd:string'
        std::string dateTime;
      public:
        /// Return unique type id SOAP_TYPE_ResponseBase
        virtual int soap_type(void) const { return SOAP_TYPE_ResponseBase; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type ResponseBase, default initialized and not managed by a soap context
        virtual ResponseBase *soap_alloc(void) const { return SOAP_NEW(ResponseBase); }
      public:
        /// Constructor with initializations
        ResponseBase()
        {
          status = (bool)0;
        }
        virtual ~ResponseBase() { }
        /// Friend allocator used by soap_new_ResponseBase(struct soap*, int)
        friend SOAP_FMAC1 ResponseBase * SOAP_FMAC2 soap_instantiate_ResponseBase(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soap.h:17 */
#ifndef SOAP_TYPE_Data
#define SOAP_TYPE_Data (10)
/* complex XSD type 'Data': */
class SOAP_CMAC Data {
      public:
        /// Required element 'dateTime' of XSD type 'xsd:string'
        std::string dateTime;
        /// Required element 'content' of XSD type 'xsd:string'
        std::string content;
      public:
        /// Return unique type id SOAP_TYPE_Data
        virtual int soap_type(void) const { return SOAP_TYPE_Data; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type Data, default initialized and not managed by a soap context
        virtual Data *soap_alloc(void) const { return SOAP_NEW(Data); }
      public:
        /// Constructor with initializations
        Data()
        {
        }
        virtual ~Data() { }
        /// Friend allocator used by soap_new_Data(struct soap*, int)
        friend SOAP_FMAC1 Data * SOAP_FMAC2 soap_instantiate_Data(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soap.h:22 */
#ifndef SOAP_TYPE_DataArray
#define SOAP_TYPE_DataArray (11)
/* complex XSD type 'DataArray': */
class SOAP_CMAC DataArray {
      public:
        /// Sequence of elements 'data' of XSD type 'Data' stored in dynamic array data of length __size
        int __size;
        Data *data;
      public:
        /// Return unique type id SOAP_TYPE_DataArray
        virtual int soap_type(void) const { return SOAP_TYPE_DataArray; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type DataArray, default initialized and not managed by a soap context
        virtual DataArray *soap_alloc(void) const { return SOAP_NEW(DataArray); }
      public:
        /// Constructor with initializations
        DataArray()
        {
          __size = 0;
          data = NULL;
        }
        virtual ~DataArray() { }
        /// Friend allocator used by soap_new_DataArray(struct soap*, int)
        friend SOAP_FMAC1 DataArray * SOAP_FMAC2 soap_instantiate_DataArray(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soap.h:27 */
#ifndef SOAP_TYPE_DataRep
#define SOAP_TYPE_DataRep (13)
/* Type DataRep is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* complex XSD type 'DataRep': */
class SOAP_CMAC DataRep : public ResponseBase {
      public:
        /// Required element 'quantity' of XSD type 'xsd:int'
        int quantity;
        /// Required element 'dataArray' of XSD type 'DataArray'
        DataArray dataArray;
      public:
        /// Return unique type id SOAP_TYPE_DataRep
        virtual int soap_type(void) const { return SOAP_TYPE_DataRep; }
        /// (Re)set members to default values
        virtual void soap_default(struct soap*);
        /// Serialize object to prepare for SOAP 1.1/1.2 encoded output (or with SOAP_XML_GRAPH) by analyzing its (cyclic) structures
        virtual void soap_serialize(struct soap*) const;
        /// Output object in XML, compliant with SOAP 1.1 encoding style, return error code or SOAP_OK
        virtual int soap_put(struct soap*, const char *tag, const char *type) const;
        /// Output object in XML, with tag and optional id attribute and xsi:type, return error code or SOAP_OK
        virtual int soap_out(struct soap*, const char *tag, int id, const char *type) const;
        /// Get object from XML, compliant with SOAP 1.1 encoding style, return pointer to object or NULL on error
        virtual void *soap_get(struct soap*, const char *tag, const char *type);
        /// Get object from XML, with matching tag and type (NULL matches any tag and type), return pointer to object or NULL on error
        virtual void *soap_in(struct soap*, const char *tag, const char *type);
        /// Return a new object of type DataRep, default initialized and not managed by a soap context
        virtual DataRep *soap_alloc(void) const { return SOAP_NEW(DataRep); }
      public:
        /// Constructor with initializations
        DataRep()
        {
          quantity = (int)0;
        }
        virtual ~DataRep() { }
        /// Friend allocator used by soap_new_DataRep(struct soap*, int)
        friend SOAP_FMAC1 DataRep * SOAP_FMAC2 soap_instantiate_DataRep(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soap.h:35 */
#ifndef SOAP_TYPE_ns2__getDataResponse
#define SOAP_TYPE_ns2__getDataResponse (16)
/* complex XSD type 'ns2:getDataResponse': */
struct ns2__getDataResponse {
      public:
        /** Required element 'result' of XSD type 'DataRep' */
        DataRep result;
      public:
        /** Return unique type id SOAP_TYPE_ns2__getDataResponse */
        int soap_type() const { return SOAP_TYPE_ns2__getDataResponse; }
        /** Constructor with member initializations */
        ns2__getDataResponse()
        {
        }
        /** Friend allocator used by soap_new_ns2__getDataResponse(struct soap*, int) */
        friend SOAP_FMAC1 ns2__getDataResponse * SOAP_FMAC2 soap_instantiate_ns2__getDataResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soap.h:35 */
#ifndef SOAP_TYPE_ns2__getData
#define SOAP_TYPE_ns2__getData (17)
/* complex XSD type 'ns2:getData': */
struct ns2__getData {
      public:
        /** Required element 'name' of XSD type 'xsd:string' */
        std::string name;
      public:
        /** Return unique type id SOAP_TYPE_ns2__getData */
        int soap_type() const { return SOAP_TYPE_ns2__getData; }
        /** Constructor with member initializations */
        ns2__getData()
        {
        }
        /** Friend allocator used by soap_new_ns2__getData(struct soap*, int) */
        friend SOAP_FMAC1 ns2__getData * SOAP_FMAC2 soap_instantiate_ns2__getData(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* soap.h:38 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (18)
/* SOAP_ENV__Header: */
struct SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header()
        {
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Header(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soap.h:38 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (19)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XSD type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code()
        {
          SOAP_ENV__Value = (char *)0;
          SOAP_ENV__Subcode = (struct SOAP_ENV__Code *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Code(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soap.h:38 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (21)
/* SOAP_ENV__Detail: */
struct SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_T assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail()
        {
          __any = (char *)0;
          __type = 0;
          fault = NULL;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Detail(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soap.h:38 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (24)
/* SOAP_ENV__Reason: */
struct SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XSD type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason()
        {
          SOAP_ENV__Text = (char *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Reason(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* soap.h:38 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (25)
/* SOAP_ENV__Fault: */
struct SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XSD type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XSD type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XSD type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XSD type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XSD type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XSD type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XSD type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XSD type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        int soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault()
        {
          faultcode = (char *)0;
          faultstring = (char *)0;
          faultactor = (char *)0;
          detail = (struct SOAP_ENV__Detail *)0;
          SOAP_ENV__Code = (struct SOAP_ENV__Code *)0;
          SOAP_ENV__Reason = (struct SOAP_ENV__Reason *)0;
          SOAP_ENV__Node = (char *)0;
          SOAP_ENV__Role = (char *)0;
          SOAP_ENV__Detail = (struct SOAP_ENV__Detail *)0;
        }
        /** Friend allocator used by soap_new_SOAP_ENV__Fault(struct soap*, int) */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* soap.h:8 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
typedef char *_QName;
#endif

/* soap.h:8 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
typedef char *_XML;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* bool has binding name 'bool' for type 'xsd:boolean' */
#ifndef SOAP_TYPE_bool
#define SOAP_TYPE_bool (8)
#endif

/* DataRep has binding name 'DataRep' for type 'DataRep' */
#ifndef SOAP_TYPE_DataRep
#define SOAP_TYPE_DataRep (13)
#endif

/* DataArray has binding name 'DataArray' for type 'DataArray' */
#ifndef SOAP_TYPE_DataArray
#define SOAP_TYPE_DataArray (11)
#endif

/* Data has binding name 'Data' for type 'Data' */
#ifndef SOAP_TYPE_Data
#define SOAP_TYPE_Data (10)
#endif

/* std::string has binding name 'std__string' for type 'xsd:string' */
#ifndef SOAP_TYPE_std__string
#define SOAP_TYPE_std__string (9)
#endif

/* ResponseBase has binding name 'ResponseBase' for type 'ResponseBase' */
#ifndef SOAP_TYPE_ResponseBase
#define SOAP_TYPE_ResponseBase (7)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (25)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (24)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (21)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (19)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (18)
#endif

/* struct ns2__getData has binding name 'ns2__getData' for type 'ns2:getData' */
#ifndef SOAP_TYPE_ns2__getData
#define SOAP_TYPE_ns2__getData (17)
#endif

/* struct ns2__getDataResponse has binding name 'ns2__getDataResponse' for type 'ns2:getDataResponse' */
#ifndef SOAP_TYPE_ns2__getDataResponse
#define SOAP_TYPE_ns2__getDataResponse (16)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (27)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (26)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (20)
#endif

/* Data * has binding name 'PointerToData' for type 'Data' */
#ifndef SOAP_TYPE_PointerToData
#define SOAP_TYPE_PointerToData (12)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (6)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
