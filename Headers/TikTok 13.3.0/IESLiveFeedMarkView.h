//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, CAShapeLayer;

@interface IESLiveFeedMarkView : UIView
{
    CAShapeLayer *_markClipLayer;
    CAGradientLayer *_markColorLayer;
    CAShapeLayer *_markClipLayerForAniamtion;
    CAGradientLayer *_markColorLayerForAnimation;
    double _width;
    double _height;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) CAGradientLayer *markColorLayerForAnimation; // @synthesize markColorLayerForAnimation=_markColorLayerForAnimation;
@property(retain, nonatomic) CAShapeLayer *markClipLayerForAniamtion; // @synthesize markClipLayerForAniamtion=_markClipLayerForAniamtion;
@property(retain, nonatomic) CAGradientLayer *markColorLayer; // @synthesize markColorLayer=_markColorLayer;
@property(retain, nonatomic) CAShapeLayer *markClipLayer; // @synthesize markClipLayer=_markClipLayer;
- (void).cxx_destruct;
- (void)_addSlowerAnimationToMarkClipLayer:(float)arg1;
- (void)_addAnimationToMarkClipLayer:(float)arg1;
- (void)setGradientColor:(id)arg1;
- (void)stopBreathingAnimationWithView:(id)arg1;
- (void)startSlowBreathingAnimationWithView:(id)arg1;
- (void)startBreathingAnimationWithView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

