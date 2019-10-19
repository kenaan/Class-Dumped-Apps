//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BDDownloadTaskDelegate-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSOperationQueue, NSString;
@protocol BDDownloadManagerTaskDelegate;

@interface BDDownloadManager : NSObject <BDDownloadTaskDelegate>
{
    NSMutableArray *_pendingTasks;
    struct _opaque_pthread_mutex_t _mutex;
    _Bool _downloadResumeEnabled;
    _Bool _enableLog;
    id <BDDownloadManagerTaskDelegate> _delegate;
    unsigned long long _stackMode;
    unsigned long long _maxConcurrentTaskCount;
    NSString *_tempPath;
    NSDictionary *_defaultHeaders;
    NSOperationQueue *_operationQueue;
    Class _downloadTaskClass;
    double _timeoutInterval;
    double _timeoutIntervalForResource;
}

@property(nonatomic) _Bool enableLog; // @synthesize enableLog=_enableLog;
@property(nonatomic) double timeoutIntervalForResource; // @synthesize timeoutIntervalForResource=_timeoutIntervalForResource;
@property(nonatomic) double timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(nonatomic) Class downloadTaskClass; // @synthesize downloadTaskClass=_downloadTaskClass;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(nonatomic) _Bool downloadResumeEnabled; // @synthesize downloadResumeEnabled=_downloadResumeEnabled;
@property(retain, nonatomic) NSDictionary *defaultHeaders; // @synthesize defaultHeaders=_defaultHeaders;
@property(retain, nonatomic) NSString *tempPath; // @synthesize tempPath=_tempPath;
@property(nonatomic) unsigned long long maxConcurrentTaskCount; // @synthesize maxConcurrentTaskCount=_maxConcurrentTaskCount;
@property(nonatomic) unsigned long long stackMode; // @synthesize stackMode=_stackMode;
@property(nonatomic) __weak id <BDDownloadManagerTaskDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *allTasks;
- (void)downloadTaskDidCanceled:(id)arg1;
- (void)downloadTask:(id)arg1 didReceiveData:(id)arg2;
- (void)downloadTask:(id)arg1 receivedSize:(long long)arg2 expectedSize:(long long)arg3;
- (void)downloadTask:(id)arg1 finishedWithData:(id)arg2 savePath:(id)arg3;
- (void)downloadTask:(id)arg1 failedWithError:(id)arg2;
- (void)_startPendingTaskIfNeed;
- (id)_creatTaskWithURL:(id)arg1 identifier:(id)arg2 timeout:(double)arg3;
- (id)taskWithIdentifier:(id)arg1;
- (id)downloadWithURL:(id)arg1 identifier:(id)arg2 timeoutInterval:(double)arg3 startImmediately:(_Bool)arg4;
- (id)downloadWithURL:(id)arg1 identifier:(id)arg2 startImmediately:(_Bool)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

