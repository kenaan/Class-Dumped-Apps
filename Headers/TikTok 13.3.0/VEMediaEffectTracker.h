//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESMMObject.h"

@class NSMutableDictionary;

@interface VEMediaEffectTracker : IESMMObject
{
    NSMutableDictionary *_trackDic;
}

+ (void)removeTracker;
+ (void)setTrackerInstance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *trackDic; // @synthesize trackDic=_trackDic;
- (void).cxx_destruct;
- (void)p_setVEEffectVersion;
- (void)dealloc;
- (void)printMediaEffectDic;
- (void)clear;
- (id)getMediaEffectDic;
- (void)removeKey:(id)arg1;
- (void)setValue:(id)arg1 withKey:(id)arg2;
- (id)init;

@end

