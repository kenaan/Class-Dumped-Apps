//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, GPBTimestamp;

@interface SCULSyncInfo : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasLastLowSensitivityResponseTime; // @dynamic hasLastLowSensitivityResponseTime;
@property(retain, nonatomic) GPBTimestamp *lastLowSensitivityResponseTime; // @dynamic lastLowSensitivityResponseTime;
@property(retain, nonatomic) GPBEnumArray *purposeTypesArray; // @dynamic purposeTypesArray;
@property(readonly, nonatomic) unsigned long long purposeTypesArray_Count; // @dynamic purposeTypesArray_Count;

@end

