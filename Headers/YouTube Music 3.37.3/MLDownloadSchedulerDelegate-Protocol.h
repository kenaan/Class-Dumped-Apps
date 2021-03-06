//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MLRemoteSegment, NSData, NSDictionary, NSError;

@protocol MLDownloadSchedulerDelegate <NSObject>
- (void)downloadDidFailWithSegment:(MLRemoteSegment *)arg1 userInfo:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)downloadDidCompleteWithSegment:(MLRemoteSegment *)arg1 userInfo:(NSDictionary *)arg2;
- (void)downloadDidReceiveData:(NSData *)arg1 withSegment:(MLRemoteSegment *)arg2 userInfo:(NSDictionary *)arg3;
- (void)downloadDidPauseWithSegment:(MLRemoteSegment *)arg1 userInfo:(NSDictionary *)arg2;
- (void)downloadDidStartWithSegment:(MLRemoteSegment *)arg1 userInfo:(NSDictionary *)arg2;
@end

