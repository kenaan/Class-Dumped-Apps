//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIViewController, YTReelCameraFlowCoordinator;

@protocol YTReelCameraFlowCoordinatorDelegate <NSObject>
- (UIViewController *)contentOverlayViewControllerForCoordinator:(YTReelCameraFlowCoordinator *)arg1;
- (UIViewController *)contentViewControllerForCoordinator:(YTReelCameraFlowCoordinator *)arg1;
- (void)setContentOverlayViewController:(UIViewController *)arg1 fromCoordinator:(YTReelCameraFlowCoordinator *)arg2;
- (void)setContentViewController:(UIViewController *)arg1 fromCoordinator:(YTReelCameraFlowCoordinator *)arg2;
@end

