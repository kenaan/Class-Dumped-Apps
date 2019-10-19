//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XLSICll.h"

@class NSMutableDictionary, NSString;

@interface XLSCll : NSObject <XLSICll>
{
    struct CommonData *_commonData;
    NSMutableDictionary *_additionalData;
    NSString *_curPage;
    NSString *_prevPage;
    NSString *_sessionID;
    shared_ptr_25b59210 _cll;
}

+ (void)apiSignInEvent:(_Bool)arg1 withState:(id)arg2;
+ (id)sharedTelemetryManager;
@property(retain, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(retain, nonatomic) NSString *prevPage; // @synthesize prevPage=_prevPage;
@property(retain, nonatomic) NSString *curPage; // @synthesize curPage=_curPage;
@property(retain, nonatomic) NSMutableDictionary *additionalData; // @synthesize additionalData=_additionalData;
@property(nonatomic) struct CommonData *commonData; // @synthesize commonData=_commonData;
@property(nonatomic) shared_ptr_25b59210 cll; // @synthesize cll=_cll;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getCurrentDeviceModel;
- (unsigned int)getNetworkConnection;
- (basic_string_c1c9ed82)NSStringToWString:(id)arg1;
- (void)buildAccessibilitySettings;
- (basic_string_c1c9ed82)buildAdditionalInfo:(id)arg1;
- (struct CommonData)buildCommonData:(unsigned int)arg1 additionalInfo:(id)arg2;
- (id)getAppBundleName;
- (id)getAppSessionId;
- (void)setPreviousPage:(id)arg1;
- (void)setCurrentPage:(id)arg1;
- (void)setTitleSessionId:(id)arg1;
- (void)setCurrentUser:(id)arg1;
- (int)serviceErrorEvent:(id)arg1 errorText:(id)arg2 errorCode:(id)arg3 withData:(id)arg4 onPage:(id)arg5;
- (int)serviceErrorEvent:(id)arg1 errorText:(id)arg2 errorCode:(id)arg3 withData:(id)arg4;
- (int)serviceErrorEvent:(id)arg1 errorText:(id)arg2 errorCode:(id)arg3;
- (int)clientErrorEvent:(id)arg1 errorText:(id)arg2 errorCode:(id)arg3 callStack:(id)arg4 withData:(id)arg5 onPage:(id)arg6;
- (int)clientErrorEvent:(id)arg1 errorText:(id)arg2 errorCode:(id)arg3 callStack:(id)arg4 withData:(id)arg5;
- (int)clientErrorEvent:(id)arg1 errorText:(id)arg2 errorCode:(id)arg3 callStack:(id)arg4;
- (int)pageActionEvent:(id)arg1 withData:(id)arg2 onPage:(id)arg3;
- (int)pageActionEvent:(id)arg1 withData:(id)arg2;
- (int)pageActionEvent:(id)arg1;
- (int)pageViewEvent:(id)arg1 withData:(id)arg2 fromPage:(id)arg3;
- (int)pageViewEvent:(id)arg1 withData:(id)arg2;
- (int)pageViewEvent:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
