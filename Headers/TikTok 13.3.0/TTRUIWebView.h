//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWebView.h>

#import "TTRWebView-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSObject, NSPointerArray, NSString, NSURL, TTRJSInjector, TTRStaticPlugin, UIScrollView, UIViewController;
@protocol TTRJSBAuthorization;

@interface TTRUIWebView : UIWebView <UIWebViewDelegate, TTRWebView>
{
    _Bool _hasInjectedScript;
    UIViewController *_ttr_sourceController;
    TTRStaticPlugin *_ttr_staticPlugin;
    NSPointerArray *_slaveDelates;
    TTRJSInjector *_ttr_injector;
}

@property(nonatomic) _Bool hasInjectedScript; // @synthesize hasInjectedScript=_hasInjectedScript;
@property(retain, nonatomic) TTRJSInjector *ttr_injector; // @synthesize ttr_injector=_ttr_injector;
@property(retain, nonatomic) NSPointerArray *slaveDelates; // @synthesize slaveDelates=_slaveDelates;
@property(retain, nonatomic) TTRStaticPlugin *ttr_staticPlugin; // @synthesize ttr_staticPlugin=_ttr_staticPlugin;
@property(nonatomic) __weak UIViewController *ttr_sourceController; // @synthesize ttr_sourceController=_ttr_sourceController;
- (void).cxx_destruct;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)ttr_fireEvent:(id)arg1 data:(id)arg2;
- (void)ttr_evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)ttr_removeAllDelegate;
- (void)ttr_removeDelegate:(id)arg1;
- (void)ttr_addDelegate:(id)arg1;
- (void)ttr_goForward;
- (void)ttr_goBack;
- (_Bool)ttr_canGoForward;
- (_Bool)ttr_canGoBack;
- (void)ttr_reload;
- (void)ttr_stopLoading;
- (void)ttr_loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)ttr_loadFileURL:(id)arg1 allowingReadAccessToURL:(id)arg2;
- (void)ttr_loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)ttr_loadRequest:(id)arg1;
@property(readonly, nonatomic) UIScrollView *ttr_scrollView;
@property(readonly, nonatomic) NSURL *ttr_url;
- (void)injectScriptIfNeed;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) id <TTRJSBAuthorization> ttr_authorization;
@property(readonly, nonatomic) __weak NSObject *ttr_sourceObject;

@end

