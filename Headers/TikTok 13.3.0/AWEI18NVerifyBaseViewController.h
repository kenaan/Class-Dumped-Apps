//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEI18NVerifyCodeDelegate-Protocol.h"

@class AWEI18NVerifyCodeView, AWEI18NVerifyPasswordView, NSDate, NSDictionary, NSString, NSTimer, UIButton, UIImageView, UILabel;

@interface AWEI18NVerifyBaseViewController : UIViewController <AWEI18NVerifyCodeDelegate>
{
    unsigned long long _type;
    CDUnknownBlockType _verifiedBlock;
    NSDictionary *_twoStepAuthResponse;
    NSString *_verifyTicket;
    UILabel *_titleLabel;
    UILabel *_titleDescriptionLabel;
    UIButton *_sendButton;
    NSDate *_endCountingDate;
    NSTimer *_countingTimer;
    UIImageView *_loadingImageView;
    AWEI18NVerifyCodeView *_verifyView;
    UIImageView *_errorDescriptionImageView;
    UILabel *_errorDescriptionLabel;
    UIImageView *_blockedImageView;
    AWEI18NVerifyPasswordView *_verifyPasswordView;
    UIButton *_confirmButton;
}

@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) AWEI18NVerifyPasswordView *verifyPasswordView; // @synthesize verifyPasswordView=_verifyPasswordView;
@property(retain, nonatomic) UIImageView *blockedImageView; // @synthesize blockedImageView=_blockedImageView;
@property(retain, nonatomic) UILabel *errorDescriptionLabel; // @synthesize errorDescriptionLabel=_errorDescriptionLabel;
@property(retain, nonatomic) UIImageView *errorDescriptionImageView; // @synthesize errorDescriptionImageView=_errorDescriptionImageView;
@property(retain, nonatomic) AWEI18NVerifyCodeView *verifyView; // @synthesize verifyView=_verifyView;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) NSTimer *countingTimer; // @synthesize countingTimer=_countingTimer;
@property(retain, nonatomic) NSDate *endCountingDate; // @synthesize endCountingDate=_endCountingDate;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UILabel *titleDescriptionLabel; // @synthesize titleDescriptionLabel=_titleDescriptionLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, copy, nonatomic) NSString *verifyTicket; // @synthesize verifyTicket=_verifyTicket;
@property(retain, nonatomic) NSDictionary *twoStepAuthResponse; // @synthesize twoStepAuthResponse=_twoStepAuthResponse;
@property(copy, nonatomic) CDUnknownBlockType verifiedBlock; // @synthesize verifiedBlock=_verifiedBlock;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)imageWithUIColor:(id)arg1;
- (void)dismissViewController:(CDUnknownBlockType)arg1;
- (void)backButtonTapped;
- (void)keyboardSizeChanged:(id)arg1;
- (void)verifyCodeViewBeginEditing:(id)arg1;
- (void)didFinishInputVerifyCode:(id)arg1;
- (void)verifyFailWithErrorDescription:(id)arg1;
- (void)startLoading:(_Bool)arg1;
- (void)startCounting:(long long)arg1;
- (void)updateCountingInfo;
- (id)resendString;
- (void)resendCode;
- (void)confirmPassword;
- (_Bool)checkAvailableForConfirmButton;
- (_Bool)checkIfTwoStepAuthDataIsValid:(id)arg1;
- (void)addVerifyPasswordInputView;
- (void)addVerifyInputViewWithCount:(long long)arg1;
- (void)addBlockedViews;
- (void)addVerifyHeaderView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)addNotifications;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

