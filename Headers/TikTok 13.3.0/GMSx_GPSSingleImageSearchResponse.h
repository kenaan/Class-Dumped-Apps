//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GPSPhotoMetadata, GMSx_StatusProto;

@interface GMSx_GPSSingleImageSearchResponse : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(retain, nonatomic) GMSx_GPSPhotoMetadata *metadata; // @dynamic metadata;
@property(retain, nonatomic) GMSx_StatusProto *status; // @dynamic status;

@end

