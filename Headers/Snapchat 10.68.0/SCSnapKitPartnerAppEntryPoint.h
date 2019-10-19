//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCLazy, SCLegacySnapchatterServices, SCServicesExposer, SCSystemScope, SCUserSessionScope, SCUserStorageServices;

@interface SCSnapKitPartnerAppEntryPoint : SCEntryPoint
{
    SCLazy *_lazyAppStateController;
    SCUserStorageServices *_userStorageServices;
    SCUserSessionScope *_userSessionScope;
    SCSystemScope *_systemScope;
    SCLegacySnapchatterServices *_legacySnapchatterServices;
    SCServicesExposer *_partnerAppServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *partnerAppServicesExposer; // @synthesize partnerAppServicesExposer=_partnerAppServicesExposer;
@property(nonatomic) __weak SCLegacySnapchatterServices *legacySnapchatterServices; // @synthesize legacySnapchatterServices=_legacySnapchatterServices;
@property(nonatomic) __weak SCSystemScope *systemScope; // @synthesize systemScope=_systemScope;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCUserStorageServices *userStorageServices; // @synthesize userStorageServices=_userStorageServices;
- (void).cxx_destruct;
- (id)createAppStateController;
- (id)end;
- (void)begin;

@end
