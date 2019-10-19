//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTNowPlayingDurationViewV2DataSource-Protocol.h"
#import "SPTNowPlayingDurationViewV2Delegate-Protocol.h"
#import "SPTNowPlayingTrackMetadataQueueObserver-Protocol.h"
#import "SPTNowPlayingTrackPositionObserver-Protocol.h"
#import "SPTNowPlayingVideoTimerDelegate-Protocol.h"
#import "SPTNowPlayingVideoViewV2Delegate-Protocol.h"

@class NSString, SPTNowPlayingLogger, SPTNowPlayingSkipLimitReachedMessageRequester, SPTNowPlayingVideoHeadUnitViewController, SPTNowPlayingVideoTimer, SPTNowPlayingVideoView, SPTNowPlayingVideoViewModel, SPTStatusBarToken, SPTTheme, UIView;
@protocol BMVideoSurfaceManager, SPTLinkDispatcher, SPTLocalSettings, SPTNowPlayingVideoViewControllerDelegate, SPTPodcastContextMenuProvider, SPTQueueLogger;

@interface SPTNowPlayingVideoViewController : UIViewController <SPTNowPlayingDurationViewV2DataSource, SPTNowPlayingDurationViewV2Delegate, SPTNowPlayingTrackPositionObserver, SPTNowPlayingVideoViewV2Delegate, SPTNowPlayingVideoTimerDelegate, SPTNowPlayingTrackMetadataQueueObserver>
{
    _Bool _shouldNotifyDismissal;
    _Bool _visible;
    id <SPTNowPlayingVideoViewControllerDelegate> _delegate;
    UIView *_animationView;
    SPTTheme *_theme;
    SPTNowPlayingVideoViewModel *_viewModel;
    id <BMVideoSurfaceManager> _videoSurfaceManager;
    id <SPTPodcastContextMenuProvider> _podcastContextMenuProvider;
    id <SPTLocalSettings> _localSettings;
    SPTNowPlayingSkipLimitReachedMessageRequester *_skipLimitReachedMessageRequester;
    SPTNowPlayingLogger *_logger;
    id <SPTQueueLogger> _queueLogger;
    id <SPTLinkDispatcher> _linkDispatcher;
    SPTNowPlayingVideoView *_videoView;
    SPTNowPlayingVideoTimer *_dismissControlsTimer;
    SPTStatusBarToken *_statusBarToken;
    SPTNowPlayingVideoHeadUnitViewController *_headUnitViewController;
}

@property(retain, nonatomic) SPTNowPlayingVideoHeadUnitViewController *headUnitViewController; // @synthesize headUnitViewController=_headUnitViewController;
@property(nonatomic) _Bool visible; // @synthesize visible=_visible;
@property(nonatomic) _Bool shouldNotifyDismissal; // @synthesize shouldNotifyDismissal=_shouldNotifyDismissal;
@property(retain, nonatomic) SPTStatusBarToken *statusBarToken; // @synthesize statusBarToken=_statusBarToken;
@property(retain, nonatomic) SPTNowPlayingVideoTimer *dismissControlsTimer; // @synthesize dismissControlsTimer=_dismissControlsTimer;
@property(retain, nonatomic) SPTNowPlayingVideoView *videoView; // @synthesize videoView=_videoView;
@property(readonly, nonatomic) id <SPTLinkDispatcher> linkDispatcher; // @synthesize linkDispatcher=_linkDispatcher;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) SPTNowPlayingLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) SPTNowPlayingSkipLimitReachedMessageRequester *skipLimitReachedMessageRequester; // @synthesize skipLimitReachedMessageRequester=_skipLimitReachedMessageRequester;
@property(readonly, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(readonly, nonatomic) id <SPTPodcastContextMenuProvider> podcastContextMenuProvider; // @synthesize podcastContextMenuProvider=_podcastContextMenuProvider;
@property(readonly, nonatomic) id <BMVideoSurfaceManager> videoSurfaceManager; // @synthesize videoSurfaceManager=_videoSurfaceManager;
@property(readonly, nonatomic) SPTNowPlayingVideoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIView *animationView; // @synthesize animationView=_animationView;
@property(nonatomic) __weak id <SPTNowPlayingVideoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoTimerDidFire:(id)arg1;
- (void)videoViewSurfaceDidDetach:(id)arg1;
- (void)videoViewSurfaceDidAttach:(id)arg1;
- (void)videoView:(id)arg1 didChangeControlsVisibility:(_Bool)arg2;
- (void)trackMetadataQueueDidFinishUpdating:(id)arg1;
- (void)trackMetadataQueue:(id)arg1 didMoveToRelativeTrack:(id)arg2;
- (void)nowPlayingTrackPositionDidChange:(id)arg1;
- (void)nowPlayingDurationViewDidTapSlider:(id)arg1;
- (void)nowPlayingDurationViewToggleTimeRemainingLabel:(id)arg1;
- (void)nowPlayingDurationViewDidBeginScrubbing:(id)arg1;
- (void)nowPlayingDurationViewDidEndScrubbing:(id)arg1;
- (void)nowPlayingDurationViewProgressDidChange:(id)arg1;
- (_Bool)nowPlayingDurationViewShouldAlwaysShowDurationLabels:(id)arg1;
- (id)nowPlayingDurationView:(id)arg1 timeTakenTextForSliderValue:(float)arg2;
- (id)nowPlayingDurationView:(id)arg1 timeRemainingTextForSliderValue:(float)arg2;
- (_Bool)nowPlayingSliderDisallowSeeking:(id)arg1;
- (double)nowPlayingSliderAnimationSpeed:(id)arg1;
- (double)nowPlayingSliderCurrentDuration:(id)arg1;
- (double)nowPlayingSliderCurrentPosition:(id)arg1;
- (void)updateAuxiliaryAction;
- (void)updateLoadingState;
- (void)updateEntityLabels;
- (void)seekForwardAction:(id)arg1;
- (void)seekBackAction:(id)arg1;
- (void)openTrackClickURL;
- (void)showContextMenu;
- (void)dismissAction:(id)arg1;
- (void)touchInterceptedWithGestureRecognizer:(id)arg1;
- (void)addGestureRecognizers;
- (void)addFixedConstraints;
- (void)updateButtonStates;
- (void)hookupControls;
- (void)setupSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)isLiveVideo;
- (_Bool)prefersStatusBarHidden;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)dealloc;
- (id)initWithTheme:(id)arg1 viewModel:(id)arg2 videoSurfaceManager:(id)arg3 podcastContextMenuProvider:(id)arg4 skipLimitReachedMessageRequester:(id)arg5 localSettings:(id)arg6 logger:(id)arg7 queueLogger:(id)arg8 headUnitViewController:(id)arg9 animationView:(id)arg10 linkDispatcher:(id)arg11;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
