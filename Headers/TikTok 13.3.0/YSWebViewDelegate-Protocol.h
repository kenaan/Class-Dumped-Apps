//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BDUGWebView, NSError, NSURLRequest;

@protocol YSWebViewDelegate <NSObject>

@optional
- (_Bool)webView:(BDUGWebView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)webView:(BDUGWebView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)webviewDidLayoutSubviews:(BDUGWebView *)arg1;
- (void)webViewDidFinishLoad:(BDUGWebView *)arg1;
- (void)webViewDidStartLoad:(BDUGWebView *)arg1;
@end

