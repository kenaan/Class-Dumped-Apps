//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TTTAttributedLabelDelegate-Protocol.h"

@class AWEButton, NSString, TTTAttributedLabel;

@interface AWEProfileTipView : UIView <TTTAttributedLabelDelegate>
{
    CDUnknownBlockType _closeTappedBlock;
    CDUnknownBlockType _clickLinkBlock;
    NSString *_tipText;
    NSString *_linkText;
    NSString *_tipKey;
    NSString *_linkKey;
    TTTAttributedLabel *_tipLabel;
    AWEButton *_closeButton;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) AWEButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) TTTAttributedLabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(copy, nonatomic) NSString *linkKey; // @synthesize linkKey=_linkKey;
@property(copy, nonatomic) NSString *tipKey; // @synthesize tipKey=_tipKey;
@property(copy, nonatomic) NSString *linkText; // @synthesize linkText=_linkText;
@property(copy, nonatomic) NSString *tipText; // @synthesize tipText=_tipText;
@property(copy, nonatomic) CDUnknownBlockType clickLinkBlock; // @synthesize clickLinkBlock=_clickLinkBlock;
@property(copy, nonatomic) CDUnknownBlockType closeTappedBlock; // @synthesize closeTappedBlock=_closeTappedBlock;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)closeClicked:(id)arg1;
- (void)dismiss;
- (void)setupTipLabel;
- (void)setupUI;
- (id)initWithTipKey:(id)arg1 linkKey:(id)arg2;
- (id)initWithTipText:(id)arg1 linkText:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

