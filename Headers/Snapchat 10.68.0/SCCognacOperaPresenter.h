//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacOperaDataSourceAppURLTransformer-Protocol.h"
#import "SCOperaEventListener-Protocol.h"

@class NSString, SCCognacOperaDataSource, SCCognacOperaPlayerItem, SCCognacOperaViewingSession, SCCognacPreconditionsChecker, SCCognacWebProxy, SCOperaViewController, UIView;
@protocol SCCognacOperaPresenterDelegate;

@interface SCCognacOperaPresenter : NSObject <SCOperaEventListener, SCCognacOperaDataSourceAppURLTransformer>
{
    SCCognacWebProxy *_webProxy;
    SCOperaViewController *_operaVC;
    SCCognacOperaDataSource *_operaDataSource;
    SCCognacPreconditionsChecker *_preconditionsChecker;
    SCCognacOperaViewingSession *_operaViewingSession;
    _Bool _beingDismissed;
    UIView *_animationBaseView;
    id <SCCognacOperaPresenterDelegate> _delegate;
}

@property(nonatomic) __weak id <SCCognacOperaPresenterDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)outputJSConsoleLog;
- (void)clearInvitedFriends;
- (id)cognacOperaDataSource:(id)arg1 transformedURLForURL:(id)arg2;
- (id)_registeredEventsForOperaSession;
- (void)_appDidEnterBackground;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)_teardown;
- (void)_removeOperaListener;
- (void)_cleanupOperaVC;
- (void)setAnimationBaseview:(id)arg1;
@property(readonly, nonatomic) SCCognacOperaPlayerItem *playerItem;
- (_Bool)isActive;
- (void)_removeObserver;
- (void)_addObserver;
- (void)dismissOperaVCAnimated:(_Bool)arg1;
- (_Bool)_eligibleToPrepareOperaPlayerWithPresentationSourceType:(long long)arg1;
- (void)_setupOperaViewingSessionWithDeepLinkNavigationDelegate:(id)arg1;
- (void)_updateCognacAppOpenedStateWithAppId:(id)arg1 preferences:(id)arg2 dataStorage:(id)arg3;
- (void)presentOperaVCWithConfig:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
