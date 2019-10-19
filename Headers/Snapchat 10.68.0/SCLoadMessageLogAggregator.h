//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol SCReceiveFlowMetricsEmitting;

@interface SCLoadMessageLogAggregator : NSObject
{
    id <SCReceiveFlowMetricsEmitting> _metricsEmitter;
    NSMutableDictionary *_messageIdToTimeline;
    NSMutableDictionary *_mediaIdToMessageId;
}

- (void).cxx_destruct;
- (void)_associateMediaId:(id)arg1 toMessageId:(id)arg2;
- (id)_timelineForTimestamp:(id)arg1;
- (void)addMetadata:(id)arg1;
- (void)logLoadMessageTimestamp:(id)arg1;
- (id)initWithMetricsEmitter:(id)arg1;

@end
