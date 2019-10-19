//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GMSx_GPBMessage, GMSx_LOCULocationDescriptor, NSMutableArray;
@protocol OS_dispatch_queue;

@interface GMSHybridConnectionRequest : NSObject
{
    GMSx_GPBMessage *_protobuffer;
    Class _responseProtoClass;
    int _requestID;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_handlerQueue;
    NSMutableArray *_dashRequests;
    _Bool _retryEnabled;
    CDUnknownBlockType _validateOfflineResponseBlock;
    GMSx_LOCULocationDescriptor *_locationDescriptorOverride;
    double _retryFactor;
    unsigned long long _maxRetries;
    double _startingRetryInterval;
}

@property(nonatomic) double startingRetryInterval; // @synthesize startingRetryInterval=_startingRetryInterval;
@property(nonatomic) unsigned long long maxRetries; // @synthesize maxRetries=_maxRetries;
@property(nonatomic) double retryFactor; // @synthesize retryFactor=_retryFactor;
@property(nonatomic) _Bool retryEnabled; // @synthesize retryEnabled=_retryEnabled;
@property(retain, nonatomic) GMSx_LOCULocationDescriptor *locationDescriptorOverride; // @synthesize locationDescriptorOverride=_locationDescriptorOverride;
@property(copy, nonatomic) CDUnknownBlockType validateOfflineResponseBlock; // @synthesize validateOfflineResponseBlock=_validateOfflineResponseBlock;
- (void).cxx_destruct;
- (void)dispatchHandlerWithResponse:(id)arg1 status:(id)arg2 error:(id)arg3;
- (void)abandon;
@property(readonly, copy) CDUnknownBlockType handler; // @synthesize handler=_handler;
- (id)dashRequestWithHandler:(CDUnknownBlockType)arg1;
- (id)description;
- (id)initWithRequestID:(int)arg1 protobuffer:(id)arg2 responseProtoClass:(Class)arg3 handlerQueue:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end

