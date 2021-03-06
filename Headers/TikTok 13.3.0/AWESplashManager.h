//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWESplashManager-Protocol.h"
#import "TTAdSplashDelegate-Protocol.h"

@class AWESplashConfig, NSDictionary, NSString;

@interface AWESplashManager : HTSService <TTAdSplashDelegate, AWESplashManager>
{
    _Bool _isSplashShown;
    _Bool _isUserTappedOnSplash;
    _Bool _hasEnterBackground;
    _Bool _isColdStart;
    _Bool _isRealStart;
    _Bool _forceIgnoreCurrentShow;
    AWESplashConfig *_config;
    NSDictionary *_urlTaskMapper;
}

@property(retain, nonatomic) NSDictionary *urlTaskMapper; // @synthesize urlTaskMapper=_urlTaskMapper;
@property(nonatomic) _Bool forceIgnoreCurrentShow; // @synthesize forceIgnoreCurrentShow=_forceIgnoreCurrentShow;
@property(nonatomic) _Bool isRealStart; // @synthesize isRealStart=_isRealStart;
@property(nonatomic) _Bool isColdStart; // @synthesize isColdStart=_isColdStart;
@property(nonatomic) _Bool hasEnterBackground; // @synthesize hasEnterBackground=_hasEnterBackground;
@property(nonatomic) _Bool isUserTappedOnSplash; // @synthesize isUserTappedOnSplash=_isUserTappedOnSplash;
@property(nonatomic) _Bool isSplashShown; // @synthesize isSplashShown=_isSplashShown;
@property(retain, nonatomic) AWESplashConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)splashViewAppearWithAdInfo:(id)arg1;
- (unsigned long long)displayContentMode;
- (void)monitorService:(id)arg1 status:(unsigned long long)arg2 extra:(id)arg3;
- (void)monitorService:(id)arg1 value:(id)arg2 extra:(id)arg3;
- (_Bool)enableSplashLog;
- (_Bool)openURL:(id)arg1 adID:(id)arg2 extra:(id)arg3;
- (_Bool)openURLInApp:(id)arg1;
- (_Bool)openURLSuccessfullyWithURL:(id)arg1 adID:(id)arg2 extra:(id)arg3;
- (void)splashActionWithCondition:(id)arg1;
- (void)trackWithTag:(id)arg1 label:(id)arg2 extra:(id)arg3;
- (void)splashViewDidDisappear;
- (id)splashFakeLaunchView;
- (void)splashViewWillAppear;
- (id)splashSkipBtnName;
- (id)splashReadMoreString;
- (id)splashOpenAppString;
- (id)splashArrowImage;
- (id)splashViewMoreImage;
- (id)splashWifiImage;
- (id)splashWifiView;
- (id)splashVideoLogo;
- (id)splashBgImage;
- (id)installId;
- (id)deviceId;
- (id)ntType;
- (id)splashNetwokType;
- (id)splashBaseUrl;
- (void)requestWithUrl:(id)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (unsigned long long)skipButtonCenterYOffset;
- (unsigned long long)logoAreaHeight;
- (void)trackWithTag:(id)arg1 label:(id)arg2 value:(id)arg3 extra:(id)arg4;
- (id)awesplash_imageNamed:(id)arg1;
- (void)sendRequestWithURL:(id)arg1 userAgent:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)tryToShowSplash;
- (void)setupWithConfig:(id)arg1;
- (_Bool)isSplashShowed;
- (_Bool)isSplashShowing;
- (void)dealloc;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)applicationidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

