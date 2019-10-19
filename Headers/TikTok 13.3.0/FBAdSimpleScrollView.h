//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdScrollView-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIScrollView;
@protocol FBAdScrollViewDelegate;

@interface FBAdSimpleScrollView : UIView <UIScrollViewDelegate, FBAdScrollView>
{
    CDUnknownBlockType _childViewProvider;
    NSArray *_data;
    id <FBAdScrollViewDelegate> _delegate;
    unsigned long long _maximumNativeAdCount;
    double _xInset;
    double _xPadding;
    double _yPadding;
    NSMutableArray *_pages;
    UIScrollView *_scrollView;
}

@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) NSMutableArray *pages; // @synthesize pages=_pages;
@property(nonatomic) double yPadding; // @synthesize yPadding=_yPadding;
@property(nonatomic) double xPadding; // @synthesize xPadding=_xPadding;
@property(nonatomic) double xInset; // @synthesize xInset=_xInset;
@property(readonly, nonatomic) unsigned long long maximumNativeAdCount; // @synthesize maximumNativeAdCount=_maximumNativeAdCount;
@property(nonatomic) __weak id <FBAdScrollViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSArray *data; // @synthesize data=_data;
@property(copy, nonatomic) CDUnknownBlockType childViewProvider; // @synthesize childViewProvider=_childViewProvider;
- (void).cxx_destruct;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (_Bool)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndZooming:(id)arg1 withView:(id)arg2 atScale:(double)arg3;
- (void)scrollViewWillBeginZooming:(id)arg1 withView:(id)arg2;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGPoint)paginatedOffsetForOffset:(struct CGPoint)arg1 scrollView:(id)arg2 xPadding:(double)arg3 pageFrameWidth:(double)arg4 pageCount:(long long)arg5;
- (double)pageFrameWidth;
- (void)layoutPages;
- (id)pageForPosition:(long long)arg1 withData:(id)arg2;
- (void)loadPages;
- (void)removePages;
- (void)layoutSubviews;
- (void)updateView:(_Bool)arg1;
- (void)commonInitialization;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

