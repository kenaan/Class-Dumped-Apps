//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AWEDemaciaImagePlayerViewDelegate-Protocol.h"
#import "AWEDemaciaPlayerViewDelegate-Protocol.h"
#import "NSObject-Protocol.h"

@class AWEOneDayUserStoryModel;

@protocol AWEOneDayVideoCellDelegate <NSObject, AWEDemaciaPlayerViewDelegate, AWEDemaciaImagePlayerViewDelegate>

@optional
- (void)dismissStickers;
- (void)oneDayVideoCellViewControllerShowGlanceViews:(long long)arg1 userStory:(AWEOneDayUserStoryModel *)arg2;
- (void)oneDayVideoCellViewControllerCloseClicked;
- (void)oneDayVideoCellViewControllerLeaveCurrentAuthor:(_Bool)arg1 autoPlay:(_Bool)arg2;
- (void)oneDayVideoCellViewControllerDidLoadingStart:(_Bool)arg1;
- (void)oneDayVideoCellViewControllerDidChangeIndex:(long long)arg1;
@end

