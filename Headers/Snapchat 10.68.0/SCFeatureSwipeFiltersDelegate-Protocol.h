//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableDictionary;
@protocol SCFeatureSwipeFilters;

@protocol SCFeatureSwipeFiltersDelegate <NSObject>
- (void)featureSwipeFilters:(id <SCFeatureSwipeFilters>)arg1 didUpdateState:(NSMutableDictionary *)arg2;
- (void)featureSwipeFiltersDidTurnOnFilters:(id <SCFeatureSwipeFilters>)arg1;
- (long long)featureSwipeFiltersAuxiliaryContentPromptFilterType:(id <SCFeatureSwipeFilters>)arg1;
- (_Bool)featureSwipeFiltersShouldIncludePromptFilterView:(id <SCFeatureSwipeFilters>)arg1;
- (void)featureSwipeFiltersAddStreakFilters:(id <SCFeatureSwipeFilters>)arg1;
- (void)featureSwipeFiltersAddSmartFilters:(id <SCFeatureSwipeFilters>)arg1;
- (void)featureSwipeFiltersAddMotionFilters:(id <SCFeatureSwipeFilters>)arg1;
@end
