//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEFullScreenPopTransitionCustomize-Protocol.h"
#import "AWEParallelSlideRightInnerContextProvider-Protocol.h"
#import "AWERecordFilterSwitchProtocol-Protocol.h"
#import "AWEStickerDataManagerDelegate-Protocol.h"
#import "AWEStickerFeatureDelegate-Protocol.h"
#import "AWEStoryCameraContainerViewDelegate-Protocol.h"
#import "AWEStoryCameraManagerDelegate-Protocol.h"
#import "AWEStoryRecordAnimationViewDelegate-Protocol.h"
#import "AWEStorySwitchRecordModeViewDelegate-Protocol.h"
#import "AWEZoomTransitionOuterContextProvider-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWEAnimatedButton, AWECameraFilterConfiguration, AWEModalTransitionDelegate, AWERecordFilterSwitchManager, AWEStickerDataManager, AWEStickerFeatureManager, AWEStickerHintView, AWEStoryAuthorityView, AWEStoryCameraContainerView, AWEStoryCameraManager, AWEStoryPublishStatusManager, AWEStorySwitchRecordModeView, AWEVideoPublishViewModel, IESEffectModel, IESMMRecoder, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, NSTimer, UIImageView, UIView;
@protocol AWEPublishModelProtocol;

@interface AWEStoryRecordViewController : UIViewController <AWEStoryRecordAnimationViewDelegate, AWEStickerDataManagerDelegate, AWEStickerFeatureDelegate, AWERecordFilterSwitchProtocol, AWEFullScreenPopTransitionCustomize, UIGestureRecognizerDelegate, AWEStoryCameraManagerDelegate, AWEStorySwitchRecordModeViewDelegate, AWEStoryCameraContainerViewDelegate, AWEParallelSlideRightInnerContextProvider, AWEZoomTransitionOuterContextProvider>
{
    _Bool enableFilterSwitch;
    _Bool _fromShake;
    _Bool _needReportEnterEvent;
    _Bool _viewHasAppearred;
    _Bool _applicationActive;
    _Bool _isShowingStickerController;
    _Bool _isUsingMuteSticker;
    _Bool _isUsingRecognitionSticker;
    _Bool _recognized;
    _Bool _hasCloseStorySitckerPanel;
    _Bool _usingFakeZoomEffects;
    _Bool _zoomEffectNotReady;
    _Bool _zoomInValidHappenedNeedRemove;
    _Bool _isRecordingBoomerang;
    _Bool _isTakingPicture;
    _Bool _isFromShakeForToast;
    AWEVideoPublishViewModel *_publishModel;
    IESMMRecoder *_camera;
    NSDictionary *_slideInParams;
    AWEStoryCameraManager *_cameraManager;
    AWEModalTransitionDelegate *_transitionDelegate;
    NSArray *_observers;
    AWEStoryAuthorityView *_authorityView;
    AWEAnimatedButton *_authorityCloseBtn;
    AWEStoryCameraContainerView *_cameraContainerView;
    UIImageView *_focusImageView;
    UIView *_topGradientView;
    UIView *_bottomGradientView;
    double _cameraZoomFactor;
    IESEffectModel *_currentSticker;
    AWEStickerFeatureManager *_stickerFeatureManager;
    AWEStickerDataManager *_stickerDataManager;
    AWEStickerHintView *_stickerHintView;
    AWEStickerHintView *_shakeVideoHintView;
    NSMutableDictionary *_cacheStickerChallengeNameDict;
    AWEStickerDataManager *_zoomDataManager;
    IESEffectModel *_selectedzoomEffect;
    NSArray *_currentlyUsedZoomEffects;
    NSString *_lastTimeMusicURLString;
    NSTimer *_zoomListDownloadTimeOutTimer;
    IESEffectModel *_currentFilter;
    AWECameraFilterConfiguration *_cameraFilterConfiguration;
    AWERecordFilterSwitchManager *_filterSwitchManager;
    NSMutableSet *_normalRecordGesturesSet;
    NSTimer *_recordFramesTimer;
    NSMutableArray *_lastSectionFrames;
    long long _removeActionVersion;
    UIViewController<AWEPublishModelProtocol> *_editVc;
    unsigned long long _recordMode;
    NSArray *_recordModeArray;
    AWEStoryPublishStatusManager *_publishStatusManager;
    UIView *_transitionView;
    AWEStorySwitchRecordModeView *_recordButtonSwitchView;
    struct CGPoint _lastTouchPoint;
}

@property(nonatomic) _Bool isFromShakeForToast; // @synthesize isFromShakeForToast=_isFromShakeForToast;
@property(retain, nonatomic) AWEStorySwitchRecordModeView *recordButtonSwitchView; // @synthesize recordButtonSwitchView=_recordButtonSwitchView;
@property(nonatomic) __weak UIView *transitionView; // @synthesize transitionView=_transitionView;
@property(retain, nonatomic) AWEStoryPublishStatusManager *publishStatusManager; // @synthesize publishStatusManager=_publishStatusManager;
@property(nonatomic) _Bool isTakingPicture; // @synthesize isTakingPicture=_isTakingPicture;
@property(nonatomic) _Bool isRecordingBoomerang; // @synthesize isRecordingBoomerang=_isRecordingBoomerang;
@property(retain, nonatomic) NSArray *recordModeArray; // @synthesize recordModeArray=_recordModeArray;
@property(nonatomic) unsigned long long recordMode; // @synthesize recordMode=_recordMode;
@property(retain, nonatomic) UIViewController<AWEPublishModelProtocol> *editVc; // @synthesize editVc=_editVc;
@property(nonatomic) long long removeActionVersion; // @synthesize removeActionVersion=_removeActionVersion;
@property(retain, nonatomic) NSMutableArray *lastSectionFrames; // @synthesize lastSectionFrames=_lastSectionFrames;
@property(retain, nonatomic) NSTimer *recordFramesTimer; // @synthesize recordFramesTimer=_recordFramesTimer;
@property(retain, nonatomic) NSMutableSet *normalRecordGesturesSet; // @synthesize normalRecordGesturesSet=_normalRecordGesturesSet;
@property(retain, nonatomic) AWERecordFilterSwitchManager *filterSwitchManager; // @synthesize filterSwitchManager=_filterSwitchManager;
@property(retain, nonatomic) AWECameraFilterConfiguration *cameraFilterConfiguration; // @synthesize cameraFilterConfiguration=_cameraFilterConfiguration;
@property(retain, nonatomic) IESEffectModel *currentFilter; // @synthesize currentFilter=_currentFilter;
@property(retain, nonatomic) NSTimer *zoomListDownloadTimeOutTimer; // @synthesize zoomListDownloadTimeOutTimer=_zoomListDownloadTimeOutTimer;
@property(nonatomic) _Bool zoomInValidHappenedNeedRemove; // @synthesize zoomInValidHappenedNeedRemove=_zoomInValidHappenedNeedRemove;
@property(copy, nonatomic) NSString *lastTimeMusicURLString; // @synthesize lastTimeMusicURLString=_lastTimeMusicURLString;
@property(nonatomic) _Bool zoomEffectNotReady; // @synthesize zoomEffectNotReady=_zoomEffectNotReady;
@property(nonatomic) _Bool usingFakeZoomEffects; // @synthesize usingFakeZoomEffects=_usingFakeZoomEffects;
@property(copy, nonatomic) NSArray *currentlyUsedZoomEffects; // @synthesize currentlyUsedZoomEffects=_currentlyUsedZoomEffects;
@property(retain, nonatomic) IESEffectModel *selectedzoomEffect; // @synthesize selectedzoomEffect=_selectedzoomEffect;
@property(retain, nonatomic) AWEStickerDataManager *zoomDataManager; // @synthesize zoomDataManager=_zoomDataManager;
@property(nonatomic) _Bool hasCloseStorySitckerPanel; // @synthesize hasCloseStorySitckerPanel=_hasCloseStorySitckerPanel;
@property(nonatomic) _Bool recognized; // @synthesize recognized=_recognized;
@property(nonatomic) _Bool isUsingRecognitionSticker; // @synthesize isUsingRecognitionSticker=_isUsingRecognitionSticker;
@property(nonatomic) _Bool isUsingMuteSticker; // @synthesize isUsingMuteSticker=_isUsingMuteSticker;
@property(nonatomic) _Bool isShowingStickerController; // @synthesize isShowingStickerController=_isShowingStickerController;
@property(retain, nonatomic) NSMutableDictionary *cacheStickerChallengeNameDict; // @synthesize cacheStickerChallengeNameDict=_cacheStickerChallengeNameDict;
@property(retain, nonatomic) AWEStickerHintView *shakeVideoHintView; // @synthesize shakeVideoHintView=_shakeVideoHintView;
@property(retain, nonatomic) AWEStickerHintView *stickerHintView; // @synthesize stickerHintView=_stickerHintView;
@property(retain, nonatomic) AWEStickerDataManager *stickerDataManager; // @synthesize stickerDataManager=_stickerDataManager;
@property(retain, nonatomic) AWEStickerFeatureManager *stickerFeatureManager; // @synthesize stickerFeatureManager=_stickerFeatureManager;
@property(retain, nonatomic) IESEffectModel *currentSticker; // @synthesize currentSticker=_currentSticker;
@property(nonatomic) struct CGPoint lastTouchPoint; // @synthesize lastTouchPoint=_lastTouchPoint;
@property(nonatomic) double cameraZoomFactor; // @synthesize cameraZoomFactor=_cameraZoomFactor;
@property(retain, nonatomic) UIView *bottomGradientView; // @synthesize bottomGradientView=_bottomGradientView;
@property(retain, nonatomic) UIView *topGradientView; // @synthesize topGradientView=_topGradientView;
@property(retain, nonatomic) UIImageView *focusImageView; // @synthesize focusImageView=_focusImageView;
@property(retain, nonatomic) AWEStoryCameraContainerView *cameraContainerView; // @synthesize cameraContainerView=_cameraContainerView;
@property(retain, nonatomic) AWEAnimatedButton *authorityCloseBtn; // @synthesize authorityCloseBtn=_authorityCloseBtn;
@property(retain, nonatomic) AWEStoryAuthorityView *authorityView; // @synthesize authorityView=_authorityView;
@property(retain, nonatomic) NSArray *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;
@property(nonatomic) _Bool applicationActive; // @synthesize applicationActive=_applicationActive;
@property(nonatomic) _Bool viewHasAppearred; // @synthesize viewHasAppearred=_viewHasAppearred;
@property(nonatomic) _Bool needReportEnterEvent; // @synthesize needReportEnterEvent=_needReportEnterEvent;
@property(retain, nonatomic) AWEStoryCameraManager *cameraManager; // @synthesize cameraManager=_cameraManager;
@property(copy, nonatomic) NSDictionary *slideInParams; // @synthesize slideInParams=_slideInParams;
@property(nonatomic) _Bool fromShake; // @synthesize fromShake=_fromShake;
@property(retain, nonatomic) IESMMRecoder *camera; // @synthesize camera=_camera;
@property(retain, nonatomic) AWEVideoPublishViewModel *publishModel; // @synthesize publishModel=_publishModel;
@property(nonatomic) _Bool enableFilterSwitch; // @synthesize enableFilterSwitch;
- (void).cxx_destruct;
- (void)getOriginalRecordFrames;
- (id)fakeZoomEffects;
- (void)adjustCameraZoomWithPoint:(struct CGPoint)arg1;
- (id)animationDuration;
- (_Bool)enableScaleAnimation;
- (unsigned long long)awe_fullScreenPopTransitionTriggerDirection;
- (void)forceSetCameraToFront:(_Bool)arg1;
- (void)buildGradientView;
- (void)dismissViewController;
- (void)addActionForCameraContainerView;
- (void)appendVideoFragmentInfo;
- (void)resetCameraZoom;
- (unsigned long long)getCurrentViewMode;
- (void)switchColorButtonClicked;
- (void)settingsTapped:(id)arg1;
- (void)showUploadVideoViewController;
- (void)setStickerViewControllerDismissBlockIfNeeded;
- (void)clickStickersBtn:(id)arg1;
- (void)adjustCameraParams;
- (void)swapCamera;
- (void)clickCameraFlip:(id)arg1;
- (void)clickBackBtn:(id)arg1;
- (void)clickAuthorityCloseBtn:(id)arg1;
- (float)videoMinimumDuration;
- (float)videoMaxDuration;
- (void)restoreStickerButtonIcon;
- (void)configApplyStickerApplyCompletionBlock;
- (void)configApplyStickerWillapplyStickerBlock;
- (void)updateCameraWithSticker:(id)arg1;
- (void)downloadStickers;
- (void)startDownloadRestZoomEffects;
- (void)invalidateZoomListTimeoutTimer;
- (void)zoomListDownloadTimeout;
- (void)activeZoomDownloadTimeOutTimer;
- (_Bool)useCachedZoomEffects;
- (void)updateCurrentZoomEffectsWithArray:(id)arg1;
- (void)downloadAndApplyZoomEffectIfNeeded:(id)arg1;
- (void)downloadZoomList;
- (void)configFilterSwitchManager;
- (void)jumpToEditVcWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)didFinishRecording;
- (void)takeTextPicture;
- (void)takePicture;
- (void)stopRecord;
- (void)startRecord;
- (void)buildCameraProgressIfNeeded;
- (void)checkAuthority;
- (void)setupCameraWithAudioCapture:(_Bool)arg1;
- (void)setupCamera;
- (void)setupUI;
- (void)createVideoDataIfNeeded;
- (void)configPublishModel;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)doubleTapped;
- (void)addDoubleTapGesture;
- (void)handlePinchGestureForZoom:(id)arg1;
- (void)addPinchGestureForZoom;
- (void)screenshotDetected;
- (void)addNotificationObservers;
- (id)recordModeTypeTitleMap;
- (id)recordModeTitleArray;
- (unsigned long long)getRecordModeForIndex:(long long)arg1;
- (void)cameraDidRecordReady;
- (void)camera:(id)arg1 didPauseVideoRecordingWithError:(id)arg2;
- (void)camera:(id)arg1 didStartVideoRecordingWithError:(id)arg2;
- (void)voiceRecognizationStickerACK;
- (void)musicStickerAppliedWithPath:(id)arg1;
- (void)storyStickerRecognized;
- (void)zoomEffectAdjustCameraWithPoint:(struct CGPoint)arg1;
- (void)didSelectZoomEffect:(id)arg1;
- (id)trackNameForCurrentMode;
- (void)didSelectItemAtIndex:(long long)arg1;
- (_Bool)switchFilterGestureShouldBegin;
- (void)switchFilterWithFilterOne:(id)arg1 FilterTwo:(id)arg2 direction:(long long)arg3 progress:(double)arg4;
- (void)stickerHintViewRemove;
- (void)stickerHintViewShowWithEffect:(id)arg1;
- (void)modernStickerViewControllerTappedCameraButton:(id)arg1;
- (void)modernStickerViewControllerDidShow;
- (void)camera:(id)arg1 willFocusAtPoint:(struct CGPoint)arg2;
- (id)insertStickersForCategory:(id)arg1;
- (id)zoomTransitionStartViewForOffset:(long long)arg1;
- (void)invalidRecord;
- (void)touchCancelled;
- (_Bool)shouldResponseToTouchEnd;
- (_Bool)shouldResponseToTouchBegin;
- (void)touchBeginInZoomState;
- (void)recordActionChangedWithTouchPoint:(id)arg1;
- (void)textPictureAction;
- (void)captureAction;
- (void)recordActionEnd;
- (void)recordOrCaptureWillBegin;
- (void)recordActionStart;
- (long long)preferredStatusBarStyle;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)checkPublishStatus;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

