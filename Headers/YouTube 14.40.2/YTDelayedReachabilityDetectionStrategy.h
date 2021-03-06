//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTLoggingReachabilityDetectionStrategy.h"

@class YTTimedAction;

@interface YTDelayedReachabilityDetectionStrategy : YTLoggingReachabilityDetectionStrategy
{
    double _connectionTimerInterval;
    _Bool _systemReachable;
    _Bool _errorThresholdExceeded;
    YTTimedAction *_connectionTimer;
}

@property(nonatomic) _Bool errorThresholdExceeded; // @synthesize errorThresholdExceeded=_errorThresholdExceeded;
@property(retain, nonatomic) YTTimedAction *connectionTimer; // @synthesize connectionTimer=_connectionTimer;
- (_Bool)systemReachable;
- (void).cxx_destruct;
- (void)connectionTimerFired;
- (void)setSystemReachable:(_Bool)arg1;
- (void)requestDidSucceedWithURL:(id)arg1;
- (int)detectionStrategyType;
- (id)initWithLoggingBlock:(CDUnknownBlockType)arg1;

@end

