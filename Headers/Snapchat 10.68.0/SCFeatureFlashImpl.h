//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCFeature.h"

#import "CAAnimationDelegate-Protocol.h"
#import "SCCameraGestureResponder-Protocol.h"
#import "SCCameraToolbarItemProvider-Protocol.h"
#import "SCCaptureWorkflowTransitionAnimatableFeature-Protocol.h"
#import "SCFeatureFlash-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"

@class NSString, SCActionToolbarButtonItem, SCCameraToolbarItem, SCDisposableObserverLifecycle, SCExperimentManager, SCFeatureReference, SCLazy, SCManagedCapturerState, UIView;
@protocol SCCapturer, SCFeatureCameraToolbar, SCFeatureContainerView;

@interface SCFeatureFlashImpl : SCFeature <SCManagedCapturerListener, CAAnimationDelegate, SCFeatureFlash, SCCameraGestureResponder, SCCameraToolbarItemProvider, SCCaptureWorkflowTransitionAnimatableFeature>
{
    _Bool _canEnable;
    id <SCCapturer> _capturer;
    SCExperimentManager *_experimentManager;
    UIView<SCFeatureContainerView> *_containerView;
    SCManagedCapturerState *_managedCapturerState;
    SCDisposableObserverLifecycle *_vcLifecycle;
    SCDisposableObserverLifecycle *_mainCameraVCLifecycle;
    SCDisposableObserverLifecycle *_appLifecycle;
    SCDisposableObserverLifecycle *_cameraVCLifecycle;
    SCCameraToolbarItem *_toolbarItem;
    SCActionToolbarButtonItem *_toolbarButtonItem;
    id <SCFeatureCameraToolbar> _cameraToolbar;
    long long _cameraViewType;
    SCFeatureReference *_cameraUserActionLogger;
    SCLazy *_lazyFrontFlashOverlayView;
    double _screenBrightness;
    unsigned long long _flashButtonTapCount;
}

@property(nonatomic) unsigned long long flashButtonTapCount; // @synthesize flashButtonTapCount=_flashButtonTapCount;
@property(nonatomic) double screenBrightness; // @synthesize screenBrightness=_screenBrightness;
@property(retain, nonatomic) SCLazy *lazyFrontFlashOverlayView; // @synthesize lazyFrontFlashOverlayView=_lazyFrontFlashOverlayView;
@property(retain, nonatomic) SCFeatureReference *cameraUserActionLogger; // @synthesize cameraUserActionLogger=_cameraUserActionLogger;
@property(nonatomic) long long cameraViewType; // @synthesize cameraViewType=_cameraViewType;
@property(nonatomic) __weak id <SCFeatureCameraToolbar> cameraToolbar; // @synthesize cameraToolbar=_cameraToolbar;
@property(retain, nonatomic) SCActionToolbarButtonItem *toolbarButtonItem; // @synthesize toolbarButtonItem=_toolbarButtonItem;
@property(retain, nonatomic) SCCameraToolbarItem *toolbarItem; // @synthesize toolbarItem=_toolbarItem;
@property(retain, nonatomic) SCDisposableObserverLifecycle *cameraVCLifecycle; // @synthesize cameraVCLifecycle=_cameraVCLifecycle;
@property(retain, nonatomic) SCDisposableObserverLifecycle *appLifecycle; // @synthesize appLifecycle=_appLifecycle;
@property(retain, nonatomic) SCDisposableObserverLifecycle *mainCameraVCLifecycle; // @synthesize mainCameraVCLifecycle=_mainCameraVCLifecycle;
@property(retain, nonatomic) SCDisposableObserverLifecycle *vcLifecycle; // @synthesize vcLifecycle=_vcLifecycle;
@property(nonatomic) _Bool canEnable; // @synthesize canEnable=_canEnable;
@property(retain, nonatomic) SCManagedCapturerState *managedCapturerState; // @synthesize managedCapturerState=_managedCapturerState;
@property(nonatomic) __weak UIView<SCFeatureContainerView> *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) SCExperimentManager *experimentManager; // @synthesize experimentManager=_experimentManager;
@property(retain, nonatomic) id <SCCapturer> capturer; // @synthesize capturer=_capturer;
- (void).cxx_destruct;
- (void)dealloc;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_resetFrontFlash:(_Bool)arg1;
- (void)startAnimation:(CDUnknownBlockType)arg1;
- (_Bool)_cameraViewIsChatCamera;
- (void)resetCameraFlashWithCameraViewVisibility:(_Bool)arg1;
- (_Bool)_shouldHideForState:(id)arg1;
- (void)_setFlashActive:(_Bool)arg1;
- (void)_flashTapped;
- (id)_createToolbarItemWithToolbar:(id)arg1;
- (void)configureWithCameraToolbar:(id)arg1;
- (id)usageMetrics;
- (void)resetMetrics;
- (void)configureWithView:(id)arg1;
- (void)activate;
- (id)initWithCapturer:(id)arg1 experimentManager:(id)arg2 applicationLifecycleEvents:(id)arg3 viewControllerLifecycleEvents:(id)arg4 mainCameraViewControllerLifecycleEvents:(id)arg5 cameraViewType:(long long)arg6 cameraUserActionLogger:(id)arg7;
- (void)managedCapturer:(id)arg1 didCancelRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didFailRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 error:(id)arg4;
- (void)managedCapturer:(id)arg1 didFinishRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3 recordedVideo:(id)arg4;
- (void)managedCapturer:(id)arg1 didBeginVideoRecording:(id)arg2 session:(CDStruct_4565c1ff)arg3;
- (void)managedCapturer:(id)arg1 didChangeARSessionActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeState:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashSupportedAndTorchSupported:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeFlashActive:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeCaptureDevicePosition:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

