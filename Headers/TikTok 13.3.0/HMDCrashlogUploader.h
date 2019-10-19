//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDURLBackgrounSessionManagerDelegate-Protocol.h"

@class HMDURLBackgrounSessionManager, NSMutableDictionary, NSMutableSet, NSString;
@protocol HMDCrashlogUploaderDelegate, OS_dispatch_queue;

@interface HMDCrashlogUploader : NSObject <HMDURLBackgrounSessionManagerDelegate>
{
    _Bool _enableBackgroundSession;
    _Bool _isBackgroundSessionInvalid;
    id <HMDCrashlogUploaderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_uploadQueue;
    HMDURLBackgrounSessionManager *_backgroundSessionManager;
    NSMutableSet *_uploadingSessionIDs;
    NSMutableSet *_previousBackgroundSessionIDs;
    NSMutableSet *_detectedSessionIDs;
    NSMutableDictionary *_postDataCaches;
    NSString *_crashPath;
}

@property(copy, nonatomic) NSString *crashPath; // @synthesize crashPath=_crashPath;
@property(retain, nonatomic) NSMutableDictionary *postDataCaches; // @synthesize postDataCaches=_postDataCaches;
@property(retain, nonatomic) NSMutableSet *detectedSessionIDs; // @synthesize detectedSessionIDs=_detectedSessionIDs;
@property(retain, nonatomic) NSMutableSet *previousBackgroundSessionIDs; // @synthesize previousBackgroundSessionIDs=_previousBackgroundSessionIDs;
@property(retain, nonatomic) NSMutableSet *uploadingSessionIDs; // @synthesize uploadingSessionIDs=_uploadingSessionIDs;
@property(nonatomic) _Bool isBackgroundSessionInvalid; // @synthesize isBackgroundSessionInvalid=_isBackgroundSessionInvalid;
@property(retain, nonatomic) HMDURLBackgrounSessionManager *backgroundSessionManager; // @synthesize backgroundSessionManager=_backgroundSessionManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *uploadQueue; // @synthesize uploadQueue=_uploadQueue;
@property(nonatomic) __weak id <HMDCrashlogUploaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool enableBackgroundSession; // @synthesize enableBackgroundSession=_enableBackgroundSession;
- (void).cxx_destruct;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithResponseObject:(id)arg3 error:(id)arg4;
- (void)createBackgroundSessionManagerIfNeed;
- (void)handleCrashlogUpload:(id)arg1 didCompleteWithResponseObject:(id)arg2 error:(id)arg3 isBackgroundSession:(_Bool)arg4;
- (void)handleCrashlogUpload:(id)arg1 didCompleteWithResponseObject:(id)arg2 error:(id)arg3;
- (void)cleanupCrashLogWithSessionID:(id)arg1;
- (id)getEnvParamsForSessionID:(id)arg1;
- (id)postDataForPath:(id)arg1;
- (void)_uploadCrashLogForPath:(id)arg1;
- (void)_uploadCrashLogForSessionID:(id)arg1;
- (void)_uploadCrashLogIfNeeded;
- (void)asyncUploadCrashLogIfNeeded;
- (void)syncUploadCrashLogIfNeeded;
- (void)uploadCrashLogIfNeeded;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

