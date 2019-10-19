//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCSettingsProtocol-Protocol.h"

@class NSString;

@interface AWEACCSettingsImpl : NSObject <ACCSettingsProtocol>
{
}

- (id)effectJsonConfig;
- (id)captureAuthorizationHelpURL;
- (id)freeFlowCardStickerUrl;
- (id)aiRecommendMusicListDefaultURI;
- (id)goodsOrderShareIntroH5URL;
- (id)shootTutorialLink;
- (id)stickerLockPopupImageArray;
- (id)aiRecommendMusicListDefaultURLLists;
- (id)videoUploadBitrate;
- (id)videoUploadSize;
- (id)videoRecordBitrate;
- (id)videoRecordSize;
- (id)stickerFonts;
- (id)effectColors;
- (_Bool)showTitleInVideoCamera;
- (_Bool)enableBeautifyEffectsFromPlatform;
- (_Bool)enableHQVFrame;
- (_Bool)enableWatermarkBackground;
- (_Bool)showButtonSyncToInstagramStoryInPublishPage;
- (_Bool)showButtonSyncToInstagramInPublishPage;
- (_Bool)showButtonSyncToTwitterInPublishPage;
- (_Bool)enableLargeHandDetectModel;
- (_Bool)enableLargeMattingDetectModel;
- (_Bool)useTTNetForTTFileUploadClient;
- (_Bool)useTTEffectPlatformSDK;
- (_Bool)closeUploadOriginanlFrames;
- (_Bool)uploadOriginanlAudioTrack;
- (_Bool)fastImportIgnoreRecode;
- (double)httpRetryInterval;
- (double)videoCompose;
- (double)videoCommit;
- (double)identificationAsMaleThreshold;
- (long long)stickerLockDuration;
- (long long)maxFansCount;
- (long long)reactMicStatus;
- (long long)localVideoCacheMaxLength;
- (long long)localVideoCacheMaxAge;
- (long long)aiRecommendMusicImageCount;
- (long long)textStickerMaxCount;
- (long long)infoStickerMaxCount;
- (long long)httpRetryCount;
- (long long)useOpenGLES3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

