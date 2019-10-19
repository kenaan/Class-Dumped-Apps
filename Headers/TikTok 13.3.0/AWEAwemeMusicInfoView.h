//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, NSString, UIImageView, UILabel;

@interface AWEAwemeMusicInfoView : UIView
{
    _Bool _isOriginal;
    UILabel *_originalFlagLabel;
    UIView *_containerView;
    UIView *_loopContainerView;
    UIView *_musicContainerView;
    CAGradientLayer *_gradientLayer;
    UIImageView *_musicLogoView;
    NSString *_musicLoopString;
    double _containerViewWidth;
    double _containerViewHeight;
    double _subviewWidth;
    long long _subviewCount;
}

@property(nonatomic) long long subviewCount; // @synthesize subviewCount=_subviewCount;
@property(nonatomic) double subviewWidth; // @synthesize subviewWidth=_subviewWidth;
@property(nonatomic) double containerViewHeight; // @synthesize containerViewHeight=_containerViewHeight;
@property(nonatomic) double containerViewWidth; // @synthesize containerViewWidth=_containerViewWidth;
@property(nonatomic) _Bool isOriginal; // @synthesize isOriginal=_isOriginal;
@property(copy, nonatomic) NSString *musicLoopString; // @synthesize musicLoopString=_musicLoopString;
@property(retain, nonatomic) UIImageView *musicLogoView; // @synthesize musicLogoView=_musicLogoView;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIView *musicContainerView; // @synthesize musicContainerView=_musicContainerView;
@property(retain, nonatomic) UIView *loopContainerView; // @synthesize loopContainerView=_loopContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) UILabel *originalFlagLabel; // @synthesize originalFlagLabel=_originalFlagLabel;
- (void).cxx_destruct;
- (double)widthWithLabelString:(id)arg1;
- (id)subviewItemWithLabelString:(id)arg1;
- (void)stopAnimation;
- (void)resumeAnimation;
- (void)pauseAnimation;
- (void)startAnimation;
- (void)addViewTapTarget:(id)arg1 action:(SEL)arg2;
- (void)configRollingAnimationWithLabelString:(id)arg1 isOriginal:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

