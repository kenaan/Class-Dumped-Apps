//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTVolumeRemoteDelegate-Protocol.h"

@class NSArray, NSString;
@protocol SPTGaiaConnectAPI, SPTRemoteVolumeMasterDelegate, SPTVolumeRemoteController;

@interface SPTVolumeRemoteControllerRouter : NSObject <SPTVolumeRemoteDelegate>
{
    id <SPTRemoteVolumeMasterDelegate> _delegate;
    NSArray *_volumeManagers;
    id <SPTGaiaConnectAPI> _connectManager;
}

@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) NSArray *volumeManagers; // @synthesize volumeManagers=_volumeManagers;
@property(nonatomic) __weak id <SPTRemoteVolumeMasterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)shouldRespondToVolumeEventFromController:(id)arg1;
- (void)volumeController:(id)arg1 remoteVolumeDidChange:(double)arg2;
@property(readonly, nonatomic) double volumeStep;
@property(readonly, nonatomic) _Bool activeDeviceSupportsVolumeControl;
@property(readonly, nonatomic) id <SPTVolumeRemoteController> activeDeviceVolumeController;
- (void)setupObserving;
- (id)initWithVolumeManagers:(id)arg1 connectManager:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
