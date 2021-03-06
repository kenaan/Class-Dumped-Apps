//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GLUEStyle-Protocol.h"

@class GLUELabelStyle, NSString, UIColor;

@interface GLUEShuffleBadgeLabelViewStateStyle : NSObject <GLUEStyle>
{
    double _height;
    UIColor *_iconColor;
    UIColor *_iconBackgroundColor;
    UIColor *_strokeColor;
    double _strokeWidth;
    unsigned long long _spacing;
    GLUELabelStyle *_labelStyle;
}

@property(copy, nonatomic) GLUELabelStyle *labelStyle; // @synthesize labelStyle=_labelStyle;
@property(nonatomic) unsigned long long spacing; // @synthesize spacing=_spacing;
@property(nonatomic) double strokeWidth; // @synthesize strokeWidth=_strokeWidth;
@property(copy, nonatomic) UIColor *strokeColor; // @synthesize strokeColor=_strokeColor;
@property(copy, nonatomic) UIColor *iconBackgroundColor; // @synthesize iconBackgroundColor=_iconBackgroundColor;
@property(copy, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) double height; // @synthesize height=_height;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

