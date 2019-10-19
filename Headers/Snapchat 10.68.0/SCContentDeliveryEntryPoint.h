//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCCircumstanceEngineServices, SCEntryPointCleanup, SCLazy, SCServicesExposer, SCUserSessionScope;

@interface SCContentDeliveryEntryPoint : SCEntryPoint
{
    SCEntryPointCleanup *_cleanup;
    SCLazy *_lazyContentDelivery;
    SCUserSessionScope *_userSessionScope;
    SCCircumstanceEngineServices *_circumstanceEngineServices;
    SCServicesExposer *_contentDeliveryServices;
}

@property(retain, nonatomic) SCServicesExposer *contentDeliveryServices; // @synthesize contentDeliveryServices=_contentDeliveryServices;
@property(nonatomic) __weak SCCircumstanceEngineServices *circumstanceEngineServices; // @synthesize circumstanceEngineServices=_circumstanceEngineServices;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_streamingEnabledMediaContextTypeSet;
- (id)_dbLocationWithUserSession:(id)arg1;
- (id)_oldCachesWithUserSession:(id)arg1;
- (long long)_cacheSizeLimit;
- (id)end;
- (void)begin;

@end
