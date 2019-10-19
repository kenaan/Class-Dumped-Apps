//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaToolTipsView.h"

#import "SCOperaLayerView-Protocol.h"

@class NSArray, NSString, UILabel, UIView;

@interface SCOperaGestureToolTipsLayerView : SCOperaToolTipsView <SCOperaLayerView>
{
    UIView *_containerView;
    UILabel *_title;
    NSArray *_gestureViews;
}

+ (id)layerViewWithFrame:(struct CGRect)arg1;
- (void).cxx_destruct;
- (_Bool)isAccessibilityElement;
- (void)layoutSubviews;
- (id)_captionWithText:(id)arg1 fontSize:(double)arg2;
- (id)_gestureImageForGestureType:(long long)arg1;
- (id)_subviewForGesture:(id)arg1;
- (void)setupViewForLayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
