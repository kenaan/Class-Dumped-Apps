//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveVideoDataSourceProvider-Protocol.h"

@class NSString;
@protocol HTSLiveVideoDataInput, HTSLiveVideoDataOutput, IESLiveMonitor;

@interface HTSLiveRecordVideoDataPipe : NSObject <HTSLiveVideoDataSourceProvider>
{
    id <HTSLiveVideoDataOutput> _currentOutput;
    id <HTSLiveVideoDataOutput> _standardOutput;
    id <HTSLiveVideoDataInput> _dataInput;
    long long _redirectStartTime;
    long long _redirectEndTime;
    id <IESLiveMonitor> _monitor;
}

@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(nonatomic) long long redirectEndTime; // @synthesize redirectEndTime=_redirectEndTime;
@property(nonatomic) long long redirectStartTime; // @synthesize redirectStartTime=_redirectStartTime;
@property(nonatomic) __weak id <HTSLiveVideoDataInput> dataInput; // @synthesize dataInput=_dataInput;
@property(nonatomic) __weak id <HTSLiveVideoDataOutput> standardOutput; // @synthesize standardOutput=_standardOutput;
@property(retain, nonatomic) id <HTSLiveVideoDataOutput> currentOutput; // @synthesize currentOutput=_currentOutput;
- (void).cxx_destruct;
- (_Bool)isStandardOutput;
- (void)stop;
- (id)previewView;
- (void)restoreStandardOutput;
- (void)startStandardOutput;
- (void)redirectOutput:(id)arg1;
- (void)setInput:(id)arg1;
- (void)stopWorkingWithNext:(CDUnknownBlockType)arg1;
- (void)startWorking;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (void)processPixelBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;
- (id)initWithInput:(id)arg1 standardOutput:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

