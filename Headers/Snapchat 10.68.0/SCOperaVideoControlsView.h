//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol SCOperaVideoViewControllingDataSource, SCOperaVideoViewControllingDelegate;

@interface SCOperaVideoControlsView : UIView
{
    _Bool _allowsTapToSeek;
    id <SCOperaVideoViewControllingDelegate> _videoControllingDelegate;
    id <SCOperaVideoViewControllingDataSource> _dataSource;
}

@property(nonatomic) _Bool allowsTapToSeek; // @synthesize allowsTapToSeek=_allowsTapToSeek;
@property(nonatomic) __weak id <SCOperaVideoViewControllingDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <SCOperaVideoViewControllingDelegate> videoControllingDelegate; // @synthesize videoControllingDelegate=_videoControllingDelegate;
- (void).cxx_destruct;
- (_Bool)controlsVisible;
- (void)resetControls;
- (void)showControls;
- (void)fadeControls;
- (void)setAdBreakTimes:(id)arg1;
- (void)setSeekableDuration:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)adjustForTime:(double)arg1;
- (void)setSeekableRangeVisible:(_Bool)arg1;
- (void)setRotateButtonVisible:(_Bool)arg1;
- (void)setSendButtonVisible:(_Bool)arg1;
- (void)toggleAudioButton:(_Bool)arg1;
- (void)toggleCaptionButton:(_Bool)arg1;
- (void)togglePlayButton:(_Bool)arg1;
- (void)toggleRotateLeftButton:(_Bool)arg1;
- (void)updateElapsedTimeRightPadding:(double)arg1 animated:(_Bool)arg2;

@end

