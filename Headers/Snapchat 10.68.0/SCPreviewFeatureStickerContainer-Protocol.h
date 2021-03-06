//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCStickerFilterContainer-Protocol.h"

@class NSArray, NSMutableDictionary, NSString, SCPreviewStickerView, SCPreviewStickerViewContentView, SCPreviewTooltipBalloon, SCQuickStickerImage, SCSnapCommonLoggingParameters, UIGestureRecognizer, UIImage, UIView;
@protocol SCFeatureSwipeFilters, SCFeatureVideoPlayback, SCPreviewFeatureStickerContainerDelegate, SCStickerProtocol;

@protocol SCPreviewFeatureStickerContainer <SCStickerFilterContainer>
@property(readonly, nonatomic) UIView *trackingStickersContainerView;
@property(readonly, nonatomic) SCPreviewTooltipBalloon *trackingStickerTooltipBalloon;
@property(nonatomic) long long trackingUpdateVersion;
@property(nonatomic) __weak id <SCPreviewFeatureStickerContainerDelegate> delegate;
- (void)setMaxUniqueStickerId:(long long)arg1;
- (long long)animatedStickerCount;
- (NSArray *)stickerViewsWithType:(unsigned long long)arg1;
- (void)removeTrackingTooltip;
- (void)addStickerView:(SCPreviewStickerView *)arg1;
- (SCPreviewStickerView *)stickerContainingGesture:(UIGestureRecognizer *)arg1;
- (NSArray *)videoTrackedImagesForNonTrackingStickersWithCroppingAspectRatio:(double)arg1;
- (NSArray *)videoTrackedImagesForTrackingStickersWithCroppingAspectRatio:(double)arg1;
- (NSArray *)trackingStickerViews;
- (NSArray *)staticStickerViews;
- (NSArray *)stickerViews;
- (long long)stickerCount;
- (void)setStickersState:(NSArray *)arg1 videoPlayback:(id <SCFeatureVideoPlayback>)arg2 swipeFilters:(id <SCFeatureSwipeFilters>)arg3 completionBlock:(void (^)(NSArray *))arg4;
- (NSArray *)stickersState;
- (void)removeAllInfoStickersOfType:(unsigned long long)arg1;
- (void)insertSticker:(id <SCStickerProtocol>)arg1 center:(struct CGPoint)arg2 thumbnail:(UIImage *)arg3 isFromRecents:(_Bool)arg4 createdCustomSticker:(_Bool)arg5 contentView:(SCPreviewStickerViewContentView *)arg6;
- (void)setAnimatedStickersAnimate:(_Bool)arg1;
- (void)populateSendParameters:(NSMutableDictionary *)arg1;
- (void)updateWithSnapCommonLoggingParameters:(SCSnapCommonLoggingParameters *)arg1;
- (void)addQuickStickerWithId:(NSString *)arg1 image:(SCQuickStickerImage *)arg2 center:(struct CGPoint)arg3;
@end

