//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADNAdSource, GADNInterstitialAd, GADNObserverCollection, NSDictionary, NSString;
@protocol GADRewardBasedVideoAdDelegate, OS_dispatch_queue;

@interface GADNRewardBasedVideoAd : NSObject
{
    GADNInterstitialAd *_rewardBasedVideoAd;
    GADNAdSource *_adSource;
    _Bool _requestInProgress;
    GADNObserverCollection *_intermissionObservers;
    GADNObserverCollection *_rewardedAdObservers;
    NSString *_adUnitID;
    GADNObserverCollection *_appSettingsObservers;
    _Bool _isAdPresenting;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSString *_adNetworkClassName;
    NSDictionary *_adMetadata;
    id <GADRewardBasedVideoAdDelegate> _delegate;
    NSString *_userIdentifier;
    NSString *_customRewardString;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *customRewardString; // @synthesize customRewardString=_customRewardString;
@property(copy, nonatomic) NSString *userIdentifier; // @synthesize userIdentifier=_userIdentifier;
@property(nonatomic) __weak id <GADRewardBasedVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stopObservingApplicationConfiguration;
- (void)setUpAdaptersFromApplicationSettings;
- (void)attachAppSettingsObservers;
- (void)attachRewardedEventsObservers;
- (void)attachLifecycleEventObservers;
- (void)setAdMetadata:(id)arg1;
@property(readonly, nonatomic) NSDictionary *adMetadata;
- (id)adSource;
- (void)setRewardBasedVideoAd:(id)arg1;
@property(readonly, nonatomic, getter=isReady) _Bool ready;
- (void)adPresentationDidFail;
- (void)setAdNetworkClassName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *adNetworkClassName;
- (void)presentFromRootViewController:(id)arg1;
- (void)adLoadCompletedWithError:(id)arg1;
- (void)adInvalidated;
- (void)loadWithTargeting:(id)arg1;
- (void)removeExistingAd;
- (void)loadRequest:(id)arg1 withAdUnitID:(id)arg2;
- (void)updateTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;

@end

