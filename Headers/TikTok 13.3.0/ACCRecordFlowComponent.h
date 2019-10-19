//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ACCCaptureComponentMessageProtocol-Protocol.h"
#import "ACCGameComponentMessageProtocol-Protocol.h"
#import "ACCPotteryComponentMessageProtocol-Protocol.h"
#import "ACCRecordButtonComponentMessageProtocol-Protocol.h"
#import "ACCRecordCloseComponentMessageProtocol-Protocol.h"
#import "ACCRecordFlowComponentProtocol-Protocol.h"
#import "ACCRecordProgressBarComponentMessageProtocol-Protocol.h"

@class AWEAnimatedButton, AWEButton, NSString;
@protocol ACCBeautyConfigurationComponentProtocol, ACCBeautyFeatureComponentProtocol, ACCCaptureComponentProtocol, ACCComponentBusProtocol, ACCComponentProtocol, ACCFilterComponentProtocol, ACCPotteryComponentProtocol, ACCPreviewComponentProtocol, ACCRecordButtonComponentProtocol, ACCRecordCountdownComponentProtocol, ACCRecordProgressBarComponentProtocol, ACCRecordRootComponentProtocol, ACCRecordToolBarComponentProtocol, ACCRecordTrackComponentProtocol, ACCStickerComponentProtocol;

@interface ACCRecordFlowComponent : NSObject <ACCRecordFlowComponentProtocol, ACCRecordCloseComponentMessageProtocol, ACCRecordProgressBarComponentMessageProtocol, ACCCaptureComponentMessageProtocol, ACCPotteryComponentMessageProtocol, ACCRecordButtonComponentMessageProtocol, ACCGameComponentMessageProtocol>
{
    _Bool _exporting;
    _Bool _hasRemovedSegmentOnce;
    id <ACCComponentBusProtocol> _componentBus;
    AWEButton *_completeButton;
    AWEAnimatedButton *_deleteButton;
    id <ACCStickerComponentProtocol> _stickerComponent;
    id <ACCRecordRootComponentProtocol> _rootComponent;
    id <ACCRecordButtonComponentProtocol> _recordButtonComponent;
    id <ACCPreviewComponentProtocol> _previewComponent;
    id <ACCRecordProgressBarComponentProtocol> _progressBarComponent;
    id <ACCCaptureComponentProtocol> _captureComponent;
    id <ACCFilterComponentProtocol> _filterComponent;
    id <ACCRecordTrackComponentProtocol> _trackComponent;
    id <ACCPotteryComponentProtocol> _potteryComponent;
    id <ACCBeautyFeatureComponentProtocol> _beautyFeatureComponent;
    id <ACCRecordCountdownComponentProtocol> _countdownComponent;
    id <ACCRecordToolBarComponentProtocol> _toolBarComponent;
    id <ACCBeautyConfigurationComponentProtocol> _beautyConfigurationComponent;
}

@property(nonatomic) _Bool hasRemovedSegmentOnce; // @synthesize hasRemovedSegmentOnce=_hasRemovedSegmentOnce;
@property(readonly, nonatomic) __weak id <ACCBeautyConfigurationComponentProtocol> beautyConfigurationComponent; // @synthesize beautyConfigurationComponent=_beautyConfigurationComponent;
@property(readonly, nonatomic) __weak id <ACCRecordToolBarComponentProtocol> toolBarComponent; // @synthesize toolBarComponent=_toolBarComponent;
@property(readonly, nonatomic) __weak id <ACCRecordCountdownComponentProtocol> countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property(readonly, nonatomic) __weak id <ACCBeautyFeatureComponentProtocol> beautyFeatureComponent; // @synthesize beautyFeatureComponent=_beautyFeatureComponent;
@property(readonly, nonatomic) __weak id <ACCPotteryComponentProtocol> potteryComponent; // @synthesize potteryComponent=_potteryComponent;
@property(readonly, nonatomic) __weak id <ACCRecordTrackComponentProtocol> trackComponent; // @synthesize trackComponent=_trackComponent;
@property(readonly, nonatomic) __weak id <ACCFilterComponentProtocol> filterComponent; // @synthesize filterComponent=_filterComponent;
@property(readonly, nonatomic) __weak id <ACCCaptureComponentProtocol> captureComponent; // @synthesize captureComponent=_captureComponent;
@property(readonly, nonatomic) __weak id <ACCRecordProgressBarComponentProtocol> progressBarComponent; // @synthesize progressBarComponent=_progressBarComponent;
@property(readonly, nonatomic) __weak id <ACCPreviewComponentProtocol> previewComponent; // @synthesize previewComponent=_previewComponent;
@property(readonly, nonatomic) __weak id <ACCRecordButtonComponentProtocol> recordButtonComponent; // @synthesize recordButtonComponent=_recordButtonComponent;
@property(readonly, nonatomic) __weak id <ACCRecordRootComponentProtocol> rootComponent; // @synthesize rootComponent=_rootComponent;
@property(readonly, nonatomic) __weak id <ACCStickerComponentProtocol> stickerComponent; // @synthesize stickerComponent=_stickerComponent;
@property(nonatomic, getter=isExporting) _Bool exporting; // @synthesize exporting=_exporting;
@property(retain, nonatomic) AWEAnimatedButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) AWEButton *completeButton; // @synthesize completeButton=_completeButton;
@property(nonatomic) __weak id <ACCComponentBusProtocol> componentBus; // @synthesize componentBus=_componentBus;
- (void).cxx_destruct;
- (id)recorderController;
- (void)msg_didbackToRecordFromGame;
- (void)msg_didConfirmEnterGame:(_Bool)arg1;
- (void)msg_resetGame;
- (void)msg_startGame;
- (void)msg_didFinishTakePicture;
- (void)msg_startTakePicture;
- (void)msg_didFinishCountDown;
- (void)msg_startRecord;
- (void)msg_didExitPottery;
- (void)msg_didEnterPottery;
- (void)msg_camera:(id)arg1 pauseRecordWithError:(id)arg2;
- (void)jumpToNextViewController;
- (void)didFinishRecording;
- (void)stopRecord;
- (void)resyncReactPlayerTime;
- (void)resyncDuetPlayerTime;
- (void)p_deleteLastSegmentFrames;
- (void)p_deleteAllSegmentsFrames;
- (void)p_deleteAllSegments;
- (void)removeLastVideoFragmentInfo;
- (void)removeLastSegment:(id)arg1;
- (void)clickDeleteBtn:(id)arg1;
- (void)clickCompleteBtn:(id)arg1;
- (_Bool)allowCompleteOf:(double)arg1;
- (void)msg_didUpdateCurrentDuration:(double)arg1;
- (void)msg_didConfirmReshoot:(_Bool)arg1;
- (void)containerViewControllerPostDidLoad;
- (void)containerViewControllerDidLoad;
- (void)appendReactFragmentInfoIfNeeded;
- (void)fillChallengeNameForFragmentInfo;
- (void)fillBeautifyInfoForFragmentInfo:(id)arg1;
- (void)appendVideoFragmentInfo;
- (void)updateCompleteButtonWithSelected:(_Bool)arg1;
- (id)autoInjectComponentDictionaryOfbeautyConfigurationComponent;
- (id)autoInjectComponentDictionaryOftoolBarComponent;
- (id)autoInjectComponentDictionaryOfcountdownComponent;
- (id)autoInjectComponentDictionaryOfbeautyFeatureComponent;
- (id)autoInjectComponentDictionaryOfpotteryComponent;
- (id)autoInjectComponentDictionaryOftrackComponent;
- (id)autoInjectComponentDictionaryOffilterComponent;
- (id)autoInjectComponentDictionaryOfcaptureComponent;
- (id)autoInjectComponentDictionaryOfprogressBarComponent;
- (id)autoInjectComponentDictionaryOfpreviewComponent;
- (id)autoInjectComponentDictionaryOfrecordButtonComponent;
- (id)autoInjectComponentDictionaryOfrootComponent;
- (id)autoInjectComponentDictionaryOfstickerComponent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) __weak id <ACCComponentProtocol> superComponent;
@property(readonly) Class superclass;

@end

