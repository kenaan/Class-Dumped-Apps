//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFAVPlayer-Protocol.h"
#import "FNFSynchronousPlayerDelegate-Protocol.h"

@class FNFAudioQueue, FNFSynchronousPlayer, NSError, NSString;
@protocol FNFAVPlayerItem, FNFPlayerAudioDecoder, FNFPlayerEventListener;

@interface FNFPlayer : NSObject <FNFSynchronousPlayerDelegate, FNFAVPlayer>
{
    FNFSynchronousPlayer *_synchronousPlayer;
    FNFAudioQueue *_defaultAudioEngine;
    id <FNFPlayerAudioDecoder> _defaultAudioDecoder;
    long long _status;
    id <FNFAVPlayerItem> _currentItem;
    float _rate;
    id <FNFPlayerEventListener> _eventListener;
    _Bool _shouldRemoveAVPlayerSupport;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;
- (id)layer;
- (void)addRepresentationChangedCallback:(CDUnknownBlockType)arg1;
- (void)removeLevelMeterCallback;
- (void)addLevelMeterCallback:(CDUnknownBlockType)arg1 timeInterval:(CDStruct_1b6d18a9)arg2;
- (void)removeTimeObserver:(id)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 followMasterClock:(_Bool)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (id)addPeriodicTimeObserverForInterval:(CDStruct_1b6d18a9)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (CDStruct_1b6d18a9)lastRequestedStartTime;
- (CDStruct_1b6d18a9)lastStartingTime;
- (CDStruct_1b6d18a9)currentTime;
- (id)currentItem;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSError *error;
@property(nonatomic, getter=isMuted) _Bool muted;
@property(nonatomic) _Bool allowsExternalPlayback;
@property(nonatomic) float rate;
@property(nonatomic) float volume;
- (void)setPlayerEventListener:(id)arg1;
- (void)setLiveTraceManager:(id)arg1;
- (void)setVolume:(float)arg1 rampTime:(float)arg2;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)setAudioDecoder:(id)arg1;
- (void)setAudioEngine:(id)arg1;
- (void)setCaptionParser:(id)arg1;
- (void)setRenderer:(id)arg1;
- (void)pause;
- (void)play;
- (void)playbackDidStall:(unsigned long long)arg1 didStartPlaying:(_Bool)arg2;
- (void)playerItemDidPlayToEndTime;
- (void)rateUpdated:(float)arg1;
- (void)currentItemUpdated:(id)arg1;
- (void)statusUpdated:(long long)arg1;
- (void)_applicationDidBecomeActive;
- (void)_applicationWillResignActive;
- (id)initWithDisplayEngine:(id)arg1 clock:(id)arg2 config:(CDStruct_8b55b613)arg3 asyncTimebase:(_Bool)arg4 enableOpus:(_Bool)arg5;
- (id)initWithDisplayEngine:(id)arg1 config:(CDStruct_8b55b613)arg2 asyncTimebase:(_Bool)arg3 enableOpus:(_Bool)arg4;
- (id)initWithDisplayEngine:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

