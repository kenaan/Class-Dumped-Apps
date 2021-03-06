//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEBubble, AWEButton;

@interface AWEUserSlidingNavbarLocateItemView : UIView
{
    _Bool _enableShowLocateBubble;
    AWEButton *_locateItemBtn;
    CDUnknownBlockType _locateItemBlock;
    AWEBubble *_locateBubble;
}

@property(nonatomic) _Bool enableShowLocateBubble; // @synthesize enableShowLocateBubble=_enableShowLocateBubble;
@property(nonatomic) __weak AWEBubble *locateBubble; // @synthesize locateBubble=_locateBubble;
@property(copy, nonatomic) CDUnknownBlockType locateItemBlock; // @synthesize locateItemBlock=_locateItemBlock;
@property(retain, nonatomic) AWEButton *locateItemBtn; // @synthesize locateItemBtn=_locateItemBtn;
- (void).cxx_destruct;
- (void)_markLocateItemBeUsed;
- (void)_dismissBubble;
- (void)_showLocateBubble;
- (void)showLocateItem:(double)arg1;
- (void)locateItemBtntnClicked:(id)arg1;
- (id)init;

@end

