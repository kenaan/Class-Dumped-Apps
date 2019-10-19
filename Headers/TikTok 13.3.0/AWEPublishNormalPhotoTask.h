//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPublishBaseTask.h"

@class AWEAwemeModel, AWECouponModel, AWECreateAwemeResponse, AWEPlayer, AWEPublishCreateModelStage, AWEPublishPhotoFinalStage, AWEPublishPhotoPrepareStage, AWEPublishRequestParamStage, AWEPublishTimeTracker, AWEPublishUploadPhotoStage, AWEResourceUploadParametersResponseModel, NSError, NSString;

@interface AWEPublishNormalPhotoTask : AWEPublishBaseTask
{
    AWEPlayer *_player;
    AWEPublishTimeTracker *_timeTracker;
    AWEPublishRequestParamStage *_requestParamStage;
    AWEPublishCreateModelStage *_createModelStage;
    AWEPublishPhotoFinalStage *_finalStage;
    AWEPublishPhotoPrepareStage *_prepareStage;
    AWEPublishUploadPhotoStage *_uploadStage;
    double _requestParamProgress;
    double _createModelProgress;
    double _finalProgress;
    double _prepareProgress;
    double _uploadProgress;
    NSString *_uploadPhotoUrl;
    AWEResourceUploadParametersResponseModel *_uploadParameters;
    NSString *_uploadedResourceId;
    AWECreateAwemeResponse *_createAwemeResponse;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) AWECreateAwemeResponse *createAwemeResponse; // @synthesize createAwemeResponse=_createAwemeResponse;
@property(copy, nonatomic) NSString *uploadedResourceId; // @synthesize uploadedResourceId=_uploadedResourceId;
@property(retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParameters; // @synthesize uploadParameters=_uploadParameters;
@property(copy, nonatomic) NSString *uploadPhotoUrl; // @synthesize uploadPhotoUrl=_uploadPhotoUrl;
@property(nonatomic) double uploadProgress; // @synthesize uploadProgress=_uploadProgress;
@property(nonatomic) double prepareProgress; // @synthesize prepareProgress=_prepareProgress;
@property(nonatomic) double finalProgress; // @synthesize finalProgress=_finalProgress;
@property(nonatomic) double createModelProgress; // @synthesize createModelProgress=_createModelProgress;
@property(nonatomic) double requestParamProgress; // @synthesize requestParamProgress=_requestParamProgress;
@property(retain, nonatomic) AWEPublishUploadPhotoStage *uploadStage; // @synthesize uploadStage=_uploadStage;
@property(retain, nonatomic) AWEPublishPhotoPrepareStage *prepareStage; // @synthesize prepareStage=_prepareStage;
@property(retain, nonatomic) AWEPublishPhotoFinalStage *finalStage; // @synthesize finalStage=_finalStage;
@property(retain, nonatomic) AWEPublishCreateModelStage *createModelStage; // @synthesize createModelStage=_createModelStage;
@property(retain, nonatomic) AWEPublishRequestParamStage *requestParamStage; // @synthesize requestParamStage=_requestParamStage;
- (void)setTimeTracker:(id)arg1;
- (id)timeTracker;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void).cxx_destruct;
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

