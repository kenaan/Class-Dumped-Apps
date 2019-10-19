//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IGListIndexSetResult, NSArray;

@interface TIMOMessagesDataSourceUpdate : NSObject
{
    long long _reason;
    NSArray *_previousData;
    NSArray *_nowData;
    IGListIndexSetResult *_cachedDiff;
}

@property(retain, nonatomic) IGListIndexSetResult *cachedDiff; // @synthesize cachedDiff=_cachedDiff;
@property(retain, nonatomic) NSArray *nowData; // @synthesize nowData=_nowData;
@property(retain, nonatomic) NSArray *previousData; // @synthesize previousData=_previousData;
@property(nonatomic) long long reason; // @synthesize reason=_reason;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *afterUpdateMessageIdentifiers;
@property(readonly, nonatomic) NSArray *beforeUpdateMessageIdentifiers;
- (id)calcDiffs;

@end

