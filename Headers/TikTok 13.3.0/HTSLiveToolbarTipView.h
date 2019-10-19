//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "HTSLiveToolbarTip-Protocol.h"

@class UIImageView, UILabel;
@protocol HTSLiveViewHierarchyProvider;

@interface HTSLiveToolbarTipView : UIView <HTSLiveToolbarTip>
{
    CDUnknownBlockType _tipHasTapped;
    UIView *_contentView;
    UILabel *_tipLabel;
    UIImageView *_tipArrow;
    UIImageView *_backgroundImageView;
    id <HTSLiveViewHierarchyProvider> _viewProvider;
}

@property(retain, nonatomic) id <HTSLiveViewHierarchyProvider> viewProvider; // @synthesize viewProvider=_viewProvider;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIImageView *tipArrow; // @synthesize tipArrow=_tipArrow;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(copy, nonatomic) CDUnknownBlockType tipHasTapped; // @synthesize tipHasTapped=_tipHasTapped;
- (void).cxx_destruct;
- (void)showView:(id)arg1 inView:(id)arg2 atTopOf:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showTip:(id)arg1 inView:(id)arg2 atBottomOf:(id)arg3;
- (void)showTip:(id)arg1 inView:(id)arg2 atTopOf:(id)arg3;
- (void)showTip:(id)arg1 inView:(id)arg2;
- (void)showTip:(id)arg1 withTipColorString:(id)arg2 inView:(id)arg3 atTopOf:(id)arg4;
- (void)hasTouched:(id)arg1;
- (void)hide;
- (void)setupViews;
- (id)init;

@end

