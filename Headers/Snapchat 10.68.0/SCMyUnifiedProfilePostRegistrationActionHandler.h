//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCActionHandling-Protocol.h"
#import "SCNewGroupViewControllerDelegate-Protocol.h"
#import "SCTraceEnabled-Protocol.h"

@class NSString, SCContactSyncWorkFlow, SCMyUnifiedProfilePostRegistrationStateManager, SCOpenUrlOperaViewPresenter, SCSendToDocObjectRecipientDataSource, SCSendToNewGroupDataRepository, SCSendToOpenMiniProfileActionHandler, SCUserSession, UIViewController;
@protocol NavigationDelegate, SCPageNameLogging, SCReplyDelegate, SCStartChatDelegate;

@interface SCMyUnifiedProfilePostRegistrationActionHandler : NSObject <SCNewGroupViewControllerDelegate, SCTraceEnabled, SCActionHandling>
{
    id <SCStartChatDelegate> _startChatDelegate;
    SCUserSession *_userSession;
    id <NavigationDelegate> _navigationDelegate;
    id <SCReplyDelegate> _replyDelegate;
    SCMyUnifiedProfilePostRegistrationStateManager *_postRegistrationStateManager;
    SCContactSyncWorkFlow *_contactSyncWorkFlow;
    SCSendToOpenMiniProfileActionHandler *_openMiniProfileActionHandler;
    SCSendToDocObjectRecipientDataSource *_docObjectRecipientDataSource;
    SCOpenUrlOperaViewPresenter *_openUrlPresenter;
    SCSendToNewGroupDataRepository *_newGroupDataRepository;
    UIViewController<SCPageNameLogging> *_presentingViewController;
}

@property(nonatomic) __weak UIViewController<SCPageNameLogging> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void).cxx_destruct;
- (void)_navigateToChatWithGroupId:(id)arg1;
- (void)didPressConfirmationButtonWithGroupId:(id)arg1 selectionResult:(id)arg2 viewController:(id)arg3 headerText:(id)arg4;
- (void)didPressArroyoConfirmationButton:(id)arg1 viewController:(id)arg2 headerText:(id)arg3;
- (void)didPressConfirmationButtonWithSelectionResult:(id)arg1 viewController:(id)arg2 headerText:(id)arg3 messageText:(id)arg4 deepLinkURLPath:(id)arg5 creationType:(unsigned long long)arg6;
- (void)_showVerifyEmailPage;
- (void)_showSyncContactsPageForSecurePhone:(_Bool)arg1;
- (void)_showPushNotificationsPage;
- (void)_showEnableMicrophonePage;
- (void)_showBirthdayPage;
- (void)_showCreateGroupPage;
- (void)_showRegisterToVotePageWithSourceView:(id)arg1;
- (_Bool)handleActionWithSender:(id)arg1 actionModel:(id)arg2 fromSourceView:(id)arg3;
- (id)initWithStartChatDelegate:(id)arg1 userSession:(id)arg2 postRegistrationStateManager:(id)arg3 replyDelegate:(id)arg4 navigationDelegate:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

