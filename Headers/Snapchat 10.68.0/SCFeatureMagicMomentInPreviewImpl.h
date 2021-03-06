//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCFeatureMagicMomentInPreview-Protocol.h"
#import "SCImageProcessLensCommandListener-Protocol.h"
#import "SCMagicMomentControllerDelegate-Protocol.h"
#import "SCMagicMomentSliderControllerDelegate-Protocol.h"

@class NSMutableArray, NSNumber, NSString, SCFeatureReference, SCImageProcessLensCommand, SCLabeledGrowingButton, SCMagicMomentController, SCMagicMomentLensDataController, SCMagicMomentSliderController, SCMagicMomentSliderView, SCPreviewFilterItem, SCPreviewMagicMomentConfiguration, SCPreviewView, SCUserSession;
@protocol SCFeatureMagicMomentInPreviewDelegate, SCGallerySnap, SCPostCaptureLensComponentManagerPool;

@interface SCFeatureMagicMomentInPreviewImpl : SCFeature <SCMagicMomentSliderControllerDelegate, SCImageProcessLensCommandListener, SCMagicMomentControllerDelegate, SCFeatureMagicMomentInPreview>
{
    SCUserSession *_userSession;
    SCPreviewView *_previewView;
    NSMutableArray *_bottomLeftButtons;
    SCMagicMomentController *_controller;
    id <SCGallerySnap> _snap;
    SCPreviewMagicMomentConfiguration *_configuration;
    _Bool _playbackPaused;
    id <SCFeatureMagicMomentInPreviewDelegate> _delegate;
    SCFeatureReference *_videoPlayback;
    SCFeatureReference *_swipeFilters;
    id <SCPostCaptureLensComponentManagerPool> _lensComponentManagerPool;
    SCLabeledGrowingButton *_spectaclesMagicMomentButton;
    SCMagicMomentSliderView *_magicMomentSlider;
    SCMagicMomentSliderController *_magicMomentSliderController;
    CDUnknownBlockType _sliderDismissBlock;
    SCImageProcessLensCommand *_lensCommand;
    SCMagicMomentLensDataController *_lensDataController;
    SCPreviewFilterItem *_previousFilterItem;
    double _currentPlaybackRate;
    double _isCurrentPlaybackReverse;
    NSNumber *_frameTimeOverride;
}

@property(retain, nonatomic) NSNumber *frameTimeOverride; // @synthesize frameTimeOverride=_frameTimeOverride;
@property(nonatomic) double isCurrentPlaybackReverse; // @synthesize isCurrentPlaybackReverse=_isCurrentPlaybackReverse;
@property(nonatomic) double currentPlaybackRate; // @synthesize currentPlaybackRate=_currentPlaybackRate;
@property(retain, nonatomic) SCPreviewFilterItem *previousFilterItem; // @synthesize previousFilterItem=_previousFilterItem;
@property(retain, nonatomic) SCMagicMomentLensDataController *lensDataController; // @synthesize lensDataController=_lensDataController;
@property(nonatomic) _Bool playbackPaused; // @synthesize playbackPaused=_playbackPaused;
@property(retain, nonatomic) SCImageProcessLensCommand *lensCommand; // @synthesize lensCommand=_lensCommand;
@property(copy, nonatomic) CDUnknownBlockType sliderDismissBlock; // @synthesize sliderDismissBlock=_sliderDismissBlock;
@property(retain, nonatomic) SCMagicMomentSliderController *magicMomentSliderController; // @synthesize magicMomentSliderController=_magicMomentSliderController;
@property(retain, nonatomic) SCMagicMomentSliderView *magicMomentSlider; // @synthesize magicMomentSlider=_magicMomentSlider;
@property(retain, nonatomic) SCLabeledGrowingButton *spectaclesMagicMomentButton; // @synthesize spectaclesMagicMomentButton=_spectaclesMagicMomentButton;
@property(retain, nonatomic) id <SCPostCaptureLensComponentManagerPool> lensComponentManagerPool; // @synthesize lensComponentManagerPool=_lensComponentManagerPool;
@property(retain, nonatomic) SCFeatureReference *swipeFilters; // @synthesize swipeFilters=_swipeFilters;
@property(retain, nonatomic) SCFeatureReference *videoPlayback; // @synthesize videoPlayback=_videoPlayback;
@property(nonatomic) __weak id <SCFeatureMagicMomentInPreviewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)magicMomentSliderController:(id)arg1 didSeekToFrameTime:(double)arg2;
- (void)magicMomentSliderControllerDidResumeMagicMoment:(id)arg1;
- (void)magicMomentSliderControllerDidPauseMagicMoment:(id)arg1;
- (void)_cancelDismissSliderAsynchronously;
- (void)_dismissSliderAsynchronously;
- (void)_hideSlider;
- (void)_showSlider;
- (void)_enableIncompatibleFilters;
- (void)_disableIncompatibleFilters;
- (void)_updateCurrentPlaybackRate;
- (void)_magicMomentButtonPressed;
- (void)_updateMagicMomentButtonImage:(_Bool)arg1;
- (void)_activateMagicMomentSliderControllerIfNeeded;
- (void)_createMagicMomentSliderView;
- (void)_createMagicMomentButton;
- (void)_addMagicMomentToBottomLeftButtons;
- (void)magicMomentController:(id)arg1 didUpdateFrameTimeForSaving:(id)arg2;
- (void)magicMomentControllerDidPrioritizeDepth:(id)arg1;
- (void)magicMomentController:(id)arg1 didSetCommandActive:(_Bool)arg2;
- (void)magicMomentController:(id)arg1 didSetPlaybackPaused:(_Bool)arg2;
- (void)magicMomentController:(id)arg1 didSetShowingSpinner:(_Bool)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeFaces:(unsigned long long)arg2;
- (void)imageProcessLensCommand:(id)arg1 didRecognizeExpression:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didFinishProcessingFrameWithLens:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 didUnloadWithLensComponentManager:(id)arg2;
- (void)imageProcessLensCommand:(id)arg1 willLoadWithLensComponentManager:(id)arg2;
- (void)videoPlaybackSession:(id)arg1 didRenderFrameAtTime:(CDStruct_1b6d18a9)arg2;
@property(nonatomic) _Bool toolbarButtonDisabled;
- (id)lensDataFuture;
- (id)magicMomentScreenshotCommand;
- (id)magicMomentExportCommand;
- (id)magicMomentFrameTime;
@property(readonly, nonatomic) _Bool shouldSaveAsCopy;
- (_Bool)_needToShowSpectaclesMagicMomentButtonAndSliderView;
@property(readonly, nonatomic) _Bool magicMomentEnabled;
- (void)updateLensProcessingCommand:(id)arg1;
- (void)activate;
- (void)configureWithView:(id)arg1;
- (id)initWithUserSession:(id)arg1 snap:(id)arg2 configuration:(id)arg3 videoPlayback:(id)arg4 swipeFilters:(id)arg5 lensComponentManagerPool:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

