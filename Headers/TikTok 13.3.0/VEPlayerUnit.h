//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

#import "HTSMediaMixPlayerDelegate-Protocol.h"
#import "HTSMoviePlayerDelegate-Protocol.h"
#import "VEAppStatusProtocol-Protocol.h"
#import "VEPlayerUnitProtocol-Protocol.h"

@class HTSAudioExport, HTSMediaMixPlayer, IESMMAudioFilter, IESMMAudioProcessorEx, NSMutableArray, NSString, VEMoviePlayer, VEPlayerUnitConfig;
@protocol VEProcessSampleDelegate;

@interface VEPlayerUnit : IESMMObject <HTSMediaMixPlayerDelegate, HTSMoviePlayerDelegate, VEAppStatusProtocol, VEPlayerUnitProtocol>
{
    _Bool _isRetainOriginalSound;
    _Bool _playerPlayed;
    NSString *_route;
    HTSMediaMixPlayer *_mixPlayer;
    long long _status;
    CDUnknownBlockType _mixPlayerCompleteBlock;
    id <VEProcessSampleDelegate> _downstream;
    CDUnknownBlockType _failedToPlayBlk;
    NSMutableArray *_observerArray;
    double _startTime;
    VEMoviePlayer *_moviePlayer;
    CDUnknownBlockType _completeBlock;
    CDUnknownBlockType _updateVideoDataCompleteBlock;
    IESMMAudioFilter *_audioFilter;
    IESMMAudioProcessorEx *_audioProcess;
    HTSAudioExport *_audioExportor;
    VEPlayerUnitConfig *_config;
    struct CGSize _videoSize;
}

+ (void)setCustomPlayerAudioCategory:(id)arg1;
@property(nonatomic) _Bool playerPlayed; // @synthesize playerPlayed=_playerPlayed;
@property(nonatomic) _Bool isRetainOriginalSound; // @synthesize isRetainOriginalSound=_isRetainOriginalSound;
@property(retain, nonatomic) VEPlayerUnitConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) HTSAudioExport *audioExportor; // @synthesize audioExportor=_audioExportor;
@property(retain, nonatomic) IESMMAudioProcessorEx *audioProcess; // @synthesize audioProcess=_audioProcess;
@property(retain, nonatomic) IESMMAudioFilter *audioFilter; // @synthesize audioFilter=_audioFilter;
@property(copy, nonatomic) CDUnknownBlockType updateVideoDataCompleteBlock; // @synthesize updateVideoDataCompleteBlock=_updateVideoDataCompleteBlock;
@property(copy, nonatomic) CDUnknownBlockType completeBlock; // @synthesize completeBlock=_completeBlock;
@property(retain, nonatomic) VEMoviePlayer *moviePlayer; // @synthesize moviePlayer=_moviePlayer;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(copy, nonatomic) CDUnknownBlockType failedToPlayBlk; // @synthesize failedToPlayBlk=_failedToPlayBlk;
@property(nonatomic) __weak id <VEProcessSampleDelegate> downstream; // @synthesize downstream=_downstream;
@property(copy, nonatomic) CDUnknownBlockType mixPlayerCompleteBlock; // @synthesize mixPlayerCompleteBlock=_mixPlayerCompleteBlock;
@property(readonly, nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) HTSMediaMixPlayer *mixPlayer; // @synthesize mixPlayer=_mixPlayer;
@property(retain, nonatomic) NSString *route; // @synthesize route=_route;
- (void).cxx_destruct;
- (void)setRetainOriginalSound:(_Bool)arg1;
- (void)cancelAudioDubs:(int)arg1 inVideoData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)applyAudioDubs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)changeAudioEffect:(id)arg1 inVideoData:(id)arg2 inChunkParam:(id)arg3 completeBlock:(CDUnknownBlockType)arg4;
- (_Bool)preProcessAudio:(id)arg1 inChunkParam:(id)arg2 withInfo:(id)arg3;
- (void)p_checkAudioSessionAsync:(_Bool)arg1;
- (double)removeEffectWithRangeID:(id)arg1;
- (double)removeLastOperation;
- (void)stopEffectwithTime:(double)arg1;
- (void)startEffectWithTime:(double)arg1;
- (void)exitProcessEffect;
- (void)readytoProcessEffect:(CDStruct_1b6d18a9)arg1;
- (void)resignActive;
- (void)enterForeground;
- (void)enterBackground;
- (void)becomeActive;
- (void)moviePlayerNeedReset;
- (void)mediaMixPlayer:(id)arg1 didResetItem:(id)arg2;
- (void)mediaMixPlayer:(id)arg1 willResetItem:(id)arg2;
- (void)resetRefer;
- (void)setStatus:(long long)arg1;
- (_Bool)isOnWindow;
- (void)enableHighFrameRateRender:(_Bool)arg1;
- (void)enableStillRender:(_Bool)arg1;
- (void)updateVideoData:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (struct CGSize)getVideoSize;
- (void)startMoviePlayer;
- (void)stopMoviePlayer;
- (void)stop;
- (void)pause:(_Bool)arg1;
- (void)pause;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)play;
- (void)pauseMixPlayer;
- (void)playMixPlayer;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)dealloc;
- (void)resetPlayerCompleteBlock;
- (void)p_resetPlayerWithError:(id)arg1;
- (void)p_initMoviePlayer;
- (void)p_initMixPlayer;
- (void)p_addPlayerStatusObserver;
- (void)p_addAllObserver;
- (id)initWithConfig:(id)arg1 finishBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

