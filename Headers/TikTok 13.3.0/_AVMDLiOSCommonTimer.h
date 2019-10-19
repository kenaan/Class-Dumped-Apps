//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSTimer;
@protocol AVMDLiOSTimerEvent;

@interface _AVMDLiOSCommonTimer : NSObject
{
    _Bool _running;
    NSHashTable<AVMDLiOSTimerEvent> *_events;
    NSTimer *_scheTimer;
}

+ (id)shareInstance;
@property(nonatomic, getter=isRunning) _Bool running; // @synthesize running=_running;
@property(retain, nonatomic) NSTimer *scheTimer; // @synthesize scheTimer=_scheTimer;
@property(retain, nonatomic) NSHashTable<AVMDLiOSTimerEvent> *events; // @synthesize events=_events;
- (void).cxx_destruct;
- (void)removeTimerEvent:(id)arg1;
- (void)addTimerEvent:(id)arg1;
- (void)stop;
- (void)start;
- (void)_stopTimer;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
- (void)_innerTimerEvent;
- (void)_resetTimer;
- (id)init;
- (void)dealloc;

@end

