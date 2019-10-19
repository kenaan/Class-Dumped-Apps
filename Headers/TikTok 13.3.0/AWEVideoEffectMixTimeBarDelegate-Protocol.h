//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEVideoPlayControl, NSString, UIColor;

@protocol AWEVideoEffectMixTimeBarDelegate <NSObject>
- (UIColor *)effectColorWithEffectId:(NSString *)arg1;
- (NSString *)effectCategoryWithEffectId:(NSString *)arg1;

@optional
- (void)userDidChangeToolEffectRange:(double)arg1 rangeTo:(double)arg2 changeType:(long long)arg3;
- (void)userDidChangeToolEffectRangeProportion:(double)arg1;
- (void)userDidFinishMoveTimeBarControl:(AWEVideoPlayControl *)arg1 progress:(double)arg2;
- (void)userDidMoveTimeBarControl:(AWEVideoPlayControl *)arg1 progress:(double)arg2;
- (void)userWillMoveTimeBarControl:(AWEVideoPlayControl *)arg1 progress:(double)arg2;
@end

