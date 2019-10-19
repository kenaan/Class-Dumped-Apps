//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSArray, NSDictionary, NSError, NSString, NSURLSession;

@interface IESFileDownloadTask : NSOperation <NSURLSessionDownloadDelegate>
{
    _Bool executing;
    _Bool finished;
    CDUnknownBlockType _progressBlock;
    NSString *_filePath;
    NSError *_error;
    NSDictionary *_extraInfoDict;
    NSArray *_requests;
    double _progress;
    NSURLSession *_downloadSession;
    unsigned long long _index;
}

@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(retain, nonatomic) NSURLSession *downloadSession; // @synthesize downloadSession=_downloadSession;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSArray *requests; // @synthesize requests=_requests;
@property(copy, nonatomic) NSDictionary *extraInfoDict; // @synthesize extraInfoDict=_extraInfoDict;
@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
- (void).cxx_destruct;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isAsynchronous;
- (void)main;
- (void)start;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)downloadRequestAtIndex:(unsigned long long)arg1;
- (id)initWithURLRequests:(id)arg1 filePath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

