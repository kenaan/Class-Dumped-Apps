//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESDynamicsProcessorModel : NSObject
{
    double _threshold;
    double _headRoom;
    double _expansionRatio;
    double _expansionThreshold;
    double _attackTime;
    double _releaseTime;
    double _masterGain;
}

@property(nonatomic) double masterGain; // @synthesize masterGain=_masterGain;
@property(nonatomic) double releaseTime; // @synthesize releaseTime=_releaseTime;
@property(nonatomic) double attackTime; // @synthesize attackTime=_attackTime;
@property(nonatomic) double expansionThreshold; // @synthesize expansionThreshold=_expansionThreshold;
@property(nonatomic) double expansionRatio; // @synthesize expansionRatio=_expansionRatio;
@property(nonatomic) double headRoom; // @synthesize headRoom=_headRoom;
@property(nonatomic) double threshold; // @synthesize threshold=_threshold;

@end

