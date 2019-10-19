//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEMusNotificationBaseTableViewCell.h"

#import "AWEUserMessage-Protocol.h"

@class AWEMusNotificationModel, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel;
@protocol AWEFollowButtonProtocol;

@interface AWEMusFollowNotificationTableViewCell : AWEMusNotificationBaseTableViewCell <AWEUserMessage>
{
    double _followButtonWidth;
    UIImageView *_avatarView;
    UILabel *_textView;
    UIButton<AWEFollowButtonProtocol> *_followButton;
    NSLayoutConstraint *_followButtonWidthConstraint;
    AWEMusNotificationModel *_model;
}

@property(retain, nonatomic) AWEMusNotificationModel *model; // @synthesize model=_model;
@property(retain, nonatomic) NSLayoutConstraint *followButtonWidthConstraint; // @synthesize followButtonWidthConstraint=_followButtonWidthConstraint;
@property(retain, nonatomic) UIButton<AWEFollowButtonProtocol> *followButton; // @synthesize followButton=_followButton;
@property(retain, nonatomic) UILabel *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
@property(nonatomic) double followButtonWidth; // @synthesize followButtonWidth=_followButtonWidth;
- (void).cxx_destruct;
- (void)p_trackerInnerMessage;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didTapAvatarView;
- (void)didSelectCellAtIndexPath:(id)arg1;
- (void)configCell:(id)arg1 atIndexPath:(id)arg2;
- (void)followButtonPressed:(id)arg1;
- (id)followAttributedStringWithName:(id)arg1 timestamp:(id)arg2;
- (void)refreshFollowBtnUI;
- (void)commonInit;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

