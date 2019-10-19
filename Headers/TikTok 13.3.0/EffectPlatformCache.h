//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "EffectPlatformCacheService-Protocol.h"

@class NSString;
@protocol EffectPlatformCacheService, OS_dispatch_queue;

@interface EffectPlatformCache : NSObject <EffectPlatformCacheService>
{
    NSString *_accessKey;
    id <EffectPlatformCacheService> _jsonCache;
    NSObject<OS_dispatch_queue> *_cacheQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cacheQueue; // @synthesize cacheQueue=_cacheQueue;
@property(retain, nonatomic) id <EffectPlatformCacheService> jsonCache; // @synthesize jsonCache=_jsonCache;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
- (void).cxx_destruct;
- (void)clearJsonAndObjectForKey:(id)arg1;
- (void)clear;
- (void)setJson:(id)arg1 newResponse:(id)arg2 forKey:(id)arg3;
- (void)setJson:(id)arg1 object:(id)arg2 forKey:(id)arg3;
- (id)objectWithKey:(id)arg1;
- (void)clearMemory;
- (id)newResponseWithKey:(id)arg1;
- (void)setEnableMemoryCache:(_Bool)arg1;
- (id)initWithAccessKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

