//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBBoolValue;

@interface SCAdsTileImpressionTrack : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsViewed; // @dynamic hasIsViewed;
@property(nonatomic) _Bool hasIsViewedAppSession; // @dynamic hasIsViewedAppSession;
@property(nonatomic) _Bool hasTileTapped; // @dynamic hasTileTapped;
@property(retain, nonatomic) GPBBoolValue *isViewed; // @dynamic isViewed;
@property(retain, nonatomic) GPBBoolValue *isViewedAppSession; // @dynamic isViewedAppSession;
@property(retain, nonatomic) GPBBoolValue *tileTapped; // @dynamic tileTapped;

@end

