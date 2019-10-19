//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HTSLiveComponent-Protocol.h"

@class IESLiveGiftGuideStore, NSMutableSet, NSString;
@protocol HTSLiveDetailRouter, HTSLiveViewHierarchyProvider, IESLiveEnvironment, IESLiveGiftGuideActions, IESLiveInternalRouter, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveUserService;

@interface IESLiveGiftGuideFragment : NSObject <HTSLiveComponent>
{
    _Bool _isNewLogInUserGiftGuide;
    _Bool _hasShowGiftGuide;
    _Bool _hasShowFirstChargeGiftGuide;
    _Bool _keyboardShow;
    IESLiveGiftGuideStore *_store;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveSettings> _settings;
    id <IESLiveUserService> _userService;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    id <IESLiveTracker> _tracker;
    id <HTSLiveDetailRouter> _router;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveInternalRouter> _internalRouter;
    double _delayTime;
    id <IESLiveGiftGuideActions> _giftGuideActionCreator;
    NSMutableSet *_observerSet;
}

+ (id)componentWithRoom:(id)arg1 trackContext:(id)arg2 componentContext:(id)arg3;
+ (_Bool)shouldCreateWithRoom:(id)arg1 componentContext:(id)arg2;
@property(retain, nonatomic) NSMutableSet *observerSet; // @synthesize observerSet=_observerSet;
@property(nonatomic) _Bool keyboardShow; // @synthesize keyboardShow=_keyboardShow;
@property(retain, nonatomic) id <IESLiveGiftGuideActions> giftGuideActionCreator; // @synthesize giftGuideActionCreator=_giftGuideActionCreator;
@property(nonatomic) _Bool hasShowFirstChargeGiftGuide; // @synthesize hasShowFirstChargeGiftGuide=_hasShowFirstChargeGiftGuide;
@property(nonatomic) _Bool hasShowGiftGuide; // @synthesize hasShowGiftGuide=_hasShowGiftGuide;
@property(nonatomic) double delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) _Bool isNewLogInUserGiftGuide; // @synthesize isNewLogInUserGiftGuide=_isNewLogInUserGiftGuide;
@property(retain, nonatomic) id <IESLiveInternalRouter> internalRouter; // @synthesize internalRouter=_internalRouter;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <HTSLiveDetailRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) IESLiveGiftGuideStore *store; // @synthesize store=_store;
- (void).cxx_destruct;
- (void)showToast:(id)arg1;
- (void)showLackOfBanlance;
- (void)onGuideViewSend;
- (void)showGiftGuide:(_Bool)arg1;
- (void)bindStore;
- (void)componentDidUnMount;
- (void)componentDidMount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

