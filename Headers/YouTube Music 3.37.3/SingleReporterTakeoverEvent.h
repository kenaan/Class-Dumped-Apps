//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@interface SingleReporterTakeoverEvent : GPBMessage
{
}

+ (id)descriptor;
+ (id)eventWithTakeoverReason:(int)arg1;

// Remaining properties
@property(nonatomic) _Bool hasTakeoverReason; // @dynamic hasTakeoverReason;
@property(nonatomic) int takeoverReason; // @dynamic takeoverReason;

@end
