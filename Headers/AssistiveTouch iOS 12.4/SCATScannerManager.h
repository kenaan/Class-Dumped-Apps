//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AXSSInterDeviceConnectionListener-Protocol.h"
#import "HNDAccessibilityManagerObserver-Protocol.h"
#import "SCATActionHandlerDelegate-Protocol.h"
#import "SCATActionHandlerUIDelegate-Protocol.h"
#import "SCATAlternateKeysManagerDelegate-Protocol.h"
#import "SCATCandidateBarManagerDelegate-Protocol.h"
#import "SCATCursorManagerDelegate-Protocol.h"
#import "SCATDisplaySource-Protocol.h"
#import "SCATDriverDelegate-Protocol.h"
#import "SCATElementNavigationControllerDelegate-Protocol.h"
#import "SCATGestureProviderDelegate-Protocol.h"
#import "SCATInputControllerDelegate-Protocol.h"
#import "SCATMenuDelegate-Protocol.h"
#import "SCATMenuObserver-Protocol.h"
#import "SCATPointPickerDelegate-Protocol.h"

@class AXDispatchTimer, AXDragManager, AXDragSession, AXOutputManager, AXSSInterDeviceCommunicator, AXSwitchRecipe, AXUpdateElementVisualsCoalescer, HNDScannerAutoscroller, NSMutableSet, NSString, SCATActionHandler, SCATAlternateKeysManager, SCATAutomaticDriver, SCATCandidateBarManager, SCATCursorManager, SCATDriver, SCATDwellDriver, SCATElementManager, SCATElementNavigationController, SCATFocusContext, SCATGestureProvider, SCATInputController, SCATManualDriver, SCATMenu, SCATPendingDragInfo, SCATPointPicker, SCATScrollViewPickerManager, _DUIAccessibilityDragStatus;
@protocol OS_dispatch_queue, SCATElement, SCATScannerManagerDelegate;

@interface SCATScannerManager : NSObject <SCATDriverDelegate, HNDAccessibilityManagerObserver, SCATInputControllerDelegate, SCATMenuDelegate, SCATMenuObserver, SCATGestureProviderDelegate, SCATPointPickerDelegate, SCATCursorManagerDelegate, SCATAlternateKeysManagerDelegate, SCATActionHandlerDelegate, SCATActionHandlerUIDelegate, SCATCandidateBarManagerDelegate, AXSSInterDeviceConnectionListener, SCATElementNavigationControllerDelegate, SCATDisplaySource>
{
    _Bool _isLoaded;
    _Bool _forceDisableScreenLock;
    _Bool _didSetFocusContextForResume;
    _Bool _didPauseForReasonsToDisableScanning;
    AXOutputManager *_outputManager;
    SCATCursorManager *_cursorManager;
    AXDispatchTimer *_beginScanningTimer;
    HNDScannerAutoscroller *_autoscroller;
    SCATInputController *_inputController;
    SCATGestureProvider *_gestureProvider;
    SCATMenu *_menu;
    SCATPointPicker *_pointPicker;
    SCATElementNavigationController *_elementNavController;
    SCATManualDriver *_manualScanningDriver;
    SCATAutomaticDriver *_autoScanningDriver;
    SCATDriver *_activeScannerDriver;
    SCATElementManager *_activeElementManager;
    id <SCATScannerManagerDelegate> _delegate;
    SCATActionHandler *_selectActionHandler;
    SCATAlternateKeysManager *_alternateKeysManager;
    SCATScrollViewPickerManager *_scrollViewPickerManager;
    SCATCandidateBarManager *_candidateBarManager;
    SCATDwellDriver *_dwellScanningDriver;
    AXUpdateElementVisualsCoalescer *_updateElementVisualsCoalescer;
    SCATFocusContext *_focusContextForResume;
    NSMutableSet *_reasonsToDisableScanning;
    AXSwitchRecipe *_currentRecipe;
    long long _itemMenuState;
    AXSSInterDeviceCommunicator *_interDeviceCommunicator;
    AXDragManager *_dragManager;
    SCATPendingDragInfo *_pendingDragInfo;
    AXDragSession *_currentDragSession;
    _DUIAccessibilityDragStatus *_currentDragStatus;
    AXDispatchTimer *_dragStartTimer;
    NSObject<OS_dispatch_queue> *_managedConfigurationQueue;
}

+ (void)updateElementCacheScheme;
+ (id)sharedManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *managedConfigurationQueue; // @synthesize managedConfigurationQueue=_managedConfigurationQueue;
@property(retain, nonatomic) AXDispatchTimer *dragStartTimer; // @synthesize dragStartTimer=_dragStartTimer;
@property(retain, nonatomic) _DUIAccessibilityDragStatus *currentDragStatus; // @synthesize currentDragStatus=_currentDragStatus;
@property(retain, nonatomic) AXDragSession *currentDragSession; // @synthesize currentDragSession=_currentDragSession;
@property(retain) SCATPendingDragInfo *pendingDragInfo; // @synthesize pendingDragInfo=_pendingDragInfo;
@property(retain, nonatomic) AXDragManager *dragManager; // @synthesize dragManager=_dragManager;
@property(retain, nonatomic) AXSSInterDeviceCommunicator *interDeviceCommunicator; // @synthesize interDeviceCommunicator=_interDeviceCommunicator;
@property(nonatomic) long long itemMenuState; // @synthesize itemMenuState=_itemMenuState;
@property(retain, nonatomic) AXSwitchRecipe *currentRecipe; // @synthesize currentRecipe=_currentRecipe;
@property(nonatomic) _Bool didPauseForReasonsToDisableScanning; // @synthesize didPauseForReasonsToDisableScanning=_didPauseForReasonsToDisableScanning;
@property(retain, nonatomic) NSMutableSet *reasonsToDisableScanning; // @synthesize reasonsToDisableScanning=_reasonsToDisableScanning;
@property(nonatomic) _Bool didSetFocusContextForResume; // @synthesize didSetFocusContextForResume=_didSetFocusContextForResume;
@property(retain, nonatomic) SCATFocusContext *focusContextForResume; // @synthesize focusContextForResume=_focusContextForResume;
@property(nonatomic) _Bool forceDisableScreenLock; // @synthesize forceDisableScreenLock=_forceDisableScreenLock;
@property(retain, nonatomic) AXUpdateElementVisualsCoalescer *updateElementVisualsCoalescer; // @synthesize updateElementVisualsCoalescer=_updateElementVisualsCoalescer;
@property(retain, nonatomic) SCATDwellDriver *dwellScanningDriver; // @synthesize dwellScanningDriver=_dwellScanningDriver;
@property(retain, nonatomic) SCATCandidateBarManager *candidateBarManager; // @synthesize candidateBarManager=_candidateBarManager;
@property(retain, nonatomic) SCATScrollViewPickerManager *scrollViewPickerManager; // @synthesize scrollViewPickerManager=_scrollViewPickerManager;
@property(retain, nonatomic) SCATAlternateKeysManager *alternateKeysManager; // @synthesize alternateKeysManager=_alternateKeysManager;
@property(retain, nonatomic) SCATActionHandler *selectActionHandler; // @synthesize selectActionHandler=_selectActionHandler;
@property(nonatomic) __weak id <SCATScannerManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SCATElementManager *activeElementManager; // @synthesize activeElementManager=_activeElementManager;
@property(retain, nonatomic) SCATDriver *activeScannerDriver; // @synthesize activeScannerDriver=_activeScannerDriver;
@property(retain, nonatomic) SCATAutomaticDriver *autoScanningDriver; // @synthesize autoScanningDriver=_autoScanningDriver;
@property(retain, nonatomic) SCATManualDriver *manualScanningDriver; // @synthesize manualScanningDriver=_manualScanningDriver;
@property(retain, nonatomic) SCATElementNavigationController *elementNavController; // @synthesize elementNavController=_elementNavController;
@property(retain, nonatomic) SCATPointPicker *pointPicker; // @synthesize pointPicker=_pointPicker;
@property(retain, nonatomic) SCATMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) SCATGestureProvider *gestureProvider; // @synthesize gestureProvider=_gestureProvider;
@property(retain, nonatomic) SCATInputController *inputController; // @synthesize inputController=_inputController;
@property(retain, nonatomic) HNDScannerAutoscroller *autoscroller; // @synthesize autoscroller=_autoscroller;
@property(retain, nonatomic) AXDispatchTimer *beginScanningTimer; // @synthesize beginScanningTimer=_beginScanningTimer;
@property(retain, nonatomic) SCATCursorManager *cursorManager; // @synthesize cursorManager=_cursorManager;
@property(retain, nonatomic) AXOutputManager *outputManager; // @synthesize outputManager=_outputManager;
- (void).cxx_destruct;
- (void)showUIContext:(_Bool)arg1;
- (void)hidUIContext:(_Bool)arg1;
- (_Bool)isUIContextHidden;
- (id)scatFrontCursorUIContext;
- (id)scatBackCursorUIContext;
- (id)scatUIContext;
- (void)presentPostScanningMenuForElementNavigationController:(id)arg1;
- (_Bool)candidateBarManager:(id)arg1 hasValidTypingCandidates:(id)arg2;
- (id)_typingCandidates;
- (void)alternateKeysManager:(id)arg1 didSelectAlternateKey:(id)arg2;
- (id)focusContextForActionHandler:(id)arg1;
- (void)actionHandlerDidCancelPendingAction:(id)arg1;
- (void)actionHandlerDidFireAction:(id)arg1;
- (_Bool)actionHandler:(id)arg1 shouldActImmediatelyOnActionCount:(unsigned long long)arg2;
- (id)_focusContextAtPoint:(struct CGPoint)arg1;
- (void)pointPickerDidFinishSweeping:(id)arg1;
- (void)pointPicker:(id)arg1 didSweepOutOfFocusContext:(id)arg2 isRefiningPoint:(_Bool)arg3;
- (void)pointPicker:(id)arg1 didSweepIntoFocusContext:(id)arg2 isRefiningPoint:(_Bool)arg3;
- (void)pointPicker:(id)arg1 didPickPoint:(struct CGPoint)arg2;
- (void)didChooseCreateCustomGestureFromGestureProvider:(id)arg1;
- (void)gestureProvider:(id)arg1 shouldResetScanningFromElement:(id)arg2;
- (id)contentViewForGestureProvider:(id)arg1;
- (void)gestureProvider:(id)arg1 didShowFingers:(_Bool)arg2;
- (void)shouldEndScanningGestureProvider:(id)arg1;
- (void)shouldStartScanningGestureProvider:(id)arg1;
- (void)menuDidUpdateTipObject:(id)arg1;
- (void)menuDidFinishTransition:(id)arg1;
- (void)menuWillBeginTransition:(id)arg1;
- (void)menuDidDisappear:(id)arg1;
- (void)menuDidAppear:(id)arg1;
- (void)menuWillAppear:(id)arg1;
- (void)menu:(id)arg1 didCompleteSysdiagnoseWithSuccess:(_Bool)arg2;
- (void)didStartSysdiagnoseForMenu:(id)arg1;
- (id)interDeviceCommunicatorForMenu:(id)arg1;
- (void)returnControlToMasterDevice:(id)arg1;
- (_Bool)canReturnControlToMasterDevice:(id)arg1;
- (void)searchForControllableDevicesWithMenu:(id)arg1;
- (_Bool)canSearchForControllableDevicesWithMenu:(id)arg1;
- (void)menu:(id)arg1 showScrollViewPickerForScrollViews:(id)arg2 elementsToScroll:(id)arg3 scrollAction:(int)arg4;
- (_Bool)shouldShowAppWideScrollActionsInMenu:(id)arg1;
- (void)menu:(id)arg1 setItemMenuState:(long long)arg2;
- (long long)itemMenuStateForMenu:(id)arg1;
- (_Bool)shouldAddItemSpecificMenuOptionsToMenu:(id)arg1;
- (_Bool)_isPostScanningMenu:(id)arg1;
- (void)menu:(id)arg1 activateRecipe:(id)arg2;
- (id)exitActionElementForFingersInMenu:(id)arg1;
- (void)didPressScreenChangingButtonInMenu:(id)arg1;
- (id)gesturesSheetForMenu:(id)arg1;
- (id)menu:(id)arg1 tapAndHoldContextItemForSheet:(id)arg2;
- (id)menu:(id)arg1 tapContextItemForSheet:(id)arg2;
- (struct CGRect)menu:(id)arg1 rectToClearForFingersWithGestureSheet:(_Bool)arg2;
- (void)menu:(id)arg1 showTypingCandidates:(id)arg2;
- (void)menu:(id)arg1 showAlternateKeysForKey:(id)arg2;
- (id)userInterfaceClientForInputController:(id)arg1;
- (void)inputController:(id)arg1 didReceiveRecipeHoldAtPoint:(struct CGPoint)arg2 isDown:(_Bool)arg3;
- (void)inputController:(id)arg1 didReceiveRecipeActionForMappingAtIndex:(unsigned long long)arg2 isLongPressAction:(_Bool)arg3;
- (void)inputController:(id)arg1 didReceiveAction:(long long)arg2;
- (void)didEndLongPressForInputController:(id)arg1;
- (void)didBeginLongPressForInputController:(id)arg1;
- (void)accessibilityManagerShouldResumeScanning:(id)arg1;
- (void)accessibilityManagerShouldPauseScanning:(id)arg1;
- (void)_updateElementVisuals;
- (void)accessibilityManager:(id)arg1 mediaDidBegin:(struct __CFData *)arg2;
- (void)_waitForApplication:(id)arg1;
- (void)accessibilityManager:(id)arg1 applicationWasActivated:(id)arg2;
- (void)accessibilityManager:(id)arg1 updateElementVisuals:(id)arg2;
- (void)accessibilityManager:(id)arg1 nativeFocusElementDidChange:(id)arg2;
- (void)accessibilityManager:(id)arg1 didFetchElementsForEvent:(long long)arg2 foundNewElements:(_Bool)arg3;
- (void)_updateMenuAfterElementFetch;
- (int)_validatedSelectBehaviorForCurrentSelectBehavior:(int)arg1 replacementElement:(id)arg2;
- (void)accessibilityManager:(id)arg1 willFetchElementsForEvent:(long long)arg2;
- (void)accessibilityManager:(id)arg1 didScheduleFetchEvent:(long long)arg2;
- (void)accessibilityManager:(id)arg1 screenWillChange:(struct __CFData *)arg2;
- (void)accessibilityManager:(id)arg1 didReceiveEvent:(long long)arg2;
- (_Bool)cursorManagerShouldHideMenuCursor:(id)arg1;
- (void)actionHandlerForUI:(id)arg1 willPerformDelayedActionOnContext:(id)arg2 withCount:(unsigned long long)arg3;
- (void)actionHandlerForUIWillFireAction:(id)arg1;
- (void)actionHandlerForUIDidCancelPendingAction:(id)arg1;
- (void)driver:(id)arg1 indicateDwellScanningWillAbort:(_Bool)arg2;
- (void)driverDidBecomeActive:(id)arg1;
- (void)driverDidBecomeInactive:(id)arg1;
- (void)driverDidPause:(id)arg1;
- (void)driver:(id)arg1 didFocusOnContext:(id)arg2 oldContext:(id)arg3;
- (void)_driver:(id)arg1 outputAudioForContext:(id)arg2;
- (void)driver:(id)arg1 willFocusOnContext:(id)arg2;
- (id)activeElementManagerForDriver:(id)arg1;
- (void)highlightAsPotentialSlaveForDeviceWithName:(id)arg1;
- (void)_disableUserInterfaceClientForPotentialSlave;
- (void)didBecomeIdle;
- (void)didDisconnectAsSlave;
- (void)didDisconnectAsMasterFromDeviceWithName:(id)arg1;
- (void)didConnectAsSlaveWithSettings:(id)arg1;
- (void)didConnectAsMasterToDeviceWithName:(id)arg1;
- (_Bool)canAdvertise;
- (void)_handleVolumeUpAction;
- (void)_handleTripleClickAction;
- (void)_handleDictationAction;
- (void)_handleForceTouchAction;
- (void)_handleVolumeDownAction;
- (void)_handleSiriAction;
- (void)_handleControlCenterAction;
- (void)_handleNotificationCenterAction;
- (void)_handleHomeAction;
- (void)_handleAppSwitcherAction;
- (void)_setCurrentRecipe:(id)arg1 shouldShowAlert:(_Bool)arg2;
- (void)_applyLaunchRecipeUUID;
- (void)_exitRecipeOnTimeout;
- (void)_resetRecipeTimeoutIfApplicable;
- (void)_showSimpleBannerWithText:(id)arg1;
- (void)_updateScanningStyle;
- (_Bool)shouldBypassShowingMenuForElement:(id)arg1;
- (_Bool)activateElement:(id)arg1;
- (void)useFocusContextOnResume:(id)arg1;
- (_Bool)_shouldIgnoreAllScannerControlMessages;
- (void)removeReasonToDisableScanning:(id)arg1;
- (void)addReasonToDisableScanning:(id)arg1;
- (void)pauseScanningWithScreenLockDisabled:(_Bool)arg1;
- (void)pauseScanning;
- (void)endScanning;
- (void)resumeScanning;
- (void)_beginOrContinueScanningWithFocusContext:(id)arg1 shouldBegin:(_Bool)arg2;
- (void)continueScanningWithFocusContext:(id)arg1;
- (void)beginScanningWithFocusContext:(id)arg1;
@property(readonly, nonatomic) _Bool isInactive;
@property(readonly, nonatomic) _Bool isPaused;
@property(readonly, nonatomic) _Bool isActive;
- (id)axManager;
@property(readonly, nonatomic) id <SCATElement> currentElement;
@property(readonly, nonatomic) SCATFocusContext *currentFocusContext;
- (_Bool)isSystemSleeping;
@property(readonly, nonatomic) _Bool isLandscape;
@property(readonly, nonatomic) unsigned long long immediateSelectActionCount;
@property(readonly, nonatomic) _Bool isUsingPointMode;
- (_Bool)isSwitchWithSource:(id)arg1;
@property(readonly, nonatomic) _Bool isSpeechEnabled;
@property(readonly, nonatomic) _Bool areSoundEffectsEnabled;
@property(readonly, nonatomic) long long scanningMode;
@property(readonly, nonatomic) _Bool isGroupingEnabled;
@property(readonly, nonatomic) _Bool isAutoscanEnabled;
- (void)_updateAudioSessionState;
- (void)_deactivateAudioSession;
- (_Bool)_isScannerControlledByDriver:(id)arg1;
- (void)_updateActiveElementManager:(CDUnknownBlockType)arg1;
- (void)_updateActiveElementManager;
- (id)_primaryElementManagerForScannerState;
- (id)_elementManagerForScannerState;
- (void)setActiveElementManager:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_driverForScannerState;
@property(readonly, nonatomic) _Bool isControllingOtherDevice;
@property(readonly, nonatomic) _Bool isHandlingInterDeviceCommunication;
@property(readonly, nonatomic) _Bool isLoaded;
@property(readonly, copy) NSString *description;
- (void)unloadScanner;
- (void)loadScanner;
- (void)_performAccessibilityValidations;
- (void)handleUSBMFiDeviceConnected;
- (void)_setUSBRMPreferenceDisabled;
- (_Bool)_userHasDisabledUSBRM;
- (void)performDrop;
- (void)moveDragSessionToFixedSpaceScreenPoint:(struct CGPoint)arg1;
- (void)cancelDragSession;
- (_Bool)dragSessionIsActive;
- (void)waitForDragStartFromPid:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dragSessionChanged:(id)arg1 toStatus:(id)arg2;
- (void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)dragSessionWasTerminated:(id)arg1;
- (void)dragManager:(id)arg1 dragSessionReady:(id)arg2;
- (_Bool)dragManager:(id)arg1 shouldAllowEndpointVendForRequestingConnection:(id)arg2;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
