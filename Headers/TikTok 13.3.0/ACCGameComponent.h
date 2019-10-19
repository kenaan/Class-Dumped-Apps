//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCaptureComponentMessageProtocol-Protocol.h"
#import "ACCGameComponentProtocol-Protocol.h"
#import "ACCPotteryComponentMessageProtocol-Protocol.h"
#import "ACCStickerComponentMessageProtocol-Protocol.h"

@class AWEMusicModel, AWEVideoGameCameraContainerView, NSString;
@protocol ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCRecordCloseComponentProtocol, ACCRecordConfigPublishComponentProtocol, ACCRecordFlowComponentProtocol, ACCRecordProgressBarComponentProtocol, ACCRecordRootComponentProtocol, ACCRecordToolBarComponentProtocol, ACCStickerComponentProtocol;

@interface ACCGameComponent : NSObject <ACCGameComponentProtocol, ACCCaptureComponentMessageProtocol, ACCStickerComponentMessageProtocol, ACCPotteryComponentMessageProtocol>
{
    _Bool _isMicrophoneMuted;
    _Bool _isGameResignActive;
    _Bool _previousKeepAlive;
    id <ACCComponentBusProtocol> _componentBus;
    id <ACCRecordRootComponentProtocol> _root;
    id <ACCCaptureComponentProtocol> _capture;
    id <ACCStickerComponentProtocol> _sticker;
    id <ACCRecordCloseComponentProtocol> _close;
    id <ACCRecordProgressBarComponentProtocol> _progressBar;
    id <ACCRecordFlowComponentProtocol> _recordFlowComponent;
    id <ACCRecordConfigPublishComponentProtocol> _configPublishComponent;
    id <ACCRecordToolBarComponentProtocol> _toolBar;
    long long _oldCaptureDevicePosition;
    AWEMusicModel *_oldSelectedMusic;
    long long _gameRcordType;
    long long _gameStatus;
    long long _gamePreviousCameraMode;
    AWEVideoGameCameraContainerView *_gameCameraContainer;
}

@property(retain, nonatomic) AWEVideoGameCameraContainerView *gameCameraContainer; // @synthesize gameCameraContainer=_gameCameraContainer;
@property(nonatomic) _Bool previousKeepAlive; // @synthesize previousKeepAlive=_previousKeepAlive;
@property(nonatomic) _Bool isGameResignActive; // @synthesize isGameResignActive=_isGameResignActive;
@property(nonatomic) _Bool isMicrophoneMuted; // @synthesize isMicrophoneMuted=_isMicrophoneMuted;
@property(nonatomic) long long gamePreviousCameraMode; // @synthesize gamePreviousCameraMode=_gamePreviousCameraMode;
@property(nonatomic) long long gameStatus; // @synthesize gameStatus=_gameStatus;
@property(nonatomic) long long gameRcordType; // @synthesize gameRcordType=_gameRcordType;
@property(retain, nonatomic) AWEMusicModel *oldSelectedMusic; // @synthesize oldSelectedMusic=_oldSelectedMusic;
@property(nonatomic) long long oldCaptureDevicePosition; // @synthesize oldCaptureDevicePosition=_oldCaptureDevicePosition;
@property(readonly, nonatomic) __weak id <ACCRecordToolBarComponentProtocol> toolBar; // @synthesize toolBar=_toolBar;
@property(readonly, nonatomic) __weak id <ACCRecordConfigPublishComponentProtocol> configPublishComponent; // @synthesize configPublishComponent=_configPublishComponent;
@property(readonly, nonatomic) __weak id <ACCRecordFlowComponentProtocol> recordFlowComponent; // @synthesize recordFlowComponent=_recordFlowComponent;
@property(readonly, nonatomic) __weak id <ACCRecordProgressBarComponentProtocol> progressBar; // @synthesize progressBar=_progressBar;
@property(readonly, nonatomic) __weak id <ACCRecordCloseComponentProtocol> close; // @synthesize close=_close;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> sticker; // @synthesize sticker=_sticker;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> capture; // @synthesize capture=_capture;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> root; // @synthesize root=_root;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (void)msg_didApplySticker:(id)arg1 success:(_Bool)arg2;
- (void)msg_didApplyLocalSticker:(id)arg1;
- (void)msg_configCameraMessageBlock:(id)arg1;
- (void)reportGameStatus:(long long)arg1;
- (void)reportGameScoreOfOpponent;
- (void)endGame;
- (void)resetGame;
- (void)resumeGame;
- (void)pauseGame;
- (void)startGame;
- (void)msg_didExitPottery;
- (void)msg_didEnterPottery;
- (void)msg_didShow2DTextInputViewController;
- (void)didFetchPropList:(id)arg1;
- (void)switchCameraPositionWithSticker:(id)arg1;
- (id)exchangeSelectedMusicForBackup:(_Bool)arg1;
- (void)recoverSelectedMusic;
- (void)backupSelectedMusic;
- (void)recoverCameraPosition;
- (void)switchCameraPositionForGame;
- (void)restoreRecordContextForGame;
- (void)backupRecordContextForGame;
- (void)dismissGameRecordContainer;
- (void)dismissGamePreviewContainer;
- (void)clickGameCloseBtn:(id)arg1;
- (void)showGameCameraContainerWithAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)applicationWillResignActive;
- (void)containerViewControllerWillAppear;
- (void)containerViewControllerDidDisappear;
- (id)rootVC;
- (id)autoInjectComponentDictionaryOftoolBar;
- (id)autoInjectComponentDictionaryOfconfigPublishComponent;
- (id)autoInjectComponentDictionaryOfrecordFlowComponent;
- (id)autoInjectComponentDictionaryOfprogressBar;
- (id)autoInjectComponentDictionaryOfclose;
- (id)autoInjectComponentDictionaryOfsticker;
- (id)autoInjectComponentDictionaryOfcapture;
- (id)autoInjectComponentDictionaryOfroot;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

