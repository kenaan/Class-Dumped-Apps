//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class CJBaseNavigationBarView;

@interface CJPayBaseViewController : UIViewController
{
    CJBaseNavigationBarView *_naviBarView;
}

@property(retain, nonatomic) CJBaseNavigationBarView *naviBarView; // @synthesize naviBarView=_naviBarView;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (unsigned long long)supportedInterfaceOrientations;
- (void)onBackAction;
- (void)hideNaviBarBottomLine;
- (void)setNavTitle:(id)arg1;
- (double)navigationHeight;
- (void)viewDidLoad;

@end

