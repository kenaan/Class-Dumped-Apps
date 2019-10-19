//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUserModel.h"

@class AWEGoodsPermissionModel, AWEUserAvatarDecotationModel, AWEUserBrandInfoModel, AWEUserDouPlusToastModel, NSNumber, NSString;

@interface AWEUserModel (CommerceModel)
+ (id)avatarDecorationModelJSONTransformer;
+ (id)douPlusToastJSONTransformer;
+ (id)brandInfoModelJSONTransformer;
+ (id)goodsPermissionJSONTransformer;
+ (void)load;
@property(retain, nonatomic) NSNumber *latestGenericOrderTime;
@property(copy, nonatomic) NSString *shopIronManURL;
@property(retain, nonatomic) AWEUserAvatarDecotationModel *avatarDecorationModel;
@property(retain, nonatomic) AWEUserDouPlusToastModel *douPlusToast;
@property(retain, nonatomic) AWEUserBrandInfoModel *brandInfo;
@property(retain, nonatomic) AWEGoodsPermissionModel *goodsPermission;
@end

