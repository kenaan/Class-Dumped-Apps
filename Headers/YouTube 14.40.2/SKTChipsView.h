//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDCChipField.h"

@class MDCFlatButton, NSString;

@interface SKTChipsView : MDCChipField
{
    id <SKTChipAccessiblityActionDelegate> _chipAccessibilityActionDelegate;
    id <SKTSelectedContactsDisplayOptions> _displayOptions;
    MDCFlatButton *_activationButton;
}

@property(retain, nonatomic) MDCFlatButton *activationButton; // @synthesize activationButton=_activationButton;
@property(readonly, nonatomic) id <SKTSelectedContactsDisplayOptions> displayOptions; // @synthesize displayOptions=_displayOptions;
@property(nonatomic) __weak id <SKTChipAccessiblityActionDelegate> chipAccessibilityActionDelegate; // @synthesize chipAccessibilityActionDelegate=_chipAccessibilityActionDelegate;
- (void).cxx_destruct;
- (void)applyColorOverrides;
- (void)addActivationButton;
- (void)updateContentEdgeInsets;
- (id)placeholderStringForLabelWidth:(double)arg1;
- (void)activationButtonTapped:(id)arg1;
- (void)reloadChip:(id)arg1;
- (void)removeContact:(id)arg1;
- (void)addContact:(id)arg1;
- (void)layoutSubviews;
- (void)accessibilityVoiceoverStatusChanged;
@property(readonly, nonatomic) NSString *currentText;
- (void)didMoveToSuperview;
- (id)initWithFrame:(struct CGRect)arg1 displayOptions:(id)arg2 contacts:(id)arg3;

@end

