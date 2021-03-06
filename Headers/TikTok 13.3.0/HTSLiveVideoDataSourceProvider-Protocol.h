//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView;
@protocol HTSLiveVideoDataInput, HTSLiveVideoDataOutput;

@protocol HTSLiveVideoDataSourceProvider <NSObject>
@property(retain, nonatomic) id <HTSLiveVideoDataOutput> currentOutput;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;
- (_Bool)isStandardOutput;
- (UIView *)previewView;
- (void)stop;
- (void)startWorking;
- (void)restoreStandardOutput;
- (void)startStandardOutput;
- (void)redirectOutput:(id <HTSLiveVideoDataOutput>)arg1;
- (void)setInput:(id <HTSLiveVideoDataInput>)arg1;
@end

