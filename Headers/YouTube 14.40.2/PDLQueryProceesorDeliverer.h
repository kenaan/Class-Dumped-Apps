//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableSet, NSNumber, NSObject<OS_dispatch_queue>, NSString, PDLClientConfigInternal, PDLResourceCollector, Reachability;

@interface PDLQueryProceesorDeliverer : NSObject
{
    PDLClientConfigInternal *_clientConfig;
    NSString *_query;
    id <PDLMetricsLogger> _metricsLogger;
    NSArray *_callbacks;
    unsigned long long _callbackNumber;
    NSMutableSet *_autocompletionKeysReturnedSoFar;
    NSObject<OS_dispatch_queue> *_deliveryQueue;
    Reachability *_reachability;
    id <PDLQueryProcessorDelivererDelegate> _delegate;
    id <PDLMetricsTimer> _setQueryTimer;
    PDLResourceCollector *_resourceCollector;
    NSNumber *_querySessionID;
    id <PDLTopNCache> _topNCache;
    id <PDLExperimentsService> _experimentsService;
}

@property(readonly, nonatomic) id <PDLExperimentsService> experimentsService; // @synthesize experimentsService=_experimentsService;
@property(readonly, nonatomic) id <PDLTopNCache> topNCache; // @synthesize topNCache=_topNCache;
@property(readonly, nonatomic) NSNumber *querySessionID; // @synthesize querySessionID=_querySessionID;
@property(retain, nonatomic) PDLResourceCollector *resourceCollector; // @synthesize resourceCollector=_resourceCollector;
@property(retain, nonatomic) id <PDLMetricsTimer> setQueryTimer; // @synthesize setQueryTimer=_setQueryTimer;
@property(nonatomic) __weak id <PDLQueryProcessorDelivererDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) Reachability *reachability; // @synthesize reachability=_reachability;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *deliveryQueue; // @synthesize deliveryQueue=_deliveryQueue;
@property(retain, nonatomic) NSMutableSet *autocompletionKeysReturnedSoFar; // @synthesize autocompletionKeysReturnedSoFar=_autocompletionKeysReturnedSoFar;
@property(nonatomic) unsigned long long callbackNumber; // @synthesize callbackNumber=_callbackNumber;
@property(readonly, nonatomic) NSArray *callbacks; // @synthesize callbacks=_callbacks;
@property(readonly, nonatomic) id <PDLMetricsLogger> metricsLogger; // @synthesize metricsLogger=_metricsLogger;
@property(readonly, nonatomic) NSString *query; // @synthesize query=_query;
@property(readonly, nonatomic) PDLClientConfigInternal *clientConfig; // @synthesize clientConfig=_clientConfig;
- (void).cxx_destruct;
- (id)generateCallbackInfoWithResults:(id)arg1 containsPartialResults:(_Bool)arg2 dataSource:(long long)arg3 callbackInfoMetadata:(id)arg4;
- (void)logCallbackWithError:(id)arg1 callbackInfo:(id)arg2 rejectedDuplicatesCount:(unsigned long long)arg3 dataSource:(long long)arg4;
- (id)experimentalPrepareResults:(id)arg1 resultsIterator:(id)arg2 dataSource:(long long)arg3;
- (id)controlPrepareResults:(id)arg1 dataSource:(long long)arg2;
- (id)prepareAutocompletionBeforeDelivery:(id)arg1 withPosition:(unsigned long long)arg2 needCopyBeforeDelivery:(_Bool)arg3;
- (void)deliverResults:(id)arg1 withError:(id)arg2 rejectedDuplicatesCount:(unsigned long long)arg3 containsPartialResults:(_Bool)arg4 dataSource:(long long)arg5 callbackInfoMetadata:(id)arg6;
- (unsigned long long)dataProvenanceFromDataSource:(long long)arg1;
- (id)callbackInfoMetadataWithError:(id)arg1 dataSource:(long long)arg2;
@property(readonly, nonatomic) unsigned long long countOfDeliveredAutocompletions;
- (id)deliverResults:(id)arg1 resultsIterator:(id)arg2 containsPartialResults:(_Bool)arg3 dataSource:(long long)arg4;
- (void)deliverEmptyResultWithDataSource:(long long)arg1 error:(id)arg2;
- (void)deliverColdCacheCallback;
- (id)initWithQueryProcessorContext:(id)arg1 deliveryQueue:(id)arg2 delegate:(id)arg3 callbacks:(id)arg4;

@end

