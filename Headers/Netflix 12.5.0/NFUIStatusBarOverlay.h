//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIWindow.h>

@class NFUILabel, NSLayoutConstraint, NSMutableArray, NSTimer;

@interface NFUIStatusBarOverlay : UIWindow
{
    _Bool _shouldSizeToStatusBar;
    NFUILabel *_statusMessageLabel;
    NFUILabel *_statusTitleLabel;
    NSTimer *_displayTimer;
    NSMutableArray *_messageQueue;
    NSLayoutConstraint *_statusMessageVerticalConstraint;
    double _overlaySafeOffset;
}

@property(nonatomic) double overlaySafeOffset; // @synthesize overlaySafeOffset=_overlaySafeOffset;
@property(retain, nonatomic) NSLayoutConstraint *statusMessageVerticalConstraint; // @synthesize statusMessageVerticalConstraint=_statusMessageVerticalConstraint;
@property(retain, nonatomic) NSMutableArray *messageQueue; // @synthesize messageQueue=_messageQueue;
@property(retain, nonatomic) NSTimer *displayTimer; // @synthesize displayTimer=_displayTimer;
@property(nonatomic) _Bool shouldSizeToStatusBar; // @synthesize shouldSizeToStatusBar=_shouldSizeToStatusBar;
@property(retain, nonatomic) NFUILabel *statusTitleLabel; // @synthesize statusTitleLabel=_statusTitleLabel;
@property(retain, nonatomic) NFUILabel *statusMessageLabel; // @synthesize statusMessageLabel=_statusMessageLabel;
- (void).cxx_destruct;
- (void)dismiss;
- (void)dismissMessage:(id)arg1;
- (void)showFirstMessageInQueueAfterRotation:(_Bool)arg1;
- (void)showFirstMessageInQueue;
- (void)handleOrientationDidChange:(id)arg1;
- (void)handleOrientationWillChange:(id)arg1;
- (void)resetFrames;
- (void)showStatusBarMessage:(id)arg1;
- (void)showMessage:(id)arg1 withDuration:(double)arg2;
- (void)configureDefaultOffset;
- (void)configureLabelContraints;
- (id)init;

@end

