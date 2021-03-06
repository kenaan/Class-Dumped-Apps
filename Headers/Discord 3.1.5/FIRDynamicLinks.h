//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FIRDLRetrievalProcessDelegate-Protocol.h"
#import "FIRDynamicLinksInstanceProvider-Protocol.h"
#import "FIRLibrary-Protocol.h"

@class FIRDynamicLinkNetworking, NSString, NSUserDefaults;
@protocol FIRAnalyticsInterop, FIRDLRetrievalProcessProtocol;

@interface FIRDynamicLinks : NSObject <FIRDynamicLinksInstanceProvider, FIRLibrary, FIRDLRetrievalProcessDelegate>
{
    id <FIRAnalyticsInterop> _analytics;
    NSUserDefaults *_userDefaults;
    FIRDynamicLinkNetworking *_dynamicLinkNetworking;
    id <FIRDLRetrievalProcessProtocol> _retrievalProcess;
    _Bool _retrievingPendingDynamicLink;
    NSString *_APIKey;
    NSString *_clientID;
    NSString *_URLScheme;
}

+ (void)performDiagnosticsWithCompletion:(CDUnknownBlockType)arg1;
+ (id)performDiagnosticsIncludingHeaderFooter:(_Bool)arg1 detectedErrors:(long long *)arg2;
+ (id)diagnosticAnalyzeEntitlements;
+ (id)genericDiagnosticInformation;
+ (_Bool)isAutomaticRetrievalEnabled;
+ (id)sharedInstance;
+ (id)dynamicLinks;
+ (void)configureWithApp:(id)arg1;
+ (id)componentsToRegister;
+ (void)load;
@property _Bool retrievingPendingDynamicLink; // @synthesize retrievingPendingDynamicLink=_retrievingPendingDynamicLink;
@property(copy, nonatomic) NSString *URLScheme; // @synthesize URLScheme=_URLScheme;
@property(copy, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(copy, nonatomic) NSString *APIKey; // @synthesize APIKey=_APIKey;
- (void).cxx_destruct;
- (void)retrievalProcess:(id)arg1 completedWithResult:(id)arg2;
- (void)handlePendingDynamicLinkRetrievalFailureWithErrorCode:(long long)arg1 errorDescription:(id)arg2 underlyingError:(id)arg3;
- (void)passRetrievedDynamicLinkToApplication:(id)arg1;
- (_Bool)handleIncomingCustomSchemeDeepLink:(id)arg1;
- (_Bool)canParseUniversalLinkURL:(id)arg1;
- (_Bool)canParseCustomSchemeURL:(id)arg1;
@property(readonly, nonatomic) FIRDynamicLinkNetworking *dynamicLinkNetworking;
- (_Bool)matchesShortLinkFormat:(id)arg1;
- (void)resolveShortLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)handleUniversalLink:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)dynamicLinkFromUniversalLinkURL:(id)arg1;
- (id)dynamicLinkFromCustomSchemeURL:(id)arg1;
- (_Bool)shouldHandleDynamicLinkFromCustomSchemeURL:(id)arg1;
- (_Bool)shouldHandleDeepLinkFromCustomSchemeURL:(id)arg1;
- (id)deepLinkFromUniversalLinkURL:(id)arg1;
- (id)deepLinkFromCustomSchemeURL:(id)arg1;
- (void)checkForPendingDeepLink;
- (void)checkForPendingDynamicLink;
- (void)checkForPendingDynamicLinkUsingExperimentalRetrievalProcess;
- (_Bool)setUpWithLaunchOptions:(id)arg1 apiKey:(id)arg2 clientID:(id)arg3 urlScheme:(id)arg4 userDefaults:(id)arg5;
- (id)initWithAnalytics:(id)arg1;
- (void)configureDynamicLinks:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

