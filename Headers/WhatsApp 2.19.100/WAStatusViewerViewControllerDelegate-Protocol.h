//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIPanGestureRecognizer, UIViewController, WAChatSession, WAStatusViewerViewController;

@protocol WAStatusViewerViewControllerDelegate <NSObject>
- (void)statusViewerViewControllerDeletePreviewedMessage:(WAStatusViewerViewController *)arg1;
- (void)statusViewerViewController:(WAStatusViewerViewController *)arg1 muteOrUnmuteChatSession:(WAChatSession *)arg2;
- (void)dismissViewController:(UIViewController *)arg1 withGesture:(UIPanGestureRecognizer *)arg2 completion:(void (^)(void))arg3;
@end
