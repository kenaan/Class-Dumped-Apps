//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MLPlayerStateChangeEvent : NSObject
{
    long long _state;
    double _absoluteTime;
}

@property(readonly, nonatomic) double absoluteTime; // @synthesize absoluteTime=_absoluteTime;
@property(readonly, nonatomic) long long state; // @synthesize state=_state;
- (id)initWithState:(long long)arg1 absoluteTime:(double)arg2;

@end
