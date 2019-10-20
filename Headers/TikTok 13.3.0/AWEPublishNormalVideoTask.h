//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPublishBaseTask.h"

@class AWEAwemeModel, AWECouponModel, AWECreateAwemeResponse, AWEPlayer, AWEPublishCreateModelStage, AWEPublishFinalStage, AWEPublishFinishedStage, AWEPublishMergeStage, AWEPublishRequestParamStage, AWEPublishShareStage, AWEPublishTimeTracker, AWEPublishUploadOtherStage, AWEPublishUploadStage, AWEPublishWaterMarkStage, AWEResourceUploadParametersResponseModel, AWEStudioCaptionsManager, NSError, NSNumber, NSString;

@interface AWEPublishNormalVideoTask : AWEPublishBaseTask
{
    _Bool _isPreUploading;
    AWEPlayer *_player;
    AWEPublishTimeTracker *_timeTracker;
    AWEStudioCaptionsManager *_captionManager;
    AWEPublishRequestParamStage *_requestParamStage;
    AWEPublishCreateModelStage *_createModelStage;
    AWEPublishFinalStage *_finalStage;
    AWEPublishMergeStage *_mergeStage;
    AWEPublishUploadOtherStage *_uploadOtherStage;
    AWEPublishWaterMarkStage *_waterMarkStage;
    AWEPublishUploadStage *_uploadStage;
    AWEPublishFinishedStage *_finishedStage;
    AWEPublishShareStage *_shareStage;
    double _requestParamProgress;
    double _createModelProgress;
    double _finalProgress;
    double _mergeProgress;
    double _uploadOtherProgress;
    double _waterMarkProgress;
    double _uploadProgress;
    NSString *_uploadVideoUrl;
    AWEResourceUploadParametersResponseModel *_uploadParameters;
    NSString *_uploadedResourceId;
    AWECreateAwemeResponse *_createAwemeResponse;
    NSNumber *_uploadVideoTime;
    NSError *_error;
    double _publishTotalTimeInterval;
}

@property(nonatomic) double publishTotalTimeInterval; // @synthesize publishTotalTimeInterval=_publishTotalTimeInterval;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSNumber *uploadVideoTime; // @synthesize uploadVideoTime=_uploadVideoTime;
@property(retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse; // @synthesize createAwemeResponse=_createAwemeResponse;
@property(copy, nonatomic) NSString *uploadedResourceId; // @synthesize uploadedResourceId=_uploadedResourceId;
@property(retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters; // @synthesize uploadParameters=_uploadParameters;
@property(copy, nonatomic) NSString *uploadVideoUrl; // @synthesize uploadVideoUrl=_uploadVideoUrl;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) double waterMarkProgress; // @synthesize waterMarkProgress=_waterMarkProgress;
@property(nonatomic) double uploadOtherProgress; // @synthesize uploadOtherProgress=_uploadOtherProgress;
@property(nonatomic) double mergeProgress; // @synthesize mergeProgress=_mergeProgress;
@property(nonatomic) double finalProgress; // @synthesize finalProgress=_finalProgress;
@property(nonatomic) double createModelProgress; // @synthesize createModelProgress=_createModelProgress;
@property(nonatomic) double requestParamProgress; // @synthesize requestParamProgress=_requestParamProgress;
@property(retain, nonatomic) AWEPublishShareStage *shareStage; // @synthesize shareStage=_shareStage;
@property(retain, nonatomic) AWEPublishFinishedStage *finishedStage; // @synthesize finishedStage=_finishedStage;
@property(retain, nonatomic) AWEPublishUploadStage *uploadStage; // @synthesize uploadStage=_uploadStage;
@property(retain, nonatomic) AWEPublishWaterMarkStage *waterMarkStage; // @synthesize waterMarkStage=_waterMarkStage;
@property(retain, nonatomic) AWEPublishUploadOtherStage *uploadOtherStage; // @synthesize uploadOtherStage=_uploadOtherStage;
@property(retain, nonatomic) AWEPublishMergeStage *mergeStage; // @synthesize mergeStage=_mergeStage;
@property(retain, nonatomic) AWEPublishFinalStage *finalStage; // @synthesize finalStage=_finalStage;
@property(retain, nonatomic) AWEPublishCreateModelStage *createModelStage; // @synthesize createModelStage=_createModelStage;
@property(retain, nonatomic) AWEPublishRequestParamStage *requestParamStage; // @synthesize requestParamStage=_requestParamStage;
@property(retain, nonatomic) AWEStudioCaptionsManager *captionManager; // @synthesize captionManager=_captionManager;
@property _Bool isPreUploading; // @synthesize isPreUploading=_isPreUploading;
- (void)setTimeTracker:(id)arg1;
- (id)timeTracker;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void).cxx_destruct;
- (_Bool)needTrackPublishNormalVideoRateWithStage:(id)arg1;
- (void)trackEventPrePublishSuccess:(_Bool)arg1;
- (void)trackEventPublishDone;
- (void)trackEventPublishEnd;
- (void)trackEventWithStage:(id)arg1 status:(long long)arg2;
- (void)saveDraftType:(long long)arg1 completion:(CDUnknownBlockType)arg2 isBackup:(_Bool)arg3;
@property(retain, nonatomic) AWECouponModel *coupon; // @dynamic coupon;
@property(retain, nonatomic) AWEAwemeModel *aweme; // @dynamic aweme;
- (void)updateStage:(long long)arg1 progress:(double)arg2;
- (double)proportionStage:(long long)arg1;
- (void)finishStage:(long long)arg1;
- (void)configStage:(long long)arg1 userInfo:(id)arg2;
- (void)publishStage:(id)arg1 didChangeStatus:(long long)arg2 userInfo:(id)arg3;
- (void)publishStage:(id)arg1 updateProgress:(double)arg2;
- (void)setCurrentStage:(long long)arg1;
- (void)execute;
- (id)initWithModel:(id)arg1;

@end
