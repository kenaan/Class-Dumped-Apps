//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, YTIButtonSupportedRenderers, YTIFormattedString, YTIRenderer, YTIThumbnailDetails;

@interface YTICommentDialogRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIThumbnailDetails *authorThumbnail; // @dynamic authorThumbnail;
@property(retain, nonatomic) YTIButtonSupportedRenderers *cancelButton; // @dynamic cancelButton;
@property(retain, nonatomic) YTIFormattedString *editableText; // @dynamic editableText;
@property(retain, nonatomic) YTIButtonSupportedRenderers *emojiButton; // @dynamic emojiButton;
@property(retain, nonatomic) YTIRenderer *emojiPicker; // @dynamic emojiPicker;
@property(retain, nonatomic) NSMutableArray *emojisArray; // @dynamic emojisArray;
@property(readonly, nonatomic) unsigned long long emojisArray_Count; // @dynamic emojisArray_Count;
@property(retain, nonatomic) YTIFormattedString *errorMessage; // @dynamic errorMessage;
@property(nonatomic) _Bool hasAuthorThumbnail; // @dynamic hasAuthorThumbnail;
@property(nonatomic) _Bool hasCancelButton; // @dynamic hasCancelButton;
@property(nonatomic) _Bool hasEditableText; // @dynamic hasEditableText;
@property(nonatomic) _Bool hasEmojiButton; // @dynamic hasEmojiButton;
@property(nonatomic) _Bool hasEmojiPicker; // @dynamic hasEmojiPicker;
@property(nonatomic) _Bool hasErrorMessage; // @dynamic hasErrorMessage;
@property(nonatomic) _Bool hasPlaceholderText; // @dynamic hasPlaceholderText;
@property(nonatomic) _Bool hasSubmitButton; // @dynamic hasSubmitButton;
@property(nonatomic) _Bool hasUnicodeEmojisURL; // @dynamic hasUnicodeEmojisURL;
@property(retain, nonatomic) YTIFormattedString *placeholderText; // @dynamic placeholderText;
@property(retain, nonatomic) YTIButtonSupportedRenderers *submitButton; // @dynamic submitButton;
@property(copy, nonatomic) NSString *unicodeEmojisURL; // @dynamic unicodeEmojisURL;

@end
