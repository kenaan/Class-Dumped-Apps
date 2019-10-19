//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSString;

@interface TTHttpResponseChromiumTimingInfo : NSObject
{
    _Bool _isSocketReused;
    _Bool _isCached;
    _Bool _isFromProxy;
    unsigned short _remotePort;
    NSDate *_start;
    long long _proxy;
    long long _dns;
    long long _connect;
    long long _ssl;
    long long _send;
    long long _wait;
    long long _receive;
    long long _total;
    long long _receivedResponseContentLength;
    long long _totalReceivedBytes;
    NSString *_remoteIP;
}

@property(nonatomic) unsigned short remotePort; // @synthesize remotePort=_remotePort;
@property(copy, nonatomic) NSString *remoteIP; // @synthesize remoteIP=_remoteIP;
@property(nonatomic) _Bool isFromProxy; // @synthesize isFromProxy=_isFromProxy;
@property(nonatomic) _Bool isCached; // @synthesize isCached=_isCached;
@property(nonatomic) _Bool isSocketReused; // @synthesize isSocketReused=_isSocketReused;
@property(nonatomic) long long totalReceivedBytes; // @synthesize totalReceivedBytes=_totalReceivedBytes;
@property(nonatomic) long long receivedResponseContentLength; // @synthesize receivedResponseContentLength=_receivedResponseContentLength;
@property(nonatomic) long long total; // @synthesize total=_total;
@property(nonatomic) long long receive; // @synthesize receive=_receive;
@property(nonatomic) long long wait; // @synthesize wait=_wait;
@property(nonatomic) long long send; // @synthesize send=_send;
@property(nonatomic) long long ssl; // @synthesize ssl=_ssl;
@property(nonatomic) long long connect; // @synthesize connect=_connect;
@property(nonatomic) long long dns; // @synthesize dns=_dns;
@property(nonatomic) long long proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSDate *start; // @synthesize start=_start;
- (void).cxx_destruct;
- (id)initWithURLFetcher:(const struct URLFetcher *)arg1;

@end

