//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TIMOIMClientObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;

@interface AWEIMLoginManager : NSObject <TIMOIMClientObserverDelegate>
{
    _Bool _reportedInvalidTokenError;
    _Bool _hasLoginSuccess;
    NSString *_token;
    NSMutableDictionary *_tokenRequestingStatus;
}

+ (id)sharedManager;
@property(nonatomic) _Bool hasLoginSuccess; // @synthesize hasLoginSuccess=_hasLoginSuccess;
@property(retain, nonatomic) NSMutableDictionary *tokenRequestingStatus; // @synthesize tokenRequestingStatus=_tokenRequestingStatus;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)setRequestCountForUserID:(id)arg1 requestCount:(unsigned long long)arg2;
- (unsigned long long)requestCountForUserID:(id)arg1;
- (void)setRequestingTokenForUserID:(id)arg1 requesting:(_Bool)arg2;
- (_Bool)isRequestingTokenForUserID:(id)arg1;
- (id)tokenRequestContextForUserID:(id)arg1;
- (void)p_reportInvalidTokenError;
- (void)imClientIdentityTokenDidBecomeInvalid;
- (void)didFailToFetchToken;
- (void)sdk_reloginWithToken:(id)arg1 userID:(id)arg2;
- (void)sdk_loginWithToken:(id)arg1 userID:(id)arg2 secUserID:(id)arg3;
- (void)sdk_logout;
- (void)sdk_config;
- (void)manuallyKickOffPuller;
- (void)sendIMGetTokenMonitorDataSuccess:(_Bool)arg1 error:(id)arg2;
- (void)p_fetchLocalToken;
- (void)p_saveToken;
- (id)tokenKey;
- (void)p_getColdStartInterface:(unsigned long long)arg1;
- (_Bool)hasLogin;
- (void)logoutIMService;
- (void)loginIMService;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
