//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"
#import "FBTweakObserver-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class CLHeading, CLLocation, CLLocationManager, NSDictionary, NSHashTable, NSMutableArray, NSString, SCLocationManagerOperationalListenerAnnouncer, SCLocationManagerState, SCQueuePerformer;

@interface SCLocationManager : NSObject <CLLocationManagerDelegate, FBTweakObserver, SCTraceEnabled>
{
    SCQueuePerformer *_performer;
    NSHashTable *_observers;
    NSMutableArray *_locationPermissionBlocks;
    NSMutableArray *_backgroundLocationPermissionBlocks;
    _Bool _hasAuthorizationStatus;
    _Bool _hasRecentAuthorizationStatus;
    int _lastAuthorizationStatus;
    CLLocation *_location;
    CLHeading *_heading;
    NSDictionary *_beaconsByRegion;
    SCLocationManagerOperationalListenerAnnouncer *_operationalAnnouncer;
    SCLocationManagerState *_state;
    CLLocationManager *_locationManager;
}

+ (void)warmupLocationAuthorizationStatusWithCompletion:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
+ (void)warmupLocationAuthorizationStatus;
+ (void)clearLocationAuthorizationStatus;
+ (void)updateLocationAuthorizationStatus:(int)arg1;
+ (int)locationAuthorizationStatus;
+ (_Bool)locationAuthorizationRestricted;
+ (_Bool)locationAuthorizationDenied;
+ (_Bool)locationAuthorizationNotDetermined;
+ (_Bool)locationAuthorizedInBackground;
+ (_Bool)locationAuthorized;
+ (id)sharedInstance;
+ (id)locationProvider;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(copy) SCLocationManagerState *state; // @synthesize state=_state;
@property(readonly, nonatomic) SCLocationManagerOperationalListenerAnnouncer *operationalAnnouncer; // @synthesize operationalAnnouncer=_operationalAnnouncer;
@property _Bool hasRecentAuthorizationStatus; // @synthesize hasRecentAuthorizationStatus=_hasRecentAuthorizationStatus;
@property _Bool hasAuthorizationStatus; // @synthesize hasAuthorizationStatus=_hasAuthorizationStatus;
@property int lastAuthorizationStatus; // @synthesize lastAuthorizationStatus=_lastAuthorizationStatus;
@property(copy) NSDictionary *beaconsByRegion; // @synthesize beaconsByRegion=_beaconsByRegion;
@property(copy) CLHeading *heading; // @synthesize heading=_heading;
@property(copy) CLLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (void)tweakDidChange:(id)arg1;
- (void)_setHasRequestedBackgroundLocationAuthorization;
- (_Bool)_hasRequestedBackgroundLocationAuthorization;
- (void)locationManager:(id)arg1 rangingBeaconsDidFailForRegion:(id)arg2 withError:(id)arg3;
- (void)locationManager:(id)arg1 didRangeBeacons:(id)arg2 inRegion:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)_didReceiveLocations:(id)arg1;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)_disabledLocationManagerState;
- (id)_locationManagerStateFromObservers;
- (void)_recalculateDesiredLocationSettings;
- (void)_createCLLocationManagerIfNecessary;
- (void)fetchLocationAuthorizationStatus:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)fetchLocationAuthorizationStatus:(CDUnknownBlockType)arg1;
- (void)fetchLocationAuthorized:(CDUnknownBlockType)arg1 onQueue:(id)arg2;
- (void)fetchLocationAuthorized:(CDUnknownBlockType)arg1;
- (void)requestBackgroundLocationPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestLocationPermissionWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly) _Bool lastAuthorized;
- (void)setObserverStateDidChangeForObserver:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)requestLocationWithTimeout:(double)arg1 desiredAccuracy:(double)arg2 observerIdentifier:(id)arg3 callbackQueue:(id)arg4 callback:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
