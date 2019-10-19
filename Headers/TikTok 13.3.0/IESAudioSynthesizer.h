//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESMMAudioEffect;

@interface IESAudioSynthesizer : NSObject
{
    struct OpaqueAUGraph *_graph;
    int _recordPlayerNode;
    int _musicPlayerNode;
    int _intConvertNode;
    int _floatConvertNode;
    int _pitchNode;
    int _mixerNode;
    int _outputNode;
    struct OpaqueAudioComponentInstance *_recordUnit;
    struct OpaqueAudioComponentInstance *_intUnit;
    struct OpaqueAudioComponentInstance *_floatUnit;
    struct OpaqueAudioComponentInstance *_pitchUnit;
    struct OpaqueAudioComponentInstance *_musicUnit;
    struct OpaqueAudioComponentInstance *_mixerUnit;
    struct OpaqueAudioComponentInstance *_outputUnit;
    struct AudioFileDescription _musicDesc;
    struct AudioFileDescription _recordDesc;
    struct IESRecorderDescription _format;
    struct OpaqueExtAudioFile *extAudioFile;
    IESMMAudioEffect *_audioEffect;
    unsigned int _totalFrameNums;
    struct AudioStreamBasicDescription _asbd;
    struct AudioBufferList *_bufferList;
    double _duration;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)startAudioGraph;
- (void)exportWithCompletion:(CDUnknownBlockType)arg1;
- (void)exportAsynchronouslyWithCompletion:(CDUnknownBlockType)arg1;
- (int)setupAudioFilePlayer:(struct AudioFileDescription)arg1;
- (void)setupOutputUnit;
- (void)setupPitchUnit;
- (void)setupFloatUnit;
- (void)setupIntUnit;
- (void)setupMixerUnit;
- (void)setupRecordUnit;
- (void)initializeAUGraph;
- (id)initWithRecordURL:(id)arg1 musicURL:(id)arg2 format:(struct IESRecorderDescription)arg3;

@end

