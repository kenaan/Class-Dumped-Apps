//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray;

@interface SCR2OpeningHours_DayHours : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int day; // @dynamic day;
@property(retain, nonatomic) NSMutableArray *hoursArray; // @dynamic hoursArray;
@property(readonly, nonatomic) unsigned long long hoursArray_Count; // @dynamic hoursArray_Count;

@end

