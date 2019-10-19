//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEDigitalWellbeingMessage-Protocol.h"
#import "AWEPublishTaskMessage-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "HTSAccountMessage-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class AWEFeedRootViewController, AWEFriendTabViewController, AWEFullScreenConcernViewController, AWENewUserRetrievalViewController, AWETabBarController, AWETabBarPlusButton, AWETabbarConcernBubbleView, AWETabbarFriendLiveView, AWETabbarGeneralButton, AWETabbarLiveGuideBubbleManager, AWETabbarMessageBubbleView, AWETeenModeRestrictionViewController, AWEUINotificationBarView, AWEUserHomeViewController, AWEUserModel, NSArray, NSMutableArray, NSString, UIView, UIViewController;
@protocol AWEMNotificationViewControllerProtocal, AWETabbarInnerView;

@interface AWETabbarControllerConfig : NSObject <UITabBarControllerDelegate, AWEUserMessage, HTSAccountMessage, UINavigationControllerDelegate, UIGestureRecognizerDelegate, AWEPublishTaskMessage, AWEDigitalWellbeingMessage>
{
    _Bool _isFriendYellowDotShowing;
    _Bool _liveTabTagHasShowed;
    _Bool _isShowingConcernBubble;
    _Bool _messageBubbleIsShowing;
    _Bool _shouldShowLiveGuideBubble;
    _Bool _isFollowTabLiveShowing;
    _Bool _isFollowTabAvatarShowing;
    _Bool _isFollowTabPointShowing;
    _Bool _isFollowTabCountShowing;
    _Bool _canShowBubble;
    _Bool _canShowMessageBubble;
    _Bool _shouldShowNotificationOpenGuide;
    _Bool _shouldShowBubbleAfterSplash;
    _Bool _shouldShowConcernBubbleAfterSplash;
    _Bool _hasShownFeedDot;
    _Bool _isShowingFeedNumber;
    _Bool _hasShownConcernBubble;
    _Bool _isFirstUpdateMessageTabUnreadStatus;
    AWEFeedRootViewController *_feedController;
    UIViewController *_discoverController;
    UIViewController *_concernController;
    AWEFriendTabViewController *_friendController;
    AWEFullScreenConcernViewController *_fullScreenConcernController;
    UIViewController<AWEMNotificationViewControllerProtocal> *_messageController;
    AWEUserHomeViewController *_userHomeController;
    UIViewController *_nearbyController;
    unsigned long long _friendTabChildControllerTypeForAvatarHint;
    AWETabBarController *_tabBarController;
    AWETeenModeRestrictionViewController *_teenModeControllerForMessage;
    AWETeenModeRestrictionViewController *_teenModeControllerForFollow;
    AWENewUserRetrievalViewController *_userRetrievalVC;
    AWETabbarGeneralButton *_feedButton;
    AWETabbarGeneralButton *_discoverButton;
    AWETabbarGeneralButton *_concernButton;
    AWETabbarGeneralButton *_friendButton;
    AWETabBarPlusButton *_plusButton;
    AWETabbarGeneralButton *_messageButton;
    AWETabbarGeneralButton *_homepageButton;
    AWETabbarGeneralButton *_nearbyButton;
    AWETabbarMessageBubbleView *_messageBubbleView;
    AWETabbarConcernBubbleView *_concernBubbleView;
    AWETabbarLiveGuideBubbleManager *_liveGuideBubbleManger;
    AWEUINotificationBarView *_notificationBarView;
    NSString *_lastTabbarTypeKey;
    long long _preFollowingRecommendCount;
    NSArray *_concernBubbleUserArray;
    long long _unreadCountOld;
    long long _imMessageUnreadCountKeepWhenOnNotificationTab;
    long long _imLiteMessageUnreadCountKeepWhenOnNotificationTab;
    UIView *_friendYellowDotView;
    AWEUserModel *_currentFriendTabUserModel;
    NSString *_currentFriendTabAwemeID;
    long long _currentFriendTabShowCount;
    AWETabbarFriendLiveView *_liveView;
    UIView *_yellowCountView;
    UIView<AWETabbarInnerView> *_friendTabInnerView;
    NSMutableArray *_firstLevelFollowTabShowArray;
    NSMutableArray *_secondLevelFollowTabShowArray;
    NSMutableArray *_thirdLevelFollowTabShowArray;
    NSMutableArray *_liveShowRecordArray;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *liveShowRecordArray; // @synthesize liveShowRecordArray=_liveShowRecordArray;
@property(retain, nonatomic) NSMutableArray *thirdLevelFollowTabShowArray; // @synthesize thirdLevelFollowTabShowArray=_thirdLevelFollowTabShowArray;
@property(retain, nonatomic) NSMutableArray *secondLevelFollowTabShowArray; // @synthesize secondLevelFollowTabShowArray=_secondLevelFollowTabShowArray;
@property(retain, nonatomic) NSMutableArray *firstLevelFollowTabShowArray; // @synthesize firstLevelFollowTabShowArray=_firstLevelFollowTabShowArray;
@property(retain, nonatomic) UIView<AWETabbarInnerView> *friendTabInnerView; // @synthesize friendTabInnerView=_friendTabInnerView;
@property(retain, nonatomic) UIView *yellowCountView; // @synthesize yellowCountView=_yellowCountView;
@property(retain, nonatomic) AWETabbarFriendLiveView *liveView; // @synthesize liveView=_liveView;
@property(nonatomic) _Bool isFirstUpdateMessageTabUnreadStatus; // @synthesize isFirstUpdateMessageTabUnreadStatus=_isFirstUpdateMessageTabUnreadStatus;
@property(nonatomic) long long currentFriendTabShowCount; // @synthesize currentFriendTabShowCount=_currentFriendTabShowCount;
@property(copy, nonatomic) NSString *currentFriendTabAwemeID; // @synthesize currentFriendTabAwemeID=_currentFriendTabAwemeID;
@property(retain, nonatomic) AWEUserModel *currentFriendTabUserModel; // @synthesize currentFriendTabUserModel=_currentFriendTabUserModel;
@property(retain, nonatomic) UIView *friendYellowDotView; // @synthesize friendYellowDotView=_friendYellowDotView;
@property(nonatomic) long long imLiteMessageUnreadCountKeepWhenOnNotificationTab; // @synthesize imLiteMessageUnreadCountKeepWhenOnNotificationTab=_imLiteMessageUnreadCountKeepWhenOnNotificationTab;
@property(nonatomic) long long imMessageUnreadCountKeepWhenOnNotificationTab; // @synthesize imMessageUnreadCountKeepWhenOnNotificationTab=_imMessageUnreadCountKeepWhenOnNotificationTab;
@property(nonatomic) long long unreadCountOld; // @synthesize unreadCountOld=_unreadCountOld;
@property(retain, nonatomic) NSArray *concernBubbleUserArray; // @synthesize concernBubbleUserArray=_concernBubbleUserArray;
@property(nonatomic) long long preFollowingRecommendCount; // @synthesize preFollowingRecommendCount=_preFollowingRecommendCount;
@property(nonatomic) _Bool hasShownConcernBubble; // @synthesize hasShownConcernBubble=_hasShownConcernBubble;
@property(nonatomic) _Bool isShowingFeedNumber; // @synthesize isShowingFeedNumber=_isShowingFeedNumber;
@property(nonatomic) _Bool hasShownFeedDot; // @synthesize hasShownFeedDot=_hasShownFeedDot;
@property(retain, nonatomic) NSString *lastTabbarTypeKey; // @synthesize lastTabbarTypeKey=_lastTabbarTypeKey;
@property(nonatomic) _Bool shouldShowConcernBubbleAfterSplash; // @synthesize shouldShowConcernBubbleAfterSplash=_shouldShowConcernBubbleAfterSplash;
@property(nonatomic) _Bool shouldShowBubbleAfterSplash; // @synthesize shouldShowBubbleAfterSplash=_shouldShowBubbleAfterSplash;
@property(nonatomic) _Bool shouldShowNotificationOpenGuide; // @synthesize shouldShowNotificationOpenGuide=_shouldShowNotificationOpenGuide;
@property(nonatomic) _Bool canShowMessageBubble; // @synthesize canShowMessageBubble=_canShowMessageBubble;
@property(nonatomic) _Bool canShowBubble; // @synthesize canShowBubble=_canShowBubble;
@property(retain, nonatomic) AWEUINotificationBarView *notificationBarView; // @synthesize notificationBarView=_notificationBarView;
@property(retain, nonatomic) AWETabbarLiveGuideBubbleManager *liveGuideBubbleManger; // @synthesize liveGuideBubbleManger=_liveGuideBubbleManger;
@property(retain, nonatomic) AWETabbarConcernBubbleView *concernBubbleView; // @synthesize concernBubbleView=_concernBubbleView;
@property(retain, nonatomic) AWETabbarMessageBubbleView *messageBubbleView; // @synthesize messageBubbleView=_messageBubbleView;
@property(retain, nonatomic) AWETabbarGeneralButton *nearbyButton; // @synthesize nearbyButton=_nearbyButton;
@property(retain, nonatomic) AWETabbarGeneralButton *homepageButton; // @synthesize homepageButton=_homepageButton;
@property(retain, nonatomic) AWETabbarGeneralButton *messageButton; // @synthesize messageButton=_messageButton;
@property(retain, nonatomic) AWETabBarPlusButton *plusButton; // @synthesize plusButton=_plusButton;
@property(retain, nonatomic) AWETabbarGeneralButton *friendButton; // @synthesize friendButton=_friendButton;
@property(retain, nonatomic) AWETabbarGeneralButton *concernButton; // @synthesize concernButton=_concernButton;
@property(retain, nonatomic) AWETabbarGeneralButton *discoverButton; // @synthesize discoverButton=_discoverButton;
@property(retain, nonatomic) AWETabbarGeneralButton *feedButton; // @synthesize feedButton=_feedButton;
@property(retain, nonatomic) AWENewUserRetrievalViewController *userRetrievalVC; // @synthesize userRetrievalVC=_userRetrievalVC;
@property(retain, nonatomic) AWETeenModeRestrictionViewController *teenModeControllerForFollow; // @synthesize teenModeControllerForFollow=_teenModeControllerForFollow;
@property(retain, nonatomic) AWETeenModeRestrictionViewController *teenModeControllerForMessage; // @synthesize teenModeControllerForMessage=_teenModeControllerForMessage;
@property(retain, nonatomic) AWETabBarController *tabBarController; // @synthesize tabBarController=_tabBarController;
@property(nonatomic) _Bool isFollowTabCountShowing; // @synthesize isFollowTabCountShowing=_isFollowTabCountShowing;
@property(nonatomic) _Bool isFollowTabPointShowing; // @synthesize isFollowTabPointShowing=_isFollowTabPointShowing;
@property(nonatomic) _Bool isFollowTabAvatarShowing; // @synthesize isFollowTabAvatarShowing=_isFollowTabAvatarShowing;
@property(nonatomic) _Bool isFollowTabLiveShowing; // @synthesize isFollowTabLiveShowing=_isFollowTabLiveShowing;
@property(nonatomic) _Bool shouldShowLiveGuideBubble; // @synthesize shouldShowLiveGuideBubble=_shouldShowLiveGuideBubble;
@property(nonatomic) _Bool messageBubbleIsShowing; // @synthesize messageBubbleIsShowing=_messageBubbleIsShowing;
@property(nonatomic) _Bool isShowingConcernBubble; // @synthesize isShowingConcernBubble=_isShowingConcernBubble;
@property(nonatomic) unsigned long long friendTabChildControllerTypeForAvatarHint; // @synthesize friendTabChildControllerTypeForAvatarHint=_friendTabChildControllerTypeForAvatarHint;
@property(nonatomic) _Bool liveTabTagHasShowed; // @synthesize liveTabTagHasShowed=_liveTabTagHasShowed;
@property(nonatomic) _Bool isFriendYellowDotShowing; // @synthesize isFriendYellowDotShowing=_isFriendYellowDotShowing;
@property(retain, nonatomic) UIViewController *nearbyController; // @synthesize nearbyController=_nearbyController;
@property(retain, nonatomic) AWEUserHomeViewController *userHomeController; // @synthesize userHomeController=_userHomeController;
@property(retain, nonatomic) UIViewController<AWEMNotificationViewControllerProtocal> *messageController; // @synthesize messageController=_messageController;
@property(retain, nonatomic) AWEFullScreenConcernViewController *fullScreenConcernController; // @synthesize fullScreenConcernController=_fullScreenConcernController;
@property(retain, nonatomic) AWEFriendTabViewController *friendController; // @synthesize friendController=_friendController;
@property(retain, nonatomic) UIViewController *concernController; // @synthesize concernController=_concernController;
@property(retain, nonatomic) UIViewController *discoverController; // @synthesize discoverController=_discoverController;
@property(retain, nonatomic) AWEFeedRootViewController *feedController; // @synthesize feedController=_feedController;
- (void).cxx_destruct;
- (id)newProfileModelWithCompletion:(CDUnknownBlockType)arg1;
- (id)newMessageModelWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendMainPageToFrontForTab:(unsigned long long)arg1;
- (_Bool)sendLoginPageToFrontForTab:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)replaceViewController:(id)arg1 toTopOfTab:(unsigned long long)arg2;
- (id)profileButtonViewController;
- (id)messageButtonViewController;
- (void)task:(id)arg1 willAppendWithInfo:(id)arg2;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)removeLiveGuideBubbleIfNeeded;
- (void)showLiveGuideBubbleIfNeeded;
- (void)showNotificationBarIfNeeded;
- (_Bool)canShowConcernBubble;
- (void)dismissMessageBubbleIfNeed;
- (void)dismissConcernBubbleView;
- (void)showConcernBubble;
- (void)showConcernBubbleIfNeeded;
- (void)showMessageBubble:(CDUnknownBlockType)arg1;
- (void)showTabbarAnimationOnItem:(unsigned long long)arg1;
- (void)trackFriendTabRemindShowWithNoticeType:(id)arg1 showCount:(id)arg2;
- (void)trackConcernTabRemindIfShow:(_Bool)arg1 noticeType:(id)arg2 showCount:(id)arg3;
- (void)_clearShowingYellowDotAndAvatar;
- (void)didFinishLogout;
- (void)teenModeDidChange:(_Bool)arg1 isLogout:(_Bool)arg2;
- (id)tabbarNormalButtons;
- (void)_startAudioSession;
- (void)_audioSessionMediaServicesWereResetNotification;
- (void)splashViewDisappear:(id)arg1;
- (void)updateProfileTabDot;
- (id)pageReferStringForButtonType:(unsigned long long)arg1;
- (_Bool)isFirstLevelPage;
- (_Bool)isInFriendTab;
- (id)contentViewForInnerView:(id)arg1;
- (void)hideLiveForFriendTab;
- (void)timerToHideLiveForFriendTab;
- (void)showLiveForFriendTab;
- (_Bool)checkUnreadForFriendTabAvailable:(long long)arg1;
- (void)dismissFriendTabAvatar;
- (void)showFriendTabAvatarOnInnerView:(id)arg1 user:(id)arg2 awemeID:(id)arg3;
- (void)hideYellowCountForFriendTab;
- (void)showYellowCountForFriendTab:(long long)arg1;
- (void)hideYellowDotForFriendTab;
- (void)showYellowDotForFriendTab;
- (void)handleUnreadForDisplayTypes:(long long)arg1 user:(id)arg2 unreadCount:(long long)arg3 awemeID:(id)arg4;
- (_Bool)handleUnreadForLevelArray:(id)arg1;
- (void)dismissFriendTabUnreadTips;
- (void)updateUnreadTipForFriendTab;
- (void)updateUnreadCountForConcernTab;
- (void)abTestConfigurationDidChange;
- (void)_addObservers;
- (void)showSeparatorLine:(_Bool)arg1;
- (_Bool)isFriendAvatarShown;
- (void)clearInteractUnreadCount;
- (void)updateUnreadCount;
- (void)updateTabbarItemThemeImage:(id)arg1;
- (void)refreshTabbarStyle;
- (void)languageChanging;
- (void)_setTabBarAppearance:(id)arg1;
- (id)secondTabViewControllerForD;
- (id)nearbyInnerView;
- (id)userHomeInnerView;
- (id)messageInnerView;
- (id)friendInnerView;
- (id)concernInnerView;
- (id)discoverInnerView;
- (id)feedInnerView;
- (id)innerViewWithText:(id)arg1 image:(id)arg2 selectedImage:(id)arg3 transparentImage:(id)arg4 buttonType:(unsigned long long)arg5;
- (id)tabbarTypeKey;
- (void)tabBarBackgroundColorFillAnimation:(_Bool)arg1 animated:(_Bool)arg2;
- (void)tabBarBackgroundColorFillAnimation:(_Bool)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

