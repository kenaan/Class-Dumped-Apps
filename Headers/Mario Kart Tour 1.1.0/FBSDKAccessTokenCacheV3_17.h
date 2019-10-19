//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBSDKAccessTokenCaching.h"

@class FBSDKAccessToken, FBSDKKeychainStoreViaBundleID, NSString;

@interface FBSDKAccessTokenCacheV3_17 : NSObject <FBSDKAccessTokenCaching>
{
    FBSDKKeychainStoreViaBundleID *_keychainStore;
}

- (void).cxx_destruct;
@property(copy, nonatomic) FBSDKAccessToken *accessToken;
- (void)clearCache;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
