//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextViewDelegate-Protocol.h"

@class HTSLiveAddCoverImageView, HTSLiveCrateRoomShareView, HTSLiveCreateRoomPromotionView, HTSLiveCreateRoomViewModel, HTSLiveGameChooseViewNew, HTSLiveNewBeautySDKIndicatorView, HTSLiveRoomInfoTagView, HTSLiveTagChooseViewNew, HTSLiveTopTypeChooseView, HTSLiveTypeChooseViewNew, IESLiveBannerWebView, IESLiveBroadcastNoticeView, IESLiveCoverCheckingView, IESLiveCoverOptimizeIndicatorView, IESLiveCoverUploadFailView, IESLiveImageLabelButton, IESLivePlaceholderTextView, IESLiveUserModel, MASConstraint, NSString, UIButton, UIImageView, UILabel, UIViewController;
@protocol HTSKVStore, HTSLiveCoverImageDelegate, HTSLiveCreateRoomPromotionConfig, IESLiveAlertFactory, IESLiveCreateViewPartInjectProtocol, IESLiveCustomConfig, IESLiveEnvironment, IESLiveGuideShopFactory, IESLiveInternalRouter, IESLivePushService, IESLiveSettings, IESLiveToastFactory, IESLiveTracker, IESLiveURLSchemaHandler, IESLiveUserService, IESLiveWebImageService, IESLiveWebViewFactory;

@interface HTSLiveCreateRoomViewNew : UIView <UITextViewDelegate>
{
    _Bool _isChecking;
    _Bool _tagViewShowing;
    _Bool _gameChooseViewShowing;
    UIView *_containerView;
    UIViewController<HTSLiveCoverImageDelegate> *_containerViewController;
    CDUnknownBlockType _switchCameraButtonDidClicked;
    HTSLiveCreateRoomViewModel *_viewModel;
    UIButton *_closeButton;
    UIButton *_switchCameraButton;
    UIButton *_liveGuideButton;
    HTSLiveTopTypeChooseView *_topTypeChooseView;
    UIView *_centerView;
    IESLivePlaceholderTextView *_liveTitleView;
    UIView *_liveTitleViewBottomLine;
    HTSLiveRoomInfoTagView *_locationTagView;
    HTSLiveRoomInfoTagView *_liveTagView;
    HTSLiveCrateRoomShareView *_shareView;
    UILabel *_shareTip;
    HTSLiveAddCoverImageView *_addCoverImageView;
    HTSLiveCreateRoomPromotionView *_promotionView;
    UIView *_startControlView;
    UIButton *_startButton;
    UIView *_startButtonBackground;
    IESLiveImageLabelButton *_beautiButton;
    IESLiveImageLabelButton *_filterButton;
    IESLiveImageLabelButton *_shoppingButton;
    IESLiveImageLabelButton *_gameChooseButton;
    IESLiveImageLabelButton *_orientationChooseButton;
    HTSLiveTypeChooseViewNew *_typeChooseView;
    HTSLiveGameChooseViewNew *_gameChooseView;
    HTSLiveTagChooseViewNew *_tagChooseView;
    IESLiveCoverCheckingView *_coverDetectingView;
    HTSLiveNewBeautySDKIndicatorView *_qingyanIndicatorView;
    IESLiveCoverOptimizeIndicatorView *_coverOptimizeIndicatorView;
    IESLiveCoverUploadFailView *_coverUploadFailView;
    IESLiveBannerWebView *_bannerWebView;
    IESLiveBroadcastNoticeView *_noticeView;
    MASConstraint *_peripheShowCons;
    MASConstraint *_peripheHiddenCons;
    UIImageView *_backgroundImageView;
    UIImageView *_backgroundAudioImageView;
    IESLiveUserModel *_currentLoginUser;
    id <IESLiveUserService> _userService;
    id <IESLiveTracker> _tracker;
    id <IESLiveToastFactory> _toastFactory;
    id <IESLiveAlertFactory> _alertFactory;
    id <IESLiveSettings> _settings;
    id <IESLivePushService> _pushService;
    id <IESLiveWebViewFactory> _webviewFactory;
    id <IESLiveGuideShopFactory> _guideShopFactory;
    id <IESLiveEnvironment> _appTarget;
    id <IESLiveCustomConfig> _customConfig;
    id <IESLiveInternalRouter> _router;
    id <IESLiveWebImageService> _imageService;
    id <HTSKVStore> _kvStore;
    id <IESLiveWebViewFactory> _webViewFactory;
    id <IESLiveURLSchemaHandler> _urlHandler;
    id <HTSLiveCreateRoomPromotionConfig> _promotionConfig;
    id <IESLiveCreateViewPartInjectProtocol> _PartInject;
}

@property(retain, nonatomic) id <IESLiveCreateViewPartInjectProtocol> PartInject; // @synthesize PartInject=_PartInject;
@property(retain, nonatomic) id <HTSLiveCreateRoomPromotionConfig> promotionConfig; // @synthesize promotionConfig=_promotionConfig;
@property(retain, nonatomic) id <IESLiveURLSchemaHandler> urlHandler; // @synthesize urlHandler=_urlHandler;
@property(retain, nonatomic) id <IESLiveWebViewFactory> webViewFactory; // @synthesize webViewFactory=_webViewFactory;
@property(retain, nonatomic) id <HTSKVStore> kvStore; // @synthesize kvStore=_kvStore;
@property(retain, nonatomic) id <IESLiveWebImageService> imageService; // @synthesize imageService=_imageService;
@property(retain, nonatomic) id <IESLiveInternalRouter> router; // @synthesize router=_router;
@property(retain, nonatomic) id <IESLiveCustomConfig> customConfig; // @synthesize customConfig=_customConfig;
@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) id <IESLiveGuideShopFactory> guideShopFactory; // @synthesize guideShopFactory=_guideShopFactory;
@property(retain, nonatomic) id <IESLiveWebViewFactory> webviewFactory; // @synthesize webviewFactory=_webviewFactory;
@property(retain, nonatomic) id <IESLivePushService> pushService; // @synthesize pushService=_pushService;
@property(retain, nonatomic) id <IESLiveSettings> settings; // @synthesize settings=_settings;
@property(retain, nonatomic) id <IESLiveAlertFactory> alertFactory; // @synthesize alertFactory=_alertFactory;
@property(retain, nonatomic) id <IESLiveToastFactory> toastFactory; // @synthesize toastFactory=_toastFactory;
@property(retain, nonatomic) id <IESLiveTracker> tracker; // @synthesize tracker=_tracker;
@property(nonatomic) _Bool gameChooseViewShowing; // @synthesize gameChooseViewShowing=_gameChooseViewShowing;
@property(nonatomic) _Bool tagViewShowing; // @synthesize tagViewShowing=_tagViewShowing;
@property(retain, nonatomic) id <IESLiveUserService> userService; // @synthesize userService=_userService;
@property(retain, nonatomic) IESLiveUserModel *currentLoginUser; // @synthesize currentLoginUser=_currentLoginUser;
@property(retain, nonatomic) UIImageView *backgroundAudioImageView; // @synthesize backgroundAudioImageView=_backgroundAudioImageView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) MASConstraint *peripheHiddenCons; // @synthesize peripheHiddenCons=_peripheHiddenCons;
@property(retain, nonatomic) MASConstraint *peripheShowCons; // @synthesize peripheShowCons=_peripheShowCons;
@property(nonatomic) __weak IESLiveBroadcastNoticeView *noticeView; // @synthesize noticeView=_noticeView;
@property(retain, nonatomic) IESLiveBannerWebView *bannerWebView; // @synthesize bannerWebView=_bannerWebView;
@property(retain, nonatomic) IESLiveCoverUploadFailView *coverUploadFailView; // @synthesize coverUploadFailView=_coverUploadFailView;
@property(retain, nonatomic) IESLiveCoverOptimizeIndicatorView *coverOptimizeIndicatorView; // @synthesize coverOptimizeIndicatorView=_coverOptimizeIndicatorView;
@property(retain, nonatomic) HTSLiveNewBeautySDKIndicatorView *qingyanIndicatorView; // @synthesize qingyanIndicatorView=_qingyanIndicatorView;
@property(retain, nonatomic) IESLiveCoverCheckingView *coverDetectingView; // @synthesize coverDetectingView=_coverDetectingView;
@property(retain, nonatomic) HTSLiveTagChooseViewNew *tagChooseView; // @synthesize tagChooseView=_tagChooseView;
@property(retain, nonatomic) HTSLiveGameChooseViewNew *gameChooseView; // @synthesize gameChooseView=_gameChooseView;
@property(retain, nonatomic) HTSLiveTypeChooseViewNew *typeChooseView; // @synthesize typeChooseView=_typeChooseView;
@property(retain, nonatomic) IESLiveImageLabelButton *orientationChooseButton; // @synthesize orientationChooseButton=_orientationChooseButton;
@property(retain, nonatomic) IESLiveImageLabelButton *gameChooseButton; // @synthesize gameChooseButton=_gameChooseButton;
@property(retain, nonatomic) IESLiveImageLabelButton *shoppingButton; // @synthesize shoppingButton=_shoppingButton;
@property(retain, nonatomic) IESLiveImageLabelButton *filterButton; // @synthesize filterButton=_filterButton;
@property(retain, nonatomic) IESLiveImageLabelButton *beautiButton; // @synthesize beautiButton=_beautiButton;
@property(retain, nonatomic) UIView *startButtonBackground; // @synthesize startButtonBackground=_startButtonBackground;
@property(retain, nonatomic) UIButton *startButton; // @synthesize startButton=_startButton;
@property(retain, nonatomic) UIView *startControlView; // @synthesize startControlView=_startControlView;
@property(retain, nonatomic) HTSLiveCreateRoomPromotionView *promotionView; // @synthesize promotionView=_promotionView;
@property(retain, nonatomic) HTSLiveAddCoverImageView *addCoverImageView; // @synthesize addCoverImageView=_addCoverImageView;
@property(retain, nonatomic) UILabel *shareTip; // @synthesize shareTip=_shareTip;
@property(retain, nonatomic) HTSLiveCrateRoomShareView *shareView; // @synthesize shareView=_shareView;
@property(retain, nonatomic) HTSLiveRoomInfoTagView *liveTagView; // @synthesize liveTagView=_liveTagView;
@property(retain, nonatomic) HTSLiveRoomInfoTagView *locationTagView; // @synthesize locationTagView=_locationTagView;
@property(retain, nonatomic) UIView *liveTitleViewBottomLine; // @synthesize liveTitleViewBottomLine=_liveTitleViewBottomLine;
@property(retain, nonatomic) IESLivePlaceholderTextView *liveTitleView; // @synthesize liveTitleView=_liveTitleView;
@property(retain, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property(retain, nonatomic) HTSLiveTopTypeChooseView *topTypeChooseView; // @synthesize topTypeChooseView=_topTypeChooseView;
@property(retain, nonatomic) UIButton *liveGuideButton; // @synthesize liveGuideButton=_liveGuideButton;
@property(retain, nonatomic) UIButton *switchCameraButton; // @synthesize switchCameraButton=_switchCameraButton;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) HTSLiveCreateRoomViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) _Bool isChecking; // @synthesize isChecking=_isChecking;
@property(copy, nonatomic) CDUnknownBlockType switchCameraButtonDidClicked; // @synthesize switchCameraButtonDidClicked=_switchCameraButtonDidClicked;
@property(nonatomic) __weak UIViewController<HTSLiveCoverImageDelegate> *containerViewController; // @synthesize containerViewController=_containerViewController;
@property(nonatomic) __weak UIView *containerView; // @synthesize containerView=_containerView;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)resetCoverHintWithDetectingResult:(_Bool)arg1;
- (void)hideCoverCheckingView;
- (void)hideSDKIndicatorViewIfNeeded;
- (void)showCoverDetectingView;
- (void)showCoverUploadFailAlertWithString:(id)arg1;
- (void)hideCoverOptimizingIndicatorView;
- (void)showCoverOptimizeIndicatorWithString:(id)arg1;
- (void)showCoverReviewCriteria;
- (void)tapReUploadCoverButton;
- (void)tapCoverOptimizeIndicatorView;
- (void)tapAddCoverImageView;
- (void)showAddCoverViewFromOtherChannel;
- (void)showBaseAddCoverImageView;
- (void)showAnchorProtocolAlertView;
- (void)resetViewModelLiveTypeIfNeededWithScenarioModel:(id)arg1;
- (id)ajustGameIconSizeWithImage:(id)arg1;
- (id)ajustGameIconSizeWithURL:(id)arg1;
- (void)alertUserToSelectTag;
- (void)alertUserToUpgradeDeviceOSVsersion;
- (void)becomeActive;
- (void)toggleShowContent:(_Bool)arg1;
- (void)_showBroadcastHintView:(_Bool)arg1;
- (void)showTagChooseView;
- (void)showGameChooseView;
- (void)startLive;
- (_Bool)needLogin;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (id)pr_createOrientationChooseButton;
- (id)pr_createGameChooseButton;
- (id)pr_createShoppingButton;
- (id)pr_createFilterButton;
- (id)pr_createBeautiButton;
- (id)pr_createLiveTagView;
- (id)pr_createLocationTagView;
- (id)pr_createTopTypeChooseView;
- (id)pr_createTagChooseView;
- (id)pr_createGameChooseView;
- (id)pr_createTypeChooseView;
- (void)_onSwitchButtonClicked;
- (id)pr_createSwitchCameraButton;
- (id)pr_createBackgroundImageView;
- (id)pr_createBackgroundAudioImageView;
- (id)pr_createLiveGuideButton;
- (id)pr_createCloseButton;
- (id)pr_createStartButtonBackground;
- (id)pr_createStartButton;
- (id)pr_createLiveTitleViewBottomLine;
- (id)pr_createLiveTitleView;
- (id)pr_createAddCoverImageView;
- (id)pr_createPromotionView;
- (id)pr_createShareView;
- (id)pr_createShareTip;
- (id)pr_createStartControlView;
- (id)pr_createCenterView;
- (void)appBecomeActive;
- (void)handleFinishLiveRegister;
- (void)pr_bindAction;
- (void)onIndicatorViewClicked;
- (void)layoutSubviews;
- (void)pr_setupStartControlView;
- (void)pr_refreshBannerView;
- (void)pr_setupBannerView;
- (void)pr_setupCenterView;
- (void)pr_setupUI;
- (_Bool)pr_shouldHideShopEntry:(unsigned long long)arg1;
- (id)initWithViewModel:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

