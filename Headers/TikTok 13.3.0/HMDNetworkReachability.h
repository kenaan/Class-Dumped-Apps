//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMDNetworkReachability : NSObject
{
}

+ (void)stopNotifier;
+ (void)startNotifier;
+ (_Bool)isCellularAndWLANDisabled;
+ (_Bool)isCellularDisabled;
+ (_Bool)is4GConnected;
+ (_Bool)is3GConnected;
+ (_Bool)is2GConnected;
+ (_Bool)isCellPhoneConnected;
+ (_Bool)isWifiConnected;
+ (_Bool)isConnected;

@end

