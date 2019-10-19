//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSArray;

@interface AWECircledButton : UIButton
{
    _Bool _isHideHighlightImage;
    NSArray *_circleLayers;
    NSArray *_scales;
}

@property(retain, nonatomic) NSArray *scales; // @synthesize scales=_scales;
@property(nonatomic) _Bool isHideHighlightImage; // @synthesize isHideHighlightImage=_isHideHighlightImage;
@property(retain, nonatomic) NSArray *circleLayers; // @synthesize circleLayers=_circleLayers;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1;
- (void)startAnimation;
- (void)didMoveToWindow;
- (id)initWithCircleImages:(id)arg1;
- (id)initWithCircleImages:(id)arg1 animationScales:(id)arg2;

@end

