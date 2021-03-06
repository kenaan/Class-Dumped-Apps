//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCArchiveObjectManager-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSDate, NSString, SCArchiveLoader, SCBroadcastInitModel, SCExperimentManager, SCQueuePerformer, SCUserSession;

@interface SCBroadcastInitManager : NSObject <SCTraceEnabled, SCArchiveObjectManager>
{
    SCArchiveLoader *_loader;
    SCQueuePerformer *_performer;
    _Bool _hasPendingRequest;
    NSDate *_lastRequestTimestamp;
    SCBroadcastInitModel *_model;
    SCExperimentManager *_experimentManager;
    SCUserSession *_userSession;
}

+ (id)path;
+ (id)shared;
@property(nonatomic) __weak SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(retain, nonatomic) SCBroadcastInitModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (CDUnknownBlockType)_loadedBlock;
- (void)_didFailWithStatusCode:(long long)arg1;
- (void)_updateWithSojuResponse:(id)arg1;
- (void)_didSucceedWithSojuResponse:(id)arg1;
- (void)_fetchBroadcastInit;
- (_Bool)shouldLoadFromDiskImmediately;
- (_Bool)saveState;
- (void)clear;
- (void)markAsLoadedWithoutLoadingFromDisk;
- (void)loadFromDiskAsync:(_Bool)arg1;
- (void)waitUntilModelLoadsWithCallback:(CDUnknownBlockType)arg1;
- (void)fetch;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

