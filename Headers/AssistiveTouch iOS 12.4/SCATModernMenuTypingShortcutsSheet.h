//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuSheet.h"

@class AXElement, NSMutableArray;

@interface SCATModernMenuTypingShortcutsSheet : SCATModernMenuSheet
{
    AXElement *_keyboardApp;
    NSMutableArray *_displayedShortcuts;
    NSMutableArray *_textReplacementShortcuts;
}

@property(retain, nonatomic) NSMutableArray *textReplacementShortcuts; // @synthesize textReplacementShortcuts=_textReplacementShortcuts;
@property(retain, nonatomic) NSMutableArray *displayedShortcuts; // @synthesize displayedShortcuts=_displayedShortcuts;
@property(retain, nonatomic) AXElement *keyboardApp; // @synthesize keyboardApp=_keyboardApp;
- (void).cxx_destruct;
- (void)typeKeyboardString:(id)arg1;
- (void)_loadShortcuts;
- (void)menuItemWasActivated:(id)arg1;
- (_Bool)shouldUpdateMenuItem:(id)arg1;
- (_Bool)shouldIncludeTextLabels;
- (id)makeMenuItemsIfNeeded;
- (void)invalidateMenuItems;
- (void)viewControllerViewWillAppear:(_Bool)arg1;
- (id)init;
- (id)initWithMenu:(id)arg1;
- (id)initWithMenu:(id)arg1 keyboardApp:(id)arg2;

@end

