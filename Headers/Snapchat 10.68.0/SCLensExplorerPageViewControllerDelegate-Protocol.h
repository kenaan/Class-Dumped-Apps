//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCLensExplorerPageViewController, UIScrollView;

@protocol SCLensExplorerPageViewControllerDelegate <NSObject>
- (void)pageViewController:(SCLensExplorerPageViewController *)arg1 didEndDragingSelectedScrollView:(UIScrollView *)arg2;
- (void)pageViewController:(SCLensExplorerPageViewController *)arg1 didScrollSelectedScrollView:(UIScrollView *)arg2;
- (void)pageViewController:(SCLensExplorerPageViewController *)arg1 didBeginDragingSelectedScrollView:(UIScrollView *)arg2;
@end

