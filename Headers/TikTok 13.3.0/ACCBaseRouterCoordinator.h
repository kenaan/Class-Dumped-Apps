//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCRouterCoordinatorProtocol-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIViewController;
@protocol ACCRouteViewControllerProtocol, UIViewControllerAnimatedTransitioning;

@interface ACCBaseRouterCoordinator : NSObject <UINavigationControllerDelegate, UIViewControllerTransitioningDelegate, ACCRouterCoordinatorProtocol>
{
    UIViewController *_sourceViewController;
    id _targetViewControllerInputData;
    unsigned long long _routeType;
    UIViewController<ACCRouteViewControllerProtocol> *_targetViewController;
    id <UIViewControllerAnimatedTransitioning> _transitionAnimator;
}

+ (id)coordinatorWithSourceViewController:(id)arg1 targetViewControllerProtocol:(id)arg2 targetViewControllerInputData:(id)arg3 routeType:(unsigned long long)arg4 transitionAnimator:(id)arg5;
+ (id)coordinatorWithSourceViewController:(id)arg1 targetViewControllerProtocol:(id)arg2 targetViewControllerInputData:(id)arg3 routeType:(unsigned long long)arg4;
@property(retain, nonatomic) id <UIViewControllerAnimatedTransitioning> transitionAnimator; // @synthesize transitionAnimator=_transitionAnimator;
@property(retain, nonatomic) UIViewController<ACCRouteViewControllerProtocol> *targetViewController; // @synthesize targetViewController=_targetViewController;
@property(nonatomic) unsigned long long routeType; // @synthesize routeType=_routeType;
@property(retain, nonatomic) id targetViewControllerInputData; // @synthesize targetViewControllerInputData=_targetViewControllerInputData;
@property(nonatomic) __weak UIViewController *sourceViewController; // @synthesize sourceViewController=_sourceViewController;
- (void).cxx_destruct;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)routeWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSourceViewController:(id)arg1 targetViewControllerInputData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

