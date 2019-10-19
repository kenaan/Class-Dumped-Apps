//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAudioRecorderDelegate-Protocol.h"

@class AVAudioRecorder, NSDate, NSString, NSTimer, NSURL;
@protocol AWEIMAudioMessageRecorderDelegate, OS_dispatch_queue;

@interface AWEIMAudioMessageRecorder : NSObject <AVAudioRecorderDelegate>
{
    _Bool _deleteFileAfterStopFlag;
    float _peakPower;
    float _averagePower;
    id <AWEIMAudioMessageRecorderDelegate> _delegate;
    double _minSecond;
    double _limitSecond;
    double _thresholdSecondOfNotification;
    NSURL *_url;
    unsigned long long _status;
    double _currentTime;
    double _lastNotifyTime;
    NSString *_oldAudioSessionCategory;
    unsigned long long _audioFormat;
    NSTimer *_updatePowerTimer;
    AVAudioRecorder *_recorder;
    NSDate *_startRecordingDate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSDate *startRecordingDate; // @synthesize startRecordingDate=_startRecordingDate;
@property(nonatomic) _Bool deleteFileAfterStopFlag; // @synthesize deleteFileAfterStopFlag=_deleteFileAfterStopFlag;
@property(retain, nonatomic) AVAudioRecorder *recorder; // @synthesize recorder=_recorder;
@property(retain, nonatomic) NSTimer *updatePowerTimer; // @synthesize updatePowerTimer=_updatePowerTimer;
@property(nonatomic) unsigned long long audioFormat; // @synthesize audioFormat=_audioFormat;
@property(retain, nonatomic) NSString *oldAudioSessionCategory; // @synthesize oldAudioSessionCategory=_oldAudioSessionCategory;
@property(nonatomic) double lastNotifyTime; // @synthesize lastNotifyTime=_lastNotifyTime;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) float averagePower; // @synthesize averagePower=_averagePower;
@property(nonatomic) float peakPower; // @synthesize peakPower=_peakPower;
@property unsigned long long status; // @synthesize status=_status;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) double thresholdSecondOfNotification; // @synthesize thresholdSecondOfNotification=_thresholdSecondOfNotification;
@property(nonatomic) double limitSecond; // @synthesize limitSecond=_limitSecond;
@property(nonatomic) double minSecond; // @synthesize minSecond=_minSecond;
@property(nonatomic) __weak id <AWEIMAudioMessageRecorderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handleDidEnterBackgroundNotification:(id)arg1;
- (void)handleAudioSessionInterruptionNotification:(id)arg1;
- (_Bool)setAudioCategory:(id)arg1 activeAudioSession:(_Bool)arg2;
- (void)audioRecorderEncodeErrorDidOccur:(id)arg1 error:(id)arg2;
- (void)audioRecorderDidFinishRecording:(id)arg1 successfully:(_Bool)arg2;
- (void)updatePowerTimerFired:(id)arg1;
- (double)p_getRecorderCurrentTime;
- (void)recorderDidStoppedWithResult:(_Bool)arg1 error:(id)arg2;
- (void)cancel;
- (void)stop;
- (void)audioRecorderDidStartWithError:(id)arg1;
- (void)record;
- (id)initWithURL:(id)arg1 audioFormat:(unsigned long long)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

