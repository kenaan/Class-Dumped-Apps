//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSMutableDictionary, NSString, NSURLSession, YYDiskCache;
@protocol TIMDownloadManagerDelegate;

@interface TIMDownloadManager : NSObject <NSURLSessionDownloadDelegate>
{
    id <TIMDownloadManagerDelegate> _delegate;
    YYDiskCache *_diskCache;
    NSURLSession *_urlSession;
    NSMutableDictionary *_downloadingDict;
}

+ (id)urlForRemoteURL:(id)arg1 preferredLocalDir:(id)arg2 prefferredLocalFileName:(id)arg3;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *downloadingDict; // @synthesize downloadingDict=_downloadingDict;
@property(retain, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(retain, nonatomic) YYDiskCache *diskCache; // @synthesize diskCache=_diskCache;
@property(nonatomic) __weak id <TIMDownloadManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didResumeAtOffset:(long long)arg3 expectedTotalBytes:(long long)arg4;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)cancelTask:(id)arg1;
- (id)fileTaskForSessionDownloadTask:(id)arg1;
- (void)enqueueFileTask:(id)arg1;
- (id)fileTaskForURL:(id)arg1 preferredLocalDir:(id)arg2 prefferredLocalFileName:(id)arg3;
- (_Bool)hasDownloaded:(id)arg1 preferredLocalDir:(id)arg2 prefferredLocalFileName:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

