//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface AWEJudgeVideoView : UIView
{
    UILabel *_contentLabel;
    UIButton *_actionButton;
    UIButton *_cancelButton;
}

@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
- (void).cxx_destruct;
- (void)resetButtonStatus;
- (void)updateAcceptAction:(_Bool)arg1;
- (void)setCancelBlock:(CDUnknownBlockType)arg1;
- (void)setActionBlock:(CDUnknownBlockType)arg1;
- (void)updateTitle:(id)arg1;
- (id)initWithTitle:(id)arg1 actionTitle:(id)arg2 cancelTitle:(id)arg3;

@end
