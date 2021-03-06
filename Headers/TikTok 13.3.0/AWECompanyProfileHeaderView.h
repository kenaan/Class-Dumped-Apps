//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEProfileHeaderView.h"

#import "AWECompanyLinkAreaViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWECompanyLinkAreaView, AWEGlobalTranslationSubscription, AWEProfileBrandTopVideoViewController, AWEProfileHeaderActionController, AWETopVideoEntranceView, AWEUserModel, NSString, NSTimer, UIButton, UIColor, UIImageView, UIPanGestureRecognizer, UITapGestureRecognizer, UIView;

@interface AWECompanyProfileHeaderView : AWEProfileHeaderView <AWECompanyLinkAreaViewDelegate, UIGestureRecognizerDelegate>
{
    _Bool _needTrackStoreEntranceAfterFetchUser;
    _Bool _isLogSent;
    _Bool _enableGlobalTranslation;
    _Bool _isTopVideoFullScreen;
    AWEProfileHeaderActionController *_actionController;
    UIView *_challengeView;
    UIColor *_topCoverOriginalColor;
    CDUnknownBlockType _bannerInteractionBlock;
    CDUnknownBlockType _handlePanGestureBlock;
    UIView *_topCover;
    UIImageView *_topBannerImageView;
    AWECompanyLinkAreaView *_linkAreaView;
    UIButton *_liveStaticTag;
    UITapGestureRecognizer *_tapGesture;
    NSTimer *_hiddenAnimationTimer;
    long long _animationTop;
    long long _timerCount;
    UIPanGestureRecognizer *_panGesture;
    UIView *_challengeSepView;
    NSString *_translationRawStr;
    AWEGlobalTranslationSubscription *_subscription;
    unsigned long long _previousTranslationState;
    UIView *_topVideoContainerView;
    UIView *_topVideoTapView;
    AWEProfileBrandTopVideoViewController *_topVideoViewController;
    AWETopVideoEntranceView *_topVideoEntranceView;
    AWEUserModel *_user;
}

@property(nonatomic) _Bool isTopVideoFullScreen; // @synthesize isTopVideoFullScreen=_isTopVideoFullScreen;
@property(retain, nonatomic) AWEUserModel *user; // @synthesize user=_user;
@property(retain, nonatomic) AWETopVideoEntranceView *topVideoEntranceView; // @synthesize topVideoEntranceView=_topVideoEntranceView;
@property(retain, nonatomic) AWEProfileBrandTopVideoViewController *topVideoViewController; // @synthesize topVideoViewController=_topVideoViewController;
@property(retain, nonatomic) UIView *topVideoTapView; // @synthesize topVideoTapView=_topVideoTapView;
@property(retain, nonatomic) UIView *topVideoContainerView; // @synthesize topVideoContainerView=_topVideoContainerView;
@property(nonatomic) unsigned long long previousTranslationState; // @synthesize previousTranslationState=_previousTranslationState;
@property(nonatomic) _Bool enableGlobalTranslation; // @synthesize enableGlobalTranslation=_enableGlobalTranslation;
@property(retain, nonatomic) AWEGlobalTranslationSubscription *subscription; // @synthesize subscription=_subscription;
@property(copy, nonatomic) NSString *translationRawStr; // @synthesize translationRawStr=_translationRawStr;
@property(retain, nonatomic) UIView *challengeSepView; // @synthesize challengeSepView=_challengeSepView;
@property(retain, nonatomic) UIPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) long long timerCount; // @synthesize timerCount=_timerCount;
@property(nonatomic) long long animationTop; // @synthesize animationTop=_animationTop;
@property(retain, nonatomic) NSTimer *hiddenAnimationTimer; // @synthesize hiddenAnimationTimer=_hiddenAnimationTimer;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(retain, nonatomic) UIButton *liveStaticTag; // @synthesize liveStaticTag=_liveStaticTag;
@property(retain, nonatomic) AWECompanyLinkAreaView *linkAreaView; // @synthesize linkAreaView=_linkAreaView;
@property(retain, nonatomic) UIImageView *topBannerImageView; // @synthesize topBannerImageView=_topBannerImageView;
@property(retain, nonatomic) UIView *topCover; // @synthesize topCover=_topCover;
@property(nonatomic) _Bool isLogSent; // @synthesize isLogSent=_isLogSent;
@property(copy, nonatomic) CDUnknownBlockType handlePanGestureBlock; // @synthesize handlePanGestureBlock=_handlePanGestureBlock;
@property(copy, nonatomic) CDUnknownBlockType bannerInteractionBlock; // @synthesize bannerInteractionBlock=_bannerInteractionBlock;
@property(retain, nonatomic) UIColor *topCoverOriginalColor; // @synthesize topCoverOriginalColor=_topCoverOriginalColor;
- (void)setChallengeView:(id)arg1;
- (id)challengeView;
- (_Bool)needTrackStoreEntranceAfterFetchUser;
- (void)setActionController:(id)arg1;
- (id)actionController;
- (void).cxx_destruct;
- (double)topVideoViewHeight;
- (double)topVideoViewWidth;
- (void)addTopVideoWithUser:(id)arg1;
- (_Bool)enableTopVideo;
- (void)leaveVideoFullScreenIfVideoIsPortrait;
- (void)enterVideoFullScreenWithOffsetY:(double)arg1 enterMethod:(id)arg2;
- (void)enterVideoFullScreen;
- (void)scrollViewDidEndDragingWithOffset:(struct CGPoint)arg1;
- (double)topVideoRealHeight;
- (void)scrollViewDidScrollWithOffset:(struct CGPoint)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (double)topBannerImageViewFittingHeight;
- (void)setNeedTrackStoreEntranceAfterFetchUser:(_Bool)arg1;
- (void)translationLoadingView:(id)arg1 requestTranslationStatus:(_Bool)arg2;
- (void)companyLineAreaViewTap:(id)arg1 linkType:(long long)arg2;
- (void)companyLineAreaViewClick:(id)arg1;
- (void)updateFansLabel;
- (void)updateNavigationSlidingButtonView:(long long)arg1;
- (void)constructTranspondProfileCoverArray;
- (void)handlePanGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)changeTopBannerImageFromView:(id)arg1;
- (void)handleLongPressGesture:(id)arg1;
- (void)topBannerImageTapped:(id)arg1;
- (void)changeCoverViewAlpha:(double)arg1 relativeWithDefaultValue:(_Bool)arg2;
- (void)hideBannerAnimation;
- (void)invalidateHiddenAnimationTimer;
- (void)hideBannerView;
- (void)showBannerView;
- (void)configBannerImageViewGestures;
- (void)p_avatarTapped;
- (void)p_syncAndConfigUser;
- (void)p_configTranslationForSignature:(id)arg1;
- (void)p_updateSignature:(id)arg1;
- (void)p_updateSignature;
- (void)updateSocialLinkView;
- (id)avatarInHeaderView;
- (void)updateAvatarBorder;
- (void)adjustAlpha:(double)arg1;
- (void)hideNewGoodsHint;
- (void)handleTapOnContent:(id)arg1;
- (void)updateIntroLabelWithFollowStatus:(long long)arg1;
- (void)updateNameLabel;
- (double)headerViewHeight;
- (_Bool)isLinkModelChanged:(id)arg1;
- (void)updateHeaderViewWithLinkModel:(id)arg1;
- (void)updateSocialStatisticViewLayoutForPageOptimizeWithHeight:(double)arg1;
- (void)p_updateUI;
- (void)configWithUser:(id)arg1 isLogSent:(_Bool)arg2;
- (id)shapeLayerWithPath:(id)arg1;
- (void)addCoverLayerWithBannerWidth:(double)arg1 bannerSize:(struct CGRect)arg2;
- (void)layoutSubviews;
- (void)updateBottomViewLayout;
- (void)p_updateSocialStatisticsButtons;
- (void)p_setupUI;
- (void)handleShopEmptyListNotification:(id)arg1;
- (void)dealloc;
- (id)initWithIsCurrentUser:(_Bool)arg1 fromHomepage:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

