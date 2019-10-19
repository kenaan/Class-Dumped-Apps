//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HTSVideoConfig : NSObject
{
    _Bool _isLongVideoEnaled;
    _Bool _isProductUseStandardMusicVideoDuration;
    long long _videoMinSeconds;
    long long _standardVideoMaxSeconds;
    long long _videoSelectableMaxSeconds;
    long long _musicMaxSeconds;
    unsigned long long _beautifyType;
    long long _faceDetectInterval;
    long long _videoMaxSeconds;
}

+ (_Bool)supportNewBeautify;
+ (id)defaultConfig;
@property(nonatomic) _Bool isProductUseStandardMusicVideoDuration; // @synthesize isProductUseStandardMusicVideoDuration=_isProductUseStandardMusicVideoDuration;
@property(nonatomic) _Bool isLongVideoEnaled; // @synthesize isLongVideoEnaled=_isLongVideoEnaled;
@property(nonatomic) long long videoMaxSeconds; // @synthesize videoMaxSeconds=_videoMaxSeconds;
@property(nonatomic) long long faceDetectInterval; // @synthesize faceDetectInterval=_faceDetectInterval;
@property(nonatomic) unsigned long long beautifyType; // @synthesize beautifyType=_beautifyType;
@property(nonatomic) long long musicMaxSeconds; // @synthesize musicMaxSeconds=_musicMaxSeconds;
@property(nonatomic) long long videoSelectableMaxSeconds; // @synthesize videoSelectableMaxSeconds=_videoSelectableMaxSeconds;
@property(nonatomic) long long standardVideoMaxSeconds; // @synthesize standardVideoMaxSeconds=_standardVideoMaxSeconds;
@property(nonatomic) long long videoMinSeconds; // @synthesize videoMinSeconds=_videoMinSeconds;
@property(readonly, nonatomic) long long videoUploadMaxSeconds;

@end

