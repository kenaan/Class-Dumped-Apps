//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "HTSService-Protocol.h"

@class FBSDKLoginManager, NSString;

@interface AWEFacebookPermissionManager : HTSService <HTSService>
{
    FBSDKLoginManager *_loginManager;
}

@property(retain, nonatomic) FBSDKLoginManager *loginManager; // @synthesize loginManager=_loginManager;
- (void).cxx_destruct;
- (id)graghPathForPermission:(long long)arg1;
- (id)permissionString:(long long)arg1;
- (void)requestPermission:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

