//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface IESSequencerBeat : NSObject
{
    float _onset;
    float _velocity;
}

+ (id)beatWithOnset:(float)arg1;
+ (id)beatWithOnset:(float)arg1 velocity:(float)arg2;
@property(nonatomic) float velocity; // @synthesize velocity=_velocity;
@property(nonatomic) float onset; // @synthesize onset=_onset;
- (id)description;

@end

