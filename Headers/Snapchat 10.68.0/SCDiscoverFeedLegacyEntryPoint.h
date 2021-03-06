//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCEntryPoint.h"

@class SCDiscoverFeedBaseServices, SCDiscoverFeedExtensionServices, SCDiscoverFeedFriendsSectionLegacyServices, SCDiscoverFeedNetworkingServices, SCDiscoverFeedStoriesServices, SCServicesExposer, SCSnapTokenServices, SCUserSessionScope, SCUserStorageServices;

@interface SCDiscoverFeedLegacyEntryPoint : SCEntryPoint
{
    SCUserSessionScope *_userSessionScope;
    SCUserStorageServices *_userStorageService;
    SCDiscoverFeedStoriesServices *_storiesServices;
    SCDiscoverFeedBaseServices *_discoverFeedBaseService;
    SCDiscoverFeedExtensionServices *_extensionServices;
    SCDiscoverFeedNetworkingServices *_discoverFeedNetworkingServices;
    SCDiscoverFeedFriendsSectionLegacyServices *_friendsSectionLegacyServices;
    SCSnapTokenServices *_snapTokenServices;
    SCServicesExposer *_discoverFeedLegacyServices;
}

@property(retain, nonatomic) SCServicesExposer *discoverFeedLegacyServices; // @synthesize discoverFeedLegacyServices=_discoverFeedLegacyServices;
@property(nonatomic) __weak SCSnapTokenServices *snapTokenServices; // @synthesize snapTokenServices=_snapTokenServices;
@property(nonatomic) __weak SCDiscoverFeedFriendsSectionLegacyServices *friendsSectionLegacyServices; // @synthesize friendsSectionLegacyServices=_friendsSectionLegacyServices;
@property(nonatomic) __weak SCDiscoverFeedNetworkingServices *discoverFeedNetworkingServices; // @synthesize discoverFeedNetworkingServices=_discoverFeedNetworkingServices;
@property(nonatomic) __weak SCDiscoverFeedExtensionServices *extensionServices; // @synthesize extensionServices=_extensionServices;
@property(nonatomic) __weak SCDiscoverFeedBaseServices *discoverFeedBaseService; // @synthesize discoverFeedBaseService=_discoverFeedBaseService;
@property(nonatomic) __weak SCDiscoverFeedStoriesServices *storiesServices; // @synthesize storiesServices=_storiesServices;
@property(nonatomic) __weak SCUserStorageServices *userStorageService; // @synthesize userStorageService=_userStorageService;
@property(nonatomic) __weak SCUserSessionScope *userSessionScope; // @synthesize userSessionScope=_userSessionScope;
- (void).cxx_destruct;
- (id)_createQueryCoordinatorWithEndpointManager:(id)arg1;
- (id)_createPrefetchHandlerWithEndpointManager:(id)arg1 lazyDynamicLayoutQueryCoordinator:(id)arg2;
- (id)_createDFRanker;
- (id)_createEventController;
- (id)_createDataStore;
- (void)begin;

@end

