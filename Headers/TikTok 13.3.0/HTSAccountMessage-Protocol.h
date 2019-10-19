//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSError;

@protocol HTSAccountMessage <NSObject>

@optional
- (void)didFinishUnBind:(_Bool)arg1 platform:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)didFinishBind:(_Bool)arg1 platform:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)didFinishLogout:(_Bool)arg1 error:(NSError *)arg2;
- (void)didFinishLogin:(_Bool)arg1 platform:(unsigned long long)arg2 error:(NSError *)arg3;
- (void)willLoginAtPlatform:(unsigned long long)arg1;
- (void)didReceiveToutiaoAccountForLoginAtPlatform:(unsigned long long)arg1 error:(NSError *)arg2;
- (void)willRequestToutiaoAccountForLoginAtPlatform:(unsigned long long)arg1;
- (void)didReceiveThirdPartyTokenForUploadAtPlatform:(unsigned long long)arg1 authInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)didReceivedThirdPartyAuthorizationForLoginAtPlatform:(unsigned long long)arg1 authInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)willRequestThirdPartyAuthorizationForLoginAtPlatform:(unsigned long long)arg1;
@end

