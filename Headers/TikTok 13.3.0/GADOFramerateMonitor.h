//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSHashTable;

@interface GADOFramerateMonitor : NSObject
{
    NSHashTable *_observers;
    CADisplayLink *_displayLink;
    _Bool _hasFirstFrameInfo;
    double _frameDuration;
    double _lastDrawTimestamp;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleRenderForDisplayLink:(id)arg1;
- (long long)droppedFrameCountBetweenLastRenderAndTimestamp:(double)arg1;
- (void)removeFramerateObserver:(id)arg1;
- (void)addFramerateObserver:(id)arg1;
- (void)stopIfNeeded;
- (void)startIfNeeded;
- (void)dealloc;
- (id)init;

@end

