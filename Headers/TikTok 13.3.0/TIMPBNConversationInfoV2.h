//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TIMPBNConversationCoreInfo, TIMPBNConversationSettingInfo, TIMPBNParticipant, TIMPBNParticipantsPage;

@interface TIMPBNConversationInfoV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) TIMPBNConversationCoreInfo *conversationCoreInfo; // @dynamic conversationCoreInfo;
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(retain, nonatomic) TIMPBNConversationSettingInfo *conversationSettingInfo; // @dynamic conversationSettingInfo;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(retain, nonatomic) TIMPBNParticipantsPage *firstPageParticipants; // @dynamic firstPageParticipants;
@property(nonatomic) _Bool hasConversationCoreInfo; // @dynamic hasConversationCoreInfo;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationSettingInfo; // @dynamic hasConversationSettingInfo;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasFirstPageParticipants; // @dynamic hasFirstPageParticipants;
@property(nonatomic) _Bool hasInboxType; // @dynamic hasInboxType;
@property(nonatomic) _Bool hasIsParticipant; // @dynamic hasIsParticipant;
@property(nonatomic) _Bool hasParticipantsCount; // @dynamic hasParticipantsCount;
@property(nonatomic) _Bool hasTicket; // @dynamic hasTicket;
@property(nonatomic) _Bool hasUserInfo; // @dynamic hasUserInfo;
@property(nonatomic) int inboxType; // @dynamic inboxType;
@property(nonatomic) _Bool isParticipant; // @dynamic isParticipant;
@property(nonatomic) int participantsCount; // @dynamic participantsCount;
@property(copy, nonatomic) NSString *ticket; // @dynamic ticket;
@property(retain, nonatomic) TIMPBNParticipant *userInfo; // @dynamic userInfo;

@end

