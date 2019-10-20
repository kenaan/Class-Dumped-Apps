//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSOverlayLayer.h"

@class UIColor;

@interface GMSPolygonLayer : GMSOverlayLayer
{
    double _strokeWidth;
    UIColor *_strokeColor;
    UIColor *_fillColor;
}

+ (void)initialize;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
- (void).cxx_destruct;
- (void)executeAnimation:(id)arg1;
- (id)hintBrokenAnimationKeys;
- (_Bool)shouldAddActionForKey:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqualToLayer:(id)arg1;

@end
