//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWETextField, TTTAttributedLabel, UIButton, UILabel;

@interface AWESuggestMusicView : UIView
{
    UIButton *_coverButton;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    AWETextField *_musicNameTF;
    AWETextField *_linkTF;
    UIButton *_submitBtn;
    TTTAttributedLabel *_agreeLabel;
    UIButton *_cancelBtn;
    UIView *_topSepView;
    UIView *_bottomSepView;
}

@property(retain, nonatomic) UIView *bottomSepView; // @synthesize bottomSepView=_bottomSepView;
@property(retain, nonatomic) UIView *topSepView; // @synthesize topSepView=_topSepView;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) TTTAttributedLabel *agreeLabel; // @synthesize agreeLabel=_agreeLabel;
@property(retain, nonatomic) UIButton *submitBtn; // @synthesize submitBtn=_submitBtn;
@property(retain, nonatomic) AWETextField *linkTF; // @synthesize linkTF=_linkTF;
@property(retain, nonatomic) AWETextField *musicNameTF; // @synthesize musicNameTF=_musicNameTF;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *coverButton; // @synthesize coverButton=_coverButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

