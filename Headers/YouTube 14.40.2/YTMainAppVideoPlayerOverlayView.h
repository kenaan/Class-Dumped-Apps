//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"
#import "YTMainAppControlsOverlayViewDelegate.h"
#import "YTPlayerViewLayoutProtocol.h"
#import "YTResponder.h"
#import "YTVideoPlayerOverlayGestureRecognizerDelegate.h"

@class GIMMe, MDCActivityIndicator, NSString, UIImageView, UITapGestureRecognizer, UIView<YTCaptionViewProtocol>, UIView<YTInfoCardTeaserViewProtocol>, YTAutonavPreviewView, YTErrorPlayerOverlayView, YTLabel, YTMainAppControlsOverlayView, YTNoSoundMemoView, YTOverflowMenuView, YTTimedAction;

@interface YTMainAppVideoPlayerOverlayView : UIView <YTMainAppControlsOverlayViewDelegate, UIGestureRecognizerDelegate, YTPlayerViewLayoutProtocol, YTResponder, YTVideoPlayerOverlayGestureRecognizerDelegate>
{
    int _playerViewLayout;
    id <YTVideoPlayerOverlayConfig> _videoPlayerOverlayConfig;
    _Bool _expansionCoefficient;
    UITapGestureRecognizer *_spinnerTapRecognizer;
    _Bool _captionsVisible;
    UIImageView *_placeholderImageView;
    double _errorImageViewAspectRatio;
    YTNoSoundMemoView *_noSoundMemoView;
    YTErrorPlayerOverlayView *_errorPlayerOverlayView;
    YTTimedAction *_spinnerDelayTimer;
    _Bool _autonavPreviewEnabled;
    _Bool _infoCardButtonVisible;
    _Bool _isAnimatingInfoCardToNotVisible;
    NSString *_remoteScreenName;
    NSString *_externalPlaybackLabelText;
    _Bool _isBeingDismissed;
    _Bool _nerdStatsVisible;
    _Bool _playerControlsHidden;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
    YTMainAppControlsOverlayView *_controlsOverlayView;
    YTOverflowMenuView *_overflowMenuView;
    UIView<YTCaptionViewProtocol> *_captionOverlayView;
    UIView *_paidContentView;
    UIView *_nerdStatsOverlayView;
    YTAutonavPreviewView *_autonavPreviewView;
    UIView<YTInfoCardTeaserViewProtocol> *_teaserContainerView;
    UIView *_drawerFullscreenView;
    MDCActivityIndicator *_spinner;
    UITapGestureRecognizer *_backgroundTapRecognizer;
    UIView *_expandedView;
    UIView *_collapsedView;
    UIView *_accessibilityView;
    UIView *_backgroundView;
    YTLabel *_errorLabel;
    YTLabel *_errorTapToRetryLabel;
    UIImageView *_errorImageView;
    UIView *_errorBackgroundScrim;
    UIImageView *_errorBackgroundView;
    YTLabel *_remoteScreenLabel;
}

@property(retain, nonatomic) YTLabel *remoteScreenLabel; // @synthesize remoteScreenLabel=_remoteScreenLabel;
@property(retain, nonatomic) UIImageView *errorBackgroundView; // @synthesize errorBackgroundView=_errorBackgroundView;
@property(retain, nonatomic) UIView *errorBackgroundScrim; // @synthesize errorBackgroundScrim=_errorBackgroundScrim;
@property(retain, nonatomic) UIImageView *errorImageView; // @synthesize errorImageView=_errorImageView;
@property(retain, nonatomic) YTLabel *errorTapToRetryLabel; // @synthesize errorTapToRetryLabel=_errorTapToRetryLabel;
@property(retain, nonatomic) YTLabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *accessibilityView; // @synthesize accessibilityView=_accessibilityView;
@property(retain, nonatomic) UIView *collapsedView; // @synthesize collapsedView=_collapsedView;
@property(retain, nonatomic) UIView *expandedView; // @synthesize expandedView=_expandedView;
@property(readonly, nonatomic) UITapGestureRecognizer *backgroundTapRecognizer; // @synthesize backgroundTapRecognizer=_backgroundTapRecognizer;
@property(retain, nonatomic) MDCActivityIndicator *spinner; // @synthesize spinner=_spinner;
@property(retain, nonatomic) UIView *drawerFullscreenView; // @synthesize drawerFullscreenView=_drawerFullscreenView;
@property(retain, nonatomic) UIView<YTInfoCardTeaserViewProtocol> *teaserContainerView; // @synthesize teaserContainerView=_teaserContainerView;
@property(nonatomic) _Bool playerControlsHidden; // @synthesize playerControlsHidden=_playerControlsHidden;
@property(nonatomic) _Bool nerdStatsVisible; // @synthesize nerdStatsVisible=_nerdStatsVisible;
@property(retain, nonatomic) YTAutonavPreviewView *autonavPreviewView; // @synthesize autonavPreviewView=_autonavPreviewView;
@property(retain, nonatomic) YTNoSoundMemoView *noSoundMemoView; // @synthesize noSoundMemoView=_noSoundMemoView;
@property(retain, nonatomic) UIView *nerdStatsOverlayView; // @synthesize nerdStatsOverlayView=_nerdStatsOverlayView;
@property(retain, nonatomic) UIView *paidContentView; // @synthesize paidContentView=_paidContentView;
@property(retain, nonatomic) UIView<YTCaptionViewProtocol> *captionOverlayView; // @synthesize captionOverlayView=_captionOverlayView;
@property(retain, nonatomic) YTOverflowMenuView *overflowMenuView; // @synthesize overflowMenuView=_overflowMenuView;
@property(readonly, nonatomic) YTMainAppControlsOverlayView *controlsOverlayView; // @synthesize controlsOverlayView=_controlsOverlayView;
@property(nonatomic) _Bool isBeingDismissed; // @synthesize isBeingDismissed=_isBeingDismissed;
@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (id)spinnerDelayTimer;
- (void)updateRemoteScreenLabel;
- (void)setPlayPauseReplayState:(long long)arg1;
- (id)styledErrorLabel;
- (void)updateAutonavPreviewView;
- (double)fullscreenEngagementHeaderHeight;
- (struct UIEdgeInsets)effectiveSafeAreaInsets;
- (_Bool)iPhoneXShouldForceLandscapeFullscreenSafeArea;
@property(readonly, nonatomic) _Bool shouldShowStatusBar;
- (_Bool)shouldUseFullscreenEngagementLayout;
@property(readonly, nonatomic) _Bool showDimmedNextPreviousButtons;
- (id)overflowButton;
- (id)playbackRouteButton;
- (int)playerViewLayout;
- (void)setPlayerViewLayout:(int)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)isPrimaryViewTouch:(id)arg1;
- (void)setInfoCardTeaserVisible:(_Bool)arg1;
- (void)animateInfoCardButtonVisible:(_Bool)arg1;
- (void)setInfoCardButtonHidden:(_Bool)arg1;
- (void)setInfoCardButton:(id)arg1;
- (void)removeDidPressSpinnerTarget:(id)arg1 action:(SEL)arg2;
- (void)removeDidTapBackgroundTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidPressSpinnerTarget:(id)arg1 action:(SEL)arg2;
- (void)addDidTapBackgroundTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, nonatomic) double captionBottomPadding;
- (id)createSpinner;
- (id)overlayPauseButtonImage;
- (id)overlayPlayButtonImage;
- (_Bool)suppressRightSideOverlay;
- (void)setAccessibilityHint:(id)arg1;
- (void)setAccessibilityValue:(id)arg1;
- (void)setAccessibilityLabel:(id)arg1;
- (void)updateCaptionBottomPadding;
- (void)resetPlaceholder;
- (void)setPlaceholder:(id)arg1 withAlpha:(double)arg2;
- (void)setPlaceholder:(id)arg1;
- (void)setAutoplaySwitchOn:(_Bool)arg1;
- (void)setAutonavPreviewViewVisible:(_Bool)arg1;
- (void)setCaptionsVisible:(_Bool)arg1;
- (_Bool)isInfoCardButtonVisible;
- (void)setVideoControlsVisibility:(long long)arg1;
- (void)setControlsOverlayVisible:(_Bool)arg1;
- (void)setBackgroundVisible:(_Bool)arg1;
- (void)setNextButtonEnabled:(_Bool)arg1;
- (void)setPreviousButtonEnabled:(_Bool)arg1;
- (void)hideError;
- (void)showErrorWithMessage:(id)arg1 allowTapToRetry:(_Bool)arg2 showTapToRetryMessage:(_Bool)arg3 showErrorBackground:(_Bool)arg4;
- (void)showReplayButton;
- (void)showPauseButton;
- (void)showPlayButton;
- (_Bool)isSpinnerHidden;
- (void)hideSpinner;
- (void)showSpinnerAfterDelay:(double)arg1;
- (void)showSpinner;
- (void)hidePlaybackControls;
- (void)setCollapseButtonStyle:(long long)arg1;
- (void)setSpinnerInteractionEnabled:(_Bool)arg1;
- (void)setExternalPlaybackLabel:(id)arg1;
- (void)setRemoteScreenName:(id)arg1;
- (void)setExpansionCoefficient:(double)arg1;
- (void)setControlsOverlayViewEventsDelegate:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
