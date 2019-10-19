//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBEnumArray, GPBUInt32Array, NSMutableArray, NSString;

@interface YTIIosStartupPerformanceConfig : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool enableCriticalRequestPrefetchingBrowse; // @dynamic enableCriticalRequestPrefetchingBrowse;
@property(nonatomic) _Bool enableCriticalRequestPrefetchingRurl; // @dynamic enableCriticalRequestPrefetchingRurl;
@property(nonatomic) _Bool enableNoncriticalStartupScheduler; // @dynamic enableNoncriticalStartupScheduler;
@property(nonatomic) _Bool enableNoncriticalStartupSchedulerStaggering; // @dynamic enableNoncriticalStartupSchedulerStaggering;
@property(nonatomic) _Bool enableSmartNoncriticalStartupScheduler; // @dynamic enableSmartNoncriticalStartupScheduler;
@property(nonatomic) _Bool hasEnableCriticalRequestPrefetchingBrowse; // @dynamic hasEnableCriticalRequestPrefetchingBrowse;
@property(nonatomic) _Bool hasEnableCriticalRequestPrefetchingRurl; // @dynamic hasEnableCriticalRequestPrefetchingRurl;
@property(nonatomic) _Bool hasEnableNoncriticalStartupScheduler; // @dynamic hasEnableNoncriticalStartupScheduler;
@property(nonatomic) _Bool hasEnableNoncriticalStartupSchedulerStaggering; // @dynamic hasEnableNoncriticalStartupSchedulerStaggering;
@property(nonatomic) _Bool hasEnableSmartNoncriticalStartupScheduler; // @dynamic hasEnableSmartNoncriticalStartupScheduler;
@property(nonatomic) _Bool hasIosStartupTelemetry; // @dynamic hasIosStartupTelemetry;
@property(nonatomic) _Bool hasLogThumbnailLoadsToHomeTimeline; // @dynamic hasLogThumbnailLoadsToHomeTimeline;
@property(nonatomic) _Bool hasNoncriticalStartupSchedulerForegroundOnly; // @dynamic hasNoncriticalStartupSchedulerForegroundOnly;
@property(nonatomic) _Bool hasNoncriticalStartupSchedulerStaggerMs; // @dynamic hasNoncriticalStartupSchedulerStaggerMs;
@property(nonatomic) _Bool hasNoncriticalStartupSchedulerTimeoutMs; // @dynamic hasNoncriticalStartupSchedulerTimeoutMs;
@property(nonatomic) _Bool hasNthThumbnailMinHeight; // @dynamic hasNthThumbnailMinHeight;
@property(nonatomic) _Bool hasNthThumbnailMinWidth; // @dynamic hasNthThumbnailMinWidth;
@property(nonatomic) _Bool hasSmartNoncriticalStartupSchedulerTick; // @dynamic hasSmartNoncriticalStartupSchedulerTick;
@property(nonatomic) _Bool hasSmartNoncriticalStartupSchedulerTimeoutMs; // @dynamic hasSmartNoncriticalStartupSchedulerTimeoutMs;
@property(nonatomic) _Bool hasStartupPerformanceInstrumentationEnabled; // @dynamic hasStartupPerformanceInstrumentationEnabled;
@property(nonatomic) _Bool hasStartupPerformanceInstrumentationFinalHomeTick; // @dynamic hasStartupPerformanceInstrumentationFinalHomeTick;
@property(nonatomic) _Bool hasStartupPerformanceInstrumentationFinalHomeTickTimeoutMs; // @dynamic hasStartupPerformanceInstrumentationFinalHomeTickTimeoutMs;
@property(nonatomic) _Bool hasStartupPerformanceInstrumentationThroughGelEnabled; // @dynamic hasStartupPerformanceInstrumentationThroughGelEnabled;
@property(nonatomic) _Bool hasStartupPerformanceInstrumentationWatchShimSuppressLegacy; // @dynamic hasStartupPerformanceInstrumentationWatchShimSuppressLegacy;
@property(nonatomic) _Bool hasStartupPerformanceInstrumentationWatchShimTimeoutMs; // @dynamic hasStartupPerformanceInstrumentationWatchShimTimeoutMs;
@property(nonatomic) _Bool hasStartupPrewarmingForegroundOnly; // @dynamic hasStartupPrewarmingForegroundOnly;
@property(nonatomic) _Bool hasStartupPrewarmingMode; // @dynamic hasStartupPrewarmingMode;
@property(nonatomic) _Bool hasStartupPrewarmingModePinRemoteImage; // @dynamic hasStartupPrewarmingModePinRemoteImage;
@property(nonatomic) _Bool hasStartupPrewarmingPinRemoteImage; // @dynamic hasStartupPrewarmingPinRemoteImage;
@property(nonatomic) _Bool hasStartupTelemetrySamplingRate; // @dynamic hasStartupTelemetrySamplingRate;
@property(retain, nonatomic) GPBEnumArray *homeNavLatencyActionTypesArray; // @dynamic homeNavLatencyActionTypesArray;
@property(readonly, nonatomic) unsigned long long homeNavLatencyActionTypesArray_Count; // @dynamic homeNavLatencyActionTypesArray_Count;
@property(retain, nonatomic) NSMutableArray *homeNavLatencyBrowseIdsArray; // @dynamic homeNavLatencyBrowseIdsArray;
@property(readonly, nonatomic) unsigned long long homeNavLatencyBrowseIdsArray_Count; // @dynamic homeNavLatencyBrowseIdsArray_Count;
@property(nonatomic) _Bool iosStartupTelemetry; // @dynamic iosStartupTelemetry;
@property(nonatomic) _Bool logThumbnailLoadsToHomeTimeline; // @dynamic logThumbnailLoadsToHomeTimeline;
@property(nonatomic) _Bool noncriticalStartupSchedulerForegroundOnly; // @dynamic noncriticalStartupSchedulerForegroundOnly;
@property(nonatomic) long long noncriticalStartupSchedulerStaggerMs; // @dynamic noncriticalStartupSchedulerStaggerMs;
@property(nonatomic) long long noncriticalStartupSchedulerTimeoutMs; // @dynamic noncriticalStartupSchedulerTimeoutMs;
@property(retain, nonatomic) GPBEnumArray *noncriticalStartupWhitelistLabelsArray; // @dynamic noncriticalStartupWhitelistLabelsArray;
@property(readonly, nonatomic) unsigned long long noncriticalStartupWhitelistLabelsArray_Count; // @dynamic noncriticalStartupWhitelistLabelsArray_Count;
@property(nonatomic) unsigned int nthThumbnailMinHeight; // @dynamic nthThumbnailMinHeight;
@property(nonatomic) unsigned int nthThumbnailMinWidth; // @dynamic nthThumbnailMinWidth;
@property(retain, nonatomic) GPBUInt32Array *reportNthThumbnailLoadsArray; // @dynamic reportNthThumbnailLoadsArray;
@property(readonly, nonatomic) unsigned long long reportNthThumbnailLoadsArray_Count; // @dynamic reportNthThumbnailLoadsArray_Count;
@property(copy, nonatomic) NSString *smartNoncriticalStartupSchedulerTick; // @dynamic smartNoncriticalStartupSchedulerTick;
@property(retain, nonatomic) NSMutableArray *smartNoncriticalStartupSchedulerTicksArray; // @dynamic smartNoncriticalStartupSchedulerTicksArray;
@property(readonly, nonatomic) unsigned long long smartNoncriticalStartupSchedulerTicksArray_Count; // @dynamic smartNoncriticalStartupSchedulerTicksArray_Count;
@property(nonatomic) long long smartNoncriticalStartupSchedulerTimeoutMs; // @dynamic smartNoncriticalStartupSchedulerTimeoutMs;
@property(nonatomic) _Bool startupPerformanceInstrumentationEnabled; // @dynamic startupPerformanceInstrumentationEnabled;
@property(copy, nonatomic) NSString *startupPerformanceInstrumentationFinalHomeTick; // @dynamic startupPerformanceInstrumentationFinalHomeTick;
@property(nonatomic) long long startupPerformanceInstrumentationFinalHomeTickTimeoutMs; // @dynamic startupPerformanceInstrumentationFinalHomeTickTimeoutMs;
@property(retain, nonatomic) NSMutableArray *startupPerformanceInstrumentationFinalHomeTicksArray; // @dynamic startupPerformanceInstrumentationFinalHomeTicksArray;
@property(readonly, nonatomic) unsigned long long startupPerformanceInstrumentationFinalHomeTicksArray_Count; // @dynamic startupPerformanceInstrumentationFinalHomeTicksArray_Count;
@property(nonatomic) _Bool startupPerformanceInstrumentationThroughGelEnabled; // @dynamic startupPerformanceInstrumentationThroughGelEnabled;
@property(nonatomic) _Bool startupPerformanceInstrumentationWatchShimSuppressLegacy; // @dynamic startupPerformanceInstrumentationWatchShimSuppressLegacy;
@property(nonatomic) long long startupPerformanceInstrumentationWatchShimTimeoutMs; // @dynamic startupPerformanceInstrumentationWatchShimTimeoutMs;
@property(retain, nonatomic) NSMutableArray *startupPrewarmingAdsHostnamesArray; // @dynamic startupPrewarmingAdsHostnamesArray;
@property(readonly, nonatomic) unsigned long long startupPrewarmingAdsHostnamesArray_Count; // @dynamic startupPrewarmingAdsHostnamesArray_Count;
@property(retain, nonatomic) NSMutableArray *startupPrewarmingDataHostnamesArray; // @dynamic startupPrewarmingDataHostnamesArray;
@property(readonly, nonatomic) unsigned long long startupPrewarmingDataHostnamesArray_Count; // @dynamic startupPrewarmingDataHostnamesArray_Count;
@property(nonatomic) _Bool startupPrewarmingForegroundOnly; // @dynamic startupPrewarmingForegroundOnly;
@property(retain, nonatomic) NSMutableArray *startupPrewarmingImageHostnamesArray; // @dynamic startupPrewarmingImageHostnamesArray;
@property(readonly, nonatomic) unsigned long long startupPrewarmingImageHostnamesArray_Count; // @dynamic startupPrewarmingImageHostnamesArray_Count;
@property(nonatomic) int startupPrewarmingMode; // @dynamic startupPrewarmingMode;
@property(nonatomic) int startupPrewarmingModePinRemoteImage; // @dynamic startupPrewarmingModePinRemoteImage;
@property(nonatomic) _Bool startupPrewarmingPinRemoteImage; // @dynamic startupPrewarmingPinRemoteImage;
@property(nonatomic) float startupTelemetrySamplingRate; // @dynamic startupTelemetrySamplingRate;

@end
