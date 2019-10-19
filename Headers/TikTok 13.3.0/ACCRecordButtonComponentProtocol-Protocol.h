//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class AWECaptureButtonAnimationView, UIButton;

@protocol ACCRecordButtonComponentProtocol <ACCComponentProtocol>
@property(nonatomic) _Bool isDelayRecord;
@property(nonatomic) long long recordMode;
@property(readonly, nonatomic) unsigned long long mixSubtype;
@property(retain, nonatomic) AWECaptureButtonAnimationView *captureButtonAnimationView;
@property(readonly, nonatomic) UIButton *recordButton;
@property(readonly, nonatomic) UIButton *recordShowTipButton;
- (void)startRecord:(UIButton *)arg1;
- (void)p_pauseRecord:(id)arg1;
- (double)recordButtonBottomOffset;
- (void)fadeShowAnimationView;
@end

