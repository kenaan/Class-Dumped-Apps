//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEOAuthItem, AWEOAuthManageViewController, AWEProgressLoadingView, NSString, UITableView;

@interface AWEOAuthManageDetailViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    AWEOAuthItem *_model;
    AWEOAuthManageViewController *_parent;
    AWEProgressLoadingView *_progressView;
    UITableView *_tableView;
}

@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWEProgressLoadingView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak AWEOAuthManageViewController *parent; // @synthesize parent=_parent;
@property(copy, nonatomic) AWEOAuthItem *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)showLoadingViewWithTitle:(id)arg1;
- (void)hideLoadingView;
- (void)unlink;
- (void)unlinkTapped:(id)arg1;
- (void)backBtnClick:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

