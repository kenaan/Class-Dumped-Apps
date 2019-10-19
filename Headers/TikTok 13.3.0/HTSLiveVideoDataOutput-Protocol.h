//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol HTSLiveVideoDataOutput <NSObject>
- (NSString *)outputInfoString;
- (CDStruct_5706cf93)outputConfig;
- (void)pushVideoBuffer:(struct __CVBuffer *)arg1 texture:(int)arg2 andCMTime:(CDStruct_1b6d18a9)arg3;
- (void)writePixelBuffer:(struct __CVBuffer *)arg1 timeInfo:(CDStruct_1b6d18a9)arg2;

@optional
@property(nonatomic) long long maxTransportBitrate;
@property(nonatomic) long long minTransportBitrate;
@property(nonatomic) long long realTransportBitrate;
@property(nonatomic) _Bool mute;
- (_Bool)running;
- (void)startOutput;
- (void)stopOutputWithNext:(void (^)(void))arg1;
@end

