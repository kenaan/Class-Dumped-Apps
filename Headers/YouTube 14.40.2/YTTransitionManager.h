//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerTransitioningDelegate.h"

@class NSString, UIPercentDrivenInteractiveTransition<UIViewControllerAnimatedTransitioning><YTBaseAnimatorStatus>;

@interface YTTransitionManager : NSObject <UIViewControllerTransitioningDelegate>
{
    struct UIPercentDrivenInteractiveTransition *_dismissAnimation;
    struct UIPercentDrivenInteractiveTransition *_presentAnimation;
    id <YTBaseInteractionProtocol> _presentInteraction;
    id <YTBaseInteractionProtocol> _dismissInteraction;
}

@property(retain, nonatomic) id <YTBaseInteractionProtocol> dismissInteraction; // @synthesize dismissInteraction=_dismissInteraction;
@property(retain, nonatomic) id <YTBaseInteractionProtocol> presentInteraction; // @synthesize presentInteraction=_presentInteraction;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition<UIViewControllerAnimatedTransitioning><YTBaseAnimatorStatus> *presentAnimation; // @synthesize presentAnimation=_presentAnimation;
@property(retain, nonatomic) UIPercentDrivenInteractiveTransition<UIViewControllerAnimatedTransitioning><YTBaseAnimatorStatus> *dismissAnimation; // @synthesize dismissAnimation=_dismissAnimation;
- (void).cxx_destruct;
- (void)clearTransitions;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

