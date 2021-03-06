//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GRXWriter.h"

#import "GRXWriteable-Protocol.h"

@class GRPCConnectivityMonitor, GRPCRequestHeaders, GRPCWrappedCall, GRXConcurrentWriteable, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString;
@protocol GRPCAuthorizationProtocol, OS_dispatch_queue;

@interface GRPCCall : GRXWriter <GRXWriteable>
{
    NSObject<OS_dispatch_queue> *_callQueue;
    NSString *_host;
    NSString *_path;
    GRPCWrappedCall *_wrappedCall;
    GRPCConnectivityMonitor *_connectivityMonitor;
    GRXConcurrentWriteable *_responseWriteable;
    GRXWriter *_requestWriter;
    GRPCCall *_retainSelf;
    GRPCRequestHeaders *_requestHeaders;
    _Bool _unaryCall;
    NSMutableArray *_unaryOpBatch;
    NSObject<OS_dispatch_queue> *_responseQueue;
    _Bool _finished;
    _Bool _isWaitingForToken;
    long long _state;
    NSString *_serverName;
    double _timeout;
    NSDictionary *_responseHeaders;
    NSDictionary *_responseTrailers;
}

+ (unsigned int)callFlagsForHost:(id)arg1 path:(id)arg2;
+ (void)setCallSafety:(unsigned long long)arg1 host:(id)arg2 path:(id)arg3;
+ (void)initialize;
+ (void)setMinConnectTimeout:(unsigned int)arg1 initialBackoff:(unsigned int)arg2 maxBackoff:(unsigned int)arg3 forHost:(id)arg4;
+ (void)enableRetry:(_Bool)arg1 forHost:(id)arg2;
+ (void)setKeepaliveWithInterval:(int)arg1 timeout:(int)arg2 forHost:(id)arg3;
+ (void)setDefaultCompressMethod:(long long)arg1 forhost:(id)arg2;
+ (void)closeOpenConnections;
+ (void)setResponseSizeLimit:(unsigned long long)arg1 forHost:(id)arg2;
+ (void)setUserAgentPrefix:(id)arg1 forHost:(id)arg2;
+ (_Bool)setTLSPEMRootCerts:(id)arg1 forHost:(id)arg2 error:(id *)arg3;
+ (_Bool)setTLSPEMRootCerts:(id)arg1 withPrivateKey:(id)arg2 withCertChain:(id)arg3 forHost:(id)arg4 error:(id *)arg5;
+ (void)resetHostSettings;
+ (void)useInsecureConnectionsForHost:(id)arg1;
+ (void)useTestCertsPath:(id)arg1 testName:(id)arg2 forHost:(id)arg3;
@property _Bool isWaitingForToken; // @synthesize isWaitingForToken=_isWaitingForToken;
@property(retain) NSDictionary *responseTrailers; // @synthesize responseTrailers=_responseTrailers;
@property(retain) NSDictionary *responseHeaders; // @synthesize responseHeaders=_responseHeaders;
@property(readonly) NSMutableDictionary *requestHeaders; // @synthesize requestHeaders=_requestHeaders;
@property double timeout; // @synthesize timeout=_timeout;
@property(copy) NSString *serverName; // @synthesize serverName=_serverName;
- (long long)state;
- (void).cxx_destruct;
- (void)connectivityChanged:(id)arg1;
- (void)setState:(long long)arg1;
- (void)startWithWriteable:(id)arg1;
- (void)startCallWithWriteable:(id)arg1;
- (void)invokeCall;
- (void)invokeCallWithHeadersHandler:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)writesFinishedWithError:(id)arg1;
- (void)finishRequestWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)writeValue:(id)arg1;
- (void)writeMessage:(id)arg1 withErrorHandler:(CDUnknownBlockType)arg2;
- (void)sendHeaders:(id)arg1;
- (void)startNextRead;
- (void)startReadWithHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)maybeFinishWithError:(id)arg1;
- (void)cancel;
- (void)cancelCall;
- (void)finishWithError:(id)arg1;
- (void)setResponseDispatchQueue:(id)arg1;
- (id)initWithHost:(id)arg1 path:(id)arg2 requestsWriter:(id)arg3;
- (id)init;
@property(retain) id <GRPCAuthorizationProtocol> tokenProvider; // @dynamic tokenProvider;
@property(readonly) NSString *oauth2ChallengeHeader;
@property(copy) NSString *oauth2AccessToken;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

