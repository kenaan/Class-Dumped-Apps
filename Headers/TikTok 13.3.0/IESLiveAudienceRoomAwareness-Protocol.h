//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol IESLiveAudienceRoomAwareness <NSObject>
- (void)forbidInteractivePopGestureRecognizerFor:(UIViewController *)arg1;
- (void)setStatusBarStyleFor:(UIViewController *)arg1 style:(long long)arg2;
- (void)hideNavigationBarFor:(UIViewController *)arg1;
- (void)enableFullscreenPopTransitionFor:(UIViewController *)arg1 panBegin:(void (^)(void))arg2 restoreBlock:(void (^)(void))arg3 endBlock:(void (^)(void))arg4;
- (void)enableFullscreenPopTransitionFor:(UIViewController *)arg1;
- (void)disableFullscreenPopTransitionFor:(UIViewController *)arg1;
- (void)audienceRoomAwareness:(UIViewController *)arg1;
@end

