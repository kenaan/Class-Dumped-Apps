//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEIMConversationMessage-Protocol.h"
#import "AWEIMMessageDataProtocol-Protocol.h"
#import "TIMMessageStoreChangesObserver-Protocol.h"
#import "TIMOChangeObserverDelegate-Protocol.h"
#import "TIMOMessageSenderDelegate-Protocol.h"
#import "TIMOMessagesDataSourceDelegate-Protocol.h"

@class AWEIMNewAwemeMessage, NSMutableArray, NSString, TIMOConversation, TIMOMessagesInConversationDataSource, TIMOStrangerConversationDataSource;
@protocol AWEIMMessageDataControllerDelegate;

@interface AWEIMNewMessageDataController : NSObject <TIMOMessagesDataSourceDelegate, TIMOChangeObserverDelegate, TIMOMessageSenderDelegate, TIMMessageStoreChangesObserver, AWEIMConversationMessage, AWEIMMessageDataProtocol>
{
    _Bool _useInStrangerChat;
    _Bool _showFolloweeAwemeMessage;
    _Bool _conversationRemoved;
    _Bool _fetchingHistory;
    _Bool _hasMore;
    id <AWEIMMessageDataControllerDelegate> _delegate;
    NSMutableArray *_messageGroupArray;
    TIMOMessagesInConversationDataSource *_dataSource;
    NSString *_messageChangeObserverToken;
    NSString *_sendObserverToken;
    NSString *_sessionId;
    TIMOConversation *_conversation;
    TIMOStrangerConversationDataSource *_strangerConversationDataSource;
    CDUnknownBlockType _fetchHistoryCompletion;
    AWEIMNewAwemeMessage *_fakeAwemeMsg;
}

@property(retain, nonatomic) AWEIMNewAwemeMessage *fakeAwemeMsg; // @synthesize fakeAwemeMsg=_fakeAwemeMsg;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(copy, nonatomic) CDUnknownBlockType fetchHistoryCompletion; // @synthesize fetchHistoryCompletion=_fetchHistoryCompletion;
@property(nonatomic) _Bool fetchingHistory; // @synthesize fetchingHistory=_fetchingHistory;
@property(retain, nonatomic) TIMOStrangerConversationDataSource *strangerConversationDataSource; // @synthesize strangerConversationDataSource=_strangerConversationDataSource;
@property(retain, nonatomic) TIMOConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool conversationRemoved; // @synthesize conversationRemoved=_conversationRemoved;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSString *sendObserverToken; // @synthesize sendObserverToken=_sendObserverToken;
@property(retain, nonatomic) NSString *messageChangeObserverToken; // @synthesize messageChangeObserverToken=_messageChangeObserverToken;
@property(retain, nonatomic) TIMOMessagesInConversationDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool showFolloweeAwemeMessage; // @synthesize showFolloweeAwemeMessage=_showFolloweeAwemeMessage;
@property(nonatomic) _Bool useInStrangerChat; // @synthesize useInStrangerChat=_useInStrangerChat;
@property(retain, nonatomic) NSMutableArray *messageGroupArray; // @synthesize messageGroupArray=_messageGroupArray;
@property(nonatomic) __weak id <AWEIMMessageDataControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onConversationCleared:(id)arg1;
- (_Bool)isFakeMessage:(id)arg1;
- (void)message:(id)arg1 inConversation:(id)arg2 didReceiveResponse:(id)arg3 error:(id)arg4;
- (void)handleClickUnblockNoti:(id)arg1;
- (void)conversationDidDeleted:(id)arg1;
- (void)prepareToSendMessageWithBlock:(CDUnknownBlockType)arg1;
- (void)setConversationBusinessChat:(_Bool)arg1;
- (void)sendImages:(id)arg1 checkText:(id)arg2 fromGallery:(_Bool)arg3 originMD5:(id)arg4;
- (void)sendVideoWithLocalURL:(id)arg1 firstFrameImage:(id)arg2 coverImage:(id)arg3 videoText:(id)arg4 fromGallery:(_Bool)arg5 originVideoMD5:(id)arg6;
- (void)resendMessage:(id)arg1;
- (void)sendMessage:(id)arg1 mentionUsers:(id)arg2;
- (void)refreshWithMessageList:(id)arg1;
- (void)deleteMessage:(id)arg1;
- (void)markMessageRead;
- (void)p_fetchHistoryMessageList:(CDUnknownBlockType)arg1;
- (void)fetchHistoryMessageList:(CDUnknownBlockType)arg1;
- (void)messageDataSource:(id)arg1 didUpdateWithUpdate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messageUpdated:(id)arg1 inConversation:(id)arg2;
- (void)p_checkMessage:(id)arg1;
- (void)unbindSessionId;
- (void)bindSessionId:(id)arg1;
- (void)sendUserAction:(long long)arg1 extra:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)insertMessageIntoPlaceholderGroup:(id)arg1;
- (void)insertMemoryMessage:(id)arg1;
- (void)p_commonSetup;
- (void)didFinishBlockUser:(id)arg1 status:(long long)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

