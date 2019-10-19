//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEUserMessage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWESearchAllManager, AWESearchSugManager, NSString, UITableView;

@interface AWESearchSugViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage>
{
    CDUnknownBlockType _sugTapBlock;
    UITableView *_tableView;
    AWESearchSugManager *_manager;
    AWESearchAllManager *_followManager;
    unsigned long long _currentTabType;
}

@property(nonatomic) unsigned long long currentTabType; // @synthesize currentTabType=_currentTabType;
@property(retain, nonatomic) AWESearchAllManager *followManager; // @synthesize followManager=_followManager;
@property(retain, nonatomic) AWESearchSugManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) CDUnknownBlockType sugTapBlock; // @synthesize sugTapBlock=_sugTapBlock;
- (void).cxx_destruct;
- (void)didFinishUnFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)didFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)updateFinishFollowUser:(id)arg1 status:(long long)arg2 error:(id)arg3;
- (void)unfollowUser:(id)arg1 indexPath:(id)arg2;
- (void)followUser:(id)arg1 indexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isOnSearchResult;
- (void)hideSearchSugView;
- (void)fetchSugWithQuery:(id)arg1 tabType:(unsigned long long)arg2;
- (void)configureUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

