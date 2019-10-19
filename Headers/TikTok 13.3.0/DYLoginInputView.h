//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEAccountDeleteButtonDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class AWEAccountDeleteButton, NSString, UITextField;

@interface DYLoginInputView : UIView <AWEAccountDeleteButtonDelegate, UITextFieldDelegate>
{
    _Bool _isSecureInput;
    CDUnknownBlockType _didChangeBlock;
    UITextField *_textField;
    AWEAccountDeleteButton *_deleteButton;
    NSString *_placeholder;
    long long _maxLength;
}

@property(nonatomic) long long maxLength; // @synthesize maxLength=_maxLength;
@property(nonatomic) _Bool isSecureInput; // @synthesize isSecureInput=_isSecureInput;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(retain, nonatomic) AWEAccountDeleteButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) CDUnknownBlockType didChangeBlock; // @synthesize didChangeBlock=_didChangeBlock;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
@property(readonly, copy, nonatomic) NSString *text;
- (void)deleteButtonDidClick;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)editingChangedAction:(id)arg1;
- (id)getAttributedPlaceholder:(id)arg1;
- (id)initWithPlaceholder:(id)arg1 secureInput:(_Bool)arg2 maxInputLength:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

