//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADNView.h"

@class UIView;

@interface GADNSwappableView : GADNView
{
    UIView *_viewToSwap;
    UIView *_snapshotView;
}

- (void).cxx_destruct;
- (void)restoreSwappedView;
- (void)swapViewForImage;
- (void)addSubview:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithViewToSwap:(id)arg1 context:(id)arg2;

@end

