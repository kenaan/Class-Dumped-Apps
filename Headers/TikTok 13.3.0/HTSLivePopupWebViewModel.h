//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveMessageSubscriber-Protocol.h"

@class HTSEventContext, HTSLiveBridgeData, LiveRoomModel, NSString, RACDisposable;
@protocol HTSLiveDetailRouter, HTSLiveMessageDispatchProvider, IESLiveSettings;

@interface HTSLivePopupWebViewModel : NSObject <HTSLiveMessageSubscriber>
{
    LiveRoomModel *_room;
    HTSEventContext *_trackContext;
    NSString *_toastString;
    NSString *_pageSchemeURLStr;
    HTSLiveBridgeData *_jsonBridgeMessage;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESLiveSettings> _settings;
    id <HTSLiveDetailRouter> _router;
    RACDisposable *_disposable;
}

@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) HTSLiveBridgeData *jsonBridgeMessage; // @synthesize jsonBridgeMessage=_jsonBridgeMessage;
@property(retain, nonatomic) NSString *pageSchemeURLStr; // @synthesize pageSchemeURLStr=_pageSchemeURLStr;
@property(copy, nonatomic) NSString *toastString; // @synthesize toastString=_toastString;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(readonly, nonatomic) LiveRoomModel *room; // @synthesize room=_room;
- (void).cxx_destruct;
- (void)handleBridgeMessage:(id)arg1;
- (void)handleInstantMessage:(id)arg1;
- (void)messageReceived:(id)arg1;
- (void)setupDI;
- (id)initWithRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

