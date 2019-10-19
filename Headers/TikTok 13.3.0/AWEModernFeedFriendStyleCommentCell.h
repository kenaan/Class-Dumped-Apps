//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEFriendStyleBaseCell.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEFriendStyleCommentCellFrame, NSString, YYLabel;

@interface AWEModernFeedFriendStyleCommentCell : AWEFriendStyleBaseCell <UIGestureRecognizerDelegate>
{
    YYLabel *_authorLabel;
    YYLabel *_moreLabel;
    YYLabel *_contentLabel;
    AWEFriendStyleCommentCellFrame *_commentCellFrame;
    CDUnknownBlockType _highlightTapAction;
}

@property(copy, nonatomic) CDUnknownBlockType highlightTapAction; // @synthesize highlightTapAction=_highlightTapAction;
@property(retain, nonatomic) AWEFriendStyleCommentCellFrame *commentCellFrame; // @synthesize commentCellFrame=_commentCellFrame;
@property(retain, nonatomic) YYLabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) YYLabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) YYLabel *authorLabel; // @synthesize authorLabel=_authorLabel;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)didTapContainerView:(id)arg1;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 isInsStyle:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

