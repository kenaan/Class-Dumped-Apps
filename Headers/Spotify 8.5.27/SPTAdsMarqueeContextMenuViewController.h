//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "SPTPageController-Protocol.h"
#import "SPTWebViewControllerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, NSURL, SPTAdsMarqueeContextMenuView, SPTTheme, UIButton, UIVisualEffectView;
@protocol SPTAdsBaseMarqueeEntity, SPTLogCenter, SPTPageContainer, SPTUIPresentationService, SPTWebViewController;

@interface SPTAdsMarqueeContextMenuViewController : UIViewController <SPTWebViewControllerDelegate, SPTPageController>
{
    UIVisualEffectView *_blurView;
    NSString *_contextMenuTitle;
    UIButton *_cancelButton;
    SPTAdsMarqueeContextMenuView *_contextMenuViewPrimary;
    SPTAdsMarqueeContextMenuView *_contextMenuViewSecondary;
    SPTTheme *_theme;
    UIViewController<SPTWebViewController> *_webViewController;
    id <SPTLogCenter> _logcenter;
    id <SPTAdsBaseMarqueeEntity> _adEntity;
    double _popoverHeight;
    id <SPTUIPresentationService> _presentationService;
    NSLayoutConstraint *_bottomConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property(nonatomic) __weak id <SPTUIPresentationService> presentationService; // @synthesize presentationService=_presentationService;
@property(nonatomic) double popoverHeight; // @synthesize popoverHeight=_popoverHeight;
@property(retain, nonatomic) id <SPTAdsBaseMarqueeEntity> adEntity; // @synthesize adEntity=_adEntity;
@property(readonly, nonatomic) id <SPTLogCenter> logcenter; // @synthesize logcenter=_logcenter;
@property(readonly, nonatomic) UIViewController<SPTWebViewController> *webViewController; // @synthesize webViewController=_webViewController;
@property(readonly, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(readonly, nonatomic) SPTAdsMarqueeContextMenuView *contextMenuViewSecondary; // @synthesize contextMenuViewSecondary=_contextMenuViewSecondary;
@property(readonly, nonatomic) SPTAdsMarqueeContextMenuView *contextMenuViewPrimary; // @synthesize contextMenuViewPrimary=_contextMenuViewPrimary;
@property(readonly, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(readonly, nonatomic) NSString *contextMenuTitle; // @synthesize contextMenuTitle=_contextMenuTitle;
@property(readonly, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void).cxx_destruct;
@property(readonly, nonatomic, getter=spt_pageURI) NSURL *pageURI;
@property(readonly, nonatomic, getter=spt_pageIdentifier) NSString *pageIdentifier;
- (void)transitionContextMenuFrom:(id)arg1 toView:(id)arg2 animated:(_Bool)arg3;
- (void)webViewControllerWillAppear:(id)arg1;
- (_Bool)isIPad;
- (double)safeAreaBottomMargin;
- (void)closeWebView:(id)arg1;
- (void)dismissContextMenu;
- (_Bool)didTapHeaderViewReadMore:(id)arg1;
- (void)didTapHeaderView:(id)arg1;
- (void)addconstraints;
- (_Bool)shouldShowNavigationBar;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithTheme:(id)arg1 title:(id)arg2 primaryContextMenuView:(id)arg3 secondaryContextMenuView:(id)arg4 presentationService:(id)arg5 webViewFactory:(id)arg6 logCenter:(id)arg7 adEntity:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=spt_pageContainer) id <SPTPageContainer> pageContainer;
@property(readonly) Class superclass;

@end

