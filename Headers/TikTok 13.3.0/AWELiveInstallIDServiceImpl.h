//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveAppInfo-Protocol.h"

@class NSString;

@interface AWELiveInstallIDServiceImpl : NSObject <IESLiveAppInfo>
{
}

- (_Bool)isBOEEnabled;
- (id)appUpgradeFromVersion;
- (_Bool)appIsLaunchFromVersionUpgrade;
- (_Bool)appIsLaunchFromNewInstall;
- (unsigned long long)currentTarget;
- (id)liveID;
- (id)commonParameters;
- (id)deviceType;
- (id)openUDID;
- (id)appBuildNumber;
- (id)appVersionCode;
- (id)accessCode;
- (id)installID;
- (id)deviceID;
- (id)appName;
- (_Bool)isInHouse;
- (id)channel;
- (id)appID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

