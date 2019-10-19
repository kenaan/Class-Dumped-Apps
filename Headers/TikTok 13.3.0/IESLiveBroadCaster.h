//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESLiveConfiguration, IESLiveMultiTimerManager, LiveStreamSession, NSMutableSet, NSString, UIImage;
@protocol OS_dispatch_queue;

@interface IESLiveBroadCaster : NSObject
{
    NSObject<OS_dispatch_queue> *_audioBlackFrameQueue;
    struct __CVBuffer *_blackFrameImageBuffer;
    CDStruct_1b6d18a9 _startAudioWithBlackFrame_PTS;
    double _startAudioWithBlackFrameTime;
    NSMutableSet *_observerSet;
    _Bool _isDisconnected;
    long long _badConditionCount;
    _Bool _shouldRetryConnect;
    _Bool _retryConnecting;
    _Bool _switched;
    CDUnknownBlockType _reportStateBlock;
    CDUnknownBlockType _stateExtraInfoBlock;
    CDUnknownBlockType _restoreBlock;
    CDUnknownBlockType _retryingBlock;
    CDUnknownBlockType _lowBitrateBlock;
    CDUnknownBlockType _stateDidChangeBlock;
    CDUnknownBlockType _realBitrateBlock;
    IESLiveConfiguration *_config;
    NSString *_rtmpUrl;
    LiveStreamSession *_liveSession;
    unsigned long long _audioSource;
    IESLiveMultiTimerManager *_timerManager;
    UIImage *_blackFrameImage;
}

@property(retain, nonatomic) UIImage *blackFrameImage; // @synthesize blackFrameImage=_blackFrameImage;
@property(retain, nonatomic) IESLiveMultiTimerManager *timerManager; // @synthesize timerManager=_timerManager;
@property(nonatomic) unsigned long long audioSource; // @synthesize audioSource=_audioSource;
@property(nonatomic) _Bool switched; // @synthesize switched=_switched;
@property(nonatomic) _Bool retryConnecting; // @synthesize retryConnecting=_retryConnecting;
@property(retain, nonatomic) LiveStreamSession *liveSession; // @synthesize liveSession=_liveSession;
@property(copy, nonatomic) NSString *rtmpUrl; // @synthesize rtmpUrl=_rtmpUrl;
@property(retain, nonatomic) IESLiveConfiguration *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType realBitrateBlock; // @synthesize realBitrateBlock=_realBitrateBlock;
@property(copy, nonatomic) CDUnknownBlockType stateDidChangeBlock; // @synthesize stateDidChangeBlock=_stateDidChangeBlock;
@property(nonatomic) _Bool shouldRetryConnect; // @synthesize shouldRetryConnect=_shouldRetryConnect;
@property(copy, nonatomic) CDUnknownBlockType lowBitrateBlock; // @synthesize lowBitrateBlock=_lowBitrateBlock;
@property(copy, nonatomic) CDUnknownBlockType retryingBlock; // @synthesize retryingBlock=_retryingBlock;
@property(copy, nonatomic) CDUnknownBlockType restoreBlock; // @synthesize restoreBlock=_restoreBlock;
@property(copy, nonatomic) CDUnknownBlockType stateExtraInfoBlock; // @synthesize stateExtraInfoBlock=_stateExtraInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType reportStateBlock; // @synthesize reportStateBlock=_reportStateBlock;
- (void).cxx_destruct;
- (void)streamSession:(id)arg1 onError:(long long)arg2;
- (void)streamSession:(id)arg1 onStatusChanged:(long long)arg2;
- (unsigned long long)broadcastStateWithStreamState:(long long)arg1;
- (void)pr_stopStreaming;
- (void)pr_startStreaming:(id)arg1;
- (void)pr_handleRetryResultWithState:(long long)arg1;
- (void)pr_retryConnecting;
- (void)pr_resetCount;
- (void)pr_detectNetworkConditionWithSendBitrate:(long long)arg1;
- (void)processLog:(id)arg1;
- (void)initStreamer;
- (id)streamConfig;
@property(readonly, nonatomic) long long minTransportBitrate;
@property(readonly, nonatomic) long long maxTransportBitrate;
@property(readonly, nonatomic) long long realTransportBitrate;
- (long long)getLiveStreamAudioCodec:(long long)arg1;
- (unsigned long long)getLiveStreamVideoCodec:(unsigned long long)arg1;
- (long long)getVideoEncodeProfile:(long long)arg1;
- (id)currentConfig;
- (void)refreshConfig:(id)arg1;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (void)processVideoSampleBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;
- (_Bool)running;
- (void)stopStreamer;
- (void)setMute:(_Bool)arg1;
- (void)switchWithRtmpUrl:(id)arg1;
- (void)stop;
- (void)start;
- (void)setupWithConfiguration:(id)arg1;
- (id)ktvHandler;
- (void)appWillResignActive;
- (void)appDidActive;
- (id)init;
- (void)dealloc;
- (void)pr_enableInEarMonitoring:(_Bool)arg1;
- (void)_pushBlackFrameSampleBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;
- (void)stopPushBlackFrame;
- (void)startPushBlackFrame;
- (void)loadBlackFrameImage;
- (id)createBlackFrameImageWithSize:(struct CGSize)arg1;

@end

