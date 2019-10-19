//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SOJUFeatureSettings-Protocol.h"

@class NSNumber, NSString;

@interface SOJUFeatureSettings : NSObject <SOJUFeatureSettings>
{
    NSNumber *_smartFilters;
    NSNumber *_visualFilters;
    NSNumber *_frontFacingFlash;
    NSNumber *_replaySnaps;
    NSNumber *_travelMode;
    NSNumber *_payReplaySnaps;
    NSNumber *_lensStoreAvailable;
    NSNumber *_barcodeEnabled;
    NSNumber *_qrcodeEnabled;
    NSNumber *_lookseryFaceTrackingv2Enabled;
    NSNumber *_lookseryFaceTrackingv2InitializationEnabled;
    NSNumber *_isPrefetchForStoreLensesEnabled;
    NSNumber *_isLensesTooltipEnabled;
    NSNumber *_isBirthdayPartyEnabled;
    NSNumber *_galleryEnabled;
    NSNumber *_galleryInvited;
    NSNumber *_isAdvertiser;
    NSNumber *_isSnapAdsPortalContributor;
    NSNumber *_showTravelModeAtTopInSettings;
    NSNumber *_galleryIsBlocked;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
+ (_Bool)canInitFromProto;
@property(readonly, copy, nonatomic) NSNumber *galleryIsBlocked; // @synthesize galleryIsBlocked=_galleryIsBlocked;
@property(readonly, copy, nonatomic) NSNumber *showTravelModeAtTopInSettings; // @synthesize showTravelModeAtTopInSettings=_showTravelModeAtTopInSettings;
@property(readonly, copy, nonatomic) NSNumber *isSnapAdsPortalContributor; // @synthesize isSnapAdsPortalContributor=_isSnapAdsPortalContributor;
@property(readonly, copy, nonatomic) NSNumber *isAdvertiser; // @synthesize isAdvertiser=_isAdvertiser;
@property(readonly, copy, nonatomic) NSNumber *galleryInvited; // @synthesize galleryInvited=_galleryInvited;
@property(readonly, copy, nonatomic) NSNumber *galleryEnabled; // @synthesize galleryEnabled=_galleryEnabled;
@property(readonly, copy, nonatomic) NSNumber *isBirthdayPartyEnabled; // @synthesize isBirthdayPartyEnabled=_isBirthdayPartyEnabled;
@property(readonly, copy, nonatomic) NSNumber *isLensesTooltipEnabled; // @synthesize isLensesTooltipEnabled=_isLensesTooltipEnabled;
@property(readonly, copy, nonatomic) NSNumber *isPrefetchForStoreLensesEnabled; // @synthesize isPrefetchForStoreLensesEnabled=_isPrefetchForStoreLensesEnabled;
@property(readonly, copy, nonatomic) NSNumber *lookseryFaceTrackingv2InitializationEnabled; // @synthesize lookseryFaceTrackingv2InitializationEnabled=_lookseryFaceTrackingv2InitializationEnabled;
@property(readonly, copy, nonatomic) NSNumber *lookseryFaceTrackingv2Enabled; // @synthesize lookseryFaceTrackingv2Enabled=_lookseryFaceTrackingv2Enabled;
@property(readonly, copy, nonatomic) NSNumber *qrcodeEnabled; // @synthesize qrcodeEnabled=_qrcodeEnabled;
@property(readonly, copy, nonatomic) NSNumber *barcodeEnabled; // @synthesize barcodeEnabled=_barcodeEnabled;
@property(readonly, copy, nonatomic) NSNumber *lensStoreAvailable; // @synthesize lensStoreAvailable=_lensStoreAvailable;
@property(readonly, copy, nonatomic) NSNumber *payReplaySnaps; // @synthesize payReplaySnaps=_payReplaySnaps;
@property(readonly, copy, nonatomic) NSNumber *travelMode; // @synthesize travelMode=_travelMode;
@property(readonly, copy, nonatomic) NSNumber *replaySnaps; // @synthesize replaySnaps=_replaySnaps;
@property(readonly, copy, nonatomic) NSNumber *frontFacingFlash; // @synthesize frontFacingFlash=_frontFacingFlash;
@property(readonly, copy, nonatomic) NSNumber *visualFilters; // @synthesize visualFilters=_visualFilters;
@property(readonly, copy, nonatomic) NSNumber *smartFilters; // @synthesize smartFilters=_smartFilters;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
- (void)decodeWithFasterDecoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSmartFilters:(id)arg1 visualFilters:(id)arg2 frontFacingFlash:(id)arg3 replaySnaps:(id)arg4 travelMode:(id)arg5 payReplaySnaps:(id)arg6 lensStoreAvailable:(id)arg7 barcodeEnabled:(id)arg8 qrcodeEnabled:(id)arg9 lookseryFaceTrackingv2Enabled:(id)arg10 lookseryFaceTrackingv2InitializationEnabled:(id)arg11 isPrefetchForStoreLensesEnabled:(id)arg12 isLensesTooltipEnabled:(id)arg13 isBirthdayPartyEnabled:(id)arg14 galleryEnabled:(id)arg15 galleryInvited:(id)arg16 isAdvertiser:(id)arg17 isSnapAdsPortalContributor:(id)arg18 showTravelModeAtTopInSettings:(id)arg19 galleryIsBlocked:(id)arg20;
- (id)toJson;
- (id)toDictionary;
- (id)initWithJSONDictionary:(id)arg1;
- (_Bool)galleryIsBlockedValue;
- (_Bool)showTravelModeAtTopInSettingsValue;
- (_Bool)isSnapAdsPortalContributorValue;
- (_Bool)isAdvertiserValue;
- (_Bool)galleryInvitedValue;
- (_Bool)galleryEnabledValue;
- (_Bool)isBirthdayPartyEnabledValue;
- (_Bool)isLensesTooltipEnabledValue;
- (_Bool)isPrefetchForStoreLensesEnabledValue;
- (_Bool)lookseryFaceTrackingv2InitializationEnabledValue;
- (_Bool)lookseryFaceTrackingv2EnabledValue;
- (_Bool)qrcodeEnabledValue;
- (_Bool)barcodeEnabledValue;
- (_Bool)lensStoreAvailableValue;
- (_Bool)payReplaySnapsValue;
- (_Bool)travelModeValue;
- (_Bool)replaySnapsValue;
- (_Bool)frontFacingFlashValue;
- (_Bool)visualFiltersValue;
- (_Bool)smartFiltersValue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
