//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCInviteFriendStateListener-Protocol.h"
#import "SCPostRegAddFriendsTrackingDelegate-Protocol.h"
#import "SCSnapchattersDataRequestListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSMutableSet, NSString, SCInviteFriendStateTracker;
@protocol SCAddFriendsInRegOutgoingFriendsObservingDelegate, SCPostRegAddFriendsTracking, SCSnapchattersDataTracking;

@interface SCAddFriendsInRegOutgoingFriendsObserver : NSObject <SCTraceEnabled, SCSnapchattersDataRequestListener, SCPostRegAddFriendsTrackingDelegate, SCInviteFriendStateListener>
{
    id <SCSnapchattersDataTracking> _snapchattersDataTracker;
    id <SCPostRegAddFriendsTracking> _postRegAddFriendsTracking;
    SCInviteFriendStateTracker *_inviteFriendStateTracker;
    _Bool _hasAddedFriends;
    _Bool _hasInvitedContacts;
    NSMutableSet *_addedSnapchatterUserIds;
    NSMutableSet *_addedRecommandedSnapchatterUserIds;
    _Bool _hasOutgoingFriends;
    id <SCAddFriendsInRegOutgoingFriendsObservingDelegate> _delegate;
}

@property(readonly, nonatomic) _Bool hasOutgoingFriends; // @synthesize hasOutgoingFriends=_hasOutgoingFriends;
@property(nonatomic) __weak id <SCAddFriendsInRegOutgoingFriendsObservingDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateHasOutgoingFriendsStatusIfNeeded;
- (void)_setHasAddedFriends:(_Bool)arg1;
- (void)didEndInvitingFriendWithPhoneNumber:(id)arg1 success:(_Bool)arg2;
- (void)didEndFetchingFriendDeeplinkForPhoneNumber:(id)arg1 deeplink:(id)arg2 success:(_Bool)arg3;
- (void)didStartFetchingFriendDeeplinkForPhoneNumber:(id)arg1;
- (void)postRegAddFriendsTracker:(id)arg1 addedFriendsDidChange:(id)arg2;
- (void)didEndSnapchattersUpdateDataRequest:(id)arg1 withSuccess:(_Bool)arg2;
- (void)didStartSnapchattersUpdateDataRequest:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfInvitedFriends;
@property(readonly, nonatomic) unsigned long long numberOfAddedRecommandedFriends;
@property(readonly, nonatomic) unsigned long long numberOfAddedFriends;
- (id)initWithSnapchattersDataTracker:(id)arg1 postRegAddFriendsTracking:(id)arg2 inviteFriendStateTracker:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
