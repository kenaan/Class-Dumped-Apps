//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class MLBLogData, NSMutableArray;

@interface MLBLogResponse : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool deletedAnalytics; // @dynamic deletedAnalytics;
@property(nonatomic) _Bool hasDeletedAnalytics; // @dynamic hasDeletedAnalytics;
@property(nonatomic) _Bool hasLogData; // @dynamic hasLogData;
@property(retain, nonatomic) MLBLogData *logData; // @dynamic logData;
@property(retain, nonatomic) NSMutableArray *logFileMetadataArray; // @dynamic logFileMetadataArray;
@property(readonly, nonatomic) unsigned long long logFileMetadataArray_Count; // @dynamic logFileMetadataArray_Count;

@end
