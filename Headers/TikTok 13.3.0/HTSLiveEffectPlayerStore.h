//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveEffectPlayerAction-Protocol.h"
#import "HTSLiveHideComponentAction-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"
#import "HTSLiveOrientationActions-Protocol.h"

@class HTSEventContext, HTSGroupedLiveMessageHandler, HTSLiveEffectNode, HTSLiveMessageFakedFilter, HTSLiveSpecialGiftQueue, IESLiveComponentContext, LiveRoomModel, NSMutableDictionary, NSString, RACDisposable;
@protocol HTSLiveEffectPlayerReaction, HTSLiveMessageDispatchProvider, IESActionDispatcher, IESLiveMonitor, IESLivePlayerControlViewHierarchyProvider, IESLiveSettings, IESLiveTracker, IESLiveUserService;

@interface HTSLiveEffectPlayerStore : NSObject <HTSLiveMessageSubscriber, HTSLiveOrientationActions, HTSLiveHideComponentAction, HTSLiveEffectPlayerAction>
{
    _Bool _giftAnimationEnable;
    _Bool _showNewGiftDownloadFailedTip;
    _Bool _isHideComponent;
    _Bool _specialGiftPlaying;
    LiveRoomModel *_roomModel;
    HTSEventContext *_eventContext;
    IESLiveComponentContext *_componentContext;
    HTSLiveEffectNode *_currentPlayingEffectNode;
    NSString *_errorToast;
    id <HTSLiveEffectPlayerReaction> _actor;
    long long _orientation;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveSettings> _settings;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <IESActionDispatcher> _dispatcher;
    id <IESLiveMonitor> _monitor;
    HTSGroupedLiveMessageHandler *_groupedHandler;
    RACDisposable *_disposable;
    HTSLiveMessageFakedFilter *_messageFakedFilter;
    HTSLiveSpecialGiftQueue *_specialGiftQueue;
    NSMutableDictionary *_pendingGiftMessageHashSet;
    id <IESLivePlayerControlViewHierarchyProvider> _playerControlProvider;
}

@property(retain, nonatomic) id <IESLivePlayerControlViewHierarchyProvider> playerControlProvider; // @synthesize playerControlProvider=_playerControlProvider;
@property(retain, nonatomic) NSMutableDictionary *pendingGiftMessageHashSet; // @synthesize pendingGiftMessageHashSet=_pendingGiftMessageHashSet;
@property(nonatomic) _Bool specialGiftPlaying; // @synthesize specialGiftPlaying=_specialGiftPlaying;
@property(retain, nonatomic) HTSLiveSpecialGiftQueue *specialGiftQueue; // @synthesize specialGiftQueue=_specialGiftQueue;
@property(retain, nonatomic) HTSLiveMessageFakedFilter *messageFakedFilter; // @synthesize messageFakedFilter=_messageFakedFilter;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) HTSGroupedLiveMessageHandler *groupedHandler; // @synthesize groupedHandler=_groupedHandler;
@property(retain, nonatomic) id <IESLiveMonitor> monitor; // @synthesize monitor=_monitor;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(nonatomic) _Bool isHideComponent; // @synthesize isHideComponent=_isHideComponent;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) __weak id <HTSLiveEffectPlayerReaction> actor; // @synthesize actor=_actor;
@property(copy, nonatomic) NSString *errorToast; // @synthesize errorToast=_errorToast;
@property(retain, nonatomic) HTSLiveEffectNode *currentPlayingEffectNode; // @synthesize currentPlayingEffectNode=_currentPlayingEffectNode;
@property(retain, nonatomic) IESLiveComponentContext *componentContext; // @synthesize componentContext=_componentContext;
@property(retain, nonatomic) HTSEventContext *eventContext; // @synthesize eventContext=_eventContext;
@property(nonatomic) _Bool showNewGiftDownloadFailedTip; // @synthesize showNewGiftDownloadFailedTip=_showNewGiftDownloadFailedTip;
@property(nonatomic) _Bool giftAnimationEnable; // @synthesize giftAnimationEnable=_giftAnimationEnable;
@property(retain, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
- (void).cxx_destruct;
- (void)showAllComponent;
- (void)hideAllComponent;
- (void)didForceUpdateToOrientation:(long long)arg1;
- (void)onOrientationTransitionEnd;
- (void)onOrientationTransitionBegin:(long long)arg1;
- (void)didUpdateRoom:(id)arg1;
- (void)stopLive;
- (void)liveWillEnd;
- (void)messageReceived:(id)arg1;
- (void)reverseGiftAnimationEnable;
- (id)triggerEffectWithMessage:(id)arg1;
- (void)invokeSpecialGiftIfNeeded:(id)arg1;
- (void)stopEffectPlaying;
- (void)loopNextSpecialGift;
- (void)tryPlaySpecialGift;
- (void)realDispatchAssetMessage:(id)arg1;
- (void)realDispatchEffectMessage:(id)arg1;
- (void)assetMessageEnqueue:(id)arg1;
- (void)effectMessageEnqueue:(id)arg1 urgent:(_Bool)arg2;
- (void)didReceiveNewGift:(id)arg1 giftID:(id)arg2;
- (void)dispatchEffectWithAssetMessage:(id)arg1;
- (void)dispatchEffectWithMessage:(id)arg1;
- (void)loadGiftQueue;
- (void)loadMessageHandlers;
- (void)setupDispatcher;
- (void)setup;
- (id)initWitRoom:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

