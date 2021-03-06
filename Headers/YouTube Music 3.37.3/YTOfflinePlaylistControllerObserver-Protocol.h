//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTOfflinePlaylistProgress-Protocol.h"

@class NSString;

@protocol YTOfflinePlaylistControllerObserver <YTOfflinePlaylistProgress>

@optional
- (void)didDeleteVideoID:(NSString *)arg1 fromPlaylistID:(NSString *)arg2;
- (void)didDeleteVideoFromPlaylistID:(NSString *)arg1;
- (void)didAddVideoToPlaylistID:(NSString *)arg1;
- (void)didDeleteAllOfflinePlaylists;
- (void)didDeleteOfflinePlaylistsForUserID:(NSString *)arg1;
- (void)didDeleteOfflinePlaylistWithPlaylistID:(NSString *)arg1;
- (void)didSaveThumbnailWithPlaylistID:(NSString *)arg1;
- (void)didFailToSaveOfflinePlaylistWithID:(NSString *)arg1;
- (void)didSaveMetadataWithPlaylistID:(NSString *)arg1;
- (void)willSaveMetadataWithPlaylistID:(NSString *)arg1;
@end

