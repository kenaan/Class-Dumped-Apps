//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDNetworkProvider-Protocol.h"

@class HMDConfigManager, HMDHeimdallrConfig, HMDPerformanceReporter, HMDRecordStore, HMDTTMonitorUserInfo, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface HMDMonitorDataManager : NSObject <HMDNetworkProvider>
{
    _Bool _isUploading;
    HMDRecordStore *_store;
    HMDPerformanceReporter *_reporter;
    HMDConfigManager *_configManager;
    HMDTTMonitorUserInfo *_injectedInfo;
    NSTimer *_flushTimer;
    NSObject<OS_dispatch_queue> *_asynQueue;
}

@property(nonatomic) _Bool isUploading; // @synthesize isUploading=_isUploading;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *asynQueue; // @synthesize asynQueue=_asynQueue;
@property(retain, nonatomic) NSTimer *flushTimer; // @synthesize flushTimer=_flushTimer;
@property(retain, nonatomic) HMDTTMonitorUserInfo *injectedInfo; // @synthesize injectedInfo=_injectedInfo;
@property(retain) HMDConfigManager *configManager; // @synthesize configManager=_configManager;
@property(retain) HMDPerformanceReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) HMDRecordStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)performanceReportSuccessed:(id)arg1;
- (void)configDidUpdate:(id)arg1;
- (_Bool)isMainAppMonitor;
- (void)syncConfigManagerIfAvailable;
- (void)syncReporterIfAvailable;
@property(readonly, nonatomic) HMDHeimdallrConfig *config;
@property(readonly, nonatomic) NSString *appID;
- (void)updateConfig:(id)arg1;
- (void)dealloc;
- (id)initMonitorWithAppID:(id)arg1 injectedInfo:(id)arg2;
- (id)configHeaderInfo;
- (_Bool)enableBackgroundUpload;
- (id)reportPerformanceURLPath;
- (id)transformedURLStringFrom:(id)arg1;
- (id)reportCommonParams;
- (id)reportHeaderParams;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

