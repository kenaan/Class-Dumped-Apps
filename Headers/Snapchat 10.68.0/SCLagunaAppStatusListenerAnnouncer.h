//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCSpectaclesBaseAnnouncer.h"

#import "SCLagunaAppStatusListener-Protocol.h"

@class NSString;

@interface SCLagunaAppStatusListenerAnnouncer : SCSpectaclesBaseAnnouncer <SCLagunaAppStatusListener>
{
}

- (void)statusCoordinatorNeedsToPair:(id)arg1;
- (void)statusCoordinatorPressedLearnMoreForBluetoothOverloadError:(id)arg1;
- (void)statusCoordinator:(id)arg1 needsToUpdateStateForDevice:(id)arg2;
- (void)statusCoordinatorNumberOfDevicesUpdated:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOn:(id)arg1;
- (void)statusCoordinatorBluetoothTurnedOff:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
