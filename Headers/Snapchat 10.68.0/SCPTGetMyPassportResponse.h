//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCPTGetMyPassportResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *achievementsArray; // @dynamic achievementsArray;
@property(readonly, nonatomic) unsigned long long achievementsArray_Count; // @dynamic achievementsArray_Count;
@property(nonatomic) unsigned int cityCount; // @dynamic cityCount;
@property(nonatomic) unsigned int countryCount; // @dynamic countryCount;
@property(retain, nonatomic) NSMutableArray *entryListArray; // @dynamic entryListArray;
@property(readonly, nonatomic) unsigned long long entryListArray_Count; // @dynamic entryListArray_Count;
@property(nonatomic) double generatingProgress; // @dynamic generatingProgress;
@property(copy, nonatomic) NSString *nextPageToken; // @dynamic nextPageToken;
@property(nonatomic) unsigned int placeCount; // @dynamic placeCount;
@property(nonatomic) int state; // @dynamic state;

@end

