//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UILabel;

@interface AWESelectPhoneCountryCodeTableViewCell : UITableViewCell
{
    _Bool _isMatchMusicallyColors;
    UILabel *_countryLabel;
    UILabel *_phoneCodeLabel;
}

@property(nonatomic) _Bool isMatchMusicallyColors; // @synthesize isMatchMusicallyColors=_isMatchMusicallyColors;
@property(retain, nonatomic) UILabel *phoneCodeLabel; // @synthesize phoneCodeLabel=_phoneCodeLabel;
@property(retain, nonatomic) UILabel *countryLabel; // @synthesize countryLabel=_countryLabel;
- (void).cxx_destruct;
- (void)configureWithModel:(id)arg1 isMatchMusicallyColors:(_Bool)arg2;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

