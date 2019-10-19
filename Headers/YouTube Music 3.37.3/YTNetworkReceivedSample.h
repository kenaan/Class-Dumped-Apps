//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, YTMonotonicDate;

@interface YTNetworkReceivedSample : NSObject
{
    int _status;
    int _failedReason;
    NSString *_nonce;
    NSString *_urlPath;
    NSString *_annotation;
    YTMonotonicDate *_requestSendTime;
    YTMonotonicDate *_responseReceivedTime;
    YTMonotonicDate *_protoParseStart;
    YTMonotonicDate *_protoParseEnd;
    unsigned long long _requestSize;
    unsigned long long _responseSize;
    NSString *_contentType;
    long long _statusCode;
    NSString *_lastGraftedPageVE;
    long long _rpcStatusCode;
    NSString *_rpcTypeUrl;
}

@property(readonly, nonatomic) NSString *rpcTypeUrl; // @synthesize rpcTypeUrl=_rpcTypeUrl;
@property(readonly, nonatomic) long long rpcStatusCode; // @synthesize rpcStatusCode=_rpcStatusCode;
@property(readonly, nonatomic) NSString *lastGraftedPageVE; // @synthesize lastGraftedPageVE=_lastGraftedPageVE;
@property(readonly, nonatomic) int failedReason; // @synthesize failedReason=_failedReason;
@property(readonly, nonatomic) int status; // @synthesize status=_status;
@property(readonly, nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(readonly, nonatomic) NSString *contentType; // @synthesize contentType=_contentType;
@property(readonly, nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property(readonly, nonatomic) unsigned long long requestSize; // @synthesize requestSize=_requestSize;
@property(readonly, nonatomic) YTMonotonicDate *protoParseEnd; // @synthesize protoParseEnd=_protoParseEnd;
@property(readonly, nonatomic) YTMonotonicDate *protoParseStart; // @synthesize protoParseStart=_protoParseStart;
@property(readonly, nonatomic) YTMonotonicDate *responseReceivedTime; // @synthesize responseReceivedTime=_responseReceivedTime;
@property(readonly, nonatomic) YTMonotonicDate *requestSendTime; // @synthesize requestSendTime=_requestSendTime;
@property(readonly, nonatomic) NSString *annotation; // @synthesize annotation=_annotation;
@property(readonly, nonatomic) NSString *urlPath; // @synthesize urlPath=_urlPath;
@property(readonly, nonatomic) NSString *nonce; // @synthesize nonce=_nonce;
- (void).cxx_destruct;
- (int)getFailedReasonFromError:(id)arg1;
- (int)getRequestStatusFromError:(id)arg1;
- (long long)getStatusCodeFromError:(id)arg1;
- (id)initWithNSURLRequest:(id)arg1 statistics:(id)arg2 lastGraftedPageVE:(id)arg3;

@end
