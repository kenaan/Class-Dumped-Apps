//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSObject, UIView;
@protocol AWELiveAnchorStartLiveControllerProtocol, AWELiveEntranceViewProtocol;

@protocol AWEStudioExternalLiveModuleProtocol <NSObject>
- (_Bool)canBeLivePodcast;
- (void)setClickShootToLive:(_Bool)arg1;
- (_Bool)clickShootToLive;
- (void)setCameraDefaultDirection:(_Bool)arg1;
- (NSObject<AWELiveAnchorStartLiveControllerProtocol> *)getLiveAnchorStartLiveController;
- (UIView<AWELiveEntranceViewProtocol> *)getLiveEntranceViewWithFrame:(struct CGRect)arg1;
- (_Bool)hasCreatedLiveRoom;
- (void)checkLivePermission:(void (^)(_Bool, NSError *))arg1;
@end

