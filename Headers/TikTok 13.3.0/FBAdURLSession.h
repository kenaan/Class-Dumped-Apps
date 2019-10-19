//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class FBAdConcurrentQueue, FBAdTimer, NSString, NSURLSession;

@interface FBAdURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>
{
    _Bool _SSLValidationDisabled;
    long long _customRequestTimeout;
    NSURLSession *_session;
    FBAdConcurrentQueue *_queue;
    FBAdTimer *_userAgentTimer;
    NSString *_userAgent;
}

+ (id)sharedSession;
@property(copy) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain) FBAdTimer *userAgentTimer; // @synthesize userAgentTimer=_userAgentTimer;
@property(retain) FBAdConcurrentQueue *queue; // @synthesize queue=_queue;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) long long customRequestTimeout; // @synthesize customRequestTimeout=_customRequestTimeout;
@property(nonatomic, getter=isSSLValidationDisabled) _Bool SSLValidationDisabled; // @synthesize SSLValidationDisabled=_SSLValidationDisabled;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)isSandboxHost:(id)arg1;
- (id)urlRequestWithURL:(id)arg1 HTTPMethod:(id)arg2 queryParameters:(id)arg3;
- (_Bool)isEmptyURL:(id)arg1;
- (id)requestWithURL:(id)arg1 HTTPMethod:(id)arg2 queryParameters:(id)arg3 responseHandler:(CDUnknownBlockType)arg4;
- (id)requestWithURLRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (void)emptyQueue;
- (void)enqueueOrExecuteRequest:(CDUnknownBlockType)arg1;
- (_Bool)valid;
- (void)setupSessionWithUserAgent:(id)arg1;
- (void)updateSession;
- (id)defaultConfiguration;
- (void)clearCustomRequestTimeout;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

