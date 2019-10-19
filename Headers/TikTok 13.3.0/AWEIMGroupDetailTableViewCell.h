//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class AWEIMMessageConversation, AWESettingSwitch, UIImageView, UILabel;

@interface AWEIMGroupDetailTableViewCell : UITableViewCell
{
    CDUnknownBlockType _switchBlock;
    long long _type;
    AWEIMMessageConversation *_conversation;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIImageView *_arrowImageView;
    AWESettingSwitch *_aSwitch;
}

@property(retain, nonatomic) AWESettingSwitch *aSwitch; // @synthesize aSwitch=_aSwitch;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEIMMessageConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) CDUnknownBlockType switchBlock; // @synthesize switchBlock=_switchBlock;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)switchControlDidChanged:(id)arg1;
- (id)titleWithCellType;
- (void)configWithConversation:(id)arg1 type:(long long)arg2;
- (void)setupUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

