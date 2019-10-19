//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64Array, NSMutableDictionary, NSString;

@interface TIMPBNConversationRemoveParticipantsRequestBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableDictionary *bizExt; // @dynamic bizExt;
@property(readonly, nonatomic) unsigned long long bizExt_Count; // @dynamic bizExt_Count;
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(retain, nonatomic) GPBInt64Array *participantsArray; // @dynamic participantsArray;
@property(readonly, nonatomic) unsigned long long participantsArray_Count; // @dynamic participantsArray_Count;

@end

