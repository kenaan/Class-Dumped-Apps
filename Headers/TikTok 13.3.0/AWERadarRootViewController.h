//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BTDRouterViewControllerProtocol-Protocol.h"

@class AWERadarUserListViewController, AWERadarViewManager, AWERadarVisualViewController, NSString;

@interface AWERadarRootViewController : UIViewController <BTDRouterViewControllerProtocol>
{
    AWERadarVisualViewController *_visualViewController;
    AWERadarUserListViewController *_userListController;
    AWERadarViewManager *_viewManager;
    NSString *_enterFrom;
    NSString *_referString;
}

+ (void)__awe__codeRunnerRun_38;
@property(copy, nonatomic) NSString *referString; // @synthesize referString=_referString;
@property(copy, nonatomic) NSString *enterFrom; // @synthesize enterFrom=_enterFrom;
@property(retain, nonatomic) AWERadarViewManager *viewManager; // @synthesize viewManager=_viewManager;
@property(retain, nonatomic) AWERadarUserListViewController *userListController; // @synthesize userListController=_userListController;
@property(retain, nonatomic) AWERadarVisualViewController *visualViewController; // @synthesize visualViewController=_visualViewController;
- (void).cxx_destruct;
- (void)updateUserList:(id)arg1 isNetworkError:(_Bool)arg2;
- (void)startHeartBreak;
- (void)setupUI;
- (void)addObservers;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewDidLoad;
- (_Bool)configWithRouterParamDict:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
