//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDelegate-Protocol.h"
#import "YYWebImageOperation-Protocol.h"

@class NSData, NSProgress, NSRecursiveLock, NSString, NSURLRequest, NSURLResponse, TTHttpTask, YYImageCache, YYImageDecoder;

@interface YYWebImageTTNetOperation : NSOperation <NSURLConnectionDelegate, YYWebImageOperation>
{
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _shouldUseCredentialStorage;
    _Bool _started;
    _Bool _progressiveIgnored;
    _Bool _progressiveDetected;
    NSURLRequest *_request;
    NSURLResponse *_response;
    YYImageCache *_cache;
    NSString *_cacheKey;
    unsigned long long _options;
    NSRecursiveLock *_lock;
    TTHttpTask *_task;
    NSData *_data;
    unsigned long long _taskID;
    double _lastProgressiveDecodeTimestamp;
    YYImageDecoder *_progressiveDecoder;
    unsigned long long _progressiveScanedLength;
    unsigned long long _progressiveDisplayCount;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _transform;
    CDUnknownBlockType _completion;
    NSProgress *_downloadProgress;
    long long _expectedSize;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)_imageQueue;
+ (id)_networkThread;
+ (void)_networkThreadMain:(id)arg1;
@property(nonatomic) long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(retain, nonatomic) NSProgress *downloadProgress; // @synthesize downloadProgress=_downloadProgress;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;
@property(copy, nonatomic) CDUnknownBlockType progress; // @synthesize progress=_progress;
@property(nonatomic) unsigned long long progressiveDisplayCount; // @synthesize progressiveDisplayCount=_progressiveDisplayCount;
@property(nonatomic) unsigned long long progressiveScanedLength; // @synthesize progressiveScanedLength=_progressiveScanedLength;
@property(nonatomic) _Bool progressiveDetected; // @synthesize progressiveDetected=_progressiveDetected;
@property(nonatomic) _Bool progressiveIgnored; // @synthesize progressiveIgnored=_progressiveIgnored;
@property(retain, nonatomic) YYImageDecoder *progressiveDecoder; // @synthesize progressiveDecoder=_progressiveDecoder;
@property(nonatomic) double lastProgressiveDecodeTimestamp; // @synthesize lastProgressiveDecodeTimestamp=_lastProgressiveDecodeTimestamp;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) TTHttpTask *task; // @synthesize task=_task;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(getter=isStarted) _Bool started; // @synthesize started=_started;
@property(nonatomic) _Bool shouldUseCredentialStorage; // @synthesize shouldUseCredentialStorage=_shouldUseCredentialStorage;
@property(readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property(readonly, nonatomic) NSString *cacheKey; // @synthesize cacheKey=_cacheKey;
@property(readonly, nonatomic) YYImageCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (_Bool)isAsynchronous;
- (_Bool)isConcurrent;
@property(getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (void)cancel;
- (void)start;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_didReceiveImageFromWeb:(id)arg1;
- (void)_didReceiveImageFromDiskCache:(id)arg1;
- (void)_cancelOperation;
- (void)callbackActionWithError:(id)arg1 obj:(id)arg2 response:(id)arg3;
- (void)callbackSuccessWithResponse:(id)arg1;
- (void)callbackError:(id)arg1;
- (void)_startRequest:(id)arg1;
- (void)_startOperation;
- (void)_finish;
- (void)_endBackgroundTask;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 options:(unsigned long long)arg2 cache:(id)arg3 cacheKey:(id)arg4 progress:(CDUnknownBlockType)arg5 transform:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

