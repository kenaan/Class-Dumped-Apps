//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UAReachability : NSObject
{
}

+ (id)deviceIPAddressWithInterfaceName:(id)arg1;
+ (_Bool)isCellularInterfaceOpened;
+ (_Bool)isReachableWithFlags:(unsigned int)arg1;
+ (unsigned int)reachabilityFlags;
+ (id)ipListFromIPInfo:(id)arg1 withProtocolName:(id)arg2;
+ (long long)reachableType;
+ (id)cellularError;
+ (id)reachableError;

@end

