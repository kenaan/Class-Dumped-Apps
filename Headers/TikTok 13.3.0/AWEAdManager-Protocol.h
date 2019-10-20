//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEAwemeModel, AWECommentModel, NSDictionary, NSNumber, NSString, UIViewController;

@protocol AWEAdManager <HTSService>
+ (_Bool)openAppWithOpenURL:(NSString *)arg1 creativeID:(NSNumber *)arg2 groupID:(NSNumber *)arg3 logExtra:(NSString *)arg4 event:(NSString *)arg5 extra:(NSDictionary *)arg6;
+ (_Bool)openAppWithOpenURL:(NSString *)arg1 creativeID:(NSNumber *)arg2 groupID:(NSNumber *)arg3 logExtra:(NSString *)arg4 event:(NSString *)arg5;
+ (_Bool)openAppWithOpenURL:(NSString *)arg1 creativeID:(NSNumber *)arg2 groupID:(NSNumber *)arg3 logExtra:(NSString *)arg4;
+ (NSDictionary *)reportAdParamWithModel:(AWEAwemeModel *)arg1 reportFrom:(NSString *)arg2;
+ (void)reportAdWithModel:(AWEAwemeModel *)arg1 reportFrom:(NSString *)arg2;
+ (void)trackAdReceiveEventIfNeeded:(AWEAwemeModel *)arg1;
+ (void)trackAdMaterialEvent:(NSString *)arg1 content:(NSString *)arg2 enterFrom:(NSString *)arg3 groupID:(NSString *)arg4;
+ (AWECommentModel *)makeAdCommentWithModel:(AWEAwemeModel *)arg1;
+ (void)showNotSupportByAdToast;
+ (long long)getTimesToShowAdOperationMask:(AWEAwemeModel *)arg1;
+ (_Bool)shouldShowAdModalWithModel:(AWEAwemeModel *)arg1;
+ (_Bool)shouldShowAdOperationViewWithModel:(AWEAwemeModel *)arg1;
+ (_Bool)shouldShowLearnMoreViewWithModel:(AWEAwemeModel *)arg1;
+ (_Bool)shouldShowAdOptimizeWithModel:(AWEAwemeModel *)arg1;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 duration:(NSNumber *)arg3 videoLength:(NSNumber *)arg4 volumn:(NSNumber *)arg5 logExtra:(NSString *)arg6 creativeID:(NSNumber *)arg7 groupID:(NSString *)arg8 extra:(NSDictionary *)arg9;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 duration:(NSNumber *)arg3 videoLength:(NSNumber *)arg4 logExtra:(NSString *)arg5 creativeID:(NSNumber *)arg6 groupID:(NSString *)arg7;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 model:(AWEAwemeModel *)arg3 duration:(NSNumber *)arg4 volumn:(NSNumber *)arg5;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 model:(AWEAwemeModel *)arg3 duration:(NSNumber *)arg4 videoLength:(NSNumber *)arg5;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 model:(AWEAwemeModel *)arg3 videoLength:(NSNumber *)arg4 volumn:(NSNumber *)arg5;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 model:(AWEAwemeModel *)arg3 adExtraData:(NSDictionary *)arg4 extra:(NSDictionary *)arg5;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 model:(AWEAwemeModel *)arg3 extra:(NSDictionary *)arg4;
+ (void)trackEventWithEvent:(NSString *)arg1 label:(NSString *)arg2 model:(AWEAwemeModel *)arg3;
+ (_Bool)shouldShowRedPacketWithModel:(AWEAwemeModel *)arg1;
+ (_Bool)hasKOLPendant:(AWEAwemeModel *)arg1;
+ (_Bool)hasRedPacketSticker:(AWEAwemeModel *)arg1;
+ (_Bool)hasRedPacket:(AWEAwemeModel *)arg1;
+ (_Bool)hasFormURL:(AWEAwemeModel *)arg1;
+ (_Bool)hasLandingPage:(AWEAwemeModel *)arg1;
+ (_Bool)hasDownloadURL:(AWEAwemeModel *)arg1;
+ (void)preloadLandingWithModel:(AWEAwemeModel *)arg1;
+ (UIViewController *)viewControllerWithModel:(AWEAwemeModel *)arg1 checkSupportOpenOutApp:(_Bool)arg2;
+ (UIViewController *)viewControllerWithModel:(AWEAwemeModel *)arg1;
+ (void)promptAdModalWithModal:(AWEAwemeModel *)arg1;
+ (void)promptFormWithModel:(AWEAwemeModel *)arg1 formURL:(NSString *)arg2 position:(unsigned long long)arg3;
+ (_Bool)openRedPacketPageWithModel:(AWEAwemeModel *)arg1;
+ (void)openLandingPageOrAppStoreWithModel:(AWEAwemeModel *)arg1 didOpenAppStore:(_Bool *)arg2;
+ (void)openLandingPageOrAppStoreWithModel:(AWEAwemeModel *)arg1;
+ (_Bool)openLandingPageWithURL:(NSString *)arg1 webTitle:(NSString *)arg2 model:(AWEAwemeModel *)arg3 closeBlock:(void (^)(void))arg4;
+ (_Bool)openLandingPageWithModel:(AWEAwemeModel *)arg1;
+ (_Bool)openThirdPartyAppUrlWithURL:(NSString *)arg1 event:(NSString *)arg2 openPosition:(long long)arg3 creativeID:(NSNumber *)arg4 groupID:(NSNumber *)arg5 logExtra:(NSString *)arg6 extra:(NSDictionary *)arg7;
+ (_Bool)canOpenInApp:(AWEAwemeModel *)arg1;
+ (_Bool)openAdIronManWithURL:(NSString *)arg1;
+ (_Bool)openAdIronManWithAwemeModel:(AWEAwemeModel *)arg1;
+ (_Bool)openAdWithOpenURL:(AWEAwemeModel *)arg1;
+ (void)openAdWithAwemeModel:(AWEAwemeModel *)arg1 fromPosition:(unsigned long long)arg2 event:(NSString *)arg3 didOpenAppStore:(_Bool *)arg4;
+ (void)openAdWithAwemeModel:(AWEAwemeModel *)arg1 fromPosition:(unsigned long long)arg2 event:(NSString *)arg3;
+ (void)openAdWithAwemeModel:(AWEAwemeModel *)arg1 fromPosition:(unsigned long long)arg2 didOpenAppStore:(_Bool *)arg3;
+ (void)openAdWithAwemeModel:(AWEAwemeModel *)arg1 fromPosition:(unsigned long long)arg2;
+ (long long)netType;
+ (_Bool)isAd:(AWEAwemeModel *)arg1;
+ (NSString *)learnMoreText:(AWEAwemeModel *)arg1;
+ (NSString *)getButtonTextOfAd:(AWEAwemeModel *)arg1;
+ (unsigned long long)adTypeOfModel:(AWEAwemeModel *)arg1;
@property(retain, nonatomic) NSString *linkAdStashedData;
@property(nonatomic) _Bool hasOpenOtherAppInTask;
- (void)openDspAutoJumpWithAwemeModel:(AWEAwemeModel *)arg1 event:(NSString *)arg2;
- (void)openAdWithAwemeModel:(AWEAwemeModel *)arg1 fromPosition:(unsigned long long)arg2 event:(NSString *)arg3;
- (void)openAdWithAwemeModel:(AWEAwemeModel *)arg1 fromPosition:(unsigned long long)arg2;
@end
