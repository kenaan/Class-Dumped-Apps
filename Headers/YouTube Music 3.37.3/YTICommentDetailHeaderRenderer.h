//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

#import "YTCommentsHeaderViewModel-Protocol.h"

@class NSMutableArray, NSString, YTICommand, YTICommentCreationSupportedRenderers, YTICommentRepliesSubMenuSupportedRenderers, YTIFormattedString, YTISortFilterSubMenuRenderer;

@interface YTICommentDetailHeaderRenderer : GPBMessage <YTCommentsHeaderViewModel>
{
}

+ (id)descriptor;
@property(nonatomic) int pollStatus;
@property(readonly, nonatomic) _Bool shouldShowSeparator;
@property(readonly, nonatomic) _Bool showCreateDialog;
@property(retain, nonatomic) YTICommand *createBackstagePostDialogCommand;
@property(readonly, nonatomic) YTICommand *openPersistentCommentBoxCommand;
@property(readonly, nonatomic) YTISortFilterSubMenuRenderer *sortMenuRenderer;
@property(readonly, nonatomic) YTIFormattedString *redOnlyCommentingText;
@property(readonly, nonatomic) YTIFormattedString *commentsCountText;
@property(readonly, nonatomic) YTIFormattedString *commentTitleText;
@property(readonly, nonatomic) YTICommentCreationSupportedRenderers *createCommentRenderer;
@property(readonly, nonatomic) _Bool shouldHideSimplebox;
@property(readonly, nonatomic) _Bool hasRedOnlyCommentingText;
@property(readonly, nonatomic) _Bool hasCommentsCountText;
@property(readonly, nonatomic) _Bool hasCommentTitleText;
@property(readonly, nonatomic) _Bool hasSortMenuRenderer;
@property(readonly, nonatomic) _Bool useSmallUserThumbnail;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *actionsArray; // @dynamic actionsArray;
@property(readonly, nonatomic) unsigned long long actionsArray_Count; // @dynamic actionsArray_Count;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) _Bool hasRepliesCount; // @dynamic hasRepliesCount;
@property(nonatomic) _Bool hasReplyCreation; // @dynamic hasReplyCreation;
@property(nonatomic) _Bool hasSortMenu; // @dynamic hasSortMenu;
@property(nonatomic) _Bool hasTitleText; // @dynamic hasTitleText;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) YTIFormattedString *repliesCount; // @dynamic repliesCount;
@property(retain, nonatomic) YTICommentCreationSupportedRenderers *replyCreation; // @dynamic replyCreation;
@property(retain, nonatomic) YTICommentRepliesSubMenuSupportedRenderers *sortMenu; // @dynamic sortMenu;
@property(readonly) Class superclass;
@property(retain, nonatomic) YTIFormattedString *titleText; // @dynamic titleText;

@end

