//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWECloudCommandNetworkDelegate-Protocol.h"

@class NSString;
@protocol AWECloudCommandNetworkDelegate;

@interface AWECloudCommandNetworkHandler : NSObject <AWECloudCommandNetworkDelegate>
{
    id <AWECloudCommandNetworkDelegate> _networkDelegate;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <AWECloudCommandNetworkDelegate> networkDelegate; // @synthesize networkDelegate=_networkDelegate;
- (void).cxx_destruct;
- (id)_requestBodyWithParams:(id)arg1;
- (id)_requestUrlWithParams:(id)arg1 baseUrl:(id)arg2;
- (id)_requestWithUrl:(id)arg1 requestMethod:(id)arg2 requestHeaders:(id)arg3;
- (void)uploadWithUrl:(id)arg1 data:(id)arg2 requestHeaders:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestWithUrl:(id)arg1 method:(id)arg2 params:(id)arg3 requestHeaders:(id)arg4 completion:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

