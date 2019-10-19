//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESSoundOutput.h"

@class IESSoundEventQueue;

@interface IESSoundOutput_AudioQueue : IESSoundOutput
{
    struct AudioQueueBuffer **_audioQueueBuffers;
    unsigned int _audioQueueBufferCount;
    _Bool _audioNeedToOutput;
    unsigned int _bytesOffset;
    IESSoundEventQueue *_context;
    struct OpaqueAudioQueue *_audioQueue;
}

@property(nonatomic) unsigned int bytesOffset; // @synthesize bytesOffset=_bytesOffset;
@property(nonatomic) struct OpaqueAudioQueue *audioQueue; // @synthesize audioQueue=_audioQueue;
@property(nonatomic) __weak IESSoundEventQueue *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (float)volume;
- (void)setVolume:(float)arg1;
- (_Bool)isPlaying;
- (void)reset;
- (void)stop;
- (void)pause;
- (void)play;
- (void)enqueueBuffer:(struct AudioQueueBuffer *)arg1;
- (_Bool)setup;
- (id)initWithContext:(id)arg1;
- (void)dealloc;

@end

