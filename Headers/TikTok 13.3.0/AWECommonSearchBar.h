//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSAttributedString, NSString, UIButton, UIColor, UIImage, UIImageView, UITextField;
@protocol AWECommonSearchBarDelegate;

@interface AWECommonSearchBar : UIView <UITextFieldDelegate>
{
    _Bool _shouldShowRightButton;
    _Bool _isRightButtonHidden;
    unsigned long long _type;
    id <AWECommonSearchBarDelegate> _delegate;
    UIImage *_clearImage;
    UIColor *_lensImageTintColor;
    NSString *_rightButtonTitle;
    CDUnknownBlockType _rightButtonClickedBlock;
    UIView *_contentView;
    UIImageView *_lensImageView;
    UITextField *_textField;
    UIButton *_clearButton;
    UIButton *_rightButton;
}

@property(nonatomic) _Bool isRightButtonHidden; // @synthesize isRightButtonHidden=_isRightButtonHidden;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) UIImageView *lensImageView; // @synthesize lensImageView=_lensImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType rightButtonClickedBlock; // @synthesize rightButtonClickedBlock=_rightButtonClickedBlock;
@property(copy, nonatomic) NSString *rightButtonTitle; // @synthesize rightButtonTitle=_rightButtonTitle;
@property(retain, nonatomic) UIColor *lensImageTintColor; // @synthesize lensImageTintColor=_lensImageTintColor;
@property(retain, nonatomic) UIImage *clearImage; // @synthesize clearImage=_clearImage;
@property(nonatomic) __weak id <AWECommonSearchBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldShowRightButton; // @synthesize shouldShowRightButton=_shouldShowRightButton;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (_Bool)resignFirstResponder;
- (void)clearButtonClicked:(id)arg1;
- (void)rightButtonClicked:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldClear:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (_Bool)textFieldShouldEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidChange:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
@property(retain, nonatomic) NSString *text;
@property(retain, nonatomic) UIColor *searchTintColor;
@property(retain, nonatomic) UIColor *textColor;
@property(retain, nonatomic) UIColor *searchFiledBackgroundColor;
@property(copy, nonatomic) NSAttributedString *attributedPlaceHolder;
@property(copy, nonatomic) NSString *placeHolder;
- (void)animatedShowCancelButton:(_Bool)arg1;
- (void)addSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

