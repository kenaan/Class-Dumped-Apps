//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class StarAtlasLinkStructV2;

@interface AwemeStarAtlasStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLinkInfo; // @dynamic hasLinkInfo;
@property(nonatomic) _Bool hasReviewStatus; // @dynamic hasReviewStatus;
@property(retain, nonatomic) StarAtlasLinkStructV2 *linkInfo; // @dynamic linkInfo;
@property(nonatomic) int reviewStatus; // @dynamic reviewStatus;

@end

