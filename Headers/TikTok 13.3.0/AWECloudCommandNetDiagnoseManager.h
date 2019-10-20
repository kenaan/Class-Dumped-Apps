//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWECloudCommandNetDiagnoseConnectDelegate-Protocol.h"
#import "AWECloudCommandNetDiagnoseTraceRouteDelegate-Protocol.h"

@class AWECloudCommandNetDiagnoseConnect, AWECloudCommandNetDiagnoseDownSpeed, AWECloudCommandNetDiagnoseTraceRoute, AWECloudCommandNetDiagnoseUpSpeed, NSMutableString, NSString;
@protocol AWECloudCommandNetDiagnoseManagerDelegate, OS_dispatch_queue, OS_dispatch_semaphore;

@interface AWECloudCommandNetDiagnoseManager : NSObject <AWECloudCommandNetDiagnoseConnectDelegate, AWECloudCommandNetDiagnoseTraceRouteDelegate>
{
    NSObject<OS_dispatch_queue> *_processQueue;
    NSObject<OS_dispatch_semaphore> *_processSem;
    _Bool _isRuning;
    NSString *_testHost;
    NSString *_userId;
    NSString *_deviceId;
    id <AWECloudCommandNetDiagnoseManagerDelegate> _delegate;
    NSMutableString *_logInfo;
    double _currentPercent;
    CDUnknownBlockType _progressBlock;
    AWECloudCommandNetDiagnoseConnect *_ConnectTester;
    AWECloudCommandNetDiagnoseTraceRoute *_traceRouteTester;
    AWECloudCommandNetDiagnoseUpSpeed *_upSpeedTester;
    AWECloudCommandNetDiagnoseDownSpeed *_downSpeedTester;
}

+ (id)_networkType;
@property(retain, nonatomic) AWECloudCommandNetDiagnoseDownSpeed *downSpeedTester; // @synthesize downSpeedTester=_downSpeedTester;
@property(retain, nonatomic) AWECloudCommandNetDiagnoseUpSpeed *upSpeedTester; // @synthesize upSpeedTester=_upSpeedTester;
@property(retain, nonatomic) AWECloudCommandNetDiagnoseTraceRoute *traceRouteTester; // @synthesize traceRouteTester=_traceRouteTester;
@property(retain, nonatomic) AWECloudCommandNetDiagnoseConnect *ConnectTester; // @synthesize ConnectTester=_ConnectTester;
@property(copy, nonatomic) CDUnknownBlockType progressBlock; // @synthesize progressBlock=_progressBlock;
@property(nonatomic) double currentPercent; // @synthesize currentPercent=_currentPercent;
@property _Bool isRuning; // @synthesize isRuning=_isRuning;
@property(retain, nonatomic) NSMutableString *logInfo; // @synthesize logInfo=_logInfo;
@property(nonatomic) __weak id <AWECloudCommandNetDiagnoseManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *testHost; // @synthesize testHost=_testHost;
- (void).cxx_destruct;
- (void)didFinishTraceRoute;
- (void)didAppendTraceRouteLog:(id)arg1;
- (void)didFinishPing;
- (void)didAppendPingLog:(id)arg1;
- (id)_carrierName;
- (void)_updateProgress;
- (void)_outputInfo:(id)arg1;
- (void)_netDiagnoseDidFinish;
- (void)_outputConnectInfo;
- (void)_outputNetInfo;
- (void)_outputAppInfo;
- (void)stopNetDiagnose;
- (void)startNetDiagnoseWithProgressBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)startNetDiagnoseWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)startNetDiagnose;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
