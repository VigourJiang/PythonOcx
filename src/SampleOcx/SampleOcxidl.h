

/* this ALWAYS GENERATED file contains the definitions for the interfaces */


 /* File created by MIDL compiler version 7.00.0555 */
/* at Tue Nov 05 20:44:09 2013
 */
/* Compiler settings for SampleOcx.idl:
    Oicf, W1, Zp8, env=Win32 (32b run), target_arch=X86 7.00.0555 
    protocol : dce , ms_ext, c_ext, robust
    error checks: allocation ref bounds_check enum stub_data 
    VC __declspec() decoration level: 
         __declspec(uuid()), __declspec(selectany), __declspec(novtable)
         DECLSPEC_UUID(), MIDL_INTERFACE()
*/
/* @@MIDL_FILE_HEADING(  ) */

#pragma warning( disable: 4049 )  /* more than 64k source lines */


/* verify that the <rpcndr.h> version is high enough to compile this file*/
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif

#include "rpc.h"
#include "rpcndr.h"

#ifndef __RPCNDR_H_VERSION__
#error this stub requires an updated version of <rpcndr.h>
#endif // __RPCNDR_H_VERSION__


#ifndef __SampleOcxidl_h__
#define __SampleOcxidl_h__

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
#pragma once
#endif

/* Forward Declarations */ 

#ifndef ___DSampleOcx_FWD_DEFINED__
#define ___DSampleOcx_FWD_DEFINED__
typedef interface _DSampleOcx _DSampleOcx;
#endif 	/* ___DSampleOcx_FWD_DEFINED__ */


#ifndef ___DSampleOcxEvents_FWD_DEFINED__
#define ___DSampleOcxEvents_FWD_DEFINED__
typedef interface _DSampleOcxEvents _DSampleOcxEvents;
#endif 	/* ___DSampleOcxEvents_FWD_DEFINED__ */


#ifndef __SampleOcx_FWD_DEFINED__
#define __SampleOcx_FWD_DEFINED__

#ifdef __cplusplus
typedef class SampleOcx SampleOcx;
#else
typedef struct SampleOcx SampleOcx;
#endif /* __cplusplus */

#endif 	/* __SampleOcx_FWD_DEFINED__ */


#ifdef __cplusplus
extern "C"{
#endif 



#ifndef __SampleOcxLib_LIBRARY_DEFINED__
#define __SampleOcxLib_LIBRARY_DEFINED__

/* library SampleOcxLib */
/* [control][version][uuid] */ 


EXTERN_C const IID LIBID_SampleOcxLib;

#ifndef ___DSampleOcx_DISPINTERFACE_DEFINED__
#define ___DSampleOcx_DISPINTERFACE_DEFINED__

/* dispinterface _DSampleOcx */
/* [uuid] */ 


EXTERN_C const IID DIID__DSampleOcx;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("2181AC23-134A-449B-975B-337FC0E7550A")
    _DSampleOcx : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSampleOcxVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSampleOcx * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSampleOcx * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSampleOcx * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSampleOcx * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSampleOcx * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSampleOcx * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSampleOcx * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSampleOcxVtbl;

    interface _DSampleOcx
    {
        CONST_VTBL struct _DSampleOcxVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSampleOcx_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSampleOcx_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSampleOcx_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSampleOcx_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSampleOcx_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSampleOcx_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSampleOcx_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSampleOcx_DISPINTERFACE_DEFINED__ */


#ifndef ___DSampleOcxEvents_DISPINTERFACE_DEFINED__
#define ___DSampleOcxEvents_DISPINTERFACE_DEFINED__

/* dispinterface _DSampleOcxEvents */
/* [uuid] */ 


EXTERN_C const IID DIID__DSampleOcxEvents;

#if defined(__cplusplus) && !defined(CINTERFACE)

    MIDL_INTERFACE("B3F7582F-B04D-4CF6-ADEC-7F37C53A83E7")
    _DSampleOcxEvents : public IDispatch
    {
    };
    
#else 	/* C style interface */

    typedef struct _DSampleOcxEventsVtbl
    {
        BEGIN_INTERFACE
        
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )( 
            _DSampleOcxEvents * This,
            /* [in] */ REFIID riid,
            /* [annotation][iid_is][out] */ 
            __RPC__deref_out  void **ppvObject);
        
        ULONG ( STDMETHODCALLTYPE *AddRef )( 
            _DSampleOcxEvents * This);
        
        ULONG ( STDMETHODCALLTYPE *Release )( 
            _DSampleOcxEvents * This);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )( 
            _DSampleOcxEvents * This,
            /* [out] */ UINT *pctinfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )( 
            _DSampleOcxEvents * This,
            /* [in] */ UINT iTInfo,
            /* [in] */ LCID lcid,
            /* [out] */ ITypeInfo **ppTInfo);
        
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )( 
            _DSampleOcxEvents * This,
            /* [in] */ REFIID riid,
            /* [size_is][in] */ LPOLESTR *rgszNames,
            /* [range][in] */ UINT cNames,
            /* [in] */ LCID lcid,
            /* [size_is][out] */ DISPID *rgDispId);
        
        /* [local] */ HRESULT ( STDMETHODCALLTYPE *Invoke )( 
            _DSampleOcxEvents * This,
            /* [in] */ DISPID dispIdMember,
            /* [in] */ REFIID riid,
            /* [in] */ LCID lcid,
            /* [in] */ WORD wFlags,
            /* [out][in] */ DISPPARAMS *pDispParams,
            /* [out] */ VARIANT *pVarResult,
            /* [out] */ EXCEPINFO *pExcepInfo,
            /* [out] */ UINT *puArgErr);
        
        END_INTERFACE
    } _DSampleOcxEventsVtbl;

    interface _DSampleOcxEvents
    {
        CONST_VTBL struct _DSampleOcxEventsVtbl *lpVtbl;
    };

    

#ifdef COBJMACROS


#define _DSampleOcxEvents_QueryInterface(This,riid,ppvObject)	\
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) ) 

#define _DSampleOcxEvents_AddRef(This)	\
    ( (This)->lpVtbl -> AddRef(This) ) 

#define _DSampleOcxEvents_Release(This)	\
    ( (This)->lpVtbl -> Release(This) ) 


#define _DSampleOcxEvents_GetTypeInfoCount(This,pctinfo)	\
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) ) 

#define _DSampleOcxEvents_GetTypeInfo(This,iTInfo,lcid,ppTInfo)	\
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) ) 

#define _DSampleOcxEvents_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)	\
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) ) 

#define _DSampleOcxEvents_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)	\
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) ) 

#endif /* COBJMACROS */


#endif 	/* C style interface */


#endif 	/* ___DSampleOcxEvents_DISPINTERFACE_DEFINED__ */


EXTERN_C const CLSID CLSID_SampleOcx;

#ifdef __cplusplus

class DECLSPEC_UUID("B8E76BD2-A539-4A75-9875-598717536A2D")
SampleOcx;
#endif
#endif /* __SampleOcxLib_LIBRARY_DEFINED__ */

/* Additional Prototypes for ALL interfaces */

/* end of Additional Prototypes */

#ifdef __cplusplus
}
#endif

#endif


