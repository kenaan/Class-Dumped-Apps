//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMessageButtonsSliceView.h"

@class UIButton, WAMessageJoinGroupButtonSlice;

@interface WAMessageJoinGroupButtonSliceView : WAMessageButtonsSliceView
{
    UIButton *_joinGroupButton;
}

- (void).cxx_destruct;
- (void)configureSlice:(id)arg1 withCellData:(id)arg2;
- (void)joinGroup:(id)arg1;
- (id)buttonsForCurrentState;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, nonatomic) WAMessageJoinGroupButtonSlice *slice; // @dynamic slice;

@end
