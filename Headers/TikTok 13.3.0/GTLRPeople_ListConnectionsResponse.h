//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRCollectionObject.h"

@class NSArray, NSString;

@interface GTLRPeople_ListConnectionsResponse : GTLRCollectionObject
{
}

+ (id)collectionItemsKey;
+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *connections; // @dynamic connections;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;
@property(copy, nonatomic) NSString *nextSyncToken; // @dynamic nextSyncToken;

@end

