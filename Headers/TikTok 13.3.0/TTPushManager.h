//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "Push-Protocol.h"

@class NSString, TTPushMessageDispatcher;

@interface TTPushManager : NSObject <Push>
{
    _Bool _isForeground;
    _Bool _isBroadcasting;
    TTPushMessageDispatcher *_msgDispatcher;
    shared_ptr_83e2db89 _pushManager;
    shared_ptr_0641447b _observer;
    shared_ptr_779fcb27 _parameters;
}

+ (unsigned long long)convertConnectionState_:(int)arg1;
+ (id)anotherSharedManager;
+ (id)sharedManager;
@property _Bool isBroadcasting; // @synthesize isBroadcasting=_isBroadcasting;
@property _Bool isForeground; // @synthesize isForeground=_isForeground;
@property(retain, nonatomic) TTPushMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(nonatomic) shared_ptr_779fcb27 parameters; // @synthesize parameters=_parameters;
@property(nonatomic) shared_ptr_0641447b observer; // @synthesize observer=_observer;
@property(nonatomic) shared_ptr_83e2db89 pushManager; // @synthesize pushManager=_pushManager;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setBroadcastingMessage:(_Bool)arg1;
- (void)setCustomizedMessageReceiver:(id)arg1;
- (void)enableDebugLog:(_Bool)arg1;
- (void)onNetworkStateChanged:(unsigned long long)arg1;
- (_Bool)asyncSendPushMessage:(id)arg1;
- (_Bool)asyncSendBinaryMessage:(id)arg1;
- (_Bool)asyncSendTextMessage:(id)arg1;
- (_Bool)isConnected;
- (void)stopConnection;
- (void)startConnection:(id)arg1 appId:(int)arg2 deviceId:(long long)arg3 appVersion:(int)arg4 sdkVersion:(int)arg5 installId:(long long)arg6 sessionId:(id)arg7 webId:(long long)arg8 platform:(int)arg9 network:(int)arg10;
- (void)startConnection:(id)arg1 appId:(int)arg2 fpid:(int)arg3 appKey:(id)arg4 deviceId:(long long)arg5 appVersion:(int)arg6 sdkVersion:(int)arg7 installId:(long long)arg8 sessionId:(id)arg9 webId:(long long)arg10 platform:(int)arg11 network:(int)arg12;
- (void)startConnection:(id)arg1 appId:(int)arg2 fpid:(int)arg3 appKey:(id)arg4 deviceId:(long long)arg5 appVersion:(int)arg6 sdkVersion:(int)arg7 installId:(long long)arg8 sessionId:(id)arg9 webId:(long long)arg10 platform:(int)arg11 network:(int)arg12 customParams:(id)arg13;
- (void)asyncStopConnection;
- (void)asyncStartConnection;
- (void)configConnection:(id)arg1;
- (void)onConnectionStateChanged:(int)arg1 url:(id)arg2;
- (void)onConnectionErrorWithState:(int)arg1 url:(id)arg2 error:(id)arg3;
- (void)onPushMessageReceived:(shared_ptr_51069d86)arg1;
- (void)handleEnteredForeground;
- (void)handleEnteredBackground;
- (void)dealloc;
- (id)init:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

