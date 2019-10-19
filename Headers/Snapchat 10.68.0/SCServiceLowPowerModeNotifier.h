//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCServiceNotifier-Protocol.h"

@class NSString;

@interface SCServiceLowPowerModeNotifier : NSObject <SCServiceNotifier>
{
    double _waitTime;
}

+ (id)defaultNotifierWhenInLowPowerMode;
- (double)waitUntil:(double)arg1;
- (void)changeWaitTime:(_Bool)arg1;
- (void)lowPowerModeChanged:(_Bool)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
