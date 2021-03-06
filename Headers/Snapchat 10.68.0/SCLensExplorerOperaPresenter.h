//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLensExplorerOperaPresenterProtocol-Protocol.h"
#import "SCOperaPresenterDelegate-Protocol.h"

@class NSString, SCDiscoverFeedMiniProfileHandler, SCDiscoverFeedOperaSession, SCDiscoverFeedUnifiedProfileActionHandler, SCLazy, SCLensExplorerOperaLoggerListener, SCLensExplorerStoryPlayerContext, SCOperaPlaylistFeaturePlugin, SCUserSession;
@protocol NavigationDelegate, SCLensExplorerLoggerProtocol, SCLensExplorerOperaPresenterProtocolPresenterDelegateProtocol, SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera;

@interface SCLensExplorerOperaPresenter : NSObject <SCOperaPresenterDelegate, SCLensExplorerOperaPresenterProtocol>
{
    SCLazy *_operaPresenter;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCLensExplorerLoggerProtocol> _lensExplorerLogger;
    SCLensExplorerStoryPlayerContext *_storyPlayerContext;
    SCDiscoverFeedOperaSession *_discoverFeedOperaSession;
    SCOperaPlaylistFeaturePlugin<SCOperaPlaylistFeaturePluginShouldUseExtendedResetToCamera> *_storiesPlugin;
    SCLensExplorerOperaLoggerListener *_lensExplorerOperaLoggerListener;
    SCDiscoverFeedMiniProfileHandler *_miniProfileHandler;
    SCDiscoverFeedUnifiedProfileActionHandler *_unifiedProfileHandler;
    id <SCLensExplorerOperaPresenterProtocolPresenterDelegateProtocol> _delegate;
}

@property(nonatomic) __weak id <SCLensExplorerOperaPresenterProtocolPresenterDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (long long)_viewLocation;
- (id)_fixPlayableViewMode:(id)arg1;
- (id)_attachOperaContextToModel:(id)arg1 cheetahStory:(id)arg2;
- (id)_filterAllStories:(id)arg1 withInitialStory:(id)arg2;
- (void)_updateDiscoverFeedOperaSessionWithLastPlayedDataModel:(id)arg1;
- (id)_loggingPluginWithContext:(id)arg1;
- (id)_contextPlugin;
- (id)_playbackIntentToNextPlugin;
- (id)_performancePlugin;
- (id)_playlistStoriesPluginWithStorySessionId:(long long)arg1;
- (void)operaPresenter:(id)arg1 didFinishViewingPlaylistGroupDataModel:(id)arg2 nextGroupDataModel:(id)arg3;
- (void)operaPresenter:(id)arg1 didBeginPlayingPlaylistGroupDataModel:(id)arg2;
- (void)operaPresenterDidTearDown:(id)arg1;
- (void)operaPresenterDidFinishDismissing:(id)arg1;
- (void)operaPresenterDidFailToPresent:(id)arg1;
- (void)operaPresenterWillBeginAnimatingToDismiss:(id)arg1;
- (void)operaPresenterDidCancelDismissing:(id)arg1;
- (void)operaPresenterWillBeginDismissing:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterDidFinishPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)operaPresenterWillBeginPresenting:(id)arg1 transitionAnimator:(id)arg2;
- (void)presentWithInitialChallengeSnap:(id)arg1 baseView:(id)arg2 allStories:(id)arg3 presentingViewController:(id)arg4 context:(id)arg5;
- (void)resumeOpera;
- (void)pauseOpera;
- (void)dismissWithAnimation:(_Bool)arg1;
- (_Bool)isPresenting;
- (void)updateBaseView:(id)arg1;
- (void)cancelPresentingIfNecessary;
- (id)initWithOperaPresenter:(id)arg1 userSession:(id)arg2 navigationDelegate:(id)arg3 lensExplorerLogger:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

