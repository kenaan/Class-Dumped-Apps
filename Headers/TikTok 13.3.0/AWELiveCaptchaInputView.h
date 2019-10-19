//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UILabel, UITextField;

@interface AWELiveCaptchaInputView : UIView <UITextFieldDelegate>
{
    _Bool _isTiming;
    UIButton *_captchaButton;
    CDUnknownBlockType _textFieldChangeBlock;
    UILabel *_captchaLabel;
    UITextField *_captchaTextField;
    UIView *_separator;
}

@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(retain, nonatomic) UITextField *captchaTextField; // @synthesize captchaTextField=_captchaTextField;
@property(retain, nonatomic) UILabel *captchaLabel; // @synthesize captchaLabel=_captchaLabel;
@property(nonatomic) _Bool isTiming; // @synthesize isTiming=_isTiming;
@property(copy, nonatomic) CDUnknownBlockType textFieldChangeBlock; // @synthesize textFieldChangeBlock=_textFieldChangeBlock;
@property(retain, nonatomic) UIButton *captchaButton; // @synthesize captchaButton=_captchaButton;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)setRemainTime:(unsigned long long)arg1;
- (id)text;
- (void)textFieldAction:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

