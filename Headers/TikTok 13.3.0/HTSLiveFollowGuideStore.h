//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveCommentActions-Protocol.h"
#import "HTSLiveFollowGuideActions-Protocol.h"
#import "HTSLiveMessageSubscriber-Protocol.h"
#import "HTSLiveSendGiftActions-Protocol.h"

@class HTSEventContext, HTSLiveGuideMessage, LiveRoomModel, NSDate, NSError, NSString, RACDisposable;
@protocol HTSLiveDetailRouter, HTSLiveMessageDispatchProvider, IESActionDispatcher, IESLiveEnvironment, IESLiveSettings, IESLiveSquareGuideActions, IESLiveTracker, IESLiveUserService;

@interface HTSLiveFollowGuideStore : NSObject <HTSLiveCommentActions, HTSLiveSendGiftActions, HTSLiveFollowGuideActions, HTSLiveMessageSubscriber>
{
    _Bool _showPopup;
    _Bool _showAlert;
    _Bool _shouldClose;
    _Bool _hasFollowActions;
    _Bool _interestedInAnchor;
    _Bool _keyboardShow;
    LiveRoomModel *_liveRoomModel;
    HTSEventContext *_trackContext;
    HTSLiveGuideMessage *_followGuideMessage;
    NSError *_followError;
    RACDisposable *_disposable;
    NSDate *_enterTime;
    NSDate *_popoverShowTime;
    id <IESLiveTracker> _tracker;
    id <IESActionDispatcher> _dispatcher;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveUserService> _userService;
    id <IESLiveSettings> _settings;
    id <IESLiveSquareGuideActions> _squareAction;
    id <HTSLiveMessageDispatchProvider> _messageDispatcher;
    id <HTSLiveDetailRouter> _router;
}

@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <HTSLiveMessageDispatchProvider> messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property(retain, nonatomic) id <IESLiveSquareGuideActions> squareAction; // @synthesize squareAction=_squareAction;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) NSDate *popoverShowTime; // @synthesize popoverShowTime=_popoverShowTime;
@property(retain, nonatomic) NSDate *enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(nonatomic) _Bool interestedInAnchor; // @synthesize interestedInAnchor=_interestedInAnchor;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) NSError *followError; // @synthesize followError=_followError;
@property(retain, nonatomic) HTSLiveGuideMessage *followGuideMessage; // @synthesize followGuideMessage=_followGuideMessage;
@property(nonatomic) _Bool hasFollowActions; // @synthesize hasFollowActions=_hasFollowActions;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(nonatomic) _Bool shouldClose; // @synthesize shouldClose=_shouldClose;
@property(nonatomic) _Bool showAlert; // @synthesize showAlert=_showAlert;
@property(nonatomic) _Bool showPopup; // @synthesize showPopup=_showPopup;
@property(retain, nonatomic) LiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
- (void).cxx_destruct;
- (void)messageReceived:(id)arg1;
- (void)didClickSendGiftButton;
- (void)sendBarrage:(id)arg1;
- (void)sendComment:(id)arg1 fromGuide:(_Bool)arg2;
- (void)didUnfollowUser:(id)arg1 status:(long long)arg2;
- (void)didFollowUser:(id)arg1 status:(long long)arg2;
- (void)closeRoomWithFollowError:(id)arg1;
- (void)showFollowAlert;
- (void)closeFollowPopup;
- (void)showFollowPopupWithWatchTime:(id)arg1;
- (void)followFromPopUpWithWatchTime:(id)arg1;
- (void)didUpdateRoom:(id)arg1;
- (_Bool)isFollowedAnchor;
- (_Bool)shouldShowFollowAlert;
- (id)initWithLiveRoomModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

