//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSNumber, NSObject, NSString;
@protocol OS_dispatch_queue, TIMConversationCoreInfoModelProtocol, TIMConversationLocalInfoModelProtocol, TIMConversationModelProtocol, TIMConversationSettingsInfoModelProtocol, TIMFileModelProtocol, TIMMessageModelProtocol, TIMMessagePropertyModelProtocol, TIMMessageStoreChangesObserver, TIMParticipantModelProtocol;

@protocol TIMMessageStoreProtocol <NSObject>
- (void)removeAllParticipantReadReceiptsInConversation:(NSString *)arg1;
- (void)removeParticipants:(NSArray *)arg1 participantCount:(NSNumber *)arg2 inConversation:(NSString *)arg3;
- (void)removeAllParticipantsInConversation:(NSString *)arg1;
- (void)hardDeleteAllMessagesInConversation:(NSString *)arg1;
- (void)hardDeleteFilesInConversation:(NSString *)arg1;
- (void)hardDeleteFilesBelongToMessage:(NSString *)arg1 InConversation:(NSString *)arg2;
- (void)hardDeleteConversation:(NSString *)arg1 withOptions:(unsigned long long)arg2;
- (void)hardDeleteConversation:(NSString *)arg1;
- (void)updateMessageProperty:(NSString *)arg1 alterBlock:(void (^)(id <TIMMessagePropertyModelProtocol>))arg2;
- (void)updateFile:(NSString *)arg1 alterBlock:(void (^)(id <TIMFileModelProtocol>))arg2;
- (void)markAllConversationsAsRead:(NSMutableDictionary *)arg1 readIndexChangedConversationModels:(NSMutableArray *)arg2;
- (void)markConversationAsRead:(NSString *)arg1 tillIndex:(NSNumber *)arg2;
- (void)softDeleteMessageWithIdentifier:(NSString *)arg1 inConversationWithIdentifier:(NSString *)arg2;
- (void)updateConversation:(NSString *)arg1 alterBlock:(void (^)(id <TIMConversationModelProtocol>, id <TIMConversationCoreInfoModelProtocol>, id <TIMConversationSettingsInfoModelProtocol>, id <TIMConversationLocalInfoModelProtocol>))arg2;
- (void)updateMessage:(NSString *)arg1 inConversationWithIdentifier:(NSString *)arg2 alterBlock:(void (^)(id <TIMMessageModelProtocol>))arg3;
- (NSArray *)neverUpdatedTicketConversations;
- (NSString *)oldestUnreadMentionMessageInConversation:(NSString *)arg1;
- (NSArray *)participantReadReceiptsInConversation:(NSString *)arg1;
- (id <TIMParticipantModelProtocol>)maxSortOrderParticipantInConversation:(NSString *)arg1;
- (NSArray *)participantsInConversation:(NSString *)arg1;
- (NSArray *)filesBelongToMessage:(NSString *)arg1 InConversation:(NSString *)arg2;
- (id <TIMFileModelProtocol>)fileWithIdentifier:(NSString *)arg1;
- (id <TIMConversationLocalInfoModelProtocol>)conversationLocalInfoWithIdentifier:(NSString *)arg1;
- (id <TIMConversationSettingsInfoModelProtocol>)conversationSettingsInfoWithIdentifier:(NSString *)arg1;
- (id <TIMConversationCoreInfoModelProtocol>)conversationCoreInfoWithIdentifier:(NSString *)arg1;
- (id <TIMConversationModelProtocol>)conversationWithIdentifier:(NSString *)arg1;
- (NSArray *)conversations;
- (NSArray *)messagesInConversation:(NSString *)arg1 afterMessage:(NSString *)arg2 limit:(unsigned long long)arg3 includeSoftDeleted:(_Bool)arg4;
- (NSArray *)messagesInConversation:(NSString *)arg1 beforeMessage:(NSString *)arg2 limit:(unsigned long long)arg3 includeSoftDeleted:(_Bool)arg4;
- (id <TIMMessageModelProtocol>)deleteAnchorMessagesInConversation:(NSString *)arg1;
- (id <TIMMessageModelProtocol>)firstVisibleUnreadMessageInConversation:(NSString *)arg1;
- (NSArray *)messagesBeforeOrderIndex:(long long)arg1 limit:(unsigned long long)arg2 includeSoftDeleted:(_Bool)arg3;
- (long long)minOrderIndex;
- (long long)maxOrderIndex;
- (long long)maxPropertyOrderIndexInMessageWithIdentifier:(NSString *)arg1 inConversationWithIdentifier:(NSString *)arg2 type:(int)arg3;
- (id <TIMMessagePropertyModelProtocol>)messagePropertyWithIdentifier:(NSString *)arg1;
- (NSArray *)messagePropertiesInTargetMessageIdentifier:(NSString *)arg1 propertyType:(int)arg2;
- (long long)minPullIndexInConversationWithIdentifier:(NSString *)arg1;
- (long long)maxPullIndexInConversationWithIdentifier:(NSString *)arg1;
- (long long)maxOrderIndexInConversationWithIdentifier:(NSString *)arg1;
- (id <TIMMessageModelProtocol>)messageWithServerMessageID:(long long)arg1 inConversationWithIdentifier:(NSString *)arg2;
- (id <TIMMessageModelProtocol>)messageWithPullIndex:(long long)arg1 inConversationWithIdentifier:(NSString *)arg2;
- (id <TIMMessageModelProtocol>)messageWithLocalMessageID:(long long)arg1 deviceID:(NSString *)arg2 inConversationWithIdentifier:(NSString *)arg3;
- (NSArray *)messagesBelongingInMessageTypes:(NSArray *)arg1 inConversation:(NSString *)arg2;
- (id <TIMMessageModelProtocol>)messageWithIdentifier:(NSString *)arg1 inConversationWithIdentifier:(NSString *)arg2;
- (void)insertParticipantReadReceipts:(NSArray *)arg1;
- (void)insertParticipantsInConversation:(NSString *)arg1 participants:(NSArray *)arg2;
- (void)overrideAllParticipantsInConversation:(NSString *)arg1 participants:(NSArray *)arg2;
- (void)insertFile:(id <TIMFileModelProtocol>)arg1;
- (void)insertConversationWithIdentifier:(NSString *)arg1 type:(int)arg2 configBlock:(void (^)(id <TIMConversationModelProtocol>, id <TIMConversationCoreInfoModelProtocol>, id <TIMConversationSettingsInfoModelProtocol>, id <TIMConversationLocalInfoModelProtocol>))arg3;
- (void)insertMessageProperties:(NSArray *)arg1;
- (void)insertMessages:(NSArray *)arg1 conversationTypes:(NSDictionary *)arg2 conversationShortIDs:(NSDictionary *)arg3 files:(NSDictionary *)arg4 inbox:(int)arg5 reason:(NSString *)arg6;
- (void)removeObserverWithIdentifier:(NSString *)arg1;
- (NSString *)addSyncWeakChangesObserver:(id <TIMMessageStoreChangesObserver>)arg1 priority:(int)arg2;
- (NSString *)addWeakChangesObserver:(id <TIMMessageStoreChangesObserver>)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2 priority:(int)arg3;
- (NSString *)addWeakChangesObserver:(id <TIMMessageStoreChangesObserver>)arg1 onQueue:(NSObject<OS_dispatch_queue> *)arg2;
- (void)removeDatabaseInstanceForUser:(long long)arg1 completion:(void (^)(void))arg2;
- (NSObject<OS_dispatch_queue> *)sharedNotifyQueue;
- (NSObject<OS_dispatch_queue> *)sharedWritableQueue;
@end

