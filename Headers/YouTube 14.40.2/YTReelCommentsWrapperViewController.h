//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UIGestureRecognizerDelegate.h"
#import "UIViewControllerTransitioningDelegate.h"
#import "YTTopController.h"

@class NSString, UIPercentDrivenInteractiveTransition, UIViewController<YTReelCommentsWrappedViewController>, YTReelCommentsWrapperTransitionCoordinator;

@interface YTReelCommentsWrapperViewController : UIViewController <UIViewControllerTransitioningDelegate, UIGestureRecognizerDelegate, YTTopController>
{
    UIViewController<YTReelCommentsWrappedViewController> *_wrappedViewController;
    YTReelCommentsWrapperTransitionCoordinator *_transitionCoordinator;
    UIPercentDrivenInteractiveTransition *_interactiveTransition;
    _Bool _shouldFinish;
    double _additionalFrameHeight;
    id <YTResponder> _parentResponder;
    CDUnknownBlockType _didDismissBlock;
    double _cornerRadius;
}

@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(copy, nonatomic) CDUnknownBlockType didDismissBlock; // @synthesize didDismissBlock=_didDismissBlock;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)shouldFinishTransitionForGesture:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (void)updateRoundedCorners;
- (void)dismiss;
- (struct CGRect)wrapperViewControllerFrame;
- (void)layoutWrapperViewController;
- (void)viewWillLayoutSubviews;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithTargetViewController:(id)arg1 parentResponder:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

