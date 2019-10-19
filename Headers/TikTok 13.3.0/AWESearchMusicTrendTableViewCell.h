//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWESearchTrendBaseTableViewCell.h"

@class UIButton, UIImageView, UILabel, UIView;

@interface AWESearchMusicTrendTableViewCell : AWESearchTrendBaseTableViewCell
{
    CDUnknownBlockType _playButtonTapBlock;
    UIImageView *_indexChangeImageView;
    UIImageView *_tagImageView;
    UIImageView *_coverImageView;
    UIImageView *_hotCountIconView;
    UIButton *_playButton;
    UILabel *_nameLabel;
    UILabel *_authorLabel;
    UILabel *_useCountLabel;
    UIView *_maskCoverView;
    UIView *_shadowCoverView;
    UIView *_maskContentView;
    UIView *_maskAuthorView;
    unsigned long long _playerStatus;
}

+ (double)cellHeight;
@property(nonatomic) unsigned long long playerStatus; // @synthesize playerStatus=_playerStatus;
@property(retain, nonatomic) UIView *maskAuthorView; // @synthesize maskAuthorView=_maskAuthorView;
@property(retain, nonatomic) UIView *maskContentView; // @synthesize maskContentView=_maskContentView;
@property(retain, nonatomic) UIView *shadowCoverView; // @synthesize shadowCoverView=_shadowCoverView;
@property(retain, nonatomic) UIView *maskCoverView; // @synthesize maskCoverView=_maskCoverView;
@property(retain, nonatomic) UILabel *useCountLabel; // @synthesize useCountLabel=_useCountLabel;
@property(retain, nonatomic) UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
@property(retain, nonatomic) UIImageView *hotCountIconView; // @synthesize hotCountIconView=_hotCountIconView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIImageView *tagImageView; // @synthesize tagImageView=_tagImageView;
@property(retain, nonatomic) UIImageView *indexChangeImageView; // @synthesize indexChangeImageView=_indexChangeImageView;
@property(copy, nonatomic) CDUnknownBlockType playButtonTapBlock; // @synthesize playButtonTapBlock=_playButtonTapBlock;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)hideMaskView;
- (void)showMaskView;
- (void)configureMaskView;
- (void)p_stopAnimation;
- (void)p_startAnimation;
- (void)configWithPlayerStatus:(unsigned long long)arg1;
- (void)playButtonTapped;
- (void)prepareForReuse;
- (void)configureWithModel:(id)arg1;
- (void)configureUI;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

