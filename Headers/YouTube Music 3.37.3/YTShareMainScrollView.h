//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSString;
@protocol YTShareMainScrollViewDelegate;

@interface YTShareMainScrollView : UIScrollView <UIScrollViewDelegate>
{
    double _previousScrollViewContentOffsetY;
    long long _scrollViewScrollDirection;
    _Bool _reportedRestingPosition;
    id <YTShareMainScrollViewDelegate> _shareMainScrollViewDelegate;
}

@property(nonatomic) __weak id <YTShareMainScrollViewDelegate> shareMainScrollViewDelegate; // @synthesize shareMainScrollViewDelegate=_shareMainScrollViewDelegate;
- (void).cxx_destruct;
- (double)maxScrollOffsetForScrollView;
- (_Bool)scrollViewInRestingPosition;
- (_Bool)partiallyOpen;
- (double)partiallyOpenOffset;
- (_Bool)fullyOpen;
- (double)fullyOpenOffset;
- (double)nextRestingPositionInScrollDirection;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
