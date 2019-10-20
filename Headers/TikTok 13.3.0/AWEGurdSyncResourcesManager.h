//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AWEGurdSyncResourcesTasksQueue;

@interface AWEGurdSyncResourcesManager : NSObject
{
    AWEGurdSyncResourcesTasksQueue *_waitingTasksQueue;
    AWEGurdSyncResourcesTasksQueue *_executedTasksQueue;
}

+ (void)syncResourcesIfNeeded;
+ (void)enqueueSyncResourcesTask:(id)arg1;
+ (void)enableGurd;
+ (id)sharedManager;
@property(retain, nonatomic) AWEGurdSyncResourcesTasksQueue *executedTasksQueue; // @synthesize executedTasksQueue=_executedTasksQueue;
@property(retain, nonatomic) AWEGurdSyncResourcesTasksQueue *waitingTasksQueue; // @synthesize waitingTasksQueue=_waitingTasksQueue;
- (void).cxx_destruct;
- (void)_syncResourcesWithTask:(id)arg1;
- (void)_syncResources;
- (void)_syncResourcesIfNeeded;
- (_Bool)_shouldExecuteWithTask:(id)arg1;
- (void)_cancelWaitingTask:(id)arg1;
- (_Bool)_enqueueSyncResourcesTask:(id)arg1;
- (id)_waitingTaskForIdentifier:(id)arg1;

@end
