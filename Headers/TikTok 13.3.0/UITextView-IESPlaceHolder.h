//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UIColor, UIFont;

@interface UITextView (IESPlaceHolder)
- (void)ies_syncTextAlignmentWithPlaceHoler;
- (void)ies_syncFontWithPlaceHolderFont;
- (void)ies_showOrHidePlaceHolderTextView;
- (void)setIes_isCustomPlaceHolderFont:(_Bool)arg1;
- (void)setIes_placeHolderTextView:(id)arg1;
@property(nonatomic) struct UIEdgeInsets ies_placeHolderEdgeInsets;
@property(retain, nonatomic) UIFont *ies_placeHolderFont;
@property(retain, nonatomic) UIColor *ies_placeHolderColor;
@property(retain, nonatomic) NSString *ies_placeHolder;
- (_Bool)ies_isCustomPlaceHolderFont;
- (id)ies_placeHolderTextView;
@end

