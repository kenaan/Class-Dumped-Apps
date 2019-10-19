//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSString;

@interface TVLDNSCache : NSObject
{
    NSDate *_expiredDate;
    NSString *_hostname;
    NSArray *_resolvedIPAddresses;
}

+ (id)cacheWithHostname:(id)arg1 resolvedIPAddresses:(id)arg2 timeToLive:(double)arg3;
@property(readonly, copy, nonatomic) NSArray *resolvedIPAddresses; // @synthesize resolvedIPAddresses=_resolvedIPAddresses;
@property(readonly, copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
- (void).cxx_destruct;
@property(readonly, nonatomic) double timeToLive;
@property(readonly, nonatomic, getter=hasExpired) _Bool expired;
- (id)initWithHostname:(id)arg1 resolvedIPAddresses:(id)arg2 timeToLive:(double)arg3;

@end

