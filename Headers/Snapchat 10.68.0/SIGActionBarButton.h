//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class SIGActionBarItem, SIGTargetActionDispatcher;

@interface SIGActionBarButton : UIControl
{
    SIGActionBarItem *_item;
    SIGTargetActionDispatcher *_userPressActionDispatcher;
}

+ (id)actionBarButtonWithItem:(id)arg1;
- (void).cxx_destruct;
- (void)_didPressButton;
- (struct CGSize)intrinsicContentSize;
- (id)initWithItem:(id)arg1;

@end
