//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCTransparentParentView.h"

@class SCBatchCaptureActionButton, UIImageView, UIView;
@protocol SCBatchCaptureCameraOverlayViewDelegate;

@interface SCBatchCaptureCameraOverlayView : SCTransparentParentView
{
    SCBatchCaptureActionButton *_captureActionButton;
    id <SCBatchCaptureCameraOverlayViewDelegate> _delegate;
    UIView *_captureFlashView;
    UIImageView *_capturedImageView;
}

@property(retain, nonatomic) UIImageView *capturedImageView; // @synthesize capturedImageView=_capturedImageView;
@property(retain, nonatomic) UIView *captureFlashView; // @synthesize captureFlashView=_captureFlashView;
@property(nonatomic) __weak id <SCBatchCaptureCameraOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCBatchCaptureActionButton *captureActionButton; // @synthesize captureActionButton=_captureActionButton;
- (void).cxx_destruct;
- (_Bool)shouldHandleTouchAtPoint:(struct CGPoint)arg1;
- (void)startScreenShotAnimationWithImage:(id)arg1;
- (void)updateLastSegmentThumbnail:(id)arg1 totalCount:(long long)arg2 animated:(_Bool)arg3;
- (void)flashScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)_captureActionButtonPressed;
- (double)_centerBottomOffset;
- (void)_setupCaptureActionButton;
- (void)_setupCapturedImageView;
- (void)_setupViews;
- (_Bool)isAccessibilityElement;
- (id)accessibilityElements;
- (id)initWithFrame:(struct CGRect)arg1;

@end

