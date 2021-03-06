//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCameraHealthMonitorDelegate-Protocol.h"
#import "SCManagedCapturerListener-Protocol.h"
#import "SCManagedSampleBufferDisplayController-Protocol.h"

@class AVCaptureVideoPreviewLayer, CAMetalLayer, FBKVOController, NSMutableSet, NSString, SCCameraHealthMonitor, SCCoreCameraOpenLogger, SCManagedCapturePreviewView, SCQueuePerformer, UIView;
@protocol LSAGLView, MTLCommandQueue, MTLRenderPipelineState, OS_dispatch_semaphore, SCManagedCapturePreviewLayerControllerDelegate;

@interface SCManagedCapturePreviewLayerController : NSObject <SCManagedCapturerListener, SCCameraHealthMonitorDelegate, SCManagedSampleBufferDisplayController>
{
    SCCoreCameraOpenLogger *_cameraOpenLogger;
    SCManagedCapturePreviewView *_view;
    struct CGSize _drawableSize;
    _Bool _shouldLogOnNextFrameReceived;
    SCCameraHealthMonitor *_cameraMonitor;
    SCQueuePerformer *_performer;
    FBKVOController *_renderingKVO;
    CAMetalLayer *_metalLayer;
    id <MTLCommandQueue> _commandQueue;
    id <MTLRenderPipelineState> _renderPipelineState;
    struct __CVMetalTextureCache *_textureCache;
    NSObject<OS_dispatch_semaphore> *_commandBufferSemaphore;
    _Bool _containOutdatedPreview;
    _Bool _requireToFlushOutdatedPreview;
    NSMutableSet *_tokenSet;
    unsigned long long _cannotAcquireDrawable;
    _Bool _renderSuspended;
    AVCaptureVideoPreviewLayer *_videoPreviewLayer;
    UIView<LSAGLView> *_videoPreviewGLView;
    id <SCManagedCapturePreviewLayerControllerDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool renderSuspended; // @synthesize renderSuspended=_renderSuspended;
@property(nonatomic) __weak id <SCManagedCapturePreviewLayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) UIView<LSAGLView> *videoPreviewGLView; // @synthesize videoPreviewGLView=_videoPreviewGLView;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *videoPreviewLayer; // @synthesize videoPreviewLayer=_videoPreviewLayer;
- (void).cxx_destruct;
- (void)managedCapturer:(id)arg1 didChangeVideoPreviewGLView:(id)arg2;
- (void)managedCapturer:(id)arg1 didChangeVideoPreviewLayer:(id)arg2;
- (void)_flushOutdatedPreview;
- (void)flushOutdatedPreview;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)newSampleBufferReceived;
- (void)cameraHeathMonitorDidDetectFailedCameraOpen:(id)arg1;
- (void)endDisplayingOutdatedPreview:(id)arg1;
- (id)keepDisplayingOutdatedPreview;
- (void)applicationWillEnterForeground;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)applicationDidEnterBackground;
- (void)setManagedCapturer:(id)arg1;
@property(readonly, nonatomic) UIView *view;
- (void)setupRenderPipeline;
- (void)setupPreviewLayer;
- (void)resume;
- (void)pause;
- (void)logOnNextFrameReceivedWithLogger:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

