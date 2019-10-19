//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, YTMNowPlayingView;
@protocol YTMWatchViewProtocol;

@protocol YTMWatchViewDelegate <NSObject>
- (void)nowPlayingViewDidChangeExpansionCoefficient:(YTMNowPlayingView *)arg1;
- (void)nowPlayingViewWillChangeExpansionCoefficient:(YTMNowPlayingView *)arg1;
- (void)watchViewWillCollapse:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidRetry:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidCollapse:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidExpand:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidTapCloseButton:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidDismissPlayer:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewWillDismissPlayer:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchViewDidTapPlayButton:(UIView<YTMWatchViewProtocol> *)arg1;
- (void)watchView:(UIView<YTMWatchViewProtocol> *)arg1 expansionCoefficientDidChange:(double)arg2;
@end
