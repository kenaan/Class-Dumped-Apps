//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString, YTIBrowseEndpointContextSupportedConfigs, YTIBrowseEndpointFormData, YTIDataSyncPath;

@interface YTIBrowseEndpoint : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) YTIBrowseEndpointContextSupportedConfigs *browseEndpointContextSupportedConfigs; // @dynamic browseEndpointContextSupportedConfigs;
@property(copy, nonatomic) NSString *browseId; // @dynamic browseId;
@property(copy, nonatomic) NSString *canonicalBaseURL; // @dynamic canonicalBaseURL;
@property(retain, nonatomic) YTIDataSyncPath *consistencyTokenPath; // @dynamic consistencyTokenPath;
@property(retain, nonatomic) YTIBrowseEndpointFormData *formData; // @dynamic formData;
@property(nonatomic) _Bool hasBrowseEndpointContextSupportedConfigs; // @dynamic hasBrowseEndpointContextSupportedConfigs;
@property(nonatomic) _Bool hasBrowseId; // @dynamic hasBrowseId;
@property(nonatomic) _Bool hasCanonicalBaseURL; // @dynamic hasCanonicalBaseURL;
@property(nonatomic) _Bool hasConsistencyTokenPath; // @dynamic hasConsistencyTokenPath;
@property(nonatomic) _Bool hasFormData; // @dynamic hasFormData;
@property(nonatomic) _Bool hasNofollow; // @dynamic hasNofollow;
@property(nonatomic) _Bool hasOffline; // @dynamic hasOffline;
@property(nonatomic) _Bool hasParams; // @dynamic hasParams;
@property(nonatomic) _Bool hasParentTabIdentifier; // @dynamic hasParentTabIdentifier;
@property(nonatomic) _Bool hasQuery; // @dynamic hasQuery;
@property(nonatomic) _Bool nofollow; // @dynamic nofollow;
@property(nonatomic) _Bool offline; // @dynamic offline;
@property(copy, nonatomic) NSString *params; // @dynamic params;
@property(copy, nonatomic) NSString *parentTabIdentifier; // @dynamic parentTabIdentifier;
@property(copy, nonatomic) NSString *query; // @dynamic query;

@end
