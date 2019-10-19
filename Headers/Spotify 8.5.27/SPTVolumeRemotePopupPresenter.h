//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTGaiaConnectObserver-Protocol.h"
#import "SPTVolumeObserver-Protocol.h"

@class NSNotificationCenter, NSString, SPTVolumeAnimationConfig, SPTVolumeRemotePopupView, SPTVolumeSystemPopupHider, UIWindow;
@protocol SPTGaiaConnectAPI, SPTGaiaIconProvider, SPTVolumeAPI;

@interface SPTVolumeRemotePopupPresenter : NSObject <SPTVolumeObserver, SPTGaiaConnectObserver>
{
    _Bool _volumeUpdatedSinceHide;
    _Bool _devicePickerVisible;
    id <SPTVolumeAPI> _volumeManager;
    id <SPTGaiaConnectAPI> _connectManager;
    id <SPTGaiaIconProvider> _iconProvider;
    UIWindow *_window;
    SPTVolumeAnimationConfig *_animationConfig;
    SPTVolumeSystemPopupHider *_systemPopupHider;
    NSNotificationCenter *_notificationCenter;
    SPTVolumeRemotePopupView *_volumeView;
}

@property(nonatomic) _Bool devicePickerVisible; // @synthesize devicePickerVisible=_devicePickerVisible;
@property(nonatomic) _Bool volumeUpdatedSinceHide; // @synthesize volumeUpdatedSinceHide=_volumeUpdatedSinceHide;
@property(retain, nonatomic) SPTVolumeRemotePopupView *volumeView; // @synthesize volumeView=_volumeView;
@property(readonly, nonatomic) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly, nonatomic) SPTVolumeSystemPopupHider *systemPopupHider; // @synthesize systemPopupHider=_systemPopupHider;
@property(readonly, nonatomic) SPTVolumeAnimationConfig *animationConfig; // @synthesize animationConfig=_animationConfig;
@property(readonly, nonatomic) UIWindow *window; // @synthesize window=_window;
@property(readonly, nonatomic) id <SPTGaiaIconProvider> iconProvider; // @synthesize iconProvider=_iconProvider;
@property(readonly, nonatomic) id <SPTGaiaConnectAPI> connectManager; // @synthesize connectManager=_connectManager;
@property(readonly, nonatomic) id <SPTVolumeAPI> volumeManager; // @synthesize volumeManager=_volumeManager;
- (void).cxx_destruct;
- (void)devicePickerWillDisappear;
- (void)devicePickerWillAppear;
- (void)connectActiveDeviceDidChange:(id)arg1;
- (void)connectDeviceBeingActivatedDidChange:(id)arg1;
- (void)volumeUpdated:(id)arg1;
- (_Bool)shouldShowVolumeView;
- (void)setupVolumeViewConstraints;
- (id)createVolumeView;
- (void)forceHideVolumeView;
- (void)animateOutVolumeView;
- (void)animateInVolumeView;
- (void)hideVolumeView;
- (void)showVolumeView;
- (void)triggerVolumeViewUpdate;
- (void)dealloc;
- (void)setupObserving;
- (id)initWithVolumeManager:(id)arg1 connectManager:(id)arg2 iconProvider:(id)arg3 window:(id)arg4 animationConfig:(id)arg5 systemPopupHider:(id)arg6 notificationCenter:(id)arg7;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
