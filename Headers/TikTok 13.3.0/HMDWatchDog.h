//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDWatchDog : NSObject
{
}

+ (double)launchCrashThreadhold;
+ (double)timeoutAccuracy;
+ (double)userForceQuit_timeout;
+ (void)setLaunchCrashThreadhold:(double)arg1;
+ (void)setTimeoutAccuracy:(double)arg1;
+ (void)setTimeoutDuration:(double)arg1;
+ (_Bool)findOrCreateDirectoryInPath:(id)arg1;
+ (id)findOrCreateDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 appendPathComponent:(id)arg3;
+ (_Bool)deleteFileFromDefaultDictionaryWithFileName:(id)arg1;
+ (id)dataFromDefaultDictionaryWithFileName:(id)arg1;
+ (_Bool)storeData:(id)arg1 toDefaultDictionaryWithFileName:(id)arg2;
+ (id)tryToFetchLastTimeSecondWatchDogDictionary;
+ (id)tryToFetchLastTimeMainWatchDogDictionary;
+ (void)checkIfWatchDogHappenLastTime_lock_free;
+ (void)forceCleanBothWatchDogFileIfExist_lock_free;
+ (void)writeMainWatchDogFileWithTimeout_lock_free:(double)arg1;
+ (void)writeSecondWatchDogFileWithTimeout_lock_free:(double)arg1;
+ (void)cleanSecondWatchDogFileIfCurrentLaunchWrite_lock_free;
+ (void)cleanMainWatchDogFileIfCurrentLaunchWrite_lock_free;
+ (_Bool)logLifeCountAndReturnShouldMonitorThisTime;
+ (void)waitForNextMainThreadState;
+ (int)waitForTime:(double)arg1;
+ (void)threadEntrance:(id)arg1;
+ (void)stop;
+ (void)start;
+ (void)setDelegate:(id)arg1;
+ (void)startWithDelegate:(id)arg1;

@end

