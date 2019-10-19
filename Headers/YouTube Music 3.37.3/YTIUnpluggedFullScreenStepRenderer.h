//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTIButtonSupportedRenderers, YTIFormattedString, YTIThumbnailDetails;

@interface YTIUnpluggedFullScreenStepRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *bodyImage; // @dynamic bodyImage;
@property(retain, nonatomic) YTIFormattedString *bodyText; // @dynamic bodyText;
@property(nonatomic) _Bool hasBodyImage; // @dynamic hasBodyImage;
@property(nonatomic) _Bool hasBodyText; // @dynamic hasBodyText;
@property(nonatomic) _Bool hasLowerButton; // @dynamic hasLowerButton;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasUpperButton; // @dynamic hasUpperButton;
@property(retain, nonatomic) NSMutableArray *impressionEndpointsArray; // @dynamic impressionEndpointsArray;
@property(readonly, nonatomic) unsigned long long impressionEndpointsArray_Count; // @dynamic impressionEndpointsArray_Count;
@property(retain, nonatomic) YTIButtonSupportedRenderers *lowerButton; // @dynamic lowerButton;
@property(retain, nonatomic) NSMutableArray *lowerButtonConfirmationsArray; // @dynamic lowerButtonConfirmationsArray;
@property(readonly, nonatomic) unsigned long long lowerButtonConfirmationsArray_Count; // @dynamic lowerButtonConfirmationsArray_Count;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIButtonSupportedRenderers *upperButton; // @dynamic upperButton;

@end
