//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface IESAudioExciterFormat : NSObject <NSCopying>
{
    double _gain;
    long long _highpassfreq;
}

@property(nonatomic) long long highpassfreq; // @synthesize highpassfreq=_highpassfreq;
@property(nonatomic) double gain; // @synthesize gain=_gain;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

