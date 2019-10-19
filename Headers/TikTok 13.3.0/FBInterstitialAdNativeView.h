//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdReportingCoordinatorDelegate-Protocol.h"
#import "FBInterstitialAdBodyViewDelegate-Protocol.h"
#import "FBInterstitialAdToolbarViewDelegate-Protocol.h"

@class FBAdReportingCoordinator, FBInterstitialAdBodyView, FBInterstitialAdToolbarView, FBNativeAdDataModel, NSString;
@protocol FBInterstitialAdNativeViewDelegate;

@interface FBInterstitialAdNativeView : UIView <FBInterstitialAdBodyViewDelegate, FBInterstitialAdToolbarViewDelegate, FBAdReportingCoordinatorDelegate>
{
    id <FBInterstitialAdNativeViewDelegate> _delegate;
    FBNativeAdDataModel *_dataModel;
    FBInterstitialAdToolbarView *_toolbarView;
    FBInterstitialAdBodyView *_bodyView;
    FBAdReportingCoordinator *_reportingCoordinator;
}

@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(nonatomic) __weak FBInterstitialAdBodyView *bodyView; // @synthesize bodyView=_bodyView;
@property(nonatomic) __weak FBInterstitialAdToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(readonly, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FBInterstitialAdNativeViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adReportingCoordinatorDidCloseWhyAmISeeingThis:(id)arg1;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)interstitialAdToolbarDidTapAdInfo:(id)arg1;
- (void)interstitialAdToolbarDidCloseAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidTapAdChoices:(id)arg1;
- (void)interstitialAdToolbarDidClose:(id)arg1 withTouchData:(id)arg2;
- (id)interstitialAdToolbarRootViewControllerForAdChoicesPresentation:(id)arg1;
- (id)interstitialAdBodyViewRootViewController:(id)arg1;
- (void)interstitialAdBodyView:(id)arg1 didFailWithError:(id)arg2;
- (void)interstitialAdBodyViewDidEnd:(id)arg1;
- (void)interstitialAdBodyViewDidProgress:(id)arg1;
- (void)interstitialAdBodyViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)interstitialAdBodyViewDidClick:(id)arg1 withEvent:(id)arg2 withCommand:(id)arg3 skipAppStore:(_Bool)arg4 withPageNumber:(id)arg5 withPageTotal:(id)arg6;
- (void)interstitialAdBodyViewDidLogImpression:(id)arg1 withViewabilityValidator:(id)arg2 withPageNumber:(id)arg3 withPageTotal:(id)arg4;
- (void)interstitialAdBodyViewDidLoad:(id)arg1;
- (void)resumeVideoPlaybackIfNeeded;
- (void)pauseVideoPlaybackIfNeeded;
- (void)showAd;
- (void)layoutSubviews;
- (_Bool)requiresToolbar;
- (_Bool)shouldShowWatchAndInstall;
- (void)loadAdFromDataModel:(id)arg1 placementDefinition:(id)arg2;
- (void)destroyAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

