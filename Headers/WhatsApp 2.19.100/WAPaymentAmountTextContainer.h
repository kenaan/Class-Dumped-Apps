//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage, UIFont, WAPaymentBaseTransaction;
@protocol WAPaymentsAmountTextContainerThemeProtocol;

@interface WAPaymentAmountTextContainer : NSObject
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
    UIFont *_currentMajorFont;
    struct _NSRange _currencyRange;
    struct _NSRange _majorDigitsRange;
    struct _NSRange _minorDigitsRange;
    id <WAPaymentsAmountTextContainerThemeProtocol> _theme;
    WAPaymentBaseTransaction *_transaction;
}

@property(retain, nonatomic) WAPaymentBaseTransaction *transaction; // @synthesize transaction=_transaction;
@property(retain, nonatomic) id <WAPaymentsAmountTextContainerThemeProtocol> theme; // @synthesize theme=_theme;
- (void).cxx_destruct;
- (void)drawAtPoint:(struct CGPoint)arg1;
- (double)calculateWidth;
- (struct CGRect)textRect;
- (void)fitToWidth:(double)arg1;
- (id)minorAttributesForMajorFont:(id)arg1;
- (id)majorAttributesForMajorFont:(id)arg1;
- (void)updateFontSizeToFont:(id)arg1;
- (id)attributedTextWithTransaction:(id)arg1;
- (id)init;

@end
