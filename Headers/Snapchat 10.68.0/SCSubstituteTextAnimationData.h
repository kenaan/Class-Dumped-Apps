//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSAttributedString;

@interface SCSubstituteTextAnimationData : NSObject <NSCopying>
{
    NSAttributedString *_substituteText;
    double _duration;
    double _resetDelay;
}

@property(readonly, nonatomic) double resetDelay; // @synthesize resetDelay=_resetDelay;
@property(readonly, nonatomic) double duration; // @synthesize duration=_duration;
@property(readonly, copy, nonatomic) NSAttributedString *substituteText; // @synthesize substituteText=_substituteText;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSubstituteText:(id)arg1 duration:(double)arg2 resetDelay:(double)arg3;

@end

