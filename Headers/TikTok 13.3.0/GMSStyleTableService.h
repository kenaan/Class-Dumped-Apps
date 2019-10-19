//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSCoreClientParameters, GMSLRUCache, GMSObjectDataCache, GMSSTSUI3Logger, NSArray, NSMutableDictionary, NSMutableSet;
@protocol GMSDASHConnection, GMSStyleTableServiceResourceLoader;

@interface GMSStyleTableService : NSObject
{
    id <GMSDASHConnection> _connection;
    GMSCoreClientParameters *_clientParameters;
    NSArray *_mapStyles;
    id <GMSStyleTableServiceResourceLoader> _resourceLoader;
    GMSObjectDataCache *_epochResourcesCache;
    GMSObjectDataCache *_tablesCache;
    GMSLRUCache *_lruCache;
    NSMutableDictionary *_inflightTableRequests;
    NSMutableDictionary *_inflightDataRequests;
    int _initializationTasksPending;
    int _loadingEpoch;
    NSMutableSet *_urlsPending;
    int _activeEpoch;
    _Bool _enabled;
    _Bool _haveOverride;
    GMSSTSUI3Logger *_logger;
}

- (void).cxx_destruct;
- (_Bool)fetchWithSessionFetcher;
- (void)completeKey:(id)arg1 compressedData:(id)arg2 data:(id)arg3;
- (void)completeKey:(id)arg1 compressedData:(id)arg2;
- (void)completeKey:(id)arg1 styleTable:(id)arg2;
- (id)compressedDataStoringTableURLString:(id)arg1 data:(id)arg2;
- (void)handleServerReply:(id)arg1 data:(id)arg2;
- (void)requestStyleTable:(id)arg1 triesRemaining:(int)arg2;
- (id)checkResourceLoaderForStyleTableData:(id)arg1;
- (void)fetchStyleTableData:(id)arg1 decompressed:(_Bool)arg2 format:(int)arg3 handler:(CDUnknownBlockType)arg4;
- (id)checkResourceLoaderForEpochResource:(int)arg1;
- (void)loadEpochResource:(int)arg1 handler:(CDUnknownBlockType)arg2;
- (void)loadedDataForURLString:(id)arg1;
- (void)loadCurrentStyleTables;
- (void)didCompleteAnInitializationTask;
- (void)cachesWillClear:(id)arg1;
- (void)clientParametersNotification:(id)arg1;
- (void)updateEnabledState;
- (void)clearOverride;
- (_Bool)hasOverride;
- (void)overrideEnabled:(_Bool)arg1;
- (id)styleTablesSummaryForFeedback;
- (void)clearAndResetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)isTileEpochStale:(id)arg1;
- (void)loadStyleTableForMapStyle:(int)arg1 epoch:(int)arg2 callbackQueue:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)setResourceLoader:(id)arg1;
- (int)stableActiveEpoch;
@property(readonly) _Bool hasActiveEpoch;
- (void)setActiveEpoch:(int)arg1;
@property(readonly) int activeEpoch;
@property(readonly) _Bool enabled;
- (void)dealloc;
- (id)initWithConnection:(id)arg1 clientParameters:(id)arg2 cacheStorageDescriptor:(id)arg3 mapStyles:(id)arg4 userEvent3Logger:(id)arg5;

@end

