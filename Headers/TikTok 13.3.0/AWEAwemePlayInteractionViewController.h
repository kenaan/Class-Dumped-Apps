//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEAnchorViewConfigDelegate-Protocol.h"
#import "AWEAwemePlayInteractionDelegate-Protocol.h"
#import "AWEAwemeVisionSearchOuterAnimator-Protocol.h"
#import "AWEDigitalWellbeingMessage-Protocol.h"
#import "AWELiveVideoFeedUpdateMessage-Protocol.h"
#import "AWEPreviewable-Protocol.h"
#import "AWEShareGuideDelegate-Protocol.h"
#import "AWETranslationLoadingViewDelegate-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "AWEVideoInteractiveViewDelegate-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "CAAnimationDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class AWEAdAttractionView, AWEAdAutoRenewNoticeBarView, AWEAdAvatarView, AWEAdFeedLearnMoreView, AWEAdLinkSponsorshipView, AWEAdOperationGuideView, AWEAnimatedMarkView, AWEAntiAddictedNoticeBarView, AWEAwemeModel, AWEAwemeMusicInfoView, AWEAwemePlayDislikeViewController, AWEAwemePlayInteractionInfoContainerView, AWEAwemePlayInteractionPresenter, AWEBubble, AWEButton, AWECommentListViewController, AWEDemaciaPlayerProgressSlider, AWEDouplusToastModel, AWEFeedAnchorViewManager, AWEFeedHotSearchTipView, AWEFeedMultiTagView, AWEFeedRelationView, AWEFeedTagsView, AWEFeedVideoButton, AWEGlobalTranslationSubscription, AWEJudgeVideoView, AWELikeUserListViewController, AWELoadingAndVolumeView, AWEMarkView, AWEMusicAnimationView, AWEMusicCoverButton, AWEPOIEntryView, AWEStarAtlasReviewStatusView, AWETranslationLoadingView, AWEVideoInteractiveView, AWEVisionSearchEntranceView, AWEXiGuaFeedEntryView, LOTAnimationView, MPVolumeView, NSDictionary, NSMutableArray, NSMutableAttributedString, NSObject, NSString, NSTimer, UIImage, UIImageView, UILabel, UILongPressGestureRecognizer, UIStackView, UIView, YYAnimatedImageView, YYLabel;
@protocol AWEAdFormOperationGuideViewController, AWEAdPromptViewManager, AWEAdWebViewModalManager, AWEAwemePlayVideoDelegate, AWEFeedLiveMarkViewProtocol;

@interface AWEAwemePlayInteractionViewController : UIViewController <AWEPreviewable, AWEAnchorViewConfigDelegate, UIGestureRecognizerDelegate, UITextViewDelegate, AWEUserMessage, AWETranslationLoadingViewDelegate, AWEZoomTransitionOuterContextProvider, AWEVideoInteractiveViewDelegate, AWELiveVideoFeedUpdateMessage, AWEDigitalWellbeingMessage, AWEAwemeVisionSearchOuterAnimator, AWEShareGuideDelegate, AWEAwemePlayInteractionDelegate, CAAnimationDelegate>
{
    _Bool _showFollowStatus;
    _Bool _pureMode;
    _Bool _isHotSearchStatus;
    _Bool _hasStickerShow;
    _Bool _shouldShowFollowJumpAnimation;
    _Bool _sharePanelShowed;
    _Bool _isSliding;
    _Bool _progressSliderConfirmed;
    _Bool _isUpdatingVolume;
    _Bool _needsSetPureMode;
    _Bool _likeButtonImageFestivalMode;
    _Bool _commentButtonImageFestivalMode;
    _Bool _shareButtonImageFestivalMode;
    _Bool _canDisplaySubviewOnWindow;
    _Bool _hasShowStarBoardTask;
    _Bool _isShowedGoodsPromotionView;
    _Bool _antiAddictedNoticeBarViewShouldHide;
    _Bool _videoPausedByAdMask;
    _Bool _videoInteractionPause;
    _Bool _pausedByClickCommentBtn;
    _Bool _slidingBarWakeup;
    _Bool _longVideoViewDisappeared;
    _Bool _descriptionLabelIsExpanded;
    _Bool _enableGlobalTranslation;
    _Bool _needTranslation;
    UIImageView *_avatarFollowTempView;
    long long _mediaType;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    NSString *_enterFrom;
    NSString *_cityInfoString;
    NSString *_adEventName;
    AWEAwemeModel *_model;
    AWEAwemeModel *_fromModel;
    id <AWEAwemePlayVideoDelegate> _videoDelegate;
    double _controlOffset;
    CDUnknownBlockType _pureModeBlock;
    UIView *_playerView;
    NSString *_musicLabelString;
    NSMutableArray *_commentModelListToInsert;
    UIView *_followPromptView;
    UIImageView *_videoSourceImageView;
    AWELoadingAndVolumeView *_loadAndVolumeView;
    AWEDemaciaPlayerProgressSlider *_progressSlider;
    double _sliderValue;
    UIView *_progressSliderUnderView;
    UIView *_progressLabelView;
    UILabel *_progressLeftLabel;
    UILabel *_progressRightLabel;
    long long _slidingTime;
    long long _updatingVolumeTime;
    UIView *_hotPointDividerLine;
    double _lastPlayDuration;
    UIImage *_diggFestivalImage;
    UIImage *_undiggFestivalImage;
    UIImage *_commentFestivalImage;
    UIImage *_shareFestivalImage;
    UIImage *_shareTipFestivalImage;
    UIView *_xmasHatView;
    AWEVideoInteractiveView *_poiStickerInteractiveView;
    unsigned long long _previousTranslationStatus;
    NSString *_duetAwemeId;
    NSTimer *_timer;
    NSObject<AWEAdPromptViewManager> *_promptViewManager;
    NSObject<AWEAdWebViewModalManager> *_promptModalManager;
    AWEGlobalTranslationSubscription *_subscription;
    long long _previousNoticeMode;
    NSString *_previousTips;
    CDUnknownBlockType _previousNoticeTapped;
    AWEDouplusToastModel *_douplusToastModel;
    AWEAwemePlayInteractionPresenter *_presenter;
    AWEAwemePlayInteractionInfoContainerView *_interactionInfoContainerView;
    UIStackView *_tagsStackView;
    UIStackView *_authorStackView;
    AWEAdAttractionView *_attractionView;
    AWEAdAvatarView *_userAvatarView;
    UIImageView *_userAvatarLinkIcon;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    LOTAnimationView *_followAnimationView;
    AWEFeedVideoButton *_likeButton;
    LOTAnimationView *_likeAnimationView;
    AWEFeedVideoButton *_commentButton;
    AWEFeedVideoButton *_shareButton;
    UIImageView *_festivalShareButtonHint;
    AWEVisionSearchEntranceView *_visionSearchEntranceView;
    AWEMusicCoverButton *_musicButton;
    AWEBubble *_musicGuideBubbleView;
    AWEBubble *_insightsGuideBubbleView;
    AWEMarkView *_challengeButton;
    AWEMarkView *_poiButton;
    AWEMarkView *_wikipediaButton;
    AWEMarkView *_goodsSeedingButton;
    AWEMarkView *_goodsLinkButton;
    AWEAnimatedMarkView *_mvButton;
    AWEAnimatedMarkView *_stickerButton;
    AWEMarkView *_vastButton;
    AWEAdLinkSponsorshipView *_linkAdButton;
    AWEAdLinkSponsorshipView *_douLinkButton;
    AWEMarkView *_ironManButton;
    AWEPOIEntryView *_poiColorfulButton;
    AWEXiGuaFeedEntryView *_xiguaEntryView;
    NSTimer *_poiShowDetailTimer;
    AWEAnimatedMarkView *_openPlatformButton;
    AWEAnimatedMarkView *_commerceButton;
    AWEMarkView *_distanceTag;
    AWEButton *_authorButton;
    UILabel *_authorLabel;
    UILabel *_timeStampLabel;
    UILabel *_viewCountLabel;
    LOTAnimationView *_antiAddictedTagView;
    AWEFeedTagsView *_tagsView;
    AWEFeedMultiTagView *_multiTagView;
    UILabel *_cleanModeAdTitle;
    AWEFeedRelationView *_dynamicLabel;
    AWELikeUserListViewController *_likeUserListViewController;
    YYLabel *_adDescriptionLabel;
    YYLabel *_descriptionLabel;
    NSMutableAttributedString *_descriptionLabelOriginString;
    NSString *_translationRawStr;
    AWETranslationLoadingView *_loadingView;
    AWEAwemeMusicInfoView *_musicInfoView;
    AWEMusicAnimationView *_musicAnimationView;
    AWEFeedAnchorViewManager *_anchorViewManager;
    AWECommentListViewController *_commentVC;
    MPVolumeView *_volumeView;
    UILongPressGestureRecognizer *_dislikeGesture;
    AWEAwemePlayDislikeViewController *_dislikeViewController;
    AWEAdFeedLearnMoreView *_learnMoreView;
    YYAnimatedImageView *_redpacketImageView;
    AWEAdOperationGuideView *_adOperationView;
    UIViewController<AWEAdFormOperationGuideViewController> *_adOperationViewController;
    AWEAdAutoRenewNoticeBarView *_autoRenewNoticeBarView;
    AWEStarAtlasReviewStatusView *_starAtlasReviewStatusView;
    AWEJudgeVideoView *_judgeVideoView;
    UILabel *_prohibitedContentLabel;
    AWEFeedHotSearchTipView *_hotSearchTipView;
    AWEAntiAddictedNoticeBarView *_antiAddictedNoticeBarView;
    AWEAntiAddictedNoticeBarView *_riskNoticeBarView;
    AWEAntiAddictedNoticeBarView *_mixVideoInfoBarView;
    long long _componentsPriorityType;
}

+ (_Bool)enableMixVideo:(id)arg1;
@property(nonatomic) long long componentsPriorityType; // @synthesize componentsPriorityType=_componentsPriorityType;
@property(retain, nonatomic) AWEAntiAddictedNoticeBarView *mixVideoInfoBarView; // @synthesize mixVideoInfoBarView=_mixVideoInfoBarView;
@property(retain, nonatomic) AWEAntiAddictedNoticeBarView *riskNoticeBarView; // @synthesize riskNoticeBarView=_riskNoticeBarView;
@property(retain, nonatomic) AWEAntiAddictedNoticeBarView *antiAddictedNoticeBarView; // @synthesize antiAddictedNoticeBarView=_antiAddictedNoticeBarView;
@property(retain, nonatomic) AWEFeedHotSearchTipView *hotSearchTipView; // @synthesize hotSearchTipView=_hotSearchTipView;
@property(readonly, nonatomic) _Bool needTranslation; // @synthesize needTranslation=_needTranslation;
@property(retain, nonatomic) UILabel *prohibitedContentLabel; // @synthesize prohibitedContentLabel=_prohibitedContentLabel;
@property(retain, nonatomic) AWEJudgeVideoView *judgeVideoView; // @synthesize judgeVideoView=_judgeVideoView;
@property(retain, nonatomic) AWEStarAtlasReviewStatusView *starAtlasReviewStatusView; // @synthesize starAtlasReviewStatusView=_starAtlasReviewStatusView;
@property(retain, nonatomic) AWEAdAutoRenewNoticeBarView *autoRenewNoticeBarView; // @synthesize autoRenewNoticeBarView=_autoRenewNoticeBarView;
@property(retain, nonatomic) UIViewController<AWEAdFormOperationGuideViewController> *adOperationViewController; // @synthesize adOperationViewController=_adOperationViewController;
@property(retain, nonatomic) AWEAdOperationGuideView *adOperationView; // @synthesize adOperationView=_adOperationView;
@property(retain, nonatomic) YYAnimatedImageView *redpacketImageView; // @synthesize redpacketImageView=_redpacketImageView;
@property(retain, nonatomic) AWEAdFeedLearnMoreView *learnMoreView; // @synthesize learnMoreView=_learnMoreView;
@property(retain, nonatomic) AWEAwemePlayDislikeViewController *dislikeViewController; // @synthesize dislikeViewController=_dislikeViewController;
@property(retain, nonatomic) UILongPressGestureRecognizer *dislikeGesture; // @synthesize dislikeGesture=_dislikeGesture;
@property(retain, nonatomic) MPVolumeView *volumeView; // @synthesize volumeView=_volumeView;
@property(retain, nonatomic) AWECommentListViewController *commentVC; // @synthesize commentVC=_commentVC;
@property(retain, nonatomic) AWEFeedAnchorViewManager *anchorViewManager; // @synthesize anchorViewManager=_anchorViewManager;
@property(nonatomic) _Bool enableGlobalTranslation; // @synthesize enableGlobalTranslation=_enableGlobalTranslation;
@property(retain, nonatomic) AWEMusicAnimationView *musicAnimationView; // @synthesize musicAnimationView=_musicAnimationView;
@property(retain, nonatomic) AWEAwemeMusicInfoView *musicInfoView; // @synthesize musicInfoView=_musicInfoView;
@property(retain, nonatomic) AWETranslationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) NSString *translationRawStr; // @synthesize translationRawStr=_translationRawStr;
@property(retain, nonatomic) NSMutableAttributedString *descriptionLabelOriginString; // @synthesize descriptionLabelOriginString=_descriptionLabelOriginString;
@property(nonatomic) _Bool descriptionLabelIsExpanded; // @synthesize descriptionLabelIsExpanded=_descriptionLabelIsExpanded;
@property(retain, nonatomic) YYLabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) YYLabel *adDescriptionLabel; // @synthesize adDescriptionLabel=_adDescriptionLabel;
@property(retain, nonatomic) AWELikeUserListViewController *likeUserListViewController; // @synthesize likeUserListViewController=_likeUserListViewController;
@property(retain, nonatomic) AWEFeedRelationView *dynamicLabel; // @synthesize dynamicLabel=_dynamicLabel;
@property(retain, nonatomic) UILabel *cleanModeAdTitle; // @synthesize cleanModeAdTitle=_cleanModeAdTitle;
@property(retain, nonatomic) AWEFeedMultiTagView *multiTagView; // @synthesize multiTagView=_multiTagView;
@property(retain, nonatomic) AWEFeedTagsView *tagsView; // @synthesize tagsView=_tagsView;
@property(retain, nonatomic) LOTAnimationView *antiAddictedTagView; // @synthesize antiAddictedTagView=_antiAddictedTagView;
@property(retain, nonatomic) UILabel *viewCountLabel; // @synthesize viewCountLabel=_viewCountLabel;
@property(retain, nonatomic) UILabel *timeStampLabel; // @synthesize timeStampLabel=_timeStampLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) AWEButton *authorButton; // @synthesize authorButton=_authorButton;
@property(retain, nonatomic) AWEMarkView *distanceTag; // @synthesize distanceTag=_distanceTag;
@property(retain, nonatomic) AWEAnimatedMarkView *commerceButton; // @synthesize commerceButton=_commerceButton;
@property(retain, nonatomic) AWEAnimatedMarkView *openPlatformButton; // @synthesize openPlatformButton=_openPlatformButton;
@property(retain, nonatomic) NSTimer *poiShowDetailTimer; // @synthesize poiShowDetailTimer=_poiShowDetailTimer;
@property(retain, nonatomic) AWEXiGuaFeedEntryView *xiguaEntryView; // @synthesize xiguaEntryView=_xiguaEntryView;
@property(retain, nonatomic) AWEPOIEntryView *poiColorfulButton; // @synthesize poiColorfulButton=_poiColorfulButton;
@property(retain, nonatomic) AWEMarkView *ironManButton; // @synthesize ironManButton=_ironManButton;
@property(retain, nonatomic) AWEAdLinkSponsorshipView *douLinkButton; // @synthesize douLinkButton=_douLinkButton;
@property(retain, nonatomic) AWEAdLinkSponsorshipView *linkAdButton; // @synthesize linkAdButton=_linkAdButton;
@property(retain, nonatomic) AWEMarkView *vastButton; // @synthesize vastButton=_vastButton;
@property(retain, nonatomic) AWEAnimatedMarkView *stickerButton; // @synthesize stickerButton=_stickerButton;
@property(retain, nonatomic) AWEAnimatedMarkView *mvButton; // @synthesize mvButton=_mvButton;
@property(retain, nonatomic) AWEMarkView *goodsLinkButton; // @synthesize goodsLinkButton=_goodsLinkButton;
@property(retain, nonatomic) AWEMarkView *goodsSeedingButton; // @synthesize goodsSeedingButton=_goodsSeedingButton;
@property(retain, nonatomic) AWEMarkView *wikipediaButton; // @synthesize wikipediaButton=_wikipediaButton;
@property(retain, nonatomic) AWEMarkView *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) AWEMarkView *challengeButton; // @synthesize challengeButton=_challengeButton;
@property(retain, nonatomic) AWEBubble *insightsGuideBubbleView; // @synthesize insightsGuideBubbleView=_insightsGuideBubbleView;
@property(retain, nonatomic) AWEBubble *musicGuideBubbleView; // @synthesize musicGuideBubbleView=_musicGuideBubbleView;
@property(retain, nonatomic) AWEMusicCoverButton *musicButton; // @synthesize musicButton=_musicButton;
@property(retain, nonatomic) AWEVisionSearchEntranceView *visionSearchEntranceView; // @synthesize visionSearchEntranceView=_visionSearchEntranceView;
@property(retain, nonatomic) UIImageView *festivalShareButtonHint; // @synthesize festivalShareButtonHint=_festivalShareButtonHint;
@property(retain, nonatomic) AWEFeedVideoButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) AWEFeedVideoButton *commentButton; // @synthesize commentButton=_commentButton;
@property(retain, nonatomic) LOTAnimationView *likeAnimationView; // @synthesize likeAnimationView=_likeAnimationView;
@property(retain, nonatomic) AWEFeedVideoButton *likeButton; // @synthesize likeButton=_likeButton;
@property(retain, nonatomic) LOTAnimationView *followAnimationView; // @synthesize followAnimationView=_followAnimationView;
@property(retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(retain, nonatomic) UIImageView *userAvatarLinkIcon; // @synthesize userAvatarLinkIcon=_userAvatarLinkIcon;
@property(retain, nonatomic) AWEAdAvatarView *userAvatarView; // @synthesize userAvatarView=_userAvatarView;
@property(retain, nonatomic) AWEAdAttractionView *attractionView; // @synthesize attractionView=_attractionView;
@property(retain, nonatomic) UIStackView *authorStackView; // @synthesize authorStackView=_authorStackView;
@property(retain, nonatomic) UIStackView *tagsStackView; // @synthesize tagsStackView=_tagsStackView;
@property(retain, nonatomic) AWEAwemePlayInteractionInfoContainerView *interactionInfoContainerView; // @synthesize interactionInfoContainerView=_interactionInfoContainerView;
@property(retain, nonatomic) AWEAwemePlayInteractionPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) AWEDouplusToastModel *douplusToastModel; // @synthesize douplusToastModel=_douplusToastModel;
@property(nonatomic) _Bool longVideoViewDisappeared; // @synthesize longVideoViewDisappeared=_longVideoViewDisappeared;
@property(nonatomic) _Bool slidingBarWakeup; // @synthesize slidingBarWakeup=_slidingBarWakeup;
@property(nonatomic) _Bool pausedByClickCommentBtn; // @synthesize pausedByClickCommentBtn=_pausedByClickCommentBtn;
@property(nonatomic) _Bool videoInteractionPause; // @synthesize videoInteractionPause=_videoInteractionPause;
@property(nonatomic) _Bool videoPausedByAdMask; // @synthesize videoPausedByAdMask=_videoPausedByAdMask;
@property(copy, nonatomic) CDUnknownBlockType previousNoticeTapped; // @synthesize previousNoticeTapped=_previousNoticeTapped;
@property(retain, nonatomic) NSString *previousTips; // @synthesize previousTips=_previousTips;
@property(nonatomic) long long previousNoticeMode; // @synthesize previousNoticeMode=_previousNoticeMode;
@property(nonatomic) _Bool antiAddictedNoticeBarViewShouldHide; // @synthesize antiAddictedNoticeBarViewShouldHide=_antiAddictedNoticeBarViewShouldHide;
@property(retain, nonatomic) AWEGlobalTranslationSubscription *subscription; // @synthesize subscription=_subscription;
@property(nonatomic) _Bool isShowedGoodsPromotionView; // @synthesize isShowedGoodsPromotionView=_isShowedGoodsPromotionView;
@property(nonatomic) _Bool hasShowStarBoardTask; // @synthesize hasShowStarBoardTask=_hasShowStarBoardTask;
@property(nonatomic) _Bool canDisplaySubviewOnWindow; // @synthesize canDisplaySubviewOnWindow=_canDisplaySubviewOnWindow;
@property(retain, nonatomic) NSObject<AWEAdWebViewModalManager> *promptModalManager; // @synthesize promptModalManager=_promptModalManager;
@property(retain, nonatomic) NSObject<AWEAdPromptViewManager> *promptViewManager; // @synthesize promptViewManager=_promptViewManager;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *duetAwemeId; // @synthesize duetAwemeId=_duetAwemeId;
@property(nonatomic) unsigned long long previousTranslationStatus; // @synthesize previousTranslationStatus=_previousTranslationStatus;
@property(retain, nonatomic) AWEVideoInteractiveView *poiStickerInteractiveView; // @synthesize poiStickerInteractiveView=_poiStickerInteractiveView;
@property(retain, nonatomic) UIView *xmasHatView; // @synthesize xmasHatView=_xmasHatView;
@property(retain, nonatomic) UIImage *shareTipFestivalImage; // @synthesize shareTipFestivalImage=_shareTipFestivalImage;
@property(retain, nonatomic) UIImage *shareFestivalImage; // @synthesize shareFestivalImage=_shareFestivalImage;
@property(retain, nonatomic) UIImage *commentFestivalImage; // @synthesize commentFestivalImage=_commentFestivalImage;
@property(retain, nonatomic) UIImage *undiggFestivalImage; // @synthesize undiggFestivalImage=_undiggFestivalImage;
@property(retain, nonatomic) UIImage *diggFestivalImage; // @synthesize diggFestivalImage=_diggFestivalImage;
@property(nonatomic) _Bool shareButtonImageFestivalMode; // @synthesize shareButtonImageFestivalMode=_shareButtonImageFestivalMode;
@property(nonatomic) _Bool commentButtonImageFestivalMode; // @synthesize commentButtonImageFestivalMode=_commentButtonImageFestivalMode;
@property(nonatomic) _Bool likeButtonImageFestivalMode; // @synthesize likeButtonImageFestivalMode=_likeButtonImageFestivalMode;
@property(nonatomic) _Bool needsSetPureMode; // @synthesize needsSetPureMode=_needsSetPureMode;
@property(nonatomic) double lastPlayDuration; // @synthesize lastPlayDuration=_lastPlayDuration;
@property(retain, nonatomic) UIView *hotPointDividerLine; // @synthesize hotPointDividerLine=_hotPointDividerLine;
@property(nonatomic) long long updatingVolumeTime; // @synthesize updatingVolumeTime=_updatingVolumeTime;
@property(nonatomic) _Bool isUpdatingVolume; // @synthesize isUpdatingVolume=_isUpdatingVolume;
@property(nonatomic) long long slidingTime; // @synthesize slidingTime=_slidingTime;
@property(nonatomic) _Bool progressSliderConfirmed; // @synthesize progressSliderConfirmed=_progressSliderConfirmed;
@property(nonatomic) _Bool isSliding; // @synthesize isSliding=_isSliding;
@property(retain, nonatomic) UILabel *progressRightLabel; // @synthesize progressRightLabel=_progressRightLabel;
@property(retain, nonatomic) UILabel *progressLeftLabel; // @synthesize progressLeftLabel=_progressLeftLabel;
@property(retain, nonatomic) UIView *progressLabelView; // @synthesize progressLabelView=_progressLabelView;
@property(retain, nonatomic) UIView *progressSliderUnderView; // @synthesize progressSliderUnderView=_progressSliderUnderView;
@property(nonatomic) double sliderValue; // @synthesize sliderValue=_sliderValue;
@property(retain, nonatomic) AWEDemaciaPlayerProgressSlider *progressSlider; // @synthesize progressSlider=_progressSlider;
@property(retain, nonatomic) AWELoadingAndVolumeView *loadAndVolumeView; // @synthesize loadAndVolumeView=_loadAndVolumeView;
@property(retain, nonatomic) UIImageView *videoSourceImageView; // @synthesize videoSourceImageView=_videoSourceImageView;
@property(retain, nonatomic) UIView *followPromptView; // @synthesize followPromptView=_followPromptView;
@property(retain, nonatomic) NSMutableArray *commentModelListToInsert; // @synthesize commentModelListToInsert=_commentModelListToInsert;
@property(nonatomic) _Bool sharePanelShowed; // @synthesize sharePanelShowed=_sharePanelShowed;
@property(nonatomic) _Bool shouldShowFollowJumpAnimation; // @synthesize shouldShowFollowJumpAnimation=_shouldShowFollowJumpAnimation;
@property(retain, nonatomic) NSString *musicLabelString; // @synthesize musicLabelString=_musicLabelString;
@property(nonatomic) __weak UIView *playerView; // @synthesize playerView=_playerView;
@property(nonatomic) _Bool hasStickerShow; // @synthesize hasStickerShow=_hasStickerShow;
@property(copy, nonatomic) CDUnknownBlockType pureModeBlock; // @synthesize pureModeBlock=_pureModeBlock;
@property(nonatomic) double controlOffset; // @synthesize controlOffset=_controlOffset;
@property(nonatomic) __weak id <AWEAwemePlayVideoDelegate> videoDelegate; // @synthesize videoDelegate=_videoDelegate;
@property(retain, nonatomic) AWEAwemeModel *fromModel; // @synthesize fromModel=_fromModel;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *adEventName; // @synthesize adEventName=_adEventName;
@property(copy, nonatomic) NSString *cityInfoString; // @synthesize cityInfoString=_cityInfoString;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) _Bool isHotSearchStatus; // @synthesize isHotSearchStatus=_isHotSearchStatus;
@property(nonatomic) _Bool pureMode; // @synthesize pureMode=_pureMode;
@property(nonatomic) _Bool showFollowStatus; // @synthesize showFollowStatus=_showFollowStatus;
@property(readonly, nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(retain, nonatomic) UIImageView *avatarFollowTempView; // @synthesize avatarFollowTempView=_avatarFollowTempView;
- (void).cxx_destruct;
- (id)generateDescTailWithView:(id)arg1 isAd:(_Bool)arg2;
- (struct CGRect)visionSearchEntryFrame;
- (_Bool)shouldUseTTPlayerForXiGuaVideo;
- (void)videoInteractiveViewJumpScheme;
- (void)videoInteractiveViewStickerInfoChanged;
- (_Bool)videoInteractiveViewTapInCenter;
- (_Bool)isVideoPlaying;
- (void)resumePlaying;
- (void)resumePlayingFromSpecialAdSticker;
- (void)videoInteractiveViewTapWithStickerShow;
- (void)videoInteractiveViewWillDismissBubbleView:(id)arg1;
- (void)videoInteractiveViewWillShowBubbleView:(id)arg1;
- (void)updateLiveStatusForCurrentVideo;
- (void)teenModeDidChange:(_Bool)arg1 isLogout:(_Bool)arg2;
- (void)performCommentAction;
- (void)performLikeAction;
- (void)thirdQuartile;
- (void)midpoint;
- (void)firstQuartile;
- (void)bufferEnd;
- (void)bufferStart;
- (void)pause:(_Bool)arg1;
- (id)leftBottomElementsArray;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishSetRemarkWithUser:(id)arg1;
- (void)didFinishLogout;
- (id)preferredParentView:(id)arg1;
- (_Bool)useStackViewLayout;
- (void)progressSliderValueChanged:(id)arg1;
- (void)didReceiveFeedTableNewAwemePlayNotice;
- (void)progressSliderTouchEnded:(id)arg1;
- (id)defaultThumbImage;
- (void)progressSliderTouchBegan:(id)arg1;
- (void)progressSliderPanGesture:(id)arg1;
- (void)markLongVideoAppear:(_Bool)arg1;
- (void)confirmProgressSliderUI;
- (unsigned long long)descriptionNumberOfLines;
- (void)showSharePanel;
- (void)showLikeUserListVC;
- (void)showOSTListWithVC:(id)arg1;
- (void)refreshCommentPanelWithNotificationObject:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)showDislikeOnVideo;
- (void)didReceivePlayLongPressNotification;
- (void)dislikeVideoFromShare;
- (void)showGoodsPanel;
- (void)insertCommentFromPlayView;
- (void)showVoteDetailPanel;
- (void)showCommentPanelWithInsertIDs:(id)arg1;
- (void)showCommentPanelWithInsertIDs:(id)arg1 scrollToTop:(_Bool)arg2;
- (_Bool)musicTrackAlertIfNotValid;
- (_Bool)alertIfNotValidForAction:(long long)arg1;
- (void)onLearnMoreViewClicked:(id)arg1;
- (_Bool)onVideoPlayerViewSingleClicked:(id)arg1;
- (void)onVideoPlayerViewDoubleClicked:(id)arg1;
- (void)hideFestivalShareButtonHint;
- (void)hideJudgeVideoView;
- (void)showJudgeVideoView;
@property(readonly, nonatomic) long long type;
- (void)setHide:(_Bool)arg1;
- (void)calculateFinalPureAndUpdateUI:(_Bool)arg1 animateDuration:(double)arg2;
- (void)setPureMode:(_Bool)arg1 animateDuration:(double)arg2;
- (void)setPureMode:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)touchCapturedWithPosition:(struct CGPoint)arg1;
- (void)willSetPureModeBlock:(_Bool)arg1;
- (void)reset;
- (_Bool)isLive;
- (_Bool)isShowingFunctions;
- (_Bool)shouldShowShoppingEntrance;
- (void)transToVisionSearchWithImage:(id)arg1;
- (void)visionSearchViewTapped;
- (void)awemePlayInteractionPause:(_Bool)arg1;
- (void)showGoodsCardWithMediaPlayedSeconds:(double)arg1;
- (void)showPOIDetailWithPlayTimes:(long long)arg1;
- (void)showAnimateBtnDetailWithPlayTimes:(long long)arg1;
- (void)playAdLearnMoreViewAnimation;
- (_Bool)adOperationGuideShowing;
- (void)hideAdOperationGuideView;
- (void)closeAdOperationGuide:(unsigned long long)arg1;
- (void)showAdOperationGuide;
- (_Bool)shouldShowNewAdFormOperationGuide;
- (void)playVideo;
- (void)pauseVideo;
- (_Bool)checkToShowCardForCurrentPriorityComponent:(unsigned long long)arg1;
- (void)tapPromptGoodsCardWithTargetPromotionID:(id)arg1;
- (void)animateLeftBottomByOffset:(double)arg1 alpha:(double)arg2;
- (void)promptCardDisAppear;
- (void)promptCardAppearWithOffset:(double)arg1;
- (void)sharePanelDidDismiss;
- (void)resetPromptCardIfNeeded;
- (_Bool)isLikeUserListShowing;
- (_Bool)isCommentListShowing;
- (_Bool)isPromptModalShowing;
- (_Bool)isDecouplingFromMask;
- (void)videoDidActivity;
- (void)cancelCardAnimation;
- (void)resumeCardAnimation;
- (void)closeAdPromptView;
- (void)popUpAdPromptView:(_Bool)arg1;
- (void)updateLearnMoreView;
- (void)flashLearnMoreViewWithAnimation:(_Bool)arg1;
- (void)showLearnMoreView:(_Bool)arg1;
- (void)hideNoticeBarView;
- (void)checkIfShouldShowNoticeBarView;
- (void)showEnterMusicHint;
- (void)showInsightsHint;
- (void)showAdOperationViewWithPlayTimes:(long long)arg1;
- (void)dismissShareGuide:(_Bool)arg1;
- (void)showShareHintWithPlayTimes:(long long)arg1;
- (void)showFollowHint;
- (void)p_showSharePanel;
- (void)p_clickDouPlusBubbleAction;
- (void)p_clickDouBubbleAction;
- (void)showDouPlusGuideBubble;
- (void)showFestivalShareHint;
- (void)updateFestivalShareButton;
- (void)updateFestivalCommentButton;
- (void)updateFestivalLikeButton;
- (void)updateFestivalButtons;
- (void)handleFestivalImagesCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isShowingDislike;
- (_Bool)isInteracting;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (void)commentVCDidDismiss;
- (_Bool)alwaysRefreshComments;
- (void)p_hideAntiAddictedNoticeBarViewAndShowThenWithAnimation;
- (void)p_hideAntiAddictedNoticeBarViewWithAnimation;
- (void)dealloc;
- (void)translationLoadingView:(id)arg1 requestTranslationStatus:(_Bool)arg2;
- (void)didReceiveCollectStatusChangedNoti:(id)arg1;
- (void)didReceiveEnterBackgroundNoti:(id)arg1;
- (void)didReceiveClickTabbarExitNoti:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)showLongVideoAdDescriptionText:(id)arg1;
- (void)showSuccessShareVideoNoticeBar:(id)arg1;
- (void)dislikeViewControllerCancelAction;
- (void)initDislikeViewController;
- (void)handleAppWillResignActiveNotification;
- (void)tryShowFeedFollowGuideIfNeeded;
- (void)viewDidLoad;
- (id)init;
- (id)initWithMediaType:(long long)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)stopFollowJumpAnimation;
- (void)_playFollowJumpAnimation;
- (void)playNewMusicDetailGuideIfNeeded;
- (void)cancelDislikeAnimation;
- (void)removeShareGuideAnimation;
- (_Bool)checkNeedToShowCircularShareGuide;
- (void)showCircularShareGuide;
- (void)playFavoriteGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)playShareGuideAnimationWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)playUnFollowAnimation;
- (void)playFollowAnimation;
- (void)_stopLikeAnimation;
- (void)_playDislikeAnimation;
- (void)_playLikeAnimation;
- (void)playDislikeAnimation;
- (void)playLikeAnimation;
- (void)playDiggAnimation:(struct CGPoint)arg1;
- (void)playAdLikeEggLottieAnimationOnView:(id)arg1;
- (void)playDiscoverGuideAnimation;
- (void)resumeMusicAnimations;
- (void)pauseMusicAnimations;
- (void)stopMusicAnimations;
- (void)playMusicAnimations;
- (void)updateProgressSliderWithTime:(double)arg1 totalDuration:(double)arg2;
- (void)updatePlayProgressWithTime:(double)arg1 totalDuration:(double)arg2;
- (void)setPlayProgressWithTime:(double)arg1 totalDuration:(double)arg2;
- (void)stopLoadingAnimation;
- (void)playLoadingAnimation;
- (void)didCommitViewController:(id)arg1;
- (id)previewingViewControllerForView:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)_shouldShowPOIDetail;
- (_Bool)isLinkButtonVisible;
- (_Bool)shouldShowStickerButton;
- (_Bool)shouldShowMvButton;
- (_Bool)shouldShowGoodsSeedingAnchorButton;
- (_Bool)shouldShowGoodsLinkButton;
- (_Bool)shouldShowWikipediaButton;
- (_Bool)shouldShowOpenPlatformButton;
- (_Bool)shouldShowPoiButton;
- (_Bool)shouldShowCommerceButton;
- (_Bool)shouldShowIronManButton;
- (_Bool)shouldShowAdLinkButton;
- (_Bool)shouldShowDouLinkButton;
- (_Bool)shouldShowVastButton;
- (_Bool)shouldShowComponentView;
- (void)showPOIDetail;
- (void)updateStickerText;
- (void)updateMvText;
- (void)updateGoodsSeedingAnchorButton;
- (void)updateGoodsLinkButton;
- (void)updateAnchorWikipedia;
- (void)updateOpenPlatformButton;
- (void)startShowPOIDetailTimerIfNeeded;
- (void)updatePOIText;
- (void)updateShoppingCartView;
- (void)updateIronMan;
- (void)updateLinkAdText;
- (void)updateDouLinkButton;
- (void)updateVastIconButton;
- (_Bool)anchorViewManager:(id)arg1 shouldShowAnchorViewWithPriorityType:(long long)arg2;
- (void)anchorViewManager:(id)arg1 layoutSubview:(id)arg2;
- (void)anchorViewManager:(id)arg1 updateViewForSubview:(id)arg2;
- (id)anchorViewManager:(id)arg1 viewForPriorityType:(long long)arg2;
- (void)p_addSubViewsForStackView;
- (id)p_generateFeedTagCurrentSubViews;
- (id)p_generateFeedButtonCurrentSubViews;
- (void)_removeNotificationsObserversAtCurrentVC;
- (void)_addNotificationsObserversAtCurrentVC;
- (void)_removeNotificationsObservers;
- (void)_addNotificationsObservers;
- (_Bool)p_shouldShowPoiCard;
- (_Bool)p_shouldShowDistanceTag;
- (_Bool)_shouldShowChallengeButton;
- (_Bool)_shouldShowCleanModeAdTitle;
- (_Bool)_canFollow;
- (_Bool)p_isLanguage:(id)arg1 inSet:(id)arg2 withAppLanguage:(id)arg3;
- (void)_layoutSubViews;
- (void)_addSubViews;
- (id)duetPlayAttachmentWithAttributedString:(id)arg1 range:(struct _NSRange)arg2 maximumContainerSize:(struct CGSize)arg3;
- (void)duetChainButtonClicked;
- (void)trackTitleExpandWithActionType:(id)arg1;
- (void)updateActivityShareButton;
- (void)updateActivityCommentButton;
- (void)updateActivityLikeButton;
- (void)updateActivityButton;
- (void)shouldUpdateActivityButtonStatus:(id)arg1;
- (void)onAwemeDiggNotification:(id)arg1;
- (void)updateAvatarMarkView;
- (_Bool)canShowDislike;
- (void)updateLayout;
- (void)updateAllSubViews;
- (_Bool)shouldShowAvatarDecoration;
- (id)progressSliderThumbImage;
- (void)updateProgressSlider;
- (void)setVolume:(float)arg1;
- (void)updateVideoSourceImageView;
- (void)updateXiGuaOriginalPlay;
- (_Bool)isFromGeneralSearchOrVideoSearch;
- (void)updateHotPointDividerLine;
- (void)updateVisionSearchEntranceView;
- (void)updateVisionSearchEntranceViewFromLab:(id)arg1;
- (void)updateHotSearchTipView;
- (_Bool)showHotSearchTipView;
- (void)updateProhibitedContentLabel;
- (void)updateJudgeVideoView;
- (void)updateAutoRenewNoticeBarView;
- (void)updateRiskNoticedBarView;
- (void)updateMixVideoInfoBarView;
- (void)updateAntiAddictedNoticeBarView;
- (id)attributeStringForAdMoreLinkView;
- (id)createContentDescriptionStringFrom:(id)arg1;
- (void)handleLinksForDescriptionAttributedString:(id)arg1;
- (struct CGSize)lastLineSizeForAttributeString:(id)arg1 constranitSize:(struct CGSize)arg2;
- (void)updateDescLabelIfExpand:(_Bool)arg1;
- (id)titleExpandStringForAttributeString:(id)arg1;
- (id)titleExpandStringForAttributeString:(id)arg1 enableDot:(_Bool)arg2;
- (_Bool)showUseRTLForString:(id)arg1;
- (unsigned long long)directionForString:(id)arg1;
- (void)updateExpandTagIfNeededWithAttributedString:(id)arg1;
- (void)appendMixVideoTagIfNeededWithAttributedString:(id)arg1;
- (void)appendPlayTagIfNeededWithAttributedString:(id)arg1;
- (void)playTagAction;
- (void)updateParagraphStyleWithAttributedString:(id)arg1;
- (void)calculateTruncationTokenForAds;
- (void)setDescriptionTextViewContentAnimated:(_Bool)arg1;
- (CDUnknownBlockType)descriptionLabelTapAction:(id)arg1;
- (_Bool)enableVideoDescriptionExpand;
- (void)updateAntiAddictedTagView;
- (_Bool)p_canShowRelationLabel;
- (void)updateDynamicLabel;
- (void)updateTagsView;
- (_Bool)isTagLabelContainsFromDuoshan;
- (id)finalTagLabels;
- (void)updateMultiTagView;
- (void)updateShareButtonStyle;
- (void)updateShareButton;
- (void)updateAdOperationView;
- (_Bool)isViewDisplaying:(id)arg1;
- (void)updateRedpacketPosition;
- (void)updateAdRedPacketImageView;
- (void)updateXiguaRedPacketImageView;
- (void)updateRedPacketImageView;
- (void)updateStarAtlasReviewStautsView;
- (void)updateLearnMoreView;
- (void)updateAttractionView;
- (void)updateAnchorView;
- (void)updateDistanceTag;
- (void)updateChallengeText;
- (void)updateExtraView;
- (void)updateSwitch;
- (void)updateMusicInfoView;
- (void)updateMusicButtonImage;
- (void)updateViewCountLabel;
- (void)updateTimeStampLabel;
- (void)updateAuthorLabel;
- (id)_getCommentCount;
- (void)updateCommentCount;
- (void)resetCommentIcon;
- (void)updateAvatarImage;
- (void)updateDiggCount;
- (void)updateFollowStatus;
- (void)updateVideoStickerView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIView *view;

@end

