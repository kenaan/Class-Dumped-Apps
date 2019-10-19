//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEBootTaskQueueProtocol-Protocol.h"

@class NSMapTable, NSMutableArray, NSString;

@interface AWEBootTaskQueue : NSObject <AWEBootTaskQueueProtocol>
{
    NSMutableArray *_tasks;
    NSMapTable *_taskMaper;
}

@property(retain, nonatomic) NSMapTable *taskMaper; // @synthesize taskMaper=_taskMaper;
@property(retain, nonatomic) NSMutableArray *tasks; // @synthesize tasks=_tasks;
- (void).cxx_destruct;
- (unsigned long long)taskCount;
- (_Bool)taskExistNamed:(id)arg1;
- (id)dequeueTaskNamed:(id)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

