//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class AWEDiscoverSecondFloorAwemeInfoModel, NSDictionary, NSString, UIView, UIViewController;

@protocol AWESecondFloorVideoListCellDelegate <NSObject>
@property(copy, nonatomic) CDUnknownBlockType closeButtonTapCallBack;
@property(nonatomic) __weak UIViewController *parentVC;
@property(nonatomic) unsigned long long entryStyle;
@property(nonatomic) _Bool isInBackground;
@property(copy, nonatomic) NSString *activityId;
@property(nonatomic) _Bool autoPlay;
@property(retain, nonatomic) UIView *cellTransitionMaskview;
- (void)pauseVideoImmediately;
- (void)pause;
- (void)play;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (void)setCurrentIndex:(long long)arg1 totalVideoCount:(long long)arg2;
- (void)refreshModel:(AWEDiscoverSecondFloorAwemeInfoModel *)arg1 activityId:(NSString *)arg2 totalCount:(long long)arg3 tracker:(NSDictionary *)arg4;
@end
