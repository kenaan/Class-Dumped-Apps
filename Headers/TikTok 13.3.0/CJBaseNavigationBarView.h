//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CJBaseBarButton, UILabel;

@interface CJBaseNavigationBarView : UIView
{
    UILabel *_titleLabel;
    CJBaseBarButton *_leftBtn;
    CJBaseBarButton *_rightBtn;
    UIView *_bottomLine;
}

@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) CJBaseBarButton *rightBtn; // @synthesize rightBtn=_rightBtn;
@property(retain, nonatomic) CJBaseBarButton *leftBtn; // @synthesize leftBtn=_leftBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)updateSubViewsFrame;
- (void)setTitle:(id)arg1;
- (void)setupUI;
- (id)init;

@end

