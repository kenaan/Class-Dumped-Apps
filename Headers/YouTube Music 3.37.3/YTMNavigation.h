//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GOOHeaderViewControllerDelegate-Protocol.h"
#import "YTGuideServiceCoordinatorObserver-Protocol.h"
#import "YTMAppMealbarPromoControllerDelegate-Protocol.h"
#import "YTMPlayerPageResponderProvider-Protocol.h"
#import "YTNavigationProtocol-Protocol.h"
#import "YTPivotBarProvider-Protocol.h"
#import "YTPivotBarViewControllerDelegate-Protocol.h"
#import "YTResponder-Protocol.h"
#import "YTUserChangedObserver-Protocol.h"

@class GIMMe, GOOHeaderViewController, NSMutableArray, NSString, NSURL, UINavigationController, UIViewController, UIWindow, YTColdConfig, YTIdentityController, YTInnerTubeControllerFactory, YTMAppMealbarPromoController, YTMContentViewController, YTMObserverManager, YTMealbarPromoController;
@protocol YTMAccountPanelController, YTMServices, YTResponder;

@interface YTMNavigation : NSObject <GOOHeaderViewControllerDelegate, YTGuideServiceCoordinatorObserver, YTPivotBarViewControllerDelegate, YTUserChangedObserver, YTMAppMealbarPromoControllerDelegate, YTNavigationProtocol, YTPivotBarProvider, YTResponder, YTMPlayerPageResponderProvider>
{
    UINavigationController *_navigationController;
    id <YTMServices> _services;
    UIWindow *_window;
    YTIdentityController *_identityController;
    YTInnerTubeControllerFactory *_controllerFactory;
    NSMutableArray *_navigationBlocks;
    YTColdConfig *_coldConfig;
    _Bool _disableFrictionlessSignIn;
    NSString *_helpContext;
    UIViewController *_embeddedHelpViewController;
    YTMAppMealbarPromoController *_appMealbarPromoController;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    NSURL *_homeRequestDeeplinkURL;
    YTMealbarPromoController *_mealbarPromoController;
    long long _currentLoadState;
    YTMContentViewController *_contentViewController;
    GOOHeaderViewController *_prefetchedHomeViewController;
    NSObject<YTMAccountPanelController> *_accountPanelController;
    YTMObserverManager *_playerPageChangeObserver;
}

@property(retain, nonatomic) YTMObserverManager *playerPageChangeObserver; // @synthesize playerPageChangeObserver=_playerPageChangeObserver;
@property(retain, nonatomic) NSObject<YTMAccountPanelController> *accountPanelController; // @synthesize accountPanelController=_accountPanelController;
@property(retain, nonatomic) GOOHeaderViewController *prefetchedHomeViewController; // @synthesize prefetchedHomeViewController=_prefetchedHomeViewController;
@property(retain, nonatomic) YTMContentViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(nonatomic) long long currentLoadState; // @synthesize currentLoadState=_currentLoadState;
@property(retain, nonatomic) YTMealbarPromoController *mealbarPromoController; // @synthesize mealbarPromoController=_mealbarPromoController;
@property(retain, nonatomic) NSURL *homeRequestDeeplinkURL; // @synthesize homeRequestDeeplinkURL=_homeRequestDeeplinkURL;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (void)addPlayerPageChangeObserver:(id)arg1;
- (_Bool)handleIOSApplicationEndpoint:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3;
- (void)handleAppStoreEndpoint:(id)arg1;
- (id)currentNavigationEndpoint;
- (_Bool)isSettingsViewControllerVisible;
- (id)baseInnerTubeViewControlleForViewController:(id)arg1;
- (void)popAllCloseableViewControllersIfNecessary;
- (void)prepareForNavigationCrossfade;
- (void)presentFeedbackControllerForNavigationEndpoint:(id)arg1;
- (void)pushViewController:(id)arg1;
- (id)headerWrappedTopController:(id)arg1;
- (void)presentModalTopController:(id)arg1;
- (void)pushViewController:(id)arg1 fromView:(id)arg2 isBaseNavigation:(_Bool)arg3 isBaseSearchEndpoint:(_Bool)arg4;
- (void)didAuthenticate;
- (void)createContentViewControllersIfNeeded;
- (void)requestSignIn;
- (void)clearCookies;
- (id)homeViewController;
- (void)popViewControllerFromNavigationController:(id)arg1;
- (void)handleHelpNavigationEndpoint:(id)arg1;
- (_Bool)shouldMealbarPromoController:(id)arg1 displayConnectionStatusMealbar:(id)arg2;
- (void)commonLoad;
- (void)didTapPivotBarItemWithViewControllers:(id)arg1 animated:(_Bool)arg2;
- (id)pivotBarItemViewControllers;
- (id)minimalPivotBar;
- (_Bool)shouldDisablePivotBarInteraction;
- (void)headerViewController:(id)arg1 didTapBackButton:(id)arg2;
- (void)accountButtonPresentationStyleDidChange:(_Bool)arg1;
- (void)showAccountButtonNotificationHint:(id)arg1;
- (void)topbarDidChange:(id)arg1;
- (void)refreshPivotBar;
- (void)userDidChange;
- (void)userWillChange;
- (_Bool)isWatchViewVisible;
- (id)persistedQueueController;
- (void)setPivotBarStyle:(long long)arg1;
- (void)didReceiveRefreshActionOnCurrentPivotIdentifier:(id)arg1;
- (id)selectedPivotIdentifier;
- (void)showPivotBar;
- (void)hidePivotBar;
- (void)refreshPivotBarWithTriggedByNotification:(_Bool)arg1;
- (id)visibleViewController;
- (void)loadHome;
- (void)prepareHome;
- (void)dismissModalViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2;
- (void)presentModalViewController:(id)arg1 rootModalPresentationStyle:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)refreshTopLevel;
- (void)openAppWithScheme:(id)arg1 fromView:(id)arg2;
- (void)openURL:(id)arg1 fromView:(id)arg2 withCallbackURL:(id)arg3 referringApp:(id)arg4 trackingParams:(id)arg5;
- (void)addNavigationBlock:(CDUnknownBlockType)arg1;
- (_Bool)navigateWithEndpoint:(id)arg1 fromView:(id)arg2 displayTitle:(id)arg3;
- (void)back;
- (void)shutdown;
- (void)load;
- (void)loadForAppLaunchedInBackground;
- (id)application:(id)arg1 viewControllerWithRestorationIdentifierPath:(id)arg2 coder:(id)arg3;
- (void)presentModalWebViewControllerWithEndpoint:(id)arg1;
- (void)presentModalWebViewControllerWithUrl:(id)arg1;
- (void)showSidePanel;
- (void)dismissSearchViewControllers;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
