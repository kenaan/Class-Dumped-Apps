//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRStorageQuery.h"

@class NSString;

@interface GTLRStorageQuery_ObjectsWatchAll : GTLRStorageQuery
{
}

+ (id)queryWithObject:(id)arg1 bucket:(id)arg2;

// Remaining properties
@property(copy, nonatomic) NSString *bucket; // @dynamic bucket;
@property(copy, nonatomic) NSString *delimiter; // @dynamic delimiter;
@property(nonatomic) unsigned long long maxResults; // @dynamic maxResults;
@property(copy, nonatomic) NSString *pageToken; // @dynamic pageToken;
@property(copy, nonatomic) NSString *prefix; // @dynamic prefix;
@property(copy, nonatomic) NSString *projection; // @dynamic projection;
@property(nonatomic) _Bool versions; // @dynamic versions;

@end

