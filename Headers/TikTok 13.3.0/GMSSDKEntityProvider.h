//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GMSEntityProvider-Protocol.h"

@class GMSMapView, NSString;

@interface GMSSDKEntityProvider : NSObject <GMSEntityProvider>
{
    GMSMapView *_bridge;
    reffed_ptr_57016b98 _idleState;
    struct unique_ptr<gmscore::vector::MutableStateTracker, std::__1::default_delete<gmscore::vector::MutableStateTracker>> _idleStateTracker;
    reffed_ptr_f31d11c9 _behavior;
    struct unique_ptr<gmscore::vector::MutableStateTracker, std::__1::default_delete<gmscore::vector::MutableStateTracker>> _cameraStateTracker;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)willDestroyRenderer:(struct EntityRenderer *)arg1;
- (void)didCreateRenderer:(struct EntityRenderer *)arg1 resources:(id)arg2 behaviorCamera:(reffed_ptr_329922e5)arg3;
- (void)resetIdleState;
- (id)initWithBridge:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

