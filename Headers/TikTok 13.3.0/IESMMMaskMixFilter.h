//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilterTwoInput.h"

@class HTSGLFramebuffer, UIImage;

@interface IESMMMaskMixFilter : HTSGLFilterTwoInput
{
    double xPos;
    double yPos;
    HTSGLFramebuffer *maskFramebuffer;
    int _typeUniform;
    int _maskTextureUniform;
    float _rotation;
    UIImage *_maskImage;
    struct CGPoint _frontTexturePoint;
    struct CGSize _frontTextureSize;
    struct CGSize _targetSize;
    struct CGSize _frameSize;
}

@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
@property(nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
@property(nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property(nonatomic) float rotation; // @synthesize rotation=_rotation;
@property(nonatomic) struct CGSize frontTextureSize; // @synthesize frontTextureSize=_frontTextureSize;
@property(nonatomic) struct CGPoint frontTexturePoint; // @synthesize frontTexturePoint=_frontTexturePoint;
- (void).cxx_destruct;
- (struct CGPoint)getPoint:(struct CGPoint)arg1 angle:(float)arg2 centerPoint:(struct CGPoint)arg3;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (void)updateWatermarkFramebuffer;
- (struct CGSize)sizeOfFBO;
- (_Bool)renderUIImage:(id)arg1 toFramebuffer:(id)arg2;
- (void)initializeAttributes;
- (void)dealloc;
- (void)updateMaskImage:(id)arg1;
- (id)initWithMaskImage:(id)arg1;
- (id)init;

@end

