//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface NSObject (Throttle)
- (id)getSerialQueue;
- (void)unlockSelector:(id)arg1;
- (void)wz_performSelector:(SEL)arg1 withThrottle:(double)arg2;
- (void)hmd_performSelector:(SEL)arg1 arg:(id)arg2 withThrottle:(double)arg3;
- (void)hmd_performSelector:(SEL)arg1 arg1:(id)arg2 arg2:(int)arg3 arg3:(id)arg4 withThrottle:(double)arg5;
@end

