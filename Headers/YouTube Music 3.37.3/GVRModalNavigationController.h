//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class UIWindow;

@interface GVRModalNavigationController : UINavigationController
{
    UIWindow *_modalWindow;
    UIWindow *_displacedKeyWindow;
}

+ (id)modalInstance;
- (void).cxx_destruct;
- (void)dismiss;
- (void)present;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (id)init;

@end

