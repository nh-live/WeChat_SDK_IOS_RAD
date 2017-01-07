// CodeGear C++Builder
// Copyright (c) 1995, 2016 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'iOSapi.WeChatSDK.pas' rev: 31.00 (iOS)

#ifndef Iosapi_WechatsdkHPP
#define Iosapi_WechatsdkHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <Macapi.CoreFoundation.hpp>
#include <Macapi.CoreServices.hpp>
#include <Macapi.Dispatch.hpp>
#include <Macapi.Mach.hpp>
#include <Macapi.ObjCRuntime.hpp>
#include <Macapi.ObjectiveC.hpp>
#include <iOSapi.QuartzCore.hpp>
#include <iOSapi.CocoaTypes.hpp>
#include <iOSapi.Foundation.hpp>
#include <System.Rtti.hpp>

//-- user supplied -----------------------------------------------------------

namespace Iosapi
{
namespace Wechatsdk
{
//-- forward type declarations -----------------------------------------------
__interface BaseReq;
typedef System::DelphiInterface<BaseReq> _di_BaseReq;
__interface BaseReqClass;
typedef System::DelphiInterface<BaseReqClass> _di_BaseReqClass;
__interface WXMediaMessage;
typedef System::DelphiInterface<WXMediaMessage> _di_WXMediaMessage;
__interface BaseResp;
typedef System::DelphiInterface<BaseResp> _di_BaseResp;
__interface BaseRespClass;
typedef System::DelphiInterface<BaseRespClass> _di_BaseRespClass;
__interface SendMessageToWXReqClass;
typedef System::DelphiInterface<SendMessageToWXReqClass> _di_SendMessageToWXReqClass;
__interface SendMessageToWXReq;
typedef System::DelphiInterface<SendMessageToWXReq> _di_SendMessageToWXReq;
class DELPHICLASS TSendMessageToWXReq;
__interface SendMessageToWXRespClass;
typedef System::DelphiInterface<SendMessageToWXRespClass> _di_SendMessageToWXRespClass;
__interface SendMessageToWXResp;
typedef System::DelphiInterface<SendMessageToWXResp> _di_SendMessageToWXResp;
class DELPHICLASS TSendMessageToWXResp;
__interface GetMessageFromWXReqClass;
typedef System::DelphiInterface<GetMessageFromWXReqClass> _di_GetMessageFromWXReqClass;
__interface GetMessageFromWXReq;
typedef System::DelphiInterface<GetMessageFromWXReq> _di_GetMessageFromWXReq;
class DELPHICLASS TGetMessageFromWXReq;
__interface GetMessageFromWXRespClass;
typedef System::DelphiInterface<GetMessageFromWXRespClass> _di_GetMessageFromWXRespClass;
__interface GetMessageFromWXResp;
typedef System::DelphiInterface<GetMessageFromWXResp> _di_GetMessageFromWXResp;
class DELPHICLASS TGetMessageFromWXResp;
__interface ShowMessageFromWXReqClass;
typedef System::DelphiInterface<ShowMessageFromWXReqClass> _di_ShowMessageFromWXReqClass;
__interface ShowMessageFromWXReq;
typedef System::DelphiInterface<ShowMessageFromWXReq> _di_ShowMessageFromWXReq;
class DELPHICLASS TShowMessageFromWXReq;
__interface ShowMessageFromWXRespClass;
typedef System::DelphiInterface<ShowMessageFromWXRespClass> _di_ShowMessageFromWXRespClass;
__interface ShowMessageFromWXResp;
typedef System::DelphiInterface<ShowMessageFromWXResp> _di_ShowMessageFromWXResp;
class DELPHICLASS TShowMessageFromWXResp;
__interface LaunchFromWXReqClass;
typedef System::DelphiInterface<LaunchFromWXReqClass> _di_LaunchFromWXReqClass;
__interface LaunchFromWXReq;
typedef System::DelphiInterface<LaunchFromWXReq> _di_LaunchFromWXReq;
class DELPHICLASS TLaunchFromWXReq;
__interface WXApiDelegate;
typedef System::DelphiInterface<WXApiDelegate> _di_WXApiDelegate;
//-- type declarations -------------------------------------------------------
__interface  INTERFACE_UUID("{F33D8609-AC16-426C-9E44-8A5D60FC3C39}") BaseReq  : public Macapi::Objectivec::IObjectiveCInstance 
{
	
};

__interface  INTERFACE_UUID("{F33D8609-AC16-426C-9E44-8A5D60FC3C40}") BaseReqClass  : public Macapi::Objectivec::IObjectiveCClass 
{
	
};

__interface  INTERFACE_UUID("{F33D8609-AC16-426C-9E44-8A5D60FC3C41}") WXMediaMessage  : public Macapi::Objectivec::IObjectiveCClass 
{
	
};

__interface  INTERFACE_UUID("{F33D8609-AC16-426C-9E44-8A5D60FC3C42}") BaseResp  : public Macapi::Objectivec::IObjectiveCInstance 
{
	
};

__interface  INTERFACE_UUID("{F33D8609-AC16-426C-9E44-8A5D60FC3C43}") BaseRespClass  : public Macapi::Objectivec::IObjectiveCClass 
{
	
};

__interface  INTERFACE_UUID("{F33D8609-AC16-426C-9E44-8A5D60FC3C38}") SendMessageToWXReqClass  : public BaseReqClass 
{
	
};

__interface  INTERFACE_UUID("{EC993E61-496B-46E1-AFD8-6D3633ADE91D}") SendMessageToWXReq  : public BaseReq 
{
	virtual void __cdecl setText(System::PInteger text) = 0 ;
	virtual System::PInteger __cdecl text(void) = 0 ;
	virtual void __cdecl setMessage(_di_WXMediaMessage message) = 0 ;
	virtual _di_WXMediaMessage __cdecl message(void) = 0 ;
	virtual void __cdecl setBText(int bText) = 0 ;
	virtual int __cdecl bText(void) = 0 ;
	virtual void __cdecl setScene(int scene) = 0 ;
	virtual int __cdecl scene(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSendMessageToWXReq : public Macapi::Objectivec::TOCGenericImport__2<_di_SendMessageToWXReqClass,_di_SendMessageToWXReq> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_SendMessageToWXReqClass,_di_SendMessageToWXReq>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TSendMessageToWXReq(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_SendMessageToWXReqClass,_di_SendMessageToWXReq> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TSendMessageToWXReq(void) { }
	
};

#pragma pack(pop)

typedef void * PSendMessageToWXReq;

__interface  INTERFACE_UUID("{4FE1CDA8-6BF1-425B-BF6B-7EFE2AD8483A}") SendMessageToWXRespClass  : public BaseRespClass 
{
	
};

__interface  INTERFACE_UUID("{07FEF183-97FD-461E-91C6-B1EAF46D4F85}") SendMessageToWXResp  : public BaseResp 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TSendMessageToWXResp : public Macapi::Objectivec::TOCGenericImport__2<_di_SendMessageToWXRespClass,_di_SendMessageToWXResp> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_SendMessageToWXRespClass,_di_SendMessageToWXResp>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TSendMessageToWXResp(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_SendMessageToWXRespClass,_di_SendMessageToWXResp> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TSendMessageToWXResp(void) { }
	
};

#pragma pack(pop)

typedef void * PSendMessageToWXResp;

__interface  INTERFACE_UUID("{12A93889-0ABF-4310-B530-E42E0C44E489}") GetMessageFromWXReqClass  : public BaseReqClass 
{
	
};

__interface  INTERFACE_UUID("{56EEA917-72FA-4D56-B514-200CB6F9FE4C}") GetMessageFromWXReq  : public BaseReq 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGetMessageFromWXReq : public Macapi::Objectivec::TOCGenericImport__2<_di_GetMessageFromWXReqClass,_di_GetMessageFromWXReq> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_GetMessageFromWXReqClass,_di_GetMessageFromWXReq>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TGetMessageFromWXReq(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_GetMessageFromWXReqClass,_di_GetMessageFromWXReq> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TGetMessageFromWXReq(void) { }
	
};

#pragma pack(pop)

typedef void * PGetMessageFromWXReq;

__interface  INTERFACE_UUID("{F9BD5A23-52C7-4417-8C30-6328ECBCCE6E}") GetMessageFromWXRespClass  : public BaseRespClass 
{
	
};

__interface  INTERFACE_UUID("{B1264F7A-2669-4DE2-9D20-B96559CDB48C}") GetMessageFromWXResp  : public BaseResp 
{
	virtual void __cdecl setText(System::PInteger text) = 0 ;
	virtual System::PInteger __cdecl text(void) = 0 ;
	virtual void __cdecl setMessage(_di_WXMediaMessage message) = 0 ;
	virtual _di_WXMediaMessage __cdecl message(void) = 0 ;
	virtual void __cdecl setBText(int bText) = 0 ;
	virtual int __cdecl bText(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TGetMessageFromWXResp : public Macapi::Objectivec::TOCGenericImport__2<_di_GetMessageFromWXRespClass,_di_GetMessageFromWXResp> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_GetMessageFromWXRespClass,_di_GetMessageFromWXResp>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TGetMessageFromWXResp(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_GetMessageFromWXRespClass,_di_GetMessageFromWXResp> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TGetMessageFromWXResp(void) { }
	
};

#pragma pack(pop)

typedef void * PGetMessageFromWXResp;

__interface  INTERFACE_UUID("{F11EFD90-182F-45DD-B494-0B4681305240}") ShowMessageFromWXReqClass  : public BaseReqClass 
{
	
};

__interface  INTERFACE_UUID("{ABD4FB3A-7686-4504-B87C-BDFBDA098CAE}") ShowMessageFromWXReq  : public BaseReq 
{
	virtual void __cdecl setMessage(_di_WXMediaMessage message) = 0 ;
	virtual _di_WXMediaMessage __cdecl message(void) = 0 ;
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShowMessageFromWXReq : public Macapi::Objectivec::TOCGenericImport__2<_di_ShowMessageFromWXReqClass,_di_ShowMessageFromWXReq> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_ShowMessageFromWXReqClass,_di_ShowMessageFromWXReq>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TShowMessageFromWXReq(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_ShowMessageFromWXReqClass,_di_ShowMessageFromWXReq> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TShowMessageFromWXReq(void) { }
	
};

#pragma pack(pop)

typedef void * PShowMessageFromWXReq;

__interface  INTERFACE_UUID("{200C5C38-A08B-44E2-902A-916B0A069B83}") ShowMessageFromWXRespClass  : public BaseRespClass 
{
	
};

__interface  INTERFACE_UUID("{B0BA21EF-6450-41D0-8929-D0ECD468448F}") ShowMessageFromWXResp  : public BaseResp 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TShowMessageFromWXResp : public Macapi::Objectivec::TOCGenericImport__2<_di_ShowMessageFromWXRespClass,_di_ShowMessageFromWXResp> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_ShowMessageFromWXRespClass,_di_ShowMessageFromWXResp>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TShowMessageFromWXResp(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_ShowMessageFromWXRespClass,_di_ShowMessageFromWXResp> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TShowMessageFromWXResp(void) { }
	
};

#pragma pack(pop)

typedef void * PShowMessageFromWXResp;

__interface  INTERFACE_UUID("{889F431D-58BF-4106-A19C-36C004D819A0}") LaunchFromWXReqClass  : public BaseReqClass 
{
	
};

__interface  INTERFACE_UUID("{27F1A7E7-2601-4889-ABFC-4F6594EC287B}") LaunchFromWXReq  : public BaseReq 
{
	
};

#pragma pack(push,4)
class PASCALIMPLEMENTATION TLaunchFromWXReq : public Macapi::Objectivec::TOCGenericImport__2<_di_LaunchFromWXReqClass,_di_LaunchFromWXReq> 
{
	typedef Macapi::Objectivec::TOCGenericImport__2<_di_LaunchFromWXReqClass,_di_LaunchFromWXReq>  inherited;
	
public:
	/* TOCImport.Create */ inline __fastcall TLaunchFromWXReq(void * ID, void * ClsID, Macapi::Objectivec::TOCVTable* VTable) : Macapi::Objectivec::TOCGenericImport__2<_di_LaunchFromWXReqClass,_di_LaunchFromWXReq> (ID, ClsID, VTable) { }
	/* TOCImport.Destroy */ inline __fastcall virtual ~TLaunchFromWXReq(void) { }
	
};

#pragma pack(pop)

typedef void * PLaunchFromWXReq;

__interface  INTERFACE_UUID("{164D567A-B2C3-4A17-9889-7E25FADC0AEE}") WXApiDelegate  : public Macapi::Objectivec::IObjectiveC 
{
	virtual void __cdecl onReq(_di_BaseReq req) = 0 ;
	virtual void __cdecl onResp(_di_BaseResp resp) = 0 ;
};

//-- var, const, procedure ---------------------------------------------------
static constexpr System::Int8 WXSuccess = System::Int8(0x0);
static constexpr System::Int8 WXErrCodeCommon = System::Int8(-1);
static constexpr System::Int8 WXErrCodeUserCancel = System::Int8(-2);
static constexpr System::Int8 WXErrCodeSentFail = System::Int8(-3);
static constexpr System::Int8 WXErrCodeAuthDeny = System::Int8(-4);
static constexpr System::Int8 WXErrCodeUnsupport = System::Int8(-5);
static constexpr System::Int8 WXSceneSession = System::Int8(0x0);
static constexpr System::Int8 WXSceneTimeline = System::Int8(0x1);
static constexpr System::Int8 WXSceneFavorite = System::Int8(0x2);
#define libWeChatSDK u"/System/Library/Frameworks/WeChatSDK.framework/WeChatSDK"
}	/* namespace Wechatsdk */
}	/* namespace Iosapi */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IOSAPI_WECHATSDK)
using namespace Iosapi::Wechatsdk;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_IOSAPI)
using namespace Iosapi;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// Iosapi_WechatsdkHPP
