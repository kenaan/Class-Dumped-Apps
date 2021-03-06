//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSURL, UIImage;

@protocol AWEHeaderViewActionDelegate <NSObject>
- (void)updateHeaderHeight;
- (void)hideRecommendViewAfterUnfollow;
- (void)showRecommendViewAfterFollow;
- (void)updateNavigationSlidingButtonView:(long long)arg1;
- (void)constructTranspondProfileCoverArray;
- (void)updateCompletionInfoIfNeed:(UIImage *)arg1 avatarURL:(NSURL *)arg2;
- (void)updatedTranslationClicked;
- (void)recommendBtnClicked;
- (void)changeSlidingTabWithLocation:(struct CGPoint)arg1;

@optional
- (void)topVideoDidFinishedLeaveFullScreen;
- (void)topVideoLeaveFullScreenWithAnimation:(_Bool)arg1;
- (void)topVideoWillLeaveFullScreen;
- (void)topVideoDidFinishedEnterFullScreen;
- (void)topVideoEnterFullScreenWithAnimation:(_Bool)arg1 fullScreenTopOffsetY:(double)arg2;
- (void)topVideoWillEnterFullScreen;
- (void)scrollOffsetYLessThanTopVideoEntryOffsetY;
- (void)updateNavBtnAlpha:(double)arg1;
@end

