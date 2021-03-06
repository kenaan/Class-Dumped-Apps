//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPTShareTestManagerImplementation;
@protocol SPTLogCenter;

@interface SPTShareLogger : NSObject
{
    id <SPTLogCenter> _logCenter;
    NSString *_logContext;
    SPTShareTestManagerImplementation *_testManager;
}

@property(retain, nonatomic) SPTShareTestManagerImplementation *testManager; // @synthesize testManager=_testManager;
@property(retain, nonatomic) NSString *logContext; // @synthesize logContext=_logContext;
@property(retain, nonatomic) id <SPTLogCenter> logCenter; // @synthesize logCenter=_logCenter;
- (void).cxx_destruct;
- (void)logMessageWithSessionId:(id)arg1 userIntent:(id)arg2 interactionType:(id)arg3 result:(id)arg4 shareData:(id)arg5 textChanged:(_Bool)arg6 sourcePageId:(id)arg7 destinationId:(id)arg8 destinationIndex:(long long)arg9 shareBrowselinkId:(id)arg10;
- (void)logDragDropActionSucceededWithShareURI:(id)arg1 logContext:(id)arg2;
- (void)logOverflowMenuActionDeeplinkWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3 activityType:(id)arg4;
- (void)logOverflowMenuActionCancelledWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logTwitterActionCancelledWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logTwitterActionSucceededWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logFacebookActionCancelledWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logFacebookActionFailedWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logFacebookActionSucceededWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logEmailActionFailedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logEmailActionCancelledWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logEmailActionSuceededWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logSMSActionFailedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logSMSActionCancelledWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logSMSActionSucceededWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logMoreActionTappedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logCopyLinkActionTappedWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logTwitterActionTappedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logFacebookActionTappedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logFacebookPopupActionTappedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logLINEActionTappedWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logFBMessengerActionTappedWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logTikTokAppActionTappedWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logWhatsAppActionTappedWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logSnapchatActionTappedWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logFacebookStoriesActionSucceededWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logFacebookStoriesActionTappedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logInstagramStoriesActionSucceededWithSessionId:(id)arg1 shareData:(id)arg2 shareBrowselinkId:(id)arg3;
- (void)logSMSActionTappedWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logShareOptionImpressionWithShareDestinationKey:(id)arg1 atIndex:(long long)arg2 shareData:(id)arg3;
- (void)logShareSessionCancelledWithSessionId:(id)arg1 shareData:(id)arg2;
- (void)logShareSessionStartedWithSessionId:(id)arg1 shareData:(id)arg2;
- (id)initWithLogCenter:(id)arg1 logContext:(id)arg2 testManager:(id)arg3;

@end

