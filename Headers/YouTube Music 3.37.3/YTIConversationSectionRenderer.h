//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSData, NSMutableArray, NSString, YTICommand, YTIConversationItemSupportedRenderers, YTIConversationReplySupportedRenderers, YTIConversationTypingStatusSupportedRenderers, YTIFormattedString, YTIMenuSupportedRenderers, YTIRenderer;

@interface YTIConversationSectionRenderer : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *chatMoleCloseButtonLabel; // @dynamic chatMoleCloseButtonLabel;
@property(retain, nonatomic) NSMutableArray *continuationsArray; // @dynamic continuationsArray;
@property(readonly, nonatomic) unsigned long long continuationsArray_Count; // @dynamic continuationsArray_Count;
@property(nonatomic) unsigned long long conversationContentFingerprint; // @dynamic conversationContentFingerprint;
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(retain, nonatomic) YTIFormattedString *conversationName; // @dynamic conversationName;
@property(retain, nonatomic) YTIConversationReplySupportedRenderers *conversationReplyRenderer; // @dynamic conversationReplyRenderer;
@property(retain, nonatomic) YTIConversationItemSupportedRenderers *emptyConversationItem; // @dynamic emptyConversationItem;
@property(nonatomic) _Bool hasChatMoleCloseButtonLabel; // @dynamic hasChatMoleCloseButtonLabel;
@property(nonatomic) _Bool hasConversationContentFingerprint; // @dynamic hasConversationContentFingerprint;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationName; // @dynamic hasConversationName;
@property(nonatomic) _Bool hasConversationReplyRenderer; // @dynamic hasConversationReplyRenderer;
@property(nonatomic) _Bool hasEmptyConversationItem; // @dynamic hasEmptyConversationItem;
@property(nonatomic) _Bool hasLastModifiedTimestampMs; // @dynamic hasLastModifiedTimestampMs;
@property(nonatomic) _Bool hasMenu; // @dynamic hasMenu;
@property(nonatomic) _Bool hasNameYourGroupButton; // @dynamic hasNameYourGroupButton;
@property(nonatomic) _Bool hasNameYourGroupCloseButton; // @dynamic hasNameYourGroupCloseButton;
@property(nonatomic) _Bool hasPendingMembersRenderer; // @dynamic hasPendingMembersRenderer;
@property(nonatomic) _Bool hasReadReceiptText; // @dynamic hasReadReceiptText;
@property(nonatomic) _Bool hasShowConversationNameAsEdited; // @dynamic hasShowConversationNameAsEdited;
@property(nonatomic) _Bool hasShowLoadingSpinner; // @dynamic hasShowLoadingSpinner;
@property(nonatomic) _Bool hasShowMutedLogo; // @dynamic hasShowMutedLogo;
@property(nonatomic) _Bool hasTrackingParams; // @dynamic hasTrackingParams;
@property(nonatomic) _Bool hasTypingStatusTemplate; // @dynamic hasTypingStatusTemplate;
@property(nonatomic) _Bool hasViewParticipantsEndpoint; // @dynamic hasViewParticipantsEndpoint;
@property(nonatomic) _Bool hasViewerInConversation; // @dynamic hasViewerInConversation;
@property(retain, nonatomic) NSMutableArray *itemsArray; // @dynamic itemsArray;
@property(readonly, nonatomic) unsigned long long itemsArray_Count; // @dynamic itemsArray_Count;
@property(nonatomic) long long lastModifiedTimestampMs; // @dynamic lastModifiedTimestampMs;
@property(retain, nonatomic) YTIMenuSupportedRenderers *menu; // @dynamic menu;
@property(retain, nonatomic) YTIRenderer *nameYourGroupButton; // @dynamic nameYourGroupButton;
@property(retain, nonatomic) YTIRenderer *nameYourGroupCloseButton; // @dynamic nameYourGroupCloseButton;
@property(retain, nonatomic) YTIRenderer *pendingMembersRenderer; // @dynamic pendingMembersRenderer;
@property(retain, nonatomic) YTIFormattedString *readReceiptText; // @dynamic readReceiptText;
@property(nonatomic) _Bool showConversationNameAsEdited; // @dynamic showConversationNameAsEdited;
@property(nonatomic) _Bool showLoadingSpinner; // @dynamic showLoadingSpinner;
@property(nonatomic) _Bool showMutedLogo; // @dynamic showMutedLogo;
@property(copy, nonatomic) NSData *trackingParams; // @dynamic trackingParams;
@property(retain, nonatomic) YTIConversationTypingStatusSupportedRenderers *typingStatusTemplate; // @dynamic typingStatusTemplate;
@property(retain, nonatomic) YTICommand *viewParticipantsEndpoint; // @dynamic viewParticipantsEndpoint;
@property(nonatomic) _Bool viewerInConversation; // @dynamic viewerInConversation;

@end
