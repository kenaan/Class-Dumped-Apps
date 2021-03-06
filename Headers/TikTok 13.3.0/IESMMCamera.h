//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

#import "IESMMEffectMessageProtocol-Protocol.h"
#import "IESMMEffectTextProtocol-Protocol.h"

@class HTSFilterInterface, HTSGLCropFilter, HTSGLFilterInput, HTSGLPreview, HTSGLResizeRotateFilter, HTSLayerPreview, HTSRawDataOutputRender, IESImageAnimationStickerFilter, IESMMARCamera, IESMMARCameraRendererWrapper, IESMMARConfigurablePropertySet, IESMMCameraConfig, IESMMCaptureBase, IESMMCaptureKit, IESMMCaptureKitConfig, IESMMEffectGroup, NSMutableArray, NSString, UIView, VEGLCicleFilter, VEImageDetector;
@protocol IESMMCameraWhiteBalanceProtocol;

@interface IESMMCamera : IESMMObject <IESMMEffectMessageProtocol, IESMMEffectTextProtocol>
{
    struct _opaque_pthread_mutex_t _mutex;
    _Bool _torchOn;
    _Bool _ignoreNotification;
    _Bool _isUsedSystemPreview;
    _Bool _isKVORemoved;
    _Bool _disableFaceDetectReferCamera;
    _Bool _needAutoRotationFlag;
    _Bool _autoZoomWithAlgorithm;
    _Bool _pureCameraMode;
    _Bool _isFlashEnable;
    _Bool _enableExposureOptimize;
    _Bool _adjustExposureAccordingFace;
    _Bool _enableFaceuExposureOptimize;
    _Bool _shouldAutoStartAudioCapture;
    int _pictureNum;
    int _recordType;
    CDUnknownBlockType _pVideoProcessedBufferCallback;
    CDUnknownBlockType _pVideoBufferCallback;
    CDUnknownBlockType _pAudioBufferCallback;
    HTSRawDataOutputRender *_frameBufferOutputFilter;
    long long _preferredCameraType;
    CDUnknownBlockType _onCameraTypeDidChangeBlock;
    long long _outputDirection;
    CDUnknownBlockType _IESCameraActionBlock;
    CDUnknownBlockType _firstRenderBlock;
    IESMMCameraConfig *_config;
    long long _status;
    long long _previewModeType;
    long long _cameraFlashMode;
    long long _cameraStablizationMode;
    IESMMEffectGroup *_effectFilter;
    HTSGLPreview *_previewView;
    HTSLayerPreview *_layerPreviewView;
    VEImageDetector *_veImageDetector;
    UIView *_previewSuperview;
    IESMMCaptureKit *_normalCamera;
    IESMMCaptureBase *_currentCamera;
    NSMutableArray *_observerArray;
    HTSGLFilterInput *_inputFilter;
    HTSGLCropFilter *_cropFilter;
    HTSGLResizeRotateFilter *_resizeFilter;
    VEGLCicleFilter *_cicleFilter;
    HTSFilterInterface *_camOutFilter;
    HTSFilterInterface *_outputFilter;
    IESMMCaptureKitConfig *_cameraConfigure;
    struct opaqueCMSampleBuffer *_captureSampleBuf;
    IESMMARCamera *_arVideoCamera;
    HTSGLResizeRotateFilter *_arResizeRotateFilter;
    long long _cameraType;
    long long _arCameraMode;
    long long _normalCameraMode;
    IESMMARCameraRendererWrapper *_arRendererWrapper;
    IESMMARConfigurablePropertySet *_propertySet;
    NSString *_leftFilter;
    NSString *_rightFilter;
    IESImageAnimationStickerFilter *_stickerAnimationFilter;
    CDStruct_1b6d18a9 _pts;
}

@property(nonatomic) _Bool shouldAutoStartAudioCapture; // @synthesize shouldAutoStartAudioCapture=_shouldAutoStartAudioCapture;
@property(retain, nonatomic) IESImageAnimationStickerFilter *stickerAnimationFilter; // @synthesize stickerAnimationFilter=_stickerAnimationFilter;
@property(retain, nonatomic) NSString *rightFilter; // @synthesize rightFilter=_rightFilter;
@property(retain, nonatomic) NSString *leftFilter; // @synthesize leftFilter=_leftFilter;
@property(retain, nonatomic) IESMMARConfigurablePropertySet *propertySet; // @synthesize propertySet=_propertySet;
@property(retain, nonatomic) IESMMARCameraRendererWrapper *arRendererWrapper; // @synthesize arRendererWrapper=_arRendererWrapper;
@property(nonatomic) long long normalCameraMode; // @synthesize normalCameraMode=_normalCameraMode;
@property(nonatomic) long long arCameraMode; // @synthesize arCameraMode=_arCameraMode;
@property(nonatomic) long long cameraType; // @synthesize cameraType=_cameraType;
@property(retain, nonatomic) HTSGLResizeRotateFilter *arResizeRotateFilter; // @synthesize arResizeRotateFilter=_arResizeRotateFilter;
@property(retain, nonatomic) IESMMARCamera *arVideoCamera; // @synthesize arVideoCamera=_arVideoCamera;
@property(nonatomic) _Bool enableFaceuExposureOptimize; // @synthesize enableFaceuExposureOptimize=_enableFaceuExposureOptimize;
@property(nonatomic) _Bool adjustExposureAccordingFace; // @synthesize adjustExposureAccordingFace=_adjustExposureAccordingFace;
@property(nonatomic) _Bool enableExposureOptimize; // @synthesize enableExposureOptimize=_enableExposureOptimize;
@property(nonatomic) struct opaqueCMSampleBuffer *captureSampleBuf; // @synthesize captureSampleBuf=_captureSampleBuf;
@property(nonatomic) CDStruct_1b6d18a9 pts; // @synthesize pts=_pts;
@property(nonatomic) _Bool isFlashEnable; // @synthesize isFlashEnable=_isFlashEnable;
@property(retain, nonatomic) IESMMCaptureKitConfig *cameraConfigure; // @synthesize cameraConfigure=_cameraConfigure;
@property(retain, nonatomic) HTSFilterInterface *outputFilter; // @synthesize outputFilter=_outputFilter;
@property(retain, nonatomic) HTSFilterInterface *camOutFilter; // @synthesize camOutFilter=_camOutFilter;
@property(retain, nonatomic) VEGLCicleFilter *cicleFilter; // @synthesize cicleFilter=_cicleFilter;
@property(retain, nonatomic) HTSGLResizeRotateFilter *resizeFilter; // @synthesize resizeFilter=_resizeFilter;
@property(retain, nonatomic) HTSGLCropFilter *cropFilter; // @synthesize cropFilter=_cropFilter;
@property(retain, nonatomic) HTSGLFilterInput *inputFilter; // @synthesize inputFilter=_inputFilter;
@property(retain, nonatomic) NSMutableArray *observerArray; // @synthesize observerArray=_observerArray;
@property(nonatomic) __weak IESMMCaptureBase *currentCamera; // @synthesize currentCamera=_currentCamera;
@property(retain, nonatomic) IESMMCaptureKit *normalCamera; // @synthesize normalCamera=_normalCamera;
@property(nonatomic) _Bool pureCameraMode; // @synthesize pureCameraMode=_pureCameraMode;
@property(retain, nonatomic) UIView *previewSuperview; // @synthesize previewSuperview=_previewSuperview;
@property(retain, nonatomic) VEImageDetector *veImageDetector; // @synthesize veImageDetector=_veImageDetector;
@property(nonatomic) _Bool autoZoomWithAlgorithm; // @synthesize autoZoomWithAlgorithm=_autoZoomWithAlgorithm;
@property(nonatomic) _Bool needAutoRotationFlag; // @synthesize needAutoRotationFlag=_needAutoRotationFlag;
@property(nonatomic) int recordType; // @synthesize recordType=_recordType;
@property(nonatomic) int pictureNum; // @synthesize pictureNum=_pictureNum;
@property(nonatomic) _Bool disableFaceDetectReferCamera; // @synthesize disableFaceDetectReferCamera=_disableFaceDetectReferCamera;
@property(retain, nonatomic) HTSLayerPreview *layerPreviewView; // @synthesize layerPreviewView=_layerPreviewView;
@property(retain, nonatomic) HTSGLPreview *previewView; // @synthesize previewView=_previewView;
@property(retain, nonatomic) IESMMEffectGroup *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(nonatomic) _Bool isKVORemoved; // @synthesize isKVORemoved=_isKVORemoved;
@property(nonatomic) _Bool isUsedSystemPreview; // @synthesize isUsedSystemPreview=_isUsedSystemPreview;
@property(nonatomic) _Bool ignoreNotification; // @synthesize ignoreNotification=_ignoreNotification;
@property(nonatomic) long long cameraStablizationMode; // @synthesize cameraStablizationMode=_cameraStablizationMode;
@property(nonatomic) long long cameraFlashMode; // @synthesize cameraFlashMode=_cameraFlashMode;
@property(nonatomic) _Bool torchOn; // @synthesize torchOn=_torchOn;
@property(nonatomic) long long previewModeType; // @synthesize previewModeType=_previewModeType;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(retain, nonatomic) IESMMCameraConfig *config; // @synthesize config=_config;
@property(copy, nonatomic) CDUnknownBlockType firstRenderBlock; // @synthesize firstRenderBlock=_firstRenderBlock;
@property(copy, nonatomic) CDUnknownBlockType IESCameraActionBlock; // @synthesize IESCameraActionBlock=_IESCameraActionBlock;
@property(nonatomic) long long preferredCameraType; // @synthesize preferredCameraType=_preferredCameraType;
@property(copy, nonatomic) CDUnknownBlockType pAudioBufferCallback; // @synthesize pAudioBufferCallback=_pAudioBufferCallback;
- (void).cxx_destruct;
- (void)p_handleTapOnPreviewView:(id)arg1;
- (void)registerMediaServicesResetNotify;
- (void)registerEnterBackgroundNotify;
- (void)registerResignActiveNotify;
- (void)registerEnterForegroundNotify;
- (void)registerBecomeActiveNotify;
- (void)setupARVideoCameraWithCameraType:(long long)arg1;
- (void)switchToCameraType:(long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType onCameraTypeDidChangeBlock; // @synthesize onCameraTypeDidChangeBlock=_onCameraTypeDidChangeBlock;
@property(retain, nonatomic) HTSRawDataOutputRender *frameBufferOutputFilter; // @synthesize frameBufferOutputFilter=_frameBufferOutputFilter;
@property(copy, nonatomic) CDUnknownBlockType pVideoProcessedBufferCallback; // @synthesize pVideoProcessedBufferCallback=_pVideoProcessedBufferCallback;
@property(copy, nonatomic) CDUnknownBlockType pVideoBufferCallback; // @synthesize pVideoBufferCallback=_pVideoBufferCallback;
@property(nonatomic) long long outputDirection; // @synthesize outputDirection=_outputDirection;
@property(readonly, nonatomic) long long currentCameraPosition;
@property(readonly, nonatomic) float ISO;
- (void)__exposeAtCameraPosition:(struct CGPoint)arg1 isAuto:(_Bool)arg2;
- (void)__focusAtCameraPosition:(struct CGPoint)arg1 isAuto:(_Bool)arg2;
- (void)p_initCameraSubjectAreaDetectBlock;
- (void)p_registerFirstFrameMessage;
- (void)p_storeCaptureBuffer:(struct opaqueCMSampleBuffer *)arg1;
- (void)p_resumeCameraCapture;
- (void)p_pauseCameraCapture;
- (void)resumeCameraCapture;
- (void)pauseCameraCapture;
- (void)stopVideoCapture;
- (void)p_handleCaptureOutputBuffer:(struct opaqueCMSampleBuffer *)arg1 bufferInfo:(id)arg2;
- (void)startVideoCapture;
- (void)stopAudioCapture;
- (void)stopAudioCaptureSync;
- (void)startAudioCapture;
- (void)p_switchCameraSource;
- (void)switchCameraSource;
- (void)dealloc;
- (void)p_enableFaceDetect:(_Bool)arg1;
- (void)resetPreferredFrameRateWithMinimum:(unsigned long long)arg1 maxmum:(unsigned long long)arg2;
- (void)resetPreferredFrameRate:(unsigned long long)arg1;
- (void)resumeHTSGLPreview:(id)arg1;
- (void)removeHTSGLPreview;
- (void)removeLayerPreview;
- (void)resetPreviewType:(long long)arg1;
- (id)resetPreviewView:(id)arg1;
- (struct CGRect)p_cropRegionForInputSize:(struct CGSize)arg1 outputSize:(struct CGSize)arg2;
- (struct CGRect)p_cropRegionForOutputSize:(struct CGSize)arg1;
- (_Bool)p_isCropFilterNeeded;
- (void)p_initLayerPreview:(id)arg1;
- (void)p_initPreview:(id)arg1;
- (void)p_initEffect;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)p_resetFilterChain;
- (void)p_initCameraKit:(CDUnknownBlockType)arg1;
- (void)trackRecordParam;
- (void)initVEImageDetector;
- (id)initWithView:(id)arg1 config:(id)arg2 cameraComplete:(CDUnknownBlockType)arg3;
- (void)resetOutputSize:(struct CGSize)arg1;
- (void)resetCaptureRatio:(long long)arg1 preferredPreset:(id)arg2 previewHeight:(double)arg3 outputHeight:(double)arg4 then:(CDUnknownBlockType)arg5;
- (void)resetCaptureRatio:(long long)arg1 preferredPreset:(id)arg2 then:(CDUnknownBlockType)arg3;
- (void)resetCaptureRatio:(long long)arg1 preferredSize:(struct CGSize)arg2 then:(CDUnknownBlockType)arg3;
- (void)resetCaptureRatio:(long long)arg1 then:(CDUnknownBlockType)arg2;
- (void)resetCapturePreset:(id)arg1 then:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long captureRatio;
@property(nonatomic) long long orientation;
@property(readonly, nonatomic) struct CGSize captureSize;
- (void)enableFrontCameraMirrored:(_Bool)arg1;
- (void)tapExposureAtPoint:(struct CGPoint)arg1;
- (void)tapFocusAtPoint:(struct CGPoint)arg1;
- (_Bool)isCameraCapabilitySupported:(unsigned long long)arg1;
- (_Bool)cameraSetZoomFactor:(double)arg1;
- (_Bool)cameraRampToZoomFactor:(double)arg1 withRate:(double)arg2;
- (void)setMaxZoomFactor:(double)arg1;
- (double)maxCameraZoomFactor;
- (double)currentCameraZoomFactor;
- (id)cameraZoomSupportedInfo;
- (void)changeExposureBias:(double)arg1;
- (double)minExposureBias;
- (double)maxExposureBias;
- (void)setAudioBufferCallback:(CDUnknownBlockType)arg1;
- (void)setVideoProcessedBufferCallback:(CDUnknownBlockType)arg1;
- (void)setVideoBufferCallback:(CDUnknownBlockType)arg1;
- (struct AudioStreamBasicDescription)getAudioCaptureFormat;
- (void)setCameraInfoBlock:(CDUnknownBlockType)arg1 withCameraInfoRequirement:(unsigned long long)arg2;
- (unsigned long long)getCurrentCameraInfoRequirement;
- (void)resetCameraInfoRequirement:(unsigned long long)arg1;
- (struct CGSize)getMaxHDSize;
- (struct CGSize)p_getMaxRenderSize;
- (void)__processImageCaptureResultWithOptions:(id)arg1 image:(id)arg2 error:(id)arg3 then:(CDUnknownBlockType)arg4;
- (void)__syncFetchImageFromBuffer:(CDUnknownBlockType)arg1;
- (void)captureImageWithOptions:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)captureHDImageWith:(struct CGSize)arg1 completionHandle:(CDUnknownBlockType)arg2;
- (void)captureSourcePhotoAsImageWithCompletionHandler:(CDUnknownBlockType)arg1 afterProcess:(_Bool)arg2;
- (void)captureSourcePhotoAsImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)captureStillImage:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) id <IESMMCameraWhiteBalanceProtocol> wbObj;
- (void)removeStickerWithKey:(id)arg1;
- (void)addSticker:(id)arg1;
- (void)updateComposerNode:(id)arg1 tag:(id)arg2 value:(double)arg3;
- (id)getCurrentComposerNodes;
- (float)getValueForComposerNode:(id)arg1 key:(id)arg2;
- (_Bool)updateComposerNode:(id)arg1 key:(id)arg2 value:(double)arg3;
- (_Bool)replaceComposerNodesWithNew:(id)arg1 old:(id)arg2;
- (_Bool)operateComposerNodes:(id)arg1 operation:(long long)arg2;
- (void)removeComposerNodes:(id)arg1;
- (void)appendComposerNodes:(id)arg1;
- (void)reloadComposerNodes:(id)arg1;
- (void)applyComposerNodes:(id)arg1 enableFakeFace:(_Bool)arg2;
- (void)applyComposerNodes:(id)arg1;
- (int)enableFilterAutomaticRecommmand:(_Bool)arg1 type:(unsigned long long)arg2;
- (void)setMaxStickerMemoryCache:(unsigned long long)arg1;
- (void)applyReshape:(id)arg1 withIndensity:(struct IESIndensityParam_t)arg2;
- (void)applyIndensity:(struct IESIndensityParam_t)arg1 type:(long long)arg2;
- (void)applyEffectWithInfo:(id)arg1 type:(long long)arg2 enableFakeFace:(_Bool)arg3;
- (void)applyEffect:(id)arg1 type:(long long)arg2 enableFakeFace:(_Bool)arg3;
- (void)applyEffectKey:(id)arg1 image:(id)arg2;
- (void)applyEffectWithInfo:(id)arg1 type:(long long)arg2;
- (void)applyEffect:(id)arg1 type:(long long)arg2;
- (long long)getRecordState;
- (void)switchFilterWithLeftPath:(id)arg1 rightPath:(id)arg2 progress:(double)arg3;
- (_Bool)handleDoubleClickEvent:(struct CGPoint)arg1;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handleLongPressEventWithLocation:(struct CGPoint)arg1;
- (_Bool)handlePanEventWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleTouchDown:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handlePanEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp:(struct CGPoint)arg1;
- (_Bool)handleTouchDown:(struct CGPoint)arg1;
- (void)pauseBGM:(unsigned long long)arg1;
- (void)startBGM:(unsigned long long)arg1;
- (void)enableBGM:(_Bool)arg1;
- (_Bool)getSLAMPlaneDetectStatus;
- (_Bool)isSLAMRunning;
- (long long)getSLAMStatus;
@property(copy, nonatomic) CDUnknownBlockType messageHandler; // @dynamic messageHandler;
- (void)sendMessageToEffect:(id)arg1;
- (void)setAuxiliaryImage:(id)arg1 withKey:(id)arg2;
- (void)deleteImageTextureForKey:(id)arg1;
- (void)removeAllAuxiliaryImages;
- (id)getAuxiliaryTextureKeys;
- (void)forceDetectBuffer:(long long)arg1;
- (void)setAlgorithmResultRequirement:(unsigned long long)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)setAlgorithmRequirement:(unsigned long long)arg1 algorithmParam:(unsigned long long)arg2 enableDetect:(_Bool)arg3;
- (void)setAlgorithmRequirement:(unsigned long long)arg1 enableDetect:(_Bool)arg2;
- (void)setPreferredAlgorithmSize:(struct CGSize)arg1;
- (_Bool)setMattingDetectModel:(_Bool)arg1;
- (_Bool)setScanParam:(id)arg1;
- (_Bool)updatFaceDectectIntervalTime:(int)arg1;
- (_Bool)setHandDetectLowpower:(_Bool)arg1;
- (void)setEffectLoadStatusBlock:(CDUnknownBlockType)arg1;
- (id)getEffectTextArray;
- (void)setInputKeyboardHide:(_Bool)arg1;
- (void)setEffectText:(id)arg1 arg1:(int)arg2 arg2:(int)arg3 arg3:(const char *)arg4;
- (void)setInputLanguage:(id)arg1;
- (long long)effectTextLimit;
@property(copy, nonatomic) CDUnknownBlockType effectBitmapRequestBlock;
- (id)arCameraDelegate;
- (void)setArCameraDelegate:(id)arg1;
- (_Bool)save3DObjectMeshToFile:(id)arg1;
- (_Bool)handleFinishManipulate3DObject;
- (_Bool)handleEndManipulate3DObject;
- (_Bool)handleManipulate3DObject;
- (_Bool)handleBeginManipulate3DObject;
- (void)renderPicImage:(id)arg1 withKey:(id)arg2;
- (void)renderPic:(id)arg1 withKey:(id)arg2;
- (_Bool)detectPhotoContent:(id)arg1 withAlgorithm:(id)arg2;
- (void)setRenderCacheStringByKey:(id)arg1 value:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

