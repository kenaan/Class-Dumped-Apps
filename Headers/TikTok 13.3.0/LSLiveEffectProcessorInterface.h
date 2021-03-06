//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSLiveEffectAlgorithmProtocol-Protocol.h"
#import "LSLiveEffectGestureProtocol-Protocol.h"
#import "LSLiveEffectMessageProtocol-Protocol.h"
#import "LSLiveEffectProcessProtocol-Protocol.h"
#import "LSLiveEffectResourceProtocol-Protocol.h"

@class LSGLContext, NSString;

@interface LSLiveEffectProcessorInterface : NSObject <LSLiveEffectProcessProtocol, LSLiveEffectResourceProtocol, LSLiveEffectAlgorithmProtocol, LSLiveEffectMessageProtocol, LSLiveEffectGestureProtocol>
{
    _Bool _enabled;
    _Bool _enableFakeFace;
    long long _cameraPosition;
    NSString *_triggerAction;
    LSGLContext *_context;
    CDUnknownBlockType _effectMsgBlock;
    CDUnknownBlockType _effectLogToFileBlock;
    CDUnknownBlockType _stickerStatusBlock;
    struct CGSize _videoDimensions;
}

+ (id)createInstanceWithConfig:(id)arg1 context:(id)arg2;
@property(nonatomic) _Bool enableFakeFace; // @synthesize enableFakeFace=_enableFakeFace;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) CDUnknownBlockType stickerStatusBlock; // @synthesize stickerStatusBlock=_stickerStatusBlock;
@property(copy, nonatomic) CDUnknownBlockType effectLogToFileBlock; // @synthesize effectLogToFileBlock=_effectLogToFileBlock;
@property(copy, nonatomic) CDUnknownBlockType effectMsgBlock; // @synthesize effectMsgBlock=_effectMsgBlock;
@property(retain, nonatomic) LSGLContext *context; // @synthesize context=_context;
@property(readonly, nonatomic) NSString *triggerAction; // @synthesize triggerAction=_triggerAction;
@property(nonatomic) struct CGSize videoDimensions; // @synthesize videoDimensions=_videoDimensions;
@property(nonatomic) long long cameraPosition; // @synthesize cameraPosition=_cameraPosition;
- (void).cxx_destruct;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handleLongPressEventWithLocation:(struct CGPoint)arg1;
- (_Bool)handlePanEventWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleTouchDown:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (void)setAudioPlayerFactory:(void *)arg1;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2 param2:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2 param2:(unsigned long long)arg3;
- (void)sendMessage:(unsigned long long)arg1 param1:(unsigned long long)arg2;
- (void)sendMessage:(unsigned long long)arg1;
- (void)resumeEffect:(long long)arg1;
- (void)pauseEffect:(long long)arg1;
- (void)setMaxStickerMemoryCache:(unsigned long long)arg1;
- (void)switchFilterWithPathOne:(id)arg1 pathTwo:(id)arg2 progress:(double)arg3;
- (void)applyReshape:(id)arg1 withIntensity:(struct LSLiveIntensityParam_t)arg2;
- (void)applyIntensity:(struct LSLiveIntensityParam_t)arg1 type:(long long)arg2;
- (int)updateComposerNode:(id)arg1 tag:(id)arg2 value:(double)arg3;
- (int)applyComposerNodes:(id)arg1;
- (int)setComposerMode:(int)arg1 orderType:(int)arg2;
- (int)applyEffectKey:(id)arg1 image:(id)arg2;
- (int)applyEffect:(id)arg1 type:(long long)arg2;
- (void)updateAlgorithmResultAccordMsg:(unsigned long long)arg1;
- (_Bool)setMattingDetectModel:(_Bool)arg1;
- (_Bool)updatFaceDectectIntervalTime:(int)arg1;
- (_Bool)setHandDetectLowpower:(_Bool)arg1;
- (void)resetFacePointBlock:(CDUnknownBlockType)arg1;
- (void)setAlgorithmResultRequirement:(unsigned long long)arg1 withCallbackBlock:(CDUnknownBlockType)arg2;
- (void)setAlgorithmRequirement:(unsigned long long)arg1 enableDetect:(_Bool)arg2;
- (_Bool)effectProcessingWithTexture:(unsigned int)arg1 dstTexture:(unsigned int)arg2 timeStamp:(double)arg3;
- (int)p_processFakeFaceWithHanle:(void *)arg1 srcTexture:(int)arg2 dstTexture:(int)arg3 timeStamp:(double)arg4;
- (void)updateConfig:(id)arg1;
- (_Bool)releaseSDK;
- (void)restoreEffectIfNeeded;
- (void)initial;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

