//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YTInceptionSourceProtocol.h"
#import "YTPlaybackControllerEventsDelegate.h"
#import "YTResponder.h"

@class GIMMe, NSError, NSString, UIViewController<YTPlaybackController>, YTDefaultPlayerOverlayFactory, YTHotConfig, YTICommand, YTInlineMutedPlaybackOverlayFactory, YTInlineMutedPlaybackViewControllerManager, YTInlineMutedPlaybackWatchViewController, YTPlayerResponse, YTUserDefaults, YTWatchTransition;

@interface YTInlineMutedPlaybackWatchController : NSObject <YTInceptionSourceProtocol, YTPlaybackControllerEventsDelegate, YTResponder>
{
    YTInlineMutedPlaybackViewControllerManager *_impVCManager;
    NSError *_lastPlaybackError;
    _Bool _wasPlayingBeforeSuspend;
    _Bool _startPlayBackCalled;
    double _firstMediaTime;
    double _currentMediaTime;
    YTPlayerResponse *_cachedPlayerResponse;
    YTUserDefaults *_userDefaults;
    id <YTInceptionControllerProtocol> _inceptionController;
    YTDefaultPlayerOverlayFactory *_defaultOverlayFactory;
    YTInlineMutedPlaybackOverlayFactory *_impOverlayFactory;
    YTHotConfig *_hotConfig;
    _Bool _useSingletonPlayerVC;
    _Bool _isActive;
    _Bool _isIncepting;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    id <YTInlineMutedPlaybackWatchControllerDelegate> _delegate;
    YTICommand *_navEndpoint;
    YTWatchTransition *_watchTransition;
    UIViewController<YTPlaybackController> *_playerViewController;
    YTInlineMutedPlaybackWatchViewController *_watchViewController;
}

@property(nonatomic) _Bool isIncepting; // @synthesize isIncepting=_isIncepting;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(retain, nonatomic) YTInlineMutedPlaybackWatchViewController *watchViewController; // @synthesize watchViewController=_watchViewController;
@property(retain, nonatomic) UIViewController<YTPlaybackController> *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(retain, nonatomic) YTWatchTransition *watchTransition; // @synthesize watchTransition=_watchTransition;
@property(retain, nonatomic) YTICommand *navEndpoint; // @synthesize navEndpoint=_navEndpoint;
@property(nonatomic) __weak id <YTInlineMutedPlaybackWatchControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)startLatencyTickLoggerForTransition:(id)arg1;
- (void)relinquishPlayerViewController;
- (void)acquirePlayerViewController;
- (void)attachPlayerViewController;
- (id)inlineMutedPlaybackWatchView;
- (void)loadVideoAndAttachView:(_Bool)arg1;
- (_Bool)canIncept;
- (void)completeReverseInceptionWithPlaybackReload:(long long)arg1;
- (void)playbackControllerWillFailWithError:(id)arg1;
- (void)playbackControllerPlayerStateDidChange;
- (void)playbackControllerDidFinishPlayback;
- (void)playbackControllerCurrentVideoMediaTimeDidChange:(double)arg1;
- (void)playbackControllerDidReceivePlayerResponse:(id)arg1;
- (id)lastPlayerViewSnapshot;
- (void)inceptWithNavEndpoint:(id)arg1 fromView:(id)arg2;
- (_Bool)shouldPreload;
- (void)resetPlaybackController;
- (void)loadVideo;
- (void)startPlayback;
- (void)resumePlaybackToTime:(double)arg1;
- (double)getCurrentVideoMediaTime;
- (void)pausePlayback;
- (void)suspendPlayback;
- (void)resign;
- (void)dealloc;
- (id)initWithNavEndpoint:(id)arg1 delegate:(id)arg2 impVCManager:(id)arg3 parentResponder:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

