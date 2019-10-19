//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol AWEAddFriendListManager <NSObject>
- (void)updateRegisteredUsers:(NSArray *)arg1;
- (void)updateUnregisteredUserList:(NSArray *)arg1;
- (long long)socialType;
- (NSString *)emptyDescription;
- (NSString *)social;
- (NSString *)title;
- (void)refreshWithSocial:(NSString *)arg1 completion:(void (^)(NSArray *, NSError *))arg2;
- (NSArray *)invitedUserList;
- (NSArray *)inviteUserList;
- (NSArray *)requestedUserList;
- (NSArray *)followedUserList;
- (NSArray *)unfollowedUserList;
@end

