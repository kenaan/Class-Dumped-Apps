//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface AWEAlertViewController : UIViewController
{
    _Bool _currentStatusBarHidden;
    long long _currentStatusBarStyle;
    CDUnknownBlockType _closeBlock;
}

@property(copy, nonatomic) CDUnknownBlockType closeBlock; // @synthesize closeBlock=_closeBlock;
@property(nonatomic) _Bool currentStatusBarHidden; // @synthesize currentStatusBarHidden=_currentStatusBarHidden;
@property(nonatomic) long long currentStatusBarStyle; // @synthesize currentStatusBarStyle=_currentStatusBarStyle;
- (void).cxx_destruct;
- (void)show;
- (_Bool)prefersStatusBarHidden;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end
