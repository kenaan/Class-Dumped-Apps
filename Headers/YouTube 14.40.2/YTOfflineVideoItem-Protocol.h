//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTIFormattedString;

@protocol YTOfflineVideoItem <NSObject>
- (void)setInlineDownloadedIndicatorVisible:(_Bool)arg1;
- (void)updateWithOfflineStatus:(int)arg1 downloadProgress:(double)arg2 videoThumbnailStatus:(unsigned long long)arg3 transferButtonDelegate:(id <YTOfflineVideoItemDelegate>)arg4;
- (void)setSpaceUsageString:(NSString *)arg1;
- (void)setOfflineStateLabelFormattedString:(YTIFormattedString *)arg1 useBlueTypeVariant:(_Bool)arg2;
- (void)setMetadataLabelsAlpha:(double)arg1;
@end
