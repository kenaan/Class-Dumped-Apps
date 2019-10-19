//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GADONativeAdImage, NSArray, NSDecimalNumber, NSDictionary, NSString, UIView, UIViewController;

@protocol GADMediatedUnifiedNativeAd <NSObject>
@property(readonly, copy, nonatomic) NSDictionary *extraAssets;
@property(readonly, copy, nonatomic) NSString *advertiser;
@property(readonly, copy, nonatomic) NSString *price;
@property(readonly, copy, nonatomic) NSString *store;
@property(readonly, copy, nonatomic) NSDecimalNumber *starRating;
@property(readonly, copy, nonatomic) NSString *callToAction;
@property(readonly, nonatomic) GADONativeAdImage *icon;
@property(readonly, copy, nonatomic) NSString *body;
@property(readonly, nonatomic) NSArray *images;
@property(readonly, copy, nonatomic) NSString *headline;

@optional
@property(readonly, nonatomic) double mediaContentAspectRatio;
@property(readonly, nonatomic) _Bool hasVideoContent;
@property(readonly, nonatomic) UIView *mediaView;
@property(readonly, nonatomic) UIView *adChoicesView;
- (void)didUntrackView:(UIView *)arg1;
- (void)didRecordClickOnAssetWithName:(NSString *)arg1 view:(UIView *)arg2 viewController:(UIViewController *)arg3;
- (void)didRecordImpression;
- (void)didRenderInView:(UIView *)arg1 clickableAssetViews:(NSDictionary *)arg2 nonclickableAssetViews:(NSDictionary *)arg3 viewController:(UIViewController *)arg4;
@end

