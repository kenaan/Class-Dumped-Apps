//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NFUIFullPlayerViewController.h"

#import "NFIBranchingPlayerControlsRefreshDelegate-Protocol.h"
#import "NFISceneViewControllerDelegate-Protocol.h"
#import "NFUIPlayerViewControllerDelegate-Protocol.h"

@class InteractiveDataModel, NFIBranchingPlayerControlsRefreshViewController, NFIMomentsSceneController, NSDictionary, NSNumber, NSString, PlaybackRequest;

@interface NFIInteractiveMomentPlayerViewController : NFUIFullPlayerViewController <NFUIPlayerViewControllerDelegate, NFISceneViewControllerDelegate, NFIBranchingPlayerControlsRefreshDelegate>
{
    _Bool _reachedLogicalEnd;
    NFIBranchingPlayerControlsRefreshViewController *_playerControlsViewController;
    NFIMomentsSceneController *_sceneViewController;
    PlaybackRequest *_playbackRequest;
    InteractiveDataModel *_interactiveDataModel;
    NSDictionary *_clientModel;
    NSNumber *_xidLogger;
}

@property(retain, nonatomic) NSNumber *xidLogger; // @synthesize xidLogger=_xidLogger;
@property(retain, nonatomic) NSDictionary *clientModel; // @synthesize clientModel=_clientModel;
@property(retain, nonatomic) InteractiveDataModel *interactiveDataModel; // @synthesize interactiveDataModel=_interactiveDataModel;
@property(retain, nonatomic) PlaybackRequest *playbackRequest; // @synthesize playbackRequest=_playbackRequest;
@property(nonatomic) _Bool reachedLogicalEnd; // @synthesize reachedLogicalEnd=_reachedLogicalEnd;
@property(retain, nonatomic) NFIMomentsSceneController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
@property(retain, nonatomic) NFIBranchingPlayerControlsRefreshViewController *playerControlsViewController; // @synthesize playerControlsViewController=_playerControlsViewController;
- (void).cxx_destruct;
- (id)childViewControllerForStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (_Bool)nearingChoicePointStart;
- (double)canSeekBack:(double)arg1;
- (double)canSeekForward:(double)arg1;
- (void)playbackToggled;
- (void)visibilityChanged:(_Bool)arg1;
- (void)playerViewController:(id)arg1 videoDidAppear:(_Bool)arg2;
- (_Bool)isExternalPlaybackActive;
- (void)playerController:(id)arg1 stateChange:(unsigned long long)arg2 previous:(unsigned long long)arg3;
- (void)playerController:(id)arg1 audioOptionChanged:(id)arg2;
- (void)playerController:(id)arg1 timeUpdate:(double)arg2;
- (_Bool)isPictureInPictureEnabled;
- (void)adjustGeometryForPlayerView:(id)arg1 withAspectDetails:(id)arg2;
- (void)configureWithModel:(id)arg1;
- (void)skipPrePlay;
- (void)fetchInteractiveMoments;
- (void)updateCurrentTime:(float)arg1;
- (void)playPlaybackRequest:(id)arg1 skipPrePlay:(_Bool)arg2;
- (void)showPostPlayExperience;
- (void)playNextBranchingEpisode:(id)arg1 trackId:(id)arg2;
- (void)configureWithMomentsData:(id)arg1;
- (void)dismiss;
- (id)playerRefreshConfig;
- (void)commonInitWithPlayerViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

