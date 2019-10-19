//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEHollowLabel, UIButton, UIImageView, UILabel;
@protocol AWECommentListHeaderViewDelegate;

@interface AWECommentListHeaderView : UIView
{
    _Bool _isBGColorWhite;
    _Bool _showExtra;
    UILabel *_countLabel;
    UIButton *_closeBtn;
    id <AWECommentListHeaderViewDelegate> _delegate;
    UIView *_extraInfoView;
    UILabel *_extraInfoTitle;
    UILabel *_extraInfoDescription;
    UIImageView *_extraInfoIconImageView;
    UIView *_verticalSeparatorView;
    UIButton *_secondExtraInfoIconButton;
    AWEHollowLabel *_couponLabel;
    long long _extraInfoCount;
}

@property(nonatomic) long long extraInfoCount; // @synthesize extraInfoCount=_extraInfoCount;
@property(nonatomic) _Bool showExtra; // @synthesize showExtra=_showExtra;
@property(retain, nonatomic) AWEHollowLabel *couponLabel; // @synthesize couponLabel=_couponLabel;
@property(retain, nonatomic) UIButton *secondExtraInfoIconButton; // @synthesize secondExtraInfoIconButton=_secondExtraInfoIconButton;
@property(retain, nonatomic) UIView *verticalSeparatorView; // @synthesize verticalSeparatorView=_verticalSeparatorView;
@property(retain, nonatomic) UIImageView *extraInfoIconImageView; // @synthesize extraInfoIconImageView=_extraInfoIconImageView;
@property(retain, nonatomic) UILabel *extraInfoDescription; // @synthesize extraInfoDescription=_extraInfoDescription;
@property(retain, nonatomic) UILabel *extraInfoTitle; // @synthesize extraInfoTitle=_extraInfoTitle;
@property(retain, nonatomic) UIView *extraInfoView; // @synthesize extraInfoView=_extraInfoView;
@property(nonatomic) __weak id <AWECommentListHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isBGColorWhite; // @synthesize isBGColorWhite=_isBGColorWhite;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
- (void).cxx_destruct;
- (void)handleTapOnSecondExtdraInfo;
- (void)tapExtraInfoView;
- (void)configWithExtraInfos:(id)arg1;
- (void)configWithCount:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithShowExtraView:(_Bool)arg1;

@end

