//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HTSGLContext, IESMMSampleBufferInfo, NSString;

@interface HTSGLFramebuffer : NSObject
{
    unsigned int framebuffer;
    struct __CVBuffer *renderTarget;
    struct __CVBuffer *renderTexture;
    unsigned long long readLockCount;
    unsigned long long framebufferReferenceCount;
    _Bool referenceCountingDisabled;
    _Bool useOutPixelBuffer;
    _Bool _missingFramebuffer;
    unsigned int _texture;
    NSString *_lookupHash;
    HTSGLContext *_context;
    long long _sourceID;
    NSString *_filterID;
    IESMMSampleBufferInfo *_sampleInfo;
    struct CGSize _size;
    struct HTSGPUTextureOptions _textureOptions;
}

@property(retain, nonatomic) IESMMSampleBufferInfo *sampleInfo; // @synthesize sampleInfo=_sampleInfo;
@property(retain, nonatomic) NSString *filterID; // @synthesize filterID=_filterID;
@property(nonatomic) long long sourceID; // @synthesize sourceID=_sourceID;
@property(readonly) HTSGLContext *context; // @synthesize context=_context;
@property(retain, nonatomic) NSString *lookupHash; // @synthesize lookupHash=_lookupHash;
@property(readonly) _Bool missingFramebuffer; // @synthesize missingFramebuffer=_missingFramebuffer;
@property(readonly) struct HTSGPUTextureOptions textureOptions; // @synthesize textureOptions=_textureOptions;
@property(readonly) struct CGSize size; // @synthesize size=_size;
- (void).cxx_destruct;
@property(readonly) unsigned int texture; // @synthesize texture=_texture;
- (void)setPixelBuffer:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)pixelBuffer;
- (char *)byteBuffer;
- (unsigned long long)bytesPerRow;
- (void)unlockAfterReading;
- (void)lockForReading;
- (void)restoreRenderTarget;
- (struct CGImage *)newCGImageFromFramebufferContents;
- (void)enableReferenceCounting;
- (void)disableReferenceCounting;
- (void)clearAllLocks;
- (void)unlock;
- (void)lock;
- (void)activateFramebuffer;
- (void)destroyFramebuffer;
- (void)generateFramebufferWithPixelBuffer:(struct __CVBuffer *)arg1;
- (void)generateFramebuffer;
- (void)generateTexture;
- (void)dealloc;
- (id)initWithPixelBuffer:(struct __CVBuffer *)arg1 context:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct HTSGPUTextureOptions)arg2 onlyTexture:(_Bool)arg3;
- (id)initWithSize:(struct CGSize)arg1 textureOptions:(struct HTSGPUTextureOptions)arg2 onlyTexture:(_Bool)arg3 context:(id)arg4;
- (long long)getFramebufferReferenceCount;

@end

