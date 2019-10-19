//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWEMNotificationViewControllerProtocal-Protocol.h"
#import "AWEUserMessage-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWEMGroupFilterView, AWEMHotLiveNotificationTableViewCell, AWEUITextLoadingView, NSArray, NSMutableArray, NSString, UIButton, UILabel, UITableView;

@interface AWEMNotificationViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEUserMessage, AWEMNotificationViewControllerProtocal>
{
    _Bool _isRefreshing;
    _Bool _enableTrackLiveShow;
    _Bool _enableTrackHotLiveShow;
    AWEMGroupFilterView *_filterView;
    UILabel *_titleLabel;
    UIButton *_contactBtn;
    UITableView *_tableView;
    AWEUITextLoadingView *_loadingView;
    AWEMHotLiveNotificationTableViewCell *_liveCell;
    double _cellButtonWidth;
    NSArray *_groupModels;
    NSArray *_dataControllers;
    NSMutableArray *_dataSource;
    NSArray *_sectionTitles;
    long long _currentIndex;
    long long _unreadCheckProfileCount;
    long long _unreadVoteCount;
    long long _unreadCommentCount;
    long long _unreadAtMeCount;
    long long _unreadLikeMeCount;
    long long _unreadNewFansCount;
    long long _unreadApproveFollowRequestCount;
    long long _unreadDuetCount;
    long long _createAwemeCount;
    long long _systemCount;
    long long _assistantCount;
    long long _liveCount;
}

@property(nonatomic) long long liveCount; // @synthesize liveCount=_liveCount;
@property(nonatomic) long long assistantCount; // @synthesize assistantCount=_assistantCount;
@property(nonatomic) long long systemCount; // @synthesize systemCount=_systemCount;
@property(nonatomic) long long createAwemeCount; // @synthesize createAwemeCount=_createAwemeCount;
@property(nonatomic) long long unreadDuetCount; // @synthesize unreadDuetCount=_unreadDuetCount;
@property(nonatomic) long long unreadApproveFollowRequestCount; // @synthesize unreadApproveFollowRequestCount=_unreadApproveFollowRequestCount;
@property(nonatomic) long long unreadNewFansCount; // @synthesize unreadNewFansCount=_unreadNewFansCount;
@property(nonatomic) long long unreadLikeMeCount; // @synthesize unreadLikeMeCount=_unreadLikeMeCount;
@property(nonatomic) long long unreadAtMeCount; // @synthesize unreadAtMeCount=_unreadAtMeCount;
@property(nonatomic) long long unreadCommentCount; // @synthesize unreadCommentCount=_unreadCommentCount;
@property(nonatomic) long long unreadVoteCount; // @synthesize unreadVoteCount=_unreadVoteCount;
@property(nonatomic) long long unreadCheckProfileCount; // @synthesize unreadCheckProfileCount=_unreadCheckProfileCount;
@property(nonatomic) _Bool enableTrackHotLiveShow; // @synthesize enableTrackHotLiveShow=_enableTrackHotLiveShow;
@property(nonatomic) _Bool enableTrackLiveShow; // @synthesize enableTrackLiveShow=_enableTrackLiveShow;
@property(nonatomic) _Bool isRefreshing; // @synthesize isRefreshing=_isRefreshing;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) NSArray *sectionTitles; // @synthesize sectionTitles=_sectionTitles;
@property(retain, nonatomic) NSMutableArray *dataSource; // @synthesize dataSource=_dataSource;
@property(retain, nonatomic) NSArray *dataControllers; // @synthesize dataControllers=_dataControllers;
@property(retain, nonatomic) NSArray *groupModels; // @synthesize groupModels=_groupModels;
@property(nonatomic) double cellButtonWidth; // @synthesize cellButtonWidth=_cellButtonWidth;
@property(retain, nonatomic) AWEMHotLiveNotificationTableViewCell *liveCell; // @synthesize liveCell=_liveCell;
@property(retain, nonatomic) AWEUITextLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIButton *contactBtn; // @synthesize contactBtn=_contactBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) AWEMGroupFilterView *filterView; // @synthesize filterView=_filterView;
- (void).cxx_destruct;
- (void)p_trackerInnerMessageWithAction:(id)arg1 indexPath:(id)arg2;
- (void)trackDataCellDidSelect:(id)arg1 indexPath:(id)arg2;
- (void)trackDataCellWillShow:(id)arg1 indexPath:(id)arg2;
- (id)accountTypeOfModel:(id)arg1;
- (void)tagModels:(id)arg1 timeline:(id)arg2;
- (id)tabNameForIndex:(long long)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)dataController;
- (id)modelForRowAtIndexPath:(id)arg1;
- (void)contactBtnClicked:(id)arg1;
- (struct UIEdgeInsets)aweui_emptyPageEdgeInsets;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)arg1;
- (id)aweui_emptyPageConfigForState:(unsigned long long)arg1;
- (void)updateFollowRequestCount:(id)arg1;
- (void)didFinishLogout;
- (void)p_setupGroups;
- (void)markReadNotification;
- (void)refreshFilterUnreadState;
- (void)resetNotificationIndex;
- (void)refreshNotificationData;
- (void)updateUnreadCount;
- (double)calculateButtonWidth;
- (void)onTabBarDidChangeNotification:(id)arg1;
- (void)languageChangedNotification:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)p_addObservers;
- (void)buildNotificationIndex;
- (void)cacheUnreadCount;
- (void)reloadTableView;
- (void)endRefreshing;
- (void)loadMoreData;
- (void)refreshHotLiveData;
- (void)setEmptyStateWithDataSource:(id)arg1 error:(id)arg2;
- (void)refreshData;
- (void)p_setupUI;
- (void)p_registerKVOObserver;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

