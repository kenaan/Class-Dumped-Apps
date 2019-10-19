//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "YYAnimatedImage-Protocol.h"

@class NSArray, NSData, NSObject, NSString, YYImageDecoder;
@protocol OS_dispatch_semaphore;

@interface YYImage : UIImage <YYAnimatedImage>
{
    YYImageDecoder *_decoder;
    NSArray *_preloadedFrames;
    NSObject<OS_dispatch_semaphore> *_preloadedLock;
    unsigned long long _bytesPerFrame;
    _Bool _preloadAllAnimatedImageFrames;
    unsigned long long _animatedImageType;
    unsigned long long _animatedImageMemorySize;
}

+ (id)imageWithData:(id)arg1 scale:(double)arg2;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageNamed:(id)arg1;
@property(nonatomic) _Bool preloadAllAnimatedImageFrames; // @synthesize preloadAllAnimatedImageFrames=_preloadAllAnimatedImageFrames;
@property(readonly, nonatomic) unsigned long long animatedImageMemorySize; // @synthesize animatedImageMemorySize=_animatedImageMemorySize;
@property(readonly, nonatomic) unsigned long long animatedImageType; // @synthesize animatedImageType=_animatedImageType;
- (void).cxx_destruct;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
- (unsigned long long)animatedImageBytesPerFrame;
- (unsigned long long)animatedImageLoopCount;
- (unsigned long long)animatedImageFrameCount;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) NSData *animatedImageData;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1;
- (id)initWithContentsOfFile:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

