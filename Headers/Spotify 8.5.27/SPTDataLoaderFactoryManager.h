//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SPTNetworkConnectivityControllerObserver-Protocol.h"

@class NSString, SPTDataLoaderFactory, SPTNetworkConnectivityController;

@interface SPTDataLoaderFactoryManager : NSObject <SPTNetworkConnectivityControllerObserver>
{
    SPTDataLoaderFactory *_factory;
    SPTNetworkConnectivityController *_networkConnectivityController;
}

+ (id)dataLoaderFactoryManagerWithFactory:(id)arg1 networkConnectivityController:(id)arg2;
@property(nonatomic) __weak SPTNetworkConnectivityController *networkConnectivityController; // @synthesize networkConnectivityController=_networkConnectivityController;
@property(retain, nonatomic) SPTDataLoaderFactory *factory; // @synthesize factory=_factory;
- (void).cxx_destruct;
- (void)networkConnectivityController:(id)arg1 didChangeForcedOffline:(_Bool)arg2;
- (id)initWithFactory:(id)arg1 networkConnectivityController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

