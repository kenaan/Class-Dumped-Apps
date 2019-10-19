//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSError, NSString, NSURLRequest, NSURLResponse;

@interface HMDHTTPRequestRecord : NSObject <NSCopying>
{
    _Bool _inWhiteList;
    _Bool _sessionConnectReuse;
    NSError *_error;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSData *_responseData;
    long long _startTime;
    long long _endtime;
    unsigned long long _dataLength;
    NSString *_connetType;
    NSString *_logType;
    long long _dnsTime;
    long long _connectTime;
    long long _sslTime;
    long long _sendTime;
    long long _waitTime;
    long long _receiveTime;
    unsigned long long _isCached;
    unsigned long long _isFromProxy;
    NSString *_remoteIP;
    NSString *_protocolName;
    unsigned long long _isSocketReused;
    NSString *_traceId;
    NSString *_requestLog;
    long long _redirectCount;
    NSArray *_redirectList;
    NSString *_scene;
    NSString *_format;
    long long _isForeground;
}

@property(nonatomic) long long isForeground; // @synthesize isForeground=_isForeground;
@property(copy, nonatomic) NSString *format; // @synthesize format=_format;
@property(copy, nonatomic) NSString *scene; // @synthesize scene=_scene;
@property(nonatomic) _Bool sessionConnectReuse; // @synthesize sessionConnectReuse=_sessionConnectReuse;
@property(copy, nonatomic) NSArray *redirectList; // @synthesize redirectList=_redirectList;
@property(nonatomic) long long redirectCount; // @synthesize redirectCount=_redirectCount;
@property(copy, nonatomic) NSString *requestLog; // @synthesize requestLog=_requestLog;
@property(copy, nonatomic) NSString *traceId; // @synthesize traceId=_traceId;
@property(nonatomic) unsigned long long isSocketReused; // @synthesize isSocketReused=_isSocketReused;
@property(copy, nonatomic) NSString *protocolName; // @synthesize protocolName=_protocolName;
@property(copy, nonatomic) NSString *remoteIP; // @synthesize remoteIP=_remoteIP;
@property(nonatomic) unsigned long long isFromProxy; // @synthesize isFromProxy=_isFromProxy;
@property(nonatomic) unsigned long long isCached; // @synthesize isCached=_isCached;
@property(nonatomic) long long receiveTime; // @synthesize receiveTime=_receiveTime;
@property(nonatomic) long long waitTime; // @synthesize waitTime=_waitTime;
@property(nonatomic) long long sendTime; // @synthesize sendTime=_sendTime;
@property(nonatomic) long long sslTime; // @synthesize sslTime=_sslTime;
@property(nonatomic) long long connectTime; // @synthesize connectTime=_connectTime;
@property(nonatomic) long long dnsTime; // @synthesize dnsTime=_dnsTime;
@property(nonatomic) _Bool inWhiteList; // @synthesize inWhiteList=_inWhiteList;
@property(copy, nonatomic) NSString *logType; // @synthesize logType=_logType;
@property(copy, nonatomic) NSString *connetType; // @synthesize connetType=_connetType;
@property(nonatomic) unsigned long long dataLength; // @synthesize dataLength=_dataLength;
@property(nonatomic) long long endtime; // @synthesize endtime=_endtime;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

