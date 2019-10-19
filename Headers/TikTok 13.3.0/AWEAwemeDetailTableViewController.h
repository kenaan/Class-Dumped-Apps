//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAwemeDeletionMessage-Protocol.h"
#import "AWEAwemeDetailTableViewControllerProtocol-Protocol.h"
#import "AWECommentListInputViewDelegate-Protocol.h"
#import "AWECommentSearchParentViewController-Protocol.h"
#import "AWEModernFullscreenTransitionInnerContextProvider-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEZoomTransitionInnerContextProvider-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "HTSAccountMessage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEAwemeModel, AWECommentListInputView, AWECommentSearchHelper, AWEDiscoverFeedEntranceView, AWEListDataController, AWEProgressLoadingView, AWEXiGuaCommentInputView, MASConstraint, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSString, UITableView, UIView;
@protocol AWEAwemeDetailTableViewControllerDelegate, AWEYAMSceneRecordProtocol;

@interface AWEAwemeDetailTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BTDRouterViewControllerProtocol, AWEUserMessage, AWEAwemeDeletionMessage, HTSAccountMessage, AWEZoomTransitionInnerContextProvider, AWECommentListInputViewDelegate, AWEModernFullscreenTransitionInnerContextProvider, AWECommentSearchParentViewController, AWEAwemeDetailTableViewControllerProtocol>
{
    _Bool _isModernFullScreen;
    _Bool _shouldPreventStartStayTime;
    _Bool _isAppearingOnAir;
    _Bool _needPreFetch;
    _Bool _shouldEnablePushSourceTracker;
    _Bool _processingLogin;
    _Bool _hasScrolled;
    _Bool _isViewDidDisappear;
    _Bool _isViewDidAppear;
    _Bool _shouldPreventPause;
    _Bool _shouldPreventTrackStayTime;
    _Bool _lineViewsUpdated;
    _Bool _isFromIM;
    CDUnknownBlockType _dataControllerChangedBlock;
    CDUnknownBlockType _dataControllerLoadmoreBlock;
    CDUnknownBlockType _dataControllerDeleteBlock;
    CDUnknownBlockType _startStayTimeBlock;
    CDUnknownBlockType _trackStayTimeBlock;
    NSString *_originEntryEnterMethod;
    long long _loadMoreStyle;
    NSString *_awemeID;
    UITableView *_tableView;
    AWECommentListInputView *_commentInputView;
    UIView *_returnView;
    NSString *_cityInfoString;
    NSDictionary *_logExtraDict;
    NSDictionary *_userTrackAttributes;
    NSDictionary *_logPassback;
    id <AWEAwemeDetailTableViewControllerDelegate> _delegate;
    AWEListDataController *_dataController;
    NSString *_initialIDs;
    NSString *_pushPassThrouthParam;
    long long _initialIndex;
    NSString *_referString;
    NSString *_enterFrom;
    AWEDiscoverFeedEntranceView *_discoverEntranceView;
    AWEXiGuaCommentInputView *_xiguaInputView;
    AWEProgressLoadingView *_loadingView;
    AWEAwemeModel *_slideToProfileModel;
    id <AWEYAMSceneRecordProtocol> _scene;
    NSNumber *_oldOffsetY;
    double _defaultSeekToTime;
    double _lastContentOffset;
    UIView *_searchContainerView;
    AWECommentSearchHelper *_searchHelper;
    MASConstraint *_commentSearchShow;
    MASConstraint *_commentSearchHide;
    NSMutableArray *_preloadCacheArray;
    NSMutableDictionary *_preloadCacheParam;
}

+ (void)pigeonToDetailTableViewControllerWithParam:(id)arg1;
+ (id)detailTableViewControllerWithDataController:(id)arg1 initialIndex:(long long)arg2 referString:(id)arg3;
+ (void)__awe__codeRunnerRun_367;
@property(retain, nonatomic) NSMutableDictionary *preloadCacheParam; // @synthesize preloadCacheParam=_preloadCacheParam;
@property(retain, nonatomic) NSMutableArray *preloadCacheArray; // @synthesize preloadCacheArray=_preloadCacheArray;
@property(retain, nonatomic) MASConstraint *commentSearchHide; // @synthesize commentSearchHide=_commentSearchHide;
@property(retain, nonatomic) MASConstraint *commentSearchShow; // @synthesize commentSearchShow=_commentSearchShow;
@property(retain, nonatomic) AWECommentSearchHelper *searchHelper; // @synthesize searchHelper=_searchHelper;
@property(retain, nonatomic) UIView *searchContainerView; // @synthesize searchContainerView=_searchContainerView;
@property(nonatomic) double lastContentOffset; // @synthesize lastContentOffset=_lastContentOffset;
@property(nonatomic) double defaultSeekToTime; // @synthesize defaultSeekToTime=_defaultSeekToTime;
@property(nonatomic) _Bool isFromIM; // @synthesize isFromIM=_isFromIM;
@property(nonatomic) _Bool lineViewsUpdated; // @synthesize lineViewsUpdated=_lineViewsUpdated;
@property(retain, nonatomic) NSNumber *oldOffsetY; // @synthesize oldOffsetY=_oldOffsetY;
@property(nonatomic) _Bool shouldPreventTrackStayTime; // @synthesize shouldPreventTrackStayTime=_shouldPreventTrackStayTime;
@property(nonatomic) _Bool shouldPreventPause; // @synthesize shouldPreventPause=_shouldPreventPause;
@property(nonatomic) _Bool isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
@property(nonatomic) _Bool isViewDidDisappear; // @synthesize isViewDidDisappear=_isViewDidDisappear;
@property(nonatomic) _Bool hasScrolled; // @synthesize hasScrolled=_hasScrolled;
@property(retain, nonatomic) id <AWEYAMSceneRecordProtocol> scene; // @synthesize scene=_scene;
@property(retain, nonatomic) AWEAwemeModel *slideToProfileModel; // @synthesize slideToProfileModel=_slideToProfileModel;
@property(retain, nonatomic) AWEProgressLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) _Bool processingLogin; // @synthesize processingLogin=_processingLogin;
@property(retain, nonatomic) AWEXiGuaCommentInputView *xiguaInputView; // @synthesize xiguaInputView=_xiguaInputView;
@property(retain, nonatomic) AWEDiscoverFeedEntranceView *discoverEntranceView; // @synthesize discoverEntranceView=_discoverEntranceView;
@property(nonatomic) _Bool shouldEnablePushSourceTracker; // @synthesize shouldEnablePushSourceTracker=_shouldEnablePushSourceTracker;
@property(nonatomic) _Bool needPreFetch; // @synthesize needPreFetch=_needPreFetch;
@property(nonatomic) _Bool isAppearingOnAir; // @synthesize isAppearingOnAir=_isAppearingOnAir;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) long long initialIndex; // @synthesize initialIndex=_initialIndex;
@property(copy, nonatomic) NSString *pushPassThrouthParam; // @synthesize pushPassThrouthParam=_pushPassThrouthParam;
@property(copy, nonatomic) NSString *initialIDs; // @synthesize initialIDs=_initialIDs;
@property(retain, nonatomic) AWEListDataController *dataController; // @synthesize dataController=_dataController;
@property(nonatomic) __weak id <AWEAwemeDetailTableViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSDictionary *logPassback; // @synthesize logPassback=_logPassback;
@property(retain, nonatomic) NSDictionary *userTrackAttributes; // @synthesize userTrackAttributes=_userTrackAttributes;
@property(copy, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(copy, nonatomic) NSString *cityInfoString; // @synthesize cityInfoString=_cityInfoString;
@property(retain, nonatomic) UIView *returnView; // @synthesize returnView=_returnView;
@property(retain, nonatomic) AWECommentListInputView *commentInputView; // @synthesize commentInputView=_commentInputView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *awemeID; // @synthesize awemeID=_awemeID;
@property(nonatomic) _Bool shouldPreventStartStayTime; // @synthesize shouldPreventStartStayTime=_shouldPreventStartStayTime;
@property(nonatomic) _Bool isModernFullScreen; // @synthesize isModernFullScreen=_isModernFullScreen;
@property(nonatomic) long long loadMoreStyle; // @synthesize loadMoreStyle=_loadMoreStyle;
@property(copy, nonatomic) NSString *originEntryEnterMethod; // @synthesize originEntryEnterMethod=_originEntryEnterMethod;
@property(copy, nonatomic) CDUnknownBlockType trackStayTimeBlock; // @synthesize trackStayTimeBlock=_trackStayTimeBlock;
@property(copy, nonatomic) CDUnknownBlockType startStayTimeBlock; // @synthesize startStayTimeBlock=_startStayTimeBlock;
@property(copy, nonatomic) CDUnknownBlockType dataControllerDeleteBlock; // @synthesize dataControllerDeleteBlock=_dataControllerDeleteBlock;
@property(copy, nonatomic) CDUnknownBlockType dataControllerLoadmoreBlock; // @synthesize dataControllerLoadmoreBlock=_dataControllerLoadmoreBlock;
@property(copy, nonatomic) CDUnknownBlockType dataControllerChangedBlock; // @synthesize dataControllerChangedBlock=_dataControllerChangedBlock;
- (void).cxx_destruct;
- (void)hideReturnAndCommentViewWhenInitialize;
- (void)hideReturnAndCommentViewIfNeed;
- (id)visibleLiveCells;
- (id)visibleDetailCells;
- (_Bool)canSlide;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)awesst_additionalTrackerParams;
- (_Bool)awesst_isVideoPlayViewController;
- (id)awesst_enterFrom;
- (id)awemeModel;
- (void)dismissCommentSearchViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)showCommentSearchViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)currentLiveRoomID;
- (void)closeWithAnimated:(_Bool)arg1;
- (id)awemeModelWithIndex:(long long)arg1;
- (void)requestImageWithURLArray:(id)arg1;
- (void)preloadImageForAweme:(id)arg1;
- (void)preloadCoverImageWithIndexPath:(id)arg1;
- (void)commentInputView:(id)arg1 didChangeHeightWithDiff:(double)arg2;
- (void)growingTextViewDidChange:(id)arg1;
- (void)commentInputViewEmoticonButtonClicked:(id)arg1;
- (_Bool)commentInputViewShouldReturn:(id)arg1;
- (_Bool)commentInputViewShouldBeginEditing:(id)arg1;
- (id)currentDisplayingAweme;
- (id)awe_preferredTransitionProviderClassNameForContext:(id)arg1;
- (void)reloadWithDataController:(id)arg1 initialIndex:(long long)arg2;
- (void)reloadDataForDataControllerChange;
- (id)modernTransitionContext;
- (_Bool)modernTransitionItemHasScrolled;
- (long long)modernTransitionItemOffset;
- (long long)zoomTransitionItemOffset;
- (void)videoTopStatusChanged:(id)arg1;
- (void)transition_performCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (_Bool)transition_enableCustomActionForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)transition_destinatedViewControllerForSlideDirection:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (void)transition_didStartTransitionWithContext:(id)arg1;
- (void)didPostAweme:(id)arg1;
- (void)_windowDidResignKeyNotification:(id)arg1;
- (void)_windowDidBecomeKeyNotification:(id)arg1;
- (void)playIfActive;
- (void)_onAwemeVideoPlayGuideViewTouched:(id)arg1;
- (void)_appDidBecomeActive:(id)arg1;
- (void)_appWillResignActive:(id)arg1;
- (long long)_findFirstItemWithID:(id)arg1;
- (void)_onAwemeDeleted:(id)arg1;
- (void)_onAwemeDeleteNotification:(id)arg1;
- (_Bool)isActive;
- (void)willShowKeyboard:(id)arg1;
- (unsigned long long)_currentVisibleCellIndex;
- (void)_removeNotifications;
- (void)_addNotifications;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)_getModelSafelyForRow:(long long)arg1;
- (void)_doVideoPrefetchCacheSizeTrack:(id)arg1;
- (void)__doVideoPrefetch:(long long)arg1;
- (void)_doVideoPrefetch;
- (void)_cancelVideoPrefetch;
- (void)videoVoteFinished;
- (void)videoDownloadFinished:(id)arg1;
- (void)_onScrollDidEnd;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (double)_cellHeight;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateLineViewsWithModel:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)deleteAwemeWithIDs:(id)arg1;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishLogin;
- (void)willStartLogin;
- (void)willLoginAtPlatform:(unsigned long long)arg1;
- (void)stop;
- (void)pauseLive;
- (void)playLive;
- (void)pause;
- (void)play;
- (void)didMoveToParentViewController:(id)arg1;
- (void)trackBack;
- (void)trackStaytime;
- (void)startTimingForTrack;
- (void)handleAppWillResignActive;
- (void)handleAppBecomeActive;
- (void)_addObervers;
- (void)addDiscoverEntranceView;
- (_Bool)shouldShowDiscoverEntranceView;
- (void)onDiscoverButtonClicked:(id)arg1;
- (void)updateCommentInputView:(id)arg1;
- (void)configureXiGuaInputView;
- (_Bool)isFromGeneralSearchOrVideoSearch;
- (void)setFeedColumntypeIfNeeded;
- (void)loadMoreForDiscoverDetailStyle;
- (void)loadMoreForOldStyle;
- (void)loadmore;
- (void)loadPrevious;
- (void)initialFetch;
- (void)initialFetchWithIDs:(id)arg1;
- (void)initialFetchFromIM;
- (void)addLoadPreviousIfNeeded;
- (void)addLoadMoreIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithDataController:(id)arg1 IDs:(id)arg2 initialIndex:(long long)arg3 referString:(id)arg4 logExtraDict:(id)arg5;
- (id)initWithDataController:(id)arg1 IDs:(id)arg2 initialIndex:(long long)arg3 referString:(id)arg4;
- (id)initWithDataController:(id)arg1 initialIndex:(long long)arg2 referString:(id)arg3 enterFrom:(id)arg4 logExtraDict:(id)arg5;
- (id)initWithDataController:(id)arg1 initialIndex:(long long)arg2 referString:(id)arg3 logExtraDict:(id)arg4;
- (id)initWithDataController:(id)arg1 initialIndex:(long long)arg2 referString:(id)arg3;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

