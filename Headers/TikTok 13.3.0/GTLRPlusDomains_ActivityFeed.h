//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRCollectionObject.h"

@class GTLRDateTime, NSArray, NSString;

@interface GTLRPlusDomains_ActivityFeed : GTLRCollectionObject
{
}

+ (id)arrayPropertyToClassMap;
+ (id)propertyToJSONKeyMap;

// Remaining properties
@property(copy, nonatomic) NSString *ETag; // @dynamic ETag;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(retain, nonatomic) NSArray *items; // @dynamic items;
@property(copy, nonatomic) NSString *kind; // @dynamic kind;
@property(copy, nonatomic) NSString *nextLink; // @dynamic nextLink;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;
@property(copy, nonatomic) NSString *selfLink; // @dynamic selfLink;
@property(copy, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) GTLRDateTime *updated; // @dynamic updated;

@end

