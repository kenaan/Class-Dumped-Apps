//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEProfileHeaderView.h"

@class AWEGlobalTranslationSubscription, AWEProfileHeaderActionController, AWEUserDetailHeaderBadgeView, MASConstraint, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWESymmetricProfileHeaderView : AWEProfileHeaderView
{
    _Bool _isRecommendViewShow;
    _Bool _isFirstTimeViewDidLoad;
    _Bool _avatarLoadFailed;
    _Bool _enableGlobalTranslation;
    AWEProfileHeaderActionController *_actionController;
    UIView *_xmasHatView;
    UIView *_activityView;
    UILabel *_idLabel;
    UIImageView *_privateAccountLock;
    UILabel *_videoCountLabel;
    UIView *_videoCountLabelBG;
    AWEUserDetailHeaderBadgeView *_verifyBadgeView;
    UIButton *_officialButton;
    UILabel *_bioUrlLabel;
    UILabel *_bioEmailLabel;
    NSString *_translationRawStr;
    AWEGlobalTranslationSubscription *_subscription;
    unsigned long long _previousTranslationState;
    MASConstraint *_recommendViewBottomConstraintToContainerView;
    MASConstraint *_userActivityViewBottomConstraintToContainerView;
    MASConstraint *_introLabelTopConstraintToRecommendView;
    MASConstraint *_introLabelTopConstraintToContainerView;
    MASConstraint *_introLabelHeightEmptyConstraint;
    MASConstraint *_introLabelHeightConstConstraint;
}

@property(retain, nonatomic) MASConstraint *introLabelHeightConstConstraint; // @synthesize introLabelHeightConstConstraint=_introLabelHeightConstConstraint;
@property(retain, nonatomic) MASConstraint *introLabelHeightEmptyConstraint; // @synthesize introLabelHeightEmptyConstraint=_introLabelHeightEmptyConstraint;
@property(retain, nonatomic) MASConstraint *introLabelTopConstraintToContainerView; // @synthesize introLabelTopConstraintToContainerView=_introLabelTopConstraintToContainerView;
@property(retain, nonatomic) MASConstraint *introLabelTopConstraintToRecommendView; // @synthesize introLabelTopConstraintToRecommendView=_introLabelTopConstraintToRecommendView;
@property(retain, nonatomic) MASConstraint *userActivityViewBottomConstraintToContainerView; // @synthesize userActivityViewBottomConstraintToContainerView=_userActivityViewBottomConstraintToContainerView;
@property(retain, nonatomic) MASConstraint *recommendViewBottomConstraintToContainerView; // @synthesize recommendViewBottomConstraintToContainerView=_recommendViewBottomConstraintToContainerView;
@property(nonatomic) _Bool enableGlobalTranslation; // @synthesize enableGlobalTranslation=_enableGlobalTranslation;
@property(nonatomic) unsigned long long previousTranslationState; // @synthesize previousTranslationState=_previousTranslationState;
@property(retain, nonatomic) AWEGlobalTranslationSubscription *subscription; // @synthesize subscription=_subscription;
@property(copy, nonatomic) NSString *translationRawStr; // @synthesize translationRawStr=_translationRawStr;
@property(retain, nonatomic) UILabel *bioEmailLabel; // @synthesize bioEmailLabel=_bioEmailLabel;
@property(retain, nonatomic) UILabel *bioUrlLabel; // @synthesize bioUrlLabel=_bioUrlLabel;
@property(retain, nonatomic) UIButton *officialButton; // @synthesize officialButton=_officialButton;
@property(retain, nonatomic) AWEUserDetailHeaderBadgeView *verifyBadgeView; // @synthesize verifyBadgeView=_verifyBadgeView;
@property(retain, nonatomic) UIView *videoCountLabelBG; // @synthesize videoCountLabelBG=_videoCountLabelBG;
@property(retain, nonatomic) UILabel *videoCountLabel; // @synthesize videoCountLabel=_videoCountLabel;
@property(retain, nonatomic) UIImageView *privateAccountLock; // @synthesize privateAccountLock=_privateAccountLock;
@property(retain, nonatomic) UILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(retain, nonatomic) UIView *activityView; // @synthesize activityView=_activityView;
@property(retain, nonatomic) UIView *xmasHatView; // @synthesize xmasHatView=_xmasHatView;
@property(nonatomic) _Bool avatarLoadFailed; // @synthesize avatarLoadFailed=_avatarLoadFailed;
- (void)setIsFirstTimeViewDidLoad:(_Bool)arg1;
- (_Bool)isFirstTimeViewDidLoad;
- (void)setActionController:(id)arg1;
- (id)actionController;
- (_Bool)isRecommendViewShow;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)translationLoadingView:(id)arg1 requestTranslationStatus:(_Bool)arg2;
- (void)showOrHideRecommendView:(_Bool)arg1;
- (void)setIsRecommendViewShow:(_Bool)arg1;
- (void)hideRecommendViewAfterUnfollow;
- (void)showRecommendViewAfterFollow;
- (void)recommendBtnClicked;
- (void)updateFansLabel;
- (void)constructTranspondProfileCoverArray;
- (void)updateSocialLinkView;
- (void)idLabelTapped;
- (void)sendEmail;
- (void)openBioUrl;
- (void)handleTapOnContent:(id)arg1;
- (void)p_updateOfficialButton;
- (void)p_updateVideoCountLabel;
- (void)p_updateSocialStatisticsButtons;
- (void)p_configTranslationForSignature:(id)arg1;
- (void)p_updateSignature:(id)arg1;
- (void)p_updateActivity;
- (void)p_constructIntroString;
- (void)p_updateActivityView:(id)arg1;
- (_Bool)p_isLinkModelChanged:(id)arg1;
- (void)trackEventForBioLinkWithEventName:(id)arg1 linkType:(id)arg2;
- (void)updateBioLinkUI;
- (void)p_updateUI;
- (void)p_setupUI;
- (void)dealloc;
- (void)liveViewPlay;
- (double)headerViewHeight;
- (void)updateHeaderViewWithLinkModel:(id)arg1;
- (void)configWithUser:(id)arg1 isLogSent:(_Bool)arg2;
- (id)initWithIsCurrentUser:(_Bool)arg1 fromHomepage:(_Bool)arg2;

@end

