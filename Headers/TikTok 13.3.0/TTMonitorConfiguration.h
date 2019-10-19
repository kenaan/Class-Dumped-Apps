//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TTMonitorConfigurationProtocol-Protocol.h"
#import "TTNetworkMonitorRecorderConfigurationProtocol-Protocol.h"

@class NSArray, NSDictionary, NSLock, NSString;

@interface TTMonitorConfiguration : NSObject <TTMonitorConfigurationProtocol, TTNetworkMonitorRecorderConfigurationProtocol>
{
    _Bool _disableReportAPIError;
    _Bool _enableNetStats;
    NSString *_appkey;
    CDUnknownBlockType _paramsBlock;
    NSDictionary *_params;
    long long _networkStatus;
    NSArray *_remoteSettingsHost;
    NSArray *_reportItems;
    NSLock *_hostLock;
}

+ (void)setWatchdogMonitorThreshold:(id)arg1;
+ (double)watchdogMonitorThreshold;
+ (void)setWatchdogMonitorInterval:(id)arg1;
+ (double)watchdogMonitorInterval;
+ (void)setWatchdogRecordLength:(id)arg1;
+ (double)watchdogRecordLength;
+ (void)setNeedEncrypt:(id)arg1;
+ (_Bool)needEncrypt;
+ (double)retryIntervalIfAllHostFailed;
+ (void)setRetryIntervalIfAllHostFailed:(id)arg1;
+ (_Bool)isEnabledForServiceType:(id)arg1;
+ (_Bool)isEnabledForMetricsType:(id)arg1;
+ (_Bool)isEnabledForLogType:(id)arg1;
+ (id)savedAllowedServiceTypes;
+ (void)saveAllowedServiceTypes:(id)arg1;
+ (id)savedAllowedImageHosts;
+ (void)saveAllowedImageHosts:(id)arg1;
+ (id)savedAllowedMetricsTypes;
+ (void)saveAllowedMetricsTypes:(id)arg1;
+ (id)savedAllowedLogTypes;
+ (void)saveAllowedLogTypes:(id)arg1;
+ (id)httpHeaderParams;
+ (void)setEnableNetStat:(_Bool)arg1;
+ (_Bool)enableNetStat;
+ (void)setDisableReportError:(_Bool)arg1;
+ (_Bool)disableReportError;
+ (id)savedAPIReports;
+ (void)saveAPIReport:(id)arg1;
+ (void)saveReportPollingInterval:(long long)arg1;
+ (long long)reportPollingInterval;
+ (void)saveReportMaxLogCount:(long long)arg1;
+ (long long)onceReportMaxLogCount;
+ (void)saveMaxReportRetryCount:(long long)arg1;
+ (long long)maxReportRetryCount;
+ (void)saveDNSReportInterval:(double)arg1;
+ (double)dnsReportInterval;
+ (id)debugBlackList;
+ (_Bool)saveDebugRealBlackList:(id)arg1;
+ (id)whiteList;
+ (_Bool)saveWhiteList:(id)arg1;
+ (id)blackList;
+ (_Bool)saveBlackList:(id)arg1;
+ (id)dnsReportList;
+ (_Bool)saveDNSReportList:(id)arg1;
+ (id)reportHosts;
+ (_Bool)saveReportHosts:(id)arg1;
+ (long long)minUpdateDuration;
+ (void)setUpdateDuration:(long long)arg1;
+ (void)updateLatelyUpdateTimestamp;
+ (_Bool)needUpdateConfigration;
+ (id)monitorURLForBaseURL:(id)arg1;
+ (void)tryFetchConfigWithForce:(_Bool)arg1;
+ (_Bool)queryIfEnabledForKey:(id)arg1;
+ (double)queryActionIntervalForKey:(id)arg1;
+ (void)setEnabledValue:(id)arg1 ForKey:(id)arg2;
+ (id)monitorTrackAdditionalParameters;
+ (id)shareManager;
@property(retain, nonatomic) NSLock *hostLock; // @synthesize hostLock=_hostLock;
@property(nonatomic) _Bool enableNetStats; // @synthesize enableNetStats=_enableNetStats;
@property(nonatomic) _Bool disableReportAPIError; // @synthesize disableReportAPIError=_disableReportAPIError;
@property(retain, nonatomic) NSArray *reportItems; // @synthesize reportItems=_reportItems;
@property(retain, nonatomic) NSArray *remoteSettingsHost; // @synthesize remoteSettingsHost=_remoteSettingsHost;
@property(nonatomic) long long networkStatus; // @synthesize networkStatus=_networkStatus;
@property(copy, nonatomic) NSDictionary *params; // @synthesize params=_params;
@property(copy, nonatomic) CDUnknownBlockType paramsBlock; // @synthesize paramsBlock=_paramsBlock;
@property(retain, nonatomic) NSString *appkey; // @synthesize appkey=_appkey;
- (void).cxx_destruct;
- (_Bool)isImageRequestUrl:(id)arg1;
- (_Bool)isNeedMonitorAllURL:(id)arg1;
- (_Bool)isNeedRecorderErrorURL:(id)arg1;
- (void)configAppKey:(id)arg1 paramBlock:(CDUnknownBlockType)arg2;
- (_Bool)debugRealItemContainedInBlackList:(id)arg1;
- (_Bool)isContainerInWhiteList:(id)arg1;
- (_Bool)_isContainedInBlackList:(id)arg1;
- (_Bool)isNeedSampleURL:(id)arg1;
- (void)dealResponse:(id)arg1;
- (id)switchObjectForKey:(id)arg1 inDict:(id)arg2;
- (id)monitorUrlForTryTimes:(unsigned long long)arg1;
- (void)tryFetchConfigWithForce:(_Bool)arg1;
- (void)refreshReportItems:(id)arg1;
- (id)init;
- (void)setRemoteSettingHosts:(id)arg1;
- (void)connectionChanged:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

