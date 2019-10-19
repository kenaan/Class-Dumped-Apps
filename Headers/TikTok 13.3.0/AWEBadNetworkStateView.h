//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, YYAnimatedImageView;

@interface AWEBadNetworkStateView : UIView
{
    _Bool _hasSetup;
    YYAnimatedImageView *_wifiImageView;
    UIButton *_retryButton;
    UIButton *_solutionButton;
}

@property(nonatomic) _Bool hasSetup; // @synthesize hasSetup=_hasSetup;
@property(retain, nonatomic) UIButton *solutionButton; // @synthesize solutionButton=_solutionButton;
@property(retain, nonatomic) UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(retain, nonatomic) YYAnimatedImageView *wifiImageView; // @synthesize wifiImageView=_wifiImageView;
- (void).cxx_destruct;
- (void)showSolution;
- (void)stopAnimation;
- (void)startAnimation;
- (void)_toggleAnimation;
- (void)_startAnimation;
- (void)layoutSubviews;
- (void)setupIfNeed;
- (id)init;
- (void)dealloc;

@end

