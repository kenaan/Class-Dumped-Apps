//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBNativeAdBaseView.h"

#import "FBNativeAdDelegate-Protocol.h"

@class FBMediaView, FBNativeAd, NSString;
@protocol FBNativeAdDelegate;

@interface FBNativeAdView : FBNativeAdBaseView <FBNativeAdDelegate>
{
    long long _type;
    FBNativeAd *_nativeAd;
    FBMediaView *_mediaView;
    id <FBNativeAdDelegate> _nativeAdDelegate;
}

+ (Class)classFromType:(long long)arg1;
+ (id)nativeAdViewWithNativeAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3;
+ (id)nativeAdViewWithNativeAd:(id)arg1 withType:(long long)arg2;
+ (id)nativeAdViewWithType:(long long)arg1 withAttributes:(id)arg2;
@property(nonatomic) __weak id <FBNativeAdDelegate> nativeAdDelegate; // @synthesize nativeAdDelegate=_nativeAdDelegate;
@property(retain, nonatomic) FBMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) FBNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateAttributes:(id)arg1;
- (void)reset;
- (void)updateView:(_Bool)arg1;
- (void)registerView;
- (id)nativeAdBase;
- (void)populate:(id)arg1;
- (void)constructView;
- (void)constructMediaView;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (void)nativeAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdWillLogImpression:(id)arg1;
- (void)nativeAdDidDownloadMedia:(id)arg1;
- (void)nativeAdDidLoad:(id)arg1;
- (void)setType:(long long)arg1;
- (id)initWithNativeAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3;
- (id)initWithNativeAd:(id)arg1 withType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

