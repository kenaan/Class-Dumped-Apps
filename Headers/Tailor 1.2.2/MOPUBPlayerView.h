//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CAGradientLayer, MOPUBAVPlayer, MOPUBAVPlayerView, MOPUBReplayView, NSString, UIButton, UITapGestureRecognizer, UIView;
@protocol MOPUBPlayerViewDelegate;

@interface MOPUBPlayerView : UIControl
{
    MOPUBAVPlayer *_avPlayer;
    unsigned long long _displayMode;
    NSString *_videoGravity;
    MOPUBAVPlayerView *_avView;
    MOPUBReplayView *_replayView;
    UIButton *_replayVideoButton;
    UIView *_progressBarBackground;
    UIView *_progressBar;
    UIView *_gradientView;
    CAGradientLayer *_gradient;
    UITapGestureRecognizer *_tapGestureRecognizer;
    id <MOPUBPlayerViewDelegate> _delegate;
}

@property(nonatomic) __weak id <MOPUBPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) CAGradientLayer *gradient; // @synthesize gradient=_gradient;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIView *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) UIView *progressBarBackground; // @synthesize progressBarBackground=_progressBarBackground;
@property(retain, nonatomic) UIButton *replayVideoButton; // @synthesize replayVideoButton=_replayVideoButton;
@property(retain, nonatomic) MOPUBReplayView *replayView; // @synthesize replayView=_replayView;
@property(retain, nonatomic) MOPUBAVPlayerView *avView; // @synthesize avView=_avView;
@property(copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property(nonatomic) unsigned long long displayMode; // @synthesize displayMode=_displayMode;
@property(retain, nonatomic) MOPUBAVPlayer *avPlayer; // @synthesize avPlayer=_avPlayer;
- (void).cxx_destruct;
- (void)layoutReplayView;
- (void)layoutGradientview;
- (void)layoutProgressBar;
- (void)layoutSubviews;
- (void)avPlayerTapped;
- (void)setProgressBarVisible:(_Bool)arg1;
- (void)playbackDidFinish;
- (void)playbackTimeDidProgress;
- (void)handleVideoInitFailure;
- (void)createPlayerView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;

@end

