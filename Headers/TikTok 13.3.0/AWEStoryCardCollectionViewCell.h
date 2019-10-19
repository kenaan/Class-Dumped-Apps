//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEOneDayUserStoryModel, CAGradientLayer, UIImageView, UILabel, UIView;
@protocol AWEFeedLiveMarkViewProtocol;

@interface AWEStoryCardCollectionViewCell : UICollectionViewCell
{
    _Bool _canPrefetchCoverImage;
    _Bool _viewControllerDisappeared;
    UIImageView *_coverImageView;
    UIImageView *_avatarImageView;
    UIView *_coverView;
    UIView *_maskCoverView;
    UIView *_hasReadMaskCoverView;
    UILabel *_descLabel;
    UIImageView *_relationImageView;
    UIImageView *_relationImageBackView;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    UILabel *_liveLabel;
    CAGradientLayer *_colorLayer;
    AWEOneDayUserStoryModel *_model;
}

+ (struct CGSize)cellSize;
+ (id)reuseIdentifier;
@property(retain, nonatomic) AWEOneDayUserStoryModel *model; // @synthesize model=_model;
@property(retain, nonatomic) CAGradientLayer *colorLayer; // @synthesize colorLayer=_colorLayer;
@property(retain, nonatomic) UILabel *liveLabel; // @synthesize liveLabel=_liveLabel;
@property(retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView; // @synthesize liveMarkView=_liveMarkView;
@property(retain, nonatomic) UIImageView *relationImageBackView; // @synthesize relationImageBackView=_relationImageBackView;
@property(retain, nonatomic) UIImageView *relationImageView; // @synthesize relationImageView=_relationImageView;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UIView *hasReadMaskCoverView; // @synthesize hasReadMaskCoverView=_hasReadMaskCoverView;
@property(retain, nonatomic) UIView *maskCoverView; // @synthesize maskCoverView=_maskCoverView;
@property(nonatomic) _Bool viewControllerDisappeared; // @synthesize viewControllerDisappeared=_viewControllerDisappeared;
@property(nonatomic) _Bool canPrefetchCoverImage; // @synthesize canPrefetchCoverImage=_canPrefetchCoverImage;
@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (_Bool)followTopLiveBreath;
- (void)dismissLoadingAnimation;
- (void)showLoadingAnimation:(_Bool)arg1;
- (void)showTapAnimation;
- (void)showUploadCoverAnimation;
- (void)showCoverMaskView;
- (void)updateState:(unsigned long long)arg1;
- (void)configureWithModel:(id)arg1;
- (void)showUploadingCover;
- (void)configureCoverImageWithModel:(id)arg1;
- (void)configureCoverImage:(id)arg1 placeholderImage:(id)arg2;
- (void)configureUI;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

