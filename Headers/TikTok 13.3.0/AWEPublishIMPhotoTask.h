//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEPublishBaseTask.h"

@class AWEPlayer, AWEPublishPhotoPrepareStage, AWEPublishTimeTracker, NSError, NSString;

@interface AWEPublishIMPhotoTask : AWEPublishBaseTask
{
    AWEPlayer *_player;
    AWEPublishTimeTracker *_timeTracker;
    AWEPublishPhotoPrepareStage *_prepareStage;
    double _prepareProgress;
    NSString *_uploadPhotoUrl;
    NSError *_error;
}

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(copy, nonatomic) NSString *uploadPhotoUrl; // @synthesize uploadPhotoUrl=_uploadPhotoUrl;
@property(nonatomic) double prepareProgress; // @synthesize prepareProgress=_prepareProgress;
@property(retain, nonatomic) AWEPublishPhotoPrepareStage *prepareStage; // @synthesize prepareStage=_prepareStage;
- (void)setTimeTracker:(id)arg1;
- (id)timeTracker;
- (void)setPlayer:(id)arg1;
- (id)player;
- (void).cxx_destruct;
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

