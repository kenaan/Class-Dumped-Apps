//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TIMMessageUpdaterProtocol <NSObject>
- (void)removePropertyItemForMessage:(NSString *)arg1 inConversation:(NSString *)arg2 withKey:(NSString *)arg3 idempotentID:(NSString *)arg4 completion:(void (^)(NSError *))arg5;
- (void)addPropertyItemForMessage:(NSString *)arg1 inConversation:(NSString *)arg2 withKey:(NSString *)arg3 value:(NSString *)arg4 idempotentID:(NSString *)arg5 completion:(void (^)(NSError *))arg6;
- (void)recallMessage:(NSString *)arg1 inConversation:(NSString *)arg2 completion:(void (^)(NSError *))arg3;
@end
