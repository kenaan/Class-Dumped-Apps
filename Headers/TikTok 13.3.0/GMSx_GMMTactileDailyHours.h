//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GMSx_GPBMessage.h"

@class GMSx_GMTTSHStyledText, NSMutableArray;

@interface GMSx_GMMTactileDailyHours : GMSx_GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int dayOfWeek; // @dynamic dayOfWeek;
@property(nonatomic) _Bool hasDayOfWeek; // @dynamic hasDayOfWeek;
@property(nonatomic) _Bool hasIsClosed; // @dynamic hasIsClosed;
@property(nonatomic) _Bool hasLongestWaitTime; // @dynamic hasLongestWaitTime;
@property(retain, nonatomic) NSMutableArray *hourlyBusynessArray; // @dynamic hourlyBusynessArray;
@property(readonly, nonatomic) unsigned long long hourlyBusynessArray_Count; // @dynamic hourlyBusynessArray_Count;
@property(nonatomic) _Bool isClosed; // @dynamic isClosed;
@property(retain, nonatomic) GMSx_GMTTSHStyledText *longestWaitTime; // @dynamic longestWaitTime;

@end

