//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCUnlockableTracker.h"

@interface SCUnlockableLensTracker : SCUnlockableTracker
{
    long long _lensSource;
}

@property(readonly, nonatomic) long long lensSource; // @synthesize lensSource=_lensSource;
- (_Bool)_canTrack:(id)arg1 forType:(long long)arg2;
- (void)_updateSnapAdsWithLensCarouselInteraction;
- (id)_createProtoTrackWithSnapInfo:(id)arg1 sojuImpressionData:(id)arg2;
- (void)_fireLensCarouselInteractionWithSnapInfo:(id)arg1 shouldFireTrackViaSnapAdsClient:(_Bool)arg2 shouldFireTrackViaGtqClient:(_Bool)arg3;
- (void)_updateInteraction:(id)arg1 existingInteraction:(id)arg2;
- (void)fireTrackWithSnapInfo:(id)arg1;
- (void)trackAttachmentViewForLensId:(id)arg1 openTimestamp:(id)arg2 viewTimeSec:(double)arg3 mediaDurationSec:(double)arg4 isRedirectToStore:(_Bool)arg5 isRedirectToWebview:(_Bool)arg6 isPixelCookieAvailable:(_Bool)arg7;
- (void)flipCameraForLensId:(id)arg1;
- (id)initWithSessionId:(id)arg1 userSession:(id)arg2 lensSource:(long long)arg3;

@end
