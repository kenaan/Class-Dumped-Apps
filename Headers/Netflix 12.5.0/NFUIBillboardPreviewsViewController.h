//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "NFUIBillboardPreviewsOverlayViewDelegate-Protocol.h"
#import "NFUIBillboardPreviewsTitleOverlayDelegate-Protocol.h"
#import "NFUIBillboardPreviewsUICollectionDelegate-Protocol.h"
#import "NFUIFamiliarityVolumeButtonDelegateProtocol-Protocol.h"
#import "NFUIVideoPaginationViewDelegate-Protocol.h"
#import "ViewControllerOverContextDelegateProtocol-Protocol.h"

@class LolomoViewModel, NFUIBillboardPreviewsAnimationController, NFUIBillboardPreviewsFullScreenViewController, NFUIBillboardPreviewsListViewModel, NFUIBillboardPreviewsOverlayView, NFUIBillboardPreviewsPaginationView, NFUIBillboardPreviewsTitleOverlay, NFUIBillboardPreviewsUICollectionController, NFUIBillboardVolumeButton, NFUIPageControl, NFUIStaticBillboardsCollectionViewController, NFUITitleTreatmentView, NSIndexPath, NSString, UIImage, UIView;
@protocol NFUIBillboardPreviewsViewControllerDelegate;

@interface NFUIBillboardPreviewsViewController : UIViewController <NFUIVideoPaginationViewDelegate, NFUIBillboardPreviewsUICollectionDelegate, NFUIBillboardPreviewsOverlayViewDelegate, ViewControllerOverContextDelegateProtocol, NFUIBillboardPreviewsTitleOverlayDelegate, NFUIFamiliarityVolumeButtonDelegateProtocol>
{
    _Bool _isViewVisible;
    _Bool _didConfigureView;
    _Bool _isVolumeOn;
    _Bool _previewCircleMoved;
    _Bool _previewCircleMoveUserInitiated;
    _Bool _videoChanging;
    _Bool _systemVolumeChanging;
    _Bool _userInitiatedFullScreenMode;
    _Bool _fullScreenInProgress;
    _Bool _initialAudioOnSetup;
    _Bool _isActivePlayerCell;
    _Bool _previewFullScreenViewOverContext;
    id <NFUIBillboardPreviewsViewControllerDelegate> _delegate;
    NFUIBillboardPreviewsPaginationView *_videoPaginationView;
    NFUIStaticBillboardsCollectionViewController *_staticBillboardsCollection;
    NFUIBillboardPreviewsListViewModel *_listModel;
    unsigned long long _currentIndex;
    UIViewController *_delegateViewController;
    NSIndexPath *_selectedIndexPath;
    LolomoViewModel *_lolomoViewModel;
    NFUIBillboardPreviewsOverlayView *_buttonsAndTagsView;
    UIView *_playerContainer;
    NFUIPageControl *_pageControl;
    NFUIBillboardPreviewsUICollectionController *_previewsUICollection;
    NFUIBillboardPreviewsFullScreenViewController *_fullScreenController;
    NFUIBillboardPreviewsAnimationController *_fullScreenAnimator;
    NFUIBillboardVolumeButton *_volumeButton;
    NFUIBillboardPreviewsTitleOverlay *_titleOverlay;
    NFUITitleTreatmentView *_currentSourceTitleTreatmentView;
    UIImage *_currentSourceTitleTreatmentImage;
    double _inactivePauseTimestamp;
}

@property(nonatomic) double inactivePauseTimestamp; // @synthesize inactivePauseTimestamp=_inactivePauseTimestamp;
@property(nonatomic) _Bool previewFullScreenViewOverContext; // @synthesize previewFullScreenViewOverContext=_previewFullScreenViewOverContext;
@property(retain, nonatomic) UIImage *currentSourceTitleTreatmentImage; // @synthesize currentSourceTitleTreatmentImage=_currentSourceTitleTreatmentImage;
@property(retain, nonatomic) NFUITitleTreatmentView *currentSourceTitleTreatmentView; // @synthesize currentSourceTitleTreatmentView=_currentSourceTitleTreatmentView;
@property(nonatomic) _Bool isActivePlayerCell; // @synthesize isActivePlayerCell=_isActivePlayerCell;
@property(nonatomic) _Bool initialAudioOnSetup; // @synthesize initialAudioOnSetup=_initialAudioOnSetup;
@property(nonatomic) _Bool fullScreenInProgress; // @synthesize fullScreenInProgress=_fullScreenInProgress;
@property(nonatomic) _Bool userInitiatedFullScreenMode; // @synthesize userInitiatedFullScreenMode=_userInitiatedFullScreenMode;
@property(nonatomic) _Bool systemVolumeChanging; // @synthesize systemVolumeChanging=_systemVolumeChanging;
@property(nonatomic) _Bool videoChanging; // @synthesize videoChanging=_videoChanging;
@property(nonatomic) _Bool previewCircleMoveUserInitiated; // @synthesize previewCircleMoveUserInitiated=_previewCircleMoveUserInitiated;
@property(nonatomic) _Bool previewCircleMoved; // @synthesize previewCircleMoved=_previewCircleMoved;
@property(nonatomic) _Bool isVolumeOn; // @synthesize isVolumeOn=_isVolumeOn;
@property(nonatomic) _Bool didConfigureView; // @synthesize didConfigureView=_didConfigureView;
@property(retain, nonatomic) NFUIBillboardPreviewsTitleOverlay *titleOverlay; // @synthesize titleOverlay=_titleOverlay;
@property(nonatomic) __weak NFUIBillboardVolumeButton *volumeButton; // @synthesize volumeButton=_volumeButton;
@property(retain, nonatomic) NFUIBillboardPreviewsAnimationController *fullScreenAnimator; // @synthesize fullScreenAnimator=_fullScreenAnimator;
@property(retain, nonatomic) NFUIBillboardPreviewsFullScreenViewController *fullScreenController; // @synthesize fullScreenController=_fullScreenController;
@property(retain, nonatomic) NFUIBillboardPreviewsUICollectionController *previewsUICollection; // @synthesize previewsUICollection=_previewsUICollection;
@property(retain, nonatomic) NFUIPageControl *pageControl; // @synthesize pageControl=_pageControl;
@property(retain, nonatomic) UIView *playerContainer; // @synthesize playerContainer=_playerContainer;
@property(nonatomic) _Bool isViewVisible; // @synthesize isViewVisible=_isViewVisible;
@property(retain, nonatomic) NFUIBillboardPreviewsOverlayView *buttonsAndTagsView; // @synthesize buttonsAndTagsView=_buttonsAndTagsView;
@property(nonatomic) __weak LolomoViewModel *lolomoViewModel; // @synthesize lolomoViewModel=_lolomoViewModel;
@property(retain, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) __weak UIViewController *delegateViewController; // @synthesize delegateViewController=_delegateViewController;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NFUIBillboardPreviewsListViewModel *listModel; // @synthesize listModel=_listModel;
@property(readonly, nonatomic) NFUIStaticBillboardsCollectionViewController *staticBillboardsCollection; // @synthesize staticBillboardsCollection=_staticBillboardsCollection;
@property(retain, nonatomic) NFUIBillboardPreviewsPaginationView *videoPaginationView; // @synthesize videoPaginationView=_videoPaginationView;
@property(nonatomic) __weak id <NFUIBillboardPreviewsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)titleTreatmentRectForIndex:(long long)arg1;
- (id)titleTreatmentImageForIndex:(long long)arg1;
- (id)titleTreatmentViewForIndex:(long long)arg1;
- (id)currentCell;
- (unsigned long long)currentMyListStatusForIndex:(long long)arg1;
- (void)updateActionButtons;
- (void)didEndDisplaying;
- (void)willDisplay;
- (void)enterFullScreenModeIfNeeded;
- (void)prepareForEnteringFullScreen;
- (void)updateCurrentIndex:(long long)arg1;
- (_Bool)isSingleVideoEnabled;
- (_Bool)isStaticBillboardsWithPaginationEnabled;
- (_Bool)shouldHideVolumeButton;
- (_Bool)isVideoWithPaginationDotsEnabled;
- (_Bool)shouldEnablePaginationDots;
- (_Bool)isPreviewRowUIEnabled;
- (void)setupSingleVideoBillboard;
- (void)setupStaticBillboardsWithPaginationDots;
- (void)setupVideoWithPaginationDots;
- (void)setupPreviewsRowUI;
- (struct CGRect)defaultInfoOverlayViewFrame;
- (void)volumeStateChanged:(_Bool)arg1;
- (void)muteStateDidChange:(id)arg1;
- (void)volumeDidChange;
- (void)volumeDidChange:(id)arg1;
- (void)viewControllerOverContextDidDisappear:(id)arg1;
- (void)viewControllerOverContextWillDisappear:(id)arg1;
- (void)viewControllerOverContextWillAppear:(id)arg1;
- (void)handleInactivePauseExpiration;
- (void)handleEnterForeground:(id)arg1;
- (void)handleEnterBackground:(id)arg1;
- (void)handleBecomeActive:(id)arg1;
- (void)handleResignActive:(id)arg1;
- (void)overlayAddToMyListTapped:(unsigned long long)arg1;
- (void)moreInfoTappedAtIndex:(long long)arg1;
- (void)overlayMoreInfoTapped;
- (void)overlayPlayTapped;
- (void)didSelectItem:(long long)arg1;
- (void)currentItemChanged:(long long)arg1;
- (struct CGSize)itemSize;
- (void)titleViewTappedAtIndex:(long long)arg1;
- (void)viewTapped:(id)arg1;
- (void)renderComplete;
- (_Bool)isFullScreen;
- (void)stopAllVideo;
- (void)pauseAllVideo;
- (void)videoPlaybackProgressForIndex:(unsigned long long)arg1 currentTime:(double)arg2 duration:(double)arg3;
- (void)videoEndedPlaybackForIndex:(unsigned long long)arg1;
- (void)videoBeganPlaybackForIndex:(unsigned long long)arg1;
- (void)videoPlaybackReadyForIndex:(unsigned long long)arg1;
- (void)updateSubtitlesForIndex:(unsigned long long)arg1;
- (_Bool)isUserRequestedMute;
- (void)didFinishTransitionToIndex:(unsigned long long)arg1;
- (void)didTransitionWithProgress:(double)arg1 toIndex:(unsigned long long)arg2;
- (void)didBeginTransitionToIndex:(unsigned long long)arg1 fromIndex:(long long)arg2;
- (void)enterFullScreenInVideoController:(id)arg1;
- (void)handleViewOverContextDidDisappear;
- (void)handleSwipeToCloseFullScreenCompletion;
- (void)exitFullScreenMode;
- (void)enterFullScreenMode;
- (struct CGRect)sourceOverlayRect;
- (void)adjustFrameForCurrentButtonsAndTagsView;
- (void)adjustFrameForCurrentBottomGradientView;
- (void)adjustFrameForCurrentTitleTreatmentImageForIndex:(long long)arg1;
- (void)adjustFrameForCurrentTitleTreatmentImage;
- (struct CGRect)sourceBottomGradientRect;
- (id)currentSourceBottomGradientView;
- (struct CGRect)sourceTitleTreatmentRect;
- (struct CGRect)sourceTitleTreatmentRect:(long long)arg1;
- (id)sourceTitleTreatmentImage:(long long)arg1;
- (id)sourceTitleTreatmentViewForIndex:(long long)arg1;
- (_Bool)shouldStartPlayback;
- (void)recoverPlayback;
- (void)setActive:(_Bool)arg1;
- (void)pausePlaybackUserInitiated:(_Bool)arg1 forceSetInactive:(_Bool)arg2;
- (void)startPlaybackUserInitiated:(_Bool)arg1 forceSetActive:(_Bool)arg2;
- (id)currentPlayer;
- (_Bool)isEndedOrPaused;
- (_Bool)isEnded;
- (long long)definitiveItemCount;
- (void)configurePageControl;
- (void)configureButtonsAndTags;
- (void)configureTitleOverlay;
- (void)configurePreviewsUICollection:(_Bool)arg1;
- (void)configurePaginationView;
- (void)setupVolumeButton;
- (void)prepareForReuse;
- (void)showViewAfterSetupAnimated:(_Bool)arg1;
- (void)hideViewForSetup;
- (void)performInitialSetupAnimated:(_Bool)arg1;
- (void)performInitialSetup;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

