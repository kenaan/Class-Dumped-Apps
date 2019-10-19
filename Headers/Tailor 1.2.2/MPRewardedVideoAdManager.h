//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MPAdServerCommunicatorDelegate-Protocol.h"
#import "MPRewardedVideoAdapterDelegate-Protocol.h"

@class MPAdConfiguration, MPAdServerCommunicator, MPRewardedVideoAdapter, MPRewardedVideoReward, NSArray, NSString;
@protocol MPRewardedVideoAdManagerDelegate;

@interface MPRewardedVideoAdManager : NSObject <MPAdServerCommunicatorDelegate, MPRewardedVideoAdapterDelegate>
{
    _Bool _loading;
    _Bool _playedAd;
    _Bool _ready;
    id <MPRewardedVideoAdManagerDelegate> _delegate;
    NSString *_adUnitID;
    NSArray *_mediationSettings;
    NSString *_customerId;
    MPRewardedVideoAdapter *_adapter;
    MPAdServerCommunicator *_communicator;
    MPAdConfiguration *_configuration;
}

@property(nonatomic) _Bool ready; // @synthesize ready=_ready;
@property(nonatomic) _Bool playedAd; // @synthesize playedAd=_playedAd;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) MPAdConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) MPAdServerCommunicator *communicator; // @synthesize communicator=_communicator;
@property(retain, nonatomic) MPRewardedVideoAdapter *adapter; // @synthesize adapter=_adapter;
@property(copy, nonatomic) NSString *customerId; // @synthesize customerId=_customerId;
@property(retain, nonatomic) NSArray *mediationSettings; // @synthesize mediationSettings=_mediationSettings;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
@property(nonatomic) __weak id <MPRewardedVideoAdManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)rewardedVideoCustomerId;
- (id)rewardedVideoAdUnitId;
- (void)rewardedVideoShouldRewardUserForAdapter:(id)arg1 reward:(id)arg2;
- (void)rewardedVideoWillLeaveApplicationForAdapter:(id)arg1;
- (void)rewardedVideoDidReceiveTapEventForAdapter:(id)arg1;
- (void)rewardedVideoDidDisappearForAdapter:(id)arg1;
- (void)rewardedVideoWillDisappearForAdapter:(id)arg1;
- (void)rewardedVideoDidAppearForAdapter:(id)arg1;
- (void)rewardedVideoWillAppearForAdapter:(id)arg1;
- (void)rewardedVideoDidFailToPlayForAdapter:(id)arg1 error:(id)arg2;
- (void)rewardedVideoDidExpireForAdapter:(id)arg1;
- (void)rewardedVideoDidFailToLoadForAdapter:(id)arg1 error:(id)arg2;
- (void)rewardedVideoDidLoadForAdapter:(id)arg1;
- (id)instanceMediationSettingsForClass:(Class)arg1;
- (void)communicatorDidFailWithError:(id)arg1;
- (void)communicatorDidReceiveAdConfigurations:(id)arg1;
- (void)loadAdWithURL:(id)arg1;
- (void)handleAdPlayedForCustomEventNetwork;
- (void)presentRewardedVideoAdFromViewController:(id)arg1 withReward:(id)arg2 customData:(id)arg3;
- (void)loadRewardedVideoAdWithKeywords:(id)arg1 userDataKeywords:(id)arg2 location:(id)arg3 customerId:(id)arg4;
- (_Bool)hasAdAvailable;
- (Class)customEventClass;
@property(readonly, nonatomic) MPRewardedVideoReward *selectedReward;
@property(readonly, nonatomic) NSArray *availableRewards;
- (void)dealloc;
- (id)initWithAdUnitID:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
