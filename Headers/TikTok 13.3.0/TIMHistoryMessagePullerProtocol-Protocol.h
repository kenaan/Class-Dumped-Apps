//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol TIMHistoryMessagePullerProtocol <NSObject>
- (void)loadHistoryForConversation:(NSString *)arg1 beforeMessage:(NSString *)arg2 limit:(unsigned long long)arg3 completionBlock:(void (^)(_Bool, NSArray *, NSError *))arg4;
- (void)loadHistoryForConversation:(NSString *)arg1 beforeMessage:(NSString *)arg2 visibleLimit:(unsigned long long)arg3 completionBlock:(void (^)(_Bool, NSArray *, NSError *))arg4;
@end
