//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class SCCameraViewController, UILongPressGestureRecognizer, UIView;

@protocol SCCameraViewControllerDelegate <NSObject>
- (void)leftCameraBackButtonPressed;

@optional
- (_Bool)isAppInLowPowerMode:(SCCameraViewController *)arg1;
- (UIView *)profileButtonView:(SCCameraViewController *)arg1;
- (void)toggleTimerMode:(_Bool)arg1;
- (void)toggleSearchBarAndBitmojiVisibility:(_Bool)arg1;
- (void)updateHovaTabBarLayout:(_Bool)arg1 useDarkMode:(_Bool)arg2;
- (void)cameraViewController:(SCCameraViewController *)arg1 didPerformCameraLongPressGestureWithProfilePresented:(UILongPressGestureRecognizer *)arg2;
- (void)cameraViewController:(SCCameraViewController *)arg1 didUpdateCameraType:(long long)arg2;
- (UIView *)mainSuperview;
- (void)setNonRecordingUIEnabled:(_Bool)arg1;
- (void)updateHovaTabBarVisibility:(double)arg1;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3 showStatusBar:(_Bool)arg4;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2 duration:(double)arg3;
- (void)toggleButtonVisibility:(_Bool)arg1 animated:(_Bool)arg2;
- (void)didLensesDetected:(_Bool)arg1;
- (void)didEndLongPressing:(_Bool)arg1;
- (void)didBeginLongPressing:(_Bool)arg1;
- (void)didBeginRecording;
@end

