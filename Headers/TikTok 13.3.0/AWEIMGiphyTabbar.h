//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton;
@protocol AWEIMGiphyTabbarDelegate;

@interface AWEIMGiphyTabbar : UIView
{
    unsigned long long _selectionType;
    id <AWEIMGiphyTabbarDelegate> _delegate;
    UIButton *_buttonEmoticon;
    UIButton *_buttonGiphy;
    UIView *_topHorizontalSeparator;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UIView *topHorizontalSeparator; // @synthesize topHorizontalSeparator=_topHorizontalSeparator;
@property(retain, nonatomic) UIButton *buttonGiphy; // @synthesize buttonGiphy=_buttonGiphy;
@property(retain, nonatomic) UIButton *buttonEmoticon; // @synthesize buttonEmoticon=_buttonEmoticon;
@property(nonatomic) __weak id <AWEIMGiphyTabbarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long selectionType; // @synthesize selectionType=_selectionType;
- (void).cxx_destruct;
- (void)giphyButtonPressed:(id)arg1;
- (void)emoticonButtonPressed:(id)arg1;
- (void)layoutSubviews;
- (void)reloadButtonTitleFont:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 selectionType:(unsigned long long)arg2;

@end

