//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMGaiaResponseProto, GMSx_GPBEnumArray, NSString;

@interface GMSx_GMMReviewResponseProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GPBEnumArray *additionalDestinationReplyArray; // @dynamic additionalDestinationReplyArray;
@property(readonly, nonatomic) unsigned long long additionalDestinationReplyArray_Count; // @dynamic additionalDestinationReplyArray_Count;
@property(retain, nonatomic) GMSx_GMMGaiaResponseProto *gaiaReply; // @dynamic gaiaReply;
@property(nonatomic) _Bool hasGaiaReply; // @dynamic hasGaiaReply;
@property(nonatomic) _Bool hasNumberOfReviewsToRecommendationThreshold; // @dynamic hasNumberOfReviewsToRecommendationThreshold;
@property(nonatomic) _Bool hasPersistenceKey; // @dynamic hasPersistenceKey;
@property(nonatomic) _Bool hasReply; // @dynamic hasReply;
@property(nonatomic) _Bool hasReviewURL; // @dynamic hasReviewURL;
@property(nonatomic) int numberOfReviewsToRecommendationThreshold; // @dynamic numberOfReviewsToRecommendationThreshold;
@property(copy, nonatomic) NSString *persistenceKey; // @dynamic persistenceKey;
@property(nonatomic) int reply; // @dynamic reply;
@property(copy, nonatomic) NSString *reviewURL; // @dynamic reviewURL;

@end

