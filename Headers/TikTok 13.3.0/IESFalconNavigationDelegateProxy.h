//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WKNavigationDelegate-Protocol.h"

@class NSString, WKWebView;
@protocol OS_dispatch_semaphore;

@interface IESFalconNavigationDelegateProxy : NSObject <WKNavigationDelegate>
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    WKWebView *_webView;
    id _navigationDelegateProxy;
}

@property(nonatomic) __weak id navigationDelegateProxy; // @synthesize navigationDelegateProxy=_navigationDelegateProxy;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
- (void).cxx_destruct;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(CDUnknownBlockType)arg3;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

