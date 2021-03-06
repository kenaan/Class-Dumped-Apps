//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "AWEUserMessage-Protocol.h"

@class AWEAnimatedButton, AWERadarUserModel, AWEUIListCellActionButton, NSString, UIImageView, UILabel, UIView;

@interface AWERadarUserListTableViewCell : UITableViewCell <AWEUserMessage>
{
    NSString *_enterFrom;
    NSString *_referString;
    CDUnknownBlockType _selectBlock;
    AWEAnimatedButton *_baseView;
    UIImageView *_avatarImageView;
    UILabel *_nameLabel;
    UIView *_buttonContainer;
    AWEUIListCellActionButton *_actionButton;
    AWERadarUserModel *_model;
}

+ (id)reuseIdentifier;
+ (double)sugguestHeight;
@property(retain, nonatomic) AWERadarUserModel *model; // @synthesize model=_model;
@property(retain, nonatomic) AWEUIListCellActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) AWEAnimatedButton *baseView; // @synthesize baseView=_baseView;
@property(copy, nonatomic) CDUnknownBlockType selectBlock; // @synthesize selectBlock=_selectBlock;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)clickCard;
- (void)followBtnClicked:(id)arg1;
- (void)_refreshFollowBtnUI;
- (void)refreshUI;
- (void)configurateWithUser:(id)arg1;
- (void)setupUI;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

