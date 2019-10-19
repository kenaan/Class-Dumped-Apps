//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IESLiveUserModel, NSNumber, NSString, UIImage, UIImageView, UILabel;

@interface HTSLiveUserPreviewFansMedalView : UIView
{
    _Bool _isSelected;
    _Bool _shouldShowArrow;
    NSString *_title;
    NSNumber *_level;
    IESLiveUserModel *_anchor;
    UIImage *_medalImage;
    NSString *_imageURL;
    UIImageView *_selectedImageView;
    NSString *_anchorName;
    UILabel *_nameLabel;
    UILabel *_titleLabel;
    UILabel *_levelLabel;
    UIImageView *_medalImageView;
}

@property(retain, nonatomic) UIImageView *medalImageView; // @synthesize medalImageView=_medalImageView;
@property(retain, nonatomic) UILabel *levelLabel; // @synthesize levelLabel=_levelLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) NSString *anchorName; // @synthesize anchorName=_anchorName;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) NSString *imageURL; // @synthesize imageURL=_imageURL;
@property(retain, nonatomic) UIImage *medalImage; // @synthesize medalImage=_medalImage;
@property(retain, nonatomic) IESLiveUserModel *anchor; // @synthesize anchor=_anchor;
@property(retain, nonatomic) NSNumber *level; // @synthesize level=_level;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool shouldShowArrow; // @synthesize shouldShowArrow=_shouldShowArrow;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)loadImage;
- (void)renderUI;
- (id)initWithFrame:(struct CGRect)arg1 medalImageURL:(id)arg2 name:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 medalImage:(id)arg2 name:(id)arg3;

@end

