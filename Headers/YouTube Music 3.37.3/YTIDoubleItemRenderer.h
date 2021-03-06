//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, YTIDoubleItemSupportedRenderers, YTIFormattedString;

@interface YTIDoubleItemRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIDoubleItemSupportedRenderers *firstItem; // @dynamic firstItem;
@property(retain, nonatomic) YTIFormattedString *firstItemTitle; // @dynamic firstItemTitle;
@property(nonatomic) _Bool hasFirstItem; // @dynamic hasFirstItem;
@property(nonatomic) _Bool hasFirstItemTitle; // @dynamic hasFirstItemTitle;
@property(nonatomic) _Bool hasSecondItem; // @dynamic hasSecondItem;
@property(nonatomic) _Bool hasSecondItemTitle; // @dynamic hasSecondItemTitle;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) YTIDoubleItemSupportedRenderers *secondItem; // @dynamic secondItem;
@property(retain, nonatomic) YTIFormattedString *secondItemTitle; // @dynamic secondItemTitle;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

