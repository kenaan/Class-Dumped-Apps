//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveGiftActions-Protocol.h"
#import "IESLiveUserActions-Protocol.h"
#import "IESLiveWalletAction-Protocol.h"

@class HTSEventContext, HTSLiveGiftChargeAPI, HTSLivePayGradeModel, IESLiveChargeModel, LiveRoomModel, NSArray, NSString, RACDisposable;
@protocol HTLGiftReactions, HTSLiveDetailRouter, HTSLiveGiftViewReactions, IESActionDispatcher, IESLiveEnvironment, IESLiveTracker, IESLiveUserService;

@interface HTSLiveGiftStore : NSObject <HTSLiveGiftActions, IESLiveWalletAction, IESLiveUserActions>
{
    _Bool _linkMicOnly;
    _Bool _isAnchor;
    id <HTSLiveGiftViewReactions> _viewReactions;
    id <HTLGiftReactions> _giftReactions;
    LiveRoomModel *_roomModel;
    NSArray *_giftModels;
    NSArray *_giftGroup;
    IESLiveChargeModel *_firstChargeModel;
    HTSLivePayGradeModel *_payGrade;
    HTSEventContext *_trackContext;
    HTSLiveGiftChargeAPI *_chargeAPI;
    id <IESActionDispatcher> _dispatcher;
    RACDisposable *_disposable;
    id <IESLiveTracker> _tracker;
    id <IESLiveUserService> _userService;
    id <IESLiveEnvironment> _appTarget;
    id <HTSLiveDetailRouter> _router;
}

@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) RACDisposable *disposable; // @synthesize disposable=_disposable;
@property(retain, nonatomic) id <IESActionDispatcher> dispatcher; // @synthesize dispatcher=_dispatcher;
@property(retain, nonatomic) HTSLiveGiftChargeAPI *chargeAPI; // @synthesize chargeAPI=_chargeAPI;
@property(retain, nonatomic) HTSEventContext *trackContext; // @synthesize trackContext=_trackContext;
@property(readonly, nonatomic) HTSLivePayGradeModel *payGrade; // @synthesize payGrade=_payGrade;
@property(readonly, nonatomic) IESLiveChargeModel *firstChargeModel; // @synthesize firstChargeModel=_firstChargeModel;
@property(retain, nonatomic) NSArray *giftGroup; // @synthesize giftGroup=_giftGroup;
@property(retain, nonatomic) NSArray *giftModels; // @synthesize giftModels=_giftModels;
@property(copy, nonatomic) LiveRoomModel *roomModel; // @synthesize roomModel=_roomModel;
@property(nonatomic) _Bool isAnchor; // @synthesize isAnchor=_isAnchor;
@property(readonly, nonatomic) _Bool linkMicOnly; // @synthesize linkMicOnly=_linkMicOnly;
@property(nonatomic) __weak id <HTLGiftReactions> giftReactions; // @synthesize giftReactions=_giftReactions;
@property(nonatomic) __weak id <HTSLiveGiftViewReactions> viewReactions; // @synthesize viewReactions=_viewReactions;
- (void).cxx_destruct;
- (_Bool)shouldShowHonorLevel;
- (_Bool)shouldShowFansClubTab;
- (id)filtedGifts;
- (void)userDidLogin:(id)arg1;
- (void)updateWalletModel;
- (void)diamondHasUpdated;
- (void)setup;
- (id)initWithRoomModel:(id)arg1 linkMicOnly:(_Bool)arg2;
- (id)initWithRoomModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
