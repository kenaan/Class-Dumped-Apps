//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface BDTrackerBackgroundSessionHandler : NSObject
{
    double _taskDuration;
    struct _opaque_pthread_mutex_t _lastTaskLock;
    struct _opaque_pthread_mutex_t _taskDurationLock;
    struct _opaque_pthread_mutex_t _sessionLock;
    NSString *_fromSessionID;
    NSString *_toSessionID;
    NSMutableArray *_tasks;
    _Bool _startNewSessionIfNeed;
    _Bool _didPauseOrStopTask;
    double _taskPauseTimerInterval;
    double _taskStartTimerInterval;
    CDUnknownBlockType _isTaskRunningBlock;
    NSString *_sessionID;
    NSString *_trackID;
}

+ (id)shareInstance;
@property(nonatomic) _Bool didPauseOrStopTask; // @synthesize didPauseOrStopTask=_didPauseOrStopTask;
@property(copy, nonatomic) NSString *trackID; // @synthesize trackID=_trackID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property(copy, nonatomic) CDUnknownBlockType isTaskRunningBlock; // @synthesize isTaskRunningBlock=_isTaskRunningBlock;
- (void).cxx_destruct;
@property(nonatomic) double taskDuration; // @synthesize taskDuration=_taskDuration;
@property(nonatomic) double taskStartTimerInterval; // @synthesize taskStartTimerInterval=_taskStartTimerInterval;
@property(nonatomic) double taskPauseTimerInterval; // @synthesize taskPauseTimerInterval=_taskPauseTimerInterval;
- (void)registerIsTaskRunningBlock:(CDUnknownBlockType)arg1;
- (void)onBgTaskResume;
- (void)onBgTaskPause;
- (void)recordTaskDuration;
- (void)reset;
- (void)startSession;
- (void)stopSessionNeedRecordTaskDuration:(_Bool)arg1;
- (void)stopSession;
- (void)stopSessionIfNeed;
- (void)startSessionIfNeed;
- (void)willTerminate:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)willEnterForeground:(id)arg1;
- (void)registerNotifications;
- (id)init;
- (void)dealloc;

@end

