//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel, UIView;

@interface AWEVisionSearchResultVideoCell : UICollectionViewCell
{
    UIImageView *_coverImageView;
    UILabel *_titleLabel;
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
    UIView *_likeContainerView;
    UIImageView *_likeImageView;
    UILabel *_likeNumberLabel;
}

+ (double)ratioWithAwemeModel:(id)arg1;
+ (struct CGSize)cellSizeForAwemeModel:(id)arg1 cellWidth:(double)arg2;
@property(retain, nonatomic) UILabel *likeNumberLabel; // @synthesize likeNumberLabel=_likeNumberLabel;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) UIView *likeContainerView; // @synthesize likeContainerView=_likeContainerView;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *avatarImageView; // @synthesize avatarImageView=_avatarImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
- (void).cxx_destruct;
- (void)setUserNameLabelText:(id)arg1;
- (void)setTitleLabelText:(id)arg1;
- (void)configWithAwemeModel:(id)arg1;
- (void)prepareForReuse;
- (void)updateLayout;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

