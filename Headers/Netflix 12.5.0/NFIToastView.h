//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NFIToastViewModel, UIImageView, UILabel;

@interface NFIToastView : UIView
{
    UIImageView *_bgImageView;
    UILabel *_label;
    NFIToastViewModel *_model;
    UIImageView *_iconImageView;
}

+ (Class)classForType:(long long)arg1;
+ (id)initWithModel:(id)arg1;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(readonly, nonatomic) NFIToastViewModel *model; // @synthesize model=_model;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
- (void).cxx_destruct;
- (void)animateOut;
- (void)animateOutWithAnimations:(id)arg1;
- (void)animateInWithAnimations:(id)arg1;
- (void)setText:(id)arg1;
- (void)configureWithViewModel:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end

