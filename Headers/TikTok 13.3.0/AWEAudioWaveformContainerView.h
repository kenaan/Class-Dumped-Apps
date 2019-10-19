//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVAsset, AWEAudioWaveformSliderView, AWEDelayRecordCoverView, CAShapeLayer, UIButton, UILabel;

@interface AWEAudioWaveformContainerView : UIView
{
    _Bool _usingBarView;
    CDUnknownBlockType _updateMusicBlock;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UILabel *_titleLabel;
    AWEAudioWaveformSliderView *_waveformSliderView;
    AWEDelayRecordCoverView *_coverView;
    CAShapeLayer *_backgroundLayer;
    AVAsset *_asset;
    double _assetStartLocation;
    double _assetEndLocation;
}

@property(nonatomic) double assetEndLocation; // @synthesize assetEndLocation=_assetEndLocation;
@property(nonatomic) double assetStartLocation; // @synthesize assetStartLocation=_assetStartLocation;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property(retain, nonatomic) CAShapeLayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(retain, nonatomic) AWEDelayRecordCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) AWEAudioWaveformSliderView *waveformSliderView; // @synthesize waveformSliderView=_waveformSliderView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) _Bool usingBarView; // @synthesize usingBarView=_usingBarView;
@property(copy, nonatomic) CDUnknownBlockType updateMusicBlock; // @synthesize updateMusicBlock=_updateMusicBlock;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateButtonLayout;
- (void)setSelectedButtonWithDelayMode:(long long)arg1;
- (double)recommendHeight;
- (id)maskLayerWithButtonBounds:(struct CGRect)arg1 direction:(long long)arg2;
- (void)setDelegateForSliderView:(id)arg1;
- (double)toBePlayedLocation;
- (void)updateToBePlayedLocation:(double)arg1;
- (void)updateBottomRightLableWithMaxDuration:(double)arg1;
- (void)updatePlayingLocation:(double)arg1;
- (void)updateHasRecordedLocation:(double)arg1;
- (void)updateWaveBarWithVolumes:(id)arg1;
- (void)updateUIWithAsset:(id)arg1 choosedStartLocation:(double)arg2 endLocation:(double)arg3;
- (double)waveBarCountForFullWidth;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

