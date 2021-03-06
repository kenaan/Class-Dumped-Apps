//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NPFSubscriptionPurchase : NSObject
{
    _Bool _inFreeTrialPeriod;
    NSString *_subscriptionId;
    NSString *_productId;
    long long _startsAt;
    long long _endsAt;
    long long _revokedAt;
}

+ (void)openLink;
+ (void)purchase:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)updateOwnerships:(CDUnknownBlockType)arg1;
+ (void)recoverPurchases:(CDUnknownBlockType)arg1;
+ (void)updatePurchases:(CDUnknownBlockType)arg1;
+ (void)getPurchases:(CDUnknownBlockType)arg1;
@property long long revokedAt; // @synthesize revokedAt=_revokedAt;
@property _Bool inFreeTrialPeriod; // @synthesize inFreeTrialPeriod=_inFreeTrialPeriod;
@property long long endsAt; // @synthesize endsAt=_endsAt;
@property long long startsAt; // @synthesize startsAt=_startsAt;
@property(copy) NSString *productId; // @synthesize productId=_productId;
@property(copy) NSString *subscriptionId; // @synthesize subscriptionId=_subscriptionId;
- (void).cxx_destruct;
- (id)toDictionary;

@end

