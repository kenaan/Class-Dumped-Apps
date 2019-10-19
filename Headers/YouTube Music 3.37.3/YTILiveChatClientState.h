//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface YTILiveChatClientState : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *activePollId; // @dynamic activePollId;
@property(copy, nonatomic) NSString *emojiChecksum; // @dynamic emojiChecksum;
@property(nonatomic) long long fullLoadTimestampUsec; // @dynamic fullLoadTimestampUsec;
@property(nonatomic) _Bool hasActivePollId; // @dynamic hasActivePollId;
@property(nonatomic) _Bool hasEmojiChecksum; // @dynamic hasEmojiChecksum;
@property(nonatomic) _Bool hasFullLoadTimestampUsec; // @dynamic hasFullLoadTimestampUsec;
@property(nonatomic) _Bool hasIsBlockedFromChat; // @dynamic hasIsBlockedFromChat;
@property(nonatomic) _Bool hasIsMember; // @dynamic hasIsMember;
@property(nonatomic) _Bool hasIsModerator; // @dynamic hasIsModerator;
@property(nonatomic) _Bool hasIsSlowModeEnabled; // @dynamic hasIsSlowModeEnabled;
@property(nonatomic) _Bool hasIsSuperChatForGoodEnabled; // @dynamic hasIsSuperChatForGoodEnabled;
@property(nonatomic) _Bool hasWasTopChatEverEnabledThisSession; // @dynamic hasWasTopChatEverEnabledThisSession;
@property(nonatomic) _Bool isBlockedFromChat; // @dynamic isBlockedFromChat;
@property(nonatomic) _Bool isMember; // @dynamic isMember;
@property(nonatomic) _Bool isModerator; // @dynamic isModerator;
@property(nonatomic) _Bool isSlowModeEnabled; // @dynamic isSlowModeEnabled;
@property(nonatomic) _Bool isSuperChatForGoodEnabled; // @dynamic isSuperChatForGoodEnabled;
@property(nonatomic) _Bool wasTopChatEverEnabledThisSession; // @dynamic wasTopChatEverEnabledThisSession;

@end
