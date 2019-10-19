//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface AWECountryCodeView : UIView
{
    UIImageView *_arrowImageView;
    UILabel *_label;
    NSString *_countryCode;
    CDUnknownBlockType _didChangeCountryCode;
}

@property(copy, nonatomic) CDUnknownBlockType didChangeCountryCode; // @synthesize didChangeCountryCode=_didChangeCountryCode;
@property(copy, nonatomic) NSString *countryCode; // @synthesize countryCode=_countryCode;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void).cxx_destruct;
- (void)tapAction;
- (struct CGSize)intrinsicContentSize;
- (void)updateCountryCode:(id)arg1;
- (void)_updateLabel:(id)arg1;
- (id)init;

@end

