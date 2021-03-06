//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSNumber, NSString;

@protocol YTSettingsBackedByUserDefaults <NSObject>
@property(nonatomic) _Bool showViewGestures;
@property(nonatomic) _Bool showButtonTapTargets;
@property(nonatomic) _Bool showViewFrames;
@property(retain, nonatomic) NSDate *lastPlaybackPositionSyncClientDate;
@property(retain, nonatomic) NSNumber *lastPlaybackPositionSyncTimestamp;
@property(retain, nonatomic) NSDate *downloadRecommendationsNextSyncDate;
@property(nonatomic, getter=areDownloadRecommendationsEnabled) _Bool downloadRecommendationsEnabled;
@property(nonatomic) _Bool watchBreakWaitAfterVideoEnds;
@property(nonatomic) long long watchBreakFrequencyMinutes;
@property(nonatomic) _Bool watchBreakEnabled;
@property(nonatomic) long long doubleTapSeekDuration;
@property(nonatomic) long long animatedPreviewsSetting;
@property(nonatomic) long long playAsYouBrowseSettingState;
@property(nonatomic) long long maxLocalHistorySuggestions;
@property(nonatomic, getter=isOfflineConfirmRemoveDisabled) _Bool offlineConfirmRemoveDisabled;
@property(nonatomic, getter=isForcedInnerTubeUploads) _Bool forcedInnerTubeUploads;
@property(nonatomic, getter=isForceNavEndpointClick) _Bool forceNavEndpointClick;
@property(nonatomic, getter=isWebMEnabled) _Bool webMEnabled;
@property(nonatomic) long long forcedMediaPlayerType;
@property(nonatomic, getter=hasBackgroundOnboardingHintShown) _Bool backgroundOnboardingHintShown;
@property(nonatomic, getter=areHintsDisabled) _Bool hintsDisabled;
@property(copy, nonatomic) NSString *flexGenServerURL;
@property(nonatomic, getter=isWelcomeDismissed) _Bool welcomeDismissed;
@property(nonatomic) _Bool hasShownVRWelcomeScreen;
@property(nonatomic, getter=isOfflineAVFoundationEnabled) _Bool offlineAVFoundationEnabled;
@property(nonatomic, getter=isNerdStatsEnabled) _Bool nerdStatsEnabled;
@property(nonatomic, getter=isFPSWatchdogEnabled) _Bool FPSWatchdogEnabled;
@property(nonatomic, getter=isFPSStatusBarEnabled) _Bool FPSStatusBarEnabled;
@property(nonatomic) int autonavSettingsState;
@property(nonatomic) long long uploadQuality;
@property(nonatomic) int safeSearch;
@property(nonatomic, getter=isPictureInPictureEnabled) _Bool pictureInPictureEnabled;
@property(nonatomic) long long backgroundability;
@property(nonatomic) long long MDXForcedPromotionElementType;
@property(nonatomic) long long MDXServerEnvironment;
@property(copy, nonatomic) NSString *vixSnapshotId;
@property(copy, nonatomic) NSString *forcedPromoID;
@property(copy, nonatomic) NSString *contentRegion;
@property(copy, nonatomic) NSString *captionLanguageCode;
@property(nonatomic) long long forcedPromoIDRequests;
@property(retain, nonatomic) NSDate *promotedItemLastClosedTime;
@property(copy, nonatomic) NSArray *customExperimentIDs;
@property(nonatomic) _Bool watchHistoryPaused;
@property(nonatomic) _Bool searchHistoryPaused;
@property(nonatomic) _Bool logAdRequests;
@property(nonatomic) _Bool snapZoomZoomedByDefault;
@property(nonatomic) _Bool fullscreenPlaybackOnExternalScreenEnabled;
@property(copy, nonatomic) NSString *additionalDIALLaunchParameters;
@property(nonatomic, getter=isMDXVerboseLoggingEnabled) _Bool MDXVerboseLoggingEnabled;
@property(nonatomic) _Bool enableCastSDKLogging;
@property(nonatomic) _Bool doNotCount;
@property(nonatomic) _Bool disableMDXDeviceDiscovery;
@property(nonatomic) _Bool browseDebug;
@property(nonatomic) _Bool alwaysShowRetroactiveSignIn;
@property(nonatomic) _Bool alwaysShowFirstSignIn;
@end

