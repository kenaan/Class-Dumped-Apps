//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class FBAdArrowIconView, FBInterstitialAdTextView, FBNativeAdDataModel, UIButton, UIImageView, UIVisualEffectView;

@interface FBAdAppInstallCoverView : UIView
{
    FBNativeAdDataModel *_dataModel;
    CDUnknownBlockType _onTap;
    UIImageView *_iconView;
    UIImageView *_backgroundImageView;
    FBInterstitialAdTextView *_textContainerView;
    UIButton *_ctaButton;
    UIButton *_coverButton;
    UIVisualEffectView *_blurEffectView;
    FBAdArrowIconView *_arrowIconView;
}

@property(nonatomic) __weak FBAdArrowIconView *arrowIconView; // @synthesize arrowIconView=_arrowIconView;
@property(nonatomic) __weak UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(nonatomic) __weak UIButton *coverButton; // @synthesize coverButton=_coverButton;
@property(nonatomic) __weak UIButton *ctaButton; // @synthesize ctaButton=_ctaButton;
@property(retain, nonatomic) FBInterstitialAdTextView *textContainerView; // @synthesize textContainerView=_textContainerView;
@property(nonatomic) __weak UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(nonatomic) __weak UIImageView *iconView; // @synthesize iconView=_iconView;
@property(copy, nonatomic) CDUnknownBlockType onTap; // @synthesize onTap=_onTap;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
- (void).cxx_destruct;
- (void)handleTap:(id)arg1 event:(id)arg2;
- (void)layoutSubviews;
- (void)increaseYOfssetOfView:(id)arg1 by:(double)arg2;
- (void)hideImageOverlay;

@end

