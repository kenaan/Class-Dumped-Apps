//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "YTReusableView-Protocol.h"

@class NSString, YTButton, YTIThumbnailDetails, YTImageView;

@protocol YTPromotedNativeAdView <YTReusableView, UIGestureRecognizerDelegate>
+ (struct CGSize)viewSizeForEntry:(id)arg1 size:(struct CGSize)arg2 active:(_Bool)arg3;
@property(copy, nonatomic) NSString *accessibilityLabel;
@property(copy, nonatomic) NSString *accessibilityIdentifier;
@property(retain, nonatomic) YTImageView *thumbnailView;
@property(retain, nonatomic) YTButton *ctaButton;
@property(nonatomic) _Bool active;
- (void)setPromotedRenderer:(id)arg1;
- (double)requestedViewPadding;
- (int)behaviorForClickLocation:(struct CGPoint)arg1;
- (int)codeForClickLocation:(struct CGPoint)arg1;
- (YTIThumbnailDetails *)thumbnail;

@optional
@property(retain, nonatomic) YTImageView *secondThumbnailView;
- (void)setVisibilityForLateAnimationWithActive:(_Bool)arg1;
- (void)setVisibilityForEarlyAnimationWithActive:(_Bool)arg1;
- (YTIThumbnailDetails *)secondThumbnail;
@end

