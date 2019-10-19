//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVMDLiOSNetClientProtocol-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"

@class NSString, NSURLSession, NSURLSessionDataTask;

@interface AVMDLiOSNetwork : NSObject <NSURLSessionDelegate, AVMDLiOSNetClientProtocol>
{
    _Bool _didCallCancel;
    NSURLSession *_session;
    NSURLSessionDataTask *_urlRequest;
}

@property(nonatomic) _Bool didCallCancel; // @synthesize didCallCancel=_didCallCancel;
@property(retain, nonatomic) NSURLSessionDataTask *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)_splitUrl:(id)arg1 params:(id)arg2;
- (void)configTaskWithURL:(id)arg1 params:(id)arg2 headers:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)invalidAndCancel;
- (void)resume;
- (_Bool)cancelled;
- (void)cancel;
- (id)initWithTimeout:(double)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

