//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAsset, AVAssetImageGenerator, AVMutableVideoComposition, NSError, NSURL, YYImageEncoder;

@interface AWEAnimatedCoverImageExportSession : NSObject
{
    float _progress;
    AVAsset *_asset;
    NSURL *_outputURL;
    long long _status;
    NSError *_error;
    AVMutableVideoComposition *_videoComposition;
    YYImageEncoder *_encoder;
    AVAssetImageGenerator *_imageGenerator;
    CDUnknownBlockType _completion;
    struct CGSize _maxExportSize;
    CDStruct_1b6d18a9 _suggestedStartTime;
    CDStruct_1b6d18a9 _suggestedDuration;
    CDStruct_1b6d18a9 _startTime;
    CDStruct_1b6d18a9 _duration;
    CDStruct_1b6d18a9 _sampleInterval;
}

+ (id)exportSessionWithAsset:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) AVAssetImageGenerator *imageGenerator; // @synthesize imageGenerator=_imageGenerator;
@property(retain, nonatomic) YYImageEncoder *encoder; // @synthesize encoder=_encoder;
@property(retain, nonatomic) AVMutableVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(nonatomic) CDStruct_1b6d18a9 sampleInterval; // @synthesize sampleInterval=_sampleInterval;
@property(nonatomic) struct CGSize maxExportSize; // @synthesize maxExportSize=_maxExportSize;
@property(nonatomic) CDStruct_1b6d18a9 duration; // @synthesize duration=_duration;
@property(nonatomic) CDStruct_1b6d18a9 startTime; // @synthesize startTime=_startTime;
@property(nonatomic) CDStruct_1b6d18a9 suggestedDuration; // @synthesize suggestedDuration=_suggestedDuration;
@property(nonatomic) CDStruct_1b6d18a9 suggestedStartTime; // @synthesize suggestedStartTime=_suggestedStartTime;
@property(retain, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
- (void).cxx_destruct;
- (void)cancelExport;
- (void)process:(id)arg1;
- (id)customizeBuffer:(id)arg1;
- (void)exportAsynchronouslyWithCompletionHandler:(CDUnknownBlockType)arg1;
- (int)size;
- (id)initWithAsset:(id)arg1;

@end

