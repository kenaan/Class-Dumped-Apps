//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFDecompressionSessionDelegate-Protocol.h"
#import "FNFPlayerDisplayEngine-Protocol.h"

@class CADisplayLink, CALayer, FNFPlayerFramesBuffer, FNFRenderingThread, NSError, NSString;
@protocol FNFDecompressionSession, FNFPlayerDisplayEngineDelegate, FNFPlayerDisplayLayer, OS_dispatch_queue;

@interface FNFPlayerDisplay : NSObject <FNFDecompressionSessionDelegate, FNFPlayerDisplayEngine>
{
    CALayer<FNFPlayerDisplayLayer> *_layer;
    CADisplayLink *_displayLink;
    FNFPlayerFramesBuffer *_framesBuffer;
    id <FNFDecompressionSession> _decompressionSession;
    id <FNFDecompressionSession> _previousDecompressionSession;
    CDUnknownBlockType _dataBlock;
    NSObject<OS_dispatch_queue> *_dataQueue;
    _Bool _requestingData;
    NSError *_layerError;
    struct OpaqueCMTimebase *_controlTimeBase;
    FNFRenderingThread *_renderingThread;
    _Bool _optimizeMemory;
    _Bool _blockPlayWhenNotActive;
    _Bool _allowPlayWhenInactive;
    _Bool _storeLastDisplayedSampleBuffer;
    struct __CVBuffer *_lastDisplayedSampleBuffer;
    _Bool _requestedResizeDecompressionSession;
    unsigned int _numOfVP9DecoderThreads;
    int _sampleBufferRequestThreshold;
    int _sampleBufferRequestThresholdVP9;
    _Bool _shouldRenderWhilePlaybackPaused;
    _Bool _closeDecompressionImmediately;
    _Bool _appActive;
    _Bool _enableDisplaylinkControlOnRenderingThread;
    _Bool _enableDecompressionSessionFormatCheck;
    id <FNFPlayerDisplayEngineDelegate> _playerLayerDelegate;
}

@property(nonatomic) __weak id <FNFPlayerDisplayEngineDelegate> playerLayerDelegate; // @synthesize playerLayerDelegate=_playerLayerDelegate;
- (void).cxx_destruct;
- (_Bool)_preventPlayback;
- (void)willResignActive;
- (void)didBecomeActive;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy) NSString *videoGravity;
- (void)_handleError:(id)arg1;
- (void)_handleError:(id)arg1 ifIFrameStillValid:(unsigned long long)arg2;
- (void)handleDecompressionSessionError:(id)arg1 ifIFrameStillValid:(unsigned long long)arg2;
- (void)handleDecompressionSessionError:(id)arg1;
- (void)_requestData;
- (_Bool)isReadyForDisplay;
- (_Bool)isReadyForMoreMediaData;
- (void)layerWillLayoutSublayers;
- (void)enqueueSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 attributes:(unsigned int)arg2;
- (struct CGSize)_decodeSizeForVideoSize:(struct CGSize)arg1 layerSize:(struct CGSize)arg2 scale:(double)arg3;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3;
- (void)yieldDecompressedBuffer:(struct __CVBuffer *)arg1 presentationTimeStamp:(CDStruct_1b6d18a9)arg2 presentationDuration:(CDStruct_1b6d18a9)arg3 iFrame:(unsigned long long)arg4;
- (void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)flush;
- (void)setNeedsDisplayFrame;
- (_Bool)seekFrameUpdatesFinished;
- (void)flushAndRemoveImage;
- (void)stopRequestingMediaData;
@property(readonly, nonatomic) long long status;
@property(retain) struct OpaqueCMTimebase *controlTimebase;
@property(readonly, nonatomic) NSError *error;
- (_Bool)allowRenderingWhileApplicationInactive;
- (_Bool)flushIfError;
- (void)dealloc;
- (void)invalidate;
- (void)_releaseTimeBase;
- (void)_clearBuffers;
- (_Bool)flushDisplayReadySampleBuffers;
- (void)_tryToMoveToNextFrameWithDrawingOn:(_Bool)arg1;
- (void)_requestLastDisplayedSampleBuffer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)requestLastDisplayedSampleBuffer:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)_displayLinkCallback:(id)arg1;
- (void)_pauseDisplayLink:(_Bool)arg1;
- (void)pauseDisplayLink;
- (void)pause:(int)arg1;
- (void)resume;
- (void)setRenderer:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)dispatchAsyncOnRenderingThread:(CDUnknownBlockType)arg1;
- (void)dispatchSyncOnRenderingThread:(CDUnknownBlockType)arg1;
- (void)setRenderingThreadPriority:(double)arg1;
- (void)_requestResizeDecompressionSession;
@property(readonly, copy) NSString *description;
- (id)initWithConfig:(CDStruct_c02306e9)arg1 renderingThread:(id)arg2 framesBuffer:(id)arg3 layer:(id)arg4;
- (id)initWithConfig:(CDStruct_c02306e9)arg1 andLayer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

