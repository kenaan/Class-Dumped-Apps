//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class SCSFFSChatsState, SCSFFSSnapsState;

@interface SCSFFSConversationState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) SCSFFSChatsState *chatsState; // @dynamic chatsState;
@property(nonatomic) _Bool hasChatsState; // @dynamic hasChatsState;
@property(nonatomic) _Bool hasSnapsState; // @dynamic hasSnapsState;
@property(nonatomic) _Bool isConversationPending; // @dynamic isConversationPending;
@property(retain, nonatomic) SCSFFSSnapsState *snapsState; // @dynamic snapsState;

@end

