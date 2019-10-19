//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString, TIMPBNParticipantsPage;

@interface TIMPBNConversationInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(nonatomic) long long conversationVersion; // @dynamic conversationVersion;
@property(retain, nonatomic) NSMutableDictionary *ext; // @dynamic ext;
@property(readonly, nonatomic) unsigned long long ext_Count; // @dynamic ext_Count;
@property(retain, nonatomic) TIMPBNParticipantsPage *firstPageParticipants; // @dynamic firstPageParticipants;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasConversationVersion; // @dynamic hasConversationVersion;
@property(nonatomic) _Bool hasFirstPageParticipants; // @dynamic hasFirstPageParticipants;
@property(nonatomic) _Bool hasIsParticipant; // @dynamic hasIsParticipant;
@property(nonatomic) _Bool hasLastMessageIndex; // @dynamic hasLastMessageIndex;
@property(nonatomic) _Bool hasMinIndex; // @dynamic hasMinIndex;
@property(nonatomic) _Bool hasMute; // @dynamic hasMute;
@property(nonatomic) _Bool hasParticipantsCount; // @dynamic hasParticipantsCount;
@property(nonatomic) _Bool hasReadIndex; // @dynamic hasReadIndex;
@property(nonatomic) _Bool hasServerUnreadCount; // @dynamic hasServerUnreadCount;
@property(nonatomic) _Bool hasStickOnTop; // @dynamic hasStickOnTop;
@property(nonatomic) _Bool hasTicket; // @dynamic hasTicket;
@property(nonatomic) _Bool isParticipant; // @dynamic isParticipant;
@property(nonatomic) long long lastMessageIndex; // @dynamic lastMessageIndex;
@property(nonatomic) long long minIndex; // @dynamic minIndex;
@property(nonatomic) int mute; // @dynamic mute;
@property(nonatomic) int participantsCount; // @dynamic participantsCount;
@property(nonatomic) long long readIndex; // @dynamic readIndex;
@property(nonatomic) long long serverUnreadCount; // @dynamic serverUnreadCount;
@property(nonatomic) int stickOnTop; // @dynamic stickOnTop;
@property(copy, nonatomic) NSString *ticket; // @dynamic ticket;

@end

