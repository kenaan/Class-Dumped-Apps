//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UITableView;

@interface AWEBottomTransparentTableView : UIView
{
    _Bool _showBottomMask;
    UITableView *_tableView;
    double _bottomMaskHeight;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(nonatomic) double bottomMaskHeight; // @synthesize bottomMaskHeight=_bottomMaskHeight;
@property(nonatomic) _Bool showBottomMask; // @synthesize showBottomMask=_showBottomMask;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
