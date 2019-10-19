//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MXScrollViewDelegateForwarder, NSMutableArray, NSString;
@protocol MXScrollViewDelegate;

@interface MXScrollView : UIScrollView <UIGestureRecognizerDelegate>
{
    _Bool _isObserving;
    _Bool _lock;
    _Bool _bounces;
    id <MXScrollViewDelegate> _delegate;
    MXScrollViewDelegateForwarder *_delegateForwarder;
    NSMutableArray *_observedViews;
}

@property(retain, nonatomic) NSMutableArray *observedViews; // @synthesize observedViews=_observedViews;
@property(retain, nonatomic) MXScrollViewDelegateForwarder *delegateForwarder; // @synthesize delegateForwarder=_delegateForwarder;
- (void)setBounces:(_Bool)arg1;
- (_Bool)bounces;
- (void).cxx_destruct;
- (void)endOfScroll;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)dealloc;
- (void)scrollView:(id)arg1 setContentOffset:(struct CGPoint)arg2;
- (void)removeObservedViews;
- (void)addObservedView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserverFromView:(id)arg1;
- (void)addObserverToView:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <MXScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)initialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

