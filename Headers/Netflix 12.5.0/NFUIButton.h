//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIFont;

@interface NFUIButton : UIButton
{
    _Bool _shouldFlipIconAndText;
    _Bool _hasAttributedTitle;
    UIFont *_originalFont;
    long long _originalAlignment;
}

+ (id)nflx_borderStyledButton;
+ (id)nflx_secondarySmallButton:(id)arg1 withImage:(id)arg2;
@property(nonatomic) _Bool hasAttributedTitle; // @synthesize hasAttributedTitle=_hasAttributedTitle;
@property(nonatomic) long long originalAlignment; // @synthesize originalAlignment=_originalAlignment;
@property(retain, nonatomic) UIFont *originalFont; // @synthesize originalFont=_originalFont;
@property(nonatomic) _Bool shouldFlipIconAndText; // @synthesize shouldFlipIconAndText=_shouldFlipIconAndText;
- (void).cxx_destruct;
- (void)formatAsEpisodeSelectorButtonWithAccessibilityIdentifier:(id)arg1 hasDropDown:(_Bool)arg2;
- (void)formatAsSecondarySmallButton:(id)arg1 withImage:(id)arg2;
- (void)handleNFPreferredLocaleDidChangeNotification:(id)arg1;
- (void)setContentEdgeInsets:(struct UIEdgeInsets)arg1 withImageTextSpacing:(float)arg2;
- (void)setTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setAttributedTitle:(id)arg1 forState:(unsigned long long)arg2;
- (void)setTitleTextAlignment:(long long)arg1;
- (void)setTitleFont:(id)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (void)commmonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

