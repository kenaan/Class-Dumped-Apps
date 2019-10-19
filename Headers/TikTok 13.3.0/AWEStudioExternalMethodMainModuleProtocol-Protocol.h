//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEStorage, CLLocation, NSArray, NSDictionary, NSObject, NSString, UIViewController;
@protocol AWEOneDaySettingManagerProtocol;

@protocol AWEStudioExternalMethodMainModuleProtocol <NSObject>
- (void)appsflyerTrackEvent:(NSString *)arg1 values:(NSDictionary *)arg2;
- (NSObject<AWEOneDaySettingManagerProtocol> *)getOneDaySettingManager;
- (void)requestHashTagItemWithName:(NSString *)arg1 completion:(void (^)(AWEChallengeModel *, NSError *))arg2;
- (_Bool)shouldMarkFromPushForAwemeID:(NSString *)arg1;
- (NSString *)lastPlayingAwemeID;
- (NSDictionary *)currentAwemeLogPb;
- (AWEStorage *)mainStorage;
- (_Bool)isYouthControlEnabled;
- (void)requestChallengeItemWithID:(NSString *)arg1 completion:(void (^)(AWEChallengeModel *, NSError *))arg2;
- (void)showAddressListAuthorizationOnLiveViewController:(UIViewController *)arg1;
- (_Bool)hasDonationActivity;
- (void)showPOIPickerWithLocationInfos:(NSArray *)arg1 splitDomains:(_Bool)arg2 isOversea:(_Bool)arg3 entrance:(unsigned long long)arg4 completion:(void (^)(AWEPOIInfoModel *, long long, NSDictionary *, NSString *, _Bool, NSError *))arg5;
- (void)requestPOIRecommendWithLocation:(CLLocation *)arg1 completion:(void (^)(NSArray *, NSDictionary *, _Bool, _Bool, AWEURLModel *))arg2;
- (_Bool)allowSyncDuoshan;
- (_Bool)shouldForbidWartermarkWhenDownloadAweme;
- (long long)getPublishedStoryCount;
- (NSString *)goodsSeedDraftKeyWithTaskID:(NSString *)arg1 userID:(NSString *)arg2;
- (NSString *)goodsDraftKeyWithTaskID:(NSString *)arg1 userID:(NSString *)arg2;
- (_Bool)isSelfSeeWhenPostAmeme;
- (void)updateLocation;
- (_Bool)isSuccessOrSelfSeeWhenPostAmeme;
- (_Bool)checkAndShowBindPhoneAlertOnAwemeWithConfirmBlock:(void (^)(void))arg1 cancelBlock:(void (^)(void))arg2;
@end

