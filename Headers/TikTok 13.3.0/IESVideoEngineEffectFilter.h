//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

#import "IESMMEngineBrushProtocol-Protocol.h"
#import "IESMMEngineStickerProtocol-Protocol.h"
#import "IESMMGestureProtocol-Protocol.h"

@class NSMutableArray, NSString;

@interface IESVideoEngineEffectFilter : HTSGLFilter <IESMMEngineBrushProtocol, IESMMEngineStickerProtocol, IESMMGestureProtocol>
{
    _Bool _needHighResolution;
    _Bool _isBrushisDrawing;
    _Bool _useAmazing;
    NSMutableArray *_infoStickers;
    CDUnknownBlockType _imageBlock;
    CDUnknownBlockType _stickerAddBlock;
    double _frameTimestamp;
    void *_engineHandle;
    long long _curStickerID;
    struct CGSize _curFrameSize;
}

@property(nonatomic) _Bool useAmazing; // @synthesize useAmazing=_useAmazing;
@property(nonatomic) long long curStickerID; // @synthesize curStickerID=_curStickerID;
@property(nonatomic) struct CGSize curFrameSize; // @synthesize curFrameSize=_curFrameSize;
@property(nonatomic) void *engineHandle; // @synthesize engineHandle=_engineHandle;
@property(nonatomic) _Bool isBrushisDrawing; // @synthesize isBrushisDrawing=_isBrushisDrawing;
@property(nonatomic) double frameTimestamp; // @synthesize frameTimestamp=_frameTimestamp;
@property(copy, nonatomic) CDUnknownBlockType stickerAddBlock; // @synthesize stickerAddBlock=_stickerAddBlock;
@property(copy, nonatomic) CDUnknownBlockType imageBlock; // @synthesize imageBlock=_imageBlock;
@property(nonatomic) _Bool needHighResolution; // @synthesize needHighResolution=_needHighResolution;
@property(retain, nonatomic) NSMutableArray *infoStickers; // @synthesize infoStickers=_infoStickers;
- (void).cxx_destruct;
- (_Bool)handleRotationEvent:(double)arg1;
- (_Bool)handleScaleEvent:(double)arg1;
- (_Bool)handlePanEventWithTranslation:(struct CGPoint)arg1 location:(struct CGPoint)arg2;
- (_Bool)handleLongPressEventWithLocation:(struct CGPoint)arg1;
- (_Bool)handleTouchEvent:(struct CGPoint)arg1;
- (_Bool)handleTouchUp:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)handleTouchDown:(struct CGPoint)arg1 withType:(unsigned long long)arg2;
- (_Bool)isAnimationSticker:(long long)arg1;
- (void)updateSticker:(long long)arg1;
- (int)setTextStickerPreviewMode:(long long)arg1 previewMode:(int)arg2;
- (int)updateTextSticker:(long long)arg1 animType:(int)arg2 duration:(double)arg3;
- (int)setTextStickerAnim:(long long)arg1 animType:(int)arg2 animPath:(id)arg3 duration:(double)arg4;
- (int)setTextStickerTextParams:(long long)arg1 textParams:(id)arg2;
- (int)setTextStickerTime:(long long)arg1 startTime:(double)arg2 duration:(double)arg3;
- (long long)addTextSticker;
- (long long)addLVSticker;
- (long long)addStickerbyUIImage:(id)arg1;
- (long long)currentBrushNumber;
- (void)setBrushCanvasAlpha:(double)arg1;
- (void)setBrushSize:(double)arg1;
- (void)setBrushColorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpah:(double)arg4;
- (void)removeLastBrush;
- (_Bool)brushStart;
- (_Bool)brushEnd;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)setStickerVisible:(id)arg1 visible:(_Bool)arg2;
- (void)getSticker:(long long)arg1 props:(id)arg2;
- (long long)stickerCount;
- (void)updateStickerLayers;
- (void)setStickerAbove:(long long)arg1;
- (void)setSticker:(long long)arg1 startTime:(double)arg2 duration:(double)arg3;
- (void)stopChangeStickerDuration:(long long)arg1;
- (void)startChangeStickerDuration:(long long)arg1;
- (void)setSticker:(long long)arg1 alpha:(double)arg2;
- (void)setSticker:(long long)arg1 pauseAnimation:(_Bool)arg2;
- (void)getSticker:(long long)arg1 flipX:(_Bool *)arg2 flipY:(_Bool *)arg3;
- (void)stopAllStickerAnimAbsoluteUpdate;
- (void)setSticker:(long long)arg1 animUpdateAbsolute:(_Bool)arg2;
- (void)setSticker:(long long)arg1 animId:(int)arg2 inTime:(double)arg3 stillTime:(double)arg4 outTime:(double)arg5;
- (void)setSticker:(long long)arg1 flipX:(_Bool)arg2 flipY:(_Bool)arg3;
- (void)setStickerScale:(long long)arg1 scale:(double)arg2;
- (void)setSticker:(long long)arg1 offsetX:(double)arg2 offsetY:(double)arg3 angle:(double)arg4 scale:(double)arg5;
- (void)removeSticker:(long long)arg1;
- (struct CGRect)getstickerEditBoundBox:(long long)arg1;
- (struct CGSize)getstickerEditBoxSize:(long long)arg1;
- (long long)addSticker:(id)arg1 withEffectInfo:(id)arg2 userInfo:(id)arg3;
- (id)getStickerById:(long long)arg1;
- (void)releaseEngine;
- (void)dealloc;
- (id)initWithSize:(struct CGSize)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

