//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableDictionary, NSString;

@interface TIMPBNUpsertConversationCoreExtInfoRequestBody : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) long long conversationShortId; // @dynamic conversationShortId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(retain, nonatomic) NSMutableDictionary *ext; // @dynamic ext;
@property(readonly, nonatomic) unsigned long long ext_Count; // @dynamic ext_Count;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationShortId; // @dynamic hasConversationShortId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;

@end

