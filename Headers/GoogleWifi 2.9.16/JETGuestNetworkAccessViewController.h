//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GOONavigationCustomization-Protocol.h"

@class GOONavigationStyle, JETAccessPointGroup, JETGuestNetworkAccessSharedDeviceViewController, JETTappableExpandedHeaderBackground, MDCFlatButton, NSArray, NSSet, NSString, UIImageView, UILabel, UIScrollView, UIView;
@protocol JETUserStateProtocol;

@interface JETGuestNetworkAccessViewController : UIViewController <GOONavigationCustomization>
{
    JETGuestNetworkAccessSharedDeviceViewController *_sharedDeviceViewController;
    id <JETUserStateProtocol> _userState;
    JETAccessPointGroup *_group;
    JETTappableExpandedHeaderBackground *_headerBackgroundView;
    MDCFlatButton *_revealButton;
    MDCFlatButton *_turnOnButton;
    MDCFlatButton *_sharePasswordButton;
    UILabel *_aboutTitleLabel;
    UILabel *_aboutDescriptionLabel;
    UIView *_dividerView;
    UILabel *_sharingLabel;
    UILabel *_internetLabel;
    UIImageView *_internetImageView;
    NSArray *_disabledConstraints;
    NSArray *_enabledConstraints;
}

@property(retain, nonatomic) NSArray *enabledConstraints; // @synthesize enabledConstraints=_enabledConstraints;
@property(retain, nonatomic) NSArray *disabledConstraints; // @synthesize disabledConstraints=_disabledConstraints;
@property(retain, nonatomic) UIImageView *internetImageView; // @synthesize internetImageView=_internetImageView;
@property(retain, nonatomic) UILabel *internetLabel; // @synthesize internetLabel=_internetLabel;
@property(retain, nonatomic) UILabel *sharingLabel; // @synthesize sharingLabel=_sharingLabel;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UILabel *aboutDescriptionLabel; // @synthesize aboutDescriptionLabel=_aboutDescriptionLabel;
@property(retain, nonatomic) UILabel *aboutTitleLabel; // @synthesize aboutTitleLabel=_aboutTitleLabel;
@property(retain, nonatomic) MDCFlatButton *sharePasswordButton; // @synthesize sharePasswordButton=_sharePasswordButton;
@property(retain, nonatomic) MDCFlatButton *turnOnButton; // @synthesize turnOnButton=_turnOnButton;
@property(retain, nonatomic) MDCFlatButton *revealButton; // @synthesize revealButton=_revealButton;
@property(retain, nonatomic) JETTappableExpandedHeaderBackground *headerBackgroundView; // @synthesize headerBackgroundView=_headerBackgroundView;
@property(retain, nonatomic) JETAccessPointGroup *group; // @synthesize group=_group;
@property(retain, nonatomic) id <JETUserStateProtocol> userState; // @synthesize userState=_userState;
@property(retain, nonatomic) JETGuestNetworkAccessSharedDeviceViewController *sharedDeviceViewController; // @synthesize sharedDeviceViewController=_sharedDeviceViewController;
- (void).cxx_destruct;
- (_Bool)cloudEnabled;
- (void)headerButtonTapped;
- (void)turnOnButtonTapped;
- (void)shareButtonTapped;
- (void)viewOnDotHereButtonTapped;
- (void)revealButtonTapped;
- (void)editButtonTapped;
- (void)applyModelForEnabledNetwork;
- (void)applyModelForDisabledNetwork;
- (void)setupConstraints;
- (void)createSubviews;
- (void)createNavigationItems;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) UIView *navigationCustomHeaderBackgroundView;
@property(readonly, nonatomic) GOONavigationStyle *navigationStyle;
- (id)constructHeaderBackgroundView;
- (id)initWithUserState:(id)arg1 group:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) UIView *navigationBannerView;
@property(readonly, nonatomic) struct UIEdgeInsets navigationPrimaryScrollInsets;
@property(readonly, nonatomic) UIScrollView *navigationPrimaryScrollView;
@property(readonly, nonatomic) NSSet *navigationSecondaryScrollViews;
@property(readonly) Class superclass;

@end
