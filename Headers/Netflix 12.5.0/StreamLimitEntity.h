//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "COEntity.h"

@class NSArray, NSDictionary;

@interface StreamLimitEntity : COEntity
{
    NSArray *_activeStreamsList;
    NSDictionary *_plans;
    NSDictionary *_activeStreams;
}

+ (id)falcorKeyPathsForUpdateMap;
+ (id)falcorKeyPathMap;
@property(readonly, copy, nonatomic) NSDictionary *activeStreams; // @synthesize activeStreams=_activeStreams;
@property(readonly, copy, nonatomic) NSDictionary *plans; // @synthesize plans=_plans;
- (void).cxx_destruct;
- (id)nextUpgradeIncrementalPrice;
- (id)nextUpgradePlan;
- (id)currentPlan;
@property(readonly, copy, nonatomic) NSArray *activeStreamsList; // @synthesize activeStreamsList=_activeStreamsList;

@end

