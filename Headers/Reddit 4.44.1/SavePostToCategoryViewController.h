//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseTableViewController.h"

@class BaseButton, NSArray, Post, RedditService, SavedCategoryPresenter, SavedPostPresenter;

@interface SavePostToCategoryViewController : BaseTableViewController
{
    _Bool _includeAddCategory;
    Post *_post;
    NSArray *_categoryNames;
    BaseButton *_saveButton;
    RedditService *_service;
    SavedPostPresenter *_presenter;
    SavedCategoryPresenter *_savedCategoryPresenter;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _cancel;
}

@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(retain, nonatomic) SavedCategoryPresenter *savedCategoryPresenter; // @synthesize savedCategoryPresenter=_savedCategoryPresenter;
@property(retain, nonatomic) SavedPostPresenter *presenter; // @synthesize presenter=_presenter;
@property(retain, nonatomic) RedditService *service; // @synthesize service=_service;
@property(retain, nonatomic) BaseButton *saveButton; // @synthesize saveButton=_saveButton;
@property(nonatomic) _Bool includeAddCategory; // @synthesize includeAddCategory=_includeAddCategory;
@property(retain, nonatomic) NSArray *categoryNames; // @synthesize categoryNames=_categoryNames;
@property(retain, nonatomic) Post *post; // @synthesize post=_post;
- (void).cxx_destruct;
- (void)dismissFromCurrentContext;
- (void)savePostToCategoryWithName:(id)arg1;
- (void)didSelectAddNewCategory;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didTapSave:(id)arg1;
- (void)didTapClose:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithService:(id)arg1 presenter:(id)arg2 savedCategoryPresenter:(id)arg3 post:(id)arg4 includeAddCategory:(_Bool)arg5 cancel:(CDUnknownBlockType)arg6 completion:(CDUnknownBlockType)arg7;
- (id)initWithService:(id)arg1 post:(id)arg2 includeAddCategory:(_Bool)arg3 cancel:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;

@end

