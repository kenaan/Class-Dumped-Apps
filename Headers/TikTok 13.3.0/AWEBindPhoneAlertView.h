//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, UIButton, UILabel, UIToolbar;

@interface AWEBindPhoneAlertView : UIView <TTTAttributedLabelDelegate>
{
    unsigned long long _type;
    UIToolbar *_blurBackground;
    UIButton *_cancelButton;
    UIButton *_confirmButton;
    TTTAttributedLabel *_tipsLabel;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    CDUnknownBlockType _onConfirm;
    CDUnknownBlockType _onCancel;
    CDUnknownBlockType _presentHandler;
    UIView *_horizontalSeparator;
    UIView *_verticalSeparator;
}

+ (id)bindPhoneViewControllerWithEnterFrom:(id)arg1;
+ (void)gotoBindPhoneWithType:(unsigned long long)arg1 presentHandler:(CDUnknownBlockType)arg2;
+ (id)instanceWithType:(unsigned long long)arg1 confirmBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3 presentHandler:(CDUnknownBlockType)arg4;
@property(retain, nonatomic) UIView *verticalSeparator; // @synthesize verticalSeparator=_verticalSeparator;
@property(retain, nonatomic) UIView *horizontalSeparator; // @synthesize horizontalSeparator=_horizontalSeparator;
@property(copy, nonatomic) CDUnknownBlockType presentHandler; // @synthesize presentHandler=_presentHandler;
@property(copy, nonatomic) CDUnknownBlockType onCancel; // @synthesize onCancel=_onCancel;
@property(copy, nonatomic) CDUnknownBlockType onConfirm; // @synthesize onConfirm=_onConfirm;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) TTTAttributedLabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIButton *confirmButton; // @synthesize confirmButton=_confirmButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIToolbar *blurBackground; // @synthesize blurBackground=_blurBackground;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)isTipsLabelStyle;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (id)_tipsURL;
- (void)layoutSubviews;
- (void)_cancelAction;
- (void)_confirmAction;
- (double)messageLabelHeight;
- (double)viewHeight;
- (void)_dismiss;
- (void)showAlertWithAnimation:(CDUnknownBlockType)arg1;
- (void)_commonInit;
- (id)initWithType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

