//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCATModernMenuGesturesSheetBase.h"

@protocol SCATMenuGestureConfirmationItemsViewDelegate;

@interface SCATModernMenuConfirmGestureSheet : SCATModernMenuGesturesSheetBase
{
    id <SCATMenuGestureConfirmationItemsViewDelegate> _delegate;
}

@property(nonatomic) __weak id <SCATMenuGestureConfirmationItemsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)menuItemWasActivated:(id)arg1;
- (_Bool)shouldKeepScannerAwake;
- (struct CGRect)rectToClear;
- (_Bool)allowsExitAction;
- (_Bool)allowsBackAction;
- (id)makeMenuItemsIfNeeded;

@end

