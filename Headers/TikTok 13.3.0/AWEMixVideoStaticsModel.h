//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEBaseApiModel.h"

@class NSNumber;

@interface AWEMixVideoStaticsModel : AWEBaseApiModel
{
    NSNumber *_playCount;
    NSNumber *_collectCount;
    NSNumber *_currentEpisode;
    NSNumber *_maxEpisode;
    NSNumber *_updatedCount;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *updatedCount; // @synthesize updatedCount=_updatedCount;
@property(retain, nonatomic) NSNumber *maxEpisode; // @synthesize maxEpisode=_maxEpisode;
@property(retain, nonatomic) NSNumber *currentEpisode; // @synthesize currentEpisode=_currentEpisode;
@property(retain, nonatomic) NSNumber *collectCount; // @synthesize collectCount=_collectCount;
@property(retain, nonatomic) NSNumber *playCount; // @synthesize playCount=_playCount;
- (void).cxx_destruct;

@end

