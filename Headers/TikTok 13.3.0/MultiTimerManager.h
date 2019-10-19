//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMutableDictionary;

@interface MultiTimerManager : NSObject
{
    NSMutableDictionary *_timerList;
    NSLock *_lock;
}

@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSMutableDictionary *timerList; // @synthesize timerList=_timerList;
- (void).cxx_destruct;
- (void)cancelAllTimers;
- (void)cancelTimerWithName:(id)arg1;
- (void)schedualTimerWithIdentifier:(id)arg1 interval:(double)arg2 queue:(id)arg3 repeats:(_Bool)arg4 action:(CDUnknownBlockType)arg5;
- (id)init;

@end

