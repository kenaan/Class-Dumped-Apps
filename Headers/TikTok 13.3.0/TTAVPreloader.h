//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NotifyHandler-Protocol.h"

@class NSMutableArray, NSString, TTAVPreloaderConfig;
@protocol TTAVPreloaderDelegate;

@interface TTAVPreloader : NSObject <NotifyHandler>
{
    // Error parsing type: ^{AVPreload=^^?^^?^v^?^?*ii{atomic<int>=Ai}^{APPWRAPPER}^{AVLooper}^{AVHandler}^{AVThreadPool}^{AVTaskManager}^{AVFileManager}{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{recursive_mutex={_opaque_pthread_mutex_t=q[56c]}}{map<long long, com::ss::ttm::preloader::AVTask *, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, com::ss::ttm::preloader::AVTask *> > >={__tree<std::__1::__value_type<long long, com::ss::ttm::preloader::AVTask *>, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, com::ss::ttm::preloader::AVTask *>, std::__1::less<long long>, true>, std::__1::allocator<std::__1::__value_type<long long, com::ss::ttm::preloader::AVTask *> > >=^{__tree_end_node<std::__1::__tree_node_base<void *> *>}{__compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long long, com::ss::ttm::preloader::AVTask *>, void *> > >={__tree_end_node<std::__1::__tree_node_base<void *> *>=^{__tree_node_base<void *>}}}{__compressed_pair<unsigned long, std::__1::__map_value_compare<long long, std::__1::__value_type<long long, com::ss::ttm::preloader::AVTask *>, std::__1::less<long long>, true> >=Q}}}}, name: _preloader
    struct ApApp *_wrapper;
    TTAVPreloaderConfig *_config;
    id <TTAVPreloaderDelegate> _delegate;
    NSMutableArray *_logs;
}

+ (id)preloaderWithConfig:(id)arg1;
@property(retain, nonatomic) NSMutableArray *logs; // @synthesize logs=_logs;
@property(nonatomic) __weak id <TTAVPreloaderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TTAVPreloaderConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)handleNotify:(id)arg1;
- (id)popLogs;
- (long long)getTotalCacheSize;
- (void)releaseFileForKey:(long long)arg1;
- (void)retainFileForKey:(long long)arg1;
- (void)updatePreloaderItem:(id)arg1;
- (id)preloadItemForKey:(long long)arg1;
- (void)dealloc;
- (void)close;
- (void)start;
- (_Bool)configPreloader:(id)arg1;
- (void)createDirectoryIfNeed:(id)arg1;
- (id)init;
- (void)setMaxCacheSize:(long long)arg1;
- (_Bool)copyFile:(id)arg1 resolution:(int)arg2 dstFileName:(id)arg3;
- (id)getLoadingTask;
- (long long)queryProgress:(long long)arg1;
- (void)startAllTask;
- (void)startTask:(long long)arg1;
- (void)stopAllTask;
- (void)stopTask:(long long)arg1;
- (void)detachTask:(long long)arg1;
- (void)clearCache;
- (void)removeAllTask;
- (void)removeTask:(long long)arg1;
- (long long)getHandle:(id)arg1 resolution:(int)arg2;
- (long long)addTask:(id)arg1 resolution:(int)arg2 url:(id)arg3 preloadSize:(int)arg4 customFilePath:(id)arg5;
- (long long)addTask:(id)arg1 resolution:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
