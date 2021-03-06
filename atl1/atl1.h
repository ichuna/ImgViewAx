

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 8.00.0603 */
/* at Sun Apr 12 14:12:26 2015
 */
/* Compiler settings for atl1.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 8.00.0603 
    protocol : dce , ms_ext, c_ext
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 440
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__

#ifndef COM_NO_WINDOWS_H
#include "windows.h"
#include "ole2.h"
#endif /*COM_NO_WINDOWS_H*/

#ifndef __atl1_h__
#define __atl1_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef __Iimgx_FWD_DEFINED__
#define __Iimgx_FWD_DEFINED__
typedef interface Iimgx Iimgx;

#endif 	/* __Iimgx_FWD_DEFINED__ */


#ifndef __imgx_FWD_DEFINED__
#define __imgx_FWD_DEFINED__

#ifdef __cplusplus
typedef class imgx imgx;
#else
typedef struct imgx imgx;
#endif /* __cplusplus */

#endif 	/* __imgx_FWD_DEFINED__ */


/* header files for imported files */
#include "oaidl.h"
#include "ocidl.h"

#ifdef __cplusplus
extern "C"{
#endif 


#ifndef __Iimgx_INTERFACE_DEFINED__
#define __Iimgx_INTERFACE_DEFINED__

/* interface Iimgx */
/* [unique][helpstring][nonextensible][dual][uuid][object] */ 


EXTERN_C const IID IID_Iimgx;

#if defined(__cplusplus) && !defined(CINTERFACE)
    
    MIDL_INTERFACE("B218BAED-E7EF-4372-AF99-55FA1400755A")
    Iimgx : public IDispatch
    {
    public:
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE OpenImage( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE print( void) = 0;
        
        virtual /* [helpstring][id] */ HRESULT STDMETHODCALLTYPE print2( void) = 0;
        
    };
    
    
#else 	/* C style interface */

    typedef struct IimgxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            Iimgx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            _COM_Outptr_  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            Iimgx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            Iimgx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            Iimgx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            Iimgx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            Iimgx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            Iimgx * This,
            /* [annotation][in] */ 
            _In_  DISPID dispIdMember,
            /* [annotation][in] */ 
            _In_  REFIID riid,
            /* [annotation][in] */ 
            _In_  LCID lcid,
            /* [annotation][in] */ 
            _In_  WORD wFlags,
            /* [annotation][out][in] */ 
            _In_  DISPPARAMS *pDispParams,
            /* [annotation][out] */ 
            _Out_opt_  VARIANT *pVarResult,
            /* [annotation][out] */ 
            _Out_opt_  EXCEPINFO *pExcepInfo,
            /* [annotation][out] */ 
            _Out_opt_  UINT *puArgErr);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *OpenImage )( 
            Iimgx * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *print )( 
            Iimgx * This);
        
        /* [helpstring][id] */ HRESULT ( STDMETHODCALLTYPE *print2 )( 
            Iimgx * This);
        
        END_INTERFACE
    } IimgxVtbl;

    interface Iimgx
    {
        CONST_VTBL struct IimgxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define Iimgx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define Iimgx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define Iimgx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define Iimgx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define Iimgx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define Iimgx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define Iimgx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 


#define Iimgx_OpenImage(This)	\
    ( (This)->lpVtbl -> OpenImage(This) ) 

#define Iimgx_print(This)	\
    ( (This)->lpVtbl -> print(This) ) 

#define Iimgx_print2(This)	\
    ( (This)->lpVtbl -> print2(This) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */




#endif 	/* __Iimgx_INTERFACE_DEFINED__ */



#ifndef __atl1Lib_LIBRARY_DEFINED__
#define __atl1Lib_LIBRARY_DEFINED__

/* library atl1Lib */
/* [helpstring][version][uuid] */ 


EXTERN_C const IID LIBID_atl1Lib;

EXTERN_C const CLSID CLSID_imgx;

#ifdef __cplusplus

class DECLSPEC_UUID("28B7719A-2DBF-4956-A704-5AB4FD59B5F4")
imgx;
#endif
#endif /* __atl1Lib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


