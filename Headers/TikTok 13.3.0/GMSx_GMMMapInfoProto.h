//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMMapPointProto;

@interface GMSx_GMMMapInfoProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMMapPointProto *center; // @dynamic center;
@property(nonatomic) _Bool hasCenter; // @dynamic hasCenter;
@property(nonatomic) _Bool hasLatitudeSpan; // @dynamic hasLatitudeSpan;
@property(nonatomic) _Bool hasLongitudeSpan; // @dynamic hasLongitudeSpan;
@property(nonatomic) _Bool hasZoomLevel; // @dynamic hasZoomLevel;
@property(nonatomic) int latitudeSpan; // @dynamic latitudeSpan;
@property(nonatomic) int longitudeSpan; // @dynamic longitudeSpan;
@property(nonatomic) int zoomLevel; // @dynamic zoomLevel;

@end

