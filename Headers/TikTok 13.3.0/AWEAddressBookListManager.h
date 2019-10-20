//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSNumber;

@interface AWEAddressBookListManager : NSObject
{
    _Bool _hasMore;
    NSMutableArray *_addressBookUnfollowList;
    NSMutableArray *_addressBookFollowList;
    NSMutableArray *_addressBookUnregisteredList;
    NSMutableArray *_addressBookUserList;
    NSNumber *_type;
    NSNumber *_cursor;
    NSNumber *_registerCount;
}

@property(retain, nonatomic) NSNumber *registerCount; // @synthesize registerCount=_registerCount;
@property(nonatomic) _Bool hasMore; // @synthesize hasMore=_hasMore;
@property(retain, nonatomic) NSNumber *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) NSNumber *type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableArray *addressBookUserList; // @synthesize addressBookUserList=_addressBookUserList;
@property(retain, nonatomic) NSMutableArray *addressBookUnregisteredList; // @synthesize addressBookUnregisteredList=_addressBookUnregisteredList;
@property(retain, nonatomic) NSMutableArray *addressBookFollowList; // @synthesize addressBookFollowList=_addressBookFollowList;
@property(retain, nonatomic) NSMutableArray *addressBookUnfollowList; // @synthesize addressBookUnfollowList=_addressBookUnfollowList;
- (void).cxx_destruct;
- (void)updateInvitationStatusForUsers:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)inviteUser:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadMore:(CDUnknownBlockType)arg1;
- (_Bool)canLoadMore;
- (void)refresh:(CDUnknownBlockType)arg1;
- (void)refresh:(CDUnknownBlockType)arg1 needDegraded:(_Bool)arg2;
- (id)userList;
- (id)unregisteredUserList;
- (id)followedUserList;
- (id)unfollowedUserList;
- (id)init;

@end
