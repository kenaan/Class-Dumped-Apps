//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDate, NSDictionary, NSString;

@protocol TIMStrangerMessageProtocol <NSObject, NSCoding>
@property(readonly, nonatomic) NSDictionary *syncedExt;
@property(readonly, copy, nonatomic) NSDate *createdAt;
@property(readonly, nonatomic) long long messageType;
@property(readonly, copy, nonatomic) NSDictionary *content;
@property(readonly, nonatomic) long long sender;
@property(readonly, copy, nonatomic) NSString *belongingConversationIdentifier;
@property(readonly, nonatomic) long long serverMessageID;
@property(readonly, copy, nonatomic) NSString *identifier;
@end

