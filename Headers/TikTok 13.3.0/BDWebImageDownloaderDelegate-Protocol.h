//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSError, NSString;
@protocol BDWebImageDownloadTask, BDWebImageDownloader;

@protocol BDWebImageDownloaderDelegate
- (void)downloader:(id <BDWebImageDownloader>)arg1 task:(id <BDWebImageDownloadTask>)arg2 finishedWithData:(NSData *)arg3 savePath:(NSString *)arg4;
- (void)downloader:(id <BDWebImageDownloader>)arg1 task:(id <BDWebImageDownloadTask>)arg2 failedWithError:(NSError *)arg3;

@optional
- (void)downloader:(id <BDWebImageDownloader>)arg1 task:(id <BDWebImageDownloadTask>)arg2 didReceiveData:(NSData *)arg3;
- (void)downloader:(id <BDWebImageDownloader>)arg1 task:(id <BDWebImageDownloadTask>)arg2 receivedSize:(long long)arg3 expectedSize:(long long)arg4;
@end

