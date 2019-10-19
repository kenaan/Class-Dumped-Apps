//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADGestureRecognizer, GADNDebugGestureMonitor, GADNInternalNativeAd, GADNObserverCollection, GADNTouchGestureRecognizer, GADNViewVisibilityMonitor, NSString, UITapGestureRecognizer, UIView;
@protocol GADNMediaContentDisplaying;

@interface GADNNativeAdViewMonitor : NSObject <UIGestureRecognizerDelegate>
{
    GADNObserverCollection *_observers;
    GADNInternalNativeAd *_internalNativeAd;
    UIView *_trackedView;
    UITapGestureRecognizer *_singleTap;
    GADGestureRecognizer *_touchGestureRecognizer;
    GADNTouchGestureRecognizer *_touchEventGestureRecognizer;
    GADNDebugGestureMonitor *_debugGestureMonitor;
    GADNViewVisibilityMonitor *_viewVisibilityMonitor;
    _Bool _handlesClicks;
    id <GADNMediaContentDisplaying> _mediaContent;
    _Bool _hasMediaContentObserver;
    NSString *_adChoicesAssetName;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleMediaViewClick:(id)arg1;
- (void)handleTap:(id)arg1;
- (void)handleCustomClickGesture:(id)arg1;
- (void)handleUntrackedView:(id)arg1;
- (void)handleTrackedView:(id)arg1;
- (id)initWithInternalNativeAd:(id)arg1 handlesClicks:(_Bool)arg2 mediaContent:(id)arg3 viewVisibilityMonitor:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

