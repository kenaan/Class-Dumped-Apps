//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAudioPlayer, LSLiveAudioConverter, LSLiveAudioEffect;

@interface LSLiveAudioUnitProcess : NSObject
{
    struct OpaqueAUGraph *_graph;
    int _mixerNode;
    int _outputNode;
    struct OpaqueAudioComponentInstance *_mixerUnit;
    struct OpaqueAudioComponentInstance *_outputUnit;
    struct AudioStreamBasicDescription _asbd;
    LSLiveAudioConverter *_musicConverter;
    AudioBufferQueue_1f978939 _srcQueue;
    AudioBufferQueue_1f978939 _dstQueue;
    AVAudioPlayer *_audioPlayer;
    LSLiveAudioEffect *_audioEffect;
}

@property(retain, nonatomic) LSLiveAudioEffect *audioEffect; // @synthesize audioEffect=_audioEffect;
- (void).cxx_destruct;
- (void)dealloc;
- (void)processAudioBufferList:(struct AudioBufferList *)arg1 inNumberFrames:(unsigned int)arg2;
- (void)setMusicVolume:(double)arg1;
- (void)setRecordVolume:(double)arg1;
- (_Bool)isPlaying;
- (void)stopProcess;
- (void)pauseProcess;
- (void)startProcess;
- (void)setupMixerUnit;
- (void)setupOutputUnit;
- (void)initializeAUGraph;
- (void)checkPlayCategory;
- (void)routeChanged:(id)arg1;
- (id)initWithConfig:(id)arg1;

@end

