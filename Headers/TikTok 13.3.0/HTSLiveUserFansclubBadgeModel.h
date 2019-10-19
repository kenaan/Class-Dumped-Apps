//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class HTSLiveUserFansBadgeIconModel, NSString;

@interface HTSLiveUserFansclubBadgeModel : MTLModel <MTLJSONSerializing>
{
    NSString *_title;
    HTSLiveUserFansBadgeIconModel *_icons;
}

+ (id)iconsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) HTSLiveUserFansBadgeIconModel *icons; // @synthesize icons=_icons;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)mapToPbModel;
- (id)preferIcon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

