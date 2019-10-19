//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HeimdallrModule.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_source;

@interface HMDTracker : HeimdallrModule
{
    NSObject<OS_dispatch_source> *_timer;
    double _startTimestamp;
    NSMutableArray *_records;
    double _refreshInterval;
}

+ (id)getLastSceneIfAvailable;
+ (id)sharedTracker;
@property(nonatomic) double refreshInterval; // @synthesize refreshInterval=_refreshInterval;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
- (void).cxx_destruct;
- (long long)dbMaxSize;
- (void)flushAsync;
- (_Bool)needSyncStart;
- (void)cleanupWithConfig:(id)arg1;
- (Class)storeClass;
- (void)updateConfig:(id)arg1;
- (void)setupWithHeimdallr:(id)arg1;
- (void)stop;
- (void)start;
- (void)flushWithTrackerBlock:(CDUnknownBlockType)arg1;
- (void)flush:(_Bool)arg1 trackerBlock:(CDUnknownBlockType)arg2;
- (void)scheduleTimerWithInterval:(double)arg1;
- (void)flushRecord:(id)arg1 async:(_Bool)arg2 trackerBlock:(CDUnknownBlockType)arg3;
- (void)didCollectOneRecord:(id)arg1 async:(_Bool)arg2 trackerBlock:(CDUnknownBlockType)arg3;
- (void)didCollectOneRecord:(id)arg1 async:(_Bool)arg2;
- (void)didCollectOneRecord:(id)arg1 trackerBlock:(CDUnknownBlockType)arg2;
- (void)didCollectOneRecord:(id)arg1;
- (id)init;

@end

