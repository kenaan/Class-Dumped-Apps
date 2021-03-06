//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, RTCEncodedImage, RTCRtpFragmentationHeader, RTCVideoEncoderSettings;
@protocol RTCCodecSpecificInfo;

@protocol RTCVideoDecoder <NSObject>
- (NSString *)implementationName;
- (long long)decode:(RTCEncodedImage *)arg1 missingFrames:(_Bool)arg2 fragmentationHeader:(RTCRtpFragmentationHeader *)arg3 codecSpecificInfo:(id <RTCCodecSpecificInfo>)arg4 renderTimeMs:(long long)arg5;
- (long long)releaseDecoder;
- (long long)startDecodeWithSettings:(RTCVideoEncoderSettings *)arg1 numberOfCores:(int)arg2;
- (void)setCallback:(void (^)(RTCVideoFrame *))arg1;
@end

