//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIView, UIViewController;
@protocol AWEStoryCubeDismissControllerProtocol, AWEStoryCubeTransitionAnimatorCoordinator, UIViewControllerContextTransitioning;

@interface AWEStoryCubeInteractiveController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _isInteractive;
    _Bool _isInInteractiveDismiss;
    UIPanGestureRecognizer *_panGesture;
    id <UIViewControllerContextTransitioning> _transitionContext;
    UIViewController<AWEStoryCubeDismissControllerProtocol> *_viewController;
    id <AWEStoryCubeTransitionAnimatorCoordinator> _coordinator;
    UIView *_fromViewSnapshot;
    UIView *_fromView;
    UIView *_dimmingView;
    UIView *_avatarView;
}

@property(nonatomic) _Bool isInInteractiveDismiss; // @synthesize isInInteractiveDismiss=_isInInteractiveDismiss;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
@property(retain, nonatomic) UIView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIView *fromView; // @synthesize fromView=_fromView;
@property(retain, nonatomic) UIView *fromViewSnapshot; // @synthesize fromViewSnapshot=_fromViewSnapshot;
@property(nonatomic) __weak id <AWEStoryCubeTransitionAnimatorCoordinator> coordinator; // @synthesize coordinator=_coordinator;
@property(nonatomic) __weak UIViewController<AWEStoryCubeDismissControllerProtocol> *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)noninteractiveDismiss;
- (void)wireToViewController:(id)arg1 coordinator:(id)arg2;
- (void)handlePanGesture:(id)arg1;
- (void)finishInteractiveTransition;
- (void)cancelInteractiveTransition;
- (void)updateInteractiveTransition:(double)arg1;
- (void)startInteractiveTransition:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

