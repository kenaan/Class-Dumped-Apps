//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableDictionary, NSString;

@interface TIMPBNSendMessageRequestBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *clientMessageId; // @dynamic clientMessageId;
@property(copy, nonatomic) NSString *content; // @dynamic content;
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(retain, nonatomic) NSMutableDictionary *ext; // @dynamic ext;
@property(readonly, nonatomic) unsigned long long ext_Count; // @dynamic ext_Count;
@property(nonatomic) _Bool hasClientMessageId; // @dynamic hasClientMessageId;
@property(nonatomic) _Bool hasContent; // @dynamic hasContent;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasMessageType; // @dynamic hasMessageType;
@property(nonatomic) _Bool hasTicket; // @dynamic hasTicket;
@property(retain, nonatomic) GPBInt64Array *mentionedUsersArray; // @dynamic mentionedUsersArray;
@property(readonly, nonatomic) unsigned long long mentionedUsersArray_Count; // @dynamic mentionedUsersArray_Count;
@property(nonatomic) int messageType; // @dynamic messageType;
@property(copy, nonatomic) NSString *ticket; // @dynamic ticket;

@end

