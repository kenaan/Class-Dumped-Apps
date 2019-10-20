//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCaptureComponentMessageProtocol-Protocol.h"
#import "ACCPotteryComponentMessageProtocol-Protocol.h"
#import "ACCRecordButtonComponentMessageProtocol-Protocol.h"
#import "ACCRecordSwitchModeComponentMessageProtocol-Protocol.h"
#import "ACCRecordTrackComponentProtocol-Protocol.h"
#import "ACCStickerComponentMessageProtocol-Protocol.h"

@class NSString;
@protocol ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCFilterComponentProtocol, ACCRecordButtonComponentProtocol, ACCRecordCountdownComponentProtocol, ACCRecordProgressBarComponentProtocol, ACCRecordRootComponentProtocol, ACCRecordToolBarComponentProtocol, ACCRecordToolMoreComponentProtocol, ACCStickerComponentProtocol;

@interface ACCRecordTrackComponent : NSObject <ACCCaptureComponentMessageProtocol, ACCRecordTrackComponentProtocol, ACCPotteryComponentMessageProtocol, ACCStickerComponentMessageProtocol, ACCRecordSwitchModeComponentMessageProtocol, ACCRecordButtonComponentMessageProtocol>
{
    _Bool _reportMemoryInfo;
    _Bool _changeRecordMode;
    id <ACCComponentBusProtocol> componentBus;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    id <ACCStickerComponentProtocol> _stickerComponent;
    id <ACCCaptureComponentProtocol> _captureComponent;
    id <ACCFilterComponentProtocol> _filterComponent;
    id <ACCRecordButtonComponentProtocol> _recordButtonComponent;
    id <ACCRecordToolMoreComponentProtocol> _moreToolComponent;
    id <ACCRecordProgressBarComponentProtocol> _progressBarComponent;
    id <ACCRecordToolBarComponentProtocol> _toolBarComponent;
    id <ACCRecordCountdownComponentProtocol> _countdownComponent;
}

@property(nonatomic) _Bool changeRecordMode; // @synthesize changeRecordMode=_changeRecordMode;
@property(readonly, nonatomic) __weak id <ACCRecordCountdownComponentProtocol> countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property(readonly, nonatomic) __weak id <ACCRecordToolBarComponentProtocol> toolBarComponent; // @synthesize toolBarComponent=_toolBarComponent;
@property(readonly, nonatomic) __weak id <ACCRecordProgressBarComponentProtocol> progressBarComponent; // @synthesize progressBarComponent=_progressBarComponent;
@property(readonly, nonatomic) __weak id <ACCRecordToolMoreComponentProtocol> moreToolComponent; // @synthesize moreToolComponent=_moreToolComponent;
@property(readonly, nonatomic) __weak id <ACCRecordButtonComponentProtocol> recordButtonComponent; // @synthesize recordButtonComponent=_recordButtonComponent;
@property(readonly, nonatomic) __weak id <ACCFilterComponentProtocol> filterComponent; // @synthesize filterComponent=_filterComponent;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> captureComponent; // @synthesize captureComponent=_captureComponent;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> stickerComponent; // @synthesize stickerComponent=_stickerComponent;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus;
@property(nonatomic) _Bool reportMemoryInfo; // @synthesize reportMemoryInfo=_reportMemoryInfo;
- (void).cxx_destruct;
- (void)msg_didChangeToMode:(long long)arg1 fromMode:(long long)arg2;
- (void)msg_didApplySticker:(id)arg1 success:(_Bool)arg2;
- (void)msg_didEnterPottery;
- (void)msg_didFinishTakePicture;
- (void)msg_cameraFirstFrameDidRender:(id)arg1;
- (void)msg_camera:(id)arg1 pauseRecordWithError:(id)arg2;
- (void)msg_camera:(id)arg1 startRecordWithError:(id)arg2;
- (void)msg_camera:(id)arg1 stopVideoCaptureWithError:(id)arg2;
- (void)msg_camera:(id)arg1 startVideoCaptureWithError:(id)arg2;
- (void)msg_camera:(id)arg1 didRecordReadyWithError:(id)arg2;
- (void)trackError:(id)arg1 action:(id)arg2;
- (id)p_recordModeMap;
- (id)p_getRecordType;
- (id)p_getRecordMode;
- (void)trackRecordVideoEvent;
- (void)track_prop_music_show_isFirstEmbed:(_Bool)arg1;
- (void)screenshotDetected;
- (void)addObservers;
- (void)containerViewControllerWillDisappear;
- (void)containerViewControllerDidAppear;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (id)init;
- (void)dealloc;
- (id)autoInjectComponentDictionaryOfcountdownComponent;
- (id)autoInjectComponentDictionaryOftoolBarComponent;
- (id)autoInjectComponentDictionaryOfprogressBarComponent;
- (id)autoInjectComponentDictionaryOfmoreToolComponent;
- (id)autoInjectComponentDictionaryOfrecordButtonComponent;
- (id)autoInjectComponentDictionaryOffilterComponent;
- (id)autoInjectComponentDictionaryOfcaptureComponent;
- (id)autoInjectComponentDictionaryOfstickerComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end
