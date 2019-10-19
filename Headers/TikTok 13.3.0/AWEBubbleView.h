//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEBubbleAnchor-Protocol.h"

@class CAShapeLayer, NSString, UIBezierPath, UIImageView;

@interface AWEBubbleView : UIView <AWEBubbleAnchor>
{
    _Bool _isDarkBackGround;
    _Bool _isNewStyleForDT;
    UIImageView *_bodyImageView;
    UIImageView *_cornerImageView;
    UIView *_customView;
    double _adjustedBodyOffset;
    CDUnknownBlockType _adjustFrameBlock;
    double _arrowOffset;
    unsigned long long _direction;
    UIBezierPath *_path;
    CAShapeLayer *_stroke;
    struct CGPoint _anchorAdjustment;
}

@property(retain, nonatomic) CAShapeLayer *stroke; // @synthesize stroke=_stroke;
@property(retain, nonatomic) UIBezierPath *path; // @synthesize path=_path;
@property(nonatomic) _Bool isNewStyleForDT; // @synthesize isNewStyleForDT=_isNewStyleForDT;
@property(nonatomic) _Bool isDarkBackGround; // @synthesize isDarkBackGround=_isDarkBackGround;
@property(nonatomic) unsigned long long direction; // @synthesize direction=_direction;
@property(nonatomic) double arrowOffset; // @synthesize arrowOffset=_arrowOffset;
@property(nonatomic) struct CGPoint anchorAdjustment; // @synthesize anchorAdjustment=_anchorAdjustment;
@property(copy, nonatomic) CDUnknownBlockType adjustFrameBlock; // @synthesize adjustFrameBlock=_adjustFrameBlock;
@property(nonatomic) double adjustedBodyOffset; // @synthesize adjustedBodyOffset=_adjustedBodyOffset;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
@property(retain, nonatomic) UIImageView *cornerImageView; // @synthesize cornerImageView=_cornerImageView;
@property(retain, nonatomic) UIImageView *bodyImageView; // @synthesize bodyImageView=_bodyImageView;
- (void).cxx_destruct;
- (double)bubbleAnimationAnchorOffset;
- (void)drawStrokeIfNeeded;
- (struct CGPoint)anchorPositionRelatedToLeftTop;
- (struct CGSize)intrinsicContentSizeWithCustomViewContentSize:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setupUI;
- (id)initWithDirection:(unsigned long long)arg1 customView:(id)arg2 anchorAdjustment:(struct CGPoint)arg3 isDarkBackGround:(_Bool)arg4;
- (id)initWithDirection:(unsigned long long)arg1 anchorAdjustment:(struct CGPoint)arg2 isDarkBackGround:(_Bool)arg3;
- (id)initWithDirection:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

