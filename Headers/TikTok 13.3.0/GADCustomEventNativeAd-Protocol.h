//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADNCustomEventRequest, NSArray, NSString, UIViewController;
@protocol GADCustomEventNativeAdDelegate;

@protocol GADCustomEventNativeAd <NSObject>
@property(nonatomic) __weak id <GADCustomEventNativeAdDelegate> delegate;
- (_Bool)handlesUserImpressions;
- (_Bool)handlesUserClicks;
- (void)requestNativeAdWithParameter:(NSString *)arg1 request:(GADNCustomEventRequest *)arg2 adTypes:(NSArray *)arg3 options:(NSArray *)arg4 rootViewController:(UIViewController *)arg5;
@end

