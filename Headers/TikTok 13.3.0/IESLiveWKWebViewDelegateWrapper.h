//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString;
@protocol IESLiveAppInfo, IESLiveMonitor, IESLiveURLSchemaHandler, IESLiveWebViewDelegate, IESLiveWebViewProtocol, IESLiveWebViewService;

@interface IESLiveWKWebViewDelegateWrapper : NSObject <WKNavigationDelegate>
{
    id <IESLiveWebViewDelegate> _realDelegate;
    id <IESLiveWebViewProtocol> _webViewInstance;
    id <IESLiveWebViewService> _webViewService;
    id <IESLiveURLSchemaHandler> _urlSchemaHandler;
    id <IESLiveMonitor> _monitor;
    id <IESLiveAppInfo> _appInfo;
    NSString *_currentURL;
    double _currentTime;
}

@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(copy, nonatomic) NSString *currentURL; // @synthesize currentURL=_currentURL;
@property(retain, nonatomic) id <IESLiveAppInfo> appInfo; // @synthesize appInfo=_appInfo;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESLiveURLSchemaHandler> urlSchemaHandler; // @synthesize urlSchemaHandler=_urlSchemaHandler;
@property(retain, nonatomic) id <IESLiveWebViewService> webViewService; // @synthesize webViewService=_webViewService;
@property(nonatomic) __weak id <IESLiveWebViewProtocol> webViewInstance; // @synthesize webViewInstance=_webViewInstance;
@property(nonatomic) __weak id <IESLiveWebViewDelegate> realDelegate; // @synthesize realDelegate=_realDelegate;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (id)initWithRealDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

