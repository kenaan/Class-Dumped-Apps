//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESWaveformConfig : NSObject
{
    int _pointCount;
    int _pointPersec;
    long long _waveType;
    double _durationPerFrame;
}

@property(nonatomic) int pointPersec; // @synthesize pointPersec=_pointPersec;
@property(nonatomic) double durationPerFrame; // @synthesize durationPerFrame=_durationPerFrame;
@property(nonatomic) int pointCount; // @synthesize pointCount=_pointCount;
@property(nonatomic) long long waveType; // @synthesize waveType=_waveType;

@end
