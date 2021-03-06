//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEInteractionStickerModel, AWEInteractionVoteStickerInfoModel, AWEVoteStickerDisplayOptionView, UILabel;

@interface AWEVoteStickerDisplayView : UIView
{
    UILabel *_titleLabel;
    AWEVoteStickerDisplayOptionView *_topOptionView;
    UIView *_topOptionShadowView;
    AWEVoteStickerDisplayOptionView *_bottomOptionView;
    UIView *_bottomOptionShadowView;
    AWEInteractionVoteStickerInfoModel *_voteInfo;
    AWEInteractionStickerModel *_sticker;
}

+ (void)_setupFont;
+ (struct CGSize)questionSizeWithVoteInfo:(id)arg1;
+ (double)stickerWidth;
+ (double)heigthWithVoteInfo:(id)arg1;
@property(retain, nonatomic) AWEInteractionStickerModel *sticker; // @synthesize sticker=_sticker;
@property(retain, nonatomic) AWEInteractionVoteStickerInfoModel *voteInfo; // @synthesize voteInfo=_voteInfo;
@property(retain, nonatomic) UIView *bottomOptionShadowView; // @synthesize bottomOptionShadowView=_bottomOptionShadowView;
@property(retain, nonatomic) AWEVoteStickerDisplayOptionView *bottomOptionView; // @synthesize bottomOptionView=_bottomOptionView;
@property(retain, nonatomic) UIView *topOptionShadowView; // @synthesize topOptionShadowView=_topOptionShadowView;
@property(retain, nonatomic) AWEVoteStickerDisplayOptionView *topOptionView; // @synthesize topOptionView=_topOptionView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)selectOption:(id)arg1 voteInfo:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configWithVoteInfo:(id)arg1 aweme:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

