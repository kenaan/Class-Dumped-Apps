//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class MXScrollView, UIView;

@interface MXScrollViewController : UIViewController
{
    MXScrollView *_scrollView;
    UIViewController *_headerViewController;
    UIViewController *_childViewController;
    UIView *_headerView;
    double _headerHeight;
    double _headerMinimumHeight;
}

@property(nonatomic) double headerMinimumHeight; // @synthesize headerMinimumHeight=_headerMinimumHeight;
@property(nonatomic) double headerHeight; // @synthesize headerHeight=_headerHeight;
@property(nonatomic) __weak UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIViewController *childViewController; // @synthesize childViewController=_childViewController;
@property(retain, nonatomic) UIViewController *headerViewController; // @synthesize headerViewController=_headerViewController;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) MXScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)layoutChildViewController;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;

@end

