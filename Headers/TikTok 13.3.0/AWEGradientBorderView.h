//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;

@interface AWEGradientBorderView : UIView
{
    double _borderWidth;
    NSArray *_colors;
}

@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)init;

@end

