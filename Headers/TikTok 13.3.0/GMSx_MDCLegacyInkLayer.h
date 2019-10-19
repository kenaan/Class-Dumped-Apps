//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import "MDCLegacyInkLayerRippleDelegate-Protocol.h"

@class CAShapeLayer, NSMutableArray, NSString, UIColor;

@interface GMSx_MDCLegacyInkLayer : CALayer <MDCLegacyInkLayerRippleDelegate>
{
    _Bool _bounded;
    _Bool _useCustomInkCenter;
    _Bool _userLinearExpansion;
    double _maxRippleRadius;
    UIColor *_inkColor;
    double _spreadDuration;
    double _evaporateDuration;
    CAShapeLayer *_compositeRipple;
    NSMutableArray *_foregroundRipples;
    NSMutableArray *_backgroundRipples;
    struct CGPoint _customInkCenter;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSMutableArray *backgroundRipples; // @synthesize backgroundRipples=_backgroundRipples;
@property(retain, nonatomic) NSMutableArray *foregroundRipples; // @synthesize foregroundRipples=_foregroundRipples;
@property(retain, nonatomic) CAShapeLayer *compositeRipple; // @synthesize compositeRipple=_compositeRipple;
@property(nonatomic) _Bool userLinearExpansion; // @synthesize userLinearExpansion=_userLinearExpansion;
@property(nonatomic) struct CGPoint customInkCenter; // @synthesize customInkCenter=_customInkCenter;
@property(nonatomic) _Bool useCustomInkCenter; // @synthesize useCustomInkCenter=_useCustomInkCenter;
@property(readonly, nonatomic) double evaporateDuration; // @synthesize evaporateDuration=_evaporateDuration;
@property(readonly, nonatomic) double spreadDuration; // @synthesize spreadDuration=_spreadDuration;
@property(retain, nonatomic) UIColor *inkColor; // @synthesize inkColor=_inkColor;
@property(nonatomic) double maxRippleRadius; // @synthesize maxRippleRadius=_maxRippleRadius;
@property(nonatomic, getter=isBounded) _Bool bounded; // @synthesize bounded=_bounded;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 shapeLayer:(id)arg2 finished:(_Bool)arg3;
- (void)evaporateToPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)evaporateWithCompletion:(CDUnknownBlockType)arg1;
- (void)spreadFromPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetBottomInk:(_Bool)arg1 toPoint:(struct CGPoint)arg2 completion:(CDUnknownBlockType)arg3;
- (void)resetBottomInk:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetAllInk:(_Bool)arg1;
- (void)layoutSublayers;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

