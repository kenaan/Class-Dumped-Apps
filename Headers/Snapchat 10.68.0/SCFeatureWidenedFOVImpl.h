//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "SCCameraGestureResponder-Protocol.h"
#import "SCFeatureWidenedFOV-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSMutableDictionary, NSString, SCDisposableObserverLifecycle, SCFeatureReference, SCFeatureWidenedFOVImplZoomLevel, SCManagedCapturerState, UIView;
@protocol SCCapturer, SCFeatureContainerView;

@interface SCFeatureWidenedFOVImpl : SCFeature <SCManagedCapturerListener, SCFeatureWidenedFOV, SCCameraGestureResponder>
{
    SCFeatureWidenedFOVImplZoomLevel *_backZoomLevel;
    long long _cameraViewType;
    id <SCCapturer> _capturer;
    UIView<SCFeatureContainerView> *_containerView;
    NSMutableDictionary *_enabledDevicePositionDictionary;
    SCFeatureWidenedFOVImplZoomLevel *_frontZoomLevel;
    _Bool _isActivated;
    _Bool _isCurrentlyEnabled;
    _Bool _isRecordingVideo;
    SCDisposableObserverLifecycle *_mainCameraVCLifecycle;
    SCManagedCapturerState *_managedCapturerState;
    SCFeatureReference *_zoomingFeature;
}

+ (struct CGRect)maxMediaAreaFrameWhenWidenedFOVIsDisabled;
- (void).cxx_destruct;
- (id)_zoomingLevelForDevicePosition:(long long)arg1;
- (void)_setEnabledForDevicePosition:(long long)arg1 enabled:(_Bool)arg2;
- (void)_restoreFOVState;
- (void)_restoreFOVModeForDevicePosition:(long long)arg1;
- (void)_recordFOVState;
- (void)_performHapticFeedback;
- (_Bool)_isZoomFeatureIdle;
- (_Bool)_isEnabledForDevicePosition:(long long)arg1;
- (void)_processGestureState:(long long)arg1 withScale:(double)arg2;
- (_Bool)_gestureRecognizer:(id)arg1 hasAllTouchesInView:(id)arg2;
- (void)_enableFOVMode;
- (void)_disableFOVMode;
- (id)_currentZoomLevel;
- (struct UIEdgeInsets)safeAreaInsetsWithExistingInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)safeAreaInsets;
@property(readonly, nonatomic) double previewVerticalOffset;
- (struct CGRect)maxMediaAreaFrame;
- (_Bool)isFeatureEnabledAndSupported;
- (void)configureWithView:(id)arg1;
- (void)activate;
- (void)forwardPinchGesture:(id)arg1;
- (void)dealloc;
- (id)initWithCapturer:(id)arg1 cameraViewType:(long long)arg2 zoomingFeature:(id)arg3 mainCameraViewControllerLifecycleEvents:(id)arg4;
- (void)managedCapturer:(id)arg1 willBeginVideoRecording:(id)arg2;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didChangeZoomFactor:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

