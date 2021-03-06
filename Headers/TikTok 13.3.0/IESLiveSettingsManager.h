//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveSettingsUpdateDelegate-Protocol.h"

@class HTSLiveApi, IESLiveSettingStorage, NSString;
@protocol HTSKVStore, IESLiveEnvironment, IESLiveMonitor, IESLiveSettingsFilter;

@interface IESLiveSettingsManager : NSObject <IESLiveSettingsUpdateDelegate>
{
    _Bool _fetching;
    _Bool _hasFetchedSuccess;
    IESLiveSettingStorage *_settings;
    HTSLiveApi *_api;
    id <IESLiveMonitor> _monitor;
    id <IESLiveSettingsFilter> _settingsFilter;
    double _delayFetchedInSeconds;
    id <HTSKVStore> _kvStore;
    id <IESLiveEnvironment> _env;
}

+ (id)sharedManager;
@property(retain, nonatomic) id <IESLiveEnvironment> env; // @synthesize env=_env;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(nonatomic) double delayFetchedInSeconds; // @synthesize delayFetchedInSeconds=_delayFetchedInSeconds;
@property(nonatomic) _Bool hasFetchedSuccess; // @synthesize hasFetchedSuccess=_hasFetchedSuccess;
@property(retain, nonatomic) id <IESLiveSettingsFilter> settingsFilter; // @synthesize settingsFilter=_settingsFilter;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) HTSLiveApi *api; // @synthesize api=_api;
@property(getter=isFetching) _Bool fetching; // @synthesize fetching=_fetching;
@property(retain, nonatomic) IESLiveSettingStorage *settings; // @synthesize settings=_settings;
- (void).cxx_destruct;
- (void)configDelayFetchedInSeconds;
- (void)cacheDelaySettingsConfig;
- (id)delaySettingsConfigKey;
- (void)p_fetchSettingsIfNeeded;
- (void)_logInfoWithHasVlidData:(_Bool)arg1 hasCached:(_Bool)arg2;
- (void)didUpdateSettings;
- (id)filterValueForKey:(id)arg1;
- (void)fetchSettingsIsForcible:(_Bool)arg1 isColdLaunch:(_Bool)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

