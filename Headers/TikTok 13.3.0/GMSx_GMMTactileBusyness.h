//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMMTactileHourlyBusyness, NSMutableArray, NSString;

@interface GMSx_GMMTactileBusyness : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GMSx_GMMTactileHourlyBusyness *currentHourLiveBusyness; // @dynamic currentHourLiveBusyness;
@property(copy, nonatomic) NSString *currentHourSummary; // @dynamic currentHourSummary;
@property(retain, nonatomic) NSMutableArray *dailyHoursArray; // @dynamic dailyHoursArray;
@property(readonly, nonatomic) unsigned long long dailyHoursArray_Count; // @dynamic dailyHoursArray_Count;
@property(nonatomic) _Bool hasCurrentHourLiveBusyness; // @dynamic hasCurrentHourLiveBusyness;
@property(nonatomic) _Bool hasCurrentHourSummary; // @dynamic hasCurrentHourSummary;

@end

