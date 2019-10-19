//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "AWEFeedNearbyCollectionCellProtocol-Protocol.h"

@class AWEAwemeModel, AWEGradientView, AWEMarkView, NSString, UIImageView, UILabel, UIView;

@interface AWEFeedCountryWaterfallCollectionViewCell : UICollectionViewCell <AWEFeedNearbyCollectionCellProtocol>
{
    UIView *_contentContainerView;
    UIImageView *_coverImageView;
    AWEGradientView *_bottomGradientMaskView;
    AWEMarkView *_poiButton;
    AWEMarkView *_poiColorfulButton;
    AWEMarkView *_distanceButton;
    UIImageView *_userImageView;
    UILabel *_userNameLabel;
    UILabel *_descriptionLabel;
    UIImageView *_likeImageView;
    UILabel *_likeNumberLabel;
    AWEGradientView *_topGradientMaskView;
    UIImageView *_photoImageView;
    AWEAwemeModel *_model;
    UIView *_liveTypeTagView;
    UILabel *_liveTypeTagLabel;
}

+ (double)cellHeightForModel:(id)arg1 withWidth:(double)arg2;
@property(retain, nonatomic) UILabel *liveTypeTagLabel; // @synthesize liveTypeTagLabel=_liveTypeTagLabel;
@property(retain, nonatomic) UIView *liveTypeTagView; // @synthesize liveTypeTagView=_liveTypeTagView;
@property(retain, nonatomic) AWEAwemeModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UIImageView *photoImageView; // @synthesize photoImageView=_photoImageView;
@property(retain, nonatomic) AWEGradientView *topGradientMaskView; // @synthesize topGradientMaskView=_topGradientMaskView;
@property(retain, nonatomic) UILabel *likeNumberLabel; // @synthesize likeNumberLabel=_likeNumberLabel;
@property(retain, nonatomic) UIImageView *likeImageView; // @synthesize likeImageView=_likeImageView;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property(retain, nonatomic) UILabel *userNameLabel; // @synthesize userNameLabel=_userNameLabel;
@property(retain, nonatomic) UIImageView *userImageView; // @synthesize userImageView=_userImageView;
@property(retain, nonatomic) AWEMarkView *distanceButton; // @synthesize distanceButton=_distanceButton;
@property(retain, nonatomic) AWEMarkView *poiColorfulButton; // @synthesize poiColorfulButton=_poiColorfulButton;
@property(retain, nonatomic) AWEMarkView *poiButton; // @synthesize poiButton=_poiButton;
@property(retain, nonatomic) AWEGradientView *bottomGradientMaskView; // @synthesize bottomGradientMaskView=_bottomGradientMaskView;
@property(retain, nonatomic) UIImageView *coverImageView; // @synthesize coverImageView=_coverImageView;
@property(retain, nonatomic) UIView *contentContainerView; // @synthesize contentContainerView=_contentContainerView;
- (void).cxx_destruct;
- (void)enterUserDetail:(_Bool)arg1;
- (void)usernameClicked;
- (void)avatarClicked;
- (void)prepareForReuse;
- (void)scrollViewDidScroll:(id)arg1;
- (void)updateWithAweme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

