//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SKTLatencyTimer, SKTMetricsLogger;
@protocol SKTInteractionLogger;

@interface SKTAnalyticsProvider : NSObject
{
    id <SKTInteractionLogger> _interactionLogger;
    SKTMetricsLogger *_metricsLogger;
    SKTLatencyTimer *_totalInitializeTimer;
}

@property(retain, nonatomic) SKTLatencyTimer *totalInitializeTimer; // @synthesize totalInitializeTimer=_totalInitializeTimer;
@property(readonly, nonatomic) SKTMetricsLogger *metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(readonly, nonatomic) id <SKTInteractionLogger> interactionLogger; // @synthesize interactionLogger=_interactionLogger;
- (void).cxx_destruct;
- (id)initWithCoreOptions:(id)arg1 customInteractionLogger:(id)arg2 AVELoggingService:(id)arg3 clearcutLoggerProvider:(id)arg4 clientInfoProvider:(id)arg5 addressBookService:(id)arg6;

@end

