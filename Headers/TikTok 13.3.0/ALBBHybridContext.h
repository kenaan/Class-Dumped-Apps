//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ALBBWebViewController, UIWebView;

@interface ALBBHybridContext : NSObject
{
    ALBBWebViewController *_viewController;
    UIWebView *_webView;
}

+ (id)context:(id)arg1 webView:(id)arg2;
@property(nonatomic) __weak UIWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak ALBBWebViewController *viewController; // @synthesize viewController=_viewController;
- (void).cxx_destruct;

@end

