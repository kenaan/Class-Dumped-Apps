//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSTimer, UIButton, UIImageView, UILabel, UIView;

@interface AWEUntrustDeviceThirdPartyCheckViewController : UIViewController
{
    unsigned long long _platform;
    unsigned long long _checkType;
    NSTimer *_timer;
    UILabel *_titleLabel;
    UIView *_subTitleContainer;
    UILabel *_subHint;
    UIImageView *_subIcon;
    UILabel *_subTimeLabel;
    UIButton *_confirmBtn;
    unsigned long long _countDown;
    CDUnknownBlockType _completion;
}

+ (_Bool)isValidPlatform:(unsigned long long)arg1;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property unsigned long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *subTimeLabel; // @synthesize subTimeLabel=_subTimeLabel;
@property(retain, nonatomic) UIImageView *subIcon; // @synthesize subIcon=_subIcon;
@property(retain, nonatomic) UILabel *subHint; // @synthesize subHint=_subHint;
@property(retain, nonatomic) UIView *subTitleContainer; // @synthesize subTitleContainer=_subTitleContainer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned long long checkType; // @synthesize checkType=_checkType;
@property(nonatomic) unsigned long long platform; // @synthesize platform=_platform;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (void)confirmBtnClicked;
- (void)backButtonTapped:(id)arg1;
- (id)formatStringForSubTimeLabel;
- (id)stringForSubHint;
- (id)imageForPlatform:(unsigned long long)arg1;
- (void)updateTimeLabelWithSecond:(unsigned long long)arg1;
- (void)stopAndResetTimer;
- (void)startTimer;
- (void)setupSubView;
- (void)viewDidLoad;
- (id)initWithPlatform:(unsigned long long)arg1 forType:(unsigned long long)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)dealloc;

@end

