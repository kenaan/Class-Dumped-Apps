//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class CAShapeLayer, UILabel, UIView;

@interface AWEASCommonBindMusicSectionHeaderView : UITableViewHeaderFooterView
{
    UIView *_topLineView;
    CAShapeLayer *_baseLayer;
    UILabel *_titleLabel;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
}

+ (id)identifier;
+ (double)recommendHeight;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) CAShapeLayer *baseLayer; // @synthesize baseLayer=_baseLayer;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithTitle:(id)arg1 leftContent:(id)arg2 rightContent:(id)arg3 cellWidth:(double)arg4;
- (id)initWithReuseIdentifier:(id)arg1;

@end

