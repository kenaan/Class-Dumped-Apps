//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCComposerMarshallableObject.h"

@class SCSearchV2Configuration;
@protocol SCCBlizzardLogging, SCCBlockedUserStoring, SCCFriendStoring, SCCFriendmojiRendering, SCCFriendsFeedStatusHandlerProviding, SCCGroupStoring, SCCLensActionHandling, SCCStoryPlayerNativeSnapProStoryFetching, SCCStoryPlayerNativeUserStoryFetching, SCCStoryPlayerPlaying, SCCStorySummaryInfoStoring, SCCSubscriptionStore, SCCSuggestedFriendStoring, SCComposerNetworkingClientProtocol, SCSearchV2ActionSheetPresenting, SCSearchV2CognacTokenProviding, SCSearchV2RecentChatInteractionStoring, SCSearchV2ReplyCameraPresenting, SCSearchV2StudyInfoProviding, SCSearchV2UserInfoProviding;

@interface SCSearchV2Context : SCComposerMarshallableObject
{
    id <SCCGroupStoring> _groupStore;
    id <SCCFriendStoring> _friendStore;
    id <SCCSuggestedFriendStoring> _suggestedFriendStore;
    id <SCCBlockedUserStoring> _blockedUserStore;
    id <SCCStorySummaryInfoStoring> _storySummaryInfoStore;
    id <SCCFriendmojiRendering> _friendmojiRenderer;
    id <SCSearchV2UserInfoProviding> _userInfoProvider;
    id <SCSearchV2CognacTokenProviding> _cognacTokenProvider;
    id <SCCSubscriptionStore> _subscriptionStore;
    id <SCCLensActionHandling> _lensActionHandler;
    id <SCCBlizzardLogging> _blizzardLogger;
    id <SCComposerNetworkingClientProtocol> _networkingClient;
    id <SCCStoryPlayerPlaying> _storyPlayer;
    id <SCSearchV2RecentChatInteractionStoring> _recentChatInteractionStore;
    id <SCCStoryPlayerNativeUserStoryFetching> _nativeUserStoryFetcher;
    id <SCCFriendsFeedStatusHandlerProviding> _friendsFeedStatusHandlerProvider;
    id <SCSearchV2ActionSheetPresenting> _actionSheetPresenter;
    id <SCSearchV2ReplyCameraPresenting> _replyCameraPresenter;
    long long _metricsContext;
    SCSearchV2Configuration *_config;
    id <SCSearchV2StudyInfoProviding> _studyInfoProvider;
    id <SCCStoryPlayerNativeSnapProStoryFetching> _snapProStoryFetcher;
}

@property(retain, nonatomic) id <SCCStoryPlayerNativeSnapProStoryFetching> snapProStoryFetcher; // @synthesize snapProStoryFetcher=_snapProStoryFetcher;
@property(retain, nonatomic) id <SCSearchV2StudyInfoProviding> studyInfoProvider; // @synthesize studyInfoProvider=_studyInfoProvider;
@property(retain, nonatomic) SCSearchV2Configuration *config; // @synthesize config=_config;
@property(nonatomic) long long metricsContext; // @synthesize metricsContext=_metricsContext;
@property(retain, nonatomic) id <SCSearchV2ReplyCameraPresenting> replyCameraPresenter; // @synthesize replyCameraPresenter=_replyCameraPresenter;
@property(retain, nonatomic) id <SCSearchV2ActionSheetPresenting> actionSheetPresenter; // @synthesize actionSheetPresenter=_actionSheetPresenter;
@property(retain, nonatomic) id <SCCFriendsFeedStatusHandlerProviding> friendsFeedStatusHandlerProvider; // @synthesize friendsFeedStatusHandlerProvider=_friendsFeedStatusHandlerProvider;
@property(retain, nonatomic) id <SCCStoryPlayerNativeUserStoryFetching> nativeUserStoryFetcher; // @synthesize nativeUserStoryFetcher=_nativeUserStoryFetcher;
@property(retain, nonatomic) id <SCSearchV2RecentChatInteractionStoring> recentChatInteractionStore; // @synthesize recentChatInteractionStore=_recentChatInteractionStore;
@property(retain, nonatomic) id <SCCStoryPlayerPlaying> storyPlayer; // @synthesize storyPlayer=_storyPlayer;
@property(retain, nonatomic) id <SCComposerNetworkingClientProtocol> networkingClient; // @synthesize networkingClient=_networkingClient;
@property(retain, nonatomic) id <SCCBlizzardLogging> blizzardLogger; // @synthesize blizzardLogger=_blizzardLogger;
@property(retain, nonatomic) id <SCCLensActionHandling> lensActionHandler; // @synthesize lensActionHandler=_lensActionHandler;
@property(retain, nonatomic) id <SCCSubscriptionStore> subscriptionStore; // @synthesize subscriptionStore=_subscriptionStore;
@property(retain, nonatomic) id <SCSearchV2CognacTokenProviding> cognacTokenProvider; // @synthesize cognacTokenProvider=_cognacTokenProvider;
@property(retain, nonatomic) id <SCSearchV2UserInfoProviding> userInfoProvider; // @synthesize userInfoProvider=_userInfoProvider;
@property(retain, nonatomic) id <SCCFriendmojiRendering> friendmojiRenderer; // @synthesize friendmojiRenderer=_friendmojiRenderer;
@property(retain, nonatomic) id <SCCStorySummaryInfoStoring> storySummaryInfoStore; // @synthesize storySummaryInfoStore=_storySummaryInfoStore;
@property(retain, nonatomic) id <SCCBlockedUserStoring> blockedUserStore; // @synthesize blockedUserStore=_blockedUserStore;
@property(retain, nonatomic) id <SCCSuggestedFriendStoring> suggestedFriendStore; // @synthesize suggestedFriendStore=_suggestedFriendStore;
@property(retain, nonatomic) id <SCCFriendStoring> friendStore; // @synthesize friendStore=_friendStore;
@property(retain, nonatomic) id <SCCGroupStoring> groupStore; // @synthesize groupStore=_groupStore;
- (void).cxx_destruct;
- (long long)pushToComposerMarshaller:(struct SCComposerMarshaller *)arg1;
- (id)initWithGroupStore:(id)arg1 friendStore:(id)arg2 suggestedFriendStore:(id)arg3 blockedUserStore:(id)arg4 storySummaryInfoStore:(id)arg5 friendmojiRenderer:(id)arg6 userInfoProvider:(id)arg7 cognacTokenProvider:(id)arg8 subscriptionStore:(id)arg9 lensActionHandler:(id)arg10 blizzardLogger:(id)arg11 networkingClient:(id)arg12 storyPlayer:(id)arg13 recentChatInteractionStore:(id)arg14 nativeUserStoryFetcher:(id)arg15 friendsFeedStatusHandlerProvider:(id)arg16 actionSheetPresenter:(id)arg17 replyCameraPresenter:(id)arg18 metricsContext:(long long)arg19 config:(id)arg20 studyInfoProvider:(id)arg21;
- (id)initWithGroupStore:(id)arg1 friendStore:(id)arg2 suggestedFriendStore:(id)arg3 blockedUserStore:(id)arg4 storySummaryInfoStore:(id)arg5 friendmojiRenderer:(id)arg6 userInfoProvider:(id)arg7 cognacTokenProvider:(id)arg8 subscriptionStore:(id)arg9 lensActionHandler:(id)arg10 blizzardLogger:(id)arg11 networkingClient:(id)arg12 storyPlayer:(id)arg13 recentChatInteractionStore:(id)arg14 nativeUserStoryFetcher:(id)arg15 friendsFeedStatusHandlerProvider:(id)arg16 actionSheetPresenter:(id)arg17 replyCameraPresenter:(id)arg18 metricsContext:(long long)arg19 config:(id)arg20 studyInfoProvider:(id)arg21 snapProStoryFetcher:(id)arg22;

@end
