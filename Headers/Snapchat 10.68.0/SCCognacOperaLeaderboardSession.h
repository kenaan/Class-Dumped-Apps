//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCCognacLeaderboardPresenterDelegate-Protocol.h"
#import "SCCognacOperaSession-Protocol.h"
#import "SCCognacPresentLeaderboardOperationDelegate-Protocol.h"

@class NSString, SCCognacAppViewLifeCycleListenerAnnouncer, SCCognacLeaderboardPresenter, SCCognacOperaDataSource, SCOperaViewController, WKWebViewJavascriptBridge;

@interface SCCognacOperaLeaderboardSession : NSObject <SCCognacPresentLeaderboardOperationDelegate, SCCognacLeaderboardPresenterDelegate, SCCognacOperaSession>
{
    WKWebViewJavascriptBridge *_bridge;
    SCCognacLeaderboardPresenter *_leaderboardPresenter;
    SCCognacAppViewLifeCycleListenerAnnouncer *_viewLifeCycleAnnouncer;
    SCOperaViewController *_operaVC;
    SCCognacOperaDataSource *_dataSource;
}

+ (id)registeredEventsForOperaSession;
@property(retain, nonatomic) SCCognacOperaDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak SCOperaViewController *operaVC; // @synthesize operaVC=_operaVC;
@property(retain, nonatomic) SCCognacAppViewLifeCycleListenerAnnouncer *viewLifeCycleAnnouncer; // @synthesize viewLifeCycleAnnouncer=_viewLifeCycleAnnouncer;
- (void).cxx_destruct;
- (CDUnknownBlockType)_presentLeaderboardWVJBHandler;
- (CDUnknownBlockType)_submitLeaderboardScoreWVJBHandler;
- (void)leaderboardPresenterDidDismiss:(id)arg1;
- (void)leaderboardPresenterDidPresent:(id)arg1;
- (void)presentLeaderboardOperationDidFailWithError:(struct NSDictionary *)arg1;
- (void)presentLeaderboardOperationDidSucceedWithLeaderboardPresenter:(id)arg1;
- (void)startSession;
- (void)resumeSession;
- (id)registeredWVJBHandlerNameToHandler;
- (void)pauseSession;
- (void)endSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

