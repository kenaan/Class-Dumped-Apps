//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GTLRTaskqueueQuery.h"

@class NSString;

@interface GTLRTaskqueueQuery_TasksLease : GTLRTaskqueueQuery
{
}

+ (id)queryWithProject:(id)arg1 taskqueue:(id)arg2 numTasks:(long long)arg3 leaseSecs:(long long)arg4;

// Remaining properties
@property(nonatomic) _Bool groupByTag; // @dynamic groupByTag;
@property(nonatomic) long long leaseSecs; // @dynamic leaseSecs;
@property(nonatomic) long long numTasks; // @dynamic numTasks;
@property(copy, nonatomic) NSString *project; // @dynamic project;
@property(copy, nonatomic) NSString *tag; // @dynamic tag;
@property(copy, nonatomic) NSString *taskqueue; // @dynamic taskqueue;

@end

