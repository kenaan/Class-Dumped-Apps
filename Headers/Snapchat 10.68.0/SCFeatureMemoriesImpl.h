//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureMemories-Protocol.h"
#import "SCSwipeTransitionCoordinatorDelegate-Protocol.h"

@class MainViewController, NSMutableSet, NSString, SCActionToolbarButtonItem, SCCameraOverlayView, SCCameraToGallerySwipeTransitionCoordinator, SCGalleryViewController, SCHovaTabBarMemoriesItem, SCNavigationBarButtonItem, SCTabBarMemoriesItemStatusController, SCUserSession;
@protocol SCFeatureMemoriesDelegate, SCSwipeViewParentDelegate;

@interface SCFeatureMemoriesImpl : SCFeature <SCSwipeTransitionCoordinatorDelegate, SCFeatureMemories>
{
    SCCameraToGallerySwipeTransitionCoordinator *_galleryTransitionCoordinator;
    id <SCFeatureMemoriesDelegate> _delegate;
    id <SCSwipeViewParentDelegate> _parentDelegate;
    SCNavigationBarButtonItem *_memoriesNavigationItem;
    SCHovaTabBarMemoriesItem *_memoriesTabItem;
    long long _cameraViewType;
    SCActionToolbarButtonItem *_toolbarButtonItem;
    NSMutableSet *_scrollLocks;
    MainViewController *_mainViewController;
    SCUserSession *_userSession;
    SCTabBarMemoriesItemStatusController *_memoriesItemStatusController;
    SCCameraOverlayView *_cameraOverlayView;
}

@property(nonatomic) __weak SCCameraOverlayView *cameraOverlayView; // @synthesize cameraOverlayView=_cameraOverlayView;
@property(retain, nonatomic) SCTabBarMemoriesItemStatusController *memoriesItemStatusController; // @synthesize memoriesItemStatusController=_memoriesItemStatusController;
@property(retain, nonatomic) SCUserSession *userSession; // @synthesize userSession=_userSession;
@property(nonatomic) __weak MainViewController *mainViewController; // @synthesize mainViewController=_mainViewController;
@property(retain, nonatomic) NSMutableSet *scrollLocks; // @synthesize scrollLocks=_scrollLocks;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
@property(nonatomic) __weak id <SCSwipeViewParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property(nonatomic) __weak id <SCFeatureMemoriesDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) SCCameraToGallerySwipeTransitionCoordinator *galleryTransitionCoordinator; // @synthesize galleryTransitionCoordinator=_galleryTransitionCoordinator;
- (void).cxx_destruct;
- (void)_memoriesButtonPressed;
- (void)transitionCoordinator:(id)arg1 willFailWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 didFinishWithTransitionType:(unsigned long long)arg2 success:(_Bool)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (void)transitionCoordinator:(id)arg1 didBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (void)transitionCoordinator:(id)arg1 willBeginWithTransitionType:(unsigned long long)arg2 viewController:(id)arg3;
- (_Bool)transitionCoordinator:(id)arg1 shouldBeginTransitionType:(unsigned long long)arg2 gestureRecognizer:(id)arg3 interactive:(_Bool)arg4 viewController:(id)arg5;
- (void)delayBackgroundScanForSpectaclesPairingDismissed;
- (void)warmupSpectaclesOnboardingWithPairingSessionInfo:(id)arg1;
- (void)scrollToGallerySpectaclesWithPairingSessionInfo:(id)arg1;
- (id)profileCoordinator;
- (void)scrollToCameraFromGalleryAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)unlockScrollWithKey:(id)arg1;
- (void)lockScrollWithKey:(id)arg1;
- (void)configureWithView:(id)arg1;
- (_Bool)isGalleryViewCameraButtonVisible;
- (_Bool)lagunaTabViewVisible;
- (_Bool)galleryViewVisible;
- (void)scrollGalleryToSavedTabWithSnapId:(id)arg1;
- (void)scrollGalleryToFeaturedTab;
- (void)scrollGalleryToLagunaTab;
- (void)scrollToCameraAnimated:(_Bool)arg1 reason:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scrollToGalleryFromCameraAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) SCActionToolbarButtonItem *toolbarButtonItem; // @synthesize toolbarButtonItem=_toolbarButtonItem;
@property(readonly, nonatomic) SCHovaTabBarMemoriesItem *memoriesTabItem; // @synthesize memoriesTabItem=_memoriesTabItem;
@property(readonly, nonatomic) SCNavigationBarButtonItem *memoriesNavigationItem; // @synthesize memoriesNavigationItem=_memoriesNavigationItem;
@property(readonly, nonatomic) SCGalleryViewController *galleryViewController;
- (void)updateNavigationItem;
- (void)setGalleryButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setMemoriesButtonHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dismiss:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeAllScrollLocks;
- (void)unlockAllScrollWithKey:(id)arg1;
- (void)lockAllScrollWithKey:(id)arg1;
- (void)setPressingCameraButton:(_Bool)arg1;
- (void)observeLagunaAppStatusChanges;
- (void)setTransitioningToMemories;
- (double)percentVisible;
- (double)percentPresented;
- (_Bool)isPresenting;
@property(readonly, nonatomic) _Bool isTransitioning;
- (void)initMemoriesIfNecessary;
- (id)initWithUserSession:(id)arg1 mainViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
