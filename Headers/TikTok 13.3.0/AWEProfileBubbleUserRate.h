//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEUINotificationBarView.h"

#import "AWEProfileBubbleProtocol-Protocol.h"

@class AWEPriorityQueue, NSString;

@interface AWEProfileBubbleUserRate : AWEUINotificationBarView <AWEProfileBubbleProtocol>
{
    long long _priority;
}

@property(nonatomic) long long priority; // @synthesize priority=_priority;
- (void)didShow;
- (void)config;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak AWEPriorityQueue *queue;
@property(readonly) Class superclass;

@end
