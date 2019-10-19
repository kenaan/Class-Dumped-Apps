//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface YTReelWatchProgressView : UIView
{
    long long _currentIndex;
    long long _truncatedStart;
    NSMutableArray *_progressBars;
    NSMutableArray *_spareBars;
    unsigned long long _barCount;
}

@property(nonatomic) unsigned long long barCount; // @synthesize barCount=_barCount;
- (void).cxx_destruct;
- (id)progressBars;
- (id)progressBarViewAtIndex:(long long)arg1;
- (void)layoutProgressBarsWithLeadingTruncatedLimit:(unsigned long long)arg1 expandedLimit:(unsigned long long)arg2 trailingTruncatedLimit:(unsigned long long)arg3 excessLeadingCount:(unsigned long long)arg4;
- (id)accessibilityValue;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1 atIndex:(unsigned long long)arg2;
- (void)focusIndex:(long long)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
