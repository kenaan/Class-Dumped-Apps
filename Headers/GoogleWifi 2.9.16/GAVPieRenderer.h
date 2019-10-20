//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GAVSeriesRenderer-Protocol.h"

@class NSString;

@interface GAVPieRenderer : NSObject <GAVSeriesRenderer>
{
}

- (id)getNearestToLocation:(struct CGPoint)arg1 fromObjects:(id)arg2;
- (id)getNearestSeriesToLocation:(struct CGPoint)arg1 fromObjects:(id)arg2 series:(id)arg3;
- (id)getNearestDomainsToLocation:(struct CGPoint)arg1 fromObjects:(id)arg2 series:(id)arg3;
- (id)getNearestDatumsToLocation:(struct CGPoint)arg1 fromObjects:(id)arg2 series:(id)arg3;
- (id)renderSeries:(id)arg1 center:(struct CGPoint)arg2 radius:(double)arg3;
- (id)renderWithSeriesCollection:(id)arg1 frame:(struct CGRect)arg2;
- (id)renderWithSeriesCollection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
