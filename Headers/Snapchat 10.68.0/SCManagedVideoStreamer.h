//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARSessionDelegate-Protocol.h"
#import "AVCaptureDataOutputSynchronizerDelegate-Protocol.h"
#import "AVCaptureDepthDataOutputDelegate-Protocol.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"
#import "SCManagedVideoARDataSource-Protocol.h"
#import "SCManagedVideoDataSource-Protocol.h"

@class ARFrame, AVCaptureDataOutputSynchronizer, AVDepthData, NSMutableArray, NSString, SCCaptureResource, SCFrameProcessLatencyReporter, SCManagedCaptureSession, SCManagedVideoDataSourceListenerAnnouncer, SCQueuePerformer;
@protocol SCManagedSampleBufferDisplayController;

@interface SCManagedVideoStreamer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureDepthDataOutputDelegate, AVCaptureDataOutputSynchronizerDelegate, ARSessionDelegate, SCManagedVideoDataSource, SCManagedVideoARDataSource>
{
    AVCaptureDataOutputSynchronizer *_dataOutputSynchronizer;
    SCCaptureResource *_captureResource;
    SCManagedCaptureSession *_captureSession;
    _Bool _performingConfigurations;
    long long _devicePosition;
    SCManagedVideoDataSourceListenerAnnouncer *_announcer;
    _Bool _sampleBufferDisplayEnabled;
    id <SCManagedSampleBufferDisplayController> _sampleBufferDisplayController;
    CDUnknownBlockType _flushOutdatedPreviewBlock;
    NSMutableArray *_waitUntilSampleBufferDisplayedBlocks;
    SCFrameProcessLatencyReporter *_frameProcessLatencyReporter;
    double _lastDisplayedFrameTimestamp;
    double _lastDisplayedDepthFrameTimestamp;
    _Bool _depthCaptureEnabled;
    _Bool _keepLateFrames;
    SCQueuePerformer *_keepLateFramesPerformer;
    // Error parsing type: Ai, name: _processingBuffersCount
    double _zoomFactor;
    _Bool _isStreaming;
    float _fieldOfView;
    SCQueuePerformer *_performer;
    ARFrame *_currentFrame;
    AVDepthData *_lastDepthData;
    long long _videoOrientation;
}

@property(readonly, nonatomic) long long videoOrientation; // @synthesize videoOrientation=_videoOrientation;
@property(retain) AVDepthData *lastDepthData; // @synthesize lastDepthData=_lastDepthData;
@property float fieldOfView; // @synthesize fieldOfView=_fieldOfView;
@property(retain) ARFrame *currentFrame; // @synthesize currentFrame=_currentFrame;
@property(readonly, nonatomic) SCQueuePerformer *performer; // @synthesize performer=_performer;
@property(readonly, nonatomic) _Bool isStreaming; // @synthesize isStreaming=_isStreaming;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_updateFieldOfViewWithARFrame:(id)arg1;
- (void)_enableVideoMirrorForDevicePosition:(long long)arg1;
- (void)_performCompletionHandlersForWaitUntilSampleBufferDisplayed;
- (void)sessionInterruptionEnded:(id)arg1;
- (void)sessionWasInterrupted:(id)arg1;
- (void)session:(id)arg1 didFailWithError:(id)arg2;
- (void)session:(id)arg1 didAddAnchors:(id)arg2;
- (void)session:(id)arg1 didUpdateFrame:(id)arg2;
- (void)session:(id)arg1 cameraDidChangeTrackingState:(id)arg2;
- (void)dataOutputSynchronizer:(id)arg1 didOutputSynchronizedDataCollection:(id)arg2;
- (void)captureOutput:(id)arg1 didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)didDropSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (_Bool)shouldRecreateWhenSessionChange;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)commitConfiguration;
- (void)setZoomFactor:(double)arg1;
- (void)setDepthCaptureEnabled:(_Bool)arg1;
- (_Bool)getKeepLateFramesEnabled;
- (void)setKeepLateFramesEnabled:(_Bool)arg1;
- (void)setVideoOrientation:(long long)arg1;
- (void)setDevicePosition:(long long)arg1;
- (void)beginConfiguration;
- (void)stopStreaming;
- (void)pauseStreaming;
- (id)callbackPerformer;
- (void)_cancelFlushOutdatedPreview;
- (void)startStreaming;
- (void)waitUntilSampleBufferDisplayed:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setSampleBufferDisplayEnabled:(_Bool)arg1;
- (void)addSampleBufferDisplayController:(id)arg1;
- (void)setupWithARSession:(id)arg1;
- (void)setupWithSession:(id)arg1 devicePosition:(long long)arg2;
- (id)initWithResource:(id)arg1;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

