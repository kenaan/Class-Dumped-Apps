//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEModernFullscreenTransitionOuterContextProvider-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEAwemeModel, AWEModernFeedSectionReusablePool, NSMutableArray, NSString, NSTimer, UITableView;
@protocol AWEVideoFeedViewScrollDelegate;

@interface AWEVideoFeedViewController : UIViewController <AWEModernFullscreenTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, UITableViewDataSource, UITableViewDelegate>
{
    float *_speedHistory;
    _Bool _scrollDetectionEnabled;
    _Bool _isAppearing;
    id <AWEVideoFeedViewScrollDelegate> _scrollDelegate;
    UITableView *_tableView;
    NSString *_referString;
    NSMutableArray *_displayItems;
    CDUnknownBlockType _loadMoreBlock;
    CDUnknownBlockType _applicationWillResignActiveBlock;
    CDUnknownBlockType _applicationDidBecomeActiveBlock;
    CDUnknownBlockType _scrollUpActivationBlock;
    CDUnknownBlockType _scrollDownActivationBlock;
    NSTimer *_activateTimer;
    AWEModernFeedSectionReusablePool *_sectionReusablePool;
    double _bottomTriggerThreshold;
    long long _bottomTriggerIndex;
    double _topTriggerThreshold;
    long long _topTriggerIndex;
    long long _willActiveIndex;
    long long _forceActiveIndex;
    long long _currentActiveIndex;
    double _willShowCellBottomTriggerThreshold;
    double _willShowCellTopTriggerThreshold;
    long long _willShowCellBottomTriggerIndex;
    long long _willShowCellTopTriggerIndex;
    double _scrollingSpeed;
    long long _scrollTriggerCount;
    double _lastDidScrollTime;
    double _lastContentOffset;
    struct CGPoint _savedFeedContentOffset;
    struct CGPoint _originalScrollViewOffset;
}

@property(nonatomic) _Bool isAppearing; // @synthesize isAppearing=_isAppearing;
@property(nonatomic) struct CGPoint originalScrollViewOffset; // @synthesize originalScrollViewOffset=_originalScrollViewOffset;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double lastDidScrollTime; // @synthesize lastDidScrollTime=_lastDidScrollTime;
@property(nonatomic) long long scrollTriggerCount; // @synthesize scrollTriggerCount=_scrollTriggerCount;
@property(nonatomic) double scrollingSpeed; // @synthesize scrollingSpeed=_scrollingSpeed;
@property(nonatomic) struct CGPoint savedFeedContentOffset; // @synthesize savedFeedContentOffset=_savedFeedContentOffset;
@property(nonatomic) _Bool scrollDetectionEnabled; // @synthesize scrollDetectionEnabled=_scrollDetectionEnabled;
@property(nonatomic) long long willShowCellTopTriggerIndex; // @synthesize willShowCellTopTriggerIndex=_willShowCellTopTriggerIndex;
@property(nonatomic) long long willShowCellBottomTriggerIndex; // @synthesize willShowCellBottomTriggerIndex=_willShowCellBottomTriggerIndex;
@property(nonatomic) double willShowCellTopTriggerThreshold; // @synthesize willShowCellTopTriggerThreshold=_willShowCellTopTriggerThreshold;
@property(nonatomic) double willShowCellBottomTriggerThreshold; // @synthesize willShowCellBottomTriggerThreshold=_willShowCellBottomTriggerThreshold;
@property(nonatomic) long long currentActiveIndex; // @synthesize currentActiveIndex=_currentActiveIndex;
@property(nonatomic) long long forceActiveIndex; // @synthesize forceActiveIndex=_forceActiveIndex;
@property(nonatomic) long long willActiveIndex; // @synthesize willActiveIndex=_willActiveIndex;
@property(nonatomic) long long topTriggerIndex; // @synthesize topTriggerIndex=_topTriggerIndex;
@property(nonatomic) double topTriggerThreshold; // @synthesize topTriggerThreshold=_topTriggerThreshold;
@property(nonatomic) long long bottomTriggerIndex; // @synthesize bottomTriggerIndex=_bottomTriggerIndex;
@property(nonatomic) double bottomTriggerThreshold; // @synthesize bottomTriggerThreshold=_bottomTriggerThreshold;
@property(retain, nonatomic) AWEModernFeedSectionReusablePool *sectionReusablePool; // @synthesize sectionReusablePool=_sectionReusablePool;
@property(retain, nonatomic) NSTimer *activateTimer; // @synthesize activateTimer=_activateTimer;
@property(copy, nonatomic) CDUnknownBlockType scrollDownActivationBlock; // @synthesize scrollDownActivationBlock=_scrollDownActivationBlock;
@property(copy, nonatomic) CDUnknownBlockType scrollUpActivationBlock; // @synthesize scrollUpActivationBlock=_scrollUpActivationBlock;
@property(copy, nonatomic) CDUnknownBlockType applicationDidBecomeActiveBlock; // @synthesize applicationDidBecomeActiveBlock=_applicationDidBecomeActiveBlock;
@property(copy, nonatomic) CDUnknownBlockType applicationWillResignActiveBlock; // @synthesize applicationWillResignActiveBlock=_applicationWillResignActiveBlock;
@property(copy, nonatomic) CDUnknownBlockType loadMoreBlock; // @synthesize loadMoreBlock=_loadMoreBlock;
@property(retain, nonatomic) NSMutableArray *displayItems; // @synthesize displayItems=_displayItems;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) __weak id <AWEVideoFeedViewScrollDelegate> scrollDelegate; // @synthesize scrollDelegate=_scrollDelegate;
- (void).cxx_destruct;
- (id)awesst_additionalTrackerParams;
- (void)didEndShowing;
- (void)didStarShowing;
- (double)videoFeedTopMargin;
- (_Bool)isSingleTapEnterDetail;
- (void)handleWillShowFullScreenVideoFeed;
- (void)singleTapEnterDetail:(long long)arg1;
- (void)scrollToDisplayItemAtIndex:(long long)arg1 offset:(double)arg2 animated:(_Bool)arg3;
- (void)videoPlayerStartPlay;
- (void)doCommonInit;
- (void)cancelVideoPrefetch;
- (void)startVideoPrefetch;
- (struct CGPoint)contentOffsetForScrollView:(id)arg1;
- (double)tableViewHeight;
- (double)tableViewTopMargin;
- (_Bool)shouldNotActivateItem;
- (double)extraHeightAtIndex:(long long)arg1;
- (id)sectionSearchType;
- (id)sectionSearchLogPassback;
- (id)sectionBindedData;
- (_Bool)isSectionDataLoading;
- (void)reloadDataListWithArray:(id)arg1 dataHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)isActive;
- (double)minimunContentOffsetY;
- (long long)currentPlayingIndex;
- (void)removeDisplayItemsInRange:(struct _NSRange)arg1;
- (void)removeAllDisplayItems;
- (void)deactivateTimer;
- (void)resetThresholds;
- (id)typeForSection:(long long)arg1;
- (void)deleteItemAtIndex:(long long)arg1;
- (void)deleteItemsAtIndexes:(id)arg1;
- (void)insertDisplayObjectsFromArray:(id)arg1 dataHandler:(CDUnknownBlockType)arg2 intoIndex:(CDUnknownBlockType)arg3 dataPreHandleBlock:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5 needConcurrentExec:(_Bool)arg6;
- (void)didEndScroll;
- (void)endForceActivatingItem;
- (void)forceActivateItemAtIndex:(long long)arg1;
- (void)deactivateItemAtIndex:(long long)arg1 withReason:(unsigned long long)arg2;
- (void)activateItemAtIndex:(long long)arg1 withReason:(unsigned long long)arg2 modifyCurrentActiveIndex:(_Bool)arg3 dequeueIfNeeded:(_Bool)arg4;
- (void)activateItemAtIndex:(long long)arg1 withReason:(unsigned long long)arg2 modifyCurrentActiveIndex:(_Bool)arg3;
- (void)activateItemAtIndex:(long long)arg1 withReason:(unsigned long long)arg2;
- (void)actualActivatePresetItem;
- (void)delayActivateItemAtIndex:(long long)arg1;
- (void)deactivateCurrentItem;
- (void)p_activateCurrentItemWithReason:(unsigned long long)arg1;
- (long long)p_currentItemToActivateWithReason:(unsigned long long)arg1 dequeueIfNeeded:(_Bool)arg2 needActualActivate:(_Bool)arg3;
- (void)activateCurrentItemWithReason:(unsigned long long)arg1;
- (long long)calculateIndexToActivate;
- (long long)refreshDataFromIndex;
- (void)trackShowForIndex:(long long)arg1;
- (long long)rowCountForMeta:(id)arg1;
- (void)updateMetaForSection:(long long)arg1 fromOldMeta:(id)arg2 toNewMeta:(id)arg3 animated:(_Bool)arg4;
- (id)sectionControllerForSection:(long long)arg1 dequeueIfNeeded:(_Bool)arg2;
- (id)sectionControllerForSection:(long long)arg1;
- (id)metaForCellModel:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (struct CGPoint)centerForCell:(id)arg1;
- (struct CGRect)frameForCell:(id)arg1;
- (void)didChangedLanguage;
- (void)pauseVideo;
- (void)playVideoIfActive;
- (void)windowDidResignKeyNotification:(id)arg1;
- (void)windowDidBecomeKeyNotification:(id)arg1;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)addObservers;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)init;
- (_Bool)zoomTransitionWantsFromVCAnimation;
- (struct CGRect)targetViewFrame;
- (id)targetViewControllerSnapshotView;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (id)modernTransitionContext;
- (void)modernTransitionUpdateOffset:(long long)arg1 isScrolled:(_Bool)arg2;
@property(nonatomic) long long transitionToIndex;
@property(nonatomic) long long transitionIndex;
@property(retain, nonatomic) AWEAwemeModel *originModel;
- (void)trackStayTimeFromTransitioin;
- (void)startStayTimeFromTransitioin;
- (void)updateTransionIndex;
- (void)singleTapEnterDetail:(long long)arg1;
- (void)cleanObservers;
- (void)didDeleteAweme:(_Bool)arg1 awemeID:(id)arg2;
- (long long)displayItemSectionInAwemes:(long long)arg1;
- (long long)awemeIndexInDisplayItems:(long long)arg1;
- (id)awemeModelAtIndex:(long long)arg1;
- (void)prefetchVideoForModel:(id)arg1;
- (void)cancelVideoPrefetch;
- (void)prefetchVideo;
- (void)startVideoPrefetch;
- (void)onVideoDownloadFinished:(id)arg1;
- (void)doCommonInit;
- (void)handleConnectionChanged:(id)arg1;
- (void)didDeleteAweme:(id)arg1;
- (void)configConnectionChangedNotificationWithDisconnectBlock:(CDUnknownBlockType)arg1 connectBlock:(CDUnknownBlockType)arg2;
- (void)configDeleteAwemeNotificitionWithBlock:(CDUnknownBlockType)arg1 shouldHandleNoti:(CDUnknownBlockType)arg2;
- (void)configDeleteAwemeNotificitionWithBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool needPreFetch;
- (void)setNetworkDisconnectBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)networkDisconnectBlock;
- (void)setNetworkConnectBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)networkConnectBlock;
- (void)setShouldHandleNotiBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)shouldHandleNotiBlock;
- (void)setDidDeleteAwemeBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)didDeleteAwemeBlock;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)updateUserRemarkName:(id)arg1 remarkName:(id)arg2;
- (_Bool)isSectionDataLoading;
- (void)setBadNetworkViewWithError:(id)arg1;
- (_Bool)noAwemeExistInList;
- (id)liveCellModelAtIndex:(long long)arg1;
- (id)awemeCellFrameModelAtIndex:(long long)arg1;
- (double)extraHeightAtIndex:(long long)arg1;
- (void)dataControllerLoadMoreWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dataControllerRefreshWithCompletion:(CDUnknownBlockType)arg1 needBadNetworkView:(_Bool)arg2;
- (id)dataController;
- (void)configLoadMoreFooterWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)configRefreshHeaderWithCompletionBlock:(CDUnknownBlockType)arg1 needBadNetworkView:(_Bool)arg2;
- (void)configSectionHeader;
- (void)createRepostInsertToDisplay:(id)arg1 insertIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (id)updateCellModel:(id)arg1 withContainerWidth:(double)arg2;
- (void)insertStaticDisplayObjectsFromArray:(id)arg1 intoIndex:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertDisplayObjectsFromArray:(id)arg1 intoIndex:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addDisplayObjectsFromArray:(id)arg1 completion:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

