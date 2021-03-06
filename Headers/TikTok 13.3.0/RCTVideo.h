//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "RCTVideoPlayerViewControllerDelegate-Protocol.h"

@class AVPlayer, AVPlayerItem, AVPlayerLayer, AVPlayerViewController, NSArray, NSDictionary, NSString, NSURL, RCTEventDispatcher, UIViewController;

@interface RCTVideo : UIView <RCTVideoPlayerViewControllerDelegate>
{
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    _Bool _playerItemObserversSet;
    _Bool _playerBufferEmpty;
    AVPlayerLayer *_playerLayer;
    _Bool _playerLayerObserverSet;
    AVPlayerViewController *_playerViewController;
    NSURL *_videoURL;
    RCTEventDispatcher *_eventDispatcher;
    _Bool _playbackRateObserverRegistered;
    _Bool _videoLoadStarted;
    _Bool _pendingSeek;
    float _pendingSeekTime;
    float _lastSeekTime;
    double _progressUpdateInterval;
    _Bool _controls;
    id _timeObserver;
    float _volume;
    float _rate;
    _Bool _muted;
    _Bool _paused;
    _Bool _repeat;
    _Bool _allowsExternalPlayback;
    NSArray *_textTracks;
    NSDictionary *_selectedTextTrack;
    NSDictionary *_selectedAudioTrack;
    _Bool _playbackStalled;
    _Bool _playInBackground;
    _Bool _playWhenInactive;
    NSString *_ignoreSilentSwitch;
    NSString *_resizeMode;
    _Bool _fullscreenPlayerPresented;
    UIViewController *_presentingViewController;
    CDUnknownBlockType _onVideoLoadStart;
    CDUnknownBlockType _onVideoLoad;
    CDUnknownBlockType _onVideoBuffer;
    CDUnknownBlockType _onVideoError;
    CDUnknownBlockType _onVideoProgress;
    CDUnknownBlockType _onVideoSeek;
    CDUnknownBlockType _onVideoEnd;
    CDUnknownBlockType _onTimedMetadata;
    CDUnknownBlockType _onVideoAudioBecomingNoisy;
    CDUnknownBlockType _onVideoFullscreenPlayerWillPresent;
    CDUnknownBlockType _onVideoFullscreenPlayerDidPresent;
    CDUnknownBlockType _onVideoFullscreenPlayerWillDismiss;
    CDUnknownBlockType _onVideoFullscreenPlayerDidDismiss;
    CDUnknownBlockType _onReadyForDisplay;
    CDUnknownBlockType _onPlaybackStalled;
    CDUnknownBlockType _onPlaybackResume;
    CDUnknownBlockType _onPlaybackRateChange;
}

@property(copy, nonatomic) CDUnknownBlockType onPlaybackRateChange; // @synthesize onPlaybackRateChange=_onPlaybackRateChange;
@property(copy, nonatomic) CDUnknownBlockType onPlaybackResume; // @synthesize onPlaybackResume=_onPlaybackResume;
@property(copy, nonatomic) CDUnknownBlockType onPlaybackStalled; // @synthesize onPlaybackStalled=_onPlaybackStalled;
@property(copy, nonatomic) CDUnknownBlockType onReadyForDisplay; // @synthesize onReadyForDisplay=_onReadyForDisplay;
@property(copy, nonatomic) CDUnknownBlockType onVideoFullscreenPlayerDidDismiss; // @synthesize onVideoFullscreenPlayerDidDismiss=_onVideoFullscreenPlayerDidDismiss;
@property(copy, nonatomic) CDUnknownBlockType onVideoFullscreenPlayerWillDismiss; // @synthesize onVideoFullscreenPlayerWillDismiss=_onVideoFullscreenPlayerWillDismiss;
@property(copy, nonatomic) CDUnknownBlockType onVideoFullscreenPlayerDidPresent; // @synthesize onVideoFullscreenPlayerDidPresent=_onVideoFullscreenPlayerDidPresent;
@property(copy, nonatomic) CDUnknownBlockType onVideoFullscreenPlayerWillPresent; // @synthesize onVideoFullscreenPlayerWillPresent=_onVideoFullscreenPlayerWillPresent;
@property(copy, nonatomic) CDUnknownBlockType onVideoAudioBecomingNoisy; // @synthesize onVideoAudioBecomingNoisy=_onVideoAudioBecomingNoisy;
@property(copy, nonatomic) CDUnknownBlockType onTimedMetadata; // @synthesize onTimedMetadata=_onTimedMetadata;
@property(copy, nonatomic) CDUnknownBlockType onVideoEnd; // @synthesize onVideoEnd=_onVideoEnd;
@property(copy, nonatomic) CDUnknownBlockType onVideoSeek; // @synthesize onVideoSeek=_onVideoSeek;
@property(copy, nonatomic) CDUnknownBlockType onVideoProgress; // @synthesize onVideoProgress=_onVideoProgress;
@property(copy, nonatomic) CDUnknownBlockType onVideoError; // @synthesize onVideoError=_onVideoError;
@property(copy, nonatomic) CDUnknownBlockType onVideoBuffer; // @synthesize onVideoBuffer=_onVideoBuffer;
@property(copy, nonatomic) CDUnknownBlockType onVideoLoad; // @synthesize onVideoLoad=_onVideoLoad;
@property(copy, nonatomic) CDUnknownBlockType onVideoLoadStart; // @synthesize onVideoLoadStart=_onVideoLoadStart;
- (void).cxx_destruct;
- (void)removeFromSuperview;
- (void)layoutSubviews;
- (void)removeReactSubview:(id)arg1;
- (void)insertReactSubview:(id)arg1 atIndex:(long long)arg2;
- (void)videoPlayerViewControllerDidDismiss:(id)arg1;
- (void)videoPlayerViewControllerWillDismiss:(id)arg1;
- (void)removePlayerLayer;
- (void)setProgressUpdateInterval:(float)arg1;
- (void)setControls:(_Bool)arg1;
- (void)usePlayerLayer;
- (void)usePlayerViewController;
- (void)setFullscreen:(_Bool)arg1;
- (_Bool)getFullscreen;
- (id)getTextTrackInfo;
- (id)getAudioTrackInfo;
- (void)setTextTracks:(id)arg1;
- (void)setStreamingText;
- (void)setSideloadedText;
- (void)setSelectedTextTrack:(id)arg1;
- (void)setSelectedAudioTrack:(id)arg1;
- (void)setMediaSelectionTrackForCharacteristic:(id)arg1 withCriteria:(id)arg2;
- (void)setRepeat:(_Bool)arg1;
- (void)applyModifiers;
- (void)setVolume:(float)arg1;
- (void)setMuted:(_Bool)arg1;
- (void)setRate:(float)arg1;
- (void)setSeek:(id)arg1;
- (void)setCurrentTime:(float)arg1;
- (float)getCurrentTime;
- (void)setPaused:(_Bool)arg1;
- (void)setIgnoreSilentSwitch:(id)arg1;
- (void)setPlayWhenInactive:(_Bool)arg1;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (void)setPlayInBackground:(_Bool)arg1;
- (void)setResizeMode:(id)arg1;
- (void)playerItemDidReachEnd:(id)arg1;
- (void)playbackStalled:(id)arg1;
- (void)attachListeners;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)playerItemForSource:(id)arg1;
- (id)urlFilePath:(id)arg1;
- (void)setSrc:(id)arg1;
- (void)removePlayerItemObservers;
- (void)addPlayerItemObservers;
- (id)calculateSeekableDuration;
- (id)calculatePlayableDuration;
- (void)sendProgressUpdate;
- (void)audioRouteChanged:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)dealloc;
- (void)removePlayerTimeObserver;
- (void)addPlayerTimeObserver;
- (CDStruct_e83c9415)playerItemSeekableTimeRange;
- (CDStruct_1b6d18a9)playerItemDuration;
- (id)createPlayerViewController:(id)arg1 withPlayerItem:(id)arg2;
- (id)initWithEventDispatcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

