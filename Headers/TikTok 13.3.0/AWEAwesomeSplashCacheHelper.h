//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEStorage, NSMutableArray, NSMutableDictionary;

@interface AWEAwesomeSplashCacheHelper : NSObject
{
    AWEStorage *_cacheStorage;
    NSMutableArray *_downloadingQueue;
    NSMutableArray *_cacheList;
    NSMutableDictionary *_videoCachedRecords;
}

@property(retain, nonatomic) NSMutableDictionary *videoCachedRecords; // @synthesize videoCachedRecords=_videoCachedRecords;
@property(retain, nonatomic) NSMutableArray *cacheList; // @synthesize cacheList=_cacheList;
@property(retain, nonatomic) NSMutableArray *downloadingQueue; // @synthesize downloadingQueue=_downloadingQueue;
@property(retain, nonatomic) AWEStorage *cacheStorage; // @synthesize cacheStorage=_cacheStorage;
- (void).cxx_destruct;
- (void)removeVideoCacheForSplashID:(id)arg1;
- (void)updateVideoCacheURL:(id)arg1 splashID:(id)arg2;
- (void)removeFromQueue:(id)arg1;
- (_Bool)existInQueue:(id)arg1;
- (void)preloadAllSplashData;
- (void)setList:(id)arg1 partition:(long long)arg2;
- (id)getListWithPartition:(long long)arg1;
- (_Bool)videoCacheExistsForSplashID:(id)arg1 cacheURL:(id)arg2;
- (void)preloadSingleAweme:(id)arg1;
- (void)freeCache;
- (id)getAwemeForKey:(id)arg1;
- (void)processAwesomeSplashModel:(id)arg1;
- (void)migrationToNewCache:(id)arg1;

@end

