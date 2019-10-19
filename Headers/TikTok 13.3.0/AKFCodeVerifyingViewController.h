//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AKFContentViewController.h"

@class UIImageView, UILabel;

@interface AKFCodeVerifyingViewController : AKFContentViewController
{
    _Bool _isRotating;
    _Bool _isVisible;
    UIImageView *_doneImageView;
    UIImageView *_verifyingImageView;
    UILabel *_transitionBackLabel;
    _Bool _verifying;
}

@property(nonatomic, getter=isVerifying) _Bool verifying; // @synthesize verifying=_verifying;
- (void).cxx_destruct;
- (void)_updateLabels;
- (void)_updateImageViews;
- (void)_endRotating;
- (void)_beginRotating;
- (void)applyTheme:(id)arg1;
- (id)defaultFooterView;
- (id)defaultBodyView;
- (void)addViewConstraints;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (unsigned long long)loginFlowState;
- (id)appEventViewName;
- (id)initWithAppEventsLogger:(id)arg1 loginType:(unsigned long long)arg2;

@end

