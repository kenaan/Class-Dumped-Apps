//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, YTICommand, YTIFormattedString, YTIWatchCardCallToActionSupportedRenderers, YTIWatchCardRelatedData;

@interface YTIArtistWatchCardRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *badgesArray; // @dynamic badgesArray;
@property(readonly, nonatomic) unsigned long long badgesArray_Count; // @dynamic badgesArray_Count;
@property(retain, nonatomic) YTIWatchCardCallToActionSupportedRenderers *callToAction; // @dynamic callToAction;
@property(nonatomic) _Bool collapsed; // @dynamic collapsed;
@property(retain, nonatomic) YTIFormattedString *collapsedLabel; // @dynamic collapsedLabel;
@property(nonatomic) _Bool hasCallToAction; // @dynamic hasCallToAction;
@property(nonatomic) _Bool hasCollapsed; // @dynamic hasCollapsed;
@property(nonatomic) _Bool hasCollapsedLabel; // @dynamic hasCollapsedLabel;
@property(nonatomic) _Bool hasNavigationEndpoint; // @dynamic hasNavigationEndpoint;
@property(nonatomic) _Bool hasRelatedData; // @dynamic hasRelatedData;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(retain, nonatomic) NSMutableArray *labelsArray; // @dynamic labelsArray;
@property(readonly, nonatomic) unsigned long long labelsArray_Count; // @dynamic labelsArray_Count;
@property(retain, nonatomic) NSMutableArray *listsArray; // @dynamic listsArray;
@property(readonly, nonatomic) unsigned long long listsArray_Count; // @dynamic listsArray_Count;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIWatchCardRelatedData *relatedData; // @dynamic relatedData;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

