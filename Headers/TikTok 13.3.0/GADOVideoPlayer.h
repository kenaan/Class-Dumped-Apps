//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOVideoLoaderDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, GADOAdView, GADOClearcutLogger, GADOVideoConfiguration, GADOVideoLoader, NSMutableArray, NSString, NSURL;
@protocol GADOVideoPlayerDelegate;

@interface GADOVideoPlayer : NSObject <GADOVideoLoaderDelegate>
{
    _Bool _isBuffering;
    _Bool _hasPostedCanPlayThrough;
    _Bool _isObserving;
    _Bool _isObservingPlayerItem;
    _Bool _isObservingPlayerItemLoadedTimeRanges;
    id _timeObserver;
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    GADOAdView *_adView;
    GADOVideoLoader *_videoLoader;
    GADOVideoConfiguration *_configuration;
    NSMutableArray *_periodicTimeObservers;
    NSURL *_sourceURL;
    _Bool _playerToAudioVideoManagerReportingDisabled;
    _Bool _playing;
    _Bool _playbackStalled;
    _Bool _hasPlaybackStalledAtLeastOnce;
    float _volume;
    _Bool _muted;
    id _applicationForegroundObserver;
    id _applicationInactiveObserver;
    _Bool _isAppActive;
    id <GADOVideoPlayerDelegate> _delegate;
    GADOClearcutLogger *_logger;
}

@property(retain, nonatomic) GADOClearcutLogger *logger; // @synthesize logger=_logger;
@property(readonly, nonatomic) _Bool hasPostedCanPlayThrough; // @synthesize hasPostedCanPlayThrough=_hasPostedCanPlayThrough;
@property(nonatomic) __weak id <GADOVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)videoLoader:(id)arg1 didFailToLoadURL:(id)arg2 withError:(id)arg3;
- (void)videoLoader:(id)arg1 didStartedLoadingURL:(id)arg2;
- (void)notifyVideoRateChanged;
- (void)notifyVideoPlayerWithNewStatus:(long long)arg1;
- (void)notifyVideoReadyToPlay;
- (void)notifyVideoPlayerWithTime:(CDStruct_1b6d18a9)arg1;
- (void)itemDidPlayToEnd:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)stopObservingPlayerItemLoadedTimeRanges;
- (void)stopObservingPlayerItem;
- (void)stopObservingPlayer;
- (void)observePlayerItemLoadedTimeRanges;
- (void)observePlayerItem;
- (void)observePlayer;
- (void)resetLogger;
- (void)videoIsReadyToPlay;
- (void)removeTimeObserver:(id)arg1;
- (void)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (void)handlePlayerItemDurationLoadUpdate;
- (struct CGSize)videoSize;
- (void)setVolume:(float)arg1 userInitiated:(_Bool)arg2;
- (void)seekToTime:(double)arg1;
- (void)setMuted:(_Bool)arg1 userInitiated:(_Bool)arg2;
- (void)setAudioMixVolume:(float)arg1;
- (void)pause;
- (void)pauseNativePlayerUserInitiated:(_Bool)arg1;
- (void)play;
- (void)playNativePlayerUserInitiated:(_Bool)arg1;
- (void)load;
- (void)setSourceURL:(id)arg1 resourceCache:(id)arg2 videoConfiguration:(id)arg3;
@property(readonly, copy, nonatomic) NSURL *sourceURL;
- (void)didStopBuffering;
- (void)willStartBuffering;
- (void)dealloc;
- (id)initWithAdView:(id)arg1;
- (id)init;
- (void)videoStatusUpdated:(long long)arg1;
- (void)videoLoadingFailedWithURL:(id)arg1 error:(id)arg2;
- (void)videoPlayedToTime:(CDStruct_1b6d18a9)arg1 duration:(CDStruct_1b6d18a9)arg2;
- (void)videoStartedPlaying;
- (void)videoReadyToPlayWithURL:(id)arg1;
- (void)videoLoadingStartedWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

