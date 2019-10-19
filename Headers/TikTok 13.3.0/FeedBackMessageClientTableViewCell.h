//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "FeedBackMessageCellProtocol-Protocol.h"

@class NSString, UIImageView, UILabel, UITextView, UIView;

@interface FeedBackMessageClientTableViewCell : UITableViewCell <FeedBackMessageCellProtocol>
{
    UIImageView *_backgroundImageView;
    UIImageView *_avatar;
    UITextView *_messageTextView;
    UILabel *_timeLabel;
    UIView *_contentContainerView;
}

+ (id)getURLAttributedDict;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) UITextView *messageTextView; // @synthesize messageTextView=_messageTextView;
@property(retain, nonatomic) UIImageView *avatar; // @synthesize avatar=_avatar;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
- (void).cxx_destruct;
- (void)didClickTextView:(id)arg1;
- (id)getContentURLAttributedString:(id)arg1;
- (id)rangeOfURLInString:(id)arg1;
- (void)refreshWithMessageModel:(id)arg1;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)buildSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

