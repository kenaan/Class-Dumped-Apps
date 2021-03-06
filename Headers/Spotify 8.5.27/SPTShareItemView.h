//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, SPTImageBlurView, SPTTheme, UIImage, UIImageView, UILabel;

@interface SPTShareItemView : UIView
{
    NSString *_title;
    NSString *_subtitle;
    long long _itemType;
    UIImage *_image;
    SPTTheme *_theme;
    UIImageView *_imageView;
    SPTImageBlurView *_backgroundBlurView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
}

+ (id)placeholderImageForItemType:(long long)arg1;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) SPTImageBlurView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) SPTTheme *theme; // @synthesize theme=_theme;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) long long itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)setImage:(id)arg1 animated:(_Bool)arg2;
- (void)setupStackViews;
- (void)setupConstraints;
- (void)createBackgroundView;
- (id)initWithFrame:(struct CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 itemType:(long long)arg4 image:(id)arg5 theme:(id)arg6;

@end

