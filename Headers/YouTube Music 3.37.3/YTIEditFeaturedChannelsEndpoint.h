//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface YTIEditFeaturedChannelsEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *channelIdsArray; // @dynamic channelIdsArray;
@property(readonly, nonatomic) unsigned long long channelIdsArray_Count; // @dynamic channelIdsArray_Count;
@property(nonatomic) _Bool hasSectionTitle; // @dynamic hasSectionTitle;
@property(copy, nonatomic) NSString *sectionTitle; // @dynamic sectionTitle;

@end
