//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, TVLPlayerItemAccessLogFirstFrameEvent, TVLPlayerItemAccessLogPullStreamEvent;

@interface TVLPlayerItemAccessLogOverallStatisticsData : NSObject
{
    long long _countOfObserving;
    long long _countOfStallTillRetryStarted;
    long long _totalDurationOfStallTillRetryStarted;
    NSMutableArray *_pullStreamEvents;
    NSMutableArray *_retryEvents;
    NSMutableArray *_stallEvents;
    NSMutableArray *_errorEvents;
    NSMutableArray *_timeSeriesEvents;
}

@property(retain, nonatomic) NSMutableArray *timeSeriesEvents; // @synthesize timeSeriesEvents=_timeSeriesEvents;
@property(retain, nonatomic) NSMutableArray *errorEvents; // @synthesize errorEvents=_errorEvents;
@property(retain, nonatomic) NSMutableArray *stallEvents; // @synthesize stallEvents=_stallEvents;
@property(retain, nonatomic) NSMutableArray *retryEvents; // @synthesize retryEvents=_retryEvents;
@property(retain, nonatomic) NSMutableArray *pullStreamEvents; // @synthesize pullStreamEvents=_pullStreamEvents;
@property(nonatomic) long long totalDurationOfStallTillRetryStarted; // @synthesize totalDurationOfStallTillRetryStarted=_totalDurationOfStallTillRetryStarted;
@property(nonatomic) long long countOfStallTillRetryStarted; // @synthesize countOfStallTillRetryStarted=_countOfStallTillRetryStarted;
@property(nonatomic) long long countOfObserving; // @synthesize countOfObserving=_countOfObserving;
- (void).cxx_destruct;
- (id)timeSeriesForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *pushingBitrateSeries;
@property(readonly, nonatomic) NSArray *pushingFrameRateSeries;
@property(readonly, nonatomic) NSArray *pullingBitrateSeries;
@property(readonly, nonatomic) NSArray *renderingFrameRateSeries;
@property(readonly, nonatomic) NSArray *audioBufferDurationSeries;
@property(readonly, nonatomic) NSArray *errorInfoSeries;
@property(readonly, nonatomic) NSArray *stallEventsTimestampSeries;
@property(readonly, nonatomic) TVLPlayerItemAccessLogFirstFrameEvent *firstFrameEvent;
@property(readonly, nonatomic) TVLPlayerItemAccessLogPullStreamEvent *currentPullStreamEvent;

@end
