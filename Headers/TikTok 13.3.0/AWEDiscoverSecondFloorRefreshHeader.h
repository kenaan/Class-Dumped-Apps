//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class AWEDiscoverSecondFloorRefreshAnimationView, AWEUILoadingView, NSString;

@interface AWEDiscoverSecondFloorRefreshHeader : MJRefreshHeader
{
    _Bool _enableShowWonderful;
    AWEDiscoverSecondFloorRefreshAnimationView *_refreshAnimationView;
    CDUnknownBlockType _showWonderfulBlock;
    AWEUILoadingView *_loadingView;
    CDUnknownBlockType _backgroundViewLayoutBlock;
    CDUnknownBlockType _stateAnimationViewLayoutBlock;
    NSString *_prevStateText;
}

@property(copy, nonatomic) NSString *prevStateText; // @synthesize prevStateText=_prevStateText;
@property(copy, nonatomic) CDUnknownBlockType stateAnimationViewLayoutBlock; // @synthesize stateAnimationViewLayoutBlock=_stateAnimationViewLayoutBlock;
@property(copy, nonatomic) CDUnknownBlockType backgroundViewLayoutBlock; // @synthesize backgroundViewLayoutBlock=_backgroundViewLayoutBlock;
@property(retain, nonatomic) AWEUILoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(copy, nonatomic) CDUnknownBlockType showWonderfulBlock; // @synthesize showWonderfulBlock=_showWonderfulBlock;
@property(nonatomic) _Bool enableShowWonderful; // @synthesize enableShowWonderful=_enableShowWonderful;
@property(retain, nonatomic) AWEDiscoverSecondFloorRefreshAnimationView *refreshAnimationView; // @synthesize refreshAnimationView=_refreshAnimationView;
- (void).cxx_destruct;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;
- (void)resetState;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)configStateAnimationViewBackgroundView:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;
- (void)configBackgroundView:(id)arg1 layoutBlock:(CDUnknownBlockType)arg2;
- (void)placeSubviews;
- (void)prepare;

@end
