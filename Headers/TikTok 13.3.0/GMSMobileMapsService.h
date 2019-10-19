//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSMobileMapsServiceAPI-Protocol.h"

@class NSString;
@protocol GMSAnalyticsLogger, GMSDASHConnection, GMSNetworkFetcher;

@interface GMSMobileMapsService : NSObject <GMSMobileMapsServiceAPI>
{
    id <GMSNetworkFetcher> _fetcher;
}

@property(readonly) id <GMSNetworkFetcher> fetcher; // @synthesize fetcher=_fetcher;
- (void).cxx_destruct;
- (id)RPCToTaxiModifyRideWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)taxiModifyRideWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToTaxiGetUserDetailsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)taxiGetUserDetailsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToTaxiGetRideStatusWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)taxiGetRideStatusWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToTaxiGetRideEstimateWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)taxiGetRideEstimateWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToTaxiGetPaymentMethodsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)taxiGetPaymentMethodsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToTaxiCancelRideWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)taxiCancelRideWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToTaxiBookRideWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)taxiBookRideWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToUserPrefsWriteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)userPrefsWriteWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToUserPrefsReadWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)userPrefsReadWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToYourPlacesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)yourPlacesWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToPlaceListShareWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)placeListShareWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToPlaceListGetWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)placeListGetWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToPlaceListFollowWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)placeListFollowWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToLocationDetailsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)locationDetailsWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToAppStartWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)appStartWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToMapsEngineMapWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)mapsEngineMapWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)RPCToMapsEngineFeatureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)mapsEngineFeatureWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)switchedRequestWithProto:(id)arg1 requestID:(int)arg2 responseClass:(Class)arg3 sourceSelector:(SEL)arg4 handler:(CDUnknownBlockType)arg5;
- (id)GRPCRequestWithProto:(id)arg1 requestID:(int)arg2 sourceSelector:(SEL)arg3 handler:(CDUnknownBlockType)arg4;
- (id)DASHRequestWithProto:(id)arg1 requestID:(int)arg2 responseClass:(Class)arg3 handler:(CDUnknownBlockType)arg4;
- (id)requestWithProto:(id)arg1 requestID:(int)arg2 responseClass:(Class)arg3 sourceSelector:(SEL)arg4 handler:(CDUnknownBlockType)arg5;
@property(readonly) id <GMSAnalyticsLogger> logger;
@property(readonly, nonatomic) NSObject<GMSDASHConnection> *dashConnection;
- (id)legalCountry;
- (long long)connectionIdleTimeMS;
- (id)clientDescription;
- (id)initWithFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

