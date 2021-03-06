//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString, NSTimer, UIView, YTLightweightSwipeButtonsView;
@protocol YTLightweightSwipeContentScrollViewDelegate;

@interface YTLightweightSwipeContentScrollView : UIScrollView <UIScrollViewDelegate>
{
    UIView *_backgroundOverlay;
    NSTimer *_hintTimer;
    CDUnknownBlockType _repetitionBlock;
    YTLightweightSwipeButtonsView *_swipeButtonsView;
    id <YTLightweightSwipeContentScrollViewDelegate> _swipeDelegate;
}

@property(nonatomic) __weak id <YTLightweightSwipeContentScrollViewDelegate> swipeDelegate; // @synthesize swipeDelegate=_swipeDelegate;
@property(nonatomic) __weak YTLightweightSwipeButtonsView *swipeButtonsView; // @synthesize swipeButtonsView=_swipeButtonsView;
- (void).cxx_destruct;
- (void)showHint;
- (double)direction;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)cancelHintAnimation;
- (void)startHintAnimationWithRepetitionCheck:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) _Bool isHintActive;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

