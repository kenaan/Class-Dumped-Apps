//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CALayer, CAShapeLayer;

@interface FVRGreenButton : UIButton
{
    _Bool _shouldAddInnerBorder;
    CALayer *_backgroundLayer;
    CALayer *_highlightBackgroundLayer;
    CAShapeLayer *_innerBorder;
}

+ (id)buttonWithType:(long long)arg1;
@property(nonatomic) _Bool shouldAddInnerBorder; // @synthesize shouldAddInnerBorder=_shouldAddInnerBorder;
@property(retain, nonatomic) CAShapeLayer *innerBorder; // @synthesize innerBorder=_innerBorder;
@property(retain, nonatomic) CALayer *highlightBackgroundLayer; // @synthesize highlightBackgroundLayer=_highlightBackgroundLayer;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayer;
- (void).cxx_destruct;
- (void)addDashedBorder;
- (void)drawHighlightBackgroundLayer;
- (void)drawBackgroundLayer;
- (void)drawButton;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithCoder:(id)arg1;
- (void)initGreenButtonUI;

@end
