//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBUInt32ObjectDictionary;

@interface SCSFFSServerSyncToken : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) GPBUInt32ObjectDictionary *feedTokens; // @dynamic feedTokens;
@property(readonly, nonatomic) unsigned long long feedTokens_Count; // @dynamic feedTokens_Count;

@end

