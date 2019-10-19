//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEVideoPublishMusicSelectTopTabItemData, UIButton, UILabel;

@interface AWEVideoPublishMusicSelectTopTabItemView : UIView
{
    double _titleLabelWidth;
    UILabel *_titleLable;
    UIView *_underLineView;
    CDUnknownBlockType _clickBlock;
    UIButton *_maskButton;
    AWEVideoPublishMusicSelectTopTabItemData *_itemData;
}

@property(retain, nonatomic) AWEVideoPublishMusicSelectTopTabItemData *itemData; // @synthesize itemData=_itemData;
@property(retain, nonatomic) UIButton *maskButton; // @synthesize maskButton=_maskButton;
@property(copy, nonatomic) CDUnknownBlockType clickBlock; // @synthesize clickBlock=_clickBlock;
@property(retain, nonatomic) UIView *underLineView; // @synthesize underLineView=_underLineView;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)buttonClicked:(id)arg1;
- (void)refresh;
- (void)layoutSubviews;
- (void)setupViews;
- (id)initWithItemData:(id)arg1;

@end

