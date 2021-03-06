//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSUserDefaults, WAPersistentKeyValueStore;
@protocol OS_dispatch_queue;

@interface WAStatusAdsStoreManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    WAPersistentKeyValueStore *_localKeyValueStore;
    NSURL *_adsMediaDirectory;
    NSUserDefaults *_userDefaults;
}

+ (id)encodedStatusAds:(id)arg1;
- (void).cxx_destruct;
- (id)allCachedViewedAds;
- (id)viewedAdIDsForAdIDs:(id)arg1;
- (id)cachedViewdAdForKey:(id)arg1 data:(id)arg2 date:(id)arg3;
- (void)cacheViewedAds:(id)arg1;
- (void)clearExpiredCachedViewedAds;
- (void)removeStatusAds:(id)arg1;
- (void)removeMediaForStatusAd:(id)arg1;
- (void)storeStatusAds:(id)arg1;
- (void)removeAllStatusAds;
- (id)loadStatusAds:(_Bool)arg1;
- (_Bool)updateVersionIfNecessary;
- (id)initWithQueue:(id)arg1 localKeyValueStore:(id)arg2 adsMediaDirectory:(id)arg3 userDefaults:(id)arg4;

@end

