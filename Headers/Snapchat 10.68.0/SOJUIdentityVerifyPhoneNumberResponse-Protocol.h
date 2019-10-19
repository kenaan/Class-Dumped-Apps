//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSNumber, NSString, SOJUIdentityDeepLinkResponse, SOJUIdentityVerificationNeeded;

@protocol SOJUIdentityVerifyPhoneNumberResponse <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *twoFaRecoveryCode;
@property(readonly, copy, nonatomic) NSNumber *noTentativePhoneNumber;
@property(readonly, copy, nonatomic) NSNumber *reauthRequired;
@property(readonly, copy, nonatomic) SOJUIdentityDeepLinkResponse *deepLinkResponse;
@property(readonly, copy, nonatomic) NSArray *twoFaVerifiedDevices;
@property(readonly, copy, nonatomic) SOJUIdentityVerificationNeeded *verificationNeeded;
@property(readonly, copy, nonatomic) NSString *allowedToUseCash;
@property(readonly, copy, nonatomic) NSNumber *isTwoFaEnabled;
@property(readonly, copy, nonatomic) NSString *message;
@property(readonly, copy, nonatomic) NSNumber *logged;
@end
