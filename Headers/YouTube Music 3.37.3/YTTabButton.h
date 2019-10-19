//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTQTMButton.h"

@class NSMutableSet, NSString, UIColor, UIView;

@interface YTTabButton : YTQTMButton
{
    NSString *_annotation;
    UIView *_statusIndicatorView;
    NSMutableSet *_controlStatesWithTitle;
    struct CGSize _previousSize;
    _Bool _statusIndicatorVisible;
    _Bool _truncatesAnnotationAndAdjustsFontSizeToFitWidth;
    NSString *_title;
    UIColor *_statusIndicatorColor;
}

@property(nonatomic) _Bool truncatesAnnotationAndAdjustsFontSizeToFitWidth; // @synthesize truncatesAnnotationAndAdjustsFontSizeToFitWidth=_truncatesAnnotationAndAdjustsFontSizeToFitWidth;
@property(nonatomic) _Bool statusIndicatorVisible; // @synthesize statusIndicatorVisible=_statusIndicatorVisible;
@property(copy, nonatomic) UIColor *statusIndicatorColor; // @synthesize statusIndicatorColor=_statusIndicatorColor;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)titleStringForState:(unsigned long long)arg1 appendAnnotation:(_Bool)arg2;
- (void)updateStatusIndicatorView;
- (void)updateTitles;
- (unsigned long long)accessibilityTraits;
- (void)layoutSubviews;
- (void)setTitleColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitle:(id)arg1 annotation:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
