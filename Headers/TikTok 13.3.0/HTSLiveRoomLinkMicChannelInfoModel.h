//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class NSNumber, NSString;

@interface HTSLiveRoomLinkMicChannelInfoModel : MTLModel <MTLJSONSerializing>
{
    NSNumber *_layout;
    NSNumber *_vendor;
    NSNumber *_dimension;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) NSNumber *dimension; // @synthesize dimension=_dimension;
@property(readonly, nonatomic) NSNumber *vendor; // @synthesize vendor=_vendor;
@property(readonly, nonatomic) NSNumber *layout; // @synthesize layout=_layout;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

