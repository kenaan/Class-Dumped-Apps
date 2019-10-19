//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface AwemeSearchStructV2 : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *challengeId; // @dynamic challengeId;
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasChallengeId; // @dynamic hasChallengeId;
@property(nonatomic) _Bool hasGroupId; // @dynamic hasGroupId;
@property(nonatomic) _Bool hasRank; // @dynamic hasRank;
@property(nonatomic) _Bool hasSearchWord; // @dynamic hasSearchWord;
@property(nonatomic) _Bool hasSentence; // @dynamic hasSentence;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(nonatomic) _Bool hasVbRank; // @dynamic hasVbRank;
@property(nonatomic) _Bool hasVbRankValue; // @dynamic hasVbRankValue;
@property(nonatomic) int rank; // @dynamic rank;
@property(copy, nonatomic) NSString *searchWord; // @dynamic searchWord;
@property(copy, nonatomic) NSString *sentence; // @dynamic sentence;
@property(nonatomic) long long value; // @dynamic value;
@property(nonatomic) int vbRank; // @dynamic vbRank;
@property(nonatomic) long long vbRankValue; // @dynamic vbRankValue;

@end

