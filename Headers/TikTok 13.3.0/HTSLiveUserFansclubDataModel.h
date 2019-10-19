//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSLiveUserFansclubBadgeModel, NSArray, NSNumber, NSString;

@interface HTSLiveUserFansclubDataModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_anchorID;
    NSString *_clubName;
    NSNumber *_level;
    NSNumber *_status;
    HTSLiveUserFansclubBadgeModel *_badge;
    NSArray *_availableGiftIds;
}

+ (id)badgeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(copy, nonatomic) NSArray *availableGiftIds; // @synthesize availableGiftIds=_availableGiftIds;
@property(retain, nonatomic) HTSLiveUserFansclubBadgeModel *badge; // @synthesize badge=_badge;
@property(copy, nonatomic) NSNumber *status; // @synthesize status=_status;
@property(copy, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *clubName; // @synthesize clubName=_clubName;
@property(copy, nonatomic) NSNumber *anchorID; // @synthesize anchorID=_anchorID;
- (void).cxx_destruct;
- (id)mapToPbModel;
- (_Bool)isActive;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

