//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRStorageQuery.h"

@class NSString;

@interface GTLRStorageQuery_BucketsGet : GTLRStorageQuery
{
}

+ (id)queryWithBucket:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *bucket; // @dynamic bucket;
@property(nonatomic) long long ifMetagenerationMatch; // @dynamic ifMetagenerationMatch;
@property(nonatomic) long long ifMetagenerationNotMatch; // @dynamic ifMetagenerationNotMatch;
@property(copy, nonatomic) NSString *projection; // @dynamic projection;

@end

