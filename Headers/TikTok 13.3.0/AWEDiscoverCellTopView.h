//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEDiscoverCategoryModel, UIImageView, UILabel;
@protocol AWEDiscoverCellTopViewDelegate;

@interface AWEDiscoverCellTopView : UIView
{
    UIImageView *_avatarView;
    UILabel *_titleLabel;
    UILabel *_tipLabel;
    UILabel *_numberLabel;
    UIView *_numberContainer;
    UIImageView *_arrowView;
    id <AWEDiscoverCellTopViewDelegate> _delegate;
    AWEDiscoverCategoryModel *_model;
}

+ (id)_defaultImage;
@property(retain, nonatomic) AWEDiscoverCategoryModel *model; // @synthesize model=_model;
@property(nonatomic) __weak id <AWEDiscoverCellTopViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *numberContainer; // @synthesize numberContainer=_numberContainer;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *avatarView; // @synthesize avatarView=_avatarView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_setupUI;
- (void)_handleTapped:(id)arg1;
- (void)refreshWithPlaceholderModel:(id)arg1;
- (void)refreshWithModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

