//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEVideoDiskCacheProtocol-Protocol.h"

@class NSString, NSTimer;

@interface AWEVideoDiskCache : NSObject <AWEVideoDiskCacheProtocol>
{
    Class _cacheClass;
    NSTimer *_timer;
}

+ (void)enableAutoTrimForURLString:(id)arg1;
+ (void)disableAutoTrimForURLString:(id)arg1;
+ (void)trimDiskCacheToSize:(unsigned long long)arg1;
+ (void)clearForKeys:(id)arg1;
+ (void)clear;
+ (void)sizeWithCompletion:(CDUnknownBlockType)arg1;
+ (void)getCacheInfoForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)hasCacheForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)metaDataForKeySync:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)metaDataForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)cacheDataForKeySync:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)cacheDataForKey:(id)arg1 offset:(unsigned long long)arg2 length:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)finishCacheForKey:(id)arg1 originURLString:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)appendCacheData:(id)arg1 offset:(unsigned long long)arg2 forKey:(id)arg3 mimeType:(id)arg4 fileLength:(unsigned long long)arg5 completion:(CDUnknownBlockType)arg6;
+ (unsigned long long)freeFileSystemSize;
+ (_Bool)hasEnoughCacheForURLString:(id)arg1 videoDuration:(double)arg2 networkSpeed:(double)arg3;
+ (_Bool)hasEnoughFreeDiskSize;
+ (void)trimDiskCacheToQuota;
+ (void)clearForURLString:(id)arg1;
+ (void)getCacheInfoForURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)hasCacheForURLString:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)cacheQueue;
+ (long long)sizeAtFilePath:(id)arg1;
+ (id)cachePath;
+ (id)sharedInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) Class cacheClass; // @synthesize cacheClass=_cacheClass;
- (void).cxx_destruct;
- (void)_addNotificationObservers;
- (void)dealloc;
- (void)setupTrimTimer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

