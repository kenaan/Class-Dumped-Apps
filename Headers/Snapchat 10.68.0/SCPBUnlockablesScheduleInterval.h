//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface SCPBUnlockablesScheduleInterval : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *endDateTime; // @dynamic endDateTime;
@property(nonatomic) long long endMillisSinceEpoch; // @dynamic endMillisSinceEpoch;
@property(copy, nonatomic) NSString *startDateTime; // @dynamic startDateTime;
@property(nonatomic) long long startMillisSinceEpoch; // @dynamic startMillisSinceEpoch;

@end
