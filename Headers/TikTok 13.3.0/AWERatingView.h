//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWERatingStartViewDelegate-Protocol.h"

@class AWERatingViewRenderConfig, NSArray, NSString;
@protocol AWERatingViewDelegate;

@interface AWERatingView : UIView <AWERatingStartViewDelegate>
{
    AWERatingViewRenderConfig *_config;
    double _rate;
    CDUnknownBlockType _onRateChange;
    id <AWERatingViewDelegate> _delegate;
    NSArray *_starViews;
    UIView *_containerView;
}

@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) NSArray *starViews; // @synthesize starViews=_starViews;
@property(nonatomic) __weak id <AWERatingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType onRateChange; // @synthesize onRateChange=_onRateChange;
@property(readonly, nonatomic) double rate; // @synthesize rate=_rate;
@property(retain, nonatomic) AWERatingViewRenderConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)onStarViewTaped:(id)arg1 tapPercentage:(double)arg2;
- (void)updatePosition;
- (id)createStarsWithConfig:(id)arg1 rate:(double)arg2;
- (void)updateWithRate:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1 config:(id)arg2 rate:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

