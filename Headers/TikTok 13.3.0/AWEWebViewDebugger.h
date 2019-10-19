//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEWebViewDebuggerViewController, UIPanGestureRecognizer, UIWindow;
@protocol AWEWebViewConfigProtocol;

@interface AWEWebViewDebugger : NSObject
{
    UIWindow *_fairy;
    UIWindow *_tableWindow;
    UIWindow *_lastWindow;
    id <AWEWebViewConfigProtocol> _webConfig;
    UIPanGestureRecognizer *_panGestureForEntranceNob;
    AWEWebViewDebuggerViewController *_debuggerViewController;
}

+ (_Bool)includeChinese:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) AWEWebViewDebuggerViewController *debuggerViewController; // @synthesize debuggerViewController=_debuggerViewController;
@property(retain, nonatomic) UIPanGestureRecognizer *panGestureForEntranceNob; // @synthesize panGestureForEntranceNob=_panGestureForEntranceNob;
@property(retain, nonatomic) id <AWEWebViewConfigProtocol> webConfig; // @synthesize webConfig=_webConfig;
@property(nonatomic) __weak UIWindow *lastWindow; // @synthesize lastWindow=_lastWindow;
@property(retain, nonatomic) UIWindow *tableWindow; // @synthesize tableWindow=_tableWindow;
@property(retain, nonatomic) UIWindow *fairy; // @synthesize fairy=_fairy;
- (void).cxx_destruct;
- (void)panForEntranceNob:(id)arg1;
- (void)checkURL:(id)arg1;
- (void)playFairyAnimation;
- (_Bool)isShowingFairy;
- (void)hideDebuger;
- (void)showDebuger;
- (void)byeFairy;
- (void)wakeUpFairy;
- (void)hideFairy;
- (void)hiFairy;
- (void)updateFairyColor:(_Bool)arg1;
- (id)analysisRequest:(id)arg1 extraParams:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewShouldStartLoadWithRequest:(id)arg1 navigationType:(long long)arg2 interceptorResult:(id)arg3 extraParams:(id)arg4;
- (void)requestData:(id)arg1;
- (void)tapNob:(id)arg1;
- (void)setupUI;
- (id)init;

@end

