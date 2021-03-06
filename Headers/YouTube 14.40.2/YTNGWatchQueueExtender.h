//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTNGWatchQueueObserver.h"
#import "YTResponder.h"

@class GIMMe, NSMutableDictionary, NSString, YTNGWatchQueue;

@interface YTNGWatchQueueExtender : NSObject <YTNGWatchQueueObserver, YTResponder>
{
    YTNGWatchQueue *_queue;
    id <YTNGWatchUIStateResponderProvider> _ngwUIStateResponderProvider;
    NSString *_offlinePlaylistID;
    _Bool _offlinePlaylistActive;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    NSString *_currentPlaylistID;
    NSMutableDictionary *_pendingUpdates;
    long long _indexForFurthestUpdate;
}

@property(nonatomic) long long indexForFurthestUpdate; // @synthesize indexForFurthestUpdate=_indexForFurthestUpdate;
@property(retain, nonatomic) NSMutableDictionary *pendingUpdates; // @synthesize pendingUpdates=_pendingUpdates;
@property(nonatomic, getter=isOfflinePlaylistActive) _Bool offlinePlaylistActive; // @synthesize offlinePlaylistActive=_offlinePlaylistActive;
@property(retain, nonatomic) NSString *currentPlaylistID; // @synthesize currentPlaylistID=_currentPlaylistID;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)watchNextResponseFromPlaylistVideo:(id)arg1;
- (id)transitionsForOfflinePlaylist:(id)arg1 startIndex:(long long)arg2 endIndex:(long long)arg3;
- (void)applyOfflineNavListUpdateFromPlaylistPanelRenderer:(id)arg1 atIndex:(long long)arg2;
- (void)applyNavListUpdateFromNavListData:(id)arg1 atIndex:(long long)arg2;
- (void)maybeApplyPendingUpdateAtIndex:(long long)arg1;
- (void)didUpdateItemsWithInsertionIndexes:(id)arg1 deletionIndexes:(id)arg2;
- (void)willRemoveItemsChangingCurrentIndex:(long long)arg1 toNewIndex:(long long)arg2;
- (void)didClearWatchQueue;
- (void)didReceiveWatchNextResponse:(id)arg1 forIndex:(long long)arg2;
- (void)didSetCurrentIndexFromIndex:(long long)arg1 toIndex:(long long)arg2 withInPlaceUpdate:(_Bool)arg3;
- (void)setOfflinePlaylistID:(id)arg1;
- (id)initWithWatchQueue:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

