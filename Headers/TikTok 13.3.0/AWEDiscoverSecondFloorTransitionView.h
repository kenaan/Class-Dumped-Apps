//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEDiscoverSecondFloorTransitionBrandInfoView, CABasicAnimation, CAGradientLayer, NSArray, NSString, UIImageView;

@interface AWEDiscoverSecondFloorTransitionView : UIView
{
    _Bool _enablePositionAnimation;
    _Bool _enableBackgroundAnimation;
    _Bool _enableAlphaAnimation;
    UIView *_closeBtn;
    double _progress;
    UIImageView *_backgroundImageView;
    UIImageView *_leftTopFloatImageView;
    UIImageView *_leftBottomFloatImageView;
    UIImageView *_rightTopFloatImageView;
    UIImageView *_rightBottomFloatImageView;
    AWEDiscoverSecondFloorTransitionBrandInfoView *_brandInfoBackgroundView;
    UIImageView *_goodsBackgroundImageView;
    UIImageView *_goodsImageView;
    CAGradientLayer *_gradientLayer;
    NSString *_resourceURL;
    NSString *_activityId;
    CABasicAnimation *_leftTopAnim;
    CABasicAnimation *_leftBottomAnim;
    CABasicAnimation *_rightTopAnim;
    CABasicAnimation *_rightBottomAnim;
    NSArray *_disposableAnimationViews;
    NSArray *_floatAnimationViews;
    NSArray *_allViews;
}

+ (id)secondFloorTransitionView;
@property(copy, nonatomic) NSArray *allViews; // @synthesize allViews=_allViews;
@property(copy, nonatomic) NSArray *floatAnimationViews; // @synthesize floatAnimationViews=_floatAnimationViews;
@property(copy, nonatomic) NSArray *disposableAnimationViews; // @synthesize disposableAnimationViews=_disposableAnimationViews;
@property(retain, nonatomic) CABasicAnimation *rightBottomAnim; // @synthesize rightBottomAnim=_rightBottomAnim;
@property(retain, nonatomic) CABasicAnimation *rightTopAnim; // @synthesize rightTopAnim=_rightTopAnim;
@property(retain, nonatomic) CABasicAnimation *leftBottomAnim; // @synthesize leftBottomAnim=_leftBottomAnim;
@property(retain, nonatomic) CABasicAnimation *leftTopAnim; // @synthesize leftTopAnim=_leftTopAnim;
@property(copy, nonatomic) NSString *activityId; // @synthesize activityId=_activityId;
@property(copy, nonatomic) NSString *resourceURL; // @synthesize resourceURL=_resourceURL;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIImageView *goodsImageView; // @synthesize goodsImageView=_goodsImageView;
@property(retain, nonatomic) UIImageView *goodsBackgroundImageView; // @synthesize goodsBackgroundImageView=_goodsBackgroundImageView;
@property(retain, nonatomic) AWEDiscoverSecondFloorTransitionBrandInfoView *brandInfoBackgroundView; // @synthesize brandInfoBackgroundView=_brandInfoBackgroundView;
@property(retain, nonatomic) UIImageView *rightBottomFloatImageView; // @synthesize rightBottomFloatImageView=_rightBottomFloatImageView;
@property(retain, nonatomic) UIImageView *rightTopFloatImageView; // @synthesize rightTopFloatImageView=_rightTopFloatImageView;
@property(retain, nonatomic) UIImageView *leftBottomFloatImageView; // @synthesize leftBottomFloatImageView=_leftBottomFloatImageView;
@property(retain, nonatomic) UIImageView *leftTopFloatImageView; // @synthesize leftTopFloatImageView=_leftTopFloatImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool enableAlphaAnimation; // @synthesize enableAlphaAnimation=_enableAlphaAnimation;
@property(nonatomic) _Bool enableBackgroundAnimation; // @synthesize enableBackgroundAnimation=_enableBackgroundAnimation;
@property(nonatomic) _Bool enablePositionAnimation; // @synthesize enablePositionAnimation=_enablePositionAnimation;
@property(retain, nonatomic) UIView *closeBtn; // @synthesize closeBtn=_closeBtn;
- (void).cxx_destruct;
- (void)dismissAnimationWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)dismissWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)showWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addEaseInAnimationInView:(id)arg1;
- (void)resumeAnimation;
- (void)updateAnimationProgress:(double)arg1;
- (void)animationForRandomFloatForView:(id)arg1 offsetY:(double)arg2;
- (void)removeAllAnimations;
- (void)configAnimations;
- (void)layoutSubviews;
- (void)showOrHideGoodsUI:(_Bool)arg1;
- (id)imageWithName:(id)arg1;
- (void)updateBrandInfoWithMaterialsURL:(id)arg1 brandActivityDesc:(id)arg2 gradientStartColor:(id)arg3 gradientEndColor:(id)arg4 activityId:(id)arg5;
- (id)contentImageView;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

