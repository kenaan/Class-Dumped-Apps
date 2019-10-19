//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSRecursiveLock;
@protocol OS_dispatch_queue;

@interface VKOperation : NSOperation
{
    _Bool _wasCancelled;
    long long _state;
    NSRecursiveLock *_lock;
    NSObject<OS_dispatch_queue> *_responseQueue;
}

@property(nonatomic, getter=isCancelled) _Bool wasCancelled; // @synthesize wasCancelled=_wasCancelled;
@property(nonatomic) NSObject<OS_dispatch_queue> *responseQueue; // @synthesize responseQueue=_responseQueue;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
@property(nonatomic) long long state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancel;
- (_Bool)isConcurrent;
- (_Bool)isFinished;
- (_Bool)isExecuting;
- (_Bool)isReady;
- (id)init;

@end

