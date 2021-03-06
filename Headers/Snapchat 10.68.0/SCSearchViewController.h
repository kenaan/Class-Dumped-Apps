//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SCPageNameLogging-Protocol.h"
#import "SCSearchContentViewControlling-Protocol.h"
#import "SCSearchInAppNotificationHandling-Protocol.h"
#import "SCSearchNavigationBarDelegate-Protocol.h"
#import "SCSearchNavigationCoordinatorDelegate-Protocol.h"
#import "SCSearchViewDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"
#import "SCUpdateAnnouncing-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSString, SCSearchContainerView, SCSearchContentViewControllerContext, SCSearchNavigationBar, SCSearchNavigationCoordinator, SCUpdateListenerAnnouncer, UIVisualEffectView;

@interface SCSearchViewController : UIViewController <SCSearchInAppNotificationHandling, SCSearchViewDelegate, SCTraceEnabled, SCSearchNavigationCoordinatorDelegate, SCSearchNavigationBarDelegate, UIGestureRecognizerDelegate, SCSearchContentViewControlling, SCUpdateAnnouncing, SCPageNameLogging>
{
    long long _previousStatusBarStyle;
    _Bool _isRotating;
    SCSearchContainerView *_containerView;
    NSArray *_pendingNavigationInfos;
    SCUpdateListenerAnnouncer *_updateAnnouncer;
    SCSearchContentViewControllerContext *_searchContentViewControllerContext;
    SCSearchNavigationCoordinator *_searchNavigationCoordinator;
    UIViewController *_contentViewController;
    long long _backgroundStyle;
    long long _statusBarStyle;
    UIVisualEffectView *_blurView;
}

+ (id)announcerIdentifier;
@property(readonly, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(nonatomic) long long backgroundStyle; // @synthesize backgroundStyle=_backgroundStyle;
@property(retain, nonatomic) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) SCSearchNavigationCoordinator *searchNavigationCoordinator; // @synthesize searchNavigationCoordinator=_searchNavigationCoordinator;
@property(retain, nonatomic) SCSearchContentViewControllerContext *searchContentViewControllerContext; // @synthesize searchContentViewControllerContext=_searchContentViewControllerContext;
- (void).cxx_destruct;
- (void)_updateContainerViewLayoutInsets:(struct UIEdgeInsets)arg1;
- (void)_handleStatusFrameWillChangeWithNotification:(id)arg1;
- (void)_handleStatusBarOrientationDidChangeWithNotification:(id)arg1;
- (void)_handleStatusBarOrientationWillChangeWithNotification:(id)arg1;
- (void)_handleNavigationGesture:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)searchNavigationCoordinator:(id)arg1 didNavigateFromNavigationInfo:(id)arg2 toNavigationInfo:(id)arg3;
- (id)searchViewControllerForSearchNavigationCoordinator:(id)arg1;
- (id)searchNavigationCoordinatorForNavigationBar:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)searchViewDidEndEditing:(id)arg1;
- (void)searchViewClearButtonTapped:(id)arg1 close:(_Bool)arg2;
- (_Bool)searchViewShouldReturn:(id)arg1 withSearchText:(id)arg2;
- (void)searchViewDidBeginEditing:(id)arg1;
- (void)searchView:(id)arg1 didChangeToText:(id)arg2 byChangingCharactersInRange:(struct _NSRange)arg3 replacementString:(id)arg4;
@property(copy, nonatomic) NSArray *navigationInfos;
@property(nonatomic) unsigned long long backButtonDirection;
@property(readonly, nonatomic) SCSearchNavigationBar *navigationBar;
- (_Bool)shouldDisplayStatusBar;
- (id)pageViewName;
- (unsigned long long)preferredScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutomaticallyForwardAppearanceMethods;
- (void)didBecomeActive:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1 navigationStyle:(unsigned long long)arg2 presentingOriginPosition:(long long)arg3;
- (void)removeUpdateListener:(id)arg1;
- (void)addUpdateListener:(id)arg1;
- (void)viewControllerDismissSelf;
- (_Bool)viewControllerPrefersSelfDismiss;
- (_Bool)shouldDismissViewControllerWhenEnterBackground;
- (_Bool)handleInAppNotificationIfNeeded:(id)arg1 notificationDismissed:(_Bool)arg2;
- (_Bool)shouldPopToRootViewControllerLater;
- (_Bool)shouldPopToRootViewController;
- (void)applyRoundedCornerToContainerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

