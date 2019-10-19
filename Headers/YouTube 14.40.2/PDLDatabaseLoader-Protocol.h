//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GPCPromise, PDLClientConfigInternal;

@protocol PDLDatabaseLoader <NSObject>
@property(readonly, nonatomic) unsigned long long databaseLoaderState;
- (GPCPromise *)retrieveInitializedDatabaseManagerWithClientConfig:(PDLClientConfigInternal *)arg1 metricsLogger:(id <PDLMetricsLogger>)arg2;
@end
