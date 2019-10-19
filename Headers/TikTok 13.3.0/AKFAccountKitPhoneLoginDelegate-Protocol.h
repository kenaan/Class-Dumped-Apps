//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFAppEventsLoggerProvider-Protocol.h"
#import "AKFRecoveryMethodProvider-Protocol.h"

@class AKFAccountKit, NSError, NSString;
@protocol AKFAccessToken;

@protocol AKFAccountKitPhoneLoginDelegate <AKFAppEventsLoggerProvider, AKFRecoveryMethodProvider>
- (void)accountKitPhoneLoginDidStart:(AKFAccountKit *)arg1;
- (void)accountKit:(AKFAccountKit *)arg1 phoneLoginDidFailWithError:(NSError *)arg2;
- (void)accountKit:(AKFAccountKit *)arg1 phoneLoginDidCompleteWithAuthorizationCode:(NSString *)arg2 state:(NSString *)arg3;
- (void)accountKit:(AKFAccountKit *)arg1 phoneLoginDidCompleteWithToken:(id <AKFAccessToken>)arg2 state:(NSString *)arg3;
@end

