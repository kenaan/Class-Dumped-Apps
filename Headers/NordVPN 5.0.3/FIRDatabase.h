//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FIRApp, FIRDatabaseConfig, FRepo, FRepoInfo;
@protocol OS_dispatch_queue;

@interface FIRDatabase : NSObject
{
    FIRApp *_app;
    FRepoInfo *_repoInfo;
    FIRDatabaseConfig *_config;
    FRepo *_repo;
}

+ (void)setLoggingEnabled:(_Bool)arg1;
+ (id)sdkVersion;
+ (id)createDatabaseForTests:(id)arg1 config:(id)arg2;
+ (id)buildVersion;
+ (id)databaseForApp:(id)arg1 URL:(id)arg2;
+ (id)databaseForApp:(id)arg1;
+ (id)databaseWithURL:(id)arg1;
+ (id)database;
@property(retain, nonatomic) FRepo *repo; // @synthesize repo=_repo;
@property(retain, nonatomic) FIRDatabaseConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) FRepoInfo *repoInfo; // @synthesize repoInfo=_repoInfo;
@property(readonly, nonatomic) __weak FIRApp *app; // @synthesize app=_app;
- (void).cxx_destruct;
- (void)ensureRepo;
- (void)assertUnfrozen:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property(nonatomic) unsigned long long persistenceCacheSizeBytes;
@property(nonatomic) _Bool persistenceEnabled;
- (void)goOffline;
- (void)goOnline;
- (void)purgeOutstandingWrites;
- (id)referenceFromURL:(id)arg1;
- (id)referenceWithPath:(id)arg1;
- (id)reference;
- (id)initWithApp:(id)arg1 repoInfo:(id)arg2 config:(id)arg3;

@end
