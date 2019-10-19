//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSString;

@interface AWEUserPermissionModel : AWEBaseApiModel
{
    long long _followToast;
    long long _originalList;
    long long _shopToast;
    long long _shareToast;
    long long _followingFollowerListToast;
    long long _followToastTypeNew;
    NSString *_profileToast;
    NSString *_shareProfileToast;
}

+ (id)followToastTypeNewJSONTransformer;
+ (id)followToastJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSString *shareProfileToast; // @synthesize shareProfileToast=_shareProfileToast;
@property(copy, nonatomic) NSString *profileToast; // @synthesize profileToast=_profileToast;
@property(nonatomic) long long followToastTypeNew; // @synthesize followToastTypeNew=_followToastTypeNew;
@property(nonatomic) long long followingFollowerListToast; // @synthesize followingFollowerListToast=_followingFollowerListToast;
@property(nonatomic) long long shareToast; // @synthesize shareToast=_shareToast;
@property(nonatomic) long long shopToast; // @synthesize shopToast=_shopToast;
@property(nonatomic) long long originalList; // @synthesize originalList=_originalList;
@property(nonatomic) long long followToast; // @synthesize followToast=_followToast;
- (void).cxx_destruct;

@end

