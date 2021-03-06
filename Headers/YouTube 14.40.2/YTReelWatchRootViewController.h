//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIPageViewController.h"

#import "UIPageViewControllerDataSource.h"
#import "UIPageViewControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "YTReelPlayerViewControllerDelegate.h"
#import "YTReelWatchContentViewProvider.h"
#import "YTReelWatchSwipeDismissAnimatorDelegate.h"
#import "YTToastBottomOffsetOverriding.h"
#import "YTTopController.h"

@class GIMMe, MPVolumeView, NSMutableOrderedSet, NSPointerArray, NSString, UIScrollView, UIView, YTICommand, YTLightweightPlayerViewController, YTReelLatencyTickLogger, YTReelPlayerViewController, YTReelPrefetchManager, YTTransitionManager;

@interface YTReelWatchRootViewController : UIPageViewController <UIScrollViewDelegate, UIPageViewControllerDelegate, UIPageViewControllerDataSource, YTReelPlayerViewControllerDelegate, YTReelWatchSwipeDismissAnimatorDelegate, YTToastBottomOffsetOverriding, YTReelWatchContentViewProvider, YTTopController>
{
    YTICommand *_navigationEndpoint;
    id <YTReelWatchEndpointsResponderProvider> _endpointProvider;
    YTReelPrefetchManager *_prefetchManager;
    YTTransitionManager *_transitionManager;
    UIView *_fromView;
    NSMutableOrderedSet *_reels;
    UIScrollView *_scrollView;
    _Bool _didFinishTransition;
    YTReelPlayerViewController *_lastActiveReelPlayerViewController;
    NSPointerArray *_viewControllerCache;
    unsigned long long _priorPlaybackState;
    id <YTModalPlaybackChangeResponderProvider> _modalPlaybackChangeResponderProvider;
    YTLightweightPlayerViewController *_player;
    double _startTime;
    MPVolumeView *_hiddenVolumeView;
    YTReelLatencyTickLogger *_onesieLatencyLogger;
    id <YTResponder> _parentResponder;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
@property(readonly, nonatomic) __weak id <YTResponder> parentResponder; // @synthesize parentResponder=_parentResponder;
- (void).cxx_destruct;
- (_Bool)handleNavigationEndpointResponderEvent:(id)arg1;
- (void)setUpTransitions;
- (void)restorePriorWatchPlaybackState;
- (void)deactivateCurrentWatchPlayback;
- (void)transitionToReelAtIndex:(unsigned long long)arg1 direction:(long long)arg2 transitionType:(unsigned long long)arg3 animated:(_Bool)arg4;
- (void)advanceToNextReelWithTransitionType:(unsigned long long)arg1;
- (id)playerViewControllerForReelAtIndex:(unsigned long long)arg1;
- (unsigned long long)currentReelIndex;
@property(readonly, nonatomic) YTReelPlayerViewController *activeReelPlayerViewController;
- (id)swipeDismissAnimatorTargetView;
- (id)swipeDismissAnimatorOverlayView;
- (id)swipeDismissAnimatorBackdropView;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)playerViewControllerDidDeleteAllClips:(id)arg1;
- (void)playerViewControllerDonePlayingLastClip:(id)arg1;
- (void)playerViewController:(id)arg1 playingClipAtIndex:(unsigned long long)arg2;
- (void)playerViewController:(id)arg1 playbackRequestedAtIndex:(unsigned long long)arg2;
- (void)playerViewControllerDidTapPreviousReel:(id)arg1;
- (void)playerViewControllerDidTapNextReel:(id)arg1;
- (void)playerViewControllerCloseButtonTapped:(id)arg1;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)pageViewController:(id)arg1 willTransitionToViewControllers:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (double)toastBottomOffset;
- (_Bool)overridesBottomOffsetControllerBottomOffset;
- (_Bool)isEqualTopController:(id)arg1;
- (void)canBePushedWithBlock:(CDUnknownBlockType)arg1;
- (id)model;
- (void)loadWithModel:(id)arg1 fromView:(id)arg2;
- (id)reelContentView;
- (void)loadWithModel:(id)arg1 endpointProvider:(id)arg2 fromView:(id)arg3;
- (void)dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithParentResponder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

