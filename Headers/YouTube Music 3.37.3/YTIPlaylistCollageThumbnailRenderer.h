//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, YTIThumbnailDetails;

@interface YTIPlaylistCollageThumbnailRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *coverThumbnail; // @dynamic coverThumbnail;
@property(nonatomic) _Bool hasCoverThumbnail; // @dynamic hasCoverThumbnail;
@property(nonatomic) _Bool hasStyle; // @dynamic hasStyle;
@property(nonatomic) int style; // @dynamic style;
@property(retain, nonatomic) NSMutableArray *thumbnailDetailsArray; // @dynamic thumbnailDetailsArray;
@property(readonly, nonatomic) unsigned long long thumbnailDetailsArray_Count; // @dynamic thumbnailDetailsArray_Count;

@end

