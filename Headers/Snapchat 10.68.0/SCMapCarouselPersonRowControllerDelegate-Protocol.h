//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCMapCarouselPersonRowController, SCMapPerson, SCMapReplyMessageContent, UIView, UIViewController;
@protocol SCMapReplyScreenshotGenerating;

@protocol SCMapCarouselPersonRowControllerDelegate <NSObject>

@optional
- (id <SCMapReplyScreenshotGenerating>)screenshotGeneratorForPerson:(SCMapPerson *)arg1;
- (UIViewController *)baseViewControllerForFocusingPersonRowController:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidFocus:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRow:(SCMapCarouselPersonRowController *)arg1 wantsToSendMapReplyMessage:(SCMapReplyMessageContent *)arg2;
- (void)personCarouselRowWantsToPresentReplyCamera:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidTapDismissShareLocation:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidTapShareLocation:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidTapExplore:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidTapUpdateStatus:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidLongPressProfile:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidTapProfile:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowWantsToOpenChat:(SCMapCarouselPersonRowController *)arg1;
- (void)personCarouselRowDidTapStory:(SCMapCarouselPersonRowController *)arg1 sourceView:(UIView *)arg2;
@end
