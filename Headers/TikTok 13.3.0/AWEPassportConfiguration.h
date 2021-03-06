//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEPassportConfigurable-Protocol.h"
#import "AWEPassportProductConfiguration-Protocol.h"
#import "AWEPassportSettings-Protocol.h"

@class NSString;
@protocol AWEPassportProductConfiguration><AWEPassportSettings;

@interface AWEPassportConfiguration : NSObject <AWEPassportProductConfiguration, AWEPassportSettings, AWEPassportConfigurable>
{
    id <AWEPassportProductConfiguration><AWEPassportSettings> _implementation;
}

+ (_Bool)enableFixInstagramKeyboardAppearError;
+ (_Bool)enableCarrierTypeProviders;
+ (_Bool)enableCheckUserIDMismatch;
+ (_Bool)enableAuthorizeInstagramWithEnglish;
+ (unsigned long long)maxCountOfMultiLoginAccount;
+ (_Bool)enableMultiLogin;
+ (_Bool)enableCMCCSDK;
+ (_Bool)enableLoginFacebookWithNative;
+ (_Bool)douyinBindPhoneAfterThirdPartyLogin;
+ (_Bool)tiktokPhoneRegister;
+ (_Bool)enableVirtualPhoneNumber;
+ (_Bool)enableLoginFeedback;
+ (_Bool)isI18N;
+ (id)thirdLoginjumpModel;
+ (id)deviceID;
+ (id)appID;
+ (id)appDisplayName;
+ (_Bool)isInhouse;
+ (_Bool)isMusically;
+ (_Bool)isTiktok;
+ (_Bool)isDouyin;
+ (void)setupAntispamImplementation:(id)arg1;
+ (void)setupUtilsImplementation:(id)arg1;
+ (void)setupNetworkImplementation:(id)arg1;
+ (void)setupImplementation:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) id <AWEPassportProductConfiguration><AWEPassportSettings> implementation; // @synthesize implementation=_implementation;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

