//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AWENavView, NSArray, NSString, UITableView;

@interface AWESelectPhoneCountryCodeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _isMatchMusicallyColors;
    AWENavView *_navView;
    UITableView *_tableView;
    NSArray *_titles;
    NSArray *_organizedData;
    CDUnknownBlockType _completionBlock;
}

@property(nonatomic) _Bool isMatchMusicallyColors; // @synthesize isMatchMusicallyColors=_isMatchMusicallyColors;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(copy, nonatomic) NSArray *organizedData; // @synthesize organizedData=_organizedData;
@property(copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) AWENavView *navView; // @synthesize navView=_navView;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)setupCountryList;
- (void)viewDidLoad;
- (id)initWithCompletion:(CDUnknownBlockType)arg1 matchMusicallyColors:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

