//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RCTViewManager.h"

#import "RCTWKWebViewDelegate-Protocol.h"

@class NSConditionLock, NSString;

@interface RCTWKWebViewManager : RCTViewManager <RCTWKWebViewDelegate>
{
    NSConditionLock *_shouldStartLoadLock;
    _Bool _shouldStartLoad;
}

+ (const struct RCTMethodInfo *)__rct_export__1596;
+ (const struct RCTMethodInfo *)__rct_export__1245;
+ (const struct RCTMethodInfo *)__rct_export__1124;
+ (const struct RCTMethodInfo *)__rct_export__1003;
+ (const struct RCTMethodInfo *)__rct_export__882;
+ (const struct RCTMethodInfo *)__rct_export__761;
+ (id)propConfig_decelerationRate;
+ (id)propConfig_scrollEnabled;
+ (id)propConfig_bounces;
+ (const struct RCTMethodInfo *)__rct_export__520;
+ (id)propConfig_onMessage;
+ (id)propConfig_messagingEnabled;
+ (id)propConfig_automaticallyAdjustContentInsets;
+ (id)propConfig_contentInset;
+ (id)propConfig_mediaPlaybackRequiresUserAction;
+ (id)propConfig_allowsInlineMediaPlayback;
+ (id)propConfig_injectedJavaScript;
+ (id)propConfig_onShouldStartLoadWithRequest;
+ (id)propConfig_onLoadingError;
+ (id)propConfig_onLoadingFinish;
+ (id)propConfig_onLoadingStart;
+ (id)propConfig_source;
+ (void)load;
+ (id)moduleName;
- (void).cxx_destruct;
- (void)startLoadWithResult:(_Bool)arg1 lockIdentifier:(long long)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadForRequest:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)stopLoading:(id)arg1;
- (void)reload:(id)arg1;
- (void)goForward:(id)arg1;
- (void)goBack:(id)arg1;
- (void)injectJavaScript:(id)arg1 script:(id)arg2;
- (void)set_decelerationRate:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_scrollEnabled:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)set_bounces:(id)arg1 forView:(id)arg2 withDefaultView:(id)arg3;
- (void)postMessage:(id)arg1 message:(id)arg2;
- (id)view;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

