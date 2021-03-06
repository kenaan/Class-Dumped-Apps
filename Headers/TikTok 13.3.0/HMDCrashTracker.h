//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDTracker.h"

#import "HMDCrashKitDelegate-Protocol.h"
#import "HMDCrashlogUploaderDelegate-Protocol.h"
#import "HMDExcludeModule-Protocol.h"

@class HMDCrashLogTracker, HMDCrashlogUploader, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCrashTracker : HMDTracker <HMDExcludeModule, HMDCrashlogUploaderDelegate, HMDCrashKitDelegate>
{
    _Bool _finishDetection;
    _Bool _detected;
    _Bool _useCompactUnwind;
    NSString *_crashPath;
    double _launchThreshold;
    NSObject<OS_dispatch_queue> *_decideLastTimeCrashQueue;
    HMDCrashLogTracker *_crashlogTracker;
    HMDCrashlogUploader *_crashlogUploader;
    NSArray *_reportBlocks;
}

+ (id)excludedModule;
+ (id)sharedTracker;
@property(nonatomic) _Bool useCompactUnwind; // @synthesize useCompactUnwind=_useCompactUnwind;
@property(copy) NSArray *reportBlocks; // @synthesize reportBlocks=_reportBlocks;
@property(retain, nonatomic) HMDCrashlogUploader *crashlogUploader; // @synthesize crashlogUploader=_crashlogUploader;
@property(getter=isDetected) _Bool detected; // @synthesize detected=_detected;
@property(getter=isFinishDetection) _Bool finishDetection; // @synthesize finishDetection=_finishDetection;
@property(retain, nonatomic) HMDCrashLogTracker *crashlogTracker; // @synthesize crashlogTracker=_crashlogTracker;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *decideLastTimeCrashQueue; // @synthesize decideLastTimeCrashQueue=_decideLastTimeCrashQueue;
@property(readonly, nonatomic) double launchThreshold; // @synthesize launchThreshold=_launchThreshold;
@property(retain, nonatomic) NSString *crashPath; // @synthesize crashPath=_crashPath;
- (void).cxx_destruct;
- (id)finishDetectionNotification;
- (void)logEventAfterUpload:(id)arg1 sessionID:(id)arg2 extra:(id)arg3;
- (void)logEventBeforeUpload:(id)arg1 sessionID:(id)arg2 extra:(id)arg3;
- (id)logInfoForCrashlogTrackerFromPostData:(id)arg1;
- (void)didReportCrashlog:(id)arg1 sessionID:(id)arg2 error:(id)arg3 isBackgroundSession:(_Bool)arg4;
- (void)willReportCrashlog:(id)arg1 sessionID:(id)arg2 isBackgroundSession:(_Bool)arg3;
- (void)didFinishUploadingCrashRecords;
- (void)didDetectOneCrashRecord:(id)arg1;
- (_Bool)shouldEncryptPostData;
- (void)uploadCrashLogImmediately;
- (void)addCrashDetectCallBack:(CDUnknownBlockType)arg1;
- (void)updateConfig:(id)arg1;
- (void)cleanupWithConfig:(id)arg1;
- (Class)storeClass;
- (_Bool)needSyncStart;
- (void)stop;
- (void)start;
- (void)notifyCrashDetect;
- (void)hmdCrashKitDidDetectCrashForLastTime:(id)arg1;
- (_Bool)decideUseNewCrash;
- (void)setupCrashStaticInfo;
- (id)init;
- (void)dealloc;
- (void)appReachStateChanged:(id)arg1;
- (void)environmentInfoUpdate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)makeObservationOnKeyData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

