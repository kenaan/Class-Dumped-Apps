//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESWKWebView.h"

#import "IESLiveWebViewProtocol-Protocol.h"

@class IESLiveWKWebViewDelegateWrapper, NSMutableSet, NSString, UIScrollView;
@protocol IESLiveJSBridgeProtocol, IESLiveWebViewDelegate, IESLiveWebViewService;

@interface IESLiveWKWebView : IESWKWebView <IESLiveWebViewProtocol>
{
    IESLiveWKWebViewDelegateWrapper *_delegateWrapper;
    NSMutableSet *_bridgeHandlers;
    id <IESLiveWebViewService> _webViewService;
}

@property(retain, nonatomic) id <IESLiveWebViewService> webViewService; // @synthesize webViewService=_webViewService;
@property(retain, nonatomic) NSMutableSet *bridgeHandlers; // @synthesize bridgeHandlers=_bridgeHandlers;
@property(retain, nonatomic) IESLiveWKWebViewDelegateWrapper *delegateWrapper; // @synthesize delegateWrapper=_delegateWrapper;
- (void).cxx_destruct;
- (void)setTimeStampOfWebPageWithDict:(id)arg1;
@property(nonatomic) __weak id <IESLiveWebViewDelegate> liveWebViewDelegate;
- (id)currentWebViewScene;
- (id)currentRequestURL;
- (void)loadURLRequest:(id)arg1;
- (_Bool)isInnerWK;
- (void)scaleToFit;
- (void)addJSBridgeHandler:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 bridgeClass:(Class)arg2 settings:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 bridgeClass:(Class)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, nonatomic) id <IESLiveJSBridgeProtocol> bridge;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(readonly) Class superclass;

@end

