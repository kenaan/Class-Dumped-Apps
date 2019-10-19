//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPSImageSize, GMSx_GPSPanoramaParameters, GMSx_GPSTileInfo, NSString;

@interface GMSx_GPSRenderInfo : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int frontend; // @dynamic frontend;
@property(nonatomic) _Bool hasFrontend; // @dynamic hasFrontend;
@property(nonatomic) _Bool hasImageFormat; // @dynamic hasImageFormat;
@property(nonatomic) _Bool hasImageId; // @dynamic hasImageId;
@property(nonatomic) _Bool hasOriginalImageSize; // @dynamic hasOriginalImageSize;
@property(nonatomic) _Bool hasPanorama; // @dynamic hasPanorama;
@property(nonatomic) _Bool hasTileInfo; // @dynamic hasTileInfo;
@property(nonatomic) int imageFormat; // @dynamic imageFormat;
@property(copy, nonatomic) NSString *imageId; // @dynamic imageId;
@property(retain, nonatomic) GMSx_GPSImageSize *originalImageSize; // @dynamic originalImageSize;
@property(retain, nonatomic) GMSx_GPSPanoramaParameters *panorama; // @dynamic panorama;
@property(retain, nonatomic) GMSx_GPSTileInfo *tileInfo; // @dynamic tileInfo;

@end

