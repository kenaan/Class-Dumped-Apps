//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GOOBaseContentViewObject.h"

@class GIPCircularBuffer, JETInsightsDataCache;

@interface JETRealtimeTrafficAplosGraphContentViewObject : GOOBaseContentViewObject
{
    _Bool _isDownload;
    long long _bandwidthScale;
    GIPCircularBuffer *_trafficBuffer;
    JETInsightsDataCache *_cache;
}

@property(retain, nonatomic) JETInsightsDataCache *cache; // @synthesize cache=_cache;
@property(readonly, nonatomic) GIPCircularBuffer *trafficBuffer; // @synthesize trafficBuffer=_trafficBuffer;
@property(readonly, nonatomic) long long bandwidthScale; // @synthesize bandwidthScale=_bandwidthScale;
@property(readonly, nonatomic) _Bool isDownload; // @synthesize isDownload=_isDownload;
- (void).cxx_destruct;
- (void)clearTrafficBandwidthData;
- (void)recordRealtimeDataTrafficInstantBps:(id)arg1;
- (Class)contentViewClass;
- (id)init;
- (id)initWithCache:(id)arg1 isDownload:(_Bool)arg2;

@end

