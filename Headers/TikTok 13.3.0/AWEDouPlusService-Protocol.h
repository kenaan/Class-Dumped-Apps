//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class NSDictionary, NSString;

@protocol AWEDouPlusService <HTSService>
+ (void)fetchAdsEntranceWithItemID:(NSString *)arg1 enterFrom:(NSString *)arg2 completeBlock:(void (^)(NSString *))arg3;
+ (_Bool)shouldShowAdsEntryInSlidePanel;
+ (void)closeTopDouPlusWebVCsAnimated:(_Bool)arg1 completion:(void (^)(void))arg2;
+ (void)handleDouOrderResult:(_Bool)arg1;
+ (void)queryDouPlusOrderWithParams:(NSDictionary *)arg1 remainCount:(long long)arg2 completion:(void (^)(_Bool, NSDictionary *))arg3;
+ (void)openLiveDouPlusWithUrlString:(NSString *)arg1;
+ (_Bool)openSpecialPayDeskWithOriginUrl:(NSString *)arg1;
+ (NSString *)douPlusEntryTitleWithType:(long long)arg1;
+ (_Bool)shouldShowDouPlusEntrance;
@end

