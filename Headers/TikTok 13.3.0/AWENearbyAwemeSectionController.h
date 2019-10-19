//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEWaterFallSectionControllerProtocol-Protocol.h"

@class AWEFeedNewNearbyWaterfallCollectionViewCell, AWEFeedNewNearbyWaterfallLiveStreamingView, AWEWaterFallSectionCollectionContext, AWEWaterFallSectionItem, NSString;

@interface AWENearbyAwemeSectionController : NSObject <AWEWaterFallSectionControllerProtocol>
{
    _Bool _isLivePlaying;
    AWEWaterFallSectionCollectionContext *collectionContext;
    long long _entranceIndex;
    AWEFeedNewNearbyWaterfallCollectionViewCell *_livingCell;
    AWEWaterFallSectionItem *_livingItem;
    AWEFeedNewNearbyWaterfallLiveStreamingView *_liveView;
    CDUnknownBlockType _needExcuteAtScrollEndedTask;
    double _startPlayTime;
    long long _pltt_coverLoadStatus;
}

@property(nonatomic) long long pltt_coverLoadStatus; // @synthesize pltt_coverLoadStatus=_pltt_coverLoadStatus;
@property(nonatomic) double startPlayTime; // @synthesize startPlayTime=_startPlayTime;
@property(copy, nonatomic) CDUnknownBlockType needExcuteAtScrollEndedTask; // @synthesize needExcuteAtScrollEndedTask=_needExcuteAtScrollEndedTask;
@property(nonatomic) _Bool isLivePlaying; // @synthesize isLivePlaying=_isLivePlaying;
@property(retain, nonatomic) AWEFeedNewNearbyWaterfallLiveStreamingView *liveView; // @synthesize liveView=_liveView;
@property(retain, nonatomic) AWEWaterFallSectionItem *livingItem; // @synthesize livingItem=_livingItem;
@property(retain, nonatomic) AWEFeedNewNearbyWaterfallCollectionViewCell *livingCell; // @synthesize livingCell=_livingCell;
@property(nonatomic) long long entranceIndex; // @synthesize entranceIndex=_entranceIndex;
@property(retain, nonatomic) AWEWaterFallSectionCollectionContext *collectionContext; // @synthesize collectionContext;
- (void).cxx_destruct;
- (void)p_bindStateAndAction;
- (void)rx_store:(id)arg1 didSetWithModule:(id)arg2;
- (id)constData;
- (id)feedList;
- (id)store;
- (CDUnknownBlockType)pltt_coverLoadCompletionForItemAtIndex:(long long)arg1;
- (id)p_awemeAtIndex:(long long)arg1;
- (id)awemeModelForZoomTransition;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (struct CGRect)previewingSourceRectForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)setNeedsTrackDuration;
- (void)trackLiveWindowDurationWithItem:(id)arg1 startPlayTime:(double)arg2;
- (void)trackLiveWindowShowWithItem:(id)arg1;
- (void)_executeCloseTask;
- (void)_stopPlayLiveAndPushTask;
- (void)_startPlayLive;
- (void)_startLiveTaskWithTargetCell:(id)arg1 item:(id)arg2 needTrackLoadTime:(_Bool)arg3;
- (void)loadLiveStreamForCurrentStateForRefresh:(_Bool)arg1;
- (void)loadLiveStreamForCurrentState;
- (_Bool)shouldLoadLiveStream;
- (void)canEnterLiveRoom:(CDUnknownBlockType)arg1;
- (void)_resumeLive;
- (void)_stopLive;
- (void)p_prefetchCoverImage;
- (void)p_addShowTrackEvent;
- (void)_refreshForLiveEnded:(id)arg1;
- (void)_handleConnectionChanged:(id)arg1;
- (void)_onApplicationWillResignActiveNotification:(id)arg1;
- (void)_onApplicationDidBecomeActiveNotification:(id)arg1;
- (double)p_itemWidth;
- (void)p_addObserver;
- (double)_collectionViewMargin;
- (void)_doVideoPrefetchImp;
- (void)_onScrollDidEnd;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)didSelectItem:(id)arg1;
- (void)willDisplayCell:(id)arg1 forItem:(id)arg2;
- (void)didEndDisplayingItem:(id)arg1;
- (void)willDisplayItem:(id)arg1;
- (double)minimumColumnSpacing;
- (double)minimumInteritemSpacing;
- (struct UIEdgeInsets)inset;
- (struct CGSize)sizeForItem:(id)arg1;
- (id)cellForItem:(id)arg1;
- (id)items;
- (void)cancelVideoPrefetch;
- (void)doVideoPrefetch;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

