//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSObject, NSSet, NSString;
@protocol OS_dispatch_queue;

@protocol SCStoriesMediaDiskStoring <NSObject>
+ (id)new;
- (void)deleteAllMediaWithCompletion:(void (^)(void))arg1;
- (void)deleteMediaFromDiskWithKeys:(NSSet *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(void))arg3;
- (void)setMediaToDiskForKey:(NSString *)arg1 media:(NSData *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(void (^)(_Bool))arg4;
- (void)fetchMediaFromDiskForKey:(NSString *)arg1 completionQueue:(NSObject<OS_dispatch_queue> *)arg2 completion:(void (^)(NSData *))arg3;
- (id)initWithMediaPath:(NSString *)arg1;
- (id)init;
@end
