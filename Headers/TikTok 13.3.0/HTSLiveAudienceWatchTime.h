//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSTimer;
@protocol HTSLiveAudienceWatchTimeDelegate;

@interface HTSLiveAudienceWatchTime : NSObject
{
    _Bool _invalid;
    _Bool _isPaused;
    id <HTSLiveAudienceWatchTimeDelegate> _delegate;
    NSTimer *_timer;
    NSDate *_initialTime;
    NSDate *_startTime;
    NSDate *_stopTime;
    double _stopDuration;
    unsigned long long _minitTickTimes;
    NSTimer *_videoOverTimer;
    NSDate *_videoOverDate;
}

@property(nonatomic) _Bool isPaused; // @synthesize isPaused=_isPaused;
@property(retain, nonatomic) NSDate *videoOverDate; // @synthesize videoOverDate=_videoOverDate;
@property(retain, nonatomic) NSTimer *videoOverTimer; // @synthesize videoOverTimer=_videoOverTimer;
@property(nonatomic) unsigned long long minitTickTimes; // @synthesize minitTickTimes=_minitTickTimes;
@property(nonatomic) double stopDuration; // @synthesize stopDuration=_stopDuration;
@property(retain, nonatomic) NSDate *stopTime; // @synthesize stopTime=_stopTime;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSDate *initialTime; // @synthesize initialTime=_initialTime;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
@property(nonatomic) __weak id <HTSLiveAudienceWatchTimeDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)stayPageTracker;
- (void)resume;
- (void)pause;
- (void)closeWatching;
- (void)stopWatching;
- (void)startWatching;
- (void)videoOverWillAppear;
- (void)videoOverDisAppear;
- (void)videoOverTrack:(double)arg1 forKey:(id)arg2;
- (void)videoOverPartForKey:(id)arg1;
- (void)videoOverTrackStart;
- (void)startTracker;
- (id)init;
- (void)dealloc;

@end

