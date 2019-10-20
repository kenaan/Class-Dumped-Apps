//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MGLiveDetectViewController.h"

@class MGStatistics;

@interface MGLiveDefaultDetectVC : MGLiveDetectViewController
{
    CDUnknownBlockType _detectFinish;
    CDUnknownBlockType _detectVideoFinish;
    CDUnknownBlockType _Qualityfinish;
    MGStatistics *_statisticsManager;
}

@property(retain, nonatomic) MGStatistics *statisticsManager; // @synthesize statisticsManager=_statisticsManager;
@property(copy, nonatomic) CDUnknownBlockType Qualityfinish; // @synthesize Qualityfinish=_Qualityfinish;
@property(copy, nonatomic) CDUnknownBlockType detectVideoFinish; // @synthesize detectVideoFinish=_detectVideoFinish;
@property(copy, nonatomic) CDUnknownBlockType detectFinish; // @synthesize detectFinish=_detectFinish;
- (void).cxx_destruct;
- (void)liveDetectionFinishAction:(int)arg1 index:(long long)arg2 success:(_Bool)arg3 errorType:(int)arg4;
- (void)liveDetectionFinishQuality;
- (void)liveFaceDetection;
- (void)cancelDetect;
- (void)liveDetectionFinish:(int)arg1 checkOK:(_Bool)arg2 liveDetectionType:(long long)arg3 videoPath:(id)arg4;
- (void)liveDetectionFinish:(int)arg1 checkOK:(_Bool)arg2 liveDetectionType:(long long)arg3;

@end
