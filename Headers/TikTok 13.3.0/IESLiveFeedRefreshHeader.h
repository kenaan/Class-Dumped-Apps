//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshHeader.h"

@class NSDictionary, UIView;
@protocol IESLiveFeedViewFactory, IESLiveRefreshView;

@interface IESLiveFeedRefreshHeader : MJRefreshHeader
{
    NSDictionary *_params;
    CDUnknownBlockType _paramsRefreshingBlock;
    NSDictionary *_refreshingParams;
    UIView<IESLiveRefreshView> *_loading;
    id <IESLiveFeedViewFactory> _feedFactory;
}

+ (id)headerWithRefreshingParamsBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) id <IESLiveFeedViewFactory> feedFactory; // @synthesize feedFactory=_feedFactory;
@property(retain, nonatomic) UIView<IESLiveRefreshView> *loading; // @synthesize loading=_loading;
@property(copy, nonatomic) NSDictionary *refreshingParams; // @synthesize refreshingParams=_refreshingParams;
@property(copy, nonatomic) CDUnknownBlockType paramsRefreshingBlock; // @synthesize paramsRefreshingBlock=_paramsRefreshingBlock;
@property(retain, nonatomic) NSDictionary *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (void)setPullingPercent:(double)arg1;
- (void)setState:(long long)arg1;
- (void)scrollViewPanStateDidChange:(id)arg1;
- (void)scrollViewContentSizeDidChange:(id)arg1;
- (void)scrollViewContentOffsetDidChange:(id)arg1;
- (void)placeSubviews;
- (void)prepare;
- (void)beginRefreshingWithParams:(id)arg1;

@end

