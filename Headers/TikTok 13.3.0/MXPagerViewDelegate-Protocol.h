//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MXPagerView, UIView;

@protocol MXPagerViewDelegate <NSObject>

@optional
- (void)pagerView:(MXPagerView *)arg1 didUnloadPage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 willUnloadPage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 didLoadPage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 willLoadPage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 didHidePage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 willHidePage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 didShowPage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 willShowPage:(UIView *)arg2;
- (void)pagerView:(MXPagerView *)arg1 didMoveToPageAtIndex:(long long)arg2;
- (void)pagerView:(MXPagerView *)arg1 willMoveToPageAtIndex:(long long)arg2;
@end

