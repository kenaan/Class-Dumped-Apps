//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADOWebView.h"

#import "UIWebViewDelegate-Protocol.h"

@class NSString;

@interface GADOUIKitWebView : GADOWebView <UIWebViewDelegate>
{
}

+ (_Bool)isAvailable;
+ (void)initialize;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (id)URL;
- (_Bool)contentSizeUpdatesSynchronously;
- (void)evaluateJavaScriptFromString:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

