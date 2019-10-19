//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEMvDetailModel, UIImageView, UILabel;

@interface AWEMvDetailView : UIView
{
    AWEMvDetailModel *_mvDetailModel;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_coverBackgroundView;
}

@property(retain, nonatomic) UIView *coverBackgroundView; // @synthesize coverBackgroundView=_coverBackgroundView;
@property(retain, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) AWEMvDetailModel *mvDetailModel; // @synthesize mvDetailModel=_mvDetailModel;
- (void).cxx_destruct;
- (void)configWithModel:(id)arg1;
- (void)configWithPlaceholder;
- (void)addSubviews;
- (unsigned long long)contentHeight;
- (id)initWithFrame:(struct CGRect)arg1;

@end

