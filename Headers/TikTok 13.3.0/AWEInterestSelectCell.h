//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class AWEGradientView, UIImageView, UILabel, UIView;

@interface AWEInterestSelectCell : UICollectionViewCell
{
    UIImageView *_imageView;
    UIView *_selectMaskView;
    UIImageView *_selectImageView;
    UILabel *_textLabel;
    AWEGradientView *_textBackgroundView;
}

+ (id)reuseID;
@property(retain, nonatomic) AWEGradientView *textBackgroundView; // @synthesize textBackgroundView=_textBackgroundView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *selectImageView; // @synthesize selectImageView=_selectImageView;
@property(retain, nonatomic) UIView *selectMaskView; // @synthesize selectMaskView=_selectMaskView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1;
- (void)customInit;
- (id)initWithFrame:(struct CGRect)arg1;

@end

