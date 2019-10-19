//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESMMAudioSingScore : NSObject
{
    struct SingScoring *_scoring;
    CDUnknownBlockType _scoreResultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType scoreResultBlock; // @synthesize scoreResultBlock=_scoreResultBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setPitch:(int)arg1;
- (void)seek:(double)arg1;
- (void)processInput:(float *)arg1 samples:(int)arg2;
- (void)processBufferList:(struct AudioBufferList *)arg1;
- (id)getMidiDataArray;
- (id)initWithSampleRate:(double)arg1 channels:(int)arg2 midiFilePath:(id)arg3 lyricTimes:(id)arg4;
- (id)initWithSampleRate:(double)arg1 channels:(int)arg2 midiFilePath:(id)arg3 lyricFilePath:(id)arg4;

@end

