//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface GADShim : NSObject
{
    long long _timeToLive;
    double _defaultFallbackOctagonProbability;
    _Bool _intentional;
    long long _implementation;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) _Bool intentional; // @synthesize intentional=_intentional;
@property(readonly, nonatomic) long long implementation; // @synthesize implementation=_implementation;
- (void)storeConfiguration:(id)arg1;
- (void)executeForImplementation:(long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)updateUserDefaults;
- (void)updateConfiguration;
- (void)linkPublicClasses;
@property(readonly, nonatomic) NSDictionary *requestParameters;
- (id)description;
- (long long)shimRandomImplementation;
- (id)init;

@end

