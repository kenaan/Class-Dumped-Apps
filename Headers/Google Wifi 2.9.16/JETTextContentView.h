//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOTextContentView.h"

@class UIGestureRecognizer;

@interface JETTextContentView : GOOTextContentView
{
    _Bool _disableDefaultHighlightingBehaviour;
    UIGestureRecognizer *_longPressGestureRecognizer;
}

@property(nonatomic) _Bool disableDefaultHighlightingBehaviour; // @synthesize disableDefaultHighlightingBehaviour=_disableDefaultHighlightingBehaviour;
@property(retain, nonatomic) UIGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
- (void).cxx_destruct;
- (void)userDidLongPress:(id)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateViewWithObject:(id)arg1;
- (id)accessibilityCustomActions;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;

@end

