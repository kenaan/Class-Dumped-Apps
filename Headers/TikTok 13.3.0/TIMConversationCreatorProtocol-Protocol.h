//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class BFTaskCompletionSource, NSDictionary, NSSet, NSString;

@protocol TIMConversationCreatorProtocol <NSObject>
- (BFTaskCompletionSource *)taskSourceForEnsureShortIDForSingleChat:(NSString *)arg1 shortID:(long long)arg2 type:(int)arg3 inInbox:(int)arg4;
- (void)createConversationWithOtherParticipants:(NSSet *)arg1 type:(int)arg2 inInbox:(int)arg3 idempotentID:(NSString *)arg4 bizExtension:(NSDictionary *)arg5 completion:(void (^)(NSString *, id <TIMConversationOperationResponse>, NSError *))arg6;
@end

