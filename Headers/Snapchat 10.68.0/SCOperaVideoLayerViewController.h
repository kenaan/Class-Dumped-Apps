//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaLayerViewController.h"

#import "SCAudioStitchControlsViewDelegate-Protocol.h"
#import "SCAudioStitchPlaybackHandlerDelegate-Protocol.h"
#import "SCEventListener-Protocol.h"
#import "SCOperaLayerViewControllerMediaContainer-Protocol.h"
#import "SCOperaLayerViewControllerShareableMediaSource-Protocol.h"
#import "SCOperaMediaLogViewable-Protocol.h"
#import "SCOperaVideoViewControllingDataSource-Protocol.h"
#import "SCOperaVideoViewControllingDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AVAsset, AVPlayer, AVPlayerItemTrack, CALayer, CAShapeLayer, FBKVOController, NSArray, NSError, NSNotificationCenter, NSNumber, NSString, NSTimer, SCAVPlayerVolumeController, SCAudioStitchPlaybackHandler, SCOperaCommentContainerView, SCOperaVideoLayerView, SCOperaVideoStallTracker, SCStopwatch, UIGestureRecognizer, UIVisualEffectView;

@interface SCOperaVideoLayerViewController : SCOperaLayerViewController <SCEventListener, UIGestureRecognizerDelegate, SCOperaVideoViewControllingDelegate, SCOperaVideoViewControllingDataSource, SCTraceEnabled, SCAudioStitchControlsViewDelegate, SCAudioStitchPlaybackHandlerDelegate, SCOperaLayerViewControllerMediaContainer, SCOperaMediaLogViewable, SCOperaLayerViewControllerShareableMediaSource>
{
    SCOperaVideoLayerView *_layerView;
    SCOperaCommentContainerView *_containerView;
    CAShapeLayer *_cornerOverlay;
    FBKVOController *_kvoController;
    NSNotificationCenter *_notificationCenter;
    _Bool _fullyViewed;
    _Bool _isLooping;
    _Bool _hasSentMediaStartsToPlayEvent;
    _Bool _hasFullyAppearedOnScreen;
    double _durationSec;
    SCStopwatch *_mediaDisplayStopWatch;
    id _videoTimeObserver;
    NSArray *_videoPlaybackEventObservers;
    _Bool _isSeeking;
    NSTimer *_controlsFadeTimer;
    NSTimer *_mediaLogTimer;
    long long _virtualOrientation;
    double _delayedTargetVolume;
    double _lastSetVolume;
    UIGestureRecognizer *_tapToToggleVideoControlRecognizer;
    UIGestureRecognizer *_tapToToggleVideoProgressRecognizer;
    _Bool _pausedForAttachment;
    UIVisualEffectView *_blurView;
    long long _lastPlaybackFailureType;
    NSError *_lastPlaybackError;
    _Bool _didRecoverFromPlayerItemError;
    _Bool _didRecoverFromMediaServiceError;
    _Bool _videoIsInErrorState;
    _Bool _videoWasPreparedWhenFullyAppeared;
    _Bool _didRetryOnFrozenVideo;
    _Bool _shouldStartPlaybackOnceReadyToPlay;
    _Bool _wasPlayingBeforeActionMenuPresented;
    _Bool _videoShouldBePlaying;
    _Bool _shouldShowLoadingIndicator;
    _Bool _shouldHandleDidReachEndOnResume;
    SCOperaVideoStallTracker *_stallTracker;
    NSTimer *_frameRateTrackingTimer;
    long long _frameRateTrackedTimes;
    double _sumOfFrameRate;
    double _nominalFrameRate;
    double _timeToPrepareSec;
    double _startPreparingTimeSec;
    AVPlayerItemTrack *_frameRateVideoTrack;
    AVAsset *_videoAsset;
    AVPlayer *_player;
    SCAudioStitchPlaybackHandler *_audioStitchPlaybackHandler;
    _Bool _disableSwipeUp;
    NSTimer *_progressViewAutoCollapseTimer;
    CALayer *_subtitleLayer;
    _Bool _ignoreUpdateToSubtitleVideoSize;
    long long _videoControlsType;
    double _subtitleVerticalPosition;
    double _endSeekingTimestamp;
    CDStruct_1b6d18a9 _currentPlayTimestamp;
    NSNumber *_seekType;
    double _startSeekingTimestamp;
    SCAVPlayerVolumeController *_volumeController;
    double _seekingNotAllowedMessageFiredTimestampSec;
}

+ (id)layerViewControllerWithConfiguration:(id)arg1 kvoController:(id)arg2 mediaDisplayStopwatch:(id)arg3 eventAnnouncer:(id)arg4 sharedResourceManager:(id)arg5 notificationCenter:(id)arg6;
@property(nonatomic) double seekingNotAllowedMessageFiredTimestampSec; // @synthesize seekingNotAllowedMessageFiredTimestampSec=_seekingNotAllowedMessageFiredTimestampSec;
@property(readonly, nonatomic) __weak AVPlayer *player; // @synthesize player=_player;
@property(retain, nonatomic) SCAVPlayerVolumeController *volumeController; // @synthesize volumeController=_volumeController;
- (void).cxx_destruct;
- (id)mediaLog;
- (void)_checkLocalVideoFileInfo:(_Bool)arg1;
- (void)_observeANRNotification;
- (void)_updateSubtitleLayerScreenSize;
- (void)_subtitleLayerVideoSizeChanged;
- (void)_updateSubtitlesStyle;
- (void)_loadMediaTracksWithMainQueueAvailabilityCallback:(CDUnknownBlockType)arg1;
- (void)_sendSubtitlesAvailabilityEvent:(_Bool)arg1;
- (void)_processAvailableSubtitles:(id)arg1;
- (void)_toggleSubtitlesIfNecessary;
- (void)_setUpCloseToAutoAdvanceNotificationIfNecessary;
- (void)_playerDidResumeFromStall:(id)arg1;
- (void)_playerDidStall:(id)arg1;
- (struct SCPlayerConfiguration)_playerConfiguration;
- (void)_resumeForBufferStatusChangeIfNecessary;
- (void)_showLoadingIndicatorIfNecessary;
- (void)_showLoadingIndicatorIfNecessaryWithDelay;
- (void)_enableLoadingIndicator:(_Bool)arg1;
- (void)_updateLoadingIndicator;
- (void)_observePlayerViewForNonStreamingIfNecessary;
- (void)_observePlayerViewForStreamingIfNecessary;
- (void)_observePlayerTimeControlStatus;
- (void)_observePlayerStatus;
- (void)_observerPlayerProperties;
- (void)_stopTrackingVideoFrameRate;
- (void)_startTrackingVideoFrameRate;
- (void)_clearPlaybackErrorTrackingParams;
- (void)_updatePlaybackErrorTrackingParams;
- (void)_sendMediaFailsToDisplayEvent;
- (_Bool)errorIsRecoverable;
- (void)_playerDidFailToPlay;
- (id)_adIntervals;
- (id)_observablePlaybackEventsGroups;
- (id)chapterIntervals;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (id)_debugInfo;
- (void)setProgress:(double)arg1 forIndex:(unsigned long long)arg2;
- (void)seekToTime:(double)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completion:(CDUnknownBlockType)arg4;
- (void)seekToTime:(double)arg1;
- (void)seekToMediaStartTimeWithCompletion:(CDUnknownBlockType)arg1;
- (void)videoControlsView:(id)arg1 didSeekToTime:(double)arg2 reason:(long long)arg3;
- (void)videoControlsViewDidPressExit:(id)arg1;
- (void)videoControlsView:(id)arg1 didEndSeekingWithPlayButtonToggled:(_Bool)arg2;
- (void)videoControlsViewDidBeginSeeking:(id)arg1;
- (void)videoControlsView:(id)arg1 didTogglePlay:(_Bool)arg2;
- (void)_rotateVideoWithTransform:(struct CGAffineTransform)arg1 animated:(_Bool)arg2;
- (void)_setTargetOrientation:(long long)arg1 andRotateView:(_Bool)arg2;
- (void)videoControlsViewDidPressSendButton:(id)arg1;
- (void)videoControlsViewDidPressShowActionMenuButton:(id)arg1;
- (void)videoControlsView:(id)arg1 didToggleRotateLeft:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleCaption:(_Bool)arg2;
- (void)videoControlsView:(id)arg1 didToggleVolume:(_Bool)arg2;
- (void)_updateOverlappedLayersYOffset:(double)arg1;
- (void)_toggleVideoProgressView;
- (void)_toggleVideoControlsView;
- (void)handleTap:(id)arg1;
- (void)_setupMediaLoggerTimer;
- (void)_setupControlsFadeTimer;
- (void)_fadeOutControlsWithCompletion:(CDUnknownBlockType)arg1;
- (void)_fadeOutControls;
- (void)_fadeInControls;
- (void)_resetVideoAsset:(_Bool)arg1;
- (id)videoAsset;
- (void)_addMediaServicesResetRecoveryBlock:(CDUnknownBlockType)arg1;
- (void)_didReceiveMediaServicesWereResetNotification;
- (void)_didReceiveMediaServicesWereLostNotification;
- (void)_observeMediaServicesLostSharedResourceVariable;
- (_Bool)_shouldLoopWhenReachEnd;
- (_Bool)_shouldAutoAdvanceWhenReachEnd;
- (void)playerItemDidReachEnd;
- (_Bool)isOverlay;
- (double)mediaHeightToWidthAspectRatio;
- (double)_originalHeightToWidthAspectRatio;
- (struct CGRect)mediaViewFrame;
- (void)_firePlaybackEventForTime:(CDStruct_1b6d18a9)arg1 eventsGroup:(id)arg2 triggeringViewInteraction:(unsigned long long)arg3 forceChooseMostRecentEvent:(_Bool)arg4;
- (void)audioStitchControlsViewDidFinishDisplayingOnboarding:(id)arg1;
- (void)audioStitchControlsViewViewportButtonDidTap:(id)arg1;
- (void)audioStitchPlaybackHandler:(id)arg1 canChangeViewportDidChange:(_Bool)arg2;
- (void)audioStitchPlaybackHandler:(id)arg1 viewportDidChange:(id)arg2;
- (void)_removePlaybackEventsObserver;
- (void)_removeTimeObserver;
- (id)_setupPlaybackEventsObserverForEventsGroup:(id)arg1;
- (void)_attachPlaybackEventsObserver;
- (void)_attachTimeObserver;
- (struct CGSize)_contentSize;
- (void)updateViewWithPreviousLayer:(id)arg1 currentLayer:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)setSubtitlesEnabled:(_Bool)arg1;
- (id)shareableMedia;
- (id)currentViewParameters;
- (void)_updateResumeTime;
- (CDStruct_1b6d18a9)smartCurrentTimeExpPlayer:(id)arg1 playerItem:(id)arg2;
- (void)updateViewWithHorizontalPageOffset:(double)arg1 isCurrentPage:(_Bool)arg2;
- (void)didReceiveUpdateProperties:(id)arg1;
- (long long)pageabilityForRelativePosition:(unsigned long long)arg1 gestureRecognizer:(id)arg2;
- (id)shareableMediaSnapshotWithPerformer:(id)arg1;
- (_Bool)supportsShareableMediaSnapshot;
- (void)fadeVolumeOut:(double)arg1;
- (void)fadeVolumeIn:(double)arg1;
- (void)setVolume:(double)arg1;
- (void)teardown;
- (_Bool)mediaIsBeingPreparedForDisplay;
- (void)_didStartToPlay;
- (void)resume;
- (void)_setPausedForAttachment:(_Bool)arg1 showBlurView:(_Bool)arg2;
- (void)setPausedForAttachment:(_Bool)arg1;
- (void)pause;
- (_Bool)_playerItemReachedEnd:(id)arg1;
- (_Bool)_mediaIsBeingPreparedForDisplayImpl;
- (void)_tearDownPlayerView;
- (void)_stopPlayback;
- (void)viewDidFullyDisappear;
- (_Bool)_shouldShowVideoControls;
- (void)_setupControlsIfNecessary;
- (void)_setupVideoProgressTapGestureIfNecessary;
- (void)_sendMediaStartsToDisplayIfNecessary;
- (void)_startPlayingItem:(id)arg1;
- (void)_startPlayingFromMediaStartTimeForItem:(id)arg1;
- (void)_restartPlayer:(_Bool)arg1;
- (void)_updatePlayerStatusBasedOnPlayerItemStatus:(id)arg1;
- (void)updatePlayerItem:(id)arg1;
- (void)neighborViewDidFullyAppearWithCurrentViewRelativePosition:(unsigned long long)arg1;
- (void)_loadPlayerViewIfNecessary;
- (void)viewDidFullyAppear;
- (void)cancelViewWillFullyAppearAtTime;
- (void)viewWillFullyAppearAtTime:(CDStruct_1b6d18a9)arg1;
- (void)viewWillFullyAppear;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 kvoController:(id)arg2 mediaDisplayStopwatch:(id)arg3 eventAnnouncer:(id)arg4 sharedResourceManager:(id)arg5 notificationCenter:(id)arg6;
- (id)initWithConfiguration:(id)arg1 eventAnnouncer:(id)arg2 sharedResourceManager:(id)arg3;
- (void)showSeekingNotAllowedMessageIfNecessary;
@property(readonly, nonatomic) _Bool disableSeekingBeyondSeekableRange;
@property(readonly, nonatomic) _Bool showSeekableRange;
- (void)didTriggerEventWithEventName:(id)arg1 announcerIdentifier:(id)arg2 extraData:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

