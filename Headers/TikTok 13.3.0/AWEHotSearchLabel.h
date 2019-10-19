//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface AWEHotSearchLabel : UIView
{
    UIView *_innerContainer;
    UILabel *_label;
}

+ (_Bool)accessInstanceVariablesDirectly;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *innerContainer; // @synthesize innerContainer=_innerContainer;
- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *marqueeLabel;
- (struct CGSize)evaluateMarqueeLabelContentSize;
- (void)stopAnimation;
- (void)startAnimation;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)appBecomeActive:(id)arg1;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

