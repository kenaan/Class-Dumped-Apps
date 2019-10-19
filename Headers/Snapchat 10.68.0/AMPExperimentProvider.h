//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSNumber;

@interface AMPExperimentProvider : NSObject
{
    NSNumber *_enableReliableUploads;
    NSNumber *_enableCriticalReliableUploads;
    NSNumber *_enableNullSequenceId;
    NSNumber *_enableNullFirstUploadAttemptDate;
    NSNumber *_enablePrefetchHighPriorityQueues;
    NSNumber *_enablePrefetchLowPriorityQueues;
    NSNumber *_prefetchLowPriorityQueuesThreshold;
    NSNumber *_turnOffAppBlizzardRequestLogs;
    NSNumber *_abExposureCacheEnabled;
    NSNumber *_abExposureCacheTTLHours;
    NSNumber *_abExposureCacheResetIntervalInDays;
    NSMutableDictionary *_abExposureCacheEnabledForStudy;
}

- (void).cxx_destruct;
- (unsigned long long)prefetchLowPriorityQueuesThreshold;
- (_Bool)enablePrefetchLowPriorityQueues;
- (_Bool)enablePrefetchHighPriorityQueues;
- (double)abExposureCacheResetIntervalInDays;
- (double)abExposureCacheTTLHours;
- (_Bool)abExposureCacheEnabledForStudy:(id)arg1;
- (_Bool)abExposureCacheEnabled;
- (_Bool)enableNullFirstUploadAttemptDate;
- (_Bool)enableNullSequenceId;
- (_Bool)turnOffAppBlizzardRequestLogs;
- (_Bool)enableCriticalReliableUploads;
- (_Bool)enableReliableUploads;
- (id)init;

@end
