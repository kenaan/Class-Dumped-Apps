//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSNumber, NSString;

@protocol IESLiveAppInfo <NSObject>
- (unsigned long long)currentTarget;
- (NSString *)appUpgradeFromVersion;
- (_Bool)appIsLaunchFromVersionUpgrade;
- (_Bool)appIsLaunchFromNewInstall;
- (NSNumber *)liveID;
- (NSDictionary *)commonParameters;
- (NSString *)openUDID;
- (NSString *)appBuildNumber;
- (NSString *)appVersionCode;
- (NSString *)accessCode;
- (NSString *)installID;
- (NSString *)deviceID;
- (NSString *)appName;
- (_Bool)isInHouse;
- (NSString *)channel;
- (NSString *)appID;

@optional
- (_Bool)isBOEEnabled;
- (NSString *)updateVersionCode;
@end

