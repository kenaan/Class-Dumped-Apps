//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AVAudioSessionRouteDescription, RTCAudioSession;

@protocol RTCAudioSessionDelegate <NSObject>

@optional
- (void)audioSession:(RTCAudioSession *)arg1 didDetectPlayoutGlitch:(long long)arg2;
- (void)audioSession:(RTCAudioSession *)arg1 didChangeOutputVolume:(float)arg2;
- (void)audioSessionDidStopPlayOrRecord:(RTCAudioSession *)arg1;
- (void)audioSessionDidStartPlayOrRecord:(RTCAudioSession *)arg1;
- (void)audioSession:(RTCAudioSession *)arg1 didChangeCanPlayOrRecord:(_Bool)arg2;
- (void)audioSessionMediaServerReset:(RTCAudioSession *)arg1;
- (void)audioSessionMediaServerTerminated:(RTCAudioSession *)arg1;
- (void)audioSessionDidChangeRoute:(RTCAudioSession *)arg1 reason:(unsigned long long)arg2 previousRoute:(AVAudioSessionRouteDescription *)arg3;
- (void)audioSessionDidEndInterruption:(RTCAudioSession *)arg1 shouldResumeSession:(_Bool)arg2;
- (void)audioSessionDidBeginInterruption:(RTCAudioSession *)arg1;
@end
