//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class YTIKidsFlowInfo;

@interface YTIKidsFlowEvent : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasKidsFlowEventType; // @dynamic hasKidsFlowEventType;
@property(nonatomic) _Bool hasKidsFlowInfo; // @dynamic hasKidsFlowInfo;
@property(nonatomic) _Bool hasKidsFlowType; // @dynamic hasKidsFlowType;
@property(nonatomic) int kidsFlowEventType; // @dynamic kidsFlowEventType;
@property(retain, nonatomic) YTIKidsFlowInfo *kidsFlowInfo; // @dynamic kidsFlowInfo;
@property(nonatomic) int kidsFlowType; // @dynamic kidsFlowType;

@end

