//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEVideoEffectViewCollectionCell.h"

@class AWEScrollStringLabel, UIView;

@interface AWEVideoEffectViewToolCell : AWEVideoEffectViewCollectionCell
{
    UIView *_selectedIndicatorView;
    AWEScrollStringLabel *_titleLabel;
}

@property(retain, nonatomic) AWEScrollStringLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *selectedIndicatorView; // @synthesize selectedIndicatorView=_selectedIndicatorView;
- (void).cxx_destruct;
- (void)updateText:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

