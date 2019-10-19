//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class AWEVisionSearchPointView, NSMutableArray;

@interface AWEVisionSearchPointContainerView : UIView
{
    AWEVisionSearchPointView *_currentPointView;
    double _ratio;
    NSMutableArray *_pointViews;
}

@property(retain, nonatomic) NSMutableArray *pointViews; // @synthesize pointViews=_pointViews;
@property(nonatomic) double ratio; // @synthesize ratio=_ratio;
@property(retain, nonatomic) AWEVisionSearchPointView *currentPointView; // @synthesize currentPointView=_currentPointView;
- (void).cxx_destruct;
- (id)pointViewAtPoint:(struct CGPoint)arg1;
- (id)findPointViewNotTrackShow;
- (id)findPointViewForID:(id)arg1;
- (void)changeCurrentPointView:(id)arg1;
- (void)configurePointView:(id)arg1 isCurrent:(_Bool)arg2;
- (void)removeAllPointViews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

