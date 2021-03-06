//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatStorySnapShareOperaContent-Protocol.h"

@class NSDate, NSString, SCChatMediaContentMetadata, SCStorySnapMediaContent;

@interface SCChatUserStorySnapShareOperaContent : NSObject <SCChatStorySnapShareOperaContent>
{
    NSString *_conversationId;
    SCStorySnapMediaContent *_media;
    SCChatMediaContentMetadata *_mediaMetadata;
    NSString *_messageId;
    NSString *_messageSender;
    NSDate *_messageTimestamp;
    long long _messageType;
    NSString *_storyId;
}

@property(readonly, nonatomic) NSString *storyId; // @synthesize storyId=_storyId;
@property(readonly, nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(readonly, copy, nonatomic) NSDate *messageTimestamp; // @synthesize messageTimestamp=_messageTimestamp;
@property(readonly, copy, nonatomic) NSString *messageSender; // @synthesize messageSender=_messageSender;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) SCChatMediaContentMetadata *mediaMetadata; // @synthesize mediaMetadata=_mediaMetadata;
@property(readonly, nonatomic) SCStorySnapMediaContent *media; // @synthesize media=_media;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (void).cxx_destruct;
- (void)invalidateContent;
- (void)unarchiveContentWithCompletion:(CDUnknownBlockType)arg1;
- (long long)mediaType;
- (_Bool)isLoadStateFailed;
- (_Bool)isContentUnarchived;
- (_Bool)isContentLoadedInCache;
- (void)loadContent;
@property(readonly, nonatomic) NSString *operaPageId;
- (id)initWithConversationId:(id)arg1 messageId:(id)arg2 media:(id)arg3 mediaMetadata:(id)arg4 messageType:(long long)arg5 messageSender:(id)arg6 messageTimestamp:(id)arg7 storyId:(id)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

