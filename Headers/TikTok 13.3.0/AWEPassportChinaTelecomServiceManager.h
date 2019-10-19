//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEPassportCarrierServiceProtocol-Protocol.h"

@class NSString;

@interface AWEPassportChinaTelecomServiceManager : NSObject <AWEPassportCarrierServiceProtocol>
{
}

+ (id)sharedInstance;
+ (void)load;
- (void)forceReset;
- (void)_requestAccessTokenWithAccessCode:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestTokenDictionary:(CDUnknownBlockType)arg1;
- (void)requestSecurityPhoneNumber:(CDUnknownBlockType)arg1;
- (void)registerWithAppID:(id)arg1 appKey:(id)arg2;
- (_Bool)isAvailable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

