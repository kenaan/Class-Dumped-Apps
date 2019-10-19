//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, TIMPBNMessageBody;

@interface TIMPBNNewMessageNotify : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *conversationId; // @dynamic conversationId;
@property(nonatomic) int conversationType; // @dynamic conversationType;
@property(nonatomic) _Bool hasConversationId; // @dynamic hasConversationId;
@property(nonatomic) _Bool hasConversationType; // @dynamic hasConversationType;
@property(nonatomic) _Bool hasIndexInConversation; // @dynamic hasIndexInConversation;
@property(nonatomic) _Bool hasMessage; // @dynamic hasMessage;
@property(nonatomic) _Bool hasNextCursor; // @dynamic hasNextCursor;
@property(nonatomic) _Bool hasNotifyType; // @dynamic hasNotifyType;
@property(nonatomic) _Bool hasPreviousCursor; // @dynamic hasPreviousCursor;
@property(nonatomic) long long indexInConversation; // @dynamic indexInConversation;
@property(retain, nonatomic) TIMPBNMessageBody *message; // @dynamic message;
@property(nonatomic) long long nextCursor; // @dynamic nextCursor;
@property(nonatomic) int notifyType; // @dynamic notifyType;
@property(nonatomic) long long previousCursor; // @dynamic previousCursor;

@end

