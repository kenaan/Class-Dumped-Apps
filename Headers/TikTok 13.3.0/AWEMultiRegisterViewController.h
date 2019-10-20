//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSDictionary;

@interface AWEMultiRegisterViewController : UIViewController
{
    long long _selectIndex;
    NSArray *_viewControllers;
    NSDictionary *_trackerInfoDict;
}

@property(copy, nonatomic) NSDictionary *trackerInfoDict; // @synthesize trackerInfoDict=_trackerInfoDict;
@property(retain, nonatomic) NSArray *viewControllers; // @synthesize viewControllers=_viewControllers;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void).cxx_destruct;
- (void)selectViewControllerAtIndex:(unsigned long long)arg1 enableSwitchTracker:(_Bool)arg2;
- (void)viewDidLoad;
- (id)init;

@end
