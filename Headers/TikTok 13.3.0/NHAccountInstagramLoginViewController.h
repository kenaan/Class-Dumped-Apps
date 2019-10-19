//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class NSString, UIWebView;

@interface NHAccountInstagramLoginViewController : UIViewController <UIWebViewDelegate, UIScrollViewDelegate>
{
    NSString *_clientID;
    NSString *_redirectURL;
    UIWebView *_webView;
    CDUnknownBlockType _resultCallback;
}

@property(copy, nonatomic) CDUnknownBlockType resultCallback; // @synthesize resultCallback=_resultCallback;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) NSString *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
- (void).cxx_destruct;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)cancel;
- (void)finishLoginWithCode:(id)arg1;
- (void)dealloc;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)buildUI;
- (void)keyboardWillShow:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithClientID:(id)arg1 redirectURL:(id)arg2 callback:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

