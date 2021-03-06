//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class CADisplayLink, NSString, UILongPressGestureRecognizer;
@protocol SCOperaScrollViewDelegate;

@interface SCOperaScrollView : UIScrollView <UIScrollViewDelegate, UIGestureRecognizerDelegate>
{
    unsigned long long _currentScrollDirection;
    struct CGPoint _previousOffset;
    struct CGPoint _offsetBeforeScrolling;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    struct CGPoint _startTappingLocation;
    CADisplayLink *_scrollDisplayLink;
    _Bool _ignoreTableViewGestures;
    _Bool _eagerSwipeEnabled;
    id <SCOperaScrollViewDelegate> _operaScrollViewDelegate;
    double _eagerSwipeDistanceThreshold;
    double _eagerSwipeVelocityThreshold;
    double _liveAreaRatioXInset;
    double _liveAreaRatioYInset;
    struct CGPoint _targetContentOffset;
}

@property(nonatomic) double liveAreaRatioYInset; // @synthesize liveAreaRatioYInset=_liveAreaRatioYInset;
@property(nonatomic) double liveAreaRatioXInset; // @synthesize liveAreaRatioXInset=_liveAreaRatioXInset;
@property(nonatomic) double eagerSwipeVelocityThreshold; // @synthesize eagerSwipeVelocityThreshold=_eagerSwipeVelocityThreshold;
@property(nonatomic) double eagerSwipeDistanceThreshold; // @synthesize eagerSwipeDistanceThreshold=_eagerSwipeDistanceThreshold;
@property(nonatomic) _Bool eagerSwipeEnabled; // @synthesize eagerSwipeEnabled=_eagerSwipeEnabled;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) _Bool ignoreTableViewGestures; // @synthesize ignoreTableViewGestures=_ignoreTableViewGestures;
@property(nonatomic) __weak id <SCOperaScrollViewDelegate> operaScrollViewDelegate; // @synthesize operaScrollViewDelegate=_operaScrollViewDelegate;
- (void).cxx_destruct;
- (id)gestureDescription;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_checkForEagerSwipeUpOnPan:(id)arg1;
- (void)disableEagerSwipeDetection;
- (void)enableEagerSwipeUpWithDistanceThreshold:(double)arg1 velocityThreshold:(double)arg2;
- (void)setSwipeLiveAreaWithRatioXInset:(double)arg1 ratioYInset:(double)arg2;
- (_Bool)_isLongPressGestureValid;
- (void)_cancelLongPressIfNecessary;
- (void)didLongPress:(id)arg1;
- (void)resetGestureIfNecessary;
- (void)stopRecognizingGestures;
- (_Bool)_isScrollingDiagonally;
- (void)subviewScrollViewIsAtTopBoundary:(_Bool)arg1 isVisible:(_Bool)arg2;
- (void)subviewScrollViewDidStartScrolling;
- (void)subviewScrollViewDidStopScrollingWithBoundaryHit:(_Bool)arg1;
- (void)_scrollViewDidEndScrolling;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)didTap:(id)arg1;
- (_Bool)isScrolling;
- (void)_scrollViewDidScrollForAnimation;
- (void)setContentOffset:(struct CGPoint)arg1 animationDuration:(double)arg2;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(_Bool)arg2;
- (void)setContentOffsetWithoutCallback:(struct CGPoint)arg1;
- (void)_setupLongPressGesture;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

