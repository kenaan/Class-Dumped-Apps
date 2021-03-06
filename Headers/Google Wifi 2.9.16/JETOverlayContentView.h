//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UILabel;

@interface JETOverlayContentView : UIView
{
    _Bool _labelsAtTop;
    _Bool _adjustForFooterBar;
    UIView *_contentView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    unsigned long long _titleTextStringIndex;
    unsigned long long _subtitleTextStringIndex;
    NSArray *_titleTextStrings;
    NSArray *_subtitleTextStrings;
    NSArray *_titleAccessibilityLabels;
    NSArray *_subtitleAccessibilityLabels;
    NSArray *_titleAccessibilityIDs;
    NSArray *_subtitleAccessibilityIDs;
    NSArray *_titleLinkTexts;
    NSArray *_titleLinkURLs;
    NSArray *_subtitleLinkTexts;
    NSArray *_subtitleLinkURLs;
    UIColor *_textColor;
}

@property(nonatomic) _Bool adjustForFooterBar; // @synthesize adjustForFooterBar=_adjustForFooterBar;
@property(nonatomic) _Bool labelsAtTop; // @synthesize labelsAtTop=_labelsAtTop;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) NSArray *subtitleLinkURLs; // @synthesize subtitleLinkURLs=_subtitleLinkURLs;
@property(retain, nonatomic) NSArray *subtitleLinkTexts; // @synthesize subtitleLinkTexts=_subtitleLinkTexts;
@property(retain, nonatomic) NSArray *titleLinkURLs; // @synthesize titleLinkURLs=_titleLinkURLs;
@property(retain, nonatomic) NSArray *titleLinkTexts; // @synthesize titleLinkTexts=_titleLinkTexts;
@property(retain, nonatomic) NSArray *subtitleAccessibilityIDs; // @synthesize subtitleAccessibilityIDs=_subtitleAccessibilityIDs;
@property(retain, nonatomic) NSArray *titleAccessibilityIDs; // @synthesize titleAccessibilityIDs=_titleAccessibilityIDs;
@property(retain, nonatomic) NSArray *subtitleAccessibilityLabels; // @synthesize subtitleAccessibilityLabels=_subtitleAccessibilityLabels;
@property(retain, nonatomic) NSArray *titleAccessibilityLabels; // @synthesize titleAccessibilityLabels=_titleAccessibilityLabels;
@property(retain, nonatomic) NSArray *subtitleTextStrings; // @synthesize subtitleTextStrings=_subtitleTextStrings;
@property(retain, nonatomic) NSArray *titleTextStrings; // @synthesize titleTextStrings=_titleTextStrings;
@property(nonatomic) unsigned long long subtitleTextStringIndex; // @synthesize subtitleTextStringIndex=_subtitleTextStringIndex;
@property(nonatomic) unsigned long long titleTextStringIndex; // @synthesize titleTextStringIndex=_titleTextStringIndex;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutSubviews;
@property(nonatomic) _Bool doesSubtitleUpdateFrequently;
@property(nonatomic) _Bool doesTitleUpdateFrequently;
- (void)regenerateAttributedSubtitle;
- (void)regenerateAttributedTitle;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2 useAttributedLabels:(_Bool)arg3;
- (id)initWithFrame:(struct CGRect)arg1 contentView:(id)arg2;
- (void)setupWithContentView:(id)arg1 useAttributedLabels:(_Bool)arg2;

@end

