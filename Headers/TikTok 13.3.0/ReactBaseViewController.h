//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEReactPage-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class AWERNRootView, AWEUILoadingView, NSDictionary, NSString, NSURL, RCTBridge, UILabel, UINavigationController;
@protocol AWEYAMSceneRecordProtocol, UIGestureRecognizerDelegate;

@interface ReactBaseViewController : UIViewController <AWEReactPage, UIGestureRecognizerDelegate>
{
    _Bool _navigationBarHidden;
    _Bool _popGestureEnable;
    _Bool _backButtonHidden;
    _Bool _statusBarHidden;
    _Bool _singleBundle;
    _Bool _loaded;
    _Bool _originalPopGestureEnable;
    NSString *_navigationTitle;
    NSString *_patchChannel;
    NSString *_patchBundle;
    NSString *_patchSourceURL;
    NSString *_fallbackURL;
    NSString *_backgroundColor;
    long long _statusBarStyle;
    AWEUILoadingView *_loadingView;
    AWERNRootView *_reactView;
    NSString *_moduleName;
    NSDictionary *_initialProperties;
    NSURL *_jsPathFileURL;
    double _startLoadTime;
    double _startDownloadTime;
    double _endDownloadTime;
    NSString *_reactID;
    RCTBridge *_bridge;
    id <AWEYAMSceneRecordProtocol> _scene;
    UINavigationController *_originalNavigationController;
    id <UIGestureRecognizerDelegate> _originalGestureRecognizerDelegate;
    UILabel *_rnLabel;
    double _monitorStartTime;
}

+ (void)initialize;
@property(nonatomic) double monitorStartTime; // @synthesize monitorStartTime=_monitorStartTime;
@property(retain, nonatomic) UILabel *rnLabel; // @synthesize rnLabel=_rnLabel;
@property(nonatomic) _Bool originalPopGestureEnable; // @synthesize originalPopGestureEnable=_originalPopGestureEnable;
@property(nonatomic) __weak id <UIGestureRecognizerDelegate> originalGestureRecognizerDelegate; // @synthesize originalGestureRecognizerDelegate=_originalGestureRecognizerDelegate;
@property(nonatomic) __weak UINavigationController *originalNavigationController; // @synthesize originalNavigationController=_originalNavigationController;
@property(retain, nonatomic) id <AWEYAMSceneRecordProtocol> scene; // @synthesize scene=_scene;
@property(retain, nonatomic) RCTBridge *bridge; // @synthesize bridge=_bridge;
@property(copy, nonatomic) NSString *reactID; // @synthesize reactID=_reactID;
@property(nonatomic) _Bool loaded; // @synthesize loaded=_loaded;
@property(nonatomic) double endDownloadTime; // @synthesize endDownloadTime=_endDownloadTime;
@property(nonatomic) double startDownloadTime; // @synthesize startDownloadTime=_startDownloadTime;
@property(nonatomic) double startLoadTime; // @synthesize startLoadTime=_startLoadTime;
@property(retain, nonatomic) NSURL *jsPathFileURL; // @synthesize jsPathFileURL=_jsPathFileURL;
@property(copy, nonatomic) NSDictionary *initialProperties; // @synthesize initialProperties=_initialProperties;
@property(copy, nonatomic) NSString *moduleName; // @synthesize moduleName=_moduleName;
@property(nonatomic) _Bool singleBundle; // @synthesize singleBundle=_singleBundle;
@property(retain, nonatomic) AWERNRootView *reactView; // @synthesize reactView=_reactView;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) long long statusBarStyle; // @synthesize statusBarStyle=_statusBarStyle;
@property(copy, nonatomic) NSString *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(nonatomic) _Bool statusBarHidden; // @synthesize statusBarHidden=_statusBarHidden;
@property(nonatomic) _Bool backButtonHidden; // @synthesize backButtonHidden=_backButtonHidden;
@property(copy, nonatomic) NSString *fallbackURL; // @synthesize fallbackURL=_fallbackURL;
@property(copy, nonatomic) NSString *patchSourceURL; // @synthesize patchSourceURL=_patchSourceURL;
@property(copy, nonatomic) NSString *patchBundle; // @synthesize patchBundle=_patchBundle;
@property(copy, nonatomic) NSString *patchChannel; // @synthesize patchChannel=_patchChannel;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) _Bool popGestureEnable; // @synthesize popGestureEnable=_popGestureEnable;
@property(nonatomic) _Bool navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
- (void).cxx_destruct;
- (void)addRNLabel;
- (_Bool)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (id)hmdPageExtension;
- (void)_fallbackToWeb;
- (_Bool)_canOpenRN:(id)arg1;
- (void)_loadRNView;
- (void)backButtonClicked;
- (void)fakeNavigationBarIfNeeded;
- (void)_componentDidMount:(id)arg1;
- (void)receiveStatusBarUpdateNotification:(id)arg1;
- (void)receiveGetStatusBarNotification:(id)arg1;
- (void)receivePopGestureControlNotificaiton:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)returnToOriginalInteractivePopGestureState;
- (void)enableInteractivePopGesture;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (_Bool)canDDownloadPatchSource;
- (void)viewDidLoad;
- (void)trackRenderTime:(id)arg1;
- (id)initWithModuleName:(id)arg1 jsPathFileURL:(id)arg2 initialProperties:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

