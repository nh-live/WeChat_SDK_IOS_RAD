{ *********************************************************** }
{ }
{ CodeGear Delphi Runtime Library }
{ }
{ Copyright(c) 2012-2014 Embarcadero Technologies, Inc. }
{ }
{ *********************************************************** }

//
// Delphi-Objective-C Bridge
// Interfaces for Cocoa framework WeChatSDK
//

unit iOSapi.WeChatSDK;

interface

uses
  Macapi.CoreFoundation,
  Macapi.CoreServices,
  Macapi.Dispatch,
  //iOSapi.Foundation,
  Macapi.Mach,
  Macapi.ObjCRuntime,
  Macapi.ObjectiveC,
  iOSapi.QuartzCore,
  iOSapi.CocoaTypes,
  iOSapi.Foundation;

const
  WXSuccess = 0;
  WXErrCodeCommon = -1;
  WXErrCodeUserCancel = -2;
  WXErrCodeSentFail = -3;
  WXErrCodeAuthDeny = -4;
  WXErrCodeUnsupport = -5;
  WXSceneSession = 0;
  WXSceneTimeline = 1;
  WXSceneFavorite = 2;

type

  // ===== Forward declarations =====
{$M+}
  SendMessageToWXReq = interface;
  SendMessageToWXResp = interface;
  GetMessageFromWXReq = interface;
  GetMessageFromWXResp = interface;
  ShowMessageFromWXReq = interface;
  ShowMessageFromWXResp = interface;
  LaunchFromWXReq = interface;
  WXApiDelegate = interface;
  BaseReq = interface;
  BaseReqClass = interface;
  WXMediaMessage = interface;
  BaseResp = interface;
  BaseRespClass = interface;

  // ===== Interface declarations =====

  BaseReq = interface(IObjectiveCInstance)
  ['{F33D8609-AC16-426C-9E44-8A5D60FC3C39}']
  end;
  BaseReqClass = interface(IObjectiveCClass)
     ['{F33D8609-AC16-426C-9E44-8A5D60FC3C40}']
  end;
  WXMediaMessage = interface(IObjectiveCClass)
     ['{F33D8609-AC16-426C-9E44-8A5D60FC3C41}']
  end;
  BaseResp = interface(IObjectiveCInstance)
     ['{F33D8609-AC16-426C-9E44-8A5D60FC3C42}']
  end;
  BaseRespClass = interface(IObjectiveCClass)
     ['{F33D8609-AC16-426C-9E44-8A5D60FC3C43}']
  end;

  SendMessageToWXReqClass = interface(BaseReqClass)
    ['{F33D8609-AC16-426C-9E44-8A5D60FC3C38}']
  end;

  SendMessageToWXReq = interface(BaseReq)
    ['{EC993E61-496B-46E1-AFD8-6D3633ADE91D}']
    procedure setText(text: PInteger); cdecl;
    function text: PInteger; cdecl;
    procedure setMessage(message: WXMediaMessage); cdecl;
    function message: WXMediaMessage; cdecl;
    procedure setBText(bText: Integer); cdecl;
    function bText: Integer; cdecl;
    procedure setScene(scene: Integer); cdecl;
    function scene: Integer; cdecl;
  end;

  TSendMessageToWXReq = class(TOCGenericImport<SendMessageToWXReqClass,
    SendMessageToWXReq>)
  end;

  PSendMessageToWXReq = Pointer;

  SendMessageToWXRespClass = interface(BaseRespClass)
    ['{4FE1CDA8-6BF1-425B-BF6B-7EFE2AD8483A}']
  end;

  SendMessageToWXResp = interface(BaseResp)
    ['{07FEF183-97FD-461E-91C6-B1EAF46D4F85}']
  end;

  TSendMessageToWXResp = class(TOCGenericImport<SendMessageToWXRespClass,
    SendMessageToWXResp>)
  end;

  PSendMessageToWXResp = Pointer;

  GetMessageFromWXReqClass = interface(BaseReqClass)
    ['{12A93889-0ABF-4310-B530-E42E0C44E489}']
  end;

  GetMessageFromWXReq = interface(BaseReq)
    ['{56EEA917-72FA-4D56-B514-200CB6F9FE4C}']
  end;

  TGetMessageFromWXReq = class(TOCGenericImport<GetMessageFromWXReqClass,
    GetMessageFromWXReq>)
  end;

  PGetMessageFromWXReq = Pointer;

  GetMessageFromWXRespClass = interface(BaseRespClass)
    ['{F9BD5A23-52C7-4417-8C30-6328ECBCCE6E}']
  end;

  GetMessageFromWXResp = interface(BaseResp)
    ['{B1264F7A-2669-4DE2-9D20-B96559CDB48C}']
    procedure setText(text: PInteger); cdecl;
    function text: PInteger; cdecl;
    procedure setMessage(message: WXMediaMessage); cdecl;
    function message: WXMediaMessage; cdecl;
    procedure setBText(bText: Integer); cdecl;
    function bText: Integer; cdecl;
  end;

  TGetMessageFromWXResp = class(TOCGenericImport<GetMessageFromWXRespClass,
    GetMessageFromWXResp>)
  end;

  PGetMessageFromWXResp = Pointer;

  ShowMessageFromWXReqClass = interface(BaseReqClass)
    ['{F11EFD90-182F-45DD-B494-0B4681305240}']
  end;

  ShowMessageFromWXReq = interface(BaseReq)
    ['{ABD4FB3A-7686-4504-B87C-BDFBDA098CAE}']
    procedure setMessage(message: WXMediaMessage); cdecl;
    function message: WXMediaMessage; cdecl;
  end;

  TShowMessageFromWXReq = class(TOCGenericImport<ShowMessageFromWXReqClass,
    ShowMessageFromWXReq>)
  end;

  PShowMessageFromWXReq = Pointer;

  ShowMessageFromWXRespClass = interface(BaseRespClass)
    ['{200C5C38-A08B-44E2-902A-916B0A069B83}']
  end;

  ShowMessageFromWXResp = interface(BaseResp)
    ['{B0BA21EF-6450-41D0-8929-D0ECD468448F}']
  end;

  TShowMessageFromWXResp = class(TOCGenericImport<ShowMessageFromWXRespClass,
    ShowMessageFromWXResp>)
  end;

  PShowMessageFromWXResp = Pointer;

  LaunchFromWXReqClass = interface(BaseReqClass)
    ['{889F431D-58BF-4106-A19C-36C004D819A0}']
  end;

  LaunchFromWXReq = interface(BaseReq)
    ['{27F1A7E7-2601-4889-ABFC-4F6594EC287B}']
  end;

  TLaunchFromWXReq = class(TOCGenericImport<LaunchFromWXReqClass,
    LaunchFromWXReq>)
  end;

  PLaunchFromWXReq = Pointer;

  // ===== Protocol declarations =====

  WXApiDelegate = interface(IObjectiveC)
    ['{164D567A-B2C3-4A17-9889-7E25FADC0AEE}']
    procedure onReq(req: BaseReq); cdecl;
    procedure onResp(resp: BaseResp); cdecl;
  end;

  // ===== External functions =====

const
  libWeChatSDK = '/System/Library/Frameworks/WeChatSDK.framework/WeChatSDK';

implementation

{$IF defined(IOS) and NOT defined(CPUARM)}

uses
  Posix.Dlfcn;

var
  WeChatSDKModule: THandle;

{$ENDIF IOS}
{$IF defined(IOS) and NOT defined(CPUARM)}

initialization

WeChatSDKModule := dlopen(MarshaledAString(libWeChatSDK), RTLD_LAZY);

finalization

dlclose(WeChatSDKModule);
{$ENDIF IOS}

end.
