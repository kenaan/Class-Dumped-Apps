//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class AWEUserModel;

@interface AWEApproveFollowRequestNotificationModel : AWEBaseApiModel
{
    AWEUserModel *_userInfo;
}

+ (id)userInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWEUserModel *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;

@end

