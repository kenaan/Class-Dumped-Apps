//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWEASSMusicNavView : UIView
{
    _Bool _leftButtonIsBack;
    UIButton *_leftCancelButton;
    UILabel *_titleLabel;
}

@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *leftCancelButton; // @synthesize leftCancelButton=_leftCancelButton;
@property(nonatomic) _Bool leftButtonIsBack; // @synthesize leftButtonIsBack=_leftButtonIsBack;
- (void).cxx_destruct;
- (_Bool)isShortStyle;
- (double)recommendHeight;
- (void)updateLayout;
- (id)initWithFrame:(struct CGRect)arg1;

@end

