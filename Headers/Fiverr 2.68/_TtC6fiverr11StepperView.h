//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6fiverr11NibableView.h"

@class UIButton, UILabel;

@interface _TtC6fiverr11StepperView : _TtC6fiverr11NibableView
{
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: minusButton
    // Error parsing type: , name: valueLabel
    // Error parsing type: , name: plusButton
    // Error parsing type: , name: viewModel
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)plusButtonTapped:(id)arg1;
- (void)minusButtonTapped:(id)arg1;
@property(nonatomic) __weak UIButton *plusButton; // @synthesize plusButton;
@property(nonatomic) __weak UILabel *valueLabel; // @synthesize valueLabel;
@property(nonatomic) __weak UIButton *minusButton; // @synthesize minusButton;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;

@end
