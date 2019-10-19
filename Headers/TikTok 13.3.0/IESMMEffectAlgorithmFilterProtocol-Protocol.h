//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESMMEffectConfig;

@protocol IESMMEffectAlgorithmFilterProtocol <NSObject>
@property(copy, nonatomic) CDUnknownBlockType facePointBlock;
@property(copy, nonatomic) CDUnknownBlockType algorithmDetectStatus;
@property(nonatomic) _Bool slamWithoutExtraDeviceMotionData;
@property(nonatomic) struct __CVBuffer *currentPixelBuffer;
@property(nonatomic) _Bool isFrontCamera;
@property(nonatomic) unsigned long long usedEffect;
- (id)initWithConfig:(IESMMEffectConfig *)arg1 effectHandle:(void *)arg2;
@end

