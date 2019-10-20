//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BDDownloadTask.h"

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSNumber, NSString, NSURLConnection;

@interface BDDownloadURLConnectionTask : BDDownloadTask <NSURLConnectionDataDelegate>
{
    NSURLConnection *_connection;
    NSMutableData *_responseData;
    NSNumber *_DNSDuration;
    NSNumber *_connetDuration;
    NSNumber *_sslDuration;
    NSNumber *_sendDuration;
    NSNumber *_waitDuration;
    NSNumber *_receiveDuration;
    NSNumber *_isSocketReused;
    NSNumber *_isFromProxy;
    NSString *_mimeType;
    long long _statusCode;
    NSString *_nwSessionTrace;
}

+ (id)networkRequestThread;
+ (void)networkRequestThreadEntryPoint:(id)arg1;
@property(retain, nonatomic) NSString *nwSessionTrace; // @synthesize nwSessionTrace=_nwSessionTrace;
@property(nonatomic) long long statusCode; // @synthesize statusCode=_statusCode;
@property(retain, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property(retain, nonatomic) NSNumber *isFromProxy; // @synthesize isFromProxy=_isFromProxy;
@property(retain, nonatomic) NSNumber *isSocketReused; // @synthesize isSocketReused=_isSocketReused;
@property(retain, nonatomic) NSNumber *receiveDuration; // @synthesize receiveDuration=_receiveDuration;
@property(retain, nonatomic) NSNumber *waitDuration; // @synthesize waitDuration=_waitDuration;
@property(retain, nonatomic) NSNumber *sendDuration; // @synthesize sendDuration=_sendDuration;
@property(retain, nonatomic) NSNumber *sslDuration; // @synthesize sslDuration=_sslDuration;
@property(retain, nonatomic) NSNumber *connetDuration; // @synthesize connetDuration=_connetDuration;
@property(retain, nonatomic) NSNumber *DNSDuration; // @synthesize DNSDuration=_DNSDuration;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)connection:(id)arg1 willCacheResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)startInNetworkRequestThread;
- (void)startTask;
- (void)cleanResponseData;
- (void)_cancel;
- (void)start;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) long long expectedSize; // @dynamic expectedSize;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
