//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IESBridgeEngine, NSMutableDictionary, NSMutableSet, UIView;
@protocol IESWebViewProtocol;

@interface IESJSBridge : NSObject
{
    int _uniqueID;
    IESBridgeEngine *_bridgeEngine;
    UIView<IESWebViewProtocol> *_webView;
    NSMutableSet *_publicCallSet;
    NSMutableSet *_protectedSet;
    NSMutableSet *_privateSet;
    NSMutableDictionary *_callbackHandlers;
}

+ (id)currentJSSDKVersion;
+ (id)JSBridgeWithWebView:(id)arg1;
@property(nonatomic) int uniqueID; // @synthesize uniqueID=_uniqueID;
@property(retain, nonatomic) NSMutableDictionary *callbackHandlers; // @synthesize callbackHandlers=_callbackHandlers;
@property(retain, nonatomic) NSMutableSet *privateSet; // @synthesize privateSet=_privateSet;
@property(retain, nonatomic) NSMutableSet *protectedSet; // @synthesize protectedSet=_protectedSet;
@property(retain, nonatomic) NSMutableSet *publicCallSet; // @synthesize publicCallSet=_publicCallSet;
@property(nonatomic) __weak UIView<IESWebViewProtocol> *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) IESBridgeEngine *bridgeEngine; // @synthesize bridgeEngine=_bridgeEngine;
- (void).cxx_destruct;
- (_Bool)isAuthroizedForInfo:(id)arg1;
- (_Bool)isAuthorizedForEvent:(id)arg1;
- (_Bool)isAuthorizedForCall:(id)arg1;
- (_Bool)isInnerDomain;
- (void)flushMessages;
- (id)getNewUnqiueID;
- (void)processIFrameMessage:(id)arg1;
- (void)invokeJSWithEventID:(id)arg1 parameters:(id)arg2 finishBlock:(CDUnknownBlockType)arg3;
- (void)invokeJSWithCallbackID:(id)arg1 parameters:(id)arg2;
- (void)registerConfig;
- (void)registerHandlerBlock:(CDUnknownBlockType)arg1 forJSMethod:(id)arg2 authType:(unsigned long long)arg3;
- (id)init;

@end

