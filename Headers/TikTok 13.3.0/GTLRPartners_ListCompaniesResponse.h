//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRCollectionObject.h"

@class GTLRPartners_ResponseMetadata, NSArray, NSString;

@interface GTLRPartners_ListCompaniesResponse : GTLRCollectionObject
{
}

+ (id)collectionItemsKey;
+ (id)arrayPropertyToClassMap;

// Remaining properties
@property(retain, nonatomic) NSArray *companies; // @dynamic companies;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;
@property(retain, nonatomic) GTLRPartners_ResponseMetadata *responseMetadata; // @dynamic responseMetadata;

@end

