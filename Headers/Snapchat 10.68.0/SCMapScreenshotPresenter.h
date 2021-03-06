//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCLegacySendToWorkflowDelegate-Protocol.h"
#import "SCMapScreenshotPresenter-Protocol.h"
#import "SCOperaEventListener-Protocol.h"
#import "SCOperaImageProvider-Protocol.h"
#import "SCSendToDelegate-Protocol.h"
#import "SCSendToNavigationDelegate-Protocol.h"
#import "SendSnapNavigationControllerDelegate-Protocol.h"

@class NSString, NSURL, PreviewViewController, SCMapAttributionInformation, SCOperaViewController, SCSendToTransitionProvider, SCUserFeatureLauncher, SCUserSession, UIImage, UIViewController;
@protocol SCSendToScreen;

@interface SCMapScreenshotPresenter : NSObject <SCOperaEventListener, SCOperaImageProvider, SCSendToDelegate, SCSendToNavigationDelegate, SendSnapNavigationControllerDelegate, SCLegacySendToWorkflowDelegate, SCMapScreenshotPresenter>
{
    SCUserSession *_userSession;
    SCUserFeatureLauncher *_legacySendToLauncher;
    SCMapAttributionInformation *_latestAttribution;
    UIImage *_latestScreenshot;
    NSURL *_latestShareURL;
    SCSendToTransitionProvider *_sendToTransitionProvider;
    SCOperaViewController *_operaViewController;
    UIViewController<SCSendToScreen> *_sendViewController;
    PreviewViewController *_previewViewController;
}

- (void).cxx_destruct;
- (void)_sendScreenshotToRecipients:(id)arg1 storiesConfig:(id)arg2 businessIds:(id)arg3 groups:(id)arg4 additionalText:(id)arg5;
- (void)legacySendToScopeWantsToSend:(id)arg1 sendToSelection:(id)arg2;
- (void)legacySendToScopeDidDismiss:(id)arg1 restorationToken:(id)arg2;
- (void)legacySendToScopeWantsToDismiss:(id)arg1 restorationToken:(id)arg2;
- (void)dismissSendViewController:(id)arg1;
- (void)sendViewController:(id)arg1 sendToRecipients:(id)arg2 storiesPostingConfig:(id)arg3 businessIds:(id)arg4 mischiefs:(id)arg5 businessProfiles:(id)arg6 appStories:(id)arg7 gallery:(_Bool)arg8 inviteRecipientShown:(long long)arg9 additionalText:(id)arg10;
- (void)didSendSnaps:(id)arg1 postToStory:(_Bool)arg2;
- (void)didPostStory;
- (void)didSendChatMessage;
- (void)didCancelFromPreview:(id)arg1;
- (id)miniThumbnailDataForKey:(id)arg1;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_registeredEventsForOperaSession;
- (void)operaViewDidSendEvent:(id)arg1 context:(id)arg2 params:(id)arg3;
- (void)_presentMapEditFlow;
- (void)_zoomOutThenDismiss;
- (void)_dismissEverything;
- (void)_presentShareURLViewController;
- (void)_presentPreviewViewController;
- (void)_presentSendToViewController;
- (void)presentScreenshotOnViewController:(id)arg1 mapViewport:(id)arg2 screenshot:(id)arg3;
- (id)initWithUserSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

