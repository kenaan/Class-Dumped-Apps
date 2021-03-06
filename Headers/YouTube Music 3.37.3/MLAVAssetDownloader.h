//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetDownloadDelegate-Protocol.h"
#import "MLFairPlayLicenseLookupHelperLoggingDelegate-Protocol.h"
#import "MLFairPlayLicenseLookupHelperPersistableContentKeyDelegate-Protocol.h"
#import "MLHLSProxyDelegate-Protocol.h"
#import "MLMediaDownloader-Protocol.h"

@class AVAggregateAssetDownloadTask, AVAssetDownloadURLSession, AVURLAsset, GIMMe, MLFairPlayLicenseLookupHelper, MLHLSProxy, MLOfflineRepo, MLRemoteStream, MLVideo, NSString, NSURL;
@protocol MLMediaDownloaderDelegate, MLPlayerConfig;

@interface MLAVAssetDownloader : NSObject <AVAssetDownloadDelegate, MLFairPlayLicenseLookupHelperLoggingDelegate, MLFairPlayLicenseLookupHelperPersistableContentKeyDelegate, MLHLSProxyDelegate, MLMediaDownloader>
{
    MLOfflineRepo *_repo;
    NSString *_videoID;
    double _progress;
    MLVideo *_video;
    MLRemoteStream *_audioStream;
    MLRemoteStream *_videoStream;
    id <MLPlayerConfig> _playerConfig;
    MLHLSProxy *_proxy;
    MLFairPlayLicenseLookupHelper *_fairPlayLicenseLookupHelper;
    AVURLAsset *_asset;
    AVAggregateAssetDownloadTask *_assetDownloadTask;
    NSURL *_assetDownloadURL;
    id <MLMediaDownloaderDelegate> _delegate;
    long long _bitrate;
    double _secondsLoaded;
    double _secondsExpectedToLoad;
    AVAssetDownloadURLSession *_cellularSession;
    AVAssetDownloadURLSession *_wifiSession;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (void)reportLicenseLookupHelperNonFatalError:(id)arg1;
- (void)handleLicenseResponseForLoadingRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2 data:(id)arg3 response:(id)arg4 error:(id)arg5;
- (long long)sizeOfBundleForVideoID:(id)arg1;
- (id)masterPlaylistForAudioStream:(id)arg1 videoStream:(id)arg2 error:(id *)arg3;
- (long long)estimatedTotalBitsForCurrentVideo;
- (long long)estimatedTotalBytesForCurrentVideo;
- (long long)estimatedDownloadedBitsForCurrentVideo;
- (long long)estimatedDownloadedBytesForCurrentVideo;
- (void)clear;
- (void)downloadDidSucceedWithVideoID:(id)arg1;
- (void)downloadDidFailWithVideoID:(id)arg1 error:(id)arg2;
- (void)downloadCurrentVideoWithSession:(id)arg1;
- (id)assetDownloadURL;
- (id)assetDownloadTask;
- (id)makePersistentContentKeyDataForPersistableContentKeyRequest:(id)arg1 keyID:(id)arg2 keyData:(id)arg3 error:(id *)arg4;
- (void)loadSecureKeyWithLoadingRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)proxyDidFailWithError:(id)arg1;
- (void)loadMasterPlaylistWithSuccessBlock:(CDUnknownBlockType)arg1;
- (void)licenseLookupHelper:(id)arg1 hasNonFatalError:(id)arg2;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 willDownloadToURL:(id)arg3;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didLoadTimeRange:(CDStruct_e83c9415)arg3 totalTimeRangesLoaded:(id)arg4 timeRangeExpectedToLoad:(CDStruct_e83c9415)arg5 forMediaSelection:(id)arg6;
- (void)URLSession:(id)arg1 aggregateAssetDownloadTask:(id)arg2 didCompleteForMediaSelection:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)cancelDownloadWithVideoID:(id)arg1;
- (void)cancelDownload;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)downloadVideo:(id)arg1 withMaximumResolution:(int)arg2 audioQuality:(int)arg3 playerConfig:(id)arg4 allowCellularAccess:(_Bool)arg5 refreshStreams:(_Bool)arg6 delegate:(id)arg7;
- (long long)estimatedTotalBytesForVideo:(id)arg1 withMaximumResolution:(int)arg2 audioQuality:(int)arg3;
- (void)startBackgroundTaskRestorationWithDelegate:(id)arg1;
@property(readonly, nonatomic) _Bool restoringBackgroundTasks;
@property(readonly, nonatomic) NSString *currentVideoID;
@property(readonly, nonatomic) double currentProgress;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) NSString *condensedURLPrefix;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

