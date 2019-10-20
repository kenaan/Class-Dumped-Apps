//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentView.h"

@class JETNetworkDetailsBadgeView, JETNetworkDetailsUsageAmountView, UILabel, UIView;

@interface JETNetworkDetailsEntryContentView : GOOBaseContentView
{
    UILabel *_textLabel;
    UILabel *_subtitleLabel;
    JETNetworkDetailsUsageAmountView *_usageLabel;
    JETNetworkDetailsBadgeView *_badgeView;
}

+ (double)heightForObject:(id)arg1 constrainedToWidth:(double)arg2;
@property(retain, nonatomic) JETNetworkDetailsBadgeView *badgeView; // @synthesize badgeView=_badgeView;
@property(readonly, nonatomic) JETNetworkDetailsUsageAmountView *usageLabel; // @synthesize usageLabel=_usageLabel;
@property(readonly, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(readonly, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
- (void).cxx_destruct;
- (void)refresh;
- (void)layoutSubviews;
@property(readonly, nonatomic) UIView *circle;
- (id)accessibilityLabel;
- (void)updateViewWithObject:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
