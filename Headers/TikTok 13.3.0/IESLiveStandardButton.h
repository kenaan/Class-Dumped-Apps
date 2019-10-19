//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, UIView;

@interface IESLiveStandardButton : UIButton
{
    _Bool _forceLayout;
    unsigned long long _buttonStyle;
    unsigned long long _buttonSize;
    CALayer *_backgroundLayer;
    UIView *_borderView;
    struct UIEdgeInsets _hitRegionInsets;
    struct CGRect _lastBounds;
}

@property(nonatomic) _Bool forceLayout; // @synthesize forceLayout=_forceLayout;
@property(nonatomic) struct CGRect lastBounds; // @synthesize lastBounds=_lastBounds;
@property(retain, nonatomic) UIView *borderView; // @synthesize borderView=_borderView;
@property(nonatomic) __weak CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
@property(nonatomic) struct UIEdgeInsets hitRegionInsets; // @synthesize hitRegionInsets=_hitRegionInsets;
@property(nonatomic) unsigned long long buttonSize; // @synthesize buttonSize=_buttonSize;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void).cxx_destruct;
- (struct CGSize)__sizeForLabel:(id)arg1;
- (struct CGSize)__properSizeWithDefaultSize:(struct CGSize)arg1;
- (void)__setupAppearance;
- (id)__roundRectLayerWithBounds:(struct CGRect)arg1;
- (id)__pureFillLayerWithBounds:(struct CGRect)arg1 usingColor:(id)arg2;
- (id)__gradientFillLayerWithBounds:(struct CGRect)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)intrinsicContentSize;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)updateStyle:(unsigned long long)arg1;
- (id)initWithStyle:(unsigned long long)arg1 forSize:(unsigned long long)arg2;

@end

