//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface WAAnimatedGearsView : UIView
{
    UIImageView *_gearsBase;
    UIImageView *_border;
    UIImageView *_spinner;
    _Bool _animating;
}

+ (struct CGSize)baseSize;
@property(readonly, nonatomic, getter=isAnimating) _Bool animating; // @synthesize animating=_animating;
- (void).cxx_destruct;
- (void)stopAnimating;
- (void)startAnimating;
- (void)refreshAnimation;
- (void)didBecomeActive:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
