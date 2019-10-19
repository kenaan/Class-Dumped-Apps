//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface AWEScrollStringLabel : UIView
{
    _Bool _shouldScroll;
    _Bool _useFixedLyricScollMargin;
    UILabel *_leftLabel;
    UILabel *_rightLabel;
    double _labelWidth;
    double _labelHeight;
    UIView *_loopContainerView;
    unsigned long long _displayType;
    double _animationWidth;
    double _orignalWidth;
    struct CGSize _labelActualSize;
}

@property(nonatomic) _Bool useFixedLyricScollMargin; // @synthesize useFixedLyricScollMargin=_useFixedLyricScollMargin;
@property(nonatomic) double orignalWidth; // @synthesize orignalWidth=_orignalWidth;
@property(nonatomic) double animationWidth; // @synthesize animationWidth=_animationWidth;
@property(nonatomic) unsigned long long displayType; // @synthesize displayType=_displayType;
@property(nonatomic) _Bool shouldScroll; // @synthesize shouldScroll=_shouldScroll;
@property(nonatomic) struct CGSize labelActualSize; // @synthesize labelActualSize=_labelActualSize;
@property(retain, nonatomic) UIView *loopContainerView; // @synthesize loopContainerView=_loopContainerView;
@property(nonatomic) double labelHeight; // @synthesize labelHeight=_labelHeight;
@property(nonatomic) double labelWidth; // @synthesize labelWidth=_labelWidth;
@property(retain, nonatomic) UILabel *rightLabel; // @synthesize rightLabel=_rightLabel;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
- (void).cxx_destruct;
- (void)updateTextColor:(id)arg1;
- (void)stopAnimation;
- (void)startAnimation;
- (void)showShadowWithOffset:(struct CGSize)arg1 color:(id)arg2 radius:(double)arg3;
- (id)currentLabelText;
- (void)configForMVWithTitle:(id)arg1 titleColor:(id)arg2 fontSize:(double)arg3 isBold:(_Bool)arg4;
- (void)configWithTitleWithTextAlignCenter:(id)arg1 titleColor:(id)arg2 fontSize:(double)arg3 isBold:(_Bool)arg4 contentSize:(struct CGSize)arg5;
- (void)configWithTitle:(id)arg1 titleColor:(id)arg2 fontSize:(double)arg3 isBold:(_Bool)arg4;
- (id)initWithHeight:(double)arg1 type:(unsigned long long)arg2;
- (id)initWithHeight:(double)arg1;

@end

