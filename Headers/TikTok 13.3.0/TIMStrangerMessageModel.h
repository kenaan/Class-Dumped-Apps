//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTLModel.h"

#import "TIMStrangerMessageProtocol-Protocol.h"

@class NSDate, NSDictionary, NSString;

@interface TIMStrangerMessageModel : MTLModel <TIMStrangerMessageProtocol>
{
    NSString *_identifier;
    long long _serverMessageID;
    NSString *_belongingConversationIdentifier;
    long long _sender;
    NSString *_senderSecID;
    NSDictionary *_content;
    long long _messageType;
    NSDate *_createdAt;
    NSDictionary *_syncedExt;
}

+ (id)createFromPBObject:(id)arg1;
@property(retain, nonatomic) NSDictionary *syncedExt; // @synthesize syncedExt=_syncedExt;
@property(copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(nonatomic) long long messageType; // @synthesize messageType=_messageType;
@property(copy, nonatomic) NSDictionary *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *senderSecID; // @synthesize senderSecID=_senderSecID;
@property(nonatomic) long long sender; // @synthesize sender=_sender;
@property(copy, nonatomic) NSString *belongingConversationIdentifier; // @synthesize belongingConversationIdentifier=_belongingConversationIdentifier;
@property(nonatomic) long long serverMessageID; // @synthesize serverMessageID=_serverMessageID;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

