//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface TTInstallReachability : NSObject
{
    struct __SCNetworkReachability *_reachabilityRef;
    int _hasCachedStatus;
    long long _cachedStatus;
    _Bool _startedNotifier;
}

+ (long long)fastDetectActiveIfAddrsStatus;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (void)initialize;
+ (_Bool)isNetworkConnected;
+ (_Bool)is4GConnected;
+ (_Bool)is3GConnected;
+ (_Bool)is2GConnected;
- (_Bool)shouldUpdateCachedStatus:(long long)arg1;
- (void)setCachedStatus:(long long)arg1;
- (void)invalidateCachedStatus;
- (long long)currentNetworkAuthorizationStatus;
- (long long)currentReachabilityStatus;
- (_Bool)connectionRequired;
- (long long)networkStatusForFlags:(unsigned int)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;

@end

