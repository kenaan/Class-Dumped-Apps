//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSPlayer.h"

#import "IESAudioRecorderDelegate-Protocol.h"

@class IESAudioRecorder, NSString, NSTimer, NSURL;

@interface IESAudioMixPlayer : HTSPlayer <IESAudioRecorderDelegate>
{
    _Bool _onlyPlayAudio;
    IESAudioRecorder *_recorder;
    NSURL *_musicURL;
    NSURL *_recordeURL;
    NSTimer *_progressTimer;
    double _audioStartTime;
    double _musicStartTime;
}

+ (id)mixPlayerWithView:(id)arg1 videoData:(id)arg2 musicURL:(id)arg3 recordeURL:(id)arg4 openBuildChain:(_Bool)arg5 withAudioStartTime:(double)arg6 musicStartTime:(double)arg7;
@property(nonatomic) double musicStartTime; // @synthesize musicStartTime=_musicStartTime;
@property(nonatomic) double audioStartTime; // @synthesize audioStartTime=_audioStartTime;
@property(retain, nonatomic) NSTimer *progressTimer; // @synthesize progressTimer=_progressTimer;
@property(nonatomic) _Bool onlyPlayAudio; // @synthesize onlyPlayAudio=_onlyPlayAudio;
@property(retain, nonatomic) NSURL *recordeURL; // @synthesize recordeURL=_recordeURL;
@property(retain, nonatomic) NSURL *musicURL; // @synthesize musicURL=_musicURL;
@property(readonly, nonatomic) IESAudioRecorder *recorder; // @synthesize recorder=_recorder;
- (void).cxx_destruct;
- (void)dealloc;
- (void)recorderDidPlayToEnd:(id)arg1;
- (void)startRenderAudioAndWriteToFile:(CDUnknownBlockType)arg1;
- (void)adjustTimeOffsetOfMusic:(double)arg1;
@property(nonatomic) double musicPitch;
@property(nonatomic) double recordVolume;
@property(nonatomic) double musicVolume;
- (void)monitorProgress;
- (void)stopTimer;
- (void)startTimer;
- (void)replay;
- (void)stop;
- (void)pause;
- (void)playFromTime:(CDStruct_1b6d18a9)arg1;
- (void)resetAudioStartTime:(double)arg1 musicStartTime:(double)arg2;
- (id)initWithView:(id)arg1 videoData:(id)arg2 musicURL:(id)arg3 recordeURL:(id)arg4 openBuildChain:(_Bool)arg5 withAudioStartTime:(double)arg6 musicStartTime:(double)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

