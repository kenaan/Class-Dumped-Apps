//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWETabBarIntimateUserInfoModel, NSNumber;

@interface AWETabBarIntimateUserModel : AWEBaseApiModel
{
    NSNumber *_itemID;
    long long _itemType;
    NSNumber *_intimateValue;
    NSNumber *_userID;
    AWETabBarIntimateUserInfoModel *_userInfo;
}

+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWETabBarIntimateUserInfoModel *userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) NSNumber *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) NSNumber *intimateValue; // @synthesize intimateValue=_intimateValue;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
- (void).cxx_destruct;

@end

