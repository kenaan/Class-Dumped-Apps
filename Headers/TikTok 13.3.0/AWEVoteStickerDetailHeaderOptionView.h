//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface AWEVoteStickerDetailHeaderOptionView : UIView
{
    _Bool _selected;
    _Bool _darkMode;
    UILabel *_numberLabel;
    UILabel *_titleLabel;
}

@property(nonatomic) _Bool darkMode; // @synthesize darkMode=_darkMode;
@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *numberLabel; // @synthesize numberLabel=_numberLabel;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)configWithOption:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 darkMode:(_Bool)arg2;

@end

