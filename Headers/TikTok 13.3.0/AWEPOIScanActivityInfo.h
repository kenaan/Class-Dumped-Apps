//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEChallengeModel, AWEPOICouponActivityModel, NSString;

@interface AWEPOIScanActivityInfo : NSObject
{
    AWEPOICouponActivityModel *_couponActivity;
    AWEChallengeModel *_challenge;
    NSString *_stickerId;
}

@property(copy, nonatomic) NSString *stickerId; // @synthesize stickerId=_stickerId;
@property(retain, nonatomic) AWEChallengeModel *challenge; // @synthesize challenge=_challenge;
@property(retain, nonatomic) AWEPOICouponActivityModel *couponActivity; // @synthesize couponActivity=_couponActivity;
- (void).cxx_destruct;
- (_Bool)hasValidActivity;

@end

