//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSError.h>

@interface NFLXHTTPError : NSError
{
}

+ (id)deriveLocalizedMessageForAction:(long long)arg1;
+ (long long)deriveActionForNSURLErrorCode:(long long)arg1;
+ (long long)deriveActionForHTTPStatusCode:(long long)arg1;
+ (_Bool)isNetworkReachabilityError:(id)arg1;
+ (long long)deriveActionCodeFromError:(id)arg1;
+ (id)errorFromRequestTask:(id)arg1 underlyingError:(id)arg2;

@end

