//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, YTISubscribeResponse, YTIUnsubscribeResponse;

@protocol YTSubscriptionServiceObserver <NSObject>
- (void)subscriptionRemovedWithChannelID:(NSString *)arg1 response:(YTIUnsubscribeResponse *)arg2;
- (void)subscriptionAddedWithChannelID:(NSString *)arg1 response:(YTISubscribeResponse *)arg2;
@end

