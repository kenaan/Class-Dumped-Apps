//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "RTCVideoFrameBuffer-Protocol.h"

@class NSString;

@interface BigAVRTCCVPixelBuffer : NSObject <RTCVideoFrameBuffer>
{
    int _width;
    int _height;
    int _bufferWidth;
    int _bufferHeight;
    int _cropWidth;
    int _cropHeight;
    unsigned int _textureID;
    unsigned int _luminanceTextureID;
    unsigned int _chrominanceTextureID;
    unsigned int _uTextureID;
    unsigned int _vTextureID;
    int _cropX;
    int _cropY;
    struct __CVBuffer *_pixelBuffer;
}

+ (id)supportedPixelFormats;
@property(readonly, nonatomic) int cropY; // @synthesize cropY=_cropY;
@property(readonly, nonatomic) int cropX; // @synthesize cropX=_cropX;
@property(readonly, nonatomic) unsigned int vTextureID; // @synthesize vTextureID=_vTextureID;
@property(readonly, nonatomic) unsigned int uTextureID; // @synthesize uTextureID=_uTextureID;
@property(readonly, nonatomic) unsigned int chrominanceTextureID; // @synthesize chrominanceTextureID=_chrominanceTextureID;
@property(readonly, nonatomic) unsigned int luminanceTextureID; // @synthesize luminanceTextureID=_luminanceTextureID;
@property(readonly, nonatomic) unsigned int textureID; // @synthesize textureID=_textureID;
@property(readonly, nonatomic) struct __CVBuffer *pixelBuffer; // @synthesize pixelBuffer=_pixelBuffer;
- (void)cropAndScaleARGBTo:(struct __CVBuffer *)arg1;
- (id)toI420;
- (_Bool)cropAndScaleTo:(struct __CVBuffer *)arg1 withTempBuffer:(char *)arg2;
- (int)bufferSizeForCroppingAndScalingToWidth:(int)arg1 height:(int)arg2;
- (_Bool)requiresScalingToWidth:(int)arg1 height:(int)arg2;
- (_Bool)requiresCropping;
@property(readonly, nonatomic) int bufferHeight;
@property(readonly, nonatomic) int bufferWidth;
@property(readonly, nonatomic) int height;
@property(readonly, nonatomic) int width;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 andLuminanceTexture:(unsigned int)arg2 andChrominanceTexture:(unsigned int)arg3 andChromaTexture:(unsigned int)arg4 adaptedWidth:(int)arg5 adaptedHeight:(int)arg6 cropWidth:(int)arg7 cropHeight:(int)arg8 cropX:(int)arg9 cropY:(int)arg10;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 andLuminanceTexture:(unsigned int)arg2 andChrominanceTexture:(unsigned int)arg3 adaptedWidth:(int)arg4 adaptedHeight:(int)arg5 cropWidth:(int)arg6 cropHeight:(int)arg7 cropX:(int)arg8 cropY:(int)arg9;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 andTexture:(unsigned int)arg2 adaptedWidth:(int)arg3 adaptedHeight:(int)arg4 cropWidth:(int)arg5 cropHeight:(int)arg6 cropX:(int)arg7 cropY:(int)arg8;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 andLuminanceTexture:(unsigned int)arg2 andChrominanceTexture:(unsigned int)arg3 andChromaTexture:(unsigned int)arg4;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 andTexture:(unsigned int)arg2;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 andLuminanceTexture:(unsigned int)arg2 andChrominanceTexture:(unsigned int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

