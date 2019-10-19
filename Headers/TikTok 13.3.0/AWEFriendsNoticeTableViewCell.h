//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWENotificationModel, AWEUIListCellActionButton, UIImageView, UILabel, UIView;

@interface AWEFriendsNoticeTableViewCell : UITableViewCell
{
    CDUnknownBlockType _nameLabelClick;
    UIView *_unreadBackgroundView;
    UIImageView *_avatarView;
    UIImageView *_verificationIcon;
    UILabel *_nameLabel;
    UILabel *_contentLabel;
    UILabel *_timeLabel;
    UIView *_dotView;
    AWEUIListCellActionButton *_actionButton;
    AWENotificationModel *_model;
}

+ (id)_defaultImage;
+ (id)identifier;
@property(retain, nonatomic) AWENotificationModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AWEUIListCellActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *verificationIcon; // @synthesize verificationIcon=_verificationIcon;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIView *unreadBackgroundView; // @synthesize unreadBackgroundView=_unreadBackgroundView;
@property(copy, nonatomic) CDUnknownBlockType nameLabelClick; // @synthesize nameLabelClick=_nameLabelClick;
- (void).cxx_destruct;
- (void)_setupUI;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)_refreshFollowBtnUI;
- (void)_setIsUnreadView:(_Bool)arg1;
- (void)_actionBtnClicked;
- (void)tapNameLabel;
- (void)resetUnreadView;
- (void)configWithModel:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

