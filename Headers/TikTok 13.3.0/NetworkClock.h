//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSSortDescriptor;
@protocol OS_dispatch_queue;

@interface NetworkClock : NSObject
{
    NSMutableArray *timeAssociations;
    NSArray *sortDescriptors;
    NSSortDescriptor *dispersionSortDescriptor;
    NSObject<OS_dispatch_queue> *associationDelegateQueue;
}

+ (id)sharedNetworkClock;
- (void).cxx_destruct;
- (void)finishAssociations;
- (void)snoozeAssociations;
- (void)enableAssociations;
- (void)createAssociationsWithServers:(id)arg1;
- (void)createAssociations;
@property(readonly, copy, nonatomic) NSDate *networkTime;
@property(readonly, nonatomic) double networkOffset;
- (id)init;

@end

