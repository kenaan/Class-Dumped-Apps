//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCacheDelegate-Protocol.h"

@class NSCache, NSSet, NSString;
@protocol SCPerforming;

@interface SCResumableRequestHandler : NSObject <NSCacheDelegate>
{
    id <SCPerforming> _queuePerformer;
    NSCache *_resumeDataStore;
    struct SCNetworkTraceFileStruct *_traceFile;
    long long _cachedNSDataSize;
    long long _maxCachedNSDataSize;
    long long _cachedNSDataCount;
    long long _maxCachedNSDataCount;
    long long _cachedNSDataSizeBeforeForeground;
    long long _cachedNSDataCountBeforeForeground;
    unsigned long long _clearCacheCount;
    double _averageCachedNSDataSizeWhenClear;
    double _averageCachedNSDataCountsWhenClear;
    NSSet *_whiteListedHosts;
}

+ (id)shared;
@property(copy) NSSet *whiteListedHosts; // @synthesize whiteListedHosts=_whiteListedHosts;
- (void).cxx_destruct;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)removeDataWithRequestKey:(id)arg1;
- (void)cancelRequestWithKey:(id)arg1 resumeData:(id)arg2;
- (id)resumeDataWithRequestKey:(id)arg1;
- (_Bool)isResumableWithUrl:(id)arg1 requestMethod:(long long)arg2 requestType:(long long)arg3 priority:(long long)arg4;
- (void)_appWillEnterForeground;
- (void)_cleanUpResumeDataStore;
- (void)_addObservers;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
