//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEDiscoverSecondFloorEntranceHintViewProtocol-Protocol.h"

@class NSString;

@interface AWEDiscoverSecondFloorEntranceSoftHintView : UIView <AWEDiscoverSecondFloorEntranceHintViewProtocol>
{
    double _alphaThreshold;
}

+ (id)secondFloorEntranceHintView;
@property(nonatomic) double alphaThreshold; // @synthesize alphaThreshold=_alphaThreshold;
- (long long)viewType;
- (double)heightToIncreaseSuperView;
- (double)heightForHintHeader;
- (double)topMarginToNavigationBar;
- (void)updateWithScrollViewContentOffsetY:(double)arg1;
- (id)lineView;
- (void)setupSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

