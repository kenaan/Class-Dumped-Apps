//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "MTLJSONSerializing-Protocol.h"

@class LiveRoomModel, NSNumber, NSString;

@interface LiveEnterRoomResponseModel : MTLModel <MTLJSONSerializing>
{
    LiveRoomModel *_room;
    NSNumber *_diggColor;
    NSNumber *_payScores;
}

+ (id)roomJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *payScores; // @synthesize payScores=_payScores;
@property(retain, nonatomic) NSNumber *diggColor; // @synthesize diggColor=_diggColor;
@property(retain, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

