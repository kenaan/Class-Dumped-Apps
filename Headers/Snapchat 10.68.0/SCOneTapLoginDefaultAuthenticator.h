//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOneTapLoginAuthenticator-Protocol.h"

@class SCFideliusLoggedOutManager, SCSystemNetworkServices;
@protocol SCEndpointDeviceIDManager, SCOneTapLoginRepository;

@interface SCOneTapLoginDefaultAuthenticator : NSObject <SCOneTapLoginAuthenticator>
{
    id <SCOneTapLoginRepository> _oneTapLoginRepository;
    SCSystemNetworkServices *_networkServices;
    id <SCEndpointDeviceIDManager> _deviceIdManager;
    SCFideliusLoggedOutManager *_fideliusLoggedOutManager;
}

- (void).cxx_destruct;
- (void)_handleLoginSuccess:(id)arg1 tempIdentity:(id)arg2 username:(id)arg3 callback:(CDUnknownBlockType)arg4;
- (void)_authenticateWithConfirmedReactivation:(_Bool)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)authenticateReactivationWithOneTapLoginSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)authenticateWithOneTapLoginSuccess:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (void)removeOneTapLoginToken;
- (void)removeOneTapLogin;
- (void)persistOneTapLoginToken:(id)arg1 expiry:(long long)arg2;
- (id)initWithOneTapLoginRepository:(id)arg1 networkServices:(id)arg2 deviceIdManager:(id)arg3 fideliusLoggedOutManager:(id)arg4;

@end

