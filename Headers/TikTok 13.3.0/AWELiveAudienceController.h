//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveAudienceViewControllerDelegate-Protocol.h"

@class AWELiveRoomModel, HTSEventContext, HTSLiveAudienceViewController, HTSLiveRoomAPI, IESLiveNewPlayerController, NSString, RACDisposable;
@protocol AWELiveAudienceControllerDelegate, IESActionDispatcher, IESLiveContainerRouter, IESLiveFinishViewFactory, IESLiveToastFactory, IESLiveUserService;

@interface AWELiveAudienceController : NSObject <HTSLiveAudienceViewControllerDelegate>
{
    HTSLiveAudienceViewController *_audienceVC;
    AWELiveRoomModel *_roomModel;
    HTSEventContext *_context;
    IESLiveNewPlayerController *_player;
    HTSLiveRoomAPI *_api;
    id <AWELiveAudienceControllerDelegate> _audienceDelegate;
    RACDisposable *_disposable;
    id <IESLiveFinishViewFactory> _finishControllerFactory;
    id <IESActionDispatcher> _dispatcher;
    id <IESLiveContainerRouter> _containerRouter;
    id <IESLiveUserService> _userService;
    id <IESLiveToastFactory> _toastFactory;
    struct UIEdgeInsets _screenInsets;
}

@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveContainerRouter> containerRouter; // @synthesize containerRouter=_containerRouter;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) id <IESLiveFinishViewFactory> finishControllerFactory; // @synthesize finishControllerFactory=_finishControllerFactory;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(nonatomic) __weak id <AWELiveAudienceControllerDelegate> audienceDelegate; // @synthesize audienceDelegate=_audienceDelegate;
@property(retain, nonatomic) HTSLiveRoomAPI *api; // @synthesize api=_api;
@property(nonatomic) __weak IESLiveNewPlayerController *player; // @synthesize player=_player;
@property(nonatomic) struct UIEdgeInsets screenInsets; // @synthesize screenInsets=_screenInsets;
@property(retain, nonatomic) HTSEventContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AWELiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(retain, nonatomic) HTSLiveAudienceViewController *audienceVC; // @synthesize audienceVC=_audienceVC;
- (void).cxx_destruct;
- (void)focusOnPopup:(_Bool)arg1;
- (void)setScreenEdgeInsets:(struct UIEdgeInsets)arg1;
- (void)setAudienceControllerDelegate:(id)arg1;
- (id)finishedViewControllerWithRoom:(id)arg1;
- (id)audienceViewController;
- (void)closeWithRoom:(id)arg1 closeType:(unsigned long long)arg2;
- (_Bool)canCloseWithRoom:(id)arg1 closeType:(unsigned long long)arg2;
- (void)startLive;
- (void)pauseLive;
- (void)clearAudience;
- (id)_getPlayer;
- (void)alreadyShowAudience;
- (void)addLiveRoomActionObserver;
- (void)createAudienceViewController:(id)arg1;
- (void)configAudienceVC;
- (id)initWithRoomModel:(id)arg1 context:(id)arg2;
- (id)initWithRoomModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

