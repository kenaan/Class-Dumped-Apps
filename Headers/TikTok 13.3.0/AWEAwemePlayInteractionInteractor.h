//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEUserMessage-Protocol.h"

@class AWEAwemeModel, AWEAwemePlayInteractionPresenter, NSDictionary, NSLock, NSString;

@interface AWEAwemePlayInteractionInteractor : NSObject <AWEUserMessage>
{
    _Bool _hasEnterFullScreen;
    _Bool _isLiveBlocked;
    AWEAwemePlayInteractionPresenter *_presenter;
    NSString *_referString;
    NSString *_pageTypeString;
    NSString *_enterFrom;
    unsigned long long _feedType;
    NSString *_cityInfoString;
    NSString *_adEventName;
    AWEAwemeModel *_model;
    AWEAwemeModel *_fromModel;
    AWEAwemeModel *_originModel;
    unsigned long long _eventSource;
    NSDictionary *_logExtraDict;
    long long _fromPageType;
    NSLock *_diggLock;
}

@property(nonatomic) _Bool isLiveBlocked; // @synthesize isLiveBlocked=_isLiveBlocked;
@property(retain, nonatomic) NSLock *diggLock; // @synthesize diggLock=_diggLock;
@property(nonatomic) long long fromPageType; // @synthesize fromPageType=_fromPageType;
@property(retain, nonatomic) NSDictionary *logExtraDict; // @synthesize logExtraDict=_logExtraDict;
@property(nonatomic) unsigned long long eventSource; // @synthesize eventSource=_eventSource;
@property(retain, nonatomic) AWEAwemeModel *originModel; // @synthesize originModel=_originModel;
@property(retain, nonatomic) AWEAwemeModel *fromModel; // @synthesize fromModel=_fromModel;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *adEventName; // @synthesize adEventName=_adEventName;
@property(copy, nonatomic) NSString *cityInfoString; // @synthesize cityInfoString=_cityInfoString;
@property(nonatomic) unsigned long long feedType; // @synthesize feedType=_feedType;
@property(nonatomic) _Bool hasEnterFullScreen; // @synthesize hasEnterFullScreen=_hasEnterFullScreen;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) NSString *pageTypeString; // @synthesize pageTypeString=_pageTypeString;
@property(retain, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(nonatomic) __weak AWEAwemePlayInteractionPresenter *presenter; // @synthesize presenter=_presenter;
- (void).cxx_destruct;
- (void)trackLiveShow;
- (void)onTopStatusChangeNotification:(id)arg1;
- (void)onSyncLiveUserNotification:(id)arg1;
- (void)onTabBarDidChangeNotification:(id)arg1;
- (void)onLiveBlockAudienceNotication:(id)arg1;
- (void)onVolumeChangeNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isActive;
- (void)onCommentTotalCountNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCommentDeleteNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)onCommentAddNotification:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onFollowStatusChanged:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)dislikeVideo;
- (void)cancelDislikeVideo;
- (void)dislikeVideoFromLongPress;
- (void)dislikeVideoFromShare;
- (void)dislikeVideoFromType:(unsigned long long)arg1;
- (void)checkIfShouldShowShareAnimationWithPlayTimes:(long long)arg1;
- (void)handleVideo:(id)arg1 accept:(_Bool)arg2;
- (void)onDescriptionLabelClicked:(id)arg1 url:(id)arg2;
- (void)onAdOperationViewClicked:(id)arg1;
- (void)onLearnMoreViewClicked:(id)arg1;
- (void)onAdDescriptionClicked:(id)arg1 range:(struct _NSRange)arg2;
- (void)onAuthorLabelClicked:(id)arg1;
- (void)onAuthorLabelClicked:(id)arg1 contentSource:(id)arg2;
- (void)onCountryLabelClicked:(id)arg1;
- (void)onVastButtonTapped:(id)arg1;
- (void)onIronManButtonTapped:(id)arg1;
- (void)onLinkAdButtonClicked:(id)arg1;
- (void)onDouLinkButtonClicked:(id)arg1;
- (void)onXiguaTaskRedPacketClicked:(id)arg1;
- (void)onStickerLabelClicked:(id)arg1;
- (void)onMvLabelClicked:(id)arg1;
- (void)onGoodsLinkLabelClicked:(id)arg1;
- (void)onGoodsSeedingButtonClicked:(id)arg1;
- (void)onWikipediaLabelClicked:(id)arg1;
- (void)onPoiLabelClicked:(id)arg1;
- (void)onChallengeLabelClicked:(id)arg1;
- (void)onOriginalFlagLabelClicked:(id)arg1;
- (void)onMusicInfoLabelClicked:(id)arg1;
- (void)onMusicButtonClicked:(id)arg1;
- (_Bool)shouldDisableAuthADVideoSetting;
- (_Bool)shouldDisableSave;
- (_Bool)canShowDisLike;
- (_Bool)isAllowDuetOrReactAwemeType;
- (_Bool)shouldDisableDuet;
- (_Bool)shouldDisableReact;
- (_Bool)shouldDisableInsights;
- (_Bool)shouldDisablePrivacyControl;
- (_Bool)shouldDisableItemDuetReact;
- (_Bool)isPrivateAccountVideo;
- (_Bool)isCurrentUserAweme;
- (void)onShareButtonClicked:(id)arg1;
- (void)onCommentButtonClicked:(id)arg1;
- (void)onLikeButtonClicked:(id)arg1;
- (_Bool)_canFollow;
- (void)onUnFollowViewClicked:(id)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)onFollowViewClicked:(id)arg1 comletion:(CDUnknownBlockType)arg2;
- (void)enterLiveRoom:(CDUnknownBlockType)arg1;
- (void)canEnterLiveRoom:(CDUnknownBlockType)arg1;
- (void)onAttractionViewShowed;
- (void)onAttractionViewTapped:(id)arg1;
- (void)onUserAvatarViewClicked:(id)arg1 enterLiveRoomBlock:(CDUnknownBlockType)arg2;
- (void)onUserAvatarViewClicked:(id)arg1 contentSource:(id)arg2 enterLiveRoomBlock:(CDUnknownBlockType)arg3;
- (void)showOSTList;
- (void)addClickSearchResultVideoTrackForParams:(id)arg1;
- (void)trackFollowEvent;
- (void)trackLikeEventType:(unsigned long long)arg1 enterMethod:(id)arg2 triggerLogin:(_Bool)arg3 diggStatusUnchange:(_Bool)arg4;
- (void)trackLikeEventType:(unsigned long long)arg1 enterMethod:(id)arg2 triggerLogin:(_Bool)arg3;
- (void)trackLikeEventType:(unsigned long long)arg1 enterMethod:(id)arg2;
- (void)doSafeDiggWithDiggBlock:(CDUnknownBlockType)arg1 undiggBlock:(CDUnknownBlockType)arg2 otherActionBlock:(CDUnknownBlockType)arg3 actionFailedBlock:(CDUnknownBlockType)arg4 diggOriginItem:(_Bool)arg5 enterMethod:(id)arg6;
- (void)doSafeDiggWithDiggBlock:(CDUnknownBlockType)arg1 undiggBlock:(CDUnknownBlockType)arg2 otherActionBlock:(CDUnknownBlockType)arg3 actionFailedBlock:(CDUnknownBlockType)arg4 diggOriginItem:(_Bool)arg5 enterMethod:(id)arg6 inFollowFeed:(_Bool)arg7;
- (void)doSafeDiggWithDiggBlock:(CDUnknownBlockType)arg1 undiggBlock:(CDUnknownBlockType)arg2 otherActionBlock:(CDUnknownBlockType)arg3 actionFailedBlock:(CDUnknownBlockType)arg4 diggOriginItem:(_Bool)arg5 enterMethod:(id)arg6 inFollowFeed:(_Bool)arg7 ignoreUnlogin:(_Bool)arg8 animationBlock:(CDUnknownBlockType)arg9;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

