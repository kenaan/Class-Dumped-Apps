//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEResourceBaseDownloaderTask.h"

@class AFURLSessionManager, NSURLSessionDataTask;

@interface AWEResourceDownloaderDefaultTask : AWEResourceBaseDownloaderTask
{
    _Bool _cancelFlag;
    NSURLSessionDataTask *_downloadTask;
    AFURLSessionManager *_manager;
}

@property(retain, nonatomic) AFURLSessionManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak NSURLSessionDataTask *downloadTask; // @synthesize downloadTask=_downloadTask;
@property(nonatomic) _Bool cancelFlag; // @synthesize cancelFlag=_cancelFlag;
- (void).cxx_destruct;
- (_Bool)isCancel;
- (void)cancel;

@end

