//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWELoginBaseViewControllerProtocal-Protocol.h"
#import "BTDRouterViewControllerProtocol-Protocol.h"
#import "TTTAttributedLabelDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ASAuthorizationAppleIDButton, AWELoginPlatformView, NSArray, NSDictionary, NSString, TTTAttributedLabel, UIButton, UIImageView, UILabel, UIStackView, UITapGestureRecognizer, UIView;

@interface AWENewLoginViewController : UIViewController <TTTAttributedLabelDelegate, UIGestureRecognizerDelegate, AWELoginBaseViewControllerProtocal, BTDRouterViewControllerProtocol>
{
    _Bool _presentAnimated;
    NSDictionary *_trackerInformation;
    UIView *_backgroundView;
    UIButton *_closeButton;
    UILabel *_titleLabel;
    UIButton *_registerButton;
    UIView *_separateViewLeft;
    UIView *_separateViewRight;
    UILabel *_orLabel;
    UIStackView *_thirdPartyStackView;
    NSArray *_thirdPartyButtons;
    AWELoginPlatformView *_platformsView;
    TTTAttributedLabel *_termsLabel;
    UIView *_loginView;
    ASAuthorizationAppleIDButton *_appleIDButton;
    UILabel *_loginLabel;
    UIButton *_FAQButton;
    UIImageView *_campaignPopupImageView;
    UITapGestureRecognizer *_hideLoginViewGesture;
}

@property(retain, nonatomic) UITapGestureRecognizer *hideLoginViewGesture; // @synthesize hideLoginViewGesture=_hideLoginViewGesture;
@property(retain, nonatomic) UIImageView *campaignPopupImageView; // @synthesize campaignPopupImageView=_campaignPopupImageView;
@property(retain, nonatomic) UIButton *FAQButton; // @synthesize FAQButton=_FAQButton;
@property(retain, nonatomic) UILabel *loginLabel; // @synthesize loginLabel=_loginLabel;
@property(retain, nonatomic) ASAuthorizationAppleIDButton *appleIDButton; // @synthesize appleIDButton=_appleIDButton;
@property(retain, nonatomic) UIView *loginView; // @synthesize loginView=_loginView;
@property(retain, nonatomic) TTTAttributedLabel *termsLabel; // @synthesize termsLabel=_termsLabel;
@property(retain, nonatomic) AWELoginPlatformView *platformsView; // @synthesize platformsView=_platformsView;
@property(copy, nonatomic) NSArray *thirdPartyButtons; // @synthesize thirdPartyButtons=_thirdPartyButtons;
@property(retain, nonatomic) UIStackView *thirdPartyStackView; // @synthesize thirdPartyStackView=_thirdPartyStackView;
@property(retain, nonatomic) UILabel *orLabel; // @synthesize orLabel=_orLabel;
@property(retain, nonatomic) UIView *separateViewRight; // @synthesize separateViewRight=_separateViewRight;
@property(retain, nonatomic) UIView *separateViewLeft; // @synthesize separateViewLeft=_separateViewLeft;
@property(retain, nonatomic) UIButton *registerButton; // @synthesize registerButton=_registerButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSDictionary *trackerInformation; // @synthesize trackerInformation=_trackerInformation;
@property(nonatomic) _Bool presentAnimated; // @synthesize presentAnimated=_presentAnimated;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (id)p_platformsFromOrders:(id)arg1;
- (unsigned long long)p_platformsShowCount;
- (id)availablePlatforms;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)thirdPartyLogin:(id)arg1;
- (void)login;
- (void)signUp:(id)arg1;
- (void)faqButtonTapped;
- (void)_sendCancelLoginMessage;
- (void)closeAction;
- (void)hideView;
- (void)showView;
- (void)panContentView:(id)arg1;
- (void)hideLoginView:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)configureConstraints;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

