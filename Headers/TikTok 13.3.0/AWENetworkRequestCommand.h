//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWENetworkRequestCommand-Protocol.h"

@class NSDictionary, NSMutableArray, NSString;
@protocol AWEHttpTask, AWEURLConvertible;

@interface AWENetworkRequestCommand : NSObject <AWENetworkRequestCommand>
{
    NSDictionary *_headerFields;
    NSDictionary *_params;
    _Bool _needCommonParams;
    long long _preprocessOptions;
    double _timeout;
    _Bool _waitsForConnectivity;
    unsigned long long _retryCount;
    id <AWEURLConvertible> _URL;
    NSString *_method;
    id <AWEHttpTask> _task;
    unsigned long long _retried;
    long long _waitState;
    CDUnknownBlockType _connectivityRetryBlock;
    NSMutableArray *_responseBlocks;
}

+ (id)serializeQueue;
+ (CDUnknownBlockType)request;
@property(retain, nonatomic) NSMutableArray *responseBlocks; // @synthesize responseBlocks=_responseBlocks;
@property(copy, nonatomic) CDUnknownBlockType connectivityRetryBlock; // @synthesize connectivityRetryBlock=_connectivityRetryBlock;
@property(nonatomic) long long waitState; // @synthesize waitState=_waitState;
@property(nonatomic) unsigned long long retried; // @synthesize retried=_retried;
@property(nonatomic) id <AWEHttpTask> task; // @synthesize task=_task;
@property(readonly, nonatomic) NSString *method; // @synthesize method=_method;
@property(readonly, nonatomic) id <AWEURLConvertible> URL; // @synthesize URL=_URL;
- (void).cxx_destruct;
- (void)networkStatesDidChanged:(id)arg1;
- (_Bool)allowRetrierWithError:(id)arg1;
- (_Bool)shoulWaitingForConnectivity:(id)arg1;
- (id)requestExecute;
- (void)retryWithInterval;
- (void)cancel;
- (void)execute;
@property(readonly, nonatomic) _Bool executing;
- (id)responseBlock:(CDUnknownBlockType)arg1;
- (id)serializeModel:(Class)arg1 responseBlock:(CDUnknownBlockType)arg2;
- (CDUnknownBlockType)waitsForConnectivity;
- (CDUnknownBlockType)retry;
- (CDUnknownBlockType)timeout;
- (CDUnknownBlockType)needCommonParams;
- (CDUnknownBlockType)preprocessOptions;
- (CDUnknownBlockType)params;
- (void)dealloc;
- (id)initWithURL:(id)arg1 method:(id)arg2;

@end

