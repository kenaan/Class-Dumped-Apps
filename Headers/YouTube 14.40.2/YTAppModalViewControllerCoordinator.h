//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface YTAppModalViewControllerCoordinator : NSObject
{
    _Bool _transitionInProgress;
    NSMutableArray *_queue;
    id <YTAppModalViewControllerCoordinatorDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <YTAppModalViewControllerCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool transitionInProgress; // @synthesize transitionInProgress=_transitionInProgress;
@property(retain, nonatomic) NSMutableArray *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (_Bool)isPresentedModalViewController:(id)arg1;
- (void)performNextQueuedTransition;
- (CDUnknownBlockType)completionWrapperWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentModalViewControllerWithQueueItem:(id)arg1;
- (void)dispatchDismissModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewControllerWithQueueItem:(id)arg1;
- (void)dismissAllModalViewControllersFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dismissModalViewControllerFromViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentModalViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithDelegate:(id)arg1;

@end

