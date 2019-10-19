//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

@class IESMMEffectConfig, IESMMMVEffectFilter, NSArray, NSMutableArray, NSMutableDictionary;

@interface IESMMProcessFilter : HTSGLFilter
{
    NSMutableDictionary *_inputRotations;
    NSMutableDictionary *_hasReceivedFrame;
    NSMutableDictionary *_frameCheckDisabled;
    NSMutableDictionary *_frameTime;
    NSMutableDictionary *_frameBuffers;
    double _timeStamp;
    long long _textureIndexCount;
    NSArray *_validResourceID;
    NSMutableArray *_currentUnRecvResourceID;
    IESMMMVEffectFilter *_effectFilter;
    IESMMEffectConfig *_config;
}

@property(retain, nonatomic) IESMMEffectConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) IESMMMVEffectFilter *effectFilter; // @synthesize effectFilter=_effectFilter;
@property(retain, nonatomic) NSMutableArray *currentUnRecvResourceID; // @synthesize currentUnRecvResourceID=_currentUnRecvResourceID;
@property(retain, nonatomic) NSArray *validResourceID; // @synthesize validResourceID=_validResourceID;
@property(nonatomic) long long textureIndexCount; // @synthesize textureIndexCount=_textureIndexCount;
@property(nonatomic) double timeStamp; // @synthesize timeStamp=_timeStamp;
@property(retain, nonatomic) NSMutableDictionary *frameBuffers; // @synthesize frameBuffers=_frameBuffers;
@property(retain, nonatomic) NSMutableDictionary *frameTime; // @synthesize frameTime=_frameTime;
@property(retain, nonatomic) NSMutableDictionary *frameCheckDisabled; // @synthesize frameCheckDisabled=_frameCheckDisabled;
@property(retain, nonatomic) NSMutableDictionary *hasReceivedFrame; // @synthesize hasReceivedFrame=_hasReceivedFrame;
@property(retain, nonatomic) NSMutableDictionary *inputRotations; // @synthesize inputRotations=_inputRotations;
- (void).cxx_destruct;
- (void)releaseRenderManager;
- (void)dealloc;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (id)getIDWithTextureIndex:(long long)arg1;
- (void)setValidResourcesID:(id)arg1;
- (struct CGSize)rotatedSize:(struct CGSize)arg1 forIndex:(long long)arg2;
- (void)setInputRotation:(unsigned long long)arg1 atIndex:(long long)arg2;
- (void)setInputSize:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setInputFramebuffer:(id)arg1 atIndex:(long long)arg2;
- (long long)nextAvailableTextureIndex;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (struct CGSize)sizeOfFBO;
- (void)initializeAttributes;
- (void)setFrameBuffer:(id)arg1 forTextureIndex:(long long)arg2;
- (id)frameBufferForTextureIndex:(long long)arg1;
- (void)setReceiveFrame:(_Bool)arg1 forIndex:(long long)arg2;
- (_Bool)hasReceiverdFrameForTextureIndex:(long long)arg1;
- (void)setInputRotaion:(unsigned long long)arg1 forIndex:(long long)arg2;
- (unsigned long long)inputRotationForTextureIndex:(long long)arg1;
- (void)setFrameCheckDisabled:(_Bool)arg1 forTextureIndex:(long long)arg2;
- (_Bool)frameCheckDiabledForTextureIndex:(long long)arg1;
- (void)setFrameTIme:(CDStruct_1b6d18a9)arg1 forTextureIndex:(long long)arg2;
- (CDStruct_1b6d18a9)frameTimeForTextureIndex:(long long)arg1;
- (id)initWithConfig:(id)arg1 effectFilter:(id)arg2;

@end

