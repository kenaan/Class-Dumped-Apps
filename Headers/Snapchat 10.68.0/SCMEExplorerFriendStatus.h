//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface SCMEExplorerFriendStatus : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *status; // @dynamic status;
@property(retain, nonatomic) NSMutableArray *statusDataArray; // @dynamic statusDataArray;
@property(readonly, nonatomic) unsigned long long statusDataArray_Count; // @dynamic statusDataArray_Count;
@property(nonatomic) int statusType; // @dynamic statusType;
@property(nonatomic) double zoom; // @dynamic zoom;

@end

