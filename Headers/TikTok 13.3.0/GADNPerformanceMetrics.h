//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADNFramerateObserver-Protocol.h"

@class GADNMemoryUtilizationMonitor, GADNNetworkUtilizationMonitor, GADNScheduler, NSArray, NSDate, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface GADNPerformanceMetrics : NSObject <GADNFramerateObserver>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDate *_startTimestamp;
    NSMutableArray *_droppedFrameCounts;
    double _droppedFrameReportingInterval;
    GADNMemoryUtilizationMonitor *_memoryMonitor;
    GADNScheduler *_memoryUpdateScheduler;
    GADNNetworkUtilizationMonitor *_networkMonitor;
    unsigned long long _initiallyAllocatedByteCount;
    unsigned long long _peakAllocatedByteCount;
    unsigned long long _finalAllocatedByteCount;
    long long _cellularTransmittedByteCount;
    long long _cellularReceivedByteCount;
    long long _wifiTransmittedByteCount;
    long long _wifiReceivedByteCount;
}

- (void).cxx_destruct;
- (void)framerateMonitorDidDetectDroppedFrames:(long long)arg1;
- (void)recordDroppedFrames:(long long)arg1 forBucketIndex:(long long)arg2;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, nonatomic) long long wifiReceivedByteCount;
@property(readonly, nonatomic) long long wifiTransmittedByteCount;
@property(readonly, nonatomic) long long cellularReceivedByteCount;
@property(readonly, nonatomic) long long cellularTransmittedByteCount;
@property(readonly, nonatomic) unsigned long long finalAllocatedByteCount;
@property(readonly, nonatomic) unsigned long long peakAllocatedByteCount;
@property(readonly, nonatomic) unsigned long long initiallyAllocatedByteCount;
@property(readonly, copy, nonatomic) NSArray *droppedFrameCountPerSample;
- (void)stop;
- (void)start;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

