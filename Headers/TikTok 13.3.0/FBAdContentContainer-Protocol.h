//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBAdDataModel, NSDictionary, NSObject, NSString, UIView;
@protocol FBAdContentContainerDelegate, FBAdViewNavigationPolicy;

@protocol FBAdContentContainer <NSObject>
@property(readonly, nonatomic) _Bool logImpression;
@property(readonly, nonatomic, getter=getView) UIView *view;
@property(readonly, nonatomic) _Bool overrideMarkupImpressionCheck;
@property(readonly, nonatomic, getter=isMarkupImpressionEventReceived) _Bool markupImpressionEventReceived;
@property(nonatomic) double firstImpressionTime;
@property(readonly, nonatomic, getter=isTerminated) _Bool terminated;
@property(nonatomic, getter=hasLoggedImpression) _Bool loggedImpression;
@property(nonatomic) double lastTouchPressure;
@property(nonatomic) double lastTouchRadius;
@property(nonatomic) double lastTouchCurrentTimestamp;
@property(nonatomic) double lastTouchStartTimestamp;
@property(nonatomic) struct CGPoint lastTouchCurrentLocation;
@property(nonatomic) struct CGPoint lastTouchStartLocation;
@property(nonatomic) struct CGSize maximumSize;
@property(nonatomic) struct CGSize minimumSize;
@property(retain, nonatomic) FBAdDataModel *offsiteAd;
@property(nonatomic) struct FBAdSize adSizeType;
@property(nonatomic) struct CGSize actualAdSize;
@property(nonatomic) __weak NSObject<FBAdViewNavigationPolicy> *parent;
@property(nonatomic) __weak NSObject<FBAdContentContainerDelegate> *delegate;
- (void)initializeJavascriptAdControl;
- (_Bool)loadAdMarkup:(NSString *)arg1 activationCommand:(NSString *)arg2;
- (_Bool)logClickWithExtraData:(NSDictionary *)arg1;
- (_Bool)loadAdData:(FBAdDataModel *)arg1 minViewability:(int)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithAdView:(NSObject<FBAdViewNavigationPolicy> *)arg1 actualAdSize:(struct CGSize)arg2 adSizeType:(struct FBAdSize)arg3 overrideMarkupImpressionCheck:(_Bool)arg4;
@end

