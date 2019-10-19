//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEFlowAlertBaseView.h"

@class AWEButton, UIButton, UILabel;

@interface AWENoWifiWithoutPausePatternAlertView : AWEFlowAlertBaseView
{
    AWEButton *_closeButton;
    UIButton *_monthlySwitchButton;
    AWEButton *_continuePlayButton;
    AWEButton *_handleButton;
    UILabel *_toastTitleLabel;
    UILabel *_popTitleLabel;
}

@property(retain, nonatomic) UILabel *popTitleLabel; // @synthesize popTitleLabel=_popTitleLabel;
@property(retain, nonatomic) UILabel *toastTitleLabel; // @synthesize toastTitleLabel=_toastTitleLabel;
@property(retain, nonatomic) AWEButton *handleButton; // @synthesize handleButton=_handleButton;
@property(retain, nonatomic) AWEButton *continuePlayButton; // @synthesize continuePlayButton=_continuePlayButton;
@property(retain, nonatomic) UIButton *monthlySwitchButton; // @synthesize monthlySwitchButton=_monthlySwitchButton;
@property(retain, nonatomic) AWEButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
- (void)onAllowButtonClicked:(id)arg1;
- (void)changeButtonStatus:(id)arg1;
- (void)setupUI;

@end

