//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWECommentSearchManagerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWECommentSearchManager, NSCache, NSString, UIImageView, UILabel, UITableView, UIView;
@protocol AWECommentSearchViewControllerDelegate;

@interface AWECommentSearchViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWECommentSearchManagerDelegate>
{
    _Bool _displayingSearchResult;
    id <AWECommentSearchViewControllerDelegate> _delegate;
    UIView *_headerView;
    UITableView *_tableView;
    UIView *_errorView;
    UILabel *_errorLabel;
    UIView *_defaultFooterView;
    UIView *_loadingFooterView;
    UIImageView *_loadingImageView;
    UILabel *_loadingLabel;
    UIView *_errorFooterView;
    UILabel *_errorFooterLabel;
    NSCache *_searchManagers;
    AWECommentSearchManager *_defaultSearchManager;
    AWECommentSearchManager *_currentSearchManager;
}

@property(nonatomic) _Bool displayingSearchResult; // @synthesize displayingSearchResult=_displayingSearchResult;
@property(retain, nonatomic) AWECommentSearchManager *currentSearchManager; // @synthesize currentSearchManager=_currentSearchManager;
@property(retain, nonatomic) AWECommentSearchManager *defaultSearchManager; // @synthesize defaultSearchManager=_defaultSearchManager;
@property(retain, nonatomic) NSCache *searchManagers; // @synthesize searchManagers=_searchManagers;
@property(retain, nonatomic) UILabel *errorFooterLabel; // @synthesize errorFooterLabel=_errorFooterLabel;
@property(retain, nonatomic) UIView *errorFooterView; // @synthesize errorFooterView=_errorFooterView;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) UIView *loadingFooterView; // @synthesize loadingFooterView=_loadingFooterView;
@property(retain, nonatomic) UIView *defaultFooterView; // @synthesize defaultFooterView=_defaultFooterView;
@property(retain, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(retain, nonatomic) UIView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak id <AWECommentSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGRect)p_tableFooterViewBounds;
- (void)p_dismissLoading;
- (void)p_showLoading;
- (void)p_dismissErrorView;
- (void)p_showError;
- (id)p_localSearchInDefaultListWithKeyword:(id)arg1;
- (void)p_loadMore;
- (void)p_refresh;
- (void)onTapErrorFooterView;
- (void)onTapErrorView;
- (id)defaultList;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)clearSearchCache;
- (void)searchWithKeyword:(id)arg1;
- (void)loadDefaultList;
- (void)didReceiveMemoryWarning;
- (void)p_setupUI;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

