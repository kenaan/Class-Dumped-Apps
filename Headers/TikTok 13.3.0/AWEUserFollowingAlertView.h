//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEButton, NSString, UIImageView, UILabel;

@interface AWEUserFollowingAlertView : UIView
{
    UIImageView *_avatarView;
    UILabel *_mainLabel;
    UILabel *_subLabel;
    AWEButton *_actionButton;
    AWEButton *_profilePageNavButton;
    UIView *_containerView;
    NSString *_userID;
    long long _followingStatus;
}

+ (void)presentAlertViewWithUsername:(id)arg1 userID:(id)arg2 avatarImage:(id)arg3 followingStatus:(long long)arg4;
@property(nonatomic) long long followingStatus; // @synthesize followingStatus=_followingStatus;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) AWEButton *profilePageNavButton; // @synthesize profilePageNavButton=_profilePageNavButton;
@property(retain, nonatomic) AWEButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *subLabel; // @synthesize subLabel=_subLabel;
@property(retain, nonatomic) UILabel *mainLabel; // @synthesize mainLabel=_mainLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)naviToProfilePage;
- (void)followingAction;
- (void)handleAction;
- (void)handleClose;
- (void)setupSubviewsUI;

@end

