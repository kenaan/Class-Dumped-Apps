//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class AWEUserSheetAction, UIColor;

@interface AWEUserActionSheetButton : UIButton
{
    AWEUserSheetAction *_action;
    UIColor *_defaultColor;
}

@property(retain, nonatomic) UIColor *defaultColor; // @synthesize defaultColor=_defaultColor;
@property(retain, nonatomic) AWEUserSheetAction *action; // @synthesize action=_action;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;

@end

