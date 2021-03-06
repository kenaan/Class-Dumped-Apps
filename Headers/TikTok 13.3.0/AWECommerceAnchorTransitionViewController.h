//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

#import "AWECommerceAnchorTransitionProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString, UIPanGestureRecognizer, UIPercentDrivenInteractiveTransition;

@interface AWECommerceAnchorTransitionViewController : UINavigationController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, AWECommerceAnchorTransitionProtocol>
{
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    UIPanGestureRecognizer *_transactionPanGesture;
}

@property(retain, nonatomic) UIPanGestureRecognizer *transactionPanGesture; // @synthesize transactionPanGesture=_transactionPanGesture;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition *interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)maskColor;
- (_Bool)needInteractiveTransition;
- (double)delayInTransition;
- (double)offsetYInTransition;
- (id)animationViewInTransition;
- (void)handleTransitionGesture:(id)arg1;
- (void)commonInit;
- (void)viewDidLoad;
- (id)initWithCoder:(id)arg1;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

