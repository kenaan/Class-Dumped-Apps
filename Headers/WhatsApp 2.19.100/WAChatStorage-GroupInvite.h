//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Core/WAChatStorage.h>

@interface WAChatStorage (GroupInvite)
- (id)revokeRecentGroupInviteMessagesInChatSessionWithUserJID:(id)arg1 forGroupJID:(id)arg2 isFromMe:(_Bool)arg3 beforeDate:(id)arg4;
- (void)markOutgoingGroupInvitesAsRevokedForGroupJID:(id)arg1 toParticipants:(id)arg2;
- (void)markIncomingGroupInvitesAsRevokedForGroupJID:(id)arg1 fromInviterUserJID:(id)arg2 beforeDate:(id)arg3;
@end
