//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESearchTrendBaseTableViewCell.h"

@class UIImageView, UILabel, UIView;

@interface AWESearchStarTrendTableViewCell : AWESearchTrendBaseTableViewCell
{
    UIImageView *_avatarImageView;
    UIView *_maskCoverView;
    UIView *_maskContentView;
    UILabel *_nameLabel;
    UILabel *_countLabel;
    UIImageView *_verifyImageView;
}

+ (id)identifier;
+ (double)cellHeightInSearchMiddle;
+ (double)cellHeight;
@property(retain, nonatomic) UIImageView *verifyImageView; // @synthesize verifyImageView=_verifyImageView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIView *maskContentView; // @synthesize maskContentView=_maskContentView;
@property(retain, nonatomic) UIView *maskCoverView; // @synthesize maskCoverView=_maskCoverView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
- (void).cxx_destruct;
- (void)hideMaskView;
- (void)showMaskView;
- (void)prepareForReuse;
- (void)configureModel:(id)arg1 inSearchMiddle:(_Bool)arg2;
- (void)configureModel:(id)arg1;
- (void)configreIndexPath:(id)arg1 type:(unsigned long long)arg2;
- (void)configureMaskView;
- (void)configureUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

