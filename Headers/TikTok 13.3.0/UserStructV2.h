//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class ActivityStructV2, AdCoverTitleV2, AvatarDecorationStructV2, BlueVBrandInfoStructV2, CommerceInfoStructV2, CommercePermissionStructV2, CommerceUserStructV2, DouplusToastStructV2, EffectArtistStructV2, GPBInt64Array, HotsearchSprintStructV2, LifeStoryBlockStructV2, LiveHonorStructV2, NSMutableArray, NSString, OriginalMusicianStructV2, PermissionStructV2, QuickShopStructV2, RFansGroupInfoV2, ShareStructV2, UrlStructV2;

@interface UserStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool acceptPrivatePolicy; // @dynamic acceptPrivatePolicy;
@property(copy, nonatomic) NSString *accountRegion; // @dynamic accountRegion;
@property(retain, nonatomic) ActivityStructV2 *activity; // @dynamic activity;
@property(retain, nonatomic) AdCoverTitleV2 *adCoverTitle; // @dynamic adCoverTitle;
@property(retain, nonatomic) NSMutableArray *adCoverURLArray; // @dynamic adCoverURLArray;
@property(readonly, nonatomic) unsigned long long adCoverURLArray_Count; // @dynamic adCoverURLArray_Count;
@property(copy, nonatomic) NSString *adOrderId; // @dynamic adOrderId;
@property(nonatomic) int allowStatus; // @dynamic allowStatus;
@property(nonatomic) int appleAccount; // @dynamic appleAccount;
@property(nonatomic) long long authorityStatus; // @dynamic authorityStatus;
@property(retain, nonatomic) UrlStructV2 *avatar168X168; // @dynamic avatar168X168;
@property(retain, nonatomic) UrlStructV2 *avatar300X300; // @dynamic avatar300X300;
@property(retain, nonatomic) AvatarDecorationStructV2 *avatarDecoration; // @dynamic avatarDecoration;
@property(nonatomic) long long avatarDecorationId; // @dynamic avatarDecorationId;
@property(retain, nonatomic) UrlStructV2 *avatarLarger; // @dynamic avatarLarger;
@property(retain, nonatomic) UrlStructV2 *avatarMedium; // @dynamic avatarMedium;
@property(retain, nonatomic) UrlStructV2 *avatarPendantLarger; // @dynamic avatarPendantLarger;
@property(retain, nonatomic) UrlStructV2 *avatarPendantMedium; // @dynamic avatarPendantMedium;
@property(retain, nonatomic) UrlStructV2 *avatarPendantThumb; // @dynamic avatarPendantThumb;
@property(retain, nonatomic) UrlStructV2 *avatarThumb; // @dynamic avatarThumb;
@property(nonatomic) _Bool avatarUpdateReminder; // @dynamic avatarUpdateReminder;
@property(copy, nonatomic) NSString *avatarUri; // @dynamic avatarUri;
@property(nonatomic) int awemeCount; // @dynamic awemeCount;
@property(copy, nonatomic) NSString *bindPhone; // @dynamic bindPhone;
@property(copy, nonatomic) NSString *bioEmail; // @dynamic bioEmail;
@property(copy, nonatomic) NSString *bioSecureURL; // @dynamic bioSecureURL;
@property(copy, nonatomic) NSString *bioURL; // @dynamic bioURL;
@property(copy, nonatomic) NSString *birthday; // @dynamic birthday;
@property(nonatomic) int birthdayHideLevel; // @dynamic birthdayHideLevel;
@property(retain, nonatomic) BlueVBrandInfoStructV2 *brandInfo; // @dynamic brandInfo;
@property(nonatomic) _Bool canModifySchoolInfo; // @dynamic canModifySchoolInfo;
@property(retain, nonatomic) NSMutableArray *chaListArray; // @dynamic chaListArray;
@property(readonly, nonatomic) unsigned long long chaListArray_Count; // @dynamic chaListArray_Count;
@property(copy, nonatomic) NSString *city; // @dynamic city;
@property(nonatomic) int collectCount; // @dynamic collectCount;
@property(copy, nonatomic) NSString *collegeName; // @dynamic collegeName;
@property(nonatomic) int commentFilterStatus; // @dynamic commentFilterStatus;
@property(nonatomic) int commentSetting; // @dynamic commentSetting;
@property(retain, nonatomic) CommerceInfoStructV2 *commerceInfo; // @dynamic commerceInfo;
@property(retain, nonatomic) CommercePermissionStructV2 *commercePermissions; // @dynamic commercePermissions;
@property(retain, nonatomic) CommerceUserStructV2 *commerceUserInfo; // @dynamic commerceUserInfo;
@property(nonatomic) int commerceUserLevel; // @dynamic commerceUserLevel;
@property(nonatomic) int constellation; // @dynamic constellation;
@property(copy, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) NSMutableArray *coverURLArray; // @dynamic coverURLArray;
@property(readonly, nonatomic) unsigned long long coverURLArray_Count; // @dynamic coverURLArray_Count;
@property(nonatomic) long long createTime; // @dynamic createTime;
@property(nonatomic) int creatorLevel; // @dynamic creatorLevel;
@property(copy, nonatomic) NSString *customVerify; // @dynamic customVerify;
@property(copy, nonatomic) NSString *cvLevel; // @dynamic cvLevel;
@property(nonatomic) _Bool displayWvalantineActivityEntry; // @dynamic displayWvalantineActivityEntry;
@property(copy, nonatomic) NSString *district; // @dynamic district;
@property(nonatomic) int dongtaiCount; // @dynamic dongtaiCount;
@property(nonatomic) int douPlusShareLocation; // @dynamic douPlusShareLocation;
@property(retain, nonatomic) DouplusToastStructV2 *douplusToast; // @dynamic douplusToast;
@property(nonatomic) long long downloadPromptTs; // @dynamic downloadPromptTs;
@property(nonatomic) int downloadSetting; // @dynamic downloadSetting;
@property(nonatomic) int duetSetting; // @dynamic duetSetting;
@property(nonatomic) int education; // @dynamic education;
@property(retain, nonatomic) EffectArtistStructV2 *effectDetail; // @dynamic effectDetail;
@property(copy, nonatomic) NSString *email; // @dynamic email;
@property(copy, nonatomic) NSString *enrollYear; // @dynamic enrollYear;
@property(copy, nonatomic) NSString *enterpriseVerifyReason; // @dynamic enterpriseVerifyReason;
@property(nonatomic) int favoritingCount; // @dynamic favoritingCount;
@property(nonatomic) int fbExpireTime; // @dynamic fbExpireTime;
@property(nonatomic) int followStatus; // @dynamic followStatus;
@property(nonatomic) int followerCount; // @dynamic followerCount;
@property(nonatomic) int followerStatus; // @dynamic followerStatus;
@property(retain, nonatomic) NSMutableArray *followersDetailArray; // @dynamic followersDetailArray;
@property(readonly, nonatomic) unsigned long long followersDetailArray_Count; // @dynamic followersDetailArray_Count;
@property(nonatomic) int followingCount; // @dynamic followingCount;
@property(nonatomic) _Bool forcePrivateAccount; // @dynamic forcePrivateAccount;
@property(nonatomic) int gender; // @dynamic gender;
@property(retain, nonatomic) PermissionStructV2 *generalPermission; // @dynamic generalPermission;
@property(retain, nonatomic) NSMutableArray *geofencingArray; // @dynamic geofencingArray;
@property(readonly, nonatomic) unsigned long long geofencingArray_Count; // @dynamic geofencingArray_Count;
@property(copy, nonatomic) NSString *googleAccount; // @dynamic googleAccount;
@property(nonatomic) _Bool hasAcceptPrivatePolicy; // @dynamic hasAcceptPrivatePolicy;
@property(nonatomic) _Bool hasAccountRegion; // @dynamic hasAccountRegion;
@property(nonatomic) _Bool hasActivity; // @dynamic hasActivity;
@property(nonatomic) _Bool hasActivityMedal; // @dynamic hasActivityMedal;
@property(nonatomic) _Bool hasAdCoverTitle; // @dynamic hasAdCoverTitle;
@property(nonatomic) _Bool hasAdOrderId; // @dynamic hasAdOrderId;
@property(nonatomic) _Bool hasAllowStatus; // @dynamic hasAllowStatus;
@property(nonatomic) _Bool hasAppleAccount; // @dynamic hasAppleAccount;
@property(nonatomic) _Bool hasAuthorityStatus; // @dynamic hasAuthorityStatus;
@property(nonatomic) _Bool hasAvatar168X168; // @dynamic hasAvatar168X168;
@property(nonatomic) _Bool hasAvatar300X300; // @dynamic hasAvatar300X300;
@property(nonatomic) _Bool hasAvatarDecoration; // @dynamic hasAvatarDecoration;
@property(nonatomic) _Bool hasAvatarDecorationId; // @dynamic hasAvatarDecorationId;
@property(nonatomic) _Bool hasAvatarLarger; // @dynamic hasAvatarLarger;
@property(nonatomic) _Bool hasAvatarMedium; // @dynamic hasAvatarMedium;
@property(nonatomic) _Bool hasAvatarPendantLarger; // @dynamic hasAvatarPendantLarger;
@property(nonatomic) _Bool hasAvatarPendantMedium; // @dynamic hasAvatarPendantMedium;
@property(nonatomic) _Bool hasAvatarPendantThumb; // @dynamic hasAvatarPendantThumb;
@property(nonatomic) _Bool hasAvatarThumb; // @dynamic hasAvatarThumb;
@property(nonatomic) _Bool hasAvatarUpdateReminder; // @dynamic hasAvatarUpdateReminder;
@property(nonatomic) _Bool hasAvatarUri; // @dynamic hasAvatarUri;
@property(nonatomic) _Bool hasAwemeCount; // @dynamic hasAwemeCount;
@property(nonatomic) _Bool hasBindPhone; // @dynamic hasBindPhone;
@property(nonatomic) _Bool hasBioEmail; // @dynamic hasBioEmail;
@property(nonatomic) _Bool hasBioSecureURL; // @dynamic hasBioSecureURL;
@property(nonatomic) _Bool hasBioURL; // @dynamic hasBioURL;
@property(nonatomic) _Bool hasBirthday; // @dynamic hasBirthday;
@property(nonatomic) _Bool hasBirthdayHideLevel; // @dynamic hasBirthdayHideLevel;
@property(nonatomic) _Bool hasBrandInfo; // @dynamic hasBrandInfo;
@property(nonatomic) _Bool hasCanModifySchoolInfo; // @dynamic hasCanModifySchoolInfo;
@property(nonatomic) _Bool hasCity; // @dynamic hasCity;
@property(nonatomic) _Bool hasCollectCount; // @dynamic hasCollectCount;
@property(nonatomic) _Bool hasCollegeName; // @dynamic hasCollegeName;
@property(nonatomic) _Bool hasCommentFilterStatus; // @dynamic hasCommentFilterStatus;
@property(nonatomic) _Bool hasCommentSetting; // @dynamic hasCommentSetting;
@property(nonatomic) _Bool hasCommerceInfo; // @dynamic hasCommerceInfo;
@property(nonatomic) _Bool hasCommercePermissions; // @dynamic hasCommercePermissions;
@property(nonatomic) _Bool hasCommerceUserInfo; // @dynamic hasCommerceUserInfo;
@property(nonatomic) _Bool hasCommerceUserLevel; // @dynamic hasCommerceUserLevel;
@property(nonatomic) _Bool hasConstellation; // @dynamic hasConstellation;
@property(nonatomic) _Bool hasCountry; // @dynamic hasCountry;
@property(nonatomic) _Bool hasCreateTime; // @dynamic hasCreateTime;
@property(nonatomic) _Bool hasCreatorLevel; // @dynamic hasCreatorLevel;
@property(nonatomic) _Bool hasCustomVerify; // @dynamic hasCustomVerify;
@property(nonatomic) _Bool hasCvLevel; // @dynamic hasCvLevel;
@property(nonatomic) _Bool hasDisplayWvalantineActivityEntry; // @dynamic hasDisplayWvalantineActivityEntry;
@property(nonatomic) _Bool hasDistrict; // @dynamic hasDistrict;
@property(nonatomic) _Bool hasDongtaiCount; // @dynamic hasDongtaiCount;
@property(nonatomic) _Bool hasDouPlusShareLocation; // @dynamic hasDouPlusShareLocation;
@property(nonatomic) _Bool hasDouplusToast; // @dynamic hasDouplusToast;
@property(nonatomic) _Bool hasDownloadPromptTs; // @dynamic hasDownloadPromptTs;
@property(nonatomic) _Bool hasDownloadSetting; // @dynamic hasDownloadSetting;
@property(nonatomic) _Bool hasDuetSetting; // @dynamic hasDuetSetting;
@property(nonatomic) _Bool hasEducation; // @dynamic hasEducation;
@property(nonatomic) _Bool hasEffectDetail; // @dynamic hasEffectDetail;
@property(nonatomic) _Bool hasEmail; // @dynamic hasEmail;
@property(nonatomic) _Bool hasEnrollYear; // @dynamic hasEnrollYear;
@property(nonatomic) _Bool hasEnterpriseVerifyReason; // @dynamic hasEnterpriseVerifyReason;
@property(nonatomic) _Bool hasFacebookToken; // @dynamic hasFacebookToken;
@property(nonatomic) _Bool hasFavoritingCount; // @dynamic hasFavoritingCount;
@property(nonatomic) _Bool hasFbExpireTime; // @dynamic hasFbExpireTime;
@property(nonatomic) _Bool hasFollowStatus; // @dynamic hasFollowStatus;
@property(nonatomic) _Bool hasFollowerCount; // @dynamic hasFollowerCount;
@property(nonatomic) _Bool hasFollowerStatus; // @dynamic hasFollowerStatus;
@property(nonatomic) _Bool hasFollowingCount; // @dynamic hasFollowingCount;
@property(nonatomic) _Bool hasForcePrivateAccount; // @dynamic hasForcePrivateAccount;
@property(nonatomic) _Bool hasGender; // @dynamic hasGender;
@property(nonatomic) _Bool hasGeneralPermission; // @dynamic hasGeneralPermission;
@property(nonatomic) _Bool hasGoogleAccount; // @dynamic hasGoogleAccount;
@property(nonatomic) _Bool hasHasActivityMedal; // @dynamic hasHasActivityMedal;
@property(nonatomic) _Bool hasHasEmail; // @dynamic hasHasEmail;
@property(nonatomic) _Bool hasHasFacebookToken; // @dynamic hasHasFacebookToken;
@property(nonatomic) _Bool hasHasInsights; // @dynamic hasHasInsights;
@property(nonatomic) _Bool hasHasOrders; // @dynamic hasHasOrders;
@property(nonatomic) _Bool hasHasStory; // @dynamic hasHasStory;
@property(nonatomic) _Bool hasHasTwitterToken; // @dynamic hasHasTwitterToken;
@property(nonatomic) _Bool hasHasUnreadStory; // @dynamic hasHasUnreadStory;
@property(nonatomic) _Bool hasHasYoutubeToken; // @dynamic hasHasYoutubeToken;
@property(nonatomic) _Bool hasHideFollowingFollowerList; // @dynamic hasHideFollowingFollowerList;
@property(nonatomic) _Bool hasHideLocation; // @dynamic hasHideLocation;
@property(nonatomic) _Bool hasHideSearch; // @dynamic hasHideSearch;
@property(nonatomic) _Bool hasHonorInfo; // @dynamic hasHonorInfo;
@property(nonatomic) _Bool hasInsId; // @dynamic hasInsId;
@property(nonatomic) _Bool hasInsights; // @dynamic hasInsights;
@property(nonatomic) _Bool hasIsAdFake; // @dynamic hasIsAdFake;
@property(nonatomic) _Bool hasIsBindedWeibo; // @dynamic hasIsBindedWeibo;
@property(nonatomic) _Bool hasIsBlock; // @dynamic hasIsBlock;
@property(nonatomic) _Bool hasIsBlocked; // @dynamic hasIsBlocked;
@property(nonatomic) _Bool hasIsDisciplineMember; // @dynamic hasIsDisciplineMember;
@property(nonatomic) _Bool hasIsEffectArtist; // @dynamic hasIsEffectArtist;
@property(nonatomic) _Bool hasIsEmailVerified; // @dynamic hasIsEmailVerified;
@property(nonatomic) _Bool hasIsFlowcardMember; // @dynamic hasIsFlowcardMember;
@property(nonatomic) _Bool hasIsGovMediaVip; // @dynamic hasIsGovMediaVip;
@property(nonatomic) _Bool hasIsMinor; // @dynamic hasIsMinor;
@property(nonatomic) _Bool hasIsMirror; // @dynamic hasIsMirror;
@property(nonatomic) _Bool hasIsPhoneBinded; // @dynamic hasIsPhoneBinded;
@property(nonatomic) _Bool hasIsProAccount; // @dynamic hasIsProAccount;
@property(nonatomic) _Bool hasIsStar; // @dynamic hasIsStar;
@property(nonatomic) _Bool hasIsVerified; // @dynamic hasIsVerified;
@property(nonatomic) _Bool hasIsoCountryCode; // @dynamic hasIsoCountryCode;
@property(nonatomic) _Bool hasLanguage; // @dynamic hasLanguage;
@property(nonatomic) _Bool hasLatestOrderTime; // @dynamic hasLatestOrderTime;
@property(nonatomic) _Bool hasLifeStoryBlock; // @dynamic hasLifeStoryBlock;
@property(nonatomic) _Bool hasLiveAgreement; // @dynamic hasLiveAgreement;
@property(nonatomic) _Bool hasLiveAgreementTime; // @dynamic hasLiveAgreementTime;
@property(nonatomic) _Bool hasLiveCommerce; // @dynamic hasLiveCommerce;
@property(nonatomic) _Bool hasLiveVerify; // @dynamic hasLiveVerify;
@property(nonatomic) _Bool hasLocation; // @dynamic hasLocation;
@property(nonatomic) _Bool hasLoginPlatform; // @dynamic hasLoginPlatform;
@property(nonatomic) _Bool hasMplatformFollowersCount; // @dynamic hasMplatformFollowersCount;
@property(nonatomic) _Bool hasNeedRecommend; // @dynamic hasNeedRecommend;
@property(nonatomic) _Bool hasNeiguangShield; // @dynamic hasNeiguangShield;
@property(nonatomic) _Bool hasNickname; // @dynamic hasNickname;
@property(nonatomic) _Bool hasNicknameUpdateReminder; // @dynamic hasNicknameUpdateReminder;
@property(nonatomic) _Bool hasNotifyPrivateAccount; // @dynamic hasNotifyPrivateAccount;
@property(nonatomic) _Bool hasOpenInsightTime; // @dynamic hasOpenInsightTime;
@property(nonatomic) _Bool hasOrders; // @dynamic hasOrders;
@property(nonatomic) _Bool hasOriginalMusician; // @dynamic hasOriginalMusician;
@property(nonatomic) _Bool hasPrExempt; // @dynamic hasPrExempt;
@property(nonatomic) _Bool hasPreventDownload; // @dynamic hasPreventDownload;
@property(nonatomic) _Bool hasProfileTabType; // @dynamic hasProfileTabType;
@property(nonatomic) _Bool hasProvince; // @dynamic hasProvince;
@property(nonatomic) _Bool hasQuickShopInfo; // @dynamic hasQuickShopInfo;
@property(nonatomic) _Bool hasRFansGroupInfo; // @dynamic hasRFansGroupInfo;
@property(nonatomic) _Bool hasReactSetting; // @dynamic hasReactSetting;
@property(nonatomic) _Bool hasRealnameVerifyStatus; // @dynamic hasRealnameVerifyStatus;
@property(nonatomic) _Bool hasRecommendReason; // @dynamic hasRecommendReason;
@property(nonatomic) _Bool hasRecommendReasonRelation; // @dynamic hasRecommendReasonRelation;
@property(nonatomic) _Bool hasRecommendScore; // @dynamic hasRecommendScore;
@property(nonatomic) _Bool hasReflowPageGid; // @dynamic hasReflowPageGid;
@property(nonatomic) _Bool hasReflowPageUid; // @dynamic hasReflowPageUid;
@property(nonatomic) _Bool hasRegion; // @dynamic hasRegion;
@property(nonatomic) _Bool hasRegisterTime; // @dynamic hasRegisterTime;
@property(nonatomic) _Bool hasRelationLabel; // @dynamic hasRelationLabel;
@property(nonatomic) _Bool hasRemarkName; // @dynamic hasRemarkName;
@property(nonatomic) _Bool hasRoomCover; // @dynamic hasRoomCover;
@property(nonatomic) _Bool hasRoomId; // @dynamic hasRoomId;
@property(nonatomic) _Bool hasRoomTypeTag; // @dynamic hasRoomTypeTag;
@property(nonatomic) _Bool hasSchoolName; // @dynamic hasSchoolName;
@property(nonatomic) _Bool hasSchoolPoiId; // @dynamic hasSchoolPoiId;
@property(nonatomic) _Bool hasSchoolType; // @dynamic hasSchoolType;
@property(nonatomic) _Bool hasSchoolVisible; // @dynamic hasSchoolVisible;
@property(nonatomic) _Bool hasSecUid; // @dynamic hasSecUid;
@property(nonatomic) _Bool hasSecret; // @dynamic hasSecret;
@property(nonatomic) _Bool hasShareInfo; // @dynamic hasShareInfo;
@property(nonatomic) _Bool hasShareQrcodeUri; // @dynamic hasShareQrcodeUri;
@property(nonatomic) _Bool hasShieldCommentNotice; // @dynamic hasShieldCommentNotice;
@property(nonatomic) _Bool hasShieldDiggNotice; // @dynamic hasShieldDiggNotice;
@property(nonatomic) _Bool hasShieldFollowNotice; // @dynamic hasShieldFollowNotice;
@property(nonatomic) _Bool hasShopMicroApp; // @dynamic hasShopMicroApp;
@property(nonatomic) _Bool hasShortId; // @dynamic hasShortId;
@property(nonatomic) _Bool hasShowGenderStrategy; // @dynamic hasShowGenderStrategy;
@property(nonatomic) _Bool hasShowImageBubble; // @dynamic hasShowImageBubble;
@property(nonatomic) _Bool hasSignature; // @dynamic hasSignature;
@property(nonatomic) _Bool hasSignatureLanguage; // @dynamic hasSignatureLanguage;
@property(nonatomic) _Bool hasSpecialLock; // @dynamic hasSpecialLock;
@property(nonatomic) _Bool hasSprintSupportUserInfo; // @dynamic hasSprintSupportUserInfo;
@property(nonatomic) _Bool hasStarBillboardRank; // @dynamic hasStarBillboardRank;
@property(nonatomic) _Bool hasStarUseNewDownload; // @dynamic hasStarUseNewDownload;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStory; // @dynamic hasStory;
@property(nonatomic) _Bool hasStoryCount; // @dynamic hasStoryCount;
@property(nonatomic) _Bool hasStoryOpen; // @dynamic hasStoryOpen;
@property(nonatomic) _Bool hasSyncToToutiao; // @dynamic hasSyncToToutiao;
@property(nonatomic) _Bool hasThirdName; // @dynamic hasThirdName;
@property(nonatomic) _Bool hasTotalFavorited; // @dynamic hasTotalFavorited;
@property(nonatomic) _Bool hasTwExpireTime; // @dynamic hasTwExpireTime;
@property(nonatomic) _Bool hasTwitterId; // @dynamic hasTwitterId;
@property(nonatomic) _Bool hasTwitterName; // @dynamic hasTwitterName;
@property(nonatomic) _Bool hasTwitterToken; // @dynamic hasTwitterToken;
@property(nonatomic) _Bool hasUid; // @dynamic hasUid;
@property(nonatomic) _Bool hasUniqueId; // @dynamic hasUniqueId;
@property(nonatomic) _Bool hasUniqueIdModifyTime; // @dynamic hasUniqueIdModifyTime;
@property(nonatomic) _Bool hasUnreadStory; // @dynamic hasUnreadStory;
@property(nonatomic) _Bool hasUserCanceled; // @dynamic hasUserCanceled;
@property(nonatomic) _Bool hasUserMode; // @dynamic hasUserMode;
@property(nonatomic) _Bool hasUserPeriod; // @dynamic hasUserPeriod;
@property(nonatomic) _Bool hasUserRate; // @dynamic hasUserRate;
@property(nonatomic) _Bool hasUserStoryCount; // @dynamic hasUserStoryCount;
@property(nonatomic) _Bool hasVerificationType; // @dynamic hasVerificationType;
@property(nonatomic) _Bool hasVerifyInfo; // @dynamic hasVerifyInfo;
@property(nonatomic) _Bool hasVideoIcon; // @dynamic hasVideoIcon;
@property(nonatomic) _Bool hasVideoIconVirtualUri; // @dynamic hasVideoIconVirtualUri;
@property(nonatomic) _Bool hasWatchStatus; // @dynamic hasWatchStatus;
@property(nonatomic) _Bool hasWeiboName; // @dynamic hasWeiboName;
@property(nonatomic) _Bool hasWeiboSchema; // @dynamic hasWeiboSchema;
@property(nonatomic) _Bool hasWeiboURL; // @dynamic hasWeiboURL;
@property(nonatomic) _Bool hasWeiboVerify; // @dynamic hasWeiboVerify;
@property(nonatomic) _Bool hasWithCommerceEnterpriseTabEntry; // @dynamic hasWithCommerceEnterpriseTabEntry;
@property(nonatomic) _Bool hasWithCommerceEntry; // @dynamic hasWithCommerceEntry;
@property(nonatomic) _Bool hasWithCommerceNewbieTask; // @dynamic hasWithCommerceNewbieTask;
@property(nonatomic) _Bool hasWithDouEntry; // @dynamic hasWithDouEntry;
@property(nonatomic) _Bool hasWithDouplusEntry; // @dynamic hasWithDouplusEntry;
@property(nonatomic) _Bool hasWithFusionShopEntry; // @dynamic hasWithFusionShopEntry;
@property(nonatomic) _Bool hasWithItemCommerceEntry; // @dynamic hasWithItemCommerceEntry;
@property(nonatomic) _Bool hasWithLubanEntry; // @dynamic hasWithLubanEntry;
@property(nonatomic) _Bool hasWithNewGoods; // @dynamic hasWithNewGoods;
@property(nonatomic) _Bool hasWithShopEntry; // @dynamic hasWithShopEntry;
@property(nonatomic) _Bool hasWithStarAtlasEntry; // @dynamic hasWithStarAtlasEntry;
@property(nonatomic) _Bool hasWithStickEntry; // @dynamic hasWithStickEntry;
@property(nonatomic) _Bool hasWxTag; // @dynamic hasWxTag;
@property(nonatomic) _Bool hasYoutubeChannelId; // @dynamic hasYoutubeChannelId;
@property(nonatomic) _Bool hasYoutubeChannelTitle; // @dynamic hasYoutubeChannelTitle;
@property(nonatomic) _Bool hasYoutubeExpireTime; // @dynamic hasYoutubeExpireTime;
@property(nonatomic) _Bool hasYoutubeToken; // @dynamic hasYoutubeToken;
@property(nonatomic) int hideFollowingFollowerList; // @dynamic hideFollowingFollowerList;
@property(nonatomic) _Bool hideLocation; // @dynamic hideLocation;
@property(nonatomic) _Bool hideSearch; // @dynamic hideSearch;
@property(retain, nonatomic) LiveHonorStructV2 *honorInfo; // @dynamic honorInfo;
@property(copy, nonatomic) NSString *insId; // @dynamic insId;
@property(nonatomic) _Bool isAdFake; // @dynamic isAdFake;
@property(nonatomic) _Bool isBindedWeibo; // @dynamic isBindedWeibo;
@property(nonatomic) _Bool isBlock; // @dynamic isBlock;
@property(nonatomic) _Bool isBlocked; // @dynamic isBlocked;
@property(nonatomic) _Bool isDisciplineMember; // @dynamic isDisciplineMember;
@property(nonatomic) _Bool isEffectArtist; // @dynamic isEffectArtist;
@property(nonatomic) _Bool isEmailVerified; // @dynamic isEmailVerified;
@property(nonatomic) _Bool isFlowcardMember; // @dynamic isFlowcardMember;
@property(nonatomic) _Bool isGovMediaVip; // @dynamic isGovMediaVip;
@property(nonatomic) _Bool isMinor; // @dynamic isMinor;
@property(nonatomic) _Bool isMirror; // @dynamic isMirror;
@property(nonatomic) _Bool isPhoneBinded; // @dynamic isPhoneBinded;
@property(nonatomic) _Bool isProAccount; // @dynamic isProAccount;
@property(nonatomic) _Bool isStar; // @dynamic isStar;
@property(nonatomic) _Bool isVerified; // @dynamic isVerified;
@property(copy, nonatomic) NSString *isoCountryCode; // @dynamic isoCountryCode;
@property(retain, nonatomic) NSMutableArray *itemListArray; // @dynamic itemListArray;
@property(readonly, nonatomic) unsigned long long itemListArray_Count; // @dynamic itemListArray_Count;
@property(copy, nonatomic) NSString *language; // @dynamic language;
@property(nonatomic) long long latestOrderTime; // @dynamic latestOrderTime;
@property(retain, nonatomic) LifeStoryBlockStructV2 *lifeStoryBlock; // @dynamic lifeStoryBlock;
@property(nonatomic) int liveAgreement; // @dynamic liveAgreement;
@property(nonatomic) int liveAgreementTime; // @dynamic liveAgreementTime;
@property(nonatomic) _Bool liveCommerce; // @dynamic liveCommerce;
@property(nonatomic) int liveVerify; // @dynamic liveVerify;
@property(copy, nonatomic) NSString *location; // @dynamic location;
@property(nonatomic) int loginPlatform; // @dynamic loginPlatform;
@property(nonatomic) int mplatformFollowersCount; // @dynamic mplatformFollowersCount;
@property(nonatomic) int needRecommend; // @dynamic needRecommend;
@property(nonatomic) int neiguangShield; // @dynamic neiguangShield;
@property(retain, nonatomic) NSMutableArray *newStoryCoverArray; // @dynamic newStoryCoverArray;
@property(readonly, nonatomic) unsigned long long newStoryCoverArray_Count; // @dynamic newStoryCoverArray_Count;
@property(copy, nonatomic) NSString *nickname; // @dynamic nickname;
@property(nonatomic) _Bool nicknameUpdateReminder; // @dynamic nicknameUpdateReminder;
@property(nonatomic) int notifyPrivateAccount; // @dynamic notifyPrivateAccount;
@property(nonatomic) long long openInsightTime; // @dynamic openInsightTime;
@property(retain, nonatomic) OriginalMusicianStructV2 *originalMusician; // @dynamic originalMusician;
@property(retain, nonatomic) NSMutableArray *platformSyncInfoArray; // @dynamic platformSyncInfoArray;
@property(readonly, nonatomic) unsigned long long platformSyncInfoArray_Count; // @dynamic platformSyncInfoArray_Count;
@property(nonatomic) int prExempt; // @dynamic prExempt;
@property(nonatomic) _Bool preventDownload; // @dynamic preventDownload;
@property(nonatomic) int profileTabType; // @dynamic profileTabType;
@property(copy, nonatomic) NSString *province; // @dynamic province;
@property(retain, nonatomic) QuickShopStructV2 *quickShopInfo; // @dynamic quickShopInfo;
@property(retain, nonatomic) RFansGroupInfoV2 *rFansGroupInfo; // @dynamic rFansGroupInfo;
@property(nonatomic) int reactSetting; // @dynamic reactSetting;
@property(nonatomic) int realnameVerifyStatus; // @dynamic realnameVerifyStatus;
@property(copy, nonatomic) NSString *recommendReason; // @dynamic recommendReason;
@property(copy, nonatomic) NSString *recommendReasonRelation; // @dynamic recommendReasonRelation;
@property(nonatomic) double recommendScore; // @dynamic recommendScore;
@property(nonatomic) long long reflowPageGid; // @dynamic reflowPageGid;
@property(nonatomic) long long reflowPageUid; // @dynamic reflowPageUid;
@property(copy, nonatomic) NSString *region; // @dynamic region;
@property(nonatomic) long long registerTime; // @dynamic registerTime;
@property(copy, nonatomic) NSString *relationLabel; // @dynamic relationLabel;
@property(retain, nonatomic) NSMutableArray *relativeUsersArray; // @dynamic relativeUsersArray;
@property(readonly, nonatomic) unsigned long long relativeUsersArray_Count; // @dynamic relativeUsersArray_Count;
@property(copy, nonatomic) NSString *remarkName; // @dynamic remarkName;
@property(retain, nonatomic) UrlStructV2 *roomCover; // @dynamic roomCover;
@property(nonatomic) long long roomId; // @dynamic roomId;
@property(copy, nonatomic) NSString *roomTypeTag; // @dynamic roomTypeTag;
@property(copy, nonatomic) NSString *schoolName; // @dynamic schoolName;
@property(copy, nonatomic) NSString *schoolPoiId; // @dynamic schoolPoiId;
@property(nonatomic) int schoolType; // @dynamic schoolType;
@property(nonatomic) int schoolVisible; // @dynamic schoolVisible;
@property(copy, nonatomic) NSString *secUid; // @dynamic secUid;
@property(nonatomic) int secret; // @dynamic secret;
@property(retain, nonatomic) ShareStructV2 *shareInfo; // @dynamic shareInfo;
@property(copy, nonatomic) NSString *shareQrcodeUri; // @dynamic shareQrcodeUri;
@property(nonatomic) int shieldCommentNotice; // @dynamic shieldCommentNotice;
@property(nonatomic) int shieldDiggNotice; // @dynamic shieldDiggNotice;
@property(nonatomic) int shieldFollowNotice; // @dynamic shieldFollowNotice;
@property(copy, nonatomic) NSString *shopMicroApp; // @dynamic shopMicroApp;
@property(copy, nonatomic) NSString *shortId; // @dynamic shortId;
@property(nonatomic) int showGenderStrategy; // @dynamic showGenderStrategy;
@property(nonatomic) _Bool showImageBubble; // @dynamic showImageBubble;
@property(copy, nonatomic) NSString *signature; // @dynamic signature;
@property(copy, nonatomic) NSString *signatureLanguage; // @dynamic signatureLanguage;
@property(nonatomic) int specialLock; // @dynamic specialLock;
@property(retain, nonatomic) HotsearchSprintStructV2 *sprintSupportUserInfo; // @dynamic sprintSupportUserInfo;
@property(nonatomic) int starBillboardRank; // @dynamic starBillboardRank;
@property(nonatomic) _Bool starUseNewDownload; // @dynamic starUseNewDownload;
@property(nonatomic) int status; // @dynamic status;
@property(nonatomic) int storyCount; // @dynamic storyCount;
@property(nonatomic) _Bool storyOpen; // @dynamic storyOpen;
@property(nonatomic) int syncToToutiao; // @dynamic syncToToutiao;
@property(copy, nonatomic) NSString *thirdName; // @dynamic thirdName;
@property(nonatomic) int totalFavorited; // @dynamic totalFavorited;
@property(nonatomic) int twExpireTime; // @dynamic twExpireTime;
@property(copy, nonatomic) NSString *twitterId; // @dynamic twitterId;
@property(copy, nonatomic) NSString *twitterName; // @dynamic twitterName;
@property(retain, nonatomic) GPBInt64Array *typeLabelArray; // @dynamic typeLabelArray;
@property(readonly, nonatomic) unsigned long long typeLabelArray_Count; // @dynamic typeLabelArray_Count;
@property(copy, nonatomic) NSString *uid; // @dynamic uid;
@property(copy, nonatomic) NSString *uniqueId; // @dynamic uniqueId;
@property(nonatomic) int uniqueIdModifyTime; // @dynamic uniqueIdModifyTime;
@property(nonatomic) _Bool userCanceled; // @dynamic userCanceled;
@property(nonatomic) int userMode; // @dynamic userMode;
@property(nonatomic) int userPeriod; // @dynamic userPeriod;
@property(nonatomic) int userRate; // @dynamic userRate;
@property(nonatomic) int userStoryCount; // @dynamic userStoryCount;
@property(nonatomic) int verificationType; // @dynamic verificationType;
@property(copy, nonatomic) NSString *verifyInfo; // @dynamic verifyInfo;
@property(retain, nonatomic) UrlStructV2 *videoIcon; // @dynamic videoIcon;
@property(copy, nonatomic) NSString *videoIconVirtualUri; // @dynamic videoIconVirtualUri;
@property(nonatomic) _Bool watchStatus; // @dynamic watchStatus;
@property(copy, nonatomic) NSString *weiboName; // @dynamic weiboName;
@property(copy, nonatomic) NSString *weiboSchema; // @dynamic weiboSchema;
@property(copy, nonatomic) NSString *weiboURL; // @dynamic weiboURL;
@property(copy, nonatomic) NSString *weiboVerify; // @dynamic weiboVerify;
@property(nonatomic) _Bool withCommerceEnterpriseTabEntry; // @dynamic withCommerceEnterpriseTabEntry;
@property(nonatomic) _Bool withCommerceEntry; // @dynamic withCommerceEntry;
@property(nonatomic) _Bool withCommerceNewbieTask; // @dynamic withCommerceNewbieTask;
@property(nonatomic) _Bool withDouEntry; // @dynamic withDouEntry;
@property(nonatomic) _Bool withDouplusEntry; // @dynamic withDouplusEntry;
@property(nonatomic) _Bool withFusionShopEntry; // @dynamic withFusionShopEntry;
@property(nonatomic) _Bool withItemCommerceEntry; // @dynamic withItemCommerceEntry;
@property(nonatomic) _Bool withLubanEntry; // @dynamic withLubanEntry;
@property(nonatomic) _Bool withNewGoods; // @dynamic withNewGoods;
@property(nonatomic) _Bool withShopEntry; // @dynamic withShopEntry;
@property(nonatomic) _Bool withStarAtlasEntry; // @dynamic withStarAtlasEntry;
@property(nonatomic) _Bool withStickEntry; // @dynamic withStickEntry;
@property(nonatomic) int wxTag; // @dynamic wxTag;
@property(copy, nonatomic) NSString *youtubeChannelId; // @dynamic youtubeChannelId;
@property(copy, nonatomic) NSString *youtubeChannelTitle; // @dynamic youtubeChannelTitle;
@property(nonatomic) int youtubeExpireTime; // @dynamic youtubeExpireTime;

@end

