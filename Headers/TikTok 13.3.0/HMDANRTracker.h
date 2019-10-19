//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDTracker.h"

#import "HMDANRMonitorDelegate-Protocol.h"
#import "HMDExceptionReporterDelegate-Protocol.h"

@class NSArray, NSString;

@interface HMDANRTracker : HMDTracker <HMDExceptionReporterDelegate, HMDANRMonitorDelegate>
{
    double _runloopStartTime;
    NSArray *andConditions;
    unsigned long long _uploadCount;
}

+ (id)sharedTracker;
@property(nonatomic) unsigned long long uploadCount; // @synthesize uploadCount=_uploadCount;
- (void).cxx_destruct;
- (void)exceptionReporterDidReceiveResponse:(_Bool)arg1;
- (id)pendingNormalExceptionData;
- (long long)dbMaxSize;
- (id)dealNotDebugRealPerformanceData;
- (void)cleanupExceptionDataWithConfig:(id)arg1;
- (id)pendingDebugRealExceptionDataWithConfig:(id)arg1;
- (id)getANRDataWithRecords:(id)arg1;
- (void)uploadANRLogIfNeeded;
- (id)recordsFilteredByConditions:(id)arg1;
- (void)applicationDidNotRespond:(_Bool)arg1 interval:(double)arg2 stack:(id)arg3;
- (void)updateConfig:(id)arg1;
- (_Bool)exceptionDataSource;
- (void)stop;
- (void)start;
- (Class)storeClass;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

