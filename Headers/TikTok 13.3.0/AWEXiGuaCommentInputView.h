//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEAwemeModel, UIButton, UILabel;

@interface AWEXiGuaCommentInputView : UIView
{
    AWEAwemeModel *_currentAwemeModel;
    UIView *_lineView;
    UILabel *_contentLabel;
    UIButton *_moreButton;
}

+ (double)viewHeight;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) AWEAwemeModel *currentAwemeModel; // @synthesize currentAwemeModel=_currentAwemeModel;
- (void).cxx_destruct;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)moreButtonTapped;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

@end

