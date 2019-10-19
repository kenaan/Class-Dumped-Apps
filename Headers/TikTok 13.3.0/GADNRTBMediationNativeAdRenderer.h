//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADMediationNativeAdEventDelegate-Protocol.h"
#import "GADNAdRendering-Protocol.h"

@class GADNInternalNativeAd, GADNMediationNativeAdConfiguration, NSString;
@protocol GADMediationAdapter, GADMediationNativeAd;

@interface GADNRTBMediationNativeAdRenderer : NSObject <GADMediationNativeAdEventDelegate, GADNAdRendering>
{
    id <GADMediationAdapter> _loadingAdapter;
    id <GADMediationNativeAd> _mediatedAd;
    GADNInternalNativeAd *_internalNativeAd;
    GADNMediationNativeAdConfiguration *_mediationConfiguration;
}

- (void).cxx_destruct;
- (void)didUnmuteVideo;
- (void)didMuteVideo;
- (void)didFailToPresentWithError:(id)arg1;
- (void)didEndVideo;
- (void)didPauseVideo;
- (void)didPlayVideo;
- (void)willBackgroundApplication;
- (void)didDismissFullScreenView;
- (void)willDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)reportClick;
- (void)reportImpression;
- (id)adEventDelegateForNativeAd:(id)arg1 adapter:(id)arg2 adConfiguration:(struct NSDictionary *)arg3 transaction:(id)arg4 renderCompletionHandler:(CDUnknownBlockType)arg5;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

