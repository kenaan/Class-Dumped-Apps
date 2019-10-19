//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "YTAdsPlaybackCoordinatorDelegate-Protocol.h"
#import "YTAudioSessionRouteChangeObserver-Protocol.h"
#import "YTCorePlaybackController-Protocol.h"
#import "YTLicenseCheckerDelegate-Protocol.h"
#import "YTLiveStreamStatusCheckerDelegate-Protocol.h"
#import "YTPlaybackBackgroundTaskControllerDelegate-Protocol.h"
#import "YTPlayerHeartbeatControllerDelegate-Protocol.h"
#import "YTPlayerPIPControllerDelegate-Protocol.h"
#import "YTPlayerVisibilityProvider-Protocol.h"
#import "YTSingleVideoBufferedMediaTimeObserver-Protocol.h"
#import "YTSingleVideoControllerDelegate-Protocol.h"
#import "YTSingleVideoCurrentTimeObserver-Protocol.h"
#import "YTSingleVideoPlaybackRateObserver-Protocol.h"
#import "YTSingleVideoRawMediaStateObserver-Protocol.h"
#import "YTSingleVideoRawMediaStateSideEffectfulObserver-Protocol.h"
#import "YTSingleVideoSequencerDelegate-Protocol.h"
#import "YTSystemNotificationsObserver-Protocol.h"
#import "YTUpcomingPlayerTransitionControllerDelegate-Protocol.h"
#import "YTVideoResolverDelegate-Protocol.h"

@class GIMMe, MLAudioSession, MLPlayerPool, NSError, NSHashTable, NSMutableArray, NSString, YTAdInterrupt, YTBackgroundabilityPolicy, YTCPN, YTLicenseChecker, YTLiveStreamStatusChecker, YTPlaybackBackgroundTaskController, YTPlaybackConfig, YTPlaybackData, YTPlaybackLockScreenController, YTPlayerHeartbeatController, YTPlayerMacroState, YTPlayerPIPController, YTPlayerTransition, YTPlayerView, YTSingleVideoController, YTUpcomingPlayerTransitionController, YTVSSControllerState, YTVideoResolver;
@protocol HAMClock, MLViewportSizeProvider, YTAdsPlaybackCoordinator, YTCorePlaybackControllerDelegate, YTGLSceneProtocol, YTPlaybackControllerUIDelegate, YTPlayerOverlayFactory, YTPlayerViewControllerConfig, YTResponder, YTSingleVideoObservable, YTSingleVideoSequencer;

@interface YTLocalPlaybackController : NSObject <YTAdsPlaybackCoordinatorDelegate, YTAudioSessionRouteChangeObserver, YTLicenseCheckerDelegate, YTLiveStreamStatusCheckerDelegate, YTPlaybackBackgroundTaskControllerDelegate, YTPlayerHeartbeatControllerDelegate, YTPlayerPIPControllerDelegate, YTPlayerVisibilityProvider, YTSingleVideoBufferedMediaTimeObserver, YTSingleVideoControllerDelegate, YTSingleVideoCurrentTimeObserver, YTSingleVideoPlaybackRateObserver, YTSingleVideoRawMediaStateObserver, YTSingleVideoRawMediaStateSideEffectfulObserver, YTSingleVideoSequencerDelegate, YTSystemNotificationsObserver, YTVideoResolverDelegate, YTUpcomingPlayerTransitionControllerDelegate, YTCorePlaybackController>
{
    id <YTCorePlaybackControllerDelegate> _delegate;
    id <YTSingleVideoSequencer> _videoSequencer;
    id <YTPlayerOverlayFactory> _overlayFactory;
    YTPlayerView *_playerView;
    id <YTAdsPlaybackCoordinator> _adsPlaybackCoordinator;
    YTPlayerHeartbeatController *_heartbeatController;
    YTLiveStreamStatusChecker *_liveStreamStatusChecker;
    YTLicenseChecker *_licenseChecker;
    MLPlayerPool *_playerPool;
    id <YTPlayerViewControllerConfig> _config;
    MLAudioSession *_audioSession;
    YTPlaybackLockScreenController *_lockScreenController;
    YTBackgroundabilityPolicy *_backgroundabilityPolicy;
    id <HAMClock> _clock;
    id <YTGLSceneProtocol> _GLScene;
    CDStruct_d60ef703 _savedContentTime;
    YTVSSControllerState *_lastAdVSSState;
    YTAdInterrupt *_adInterrupt;
    YTPlaybackData *_adPlaybackData;
    _Bool _wasPlayingBeforeSuspend;
    _Bool _startPlaybackWhenAVideoIsActivated;
    int _playerViewLayout;
    _Bool _inlinePlaybackActive;
    _Bool _userAudioOnlyModeActive;
    _Bool _blackoutActive;
    _Bool _externalPlaybackAllowedByApp;
    int _audioSessionTaskID;
    YTPlaybackBackgroundTaskController *_backgroundTaskController;
    YTVideoResolver *_activeVideoResolver;
    YTVideoResolver *_earlyFetchVideoResolver;
    NSMutableArray *_adPrebufferTransitionControllers;
    YTPlayerPIPController *_playerPIPController;
    NSHashTable *_contentCuepointObservers;
    _Bool _finishedPostrollBreak;
    id <MLViewportSizeProvider> _viewportSizeProvider;
    _Bool _isLightweightPlayback;
    double _userIntentToPlayTime;
    YTUpcomingPlayerTransitionController *_upcomingPlayerTransitionController;
    _Bool _VRModeActive;
    _Bool _activePlayback;
    _Bool _externalPlaybackActive;
    int _state;
    id <YTPlaybackControllerUIDelegate> _UIDelegate;
    YTPlaybackData *_contentPlaybackData;
    NSError *_error;
    id <YTResponder> _parentResponder;
    YTPlaybackConfig *_playbackConfig;
    YTPlayerTransition *_playerTransition;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(readonly, nonatomic) YTPlayerTransition *playerTransition; // @synthesize playerTransition=_playerTransition;
@property(readonly, nonatomic) YTPlaybackConfig *playbackConfig; // @synthesize playbackConfig=_playbackConfig;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
@property(readonly, nonatomic) YTPlayerHeartbeatController *heartbeatController; // @synthesize heartbeatController=_heartbeatController;
@property(readonly, nonatomic, getter=isExternalPlaybackActive) _Bool externalPlaybackActive; // @synthesize externalPlaybackActive=_externalPlaybackActive;
@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) YTPlaybackData *contentPlaybackData; // @synthesize contentPlaybackData=_contentPlaybackData;
@property(nonatomic, getter=isActivePlayback) _Bool activePlayback; // @synthesize activePlayback=_activePlayback;
@property(nonatomic, getter=isVRModeActive) _Bool VRModeActive; // @synthesize VRModeActive=_VRModeActive;
@property(nonatomic) __weak id <YTPlaybackControllerUIDelegate> UIDelegate; // @synthesize UIDelegate=_UIDelegate;
- (void).cxx_destruct;
- (void)updateForceDisableBackgroundingForVideoController:(id)arg1;
@property(readonly, nonatomic) YTSingleVideoController *activeVideoController;
- (void)logPlaybackForInteractionLoggingWithPlayerTransition:(id)arg1 playerResponse:(id)arg2;
- (void)doneWithAudioSessionForPlayback;
- (void)activateAudioSessionForPlayback;
- (void)notifyLoggingControllersOfPlayerStatusChange;
- (void)shutDownHeartbeatChecks;
- (_Bool)isAppInBackground;
- (void)updateLockScreenControllerSupportingControlCenter;
- (void)updateLockScreenController;
- (_Bool)isPlaybackBackgroundable;
- (void)storeCrashReportPlaybackData;
- (_Bool)isVideoFinished;
- (struct CGSize)playerSizeInPixels;
- (void)stopBackgroundPlayback;
- (void)setPlaybackControllerState:(int)arg1;
- (void)removeLiveStreamStatusChecker;
- (void)activateLiveStreamStatusChecker;
- (_Bool)isCurrentVideoLiveStreamWithStatusChecker;
- (void)initializeHeartbeatChecks;
- (void)initializeOrFailForOfflineLiveStream;
- (void)failPlaybackDueToUnplayableVideo;
- (void)loadOrActivateContentSequence;
- (void)initializePlayback;
- (void)transitionToNextPlayback;
- (void)finishPlayback;
- (void)adPlaybackDidStop;
- (id)playerStatusWithPlayerViewLayout:(int)arg1;
- (id)playerStatus;
- (void)resetToState:(int)arg1;
@property(readonly, nonatomic) _Bool isDAIEnabledForCurrentPlayback;
- (id)adsPlaybackCoordinatorForNewPlayback;
- (void)startPlaybackWithResolutionReason:(long long)arg1;
- (void)setContentPlaybackDataWithCompletedVideoResolver:(id)arg1;
- (void)playbackDidFailWithError:(id)arg1;
- (void)playerStateDidChangeToError;
- (void)playerStateDidChangeToPaused;
- (void)playerStateDidChangeToPlaying;
- (void)playerStateDidChangeToFinished;
- (void)failWithReset:(_Bool)arg1 error:(id)arg2;
- (void)failWithError:(id)arg1;
- (id)createPrebufferingControllerForAdInterrupt:(id)arg1 atMediaTime:(double)arg2;
- (id)videoController;
- (void)setBackgroundabilityPolicy:(id)arg1;
- (void)playerPIPController:(id)arg1 requiresPlayerReloadAndStartPlayback:(_Bool)arg2;
- (void)playbackBackgroundTaskIsExpiring;
- (void)appWillTerminate:(id)arg1;
- (void)appDidBecomeActive:(id)arg1;
- (void)appWillEnterForeground:(id)arg1;
- (void)appDidEnterBackground:(id)arg1;
- (void)maybeStopBackgroundPlayback;
- (void)setLiveCaptionsVerticalRatio:(double)arg1;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
- (_Bool)isInlinePlaybackActive;
- (void)setOverlayFactory:(id)arg1;
- (void)switchToInlinePlayback:(_Bool)arg1;
- (void)singleVideo:(id)arg1 bufferedMediaTimeDidChange:(double)arg2;
- (void)singleVideo:(id)arg1 playbackRateDidChange:(float)arg2;
- (void)singleVideo:(id)arg1 currentTimeDidChange:(CDStruct_d60ef703)arg2;
- (void)potentiallyMutatedSingleVideo:(id)arg1 rawMediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)singleVideo:(id)arg1 rawMediaStateDidChangeFromState:(long long)arg2 toState:(long long)arg3;
- (void)setExternalPlaybackActive:(_Bool)arg1;
- (void)singleVideoController:(id)arg1 externalPlaybackActiveStateDidChange:(_Bool)arg2;
- (void)singleVideoController:(id)arg1 requiresStreamingDataRefreshAndStartPlayback:(_Bool)arg2;
- (void)singleVideoController:(id)arg1 requiresReloadAndStartPlayback:(_Bool)arg2;
- (void)loadAdSurveyWithAdInterrupt:(id)arg1;
- (id)transitionControllerForAdInterrupt:(id)arg1;
- (void)loadVideoAdWithAdInterrupt:(id)arg1;
- (void)adsPlaybackCoordinatorPrepareToPlayAd:(id)arg1;
- (void)cancelPrebufferingAdInterrupt:(id)arg1;
- (void)prebufferAdInterrupt:(id)arg1 forPlaybackAtCurrentVideoMediaTime:(double)arg2;
- (id)playerViewForAdsPlaybackCoordinator:(id)arg1;
- (void)haltCurrentAdPlaybackWithError:(id)arg1;
- (id)playbackContextForAd;
- (void)setMarkers:(id)arg1;
- (id)adsPlaybackCoordinator:(id)arg1 playAdInterrupt:(id)arg2;
- (void)adsPlaybackCoordinator:(id)arg1 didFinishBreakWithBreakType:(long long)arg2;
- (void)stopDAIAndReloadMediaPlayerForAdsPlaybackCoordinator:(id)arg1;
- (id)adsPlaybackCoordinator:(id)arg1 didReceiveDAIAdInterrupt:(id)arg2;
- (void)adsPlaybackCoordinator:(id)arg1 didFinishWithAd:(id)arg2 completeType:(long long)arg3;
@property(readonly, nonatomic) long long playerState;
- (void)resetWithCurrentPlayerTransition;
- (void)heartbeatControllerDidReceiveUnplayableStatus:(id)arg1 forVideoID:(id)arg2;
- (void)liveStreamStatusCheckerWantstoStopPlayback:(id)arg1;
- (void)liveStreamStatusCheckerWantsToSuspendPlayback:(id)arg1;
- (void)liveStreamStatusChecker:(id)arg1 wantsToTransitionToStreamEndpoint:(id)arg2;
- (void)liveStreamStatusCheckerWantsToReloadLiveStream:(id)arg1;
- (void)licenseChecker:(id)arg1 failedHeartbeatWithError:(id)arg2;
- (int)playerVisibility;
- (void)didSetNerdStatsEnabled:(_Bool)arg1;
@property(readonly, nonatomic, getter=isMDXActive) _Bool MDXActive;
@property(readonly, nonatomic) NSString *remoteScreenName;
@property(nonatomic, getter=isExternalPlaybackAllowed) _Bool externalPlaybackAllowed;
- (void)setBlackoutActive:(_Bool)arg1;
- (void)setUserAudioOnlyModeActive:(_Bool)arg1;
- (void)setVolume:(float)arg1;
- (void)replay;
- (void)resumePlayback;
- (void)suspendPlayback;
- (id)playbackDebugData;
- (void)didPressSkipAd;
- (void)didPressCompanionAd;
- (_Bool)isPlayingContentInterstitial;
@property(readonly, nonatomic) _Bool isPlayingAdIntro;
@property(readonly, nonatomic) _Bool isPlayingAdSurvey;
@property(readonly, nonatomic) _Bool isPlayingAd;
- (_Bool)isPlayingContentVideo;
@property(readonly, nonatomic) _Bool isPlaybackFinished;
@property(readonly, nonatomic) _Bool currentVideoIsLocal;
@property(readonly, nonatomic) YTCPN *contentVideoCPN;
@property(readonly, nonatomic) CDStruct_d60ef703 contentVideoCurrentTime;
- (double)adVideoMediaTime;
@property(readonly, nonatomic) CDStruct_d60ef703 currentVideoTime;
- (void)resetToLoading;
- (void)reset;
- (id)currentVideoCPN;
@property(readonly, nonatomic) NSString *currentVideoID;
@property(readonly, nonatomic) NSString *contentVideoID;
@property(readonly, nonatomic) _Bool handlesAutoplayingInternally;
- (void)loadWithPlayerTransition:(id)arg1 playbackConfig:(id)arg2;
- (void)fetchPlayerDataAndResolveVideo;
- (void)loadWithPlayerTransition:(id)arg1 playbackConfig:(id)arg2 initialTime:(CDStruct_d60ef703)arg3;
- (void)startEarlyPlayerDataFetchWithPlayerTransition:(id)arg1 visibility:(int)arg2;
- (void)prepareToLoadWithPlayerTransition:(id)arg1 expectedLayout:(id)arg2;
- (void)outputRouteDidChange;
- (void)upcomingPlayerTransitionController:(id)arg1 resolvedPlaybackDataForGapless:(id)arg2;
- (int)playerVisibilityForUpcomingPlayerTransitionController:(id)arg1;
- (_Bool)isExternalPlaybackActiveForUpcomingPlayerTransitionController:(id)arg1;
- (void)videoResolver:(id)arg1 requiresUserActionForPlayabilityResolutionWithUserActionRequest:(id)arg2;
- (int)playerVisibilityForVideoResolver:(id)arg1;
- (_Bool)isExternalPlaybackActiveForVideoResolver:(id)arg1;
- (void)videoResolver:(id)arg1 didError:(id)arg2;
- (void)videoResolver:(id)arg1 didResolveVideoWithPlaybackData:(id)arg2 reason:(long long)arg3;
- (void)resetWithCurrentVideoSequencer;
- (void)didTransitionToContentSequenceForVideoSequencer:(id)arg1;
- (void)videoSequencer:(id)arg1 willTransitionToNextContentSequenceWithPlayerTransition:(id)arg2 playbackConfig:(id)arg3 playbackData:(id)arg4;
- (void)didFinishContentSequenceForVideoSequencer:(id)arg1;
- (id)videoTimelineForVideoSequencer:(id)arg1;
- (void)startObservingStateChangesForSingleVideo:(id)arg1;
- (void)updatePlaybackControllerStateForNewActiveVideoController;
- (void)videoSequencer:(id)arg1 didActivateVideoController:(id)arg2;
- (void)activateCuepointCollectionForVideoController:(id)arg1;
- (_Bool)shouldCuepointCollectionBeActivatedForVideoController:(id)arg1;
- (void)videoSequencer:(id)arg1 willActivateVideoController:(id)arg2;
- (id)playerStatusForVideoSequencer:(id)arg1;
- (id)currentAdForPlaybackTrackingController:(id)arg1;
- (id)contentPlayerMacroStateForPlaybackTrackingController:(id)arg1;
- (id)lastKnownAdPlayerMacroStateForPlaybackTrackingController:(id)arg1;
- (void)singleVideoControllerBackgroundabilityDidChange:(id)arg1;
- (id)currentAd;
@property(readonly, nonatomic) YTPlayerMacroState *contentPlayerMacroState;
@property(readonly, nonatomic) YTPlayerMacroState *lastKnownAdPlayerMacroState;
- (void)setUpcomingPlayerTransition:(id)arg1 playbackConfig:(id)arg2;
- (void)removeContentCuepointObserver:(id)arg1;
- (void)addContentCuepointObserver:(id)arg1;
- (void)startAdOverlay;
- (id)acquireAdOverlay;
- (void)setPlaybackRate:(float)arg1;
- (void)pause;
- (void)play;
- (void)seekToEnd;
- (void)seekToProductionTime:(double)arg1;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)recordClientIssueFeedbackEvent;
- (void)recordSpeedyGAlert;
- (void)enableCaptionsIfAvailable;
- (void)setActiveCaptionTrack:(id)arg1;
- (void)setAudioFormatConstraint:(id)arg1;
- (void)setVideoFormatConstraint:(id)arg1;
@property(readonly, nonatomic) id <YTSingleVideoObservable> contentVideo;
@property(readonly, nonatomic) id <YTSingleVideoObservable> activeVideo;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1 overlayFactory:(id)arg2 playerView:(id)arg3 playbackControllerDelegate:(id)arg4 viewportSizeProvider:(id)arg5 lightweightPlayback:(_Bool)arg6;
- (id)initWithParentResponder:(id)arg1 overlayFactory:(id)arg2 playerView:(id)arg3 playbackControllerDelegate:(id)arg4 viewportSizeProvider:(id)arg5;
- (id)initForLightweightPlaybackWithParentResponder:(id)arg1 playerView:(id)arg2 playbackControllerDelegate:(id)arg3 viewportSizeProvider:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
