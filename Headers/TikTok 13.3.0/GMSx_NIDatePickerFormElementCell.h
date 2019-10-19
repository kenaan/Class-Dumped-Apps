//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_NIFormElementCell.h"

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIDatePicker, UITextField;

@interface GMSx_NIDatePickerFormElementCell : GMSx_NIFormElementCell <UITextFieldDelegate>
{
    UITextField *_dateField;
    UIDatePicker *_datePicker;
    UITextField *_dumbDateField;
}

@property(retain, nonatomic) UITextField *dumbDateField; // @synthesize dumbDateField=_dumbDateField;
@property(readonly, nonatomic) UIDatePicker *datePicker; // @synthesize datePicker=_datePicker;
@property(readonly, nonatomic) UITextField *dateField; // @synthesize dateField=_dateField;
- (void).cxx_destruct;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidEndEditing:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)selectedDateDidChange;
- (_Bool)shouldUpdateCellWithObject:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

