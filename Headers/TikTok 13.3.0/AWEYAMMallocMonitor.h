//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEYAMMallocMonitorDataSource, NSArray;

@interface AWEYAMMallocMonitor : NSObject
{
    _Bool _verbose;
    double _monitorTimeInterval;
    unsigned long long _lastTotalUsageForByte;
    NSArray *_momoryWarningStep;
    CDUnknownBlockType _maxThresholdTriggleBlock;
    unsigned long long _singleChunkSizeThreshold;
    unsigned long long _grownRatio;
    CDUnknownBlockType _maxThunkTriggleBlock;
    CDUnknownBlockType _maxGrownRatioTriggleBlock;
    AWEYAMMallocMonitorDataSource *_datasource;
    CDUnknownBlockType _verboseTimerScheduleBlock;
    CDUnknownBlockType _verboseMallocBlock;
    CDUnknownBlockType _mallocCallBack;
}

+ (id)shareInstance;
@property(copy, nonatomic) CDUnknownBlockType mallocCallBack; // @synthesize mallocCallBack=_mallocCallBack;
@property(copy, nonatomic) CDUnknownBlockType verboseMallocBlock; // @synthesize verboseMallocBlock=_verboseMallocBlock;
@property(copy, nonatomic) CDUnknownBlockType verboseTimerScheduleBlock; // @synthesize verboseTimerScheduleBlock=_verboseTimerScheduleBlock;
@property(retain, nonatomic) AWEYAMMallocMonitorDataSource *datasource; // @synthesize datasource=_datasource;
@property(copy, nonatomic) CDUnknownBlockType maxGrownRatioTriggleBlock; // @synthesize maxGrownRatioTriggleBlock=_maxGrownRatioTriggleBlock;
@property(copy, nonatomic) CDUnknownBlockType maxThunkTriggleBlock; // @synthesize maxThunkTriggleBlock=_maxThunkTriggleBlock;
@property(nonatomic) unsigned long long grownRatio; // @synthesize grownRatio=_grownRatio;
@property(nonatomic) unsigned long long singleChunkSizeThreshold; // @synthesize singleChunkSizeThreshold=_singleChunkSizeThreshold;
@property(copy, nonatomic) CDUnknownBlockType maxThresholdTriggleBlock; // @synthesize maxThresholdTriggleBlock=_maxThresholdTriggleBlock;
@property(readonly, copy, nonatomic) NSArray *momoryWarningStep; // @synthesize momoryWarningStep=_momoryWarningStep;
@property(readonly, nonatomic) unsigned long long lastTotalUsageForByte; // @synthesize lastTotalUsageForByte=_lastTotalUsageForByte;
@property(nonatomic) _Bool verbose; // @synthesize verbose=_verbose;
@property(nonatomic) double monitorTimeInterval; // @synthesize monitorTimeInterval=_monitorTimeInterval;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool isStarted;
- (void)p_fetchCurrentMemoryUsage;
- (void)p_startScheduleMemeory;
- (void)p_stopScheduleMemeoryIfNeeded;
- (void)p_startMallocMonitor;
- (void)configVerboseBlockTimer:(CDUnknownBlockType)arg1 mallocVerboseBlock:(CDUnknownBlockType)arg2;
- (void)stopGrownRatioMonitor;
- (void)stopSingleChunkMallocMonitor;
- (void)stopMaxSizeThresholdMonitor;
- (_Bool)startSingleChunkMallocMonitor:(unsigned long long)arg1 callback:(CDUnknownBlockType)arg2;
- (_Bool)startGrownRatioMonitor:(unsigned long long)arg1 triggleBlock:(CDUnknownBlockType)arg2;
- (_Bool)startMaxSizeThresholdMonitor:(unsigned long long)arg1 memoryWarningStep:(id)arg2 growingStep:(long long)arg3 triggleBlock:(CDUnknownBlockType)arg4;
- (void)setUpWithmontitorInterval:(double)arg1;
- (id)init;

@end

