//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface HTSLiveAmazingBackgroundView : UIView
{
    _Bool _hasCorner;
    unsigned long long _corner;
    struct CGSize _cornerRadii;
}

+ (Class)layerClass;
@property(nonatomic) _Bool hasCorner; // @synthesize hasCorner=_hasCorner;
@property(nonatomic) struct CGSize cornerRadii; // @synthesize cornerRadii=_cornerRadii;
@property(nonatomic) unsigned long long corner; // @synthesize corner=_corner;
- (void)layoutSubviews;
- (void)applyCorner:(unsigned long long)arg1 radii:(struct CGSize)arg2;
- (id)gradientLayer;

@end

