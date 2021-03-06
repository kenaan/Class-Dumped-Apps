//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPNativeAdConfigValues : NSObject
{
    double _impressionMinVisiblePixels;
    long long _impressionMinVisiblePercent;
    double _impressionMinVisibleSeconds;
}

@property(readonly, nonatomic) double impressionMinVisibleSeconds; // @synthesize impressionMinVisibleSeconds=_impressionMinVisibleSeconds;
@property(readonly, nonatomic) long long impressionMinVisiblePercent; // @synthesize impressionMinVisiblePercent=_impressionMinVisiblePercent;
@property(readonly, nonatomic) double impressionMinVisiblePixels; // @synthesize impressionMinVisiblePixels=_impressionMinVisiblePixels;
@property(readonly, nonatomic) _Bool isImpressionMinVisiblePixelsValid;
@property(readonly, nonatomic) _Bool isImpressionMinVisiblePercentValid;
@property(readonly, nonatomic) _Bool isImpressionMinVisibleSecondsValid;
- (id)initWithImpressionMinVisiblePixels:(double)arg1 impressionMinVisiblePercent:(long long)arg2 impressionMinVisibleSeconds:(double)arg3;
- (_Bool)isValidNumberOfPixels:(double)arg1;
- (_Bool)isValidTimeInterval:(double)arg1;
- (_Bool)isValidPercentage:(long long)arg1;

@end

