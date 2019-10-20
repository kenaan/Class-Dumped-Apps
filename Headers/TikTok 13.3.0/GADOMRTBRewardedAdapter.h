//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMRewardBasedVideoAdNetworkAdapter-Protocol.h"
#import "GADMediationRewardedAdEventDelegate-Protocol.h"

@class GADMRewardBasedVideoAdNetworkConnector, GADOMediationRewardedAdConfiguration, NSString;
@protocol GADMediationAdapter, GADMediationRewardedAd;

@interface GADOMRTBRewardedAdapter : NSObject <GADMediationRewardedAdEventDelegate, GADMRewardBasedVideoAdNetworkAdapter>
{
    GADMRewardBasedVideoAdNetworkConnector *_connector;
    id <GADMediationAdapter> _adapter;
    id <GADMediationRewardedAd> _mediatedAd;
    GADOMediationRewardedAdConfiguration *_mediationConfiguration;
}

+ (Class)networkExtrasClass;
+ (id)adapterVersion;
- (void).cxx_destruct;
- (void)willDismissFullScreenView;
- (void)reportImpression;
- (void)didFailToPresentWithError:(id)arg1;
- (void)stopBeingDelegate;
- (void)didRewardUserWithReward:(id)arg1;
- (void)didEndVideo;
- (void)didStartVideo;
- (void)willBackgroundApplication;
- (void)didDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)reportClick;
- (_Bool)adapter:(id)arg1 completedLoadForConnector:(id)arg2 withMediatedAd:(id)arg3 error:(id)arg4;
- (void)dropAdapterObjectsAsynchronously;
- (void)presentRewardBasedVideoAdWithRootViewController:(id)arg1;
- (void)requestRewardBasedVideoAd;
- (void)setUp;
- (id)initWithRewardBasedVideoAdNetworkConnector:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
