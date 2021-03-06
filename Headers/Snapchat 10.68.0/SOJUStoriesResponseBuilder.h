//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSNumber, NSString, SOJUBroadcastStoriesOrderingOrderingResponse, SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig, SOJUServerInfoResponse;

@interface SOJUStoriesResponseBuilder : NSObject
{
    NSArray *_myStories;
    NSArray *_myStoriesWithCollabs;
    NSArray *_friendStories;
    NSArray *_myGroupStories;
    NSArray *_myVerifiedStories;
    NSDictionary *_matureContentText;
    NSNumber *_friendStoriesDelta;
    SOJUBroadcastStoriesOrderingOrderingResponse *_orderingResponse;
    SOJUServerInfoResponse *_serverInfo;
    SOJUBroadcastUserStoryPrecachingUserStoriesPrecacheConfig *_userStoriesPrecacheConfig;
    NSArray *_myMobStories;
    NSString *_syncMetadata;
    NSNumber *_unsignedReceipt;
    NSString *_responseType;
    NSDictionary *_deletedFriendStories;
    NSNumber *_paginate;
}

+ (id)withJUStoriesResponse:(id)arg1;
- (void).cxx_destruct;
- (id)setPaginate:(id)arg1;
- (id)setDeletedFriendStories:(id)arg1;
- (id)setResponseType:(id)arg1;
- (id)setUnsignedReceipt:(id)arg1;
- (id)setSyncMetadata:(id)arg1;
- (id)setMyMobStories:(id)arg1;
- (id)setUserStoriesPrecacheConfig:(id)arg1;
- (id)setServerInfo:(id)arg1;
- (id)setOrderingResponse:(id)arg1;
- (id)setFriendStoriesDelta:(id)arg1;
- (id)setMatureContentText:(id)arg1;
- (id)setMyVerifiedStories:(id)arg1;
- (id)setMyGroupStories:(id)arg1;
- (id)setFriendStories:(id)arg1;
- (id)setMyStoriesWithCollabs:(id)arg1;
- (id)setMyStories:(id)arg1;
- (id)build;
- (id)setPaginateValue:(_Bool)arg1;
- (id)setResponseTypeEnum:(long long)arg1;
- (id)setUnsignedReceiptValue:(_Bool)arg1;
- (id)setFriendStoriesDeltaValue:(_Bool)arg1;

@end

