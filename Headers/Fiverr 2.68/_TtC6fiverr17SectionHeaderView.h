//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "_TtC6fiverr11NibableView.h"

@class UIImageView, UILabel, UIStackView;

@interface _TtC6fiverr17SectionHeaderView : _TtC6fiverr11NibableView
{
    // Error parsing type: , name: delegate
    // Error parsing type: , name: stackView
    // Error parsing type: , name: leftImageView
    // Error parsing type: , name: rightImageView
    // Error parsing type: , name: titleLabel
    // Error parsing type: , name: isExpanded
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)sectionHeaderTapped:(id)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel;
@property(nonatomic) __weak UIImageView *rightImageView; // @synthesize rightImageView;
@property(nonatomic) __weak UIImageView *leftImageView; // @synthesize leftImageView;
@property(nonatomic) __weak UIStackView *stackView; // @synthesize stackView;

@end
