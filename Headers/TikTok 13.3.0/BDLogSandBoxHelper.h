//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BDLogSandBoxHelper : NSObject
{
}

+ (_Bool)isAppStoreChannel;
+ (id)getCurrentChannel;
+ (id)appOwnURL;
+ (id)ssAppScheme;
+ (id)ssAppMID;
+ (id)ssAppID;
+ (_Bool)isInHouseApp;
+ (id)appName;
+ (id)buildVersion;
+ (id)bundleIdentifier;
+ (id)versionName;
+ (id)appDisplayName;
+ (id)_AppLaunchedTimesKey;
+ (void)resetAppLaunchedTimes;
+ (void)setAppDidLaunchThisTime;
+ (long long)appLaunchedTimes;
+ (void)setAppFirstLaunch;
+ (_Bool)isAPPFirstLaunch;
+ (_Bool)disableBackupForPath:(id)arg1;
- (id)sandBoxDocumentsPath;
- (id)sandBoxCachePath;

@end

