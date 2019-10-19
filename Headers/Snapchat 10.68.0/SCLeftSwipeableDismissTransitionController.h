//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPercentDrivenInteractiveTransition.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString, SCLazy, UIPanGestureRecognizer;
@protocol SCLeftSwipeableDismissTransitionControllerDelegate, SCModalPresentation;

@interface SCLeftSwipeableDismissTransitionController : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning>
{
    SCLazy *_panGestureRecognizer;
    struct CGPoint _panStartingPoint;
    _Bool _isInteractive;
    _Bool _shouldBlurBackground;
    _Bool _disableSwipeUnlessPortraitMode;
    id <SCLeftSwipeableDismissTransitionControllerDelegate> _delegate;
    id <SCModalPresentation> _modalPresentationDelegate;
    unsigned long long _transitionOriginalPosition;
}

@property(nonatomic) unsigned long long transitionOriginalPosition; // @synthesize transitionOriginalPosition=_transitionOriginalPosition;
@property(nonatomic) _Bool disableSwipeUnlessPortraitMode; // @synthesize disableSwipeUnlessPortraitMode=_disableSwipeUnlessPortraitMode;
@property(nonatomic) __weak id <SCModalPresentation> modalPresentationDelegate; // @synthesize modalPresentationDelegate=_modalPresentationDelegate;
@property(nonatomic) __weak id <SCLeftSwipeableDismissTransitionControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldBlurBackground; // @synthesize shouldBlurBackground=_shouldBlurBackground;
@property(nonatomic) _Bool isInteractive; // @synthesize isInteractive=_isInteractive;
- (void).cxx_destruct;
- (void)_handlePanGesture:(id)arg1;
- (id)_createPanGestureRecognizer;
- (double)completionSpeed;
- (void)animateTransition:(id)arg1;
- (double)transitionDuration:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)resetPanState;
@property(readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
