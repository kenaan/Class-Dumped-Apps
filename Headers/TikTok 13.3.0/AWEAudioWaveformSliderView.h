//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAudioWaveformView, AWECountDownBarChartView, UIImageView, UILabel;
@protocol AWEAudioWaveformSliderViewDelegate;

@interface AWEAudioWaveformSliderView : UIView
{
    _Bool _usingBarView;
    id <AWEAudioWaveformSliderViewDelegate> _delegate;
    CDUnknownBlockType _updateMusicBlock;
    double _positionPercent;
    double _maxDuration;
    AWEAudioWaveformView *_waveformView;
    UIView *_nomuiscWaveformView;
    AWECountDownBarChartView *_waveBarView;
    UIImageView *_nomuiscWaveformUpImageView;
    UIImageView *_nomuiscWaveformDownImageView;
    UIImageView *_controlView;
    UIView *_selectedView;
    UILabel *_bottomLeftLabel;
    UILabel *_bottomRightLabel;
    UILabel *_bottomMiddleLabel;
}

@property(retain, nonatomic) UILabel *bottomMiddleLabel; // @synthesize bottomMiddleLabel=_bottomMiddleLabel;
@property(retain, nonatomic) UILabel *bottomRightLabel; // @synthesize bottomRightLabel=_bottomRightLabel;
@property(retain, nonatomic) UILabel *bottomLeftLabel; // @synthesize bottomLeftLabel=_bottomLeftLabel;
@property(retain, nonatomic) UIView *selectedView; // @synthesize selectedView=_selectedView;
@property(retain, nonatomic) UIImageView *controlView; // @synthesize controlView=_controlView;
@property(retain, nonatomic) UIImageView *nomuiscWaveformDownImageView; // @synthesize nomuiscWaveformDownImageView=_nomuiscWaveformDownImageView;
@property(retain, nonatomic) UIImageView *nomuiscWaveformUpImageView; // @synthesize nomuiscWaveformUpImageView=_nomuiscWaveformUpImageView;
@property(retain, nonatomic) AWECountDownBarChartView *waveBarView; // @synthesize waveBarView=_waveBarView;
@property(retain, nonatomic) UIView *nomuiscWaveformView; // @synthesize nomuiscWaveformView=_nomuiscWaveformView;
@property(retain, nonatomic) AWEAudioWaveformView *waveformView; // @synthesize waveformView=_waveformView;
@property(nonatomic) double maxDuration; // @synthesize maxDuration=_maxDuration;
@property(nonatomic) double positionPercent; // @synthesize positionPercent=_positionPercent;
@property(nonatomic) _Bool usingBarView; // @synthesize usingBarView=_usingBarView;
@property(copy, nonatomic) CDUnknownBlockType updateMusicBlock; // @synthesize updateMusicBlock=_updateMusicBlock;
@property(nonatomic) __weak id <AWEAudioWaveformSliderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)moveControlView:(id)arg1 type:(unsigned long long)arg2;
- (void)updateRightLabelWithMaxDuration:(double)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (double)waveBarCountForFullWidth;
- (void)updateMiddleLableWithCenterX:(double)arg1;
- (void)moveControlViewByCodeWithPercent:(double)arg1;
- (void)updateWaveUIWithVolumes:(id)arg1;
- (void)updateUIWithAsset:(id)arg1 choosedStartLocation:(double)arg2 endLocation:(double)arg3;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

