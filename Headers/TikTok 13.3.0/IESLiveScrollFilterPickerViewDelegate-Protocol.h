//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IESLiveRoomFilter, IESLiveScrollFilterPickerView, NSString;

@protocol IESLiveScrollFilterPickerViewDelegate <NSObject>
- (void)scrollFilterPickerView:(IESLiveScrollFilterPickerView *)arg1 didSelectFilter:(IESLiveRoomFilter *)arg2 isSwiping:(_Bool)arg3;
- (void)scrollFilterPickerView:(IESLiveScrollFilterPickerView *)arg1 switchToFirstPath:(NSString *)arg2 fromSecondPath:(NSString *)arg3 dirction:(long long)arg4 progress:(double)arg5;
@end

