//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEStudioModuleService-Protocol.h"

@class AWETTVideoUploadService, NSString;

@interface AWEStudioModuleService : HTSService <AWEStudioModuleService>
{
    AWETTVideoUploadService *_videoUploadService;
}

+ (void)setBindToutiaoAlertShowCount;
+ (long long)bindToutiaoAlertShowCount;
+ (id)userRelatedKeyWithKey:(id)arg1;
+ (_Bool)loadUserRelatedBoolForKey:(id)arg1;
+ (void)saveUserRelatedBool:(_Bool)arg1 forKey:(id)arg2;
+ (void)setSyncToToutiao:(_Bool)arg1;
+ (_Bool)syncToToutiao;
@property(retain, nonatomic) AWETTVideoUploadService *videoUploadService; // @synthesize videoUploadService=_videoUploadService;
- (void).cxx_destruct;
- (void)benchmarkForScene:(unsigned long long)arg1;
- (void)fetchBenchmarkConfig;
- (void)uploadVideoWithURL:(id)arg1 parameters:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearAllEditBackUpsInService;
- (void)preloadInitializationEffectPlatformManager;
- (void)recordForVideoDownload:(id)arg1 status:(long long)arg2 code:(long long)arg3;
- (void)addOrRemoveShareChannelForMVWithAwemeModel:(id)arg1;
- (void)mvShareActionWithAwemeModel:(id)arg1 mvId:(id)arg2 trackParams:(id)arg3;
- (id)videoPublishExtraModelToDic;
- (void)setupVideoPublishExtraModelWithParam:(id)arg1;
- (void)removeStickerUnlockAlertKey;
- (void)loadmoreFriendsWithCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)fetchFriendsWithCount:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)hasMoreFriends;
- (void)confirmAbandonFailedTask;
- (void)ensureLoginRequirementsForVideoRecording:(CDUnknownBlockType)arg1 withTrackerInformation:(id)arg2;
- (void)ensureLoginRequirementsForVideoRecording:(CDUnknownBlockType)arg1;
- (id)localVideoStorageURLWithAwemeID:(id)arg1;
- (_Bool)shouldUseOnlineEffectChannel;
- (void)startVideoWithPushData:(id)arg1;
- (void)processToGifWithVideoUrl:(id)arg1 gifSize:(struct CGSize)arg2 needAddWaterMark:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)fetchLocalURLForMusic:(id)arg1 withProgress:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)beginUploadVideoWithTaskV2:(id)arg1;
- (void)retryPublishVideoWithTaskV2:(id)arg1;
- (void)stopAddWatermarkTask;
- (void)addWatermarkWithTaskType:(unsigned long long)arg1 options:(long long)arg2 srcFilePath:(id)arg3 aweme:(id)arg4 edgeData:(id)arg5 canDirectAddVideoheader:(_Bool)arg6 outputSize:(struct CGSize)arg7 needSaveToAlbum:(_Bool)arg8 removeSourceFile:(_Bool)arg9 progressBlock:(CDUnknownBlockType)arg10 complete:(CDUnknownBlockType)arg11;
- (id)generateLifeStoryWaterImageWithSize:(struct CGSize)arg1;
- (void)decideShouldCreateNewRecorderControllerWithNavigationController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)storyControllerWithPublishModel:(id)arg1 slideInParams:(id)arg2;
- (id)stickerPickerWithPanelType:(long long)arg1 delegate:(id)arg2;
- (void)prefetchTranscodeParam;
- (void)prefetchStudioResource;
- (void)clearStudioCache;
- (void)recoveryBackUpIfNeed;
- (_Bool)isRecordingStory;
- (void)exitRecorder;
- (_Bool)isInsideRecorder;
- (void)startVideoClipViewControllerWithModel:(id)arg1 extraDict:(id)arg2;
- (void)createVideoWithResultOfStarAtlasJSB:(id)arg1;
- (void)createVideoWithStarAtlasOrderID:(id)arg1 channel:(id)arg2;
- (void)createVideoWithCharityID:(id)arg1 withInfo:(id)arg2;
- (void)createVideoWithPoiModel:(id)arg1 withInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createStickerVideoWithStickerIDArray:(id)arg1 musicModel:(id)arg2 referString:(id)arg3 trackInfo:(id)arg4 strictlyApplyFirst:(_Bool)arg5 completion:(CDUnknownBlockType)arg6;
- (void)createVideoWithStickerID:(id)arg1 referString:(id)arg2 extraInfo:(id)arg3 prioritized:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)createVideoWithStickerID:(id)arg1 referString:(id)arg2 extraInfo:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createVideoWithStickerID:(id)arg1 referString:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createVideoWithStickerID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createFirstTimeBoostStickerVideoWithAweme:(id)arg1 info:(id)arg2 downloadedModel:(id)arg3 downloadedEffects:(id)arg4;
- (void)createMVVideoWithChallenge:(id)arg1 mvID:(id)arg2 info:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)createMVVideoWithMVID:(id)arg1 info:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createMVVideoWithAweme:(id)arg1 withInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createStickerVideoWithAweme:(id)arg1 withInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)createStickerVideoWithAweme:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createReactVideoWithSource:(id)arg1 isReactOrigin:(_Bool)arg2 enterFrom:(id)arg3;
- (void)createDuetVideoWithAweme:(id)arg1 enterFrom:(id)arg2;
- (void)createVideoWithTask:(id)arg1 info:(id)arg2;
- (void)createVideoWithChallenge:(id)arg1 fromChallengeDetail:(_Bool)arg2 info:(id)arg3;
- (void)createVideoWithMusic:(id)arg1 withInfo:(id)arg2;
- (void)createVideoWithMusic:(id)arg1 groupID:(id)arg2 enterFrom:(long long)arg3;
- (void)createVideoWithMusic:(id)arg1 groupID:(id)arg2;
- (void)createVideoFromMusicWithRefer:(id)arg1;
- (void)createStoryVideoWithInfo:(id)arg1 fromShake:(_Bool)arg2;
- (void)createVideoFromMusicWithInfo:(id)arg1;
- (void)createVideoWithGoodsSeed:(id)arg1 additionInfo:(id)arg2;
- (void)createVideoWithOrderShare:(id)arg1 additionInfo:(id)arg2;
- (void)createVideoWithOrderShare:(id)arg1;
- (void)createVideoFromAlbumWithRefer:(id)arg1;
- (_Bool)isInRecordTask;
- (_Bool)canStartVideoFlow;
- (id)createTaskWithInfo:(id)arg1 player:(id)arg2;
- (void)addTask:(id)arg1;
- (_Bool)hasTaskExecuting;
- (void)fetchDraftCoverWithhCompletion:(CDUnknownBlockType)arg1;
- (long long)draftCount;
- (void)saveDraftWithPublishViewModel:(id)arg1 video:(id)arg2 backup:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

