//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCWebBrowsingJavaScriptExecutionDelegate-Protocol.h"

@class NSArray, NSString;
@protocol SCWebBrowsingJavaScriptExecutionDelegate;

@interface SCWebBrowsingJavaScriptBridge : NSObject <SCWebBrowsingJavaScriptExecutionDelegate>
{
    id <SCWebBrowsingJavaScriptExecutionDelegate> _javaScriptExecutionDelegate;
    NSArray *_scripts;
}

@property(retain, nonatomic) NSArray *scripts; // @synthesize scripts=_scripts;
@property(nonatomic) __weak id <SCWebBrowsingJavaScriptExecutionDelegate> javaScriptExecutionDelegate; // @synthesize javaScriptExecutionDelegate=_javaScriptExecutionDelegate;
- (void).cxx_destruct;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithScriptControllers:(id)arg1 webviewConfiguration:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

