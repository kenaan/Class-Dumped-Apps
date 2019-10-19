//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TTNetworkManager.h"

@class TTNetworkHTTPClient;

@interface TTNetworkManagerAFNetworking : TTNetworkManager
{
    TTNetworkHTTPClient *_binaryClient;
    TTNetworkHTTPClient *_jsonModelClient;
}

+ (void)handleSecurityFactorHelper:(id)arg1;
+ (id)shareInstance;
@property(retain, nonatomic) TTNetworkHTTPClient *jsonModelClient; // @synthesize jsonModelClient=_jsonModelClient;
@property(retain, nonatomic) TTNetworkHTTPClient *binaryClient; // @synthesize binaryClient=_binaryClient;
- (void).cxx_destruct;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 autoResume:(_Bool)arg7 requestSerializer:(Class)arg8 responseSerializer:(Class)arg9 progress:(id *)arg10 callback:(CDUnknownBlockType)arg11 callbackQueue:(id)arg12;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(_Bool)arg8 verifyRequest:(_Bool)arg9 isCustomizedCookie:(_Bool)arg10 callback:(CDUnknownBlockType)arg11 callbackQueue:(id)arg12;
- (id)requestModel:(id)arg1 requestSerializer:(Class)arg2 responseSerializer:(Class)arg3 autoResume:(_Bool)arg4 callback:(CDUnknownBlockType)arg5 callbackQueue:(id)arg6;
- (void)tryStartNetDetect:(id)arg1 timeout:(long long)arg2 actions:(long long)arg3;
- (id)requestForBinaryWithStreamTask:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 autoResume:(_Bool)arg7 dispatch_queue:(id)arg8;
- (id)requestForWebview:(id)arg1 autoResume:(_Bool)arg2 headerCallback:(CDUnknownBlockType)arg3 dataCallback:(CDUnknownBlockType)arg4 callbackWithResponse:(CDUnknownBlockType)arg5 redirectCallback:(CDUnknownBlockType)arg6;
- (id)requestForWebview:(id)arg1 autoResume:(_Bool)arg2 headerCallback:(CDUnknownBlockType)arg3 dataCallback:(CDUnknownBlockType)arg4 callbackWithResponse:(CDUnknownBlockType)arg5;
- (id)requestForWebview:(id)arg1 headerCallback:(CDUnknownBlockType)arg2 dataCallback:(CDUnknownBlockType)arg3 callbackWithResponse:(CDUnknownBlockType)arg4;
- (void)setBoeProxyEnabled:(_Bool)arg1;
- (void)setProxy:(id)arg1;
- (id)uploadRawFileWithResponse:(id)arg1 method:(id)arg2 headerField:(id)arg3 filePath:(id)arg4 progress:(id *)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(_Bool)arg8 callback:(CDUnknownBlockType)arg9 timeout:(double)arg10;
- (id)uploadRawDataWithResponse:(id)arg1 method:(id)arg2 headerField:(id)arg3 bodyField:(id)arg4 progress:(id *)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(_Bool)arg8 callback:(CDUnknownBlockType)arg9 timeout:(double)arg10;
- (id)requestForChunkedBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 headerCallback:(CDUnknownBlockType)arg10 dataCallback:(CDUnknownBlockType)arg11 callbackWithResponse:(CDUnknownBlockType)arg12 redirectCallback:(CDUnknownBlockType)arg13;
- (id)requestForChunkedBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 headerCallback:(CDUnknownBlockType)arg10 dataCallback:(CDUnknownBlockType)arg11 callbackWithResponse:(CDUnknownBlockType)arg12;
- (id)requestForChunkedBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 headerCallback:(CDUnknownBlockType)arg10 dataCallback:(CDUnknownBlockType)arg11 callback:(CDUnknownBlockType)arg12;
- (id)requestForRangeMediaResourceWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 offset:(long long)arg4 requestedLength:(long long)arg5 needCommonParams:(_Bool)arg6 headerField:(id)arg7 enableHttpCache:(_Bool)arg8 requestSerializer:(Class)arg9 responseSerializer:(Class)arg10 autoResume:(_Bool)arg11 onHeaderReceivedCallback:(CDUnknownBlockType)arg12 onDataReadCallback:(CDUnknownBlockType)arg13 onRequestFinishCallback:(CDUnknownBlockType)arg14;
- (id)requestForRangeMediaResource:(id)arg1 params:(id)arg2 method:(id)arg3 offset:(long long)arg4 requestedLength:(long long)arg5 needCommonParams:(_Bool)arg6 headerField:(id)arg7 enableHttpCache:(_Bool)arg8 requestSerializer:(Class)arg9 responseSerializer:(Class)arg10 autoResume:(_Bool)arg11 onHeaderReceivedCallback:(CDUnknownBlockType)arg12 onDataReadCallback:(CDUnknownBlockType)arg13 onRequestFinishCallback:(CDUnknownBlockType)arg14;
- (long long)getEffectiveConnectionType;
- (void)setNetworkQualityObserverBlock:(CDUnknownBlockType)arg1;
- (void)setHttpDiskCacheSize:(int)arg1;
- (long long)getHttpDiskCacheSize;
- (void)clearHttpCache;
- (id)getBestHostFromTTNet:(id)arg1;
- (id)getBestHostFromTTNet;
- (void)doCommand:(id)arg1;
- (void)doRouteSelection;
- (void)enableVerboseLog;
- (void)start;
- (id)downloadTaskWithRequest:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 progress:(id *)arg6 destination:(id)arg7 autoResume:(_Bool)arg8 completionHandler:(CDUnknownBlockType)arg9;
- (id)downloadTaskWithRequest:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 needCommonParams:(_Bool)arg4 progress:(id *)arg5 destination:(id)arg6 autoResume:(_Bool)arg7 completionHandler:(CDUnknownBlockType)arg8;
- (id)downloadTaskWithRequest:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 needCommonParams:(_Bool)arg4 progress:(id *)arg5 destination:(id)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needResponse:(_Bool)arg6 needEncrypt:(_Bool)arg7 needContentEncodingAfterEncrypt:(_Bool)arg8;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needResponse:(_Bool)arg6 needEncrypt:(_Bool)arg7;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needResponse:(_Bool)arg6;
- (id)synchronizedRequstForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCommonParams:(_Bool)arg5 needEncrypt:(_Bool)arg6;
- (id)uploadWithResponse:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 callback:(CDUnknownBlockType)arg10 timeout:(double)arg11;
- (id)uploadWithResponse:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 callback:(CDUnknownBlockType)arg10;
- (id)uploadWithURL:(id)arg1 parameters:(id)arg2 headerField:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 autoResume:(_Bool)arg9 callback:(CDUnknownBlockType)arg10;
- (id)uploadWithURL:(id)arg1 headerField:(id)arg2 parameters:(id)arg3 constructingBodyWithBlock:(CDUnknownBlockType)arg4 progress:(id *)arg5 needcommonParams:(_Bool)arg6 callback:(CDUnknownBlockType)arg7;
- (id)uploadWithURL:(id)arg1 parameters:(id)arg2 constructingBodyWithBlock:(CDUnknownBlockType)arg3 progress:(id *)arg4 needcommonParams:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 autoResume:(_Bool)arg7 requestSerializer:(Class)arg8 responseSerializer:(Class)arg9 progress:(id *)arg10 callback:(CDUnknownBlockType)arg11 callbackInMainThread:(_Bool)arg12;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 progress:(id *)arg9 callback:(CDUnknownBlockType)arg10 callbackInMainThread:(_Bool)arg11;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 enableHttpCache:(_Bool)arg6 requestSerializer:(Class)arg7 responseSerializer:(Class)arg8 progress:(id *)arg9 callback:(CDUnknownBlockType)arg10;
- (id)requestForBinaryWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestForBinaryWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (void)setPureChannelForJSONResponseSerializer:(_Bool)arg1;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(_Bool)arg8 verifyRequest:(_Bool)arg9 isCustomizedCookie:(_Bool)arg10 callback:(CDUnknownBlockType)arg11 callbackInMainThread:(_Bool)arg12;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(_Bool)arg8 verifyRequest:(_Bool)arg9 isCustomizedCookie:(_Bool)arg10 callback:(CDUnknownBlockType)arg11;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 headerField:(id)arg5 requestSerializer:(Class)arg6 responseSerializer:(Class)arg7 autoResume:(_Bool)arg8 callback:(CDUnknownBlockType)arg9;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 requestSerializer:(Class)arg5 responseSerializer:(Class)arg6 autoResume:(_Bool)arg7 callback:(CDUnknownBlockType)arg8;
- (id)requestForJSONWithResponse:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5 callbackInMainThread:(_Bool)arg6;
- (id)requestForJSONWithURL:(id)arg1 params:(id)arg2 method:(id)arg3 needCommonParams:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestModel:(id)arg1 requestSerializer:(Class)arg2 responseSerializer:(Class)arg3 autoResume:(_Bool)arg4 callback:(CDUnknownBlockType)arg5;
- (id)requestModel:(id)arg1 requestSerializer:(Class)arg2 responseSerializer:(Class)arg3 autoResume:(_Bool)arg4 callback:(CDUnknownBlockType)arg5 callbackInMainThread:(_Bool)arg6;
- (id)requestModel:(id)arg1 callback:(CDUnknownBlockType)arg2 callbackInMainThread:(_Bool)arg3;
- (id)requestModel:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)needCommonParams:(_Bool)arg1;
- (id)pickCommonParams;
- (id)init;

@end

