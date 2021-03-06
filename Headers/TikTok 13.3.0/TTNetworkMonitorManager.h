//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, TTNetworkMonitorSwitchDelegate;

@interface TTNetworkMonitorManager : NSObject
{
    _Bool _enable;
    id <TTNetworkMonitorSwitchDelegate> _switchDelegate;
    NSMutableDictionary *_requestStatesForRequestIDs;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)setRequestID:(id)arg1 forURLRequest:(id)arg2;
+ (id)requestIDForURLRequest:(id)arg1;
+ (id)nextRequestID;
+ (id)defaultMonitorManager;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSMutableDictionary *requestStatesForRequestIDs; // @synthesize requestStatesForRequestIDs=_requestStatesForRequestIDs;
@property(nonatomic) __weak id <TTNetworkMonitorSwitchDelegate> switchDelegate; // @synthesize switchDelegate=_switchDelegate;
- (void).cxx_destruct;
- (void)dealFinishResponse:(id)arg1 request:(id)arg2 error:(id)arg3 responseObj:(id)arg4 finishedDate:(id)arg5;
- (void)dealStartRequest:(id)arg1 startDate:(id)arg2 hasTriedTimes:(long long)arg3;
- (void)receiveNetworkFinishNotification:(id)arg1;
- (void)receiveNetworkStartNotification:(id)arg1;
- (void)removeRequestStateForRequestID:(id)arg1;
- (id)requestStateForRequestID:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)registNotification;
- (void)enableMonitor;
- (id)init;
- (void)dealloc;

@end

