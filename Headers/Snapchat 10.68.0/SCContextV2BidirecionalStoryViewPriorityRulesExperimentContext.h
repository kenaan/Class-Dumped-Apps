//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCExperimentContext.h"

@class NSString;

@interface SCContextV2BidirecionalStoryViewPriorityRulesExperimentContext : SCExperimentContext
{
    _Bool _isEnabled;
    NSString *_treatment;
    long long _lowFriendCountThreshold;
}

+ (id)experimentName;
@property(nonatomic) long long lowFriendCountThreshold; // @synthesize lowFriendCountThreshold=_lowFriendCountThreshold;
@property(retain, nonatomic) NSString *treatment; // @synthesize treatment=_treatment;
@property(readonly, nonatomic) _Bool isEnabled; // @synthesize isEnabled=_isEnabled;
- (void).cxx_destruct;
- (void)setupParameters;
- (id)experimentName;

@end
