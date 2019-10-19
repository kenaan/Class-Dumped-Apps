//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UILabel;

@interface AWEVideoPublishFooterViewItemButton : UIControl
{
    _Bool _disableHighlightAnimation;
    UIImageView *_imageView;
    UILabel *_titleLabel;
    CDUnknownBlockType _didTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didTapBlock; // @synthesize didTapBlock=_didTapBlock;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) _Bool disableHighlightAnimation; // @synthesize disableHighlightAnimation=_disableHighlightAnimation;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)p_tapAction;
- (id)initTitle:(id)arg1 imageName:(id)arg2;

@end

