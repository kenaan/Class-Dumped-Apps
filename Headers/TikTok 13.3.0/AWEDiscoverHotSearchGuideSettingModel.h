//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber;

@interface AWEDiscoverHotSearchGuideSettingModel : AWEBaseApiModel
{
    NSNumber *_mostDisplayTimes;
    NSNumber *_oneDisplayIntervals;
    NSNumber *_opMostDisplayTimes;
    NSNumber *_opOneDisplayIntervals;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *opOneDisplayIntervals; // @synthesize opOneDisplayIntervals=_opOneDisplayIntervals;
@property(retain, nonatomic) NSNumber *opMostDisplayTimes; // @synthesize opMostDisplayTimes=_opMostDisplayTimes;
@property(retain, nonatomic) NSNumber *oneDisplayIntervals; // @synthesize oneDisplayIntervals=_oneDisplayIntervals;
@property(retain, nonatomic) NSNumber *mostDisplayTimes; // @synthesize mostDisplayTimes=_mostDisplayTimes;
- (void).cxx_destruct;

@end

