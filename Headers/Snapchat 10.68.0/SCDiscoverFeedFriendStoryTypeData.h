//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCFriendsFeedGroup, SCFriendsFeedSnapchatter;

@interface SCDiscoverFeedFriendStoryTypeData : NSObject <NSCopying>
{
    unsigned long long _subtype;
    SCFriendsFeedSnapchatter *_friendStory_friend;
    SCFriendsFeedGroup *_groupChatStory_group;
    NSString *_groupChatStory_publicationId;
    _Bool _customStory_currentUserCanPost;
    _Bool _geoStory_currentUserCanPost;
}

+ (id)privateStory;
+ (id)groupChatStoryWithGroup:(id)arg1 publicationId:(id)arg2;
+ (id)geoStoryWithCurrentUserCanPost:(_Bool)arg1;
+ (id)friendStoryWithFriend:(id)arg1;
+ (id)customStoryWithCurrentUserCanPost:(_Bool)arg1;
- (void).cxx_destruct;
- (void)matchFriendStory:(CDUnknownBlockType)arg1 groupChatStory:(CDUnknownBlockType)arg2 customStory:(CDUnknownBlockType)arg3 privateStory:(CDUnknownBlockType)arg4 geoStory:(CDUnknownBlockType)arg5;
- (_Bool)isEqual:(id)arg1;
- (id)internalInit;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

