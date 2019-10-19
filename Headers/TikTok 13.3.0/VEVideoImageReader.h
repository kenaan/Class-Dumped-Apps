//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VEVideoReader.h"

@class VEVideoConfig;

@interface VEVideoImageReader : VEVideoReader
{
    VEVideoConfig *_config;
    CDStruct_1b6d18a9 _lastTime;
}

@property(nonatomic) CDStruct_1b6d18a9 lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) VEVideoConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)stop;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (id)copySampleBufferAtTime:(CDStruct_1b6d18a9)arg1 nextVSync:(double)arg2 forceFrame:(_Bool)arg3;
- (id)initWithConfig:(id)arg1;

@end

