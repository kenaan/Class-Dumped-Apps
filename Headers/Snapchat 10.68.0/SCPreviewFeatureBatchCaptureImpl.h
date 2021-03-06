//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCBatchCaptureCollectionViewControllerDelegate-Protocol.h"
#import "SCPreviewFeatureBatchCapture-Protocol.h"
#import "SCPreviewGestureResponder-Protocol.h"

@class NSString, SCBatchCaptureCollectionViewController, SCBatchCaptureSavingConfiguration, SCBatchCaptureStateHandler, SCPreviewConfiguration, SCPreviewEphemeralMediaList, SCPreviewView, SCUserSession;
@protocol SCBatchCapturePlayerHandler, SCPreviewFeatureBatchCaptureDelegate><SCPreviewFeatureParentViewControllerAccessing, SCPreviewResources;

@interface SCPreviewFeatureBatchCaptureImpl : SCFeature <SCBatchCaptureCollectionViewControllerDelegate, SCPreviewFeatureBatchCapture, SCPreviewGestureResponder>
{
    SCPreviewConfiguration *_previewConfiguration;
    SCUserSession *_userSession;
    id <SCPreviewResources> _resourceProvider;
    SCPreviewView *_previewView;
    id <SCBatchCapturePlayerHandler> _playerHandler;
    SCPreviewEphemeralMediaList *_ephemeralMediaList;
    id <SCPreviewFeatureBatchCaptureDelegate><SCPreviewFeatureParentViewControllerAccessing> _delegate;
    SCBatchCaptureCollectionViewController *_batchCaptureViewController;
    SCBatchCaptureStateHandler *_batchCaptureStateHandler;
    SCBatchCaptureSavingConfiguration *_savingConfiguration;
}

@property(readonly, nonatomic) SCBatchCaptureSavingConfiguration *savingConfiguration; // @synthesize savingConfiguration=_savingConfiguration;
@property(readonly, nonatomic) SCBatchCaptureStateHandler *batchCaptureStateHandler; // @synthesize batchCaptureStateHandler=_batchCaptureStateHandler;
@property(readonly, nonatomic) SCBatchCaptureCollectionViewController *batchCaptureViewController; // @synthesize batchCaptureViewController=_batchCaptureViewController;
@property(nonatomic) __weak id <SCPreviewFeatureBatchCaptureDelegate><SCPreviewFeatureParentViewControllerAccessing> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)showDiscardWarningWithPreviewExitType:(long long)arg1;
- (_Bool)shouldShowDiscardWarning;
- (void)_deleteAllSegmentsWithDiscardMethod:(long long)arg1;
- (void)deleteAllSegments;
- (void)_toolbarButtonTapped:(id)arg1;
- (void)_toggleAttachmentToolButton:(_Bool)arg1;
- (void)_toggleTimerToolButton:(_Bool)arg1 duration:(double)arg2;
- (void)_updateFilterStackingToolButtonWithSnapState:(id)arg1;
- (void)_toggleFilterStackingToolButton:(_Bool)arg1;
- (id)_getCurrentEditingState;
- (void)_updateSaveButtonState;
- (void)_didDeleteSegmentAtIndexPath:(id)arg1;
- (void)_updateCurrentSegmentThumbnails;
- (struct CGSize)_outputOverlaySize;
- (unsigned long long)didTapPreviewContainerView:(id)arg1;
- (void)_onDeleteSegmentAtIndex:(long long)arg1;
- (void)batchCaptureCollectionViewController:(id)arg1 didPressDeleteForSegmentAtIndexPath:(id)arg2 deleteBlock:(CDUnknownBlockType)arg3;
- (void)batchCaptureCollectionViewController:(id)arg1 didSplitTrimOrDeleteSegmentAtIndexPath:(id)arg2 shouldUpdateThumbnails:(_Bool)arg3;
- (void)batchCaptureCollectionViewController:(id)arg1 didUpdateSegmentStatesAtIndexPath:(id)arg2;
- (void)_realSetupBatchCaptureWithController:(id)arg1;
- (void)configureWithView:(id)arg1;
- (void)finalizeSavingConfiguration;
- (void)exportBatchCaptureSegmentsWithCompletion:(CDUnknownBlockType)arg1;
- (void)saveBatchCaptureSegmentsToCameraRollWithCompletion:(CDUnknownBlockType)arg1;
- (void)prepareBatchCaptureEphemeralMediaList:(id)arg1 withUserSendStartTimestamp:(double)arg2;
- (void)prepareBatchCaptureEphemeralMediaList:(id)arg1;
- (_Bool)isEditingVideoSegment;
- (id)batchCaptureSegmentAtIndex:(long long)arg1;
- (void)batchCaptureUpdateImageSegmentDuration:(long long)arg1;
- (void)batchCaptureFinishRewindingView:(id)arg1;
- (void)batchCaptureDidPlayFromSourceAtIndex:(long long)arg1 multiSnapIndex:(long long)arg2 toSourceAtIndex:(long long)arg3 multiSnapIndex:(long long)arg4;
- (void)batchCaptureSaveCurrentOverlayItemsToSourceAtIndex:(long long)arg1 multiSnapIndex:(long long)arg2 shouldUpdateThumbnails:(_Bool)arg3;
- (void)batchCaptureFinishTouchControl:(id)arg1;
- (void)_batchCaptureEditedThumbnailsAtSegmentIndex:(long long)arg1 snapIndex:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateThumbnailsForSegmentAtIndex:(long long)arg1 snapIndex:(long long)arg2;
- (void)batchCaptureSegmentStateChangeShouldUpdateThumbnails:(_Bool)arg1;
- (void)batchCaptureFirstFrameRenderedForFrameSourceAtIndex:(long long)arg1;
- (struct CGRect)batchCaptureViewFrame;
- (void)setupBatchCaptureWithPlayerHandler:(id)arg1;
- (id)initWithUserSession:(id)arg1 previewConfiguration:(id)arg2 resourceProvider:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

