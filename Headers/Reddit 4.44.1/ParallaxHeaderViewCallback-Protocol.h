//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ParallaxHeaderView;

@protocol ParallaxHeaderViewCallback <NSObject>
- (void)parallaxHeaderViewDidChangeHeight:(ParallaxHeaderView *)arg1 heightDelta:(double)arg2;
- (void)parallaxHeaderviewDidTapNotificationButton:(ParallaxHeaderView *)arg1;
- (void)parallaxHeaderViewDidTapFollowButton:(ParallaxHeaderView *)arg1;
- (void)parallaxHeaderViewDidBecomeHidden:(ParallaxHeaderView *)arg1;
- (void)parallaxHeaderViewDidBecomeVisible:(ParallaxHeaderView *)arg1;

@optional
- (void)parallaxHeaderViewDidTapLayersCanvas:(ParallaxHeaderView *)arg1;
- (void)parallaxHeaderViewDidUpdateBackground:(ParallaxHeaderView *)arg1;
- (void)parallaxHeaderViewDidTapEditButton:(ParallaxHeaderView *)arg1;
- (void)parallaxHeaderViewDidTapTitleLabel:(ParallaxHeaderView *)arg1;
@end

