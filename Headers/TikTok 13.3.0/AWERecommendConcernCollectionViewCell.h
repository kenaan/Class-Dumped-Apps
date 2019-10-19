//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEAnimatedButton, AWEConcernRecommendFriendCardView, CAGradientLayer, UIView;

@interface AWERecommendConcernCollectionViewCell : UICollectionViewCell
{
    CDUnknownBlockType _refreshUsersBlock;
    AWEAnimatedButton *_changeRecommendButton;
    AWEConcernRecommendFriendCardView *_recommendACardView;
    UIView *_separateLineView;
    AWEConcernRecommendFriendCardView *_recommendBCardView;
    CAGradientLayer *_gradientLayer;
}

+ (id)identifier;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) AWEConcernRecommendFriendCardView *recommendBCardView; // @synthesize recommendBCardView=_recommendBCardView;
@property(retain, nonatomic) UIView *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) AWEConcernRecommendFriendCardView *recommendACardView; // @synthesize recommendACardView=_recommendACardView;
@property(retain, nonatomic) AWEAnimatedButton *changeRecommendButton; // @synthesize changeRecommendButton=_changeRecommendButton;
@property(copy, nonatomic) CDUnknownBlockType refreshUsersBlock; // @synthesize refreshUsersBlock=_refreshUsersBlock;
- (void).cxx_destruct;
- (void)playAppearAnimationWithRecommendView:(id)arg1;
- (void)playDisappearAnimationWithRecommendView:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)playRefreshAnimationWithRefreshModels:(id)arg1;
- (void)refreshModelsWithoutAnimation:(id)arg1;
- (void)changeRecommend:(id)arg1;
- (void)layoutSubviews;
- (void)setupUI;
- (void)refreshWithModels:(id)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

