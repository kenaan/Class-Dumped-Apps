//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService.h"

#import "AWEAdManager-Protocol.h"
#import "AWEOpenURLMessage-Protocol.h"

@class NSString;

@interface AWEAdManager : HTSService <AWEAdManager, AWEOpenURLMessage>
{
    _Bool _hasOpenOtherAppInTask;
    NSString *_referString;
    NSString *_linkAdStashedData;
}

+ (_Bool)isOpenOtherAppSchemaDSPAds:(id)arg1;
+ (void)promptAdModalWithModal:(id)arg1;
+ (void)promptFormWithModel:(id)arg1 formURL:(id)arg2 position:(unsigned long long)arg3;
+ (id)reportAdParamWithModel:(id)arg1 reportFrom:(id)arg2;
+ (void)reportAdWithModel:(id)arg1 reportFrom:(id)arg2;
+ (void)trackAdReceiveEventIfNeeded:(id)arg1;
+ (void)trackAdMaterialEvent:(id)arg1 content:(id)arg2 enterFrom:(id)arg3 groupID:(id)arg4;
+ (_Bool)shouldShowRedPacketWithModel:(id)arg1;
+ (id)makeAdCommentWithModel:(id)arg1;
+ (void)showNotSupportByAdToast;
+ (long long)getTimesToShowAdOperationMask:(id)arg1;
+ (_Bool)shouldShowAdModalWithModel:(id)arg1;
+ (_Bool)shouldShowAdOperationViewWithModel:(id)arg1;
+ (_Bool)shouldShowLearnMoreViewWithModel:(id)arg1;
+ (_Bool)shouldShowAdOptimizeWithModel:(id)arg1;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 duration:(id)arg3 videoLength:(id)arg4 volumn:(id)arg5 logExtra:(id)arg6 creativeID:(id)arg7 groupID:(id)arg8 extra:(id)arg9;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 duration:(id)arg3 videoLength:(id)arg4 volumn:(id)arg5 logExtra:(id)arg6 creativeID:(id)arg7 groupID:(id)arg8;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 duration:(id)arg3 videoLength:(id)arg4 logExtra:(id)arg5 creativeID:(id)arg6 groupID:(id)arg7;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 model:(id)arg3 videoLength:(id)arg4 volumn:(id)arg5;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 model:(id)arg3 duration:(id)arg4 volumn:(id)arg5;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 model:(id)arg3 duration:(id)arg4 videoLength:(id)arg5 extra:(id)arg6;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 model:(id)arg3 duration:(id)arg4 videoLength:(id)arg5;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 model:(id)arg3 adExtraData:(id)arg4 extra:(id)arg5;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 model:(id)arg3 extra:(id)arg4;
+ (void)trackEventWithEvent:(id)arg1 label:(id)arg2 model:(id)arg3;
+ (_Bool)hasFormURL:(id)arg1;
+ (_Bool)hasKOLPendant:(id)arg1;
+ (_Bool)hasRedPacketSticker:(id)arg1;
+ (_Bool)hasRedPacket:(id)arg1;
+ (_Bool)hasLandingPage:(id)arg1;
+ (_Bool)hasDownloadURL:(id)arg1;
+ (_Bool)isAd:(id)arg1;
+ (unsigned long long)adTypeOfModel:(id)arg1;
+ (id)learnMoreText:(id)arg1;
+ (id)getButtonTextOfAd:(id)arg1;
+ (long long)netType;
+ (void)preloadVastWithModel:(id)arg1;
+ (void)preloadAppStoreWithAdModel:(id)arg1;
+ (void)preloadLandingWithModel:(id)arg1;
+ (void)openLandingPageOrAppStoreWithModel:(id)arg1 event:(id)arg2 didOpenAppStore:(_Bool *)arg3;
+ (void)openLandingPageOrAppStoreWithModel:(id)arg1 didOpenAppStore:(_Bool *)arg2;
+ (void)openLandingPageOrAppStoreWithModel:(id)arg1;
+ (_Bool)canOpenIronManApp:(id)arg1;
+ (_Bool)canOpenInApp:(id)arg1;
+ (_Bool)openThirdPartyAppUrlWithURL:(id)arg1 event:(id)arg2 openPosition:(long long)arg3 creativeID:(id)arg4 groupID:(id)arg5 logExtra:(id)arg6 extra:(id)arg7;
+ (_Bool)openAdIronManWithURL:(id)arg1;
+ (_Bool)openAdIronManWithAwemeModel:(id)arg1;
+ (_Bool)openAppWithOpenURL:(id)arg1 creativeID:(id)arg2 groupID:(id)arg3 logExtra:(id)arg4 event:(id)arg5 extra:(id)arg6;
+ (_Bool)openAppWithOpenURL:(id)arg1 creativeID:(id)arg2 groupID:(id)arg3 logExtra:(id)arg4 event:(id)arg5;
+ (_Bool)openAppWithOpenURL:(id)arg1 creativeID:(id)arg2 groupID:(id)arg3 logExtra:(id)arg4;
+ (id)openURLInAppOfModel:(id)arg1 originOpenURL:(id)arg2;
+ (_Bool)openUniversalLinkAndLandingPageWithAwemeModel:(id)arg1 event:(id)arg2;
+ (_Bool)openAdWithOpenURL:(id)arg1 event:(id)arg2;
+ (_Bool)openAdWithOpenURL:(id)arg1;
+ (_Bool)openRedPacketPageWithModel:(id)arg1;
+ (_Bool)openLandingPageWithURL:(id)arg1 webTitle:(id)arg2 model:(id)arg3 event:(id)arg4 closeBlock:(CDUnknownBlockType)arg5;
+ (_Bool)openLandingPageWithURL:(id)arg1 webTitle:(id)arg2 model:(id)arg3 closeBlock:(CDUnknownBlockType)arg4;
+ (_Bool)openLandingPageWithModel:(id)arg1 event:(id)arg2;
+ (_Bool)openLandingPageWithModel:(id)arg1;
+ (id)viewControllerWithModel:(id)arg1 checkSupportOpenOutApp:(_Bool)arg2;
+ (id)viewControllerWithModel:(id)arg1;
+ (void)openDspAutoJumpWithAwemeModel:(id)arg1 event:(id)arg2;
+ (void)openAdWithAwemeModel:(id)arg1 fromPosition:(unsigned long long)arg2 event:(id)arg3 didOpenAppStore:(_Bool *)arg4;
+ (void)openAdWithAwemeModel:(id)arg1 fromPosition:(unsigned long long)arg2 event:(id)arg3;
+ (void)openAdWithAwemeModel:(id)arg1 fromPosition:(unsigned long long)arg2 didOpenAppStore:(_Bool *)arg3;
+ (void)openAdWithAwemeModel:(id)arg1 fromPosition:(unsigned long long)arg2;
@property(retain, nonatomic) NSString *linkAdStashedData; // @synthesize linkAdStashedData=_linkAdStashedData;
@property(nonatomic) _Bool hasOpenOtherAppInTask; // @synthesize hasOpenOtherAppInTask=_hasOpenOtherAppInTask;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
- (void).cxx_destruct;
- (void)didOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)openDspAutoJumpWithAwemeModel:(id)arg1 event:(id)arg2;
- (void)openAdWithAwemeModel:(id)arg1 fromPosition:(unsigned long long)arg2 event:(id)arg3;
- (void)openAdWithAwemeModel:(id)arg1 fromPosition:(unsigned long long)arg2;
- (void)onAppDidEnterBackground:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

