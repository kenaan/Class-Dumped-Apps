//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWEUserSettingsManager : NSObject
{
}

+ (_Bool)enableQueryPassportWhenUnlogin;
+ (_Bool)enableNewUserInfoSync;
+ (_Bool)shouldShowWhatsAPPFirstWithCountryCode:(id)arg1;
+ (_Bool)shouldShowAlertWithCountryCode:(id)arg1;
+ (long long)enableEmailVerification;
+ (_Bool)followPageArray;
+ (id)quickBindInWifiOrCellularArray;
+ (_Bool)enableChinaUnionService;
+ (_Bool)enableChinaTelecomService;
+ (_Bool)enableChinaMobileService;
+ (id)feedbackURLString;
+ (_Bool)flipChatShowLoginStatus;
+ (_Bool)shouldShowAlertWhenBindSkip:(unsigned long long)arg1;
+ (_Bool)enableRememberLatestLoginMethod;
+ (void)setDisableSaveLastLoginInfo:(_Bool)arg1;
+ (_Bool)disableSaveLastLoginInfo;
+ (_Bool)findPasswordEnableEmailVerify;
+ (_Bool)enableEmailLogin;
+ (_Bool)shouldEnableAgeGate;
+ (_Bool)shouldEnableFTCAgeGate;
+ (_Bool)disableCheckLoginStateWhenSessionExpired;
+ (_Bool)disablePrivacyPolicyAlert;

@end

