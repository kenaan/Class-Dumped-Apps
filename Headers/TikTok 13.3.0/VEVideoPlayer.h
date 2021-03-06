//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEVideoReader.h"

@class AVPlayer, AVPlayerItem, AVPlayerItemVideoOutput, VEVideoConfig;

@interface VEVideoPlayer : VEVideoReader
{
    AVPlayer *_player;
    AVPlayerItem *_playerItem;
    AVPlayerItemVideoOutput *_playerItemOutput;
    struct __CVBuffer *_lastPixelBuffer;
    VEVideoConfig *_config;
    CDStruct_1b6d18a9 _lastTime;
}

@property(retain, nonatomic) VEVideoConfig *config; // @synthesize config=_config;
@property(nonatomic) CDStruct_1b6d18a9 lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) struct __CVBuffer *lastPixelBuffer; // @synthesize lastPixelBuffer=_lastPixelBuffer;
@property(retain, nonatomic) AVPlayerItemVideoOutput *playerItemOutput; // @synthesize playerItemOutput=_playerItemOutput;
@property(retain, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (id)copySampleBufferAtTime:(CDStruct_1b6d18a9)arg1 nextVSync:(double)arg2 forceFrame:(_Bool)arg3;
- (void)pause;
- (void)play;
- (id)initWithConfig:(id)arg1;

@end

