//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "JETOOBEViewController.h"

#import "GOONavigationCustomization-Protocol.h"
#import "JETGrOOBEMeshTestHelpViewControllerDelegate-Protocol.h"
#import "JETVideoViewDelegate-Protocol.h"

@class GOONavigationStyle, JETBottomBarView, JETButtonFooter, JETGroupID, JETOverlayVideoView, NSMutableDictionary, NSNumber, NSSet, NSString, UIScrollView, UIView;

@interface JETGrOOBEMeshTestViewController : JETOOBEViewController <GOONavigationCustomization, JETGrOOBEMeshTestHelpViewControllerDelegate, JETVideoViewDelegate>
{
    long long _currentStage;
    NSNumber *_testResultMBPS;
    NSString *_meshTestAPIdentifier;
    JETGroupID *_meshTestGroupIdentifier;
    NSString *_meshTestGroupRootAPIdentifier;
    JETOverlayVideoView *_overlayVideoView;
    JETButtonFooter *_buttonFooter;
    JETBottomBarView *_bottomBarView;
    NSMutableDictionary *_stageInfos;
}

@property(retain, nonatomic) NSMutableDictionary *stageInfos; // @synthesize stageInfos=_stageInfos;
@property(retain, nonatomic) JETBottomBarView *bottomBarView; // @synthesize bottomBarView=_bottomBarView;
@property(retain, nonatomic) JETButtonFooter *buttonFooter; // @synthesize buttonFooter=_buttonFooter;
@property(retain, nonatomic) JETOverlayVideoView *overlayVideoView; // @synthesize overlayVideoView=_overlayVideoView;
@property(copy, nonatomic) NSString *meshTestGroupRootAPIdentifier; // @synthesize meshTestGroupRootAPIdentifier=_meshTestGroupRootAPIdentifier;
@property(retain, nonatomic) JETGroupID *meshTestGroupIdentifier; // @synthesize meshTestGroupIdentifier=_meshTestGroupIdentifier;
@property(copy, nonatomic) NSString *meshTestAPIdentifier; // @synthesize meshTestAPIdentifier=_meshTestAPIdentifier;
@property(copy, nonatomic) NSNumber *testResultMBPS; // @synthesize testResultMBPS=_testResultMBPS;
@property(nonatomic) long long currentStage; // @synthesize currentStage=_currentStage;
- (void).cxx_destruct;
- (void)onTestConnection;
- (void)onSkipTest;
- (void)outroDidFinish;
- (void)loopDidFinish;
- (void)introDidFinish;
- (void)onRightButton;
- (void)onLeftButton;
- (void)performMeshTest;
- (id)findGrootAPIdentifier;
- (void)showError:(id)arg1;
- (void)finishMeshTest;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)createFooterForTestStage:(long long)arg1;
- (id)createFooterWithLeftButtonType:(long long)arg1 leftText:(id)arg2 leftAccessibiltyIdentifier:(id)arg3 rightButtonType:(long long)arg4 rightText:(id)arg5 rightAccessibiltyIdentifier:(id)arg6 videoPlaybackMode:(long long)arg7;
- (id)createVideoViewForStage:(long long)arg1;
- (void)layoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)refreshViewForCurrentStage;
- (id)stageInfoForStage:(long long)arg1;
- (void)addStageInfo:(id)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithAPState:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end
