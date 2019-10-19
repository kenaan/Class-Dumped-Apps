//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSArray, NSNumber, NSString;

@interface AWEMusCheckProfileNotificationModel : MTLModel <MTLJSONSerializing>
{
    NSArray *_userInfoList;
    NSNumber *_countOfUser;
}

+ (id)userInfoListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *countOfUser; // @synthesize countOfUser=_countOfUser;
@property(retain, nonatomic) NSArray *userInfoList; // @synthesize userInfoList=_userInfoList;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

