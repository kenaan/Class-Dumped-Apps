//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIInnerTubeContext, YTILegalReportDetails, YTIVideoReportDetails;

@interface YTIFlagActionRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *action; // @dynamic action;
@property(nonatomic) _Bool additionalDetailCheckboxChecked; // @dynamic additionalDetailCheckboxChecked;
@property(copy, nonatomic) NSString *audioTrackId; // @dynamic audioTrackId;
@property(copy, nonatomic) NSString *ccTrackId; // @dynamic ccTrackId;
@property(copy, nonatomic) NSString *ccTrackIsContrib; // @dynamic ccTrackIsContrib;
@property(retain, nonatomic) YTIInnerTubeContext *context; // @dynamic context;
@property(nonatomic) int elapsedMediaTimeSeconds; // @dynamic elapsedMediaTimeSeconds;
@property(nonatomic) int flagRequestType; // @dynamic flagRequestType;
@property(nonatomic) _Bool hasAction; // @dynamic hasAction;
@property(nonatomic) _Bool hasAdditionalDetailCheckboxChecked; // @dynamic hasAdditionalDetailCheckboxChecked;
@property(nonatomic) _Bool hasAudioTrackId; // @dynamic hasAudioTrackId;
@property(nonatomic) _Bool hasCcTrackId; // @dynamic hasCcTrackId;
@property(nonatomic) _Bool hasCcTrackIsContrib; // @dynamic hasCcTrackIsContrib;
@property(nonatomic) _Bool hasContext; // @dynamic hasContext;
@property(nonatomic) _Bool hasElapsedMediaTimeSeconds; // @dynamic hasElapsedMediaTimeSeconds;
@property(nonatomic) _Bool hasFlagRequestType; // @dynamic hasFlagRequestType;
@property(nonatomic) _Bool hasImpersonatedURL; // @dynamic hasImpersonatedURL;
@property(nonatomic) _Bool hasLegalCheckboxChecked; // @dynamic hasLegalCheckboxChecked;
@property(nonatomic) _Bool hasLegalReportDetails; // @dynamic hasLegalReportDetails;
@property(nonatomic) _Bool hasRelationshipToImpersonated; // @dynamic hasRelationshipToImpersonated;
@property(nonatomic) _Bool hasSubreasonCode; // @dynamic hasSubreasonCode;
@property(nonatomic) _Bool hasUserComments; // @dynamic hasUserComments;
@property(nonatomic) _Bool hasUserToBlockFocusId; // @dynamic hasUserToBlockFocusId;
@property(nonatomic) _Bool hasUserToUnblockFocusId; // @dynamic hasUserToUnblockFocusId;
@property(nonatomic) _Bool hasVideoReportDetails; // @dynamic hasVideoReportDetails;
@property(copy, nonatomic) NSString *impersonatedURL; // @dynamic impersonatedURL;
@property(nonatomic) _Bool legalCheckboxChecked; // @dynamic legalCheckboxChecked;
@property(retain, nonatomic) YTILegalReportDetails *legalReportDetails; // @dynamic legalReportDetails;
@property(copy, nonatomic) NSString *relationshipToImpersonated; // @dynamic relationshipToImpersonated;
@property(copy, nonatomic) NSString *subreasonCode; // @dynamic subreasonCode;
@property(copy, nonatomic) NSString *userComments; // @dynamic userComments;
@property(copy, nonatomic) NSString *userToBlockFocusId; // @dynamic userToBlockFocusId;
@property(copy, nonatomic) NSString *userToUnblockFocusId; // @dynamic userToUnblockFocusId;
@property(retain, nonatomic) YTIVideoReportDetails *videoReportDetails; // @dynamic videoReportDetails;

@end

