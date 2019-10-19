//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class AVAssetExportSession, IESMMAudioFile, NSString;

@interface IESMMMediaExporter : IESMMObject
{
    _Bool _exportFinish;
    _Bool _isResampleInterrupt;
    NSString *_prefix;
    NSString *_aFileType;
    NSString *_vFileType;
    AVAssetExportSession *_exportSession;
    IESMMAudioFile *_audioReader;
}

@property(nonatomic) _Bool isResampleInterrupt; // @synthesize isResampleInterrupt=_isResampleInterrupt;
@property(retain, nonatomic) IESMMAudioFile *audioReader; // @synthesize audioReader=_audioReader;
@property(nonatomic) _Bool exportFinish; // @synthesize exportFinish=_exportFinish;
@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
@property(nonatomic) NSString *vFileType; // @synthesize vFileType=_vFileType;
@property(nonatomic) NSString *aFileType; // @synthesize aFileType=_aFileType;
@property(copy, nonatomic) NSString *prefix; // @synthesize prefix=_prefix;
- (void).cxx_destruct;
- (void)__exportWithType:(long long)arg1 isNeedsResample:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)__prepareExportWithType:(long long)arg1 isNeedsResample:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) double progress;
- (void)cancelExport;
- (void)exportMediaWithVideo:(id)arg1 audio:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)exportAudioFromMedia:(id)arg1 isNeedsResample:(_Bool)arg2 excludeTrackFilter:(CDUnknownBlockType)arg3 compltionHandler:(CDUnknownBlockType)arg4;
- (void)exportAudioFromMedia:(id)arg1 isNeedsResample:(_Bool)arg2 compltionHandler:(CDUnknownBlockType)arg3;
- (void)exportAudioFromVideoData:(id)arg1 isNeedsResample:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;

@end

