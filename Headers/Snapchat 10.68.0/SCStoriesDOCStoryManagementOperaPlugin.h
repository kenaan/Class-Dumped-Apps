//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaPlaylistEventTrackerPlugin.h"

#import "SCDataCoordinatorListener-Protocol.h"
#import "SCOperaPlaylistItemExtraPropertiesProvider-Protocol.h"
#import "SCStoryManagementActionHandlerDelegate-Protocol.h"

@class NSString, SCDisposableObserverLifecycle, SCOperaViewController, SCStoriesSnapDeleteCoordinator, SCStoriesSnapSaveCoordinator, SCStoryManagementActionHandler, SCUserSession;
@protocol SCOperaPlaylistItemController, SCOperaViewProvider, SCStoriesOperaPageProvider, SCStoriesPlaybackDataProviding, SCStoriesSnapViewerDataCoordinating;

@interface SCStoriesDOCStoryManagementOperaPlugin : SCOperaPlaylistEventTrackerPlugin <SCOperaPlaylistItemExtraPropertiesProvider, SCStoryManagementActionHandlerDelegate, SCDataCoordinatorListener>
{
    SCUserSession *_userSession;
    id <SCStoriesSnapViewerDataCoordinating> _storiesViewerDataCoordinator;
    id <SCStoriesPlaybackDataProviding> _storiesPlaybackDataProvider;
    SCStoriesSnapSaveCoordinator *_storySnapSaveCoordinator;
    SCStoriesSnapDeleteCoordinator *_storySnapDeleteCoordinator;
    _Bool _isSingleSnap;
    _Bool _shouldShowViewersListOnOpen;
    NSString *_currentSnapClientId;
    id <SCOperaViewProvider> _viewersListViewProvider;
    id <SCStoriesOperaPageProvider> _operaPageProvider;
    SCStoryManagementActionHandler *_actionHandler;
    SCOperaViewController *_operaViewController;
    id <SCOperaPlaylistItemController> _playlistItemController;
    CDUnknownBlockType operaViewCompletionBlock;
    SCDisposableObserverLifecycle *_disposableObserverLifecycle;
}

- (void).cxx_destruct;
- (void)updateWithOperaPageProvider:(id)arg1;
- (void)storyManagementActionHandlerWillPlayStories:(id)arg1;
- (void)storyManagementActionHandlerViewerDidUpdateForCurrentStory:(id)arg1;
- (id)storyManagementActionHandlerViewControllerForPresentation:(id)arg1;
- (void)storyManagementActionHandlerPausePlayback:(id)arg1;
- (void)storyManagementActionHandlerDismissStoryManagementView:(id)arg1;
- (void)storyManagementActionHandler:(id)arg1 willDeleteStoryWithClientId:(id)arg2;
- (void)storyManagementActionHandler:(id)arg1 scrollToSnapDataModel:(id)arg2;
- (void)_handleTapAvatarWithSnap:(id)arg1 params:(id)arg2;
- (void)_presentProfileWithSnap:(id)arg1 params:(id)arg2;
- (void)_retryPostWithClientId:(id)arg1;
- (void)_saveSnapWithClientId:(id)arg1;
- (void)_deleteSnapWithClientId:(id)arg1;
- (void)dataCoordinatorDidUpdateWithIdentifier:(id)arg1 dataRequest:(id)arg2;
- (id)extraPropertiesProvider;
- (void)setOperaViewController:(id)arg1;
- (void)updateOperaConfiguration:(id)arg1;
- (void)setPlaylistItemController:(id)arg1;
- (id)registeredEventsForOperaSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)extraPropertiesForDataModel:(id)arg1 item:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithUserSession:(id)arg1 myStories:(id)arg2 storiesPlaybackDataProvider:(id)arg3 storiesMediaCoordinator:(id)arg4 storiesViewerDataCoordinator:(id)arg5 customStoriesDataFetcher:(id)arg6 storySnapSaveCoordinator:(id)arg7 storySnapDeleteCoordinator:(id)arg8 operaPageProviderObservable:(id)arg9 isSingleSnap:(_Bool)arg10 shouldShowViewersListOnOpen:(_Bool)arg11 replyDelegate:(id)arg12 startChatDelegate:(id)arg13 navigationDelegate:(id)arg14;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

