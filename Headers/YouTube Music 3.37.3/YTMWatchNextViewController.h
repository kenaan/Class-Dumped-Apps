//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTBaseInnerTubeViewController.h"

@class YTMWatchNextResponseViewController, YTRetry;
@protocol MDXServices, YTLatencyTickLoggerProtocol, YTMServices;

@interface YTMWatchNextViewController : YTBaseInnerTubeViewController
{
    id <MDXServices> _MDXServices;
    id <YTMServices> _services;
    id <YTLatencyTickLoggerProtocol> _watchLatencyTickLogger;
    unsigned long long _requestId;
    YTRetry *_retry;
}

- (void).cxx_destruct;
- (id)requestForNavigationEndpoint:(id)arg1;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 initialResponseBlock:(CDUnknownBlockType)arg3 responseBlock:(CDUnknownBlockType)arg4 errorBlock:(CDUnknownBlockType)arg5;
- (void)makeRetryableRequest;
- (void)makeRequest;
- (void)loadWithResponse:(id)arg1;
- (void)loadWithInitialResponse:(id)arg1;
- (void)loadWithWatchTransition:(id)arg1;
@property(readonly, nonatomic) YTMWatchNextResponseViewController *watchNextResponseViewController;
- (void)dealloc;
- (id)initWithService:(id)arg1 parentResponder:(id)arg2;

@end

