//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSGLFilter.h"

@class NSMutableArray;

@interface HTSGLFilterBuffer : HTSGLFilter
{
    NSMutableArray *bufferedFramebuffers;
    unsigned long long _bufferSize;
}

@property(nonatomic) unsigned long long bufferSize; // @synthesize bufferSize=_bufferSize;
- (void).cxx_destruct;
- (void)renderToTextureWithVertices:(const float *)arg1 textureCoordinates:(const float *)arg2;
- (void)newFrameReadyAtTime:(CDStruct_1b6d18a9)arg1 atIndex:(long long)arg2 exceptionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)init;

@end

