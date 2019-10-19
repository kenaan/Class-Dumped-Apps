//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTInterval.h"

@class NSDictionary, YTIntervalTree;

@interface MLFormat3Captions : YTInterval
{
    YTIntervalTree *_windows;
    YTIntervalTree *_implicitWindows;
    YTIntervalTree *_captions;
    NSDictionary *_windowPositions;
    NSDictionary *_windowStyles;
    NSDictionary *_pens;
}

@property(readonly, nonatomic) NSDictionary *pens; // @synthesize pens=_pens;
@property(readonly, nonatomic) NSDictionary *windowStyles; // @synthesize windowStyles=_windowStyles;
@property(readonly, nonatomic) NSDictionary *windowPositions; // @synthesize windowPositions=_windowPositions;
@property(readonly, nonatomic) YTIntervalTree *captions; // @synthesize captions=_captions;
@property(readonly, nonatomic) YTIntervalTree *implicitWindows; // @synthesize implicitWindows=_implicitWindows;
@property(readonly, nonatomic) YTIntervalTree *windows; // @synthesize windows=_windows;
- (void).cxx_destruct;
- (id)copyWithStartTime:(double)arg1 endTime:(double)arg2;
- (id)init;
- (id)initWithWindows:(id)arg1 implicitWindows:(id)arg2 captions:(id)arg3 windowPositions:(id)arg4 windowStyles:(id)arg5 pens:(id)arg6;
- (id)initWithWindows:(id)arg1 implicitWindows:(id)arg2 captions:(id)arg3 windowPositions:(id)arg4 windowStyles:(id)arg5 pens:(id)arg6 startTime:(double)arg7 endTime:(double)arg8;

@end
