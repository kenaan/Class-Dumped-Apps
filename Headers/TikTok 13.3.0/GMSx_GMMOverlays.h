//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMCursorOverlayFormat, GMSx_GMMOverlay, GMSx_GMMTargetOverlayFormat;

@interface GMSx_GMMOverlays : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMOverlay *cursor; // @dynamic cursor;
@property(retain, nonatomic) GMSx_GMMCursorOverlayFormat *cursorFormat; // @dynamic cursorFormat;
@property(nonatomic) _Bool hasCursor; // @dynamic hasCursor;
@property(nonatomic) _Bool hasCursorFormat; // @dynamic hasCursorFormat;
@property(nonatomic) _Bool hasTarget; // @dynamic hasTarget;
@property(nonatomic) _Bool hasTargetFormat; // @dynamic hasTargetFormat;
@property(retain, nonatomic) GMSx_GMMOverlay *target; // @dynamic target;
@property(retain, nonatomic) GMSx_GMMTargetOverlayFormat *targetFormat; // @dynamic targetFormat;

@end

