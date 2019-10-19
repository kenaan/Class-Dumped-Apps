//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LSAGeoDataComponentListener-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class LSAGeoDataComponent, NSString, SCUserSession;

@interface SCLensGeoDataProvider : NSObject <SCTraceEnabled, LSAGeoDataComponentListener>
{
    LSAGeoDataComponent *_geoDataComponent;
    SCUserSession *_userSession;
    _Bool _subscribedToLocationUpdates;
}

+ (id)sdkWeatherDataFromWeather:(id)arg1;
+ (id)localizedWeatherConditionFromWeatherCondition:(id)arg1;
@property _Bool subscribedToLocationUpdates; // @synthesize subscribedToLocationUpdates=_subscribedToLocationUpdates;
- (void).cxx_destruct;
- (void)didReceiveLocationServicesUpdatedNotification:(id)arg1;
- (void)updateGeoDataAsync;
- (id)getWeatherData;
- (void)fetchTaxonomyDataWithCompletion:(CDUnknownBlockType)arg1;
- (void)_handleLocationPermissionAuthorized:(_Bool)arg1;
- (void)geoDataComponentDidRequestGeoData:(id)arg1;
- (id)initWithGeoDataComponent:(id)arg1 userSession:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
