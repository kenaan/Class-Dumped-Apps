//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMPostContributionThanksPageParameters, GMSx_GMTTLoggingContext, NSMutableArray;

@interface GMSx_GMMTactileVoteOnPendingEditRequestProto : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLoggingContext; // @dynamic hasLoggingContext;
@property(nonatomic) _Bool hasPostContributionThanksPageParameters; // @dynamic hasPostContributionThanksPageParameters;
@property(retain, nonatomic) GMSx_GMTTLoggingContext *loggingContext; // @dynamic loggingContext;
@property(retain, nonatomic) GMSx_GMMPostContributionThanksPageParameters *postContributionThanksPageParameters; // @dynamic postContributionThanksPageParameters;
@property(retain, nonatomic) NSMutableArray *voteOnPendingEditArray; // @dynamic voteOnPendingEditArray;
@property(readonly, nonatomic) unsigned long long voteOnPendingEditArray_Count; // @dynamic voteOnPendingEditArray_Count;

@end

