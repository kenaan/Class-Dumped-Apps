//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UITextField;
@protocol HTSLiveRoomSendInputViewDelegate, IESLiveEnvironment;

@interface HTSLiveRoomSendInputView : UIView <UITextFieldDelegate>
{
    id <HTSLiveRoomSendInputViewDelegate> _delegate;
    UIImageView *_bgImageView;
    UITextField *_inputTextField;
    UIButton *_okButton;
    id <IESLiveEnvironment> _appTarget;
}

@property(retain, nonatomic) id <IESLiveEnvironment> appTarget; // @synthesize appTarget=_appTarget;
@property(retain, nonatomic) UIButton *okButton; // @synthesize okButton=_okButton;
@property(retain, nonatomic) UITextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(nonatomic) __weak id <HTSLiveRoomSendInputViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)textFieldIsFirstResponder;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)okButtonClick:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
