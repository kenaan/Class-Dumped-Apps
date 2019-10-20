//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRStorageQuery.h"

@class NSString;

@interface GTLRStorageQuery_ObjectsCopy : GTLRStorageQuery
{
}

+ (id)queryForMediaWithObject:(id)arg1 sourceBucket:(id)arg2 sourceObject:(id)arg3 destinationBucket:(id)arg4 destinationObject:(id)arg5;
+ (id)queryWithObject:(id)arg1 sourceBucket:(id)arg2 sourceObject:(id)arg3 destinationBucket:(id)arg4 destinationObject:(id)arg5;

// Remaining properties
@property(copy, nonatomic) NSString *destinationBucket; // @dynamic destinationBucket;
@property(copy, nonatomic) NSString *destinationObject; // @dynamic destinationObject;
@property(copy, nonatomic) NSString *destinationPredefinedAcl; // @dynamic destinationPredefinedAcl;
@property(nonatomic) long long ifGenerationMatch; // @dynamic ifGenerationMatch;
@property(nonatomic) long long ifGenerationNotMatch; // @dynamic ifGenerationNotMatch;
@property(nonatomic) long long ifMetagenerationMatch; // @dynamic ifMetagenerationMatch;
@property(nonatomic) long long ifMetagenerationNotMatch; // @dynamic ifMetagenerationNotMatch;
@property(nonatomic) long long ifSourceGenerationMatch; // @dynamic ifSourceGenerationMatch;
@property(nonatomic) long long ifSourceGenerationNotMatch; // @dynamic ifSourceGenerationNotMatch;
@property(nonatomic) long long ifSourceMetagenerationMatch; // @dynamic ifSourceMetagenerationMatch;
@property(nonatomic) long long ifSourceMetagenerationNotMatch; // @dynamic ifSourceMetagenerationNotMatch;
@property(copy, nonatomic) NSString *projection; // @dynamic projection;
@property(copy, nonatomic) NSString *sourceBucket; // @dynamic sourceBucket;
@property(nonatomic) long long sourceGeneration; // @dynamic sourceGeneration;
@property(copy, nonatomic) NSString *sourceObject; // @dynamic sourceObject;

@end
