//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMMetadataDescription, GMSx_GMMPhotoAttribution, GMSx_GMMPhotoStatistics, GMSx_GMMRenderInfo, GMSx_GMTTSHImageKey, NSMutableArray;

@interface GMSx_GMMPhotoMetadata : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMPhotoAttribution *attribution; // @dynamic attribution;
@property(retain, nonatomic) GMSx_GMMMetadataDescription *description_p; // @dynamic description_p;
@property(nonatomic) _Bool hasAttribution; // @dynamic hasAttribution;
@property(nonatomic) _Bool hasDescription_p; // @dynamic hasDescription_p;
@property(nonatomic) _Bool hasImageKey; // @dynamic hasImageKey;
@property(nonatomic) _Bool hasRenderInfo; // @dynamic hasRenderInfo;
@property(nonatomic) _Bool hasStatistics; // @dynamic hasStatistics;
@property(retain, nonatomic) GMSx_GMTTSHImageKey *imageKey; // @dynamic imageKey;
@property(retain, nonatomic) NSMutableArray *navigationChannelArray; // @dynamic navigationChannelArray;
@property(readonly, nonatomic) unsigned long long navigationChannelArray_Count; // @dynamic navigationChannelArray_Count;
@property(retain, nonatomic) GMSx_GMMRenderInfo *renderInfo; // @dynamic renderInfo;
@property(retain, nonatomic) GMSx_GMMPhotoStatistics *statistics; // @dynamic statistics;

@end

