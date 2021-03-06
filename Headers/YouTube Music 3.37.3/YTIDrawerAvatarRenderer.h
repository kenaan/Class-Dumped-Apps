//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSString, YTIAccessibilitySupportedDatas, YTICommand, YTIDrawerAvatarHintSupportedRenderers, YTIDrawerAvatarSupportedContinuations, YTIFormattedString, YTIIcon, YTIThumbnailDetails;

@interface YTIDrawerAvatarRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIAccessibilitySupportedDatas *accessibility; // @dynamic accessibility;
@property(retain, nonatomic) YTIFormattedString *activityCount; // @dynamic activityCount;
@property(retain, nonatomic) YTIDrawerAvatarSupportedContinuations *continuation; // @dynamic continuation;
@property(readonly, nonatomic) int endpointsOneOfCase; // @dynamic endpointsOneOfCase;
@property(nonatomic) _Bool hasAccessibility; // @dynamic hasAccessibility;
@property(nonatomic) _Bool hasActivityCount; // @dynamic hasActivityCount;
@property(nonatomic) _Bool hasHideInCompact; // @dynamic hasHideInCompact;
@property(nonatomic) _Bool hasHint; // @dynamic hasHint;
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasSelectedIcon; // @dynamic hasSelectedIcon;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasTitle; // @dynamic hasTitle;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hideInCompact; // @dynamic hideInCompact;
@property(retain, nonatomic) YTIDrawerAvatarHintSupportedRenderers *hint; // @dynamic hint;
@property(copy, nonatomic) NSString *iconText; // @dynamic iconText;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(retain, nonatomic) YTICommand *navigationEndpoint; // @dynamic navigationEndpoint;
@property(retain, nonatomic) YTIIcon *selectedIcon; // @dynamic selectedIcon;
@property(nonatomic) int status; // @dynamic status;
@property(retain, nonatomic) YTIThumbnailDetails *thumbnail; // @dynamic thumbnail;
@property(readonly, nonatomic) int thumbnailOneofOneOfCase; // @dynamic thumbnailOneofOneOfCase;
@property(retain, nonatomic) YTIFormattedString *title; // @dynamic title;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;

@end

