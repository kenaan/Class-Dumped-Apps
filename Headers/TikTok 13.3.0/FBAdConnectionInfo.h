//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdConnectionInfo : NSObject
{
}

+ (unsigned long long)statusForReachabilityFlags:(unsigned int)arg1;
+ (unsigned long long)currentReachabilityStatus;
+ (unsigned long long)currentConnectionSubtype;
+ (id)currentCellularConnection;
+ (unsigned long long)currentConnectionType;
+ (unsigned long long)typeFromSubtype:(unsigned long long)arg1;
+ (void)initialize;

@end

