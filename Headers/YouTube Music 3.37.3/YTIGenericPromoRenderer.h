//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTIButtonSupportedRenderers, YTICommand, YTIFormattedString, YTIIcon, YTIThumbnailDetails;

@interface YTIGenericPromoRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIButtonSupportedRenderers *actionButton; // @dynamic actionButton;
@property(retain, nonatomic) YTIThumbnailDetails *backgroundImage; // @dynamic backgroundImage;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(retain, nonatomic) YTICommand *dismissalData; // @dynamic dismissalData;
@property(copy, nonatomic) NSString *dismissalTrackingId; // @dynamic dismissalTrackingId;
@property(retain, nonatomic) YTIIcon *foregroundIcon; // @dynamic foregroundIcon;
@property(retain, nonatomic) YTIThumbnailDetails *foregroundImage; // @dynamic foregroundImage;
@property(nonatomic) _Bool hasActionButton; // @dynamic hasActionButton;
@property(nonatomic) _Bool hasBackgroundImage; // @dynamic hasBackgroundImage;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasDismissalData; // @dynamic hasDismissalData;
@property(nonatomic) _Bool hasDismissalTrackingId; // @dynamic hasDismissalTrackingId;
@property(nonatomic) _Bool hasForegroundIcon; // @dynamic hasForegroundIcon;
@property(nonatomic) _Bool hasForegroundImage; // @dynamic hasForegroundImage;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(copy, nonatomic) NSString *textColor; // @dynamic textColor;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

