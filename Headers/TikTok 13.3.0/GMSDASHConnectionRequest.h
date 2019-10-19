//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GTMSessionFetcher, GMSx_StatusProto, NSMutableDictionary;
@protocol GTMFetcherAuthorizationProtocol;

@interface GMSDASHConnectionRequest : NSObject
{
    NSMutableDictionary *_locationDescriptorOverridesByProducer;
    _Bool _allowsCellularAccess;
    int _requestID;
    double _httpTimeout;
    id <GTMFetcherAuthorizationProtocol> _authorizer;
    long long _startTime;
    unsigned long long _sentBytes;
    GMSx_StatusProto *_responseStatus;
    GMSx_GTMSessionFetcher *_fetcher;
}

@property __weak GMSx_GTMSessionFetcher *fetcher; // @synthesize fetcher=_fetcher;
@property(retain, nonatomic) GMSx_StatusProto *responseStatus; // @synthesize responseStatus=_responseStatus;
@property(nonatomic) unsigned long long sentBytes; // @synthesize sentBytes=_sentBytes;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool allowsCellularAccess; // @synthesize allowsCellularAccess=_allowsCellularAccess;
@property(retain, nonatomic) id <GTMFetcherAuthorizationProtocol> authorizer; // @synthesize authorizer=_authorizer;
@property double httpTimeout; // @synthesize httpTimeout=_httpTimeout;
@property(readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (void)logRequestStatus:(id)arg1 connection:(id)arg2;
- (void)logReceivedBytes:(unsigned long long)arg1 connection:(id)arg2;
- (void)logEndToEndNumTries:(unsigned long long)arg1 connection:(id)arg2;
- (void)logEndToEndLatency:(id)arg1;
- (void)asyncRequestFailed:(id)arg1 connection:(id)arg2;
- (_Bool)asyncReadResponse:(struct JavaDataInput *)arg1 connection:(id)arg2;
- (void)asyncSerializeRequestData:(struct JavaDataOutput *)arg1 connection:(id)arg2;
- (id)locationDescriptorOverridesByProducer;
- (void)addLocationDescriptorOverride:(id)arg1;
- (id)initWithRequestID:(int)arg1;

@end

