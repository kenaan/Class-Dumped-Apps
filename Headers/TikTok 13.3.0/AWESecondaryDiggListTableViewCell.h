//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMTNotificationBaseTableViewCell.h"

#import "AWEUserMessage-Protocol.h"

@class AWEUserModel, NSString, UIButton, UIImageView, UILabel;
@protocol AWEFollowButtonProtocol;

@interface AWESecondaryDiggListTableViewCell : AWEMTNotificationBaseTableViewCell <AWEUserMessage>
{
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_idLabel;
    UIButton<AWEFollowButtonProtocol> *_followButton;
    AWEUserModel *_userModel;
}

@property(retain, nonatomic) AWEUserModel *userModel; // @synthesize userModel=_userModel;
@property(retain, nonatomic) UIButton<AWEFollowButtonProtocol> *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *idLabel; // @synthesize idLabel=_idLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)_trackClickCell;
- (double)calculateButtonWidth;
- (void)didTapUserView:(id)arg1;
- (void)followButtonPressed:(id)arg1;
- (void)refreshFollowBtnUI;
- (void)configWithUser:(id)arg1;
- (void)commonInit;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

