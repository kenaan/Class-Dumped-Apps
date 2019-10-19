//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YTResponderProviderProtocol.h"

@protocol YCHPlaybackEventsProvider <YTResponderProviderProtocol>
- (_Bool)isPlaybackVideoPlayingAd;
- (_Bool)isPlaybackVideoPlaying;
- (double)contentVideoMediaTime;
- (void)removePlaybackEventsObserver:(id <YCHPlaybackEventsObserver>)arg1;
- (void)addPlaybackEventsObserver:(id <YCHPlaybackEventsObserver>)arg1;
@end
