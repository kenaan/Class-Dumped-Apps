//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, UrlStructV2;

@interface CategoryCoverStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *awemeId; // @dynamic awemeId;
@property(retain, nonatomic) UrlStructV2 *cover; // @dynamic cover;
@property(retain, nonatomic) UrlStructV2 *dynamicCover; // @dynamic dynamicCover;
@property(nonatomic) _Bool hasAwemeId; // @dynamic hasAwemeId;
@property(nonatomic) _Bool hasCover; // @dynamic hasCover;
@property(nonatomic) _Bool hasDynamicCover; // @dynamic hasDynamicCover;

@end

