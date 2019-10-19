//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDDownloadTask.h"

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"

@class BDDownloadURLSessionManager, NSData, NSDictionary, NSMutableData, NSNumber, NSString, NSURLSessionTask;

@interface BDDownloadURLSessionTask : BDDownloadTask <NSURLSessionDownloadDelegate, NSURLSessionDataDelegate>
{
    BDDownloadURLSessionManager *_sessionManager;
    NSURLSessionTask *_task;
    NSDictionary *_HTTPResponseHeaders;
    NSDictionary *_HTTPRequestHeaders;
    NSData *_resumeData;
    NSMutableData *_imageData;
    NSNumber *_DNSDuration;
    NSNumber *_connetDuration;
    NSNumber *_sslDuration;
    NSNumber *_sendDuration;
    NSNumber *_waitDuration;
    NSNumber *_receiveDuration;
    NSNumber *_isSocketReused;
    NSNumber *_isFromProxy;
    NSString *_mimeType;
    long long _statusCode;
    NSString *_nwSessionTrace;
}

@property(retain, nonatomic) NSString *nwSessionTrace; // @synthesize nwSessionTrace=_nwSessionTrace;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSNumber *isFromProxy; // @synthesize isFromProxy=_isFromProxy;
@property(retain, nonatomic) NSNumber *isSocketReused; // @synthesize isSocketReused=_isSocketReused;
@property(retain, nonatomic) NSNumber *receiveDuration; // @synthesize receiveDuration=_receiveDuration;
@property(retain, nonatomic) NSNumber *waitDuration; // @synthesize waitDuration=_waitDuration;
@property(retain, nonatomic) NSNumber *sendDuration; // @synthesize sendDuration=_sendDuration;
@property(retain, nonatomic) NSNumber *sslDuration; // @synthesize sslDuration=_sslDuration;
@property(retain, nonatomic) NSNumber *connetDuration; // @synthesize connetDuration=_connetDuration;
@property(retain, nonatomic) NSNumber *DNSDuration; // @synthesize DNSDuration=_DNSDuration;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(copy, nonatomic) NSDictionary *HTTPRequestHeaders; // @synthesize HTTPRequestHeaders=_HTTPRequestHeaders;
@property(copy, nonatomic) NSDictionary *HTTPResponseHeaders; // @synthesize HTTPResponseHeaders=_HTTPResponseHeaders;
@property(retain, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;
@property(nonatomic) __weak BDDownloadURLSessionManager *sessionManager; // @synthesize sessionManager=_sessionManager;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cleanTempFile;
- (void)saveTempInfo;
- (void)resetTask;
- (void)_cancel;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

