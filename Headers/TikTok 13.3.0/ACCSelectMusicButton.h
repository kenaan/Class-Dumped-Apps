//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ACCScrollStringButtonProtocol-Protocol.h"

@class AWEAnimatedButton, AWEScrollStringLabel, NSString, UILabel;

@interface ACCSelectMusicButton : UIView <ACCScrollStringButtonProtocol>
{
    _Bool _shouldAnimate;
    _Bool _awe_enabled;
    double _buttonWidth;
    NSString *_title;
    AWEAnimatedButton *_bottomSelectMusicButton;
    AWEScrollStringLabel *_bottomSelectMusicLabel;
    UILabel *_defaultBottomSelectMusicLabel;
}

@property(retain, nonatomic) UILabel *defaultBottomSelectMusicLabel; // @synthesize defaultBottomSelectMusicLabel=_defaultBottomSelectMusicLabel;
@property(retain, nonatomic) AWEScrollStringLabel *bottomSelectMusicLabel; // @synthesize bottomSelectMusicLabel=_bottomSelectMusicLabel;
@property(retain, nonatomic) AWEAnimatedButton *bottomSelectMusicButton; // @synthesize bottomSelectMusicButton=_bottomSelectMusicButton;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool awe_enabled; // @synthesize awe_enabled=_awe_enabled;
@property(nonatomic) double buttonWidth; // @synthesize buttonWidth=_buttonWidth;
@property(nonatomic) _Bool shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (double)buttonHeight;
- (void)setUserInteractionEnabled:(_Bool)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)showLabelShadow;
- (void)stopAnimation;
- (void)startAnimation;
- (void)configWithImage:(id)arg1 title:(id)arg2 hasMusic:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

