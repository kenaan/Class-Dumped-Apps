//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;

@protocol HTSLiveBannerRouter <NSObject>
- (double)bannerWidth;
- (_Bool)bannerShowing;
- (void)dismissOffScreenBanner;
- (void)showOffScreenBannerWithURLString:(NSString *)arg1;
- (void)dismissBattleBanner;
- (void)showBattleBannerWithUserInfo:(NSDictionary *)arg1;
- (NSArray *)giftableBanners;
@end

