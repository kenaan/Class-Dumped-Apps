//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CLLocationManagerDelegate-Protocol.h"

@class AWERadarLocation, CLLocationManager, NSString;

@interface AWERadarLocationManager : NSObject <CLLocationManagerDelegate>
{
    _Bool _isNeedUpdate;
    CLLocationManager *_locationManager;
    AWERadarLocation *_location;
}

+ (_Bool)isValidLongitude:(double)arg1;
+ (_Bool)isValidLatitude:(double)arg1;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) AWERadarLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property(nonatomic) _Bool isNeedUpdate; // @synthesize isNeedUpdate=_isNeedUpdate;
- (void).cxx_destruct;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (id)currentLocation;
- (void)stopUpdateLocation;
- (void)startUpdateLocation;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

