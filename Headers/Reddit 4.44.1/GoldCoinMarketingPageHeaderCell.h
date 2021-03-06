//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <RedditUI/BaseTableViewCell.h>

@class UIButton, UIImageView, UILabel;
@protocol GoldCoinMarketingPageHeaderCellDelegate;

@interface GoldCoinMarketingPageHeaderCell : BaseTableViewCell
{
    id <GoldCoinMarketingPageHeaderCellDelegate> _delegate;
    UIImageView *_bannerImageView;
    UIImageView *_logoImageView;
    UILabel *_headerTextLabel;
    UIButton *_learnMoreButton;
}

@property(retain, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property(retain, nonatomic) UILabel *headerTextLabel; // @synthesize headerTextLabel=_headerTextLabel;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIImageView *bannerImageView; // @synthesize bannerImageView=_bannerImageView;
@property(nonatomic) __weak id <GoldCoinMarketingPageHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setupViews;
- (void)learnMoreButtonDidTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

