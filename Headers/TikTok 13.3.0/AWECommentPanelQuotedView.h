//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWECommentModel, AWECommentPanelBaseCell, AWEInsetsLabel, CAShapeLayer, NSString, UILabel, YYLabel;

@interface AWECommentPanelQuotedView : UIView
{
    NSString *_itemUserID;
    AWECommentPanelBaseCell *_cell;
    UILabel *_replyNameLabel;
    AWEInsetsLabel *_replyAuthorTagLabel;
    AWEInsetsLabel *_replyFollowerTagLabel;
    YYLabel *_replyCommentLabel;
    CAShapeLayer *_verticalLayer;
    AWECommentModel *_commentModel;
    AWECommentModel *_quotedComment;
}

@property(retain, nonatomic) AWECommentModel *quotedComment; // @synthesize quotedComment=_quotedComment;
@property(retain, nonatomic) AWECommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) CAShapeLayer *verticalLayer; // @synthesize verticalLayer=_verticalLayer;
@property(retain, nonatomic) YYLabel *replyCommentLabel; // @synthesize replyCommentLabel=_replyCommentLabel;
@property(retain, nonatomic) AWEInsetsLabel *replyFollowerTagLabel; // @synthesize replyFollowerTagLabel=_replyFollowerTagLabel;
@property(retain, nonatomic) AWEInsetsLabel *replyAuthorTagLabel; // @synthesize replyAuthorTagLabel=_replyAuthorTagLabel;
@property(retain, nonatomic) UILabel *replyNameLabel; // @synthesize replyNameLabel=_replyNameLabel;
@property(nonatomic) __weak AWECommentPanelBaseCell *cell; // @synthesize cell=_cell;
@property(copy, nonatomic) NSString *itemUserID; // @synthesize itemUserID=_itemUserID;
- (void).cxx_destruct;
- (void)replyUserTapped:(id)arg1;
- (id)translatedContent;
- (id)displayAttrContent;
- (id)replyAuthorName;
- (void)layoutSubviews;
- (void)updateReplyNameLabel;
- (void)configWithCommentModel:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

