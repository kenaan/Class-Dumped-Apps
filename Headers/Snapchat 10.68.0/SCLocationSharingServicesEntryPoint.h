//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCBitmojiFetchServices, SCServicesExposer, SCStartupCompleteScope, SCUserSessionScope;

@interface SCLocationSharingServicesEntryPoint : SCEntryPoint
{
    SCStartupCompleteScope *_startupCompleteScope;
    SCBitmojiFetchServices *_bitmojiFetchServices;
    SCUserSessionScope *_userSessionScope;
    SCServicesExposer *_locationSharingServicesExposer;
}

@property(retain, nonatomic) SCServicesExposer *locationSharingServicesExposer; // @synthesize locationSharingServicesExposer=_locationSharingServicesExposer;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
@property(nonatomic) __weak SCBitmojiFetchServices *bitmojiFetchServices; // @synthesize bitmojiFetchServices=_bitmojiFetchServices;
@property(nonatomic) __weak SCStartupCompleteScope *startupCompleteScope; // @synthesize startupCompleteScope=_startupCompleteScope;
- (void).cxx_destruct;
- (id)_sharingService;
- (id)_preferencesProvider;
- (id)_preferencesMutator;
- (void)begin;

@end
