//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor;

@interface FBSDKLikeBoxBorderView : UIView
{
    double _borderCornerRadius;
    double _borderWidth;
    unsigned long long _caretPosition;
    UIView *_contentView;
    UIColor *_fillColor;
    UIColor *_foregroundColor;
}

@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(nonatomic) unsigned long long caretPosition; // @synthesize caretPosition=_caretPosition;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) double borderCornerRadius; // @synthesize borderCornerRadius=_borderCornerRadius;
- (void).cxx_destruct;
- (void)_initializeContent;
- (struct UIEdgeInsets)_borderInsets;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) struct UIEdgeInsets contentInsets;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

