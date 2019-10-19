//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class HTSCameraEffectSlider;
@protocol HTSLiveViewHierarchyProvider, IESLiveEnvironment, IESLiveSettings;

@interface HTSLiveBeautyPickerView : UIView
{
    _Bool _isCombine;
    _Bool _newStyle;
    _Bool _landscape;
    long long _whiteValue;
    long long _smoothValue;
    long long _bigEyeValue;
    long long _cheekValue;
    HTSCameraEffectSlider *_whiteSlider;
    HTSCameraEffectSlider *_smoothSlider;
    HTSCameraEffectSlider *_bigEyeSlider;
    HTSCameraEffectSlider *_cheekSlider;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveSettings> _settings;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;
@property(nonatomic) _Bool newStyle; // @synthesize newStyle=_newStyle;
@property(nonatomic) _Bool isCombine; // @synthesize isCombine=_isCombine;
@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) HTSCameraEffectSlider *cheekSlider; // @synthesize cheekSlider=_cheekSlider;
@property(retain, nonatomic) HTSCameraEffectSlider *bigEyeSlider; // @synthesize bigEyeSlider=_bigEyeSlider;
@property(retain, nonatomic) HTSCameraEffectSlider *smoothSlider; // @synthesize smoothSlider=_smoothSlider;
@property(retain, nonatomic) HTSCameraEffectSlider *whiteSlider; // @synthesize whiteSlider=_whiteSlider;
@property(nonatomic) long long cheekValue; // @synthesize cheekValue=_cheekValue;
@property(nonatomic) long long bigEyeValue; // @synthesize bigEyeValue=_bigEyeValue;
@property(nonatomic) long long smoothValue; // @synthesize smoothValue=_smoothValue;
@property(nonatomic) long long whiteValue; // @synthesize whiteValue=_whiteValue;
- (void).cxx_destruct;
- (void)setCheek:(long long)arg1;
- (void)setBigEye:(long long)arg1;
- (void)setSmooth:(long long)arg1;
- (void)setWhite:(long long)arg1;
- (void)addPickerView;
- (id)getBeautyAttributeLabelAdjustInfoInVerticalMode;
- (void)addTitleLabel;
- (void)addContailerView;
- (id)initWithFrame:(struct CGRect)arg1 isLive:(_Bool)arg2 isCombine:(_Bool)arg3 isLandscape:(_Bool)arg4;

@end

