//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol TIMKeyValueStoreProtocol, TIMMessageStoreProtocol;

@interface TIMSingleStrategyPuller : NSObject
{
    int _inbox;
    long long _userID;
    id <TIMMessageStoreProtocol> _db;
    id <TIMKeyValueStoreProtocol> _kv;
}

@property(retain, nonatomic) id <TIMKeyValueStoreProtocol> kv; // @synthesize kv=_kv;
@property(retain, nonatomic) id <TIMMessageStoreProtocol> db; // @synthesize db=_db;
@property(nonatomic) int inbox; // @synthesize inbox=_inbox;
@property(nonatomic) long long userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
- (void)notifyConversationHasNewMessage:(id)arg1;
- (void)kickoff;
- (id)initWithInbox:(int)arg1 userID:(long long)arg2;

@end

