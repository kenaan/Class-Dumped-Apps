//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOperaPlaybackObserving-Protocol.h"

@class AVPlayer, FBKVOController, NSMapTable, NSMutableArray, NSMutableDictionary, NSNotificationCenter, NSString, SCExperimentManager, SCOperaConfiguration, SCOperaPlayerQueueManager;
@protocol SCOperaSharedResourceManagerDelegate, SCPerforming;

@interface SCOperaSharedResourceManager : NSObject <SCOperaPlaybackObserving>
{
    SCOperaConfiguration *_configuration;
    unsigned long long _previousFastStartRelativePosition;
    SCExperimentManager *_experimentManager;
    FBKVOController *_kvoController;
    NSNotificationCenter *_notificationCenter;
    NSMutableArray *_playerViews;
    NSMutableArray *_currentDisplayingPlayerViews;
    NSMutableArray *_removedCurrentDisplayingPlayerViews;
    NSMutableDictionary *_layerVCCache;
    NSMapTable *_avPlayerToTimeObserverToken;
    id <SCPerforming> _timerObserverPerformer;
    _Bool _mediaServicesWereLost;
    id <SCOperaSharedResourceManagerDelegate> _delegate;
    SCOperaPlayerQueueManager *_playerQueueManager;
}

@property(readonly, nonatomic) SCOperaPlayerQueueManager *playerQueueManager; // @synthesize playerQueueManager=_playerQueueManager;
@property(nonatomic) _Bool mediaServicesWereLost; // @synthesize mediaServicesWereLost=_mediaServicesWereLost;
@property(nonatomic) __weak id <SCOperaSharedResourceManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_currentDisplayingPlayerViewDebugDescription;
- (void)_observePlayerEvents;
- (void)schedulePlaybackAtTime:(CDStruct_1b6d18a9)arg1 startingPlayingCallback:(CDUnknownBlockType)arg2;
- (void)enableCloseToEndCallback:(CDUnknownBlockType)arg1;
- (unsigned long long)_targetRelativePosition:(unsigned long long)arg1;
- (id)layerViewControllerWithLayer:(id)arg1 configuration:(id)arg2 eventAnnouncer:(id)arg3;
- (void)teardownLayerViewController:(id)arg1;
- (void)_unloadPlayerView:(id)arg1;
- (void)_loadPlayerView:(id)arg1 asset:(id)arg2 playerConfiguration:(struct SCPlayerConfiguration)arg3;
- (id)assetWithUrl:(id)arg1 pageId:(id)arg2;
- (long long)_numberOfPlayers;
- (void)_preloadWhenNecessaryForPlayerView:(id)arg1 videoAsset:(id)arg2 playerConfiguration:(struct SCPlayerConfiguration)arg3;
- (id)_playerViewNotCurrentDisplaying;
- (id)_playerViewForVideoAsset:(id)arg1;
- (void)finishDisplayingPlayerView:(id)arg1;
- (id)playerViewForVideoAsset:(id)arg1 pageId:(id)arg2 playerConfiguration:(struct SCPlayerConfiguration)arg3;
- (id)currentDisplayingPlayerViewForVideoAsset:(id)arg1;
- (_Bool)shouldPrepareVideoForFastStart:(unsigned long long)arg1;
- (void)prepareToViewVideoAsset:(id)arg1 relativePosition:(unsigned long long)arg2 pageId:(id)arg3 playerConfiguration:(struct SCPlayerConfiguration)arg4;
- (void)didReceiveMediaServicesWereResetNotification;
- (void)didReceiveMediaServicesWereLostNotification;
- (void)_replacePlayerView:(id)arg1;
- (void)_playerStatusDidChange;
- (id)_buildPlayerViewWithoutQueuePlayer;
- (id)_buildPlayerView;
- (void)_prebuildPlayerViews;
@property(readonly, nonatomic) AVPlayer *player;
- (void)dealloc;
- (id)initWithKVOController:(id)arg1 configuration:(id)arg2 notificationCenter:(id)arg3 experimentProvider:(id)arg4;
- (id)initWithConfiguration:(id)arg1 experimentManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

