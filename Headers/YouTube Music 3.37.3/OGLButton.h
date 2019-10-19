//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface OGLButton : UIButton
{
    _Bool _highlightEnabled;
    UIColor *_highlightColor;
}

@property(nonatomic, getter=isHighlightEnabled) _Bool highlightEnabled; // @synthesize highlightEnabled=_highlightEnabled;
@property(retain, nonatomic) UIColor *highlightColor; // @synthesize highlightColor=_highlightColor;
- (void).cxx_destruct;
- (void)updateHighlightOnPress;
- (void)setSelected:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)OGLButtonCommonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
