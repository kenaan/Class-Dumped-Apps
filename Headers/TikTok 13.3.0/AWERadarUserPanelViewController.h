//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWERadarUserModel, NSString, UIButton, UIImageView, UILabel, UIView;

@interface AWERadarUserPanelViewController : UIViewController <UIGestureRecognizerDelegate, AWEUserMessage>
{
    _Bool _isAnimating;
    _Bool _isShowing;
    NSString *_enterFrom;
    NSString *_referString;
    UIView *_contentMaskView;
    UIView *_contentView;
    UIView *_backgroundView;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UIView *_avatarMaskView;
    UIImageView *_closeView;
    UIButton *_userPageButton;
    UIButton *_followButton;
    AWERadarUserModel *_user;
    struct CGPoint _lastLocation;
}

@property(retain, nonatomic) AWERadarUserModel *user; // @synthesize user=_user;
@property(nonatomic) _Bool isShowing; // @synthesize isShowing=_isShowing;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) struct CGPoint lastLocation; // @synthesize lastLocation=_lastLocation;
@property(retain, nonatomic) UIButton *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UIButton *userPageButton; // @synthesize userPageButton=_userPageButton;
@property(retain, nonatomic) UIImageView *closeView; // @synthesize closeView=_closeView;
@property(retain, nonatomic) UIView *avatarMaskView; // @synthesize avatarMaskView=_avatarMaskView;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *contentMaskView; // @synthesize contentMaskView=_contentMaskView;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)followButtonClicked;
- (void)userPageButtonClick;
- (void)closeButtonClicked;
- (void)contentViewPanned:(id)arg1;
- (void)dismissWithCompletion:(CDUnknownBlockType)arg1;
- (void)showOnViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)refreshUI;
- (void)configureWithModel:(id)arg1;
- (void)setupUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

