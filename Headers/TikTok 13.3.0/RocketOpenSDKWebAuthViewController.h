//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "WKNavigationDelegate-Protocol.h"
#import "WKUIDelegate-Protocol.h"

@class NSString, RocketOpenSDKSendAuthReq, UIActivityIndicatorView, UIButton, WKWebView;
@protocol RocketOpenSDKApiDelegate, RocketOpenSDKWebAuthViewDelegate;

@interface RocketOpenSDKWebAuthViewController : UIViewController <WKNavigationDelegate, WKUIDelegate>
{
    RocketOpenSDKSendAuthReq *_req;
    id <RocketOpenSDKApiDelegate> _sdkDelegate;
    id <RocketOpenSDKWebAuthViewDelegate> _authDelegate;
    UIActivityIndicatorView *_loadingView;
    WKWebView *_webView;
    long long _loadStatus;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(nonatomic) long long loadStatus; // @synthesize loadStatus=_loadStatus;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <RocketOpenSDKWebAuthViewDelegate> authDelegate; // @synthesize authDelegate=_authDelegate;
@property(nonatomic) __weak id <RocketOpenSDKApiDelegate> sdkDelegate; // @synthesize sdkDelegate=_sdkDelegate;
@property(retain, nonatomic) RocketOpenSDKSendAuthReq *req; // @synthesize req=_req;
- (void).cxx_destruct;
- (id)title;
- (void)webView:(id)arg1 decidePolicyForNavigationResponse:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)webView:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)checkTimeOut;
- (void)failedWithNetworkProblem;
- (void)cancelClicked;
- (void)callLog;
- (void)reload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)checkEndLoading;
- (void)checkStartLoading;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)setupNavigationBarUI;
- (void)viewDidLoad;
- (id)init;
- (void)callLog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

