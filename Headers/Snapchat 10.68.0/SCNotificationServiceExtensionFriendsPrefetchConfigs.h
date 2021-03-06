//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface SCNotificationServiceExtensionFriendsPrefetchConfigs : NSObject <NSCopying, NSCoding>
{
    long long _prefetchFriendsTimeout;
    NSString *_deltaFriendToken;
    NSString *_deltaIncomingFriendToken;
}

@property(readonly, copy, nonatomic) NSString *deltaIncomingFriendToken; // @synthesize deltaIncomingFriendToken=_deltaIncomingFriendToken;
@property(readonly, copy, nonatomic) NSString *deltaFriendToken; // @synthesize deltaFriendToken=_deltaFriendToken;
@property(readonly, nonatomic) long long prefetchFriendsTimeout; // @synthesize prefetchFriendsTimeout=_prefetchFriendsTimeout;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPrefetchFriendsTimeout:(long long)arg1 deltaFriendToken:(id)arg2 deltaIncomingFriendToken:(id)arg3;
- (id)initWithCoder:(id)arg1;

@end

