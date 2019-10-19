//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBInt64ObjectDictionary, HTSLiveCommon, NSMutableArray, NSString;

@interface HTSLiveLinkMicMethod : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *accessKey; // @dynamic accessKey;
@property(nonatomic) long long anchorLinkmicId; // @dynamic anchorLinkmicId;
@property(nonatomic) long long answer; // @dynamic answer;
@property(nonatomic) long long channelId; // @dynamic channelId;
@property(retain, nonatomic) HTSLiveCommon *common; // @dynamic common;
@property(nonatomic) int confluenceType; // @dynamic confluenceType;
@property(retain, nonatomic) GPBInt64ObjectDictionary *contributors; // @dynamic contributors;
@property(readonly, nonatomic) unsigned long long contributors_Count; // @dynamic contributors_Count;
@property(nonatomic) long long dimension; // @dynamic dimension;
@property(nonatomic) long long duration; // @dynamic duration;
@property(nonatomic) long long fanTicket; // @dynamic fanTicket;
@property(nonatomic) long long fromRoomId; // @dynamic fromRoomId;
@property(nonatomic) long long fromUserId; // @dynamic fromUserId;
@property(nonatomic) _Bool hasCommon; // @dynamic hasCommon;
@property(nonatomic) long long inviteType; // @dynamic inviteType;
@property(nonatomic) long long inviteUid; // @dynamic inviteUid;
@property(nonatomic) long long layout; // @dynamic layout;
@property(nonatomic) long long linkmicLayout; // @dynamic linkmicLayout;
@property(nonatomic) long long matchType; // @dynamic matchType;
@property(nonatomic) long long messageType; // @dynamic messageType;
@property(copy, nonatomic) NSString *prompts; // @dynamic prompts;
@property(nonatomic) long long startTime; // @dynamic startTime;
@property(nonatomic) long long startTimeMs; // @dynamic startTimeMs;
@property(copy, nonatomic) NSString *theme; // @dynamic theme;
@property(copy, nonatomic) NSString *tips; // @dynamic tips;
@property(nonatomic) long long toUserId; // @dynamic toUserId;
@property(nonatomic) long long totalLinkmicFanTicket; // @dynamic totalLinkmicFanTicket;
@property(nonatomic) long long userId; // @dynamic userId;
@property(retain, nonatomic) NSMutableArray *userScoresArray; // @dynamic userScoresArray;
@property(readonly, nonatomic) unsigned long long userScoresArray_Count; // @dynamic userScoresArray_Count;
@property(nonatomic) long long vendor; // @dynamic vendor;
@property(nonatomic) _Bool win; // @dynamic win;

@end

