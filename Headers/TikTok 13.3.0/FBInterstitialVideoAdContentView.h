//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBVideoAdContentView.h"

#import "FBAdChoicesViewDelegate-Protocol.h"
#import "FBAdCommandProcessorDelegate-Protocol.h"
#import "FBAdVideoRendererViewDelegate-Protocol.h"

@class FBAdChoicesView, FBAdCommandProcessor, FBAdTimer, FBAdVideoPlayPauseButton, FBAdVideoProgressBar, FBAdVideoRendererView, FBGradientView, FBInstreamCallToActionView, FBInterstitialVideoAdCloseButton, FBVideoAdLabel, NSString, UIColor, UIImageView, UIView, UIViewController;

@interface FBInterstitialVideoAdContentView : FBVideoAdContentView <FBAdVideoRendererViewDelegate, FBAdChoicesViewDelegate, FBAdCommandProcessorDelegate>
{
    _Bool _adDetailsPersistent;
    _Bool _animating;
    _Bool _imagesLoaded;
    _Bool _paused;
    _Bool _rootViewControllerPresenting;
    _Bool _videoEnded;
    _Bool _videoLoaded;
    _Bool _adChoicesInitialPositionAdjusted;
    UIColor *_accentColor;
    FBAdChoicesView *_adChoicesView;
    UIView *_adDetailsView;
    id _animationProgressTimingObserver;
    FBInterstitialVideoAdCloseButton *_closeButtonView;
    FBInstreamCallToActionView *_callToActionView;
    FBAdCommandProcessor *_commandProcessor;
    UIColor *_defaultBackgroundColor;
    UIColor *_defaultTextColor;
    FBGradientView *_gradientView;
    UIImageView *_iconView;
    UIImageView *_imageView;
    FBAdVideoPlayPauseButton *_playPauseButton;
    FBAdVideoProgressBar *_progressBar;
    UIViewController *_rootViewController;
    FBVideoAdLabel *_subtitleView;
    FBVideoAdLabel *_titleView;
    FBAdTimer *_toggleViewsTimer;
    FBAdVideoRendererView *_videoRendererView;
    long long _orientation;
    CDUnknownBlockType _videoReadyToDisplay;
    CDStruct_1b6d18a9 _lastRemainingTime;
    CDStruct_1b6d18a9 _skippableTime;
}

+ (void)arrangeViewsVertically:(id)arg1 inContainer:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType videoReadyToDisplay; // @synthesize videoReadyToDisplay=_videoReadyToDisplay;
@property(nonatomic) _Bool adChoicesInitialPositionAdjusted; // @synthesize adChoicesInitialPositionAdjusted=_adChoicesInitialPositionAdjusted;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) FBAdVideoRendererView *videoRendererView; // @synthesize videoRendererView=_videoRendererView;
@property(nonatomic) _Bool videoLoaded; // @synthesize videoLoaded=_videoLoaded;
@property(nonatomic) _Bool videoEnded; // @synthesize videoEnded=_videoEnded;
@property(retain, nonatomic) FBAdTimer *toggleViewsTimer; // @synthesize toggleViewsTimer=_toggleViewsTimer;
@property(retain, nonatomic) FBVideoAdLabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) FBVideoAdLabel *subtitleView; // @synthesize subtitleView=_subtitleView;
@property(nonatomic) CDStruct_1b6d18a9 skippableTime; // @synthesize skippableTime=_skippableTime;
@property(nonatomic) _Bool rootViewControllerPresenting; // @synthesize rootViewControllerPresenting=_rootViewControllerPresenting;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) FBAdVideoProgressBar *progressBar; // @synthesize progressBar=_progressBar;
@property(retain, nonatomic) FBAdVideoPlayPauseButton *playPauseButton; // @synthesize playPauseButton=_playPauseButton;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
@property(nonatomic) CDStruct_1b6d18a9 lastRemainingTime; // @synthesize lastRemainingTime=_lastRemainingTime;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool imagesLoaded; // @synthesize imagesLoaded=_imagesLoaded;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) FBGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(readonly, nonatomic) UIColor *defaultTextColor; // @synthesize defaultTextColor=_defaultTextColor;
@property(readonly, nonatomic) UIColor *defaultBackgroundColor; // @synthesize defaultBackgroundColor=_defaultBackgroundColor;
@property(retain, nonatomic) FBAdCommandProcessor *commandProcessor; // @synthesize commandProcessor=_commandProcessor;
@property(retain, nonatomic) FBInstreamCallToActionView *callToActionView; // @synthesize callToActionView=_callToActionView;
@property(retain, nonatomic) FBInterstitialVideoAdCloseButton *closeButtonView; // @synthesize closeButtonView=_closeButtonView;
@property(nonatomic) _Bool animating; // @synthesize animating=_animating;
@property(retain, nonatomic) id animationProgressTimingObserver; // @synthesize animationProgressTimingObserver=_animationProgressTimingObserver;
@property(retain, nonatomic) UIView *adDetailsView; // @synthesize adDetailsView=_adDetailsView;
@property(nonatomic) _Bool adDetailsPersistent; // @synthesize adDetailsPersistent=_adDetailsPersistent;
@property(retain, nonatomic) FBAdChoicesView *adChoicesView; // @synthesize adChoicesView=_adChoicesView;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
- (void).cxx_destruct;
- (void)videoView:(id)arg1 didFailWithError:(id)arg2;
- (void)videoViewDidEnd:(id)arg1;
- (void)videoViewDidLoad:(id)arg1;
- (id)commandProcessorTouchInformation:(id)arg1;
- (void)viewControllerDismissed:(id)arg1;
- (void)willPresentViewController:(id)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)adChoicesView:(id)arg1 viewControllerDismissed:(id)arg2;
- (void)adChoicesView:(id)arg1 willPresentViewController:(id)arg2;
- (void)videoViewTapped:(id)arg1;
- (double)videoAspectRatio;
- (void)toggleViews:(id)arg1;
- (void)togglePlayerControls;
- (void)toggleAll;
- (void)toggleAdDetails;
- (void)showPlayerControls;
- (void)showAdDetails;
- (void)scheduleHideViews:(id)arg1;
- (void)scheduleHideAll;
- (id)playerControlViews;
- (void)cancelAnimateViews;
- (void)animateShowViews:(id)arg1;
- (void)animateHideViews:(id)arg1;
- (id)adDetailViews;
- (unsigned long long)skipRemainingSeconds;
- (void)setAdDetailsTextColor:(id)arg1;
- (void)resetPlayer;
- (void)removeObservers;
- (void)removeAnimationProgressTimingObserver;
- (void)registerLoaded;
- (void)registerClick;
- (void)playPauseButtonTapped:(id)arg1;
- (void)handleLink;
- (void)handleAnimationProgress;
- (void)closeButtonViewTapped:(id)arg1;
- (void)cleanLayout;
- (void)callToActionViewTapped:(id)arg1;
- (void)backgroundTapped:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)addProgressBar;
- (void)addPlayPauseButton;
- (void)addCloseButton;
- (void)addObservers;
- (void)addCallToActionView;
- (void)addAnimationProgressTimingObserver;
- (void)addAdChoicesView;
- (void)layoutWithAdDetailsStackedBanner;
- (void)layoutWithAdDetailsBanner;
- (void)layoutPortraitWithAdDetailsList;
- (void)layoutLandscapeWithAdDetailsList;
- (CDStruct_1b6d18a9)skipRemainingTime;
- (_Bool)skippable;
- (void)layoutSubviews;
- (float)volume;
- (_Bool)isAutoplay;
- (CDStruct_1b6d18a9)duration;
- (CDStruct_1b6d18a9)currentTime;
- (void)resume;
- (void)pause;
- (void)startFromRootViewController:(id)arg1;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2;
- (id)initWithVideoReadyToDisplay:(CDUnknownBlockType)arg1;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

