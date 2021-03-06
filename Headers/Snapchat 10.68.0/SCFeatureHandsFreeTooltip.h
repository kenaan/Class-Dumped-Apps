//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UILabel;
@protocol SCFeatureHandsFreeTooltipDelegate;

@interface SCFeatureHandsFreeTooltip : NSObject
{
    id <SCFeatureHandsFreeTooltipDelegate> _delegate;
    _Bool _tooltipIsInHoverOverLockState;
    UILabel *_tooltipLabelStartRecording;
    UILabel *_tooltipLabelHoverOverLock;
}

@property(nonatomic) _Bool tooltipIsInHoverOverLockState; // @synthesize tooltipIsInHoverOverLockState=_tooltipIsInHoverOverLockState;
@property(retain, nonatomic) UILabel *tooltipLabelHoverOverLock; // @synthesize tooltipLabelHoverOverLock=_tooltipLabelHoverOverLock;
@property(retain, nonatomic) UILabel *tooltipLabelStartRecording; // @synthesize tooltipLabelStartRecording=_tooltipLabelStartRecording;
- (void).cxx_destruct;
- (void)_updateTooltipLabel:(id)arg1 withText:(id)arg2;
- (id)_tooltipLabelWithText:(id)arg1;
- (void)layoutTooltips;
- (void)layoutTooltipsWithHandsFreeViewState:(unsigned long long)arg1;
- (void)setTooltipIsInHoverOverLockState:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setToolTipVisibilityWithStartRecordingAlpha:(double)arg1 hoverOverLockAlpha:(double)arg2 animated:(_Bool)arg3;
- (id)initWithHandsFreeTooltipDelegate:(id)arg1;

@end

