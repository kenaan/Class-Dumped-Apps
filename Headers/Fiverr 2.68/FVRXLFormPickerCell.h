//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XLFormBaseCell.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSString, UILabel, UIPickerView;

@interface FVRXLFormPickerCell : XLFormBaseCell <UIPickerViewDelegate, UIPickerViewDataSource>
{
    UIPickerView *_pickerView;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
}

+ (void)load;
@property(nonatomic) __weak UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(nonatomic) __weak UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)refreshPickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)formDescriptorCellDidSelectedWithFormController:(id)arg1;
- (long long)selectedIndex;
- (void)unhighlight;
- (void)highlight;
- (void)update;
- (void)configure;
- (_Bool)canBecomeFirstResponder;
- (_Bool)formDescriptorCellBecomeFirstResponder;
- (_Bool)formDescriptorCellCanBecomeFirstResponder;
- (id)inputView;
- (id)valueDisplayText;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

