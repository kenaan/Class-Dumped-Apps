//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSTimer, NSURL;

@interface GMSNetworkMonitor : NSObject
{
    NSURL *_serverURL;
    struct __SCNetworkReachability *_reachabilityRef;
    double _networkLossTimeoutInterval;
    NSTimer *_networkLossTimer;
    _Bool _hasNotifiedNetworkLoss;
    NSMutableArray *_reachabilityBlocks;
    _Bool _areReachabilityFlagsAvailable;
    _Bool _networkDisabled;
    unsigned int _reachabilityFlags;
}

@property _Bool networkDisabled; // @synthesize networkDisabled=_networkDisabled;
- (void).cxx_destruct;
@property double networkLossTimeoutInterval;
@property(readonly) _Bool areReachabilityFlagsAvailable; // @synthesize areReachabilityFlagsAvailable=_areReachabilityFlagsAvailable;
- (_Bool)hasReachability;
@property(readonly) int networkStatus;
- (void)postNotificationName:(id)arg1;
@property unsigned int reachabilityFlags; // @synthesize reachabilityFlags=_reachabilityFlags;
@property(readonly, getter=isServerReachable) _Bool serverReachable;
@property(readonly) _Bool hasNetwork;
- (void)destroyUnreachabilityTimer;
- (void)notifyNetworkFound;
- (void)notifyNetworkLost;
- (void)reachabilityTimerFired:(id)arg1;
- (void)invokeReachabilityBlocks;
- (void)invokeWhenReachabilityFlagsAreAvailable:(CDUnknownBlockType)arg1;
- (void)stopReachabilityCheckInternal;
- (void)stopReachabilityCheck;
- (void)startReachabilityCheckInternal;
- (void)startReachabilityCheck;
@property(retain) NSURL *serverURL;
- (void)dealloc;
- (id)initWithServerURL:(id)arg1 networkLossTimerInterval:(double)arg2 reachabilityFlags:(unsigned int)arg3;
- (id)initWithServerURL:(id)arg1;

@end

