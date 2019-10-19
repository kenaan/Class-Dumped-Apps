//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, UIImage, UIView;

@protocol IESLiveCamera <NSObject>
@property(copy, nonatomic) CDUnknownBlockType CaptureFailure;
- (void)setMaxStickerMemCacheSize:(unsigned long long)arg1;
- (void)resetContext;
- (CDStruct_5706cf93)getCameraParamConfig;
- (void)setCameraParamWithConfig:(CDStruct_5706cf93)arg1;
- (void)setIgnoreNotification:(_Bool)arg1;
- (void)stopAudioCapture;
- (void)stopVideoCapture;
- (void)startAudioCapture;
- (void)startVideoCapture;
- (void)resetCameraPreviewView:(UIView *)arg1;
- (void)setPureCameraMode:(_Bool)arg1;
- (void)setTorchOn:(_Bool)arg1;
- (void)setMirror:(_Bool)arg1;
- (double)setZoomScale:(double)arg1;
- (long long)switchCamera;
- (long long)cameraFlashMode;
- (long long)currentCameraPosition;
- (void)setVideoProcessedCallback:(void (^)(struct __CVBuffer *, int, struct))arg1;
- (void)setVideoProcessedBufferCallback:(void (^)(struct __CVBuffer *, struct))arg1;
- (void)setFaceDetectStatusBlock:(void (^)(_Bool))arg1;
- (void)applyBeautyComposerNodes;
- (void)removeAllComposerNode;
- (void)removeGameSticker;
- (void)applyGameStickerComposerPath:(NSString *)arg1;
- (void)applyStickerGoldEffectWithImage:(UIImage *)arg1 withKey:(NSString *)arg2;
- (void)applyComposerNodes:(NSArray *)arg1 enableFakeFace:(_Bool)arg2;
- (void)setFaceReshapeLevel:(unsigned long long)arg1;
- (void)applyStickerWithPath:(NSString *)arg1 enableFakeFace:(_Bool)arg2;
- (void)setBeautifyType:(unsigned long long)arg1 level:(long long)arg2;
- (void)setEyeValue:(long long)arg1 cheekValue:(long long)arg2;
- (void)setSmoothValue:(long long)arg1 whiteValue:(long long)arg2;
- (void)switchFilterWithLeftPath:(NSString *)arg1 rightPath:(NSString *)arg2 progress:(double)arg3;
- (void)applyFilterWithPath:(NSString *)arg1;

@optional
- (void)applyBeautyDetailComposerNodes:(NSArray *)arg1;
- (void)updateComposerNode:(NSString *)arg1 tag:(NSString *)arg2 value:(double)arg3;
- (_Bool)cameraTorchOn;
@end

