//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GTMSessionFetcherServiceProtocol-Protocol.h"

@class GMSx_GTMSessionFetcherSessionDelegateDispatcher, NSArray, NSDate, NSDictionary, NSHTTPCookieStorage, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSURLCredential, NSURLSessionConfiguration;
@protocol GTMFetcherAuthorizationProtocol, OS_dispatch_queue, OS_dispatch_semaphore;

@interface GMSx_GTMSessionFetcherService : NSObject <GTMSessionFetcherServiceProtocol>
{
    NSMutableDictionary *_delayedFetchersByHost;
    NSMutableDictionary *_runningFetchersByHost;
    unsigned long long _maxRunningFetchersPerHost;
    GMSx_GTMSessionFetcherSessionDelegateDispatcher *_delegateDispatcher;
    NSObject<OS_dispatch_semaphore> *_sessionCreationSemaphore;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSOperationQueue *_delegateQueue;
    NSHTTPCookieStorage *_cookieStorage;
    NSString *_userAgent;
    double _timeout;
    NSURLCredential *_credential;
    NSURLCredential *_proxyCredential;
    long long _cookieStorageMethod;
    id <GTMFetcherAuthorizationProtocol> _authorizer;
    NSMutableArray *_stoppedFetchersToWaitFor;
    NSDate *_stoppedAllFetchersDate;
    _Bool _allowLocalhostRequest;
    _Bool _allowInvalidServerCertificates;
    _Bool _retryEnabled;
    _Bool _skipBackgroundTask;
    NSURLSessionConfiguration *_configuration;
    CDUnknownBlockType _configurationBlock;
    CDUnknownBlockType _challengeBlock;
    NSArray *_allowedInsecureSchemes;
    CDUnknownBlockType _retryBlock;
    double _maxRetryInterval;
    double _minRetryInterval;
    NSDictionary *_properties;
    double _unusedSessionTimeout;
    CDUnknownBlockType _testBlock;
}

+ (unsigned long long)numberOfNonBackgroundSessionFetchers:(id)arg1;
+ (id)mockFetcherServiceWithFakedData:(id)arg1 fakedError:(id)arg2;
@property _Bool skipBackgroundTask; // @synthesize skipBackgroundTask=_skipBackgroundTask;
@property(copy) CDUnknownBlockType testBlock; // @synthesize testBlock=_testBlock;
@property(copy) NSDictionary *properties; // @synthesize properties=_properties;
@property double minRetryInterval; // @synthesize minRetryInterval=_minRetryInterval;
@property double maxRetryInterval; // @synthesize maxRetryInterval=_maxRetryInterval;
@property(copy) CDUnknownBlockType retryBlock; // @synthesize retryBlock=_retryBlock;
@property(getter=isRetryEnabled) _Bool retryEnabled; // @synthesize retryEnabled=_retryEnabled;
@property _Bool allowInvalidServerCertificates; // @synthesize allowInvalidServerCertificates=_allowInvalidServerCertificates;
@property _Bool allowLocalhostRequest; // @synthesize allowLocalhostRequest=_allowLocalhostRequest;
@property(copy) NSArray *allowedInsecureSchemes; // @synthesize allowedInsecureSchemes=_allowedInsecureSchemes;
@property(retain) NSURLCredential *proxyCredential; // @synthesize proxyCredential=_proxyCredential;
@property(retain) NSURLCredential *credential; // @synthesize credential=_credential;
@property(copy) CDUnknownBlockType challengeBlock; // @synthesize challengeBlock=_challengeBlock;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain) NSHTTPCookieStorage *cookieStorage; // @synthesize cookieStorage=_cookieStorage;
@property(copy) CDUnknownBlockType configurationBlock; // @synthesize configurationBlock=_configurationBlock;
@property(retain) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property unsigned long long maxRunningFetchersPerHost; // @synthesize maxRunningFetchersPerHost=_maxRunningFetchersPerHost;
- (void).cxx_destruct;
@property(readonly) NSOperationQueue *delegateQueue;
@property(retain) NSOperationQueue *sessionDelegateQueue;
@property(retain) NSObject<OS_dispatch_queue> *callbackQueue;
- (void)detachAuthorizer;
@property(retain) id <GTMFetcherAuthorizationProtocol> authorizer;
@property(retain) NSDictionary *delayedFetchersByHost;
@property(retain) NSDictionary *runningFetchersByHost;
- (void)abandonDispatcher;
@property double unusedSessionTimeout; // @synthesize unusedSessionTimeout=_unusedSessionTimeout;
- (void)resetSessionForDispatcherDiscardTimer:(id)arg1;
- (void)resetSessionInternal;
- (void)resetSession;
@property _Bool reuseSession;
- (id)stoppedAllFetchersDate;
- (void)stopAllFetchers;
- (id)issuedFetchersWithRequestURL:(id)arg1;
- (id)issuedFetchers;
- (unsigned long long)numberOfDelayedFetchers;
- (unsigned long long)numberOfRunningFetchers;
- (unsigned long long)numberOfFetchers;
- (void)fetcherDidStop:(id)arg1;
- (void)stopFetcher:(id)arg1;
- (void)fetcherDidBeginFetching:(id)arg1;
- (void)fetcherDidCreateSession:(id)arg1;
- (id)delegateDispatcherForFetcher:(id)arg1;
- (void)startFetcher:(id)arg1;
- (_Bool)fetcherShouldBeginFetching:(id)arg1;
- (_Bool)isDelayingFetcher:(id)arg1;
- (void)addDelayedFetcher:(id)arg1 forHost:(id)arg2;
- (void)addRunningFetcher:(id)arg1 forHost:(id)arg2;
- (id)sessionDelegate;
- (id)sessionForFetcherCreation;
- (id)session;
- (id)fetcherWithURLString:(id)arg1;
- (id)fetcherWithURL:(id)arg1;
- (id)fetcherWithRequest:(id)arg1;
- (id)fetcherWithRequest:(id)arg1 fetcherClass:(Class)arg2;
- (void)dealloc;
- (id)init;
- (_Bool)waitForCompletionOfAllFetchersWithTimeout:(double)arg1;
@property long long cookieStorageMethod;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

