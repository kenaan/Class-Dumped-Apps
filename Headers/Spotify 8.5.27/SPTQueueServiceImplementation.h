//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTQueueService-Protocol.h"

@class NSString, SPTAllocationContext;
@protocol SPContextMenuFeature, SPTContainerService, SPTContainerUIService, SPTContextMenuOptions, SPTContextMenuPresenter, SPTCoreService, SPTCrashReporterService, SPTExplicitContentService, SPTGLUEImageLoaderFactory, SPTGLUEService, SPTImageLoaderFactory, SPTLocalSettings, SPTNetworkService, SPTPlayer, SPTPlayerFeature, SPTPodcastFeature, SPTProductState, SPTQueueLogger, SPTQueuePlaybackDelegateRegistry, SPTSessionService, SPTSettingsFeature, SPTShelfService, SPTShowEntityService;

@interface SPTQueueServiceImplementation : NSObject <SPTQueueService>
{
    id <SPTCoreService> _coreService;
    id <SPTShelfService> _shelfService;
    id <SPTContainerUIService> _containerUIService;
    id <SPTContextMenuOptions> _contextMenuOptions;
    id <SPTContextMenuPresenter> _contextMenuPresenter;
    id <SPTCrashReporterService> _crashReporterService;
    id <SPTExplicitContentService> _explicitContentService;
    id <SPTSessionService> _clientSessionService;
    id <SPTContainerService> _containerService;
    id <SPTNetworkService> _networkFeature;
    id <SPContextMenuFeature> _contextMenuFeature;
    id <SPTPlayerFeature> _playerFeature;
    id <SPTPodcastFeature> _podcastFeature;
    id <SPTSettingsFeature> _settingsFeature;
    id <SPTGLUEService> _glueService;
    id <SPTLocalSettings> _localSettings;
    id <SPTImageLoaderFactory> _imageLoaderFactory;
    id <SPTGLUEImageLoaderFactory> _glueImageLoaderFactory;
    id <SPTShowEntityService> _entityService;
    id <SPTProductState> _productState;
    id <SPTPlayer> _player;
    id <SPTQueuePlaybackDelegateRegistry> _playbackDelegateRegistry;
    id <SPTQueueLogger> _queueLogger;
}

+ (id)serviceIdentifier;
@property(retain, nonatomic) id <SPTQueueLogger> queueLogger; // @synthesize queueLogger=_queueLogger;
@property(retain, nonatomic) id <SPTQueuePlaybackDelegateRegistry> playbackDelegateRegistry; // @synthesize playbackDelegateRegistry=_playbackDelegateRegistry;
@property(retain, nonatomic) id <SPTPlayer> player; // @synthesize player=_player;
@property(retain, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(retain, nonatomic) id <SPTShowEntityService> entityService; // @synthesize entityService=_entityService;
@property(retain, nonatomic) id <SPTGLUEImageLoaderFactory> glueImageLoaderFactory; // @synthesize glueImageLoaderFactory=_glueImageLoaderFactory;
@property(retain, nonatomic) id <SPTImageLoaderFactory> imageLoaderFactory; // @synthesize imageLoaderFactory=_imageLoaderFactory;
@property(retain, nonatomic) id <SPTLocalSettings> localSettings; // @synthesize localSettings=_localSettings;
@property(nonatomic) __weak id <SPTGLUEService> glueService; // @synthesize glueService=_glueService;
@property(nonatomic) __weak id <SPTSettingsFeature> settingsFeature; // @synthesize settingsFeature=_settingsFeature;
@property(nonatomic) __weak id <SPTPodcastFeature> podcastFeature; // @synthesize podcastFeature=_podcastFeature;
@property(nonatomic) __weak id <SPTPlayerFeature> playerFeature; // @synthesize playerFeature=_playerFeature;
@property(nonatomic) __weak id <SPContextMenuFeature> contextMenuFeature; // @synthesize contextMenuFeature=_contextMenuFeature;
@property(nonatomic) __weak id <SPTNetworkService> networkFeature; // @synthesize networkFeature=_networkFeature;
@property(nonatomic) __weak id <SPTContainerService> containerService; // @synthesize containerService=_containerService;
@property(nonatomic) __weak id <SPTSessionService> clientSessionService; // @synthesize clientSessionService=_clientSessionService;
@property(nonatomic) __weak id <SPTExplicitContentService> explicitContentService; // @synthesize explicitContentService=_explicitContentService;
@property(nonatomic) __weak id <SPTCrashReporterService> crashReporterService; // @synthesize crashReporterService=_crashReporterService;
@property(retain, nonatomic) id <SPTContextMenuPresenter> contextMenuPresenter; // @synthesize contextMenuPresenter=_contextMenuPresenter;
@property(retain, nonatomic) id <SPTContextMenuOptions> contextMenuOptions; // @synthesize contextMenuOptions=_contextMenuOptions;
@property(nonatomic) __weak id <SPTContainerUIService> containerUIService; // @synthesize containerUIService=_containerUIService;
@property(nonatomic) __weak id <SPTShelfService> shelfService; // @synthesize shelfService=_shelfService;
@property(nonatomic) __weak id <SPTCoreService> coreService; // @synthesize coreService=_coreService;
- (void).cxx_destruct;
- (void)registerQueueShelf;
- (id)provideContextMenuOptions;
- (void)presentContextMenuForRegularTrack:(id)arg1 inViewController:(id)arg2 senderView:(id)arg3;
- (void)presentContextMenuForEpisodeTrack:(id)arg1 inViewController:(id)arg2 senderView:(id)arg3;
- (CDUnknownBlockType)makePresentContextMenuBlock;
- (CDUnknownBlockType)provideQueueContextMenuActionPredicate;
- (unsigned long long)addToUpNextBehavior;
- (id)provideQueueViewModel:(id)arg1;
- (id)provideQueueLogger;
- (id)provideQueuePlaybackDelegateRegistry;
- (id)provideQueueInteractor;
- (struct UIViewController *)provideQueueViewControllerWithDelegate:(id)arg1 modeResolver:(id)arg2 navigationBarViewControllerV2:(id)arg3 queueInteractor:(id)arg4 entityDecorationController:(id)arg5;
- (void)unload;
- (void)load;
- (void)configureWithServices:(id)arg1;

// Remaining properties
@property(retain, nonatomic) SPTAllocationContext *allocationContext;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

