//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, YTWatchTransition;

@protocol YTWatchViewControllerProtocol <NSObject>
@property(retain, nonatomic) YTWatchTransition *watchTransition;
- (_Bool)isPlaybackBackgroundable;
- (_Bool)isWatchFullScreen;
- (_Bool)isWatchExpanded;
- (_Bool)isWatchHidden;
- (_Bool)isCollapsed;
- (UIViewController *)focusedViewController;
- (_Bool)shouldReloadVideoForWatchTransition:(YTWatchTransition *)arg1;
- (void)handleRemoteControlEvent:(long long)arg1;
- (void)reload;
- (void)prepareForWatchTransition:(YTWatchTransition *)arg1;
- (void)clearNavEndpoint;
@end

