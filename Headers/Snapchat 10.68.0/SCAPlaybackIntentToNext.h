//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@interface SCAPlaybackIntentToNext : SCAUserTrackedEvent
{
}

- (void)setWithStreamingEnabled:(_Bool)arg1;
- (void)setWaitMs:(long long)arg1;
- (void)setViewSource:(long long)arg1;
- (void)setVideoPrepareTimeMs:(long long)arg1;
- (void)setStreamingFailureCode:(long long)arg1;
- (void)setSnapTimeSec:(double)arg1;
- (void)setSnapIndex:(long long)arg1;
- (void)setProductMediaType:(long long)arg1;
- (void)setPlaylistSetupViewModelsTimeMs:(long long)arg1;
- (void)setPlayerSessionTs:(long long)arg1;
- (void)setPlaybackMode:(long long)arg1;
- (void)setPlaybackLoadPhase:(long long)arg1;
- (void)setPlaySource:(long long)arg1;
- (void)setOperaSessionId:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMediaSizeByte:(long long)arg1;
- (void)setMediaResolution:(id)arg1;
- (void)setMediaPlaybackSessionId:(id)arg1;
- (void)setMediaId:(id)arg1;
- (void)setMediaGroupId:(id)arg1;
- (void)setMediaEncodingVariant:(id)arg1;
- (void)setMediaEncoding:(id)arg1;
- (void)setLongformVideo:(_Bool)arg1;
- (void)setItemType:(long long)arg1;
- (void)setItemLoadedCount:(long long)arg1;
- (void)setItemLoaded:(_Bool)arg1;
- (void)setItemLoadState:(long long)arg1;
- (void)setItemId:(id)arg1;
- (void)setItemGroupId:(id)arg1;
- (void)setIntentToVideoPreparationStartTimeMs:(long long)arg1;
- (void)setIntentToPlaylistStartSetupViewModelsTimeMs:(long long)arg1;
- (void)setFeatureMinorName:(long long)arg1;
- (void)setFeatureMajorName:(long long)arg1;
- (void)setEntryEvent:(long long)arg1;
- (void)setDeviceScore:(long long)arg1;
- (void)setConnectionClass:(long long)arg1;
- (void)setBufferingTimeMs:(long long)arg1;
- (void)setBandwidthSampleSize:(long long)arg1;
- (void)setBandwidthRangeClass:(id)arg1;
- (void)setBandwidthMedian:(double)arg1;
- (void)setBandwidthMean:(double)arg1;
- (double)getPerUserSamplingRate;
- (long long)getEventQoS;
- (id)getEventName;

@end
